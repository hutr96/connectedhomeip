/*
 *
 *    Copyright (c) 2021 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

// Prevent multiple inclusion
#pragma once

#include <stdint.h>

#include <app/util/basic-types.h>
#include <lib/support/Span.h>
#include <protocols/interaction_model/Constants.h>

#include "enums.h"

// Struct for SimpleStruct
typedef struct _SimpleStruct
{
    uint8_t a;
    bool b;
    uint8_t c;
    chip::ByteSpan d;
    chip::CharSpan e;
    uint8_t f;
} SimpleStruct;

// Struct for NestedStruct
typedef struct _NestedStruct
{
    uint8_t a;
    bool b;
    SimpleStruct c;
} NestedStruct;

// Struct for NestedStructList
typedef struct _NestedStructList
{
    uint8_t a;
    bool b;
    SimpleStruct c;
    /* TYPE WARNING: array array defaults to */ uint8_t * d;
    /* TYPE WARNING: array array defaults to */ uint8_t * e;
    /* TYPE WARNING: array array defaults to */ uint8_t * f;
    /* TYPE WARNING: array array defaults to */ uint8_t * g;
} NestedStructList;

// Struct for DoubleNestedStructList
typedef struct _DoubleNestedStructList
{
    /* TYPE WARNING: array array defaults to */ uint8_t * a;
} DoubleNestedStructList;

// Struct for ContentLaunchAdditionalInfo
typedef struct _ContentLaunchAdditionalInfo
{
    chip::CharSpan name;
    chip::CharSpan value;
} ContentLaunchAdditionalInfo;

// Struct for ContentLaunchParamater
typedef struct _ContentLaunchParamater
{
    uint8_t Type;
    chip::CharSpan Value;
    /* TYPE WARNING: array array defaults to */ uint8_t * ExternalIDList;
} ContentLaunchParamater;

// Struct for ActionStruct
typedef struct _ActionStruct
{
    uint16_t ActionID;
    chip::CharSpan Name;
    uint8_t Type;
    uint16_t EndpointListID;
    uint16_t SupportedCommands;
    uint8_t Status;
} ActionStruct;

// Struct for ApplicationLauncherApp
typedef struct _ApplicationLauncherApp
{
    uint16_t catalogVendorId;
    chip::CharSpan applicationId;
} ApplicationLauncherApp;

// Struct for AudioOutputInfo
typedef struct _AudioOutputInfo
{
    uint8_t index;
    uint8_t outputType;
    chip::CharSpan name;
} AudioOutputInfo;

// Struct for BasicCommissioningInfoType
typedef struct _BasicCommissioningInfoType
{
    uint32_t FailSafeExpiryLengthMs;
} BasicCommissioningInfoType;

// Struct for BatChargeFaultChangeType
typedef struct _BatChargeFaultChangeType
{
    /* TYPE WARNING: array array defaults to */ uint8_t * current;
    /* TYPE WARNING: array array defaults to */ uint8_t * previous;
} BatChargeFaultChangeType;

// Struct for BatFaultChangeType
typedef struct _BatFaultChangeType
{
    /* TYPE WARNING: array array defaults to */ uint8_t * current;
    /* TYPE WARNING: array array defaults to */ uint8_t * previous;
} BatFaultChangeType;

// Struct for ContentLaunchBrandingInformation
typedef struct _ContentLaunchBrandingInformation
{
    chip::CharSpan providerName;
    uint8_t background;
    uint8_t logo;
    uint8_t progressBar;
    uint8_t splash;
    uint8_t waterMark;
} ContentLaunchBrandingInformation;

// Struct for ContentLaunchDimension
typedef struct _ContentLaunchDimension
{
    chip::CharSpan width;
    chip::CharSpan height;
    uint8_t metric;
} ContentLaunchDimension;

// Struct for ContentLaunchStyleInformation
typedef struct _ContentLaunchStyleInformation
{
    chip::CharSpan imageUrl;
    chip::CharSpan color;
    uint8_t size;
} ContentLaunchStyleInformation;

// Struct for DeviceType
typedef struct _DeviceType
{
    chip::DeviceTypeId type;
    uint16_t revision;
} DeviceType;

// Struct for EndpointListStruct
typedef struct _EndpointListStruct
{
    uint16_t EndpointListID;
    chip::CharSpan Name;
    uint8_t Type;
    chip::ByteSpan Endpoints;
} EndpointListStruct;

