; HWiNFO Config Tool CPU Subpage

; ----- Input Measures -----

[MeasureInputCpu0]
Measure=Plugin
Plugin=InputText
SolidColor=#colorHwinfoValueInputBg#
FontColor=#colorHwinfoValueInputText#
FontSize=10
FontFace=#fontFace#
UpdateDivider=-1
FocusDismiss=1
Antialias=1
H=16
Command1=[!WriteKeyValue Variables HWiNFO-CPU0-SensorId "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-SensorId# X=[Cpu0SensorIdValueString:X] Y=[Cpu0SensorIdValueString:Y] W=[Cpu0SensorIdValueString:W]
Command2=[!WriteKeyValue Variables HWiNFO-CPU0-SensorInstance "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-SensorInstance# X=[Cpu0SensorInstanceValueString:X] Y=[Cpu0SensorInstanceValueString:Y] W=[Cpu0SensorInstanceValueString:W]
Command3=[!WriteKeyValue Variables HWiNFO-CPU0-Core0Clock "$UserInput$" "#hwinfoFilePath#"][!CommandMeasure MeasureHwinfoConfigScript "FillIDs('HWiNFO-CPU0-Core', 'Clock', '[MeasureInputCpu0]', '#*hwinfoFilePath*#')"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core0Clock# X=[Cpu0Core0ClockValueString:X] Y=[Cpu0Core0ClockValueString:Y] W=[Cpu0Core0ClockValueString:W]
DynamicVariables=1

[MeasureInputCpu0Dts]
Measure=Plugin
Plugin=InputText
SolidColor=#colorHwinfoValueInputBg#
FontColor=#colorHwinfoValueInputText#
FontSize=10
FontFace=#fontFace#
UpdateDivider=-1
FocusDismiss=1
Antialias=1
H=16
Command1=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-SensorId "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-DTS-SensorId# X=[Cpu0DtsSensorIdValueString:X] Y=[Cpu0DtsSensorIdValueString:Y] W=[Cpu0DtsSensorIdValueString:W]
Command2=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-SensorInstance "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-DTS-SensorInstance# X=[Cpu0DtsSensorInstanceValueString:X] Y=[Cpu0DtsSensorInstanceValueString:Y] W=[Cpu0DtsSensorInstanceValueString:W]
Command3=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core0Temp "$UserInput$" "#hwinfoFilePath#"][!CommandMeasure MeasureHwinfoConfigScript "FillIDs('HWiNFO-CPU0-DTS-Core', 'Temp', '[MeasureInputCpu0Dts]', '#*hwinfoFilePath*#')"][!Refresh] DefaultValue=#HWiNFO-CPU0-DTS-Core0Temp# X=[Cpu0DtsCore0TempValueString:X] Y=[Cpu0DtsCore0TempValueString:Y] W=[Cpu0DtsCore0TempValueString:W]
Command4=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-PackageTt "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-DTS-PackageTt# X=[Cpu0DtsPackageTtValueString:X] Y=[Cpu0DtsPackageTtValueString:Y] W=[Cpu0DtsPackageTtValueString:W]
DynamicVariables=1

[MeasureInputMobo]
Measure=Plugin
Plugin=InputText
SolidColor=#colorHwinfoValueInputBg#
FontColor=#colorHwinfoValueInputText#
FontSize=10
FontFace=#fontFace#
UpdateDivider=-1
FocusDismiss=1
Antialias=1
H=16
Command1=[!WriteKeyValue Variables HWiNFO-MOBO-SensorId "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-MOBO-SensorId# X=[MoboSensorIdValueString:X] Y=[MoboSensorIdValueString:Y] W=[MoboSensorIdValueString:W]
Command2=[!WriteKeyValue Variables HWiNFO-MOBO-SensorInstance "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-MOBO-SensorInstance# X=[MoboSensorInstanceValueString:X] Y=[MoboSensorInstanceValueString:Y] W=[MoboSensorInstanceValueString:W]
Command3=[!WriteKeyValue Variables HWiNFO-MOBO-CpuFan "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-MOBO-CpuFan# X=[MoboCpuFanValueString:X] Y=[MoboCpuFanValueString:Y] W=[MoboCpuFanValueString:W]

; ========= Test Measures =========

; ----- CPU 0 -----

[MeasureHwinfoTestCpu0SensorId]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
HWiNFOLogHandler=2

[MeasureHwinfoTestCpu0SensorInstance]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwinfoTestCpu0SensorId = -9102
IfTrueAction=[!SetOptionGroup Cpu0Values MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorSensorNotFound"][!UpdateMeterGroup Cpu0Values][!Redraw]

[MeasureHwinfoTestCpu0Core0Clock]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core0Clock#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwinfoTestCpu0Core0Clock = -9201
IfTrueAction=[!SetOption Cpu0Core0ClockValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter Cpu0Core0ClockValueString][!Redraw]

; ----- CPU 0: DTS -----

[MeasureHwinfoTestCpu0DtsSensorId]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
HWiNFOLogHandler=2

[MeasureHwinfoTestCpu0DtsSensorInstance]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwinfoTestCpu0DtsSensorId = -9102
IfTrueAction=[!SetOptionGroup Cpu0DtsValues MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorSensorNotFound"][!UpdateMeterGroup Cpu0DtsValues][!Redraw]

[MeasureHwifnoTestCpu0DtsPackageTt]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-PackageTt#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwifnoTestCpu0DtsPackageTt = -9201
IfTrueAction=[!SetOption Cpu0DtsPackageTtValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter Cpu0DtsPackageTtValueString][!Redraw]

[MeasureHwinfoTestCpu0DtsCore0Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core0Temp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwinfoTestCpu0DtsCore0Temp = -9201
IfTrueAction=[!SetOption Cpu0DtsCore0TempValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter Cpu0DtsCore0TempValueString][!Redraw]

; ----- Motherboard -----

[MeasureHwinfoTestMoboSensorId]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-MOBO-SensorId#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
HWiNFOLogHandler=2

[MeasureHwinfoTestMoboSensorInstance]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-MOBO-SensorId#
HWiNFOSensorInstance=#HWiNFO-MOBO-SensorInstance#
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwinfoTestMoboSensorId = -9102
IfTrueAction=[!SetOptionGroup MoboValues MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorSensorNotFound"][!UpdateMeterGroup MoboValues][!Redraw]

[MeasureHwinfoTestMoboCpuFan]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-MOBO-SensorId#
HWiNFOSensorInstance=#HWiNFO-MOBO-SensorInstance#
HWiNFOEntryId=#HWiNFO-MOBO-CpuFan#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwinfoTestMoboCpuFan = -9201
IfTrueAction=[!SetOption MoboCpuFanValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter MoboCpuFanValueString][!Redraw]

; ----- CPU0 -----

[Cpu0HeaderString]
Meter=String
MeterStyle=StyleString | StyleStringConfigSectionHeader
Text="CPU 0"

[Cpu0SensorIdLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Y=R
Text="Sensor ID"

[Cpu0SensorIdValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-CPU0-SensorId#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0 "Executebatch 1"]
Group=Cpu0Values

[Cpu0SensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Sensor Instance"

[Cpu0SensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-CPU0-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0 "Executebatch 2"]
Group=Cpu0Values

[Cpu0Core0ClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Core 0 Clock"

[Cpu0Core0ClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-CPU0-Core0Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0 "Executebatch 3"]
Group=Cpu0Values

[Cpu0Core1-7ClocksString]
Meter=String
MeterStyle=StyleString
FontColor=#colorInfo#
Y=2R
Text="Core clocks 1-9 will be filled in automatically"

[Cpu0SeparatorBar]
Meter=Image
MeterStyle=StyleSectionSeparator

; ----- CPU 0: DTS -----

[Cpu0DtsHeaderString]
Meter=String
MeterStyle=StyleString | StyleStringConfigSectionHeader
Text="CPU 0: DTS"

[Cpu0DtsSensorIdLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Y=R
Text="Sensor ID"

[Cpu0DtsSensorIdValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-CPU0-DTS-SensorId#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Dts "Executebatch 1"]
Group=Cpu0DtsValues

[Cpu0DtsSensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Sensor Instance"

[Cpu0DtsSensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-CPU0-DTS-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Dts "Executebatch 2"]
Group=Cpu0DtsValues

[Cpu0DtsPackageTtLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Thermal Throttling"

[Cpu0DtsPackageTtValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-CPU0-DTS-PackageTt#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Dts "Executebatch 4"]
Group=Cpu0DtsValues

[Cpu0DtsCore0TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Core 0 Temp."

[Cpu0DtsCore0TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-CPU0-DTS-Core0Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Dts "Executebatch 3"]
Group=Cpu0DtsValues

[Cpu0DtsCore1-7TempsString]
Meter=String
MeterStyle=StyleString
FontColor=#colorInfo#
Y=2R
Text="Core temperatures 1-9 will be filled in automatically"

[Cpu0DtsSeparatorBar]
Meter=Image
MeterStyle=StyleSectionSeparator

; ----- Motherboard -----

[MoboHeaderString]
Meter=String
MeterStyle=StyleString | StyleStringConfigSectionHeader
Text="Motherboard"

[MoboSensorIdLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Y=R
Text="Sensor ID"

[MoboSensorIdValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-MOBO-SensorId#"
LeftMouseUpAction=[!CommandMeasure MeasureInputMobo "Executebatch 1"]
Group=MoboValues

[MoboSensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Sensor Instance"

[MoboSensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-MOBO-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputMobo "Executebatch 2"]
Group=MoboValues

[MoboCpuFanLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="CPU Fan"

[MoboCpuFanValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-MOBO-CpuFan#"
LeftMouseUpAction=[!CommandMeasure MeasureInputMobo "Executebatch 3"]
Group=MoboValues
