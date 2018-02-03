; MODERNGADGETS GPU METER SINGLE SUBPAGE
; What GPU meter will usually contain
;

; ----- HWiNFO Detection -----

[MeasureHwinfoDetect]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Temp#
HWiNFOLogHandler=2
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoDetect = -9000
IfTrueAction=[!WriteKeyValue Variables page "nohwinfo"][!Refresh]

[MeasureCustomGpuName]
Measure=String
String=#gpuName#
IfMatch=auto
IfNotMatchAction=[!SetOption Gpu0NameString Text "#*gpuName*#"][!UpdateMeter Gpu0NameString]

; ----- GPU Name, Core Usage, Temperature, Clock Speed -----

[Gpu0NameString]
Meter=String
MeterStyle=StyleString | StyleStringCenterAlign
MeasureName=MeasureGpu0DisplayName
Y=((#showGpuName# = 1) ? #rowSpacing# : 0)R
W=(#contentWidth# - 4)
ClipString=1
Text="%1"
Group=GpuName
Hidden=(#showGpuName# = 0)

[Gpu0ClockString]
Meter=String
MeterStyle=StyleString
MeasureName=MeasureGpu0ClockSpeed
Y=(#rowSpacing# + 1)R
Text="Clock: %1MHz"
Group=GpuClock

[Gpu0TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpu0Temperature
Text="%1#deg##tempUnits#"
Group=GpuTemp

[Gpu0CoreUsageLabelString]
Meter=String
MeterStyle=StyleString
Text="Usage:"
Group=GpuUsage

[Gpu0CoreUsageValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpu0Usage
Text="%1%"
Group=GpuUsage

[Gpu0CoreUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureGpu0Usage
BarColor=#colorCoreUsage#
DynamicVariables=1
Group=GpuUsage

; ----- Memory -----

[Gpu0MemoryClockLabelString]
Meter=String
MeterStyle=StyleString
Y=((#showMemoryClock# = 1) ? #rowSpacing# : 0)R
Text="Memory Clock:"
Group=MemoryClock
Hidden=(#showMemoryClock# = 0)
DynamicVariables=1
Group=MemoryClock

[Gpu0MemoryClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpu0MemoryClockSpeed
Text="%1MHz"
Group=MemoryClock
Hidden=(#showMemoryClock# = 0)

[Gpu0MemoryUsageLabelString]
Meter=String
MeterStyle=StyleString
Text="VRAM:"
Group=GpuVram

[Gpu0MemoryUsageFractionString]
Meter=String
MeterStyle=StyleString | StyleStringInfo
Text="#textMemoryUsedGpu0#B / #textMemoryTotalGpu0#B"
DynamicVariables=1
Group=GpuVram

[Gpu0MemoryUsageValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpu0VramUsage
MeasureName2=MeasureGpu0VramUsageAlt
Text="%1%"
Group=GpuVram
DynamicVariables=1

[Gpu0MemoryUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureGpu0VramUsage
BarColor=#colorMemoryUsage#
DynamicVariables=1
Group=GpuVram

; ----- Fan -----

[Gpu0FanUsageLabelString]
Meter=String
MeterStyle=StyleString
Text="Fan:"
Group=GpuFan

[Gpu0FanSpeedString]
Meter=String
MeterStyle=StyleString | StyleStringInfo
MeasureName=MeasureGpu0FanSpeed
MeasureName2=MeasureMoboGpuFanSpeed
Text="%1RPM"
Group=GpuFan

[Gpu0FanUsageValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpu0FanUsage
Text="%1%"
Group=GpuFan

[Gpu0FanUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureGpu0FanUsage
BarColor=#colorFanUsage#
DynamicVariables=1
Group=GpuFan

; ----- Memory Controller -----

[Gpu0MemoryControllerLabelString]
Meter=String
MeterStyle=StyleString
Y=((#showMemoryController# = 1) ? #rowSpacing# : -#barTextOffset#)R
Text="Memory Controller:"
Group=MemoryController
Hidden=(#showMemoryController# = 0)
Group=MemoryController

[Gpu0MemoryControllerValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpu0MemoryControllerLoad
Text="%1%"
Group=MemoryController
Hidden=(#showMemoryController# = 0)

[Gpu0MemoryControllerBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureGpu0MemoryControllerLoad
BarColor=#colorMemoryController#
DynamicVariables=1
Group=MemoryController
Hidden=(#showMemoryController# = 0)

; ----- Video Clock -----

[Gpu0VideoClockLabelString]
Meter=String
MeterStyle=StyleString
Y=((#showVideoClock# = 1) ? #rowSpacing# : 0)R
Text="Video Clock:"
Group=VideoClock
Hidden=(#showVideoClock# = 0)

[Gpu0VideoClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpu0VideoClock
Text="%1MHz"
Group=VideoClock
Hidden=(#showVideoClock# = 0)

; ----- Core Voltage -----

[Gpu0CoreVoltageLabelString]
Meter=String
MeterStyle=StyleString
Y=((#showCoreVoltage# = 1) ? #rowSpacing# : 0)R
Text="Core Voltage:"
Group=CoreVoltage
Hidden=(#showCoreVoltage# = 0)

[Gpu0CoreVoltageValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpu0CoreVoltage
NumOfDecimals=3
Text="%1V"
Group=CoreVoltage
Hidden=(#showCoreVoltage# = 0)

; ----- Graph -----

[LineGraphBackground]
Meter=Image
MeterStyle=StyleLineGraphBackground
Y=((#showVideoClock# = 1 || #showCoreVoltage# = 1) ? ((#showLineGraph# = 1) ? (#barTextOffset#) : -1) : ((#showLineGraph# = 1) ? #contentMarginAbs# : 1))R

[LineGraph]
Meter=Line
MeterStyle=StyleLineGraph
LineCount=5
MeasureName=MeasureGpu0MemoryControllerLoad
MeasureName2=MeasureGpu0FanUsage
MeasureName3=MeasureGpu0VramUsage
MeasureName4=MeasureGpu0Usage
MeasureName5=MeasureGpu0Temperature
LineColor=#colorMemoryController#,(#showMemoryController# * 255)
LineColor2=#colorFanUsage#
LineColor3=#colorMemoryUsage#
LineColor4=#colorCoreUsage#
LineColor5=#colorTempGraph#,(#showTempGraph# * 255)

[LineGraphBgAdjustor]
Meter=Image
MeterStyle=StyleLineGraphBgAdjustor
