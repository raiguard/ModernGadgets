; HWiNFO Config Tool GPU Subpage

; ----- Input Measures -----

[MeasureInputGpu0]
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
Command1=[!WriteKeyValue Variables HWiNFO-GPU0-SensorId "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU0-SensorId# X=[Gpu0SensorIdValueString:X] Y=[Gpu0SensorIdValueString:Y] W=[Gpu0SensorIdValueString:W]
Command2=[!WriteKeyValue Variables HWiNFO-GPU0-SensorInstance "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU0-SensorInstance# X=[Gpu0SensorInstanceValueString:X] Y=[Gpu0SensorInstanceValueString:Y] W=[Gpu0SensorInstanceValueString:W]
Command3=[!WriteKeyValue Variables HWiNFO-GPU0-Clock "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU0-Clock# X=[Gpu0ClockValueString:X] Y=[Gpu0ClockValueString:Y] W=[Gpu0ClockValueString:W]
Command4=[!WriteKeyValue Variables HWiNFO-GPU0-Temp "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU0-Temp# X=[Gpu0TempValueString:X] Y=[Gpu0TempValueString:Y] W=[Gpu0TempValueString:W]
Command5=[!WriteKeyValue Variables HWiNFO-GPU0-CoreLoad "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU0-CoreLoad# X=[Gpu0CoreLoadValueString:X] Y=[Gpu0CoreLoadValueString:Y] W=[Gpu0CoreLoadValueString:W]
Command6=[!WriteKeyValue Variables HWiNFO-GPU0-MemoryClock "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU0-MemoryClock# X=[Gpu0MemoryClockValueString:X] Y=[Gpu0MemoryClockValueString:Y] W=[Gpu0MemoryClockValueString:W]
Command7=[!WriteKeyValue Variables HWiNFO-GPU0-MemoryUsage "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU0-MemoryUsage# X=[Gpu0MemoryUsageValueString:X] Y=[Gpu0MemoryUsageValueString:Y] W=[Gpu0MemoryUsageValueString:W]
Command8=[!WriteKeyValue Variables HWiNFO-GPU0-MemoryAlloc "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU0-MemoryAlloc# X=[Gpu0MemoryAllocValueString:X] Y=[Gpu0MemoryAllocValueString:Y] W=[Gpu0MemoryAllocValueString:W]
Command9=[!WriteKeyValue Variables HWiNFO-GPU0-FanSpeed "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU0-FanSpeed# X=[Gpu0FanSpeedValueString:X] Y=[Gpu0FanSpeedValueString:Y] W=[Gpu0FanSpeedValueString:W]
Command10=[!WriteKeyValue Variables HWiNFO-GPU0-FanUsage "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU0-FanUsage# X=[Gpu0FanUsageValueString:X] Y=[Gpu0FanUsageValueString:Y] W=[Gpu0FanUsageValueString:W]
Command11=[!WriteKeyValue Variables HWiNFO-GPU0-VideoClock "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU0-VideoClock# X=[Gpu0VideoClockValueString:X] Y=[Gpu0VideoClockValueString:Y] W=[Gpu0VideoClockValueString:W]
Command12=[!WriteKeyValue Variables HWiNFO-GPU0-MemController "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU0-MemController# X=[Gpu0MemoryControllerValueString:X] Y=[Gpu0MemoryControllerValueString:Y] W=[Gpu0MemoryControllerValueString:W]
Command13=[!WriteKeyValue Variables HWiNFO-GPU0-CoreVoltage "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU0-CoreVoltage# X=[Gpu0CoreVoltageValueString:X] Y=[Gpu0CoreVoltageValueString:Y] W=[Gpu0CoreVoltageValueString:W]

[MeasureInputGpu1]
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
Command1=[!WriteKeyValue Variables HWiNFO-GPU1-SensorId "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU1-SensorId# X=[Gpu1SensorIdValueString:X] Y=[Gpu1SensorIdValueString:Y] W=[Gpu1SensorIdValueString:W]
Command2=[!WriteKeyValue Variables HWiNFO-GPU1-SensorInstance "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU1-SensorInstance# X=[Gpu1SensorInstanceValueString:X] Y=[Gpu1SensorInstanceValueString:Y] W=[Gpu1SensorInstanceValueString:W]
Command3=[!WriteKeyValue Variables HWiNFO-GPU1-Clock "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU1-Clock# X=[Gpu1ClockValueString:X] Y=[Gpu1ClockValueString:Y] W=[Gpu1ClockValueString:W]
Command4=[!WriteKeyValue Variables HWiNFO-GPU1-Temp "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU1-Temp# X=[Gpu1TempValueString:X] Y=[Gpu1TempValueString:Y] W=[Gpu1TempValueString:W]
Command5=[!WriteKeyValue Variables HWiNFO-GPU1-CoreLoad "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU1-CoreLoad# X=[Gpu1CoreLoadValueString:X] Y=[Gpu1CoreLoadValueString:Y] W=[Gpu1CoreLoadValueString:W]
Command6=[!WriteKeyValue Variables HWiNFO-GPU1-MemoryClock "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU1-MemoryClock# X=[Gpu1MemoryClockValueString:X] Y=[Gpu1MemoryClockValueString:Y] W=[Gpu1MemoryClockValueString:W]
Command7=[!WriteKeyValue Variables HWiNFO-GPU1-MemoryUsage "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU1-MemoryUsage# X=[Gpu1MemoryUsageValueString:X] Y=[Gpu1MemoryUsageValueString:Y] W=[Gpu1MemoryUsageValueString:W]
Command8=[!WriteKeyValue Variables HWiNFO-GPU1-MemoryAlloc "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU1-MemoryAlloc# X=[Gpu1MemoryAllocValueString:X] Y=[Gpu1MemoryAllocValueString:Y] W=[Gpu1MemoryAllocValueString:W]
Command9=[!WriteKeyValue Variables HWiNFO-GPU1-FanSpeed "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU1-FanSpeed# X=[Gpu1FanSpeedValueString:X] Y=[Gpu1FanSpeedValueString:Y] W=[Gpu1FanSpeedValueString:W]
Command10=[!WriteKeyValue Variables HWiNFO-GPU1-FanUsage "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU1-FanUsage# X=[Gpu1FanUsageValueString:X] Y=[Gpu1FanUsageValueString:Y] W=[Gpu1FanUsageValueString:W]
Command11=[!WriteKeyValue Variables HWiNFO-GPU1-VideoClock "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU1-VideoClock# X=[Gpu1VideoClockValueString:X] Y=[Gpu1VideoClockValueString:Y] W=[Gpu1VideoClockValueString:W]
Command12=[!WriteKeyValue Variables HWiNFO-GPU1-MemController "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU1-MemController# X=[Gpu1MemoryControllerValueString:X] Y=[Gpu1MemoryControllerValueString:Y] W=[Gpu1MemoryControllerValueString:W]
Command13=[!WriteKeyValue Variables HWiNFO-GPU1-CoreVoltage "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-GPU1-CoreVoltage# X=[Gpu1CoreVoltageValueString:X] Y=[Gpu1CoreVoltageValueString:Y] W=[Gpu1CoreVoltageValueString:W]

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
Command1=[!WriteKeyValue Variables HWiNFO-MOBO-GPUFan "$UserInput$" "#hwinfoFilePath#"][!Refresh] DefaultValue=#HWiNFO-MOBO-GPUFan# X=[MoboGpuFanValueString:X] Y=[MoboGpuFanValueString:Y] W=[MoboGpuFanValueString:W]

; ----- Test Measures -----

[MeasureHwinfoTestGpu0SensorId]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
HWiNFOLogHandler=2

[MeasureHwinfoTestGpu0SensorInstance]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=0x0
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=(MeasureHwinfoTestGpu0SensorId = -9102) || (MeasureHwinfoTestGpu0SensorInstance = -9102)
IfTrueAction=[!SetOptionGroup Gpu0Values MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorSensorNotFound"][!UpdateMeterGroup Gpu0Values][!Redraw]

[MeasureHwinfoTestGpu0Clock]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Clock#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwinfoTestGpu0Clock = -9201
IfTrueAction=[!SetOption Gpu0ClockValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter Gpu0ClockValueString][!Redraw]

[MeasureHwinfoTestGpu0Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Temp#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwinfoTestGpu0Temp = -9201
IfTrueAction=[!SetOption Gpu0TempValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter Gpu0TempValueString][!Redraw]

[MeasureHwinfoTestGpu0CoreLoad]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-CoreLoad#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwinfoTestGpu0CoreLoad = -9201
IfTrueAction=[!SetOption Gpu0CoreLoadValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter Gpu0CoreLoadValueString][!Redraw]

[MeasureHwinfoTestGpu0MemoryClock]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-MemoryClock#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwinfoTestGpu0MemoryClock = -9201
IfTrueAction=[!SetOption Gpu0MemoryClockValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter Gpu0MemoryClockValueString][!Redraw]

[MeasureHwinfoTestGpu0MemoryUsage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-MemoryUsage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwinfoTestGpu0MemoryUsage = -9201
IfTrueAction=[!SetOption Gpu0MemoryUsageValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter Gpu0MemoryUsageValueString][!Redraw]

[MeasureHwinfoTestGpu0MemoryAlloc]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-MemoryAlloc#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwinfoTestGpu0MemoryAlloc = -9201
IfTrueAction=[!SetOption Gpu0MemoryAllocValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter Gpu0MemoryAllocValueString][!Redraw]

[MeasureHwinfoTestGpu0FanSpeed]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-FanSpeed#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwinfoTestGpu0FanSpeed = -9201
IfTrueAction=[!SetOption Gpu0FanSpeedValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter Gpu0FanSpeedValueString][!Redraw]

[MeasureHwinfoTestGpu0FanUsage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-FanUsage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwinfoTestGpu0FanUsage = -9201
IfTrueAction=[!SetOption Gpu0FanUsageValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter Gpu0FanUsageValueString][!Redraw]

[MeasureHwinfoTestGpu0VideoClock]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-VideoClock#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwinfoTestGpu0VideoClock = -9201
IfTrueAction=[!SetOption Gpu0VideoClockValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter Gpu0VideoClockValueString][!Redraw]

[MeasureHwinfoTestGpu0MemoryController]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-MemController#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwinfoTestGpu0MemoryController = -9201
IfTrueAction=[!SetOption Gpu0MemoryControllerValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter Gpu0MemoryControllerValueString][!Redraw]

[MeasureHwinfoTestGpu0CoreVoltage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-CoreVoltage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwinfoTestGpu0CoreVoltage = -9201
IfTrueAction=[!SetOption Gpu0CoreVoltageValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter Gpu0CoreVoltageValueString][!Redraw]

[MeasureHwinfoTestMoboGpuFan]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-CoreVoltage#
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=MeasureHwinfoTestMoboGpuFan = -9201
IfTrueAction=[!SetOption MoboGpuFanValueString MeterStyle "StyleString | StyleStringHwinfoValue | StyleHwinfoError | StyleHwinfoErrorEntryNotFound"][!UpdateMeter MoboGpuFanValueString][!Redraw]

; ========= Meters =========

; ----- GPU 0 -----

[Gpu0HeaderString]
Meter=String
MeterStyle=StyleString | StyleStringConfigSectionHeader
X=(#hwinfoColumnX# + 20)
Text="GPU 0"

[Gpu1HeaderString]
Meter=String
MeterStyle=StyleString | StyleStringConfigSectionHeader
X=(#hwinfoColumnX# + 108)
Y=r
Text="GPU 1"

[Gpu0SensorIdLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Y=R
Text="Sensor ID"

[Gpu0SensorIdValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-GPU0-SensorId#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu0 "Executebatch 1"]
Group=Gpu0Values

[Gpu0SensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Sensor Instance"

[Gpu0SensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-GPU0-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu0 "Executebatch 2"]
Group=Gpu0Values

[Gpu0ClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Base Clock"

[Gpu0ClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-GPU0-Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu0 "Executebatch 3"]
Group=Gpu0Values

[Gpu0TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Temperature"

[Gpu0TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-GPU0-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu0 "Executebatch 4"]
Group=Gpu0Values

[Gpu0CoreLoadLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Core Load"

[Gpu0CoreLoadValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-GPU0-CoreLoad#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu0 "Executebatch 5"]
Group=Gpu0Values

[Gpu0MemoryClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Memory Clock"

[Gpu0MemoryClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-GPU0-MemoryClock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu0 "Executebatch 6"]
Group=Gpu0Values

[Gpu0MemoryUsageLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Memory Usage"

[Gpu0MemoryUsageValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-GPU0-MemoryUsage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu0 "Executebatch 7"]
Group=Gpu0Values

[Gpu0MemoryAllocLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Memory Allocated"

[Gpu0MemoryAllocValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-GPU0-MemoryAlloc#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu0 "Executebatch 8"]
Group=Gpu0Values

[Gpu0FanSpeedLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Fan Speed (RPM)"

[Gpu0FanSpeedValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-GPU0-FanSpeed#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu0 "Executebatch 9"]
Group=Gpu0Values

[Gpu0FanUsageLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Fan Usage (%)"

[Gpu0FanUsageValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-GPU0-FanUsage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu0 "Executebatch 10"]
Group=Gpu0Values

[Gpu0VideoClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Video Clock"

[Gpu0VideoClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-GPU0-VideoClock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu0 "Executebatch 11"]
Group=Gpu0Values

[Gpu0MemoryControllerLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Memory Controller"

[Gpu0MemoryControllerValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-GPU0-MemController#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu0 "Executebatch 12"]
Group=Gpu0Values

[Gpu0CoreVoltageLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Core Voltage"

[Gpu0CoreVoltageValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-GPU0-CoreVoltage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu0 "Executebatch 13"]
Group=Gpu0Values

[Gpu1SensorIdValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue | StyleStringHwinfoValueColumn2
X=(#hwinfoColumnX# + 85)
Y=[Gpu0SensorIdValueString:Y]
Text="#HWiNFO-GPU1-SensorId#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu1 "Executebatch 1"]
Group=Gpu1Values
DynamicVariables=1

[Gpu1SensorInstanceValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue | StyleStringHwinfoValueColumn2
Text="#HWiNFO-GPU1-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu1 "Executebatch 2"]
Group=Gpu1Values

[Gpu1ClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue | StyleStringHwinfoValueColumn2
Text="#HWiNFO-GPU1-Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu1 "Executebatch 3"]
Group=Gpu1Values

[Gpu1TempValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue | StyleStringHwinfoValueColumn2
Text="#HWiNFO-GPU1-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu1 "Executebatch 4"]
Group=Gpu1Values

[Gpu1CoreLoadValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue | StyleStringHwinfoValueColumn2
Text="#HWiNFO-GPU1-CoreLoad#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu1 "Executebatch 5"]
Group=Gpu1Values

[Gpu1MemoryClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue | StyleStringHwinfoValueColumn2
Text="#HWiNFO-GPU1-MemoryClock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu1 "Executebatch 6"]
Group=Gpu1Values

[Gpu1MemoryUsageValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue | StyleStringHwinfoValueColumn2
Text="#HWiNFO-GPU1-MemoryUsage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu1 "Executebatch 7"]
Group=Gpu1Values

[Gpu1MemoryAllocValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue | StyleStringHwinfoValueColumn2
Text="#HWiNFO-GPU1-MemoryAlloc#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu1 "Executebatch 8"]
Group=Gpu1Values

[Gpu1FanSpeedValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue | StyleStringHwinfoValueColumn2
Text="#HWiNFO-GPU1-FanSpeed#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu1 "Executebatch 9"]
Group=Gpu1Values

[Gpu1FanUsageValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue | StyleStringHwinfoValueColumn2
Text="#HWiNFO-GPU1-FanUsage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu1 "Executebatch 10"]
Group=Gpu1Values

[Gpu1VideoClockValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue | StyleStringHwinfoValueColumn2
Text="#HWiNFO-GPU1-VideoClock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu1 "Executebatch 11"]
Group=Gpu1Values

[Gpu1MemoryControllerValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue | StyleStringHwinfoValueColumn2
Text="#HWiNFO-GPU1-MemController#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu1 "Executebatch 12"]
Group=Gpu1Values

[Gpu1CoreVoltageValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue | StyleStringHwinfoValueColumn2
Text="#HWiNFO-GPU1-CoreVoltage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputGpu1 "Executebatch 13"]
Group=Gpu1Values

[Gpu0SeparatorBar]
Meter=Image
MeterStyle=StyleSectionSeparator
Y=5R

; ----- MOBO -----

[MoboHeaderString]
Meter=String
MeterStyle=StyleString | StyleStringConfigSectionHeader
Text="Motherboard"

[MoboGpuFanLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Fan Speed (RPM)"

[MoboGpuFanValueString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-MOBO-GpuFan#"
LeftMouseUpAction=[!CommandMeasure MeasureInputMobo "Executebatch 1"]
Group=Cpu0Values

[MoboGpuFanString]
Meter=String
MeterStyle=StyleString
FontColor=#colorInfo#
ClipString=2
Y=3R
W=(#contentWidth# - 3)
Text="In the case that your GPU Fan speed is under the Motherboard group, fill in its Entry ID here and enable the toggle in GPU Meter's settings. This value uses the motherboard Sensor ID and Instance set on the CPU Meter page."
