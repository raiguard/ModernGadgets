; MODERNGADGETS CONFIG HWiNFO "GPU1" SUBPAGE

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
Command1=[!WriteKeyValue Variables HWiNFO-GPU1-SensorId "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU1-SensorId#" X=[HwinfoGpu1SensorIdValueString:X] Y=[HwinfoGpu1SensorIdValueString:Y] H=[HwinfoGpu1SensorIdValueString:H]
Command2=[!WriteKeyValue Variables HWiNFO-GPU1-SensorInstance "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU1-SensorInstance#" X=[HwinfoGpu1SensorInstanceValueString:X] Y=[HwinfoGpu1SensorInstanceValueString:Y] H=[HwinfoGpu1SensorInstanceValueString:H]
Command3=[!WriteKeyValue Variables HWiNFO-GPU1-Clock "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU1-Clock#" X=[HwinfoGpu1ClockValueString:X] Y=[HwinfoGpu1ClockValueString:Y] H=[HwinfoGpu1ClockValueString:H]
Command4=[!WriteKeyValue Variables HWiNFO-GPU1-Temp "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU1-Temp#" X=[HwinfoGpu1TempValueString:X] Y=[HwinfoGpu1TempValueString:Y] H=[HwinfoGpu1TempValueString:H]
Command5=[!WriteKeyValue Variables HWiNFO-GPU1-CoreLoad "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU1-CoreLoad#" X=[HwinfoGpu1CoreLoadValueString:X] Y=[HwinfoGpu1CoreLoadValueString:Y] H=[HwinfoGpu1CoreLoadValueString:H]
Command6=[!WriteKeyValue Variables HWiNFO-GPU1-MemoryClock "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU1-MemoryClock#" X=[HwinfoGpu1MemoryClockValueString:X] Y=[HwinfoGpu1MemoryClockValueString:Y] H=[HwinfoGpu1MemoryClockValueString:H]
Command7=[!WriteKeyValue Variables HWiNFO-GPU1-MemoryUsage "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU1-MemoryUsage#" X=[HwinfoGpu1MemoryUsageValueString:X] Y=[HwinfoGpu1MemoryUsageValueString:Y] H=[HwinfoGpu1MemoryUsageValueString:H]
Command8=[!WriteKeyValue Variables HWiNFO-GPU1-MemoryAlloc "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU1-MemoryAlloc#" X=[HwinfoGpu1MemoryAllocValueString:X] Y=[HwinfoGpu1MemoryAllocValueString:Y] H=[HwinfoGpu1MemoryAllocValueString:H]
Command9=[!WriteKeyValue Variables HWiNFO-GPU1-FanSpeed "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU1-FanSpeed#" X=[HwinfoGpu1FanSpeedValueString:X] Y=[HwinfoGpu1FanSpeedValueString:Y] H=[HwinfoGpu1FanSpeedValueString:H]
Command10=[!WriteKeyValue Variables HWiNFO-GPU1-FanUsage "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU1-FanUsage#" X=[HwinfoGpu1FanUsageValueString:X] Y=[HwinfoGpu1FanUsageValueString:Y] H=[HwinfoGpu1FanUsageValueString:H]
Command11=[!WriteKeyValue Variables HWiNFO-GPU1-VideoClock "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU1-VideoClock#" X=[HwinfoGpu1VideoClockValueString:X] Y=[HwinfoGpu1VideoClockValueString:Y] H=[HwinfoGpu1VideoClockValueString:H]
Command12=[!WriteKeyValue Variables HWiNFO-GPU1-MemController "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU1-MemController#" X=[HwinfoGpu1MemControllerValueString:X] Y=[HwinfoGpu1MemControllerValueString:Y] H=[HwinfoGpu1MemControllerValueString:H]
Command13=[!WriteKeyValue Variables HWiNFO-GPU1-CoreVoltage "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsGpu][!Refresh] DefaultValue="#HWiNFO-GPU1-CoreVoltage#" X=[HwinfoGpu1CoreVoltageValueString:X] Y=[HwinfoGpu1CoreVoltageValueString:Y] H=[HwinfoGpu1CoreVoltageValueString:H]

; ----- HWiNFO Navigation Bar -----

[HwinfoNavBarButtonCpu0String]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorAccent#
Y=10R
Text="CPU0"
LeftMouseUpAction=[!WriteKeyValue Variables hwinfoPage 0 "#configVariablesPath#"][!Refresh]

[HwinfoNavBarSeparatorCpu0String]
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
LeftMouseUpAction=[!WriteKeyValue Variables hwinfoPage 1 "#configVariablesPath#"][!Refresh]

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
LeftMouseUpAction=[!WriteKeyValue Variables hwinfoPage 2 "#configVariablesPath#"][!Refresh]

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
FontColor=#fontColorAccent#
X=2R
Y=1r
Text="GPU0"
LeftMouseUpAction=[!WriteKeyValue Variables hwinfoPage 3 "#configVariablesPath#"][!Refresh]

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
X=2R
Y=1r
Text="GPU1"

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
LeftMouseUpAction=[!WriteKeyValue Variables hwinfoPage 5 "#configVariablesPath#"][!Refresh]

; ----- Entry IDs -----

; Sensor ID and Sensor Instance
[HwinfoGpu1SensorIdLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=10R
Text="Sensor ID:"

[HwinfoGpu1SensorIdValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU1-SensorId#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 1"]
ToolTipText="HWiNFO-GPU1-SensorId"

[HwinfoGpu1SensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Sensor Instance:"

[HwinfoGpu1SensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU1-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 2"]
ToolTipText="HWiNFO-GPU1-SensorInstance"

; Clock
[HwinfoGpu1ClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=10R
Text="Clock Speed:"

[HwinfoGpu1ClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU1-Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 3"]
ToolTipText="HWiNFO-GPU1-Clock"

; Temperature
[HwinfoGpu1TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Temperature:"

[HwinfoGpu1TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU1-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 4"]
ToolTipText="HWiNFO-GPU1-Temp"

; Core Load
[HwinfoGpu1CoreLoadLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core Load:"

[HwinfoGpu1CoreLoadValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU1-CoreLoad#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 5"]
ToolTipText="HWiNFO-GPU1-CoreLoad"

; Memory Clock
[HwinfoGpu1MemoryClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Memory Clock:"

[HwinfoGpu1MemoryClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU1-MemoryClock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 6"]
ToolTipText="HWiNFO-GPU1-MemoryClock"

; Memory Usage
[HwinfoGpu1MemoryUsageLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Memory Usage:"

[HwinfoGpu1MemoryUsageValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU1-MemoryUsage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 7"]
ToolTipText="HWiNFO-GPU1-MemoryUsage"

; Memory Alocated
[HwinfoGpu1MemoryAllocLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Memory Allocated:"

[HwinfoGpu1MemoryAllocValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU1-MemoryAlloc#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 8"]
ToolTipText="HWiNFO-GPU1-MemoryAlloc"

; Fan Speed
[HwinfoGpu1FanSpeedLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Fan Speed:"

[HwinfoGpu1FanSpeedValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU1-FanSpeed#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 9"]
ToolTipText="HWiNFO-GPU1-FanSpeed"

; Fan Usage
[HwinfoGpu1FanUsageLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Fan Usage:"

[HwinfoGpu1FanUsageValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU1-FanUsage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 10"]
ToolTipText="HWiNFO-GPU1-FanUsage"

; Video Clock (Shader Clock)
[HwinfoGpu1VideoClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Video Clock:"

[HwinfoGpu1VideoClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU1-VideoClock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 11"]
ToolTipText="HWiNFO-GPU1-VideoClock"

; Memory Controller Usage
[HwinfoGpu1MemControllerLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Memory Controller:"

[HwinfoGpu1MemControllerValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU1-MemController#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 12"]
ToolTipText="HWiNFO-GPU1-MemController"

; Core Voltage
[HwinfoGpu1CoreVoltageLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core Voltage:"

[HwinfoGpu1CoreVoltageValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-GPU1-CoreVoltage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 13"]
ToolTipText="HWiNFO-GPU1-CoreVoltage"
