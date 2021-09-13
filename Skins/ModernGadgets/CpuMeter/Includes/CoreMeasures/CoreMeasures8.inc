; Core Usages
[MeasureCpuUsageCore1]
Measure=CPU
Processor=1
Disabled=(#cpuCores# < 1)

[MeasureCpuUsageCore2]
Measure=CPU
Processor=2
Disabled=(#cpuCores# < 2)

[MeasureCpuUsageCore3]
Measure=CPU
Processor=3
Disabled=(#cpuCores# < 3)

[MeasureCpuUsageCore4]
Measure=CPU
Processor=4
Disabled=(#cpuCores# < 4)

[MeasureCpuUsageCore5]
Measure=CPU
Processor=5
Disabled=(#cpuCores# < 5)

[MeasureCpuUsageCore6]
Measure=CPU
Processor=6
Disabled=(#cpuCores# < 6)

[MeasureCpuUsageCore7]
Measure=CPU
Processor=7
Disabled=(#cpuCores# < 7)

[MeasureCpuUsageCore8]
Measure=CPU
Processor=8
Disabled=(#cpuCores# < 8)

; Core Temperatures
; __ HWiNFO
[MeasureCpuTempHwinfoCore1]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core0Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore1Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore1Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching | CpuTempHwinfo
Disabled=(((#showCoreTemps# = 0) && (#showCpuTempGraph# = 0)) || (#cpuCores# / #threadsPerCore# < 1)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore2]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core1Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore2Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore2Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 2)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore3]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core2Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore3Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore3Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 3)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore4]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core3Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore4Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore4Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 4)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore5]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core4Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore5Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore5Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 5)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore6]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core5Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore6Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore6Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 6)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore7]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core6Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore7Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore7Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 7)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore8]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core7Temp#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore8Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore8Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 8)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

; __ CoreTemp
[MeasureCpuTempCoreTempCore1]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=0
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore1Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore1Temp]
MinValue=0
MaxValue=[#[#maxCpuTempMode]MaxCpuTemp]
DynamicVariables=1
Group=CoreTemps | ProgramSwitching | CpuTempCoreTemp
Disabled=(((#showCoreTemps# = 0) && (#showCpuTempGraph# = 0)) || (#cpuCores# / #threadsPerCore# < 1)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore2]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=1
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore2Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore2Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 2)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore3]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=2
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore3Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore3Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 3)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore4]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=3
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore4Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore4Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 4)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore5]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=4
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore5Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore5Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 5)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore6]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=5
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore6Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore6Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 6)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore7]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=6
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore7Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore7Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 7)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore8]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=7
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore8Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore8Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 8)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

; __ SpeedFan
[MeasureCpuTempSpeedFanCore1]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 0)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore1Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore1Temp]
IfCondition2=MeasureCpuTempSpeedFanCore1 > #autoMaxCpuTemp#
IfTrueAction2=[!SetVariable autoMaxCpuTemp "(max([MeasureCpuTempSpeedFanCore1:], 1))"][!WriteKeyValue Variables autoMaxCpuTemp "(max([MeasureCpuTempSpeedFanCore1:], 1))" "#dynamicVarsPath#"][!UpdateMeasure MeasureCpuTempSpeedFanCore1]
MinValue=0
MaxValue=[#[#maxCpuTempMode]MaxCpuTemp]
DynamicVariables=1
Group=CoreTemps | ProgramSwitching | CpuTempSpeedFan
Disabled=(((#showCoreTemps# = 0) && (#showCpuTempGraph# = 0)) || (#cpuCores# / #threadsPerCore# < 1)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore2]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 1)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore2Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore2Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 2)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore3]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 2)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore3Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore3Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 3)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore4]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 3)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore4Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore4Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 4)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore5]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 4)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore5Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore5Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 5)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore6]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 5)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore6Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore6Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 6)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore7]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 6)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore7Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore7Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 7)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore8]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 7)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore8Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore8Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 8)) || (#extProgram# <> 4)

; Core Clocks
[MeasureCpuClockCore1]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core0Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 1)) || (#extProgram# <> 1)

[MeasureCpuClockCore2]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core1Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 2)) || (#extProgram# <> 1)

[MeasureCpuClockCore3]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core2Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 3)) || (#extProgram# <> 1)

[MeasureCpuClockCore4]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core3Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 4)) || (#extProgram# <> 1)

[MeasureCpuClockCore5]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core4Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 5)) || (#extProgram# <> 1)

[MeasureCpuClockCore6]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core5Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 6)) || (#extProgram# <> 1)

[MeasureCpuClockCore7]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core6Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 7)) || (#extProgram# <> 1)

[MeasureCpuClockCore8]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core7Clock#
Group=CoreClocks | ProgramSwitching
Disabled=((#showCpuClock# = 0) || (#cpuCores# / #threadsPerCore# < 8)) || (#extProgram# <> 1)

; Core Voltages
[MeasureCpuVoltageCore1]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core0Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore1Voltage MeasureName "MeasureCpuVoltageCore1"][!UpdateMeter MeterCore1Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 1)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore2]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core1Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore2Voltage MeasureName "MeasureCpuVoltageCore2"][!UpdateMeter MeterCore2Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 2)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore3]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core2Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore3Voltage MeasureName "MeasureCpuVoltageCore3"][!UpdateMeter MeterCore3Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 3)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore4]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core3Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore4Voltage MeasureName "MeasureCpuVoltageCore4"][!UpdateMeter MeterCore4Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 4)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore5]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core4Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore5Voltage MeasureName "MeasureCpuVoltageCore5"][!UpdateMeter MeterCore5Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 5)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore6]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core5Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore6Voltage MeasureName "MeasureCpuVoltageCore6"][!UpdateMeter MeterCore6Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 6)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore7]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core6Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore7Voltage MeasureName "MeasureCpuVoltageCore7"][!UpdateMeter MeterCore7Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 7)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore8]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#HWiNFO-CPU0-Core7Vid#
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore8Voltage MeasureName "MeasureCpuVoltageCore8"][!UpdateMeter MeterCore8Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 8)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)
