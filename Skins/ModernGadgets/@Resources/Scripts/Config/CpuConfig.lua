debug = false

function Initialize()

	cpuCores = SKIN:GetVariable('cpuCores')
	threadsPerCore = SKIN:GetVariable('threadsPerCore')

	-- TempConfigGraph(32)

end

function Update() end

function ToggleTemps(group, threads, mode)

  if mode then
    for i=1,32 do
      if (i <= threads) then
        SKIN:Bang('!EnableMeasure', 'MeasureCpuTemp' .. group .. 'Core' .. i)
      end
    end
  else
    SKIN:Bang('!DisableMeasureGroup', 'CoreTemps')
  end

  SKIN:Bang('!UpdateMeasureGroup', 'CoreTemps')
  SKIN:Bang('!UpdateMeterGroup', 'CoreTemps')

end

function ToggleVoltages(threads, mode)

  if mode then
    for i=1,32 do
      if (i <= threads) then
        SKIN:Bang('!EnableMeasure', 'MeasureCpuVoltageCore' .. i)
      end
    end
  else
    SKIN:Bang('!DisableMeasureGroup', 'CoreVoltages')
  end

  SKIN:Bang('!UpdateMeasureGroup', 'CoreVoltages')
  SKIN:Bang('!UpdateMeterGroup', 'CoreVoltages')

end