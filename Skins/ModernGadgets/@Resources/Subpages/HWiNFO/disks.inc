; HWiNFO Config Tool Disks Subpage

; ========= Measures =========

; ----- Input Measures -----

[MeasureInputSmartSensors]
Measure=Plugin
Plugin=InputText
SolidColor=#colorHwinfoValueInputBg#
FontColor=#colorMain#
FontSize=10
FontFace=#fontFace#
UpdateDivider=-1
FocusDismiss=1
Antialias=1
H=16
Command1=[!WriteKeyValue Variables HWiNFO-SMART-Disk1-SensorId "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk1-SensorId# X=[SmartSensorIdValueString:X] Y=[SmartSensorIdValueString:Y] W=[SmartSensorIdValueString:W]
Command2=[!WriteKeyValue Variables HWiNFO-SMART-Disk1-SensorInstance "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk1-SensorInstance# X=[SmartDisk1SensorInstanceValueString:X] Y=[SmartDisk1SensorInstanceValueString:Y] W=[SmartDisk1SensorInstanceValueString:W]
Command3=[!WriteKeyValue Variables HWiNFO-SMART-Disk2-SensorInstance "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk2-SensorInstance# X=[SmartDisk2SensorInstanceValueString:X] Y=[SmartDisk2SensorInstanceValueString:Y] W=[SmartDisk2SensorInstanceValueString:W]
Command4=[!WriteKeyValue Variables HWiNFO-SMART-Disk3-SensorInstance "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk3-SensorInstance# X=[SmartDisk3SensorInstanceValueString:X] Y=[SmartDisk3SensorInstanceValueString:Y] W=[SmartDisk3SensorInstanceValueString:W]
Command5=[!WriteKeyValue Variables HWiNFO-SMART-Disk4-SensorInstance "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk4-SensorInstance# X=[SmartDisk4SensorInstanceValueString:X] Y=[SmartDisk4SensorInstanceValueString:Y] W=[SmartDisk4SensorInstanceValueString:W]
Command6=[!WriteKeyValue Variables HWiNFO-SMART-Disk5-SensorInstance "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk5-SensorInstance# X=[SmartDisk5SensorInstanceValueString:X] Y=[SmartDisk5SensorInstanceValueString:Y] W=[SmartDisk5SensorInstanceValueString:W]
Command7=[!WriteKeyValue Variables HWiNFO-SMART-Disk6-SensorInstance "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk6-SensorInstance# X=[SmartDisk6SensorInstanceValueString:X] Y=[SmartDisk6SensorInstanceValueString:Y] W=[SmartDisk6SensorInstanceValueString:W]
Command8=[!WriteKeyValue Variables HWiNFO-SMART-Disk7-SensorInstance "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk7-SensorInstance# X=[SmartDisk7SensorInstanceValueString:X] Y=[SmartDisk7SensorInstanceValueString:Y] W=[SmartDisk7SensorInstanceValueString:W]
Command9=[!WriteKeyValue Variables HWiNFO-SMART-Disk8-SensorInstance "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk8-SensorInstance# X=[SmartDisk8SensorInstanceValueString:X] Y=[SmartDisk8SensorInstanceValueString:Y] W=[SmartDisk8SensorInstanceValueString:W]
Command10=[!WriteKeyValue Variables HWiNFO-SMART-Disk9-SensorInstance "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk9-SensorInstance# X=[SmartDisk9SensorInstanceValueString:X] Y=[SmartDisk9SensorInstanceValueString:Y] W=[SmartDisk9SensorInstanceValueString:W]
Command11=[!WriteKeyValue Variables HWiNFO-SMART-Disk10-SensorInstance "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk10-SensorInstance# X=[SmartDisk10SensorInstanceValueString:X] Y=[SmartDisk10SensorInstanceValueString:Y] W=[SmartDisk10SensorInstanceValueString:W]

[MeasureInputSmartTemps]
Measure=Plugin
Plugin=InputText
SolidColor=#colorHwinfoValueInputBg#
FontColor=#colorMain#
FontSize=10
FontFace=#fontFace#
UpdateDivider=-1
FocusDismiss=1
Antialias=1
H=16
Command1=[!WriteKeyValue Variables HWiNFO-SMART-Disk1-Temp "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk1-Temp# X=[SmartDisk1TempValueString:X] Y=[SmartDisk1TempValueString:Y] W=[SmartDisk1TempValueString:W]
Command2=[!WriteKeyValue Variables HWiNFO-SMART-Disk2-Temp "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk2-Temp# X=[SmartDisk2TempValueString:X] Y=[SmartDisk2TempValueString:Y] W=[SmartDisk2TempValueString:W]
Command3=[!WriteKeyValue Variables HWiNFO-SMART-Disk3-Temp "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk3-Temp# X=[SmartDisk3TempValueString:X] Y=[SmartDisk3TempValueString:Y] W=[SmartDisk3TempValueString:W]
Command4=[!WriteKeyValue Variables HWiNFO-SMART-Disk4-Temp "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk4-Temp# X=[SmartDisk4TempValueString:X] Y=[SmartDisk4TempValueString:Y] W=[SmartDisk4TempValueString:W]
Command5=[!WriteKeyValue Variables HWiNFO-SMART-Disk5-Temp "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk5-Temp# X=[SmartDisk5TempValueString:X] Y=[SmartDisk5TempValueString:Y] W=[SmartDisk5TempValueString:W]
Command6=[!WriteKeyValue Variables HWiNFO-SMART-Disk6-Temp "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk6-Temp# X=[SmartDisk6TempValueString:X] Y=[SmartDisk6TempValueString:Y] W=[SmartDisk6TempValueString:W]
Command7=[!WriteKeyValue Variables HWiNFO-SMART-Disk7-Temp "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk7-Temp# X=[SmartDisk7TempValueString:X] Y=[SmartDisk7TempValueString:Y] W=[SmartDisk7TempValueString:W]
Command8=[!WriteKeyValue Variables HWiNFO-SMART-Disk8-Temp "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk8-Temp# X=[SmartDisk8TempValueString:X] Y=[SmartDisk8TempValueString:Y] W=[SmartDisk8TempValueString:W]
Command9=[!WriteKeyValue Variables HWiNFO-SMART-Disk9-Temp "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk9-Temp# X=[SmartDisk9TempValueString:X] Y=[SmartDisk9TempValueString:Y] W=[SmartDisk9TempValueString:W]
Command10=[!WriteKeyValue Variables HWiNFO-SMART-Disk10-Temp "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-SMART-Disk10-Temp# X=[SmartDisk10TempValueString:X] Y=[SmartDisk10TempValueString:Y] W=[SmartDisk10TempValueString:W]

; ----- Testing Measures -----

[MeasureHwinfoTestSmartSensorId]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk1-SensorId#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartSensorId = -9100
IfTrueAction=[!SetOptionGroup SmartValues MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorInvalidSensorId"][!UpdateMeterGroup SmartValues][!Redraw]
IfCondition2=MeasureHwinfoTestSmartSensorId = -9102
IfTrueAction2=[!SetOption SmartSensorIdValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorSensorNotFound"][!UpdateMeter SmartSensorIdValueString][!Redraw]

[MeasureHwinfoTestSmartDisk1SensorInstance]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk1-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk1-SensorInstance#
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk1SensorInstance = -9102
IfTrueAction=[!SetOptionGroup SmartDisk1Values MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorSensorNotFound"][!UpdateMeterGroup SmartDisk1Values][!Redraw]

[MeasureHwinfoTestSmartDisk2SensorInstance]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk1-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk2-SensorInstance#
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk2SensorInstance = -9102
IfTrueAction=[!SetOptionGroup SmartDisk2Values MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorSensorNotFound"][!UpdateMeterGroup SmartDisk2Values][!Redraw]

[MeasureHwinfoTestSmartDisk3SensorInstance]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk1-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk3-SensorInstance#
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk3SensorInstance = -9102
IfTrueAction=[!SetOptionGroup SmartDisk3Values MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorSensorNotFound"][!UpdateMeterGroup SmartDisk3Values][!Redraw]

[MeasureHwinfoTestSmartDisk4SensorInstance]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk1-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk4-SensorInstance#
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk4SensorInstance = -9102
IfTrueAction=[!SetOptionGroup SmartDisk4Values MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorSensorNotFound"][!UpdateMeterGroup SmartDisk4Values][!Redraw]

[MeasureHwinfoTestSmartDisk5SensorInstance]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk1-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk5-SensorInstance#
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk5SensorInstance = -9102
IfTrueAction=[!SetOptionGroup SmartDisk5Values MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorSensorNotFound"][!UpdateMeterGroup SmartDisk5Values][!Redraw]

[MeasureHwinfoTestSmartDisk6SensorInstance]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk1-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk6-SensorInstance#
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk6SensorInstance = -9102
IfTrueAction=[!SetOptionGroup SmartDisk6Values MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorSensorNotFound"][!UpdateMeterGroup SmartDisk6Values][!Redraw]

[MeasureHwinfoTestSmartDisk7SensorInstance]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk1-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk7-SensorInstance#
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk7SensorInstance = -9102
IfTrueAction=[!SetOptionGroup SmartDisk7Values MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorSensorNotFound"][!UpdateMeterGroup SmartDisk7Values][!Redraw]

[MeasureHwinfoTestSmartDisk8SensorInstance]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk1-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk8-SensorInstance#
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk8SensorInstance = -9102
IfTrueAction=[!SetOptionGroup SmartDisk8Values MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorSensorNotFound"][!UpdateMeterGroup SmartDisk8Values][!Redraw]

[MeasureHwinfoTestSmartDisk9SensorInstance]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk1-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk9-SensorInstance#
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk9SensorInstance = -9102
IfTrueAction=[!SetOptionGroup SmartDisk9Values MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorSensorNotFound"][!UpdateMeterGroup SmartDisk9Values][!Redraw]

[MeasureHwinfoTestSmartDisk10SensorInstance]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk1-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk10-SensorInstance#
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk10SensorInstance = -9102
IfTrueAction=[!SetOptionGroup SmartDisk10Values MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorSensorNotFound"][!UpdateMeterGroup SmartDisk10Values][!Redraw]

[MeasureHwinfoTestSmartDisk1Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk1-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk1-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-Disk1-Temp#
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk1Temp = -9201
IfTrueAction=[!SetOption SmartDisk1TempValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter SmartDisk1TempValueString][!Redraw]

[MeasureHwinfoTestSmartDisk2Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk2-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk2-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-Disk2-Temp#
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk2Temp = -9201
IfTrueAction=[!SetOption SmartDisk2TempValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter SmartDisk2TempValueString][!Redraw]

[MeasureHwinfoTestSmartDisk3Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk3-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk3-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-Disk3-Temp#
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk3Temp = -9201
IfTrueAction=[!SetOption SmartDisk3TempValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter SmartDisk3TempValueString][!Redraw]

[MeasureHwinfoTestSmartDisk4Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk4-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk4-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-Disk4-Temp#
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk4Temp = -9201
IfTrueAction=[!SetOption SmartDisk4TempValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter SmartDisk4TempValueString][!Redraw]

[MeasureHwinfoTestSmartDisk5Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk5-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk5-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-Disk5-Temp#
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk5Temp = -9201
IfTrueAction=[!SetOption SmartDisk5TempValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter SmartDisk5TempValueString][!Redraw]

[MeasureHwinfoTestSmartDisk6Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk6-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk6-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-Disk6-Temp#
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk6Temp = -9201
IfTrueAction=[!SetOption SmartDisk6TempValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter SmartDisk6TempValueString][!Redraw]

[MeasureHwinfoTestSmartDisk7Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk7-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk7-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-Disk7-Temp#
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk7Temp = -9201
IfTrueAction=[!SetOption SmartDisk7TempValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter SmartDisk7TempValueString][!Redraw]

[MeasureHwinfoTestSmartDisk8Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk8-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk8-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-Disk8-Temp#
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk8Temp = -9201
IfTrueAction=[!SetOption SmartDisk8TempValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter SmartDisk8TempValueString][!Redraw]

[MeasureHwinfoTestSmartDisk9Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk9-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk9-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-Disk9-Temp#
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk9Temp = -9201
IfTrueAction=[!SetOption SmartDisk9TempValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter SmartDisk9TempValueString][!Redraw]

[MeasureHwinfoTestSmartDisk10Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk10-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk10-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-Disk10-Temp#
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoTestSmartDisk10Temp = -9201
IfTrueAction=[!SetOption SmartDisk10TempValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter SmartDisk10TempValueString][!Redraw]

; ========= Meters =========

[SmartHeaderString]
Meter=String
MeterStyle=StyleString | StyleStringSectionHeader
Text="S.M.A.R.T. Data"

[SmartSensorIdLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Y=R
Text="Sensor ID"

[SmartSensorIdValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-SMART-Disk1-SensorId#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartSensors "Executebatch 1"]
Group=SmartValues

[SmartSensorIDsString]
Meter=String
MeterStyle=StyleString
FontColor=#colorInfo#
Text="The above sensor ID is used for all disks"

[SmartSensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
X=163
Text="Sensor Instance"

[SmartDiskTempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
StringAlign=Left
X=8r
Y=r
Text="Temperature"

[SmartDisk1LabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
X=58
Text="Disk 1"

[SmartDisk1SensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3r
Text="#HWiNFO-SMART-Disk1-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartSensors "Executebatch 2"]
Group=SmartValues | SmartDisk1Values

[SmartDisk1TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-SMART-Disk1-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartTemps "Executebatch 1"]
Group=SmartValues | SmartDisk1Values

[SmartDisk2LabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
X=58
Text="Disk 2"

[SmartDisk2SensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3r
Text="#HWiNFO-SMART-Disk2-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartSensors "Executebatch 3"]
Group=SmartValues | SmartDisk2Values

[SmartDisk2TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-SMART-Disk2-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartTemps "Executebatch 2"]
Group=SmartValues | SmartDisk2Values

[SmartDisk3LabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
X=58
Text="Disk 3"

[SmartDisk3SensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3r
Text="#HWiNFO-SMART-Disk3-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartSensors "Executebatch 4"]
Group=SmartValues | SmartDisk3Values

[SmartDisk3TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-SMART-Disk3-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartTemps "Executebatch 3"]
Group=SmartValues | SmartDisk3Values

[SmartDisk4LabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
X=58
Text="Disk 4"

[SmartDisk4SensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3r
Text="#HWiNFO-SMART-Disk4-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartSensors "Executebatch 5"]
Group=SmartValues | SmartDisk4Values

[SmartDisk4TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-SMART-Disk4-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartTemps "Executebatch 4"]
Group=SmartValues | SmartDisk4Values

[SmartDisk5LabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
X=58
Text="Disk 5"

[SmartDisk5SensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3r
Text="#HWiNFO-SMART-Disk5-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartSensors "Executebatch 6"]
Group=SmartValues | SmartDisk5Values

[SmartDisk5TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-SMART-Disk5-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartTemps "Executebatch 5"]
Group=SmartValues | SmartDisk5Values

[SmartDisk6LabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
X=58
Text="Disk 6"

[SmartDisk6SensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3r
Text="#HWiNFO-SMART-Disk6-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartSensors "Executebatch 7"]
Group=SmartValues | SmartDisk6Values

[SmartDisk6TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-SMART-Disk6-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartTemps "Executebatch 6"]
Group=SmartValues | SmartDisk6Values

[SmartDisk7LabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
X=58
Text="Disk 7"

[SmartDisk7SensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3r
Text="#HWiNFO-SMART-Disk7-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartSensors "Executebatch 8"]
Group=SmartValues | SmartDisk7Values

[SmartDisk7TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-SMART-Disk7-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartTemps "Executebatch 7"]
Group=SmartValues | SmartDisk7Values

[SmartDisk8LabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
X=58
Text="Disk 8"

[SmartDisk8SensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3r
Text="#HWiNFO-SMART-Disk8-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartSensors "Executebatch 9"]
Group=SmartValues | SmartDisk8Values

[SmartDisk8TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-SMART-Disk8-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartTemps "Executebatch 8"]
Group=SmartValues | SmartDisk8Values

[SmartDisk9LabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
X=58
Text="Disk 9"

[SmartDisk9SensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3r
Text="#HWiNFO-SMART-Disk9-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartSensors "Executebatch 10"]
Group=SmartValues | SmartDisk9Values

[SmartDisk9TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-SMART-Disk9-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartTemps "Executebatch 9"]
Group=SmartValues | SmartDisk9Values

[SmartDisk10LabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
X=58
Text="Disk 10"

[SmartDisk10SensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3r
Text="#HWiNFO-SMART-Disk10-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartSensors "Executebatch 11"]
Group=SmartValues | SmartDisk10Values

[SmartDisk10TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-SMART-Disk10-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputSmartTemps "Executebatch 10"]
Group=SmartValues | SmartDisk10Values

[SmartDisksNoteString]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
FontSize=9
FontColor=#colorInfo#
Text="Enter the disk letter of each disk you want temperatures for, then enter that drive's corresponding hex values in the same row. Please note that only stationary disks (internal hard drives) have temperature readings in HWiNFO."
