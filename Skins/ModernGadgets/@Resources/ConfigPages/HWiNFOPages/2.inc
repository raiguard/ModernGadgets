; MODERNGADGETS CONFIG HWiNFO "MOBO" SUBPAGE

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
Command1=[!WriteKeyValue Variables HWiNFO-MOBO-SensorId "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-MOBO-SensorId#" X=[HwinfoMoboSensorIdValueString:X] Y=[HwinfoMoboSensorIdValueString:Y] H=[HwinfoMoboSensorIdValueString:H]
Command2=[!WriteKeyValue Variables HWiNFO-MOBO-SensorInstance "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-MOBO-SensorInstance#" X=[HwinfoMoboSensorInstanceValueString:X] Y=[HwinfoMoboSensorInstanceValueString:Y] H=[HwinfoMoboSensorInstanceValueString:H]
Command3=[!WriteKeyValue Variables HWiNFO-MOBO-CpuFan "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-MOBO-CpuFan#" X=[HwinfoMoboCpuFanValueString:X] Y=[HwinfoMoboCpuFanValueString:Y] H=[HwinfoMoboCpuFanValueString:H]

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
X=2R
Y=1r
Text="MOBO"

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
[HwinfoMoboSensorIdLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=10R
Text="Sensor ID:"

[HwinfoMoboSensorIdValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-MOBO-SensorId#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 1"]
ToolTipText="HWiNFO-MOBO-SensorId"

[HwinfoMoboSensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Sensor Instance:"

[HwinfoMoboSensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-MOBO-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 2"]
ToolTipText="HWiNFO-MOBO-SensorInstance"

; CPU Fan Speed
[HwinfoMoboCpuFanLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=10R
Text="CPU Fan Speed:"

[HwinfoMoboCpuFanValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-MOBO-CpuFan#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 3"]
ToolTipText="HWiNFO-MOBO-CpuFan"
