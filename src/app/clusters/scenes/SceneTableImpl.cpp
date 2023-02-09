/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        https://urldefense.com/v3/__http://www.apache.org/licenses/LICENSE-2.0__;!!N30Cs7Jr!UgbMbEQ59BIK-1Xslc7QXYm0lQBh92qA3ElecRe1CF_9YhXxbwPOZa6j4plru7B7kCJ7bKQgHxgQrket3-Dnk268sIdA7Qb8$
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#include <app/clusters/scenes/SceneTableImpl.h>
#include <lib/support/DefaultStorageKeyAllocator.h>
#include <stdlib.h>

namespace chip {
namespace scenes {

using SceneTableEntry = DefaultSceneTableImpl::SceneTableEntry;
using SceneStorageId  = DefaultSceneTableImpl::SceneStorageId;
using SceneData       = DefaultSceneTableImpl::SceneData;

struct FabricHavingSceneList : public CommonPersistentData::FabricList
{
    CHIP_ERROR UpdateKey(StorageKeyName & key) override
    {
        key = DefaultStorageKeyAllocator::SceneFabricList();
        return CHIP_NO_ERROR;
    }
};

static constexpr size_t kPersistentBufferMax = 128;

struct SceneTableData : public SceneTableEntry, PersistentData<kPersistentBufferMax>
{
    FabricIndex fabric_index = kUndefinedFabricIndex;
    SceneIndex index         = 0;
    bool first               = true;

    SceneTableData() : SceneTableEntry() {}
    SceneTableData(FabricIndex fabric) : fabric_index(fabric) {}
    SceneTableData(FabricIndex fabric, SceneIndex idx) : fabric_index(fabric), index(idx) {}
    SceneTableData(FabricIndex fabric, SceneStorageId storageId) : SceneTableEntry(storageId), fabric_index(fabric) {}
    SceneTableData(FabricIndex fabric, SceneStorageId storageId, SceneData data) :
        SceneTableEntry(storageId, data), fabric_index(fabric)
    {}

    CHIP_ERROR UpdateKey(StorageKeyName & key) override
    {
        VerifyOrReturnError(kUndefinedFabricIndex != fabric_index, CHIP_ERROR_INVALID_FABRIC_INDEX);
        key = DefaultStorageKeyAllocator::FabricSceneKey(fabric_index, index);
        return CHIP_NO_ERROR;
    }

    void Clear() override { storageData.Clear(); }

    CHIP_ERROR Serialize(TLV::TLVWriter & writer) const override
    {
        TLV::TLVType container;
        ReturnErrorOnFailure(writer.StartContainer(TLV::AnonymousTag(), TLV::kTLVType_Structure, container));

        ReturnErrorOnFailure(storageId.Serialize(writer));
        ReturnErrorOnFailure(storageData.Serialize(writer));

        return writer.EndContainer(container);
    }

    CHIP_ERROR Deserialize(TLV::TLVReader & reader) override
    {
        ReturnErrorOnFailure(reader.Next(TLV::AnonymousTag()));
        VerifyOrReturnError(TLV::kTLVType_Structure == reader.GetType(), CHIP_ERROR_INTERNAL);

        TLV::TLVType container;
        ReturnErrorOnFailure(reader.EnterContainer(container));

        ReturnErrorOnFailure(storageId.Deserialize(reader));
        ReturnErrorOnFailure(storageData.Deserialize(reader));

        return reader.ExitContainer(container);
    }
};

/**
 * @brief Linked list of all scenes in a fabric, stored in persistent memory
 *
 * FabricSceneData is an access to a linked list of scenes
 */
struct FabricSceneData : public PersistentData<kPersistentBufferMax>
{
    static constexpr TLV::Tag TagSceneCount() { return TLV::ContextTag(1); }
    static constexpr TLV::Tag TagSceneMap() { return TLV::ContextTag(2); }
    static constexpr TLV::Tag TagNext() { return TLV::ContextTag(3); }

    FabricIndex fabric_index = kUndefinedFabricIndex;
    uint8_t scene_count      = 0;
    SceneStorageId scene_map[kMaxScenePerFabric];
    FabricIndex next = kUndefinedFabricIndex;

    FabricSceneData() = default;
    FabricSceneData(FabricIndex fabric) : fabric_index(fabric) {}

