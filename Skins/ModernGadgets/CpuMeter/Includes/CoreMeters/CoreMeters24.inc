[IncludeSection]
@includeCoreMeters8=CoreMeters8.inc
@includeCoreMeters16=CoreMeters16.inc

; Core 17
[MeterCore17Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 17) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 17:
Group=CpuCore17
Hidden=(#cpuCores# < 17)

[MeterCore17Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore9
MeasureName2=MeasureCpuTempCoreTempCore9
MeasureName3=MeasureCpuTempSpeedFanCore9
Text=%1#deg##tempUnits#
Group=CpuCore17 | CoreTemps
Hidden=(#cpuCores# < 17) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore17Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore9
Group=CpuCore17 | CoreVoltages
Hidden=(#cpuCores# < 17) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore17Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore17
Text=%1%
Group=CpuCore17
Hidden=(#cpuCores# < 17)

[MeterCore17Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore17
BarColor=#colorCore17#
Group=CpuCore17
Hidden=(#cpuCores# < 17)

; Core 18
[MeterCore18Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 18) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 18:
Group=CpuCore18
Hidden=(#cpuCores# < 18)

[MeterCore18Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore9
MeasureName2=MeasureCpuTempCoreTempCore9
MeasureName3=MeasureCpuTempSpeedFanCore9
Text=%1#deg##tempUnits#
Group=CpuCore18 | CoreTemps
Hidden=(#cpuCores# < 18) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore18Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore9
Group=CpuCore18 | CoreVoltages
Hidden=(#cpuCores# < 18) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore18Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore18
Text=%1%
Group=CpuCore18
Hidden=(#cpuCores# < 18)

[MeterCore18Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore18
BarColor=#colorCore18#
Group=CpuCore18
Hidden=(#cpuCores# < 18)

; Core 19
[MeterCore19Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 19) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 19:
Group=CpuCore19
Hidden=(#cpuCores# < 19)

[MeterCore19Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore10
MeasureName2=MeasureCpuTempCoreTempCore10
MeasureName3=MeasureCpuTempSpeedFanCore10
Text=%1#deg##tempUnits#
Group=CpuCore19 | CoreTemps
Hidden=(#cpuCores# < 19) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore19Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore10
Group=CpuCore19 | CoreVoltages
Hidden=(#cpuCores# < 19) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore19Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore19
Text=%1%
Group=CpuCore19
Hidden=(#cpuCores# < 19)

[MeterCore19Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore19
BarColor=#colorCore19#
Group=CpuCore19
Hidden=(#cpuCores# < 19)

; Core 20
[MeterCore20Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 20) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 20:
Group=CpuCore20
Hidden=(#cpuCores# < 20)

[MeterCore20Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore10
MeasureName2=MeasureCpuTempCoreTempCore10
MeasureName3=MeasureCpuTempSpeedFanCore10
Text=%1#deg##tempUnits#
Group=CpuCore20 | CoreTemps
Hidden=(#cpuCores# < 20) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore20Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore10
Group=CpuCore20 | CoreVoltages
Hidden=(#cpuCores# < 20) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore20Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore20
Text=%1%
Group=CpuCore20
Hidden=(#cpuCores# < 20)

[MeterCore20Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore20
BarColor=#colorCore20#
Group=CpuCore20
Hidden=(#cpuCores# < 20)

; Core 21
[MeterCore21Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 21) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 21:
Group=CpuCore21
Hidden=(#cpuCores# < 21)

[MeterCore21Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore11
MeasureName2=MeasureCpuTempCoreTempCore11
MeasureName3=MeasureCpuTempSpeedFanCore11
Text=%1#deg##tempUnits#
Group=CpuCore21 | CoreTemps
Hidden=(#cpuCores# < 21) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore21Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore11
Group=CpuCore21 | CoreVoltages
Hidden=(#cpuCores# < 21) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore21Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore21
Text=%1%
Group=CpuCore21
Hidden=(#cpuCores# < 21)

[MeterCore21Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore21
BarColor=#colorCore21#
Group=CpuCore21
Hidden=(#cpuCores# < 21)

; Core 22
[MeterCore22Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 22) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 22:
Group=CpuCore22
Hidden=(#cpuCores# < 22)

[MeterCore22Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore11
MeasureName2=MeasureCpuTempCoreTempCore11
MeasureName3=MeasureCpuTempSpeedFanCore11
Text=%1#deg##tempUnits#
Group=CpuCore22 | CoreTemps
Hidden=(#cpuCores# < 22) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore22Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore11
Group=CpuCore22 | CoreVoltages
Hidden=(#cpuCores# < 22) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore22Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore22
Text=%1%
Group=CpuCore22
Hidden=(#cpuCores# < 22)

[MeterCore22Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore22
BarColor=#colorCore22#
Group=CpuCore22
Hidden=(#cpuCores# < 22)

; Core 23
[MeterCore23Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 23) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 23:
Group=CpuCore23
Hidden=(#cpuCores# < 23)

[MeterCore23Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore12
MeasureName2=MeasureCpuTempCoreTempCore12
MeasureName3=MeasureCpuTempSpeedFanCore12
Text=%1#deg##tempUnits#
Group=CpuCore23 | CoreTemps
Hidden=(#cpuCores# < 23) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore23Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore12
Group=CpuCore23 | CoreVoltages
Hidden=(#cpuCores# < 23) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore23Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore23
Text=%1%
Group=CpuCore23
Hidden=(#cpuCores# < 23)

[MeterCore23Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore23
BarColor=#colorCore23#
Group=CpuCore23
Hidden=(#cpuCores# < 23)

; Core 24
[MeterCore24Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 24) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 24:
Group=CpuCore24
Hidden=(#cpuCores# < 24)

[MeterCore24Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore12
MeasureName2=MeasureCpuTempCoreTempCore12
MeasureName3=MeasureCpuTempSpeedFanCore12
Text=%1#deg##tempUnits#
Group=CpuCore24 | CoreTemps
Hidden=(#cpuCores# < 24) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore24Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore12
Group=CpuCore24 | CoreVoltages
Hidden=(#cpuCores# < 24) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore24Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore24
Text=%1%
Group=CpuCore24
Hidden=(#cpuCores# < 24)

[MeterCore24Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore24
BarColor=#colorCore24#
Group=CpuCore24
Hidden=(#cpuCores# < 24)