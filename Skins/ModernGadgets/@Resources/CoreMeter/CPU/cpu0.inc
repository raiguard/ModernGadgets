; COREMETER API
; cpu0 Measures

@includeHWiNFOConfig=#hwinfoConfigFilePath#

[MeasureFixedPrecisionFormatScript]
Measure=Script
ScriptFile=#SKINSPATH#CoreMeter\@Resources\Scripts\FixedPrecisionFormat.lua

; ## CPU CLOCK SPEED ##
[MeasureCpuClockSpeed]
Measure=Plugin
Plugin=PowerPlugin
PowerState=MHz
Disabled=(#showCpuClockSpeed# = 0 ? 1 : 0)

[MeasureCpuClockSpeedHWiNFOCore0]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core0Clock#
HWiNFOType=CurrentValue
Disabled=(#showCpuClockSpeed# = 0 ? 1 : 0)

[MeasureCpuClockSpeedHWiNFOCore1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core1Clock#
HWiNFOType=CurrentValue
Disabled=(#showCpuClockSpeed# = 0 ? 1 : 0)

[MeasureCpuClockSpeedHWiNFOCore2]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core2Clock#
HWiNFOType=CurrentValue
Disabled=(#showCpuClockSpeed# = 0 ? 1 : 0)

[MeasureCpuClockSpeedHWiNFOCore3]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core3Clock#
HWiNFOType=CurrentValue
Disabled=(#showCpuClockSpeed# = 0 ? 1 : 0)

[MeasureCpuClockSpeedHWiNFOCore4]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core4Clock#
HWiNFOType=CurrentValue
Disabled=(#showCpuClockSpeed# = 0 ? 1 : 0)

[MeasureCpuClockSpeedHWiNFOCore5]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core5Clock#
HWiNFOType=CurrentValue
Disabled=(#showCpuClockSpeed# = 0 ? 1 : 0)

[MeasureCpuClockSpeedHWiNFOCore6]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core6Clock#
HWiNFOType=CurrentValue
Disabled=(#showCpuClockSpeed# = 0 ? 1 : 0)

[MeasureCpuClockSpeedHWiNFOCore7]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core7Clock#
HWiNFOType=CurrentValue
Disabled=(#showCpuClockSpeed# = 0 ? 1 : 0)

[MeasureCpuClockSpeedHWiNFOCalc]
Measure=Calc
Formula=(#useHWiNFOClockSpeed# = 0) ? MeasureCpuClockSpeed : Max(Max(Max(Max(Max(Max(Max(MeasureCpuClockSpeedHWiNFOCore0, MeasureCpuClockSpeedHWiNFOCore1), MeasureCpuClockSpeedHWiNFOCore2), MeasureCpuClockSpeedHWiNFOCore3), MeasureCpuClockSpeedHWiNFOCore4), MeasureCpuClockSpeedHWiNFOCore5), MeasureCpuClockSpeedHWiNFOCore6), MeasureCpuClockSpeedHWiNFOCore7)
IfCondition=(MeasureCpuClockSpeedHWiNFOCalc = 0) && (#useHWiNFOClockSpeed# = 1)
IfTrueAction=[!SetOption CpuClockSpeedValueString MeasureName "MeasureCpuClockSpeed"][!UpdateMeter "CpuClockSpeedValueString"]
IfFalseAction=[!SetOption CpuClockSpeedValueString MeasureName "MeasureCpuClockSpeedHWiNFOCalc"][!UpdateMeter "CpuClockSpeedValueString"]
Disabled=(#showCpuClockSpeed# = 0 ? 1 : 0)

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
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasurePageUsed], #fpfPageDepth#, '1k', 'textPageUsed')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasurePageUsed], #fpfPageDepth#, '1k', 'textPageUsed')"]
Disabled=(#showPage# = 1 ? 0 : 1)

[MeasurePageUsage]
Measure=Calc
Formula=MeasurePageUsed / MeasurePageTotalCalc
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
[MeasureCPUName]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\CentralProcessor\0
RegValue=ProcessorNameString
UpdateDivider=-1

[MeasureCPUDisplayName]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\CentralProcessor\0
RegValue=ProcessorNameString
RegExpSubstitute=1
SubStitute="\(R\)":"","\(TM\)":"","\(tm\)":"","(.*) CPU.*":"\1"
UpdateDivider=-1

[MeasureCPULogicalCores]
Measure=Calc
Formula=%NUMBER_OF_PROCESSORS%
IfCondition=(MeasureCPULogicalCores = 1) && (MeasureCPULogicalCores <> #cpuCores#)
IfTrueAction=[!WriteKeyValue Variables hideCore2 1 "#varPath#"][!WriteKeyValue Variables hideCore3 1 "#varPath#"][!WriteKeyValue Variables hideCore4 1 "#varPath#"][!WriteKeyValue Variables hideCore5 1 "#varPath#"][!WriteKeyValue Variables hideCore6 1 "#varPath#"][!WriteKeyValue Variables hideCore7 1 "#varPath#"][!WriteKeyValue Variables hideCore8 1 "#varPath#"][!WriteKeyValue Variables hideCore9 1 "#varPath#"][!WriteKeyValue Variables hideCore10 1 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCPULogicalCores] "#varPath#"][!Refresh]

IfCondition2=(MeasureCPULogicalCores = 2) && (MeasureCPULogicalCores <> #cpuCores#)
IfTrueAction2=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 1 "#varPath#"][!WriteKeyValue Variables hideCore4 1 "#varPath#"][!WriteKeyValue Variables hideCore5 1 "#varPath#"][!WriteKeyValue Variables hideCore6 1 "#varPath#"][!WriteKeyValue Variables hideCore7 1 "#varPath#"][!WriteKeyValue Variables hideCore8 1 "#varPath#"][!WriteKeyValue Variables hideCore9 1 "#varPath#"][!WriteKeyValue Variables hideCore10 1 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCPULogicalCores] "#varPath#"][!Refresh]

IfCondition3=(MeasureCPULogicalCores = 3) && (MeasureCPULogicalCores <> #cpuCores#)
IfTrueAction3=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 1 "#varPath#"][!WriteKeyValue Variables hideCore5 1 "#varPath#"][!WriteKeyValue Variables hideCore6 1 "#varPath#"][!WriteKeyValue Variables hideCore7 1 "#varPath#"][!WriteKeyValue Variables hideCore8 1 "#varPath#"][!WriteKeyValue Variables hideCore9 1 "#varPath#"][!WriteKeyValue Variables hideCore10 1 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCPULogicalCores] "#varPath#"][!Refresh]

IfCondition4=(MeasureCPULogicalCores = 4) && (MeasureCPULogicalCores <> #cpuCores#)
IfTrueAction4=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 1 "#varPath#"][!WriteKeyValue Variables hideCore6 1 "#varPath#"][!WriteKeyValue Variables hideCore7 1 "#varPath#"][!WriteKeyValue Variables hideCore8 1 "#varPath#"][!WriteKeyValue Variables hideCore9 1 "#varPath#"][!WriteKeyValue Variables hideCore10 1 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCPULogicalCores] "#varPath#"][!Refresh]

IfCondition5=(MeasureCPULogicalCores = 5) && (MeasureCPULogicalCores <> #cpuCores#)
IfTrueAction5=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 1 "#varPath#"][!WriteKeyValue Variables hideCore7 1 "#varPath#"][!WriteKeyValue Variables hideCore8 1 "#varPath#"][!WriteKeyValue Variables hideCore9 1 "#varPath#"][!WriteKeyValue Variables hideCore10 1 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCPULogicalCores] "#varPath#"][!Refresh]

IfCondition6=(MeasureCPULogicalCores = 6) && (MeasureCPULogicalCores <> #cpuCores#)
IfTrueAction6=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 1 "#varPath#"][!WriteKeyValue Variables hideCore8 1 "#varPath#"][!WriteKeyValue Variables hideCore9 1 "#varPath#"][!WriteKeyValue Variables hideCore10 1 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCPULogicalCores] "#varPath#"][!Refresh]

IfCondition7=(MeasureCPULogicalCores = 7) && (MeasureCPULogicalCores <> #cpuCores#)
IfTrueAction7=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 1 "#varPath#"][!WriteKeyValue Variables hideCore9 1 "#varPath#"][!WriteKeyValue Variables hideCore10 1 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCPULogicalCores] "#varPath#"][!Refresh]

IfCondition8=(MeasureCPULogicalCores = 8) && (MeasureCPULogicalCores <> #cpuCores#)
IfTrueAction8=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 0 "#varPath#"][!WriteKeyValue Variables hideCore9 1 "#varPath#"][!WriteKeyValue Variables hideCore10 1 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCPULogicalCores] "#varPath#"][!Refresh]

IfCondition9=(MeasureCPULogicalCores = 9) && (MeasureCPULogicalCores <> #cpuCores#)
IfTrueAction9=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 0 "#varPath#"][!WriteKeyValue Variables hideCore9 0 "#varPath#"][!WriteKeyValue Variables hideCore10 1 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCPULogicalCores] "#varPath#"][!Refresh]

IfCondition10=(MeasureCPULogicalCores = 10) && (MeasureCPULogicalCores <> #cpuCores#)
IfTrueAction10=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 0 "#varPath#"][!WriteKeyValue Variables hideCore9 0 "#varPath#"][!WriteKeyValue Variables hideCore10 0 "#varPath#"][!WriteKeyValue Variables hideCore11 1 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCPULogicalCores] "#varPath#"][!Refresh]

IfCondition11=(MeasureCPULogicalCores = 11) && (MeasureCPULogicalCores <> #cpuCores#)
IfTrueAction11=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 0 "#varPath#"][!WriteKeyValue Variables hideCore9 0 "#varPath#"][!WriteKeyValue Variables hideCore10 0 "#varPath#"][!WriteKeyValue Variables hideCore11 0 "#varPath#"][!WriteKeyValue Variables hideCore12 1 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCPULogicalCores] "#varPath#"][!Refresh]

IfCondition12=(MeasureCPULogicalCores = 12) && (MeasureCPULogicalCores <> #cpuCores#)
IfTrueAction12=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 0 "#varPath#"][!WriteKeyValue Variables hideCore9 0 "#varPath#"][!WriteKeyValue Variables hideCore10 0 "#varPath#"][!WriteKeyValue Variables hideCore11 0 "#varPath#"][!WriteKeyValue Variables hideCore12 0 "#varPath#"][!WriteKeyValue Variables hideCore13 1 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCPULogicalCores] "#varPath#"][!Refresh]

IfCondition13=(MeasureCPULogicalCores = 13) && (MeasureCPULogicalCores <> #cpuCores#)
IfTrueAction13=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 0 "#varPath#"][!WriteKeyValue Variables hideCore9 0 "#varPath#"][!WriteKeyValue Variables hideCore10 0 "#varPath#"][!WriteKeyValue Variables hideCore11 0 "#varPath#"][!WriteKeyValue Variables hideCore12 0 "#varPath#"][!WriteKeyValue Variables hideCore13 0 "#varPath#"][!WriteKeyValue Variables hideCore14 1 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCPULogicalCores] "#varPath#"][!Refresh]

IfCondition14=(MeasureCPULogicalCores = 14) && (MeasureCPULogicalCores <> #cpuCores#)
IfTrueAction14=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 0 "#varPath#"][!WriteKeyValue Variables hideCore9 0 "#varPath#"][!WriteKeyValue Variables hideCore10 0 "#varPath#"][!WriteKeyValue Variables hideCore11 0 "#varPath#"][!WriteKeyValue Variables hideCore12 0 "#varPath#"][!WriteKeyValue Variables hideCore13 0 "#varPath#"][!WriteKeyValue Variables hideCore14 0 "#varPath#"][!WriteKeyValue Variables hideCore15 1 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCPULogicalCores] "#varPath#"][!Refresh]