    CHIP_ERROR UpdateKey(StorageKeyName & key) override
    {
        VerifyOrReturnError(kUndefinedFabricIndex != fabric_index, CHIP_ERROR_INVALID_FABRIC_INDEX);
        key = DefaultStorageKeyAllocator::FabricScenesKey(fabric_index);
        return CHIP_NO_ERROR;
    }

    void Clear() override
    {
        scene_count = 0;
        for (uint8_t i = 0; i < kMaxScenePerFabric; i++)
        {
            scene_map[i].Clear();
        }
        next = kUndefinedFabricIndex;
    }

    CHIP_ERROR Serialize(TLV::TLVWriter & writer) const override
    {
        TLV::TLVType container;
        ReturnErrorOnFailure(writer.StartContainer(TLV::AnonymousTag(), TLV::kTLVType_Structure, container));

        ReturnErrorOnFailure(writer.Put(TagSceneCount(), static_cast<uint16_t>(scene_count)));
        for (uint8_t i = 0; i < kMaxScenePerFabric; i++)
        {
            ReturnErrorOnFailure(scene_map[i].Serialize(writer));
        }
        ReturnErrorOnFailure(writer.Put(TagNext(), static_cast<uint16_t>(next)));

        return writer.EndContainer(container);
    }

    CHIP_ERROR Deserialize(TLV::TLVReader & reader) override
    {
        ReturnErrorOnFailure(reader.Next(TLV::AnonymousTag()));
        VerifyOrReturnError(TLV::kTLVType_Structure == reader.GetType(), CHIP_ERROR_INTERNAL);

        TLV::TLVType container;
        ReturnErrorOnFailure(reader.EnterContainer(container));

        ReturnErrorOnFailure(reader.Next(TagSceneCount()));
        ReturnErrorOnFailure(reader.Get(scene_count));
        for (uint8_t i = 0; i < kMaxScenePerFabric; i++)
        {
            ReturnErrorOnFailure(scene_map[i].Deserialize(reader));
        }
        ReturnErrorOnFailure(reader.Next(TagNext()));
        ReturnErrorOnFailure(reader.Get(next));

        return reader.ExitContainer(container);
    }

    // Register the fabric in the list of fabrics having scenes
    CHIP_ERROR Register(PersistentStorageDelegate * storage)
    {
        FabricHavingSceneList fabric_list;
        CHIP_ERROR err = fabric_list.Load(storage);
        if (CHIP_ERROR_NOT_FOUND == err)
        {
            // New fabric list
            fabric_list.first_entry = fabric_index;
            fabric_list.entry_count = 1;
            return fabric_list.Save(storage);
        }
        ReturnErrorOnFailure(err);

        // Existing fabric list, search for existing entry
        FabricSceneData fabric(fabric_list.first_entry);
        for (size_t i = 0; i < fabric_list.entry_count; i++)
        {
            err = fabric.Load(storage);
            if (CHIP_NO_ERROR != err)
            {
                break;
            }
            if (fabric.fabric_index == this->fabric_index)
            {
                // Fabric already registered
                return CHIP_NO_ERROR;
            }
            fabric.fabric_index = fabric.next;
        }
        // Add this fabric to the fabric list
        this->next              = fabric_list.first_entry;
        fabric_list.first_entry = this->fabric_index;
        fabric_list.entry_count++;
        return fabric_list.Save(storage);
    }

