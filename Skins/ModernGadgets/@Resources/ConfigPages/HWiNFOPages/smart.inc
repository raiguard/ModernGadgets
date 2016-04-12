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
Command1=[!WriteKeyValue Variables HWiNFO-SMART-DiskC-SensorId "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskC-SensorId#" X=[HwinfoSmartSensorIdValueString:X] Y=[HwinfoSmartSensorIdValueString:Y] H=[HwinfoSmartSensorIdValueString:H]
Command2=[!WriteKeyValue Variables HWiNFO-SMART-DiskC-SensorInstance "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskC-SensorInstance#" X=[HwinfoSmartDiskCSensorInstanceValueString:X] Y=[HwinfoSmartDiskCSensorInstanceValueString:Y] H=[HwinfoSmartDiskCSensorInstanceValueString:H]
Command3=[!WriteKeyValue Variables HWiNFO-SMART-DiskC-Temp "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskC-Temp#" X=[HwinfoSmartDiskCTempValueString:X] Y=[HwinfoSmartDiskCTempValueString:Y] H=[HwinfoSmartDiskCTempValueString:H]
Command4=[!WriteKeyValue Variables HWiNFO-SMART-DiskD-SensorInstance "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskD-SensorInstance#" X=[HwinfoSmartDiskDSensorInstanceValueString:X] Y=[HwinfoSmartDiskDSensorInstanceValueString:Y] H=[HwinfoSmartDiskDSensorInstanceValueString:H]
Command5=[!WriteKeyValue Variables HWiNFO-SMART-DiskD-Temp "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskD-Temp#" X=[HwinfoSmartDiskDTempValueString:X] Y=[HwinfoSmartDiskDTempValueString:Y] H=[HwinfoSmartDiskDTempValueString:H]
Command6=[!WriteKeyValue Variables HWiNFO-SMART-DiskE-SensorInstance "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskE-SensorInstance#" X=[HwinfoSmartDiskESensorInstanceValueString:X] Y=[HwinfoSmartDiskESensorInstanceValueString:Y] H=[HwinfoSmartDiskESensorInstanceValueString:H]
Command7=[!WriteKeyValue Variables HWiNFO-SMART-DiskE-Temp "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskE-Temp#" X=[HwinfoSmartDiskETempValueString:X] Y=[HwinfoSmartDiskETempValueString:Y] H=[HwinfoSmartDiskETempValueString:H]
Command8=[!WriteKeyValue Variables HWiNFO-SMART-DiskF-SensorInstance "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskF-SensorInstance#" X=[HwinfoSmartDiskFSensorInstanceValueString:X] Y=[HwinfoSmartDiskFSensorInstanceValueString:Y] H=[HwinfoSmartDiskFSensorInstanceValueString:H]
Command9=[!WriteKeyValue Variables HWiNFO-SMART-DiskF-Temp "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskF-Temp#" X=[HwinfoSmartDiskFTempValueString:X] Y=[HwinfoSmartDiskFTempValueString:Y] H=[HwinfoSmartDiskFTempValueString:H]
Command10=[!WriteKeyValue Variables HWiNFO-SMART-DiskG-SensorInstance "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskG-SensorInstance#" X=[HwinfoSmartDiskGSensorInstanceValueString:X] Y=[HwinfoSmartDiskGSensorInstanceValueString:Y] H=[HwinfoSmartDiskGSensorInstanceValueString:H]
Command11=[!WriteKeyValue Variables HWiNFO-SMART-DiskG-Temp "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskG-Temp#" X=[HwinfoSmartDiskGTempValueString:X] Y=[HwinfoSmartDiskGTempValueString:Y] H=[HwinfoSmartDiskGTempValueString:H]
Command12=[!WriteKeyValue Variables HWiNFO-SMART-DiskH-SensorInstance "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskH-SensorInstance#" X=[HwinfoSmartDiskHSensorInstanceValueString:X] Y=[HwinfoSmartDiskHSensorInstanceValueString:Y] H=[HwinfoSmartDiskHSensorInstanceValueString:H]
Command13=[!WriteKeyValue Variables HWiNFO-SMART-DiskH-Temp "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskH-Temp#" X=[HwinfoSmartDiskHTempValueString:X] Y=[HwinfoSmartDiskHTempValueString:Y] H=[HwinfoSmartDiskHTempValueString:H]
Command14=[!WriteKeyValue Variables HWiNFO-SMART-DiskI-SensorInstance "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskI-SensorInstance#" X=[HwinfoSmartDiskISensorInstanceValueString:X] Y=[HwinfoSmartDiskISensorInstanceValueString:Y] H=[HwinfoSmartDiskISensorInstanceValueString:H]
Command15=[!WriteKeyValue Variables HWiNFO-SMART-DiskI-Temp "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskI-Temp#" X=[HwinfoSmartDiskITempValueString:X] Y=[HwinfoSmartDiskITempValueString:Y] H=[HwinfoSmartDiskITempValueString:H]
Command16=[!WriteKeyValue Variables HWiNFO-SMART-DiskJ-SensorInstance "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskJ-SensorInstance#" X=[HwinfoSmartDiskJSensorInstanceValueString:X] Y=[HwinfoSmartDiskJSensorInstanceValueString:Y] H=[HwinfoSmartDiskJSensorInstanceValueString:H]
Command17=[!WriteKeyValue Variables HWiNFO-SMART-DiskJ-Temp "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskJ-Temp#" X=[HwinfoSmartDiskJTempValueString:X] Y=[HwinfoSmartDiskJTempValueString:Y] H=[HwinfoSmartDiskJTempValueString:H]
Command18=[!WriteKeyValue Variables HWiNFO-SMART-DiskK-SensorInstance "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskK-SensorInstance#" X=[HwinfoSmartDiskKSensorInstanceValueString:X] Y=[HwinfoSmartDiskKSensorInstanceValueString:Y] H=[HwinfoSmartDiskKSensorInstanceValueString:H]
Command19=[!WriteKeyValue Variables HWiNFO-SMART-DiskK-Temp "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskK-Temp#" X=[HwinfoSmartDiskKTempValueString:X] Y=[HwinfoSmartDiskKTempValueString:Y] H=[HwinfoSmartDiskKTempValueString:H]
Command20=[!WriteKeyValue Variables HWiNFO-SMART-DiskL-SensorInstance "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskL-SensorInstance#" X=[HwinfoSmartDiskLSensorInstanceValueString:X] Y=[HwinfoSmartDiskLSensorInstanceValueString:Y] H=[HwinfoSmartDiskLSensorInstanceValueString:H]
Command21=[!WriteKeyValue Variables HWiNFO-SMART-DiskL-Temp "$UserInput$" "#settingsFilePath#"][!RefreshGroup ModernGadgetsDisks][!Refresh] DefaultValue="#HWiNFO-SMART-DiskL-Temp#" X=[HwinfoSmartDiskLTempValueString:X] Y=[HwinfoSmartDiskLTempValueString:Y] H=[HwinfoSmartDiskLTempValueString:H]

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
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 4"]
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
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 5"]
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
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 6"]
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
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 7"]
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
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 8"]
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
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 9"]
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
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 10"]
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
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 11"]
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
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 12"]
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
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 13"]
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
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 14"]
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
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 15"]
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
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 16"]
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
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 17"]
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
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 18"]
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
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 19"]
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
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 20"]
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
LeftMouseUpAction=[!CommandMeasure MeasureInputText "Executebatch 21"]
ToolTipText="HWiNFO-SMART-DiskL-Temp"
