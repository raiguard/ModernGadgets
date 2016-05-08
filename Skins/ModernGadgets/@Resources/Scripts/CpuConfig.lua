-- MODERNGADGETS CPU CONFIG SCRIPT
-- Based on work by SilverAzide
-- Written by iamanai

function Initialize() end

function Update() end

function ConfigCores(threads)

  for i=1,16 do
    if (i <= threads) then
      SKIN:Bang('!SetOptionGroup', 'CpuCore' .. i, 'Hidden', '0')
      SKIN:Bang('!SetOption', 'Core' .. i .. 'LabelString', 'Y', '#rowSpacing#R')
      SKIN:Bang('!WriteKeyValue', 'Core' .. i .. 'LabelString', 'Y', '#rowSpacing#R')
      SKIN:Bang('!WriteKeyValue', 'Core' .. i .. 'LabelString', 'Hidden', '0')
      SKIN:Bang('!WriteKeyValue', 'Core' .. i .. 'TempString', 'Hidden', '0')
      SKIN:Bang('!WriteKeyValue', 'Core' .. i .. 'ValueString', 'Hidden', '0')
      SKIN:Bang('!WriteKeyValue', 'Core' .. i .. 'Bar', 'Hidden', '0')
    elseif (i > threads) then
      SKIN:Bang('!SetOptionGroup', 'CpuCore' .. i, 'Hidden', '1')
      SKIN:Bang('!WriteKeyValue', 'Core' .. i .. 'LabelString', 'Hidden', '1')
      SKIN:Bang('!SetOption', 'Core' .. i .. 'LabelString', 'Y', 'R')
      SKIN:Bang('!WriteKeyValue', 'Core' .. i .. 'LabelString', 'Y', 'R')
      SKIN:Bang('!WriteKeyValue', 'Core' .. i .. 'TempString', 'Hidden', '1')
      SKIN:Bang('!WriteKeyValue', 'Core' .. i .. 'ValueString', 'Hidden', '1')
      SKIN:Bang('!WriteKeyValue', 'Core' .. i .. 'Bar', 'Hidden', '1')
    end
  end

  if (threads == 16) then
    SKIN:Bang('!SetOption', 'GraphLines', 'LineColor', SKIN:GetVariable('colorCore16'))
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'LineColor', SKIN:GetVariable('colorCore16'))
  else
    SKIN:Bang('!SetOption', 'GraphLines', 'LineColor', '0,0,0,0')
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'LineColor', '0,0,0,0')
  end
  c = 15
  for i=2,16 do
    if (c <= threads) then
      SKIN:Bang('!SetOption', 'GraphLines', 'LineColor' .. i, SKIN:GetVariable('colorCore' .. c))
      SKIN:Bang('!WriteKeyValue', 'GraphLines', 'LineColor' .. i, SKIN:GetVariable('colorCore' .. c))
    elseif (c > threads) then
      SKIN:Bang('!SetOption', 'GraphLines', 'LineColor' .. i, '0,0,0,0')
      SKIN:Bang('!WriteKeyValue', 'GraphLines', 'LineColor' .. i, '0,0,0,0')
    end

    c = (c - 1)
  end

  SKIN:Bang('!Log', 'Finished core configuration', 'Debug')

  SKIN:Bang('!SetVariable', 'cpuCores', threads)
  SKIN:Bang('!WriteKeyValue', 'Variables', 'cpuCores', threads)
end

function ToggleTemps(threads, mode)

  SKIN:Bang('!Log', 'ToggleTemps threads: ' .. threads .. ' | mode: ' .. tostring(mode), 'Debug')

  if mode then
    for i=1,16 do
      if (i <= threads) then
        SKIN:Bang('!SetOption', 'Core' .. i .. 'TempString', 'Hidden', '0')
        SKIN:Bang('!WriteKeyValue', 'Core' .. i .. 'TempString', 'Hidden', '0')
      else
        SKIN:Bang('!SetOption', 'Core' .. i .. 'TempString', 'Hidden', '1')
        SKIN:Bang('!WriteKeyValue', 'Core' .. i .. 'TempString', 'Hidden', '1')
      end
    end
  elseif not mode then
    for i=1,16 do
      SKIN:Bang('!SetOption', 'Core' .. i .. 'TempString', 'Hidden', '1')
      SKIN:Bang('!WriteKeyValue', 'Core' .. i .. 'TempString', 'Hidden', '1')
    end
  end

end
