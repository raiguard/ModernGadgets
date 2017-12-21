; MODERNGADGETS GPU METER MAIN SUBPAGE
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
Disabled=(#showGpuName# = 0)

; ----- GPU Name, Core Usage, Temperature, Clock Speed -----

[Gpu0NameString]
Meter=String
MeterStyle=StyleString | StyleStringCenterAlign
MeasureName=MeasureGpu0DisplayName
Y=((#showGpuName# = 1) ? #rowSpacing# : 0)R
W=(#contentWidth# - 4)
ClipString=1
Text="%1"
Hidden=(#showGpuName# = 0)

[Gpu0ClockString]
Meter=String
MeterStyle=StyleString
MeasureName=MeasureGpu0ClockSpeed
Y=(#rowSpacing# + 1)R
Text="Clock: %1MHz"

[Gpu0TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpu0Temperature
Text="%1#deg##tempUnits#"

[Gpu0CoreUsageLabelString]
Meter=String
MeterStyle=StyleString
Text="Usage:"

[Gpu0CoreUsageValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpu0Usage
Text="%1%"

[Gpu0CoreUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureGpu0Usage
BarColor=#colorCoreUsage#
DynamicVariables=1

; ----- Memory -----

[Gpu0MemoryClockLabelString]
Meter=String
MeterStyle=StyleString
Y=((#showMemoryClock# = 1) ? #rowSpacing# : 0)R
Text="Memory Clock:"
Group=MemoryClock
Hidden=(#showMemoryClock# = 0)
DynamicVariables=1

[Gpu0MemoryClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureMemoryClockSpeed
Text="%1MHz"
Group=MemoryClock
Hidden=(#showMemoryClock# = 0)

[Gpu0MemoryUsageLabelString]
Meter=String
MeterStyle=StyleString
Text="VRAM:"

[Gpu0MemoryUsageFractionString]
Meter=String
MeterStyle=StyleString | StyleStringInfo
Text="#textMemoryUsedGpu0#B / #textMemoryTotalGpu0#B"
DynamicVariables=1
Group=Memory

[Gpu0MemoryUsageValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureVramUsage
MeasureName2=MeasureVramUsageAlt
Text="%1%"
Group=Memory
DynamicVariables=1

[Gpu0MemoryUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureVramUsage
BarColor=#colorMemoryUsage#
DynamicVariables=1
Group=Memory

; ----- Fan -----

[Gpu0FanUsageLabelString]
Meter=String
MeterStyle=StyleString
Text="Fan:"

[Gpu0FanSpeedString]
Meter=String
MeterStyle=StyleString | StyleStringInfo
MeasureName=MeasureGpu0FanSpeed
MeasureName2=MeasureMoboGpuFanSpeed
Text="%1RPM"

[Gpu0FanUsageValueString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpu0FanUsage
Text="%1%"

[Gpu0FanUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureGpu0FanUsage
BarColor=#colorFanUsage#
DynamicVariables=1

; ----- Memory Controller -----

[Gpu0MemoryControllerLabelString]
Meter=String
MeterStyle=StyleString
Y=((#showMemoryController# = 1) ? #rowSpacing# : -#barTextOffset#)R
Text="Memory Controller:"
Group=MemoryController
Hidden=(#showMemoryController# = 0)

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

[GraphLines]
Meter=Line
X=(#contentMargin# + 1)
Y=((#showVideoClock# = 1 || #showCoreVoltage# = 1) ? ((#showLineGraph# = 1) ? (#barTextOffset# + 1) : 0) : ((#showLineGraph# = 1) ? 5 : 2))R
W=(#contentWidth# - 2)
H=(#graphHeight# - 2)
LineCount=5
MeasureName=MeasureGpu0MemoryControllerLoad
MeasureName2=MeasureGpu0FanUsage
MeasureName3=MeasureVramUsage
MeasureName4=MeasureGpu0Usage
MeasureName5=MeasureGpu0Temperature
LineColor=#colorMemoryController#,(#showMemoryController# * 255)
LineColor2=#colorFanUsage#
LineColor3=#colorMemoryUsage#
LineColor4=#colorCoreUsage#
LineColor5=#colorTempGraph#,(#showTempGraph# * 255)
DynamicVariables=1
Antialias=#lineGraphAa#
Group=LineGraph
Hidden=(#showLineGraph# = 0)

[GraphBorder]
Meter=Image
ImageName=#imgPath#border.png
ScaleMargins=2,2,2,2
ImageTint=#colorGraphBorder#
X=-1r
Y=-1r
W=#contentWidth#
H=#graphHeight#
Group=LineGraph
Hidden=(#showLineGraph# = 0)
