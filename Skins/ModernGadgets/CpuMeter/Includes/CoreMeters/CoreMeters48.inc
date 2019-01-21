[IncludeCoreMeters32]
@includeCoreMeters32=CoreMeters32.inc

; Core 33
[MeterCore33Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 33) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 33:
Group=CpuCore33
Hidden=(#cpuCores# < 33)

[MeterCore33Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore17
MeasureName2=MeasureCpuTempCoreTempCore17
MeasureName3=MeasureCpuTempSpeedFanCore17
Text=%1#deg##tempUnits#
Group=CpuCore33 | CoreTemps
Hidden=(#cpuCores# < 33) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore33Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore17
Group=CpuCore33 | CoreVoltages
Hidden=(#cpuCores# < 33) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore33Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore33
Text=%1%
Group=CpuCore33
Hidden=(#cpuCores# < 33)

[MeterCore33Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore33
BarColor=#colorCore33#
Group=CpuCore33
Hidden=(#cpuCores# < 33)

; Core 34
[MeterCore34Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 34) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 34:
Group=CpuCore34
Hidden=(#cpuCores# < 34)

[MeterCore34Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore17
MeasureName2=MeasureCpuTempCoreTempCore17
MeasureName3=MeasureCpuTempSpeedFanCore17
Text=%1#deg##tempUnits#
Group=CpuCore34 | CoreTemps
Hidden=(#cpuCores# < 34) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore34Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore17
Group=CpuCore34 | CoreVoltages
Hidden=(#cpuCores# < 34) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore34Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore34
Text=%1%
Group=CpuCore34
Hidden=(#cpuCores# < 34)

[MeterCore34Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore34
BarColor=#colorCore34#
Group=CpuCore34
Hidden=(#cpuCores# < 34)

; Core 35
[MeterCore35Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 35) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 35:
Group=CpuCore35
Hidden=(#cpuCores# < 35)

[MeterCore35Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore18
MeasureName2=MeasureCpuTempCoreTempCore18
MeasureName3=MeasureCpuTempSpeedFanCore18
Text=%1#deg##tempUnits#
Group=CpuCore35 | CoreTemps
Hidden=(#cpuCores# < 35) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore35Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore18
Group=CpuCore35 | CoreVoltages
Hidden=(#cpuCores# < 35) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore35Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore35
Text=%1%
Group=CpuCore35
Hidden=(#cpuCores# < 35)

[MeterCore35Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore35
BarColor=#colorCore35#
Group=CpuCore35
Hidden=(#cpuCores# < 35)

; Core 36
[MeterCore36Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 36) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 36:
Group=CpuCore36
Hidden=(#cpuCores# < 36)

[MeterCore36Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore18
MeasureName2=MeasureCpuTempCoreTempCore18
MeasureName3=MeasureCpuTempSpeedFanCore18
Text=%1#deg##tempUnits#
Group=CpuCore36 | CoreTemps
Hidden=(#cpuCores# < 36) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore36Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore18
Group=CpuCore36 | CoreVoltages
Hidden=(#cpuCores# < 36) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore36Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore36
Text=%1%
Group=CpuCore36
Hidden=(#cpuCores# < 36)

[MeterCore36Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore36
BarColor=#colorCore36#
Group=CpuCore36
Hidden=(#cpuCores# < 36)

; Core 37
[MeterCore37Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 37) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 37:
Group=CpuCore37
Hidden=(#cpuCores# < 37)

[MeterCore37Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore19
MeasureName2=MeasureCpuTempCoreTempCore19
MeasureName3=MeasureCpuTempSpeedFanCore19
Text=%1#deg##tempUnits#
Group=CpuCore37 | CoreTemps
Hidden=(#cpuCores# < 37) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore37Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore19
Group=CpuCore37 | CoreVoltages
Hidden=(#cpuCores# < 37) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore37Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore37
Text=%1%
Group=CpuCore37
Hidden=(#cpuCores# < 37)

[MeterCore37Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore37
BarColor=#colorCore37#
Group=CpuCore37
Hidden=(#cpuCores# < 37)

; Core 38
[MeterCore38Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 38) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 38:
Group=CpuCore38
Hidden=(#cpuCores# < 38)

[MeterCore38Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore19
MeasureName2=MeasureCpuTempCoreTempCore19
MeasureName3=MeasureCpuTempSpeedFanCore19
Text=%1#deg##tempUnits#
Group=CpuCore38 | CoreTemps
Hidden=(#cpuCores# < 38) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore38Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore19
Group=CpuCore38 | CoreVoltages
Hidden=(#cpuCores# < 38) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore38Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore38
Text=%1%
Group=CpuCore38
Hidden=(#cpuCores# < 38)

[MeterCore38Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore38
BarColor=#colorCore38#
Group=CpuCore38
Hidden=(#cpuCores# < 38)

; Core 39
[MeterCore39Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 39) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 39:
Group=CpuCore39
Hidden=(#cpuCores# < 39)

[MeterCore39Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore20
MeasureName2=MeasureCpuTempCoreTempCore20
MeasureName3=MeasureCpuTempSpeedFanCore20
Text=%1#deg##tempUnits#
Group=CpuCore39 | CoreTemps
Hidden=(#cpuCores# < 39) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore39Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore20
Group=CpuCore39 | CoreVoltages
Hidden=(#cpuCores# < 39) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore39Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore39
Text=%1%
Group=CpuCore39
Hidden=(#cpuCores# < 39)

[MeterCore39Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore39
BarColor=#colorCore39#
Group=CpuCore39
Hidden=(#cpuCores# < 39)

; Core 40
[MeterCore40Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 40) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 40:
Group=CpuCore40
Hidden=(#cpuCores# < 40)

[MeterCore40Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore20
MeasureName2=MeasureCpuTempCoreTempCore20
MeasureName3=MeasureCpuTempSpeedFanCore20
Text=%1#deg##tempUnits#
Group=CpuCore40 | CoreTemps
Hidden=(#cpuCores# < 40) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore40Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore20
Group=CpuCore40 | CoreVoltages
Hidden=(#cpuCores# < 40) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore40Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore40
Text=%1%
Group=CpuCore40
Hidden=(#cpuCores# < 40)

[MeterCore40Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore40
BarColor=#colorCore40#
Group=CpuCore40
Hidden=(#cpuCores# < 40)

; Core 41
[MeterCore41Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 41) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 41:
Group=CpuCore41
Hidden=(#cpuCores# < 41)

[MeterCore41Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore21
MeasureName2=MeasureCpuTempCoreTempCore21
MeasureName3=MeasureCpuTempSpeedFanCore21
Text=%1#deg##tempUnits#
Group=CpuCore41 | CoreTemps
Hidden=(#cpuCores# < 41) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore41Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore21
Group=CpuCore41 | CoreVoltages
Hidden=(#cpuCores# < 41) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore41Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore41
Text=%1%
Group=CpuCore41
Hidden=(#cpuCores# < 41)

[MeterCore41Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore41
BarColor=#colorCore41#
Group=CpuCore41
Hidden=(#cpuCores# < 41)

; Core 42
[MeterCore42Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 42) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 42:
Group=CpuCore42
Hidden=(#cpuCores# < 42)

[MeterCore42Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore21
MeasureName2=MeasureCpuTempCoreTempCore21
MeasureName3=MeasureCpuTempSpeedFanCore21
Text=%1#deg##tempUnits#
Group=CpuCore42 | CoreTemps
Hidden=(#cpuCores# < 42) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore42Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore21
Group=CpuCore42 | CoreVoltages
Hidden=(#cpuCores# < 42) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore42Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore42
Text=%1%
Group=CpuCore42
Hidden=(#cpuCores# < 42)

[MeterCore42Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore42
BarColor=#colorCore42#
Group=CpuCore42
Hidden=(#cpuCores# < 42)

; Core 43
[MeterCore43Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 43) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 43:
Group=CpuCore43
Hidden=(#cpuCores# < 43)

[MeterCore43Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore22
MeasureName2=MeasureCpuTempCoreTempCore22
MeasureName3=MeasureCpuTempSpeedFanCore22
Text=%1#deg##tempUnits#
Group=CpuCore43 | CoreTemps
Hidden=(#cpuCores# < 43) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore43Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore22
Group=CpuCore43 | CoreVoltages
Hidden=(#cpuCores# < 43) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore43Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore43
Text=%1%
Group=CpuCore43
Hidden=(#cpuCores# < 43)

[MeterCore43Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore43
BarColor=#colorCore43#
Group=CpuCore43
Hidden=(#cpuCores# < 43)

; Core 44
[MeterCore44Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 44) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 44:
Group=CpuCore44
Hidden=(#cpuCores# < 44)

[MeterCore44Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore22
MeasureName2=MeasureCpuTempCoreTempCore22
MeasureName3=MeasureCpuTempSpeedFanCore22
Text=%1#deg##tempUnits#
Group=CpuCore44 | CoreTemps
Hidden=(#cpuCores# < 44) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore44Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore22
Group=CpuCore44 | CoreVoltages
Hidden=(#cpuCores# < 44) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore44Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore44
Text=%1%
Group=CpuCore44
Hidden=(#cpuCores# < 44)

[MeterCore44Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore44
BarColor=#colorCore44#
Group=CpuCore44
Hidden=(#cpuCores# < 44)

; Core 45
[MeterCore45Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 45) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 45:
Group=CpuCore45
Hidden=(#cpuCores# < 45)

[MeterCore45Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore23
MeasureName2=MeasureCpuTempCoreTempCore23
MeasureName3=MeasureCpuTempSpeedFanCore23
Text=%1#deg##tempUnits#
Group=CpuCore45 | CoreTemps
Hidden=(#cpuCores# < 45) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore45Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore23
Group=CpuCore45 | CoreVoltages
Hidden=(#cpuCores# < 45) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore45Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore45
Text=%1%
Group=CpuCore45
Hidden=(#cpuCores# < 45)

[MeterCore45Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore45
BarColor=#colorCore45#
Group=CpuCore45
Hidden=(#cpuCores# < 45)

; Core 46
[MeterCore46Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 46) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 46:
Group=CpuCore46
Hidden=(#cpuCores# < 46)

[MeterCore46Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore23
MeasureName2=MeasureCpuTempCoreTempCore23
MeasureName3=MeasureCpuTempSpeedFanCore23
Text=%1#deg##tempUnits#
Group=CpuCore46 | CoreTemps
Hidden=(#cpuCores# < 46) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore46Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore23
Group=CpuCore46 | CoreVoltages
Hidden=(#cpuCores# < 46) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore46Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore46
Text=%1%
Group=CpuCore46
Hidden=(#cpuCores# < 46)

[MeterCore46Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore46
BarColor=#colorCore46#
Group=CpuCore46
Hidden=(#cpuCores# < 46)

; Core 47
[MeterCore47Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 47) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 47:
Group=CpuCore47
Hidden=(#cpuCores# < 47)

[MeterCore47Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore24
MeasureName2=MeasureCpuTempCoreTempCore24
MeasureName3=MeasureCpuTempSpeedFanCore24
Text=%1#deg##tempUnits#
Group=CpuCore47 | CoreTemps
Hidden=(#cpuCores# < 47) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore47Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore24
Group=CpuCore47 | CoreVoltages
Hidden=(#cpuCores# < 47) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore47Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore47
Text=%1%
Group=CpuCore47
Hidden=(#cpuCores# < 47)

[MeterCore47Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore47
BarColor=#colorCore47#
Group=CpuCore47
Hidden=(#cpuCores# < 47)

; Core 48
[MeterCore48Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 48) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 48:
Group=CpuCore48
Hidden=(#cpuCores# < 48)

[MeterCore48Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore24
MeasureName2=MeasureCpuTempCoreTempCore24
MeasureName3=MeasureCpuTempSpeedFanCore24
Text=%1#deg##tempUnits#
Group=CpuCore48 | CoreTemps
Hidden=(#cpuCores# < 48) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore48Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore24
Group=CpuCore48 | CoreVoltages
Hidden=(#cpuCores# < 48) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore48Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore48
Text=%1%
Group=CpuCore48
Hidden=(#cpuCores# < 48)

[MeterCore48Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore48
BarColor=#colorCore48#
Group=CpuCore48
Hidden=(#cpuCores# < 48)