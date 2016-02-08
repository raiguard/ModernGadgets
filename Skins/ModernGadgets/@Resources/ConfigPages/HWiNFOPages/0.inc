; MODERNGADGETS CONFIG HWiNFO "CPU0" SUBPAGE

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
Command1=[!WriteKeyValue Variables HWiNFO-CPU0-SensorId "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-SensorId#" X=[HwinfoCpu0SensorIdValueString:X] Y=[HwinfoCpu0SensorIdValueString:Y] H=[HwinfoCpu0SensorIdValueString:H]
Command2=[!WriteKeyValue Variables HWiNFO-CPU0-SensorInstance "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-SensorInstance#" X=[HwinfoCpu0SensorInstanceValueString:X] Y=[HwinfoCpu0SensorInstanceValueString:Y] H=[HwinfoCpu0SensorInstanceValueString:H]
Command3=[!WriteKeyValue Variables HWiNFO-CPU0-Usage "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-Usage#" X=[HwinfoCpu0UsageValueString:X] Y=[HwinfoCpu0UsageValueString:Y] H=[HwinfoCpu0UsageValueString:H]
Command4=[!WriteKeyValue Variables HWiNFO-CPU0-Core0Clock "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-Core0Clock#" X=[HwinfoCpu0Core0ClockValueString:X] Y=[HwinfoCpu0Core0ClockValueString:Y] H=[HwinfoCpu0Core0ClockValueString:H]
Command5=[!WriteKeyValue Variables HWiNFO-CPU0-Core1Clock "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-Core1Clock#" X=[HwinfoCpu0Core1ClockValueString:X] Y=[HwinfoCpu0Core1ClockValueString:Y] H=[HwinfoCpu0Core1ClockValueString:H]
Command6=[!WriteKeyValue Variables HWiNFO-CPU0-Core2Clock "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-Core2Clock#" X=[HwinfoCpu0Core2ClockValueString:X] Y=[HwinfoCpu0Core2ClockValueString:Y] H=[HwinfoCpu0Core2ClockValueString:H]
Command7=[!WriteKeyValue Variables HWiNFO-CPU0-Core3Clock "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-Core3Clock#" X=[HwinfoCpu0Core3ClockValueString:X] Y=[HwinfoCpu0Core3ClockValueString:Y] H=[HwinfoCpu0Core3ClockValueString:H]
Command8=[!WriteKeyValue Variables HWiNFO-CPU0-Core4Clock "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-Core4Clock#" X=[HwinfoCpu0Core4ClockValueString:X] Y=[HwinfoCpu0Core4ClockValueString:Y] H=[HwinfoCpu0Core4ClockValueString:H]
Command9=[!WriteKeyValue Variables HWiNFO-CPU0-Core5Clock "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-Core5Clock#" X=[HwinfoCpu0Core5ClockValueString:X] Y=[HwinfoCpu0Core5ClockValueString:Y] H=[HwinfoCpu0Core5ClockValueString:H]
Command10=[!WriteKeyValue Variables HWiNFO-CPU0-Core6Clock "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-Core6Clock#" X=[HwinfoCpu0Core6ClockValueString:X] Y=[HwinfoCpu0Core6ClockValueString:Y] H=[HwinfoCpu0Core6ClockValueString:H]
Command11=[!WriteKeyValue Variables HWiNFO-CPU0-Core7Clock "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-Core7Clock#" X=[HwinfoCpu0Core7ClockValueString:X] Y=[HwinfoCpu0Core7ClockValueString:Y] H=[HwinfoCpu0Core7ClockValueString:H]
Command12=[!WriteKeyValue Variables HWiNFO-CPU0-Core0VID "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-Core0VID#" X=[HwinfoCpu0Core0VIDValueString:X] Y=[HwinfoCpu0Core0VIDValueString:Y] H=[HwinfoCpu0Core0VIDValueString:H]
Command13=[!WriteKeyValue Variables HWiNFO-CPU0-Core1VID "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-Core1VID#" X=[HwinfoCpu0Core1VIDValueString:X] Y=[HwinfoCpu0Core1VIDValueString:Y] H=[HwinfoCpu0Core1VIDValueString:H]
Command14=[!WriteKeyValue Variables HWiNFO-CPU0-Core2VID "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-Core2VID#" X=[HwinfoCpu0Core2VIDValueString:X] Y=[HwinfoCpu0Core2VIDValueString:Y] H=[HwinfoCpu0Core2VIDValueString:H]
Command15=[!WriteKeyValue Variables HWiNFO-CPU0-Core3VID "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-Core3VID#" X=[HwinfoCpu0Core3VIDValueString:X] Y=[HwinfoCpu0Core3VIDValueString:Y] H=[HwinfoCpu0Core3VIDValueString:H]
Command16=[!WriteKeyValue Variables HWiNFO-CPU0-Core4VID "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-Core4VID#" X=[HwinfoCpu0Core4VIDValueString:X] Y=[HwinfoCpu0Core4VIDValueString:Y] H=[HwinfoCpu0Core4VIDValueString:H]
Command17=[!WriteKeyValue Variables HWiNFO-CPU0-Core5VID "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-Core5VID#" X=[HwinfoCpu0Core5VIDValueString:X] Y=[HwinfoCpu0Core5VIDValueString:Y] H=[HwinfoCpu0Core5VIDValueString:H]
Command18=[!WriteKeyValue Variables HWiNFO-CPU0-Core6VID "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-Core6VID#" X=[HwinfoCpu0Core6VIDValueString:X] Y=[HwinfoCpu0Core6VIDValueString:Y] H=[HwinfoCpu0Core6VIDValueString:H]
Command19=[!WriteKeyValue Variables HWiNFO-CPU0-Core7VID "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-Core7VID#" X=[HwinfoCpu0Core7VIDValueString:X] Y=[HwinfoCpu0Core7VIDValueString:Y] H=[HwinfoCpu0Core7VIDValueString:H]

; ----- HWiNFO Navigation Bar -----

[HwinfoNavBarButtonCPU0String]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
Y=10R
Text="CPU0"

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
FontColor=#fontColorAccent#
X=2R
Y=1r
Text="GPU1"
LeftMouseUpAction=[!WriteKeyValue Variables hwinfoPage 4 "#configVariablesPath#"][!Refresh]

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
[HwinfoCpu0SensorIdLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=10R
Text="Sensor ID:"

[HwinfoCpu0SensorIdValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-SensorId#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 1"]
ToolTipText="HWiNFO-CPU0-SensorId"

[HwinfoCpu0SensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Sensor Instance:"

[HwinfoCpu0SensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 2"]
ToolTipText="HWiNFO-CPU0-SensorInstance"

; Usage
[HwinfoCpu0UsageLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=10R
Text="Usage:"

[HwinfoCpu0UsageValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-Usage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 3"]
ToolTipText="HWiNFO-CPU0-Usage"

; Core 0 Clock
[HwinfoCpu0Core0ClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 0 Clock:"

[HwinfoCpu0Core0ClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-Core0Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 4"]
ToolTipText="HWiNFO-CPU0-Core0Clock"

; Core 1 Clock
[HwinfoCpu0Core1ClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 1 Clock:"

[HwinfoCpu0Core1ClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-Core1Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 5"]
ToolTipText="HWiNFO-CPU0-Core1Clock"

; Core 2 Clock
[HwinfoCpu0Core2ClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 2 Clock:"

[HwinfoCpu0Core2ClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-Core2Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 6"]
ToolTipText="HWiNFO-CPU0-Core2Clock"

; Core 3 Clock
[HwinfoCpu0Core3ClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 3 Clock:"

[HwinfoCpu0Core3ClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-Core3Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 7"]
ToolTipText="HWiNFO-CPU0-Core3Clock"

; Core 4 Clock
[HwinfoCpu0Core4ClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 4 Clock:"

[HwinfoCpu0Core4ClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-Core4Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 8"]
ToolTipText="HWiNFO-CPU0-Core4Clock"

; Core 5 Clock
[HwinfoCpu0Core5ClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 5 Clock:"

[HwinfoCpu0Core5ClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-Core5Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 9"]
ToolTipText="HWiNFO-CPU0-Core5Clock"

; Core 6 Clock
[HwinfoCpu0Core6ClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 6 Clock:"

[HwinfoCpu0Core6ClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-Core6Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 10"]
ToolTipText="HWiNFO-CPU0-Core6Clock"

; Core 7 Clock
[HwinfoCpu0Core7ClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 7 Clock:"

[HwinfoCpu0Core7ClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-Core7Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 11"]
ToolTipText="HWiNFO-CPU0-Core7Clock"

; Core 0 Voltage
[HwinfoCpu0Core0VIDLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 0 Voltage:"

[HwinfoCpu0Core0VIDValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-Core0VID#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 12"]
ToolTipText="HWiNFO-CPU0-Core0VID"

; Core 1 Voltage
[HwinfoCpu0Core1VIDLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 1 Voltage:"

[HwinfoCpu0Core1VIDValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-Core1VID#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 13"]
ToolTipText="HWiNFO-CPU0-Core1VID"

; Core 2 Voltage
[HwinfoCpu0Core2VIDLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 2 Voltage:"

[HwinfoCpu0Core2VIDValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-Core2VID#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 14"]
ToolTipText="HWiNFO-CPU0-Core2VID"

; Core 3 Voltage
[HwinfoCpu0Core3VIDLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 3 Voltage:"

[HwinfoCpu0Core3VIDValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-Core3VID#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 15"]
ToolTipText="HWiNFO-CPU0-Core3VID"

; Core 4 Voltage
[HwinfoCpu0Core4VIDLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 4 Voltage:"

[HwinfoCpu0Core4VIDValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-Core4VID#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 16"]
ToolTipText="HWiNFO-CPU0-Core4VID"

; Core 5 Voltage
[HwinfoCpu0Core5VIDLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 5 Voltage:"

[HwinfoCpu0Core5VIDValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-Core5VID#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 17"]
ToolTipText="HWiNFO-CPU0-Core5VID"

; Core 6 Voltage
[HwinfoCpu0Core6VIDLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 6 Voltage:"

[HwinfoCpu0Core6VIDValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-Core6VID#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 18"]
ToolTipText="HWiNFO-CPU0-Core6VID"

; Core 7 Voltage
[HwinfoCpu0Core7VIDLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 7 Voltage:"

[HwinfoCpu0Core7VIDValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-Core7VID#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 19"]
ToolTipText="HWiNFO-CPU0-Core7VID"
