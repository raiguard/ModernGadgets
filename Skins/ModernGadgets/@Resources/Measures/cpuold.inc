; CPU Measures

[MeasureFixedPrecisionFormatScript]
Measure=Script
ScriptFile=#SKINSPATH#CoreMeter\@Resources\Scripts\FixedPrecisionFormat.lua

; ## CPU CLOCK SPEED ##
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
IfCondition=(MeasureCpuClockSpeedHWiNFOCalc = 0) && (#showCpuClockSpeed# = 2)
IfTrueAction=[!SetOption CpuClockSpeedValueString MeasureName "MeasureCpuClockSpeed"][!UpdateMeter "CpuClockSpeedValueString"]
IfFalseAction=[!SetOption CpuClockSpeedValueString MeasureName "MeasureCpuClockSpeedHWiNFOCalc"][!UpdateMeter "CpuClockSpeedValueString"]
Disabled=#showCpuClockSpeed# = 0 ? 1 : 0

; ## RAM ##
[MeasureRamUsage]
Measure=Calc
Formula=MeasureRamUsed / MeasureRamTotal * 100
MinValue=0
MaxValue=100

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

; ## PAGE FILE ##
[MeasurePageTotal]
Measure=SwapMemory
Total=1
UpdateDivider=-1
Disabled=(#showPage# = 1 ? 0 : 1)

[M4KPagesInUse]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=Paging File
PerfMonCounter=% Usage
PerfMonInstance=_Total
PerfMonDifference=0
Disabled=(#showPage# = 1 ? 0 : 1)

[MeasurePageTotalCalc]
Measure=Calc
Formula=MeasurePageTotal-MeasureRamTotal
UpdateDivider=-1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasurePageTotalCalc], 1, '1k', 'textPageTotal')"]
Disabled=(#showPage# = 1 ? 0 : 1)

[MeasurePageUsed]
Measure=Calc
Formula=M4KPagesInUse * 4096
; Formula=10000000000
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasurePageUsed], #fpfPageDepth#, '1k', 'textPageUsed')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasurePageUsed], #fpfPageDepth#, '1k', 'textPageUsed')"]
Disabled=(#showPage# = 1 ? 0 : 1)

[MeasurePageUsage]
Measure=Calc
Formula=(MeasurePageUsed / MeasurePageTotalCalc) * 100
MinValue=0
MaxValue=100
Disabled=(#showPage# = 1 ? 0 : 1)

; ## CPU FAN SPEED ##
[MeasureCpu0FanRpm]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-MOBO-SensorId#
HWiNFOSensorInstance=#HWiNFO-MOBO-SensorInstance#
HWiNFOEntryId=#HWiNFO-MOBO-CPUFan#
HWiNFOType=CurrentValue

[MeasureCpu0FanRpmMax]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-MOBO-SensorId#
HWiNFOSensorInstance=#HWiNFO-MOBO-SensorInstance#
HWiNFOEntryId=#HWiNFO-MOBO-CPUFan#
HWiNFOType=MaximumValue

[MeasureCpu0FanUsage]
Measure=Calc
Formula=(MeasureCpu0FanRpm / MeasureCpu0FanRpmMax) * 100
MinValue=0
MaxValue=100

; ## CPU INFORMATION ##
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

[MeasureCpuLogicalCores]
Measure=Calc
Formula=%NUMBER_OF_PROCESSORS%
; Formula=16
IfCondition=(MeasureCpuLogicalCores = 1) && (MeasureCpuLogicalCores <> #cpuCores#)
IfTrueAction=[!WriteKeyValue Variables hideCore2 1 "#varPath#"][!WriteKeyValue Variables hideCore3 1 "#varPath#"][!WriteKeyValue Variables hideCore4 1 "#varPath#"][!WriteKeyValue Variables hideCore5 1 "#varPath#"][!WriteKeyValue Variables hideCore6 1 "#varPath#"][!WriteKeyValue Variables hideCore7 1 "#varPath#"][!WriteKeyValue Variables hideCore8 1 "#varPath#"][!WriteKeyValue Variables hideCore9 1 "#varPath#"][!WriteKeyValue Variables hideCore10 1 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCpuLogicalCores] "#varPath#"][!Refresh]

IfCondition2=(MeasureCpuLogicalCores = 2) && (MeasureCpuLogicalCores <> #cpuCores#)
IfTrueAction2=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 1 "#varPath#"][!WriteKeyValue Variables hideCore4 1 "#varPath#"][!WriteKeyValue Variables hideCore5 1 "#varPath#"][!WriteKeyValue Variables hideCore6 1 "#varPath#"][!WriteKeyValue Variables hideCore7 1 "#varPath#"][!WriteKeyValue Variables hideCore8 1 "#varPath#"][!WriteKeyValue Variables hideCore9 1 "#varPath#"][!WriteKeyValue Variables hideCore10 1 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCpuLogicalCores] "#varPath#"][!Refresh]

IfCondition3=(MeasureCpuLogicalCores = 3) && (MeasureCpuLogicalCores <> #cpuCores#)
IfTrueAction3=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 1 "#varPath#"][!WriteKeyValue Variables hideCore5 1 "#varPath#"][!WriteKeyValue Variables hideCore6 1 "#varPath#"][!WriteKeyValue Variables hideCore7 1 "#varPath#"][!WriteKeyValue Variables hideCore8 1 "#varPath#"][!WriteKeyValue Variables hideCore9 1 "#varPath#"][!WriteKeyValue Variables hideCore10 1 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCpuLogicalCores] "#varPath#"][!Refresh]

IfCondition4=(MeasureCpuLogicalCores = 4) && (MeasureCpuLogicalCores <> #cpuCores#)
IfTrueAction4=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 1 "#varPath#"][!WriteKeyValue Variables hideCore6 1 "#varPath#"][!WriteKeyValue Variables hideCore7 1 "#varPath#"][!WriteKeyValue Variables hideCore8 1 "#varPath#"][!WriteKeyValue Variables hideCore9 1 "#varPath#"][!WriteKeyValue Variables hideCore10 1 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCpuLogicalCores] "#varPath#"][!Refresh]

