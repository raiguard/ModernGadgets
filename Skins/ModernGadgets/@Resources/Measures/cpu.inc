; MODERNGADGETS "CPU" MEASURES

[MeasureFixedPrecisionFormatScript]
Measure=Script
ScriptFile=#@#Scripts\FixedPrecisionFormat.lua

; ----- HWiNFO Detection -----

[MeasureHwinfoDetect]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core0Temp#
HWiNFOType=CurrentValue
IfCondition=(MeasureHwinfoDetect = -9000) ? 0 : 1
IfTrueAction=[!SetVariable hwinfoInUse 0]
IfFalseAction=[!SetVariable hwinfoInUse 0]
DynamicVariables=1

; ----- CPU Name -----

[MeasureCpuName]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\CentralProcessor\0
RegValue=ProcessorNameString
UpdateDivider=-1

[MeasureCpuDisplayName]
Measure=String
String=[MeasureCpuName]
SubStitute="\(R\)":"","\(TM\)":"","\(tm\)":"","(.*) CPU.*":"\1"
UpdateDivider=-1

; ----- RAM Info -----

[MeasureRamUsed]
Measure=PhysicalMemory
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureRamUsed], #fpfRamDepth#, '1k', 'textRamUsed')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureRamUsed], #fpfRamDepth#, '1k', 'textRamUsed')"]

[MeasureRamTotal]
Measure=PhysicalMemory
Total=1
UpdateDivider=-1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureRamTotal], 1, '1k', 'textRamTotal')"]

[MeasureRamUsage]
Measure=Calc
Formula=MeasureRamUsed / MeasureRamTotal * 100
MinValue=0
MaxValue=100

; ----- Page/Swap Info -----