    // Remove the fabric from the fabrics' linked list
    CHIP_ERROR Unregister(PersistentStorageDelegate * storage) const
    {
        FabricHavingSceneList fabric_list;
        CHIP_ERROR err = fabric_list.Load(storage);
        VerifyOrReturnError(CHIP_NO_ERROR == err || CHIP_ERROR_NOT_FOUND == err, err);

        // Existing fabric list, search for existing entry
        FabricSceneData fabric(fabric_list.first_entry);
        FabricSceneData prev;

        for (size_t i = 0; i < fabric_list.entry_count; i++)
        {
            err = fabric.Load(storage);
            if (CHIP_NO_ERROR != err)
            {
                break;
            }
            if (fabric.fabric_index == this->fabric_index)
            {
                // Fabric found
                if (i == 0)
                {
                    // Remove first fabric
                    fabric_list.first_entry = this->next;
                }
                else
                {
                    // Remove intermediate fabric
                    prev.next = this->next;
                    ReturnErrorOnFailure(prev.Save(storage));
                }
                VerifyOrReturnError(fabric_list.entry_count > 0, CHIP_ERROR_INTERNAL);
                fabric_list.entry_count--;
                return fabric_list.Save(storage);
            }
            prev                = fabric;
            fabric.fabric_index = fabric.next;
        }
        // Fabric not in the list
        return CHIP_ERROR_NOT_FOUND;
    }
    /// @brief Finds the index where to insert current scene by going through the whole table and looking if the scene is already in
    /// there and for the first empty index
    /// @param storage Storage delegate in use
    /// @param fabric Fabric in use
    /// @param target_scene Storage Id of scene to store
    /// @return CHIP_NO_ERROR if managed to find a suitable storage location, false otherwise
    CHIP_ERROR Find(SceneStorageId target_scene, SceneIndex & idx)
    {
        SceneIndex firstFreeIdx = kUndefinedSceneIndex; // storage index if scene not found
        uint8_t index           = 0;

        while (index < kMaxScenePerFabric)
        {
            if (scene_map[index] == target_scene)
            {
                idx = index;
                return CHIP_NO_ERROR; // return scene at current index if scene found
            }
            else if (scene_map[index].sceneEndpointId == kInvalidEndpointId && firstFreeIdx == kUndefinedSceneIndex)
            {
                firstFreeIdx = index;
            }
            index++;
        }

        if (firstFreeIdx < kMaxScenePerFabric)
        {
            idx = firstFreeIdx;
            return CHIP_ERROR_NOT_FOUND;
        }

        return CHIP_ERROR_BUFFER_TOO_SMALL;
    }
    CHIP_ERROR Save(PersistentStorageDelegate * storage) override
    {
        ReturnErrorOnFailure(Register(storage));
        return PersistentData::Save(storage);
    }

    CHIP_ERROR Delete(PersistentStorageDelegate * storage) override
    {
        ReturnErrorOnFailure(Unregister(storage));
        return PersistentData::Delete(storage);
    }
    CHIP_ERROR SaveScene(PersistentStorageDelegate * storage, const SceneTableEntry & entry)
    {
        CHIP_ERROR err;
        SceneTableData scene(fabric_index, entry.storageId, entry.storageData);
        // Look for empty storage space

        err = this->Find(entry.storageId, scene.index);

        if (CHIP_NO_ERROR == err)
        {

            return scene.Save(storage);
        }
        else if (CHIP_ERROR_NOT_FOUND == err) // If not found, scene.index should be the first free index
        {
            scene_count++;
            scene_map[scene.index] = scene.storageId;
            ReturnErrorOnFailure(this->Save(storage));

            return scene.Save(storage);
        }

        return CHIP_ERROR_INVALID_LIST_LENGTH;
    }

