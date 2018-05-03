[Rainmeter]
Update=1000
MiddleMouseDownAction=[!Refresh]
MouseOverAction=[!ToggleMeterGroup ConfigButton][!UpdateMeterGroup Background][!Redraw]
MouseLeaveAction=[!ToggleMeterGroup ConfigButton][!UpdateMeterGroup Background][!Redraw]
LeftMouseDoubleClickAction=["taskmgr.exe"]
Group=ModernGadgets | MgGlobalRefresh | MgImportRefresh
AccurateText=1

; Custom Context Menu
ContextTitle=Process Meter settings
ContextAction=[!ActivateConfig "ModernGadgets\Config\Process" "Config.ini"]
ContextTitle2=Global settings
ContextAction2=[!ActivateConfig "ModernGadgets\Config\Global" "Config.ini"]
ContextTitle3=Gadget manager
ContextAction3=[!ActivateConfig "ModernGadgets\Config\GadgetManager" "Config.ini"]

[Metadata]
Name=Process Meter
Author=raiguard
Information=A gadget to track processes that are using high amounts of CPU, or specific processes chosen by the user.
License=Creative Commons BY-NC-SA 3.0
Version=1.4.0-beta.1

[Variables]
@includeStyleSheet=#@#StyleSheet.inc
@includeGlobalSettings=#@#Settings\GlobalSettings.inc
@includeProcessSettings=#@#Settings\ProcessSettings.inc

fpfProcessCpuDepth=4
fpfProcessRamDepth=4
fpfProcessDiskDepth=4
fpfProcessGpuDepth=4
fpfProcessVramDepth=4