[Measure4KPagesInUse]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=Paging File
PerfMonCounter=% Usage
PerfMonInstance=_Total
PerfMonDifference=0
Disabled=(#showPage# = 1 ? 0 : 1)

[MeasurePageUsed]
Measure=Calc
Formula=Measure4KPagesInUse * 4096
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasurePageUsed], #fpfPageDepth#, '1k', 'textPageUsed')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasurePageUsed], #fpfPageDepth#, '1k', 'textPageUsed')"]
Disabled=(#showPage# = 1 ? 0 : 1)

[MeasurePageTotal]
Measure=SwapMemory
Total=1
UpdateDivider=-1
Disabled=(#showPage# = 1 ? 0 : 1)

[MeasurePageTotalCalc]
Measure=Calc
Formula=MeasurePageTotal-MeasureRamTotal
UpdateDivider=-1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasurePageTotalCalc], 1, '1k', 'textPageTotal')"]
Disabled=(#showPage# = 1 ? 0 : 1)

[MeasurePageUsage]
Measure=Calc
Formula=(MeasurePageUsed / MeasurePageTotalCalc) * 100
MinValue=0
MaxValue=100
Disabled=(#showPage# = 1 ? 0 : 1)

; ----- Fan Info -----

[MeasureCpuFanSpeed]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-MOBO-SensorId#
HWiNFOSensorInstance=#HWiNFO-MOBO-SensorInstance#
HWiNFOEntryId=#HWiNFO-MOBO-CPUFan#
HWiNFOType=CurrentValue

[MeasureCpuFanSpeedMax]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-MOBO-SensorId#
HWiNFOSensorInstance=#HWiNFO-MOBO-SensorInstance#
HWiNFOEntryId=#HWiNFO-MOBO-CPUFan#
HWiNFOType=MaximumValue

[MeasureCpuFanUsage]
Measure=Calc
Formula=MeasureCpuFanSpeed / MeasureCpuFanSpeedMax * 100
MinValue=0
MaxValue=100

; ----- CPU Cores -----

; Cores/Threads Counts
[MeasureCpuLogicalCores]
Measure=Calc
Formula=%NUMBER_OF_PROCESSORS%
IfCondition=[MeasureCpuLogicalCores:] <> #cpuCores#
IfTrueAction=[!CommandMeasure MeasureCpuConfigScript "ConfigCores([MeasureCpuLogicalCores], [MeasureCpuThreadsPerCore])"]

[MeasureCpuThreadsPerCore]
Measure=Plugin
Plugin=ActiveNet
Type=ThreadsPerCore
IfCondition=[MeasureCpuThreadsPerCore:] <> #threadsPerCore#
IfTrueAction=[!WriteKeyValue Variables threadsPerCore [MeasureCpuThreadsPerCore] "#varPath#"][!Refresh]
DynamicVariables=1
UpdateDivider=-1

; Core Usages
[MeasureCpuCore0Usage]
Measure=CPU

[MeasureCpuCore1Usage]
Measure=CPU
Processor=1

[MeasureCpuCore2Usage]
Measure=CPU
Processor=2

[MeasureCpuCore3Usage]
Measure=CPU
Processor=3

[MeasureCpuCore4Usage]
Measure=CPU
Processor=4

[MeasureCpuCore5Usage]
Measure=CPU
Processor=5

[MeasureCpuCore6Usage]
Measure=CPU
Processor=6

[MeasureCpuCore7Usage]
Measure=CPU
Processor=7

[MeasureCpuCore8Usage]
Measure=CPU
Processor=8

[MeasureCpuCore9Usage]
Measure=CPU
Processor=9

[MeasureCpuCore10Usage]
Measure=CPU
Processor=10

[MeasureCpuCore11Usage]
Measure=CPU
Processor=11

[MeasureCpuCore12Usage]
Measure=CPU
Processor=12

[MeasureCpuCore13Usage]
Measure=CPU
Processor=13

[MeasureCpuCore14Usage]
Measure=CPU
Processor=14

[MeasureCpuCore15Usage]
Measure=CPU
Processor=15

; Core Temperatures
[MeasureCpuTempCore0]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core0Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #isHWiNFOInUse# = 0
DynamicVariables=1

[MeasureCpuTempCore1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core0Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore2# || #isHWiNFOInUse# = 0
DynamicVariables=1

[MeasureCpuTempCore2]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core1Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore3# || #isHWiNFOInUse# = 0
DynamicVariables=1

[MeasureCpuTempCore3]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core1Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore4# || #isHWiNFOInUse# = 0
DynamicVariables=1

[MeasureCpuTempCore4]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core2Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore5# || #isHWiNFOInUse# = 0
DynamicVariables=1

[MeasureCpuTempCore5]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core2Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore6# || #isHWiNFOInUse# = 0
DynamicVariables=1

[MeasureCpuTempCore6]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core3Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore7# || #isHWiNFOInUse# = 0
DynamicVariables=1

[MeasureCpuTempCore7]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core3Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore8# || #isHWiNFOInUse# = 0
DynamicVariables=1

[MeasureCpuTempCore8]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core4Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore9# || #isHWiNFOInUse# = 0
DynamicVariables=1

[MeasureCpuTempCore9]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core4Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore10# || #isHWiNFOInUse# = 0
DynamicVariables=1

[MeasureCpuTempCore10]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core5Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore11# || #isHWiNFOInUse# = 0
DynamicVariables=1

[MeasureCpuTempCore11]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core5Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore12# || #isHWiNFOInUse# = 0
DynamicVariables=1

[MeasureCpuTempCore12]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core6Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore13# || #isHWiNFOInUse# = 0
DynamicVariables=1

[MeasureCpuTempCore13]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core6Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore14# || #isHWiNFOInUse# = 0
DynamicVariables=1

[MeasureCpuTempCore14]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core7Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore15# || #isHWiNFOInUse# = 0
DynamicVariables=1

[MeasureCpuTempCore15]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core7Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore16# || #isHWiNFOInUse# = 0
DynamicVariables=1

; Cpu Clock Speed
[MeasureCpuClockSpeed]
Measure=Plugin
Plugin=PowerPlugin
PowerState=MHz
Disabled=(#showCpuClockSpeed# = 0) ? 1 : 0

[MeasureCpuClockSpeedHWiNFOCore0]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core0Clock#
HWiNFOType=CurrentValue
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0

[MeasureCpuClockSpeedHWiNFOCore1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core1Clock#
HWiNFOType=CurrentValue
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0

[MeasureCpuClockSpeedHWiNFOCore2]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core2Clock#
HWiNFOType=CurrentValue
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0

[MeasureCpuClockSpeedHWiNFOCore3]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core3Clock#
HWiNFOType=CurrentValue
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0

[MeasureCpuClockSpeedHWiNFOCore4]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core4Clock#
HWiNFOType=CurrentValue
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0

[MeasureCpuClockSpeedHWiNFOCore5]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core5Clock#
HWiNFOType=CurrentValue
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0

[MeasureCpuClockSpeedHWiNFOCore6]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core6Clock#
HWiNFOType=CurrentValue
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0

[MeasureCpuClockSpeedHWiNFOCore7]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core7Clock#
HWiNFOType=CurrentValue
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0

[MeasureCpuClockSpeedHWiNFOCalc]
Measure=Calc
Formula=(#useHwinfoClockSpeed# = 0) ? MeasureCpuClockSpeed : Max(Max(Max(Max(Max(Max(Max(MeasureCpuClockSpeedHWiNFOCore0, MeasureCpuClockSpeedHWiNFOCore1), MeasureCpuClockSpeedHWiNFOCore2), MeasureCpuClockSpeedHWiNFOCore3), MeasureCpuClockSpeedHWiNFOCore4), MeasureCpuClockSpeedHWiNFOCore5), MeasureCpuClockSpeedHWiNFOCore6), MeasureCpuClockSpeedHWiNFOCore7)
IfCondition=(MeasureCpuClockSpeedHWiNFOCalc = 0) && (#useHwinfoClockSpeed# = 1)
IfTrueAction=[!SetOption CpuClockSpeedValueString MeasureName "MeasureCpuClockSpeed"][!UpdateMeter "CpuClockSpeedValueString"]
IfFalseAction=[!SetOption CpuClockSpeedValueString MeasureName "MeasureCpuClockSpeedHWiNFOCalc"][!UpdateMeter "CpuClockSpeedValueString"]
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0
