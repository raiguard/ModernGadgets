[Variables]
textMemoryUsed=""
textMemoryTotal=""

; ==================================================
;  MEASURES

[MeasureFixedPrecisionFormatScript]
Measure=Script
ScriptFile=#scriptPath#FixedPrecisionFormat.lua

[MeasureSettingsScript]
Measure=Script
ScriptFile=#scriptPath#Settings.lua

[MeasureHwinfoDetect]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-Clock-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-Clock-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-Clock-EntryId]
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=(MeasureHwinfoDetect = -9000)
IfTrueAction=[!ShowMeterGroup NoHwinfo][!Redraw]
IfCondition2=(MeasureHwinfoDetect <> -9000)
IfTrueAction2=[!HideMeterGroup NoHwinfo][!Redraw]

; ------------------------------
; GENERAL

[MeasureGpuName]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-Clock-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-Clock-SensorInstance]
HWiNFOType=SensorNameCustom
Substitute="GPU \[#\d\]: ":"",":":"","":"_____"
RegExpSubstitute=1
IfMatch=(?i)(.*Intel.*)
IfMatchAction=[!SetOption MeterGpuIcon Fill "Fill Color #colorIntel#"][!UpdateMeter MeterGpuIcon]
IfMatch2=(?i)(.*AMD.*)
IfMatchAction2=[!SetOption MeterGpuIcon Fill "Fill Color #colorAMD#"][!UpdateMeter MeterGpuIcon]
IfMatch3=(?i)(.*Snapdragon.*)
IfMatchAction3=[!SetOption MeterGpuIcon Fill "Fill Color #colorSnapdragon#"][!UpdateMeter MeterGpuIcon]
IfMatch4=(?i)(.*Nvidia.*)
IfMatchAction4=[!SetOption MeterGpuIcon Fill "Fill Color #colorNvidia#"][!UpdateMeter MeterGpuIcon]

[MeasureCustomGpuName]
Measure=String
String=#gpuName#
Substitute="^auto$":"[MeasureGpuName]"
RegExpSubstitute=1
DynamicVariables=1

[MeasureGpuClockSpeed]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-Clock-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-Clock-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-Clock-EntryId]
HWiNFOType=CurrentValue

[MeasureGpuTemperature]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-Temp-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-Temp-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-Temp-EntryId]
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#maxGpuTemp#

[MeasureGpuUsage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-CoreLoad-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-CoreLoad-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-CoreLoad-EntryId]
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

; ------------------------------
; VRAM

[MeasureMemoryClockSpeed]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-MemoryClock-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-MemoryClock-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-MemoryClock-EntryId]
HWiNFOType=CurrentValue
Disabled=(#showMemoryClock# = 0)
Group=MemoryClock

[MeasureVramUsed]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-MemoryAlloc-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-MemoryAlloc-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-MemoryAlloc-EntryId]
HWiNFOType=CurrentValue
Group=Memory

[MeasureVramUsedCalc]
Measure=Calc
Formula=MeasureVramUsed * 1024 * 1024
IfCondition=1
IfTrueAction=[!SetVariable textMemoryUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureVramUsedCalc],3,'1k')]]
OnChangeAction=[!SetVariable textMemoryUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureVramUsedCalc],3,'1k')]]
Group=Memory

[MeasureVramUsage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-MemoryUsage-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-MemoryUsage-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-MemoryUsage-EntryId]
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100
Group=Memory

