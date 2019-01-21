[IncludeCoreMeters8]
@includeCoreMeters8=CoreMeters8.inc

; Core 9
[MeterCore9Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 9) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 9:
Group=CpuCore9
Hidden=(#cpuCores# < 9)

[MeterCore9Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore5
MeasureName2=MeasureCpuTempCoreTempCore5
MeasureName3=MeasureCpuTempSpeedFanCore5
Text=%1#deg##tempUnits#
Group=CpuCore9 | CoreTemps
Hidden=(#cpuCores# < 9) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore9Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore5
Group=CpuCore9 | CoreVoltages
Hidden=(#cpuCores# < 9) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore9Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore9
Text=%1%
Group=CpuCore9
Hidden=(#cpuCores# < 9)

[MeterCore9Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore9
BarColor=#colorCore9#
Group=CpuCore9
Hidden=(#cpuCores# < 9)

; Core 10
[MeterCore10Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 10) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 10:
Group=CpuCore10
Hidden=(#cpuCores# < 10)

[MeterCore10Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore5
MeasureName2=MeasureCpuTempCoreTempCore5
MeasureName3=MeasureCpuTempSpeedFanCore5
Text=%1#deg##tempUnits#
Group=CpuCore10 | CoreTemps
Hidden=(#cpuCores# < 10) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore10Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore5
Group=CpuCore10 | CoreVoltages
Hidden=(#cpuCores# < 10) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore10Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore10
Text=%1%
Group=CpuCore10
Hidden=(#cpuCores# < 10)

[MeterCore10Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore10
BarColor=#colorCore10#
Group=CpuCore10
Hidden=(#cpuCores# < 10)

; Core 11
[MeterCore11Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 11) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 11:
Group=CpuCore11
Hidden=(#cpuCores# < 11)

[MeterCore11Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore6
MeasureName2=MeasureCpuTempCoreTempCore6
MeasureName3=MeasureCpuTempSpeedFanCore6
Text=%1#deg##tempUnits#
Group=CpuCore11 | CoreTemps
Hidden=(#cpuCores# < 11) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore11Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore6
Group=CpuCore11 | CoreVoltages
Hidden=(#cpuCores# < 11) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore11Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore11
Text=%1%
Group=CpuCore11
Hidden=(#cpuCores# < 11)

[MeterCore11Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore11
BarColor=#colorCore11#
Group=CpuCore11
Hidden=(#cpuCores# < 11)

; Core 12
[MeterCore12Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 12) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 12:
Group=CpuCore12
Hidden=(#cpuCores# < 12)

[MeterCore12Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore6
MeasureName2=MeasureCpuTempCoreTempCore6
MeasureName3=MeasureCpuTempSpeedFanCore6
Text=%1#deg##tempUnits#
Group=CpuCore12 | CoreTemps
Hidden=(#cpuCores# < 12) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore12Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore6
Group=CpuCore12 | CoreVoltages
Hidden=(#cpuCores# < 12) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore12Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore12
Text=%1%
Group=CpuCore12
Hidden=(#cpuCores# < 12)

[MeterCore12Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore12
BarColor=#colorCore12#
Group=CpuCore12
Hidden=(#cpuCores# < 12)

; Core 13
[MeterCore13Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 13) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 13:
Group=CpuCore13
Hidden=(#cpuCores# < 13)

[MeterCore13Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore7
MeasureName2=MeasureCpuTempCoreTempCore7
MeasureName3=MeasureCpuTempSpeedFanCore7
Text=%1#deg##tempUnits#
Group=CpuCore13 | CoreTemps
Hidden=(#cpuCores# < 13) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore13Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore7
Group=CpuCore13 | CoreVoltages
Hidden=(#cpuCores# < 13) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore13Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore13
Text=%1%
Group=CpuCore13
Hidden=(#cpuCores# < 13)

[MeterCore13Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore13
BarColor=#colorCore13#
Group=CpuCore13
Hidden=(#cpuCores# < 13)

; Core 14
[MeterCore14Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 14) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 14:
Group=CpuCore14
Hidden=(#cpuCores# < 14)

[MeterCore14Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore7
MeasureName2=MeasureCpuTempCoreTempCore7
MeasureName3=MeasureCpuTempSpeedFanCore7
Text=%1#deg##tempUnits#
Group=CpuCore14 | CoreTemps
Hidden=(#cpuCores# < 14) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore14Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore7
Group=CpuCore14 | CoreVoltages
Hidden=(#cpuCores# < 14) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore14Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore14
Text=%1%
Group=CpuCore14
Hidden=(#cpuCores# < 14)

[MeterCore14Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore14
BarColor=#colorCore14#
Group=CpuCore14
Hidden=(#cpuCores# < 14)

; Core 15
[MeterCore15Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 15) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 15:
Group=CpuCore15
Hidden=(#cpuCores# < 15)

[MeterCore15Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore8
MeasureName2=MeasureCpuTempCoreTempCore8
MeasureName3=MeasureCpuTempSpeedFanCore8
Text=%1#deg##tempUnits#
Group=CpuCore15 | CoreTemps
Hidden=(#cpuCores# < 15) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore15Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore8
Group=CpuCore15 | CoreVoltages
Hidden=(#cpuCores# < 15) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore15Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore15
Text=%1%
Group=CpuCore15
Hidden=(#cpuCores# < 15)

[MeterCore15Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore15
BarColor=#colorCore15#
Group=CpuCore15
Hidden=(#cpuCores# < 15)

; Core 16
[MeterCore16Label]
Meter=String
MeterStyle=StyleString
Y=((#cpuCores# >= 16) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 16:
Group=CpuCore16
Hidden=(#cpuCores# < 16)

[MeterCore16Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore8
MeasureName2=MeasureCpuTempCoreTempCore8
MeasureName3=MeasureCpuTempSpeedFanCore8
Text=%1#deg##tempUnits#
Group=CpuCore16 | CoreTemps
Hidden=(#cpuCores# < 16) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore16Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore8
Group=CpuCore16 | CoreVoltages
Hidden=(#cpuCores# < 16) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore16Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore16
Text=%1%
Group=CpuCore16
Hidden=(#cpuCores# < 16)

[MeterCore16Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore16
BarColor=#colorCore16#
Group=CpuCore16
Hidden=(#cpuCores# < 16)