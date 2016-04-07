; GPU0 MEASURES

[MeasureFixedPrecisionFormatScript]
Measure=Script
ScriptFile=#SKINSPATH#CoreMeter\@Resources\Scripts\FixedPrecisionFormat.lua

; General GPU information
[MeasureGpu0Name]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOType=SensorName

[MeasureGpu0DisplayName]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOType=SensorNameCustom
Substitute="GPU [#0]: ":"","GPU [#1]: ":"",":":""

[MeasureGpu0ClockSpeed]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Clock#
HWiNFOType=CurrentValue

[MeasureGpu0Temperature]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Temp#
HWiNFOType=CurrentValue

[MeasureGpu0Usage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-CoreLoad#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

; ----- Memory -----

[MeasureGpu0MemoryClockSpeed]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-MemoryClock#
HWiNFOType=CurrentValue

[MeasureGpu0MemUsedPercent]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-MemoryUsage#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100
IfCondition=MeasureGpu0MemUsedPercent > 0
IfTrueAction=[!EnableMeasure "MeasureGpu0RamTotal"]
IfFalseAction=[!DisableMeasure "MeasureGpu0RamTotal"][!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber(0.0, 2, '1k', 'textMemoryTotal')"]

[MeasureGpu0MemUsedMBytes]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-MemoryAlloc#
HWiNFOType=CurrentValue

[MeasureGpu0RamUsed]
Measure=Calc
Formula=MeasureGpu0MemUsedMBytes * 1024 * 1024
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureGpu0RamUsed], 3, '1k', 'textMemoryUsedGpu0')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureGpu0RamUsed], 3, '1k', 'textMemoryUsedGpu0')"]

[MeasureGpu0RamTotal]
Measure=Calc
Formula=(MeasureGpu0MemUsedPercent = 0) ? 0 : MeasureGpu0MemUsedMBytes * 1024 * 1024 * 100 / MeasureGpu0MemUsedPercent
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureGpu0RamTotal], 1, '1k', 'textMemoryTotalGpu0')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureGpu0RamTotal], 1, '1k', 'textMemoryTotalGpu0')"]
Disabled=1

; ----- Fan Info -----

[MeasureGpu0FanSpeed]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-FanSpeed#
HWiNFOType=CurrentValue

[MeasureGpu0FanUsage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-FanUsage#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

; ----- Misc Info -----

[MeasureGpu0ShaderClock]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-VideoClock#
HWiNFOType=CurrentValue

[MeasureGpu0MemoryControllerLoad]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-MemController#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[MeasureGpu0CoreVoltage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-CoreVoltage#
HWiNFOType=CurrentValue
