[MeasureCalcCpuClockSpeedHwinfo]
Measure=Calc
Formula=Max(MeasureCpuClockCore1, Max(MeasureCpuClockCore2, Max(MeasureCpuClockCore3, Max(MeasureCpuClockCore4, Max(MeasureCpuClockCore5, Max(MeasureCpuClockCore6, Max(MeasureCpuClockCore7, MeasureCpuClockCore8)))))))
Disabled=(#showCpuClock# = 0) || (#extProgram# <> 1)