IfCondition5=(MeasureCpuLogicalCores = 5) && (MeasureCpuLogicalCores <> #cpuCores#)
IfTrueAction5=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 1 "#varPath#"][!WriteKeyValue Variables hideCore7 1 "#varPath#"][!WriteKeyValue Variables hideCore8 1 "#varPath#"][!WriteKeyValue Variables hideCore9 1 "#varPath#"][!WriteKeyValue Variables hideCore10 1 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCpuLogicalCores] "#varPath#"][!Refresh]

IfCondition6=(MeasureCpuLogicalCores = 6) && (MeasureCpuLogicalCores <> #cpuCores#)
IfTrueAction6=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 1 "#varPath#"][!WriteKeyValue Variables hideCore8 1 "#varPath#"][!WriteKeyValue Variables hideCore9 1 "#varPath#"][!WriteKeyValue Variables hideCore10 1 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCpuLogicalCores] "#varPath#"][!Refresh]

IfCondition7=(MeasureCpuLogicalCores = 7) && (MeasureCpuLogicalCores <> #cpuCores#)
IfTrueAction7=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 1 "#varPath#"][!WriteKeyValue Variables hideCore9 1 "#varPath#"][!WriteKeyValue Variables hideCore10 1 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCpuLogicalCores] "#varPath#"][!Refresh]

IfCondition8=(MeasureCpuLogicalCores = 8) && (MeasureCpuLogicalCores <> #cpuCores#)
IfTrueAction8=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 0 "#varPath#"][!WriteKeyValue Variables hideCore9 1 "#varPath#"][!WriteKeyValue Variables hideCore10 1 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCpuLogicalCores] "#varPath#"][!Refresh]

IfCondition9=(MeasureCpuLogicalCores = 9) && (MeasureCpuLogicalCores <> #cpuCores#)
IfTrueAction9=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 0 "#varPath#"][!WriteKeyValue Variables hideCore9 0 "#varPath#"][!WriteKeyValue Variables hideCore10 1 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCpuLogicalCores] "#varPath#"][!Refresh]

IfCondition10=(MeasureCpuLogicalCores = 10) && (MeasureCpuLogicalCores <> #cpuCores#)
IfTrueAction10=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 0 "#varPath#"][!WriteKeyValue Variables hideCore9 0 "#varPath#"][!WriteKeyValue Variables hideCore10 0 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCpuLogicalCores] "#varPath#"][!Refresh]

IfCondition11=(MeasureCpuLogicalCores = 11) && (MeasureCpuLogicalCores <> #cpuCores#)
IfTrueAction11=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 0 "#varPath#"][!WriteKeyValue Variables hideCore9 0 "#varPath#"][!WriteKeyValue Variables hideCore10 0 "#varPath#"][!WriteKeyValue Variables hideCore11 0 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCpuLogicalCores] "#varPath#"][!Refresh]

IfCondition12=(MeasureCpuLogicalCores = 12) && (MeasureCpuLogicalCores <> #cpuCores#)
IfTrueAction12=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 0 "#varPath#"][!WriteKeyValue Variables hideCore9 0 "#varPath#"][!WriteKeyValue Variables hideCore10 0 "#varPath#"][!WriteKeyValue Variables hideCore11 0 "#varPath#"][!WriteKeyValue Variables hideCore12 0 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCpuLogicalCores] "#varPath#"][!Refresh]

IfCondition13=(MeasureCpuLogicalCores = 13) && (MeasureCpuLogicalCores <> #cpuCores#)
IfTrueAction13=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 0 "#varPath#"][!WriteKeyValue Variables hideCore9 0 "#varPath#"][!WriteKeyValue Variables hideCore10 0 "#varPath#"][!WriteKeyValue Variables hideCore11 0 "#varPath#"][!WriteKeyValue Variables hideCore12 0 "#varPath#"][!WriteKeyValue Variables hideCore13 0 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCpuLogicalCores] "#varPath#"][!Refresh]