[MeasureVramTotal]
Measure=Calc
Formula=MeasureVramUsedCalc * 100 / max(MeasureVramUsage,1)
IfCondition=(#useManualMaxVram# = 0)
IfTrueAction=[!SetVariable textMemoryTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureVramTotal],1,'1k')]]
IfCondition2=(#useManualMaxVram# = 1)
IfTrueAction2=[!SetVariable textMemoryTotal [&MeasureFixedPrecisionFormatScript:FormatNumber('[#maxVram]000000',1,'2k')]]
IfConditionMode=1
DynamicVariables=1
Group=Memory

[MeasureVramUsageAlt]
Measure=Calc
Formula=MeasureVramUsedCalc / #maxVram#0000
Disabled=(#useManualMaxVram# = 0)
Group=Memory
DynamicVariables=1
IfCondition=1
IfTrueAction=[!SetOption MeterGpuMemoryUsage Text "%2%"]

[MeasureVramUsageAltBar]
Measure=Calc
Formula=MeasureVramUsedCalc / #maxVram#000000
Disabled=(#useManualMaxVram# = 0)
Group=Memory
DynamicVariables=1
IfCondition=1
IfTrueAction=[!SetOption MeterGpuMemoryUsageBar MeasureName "MeasureVramUsageAltBar"]

; ------------------------------
; FAN

[MeasureGpuFanSpeed]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-FanSpeed-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-FanSpeed-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-FanSpeed-EntryId]
HWiNFOType=CurrentValue
Disabled=#useMoboFanSensor#

[MeasureGpuFanUsage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-FanUsage-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-FanUsage-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-FanUsage-EntryId]
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

; ------------------------------
; MISC

[MeasureVideoClock]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-VideoClock-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-VideoClock-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-VideoClock-EntryId]
HWiNFOType=CurrentValue
Disabled=(#showVideoClock# = 0)

[MeasureMemoryControllerLoad]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-MemController-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-MemController-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-MemController-EntryId]
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100
Disabled=(#showMemoryController# = 0)

[MeasureCoreVoltage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-CoreVoltage-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-CoreVoltage-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-CoreVoltage-EntryId]
HWiNFOType=CurrentValue
Disabled=(#showCoreVoltage# = 0)

[MeasureCalcCompactVramLabel]
Measure=Calc
Formula=[MeterGpuMemoryUsageLabel:W] + [MeterGpuMemoryUsageFraction:W] + [MeterGpuMemoryUsage:W] + 10
IfCondition=#CURRENTSECTION# > #contentWidth#
IfTrueAction=[!SetOptionGroup MemoryUsageLabels FontFace "#*fontFaceCn*#"][!UpdateMeterGroup MemoryUsageLabels][!Redraw]
IfFalseAction=[!SetOptionGroup MemoryUsageLabels FontFace "#*fontFace*#"][!UpdateMeterGroup MemoryUsageLabels][!Redraw]
DynamicVariables=1

; ==================================================
;  METERS

[MeterBackground]
Meter=Shape
MeterStyle=StyleBackground

; ------------------------------
; GADGET HEADER

[MeterConfigButton_]
Meter=Shape
MeterStyle=StyleConfigButtonNew

[MeterGpuIcon]
Meter=Shape
X=#contentMargin#
Y=#contentMargin#
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | Scale 0.8,0.8,0,0 | Offset 0,-3
Path1=2, 7 | LineTo 2, 8.5 | LineTo 3, 8.5 | LineTo 3, 17 | LineTo 4.5, 17 | LineTo 4.5, 7 | CurveTo 2, 7, 3.7, 7, 2.8, 7
Path2=6, 7 | LineTo 6, 7 | LineTo 6, 16 | LineTo 7, 16 | LineTo 7, 17 | LineTo 14, 17 | LineTo 14, 16 | LineTo 22, 16 | LineTo 22, 7 | LineTo 6, 7
Path3=17.5, 9 | ArcTo 20, 11.5, 2.5, 2.5, 0, 0, 0 | ArcTo 17.5, 14, 2.5, 2.5, 0, 0, 0 | ArcTo 15, 11.5, 2.5, 2.5, 0, 0, 0 | ArcTo 17.5, 9, 2.5, 2.5, 0, 0, 0 | ClosePath 1
Fill=Fill Color #colorAccent#
TransformationMatrix=#transformationMatrix#

[MeterGadgetTitle]
Meter=String
MeterStyle=StyleString | StyleStringGadgetLabel
X=4R
Text=GPU Meter
DynamicVariables=1

; ------------------------------
; GENERAL INFO

[MeterGpuName]
Meter=String
MeterStyle=StyleString | StyleStringCenterAlign
MeasureName=MeasureCustomGpuName
Y=((#showGpuName# = 1) ? #rowSpacing# : 0)R
W=(#contentWidth# - 4)
ClipString=1
Text=%1
Hidden=(#showGpuName# = 0)

[MeterGpuClock]
Meter=String
MeterStyle=StyleString
MeasureName=MeasureGpuClockSpeed
Y=(#rowSpacing# + 1)R
Text=Clock: %1 MHz

[MeterGpuTemp]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpuTemperature
Text=%1#deg##tempUnits#

[MeterGpuCoreUsageLabel]
Meter=String
MeterStyle=StyleString
Text=Usage:
Group=GpuUsage

[MeterGpuCoreUsage]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpuUsage
Text=%1%
Group=GpuUsage

[MeterGpuCoreUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureGpuUsage
BarColor=#colorCoreUsage#
DynamicVariables=1
Group=GpuUsage

; ------------------------------
; MEMORY

[MeterGpuMemoryClockLabel]
Meter=String
MeterStyle=StyleString
Y=((#showMemoryClock# = 1) ? #rowSpacing# : 0)R
Text=Memory Clock:
Group=MemoryClock
Hidden=(#showMemoryClock# = 0)
DynamicVariables=1
Group=MemoryClock

[MeterGpuMemoryClock]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureMemoryClockSpeed
Text=%1 MHz
Group=MemoryClock
Hidden=(#showMemoryClock# = 0)

[MeterGpuMemoryUsageLabel]
Meter=String
MeterStyle=StyleString
Text=VRAM:
Group=GpuVram | MemoryUsageLabels

[MeterGpuMemoryUsageFraction]
Meter=String
MeterStyle=StyleString | StyleStringInfo
Text=#textMemoryUsed#B / #textMemoryTotal#B
DynamicVariables=1
Group=GpuVram | MemoryUsageLabels

[MeterGpuMemoryUsage]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureVramUsage
MeasureName2=MeasureVramUsageAlt
Text=%1%
Group=GpuVram | MemoryUsageLabels
DynamicVariables=1

[MeterGpuMemoryUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureVramUsage
BarColor=#colorMemoryUsage#
DynamicVariables=1
Group=GpuVram

; ------------------------------
; FAN

[MeterGpuFanUsageLabel]
Meter=String
MeterStyle=StyleString
Y=((#showFanInfo# = 1) ? #rowSpacing# : -#barTextOffset#)R
Text=Fan:
Group=GpuFan
Hidden=(#showFanInfo# = 0)

[MeterGpuFanUsageSpeed]
Meter=String
MeterStyle=StyleString | StyleStringInfo
MeasureName=MeasureGpuFanSpeed
Text=%1 RPM
Group=GpuFan
Hidden=(#showFanInfo# = 0)

[MeterGpuFanUsage]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpuFanUsage
Text=%1%
Group=GpuFan
Hidden=(#showFanInfo# = 0)

[MeterGpuFanUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureGpuFanUsage
BarColor=#colorFanUsage#
DynamicVariables=1
Group=GpuFan
Hidden=(#showFanInfo# = 0)

; ------------------------------
; MISC

[MeterGpuMemoryControllerLabel]
Meter=String
MeterStyle=StyleString
Y=((#showMemoryController# = 1) ? #rowSpacing# : -#barTextOffset#)R
Text=Memory Controller:
Group=MemoryController
Hidden=(#showMemoryController# = 0)
Group=MemoryController

[MeterGpuMemoryController]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureMemoryControllerLoad
Text=%1%
Group=MemoryController
Hidden=(#showMemoryController# = 0)

[MeterGpuMemoryControllerBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureMemoryControllerLoad
BarColor=#colorMemoryController#
DynamicVariables=1
Group=MemoryController
Hidden=(#showMemoryController# = 0)

[MeterGpuVideoClockLabel]
Meter=String
MeterStyle=StyleString
Y=((#showVideoClock# = 1) ? #rowSpacing# : 0)R
Text=Video Clock:
Group=VideoClock
Hidden=(#showVideoClock# = 0)

[MeterGpuVideoClock]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureVideoClock
Text=%1 MHz
Group=VideoClock
Hidden=(#showVideoClock# = 0)

[MeterGpuCoreVoltageLabel]
Meter=String
MeterStyle=StyleString
Y=((#showCoreVoltage# = 1) ? #rowSpacing# : 0)R
Text=Core Voltage:
Group=CoreVoltage
Hidden=(#showCoreVoltage# = 0)

[MeterGpuCoreVoltage]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCoreVoltage
NumOfDecimals=3
Text=%1 V
Group=CoreVoltage
Hidden=(#showCoreVoltage# = 0)

; ------------------------------
; Graph

[MeterLineGraphBackground]
Meter=Shape
MeterStyle=StyleLineGraphBackground
Y=((#showVideoClock# = 1 || #showCoreVoltage# = 1) ? ((#showLineGraph# = 1) ? (#barTextOffset#) : -1) : ((#showLineGraph# = 1) ? #contentMarginAbs# : 1))R

[MeterLineGraph]
Meter=Line
MeterStyle=StyleLineGraph
LineCount=5
MeasureName=MeasureMemoryControllerLoad
MeasureName2=MeasureGpuFanUsage
MeasureName3=MeasureVramUsage
MeasureName4=MeasureGpuUsage
MeasureName5=MeasureGpuTemperature
Scale5=(100 / #maxGpuTemp#)
LineColor=#colorMemoryController#,(#showMemoryController# * 255)
LineColor2=#colorFanUsage#
LineColor3=#colorMemoryUsage#
LineColor4=#colorCoreUsage#
LineColor5=#colorTempGraph#,(#showTempGraph# * 255)
DynamicVariables=1

[MeterLineGraphBackgroundOverlay]
Meter=Shape
MeterStyle=StyleLineGraphBackgroundOverlay
Shape3=Combine Shape | XOR Shape2
Y=-1r
DynamicVariables=1

[MeterBackgroundHeight]
Meter=Image
MeterStyle=StyleBackgroundHeight

; ------------------------------
; No HWiNFO Warning

[MeterNoHwinfoBackground]
Meter=Shape
MeterStyle=StyleBackground
Group=NoHwinfo
Hidden=1

[MeterNoHwinfoWarning]
Meter=String
MeterStyle=StyleString | StyleStringCenterAlign
FontColor=#colorError#
Y=10
Text=HWINFO NOT DETECTED
Group=NoHwinfo
Hidden=1

[MeterNoHwinfoInfo]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
Text=GPU Meter relies on HWiNFO to function. Please make sure you have configured HWiNFO as per the setup tutorial. Once HWiNFO is running properly, this gadget will automatically refresh.
Group=NoHwinfo
Hidden=1

; ------------------------------
; Mouse Regions

[MeterConfigButton]
Meter=Image
MeterStyle=StyleMouseRegion | StyleMouseRegionShapeButtonHover
LeftMouseUpAction=[!SkinCustomMenu]
Group=ConfigButton
Hidden=1