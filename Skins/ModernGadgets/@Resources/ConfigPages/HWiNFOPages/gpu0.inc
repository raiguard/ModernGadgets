; MODERNGADGETS CONFIG HWiNFO "GPU0" SUBPAGE

[MeasureInputText]
Measure=Plugin
Plugin=InputText
SolidColor=0,0,0,240
FontColor=160,160,160
FontSize=10
; StringStyle=Bold
UpdateDivider=-1
FocusDismiss=1
Antialias=1
W=100
Command1=[!WriteKeyValue Variables HWiNFO-GPU0-SensorId "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU0-SensorId#" X=[HwinfoGpu0SensorIdValueString:X] Y=[HwinfoGpu0SensorIdValueString:Y] H=[HwinfoGpu0SensorIdValueString:H]
Command2=[!WriteKeyValue Variables HWiNFO-GPU0-SensorInstance "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU0-SensorInstance#" X=[HwinfoGpu0SensorInstanceValueString:X] Y=[HwinfoGpu0SensorInstanceValueString:Y] H=[HwinfoGpu0SensorInstanceValueString:H]
Command3=[!WriteKeyValue Variables HWiNFO-GPU0-Clock "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU0-Clock#" X=[HwinfoGpu0ClockValueString:X] Y=[HwinfoGpu0ClockValueString:Y] H=[HwinfoGpu0ClockValueString:H]
Command4=[!WriteKeyValue Variables HWiNFO-GPU0-Temp "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU0-Temp#" X=[HwinfoGpu0TempValueString:X] Y=[HwinfoGpu0TempValueString:Y] H=[HwinfoGpu0TempValueString:H]
Command5=[!WriteKeyValue Variables HWiNFO-GPU0-CoreLoad "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU0-CoreLoad#" X=[HwinfoGpu0CoreLoadValueString:X] Y=[HwinfoGpu0CoreLoadValueString:Y] H=[HwinfoGpu0CoreLoadValueString:H]
Command6=[!WriteKeyValue Variables HWiNFO-GPU0-MemoryClock "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU0-MemoryClock#" X=[HwinfoGpu0MemoryClockValueString:X] Y=[HwinfoGpu0MemoryClockValueString:Y] H=[HwinfoGpu0MemoryClockValueString:H]
Command7=[!WriteKeyValue Variables HWiNFO-GPU0-MemoryUsage "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU0-MemoryUsage#" X=[HwinfoGpu0MemoryUsageValueString:X] Y=[HwinfoGpu0MemoryUsageValueString:Y] H=[HwinfoGpu0MemoryUsageValueString:H]
Command8=[!WriteKeyValue Variables HWiNFO-GPU0-MemoryAlloc "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU0-MemoryAlloc#" X=[HwinfoGpu0MemoryAllocValueString:X] Y=[HwinfoGpu0MemoryAllocValueString:Y] H=[HwinfoGpu0MemoryAllocValueString:H]
Command9=[!WriteKeyValue Variables HWiNFO-GPU0-FanSpeed "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU0-FanSpeed#" X=[HwinfoGpu0FanSpeedValueString:X] Y=[HwinfoGpu0FanSpeedValueString:Y] H=[HwinfoGpu0FanSpeedValueString:H]
Command10=[!WriteKeyValue Variables HWiNFO-GPU0-FanUsage "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU0-FanUsage#" X=[HwinfoGpu0FanUsageValueString:X] Y=[HwinfoGpu0FanUsageValueString:Y] H=[HwinfoGpu0FanUsageValueString:H]
Command11=[!WriteKeyValue Variables HWiNFO-GPU0-VideoClock "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU0-VideoClock#" X=[HwinfoGpu0VideoClockValueString:X] Y=[HwinfoGpu0VideoClockValueString:Y] H=[HwinfoGpu0VideoClockValueString:H]
Command12=[!WriteKeyValue Variables HWiNFO-GPU0-MemController "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU0-MemController#" X=[HwinfoGpu0MemControllerValueString:X] Y=[HwinfoGpu0MemControllerValueString:Y] H=[HwinfoGpu0MemControllerValueString:H]
Command13=[!WriteKeyValue Variables HWiNFO-GPU0-CoreVoltage "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU0-CoreVoltage#" X=[HwinfoGpu0CoreVoltageValueString:X] Y=[HwinfoGpu0CoreVoltageValueString:Y] H=[HwinfoGpu0CoreVoltageValueString:H]

; ----- HWiNFO Navigation Bar -----

[HwinfoNavBarButtonCPU0String]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorAccent#
Y=10R
Text="CPU0"
LeftMouseUpAction=[!WriteKeyValue Variables hwinfoPage "cpu0"][!Refresh]

[HwinfoNavBarSeparatorCPU0String]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorDim#
X=2R
Y=-1r
Text="|"

[HwinfoNavBarButtonCpu0DtsString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorAccent#
X=2R
Y=1r
Text="CPU0-DTS"
LeftMouseUpAction=[!WriteKeyValue Variables hwinfoPage "cpu0dts"][!Refresh]

[HwinfoNavBarSeparatorCpu0DtsString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorDim#
X=2R
Y=-1r
Text="|"

[HwinfoNavBarButtonMoboString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorAccent#
X=2R
Y=1r
Text="MOBO"
LeftMouseUpAction=[!WriteKeyValue Variables hwinfoPage "mobo"][!Refresh]

[HwinfoNavBarSeparatorMoboString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorDim#
X=2R
Y=-1r
Text="|"

[HwinfoNavBarButtonGPU0String]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
X=2R
Y=1r
Text="GPU0"

[HwinfoNavBarSeparatorGPU0String]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorDim#
X=2R
Y=-1r
Text="|"

[HwinfoNavBarButtonGPU1String]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorAccent#
X=2R
Y=1r
Text="GPU1"
LeftMouseUpAction=[!WriteKeyValue Variables hwinfoPage "gpu1"][!Refresh]

[HwinfoNavBarSeparatorGPU1String]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorDim#
X=2R
Y=-1r
Text="|"

[HwinfoNavBarButtonSmartString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorAccent#
X=2R
Y=1r
Text="S.M.A.R.T."
LeftMouseUpAction=[!WriteKeyValue Variables hwinfoPage "smart"][!Refresh]

; ----- Entry IDs -----

; Sensor ID and Sensor Instance
[HwinfoGpu0SensorIdLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=10R
Text="Sensor ID:"

[HwinfoGpu0SensorIdValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU0-SensorId#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 1"]
ToolTipText="HWiNFO-GPU0-SensorId"

[HwinfoGpu0SensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Sensor Instance:"

[HwinfoGpu0SensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU0-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 2"]
ToolTipText="HWiNFO-GPU0-SensorInstance"

; Clock
[HwinfoGpu0ClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=10R
Text="Clock Speed:"

[HwinfoGpu0ClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU0-Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 3"]
ToolTipText="HWiNFO-GPU0-Clock"

; Temperature
[HwinfoGpu0TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Temperature:"

[HwinfoGpu0TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU0-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 4"]
ToolTipText="HWiNFO-GPU0-Temp"

; Core Load
[HwinfoGpu0CoreLoadLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core Load:"

[HwinfoGpu0CoreLoadValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU0-CoreLoad#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 5"]
ToolTipText="HWiNFO-GPU0-CoreLoad"

; Memory Clock
[HwinfoGpu0MemoryClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Memory Clock:"

[HwinfoGpu0MemoryClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU0-MemoryClock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 6"]
ToolTipText="HWiNFO-GPU0-MemoryClock"

; Memory Usage
[HwinfoGpu0MemoryUsageLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Memory Usage:"

[HwinfoGpu0MemoryUsageValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU0-MemoryUsage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 7"]
ToolTipText="HWiNFO-GPU0-MemoryUsage"

; Memory Alocated
[HwinfoGpu0MemoryAllocLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Memory Allocated:"

[HwinfoGpu0MemoryAllocValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU0-MemoryAlloc#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 8"]
ToolTipText="HWiNFO-GPU0-MemoryAlloc"

; Fan Speed
[HwinfoGpu0FanSpeedLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Fan Speed:"

[HwinfoGpu0FanSpeedValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU0-FanSpeed#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 9"]
ToolTipText="HWiNFO-GPU0-FanSpeed"

; Fan Usage
[HwinfoGpu0FanUsageLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Fan Usage:"

[HwinfoGpu0FanUsageValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU0-FanUsage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 10"]
ToolTipText="HWiNFO-GPU0-FanUsage"

; Video Clock (Shader Clock)
[HwinfoGpu0VideoClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Video Clock:"

[HwinfoGpu0VideoClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU0-VideoClock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 11"]
ToolTipText="HWiNFO-GPU0-VideoClock"

; Memory Controller Usage
[HwinfoGpu0MemControllerLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Memory Controller:"

[HwinfoGpu0MemControllerValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU0-MemController#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 12"]
ToolTipText="HWiNFO-GPU0-MemController"

; Core Voltage
[HwinfoGpu0CoreVoltageLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core Voltage:"

[HwinfoGpu0CoreVoltageValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU0-CoreVoltage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 13"]
ToolTipText="HWiNFO-GPU0-CoreVoltage"