IfCondition14=(MeasureCpuLogicalCores = 14) && (MeasureCpuLogicalCores <> #cpuCores#)
IfTrueAction14=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 0 "#varPath#"][!WriteKeyValue Variables hideCore9 0 "#varPath#"][!WriteKeyValue Variables hideCore10 0 "#varPath#"][!WriteKeyValue Variables hideCore11 0 "#varPath#"][!WriteKeyValue Variables hideCore12 0 "#varPath#"][!WriteKeyValue Variables hideCore13 0 "#varPath#"][!WriteKeyValue Variables hideCore14 0 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCpuLogicalCores] "#varPath#"][!Refresh]

IfCondition15=(MeasureCpuLogicalCores = 15) && (MeasureCpuLogicalCores <> #cpuCores#)
IfTrueAction15=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 0 "#varPath#"][!WriteKeyValue Variables hideCore9 0 "#varPath#"][!WriteKeyValue Variables hideCore10 0 "#varPath#"][!WriteKeyValue Variables hideCore11 0 "#varPath#"][!WriteKeyValue Variables hideCore12 0 "#varPath#"][!WriteKeyValue Variables hideCore13 0 "#varPath#"][!WriteKeyValue Variables hideCore14 0 "#varPath#"][!WriteKeyValue Variables hideCore15 0 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCpuLogicalCores] "#varPath#"][!Refresh]

IfCondition16=(MeasureCpuLogicalCores > 15) && (MeasureCpuLogicalCores <> #cpuCores#)
IfTrueAction16=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 0 "#varPath#"][!WriteKeyValue Variables hideCore9 0 "#varPath#"][!WriteKeyValue Variables hideCore10 0 "#varPath#"][!WriteKeyValue Variables hideCore11 0 "#varPath#"][!WriteKeyValue Variables hideCore12 0 "#varPath#"][!WriteKeyValue Variables hideCore13 0 "#varPath#"][!WriteKeyValue Variables hideCore14 0 "#varPath#"][!WriteKeyValue Variables hideCore15 0 "#varPath#"][!WriteKeyValue Variables hideCore16 0 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCpuLogicalCores] "#varPath#"][!Refresh]
UpdateDivider=-1

[MeasureCpuPhysicalCores]
Measure=Plugin
Plugin=ActiveNet
Type=PhysicalCores
UpdateDivider=-1

[MeasureCpuPhysicalCPUs]
Measure=Plugin
Plugin=ActiveNet
Type=Processors
UpdateDivider=-1

[MeasureCpuThreadsPerCore]
Measure=Plugin
Plugin=ActiveNet
Type=ThreadsPerCore
IfCondition=[MeasureCpuThreadsPerCore] <> #threadsPerCore#
IfTrueAction=[!WriteKeyValue Variables threadsPerCore [MeasureCpuThreadsPerCore] "#varPath#"][!Refresh]
DynamicVariables=1
UpdateDivider=-1

[MeasureCpuUsageTotal]
Measure=CPU

[MeasureCpuUsageCore1]
Measure=CPU
Processor=1

[MeasureCpuUsageCore2]
Measure=CPU
Processor=2
Disabled=#hideCore2#

[MeasureCpuUsageCore3]
Measure=CPU
Processor=3
Disabled=#hideCore3#

[MeasureCpuUsageCore4]
Measure=CPU
Processor=4
Disabled=#hideCore4#

[MeasureCpuUsageCore5]
Measure=CPU
Processor=5
Disabled=#hideCore5#

[MeasureCpuUsageCore6]
Measure=CPU
Processor=6
Disabled=#hideCore6#

[MeasureCpuUsageCore7]
Measure=CPU
Processor=7
Disabled=#hideCore7#

[MeasureCpuUsageCore8]
Measure=CPU
Processor=8
Disabled=#hideCore8#

[MeasureCpuUsageCore9]
Measure=CPU
Processor=9
Disabled=#hideCore9#

[MeasureCpuUsageCore10]
Measure=CPU
Processor=10
Disabled=#hideCore10#

[MeasureCpuUsageCore11]
Measure=CPU
Processor=11
Disabled=#hideCore11#

[MeasureCpuUsageCore12]
Measure=CPU
Processor=12
Disabled=#hideCore12#

[MeasureCpuUsageCore13]
Measure=CPU
Processor=13
Disabled=#hideCore13#

[MeasureCpuUsageCore14]
Measure=CPU
Processor=14
Disabled=#hideCore14#

[MeasureCpuUsageCore15]
Measure=CPU
Processor=15
Disabled=#hideCore15#

[MeasureCpuUsageCore16]
Measure=CPU
Processor=16
Disabled=#hideCore16#

; ## CORE TEMPERATURES ##
[CalcIsHWiNFOInUse]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core0Temp#
HWiNFOType=CurrentValue
IfCondition=(CalcIsHWiNFOInUse > 0)
IfTrueAction=[!SetVariable isHWiNFOInUse 1]
IfFalseAction=[!SetVariable isHWiNFOInUse 0]


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
Disabled=#disableTemps# || #hideCore9# || #isHWiNFOInUse# = 0


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
