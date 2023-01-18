/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
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

#include <app-common/zap-generated/ids/Clusters.h>

// This is the mapping of IDs to cluster names assuming a format according
// to the "EmberAfClusterName" defined in the ZCL header.
// The names of clusters that are not present, are removed.

#if defined(ZCL_USING_IDENTIFY_CLUSTER_SERVER) || defined(ZCL_USING_IDENTIFY_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_IDENTIFY_CLUSTER { chip::app::Clusters::Identify::Id, "Identify" },
#else
#define CHIP_PRINTCLUSTER_IDENTIFY_CLUSTER
#endif

#if defined(ZCL_USING_GROUPS_CLUSTER_SERVER) || defined(ZCL_USING_GROUPS_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_GROUPS_CLUSTER { chip::app::Clusters::Groups::Id, "Groups" },
#else
#define CHIP_PRINTCLUSTER_GROUPS_CLUSTER
#endif

#if defined(ZCL_USING_SCENES_CLUSTER_SERVER) || defined(ZCL_USING_SCENES_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_SCENES_CLUSTER { chip::app::Clusters::Scenes::Id, "Scenes" },
#else
#define CHIP_PRINTCLUSTER_SCENES_CLUSTER
#endif

#if defined(ZCL_USING_ON_OFF_CLUSTER_SERVER) || defined(ZCL_USING_ON_OFF_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_ON_OFF_CLUSTER { chip::app::Clusters::OnOff::Id, "On/Off" },
#else
#define CHIP_PRINTCLUSTER_ON_OFF_CLUSTER
#endif

#if defined(ZCL_USING_ON_OFF_SWITCH_CONFIGURATION_CLUSTER_SERVER) || defined(ZCL_USING_ON_OFF_SWITCH_CONFIGURATION_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_ON_OFF_SWITCH_CONFIGURATION_CLUSTER                                                                      \
    { chip::app::Clusters::OnOffSwitchConfiguration::Id, "On/off Switch Configuration" },
#else
#define CHIP_PRINTCLUSTER_ON_OFF_SWITCH_CONFIGURATION_CLUSTER
#endif

#if defined(ZCL_USING_LEVEL_CONTROL_CLUSTER_SERVER) || defined(ZCL_USING_LEVEL_CONTROL_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_LEVEL_CONTROL_CLUSTER { chip::app::Clusters::LevelControl::Id, "Level Control" },
#else
#define CHIP_PRINTCLUSTER_LEVEL_CONTROL_CLUSTER
#endif

#if defined(ZCL_USING_BINARY_INPUT_BASIC_CLUSTER_SERVER) || defined(ZCL_USING_BINARY_INPUT_BASIC_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_BINARY_INPUT_BASIC_CLUSTER { chip::app::Clusters::BinaryInputBasic::Id, "Binary Input (Basic)" },
#else
#define CHIP_PRINTCLUSTER_BINARY_INPUT_BASIC_CLUSTER
#endif

#if defined(ZCL_USING_PWM_CLUSTER_SERVER) || defined(ZCL_USING_PWM_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_PWM_CLUSTER { chip::app::Clusters::PulseWidthModulation::Id, "Pulse Width Modulation" },
#else
#define CHIP_PRINTCLUSTER_PWM_CLUSTER
#endif

#if defined(ZCL_USING_DESCRIPTOR_CLUSTER_SERVER) || defined(ZCL_USING_DESCRIPTOR_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_DESCRIPTOR_CLUSTER { chip::app::Clusters::Descriptor::Id, "Descriptor" },
#else
#define CHIP_PRINTCLUSTER_DESCRIPTOR_CLUSTER
#endif

#if defined(ZCL_USING_BINDING_CLUSTER_SERVER) || defined(ZCL_USING_BINDING_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_BINDING_CLUSTER { chip::app::Clusters::Binding::Id, "Binding" },
#else
#define CHIP_PRINTCLUSTER_BINDING_CLUSTER
#endif

#if defined(ZCL_USING_ACCESS_CONTROL_CLUSTER_SERVER) || defined(ZCL_USING_ACCESS_CONTROL_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_ACCESS_CONTROL_CLUSTER { chip::app::Clusters::AccessControl::Id, "Access Control" },
#else
#define CHIP_PRINTCLUSTER_ACCESS_CONTROL_CLUSTER
#endif

#if defined(ZCL_USING_ACTIONS_CLUSTER_SERVER) || defined(ZCL_USING_ACTIONS_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_ACTIONS_CLUSTER { chip::app::Clusters::Actions::Id, "Actions" },
#else
#define CHIP_PRINTCLUSTER_ACTIONS_CLUSTER
#endif

#if defined(ZCL_USING_BASIC_INFORMATION_CLUSTER_SERVER) || defined(ZCL_USING_BASIC_INFORMATION_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_BASIC_INFORMATION_CLUSTER { chip::app::Clusters::BasicInformation::Id, "Basic Information" },
#else
#define CHIP_PRINTCLUSTER_BASIC_INFORMATION_CLUSTER
#endif

