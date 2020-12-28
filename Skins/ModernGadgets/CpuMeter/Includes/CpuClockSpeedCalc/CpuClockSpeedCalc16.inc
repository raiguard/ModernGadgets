[MeasureCalcCpuClockSpeedHwinfo]
Measure=Calc
Formula=Max(MeasureCpuClockCore1, Max(MeasureCpuClockCore2, Max(MeasureCpuClockCore3, Max(MeasureCpuClockCore4, Max(MeasureCpuClockCore5, Max(MeasureCpuClockCore6, Max(MeasureCpuClockCore7, Max(MeasureCpuClockCore8, Max(MeasureCpuClockCore9, Max(MeasureCpuClockCore10, Max(MeasureCpuClockCore11, Max(MeasureCpuClockCore12, Max(MeasureCpuClockCore13, Max(MeasureCpuClockCore14, Max(MeasureCpuClockCore15, MeasureCpuClockCore16)))))))))))))))
Disabled=(#showCpuClock# = 0) || (#extProgram# <> 1)