IfCondition15=(MeasureCPULogicalCores = 15) && (MeasureCPULogicalCores <> #cpuCores#)
IfTrueAction15=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 0 "#varPath#"][!WriteKeyValue Variables hideCore9 0 "#varPath#"][!WriteKeyValue Variables hideCore10 0 "#varPath#"][!WriteKeyValue Variables hideCore11 0 "#varPath#"][!WriteKeyValue Variables hideCore12 0 "#varPath#"][!WriteKeyValue Variables hideCore13 0 "#varPath#"][!WriteKeyValue Variables hideCore14 0 "#varPath#"][!WriteKeyValue Variables hideCore15 0 "#varPath#"][!WriteKeyValue Variables hideCore16 1 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCPULogicalCores] "#varPath#"][!Refresh]

IfCondition16=(MeasureCPULogicalCores > 15) && (MeasureCPULogicalCores <> #cpuCores#)
IfTrueAction16=[!WriteKeyValue Variables hideCore2 0 "#varPath#"][!WriteKeyValue Variables hideCore3 0 "#varPath#"][!WriteKeyValue Variables hideCore4 0 "#varPath#"][!WriteKeyValue Variables hideCore5 0 "#varPath#"][!WriteKeyValue Variables hideCore6 0 "#varPath#"][!WriteKeyValue Variables hideCore7 0 "#varPath#"][!WriteKeyValue Variables hideCore8 0 "#varPath#"][!WriteKeyValue Variables hideCore9 0 "#varPath#"][!WriteKeyValue Variables hideCore10 0 "#varPath#"][!WriteKeyValue Variables hideCore11 0 "#varPath#"][!WriteKeyValue Variables hideCore12 0 "#varPath#"][!WriteKeyValue Variables hideCore13 0 "#varPath#"][!WriteKeyValue Variables hideCore14 0 "#varPath#"][!WriteKeyValue Variables hideCore15 0 "#varPath#"][!WriteKeyValue Variables hideCore16 0 "#varPath#"][!WriteKeyValue Variables cpuCores [MeasureCPULogicalCores] "#varPath#"][!Refresh]
UpdateDivider=-1

[MeasureCPUPhysicalCores]
Measure=Plugin
Plugin=ActiveNet
Type=PhysicalCores
UpdateDivider=-1

[MeasureCPUPhysicalCPUs]
Measure=Plugin
Plugin=ActiveNet
Type=Processors
UpdateDivider=-1

[MeasureCPUThreadsPerCore]
Measure=Plugin
Plugin=ActiveNet
Type=ThreadsPerCore
IfCondition=[MeasureCPUThreadsPerCore] <> #threadsPerCore#
IfTrueAction=[!WriteKeyValue Variables threadsPerCore [MeasureCPUThreadsPerCore] "#varPath#"][!Refresh]
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
DynamicVariables=1

[MeasureCPUTempCore1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core0Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore2]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core0Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) ||  (#hideCore2#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore3]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core1Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore3#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore4]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core1Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore4#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore5]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core2Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore5#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore6]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core2Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore6#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore7]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core3Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore7#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore8]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core3Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore8#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore9]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core4Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore9#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore10]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core4Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore10#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore11]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core5Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore11#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore12]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core5Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore12#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore13]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core6Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore13#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore14]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core6Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore14#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore15]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core7Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore15#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore16]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core7Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore16#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1