[StyleStringProcessLabel]
FontFace=#processLabelFontFace#
W=(#contentWidth# - 50)
ToolTipText=%1
ClipString=1
Group=Label

[StyleStringProcessRam]
X=(#contentMarginRight# - 35)
Y=r
FontColor=#colorInfo#
FontFace=#processLabelFontFace#
StringAlign=Right
DynamicVariables=1

[StyleStringProcessValue]
DynamicVariables=1

; ========= Measures =========

[MeasureFixedPrecisionFormatScript]
Measure=Script
ScriptFile=#@#Scripts\FixedPrecisionFormat.lua

;[MeasureProcessConfigScript]
;Measure=Script
;ScriptFile=#@#Scripts\ProcessConfig.lua

[MeasureCpuUsage]
Measure=CPU

; ----- Pinned Processes -----

; Process 1
[MeasurePinnedProcess1Cpu]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Name=#pProcess1#
Substitute="":"---"
Disabled=(#showPProcess1# = 0)

[MeasurePinnedProcess1Ram]
Measure=Plugin
Plugin=UsageMonitor
Alias=RAM
Name=#pProcess1#
Substitute="":"---"
Disabled=(#showPProcess1# = 0)

[MeasurePinnedProcess1Disk]
Measure=Plugin
Plugin=UsageMonitor
Alias=IO
Name=#pProcess1#
Substitute="":"---"
Disabled=(#showPProcess1# = 0)

[MeasurePinnedProcess1Gpu]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Name=#pProcess1#
Substitute="":"---"
Disabled=(#showPProcess1# = 0)

[MeasurePinnedProcess1Vram]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Name=#pProcess1#
Substitute="":"---"
Disabled=(#showPProcess1# = 0)

; ----- Top Processes -----

; Process 1
[MeasureTopProcess1Cpu]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Index=1
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 1) || (#stdProcessesMode# <> 1)

[MeasureTopProcess1Ram]
Measure=Plugin
Plugin=UsageMonitor
Alias=RAM
Index=1
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 1) || (#stdProcessesMode# <> 2)

[MeasureTopProcess1Disk]
Measure=Plugin
Plugin=UsageMonitor
Alias=IO
Index=1
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 1) || (#stdProcessesMode# <> 3)

[MeasureTopProcess1Gpu]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Index=1
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 1) || (#stdProcessesMode# <> 4)

[MeasureTopProcess1Vram]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Index=1
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 1) || (#stdProcessesMode# <> 5)

; Process 2
[MeasureTopProcess2Cpu]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Index=2
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 2) || (#stdProcessesMode# <> 1)

[MeasureTopProcess2Ram]
Measure=Plugin
Plugin=UsageMonitor
Alias=RAM
Index=2
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 2) || (#stdProcessesMode# <> 2)

[MeasureTopProcess2Disk]
Measure=Plugin
Plugin=UsageMonitor
Alias=IO
Index=2
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 2) || (#stdProcessesMode# <> 3)

[MeasureTopProcess2Gpu]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Index=2
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 2) || (#stdProcessesMode# <> 4)

[MeasureTopProcess2Vram]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Index=2
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 2) || (#stdProcessesMode# <> 5)

; Process 3
[MeasureTopProcess3Cpu]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Index=3
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 3) || (#stdProcessesMode# <> 1)

[MeasureTopProcess3Ram]
Measure=Plugin
Plugin=UsageMonitor
Alias=RAM
Index=3
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 3) || (#stdProcessesMode# <> 2)

[MeasureTopProcess3Disk]
Measure=Plugin
Plugin=UsageMonitor
Alias=IO
Index=3
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 3) || (#stdProcessesMode# <> 3)

[MeasureTopProcess3Gpu]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Index=3
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 3) || (#stdProcessesMode# <> 4)

[MeasureTopProcess3Vram]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Index=3
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 3) || (#stdProcessesMode# <> 5)

; Process 4
[MeasureTopProcess4Cpu]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Index=4
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 4) || (#stdProcessesMode# <> 1)

[MeasureTopProcess4Ram]
Measure=Plugin
Plugin=UsageMonitor
Alias=RAM
Index=4
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 4) || (#stdProcessesMode# <> 2)

[MeasureTopProcess4Disk]
Measure=Plugin
Plugin=UsageMonitor
Alias=IO
Index=4
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 4) || (#stdProcessesMode# <> 3)

[MeasureTopProcess4Gpu]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Index=4
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 4) || (#stdProcessesMode# <> 4)

[MeasureTopProcess4Vram]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Index=4
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 4) || (#stdProcessesMode# <> 5)

; Process 5
[MeasureTopProcess5Cpu]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Index=5
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 5) || (#stdProcessesMode# <> 1)

[MeasureTopProcess5Ram]
Measure=Plugin
Plugin=UsageMonitor
Alias=RAM
Index=5
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 5) || (#stdProcessesMode# <> 2)

[MeasureTopProcess5Disk]
Measure=Plugin
Plugin=UsageMonitor
Alias=IO
Index=5
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 5) || (#stdProcessesMode# <> 3)

[MeasureTopProcess5Gpu]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Index=5
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 5) || (#stdProcessesMode# <> 4)

[MeasureTopProcess5Vram]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Index=5
Blacklist=#processBlacklist#
Substitute="":"---"
Disabled=(#processes# < 5) || (#stdProcessesMode# <> 5)

; ========= Meters =========

[Background]
Meter=Image
MeterStyle=StyleBackground

[ConfigButton]
Meter=Image
MeterStyle=StyleSettingsButton

; ----- Header -----

[CpuUsageValueString]
Meter=String
MeterStyle=StyleString | StyleStringGadgetHeader
MeasureName=MeasureCpuUsage
StringAlign=Right
X=#contentMarginRight#
Text="%1%"
DynamicVariables=1
Group=ConfigButton

[GadgetHeaderImage]
Meter=String
MeterStyle=StyleString
X=#contentMargin#
Y=(#contentMargin#)
FontFace=ElegantIcons
FontColor=50,200,50
FontSize=10
Text="[\xe0e9]"
Antialias=0

[GadgetNameString]
Meter=String
MeterStyle=StyleString | StyleStringGadgetHeader
X=3R
Text="Process Meter"

[StyleStringProcessPlaceholder]
FontColor=255,255,255,0
Y=r
Text="Foo"

; ----- Pinned Processes -----

; Process 1
[PinnedProcess1LabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
Y=((#showPProcess1# = 1) ? #rowSpacing# : -#rowSpacing#)R
Text=#pProcess1#
Hidden=(#showPProcess1# = 0)

[PinnedProcess1MainValueCpuString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasurePinnedProcess1Cpu:],[#fpfProcessCpuDepth],'0')]%
Hidden=(#showPProcess1# = 0)

[PinnedProcess1MainValueBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasurePinnedProcess1Cpu
BarColor=#colorPProcess1#
Hidden=(#showPProcess1# = 0)


; ----- Standard Processes Display -----

; Process 1
[TopProcess1CpuLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess1Cpu
Y=((#processes# < 1) ? 0 : #rowSpacing#)R
Group=Process1 | ProcessCpu
Hidden=(#processes# < 1) || (#stdProcessesMode# <> 1)

[TopProcess1CpuValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess1Cpu:],[#fpfProcessCpuDepth],'0')]%
Group=Process1 | ProcessCpu
Hidden=(#processes# < 1) || (#stdProcessesMode# <> 1)

[TopProcess1RamLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess1Ram
Y=r
Group=Process1 | ProcessRam
Hidden=(#processes# < 1) || (#stdProcessesMode# <> 2)

[TopProcess1RamValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess1Ram:],[#fpfProcessRamDepth],'1k')]B
Group=Process1 | ProcessRam
Hidden=(#processes# < 1) || (#stdProcessesMode# <> 2)

[TopProcess1DiskLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess1Disk
Y=r
Group=Process1 | ProcessDisk
Hidden=(#processes# < 1) || (#stdProcessesMode# <> 3)

[TopProcess1DiskValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess1Disk:],[#fpfProcessDiskDepth],'1k')]B/s
Group=Process1 | ProcessDisk
Hidden=(#processes# < 1) || (#stdProcessesMode# <> 3)

[TopProcess1GpuLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess1Gpu
Y=r
Group=Process1 | ProcessGpu
Hidden=(#processes# < 1) || (#stdProcessesMode# <> 4)

[TopProcess1GpuValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess1Gpu:],[#fpfProcessGpuDepth],'0')]%
Group=Process1 | ProcessGpu
Hidden=(#processes# < 1) || (#stdProcessesMode# <> 4)

[TopProcess1VramLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess1Vram
Y=r
Group=Process1 | ProcessVram
Hidden=(#processes# < 1) || (#stdProcessesMode# <> 5)

[TopProcess1VramValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess1Vram:],[#fpfProcessVramDepth],'1k')]B
Group=Process1 | ProcessVram
Hidden=(#processes# < 1) || (#stdProcessesMode# <> 5)

[TopProcess1Placeholder]
Meter=String
MeterStyle=StyleString | StyleStringProcessPlaceholder
Hidden=(#processes# < 1)

; Process 2
[TopProcess2CpuLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess2Cpu
Y=((#processes# < 2) ? 0 : #rowSpacing#)R
Group=Process2 | ProcessCpu
Hidden=(#processes# < 2) || (#stdProcessesMode# <> 1)

[TopProcess2CpuValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess2Cpu:],[#fpfProcessCpuDepth],'0')]%
Group=Process2 | ProcessCpu
Hidden=(#processes# < 2) || (#stdProcessesMode# <> 1)

[TopProcess2RamLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess2Ram
Y=r
Group=Process2 | ProcessRam
Hidden=(#processes# < 2) || (#stdProcessesMode# <> 2)

[TopProcess2RamValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess2Ram:],[#fpfProcessRamDepth],'1k')]B
Group=Process2 | ProcessRam
Hidden=(#processes# < 2) || (#stdProcessesMode# <> 2)

[TopProcess2DiskLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess2Disk
Y=r
Group=Process2 | ProcessDisk
Hidden=(#processes# < 2) || (#stdProcessesMode# <> 3)

[TopProcess2DiskValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess2Disk:],[#fpfProcessDiskDepth],'1k')]B/s
Group=Process2 | ProcessDisk
Hidden=(#processes# < 2) || (#stdProcessesMode# <> 3)

[TopProcess2GpuLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess2Gpu
Y=r
Group=Process2 | ProcessGpu
Hidden=(#processes# < 2) || (#stdProcessesMode# <> 4)

[TopProcess2GpuValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess2Gpu:],[#fpfProcessGpuDepth],'0')]%
Group=Process2 | ProcessGpu
Hidden=(#processes# < 2) || (#stdProcessesMode# <> 4)

[TopProcess2VramLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess2Vram
Y=r
Group=Process2 | ProcessVram
Hidden=(#processes# < 2) || (#stdProcessesMode# <> 5)

[TopProcess2VramValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess2Vram:],[#fpfProcessVramDepth],'1k')]B
Group=Process2 | ProcessVram
Hidden=(#processes# < 2) || (#stdProcessesMode# <> 5)

[TopProcess2Placeholder]
Meter=String
MeterStyle=StyleString | StyleStringProcessPlaceholder
Hidden=(#processes# < 2)

; Process 3
[TopProcess3CpuLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess3Cpu
Y=((#processes# < 3) ? 0 : #rowSpacing#)R
Group=Process3 | ProcessCpu
Hidden=(#processes# < 3) || (#stdProcessesMode# <> 1)

[TopProcess3CpuValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess3Cpu:],[#fpfProcessCpuDepth],'0')]%
Group=Process3 | ProcessCpu
Hidden=(#processes# < 3) || (#stdProcessesMode# <> 1)

[TopProcess3RamLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess3Ram
Y=r
Group=Process3 | ProcessRam
Hidden=(#processes# < 3) || (#stdProcessesMode# <> 2)

[TopProcess3RamValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess3Ram:],[#fpfProcessRamDepth],'1k')]B
Group=Process3 | ProcessRam
Hidden=(#processes# < 3) || (#stdProcessesMode# <> 2)

[TopProcess3DiskLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess3Disk
Y=r
Group=Process3 | ProcessDisk
Hidden=(#processes# < 3) || (#stdProcessesMode# <> 3)

[TopProcess3DiskValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess3Disk:],[#fpfProcessDiskDepth],'1k')]B/s
Group=Process3 | ProcessDisk
Hidden=(#processes# < 3) || (#stdProcessesMode# <> 3)

[TopProcess3GpuLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess3Gpu
Y=r
Group=Process3 | ProcessGpu
Hidden=(#processes# < 3) || (#stdProcessesMode# <> 4)

[TopProcess3GpuValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess3Gpu:],[#fpfProcessGpuDepth],'0')]%
Group=Process3 | ProcessGpu
Hidden=(#processes# < 3) || (#stdProcessesMode# <> 4)

[TopProcess3VramLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess3Vram
Y=r
Group=Process3 | ProcessVram
Hidden=(#processes# < 3) || (#stdProcessesMode# <> 5)

[TopProcess3VramValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess3Vram:],[#fpfProcessVramDepth],'1k')]B
Group=Process3 | ProcessVram
Hidden=(#processes# < 3) || (#stdProcessesMode# <> 5)

[TopProcess3Placeholder]
Meter=String
MeterStyle=StyleString | StyleStringProcessPlaceholder
Hidden=(#processes# < 3)

; Process 4
[TopProcess4CpuLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess4Cpu
Y=((#processes# < 4) ? 0 : #rowSpacing#)R
Group=Process4 | ProcessCpu
Hidden=(#processes# < 4) || (#stdProcessesMode# <> 1)

[TopProcess4CpuValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess4Cpu:],[#fpfProcessCpuDepth],'0')]%
Group=Process4 | ProcessCpu
Hidden=(#processes# < 4) || (#stdProcessesMode# <> 1)

[TopProcess4RamLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess4Ram
Y=r
Group=Process4 | ProcessRam
Hidden=(#processes# < 4) || (#stdProcessesMode# <> 2)

[TopProcess4RamValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess4Ram:],[#fpfProcessRamDepth],'1k')]B
Group=Process4 | ProcessRam
Hidden=(#processes# < 4) || (#stdProcessesMode# <> 2)

[TopProcess4DiskLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess4Disk
Y=r
Group=Process4 | ProcessDisk
Hidden=(#processes# < 4) || (#stdProcessesMode# <> 3)

[TopProcess4DiskValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess4Disk:],[#fpfProcessDiskDepth],'1k')]B/s
Group=Process4 | ProcessDisk
Hidden=(#processes# < 4) || (#stdProcessesMode# <> 3)

[TopProcess4GpuLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess4Gpu
Y=r
Group=Process4 | ProcessGpu
Hidden=(#processes# < 4) || (#stdProcessesMode# <> 4)

[TopProcess4GpuValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess4Gpu:],[#fpfProcessGpuDepth],'0')]%
Group=Process4 | ProcessGpu
Hidden=(#processes# < 4) || (#stdProcessesMode# <> 4)

[TopProcess4VramLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess4Vram
Y=r
Group=Process4 | ProcessVram
Hidden=(#processes# < 4) || (#stdProcessesMode# <> 5)

[TopProcess4VramValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess4Vram:],[#fpfProcessVramDepth],'1k')]B
Group=Process4 | ProcessVram
Hidden=(#processes# < 4) || (#stdProcessesMode# <> 5)

[TopProcess4Placeholder]
Meter=String
MeterStyle=StyleString | StyleStringProcessPlaceholder
Hidden=(#processes# < 4)

; Process 5
[TopProcess5CpuLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess5Cpu
Y=((#processes# < 5) ? 0 : #rowSpacing#)R
Group=Process5 | ProcessCpu
Hidden=(#processes# < 5) || (#stdProcessesMode# <> 1)

[TopProcess5CpuValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess5Cpu:],[#fpfProcessCpuDepth],'0')]%
Group=Process5 | ProcessCpu
Hidden=(#processes# < 5) || (#stdProcessesMode# <> 1)

[TopProcess5RamLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess5Ram
Y=r
Group=Process5 | ProcessRam
Hidden=(#processes# < 5) || (#stdProcessesMode# <> 2)

[TopProcess5RamValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess5Ram:],[#fpfProcessRamDepth],'1k')]B
Group=Process5 | ProcessRam
Hidden=(#processes# < 5) || (#stdProcessesMode# <> 2)

[TopProcess5DiskLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess5Disk
Y=r
Group=Process5 | ProcessDisk
Hidden=(#processes# < 5) || (#stdProcessesMode# <> 3)

[TopProcess5DiskValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess5Disk:],[#fpfProcessDiskDepth],'1k')]B/s
Group=Process5 | ProcessDisk
Hidden=(#processes# < 5) || (#stdProcessesMode# <> 3)

[TopProcess5GpuLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess5Gpu
Y=r
Group=Process5 | ProcessGpu
Hidden=(#processes# < 5) || (#stdProcessesMode# <> 4)

[TopProcess5GpuValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess5Gpu:],[#fpfProcessGpuDepth],'0')]%
Group=Process5 | ProcessGpu
Hidden=(#processes# < 5) || (#stdProcessesMode# <> 4)

[TopProcess5VramLabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess5Vram
Y=r
Group=Process5 | ProcessVram
Hidden=(#processes# < 5) || (#stdProcessesMode# <> 5)

[TopProcess5VramValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessValue
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess5Vram:],[#fpfProcessVramDepth],'1k')]B
Group=Process5 | ProcessVram
Hidden=(#processes# < 5) || (#stdProcessesMode# <> 5)

[TopProcess5Placeholder]
Meter=String
MeterStyle=StyleString | StyleStringProcessPlaceholder
Hidden=(#processes# < 5)

; ----- Line Graph -----

[LineGraphBackground]
Meter=Image
MeterStyle=StyleLineGraphBackground

;[LineGraph]
;Meter=Line
;MeterStyle=StyleLineGraph
;LineCount=5
;MeasureName=MeasureTopProcess5
;MeasureName2=MeasureTopProcess4
;MeasureName3=MeasureTopProcess3
;MeasureName4=MeasureTopProcess2
;MeasureName5=MeasureTopProcess1
;LineColor=#colorProcess5#
;LineColor2=#colorProcess4#
;LineColor3=#colorProcess3#
;LineColor4=#colorProcess2#
;LineColor5=#colorProcess1#

[LineGraph]
Meter=Line
MeterStyle=StyleLineGraph
LineCount=1
MeasureName=MeasurePinnedProcess1Cpu
LineColor=#colorPProcess1#

;[LineGraphBgAdjustor]
;Meter=Image
;MeterStyle=StyleLineGraphBgAdjustor

[BackgroundHeight]
Meter=Image
MeterStyle=StyleBackgroundHeight