// Struct for FabricDescriptor
typedef struct _FabricDescriptor
{
    uint8_t FabricIndex;
    chip::ByteSpan RootPublicKey;
    uint16_t VendorId;
    chip::FabricId FabricId;
    chip::NodeId NodeId;
    chip::CharSpan Label;
} FabricDescriptor;

// Struct for GroupKey
typedef struct _GroupKey
{
    uint16_t VendorId;
    uint16_t GroupKeyIndex;
    chip::ByteSpan GroupKeyRoot;
    uint64_t GroupKeyEpochStartTime;
    uint8_t GroupKeySecurityPolicy;
} GroupKey;

// Struct for GroupState
typedef struct _GroupState
{
    uint16_t VendorId;
    uint16_t VendorGroupId;
    uint16_t GroupKeySetIndex;
} GroupState;

// Struct for IasAceZoneStatusResult
typedef struct _IasAceZoneStatusResult
{
    uint8_t zoneId;
    uint16_t zoneStatus;
} IasAceZoneStatusResult;

// Struct for LabelStruct
typedef struct _LabelStruct
{
    chip::CharSpan label;
    chip::CharSpan value;
} LabelStruct;

// Struct for MediaInputInfo
typedef struct _MediaInputInfo
{
    uint8_t index;
    uint8_t inputType;
    chip::CharSpan name;
    chip::CharSpan description;
} MediaInputInfo;

// Struct for MediaPlaybackPosition
typedef struct _MediaPlaybackPosition
{
    uint64_t updatedAt;
    uint64_t position;
} MediaPlaybackPosition;

// Struct for NOCStruct
typedef struct _NOCStruct
{
    uint8_t FabricIndex;
    chip::ByteSpan NOC;
} NOCStruct;

// Struct for NavigateTargetTargetInfo
typedef struct _NavigateTargetTargetInfo
{
    uint8_t identifier;
    chip::CharSpan name;
} NavigateTargetTargetInfo;

// Struct for NeighborTable
typedef struct _NeighborTable
{
    uint64_t ExtAddress;
    uint32_t Age;
    uint16_t Rloc16;
    uint32_t LinkFrameCounter;
    uint32_t MleFrameCounter;
    uint8_t LQI;
    int8_t AverageRssi;
    int8_t LastRssi;
    uint8_t FrameErrorRate;
    uint8_t MessageErrorRate;
    bool RxOnWhenIdle;
    bool FullThreadDevice;
    bool FullNetworkData;
    bool IsChild;
} NeighborTable;

// Struct for NetworkInterfaceType
typedef struct _NetworkInterfaceType
{
    chip::CharSpan Name;
    bool FabricConnected;
    bool OffPremiseServicesReachableIPv4;
    bool OffPremiseServicesReachableIPv6;
    chip::ByteSpan HardwareAddress;
    uint8_t Type;
} NetworkInterfaceType;

// Struct for Notification
typedef struct _Notification
{
    uint16_t contentId;
    uint8_t statusFeedback;
} Notification;

// Struct for OperationalDatasetComponents
typedef struct _OperationalDatasetComponents
{
    bool ActiveTimestampPresent;
    bool PendingTimestampPresent;
    bool MasterKeyPresent;
    bool NetworkNamePresent;
    bool ExtendedPanIdPresent;
    bool MeshLocalPrefixPresent;
    bool DelayPresent;
    bool PanIdPresent;
    bool ChannelPresent;
    bool PskcPresent;
    bool SecurityPolicyPresent;
    bool ChannelMaskPresent;
} OperationalDatasetComponents;

// Struct for PowerProfileRecord
typedef struct _PowerProfileRecord
{
    uint8_t powerProfileId;
    uint8_t energyPhaseId;
    bool powerProfileRemoteControl;
    uint8_t powerProfileState;
} PowerProfileRecord;

// Struct for ReadAttributeStatusRecord
typedef struct _ReadAttributeStatusRecord
{
    chip::AttributeId attributeId;
    chip::Protocols::InteractionModel::Status status;
    uint8_t attributeType;
    uint8_t * attributeLocation;
} ReadAttributeStatusRecord;

// Struct for ReadStructuredAttributeRecord
typedef struct _ReadStructuredAttributeRecord
{
    chip::AttributeId attributeId;
    uint8_t indicator;
    /* TYPE WARNING: array array defaults to */ uint8_t * indicies;
} ReadStructuredAttributeRecord;

