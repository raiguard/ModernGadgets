[IncludeCoreMeasures8]
@includeCoreMeasures8=CoreMeasures8.inc

; Core Usages
[MeasureCpuUsageCore9]
Measure=CPU
Processor=9
Disabled=(#cpuCores# < 9)

[MeasureCpuUsageCore10]
Measure=CPU
Processor=10
Disabled=(#cpuCores# < 10)

[MeasureCpuUsageCore11]
Measure=CPU
Processor=11
Disabled=(#cpuCores# < 11)

[MeasureCpuUsageCore12]
Measure=CPU
Processor=12
Disabled=(#cpuCores# < 12)

[MeasureCpuUsageCore13]
Measure=CPU
Processor=13
Disabled=(#cpuCores# < 13)

[MeasureCpuUsageCore14]
Measure=CPU
Processor=14
Disabled=(#cpuCores# < 14)

[MeasureCpuUsageCore15]
Measure=CPU
Processor=15
Disabled=(#cpuCores# < 15)

[MeasureCpuUsageCore16]
Measure=CPU
Processor=16
Disabled=(#cpuCores# < 16)

; Core Temperatures
; __ HWiNFO
[MeasureCpuTempHwinfoCore9]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core8Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore9Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore9Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 9)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore10]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core9Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore10Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore10Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 10)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore11]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core10Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore11Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore11Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 11)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore12]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core11Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore12Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore12Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 12)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore13]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core12Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore13Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore13Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 13)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore14]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core13Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore14Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore14Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 14)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore15]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core14Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore15Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore15Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 15)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore16]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core15Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore16Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore16Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 16)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

; __ CoreTemp
[MeasureCpuTempCoreTempCore9]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=8
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore9Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore9Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 9)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore10]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=9
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore10Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore10Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 10)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore11]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=10
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore11Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore11Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 11)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore12]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=11
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore12Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore12Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 12)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore13]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=12
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore13Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore13Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 13)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore14]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=13
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore14Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore14Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 14)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore15]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=14
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore15Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore15Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 15)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore16]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=15
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore16Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore16Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 16)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

; __ SpeedFan
[MeasureCpuTempSpeedFanCore9]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 8)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore9Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore9Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 9)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore10]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 9)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore10Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore10Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 10)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore11]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 10)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore11Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore11Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 11)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore12]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 11)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore12Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore12Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 12)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore13]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 12)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore13Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore13Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 13)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore14]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 13)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore14Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore14Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 14)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore15]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 14)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore15Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore15Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 15)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore16]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 15)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore16Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore16Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 16)) || (#extProgram# <> 4)

; Core Clocks
[MeasureCpuClockCore9]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core8Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 9)) || (#extProgram# <> 1)

[MeasureCpuClockCore10]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core9Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 10)) || (#extProgram# <> 1)

[MeasureCpuClockCore11]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core10Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 11)) || (#extProgram# <> 1)

[MeasureCpuClockCore12]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core11Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 12)) || (#extProgram# <> 1)

[MeasureCpuClockCore13]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core12Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 13)) || (#extProgram# <> 1)

[MeasureCpuClockCore14]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core13Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 14)) || (#extProgram# <> 1)

[MeasureCpuClockCore15]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core14Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 15)) || (#extProgram# <> 1)

[MeasureCpuClockCore16]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core15Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 16)) || (#extProgram# <> 1)

; Core Voltages
[MeasureCpuVoltageCore9]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core8Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore9Voltage MeasureName "MeasureCpuVoltageCore9"][!UpdateMeter MeterCore9Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 9)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore10]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core9Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore10Voltage MeasureName "MeasureCpuVoltageCore10"][!UpdateMeter MeterCore10Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 10)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore11]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core10Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore11Voltage MeasureName "MeasureCpuVoltageCore11"][!UpdateMeter MeterCore11Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 11)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore12]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core11Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore12Voltage MeasureName "MeasureCpuVoltageCore12"][!UpdateMeter MeterCore12Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 12)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore13]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core12Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore13Voltage MeasureName "MeasureCpuVoltageCore13"][!UpdateMeter MeterCore13Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 13)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore14]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core13Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore14Voltage MeasureName "MeasureCpuVoltageCore14"][!UpdateMeter MeterCore14Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 14)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore15]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core14Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore15Voltage MeasureName "MeasureCpuVoltageCore15"][!UpdateMeter MeterCore15Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 15)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore16]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core15Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore16Voltage MeasureName "MeasureCpuVoltageCore16"][!UpdateMeter MeterCore16Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 16)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)
