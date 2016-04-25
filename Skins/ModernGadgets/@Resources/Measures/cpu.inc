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
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\CentralProcessor\0
RegValue=ProcessorNameString
RegExpSubstitute=1
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
IfCondition=MeasureCpuLogicalCores <> #cpuCores#
IfTrueAction=[!CommandMeasure MeasureCpuConfigScript "ConfigCores([MeasureCpuLogicalCores], [MeasureCpuThreadsPerCore])"]
DynamicVariables=1

[MeasureCpuThreadsPerCore]
Measure=Plugin
Plugin=ActiveNet
Type=ThreadsPerCore
IfCondition=MeasureCpuThreadsPerCore <> #threadsPerCore#
IfTrueAction=[!WriteKeyValue Variables threadsPerCore [MeasureCpuThreadsPerCore] "#varPath#"][!Refresh]
DynamicVariables=1
UpdateDivider=-1

; Core Usages
[MeasureCpuUsageCore1]
Measure=CPU

[MeasureCpuUsageCore2]
Measure=CPU
Processor=1
Disabled=#hideCore2#

[MeasureCpuUsageCore3]
Measure=CPU
Processor=2
Disabled=#hideCore3#

[MeasureCpuUsageCore4]
Measure=CPU
Processor=3
Disabled=#hideCore4#

[MeasureCpuUsageCore5]
Measure=CPU
Processor=4
Disabled=#hideCore5#

[MeasureCpuUsageCore6]
Measure=CPU
Processor=5
Disabled=#hideCore6#

[MeasureCpuUsageCore7]
Measure=CPU
Processor=6
Disabled=#hideCore7#

[MeasureCpuUsageCore8]
Measure=CPU
Processor=7
Disabled=#hideCore8#

[MeasureCpuUsageCore9]
Measure=CPU
Processor=8
Disabled=#hideCore9#

[MeasureCpuUsageCore10]
Measure=CPU
Processor=9
Disabled=#hideCore10#

[MeasureCpuUsageCore11]
Measure=CPU
Processor=10
Disabled=#hideCore11#

[MeasureCpuUsageCore12]
Measure=CPU
Processor=11
Disabled=#hideCore12#

[MeasureCpuUsageCore13]
Measure=CPU
Processor=12
Disabled=#hideCore13#

[MeasureCpuUsageCore14]
Measure=CPU
Processor=13
Disabled=#hideCore14#

[MeasureCpuUsageCore15]
Measure=CPU
Processor=14
Disabled=#hideCore15#

[MeasureCpuUsageCore16]
Measure=CPU
Processor=15
Disabled=#hideCore16#

[MeasureCpuUsageTotal]
Measure=CPU
Total=1

; Core Temperatures
[MeasureCpuTempCore1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core0Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #isHWiNFOInUse# = 0


[MeasureCpuTempCore2]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core0Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore2# || #isHWiNFOInUse# = 0


[MeasureCpuTempCore3]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core1Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore3# || #isHWiNFOInUse# = 0


[MeasureCpuTempCore4]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core1Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore4# || #isHWiNFOInUse# = 0


[MeasureCpuTempCore5]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core2Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore5# || #isHWiNFOInUse# = 0


[MeasureCpuTempCore6]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core2Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore6# || #isHWiNFOInUse# = 0


[MeasureCpuTempCore7]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core3Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore7# || #isHWiNFOInUse# = 0


[MeasureCpuTempCore8]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core3Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore8# || #isHWiNFOInUse# = 0


[MeasureCpuTempCore9]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core4Temp#
HWiNFOType=CurrentValue
Disabled=1


[MeasureCpuTempCore10]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core4Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore10# || #isHWiNFOInUse# = 0


[MeasureCpuTempCore11]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core5Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore11# || #isHWiNFOInUse# = 0


[MeasureCpuTempCore12]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core5Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore12# || #isHWiNFOInUse# = 0


[MeasureCpuTempCore13]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core6Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore13# || #isHWiNFOInUse# = 0


[MeasureCpuTempCore14]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core6Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore14# || #isHWiNFOInUse# = 0


[MeasureCpuTempCore15]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core7Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore15# || #isHWiNFOInUse# = 0


[MeasureCpuTempCore16]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core7Temp#
HWiNFOType=CurrentValue
Disabled=#disableTemps# || #hideCore16# || #isHWiNFOInUse# = 0


; Cpu Clock Speed
[MeasureCpuClockSpeed]
Measure=Plugin
Plugin=PowerPlugin
PowerState=MHz
Disabled=(#showCpuClockSpeed# = 0) ? 1 : 0

[MeasureCpuClockSpeedHwinfoCore0]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core0Clock#
HWiNFOType=CurrentValue
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0

[MeasureCpuClockSpeedHwinfoCore1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core1Clock#
HWiNFOType=CurrentValue
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0

[MeasureCpuClockSpeedHwinfoCore2]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core2Clock#
HWiNFOType=CurrentValue
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0

[MeasureCpuClockSpeedHwinfoCore3]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core3Clock#
HWiNFOType=CurrentValue
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0

[MeasureCpuClockSpeedHwinfoCore4]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core4Clock#
HWiNFOType=CurrentValue
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0

[MeasureCpuClockSpeedHwinfoCore5]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core5Clock#
HWiNFOType=CurrentValue
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0

[MeasureCpuClockSpeedHwinfoCore6]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core6Clock#
HWiNFOType=CurrentValue
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0

[MeasureCpuClockSpeedHwinfoCore7]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core7Clock#
HWiNFOType=CurrentValue
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0

[MeasureCpuClockSpeedHwinfoCalc]
Measure=Calc
Formula=(#useHwinfoClockSpeed# = 0) ? MeasureCpuClockSpeed : Max(Max(Max(Max(Max(Max(Max(MeasureCpuClockSpeedHwinfoCore0, MeasureCpuClockSpeedHwinfoCore1), MeasureCpuClockSpeedHwinfoCore2), MeasureCpuClockSpeedHwinfoCore3), MeasureCpuClockSpeedHwinfoCore4), MeasureCpuClockSpeedHwinfoCore5), MeasureCpuClockSpeedHwinfoCore6), MeasureCpuClockSpeedHwinfoCore7)
IfCondition=(MeasureCpuClockSpeedHwinfoCalc = 0) && (#useHwinfoClockSpeed# = 1)
IfTrueAction=[!SetOption CpuClockSpeedValueString MeasureName "MeasureCpuClockSpeed"][!UpdateMeter "CpuClockSpeedValueString"]
IfFalseAction=[!SetOption CpuClockSpeedValueString MeasureName "MeasureCpuClockSpeedHwinfoCalc"][!UpdateMeter "CpuClockSpeedValueString"]
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0
