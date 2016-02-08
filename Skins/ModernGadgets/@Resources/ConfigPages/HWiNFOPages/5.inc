; MODERNGADGETS CONFIG HWiNFO "SMART" SUBPAGE

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
X=2R
Y=1r
Text="S.M.A.R.T."

; ----- Entry IDs -----

; Sensor ID
[HwinfoSmartSensorIdLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=10R
Text="Sensor ID:"

[HwinfoSmartSensorIdValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskC-SensorId#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 1"]
ToolTipText="HWiNFO-SMART-DiskC-SensorId"

; Disk C
[HwinfoSmartDiskCSensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=3R
Text="Disk C Sensor Instance:"

[HwinfoSmartDiskCSensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskC-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 2"]
ToolTipText="HWiNFO-SMART-DiskC-SensorInstance"

[HwinfoSmartDiskCTempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Disk C Temperature:"

[HwinfoSmartDiskCTempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskC-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 3"]
ToolTipText="HWiNFO-SMART-DiskC-Temp"

; Disk D
[HwinfoSmartDiskDSensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=3R
Text="Disk D Sensor Instance:"

[HwinfoSmartDiskDSensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskD-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 3"]
ToolTipText="HWiNFO-SMART-DiskD-SensorInstance"

[HwinfoSmartDiskDTempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Disk D Temperature:"

[HwinfoSmartDiskDTempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskD-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 4"]
ToolTipText="HWiNFO-SMART-DiskD-Temp"

; Disk E
[HwinfoSmartDiskESensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=3R
Text="Disk E Sensor Instance:"

[HwinfoSmartDiskESensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskE-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 5"]
ToolTipText="HWiNFO-SMART-DiskE-SensorInstance"

[HwinfoSmartDiskETempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Disk E Temperature:"

[HwinfoSmartDiskETempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskE-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 6"]
ToolTipText="HWiNFO-SMART-DiskE-Temp"

; Disk F
[HwinfoSmartDiskFSensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=3R
Text="Disk F Sensor Instance:"

[HwinfoSmartDiskFSensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskF-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 7"]
ToolTipText="HWiNFO-SMART-DiskF-SensorInstance"

[HwinfoSmartDiskFTempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Disk F Temperature:"

[HwinfoSmartDiskFTempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskF-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 8"]
ToolTipText="HWiNFO-SMART-DiskF-Temp"

; Disk G
[HwinfoSmartDiskGSensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=3R
Text="Disk G Sensor Instance:"

[HwinfoSmartDiskGSensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskG-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 9"]
ToolTipText="HWiNFO-SMART-DiskG-SensorInstance"

[HwinfoSmartDiskGTempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Disk G Temperature:"

[HwinfoSmartDiskGTempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskG-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 10"]
ToolTipText="HWiNFO-SMART-DiskG-Temp"

; Disk H
[HwinfoSmartDiskHSensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=3R
Text="Disk H Sensor Instance:"

[HwinfoSmartDiskHSensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskH-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 11"]
ToolTipText="HWiNFO-SMART-DiskH-SensorInstance"

[HwinfoSmartDiskHTempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Disk H Temperature:"

[HwinfoSmartDiskHTempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskH-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 12"]
ToolTipText="HWiNFO-SMART-DiskH-Temp"

; Disk I
[HwinfoSmartDiskISensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=3R
Text="Disk I Sensor Instance:"

[HwinfoSmartDiskISensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskI-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 13"]
ToolTipText="HWiNFO-SMART-DiskI-SensorInstance"

[HwinfoSmartDiskITempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Disk I Temperature:"

[HwinfoSmartDiskITempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskI-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 14"]
ToolTipText="HWiNFO-SMART-DiskI-Temp"

; Disk J
[HwinfoSmartDiskJSensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=3R
Text="Disk J Sensor Instance:"

[HwinfoSmartDiskJSensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskJ-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 15"]
ToolTipText="HWiNFO-SMART-DiskJ-SensorInstance"

[HwinfoSmartDiskJTempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Disk J Temperature:"

[HwinfoSmartDiskJTempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskJ-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 16"]
ToolTipText="HWiNFO-SMART-DiskJ-Temp"

; Disk K
[HwinfoSmartDiskKSensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=3R
Text="Disk K Sensor Instance:"

[HwinfoSmartDiskKSensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskK-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 17"]
ToolTipText="HWiNFO-SMART-DiskK-SensorInstance"

[HwinfoSmartDiskKTempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Disk K Temperature:"

[HwinfoSmartDiskKTempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskK-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 18"]
ToolTipText="HWiNFO-SMART-DiskK-Temp"

; Disk L
[HwinfoSmartDiskLSensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Y=3R
Text="Disk L Sensor Instance:"

[HwinfoSmartDiskLSensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskL-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 19"]
ToolTipText="HWiNFO-SMART-DiskL-SensorInstance"

[HwinfoSmartDiskLTempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoLabel
Text="Disk L Temperature:"

[HwinfoSmartDiskLTempValueString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringHwinfoValue
FontColor=#fontColorDim#
Text="#HWiNFO-SMART-DiskL-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 20"]
ToolTipText="HWiNFO-SMART-DiskL-Temp"
