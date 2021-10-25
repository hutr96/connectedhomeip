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

#pragma once

#include <app/util/basic-types.h>

namespace chip {
namespace app {
namespace Clusters {

namespace PowerConfiguration {
static constexpr ClusterId Id = 0x00000001;
} // namespace PowerConfiguration
namespace DeviceTemperatureConfiguration {
static constexpr ClusterId Id = 0x00000002;
} // namespace DeviceTemperatureConfiguration
namespace Identify {
static constexpr ClusterId Id = 0x00000003;
} // namespace Identify
namespace Groups {
static constexpr ClusterId Id = 0x00000004;
} // namespace Groups
namespace Scenes {
static constexpr ClusterId Id = 0x00000005;
} // namespace Scenes
namespace OnOff {
static constexpr ClusterId Id = 0x00000006;
} // namespace OnOff
namespace OnOffSwitchConfiguration {
static constexpr ClusterId Id = 0x00000007;
} // namespace OnOffSwitchConfiguration
namespace LevelControl {
static constexpr ClusterId Id = 0x00000008;
} // namespace LevelControl
namespace Alarms {
static constexpr ClusterId Id = 0x00000009;
} // namespace Alarms
namespace Time {
static constexpr ClusterId Id = 0x0000000A;
} // namespace Time
namespace BinaryInputBasic {
static constexpr ClusterId Id = 0x0000000F;
} // namespace BinaryInputBasic
namespace PowerProfile {
static constexpr ClusterId Id = 0x0000001A;
} // namespace PowerProfile
namespace ApplianceControl {
static constexpr ClusterId Id = 0x0000001B;
} // namespace ApplianceControl
namespace Descriptor {
static constexpr ClusterId Id = 0x0000001D;
} // namespace Descriptor
namespace PollControl {
static constexpr ClusterId Id = 0x00000020;
} // namespace PollControl
namespace BridgedActions {
static constexpr ClusterId Id = 0x00000025;
} // namespace BridgedActions
namespace Basic {
static constexpr ClusterId Id = 0x00000028;
} // namespace Basic
namespace OtaSoftwareUpdateProvider {
static constexpr ClusterId Id = 0x00000029;
} // namespace OtaSoftwareUpdateProvider
namespace OtaSoftwareUpdateRequestor {
static constexpr ClusterId Id = 0x0000002A;
} // namespace OtaSoftwareUpdateRequestor
namespace PowerSource {
static constexpr ClusterId Id = 0x0000002F;
} // namespace PowerSource
namespace GeneralCommissioning {
static constexpr ClusterId Id = 0x00000030;
} // namespace GeneralCommissioning
namespace NetworkCommissioning {
static constexpr ClusterId Id = 0x00000031;
} // namespace NetworkCommissioning
namespace DiagnosticLogs {
static constexpr ClusterId Id = 0x00000032;
} // namespace DiagnosticLogs
namespace GeneralDiagnostics {
static constexpr ClusterId Id = 0x00000033;
} // namespace GeneralDiagnostics
namespace SoftwareDiagnostics {
static constexpr ClusterId Id = 0x00000034;
} // namespace SoftwareDiagnostics
namespace ThreadNetworkDiagnostics {
static constexpr ClusterId Id = 0x00000035;
} // namespace ThreadNetworkDiagnostics
namespace WiFiNetworkDiagnostics {
static constexpr ClusterId Id = 0x00000036;
} // namespace WiFiNetworkDiagnostics
namespace EthernetNetworkDiagnostics {
static constexpr ClusterId Id = 0x00000037;
} // namespace EthernetNetworkDiagnostics
namespace BridgedDeviceBasic {
static constexpr ClusterId Id = 0x00000039;
} // namespace BridgedDeviceBasic
namespace Switch {
static constexpr ClusterId Id = 0x0000003B;
} // namespace Switch
namespace AdministratorCommissioning {
static constexpr ClusterId Id = 0x0000003C;
} // namespace AdministratorCommissioning
namespace OperationalCredentials {
static constexpr ClusterId Id = 0x0000003E;
} // namespace OperationalCredentials
namespace FixedLabel {
static constexpr ClusterId Id = 0x00000040;
} // namespace FixedLabel
namespace BooleanState {
static constexpr ClusterId Id = 0x00000045;
} // namespace BooleanState
namespace ShadeConfiguration {
static constexpr ClusterId Id = 0x00000100;
} // namespace ShadeConfiguration
namespace DoorLock {
static constexpr ClusterId Id = 0x00000101;
} // namespace DoorLock
namespace WindowCovering {
static constexpr ClusterId Id = 0x00000102;
} // namespace WindowCovering
namespace BarrierControl {
static constexpr ClusterId Id = 0x00000103;
} // namespace BarrierControl
namespace PumpConfigurationAndControl {
static constexpr ClusterId Id = 0x00000200;
} // namespace PumpConfigurationAndControl
namespace Thermostat {
static constexpr ClusterId Id = 0x00000201;
} // namespace Thermostat
namespace FanControl {
static constexpr ClusterId Id = 0x00000202;
} // namespace FanControl
namespace DehumidificationControl {
static constexpr ClusterId Id = 0x00000203;
} // namespace DehumidificationControl
namespace ThermostatUserInterfaceConfiguration {
static constexpr ClusterId Id = 0x00000204;
} // namespace ThermostatUserInterfaceConfiguration
namespace ColorControl {
static constexpr ClusterId Id = 0x00000300;
} // namespace ColorControl
namespace BallastConfiguration {
static constexpr ClusterId Id = 0x00000301;
} // namespace BallastConfiguration
namespace IlluminanceMeasurement {
static constexpr ClusterId Id = 0x00000400;
} // namespace IlluminanceMeasurement
namespace IlluminanceLevelSensing {
static constexpr ClusterId Id = 0x00000401;
} // namespace IlluminanceLevelSensing
namespace TemperatureMeasurement {
static constexpr ClusterId Id = 0x00000402;
} // namespace TemperatureMeasurement
namespace PressureMeasurement {
static constexpr ClusterId Id = 0x00000403;
} // namespace PressureMeasurement
namespace FlowMeasurement {
static constexpr ClusterId Id = 0x00000404;
} // namespace FlowMeasurement
namespace RelativeHumidityMeasurement {
static constexpr ClusterId Id = 0x00000405;
} // namespace RelativeHumidityMeasurement
namespace OccupancySensing {
static constexpr ClusterId Id = 0x00000406;
} // namespace OccupancySensing
namespace CarbonMonoxideConcentrationMeasurement {
static constexpr ClusterId Id = 0x0000040C;
} // namespace CarbonMonoxideConcentrationMeasurement
namespace CarbonDioxideConcentrationMeasurement {
static constexpr ClusterId Id = 0x0000040D;
} // namespace CarbonDioxideConcentrationMeasurement
namespace EthyleneConcentrationMeasurement {
static constexpr ClusterId Id = 0x0000040E;
} // namespace EthyleneConcentrationMeasurement
namespace EthyleneOxideConcentrationMeasurement {
static constexpr ClusterId Id = 0x0000040F;
} // namespace EthyleneOxideConcentrationMeasurement
namespace HydrogenConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000410;
} // namespace HydrogenConcentrationMeasurement
namespace HydrogenSulphideConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000411;
} // namespace HydrogenSulphideConcentrationMeasurement
namespace NitricOxideConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000412;
} // namespace NitricOxideConcentrationMeasurement
namespace NitrogenDioxideConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000413;
} // namespace NitrogenDioxideConcentrationMeasurement
namespace OxygenConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000414;
} // namespace OxygenConcentrationMeasurement
namespace OzoneConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000415;
} // namespace OzoneConcentrationMeasurement
namespace SulfurDioxideConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000416;
} // namespace SulfurDioxideConcentrationMeasurement
namespace DissolvedOxygenConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000417;
} // namespace DissolvedOxygenConcentrationMeasurement
namespace BromateConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000418;
} // namespace BromateConcentrationMeasurement
namespace ChloraminesConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000419;
} // namespace ChloraminesConcentrationMeasurement
namespace ChlorineConcentrationMeasurement {
static constexpr ClusterId Id = 0x0000041A;
} // namespace ChlorineConcentrationMeasurement
namespace FecalColiformAndEColiConcentrationMeasurement {
static constexpr ClusterId Id = 0x0000041B;
} // namespace FecalColiformAndEColiConcentrationMeasurement
namespace FluorideConcentrationMeasurement {
static constexpr ClusterId Id = 0x0000041C;
} // namespace FluorideConcentrationMeasurement
namespace HaloaceticAcidsConcentrationMeasurement {
static constexpr ClusterId Id = 0x0000041D;
} // namespace HaloaceticAcidsConcentrationMeasurement
namespace TotalTrihalomethanesConcentrationMeasurement {
static constexpr ClusterId Id = 0x0000041E;
} // namespace TotalTrihalomethanesConcentrationMeasurement
namespace TotalColiformBacteriaConcentrationMeasurement {
static constexpr ClusterId Id = 0x0000041F;
} // namespace TotalColiformBacteriaConcentrationMeasurement
namespace TurbidityConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000420;
} // namespace TurbidityConcentrationMeasurement
namespace CopperConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000421;
} // namespace CopperConcentrationMeasurement
namespace LeadConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000422;
} // namespace LeadConcentrationMeasurement
namespace ManganeseConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000423;
} // namespace ManganeseConcentrationMeasurement
namespace SulfateConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000424;
} // namespace SulfateConcentrationMeasurement
namespace BromodichloromethaneConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000425;
} // namespace BromodichloromethaneConcentrationMeasurement
namespace BromoformConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000426;
} // namespace BromoformConcentrationMeasurement
namespace ChlorodibromomethaneConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000427;
} // namespace ChlorodibromomethaneConcentrationMeasurement
namespace ChloroformConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000428;
} // namespace ChloroformConcentrationMeasurement
namespace SodiumConcentrationMeasurement {
static constexpr ClusterId Id = 0x00000429;
} // namespace SodiumConcentrationMeasurement
namespace IasZone {
static constexpr ClusterId Id = 0x00000500;
} // namespace IasZone
namespace IasAce {
static constexpr ClusterId Id = 0x00000501;
} // namespace IasAce
namespace IasWd {
static constexpr ClusterId Id = 0x00000502;
} // namespace IasWd
namespace WakeOnLan {
static constexpr ClusterId Id = 0x00000503;
} // namespace WakeOnLan
namespace TvChannel {
static constexpr ClusterId Id = 0x00000504;
} // namespace TvChannel
namespace TargetNavigator {
static constexpr ClusterId Id = 0x00000505;
} // namespace TargetNavigator
namespace MediaPlayback {
static constexpr ClusterId Id = 0x00000506;
} // namespace MediaPlayback
namespace MediaInput {
static constexpr ClusterId Id = 0x00000507;
} // namespace MediaInput
namespace LowPower {
static constexpr ClusterId Id = 0x00000508;
} // namespace LowPower
namespace KeypadInput {
static constexpr ClusterId Id = 0x00000509;
} // namespace KeypadInput
namespace ContentLauncher {
static constexpr ClusterId Id = 0x0000050A;
} // namespace ContentLauncher
namespace AudioOutput {
static constexpr ClusterId Id = 0x0000050B;
} // namespace AudioOutput
namespace ApplicationLauncher {
static constexpr ClusterId Id = 0x0000050C;
} // namespace ApplicationLauncher
namespace ApplicationBasic {
static constexpr ClusterId Id = 0x0000050D;
} // namespace ApplicationBasic
namespace AccountLogin {
static constexpr ClusterId Id = 0x0000050E;
} // namespace AccountLogin
namespace TestCluster {
static constexpr ClusterId Id = 0x0000050F;
} // namespace TestCluster
namespace Messaging {
static constexpr ClusterId Id = 0x00000703;
} // namespace Messaging
namespace ApplianceIdentification {
static constexpr ClusterId Id = 0x00000B00;
} // namespace ApplianceIdentification
namespace MeterIdentification {
static constexpr ClusterId Id = 0x00000B01;
} // namespace MeterIdentification
namespace ApplianceEventsAndAlert {
static constexpr ClusterId Id = 0x00000B02;
} // namespace ApplianceEventsAndAlert
namespace ApplianceStatistics {
static constexpr ClusterId Id = 0x00000B03;
} // namespace ApplianceStatistics
namespace ElectricalMeasurement {
static constexpr ClusterId Id = 0x00000B04;
} // namespace ElectricalMeasurement
namespace Binding {
static constexpr ClusterId Id = 0x0000F000;
} // namespace Binding
namespace GroupKeyManagement {
static constexpr ClusterId Id = 0x0000F004;
} // namespace GroupKeyManagement
namespace SampleMfgSpecificCluster {
static constexpr ClusterId Id = 0x1002FC00;
} // namespace SampleMfgSpecificCluster
namespace SampleMfgSpecificCluster2 {
static constexpr ClusterId Id = 0x1049FC00;
} // namespace SampleMfgSpecificCluster2

} // namespace Clusters
} // namespace app
} // namespace chip