// Struct for RouteTable
typedef struct _RouteTable
{
    uint64_t ExtAddress;
    uint16_t Rloc16;
    uint8_t RouterId;
    uint8_t NextHop;
    uint8_t PathCost;
    uint8_t LQIIn;
    uint8_t LQIOut;
    uint8_t Age;
    bool Allocated;
    bool LinkEstablished;
} RouteTable;

// Struct for SceneExtensionAttributeInfo
typedef struct _SceneExtensionAttributeInfo
{
    uint8_t attributeType;
    uint8_t * attributeLocation;
} SceneExtensionAttributeInfo;

// Struct for SceneExtensionFieldSet
typedef struct _SceneExtensionFieldSet
{
    chip::ClusterId clusterId;
    uint8_t length;
    uint8_t value;
} SceneExtensionFieldSet;

// Struct for ScheduledPhase
typedef struct _ScheduledPhase
{
    uint8_t energyPhaseId;
    uint16_t scheduledTime;
} ScheduledPhase;

// Struct for SecurityPolicy
typedef struct _SecurityPolicy
{
    uint16_t RotationTime;
    uint16_t Flags;
} SecurityPolicy;

// Struct for TestListStructOctet
typedef struct _TestListStructOctet
{
    uint64_t fabricIndex;
    chip::ByteSpan operationalCert;
} TestListStructOctet;

// Struct for ThreadInterfaceScanResult
typedef struct _ThreadInterfaceScanResult
{
    chip::ByteSpan DiscoveryResponse;
} ThreadInterfaceScanResult;

// Struct for ThreadMetrics
typedef struct _ThreadMetrics
{
    uint64_t Id;
    chip::CharSpan Name;
    uint32_t StackFreeCurrent;
    uint32_t StackFreeMinimum;
    uint32_t StackSize;
} ThreadMetrics;

// Struct for TransferredPhase
typedef struct _TransferredPhase
{
    uint8_t energyPhaseId;
    uint8_t macroPhaseId;
    uint16_t expectedDuration;
    uint16_t peakPower;
    uint16_t energy;
    uint16_t maxActivationDelay;
} TransferredPhase;

// Struct for TvChannelInfo
typedef struct _TvChannelInfo
{
    uint16_t majorNumber;
    uint16_t minorNumber;
    chip::CharSpan name;
    chip::CharSpan callSign;
    chip::CharSpan affiliateCallSign;
} TvChannelInfo;

// Struct for TvChannelLineupInfo
typedef struct _TvChannelLineupInfo
{
    chip::CharSpan operatorName;
    chip::CharSpan lineupName;
    chip::CharSpan postalCode;
    uint8_t lineupInfoType;
} TvChannelLineupInfo;

// Struct for WiFiInterfaceScanResult
typedef struct _WiFiInterfaceScanResult
{
    uint8_t Security;
    chip::ByteSpan SSID;
    chip::ByteSpan BSSID;
    uint8_t Channel;
    uint32_t FrequencyBand;
} WiFiInterfaceScanResult;

// Struct for WiredFaultChangeType
typedef struct _WiredFaultChangeType
{
    /* TYPE WARNING: array array defaults to */ uint8_t * current;
    /* TYPE WARNING: array array defaults to */ uint8_t * previous;
} WiredFaultChangeType;

// Struct for WriteAttributeRecord
typedef struct _WriteAttributeRecord
{
    chip::AttributeId attributeId;
    uint8_t attributeType;
    uint8_t * attributeLocation;
} WriteAttributeRecord;

// Struct for WriteAttributeStatusRecord
typedef struct _WriteAttributeStatusRecord
{
    chip::Protocols::InteractionModel::Status status;
    chip::AttributeId attributeId;
} WriteAttributeStatusRecord;

// Struct for WriteStructuredAttributeRecord
typedef struct _WriteStructuredAttributeRecord
{
    chip::AttributeId attributeId;
    uint8_t indicator;
    /* TYPE WARNING: array array defaults to */ uint8_t * indicies;
    uint8_t attributeType;
    uint8_t * attributeLocation;
} WriteStructuredAttributeRecord;

// Struct for WriteStructuredAttributeStatusRecord
typedef struct _WriteStructuredAttributeStatusRecord
{
    chip::Protocols::InteractionModel::Status status;
    chip::AttributeId attributeId;
    uint8_t indicator;
    /* TYPE WARNING: array array defaults to */ uint8_t * indicies;
} WriteStructuredAttributeStatusRecord;
