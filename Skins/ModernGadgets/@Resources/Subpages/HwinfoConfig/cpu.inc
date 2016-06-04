; HWINFO CPU SUBPAGE

[MeasureInputCpu0Clock]
Measure=Plugin
Plugin=InputText
SolidColor=#colorHwinfoValueInputBg#
FontColor=#fontColor#
FontSize=11
FontFace=#fontFace#
UpdateDivider=-1
FocusDismiss=1
Antialias=1
H=16
Command1=[!WriteKeyValue Variables HWiNFO-CPU0-SensorId "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-SensorId# X=[Cpu0ClockSensorIdString:X] Y=[Cpu0ClockSensorIdString:Y] W=[Cpu0ClockSensorIdString:W]
Command2=[!WriteKeyValue Variables HWiNFO-CPU0-SensorInstance "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-SensorInstance# X=[Cpu0ClockSensorInstanceString:X] Y=[Cpu0ClockSensorInstanceString:Y] W=[Cpu0ClockSensorInstanceString:W]
Command3=[!WriteKeyValue Variables HWiNFO-CPU0-Core0Clock "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core0Clock# X=[Cpu0Core0ClockString:X] Y=[Cpu0Core0ClockString:Y] W=[Cpu0Core0ClockString:W]
Command4=[!WriteKeyValue Variables HWiNFO-CPU0-Core1Clock "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core1Clock# X=[Cpu0Core1ClockString:X] Y=[Cpu0Core1ClockString:Y] W=[Cpu0Core1ClockString:W]
Command5=[!WriteKeyValue Variables HWiNFO-CPU0-Core2Clock "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core2Clock# X=[Cpu0Core2ClockString:X] Y=[Cpu0Core2ClockString:Y] W=[Cpu0Core2ClockString:W]
Command6=[!WriteKeyValue Variables HWiNFO-CPU0-Core3Clock "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core3Clock# X=[Cpu0Core3ClockString:X] Y=[Cpu0Core3ClockString:Y] W=[Cpu0Core3ClockString:W]
Command7=[!WriteKeyValue Variables HWiNFO-CPU0-Core4Clock "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core4Clock# X=[Cpu0Core4ClockString:X] Y=[Cpu0Core4ClockString:Y] W=[Cpu0Core4ClockString:W]
Command8=[!WriteKeyValue Variables HWiNFO-CPU0-Core5Clock "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core5Clock# X=[Cpu0Core5ClockString:X] Y=[Cpu0Core5ClockString:Y] W=[Cpu0Core5ClockString:W]
Command9=[!WriteKeyValue Variables HWiNFO-CPU0-Core6Clock "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core6Clock# X=[Cpu0Core6ClockString:X] Y=[Cpu0Core6ClockString:Y] W=[Cpu0Core6ClockString:W]
Command10=[!WriteKeyValue Variables HWiNFO-CPU0-Core7Clock "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core7Clock# X=[Cpu0Core7ClockString:X] Y=[Cpu0Core7ClockString:Y] W=[Cpu0Core7ClockString:W]

[MeasureInputCpu0Vid]
Measure=Plugin
Plugin=InputText
SolidColor=#colorHwinfoValueInputBg#
FontColor=#fontColor#
FontSize=11
FontFace=#fontFace#
UpdateDivider=-1
FocusDismiss=1
Antialias=1
H=16
Command1=[!WriteKeyValue Variables HWiNFO-CPU0-Core0Vid "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core0Vid# X=[Cpu0Core0VidString:X] Y=[Cpu0Core0VidString:Y] W=[Cpu0Core0VidString:W]
Command2=[!WriteKeyValue Variables HWiNFO-CPU0-Core1Vid "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core1Vid# X=[Cpu0Core1VidString:X] Y=[Cpu0Core1VidString:Y] W=[Cpu0Core1VidString:W]
Command3=[!WriteKeyValue Variables HWiNFO-CPU0-Core2Vid "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core2Vid# X=[Cpu0Core2VidString:X] Y=[Cpu0Core2VidString:Y] W=[Cpu0Core2VidString:W]
Command4=[!WriteKeyValue Variables HWiNFO-CPU0-Core3Vid "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core3Vid# X=[Cpu0Core3VidString:X] Y=[Cpu0Core3VidString:Y] W=[Cpu0Core3VidString:W]
Command5=[!WriteKeyValue Variables HWiNFO-CPU0-Core4Vid "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core4Vid# X=[Cpu0Core4VidString:X] Y=[Cpu0Core4VidString:Y] W=[Cpu0Core4VidString:W]
Command6=[!WriteKeyValue Variables HWiNFO-CPU0-Core5Vid "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core5Vid# X=[Cpu0Core5VidString:X] Y=[Cpu0Core5VidString:Y] W=[Cpu0Core5VidString:W]
Command7=[!WriteKeyValue Variables HWiNFO-CPU0-Core6Vid "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core6Vid# X=[Cpu0Core6VidString:X] Y=[Cpu0Core6VidString:Y] W=[Cpu0Core6VidString:W]
Command8=[!WriteKeyValue Variables HWiNFO-CPU0-Core7Vid "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core7Vid# X=[Cpu0Core7VidString:X] Y=[Cpu0Core7VidString:Y] W=[Cpu0Core7VidString:W]

[MeasureInputCpu0Tt]
Measure=Plugin
Plugin=InputText
SolidColor=#colorHwinfoValueInputBg#
FontColor=#fontColor#
FontSize=11
FontFace=#fontFace#
UpdateDivider=-1
FocusDismiss=1
Antialias=1
H=16
Command1=[!WriteKeyValue Variables HWiNFO-CPU0-Core0Tt "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core0Tt# X=[Cpu0Core0TtString:X] Y=[Cpu0Core0TtString:Y] W=[Cpu0Core0TtString:W]
Command2=[!WriteKeyValue Variables HWiNFO-CPU0-Core1Tt "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core1Tt# X=[Cpu0Core1TtString:X] Y=[Cpu0Core1TtString:Y] W=[Cpu0Core1TtString:W]
Command3=[!WriteKeyValue Variables HWiNFO-CPU0-Core2Tt "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core2Tt# X=[Cpu0Core2TtString:X] Y=[Cpu0Core2TtString:Y] W=[Cpu0Core2TtString:W]
Command4=[!WriteKeyValue Variables HWiNFO-CPU0-Core3Tt "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core3Tt# X=[Cpu0Core3TtString:X] Y=[Cpu0Core3TtString:Y] W=[Cpu0Core3TtString:W]
Command5=[!WriteKeyValue Variables HWiNFO-CPU0-Core4Tt "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core4Tt# X=[Cpu0Core4TtString:X] Y=[Cpu0Core4TtString:Y] W=[Cpu0Core4TtString:W]
Command6=[!WriteKeyValue Variables HWiNFO-CPU0-Core5Tt "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core5Tt# X=[Cpu0Core5TtString:X] Y=[Cpu0Core5TtString:Y] W=[Cpu0Core5TtString:W]
Command7=[!WriteKeyValue Variables HWiNFO-CPU0-Core6Tt "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core6Tt# X=[Cpu0Core6TtString:X] Y=[Cpu0Core6TtString:Y] W=[Cpu0Core6TtString:W]
Command8=[!WriteKeyValue Variables HWiNFO-CPU0-Core7Tt "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-Core7Tt# X=[Cpu0Core7TtString:X] Y=[Cpu0Core7TtString:Y] W=[Cpu0Core7TtString:W]

[MeasureInputCpu0Dts]
Measure=Plugin
Plugin=InputText
SolidColor=#colorHwinfoValueInputBg#
FontColor=#fontColor#
FontSize=11
FontFace=#fontFace#
UpdateDivider=-1
FocusDismiss=1
Antialias=1
H=16
Command1=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-SensorId "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-DTS-SensorId# X=[Cpu0DtsSensorIdString:X] Y=[Cpu0DtsSensorIdString:Y] W=[Cpu0DtsSensorIdString:W]
Command2=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-SensorInstance "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-DTS-SensorInstance# X=[Cpu0DtsSensorInstanceString:X] Y=[Cpu0DtsSensorInstanceString:Y] W=[Cpu0DtsSensorInstanceString:W]
Command3=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core0Temp "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-DTS-Core0Temp# X=[Cpu0DtsCore0TempString:X] Y=[Cpu0DtsCore0TempString:Y] W=[Cpu0DtsCore0TempString:W]
Command4=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core1Temp "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-DTS-Core1Temp# X=[Cpu0DtsCore1TempString:X] Y=[Cpu0DtsCore1TempString:Y] W=[Cpu0DtsCore1TempString:W]
Command5=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core2Temp "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-DTS-Core2Temp# X=[Cpu0DtsCore2TempString:X] Y=[Cpu0DtsCore2TempString:Y] W=[Cpu0DtsCore2TempString:W]
Command6=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core3Temp "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-DTS-Core3Temp# X=[Cpu0DtsCore3TempString:X] Y=[Cpu0DtsCore3TempString:Y] W=[Cpu0DtsCore3TempString:W]
Command7=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core4Temp "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-DTS-Core4Temp# X=[Cpu0DtsCore4TempString:X] Y=[Cpu0DtsCore4TempString:Y] W=[Cpu0DtsCore4TempString:W]
Command8=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core5Temp "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-DTS-Core5Temp# X=[Cpu0DtsCore5TempString:X] Y=[Cpu0DtsCore5TempString:Y] W=[Cpu0DtsCore5TempString:W]
Command9=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core6Temp "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-DTS-Core6Temp# X=[Cpu0DtsCore6TempString:X] Y=[Cpu0DtsCore6TempString:Y] W=[Cpu0DtsCore6TempString:W]
Command10=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core7Temp "$UserInput$" "#settingsFilePath#"][!Refresh] DefaultValue=#HWiNFO-CPU0-DTS-Core7Temp# X=[Cpu0DtsCore7TempString:X] Y=[Cpu0DtsCore7TempString:Y] W=[Cpu0DtsCore7TempString:W]

; ----- Navigation Bar -----

[NavBarCpuString]
Meter=String
MeterStyle=StyleString | StyleStringNavBar
X=10R
Y=1r
Text="CPU"

[NavBarCpuDividerString]
Meter=String
MeterStyle=StyleString | StyleStringNavBarDivider

[NavBarNetworkString]
Meter=String
MeterStyle=StyleString | StyleStringNavBar
FontColor=#fontColorAccent#
Text="Network"
LeftMouseUpAction=[!WriteKeyValue Variables page "network"][!Refresh]

[NavBarNetworkDividerString]
Meter=String
MeterStyle=StyleString | StyleStringNavBarDivider

[NavBarGpuString]
Meter=String
MeterStyle=StyleString | StyleStringNavBar
FontColor=#fontColorAccent#
Text="GPU"
LeftMouseUpAction=[!WriteKeyValue Variables page "network"][!Refresh]

[NavBarGpuDividerString]
Meter=String
MeterStyle=StyleString | StyleStringNavBarDivider

[NavBarDisksString]
Meter=String
MeterStyle=StyleString | StyleStringNavBar
FontColor=#fontColorAccent#
Text="Disks"
LeftMouseUpAction=[!WriteKeyValue Variables page "network"][!Refresh]

[TitleSeparatorImage]
Meter=Image
MeterStyle=StyleSectionSeparatorLine

; ----- Clock Speed, VID, Thermal Throttling -----
[Cpu0ClockSensorIdLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Y=10R
Text="Cpu Sensor ID"

[Cpu0ClockSensorIdString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-CPU0-SensorID#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Clock "Executebatch 1"]

[Cpu0ClockSensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Sensor Instance"

[Cpu0ClockSensorInstanceString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-CPU0-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Clock "Executebatch 2"]

[Cpu0ClockLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
StringAlign=Left
X=[Cpu0Core0ClockString:X]
Y=5R
Text="Clock Speed"
DynamicVariables=1

[Cpu0VidLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
StringAlign=Left
X=[Cpu0Core0VidString:X]
Y=r
Text="Voltage (VID)"
DynamicVariables=1

[Cpu0TtLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
StringAlign=Left
X=[Cpu0Core0TtString:X]
Y=r
Text="Th. Throttling"
DynamicVariables=1

[Cpu0Core0LabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
StringAlign=Left
X=#contentMargin#
Text="Core 0"

[Cpu0Core0ClockString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=5R
Text="#HWiNFO-CPU0-Core0Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Clock "Executebatch 3"]

[Cpu0Core0VidString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-CPU0-Core0Vid#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Vid "Executebatch 1"]

[Cpu0Core0TtString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-CPU0-Core0Tt#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Tt "Executebatch 1"]

[Cpu0Core1LabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
StringAlign=Left
X=#contentMargin#
Text="Core 1"

[Cpu0Core1ClockString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=5R
Text="#HWiNFO-CPU0-Core1Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Clock "Executebatch 4"]

[Cpu0Core1VidString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-CPU0-Core1Vid#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Vid "Executebatch 2"]

[Cpu0Core1TtString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-CPU0-Core1Tt#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Tt "Executebatch 2"]

[Cpu0Core2LabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
StringAlign=Left
X=#contentMargin#
Text="Core 2"

[Cpu0Core2ClockString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=5R
Text="#HWiNFO-CPU0-Core2Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Clock "Executebatch 5"]

[Cpu0Core2VidString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-CPU0-Core2Vid#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Vid "Executebatch 3"]

[Cpu0Core2TtString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-CPU0-Core2Tt#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Tt "Executebatch 3"]

[Cpu0Core3LabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
StringAlign=Left
X=#contentMargin#
Text="Core 3"

[Cpu0Core3ClockString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=5R
Text="#HWiNFO-CPU0-Core3Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Clock "Executebatch 6"]

[Cpu0Core3VidString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-CPU0-Core3Vid#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Vid "Executebatch 4"]

[Cpu0Core3TtString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-CPU0-Core3Tt#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Tt "Executebatch 4"]

[Cpu0Core4LabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
StringAlign=Left
X=#contentMargin#
Text="Core 4"

[Cpu0Core4ClockString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=5R
Text="#HWiNFO-CPU0-Core4Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Clock "Executebatch 7"]

[Cpu0Core4VidString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-CPU0-Core4Vid#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Vid "Executebatch 5"]

[Cpu0Core4TtString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-CPU0-Core4Tt#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Tt "Executebatch 5"]

[Cpu0Core5LabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
StringAlign=Left
X=#contentMargin#
Text="Core 5"

[Cpu0Core5ClockString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=5R
Text="#HWiNFO-CPU0-Core5Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Clock "Executebatch 8"]

[Cpu0Core5VidString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-CPU0-Core5Vid#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Vid "Executebatch 6"]

[Cpu0Core5TtString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-CPU0-Core5Tt#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Tt "Executebatch 6"]

[Cpu0Core6LabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
StringAlign=Left
X=#contentMargin#
Text="Core 6"

[Cpu0Core6ClockString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=5R
Text="#HWiNFO-CPU0-Core6Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Clock "Executebatch 9"]

[Cpu0Core6VidString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-CPU0-Core6Vid#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Vid "Executebatch 7"]

[Cpu0Core6TtString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-CPU0-Core6Tt#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Tt "Executebatch 7"]

[Cpu0Core7LabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
StringAlign=Left
X=#contentMargin#
Text="Core 7"

[Cpu0Core7ClockString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=5R
Text="#HWiNFO-CPU0-Core7Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Clock "Executebatch 10"]

[Cpu0Core7VidString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-CPU0-Core7Vid#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Vid "Executebatch 8"]

[Cpu0Core7TtString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=3R
Text="#HWiNFO-CPU0-Core7Tt#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Tt "Executebatch 8"]

[ClockVidTtSeparatorImage]
Meter=Image
MeterStyle=StyleSectionSeparatorLine

; ----- Temperatures -----

[Cpu0DtsSensorIdLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
X=150
Y=10R
Text="CPU DTS Sensor ID"

[Cpu0DtsSensorIdString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=5r
Text="#HWiNFO-CPU0-DTS-SensorID#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Dts "Executebatch 1"]

[Cpu0DtsSensorInstanceLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
X=150
Text="Sensor Instance"

[Cpu0DtsSensorInstanceString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
X=5r
Text="#HWiNFO-CPU0-DTS-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Dts "Executebatch 2"]

[Cpu0DtsCore0TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Core 0 Temp"

[Cpu0DtsCore0TempString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-CPU0-DTS-Core0Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Dts "Executebatch 3"]

[Cpu0DtsCore1TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Core 1 Temp"

[Cpu0DtsCore1TempString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-CPU0-DTS-Core1Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Dts "Executebatch 4"]

[Cpu0DtsCore2TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Core 2 Temp"

[Cpu0DtsCore2TempString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-CPU0-DTS-Core2Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Dts "Executebatch 5"]

[Cpu0DtsCore3TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Core 3 Temp"

[Cpu0DtsCore3TempString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-CPU0-DTS-Core3Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Dts "Executebatch 6"]

[Cpu0DtsCore4TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Core 4 Temp"

[Cpu0DtsCore4TempString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-CPU0-DTS-Core4Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Dts "Executebatch 7"]

[Cpu0DtsCore5TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Core 5 Temp"

[Cpu0DtsCore5TempString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-CPU0-DTS-Core5Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Dts "Executebatch 8"]

[Cpu0DtsCore6TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Core 6 Temp"

[Cpu0DtsCore6TempString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-CPU0-DTS-Core6Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Dts "Executebatch 9"]

[Cpu0DtsCore7TempLabelString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoLabel
Text="Core 7 Temp"

[Cpu0DtsCore7TempString]
Meter=String
MeterStyle=StyleString | StyleStringHwinfoValue
Text="#HWiNFO-CPU0-DTS-Core7Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputCpu0Dts "Executebatch 10"]
