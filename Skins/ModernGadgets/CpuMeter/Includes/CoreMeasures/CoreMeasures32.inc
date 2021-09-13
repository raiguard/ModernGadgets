[IncludeCoreMeasures24]
@includeCoreMeasures24=CoreMeasures24.inc

; Core Usages
[MeasureCpuUsageCore25]
Measure=CPU
Processor=25
Disabled=(#cpuCores# < 25)

[MeasureCpuUsageCore26]
Measure=CPU
Processor=26
Disabled=(#cpuCores# < 26)

[MeasureCpuUsageCore27]
Measure=CPU
Processor=27
Disabled=(#cpuCores# < 27)

[MeasureCpuUsageCore28]
Measure=CPU
Processor=28
Disabled=(#cpuCores# < 28)

[MeasureCpuUsageCore29]
Measure=CPU
Processor=29
Disabled=(#cpuCores# < 29)

[MeasureCpuUsageCore30]
Measure=CPU
Processor=30
Disabled=(#cpuCores# < 30)

[MeasureCpuUsageCore31]
Measure=CPU
Processor=31
Disabled=(#cpuCores# < 31)

[MeasureCpuUsageCore32]
Measure=CPU
Processor=32
Disabled=(#cpuCores# < 32)

; Core Temperatures
; __ HWiNFO
[MeasureCpuTempHwinfoCore25]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core24Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore25Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore25Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 25)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore26]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core25Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore26Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore26Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 26)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore27]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core26Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore27Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore27Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 27)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore28]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core27Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore28Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore28Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 28)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore29]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core28Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore29Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore29Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 29)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore30]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core29Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore30Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore30Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 30)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore31]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core30Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore31Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore31Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 31)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore32]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core31Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore32Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore32Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 32)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

; __ CoreTemp
[MeasureCpuTempCoreTempCore25]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=24
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore25Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore25Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 25)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore26]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=25
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore26Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore26Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 26)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore27]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=26
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore27Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore27Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 27)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore28]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=27
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore28Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore28Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 28)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore29]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=28
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore29Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore29Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 29)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore30]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=29
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore30Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore30Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 30)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore31]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=30
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore31Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore31Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 31)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore32]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=31
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore32Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore32Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 32)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

; __ SpeedFan
[MeasureCpuTempSpeedFanCore25]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 24)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore25Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore25Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 25)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore26]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 25)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore26Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore26Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 26)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore27]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 26)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore27Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore27Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 27)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore28]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 27)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore28Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore28Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 28)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore29]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 28)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore29Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore29Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 29)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore30]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 29)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore30Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore30Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 30)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore31]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 30)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore31Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore31Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 31)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore32]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 31)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore32Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore32Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 32)) || (#extProgram# <> 4)

; Core Clocks
[MeasureCpuClockCore25]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core24Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 25)) || (#extProgram# <> 1)

[MeasureCpuClockCore26]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core25Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 26)) || (#extProgram# <> 1)

[MeasureCpuClockCore27]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core26Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 27)) || (#extProgram# <> 1)

[MeasureCpuClockCore28]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core27Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 28)) || (#extProgram# <> 1)

[MeasureCpuClockCore29]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core28Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 29)) || (#extProgram# <> 1)

[MeasureCpuClockCore30]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core29Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 30)) || (#extProgram# <> 1)

[MeasureCpuClockCore31]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core30Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 31)) || (#extProgram# <> 1)

[MeasureCpuClockCore32]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core31Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 32)) || (#extProgram# <> 1)

; Core Voltages
[MeasureCpuVoltageCore25]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core24Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore25Voltage MeasureName "MeasureCpuVoltageCore25"][!UpdateMeter MeterCore25Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 25)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore26]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core25Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore26Voltage MeasureName "MeasureCpuVoltageCore26"][!UpdateMeter MeterCore26Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 26)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore27]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core26Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore27Voltage MeasureName "MeasureCpuVoltageCore27"][!UpdateMeter MeterCore27Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 27)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore28]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core27Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore28Voltage MeasureName "MeasureCpuVoltageCore28"][!UpdateMeter MeterCore28Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 28)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore29]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core28Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore29Voltage MeasureName "MeasureCpuVoltageCore29"][!UpdateMeter MeterCore29Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 29)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore30]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core29Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore30Voltage MeasureName "MeasureCpuVoltageCore30"][!UpdateMeter MeterCore30Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 30)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore31]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core30Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore31Voltage MeasureName "MeasureCpuVoltageCore31"][!UpdateMeter MeterCore31Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 31)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore32]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core31Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore32Voltage MeasureName "MeasureCpuVoltageCore32"][!UpdateMeter MeterCore32Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 32)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)