    CHIP_ERROR RemoveScene(PersistentStorageDelegate * storage, const SceneStorageId & scene_id)
    {
        SceneTableData scene(fabric_index, scene_id);
        // Look for empty storage space

        VerifyOrReturnError(this->Find(scene_id, scene.index) == CHIP_NO_ERROR, CHIP_ERROR_NOT_FOUND);
        ReturnErrorOnFailure(scene.Delete(storage));

        if (scene_count > 0)
        {
            scene_count--;
            scene_map[scene.index].Clear();
            ReturnErrorOnFailure(this->Save(storage));
        }

        return CHIP_NO_ERROR;
    }
};

CHIP_ERROR DefaultSceneTableImpl::Init(PersistentStorageDelegate * storage)
{
    if (storage == nullptr)
    {
        return CHIP_ERROR_INCORRECT_STATE;
    }

    mStorage = storage;
    return CHIP_NO_ERROR;
}

void DefaultSceneTableImpl::Finish()
{
    mSceneEntryIterators.ReleaseAll();
}

CHIP_ERROR DefaultSceneTableImpl::SetSceneTableEntry(FabricIndex fabric_index, const SceneTableEntry & entry)
{
    VerifyOrReturnError(IsInitialized(), CHIP_ERROR_INTERNAL);

    FabricSceneData fabric(fabric_index);

    // Load fabric data (defaults to zero)
    CHIP_ERROR err = fabric.Load(mStorage);
    VerifyOrReturnError(CHIP_NO_ERROR == err || CHIP_ERROR_NOT_FOUND == err, err);

    return fabric.SaveScene(mStorage, entry);
}
CHIP_ERROR DefaultSceneTableImpl::GetSceneTableEntry(FabricIndex fabric_index, SceneStorageId scene_id, SceneTableEntry & entry)
{
    FabricSceneData fabric(fabric_index);
    SceneTableData scene(fabric_index);

    ReturnErrorOnFailure(fabric.Load(mStorage));
    VerifyOrReturnError(fabric.Find(scene_id, scene.index) == CHIP_NO_ERROR, CHIP_ERROR_NOT_FOUND);

    ReturnErrorOnFailure(scene.Load(mStorage));
    entry.storageId   = scene.storageId;
    entry.storageData = scene.storageData;

    return CHIP_NO_ERROR;
}
CHIP_ERROR DefaultSceneTableImpl::RemoveSceneTableEntry(FabricIndex fabric_index, SceneStorageId scene_id)
{
    FabricSceneData fabric(fabric_index);

    ReturnErrorOnFailure(fabric.Load(mStorage));

    return fabric.RemoveScene(mStorage, scene_id);
}

/// @brief This function is meant to provide a way to empty the scene table without knowing any specific scene Id. Outisde of this
/// specific use case, RemoveSceneTableEntry should be used.
/// @param fabric_index Fabric in which the scene belongs
/// @param scened_idx Position in the Scene Table
/// @return CHIP_NO_ERROR if removal was successful, errors if failed to remove the scene or to update the fabric after removing it
CHIP_ERROR DefaultSceneTableImpl::RemoveSceneTableEntryAtPosition(FabricIndex fabric_index, SceneIndex scened_idx)
{
    FabricSceneData fabric(fabric_index);
    SceneTableData scene(fabric_index, scened_idx);

    ReturnErrorOnFailure(scene.Delete(mStorage));

    if (fabric.scene_count > 0)
    {
        fabric.scene_count--;
        ReturnErrorOnFailure(fabric.Save(mStorage));
    }

    return CHIP_NO_ERROR;
}

/// @brief Registers handle to get extension fields set for a specific cluster. If the handler is already present in the handler
/// array, it will be overwritten
/// @param ID ID of the cluster used to fill the extension fields set
/// @param get_function pointer to function to call to get the extension fiels set from the cluster
/// @param set_function pointer to function to call send an extension field to the cluster
/// @return CHIP_ERROR_BUFFER_TO_SMALL if couldn't insert the handler, otherwise CHIP_NO_ERROR
CHIP_ERROR DefaultSceneTableImpl::registerHandler(ClusterId ID, clusterFieldsHandle get_function, clusterFieldsHandle set_function)
{
    uint8_t idPosition = 0xff, fisrtEmptyPosition = 0xff;
    for (uint8_t i = 0; i < CHIP_CONFIG_SCENES_MAX_CLUSTERS_PER_SCENES; i++)
    {
        if (this->handlers[i].getID() == ID)
        {
            idPosition = i;
            break;
        }
        if (!this->handlers[i].isInitialized() && fisrtEmptyPosition == 0xff)
        {
            fisrtEmptyPosition = i;
        }
    }

    // if found, insert at found position, otherwise at first free possition, otherwise return error
    if (idPosition < CHIP_CONFIG_SCENES_MAX_CLUSTERS_PER_SCENES)
    {
        this->handlers[idPosition].initSceneHandler(ID, get_function, set_function);
        return CHIP_NO_ERROR;
    }
    else if (fisrtEmptyPosition < CHIP_CONFIG_SCENES_MAX_CLUSTERS_PER_SCENES)
    {
        this->handlers[fisrtEmptyPosition].initSceneHandler(ID, get_function, set_function);
        this->handlerNum++;
        return CHIP_NO_ERROR;
    }
    else
    {
        return CHIP_ERROR_INVALID_LIST_LENGTH;
    }

    return CHIP_ERROR_INVALID_LIST_LENGTH;
}

CHIP_ERROR DefaultSceneTableImpl::unregisterHandler(uint8_t position)
{
    if (!handlerListEmpty())
    {
        if (position < CHIP_CONFIG_SCENES_MAX_CLUSTERS_PER_SCENES)
        {
            if (this->handlers[position].isInitialized())
            {
                this->handlers[position].clearSceneHandler();
                this->handlerNum--;
            }
        }
        else
        {
            return CHIP_ERROR_ACCESS_DENIED;
        }
    }

    return CHIP_NO_ERROR;
}

CHIP_ERROR DefaultSceneTableImpl::EFSValuesFromCluster(ExtensionFieldsSetsImpl & fieldSets)
{
    ExtensionFieldsSet EFS;
    if (!this->handlerListEmpty())
    {
        for (uint8_t i = 0; i < CHIP_CONFIG_SCENES_MAX_CLUSTERS_PER_SCENES; i++)
        {
            if (this->handlers[i].isInitialized())
            {
                ReturnErrorOnFailure(this->handlers[i].getClusterEFS(EFS));
                ReturnErrorOnFailure(fieldSets.insertField(EFS));
            }
        }
    }

    return CHIP_NO_ERROR;
}

CHIP_ERROR DefaultSceneTableImpl::EFSValuesToCluster(ExtensionFieldsSetsImpl & fieldSets)
{
    ExtensionFieldsSet EFS;
    if (!this->handlerListEmpty())
    {
        for (uint8_t i = 0; i < CHIP_CONFIG_SCENES_MAX_CLUSTERS_PER_SCENES; i++)
        {
            fieldSets.getFieldAtPosition(EFS, i);

            if (!EFS.is_empty())
            {
                for (uint8_t j = 0; j < CHIP_CONFIG_SCENES_MAX_CLUSTERS_PER_SCENES; j++)
                {
                    if (EFS.ID == this->handlers[j].getID())
                    {
                        ReturnErrorOnFailure(this->handlers[j].setClusterEFS(EFS));
                    }
                }
            }
        }
    }

    return CHIP_NO_ERROR;
}

CHIP_ERROR DefaultSceneTableImpl::RemoveFabric(FabricIndex fabric_index)
{
    FabricSceneData fabric(fabric_index);
    SceneIndex idx = 0;
    CHIP_ERROR err = fabric.Load(mStorage);
    VerifyOrReturnError(CHIP_NO_ERROR == err || CHIP_ERROR_NOT_FOUND == err, err);

    while (idx < kMaxScenePerFabric)
    {
        err = RemoveSceneTableEntryAtPosition(fabric_index, idx);
        VerifyOrReturnError(CHIP_NO_ERROR == err || CHIP_ERROR_PERSISTED_STORAGE_VALUE_NOT_FOUND == err, err);
        idx++;
    }

    // Remove fabric
    return fabric.Delete(mStorage);
}

DefaultSceneTableImpl::SceneEntryIterator * DefaultSceneTableImpl::IterateSceneEntry(FabricIndex fabric_index)
{
    VerifyOrReturnError(IsInitialized(), nullptr);
    return mSceneEntryIterators.CreateObject(*this, fabric_index);
}

DefaultSceneTableImpl::SceneEntryIteratorImpl::SceneEntryIteratorImpl(DefaultSceneTableImpl & provider, FabricIndex fabric_index) :
    mProvider(provider), mFabric(fabric_index)
{
    FabricSceneData fabric(fabric_index);
    ReturnOnFailure(fabric.Load(provider.mStorage));
    mTotalScene = fabric.scene_count;
    mSceneIndex = 0;
}

size_t DefaultSceneTableImpl::SceneEntryIteratorImpl::Count()
{
    return mTotalScene;
}

bool DefaultSceneTableImpl::SceneEntryIteratorImpl::Next(SceneTableEntry & output)
{
    FabricSceneData fabric(mFabric);
    SceneTableData scene(mFabric);

    VerifyOrReturnError(fabric.Load(mProvider.mStorage) == CHIP_NO_ERROR, false);

    // looks for next available scene
    while (mSceneIndex < kMaxScenePerFabric)
    {
        if (fabric.scene_map[mSceneIndex].sceneEndpointId != kInvalidEndpointId)
        {
            scene.index = mSceneIndex;
            VerifyOrReturnError(scene.Load(mProvider.mStorage) == CHIP_NO_ERROR, false);
            output.storageId   = scene.storageId;
            output.storageData = scene.storageData;
            mSceneIndex++;

            return true;
        }

        mSceneIndex++;
    }

    return false;
}

void DefaultSceneTableImpl::SceneEntryIteratorImpl::Release()
{
    mProvider.mSceneEntryIterators.ReleaseObject(this);
}

namespace {

DefaultSceneTableImpl * gSceneTable = nullptr;

} // namespace

DefaultSceneTableImpl * GetSceneTable()
{
    return gSceneTable;
}

void SetSceneTable(DefaultSceneTableImpl * provider)
{
    gSceneTable = provider;
}

} // namespace scenes
} // namespace chip