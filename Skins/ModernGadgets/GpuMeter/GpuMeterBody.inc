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

[MeasureIsHwinfo32Running]
Measure=Process
ProcessName=HWiNFO32.exe

[MeasureIsHwinfo64Running]
Measure=Process
ProcessName=HWiNFO64.exe
IfCondition=(MeasureIsHwinfo32Running = -1) && (MeasureIsHwinfo64Running = -1)
IfTrueAction=[!ShowMeterGroup NoHwinfo][!Redraw]

; ------------------------------
; GENERAL

[MeasureGpuName]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=Sensor[#HWiNFO-GPU[#gpuIndex]-Clock]
RegExpSubstitute=1
Substitute="^0$":"","^(.*]: )":"","(:.*)$":"","\(R\)":"","®":"","\(TM\)":"","\(tm\)":"","™":"","NVIDIA ":"","ATI/AMD ":"","AMD ":"","Intel ":"","Qualcomm ":""," GPU":""
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
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw[#HWiNFO-GPU[#gpuIndex]-Clock]

[MeasureGpuTemperature]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw[#HWiNFO-GPU[#gpuIndex]-Temp]
MinValue=0
MaxValue=#maxGpuTemp#

[MeasureGpuUsage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWINFO64\VSB
RegValue=ValueRaw[#HWiNFO-GPU[#gpuIndex]-CoreLoad]
MinValue=0
MaxValue=100

; ------------------------------
; VRAM

[MeasureMemoryClockSpeed]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWINFO64\VSB
RegValue=ValueRaw[#HWiNFO-GPU[#gpuIndex]-MemoryClock]
Disabled=(#showMemoryClock# = 0)
Group=MemoryClock

[MeasureVramUsed]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWINFO64\VSB
RegValue=ValueRaw[#HWiNFO-GPU[#gpuIndex]-MemoryAlloc]
Group=Memory

[MeasureVramUsedCalc]
Measure=Calc
Formula=MeasureVramUsed * 1024 * 1024
IfCondition=1
IfTrueAction=[!SetVariable textMemoryUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureVramUsedCalc],3,'1k')]]
OnChangeAction=[!SetVariable textMemoryUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureVramUsedCalc],3,'1k')]]
Group=Memory

[MeasureVramUsage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWINFO64\VSB
RegValue=ValueRaw[#HWiNFO-GPU[#gpuIndex]-MemoryUsage]
MinValue=0
MaxValue=100
Group=Memory

[MeasureVramTotal]
Measure=Calc
Formula=MeasureVramUsedCalc * 100 / max(MeasureVramUsage,1)
IfCondition=(#useManualMaxVram# = 0)
IfTrueAction=[!SetVariable textMemoryTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureVramTotal],1,'1k')]]
IfCondition2=(#useManualMaxVram# = 1)
IfTrueAction2=[!SetVariable textMemoryTotal [&MeasureFixedPrecisionFormatScript:FormatNumber('#maxVram#000000',1,'2k')]]
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
; FANS

; ----- Fan 1 -----

[MeasureGpuFan1Speed]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWINFO64\VSB
RegValue=ValueRaw[#HWiNFO-GPU[#gpuIndex]-FanSpeed1]
Disabled=#useMoboFanSensor#

[MeasureGpuFan1Usage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWINFO64\VSB
RegValue=ValueRaw[#HWiNFO-GPU[#gpuIndex]-FanUsage1]
MinValue=0
MaxValue=100

; ----- Fan 2 -----

[MeasureGpuFan2Speed]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWINFO64\VSB
RegValue=ValueRaw[#HWiNFO-GPU[#gpuIndex]-FanSpeed2]
Disabled=#useMoboFanSensor#

[MeasureGpuFan2Usage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWINFO64\VSB
RegValue=ValueRaw[#HWiNFO-GPU[#gpuIndex]-FanUsage2]
MinValue=0
MaxValue=100

; ----- Fan 3 -----

[MeasureGpuFan3Speed]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWINFO64\VSB
RegValue=ValueRaw[#HWiNFO-GPU[#gpuIndex]-FanSpeed3]
Disabled=#useMoboFanSensor#

[MeasureGpuFan3Usage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWINFO64\VSB
RegValue=ValueRaw[#HWiNFO-GPU[#gpuIndex]-FanUsage3]
MinValue=0
MaxValue=100

; ------------------------------
; MISC

[MeasureVideoClock]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWINFO64\VSB
RegValue=ValueRaw[#HWiNFO-GPU[#gpuIndex]-VideoClock]
Disabled=(#showVideoClock# = 0)

[MeasureMemoryControllerLoad]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWINFO64\VSB
RegValue=ValueRaw[#HWiNFO-GPU[#gpuIndex]-MemController]
MinValue=0
MaxValue=100
Disabled=(#showMemoryController# = 0)

[MeasureCoreVoltage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWINFO64\VSB
RegValue=ValueRaw[#HWiNFO-GPU[#gpuIndex]-CoreVoltage]
Disabled=(#showCoreVoltage# = 0)

[MeasureCalcCompactVramLabel]
Measure=Calc
Formula=[MeterGpuMemoryUsageLabel:W] + [MeterGpuMemoryUsageFraction:W] + [MeterGpuMemoryUsage:W] + 10
IfCondition=#CURRENTSECTION# > #contentWidth#
IfTrueAction=[!SetOptionGroup MemoryUsageLabels FontFace "#*fontFaceCn*#"][!UpdateMeterGroup MemoryUsageLabels][!Redraw]
DynamicVariables=1

[MeasureCalcGpuFanGraph]
Measure=Calc
Formula=((#showFan1Info# * MeasureGpuFan1Usage) + (#showFan2Info# * MeasureGpuFan2Usage) + (#showFan3Info# * MeasureGpuFan3Usage)) / (#showFan1Info# + #showFan2Info# + #showFan3Info#)

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
; FANS

; ----- Fan 1 -----

[MeterGpuFan1UsageLabel]
Meter=String
MeterStyle=StyleString
Y=((#showFan1Info# = 1) ? #rowSpacing# : -#barTextOffset#)R
Text=Fan 1:
Group=GpuFan1
Hidden=(#showFan1Info# = 0)

[MeterGpuFan1UsageSpeed]
Meter=String
MeterStyle=StyleString | StyleStringInfo
MeasureName=MeasureGpuFan1Speed
Text=%1 RPM
Group=GpuFan1
Hidden=(#showFan1Info# = 0)

[MeterGpuFan1Usage]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpuFan1Usage
Text=%1%
Group=GpuFan1
Hidden=(#showFan1Info# = 0)

[MeterGpuFan1UsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureGpuFan1Usage
BarColor=#colorFanUsage#
DynamicVariables=1
Group=GpuFan1
Hidden=(#showFan1Info# = 0)

; ----- Fan 2 -----

[MeterGpuFan2UsageLabel]
Meter=String
MeterStyle=StyleString
Y=((#showFan2Info# = 1) ? #rowSpacing# : -#barTextOffset#)R
Text=Fan 2:
Group=GpuFan2
Hidden=(#showFan2Info# = 0)

[MeterGpuFan2UsageSpeed]
Meter=String
MeterStyle=StyleString | StyleStringInfo
MeasureName=MeasureGpuFan2Speed
Text=%1 RPM
Group=GpuFan2
Hidden=(#showFan2Info# = 0)

[MeterGpuFan2Usage]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpuFan2Usage
Text=%1%
Group=GpuFan2
Hidden=(#showFan2Info# = 0)

[MeterGpuFan2UsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureGpuFan2Usage
BarColor=#colorFanUsage#
DynamicVariables=1
Group=GpuFan2
Hidden=(#showFan2Info# = 0)

; ----- Fan 3 -----

[MeterGpuFan3UsageLabel]
Meter=String
MeterStyle=StyleString
Y=((#showFan3Info# = 1) ? #rowSpacing# : -#barTextOffset#)R
Text=Fan 3:
Group=GpuFan3
Hidden=(#showFan3Info# = 0)

[MeterGpuFan3UsageSpeed]
Meter=String
MeterStyle=StyleString | StyleStringInfo
MeasureName=MeasureGpuFan3Speed
Text=%1 RPM
Group=GpuFan3
Hidden=(#showFan3Info# = 0)

[MeterGpuFan3Usage]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpuFan3Usage
Text=%1%
Group=GpuFan3
Hidden=(#showFan3Info# = 0)

[MeterGpuFan3UsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureGpuFan3Usage
BarColor=#colorFanUsage#
DynamicVariables=1
Group=GpuFan3
Hidden=(#showFan3Info# = 0)

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
MeasureName2=MeasureCalcGpuFanGraph
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
Text=GPU Meter relies on HWiNFO to function. Please make sure you have configured HWiNFO as per the setup tutorial. Once HWiNFO is running, refresh this skin.
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
