; HWiNFO Config Tool CPU Subpage

[StyleStringSectionHeader]
FontSize=10
FontColor=#colorInfo#

[StyleStringHwinfoLabel]
FontSize=10

[StyleStringHwinfoValue]
FontSize=10
X=1R
Y=r
W=100
H=16
SolidColor=#colorHwinfoValueInputBg#

; ----- Input Measures -----

[MeasureInputCpu0]
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
Command1=[!WriteKeyValue Variables HWiNFO-CPU0-SensorId "$UserInput$" "#hwinfoFilePath#"][!Refresh "ModernGadgets\CPU"][!Refresh] DefaultValue=#HWiNFO-CPU0-SensorId# X=[Cpu0SensorIdValueString:X] Y=[Cpu0SensorIdValueString:Y] W=[Cpu0SensorIdValueString:W]
Command2=[!WriteKeyValue Variables HWiNFO-CPU0-SensorInstance "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-SensorInstance# X=[Cpu0ClockSensorInstanceString:X] Y=[Cpu0ClockSensorInstanceString:Y] W=[Cpu0ClockSensorInstanceString:W]

; ----- CPU0 -----

[Cpu0HeaderString]
Meter=String
MeterStyle=StyleString | StyleStringSectionHeader
Text="CPU 0"

[Cpu0SensorIdLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Sensor ID"

[Cpu0SensorIdValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-CPU0-SensorId#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0 "Executebatch 1"]
