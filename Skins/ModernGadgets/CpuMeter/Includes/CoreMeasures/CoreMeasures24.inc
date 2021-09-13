[IncludeCoreMeasures16]
@includeCoreMeasures16=CoreMeasures16.inc

; Core Usages
[MeasureCpuUsageCore17]
Measure=CPU
Processor=17
Disabled=(#cpuCores# < 17)

[MeasureCpuUsageCore18]
Measure=CPU
Processor=18
Disabled=(#cpuCores# < 18)

[MeasureCpuUsageCore19]
Measure=CPU
Processor=19
Disabled=(#cpuCores# < 19)

[MeasureCpuUsageCore20]
Measure=CPU
Processor=20
Disabled=(#cpuCores# < 20)

[MeasureCpuUsageCore21]
Measure=CPU
Processor=21
Disabled=(#cpuCores# < 21)

[MeasureCpuUsageCore22]
Measure=CPU
Processor=22
Disabled=(#cpuCores# < 22)

[MeasureCpuUsageCore23]
Measure=CPU
Processor=23
Disabled=(#cpuCores# < 23)

[MeasureCpuUsageCore24]
Measure=CPU
Processor=24
Disabled=(#cpuCores# < 24)

; Core Temperatures
; __ HWiNFO
[MeasureCpuTempHwinfoCore17]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core16Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore17Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore17Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 17)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore18]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core17Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore18Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore18Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 18)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore19]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core18Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore19Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore19Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 19)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore20]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core19Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore20Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore20Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 20)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore21]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core20Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore21Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore21Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 21)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore22]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core21Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore22Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore22Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 22)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore23]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core22Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore23Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore23Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 23)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore24]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core23Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore24Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore24Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 24)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

; __ CoreTemp
[MeasureCpuTempCoreTempCore17]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=16
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore17Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore17Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 17)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore18]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=17
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore18Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore18Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 18)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore19]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=18
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore19Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore19Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 19)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore20]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=19
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore20Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore20Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 20)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore21]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=20
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore21Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore21Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 21)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore22]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=21
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore22Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore22Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 22)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore23]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=22
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore23Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore23Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 23)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore24]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=23
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore24Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore24Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 24)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

; __ SpeedFan
[MeasureCpuTempSpeedFanCore17]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 16)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore17Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore17Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 17)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore18]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 17)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore18Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore18Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 18)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore19]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 18)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore19Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore19Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 19)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore20]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 19)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore20Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore20Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 20)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore21]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 20)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore21Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore21Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 21)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore22]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 21)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore22Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore22Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 22)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore23]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 22)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore23Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore23Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 23)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore24]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 23)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore24Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore24Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 24)) || (#extProgram# <> 4)

; Core Clocks
[MeasureCpuClockCore17]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core16Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 17)) || (#extProgram# <> 1)

[MeasureCpuClockCore18]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core17Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 18)) || (#extProgram# <> 1)

[MeasureCpuClockCore19]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core18Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 19)) || (#extProgram# <> 1)

[MeasureCpuClockCore20]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core19Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 20)) || (#extProgram# <> 1)

[MeasureCpuClockCore21]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core20Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 21)) || (#extProgram# <> 1)

[MeasureCpuClockCore22]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core21Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 22)) || (#extProgram# <> 1)

[MeasureCpuClockCore23]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core22Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 23)) || (#extProgram# <> 1)

[MeasureCpuClockCore24]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core23Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 24)) || (#extProgram# <> 1)

; Core Voltages
[MeasureCpuVoltageCore17]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core16Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore17Voltage MeasureName "MeasureCpuVoltageCore17"][!UpdateMeter MeterCore17Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 17)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore18]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core17Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore18Voltage MeasureName "MeasureCpuVoltageCore18"][!UpdateMeter MeterCore18Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 18)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore19]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core18Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore19Voltage MeasureName "MeasureCpuVoltageCore19"][!UpdateMeter MeterCore19Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 19)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore20]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core19Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore20Voltage MeasureName "MeasureCpuVoltageCore20"][!UpdateMeter MeterCore20Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 20)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore21]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core20Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore21Voltage MeasureName "MeasureCpuVoltageCore21"][!UpdateMeter MeterCore21Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 21)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore22]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core21Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore22Voltage MeasureName "MeasureCpuVoltageCore22"][!UpdateMeter MeterCore22Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 22)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore23]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core22Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore23Voltage MeasureName "MeasureCpuVoltageCore23"][!UpdateMeter MeterCore23Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 23)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore24]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core23Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore24Voltage MeasureName "MeasureCpuVoltageCore24"][!UpdateMeter MeterCore24Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 24)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)
