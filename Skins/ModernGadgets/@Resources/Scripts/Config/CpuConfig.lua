debug = false

function Initialize()

	dofile(SKIN:GetVariable('scriptPath') .. 'Utilities.lua')
	cpuCores = SKIN:GetVariable('cpuCores')
	threadsPerCore = SKIN:GetVariable('threadsPerCore')

	-- TempConfigGraph(32)

end

function Update() end

function ToggleTemps(group, threads, mode)

  if mode then
    for i=1,36 do
      if (i <= threads) then
        SKIN:Bang('!EnableMeasure', 'MeasureCpuTemp' .. group .. 'Core' .. i)
        -- SKIN:Bang('!ShowMeter', 'Core' .. i .. 'TempString')
      end
    end
  else
    -- SKIN:Bang('!HideMeterGroup', 'CoreTemps')
    SKIN:Bang('!DisableMeasureGroup', 'CoreTemps')
  end

  SKIN:Bang('!UpdateMeasureGroup', 'CoreTemps')
  SKIN:Bang('!UpdateMeterGroup', 'CoreTemps')

end

function ToggleVoltages(threads, mode)

  if mode then
    for i=1,36 do
      if (i <= threads) then
        SKIN:Bang('!EnableMeasure', 'MeasureCpuVoltageCore' .. i)
        -- SKIN:Bang('!ShowMeter', 'Core' .. i .. 'VoltageString')
      end
    end
  else
    -- SKIN:Bang('!HideMeterGroup', 'CoreVoltages')
    SKIN:Bang('!DisableMeasureGroup', 'CoreVoltages')
  end

  SKIN:Bang('!UpdateMeasureGroup', 'CoreVoltages')
  SKIN:Bang('!UpdateMeterGroup', 'CoreVoltages')

end