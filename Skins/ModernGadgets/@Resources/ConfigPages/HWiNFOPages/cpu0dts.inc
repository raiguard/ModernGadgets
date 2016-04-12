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
Command1=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-SensorId "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-SensorId#" X=[HwinfoCpu0DtsSensorIdValueString:X] Y=[HwinfoCpu0DtsSensorIdValueString:Y] H=[HwinfoCpu0DtsSensorIdValueString:H]
Command2=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-SensorInstance "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-SensorInstance#" X=[HwinfoCpu0DtsSensorInstanceValueString:X] Y=[HwinfoCpu0DtsSensorInstanceValueString:Y] H=[HwinfoCpu0DtsSensorInstanceValueString:H]
Command3=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core0Temp "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-Core0Temp#" X=[HwinfoCpu0DtsCore0TempValueString:X] Y=[HwinfoCpu0DtsCore0TempValueString:Y] H=[HwinfoCpu0DtsCore0TempValueString:H]
Command4=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core1Temp "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-Core1Temp#" X=[HwinfoCpu0DtsCore1TempValueString:X] Y=[HwinfoCpu0DtsCore1TempValueString:Y] H=[HwinfoCpu0DtsCore1TempValueString:H]
Command5=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core2Temp "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-Core2Temp#" X=[HwinfoCpu0DtsCore2TempValueString:X] Y=[HwinfoCpu0DtsCore2TempValueString:Y] H=[HwinfoCpu0DtsCore2TempValueString:H]
Command6=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core3Temp "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-Core3Temp#" X=[HwinfoCpu0DtsCore3TempValueString:X] Y=[HwinfoCpu0DtsCore3TempValueString:Y] H=[HwinfoCpu0DtsCore3TempValueString:H]
Command7=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core4Temp "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-Core4Temp#" X=[HwinfoCpu0DtsCore4TempValueString:X] Y=[HwinfoCpu0DtsCore4TempValueString:Y] H=[HwinfoCpu0DtsCore4TempValueString:H]
Command8=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core5Temp "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-Core5Temp#" X=[HwinfoCpu0DtsCore5TempValueString:X] Y=[HwinfoCpu0DtsCore5TempValueString:Y] H=[HwinfoCpu0DtsCore5TempValueString:H]
Command9=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core6Temp "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-Core6Temp#" X=[HwinfoCpu0DtsCore6TempValueString:X] Y=[HwinfoCpu0DtsCore6TempValueString:Y] H=[HwinfoCpu0DtsCore6TempValueString:H]
Command10=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core7Temp "$UserInput$" "#hwinfoConfigFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-Core7Temp#" X=[HwinfoCpu0DtsCore7TempValueString:X] Y=[HwinfoCpu0DtsCore7TempValueString:Y] H=[HwinfoCpu0DtsCore7TempValueString:H]

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
X=2R
Y=1r
Text="CPU0-DTS"

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
FontColor=#fontColorAccent#
X=2R
Y=1r
Text="GPU0"
LeftMouseUpAction=[!WriteKeyValue Variables hwinfoPage "gpu0"][!Refresh]

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
[HwinfoCpu0DtsSensorIdLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=10R
Text="Sensor ID:"

[HwinfoCpu0DtsSensorIdValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-DTS-SensorId#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 1"]
ToolTipText="HWiNFO-CPU0-DTS-SensorId"

[HwinfoCpu0DtsSensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Sensor Instance:"

[HwinfoCpu0DtsSensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-DTS-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 2"]
ToolTipText="HWiNFO-CPU0-DTS-SensorInstance"

; Core 0 Temperature
[HwinfoCpu0DtsCore0TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=10R
Text="Core 0 Temp:"

[HwinfoCpu0DtsCore0TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-DTS-Core0Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 3"]
ToolTipText="HWiNFO-CPU0-DTS-Core0Temp"

; Core 1 Temperature
[HwinfoCpu0DtsCore1TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 1 Temp:"

[HwinfoCpu0DtsCore1TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-DTS-Core1Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 4"]
ToolTipText="HWiNFO-CPU0-DTS-Core1Temp"

; Core 2 Temperature
[HwinfoCpu0DtsCore2TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 2 Temp:"

[HwinfoCpu0DtsCore2TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-DTS-Core2Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 5"]
ToolTipText="HWiNFO-CPU0-DTS-Core2Temp"

; Core 3 Temperature
[HwinfoCpu0DtsCore3TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 3 Temp:"

[HwinfoCpu0DtsCore3TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-DTS-Core3Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 6"]
ToolTipText="HWiNFO-CPU0-DTS-Core3Temp"

; Core 4 Temperature
[HwinfoCpu0DtsCore4TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 4 Temp:"

[HwinfoCpu0DtsCore4TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-DTS-Core4Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 7"]
ToolTipText="HWiNFO-CPU0-DTS-Core4Temp"

; Core 5 Temperature
[HwinfoCpu0DtsCore5TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 5 Temp:"

[HwinfoCpu0DtsCore5TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-DTS-Core5Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 8"]
ToolTipText="HWiNFO-CPU0-DTS-Core5Temp"

; Core 6 Temperature
[HwinfoCpu0DtsCore6TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 6 Temp:"

[HwinfoCpu0DtsCore6TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-DTS-Core6Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 9"]
ToolTipText="HWiNFO-CPU0-DTS-Core6Temp"

; Core 7 Temperature
[HwinfoCpu0DtsCore7TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Core 7 Temp:"

[HwinfoCpu0DtsCore7TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-CPU0-DTS-Core7Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 10"]
ToolTipText="HWiNFO-CPU0-DTS-Core7Temp"