#if defined(ZCL_USING_OTA_SOFTWARE_UPDATE_PROVIDER_CLUSTER_SERVER) || defined(ZCL_USING_OTA_SOFTWARE_UPDATE_PROVIDER_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_OTA_SOFTWARE_UPDATE_PROVIDER_CLUSTER                                                                     \
    { chip::app::Clusters::OtaSoftwareUpdateProvider::Id, "OTA Software Update Provider" },
#else
#define CHIP_PRINTCLUSTER_OTA_SOFTWARE_UPDATE_PROVIDER_CLUSTER
#endif

#if defined(ZCL_USING_OTA_SOFTWARE_UPDATE_REQUESTOR_CLUSTER_SERVER) ||                                                             \
    defined(ZCL_USING_OTA_SOFTWARE_UPDATE_REQUESTOR_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_OTA_SOFTWARE_UPDATE_REQUESTOR_CLUSTER                                                                    \
    { chip::app::Clusters::OtaSoftwareUpdateRequestor::Id, "OTA Software Update Requestor" },
#else
#define CHIP_PRINTCLUSTER_OTA_SOFTWARE_UPDATE_REQUESTOR_CLUSTER
#endif

#if defined(ZCL_USING_LOCALIZATION_CONFIGURATION_CLUSTER_SERVER) || defined(ZCL_USING_LOCALIZATION_CONFIGURATION_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_LOCALIZATION_CONFIGURATION_CLUSTER                                                                       \
    { chip::app::Clusters::LocalizationConfiguration::Id, "Localization Configuration" },
#else
#define CHIP_PRINTCLUSTER_LOCALIZATION_CONFIGURATION_CLUSTER
#endif

#if defined(ZCL_USING_TIME_FORMAT_LOCALIZATION_CLUSTER_SERVER) || defined(ZCL_USING_TIME_FORMAT_LOCALIZATION_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_TIME_FORMAT_LOCALIZATION_CLUSTER                                                                         \
    { chip::app::Clusters::TimeFormatLocalization::Id, "Time Format Localization" },
#else
#define CHIP_PRINTCLUSTER_TIME_FORMAT_LOCALIZATION_CLUSTER
#endif

#if defined(ZCL_USING_UNIT_LOCALIZATION_CLUSTER_SERVER) || defined(ZCL_USING_UNIT_LOCALIZATION_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_UNIT_LOCALIZATION_CLUSTER { chip::app::Clusters::UnitLocalization::Id, "Unit Localization" },
#else
#define CHIP_PRINTCLUSTER_UNIT_LOCALIZATION_CLUSTER
#endif

#if defined(ZCL_USING_POWER_SOURCE_CONFIGURATION_CLUSTER_SERVER) || defined(ZCL_USING_POWER_SOURCE_CONFIGURATION_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_POWER_SOURCE_CONFIGURATION_CLUSTER                                                                       \
    { chip::app::Clusters::PowerSourceConfiguration::Id, "Power Source Configuration" },
#else
#define CHIP_PRINTCLUSTER_POWER_SOURCE_CONFIGURATION_CLUSTER
#endif

#if defined(ZCL_USING_POWER_SOURCE_CLUSTER_SERVER) || defined(ZCL_USING_POWER_SOURCE_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_POWER_SOURCE_CLUSTER { chip::app::Clusters::PowerSource::Id, "Power Source" },
#else
#define CHIP_PRINTCLUSTER_POWER_SOURCE_CLUSTER
#endif

#if defined(ZCL_USING_GENERAL_COMMISSIONING_CLUSTER_SERVER) || defined(ZCL_USING_GENERAL_COMMISSIONING_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_GENERAL_COMMISSIONING_CLUSTER { chip::app::Clusters::GeneralCommissioning::Id, "General Commissioning" },
#else
#define CHIP_PRINTCLUSTER_GENERAL_COMMISSIONING_CLUSTER
#endif

#if defined(ZCL_USING_NETWORK_COMMISSIONING_CLUSTER_SERVER) || defined(ZCL_USING_NETWORK_COMMISSIONING_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_NETWORK_COMMISSIONING_CLUSTER { chip::app::Clusters::NetworkCommissioning::Id, "Network Commissioning" },
#else
#define CHIP_PRINTCLUSTER_NETWORK_COMMISSIONING_CLUSTER
#endif

#if defined(ZCL_USING_DIAGNOSTIC_LOGS_CLUSTER_SERVER) || defined(ZCL_USING_DIAGNOSTIC_LOGS_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_DIAGNOSTIC_LOGS_CLUSTER { chip::app::Clusters::DiagnosticLogs::Id, "Diagnostic Logs" },
#else
#define CHIP_PRINTCLUSTER_DIAGNOSTIC_LOGS_CLUSTER
#endif

#if defined(ZCL_USING_GENERAL_DIAGNOSTICS_CLUSTER_SERVER) || defined(ZCL_USING_GENERAL_DIAGNOSTICS_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_GENERAL_DIAGNOSTICS_CLUSTER { chip::app::Clusters::GeneralDiagnostics::Id, "General Diagnostics" },
#else
#define CHIP_PRINTCLUSTER_GENERAL_DIAGNOSTICS_CLUSTER
#endif

#if defined(ZCL_USING_SOFTWARE_DIAGNOSTICS_CLUSTER_SERVER) || defined(ZCL_USING_SOFTWARE_DIAGNOSTICS_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_SOFTWARE_DIAGNOSTICS_CLUSTER { chip::app::Clusters::SoftwareDiagnostics::Id, "Software Diagnostics" },
#else
#define CHIP_PRINTCLUSTER_SOFTWARE_DIAGNOSTICS_CLUSTER
#endif

#if defined(ZCL_USING_THREAD_NETWORK_DIAGNOSTICS_CLUSTER_SERVER) || defined(ZCL_USING_THREAD_NETWORK_DIAGNOSTICS_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_THREAD_NETWORK_DIAGNOSTICS_CLUSTER                                                                       \
    { chip::app::Clusters::ThreadNetworkDiagnostics::Id, "Thread Network Diagnostics" },
#else
#define CHIP_PRINTCLUSTER_THREAD_NETWORK_DIAGNOSTICS_CLUSTER
#endif

#if defined(ZCL_USING_WIFI_NETWORK_DIAGNOSTICS_CLUSTER_SERVER) || defined(ZCL_USING_WIFI_NETWORK_DIAGNOSTICS_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_WIFI_NETWORK_DIAGNOSTICS_CLUSTER                                                                         \
    { chip::app::Clusters::WiFiNetworkDiagnostics::Id, "WiFi Network Diagnostics" },
#else
#define CHIP_PRINTCLUSTER_WIFI_NETWORK_DIAGNOSTICS_CLUSTER
#endif

#if defined(ZCL_USING_ETHERNET_NETWORK_DIAGNOSTICS_CLUSTER_SERVER) || defined(ZCL_USING_ETHERNET_NETWORK_DIAGNOSTICS_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_ETHERNET_NETWORK_DIAGNOSTICS_CLUSTER                                                                     \
    { chip::app::Clusters::EthernetNetworkDiagnostics::Id, "Ethernet Network Diagnostics" },
#else
#define CHIP_PRINTCLUSTER_ETHERNET_NETWORK_DIAGNOSTICS_CLUSTER
#endif

#if defined(ZCL_USING_TIME_SYNCHRONIZATION_CLUSTER_SERVER) || defined(ZCL_USING_TIME_SYNCHRONIZATION_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_TIME_SYNCHRONIZATION_CLUSTER { chip::app::Clusters::TimeSynchronization::Id, "Time Synchronization" },
#else
#define CHIP_PRINTCLUSTER_TIME_SYNCHRONIZATION_CLUSTER
#endif

#if defined(ZCL_USING_BRIDGED_DEVICE_BASIC_INFORMATION_CLUSTER_SERVER) ||                                                          \
    defined(ZCL_USING_BRIDGED_DEVICE_BASIC_INFORMATION_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_BRIDGED_DEVICE_BASIC_INFORMATION_CLUSTER                                                                 \
    { chip::app::Clusters::BridgedDeviceBasicInformation::Id, "Bridged Device Basic Information" },
#else
#define CHIP_PRINTCLUSTER_BRIDGED_DEVICE_BASIC_INFORMATION_CLUSTER
#endif

#if defined(ZCL_USING_SWITCH_CLUSTER_SERVER) || defined(ZCL_USING_SWITCH_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_SWITCH_CLUSTER { chip::app::Clusters::Switch::Id, "Switch" },
#else
#define CHIP_PRINTCLUSTER_SWITCH_CLUSTER
#endif

#if defined(ZCL_USING_ADMINISTRATOR_COMMISSIONING_CLUSTER_SERVER) || defined(ZCL_USING_ADMINISTRATOR_COMMISSIONING_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_ADMINISTRATOR_COMMISSIONING_CLUSTER                                                                      \
    { chip::app::Clusters::AdministratorCommissioning::Id, "AdministratorCommissioning" },
#else
#define CHIP_PRINTCLUSTER_ADMINISTRATOR_COMMISSIONING_CLUSTER
#endif

#if defined(ZCL_USING_OPERATIONAL_CREDENTIALS_CLUSTER_SERVER) || defined(ZCL_USING_OPERATIONAL_CREDENTIALS_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_OPERATIONAL_CREDENTIALS_CLUSTER                                                                          \
    { chip::app::Clusters::OperationalCredentials::Id, "Operational Credentials" },
#else
#define CHIP_PRINTCLUSTER_OPERATIONAL_CREDENTIALS_CLUSTER
#endif

#if defined(ZCL_USING_GROUP_KEY_MANAGEMENT_CLUSTER_SERVER) || defined(ZCL_USING_GROUP_KEY_MANAGEMENT_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_GROUP_KEY_MANAGEMENT_CLUSTER { chip::app::Clusters::GroupKeyManagement::Id, "Group Key Management" },
#else
#define CHIP_PRINTCLUSTER_GROUP_KEY_MANAGEMENT_CLUSTER
#endif

#if defined(ZCL_USING_FIXED_LABEL_CLUSTER_SERVER) || defined(ZCL_USING_FIXED_LABEL_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_FIXED_LABEL_CLUSTER { chip::app::Clusters::FixedLabel::Id, "Fixed Label" },
#else
#define CHIP_PRINTCLUSTER_FIXED_LABEL_CLUSTER
#endif

#if defined(ZCL_USING_USER_LABEL_CLUSTER_SERVER) || defined(ZCL_USING_USER_LABEL_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_USER_LABEL_CLUSTER { chip::app::Clusters::UserLabel::Id, "User Label" },
#else
#define CHIP_PRINTCLUSTER_USER_LABEL_CLUSTER
#endif

#if defined(ZCL_USING_PROXY_CONFIGURATION_CLUSTER_SERVER) || defined(ZCL_USING_PROXY_CONFIGURATION_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_PROXY_CONFIGURATION_CLUSTER { chip::app::Clusters::ProxyConfiguration::Id, "Proxy Configuration" },
#else
#define CHIP_PRINTCLUSTER_PROXY_CONFIGURATION_CLUSTER
#endif

#if defined(ZCL_USING_PROXY_DISCOVERY_CLUSTER_SERVER) || defined(ZCL_USING_PROXY_DISCOVERY_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_PROXY_DISCOVERY_CLUSTER { chip::app::Clusters::ProxyDiscovery::Id, "Proxy Discovery" },
#else
#define CHIP_PRINTCLUSTER_PROXY_DISCOVERY_CLUSTER
#endif

#if defined(ZCL_USING_PROXY_VALID_CLUSTER_SERVER) || defined(ZCL_USING_PROXY_VALID_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_PROXY_VALID_CLUSTER { chip::app::Clusters::ProxyValid::Id, "Proxy Valid" },
#else
#define CHIP_PRINTCLUSTER_PROXY_VALID_CLUSTER
#endif

#if defined(ZCL_USING_BOOLEAN_STATE_CLUSTER_SERVER) || defined(ZCL_USING_BOOLEAN_STATE_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_BOOLEAN_STATE_CLUSTER { chip::app::Clusters::BooleanState::Id, "Boolean State" },
#else
#define CHIP_PRINTCLUSTER_BOOLEAN_STATE_CLUSTER
#endif

#if defined(ZCL_USING_MODE_SELECT_CLUSTER_SERVER) || defined(ZCL_USING_MODE_SELECT_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_MODE_SELECT_CLUSTER { chip::app::Clusters::ModeSelect::Id, "Mode Select" },
#else
#define CHIP_PRINTCLUSTER_MODE_SELECT_CLUSTER
#endif

#if defined(ZCL_USING_DOOR_LOCK_CLUSTER_SERVER) || defined(ZCL_USING_DOOR_LOCK_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_DOOR_LOCK_CLUSTER { chip::app::Clusters::DoorLock::Id, "Door Lock" },
#else
#define CHIP_PRINTCLUSTER_DOOR_LOCK_CLUSTER
#endif

#if defined(ZCL_USING_WINDOW_COVERING_CLUSTER_SERVER) || defined(ZCL_USING_WINDOW_COVERING_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_WINDOW_COVERING_CLUSTER { chip::app::Clusters::WindowCovering::Id, "Window Covering" },
#else
#define CHIP_PRINTCLUSTER_WINDOW_COVERING_CLUSTER
#endif

#if defined(ZCL_USING_BARRIER_CONTROL_CLUSTER_SERVER) || defined(ZCL_USING_BARRIER_CONTROL_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_BARRIER_CONTROL_CLUSTER { chip::app::Clusters::BarrierControl::Id, "Barrier Control" },
#else
#define CHIP_PRINTCLUSTER_BARRIER_CONTROL_CLUSTER
#endif

#if defined(ZCL_USING_PUMP_CONFIGURATION_AND_CONTROL_CLUSTER_SERVER) ||                                                            \
    defined(ZCL_USING_PUMP_CONFIGURATION_AND_CONTROL_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_PUMP_CONFIGURATION_AND_CONTROL_CLUSTER                                                                   \
    { chip::app::Clusters::PumpConfigurationAndControl::Id, "Pump Configuration and Control" },
#else
#define CHIP_PRINTCLUSTER_PUMP_CONFIGURATION_AND_CONTROL_CLUSTER
#endif

#if defined(ZCL_USING_THERMOSTAT_CLUSTER_SERVER) || defined(ZCL_USING_THERMOSTAT_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_THERMOSTAT_CLUSTER { chip::app::Clusters::Thermostat::Id, "Thermostat" },
#else
#define CHIP_PRINTCLUSTER_THERMOSTAT_CLUSTER
#endif

#if defined(ZCL_USING_FAN_CONTROL_CLUSTER_SERVER) || defined(ZCL_USING_FAN_CONTROL_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_FAN_CONTROL_CLUSTER { chip::app::Clusters::FanControl::Id, "Fan Control" },
#else
#define CHIP_PRINTCLUSTER_FAN_CONTROL_CLUSTER
#endif

#if defined(ZCL_USING_THERMOSTAT_USER_INTERFACE_CONFIGURATION_CLUSTER_SERVER) ||                                                   \
    defined(ZCL_USING_THERMOSTAT_USER_INTERFACE_CONFIGURATION_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_THERMOSTAT_USER_INTERFACE_CONFIGURATION_CLUSTER                                                          \
    { chip::app::Clusters::ThermostatUserInterfaceConfiguration::Id, "Thermostat User Interface Configuration" },
#else
#define CHIP_PRINTCLUSTER_THERMOSTAT_USER_INTERFACE_CONFIGURATION_CLUSTER
#endif

#if defined(ZCL_USING_COLOR_CONTROL_CLUSTER_SERVER) || defined(ZCL_USING_COLOR_CONTROL_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_COLOR_CONTROL_CLUSTER { chip::app::Clusters::ColorControl::Id, "Color Control" },
#else
#define CHIP_PRINTCLUSTER_COLOR_CONTROL_CLUSTER
#endif

#if defined(ZCL_USING_BALLAST_CONFIGURATION_CLUSTER_SERVER) || defined(ZCL_USING_BALLAST_CONFIGURATION_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_BALLAST_CONFIGURATION_CLUSTER { chip::app::Clusters::BallastConfiguration::Id, "Ballast Configuration" },
#else
#define CHIP_PRINTCLUSTER_BALLAST_CONFIGURATION_CLUSTER
#endif

#if defined(ZCL_USING_ILLUMINANCE_MEASUREMENT_CLUSTER_SERVER) || defined(ZCL_USING_ILLUMINANCE_MEASUREMENT_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_ILLUMINANCE_MEASUREMENT_CLUSTER                                                                          \
    { chip::app::Clusters::IlluminanceMeasurement::Id, "Illuminance Measurement" },
#else
#define CHIP_PRINTCLUSTER_ILLUMINANCE_MEASUREMENT_CLUSTER
#endif

#if defined(ZCL_USING_TEMPERATURE_MEASUREMENT_CLUSTER_SERVER) || defined(ZCL_USING_TEMPERATURE_MEASUREMENT_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_TEMPERATURE_MEASUREMENT_CLUSTER                                                                          \
    { chip::app::Clusters::TemperatureMeasurement::Id, "Temperature Measurement" },
#else
#define CHIP_PRINTCLUSTER_TEMPERATURE_MEASUREMENT_CLUSTER
#endif

#if defined(ZCL_USING_PRESSURE_MEASUREMENT_CLUSTER_SERVER) || defined(ZCL_USING_PRESSURE_MEASUREMENT_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_PRESSURE_MEASUREMENT_CLUSTER { chip::app::Clusters::PressureMeasurement::Id, "Pressure Measurement" },
#else
#define CHIP_PRINTCLUSTER_PRESSURE_MEASUREMENT_CLUSTER
#endif

#if defined(ZCL_USING_FLOW_MEASUREMENT_CLUSTER_SERVER) || defined(ZCL_USING_FLOW_MEASUREMENT_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_FLOW_MEASUREMENT_CLUSTER { chip::app::Clusters::FlowMeasurement::Id, "Flow Measurement" },
#else
#define CHIP_PRINTCLUSTER_FLOW_MEASUREMENT_CLUSTER
#endif

#if defined(ZCL_USING_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER_SERVER) ||                                                             \
    defined(ZCL_USING_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER                                                                    \
    { chip::app::Clusters::RelativeHumidityMeasurement::Id, "Relative Humidity Measurement" },
#else
#define CHIP_PRINTCLUSTER_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER
#endif

#if defined(ZCL_USING_OCCUPANCY_SENSING_CLUSTER_SERVER) || defined(ZCL_USING_OCCUPANCY_SENSING_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_OCCUPANCY_SENSING_CLUSTER { chip::app::Clusters::OccupancySensing::Id, "Occupancy Sensing" },
#else
#define CHIP_PRINTCLUSTER_OCCUPANCY_SENSING_CLUSTER
#endif

#if defined(ZCL_USING_WAKE_ON_LAN_CLUSTER_SERVER) || defined(ZCL_USING_WAKE_ON_LAN_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_WAKE_ON_LAN_CLUSTER { chip::app::Clusters::WakeOnLan::Id, "Wake on LAN" },
#else
#define CHIP_PRINTCLUSTER_WAKE_ON_LAN_CLUSTER
#endif

#if defined(ZCL_USING_CHANNEL_CLUSTER_SERVER) || defined(ZCL_USING_CHANNEL_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_CHANNEL_CLUSTER { chip::app::Clusters::Channel::Id, "Channel" },
#else
#define CHIP_PRINTCLUSTER_CHANNEL_CLUSTER
#endif

#if defined(ZCL_USING_TARGET_NAVIGATOR_CLUSTER_SERVER) || defined(ZCL_USING_TARGET_NAVIGATOR_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_TARGET_NAVIGATOR_CLUSTER { chip::app::Clusters::TargetNavigator::Id, "Target Navigator" },
#else
#define CHIP_PRINTCLUSTER_TARGET_NAVIGATOR_CLUSTER
#endif

#if defined(ZCL_USING_MEDIA_PLAYBACK_CLUSTER_SERVER) || defined(ZCL_USING_MEDIA_PLAYBACK_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_MEDIA_PLAYBACK_CLUSTER { chip::app::Clusters::MediaPlayback::Id, "Media Playback" },
#else
#define CHIP_PRINTCLUSTER_MEDIA_PLAYBACK_CLUSTER
#endif

#if defined(ZCL_USING_MEDIA_INPUT_CLUSTER_SERVER) || defined(ZCL_USING_MEDIA_INPUT_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_MEDIA_INPUT_CLUSTER { chip::app::Clusters::MediaInput::Id, "Media Input" },
#else
#define CHIP_PRINTCLUSTER_MEDIA_INPUT_CLUSTER
#endif

#if defined(ZCL_USING_LOW_POWER_CLUSTER_SERVER) || defined(ZCL_USING_LOW_POWER_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_LOW_POWER_CLUSTER { chip::app::Clusters::LowPower::Id, "Low Power" },
#else
#define CHIP_PRINTCLUSTER_LOW_POWER_CLUSTER
#endif

#if defined(ZCL_USING_KEYPAD_INPUT_CLUSTER_SERVER) || defined(ZCL_USING_KEYPAD_INPUT_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_KEYPAD_INPUT_CLUSTER { chip::app::Clusters::KeypadInput::Id, "Keypad Input" },
#else
#define CHIP_PRINTCLUSTER_KEYPAD_INPUT_CLUSTER
#endif

#if defined(ZCL_USING_CONTENT_LAUNCHER_CLUSTER_SERVER) || defined(ZCL_USING_CONTENT_LAUNCHER_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_CONTENT_LAUNCHER_CLUSTER { chip::app::Clusters::ContentLauncher::Id, "Content Launcher" },
#else
#define CHIP_PRINTCLUSTER_CONTENT_LAUNCHER_CLUSTER
#endif

#if defined(ZCL_USING_AUDIO_OUTPUT_CLUSTER_SERVER) || defined(ZCL_USING_AUDIO_OUTPUT_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_AUDIO_OUTPUT_CLUSTER { chip::app::Clusters::AudioOutput::Id, "Audio Output" },
#else
#define CHIP_PRINTCLUSTER_AUDIO_OUTPUT_CLUSTER
#endif

#if defined(ZCL_USING_APPLICATION_LAUNCHER_CLUSTER_SERVER) || defined(ZCL_USING_APPLICATION_LAUNCHER_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_APPLICATION_LAUNCHER_CLUSTER { chip::app::Clusters::ApplicationLauncher::Id, "Application Launcher" },
#else
#define CHIP_PRINTCLUSTER_APPLICATION_LAUNCHER_CLUSTER
#endif

#if defined(ZCL_USING_APPLICATION_BASIC_CLUSTER_SERVER) || defined(ZCL_USING_APPLICATION_BASIC_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_APPLICATION_BASIC_CLUSTER { chip::app::Clusters::ApplicationBasic::Id, "Application Basic" },
#else
#define CHIP_PRINTCLUSTER_APPLICATION_BASIC_CLUSTER
#endif

#if defined(ZCL_USING_ACCOUNT_LOGIN_CLUSTER_SERVER) || defined(ZCL_USING_ACCOUNT_LOGIN_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_ACCOUNT_LOGIN_CLUSTER { chip::app::Clusters::AccountLogin::Id, "Account Login" },
#else
#define CHIP_PRINTCLUSTER_ACCOUNT_LOGIN_CLUSTER
#endif

#if defined(ZCL_USING_ELECTRICAL_MEASUREMENT_CLUSTER_SERVER) || defined(ZCL_USING_ELECTRICAL_MEASUREMENT_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_ELECTRICAL_MEASUREMENT_CLUSTER                                                                           \
    { chip::app::Clusters::ElectricalMeasurement::Id, "Electrical Measurement" },
#else
#define CHIP_PRINTCLUSTER_ELECTRICAL_MEASUREMENT_CLUSTER
#endif

#if defined(ZCL_USING_CLIENT_MONITORING_CLUSTER_SERVER) || defined(ZCL_USING_CLIENT_MONITORING_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_CLIENT_MONITORING_CLUSTER { chip::app::Clusters::ClientMonitoring::Id, "Client Monitoring" },
#else
#define CHIP_PRINTCLUSTER_CLIENT_MONITORING_CLUSTER
#endif

#if defined(ZCL_USING_UNIT_TESTING_CLUSTER_SERVER) || defined(ZCL_USING_UNIT_TESTING_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_UNIT_TESTING_CLUSTER { chip::app::Clusters::UnitTesting::Id, "Unit Testing" },
#else
#define CHIP_PRINTCLUSTER_UNIT_TESTING_CLUSTER
#endif

#if defined(ZCL_USING_FAULT_INJECTION_CLUSTER_SERVER) || defined(ZCL_USING_FAULT_INJECTION_CLUSTER_CLIENT)
#define CHIP_PRINTCLUSTER_FAULT_INJECTION_CLUSTER { chip::app::Clusters::FaultInjection::Id, "Fault Injection" },
#else
#define CHIP_PRINTCLUSTER_FAULT_INJECTION_CLUSTER
#endif

#define CLUSTER_IDS_TO_NAMES                                                                                                       \
    CHIP_PRINTCLUSTER_IDENTIFY_CLUSTER                                                                                             \
    CHIP_PRINTCLUSTER_GROUPS_CLUSTER                                                                                               \
    CHIP_PRINTCLUSTER_SCENES_CLUSTER                                                                                               \
    CHIP_PRINTCLUSTER_ON_OFF_CLUSTER                                                                                               \
    CHIP_PRINTCLUSTER_ON_OFF_SWITCH_CONFIGURATION_CLUSTER                                                                          \
    CHIP_PRINTCLUSTER_LEVEL_CONTROL_CLUSTER                                                                                        \
    CHIP_PRINTCLUSTER_BINARY_INPUT_BASIC_CLUSTER                                                                                   \
    CHIP_PRINTCLUSTER_PWM_CLUSTER                                                                                                  \
    CHIP_PRINTCLUSTER_DESCRIPTOR_CLUSTER                                                                                           \
    CHIP_PRINTCLUSTER_BINDING_CLUSTER                                                                                              \
    CHIP_PRINTCLUSTER_ACCESS_CONTROL_CLUSTER                                                                                       \
    CHIP_PRINTCLUSTER_ACTIONS_CLUSTER                                                                                              \
    CHIP_PRINTCLUSTER_BASIC_INFORMATION_CLUSTER                                                                                    \
    CHIP_PRINTCLUSTER_OTA_SOFTWARE_UPDATE_PROVIDER_CLUSTER                                                                         \
    CHIP_PRINTCLUSTER_OTA_SOFTWARE_UPDATE_REQUESTOR_CLUSTER                                                                        \
    CHIP_PRINTCLUSTER_LOCALIZATION_CONFIGURATION_CLUSTER                                                                           \
    CHIP_PRINTCLUSTER_TIME_FORMAT_LOCALIZATION_CLUSTER                                                                             \
    CHIP_PRINTCLUSTER_UNIT_LOCALIZATION_CLUSTER                                                                                    \
    CHIP_PRINTCLUSTER_POWER_SOURCE_CONFIGURATION_CLUSTER                                                                           \
    CHIP_PRINTCLUSTER_POWER_SOURCE_CLUSTER                                                                                         \
    CHIP_PRINTCLUSTER_GENERAL_COMMISSIONING_CLUSTER                                                                                \
    CHIP_PRINTCLUSTER_NETWORK_COMMISSIONING_CLUSTER                                                                                \
    CHIP_PRINTCLUSTER_DIAGNOSTIC_LOGS_CLUSTER                                                                                      \
    CHIP_PRINTCLUSTER_GENERAL_DIAGNOSTICS_CLUSTER                                                                                  \
    CHIP_PRINTCLUSTER_SOFTWARE_DIAGNOSTICS_CLUSTER                                                                                 \
    CHIP_PRINTCLUSTER_THREAD_NETWORK_DIAGNOSTICS_CLUSTER                                                                           \
    CHIP_PRINTCLUSTER_WIFI_NETWORK_DIAGNOSTICS_CLUSTER                                                                             \
    CHIP_PRINTCLUSTER_ETHERNET_NETWORK_DIAGNOSTICS_CLUSTER                                                                         \
    CHIP_PRINTCLUSTER_TIME_SYNCHRONIZATION_CLUSTER                                                                                 \
    CHIP_PRINTCLUSTER_BRIDGED_DEVICE_BASIC_INFORMATION_CLUSTER                                                                     \
    CHIP_PRINTCLUSTER_SWITCH_CLUSTER                                                                                               \
    CHIP_PRINTCLUSTER_ADMINISTRATOR_COMMISSIONING_CLUSTER                                                                          \
    CHIP_PRINTCLUSTER_OPERATIONAL_CREDENTIALS_CLUSTER                                                                              \
    CHIP_PRINTCLUSTER_GROUP_KEY_MANAGEMENT_CLUSTER                                                                                 \
    CHIP_PRINTCLUSTER_FIXED_LABEL_CLUSTER                                                                                          \
    CHIP_PRINTCLUSTER_USER_LABEL_CLUSTER                                                                                           \
    CHIP_PRINTCLUSTER_PROXY_CONFIGURATION_CLUSTER                                                                                  \
    CHIP_PRINTCLUSTER_PROXY_DISCOVERY_CLUSTER                                                                                      \
    CHIP_PRINTCLUSTER_PROXY_VALID_CLUSTER                                                                                          \
    CHIP_PRINTCLUSTER_BOOLEAN_STATE_CLUSTER                                                                                        \
    CHIP_PRINTCLUSTER_MODE_SELECT_CLUSTER                                                                                          \
    CHIP_PRINTCLUSTER_DOOR_LOCK_CLUSTER                                                                                            \
    CHIP_PRINTCLUSTER_WINDOW_COVERING_CLUSTER                                                                                      \
    CHIP_PRINTCLUSTER_BARRIER_CONTROL_CLUSTER                                                                                      \
    CHIP_PRINTCLUSTER_PUMP_CONFIGURATION_AND_CONTROL_CLUSTER                                                                       \
    CHIP_PRINTCLUSTER_THERMOSTAT_CLUSTER                                                                                           \
    CHIP_PRINTCLUSTER_FAN_CONTROL_CLUSTER                                                                                          \
    CHIP_PRINTCLUSTER_THERMOSTAT_USER_INTERFACE_CONFIGURATION_CLUSTER                                                              \
    CHIP_PRINTCLUSTER_COLOR_CONTROL_CLUSTER                                                                                        \
    CHIP_PRINTCLUSTER_BALLAST_CONFIGURATION_CLUSTER                                                                                \
    CHIP_PRINTCLUSTER_ILLUMINANCE_MEASUREMENT_CLUSTER                                                                              \
    CHIP_PRINTCLUSTER_TEMPERATURE_MEASUREMENT_CLUSTER                                                                              \
    CHIP_PRINTCLUSTER_PRESSURE_MEASUREMENT_CLUSTER                                                                                 \
    CHIP_PRINTCLUSTER_FLOW_MEASUREMENT_CLUSTER                                                                                     \
    CHIP_PRINTCLUSTER_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER                                                                        \
    CHIP_PRINTCLUSTER_OCCUPANCY_SENSING_CLUSTER                                                                                    \
    CHIP_PRINTCLUSTER_WAKE_ON_LAN_CLUSTER                                                                                          \
    CHIP_PRINTCLUSTER_CHANNEL_CLUSTER                                                                                              \
    CHIP_PRINTCLUSTER_TARGET_NAVIGATOR_CLUSTER                                                                                     \
    CHIP_PRINTCLUSTER_MEDIA_PLAYBACK_CLUSTER                                                                                       \
    CHIP_PRINTCLUSTER_MEDIA_INPUT_CLUSTER                                                                                          \
    CHIP_PRINTCLUSTER_LOW_POWER_CLUSTER                                                                                            \
    CHIP_PRINTCLUSTER_KEYPAD_INPUT_CLUSTER                                                                                         \
    CHIP_PRINTCLUSTER_CONTENT_LAUNCHER_CLUSTER                                                                                     \
    CHIP_PRINTCLUSTER_AUDIO_OUTPUT_CLUSTER                                                                                         \
    CHIP_PRINTCLUSTER_APPLICATION_LAUNCHER_CLUSTER                                                                                 \
    CHIP_PRINTCLUSTER_APPLICATION_BASIC_CLUSTER                                                                                    \
    CHIP_PRINTCLUSTER_ACCOUNT_LOGIN_CLUSTER                                                                                        \
    CHIP_PRINTCLUSTER_ELECTRICAL_MEASUREMENT_CLUSTER                                                                               \
    CHIP_PRINTCLUSTER_CLIENT_MONITORING_CLUSTER                                                                                    \
    CHIP_PRINTCLUSTER_UNIT_TESTING_CLUSTER                                                                                         \
    CHIP_PRINTCLUSTER_FAULT_INJECTION_CLUSTER

#define MAX_CLUSTER_NAME_LENGTH 39
