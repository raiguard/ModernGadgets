-- MODERNGADGETS DISKS CONFIG SCRIPT
-- Written by iamanai

isDbg = true

function Initialize() end

function Update() end

-- configures the specified disk's meters and measures based on given input
function ConfigureDisk(disk, diskType, baseColor, mode)

  histogramA = SKIN:GetVariable('histogramA')
  isHwinfoAvailable=tonumber(SKIN:GetVariable('isHwinfoAvailable'))

  LogHelper('Configuring disk ' .. disk .. ' | diskType: ' .. diskType .. ' | baseColor: ' .. baseColor .. ' | mode: ' .. tostring(mode), 'Debug')

  if mode then
    -- set disk hide variable
    SKIN:Bang('!SetVariable', 'hideDisk' .. disk, '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'hideDisk' .. disk, '1')

    -- disable all of the disk's measures that aren't related to sensing disk existence
    SKIN:Bang('!DisableMeasureGroup', 'MgDisk' .. disk)
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Name', 'Disabled', '1')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Temp', 'Disabled', '1')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'SpaceUsedPercent', 'Disabled', '1')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'IdleTime', 'Disabled', '1')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Time', 'Disabled', '1')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Read', 'Disabled', '1')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Write', 'Disabled', '1')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Command', 'Disabled', '1')

    -- set special Y values for proper positioning
    SKIN:Bang('!SetOption', 'Disk' .. disk .. 'NameString', 'Y', '#*contentMargin*#')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'NameString', 'Y', '#*contentMargin*#')
    if disk < 10 then
      SKIN:Bang('!SetOption', 'Disk' .. disk .. 'StorageBar', 'Y', '[Disk' .. (disk - 1) .. 'StorageBar:Y]')
      SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'StorageBar', 'Y', '[Disk' .. (disk - 1) .. 'StorageBar:Y]')
    else
      SKIN:Bang('!SetOption', 'Disk' .. disk .. 'StorageBar', 'Y', '([Disk' .. (disk - 1) .. 'StorageBar:Y] + 1)')
      SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'StorageBar', 'Y', '([Disk' .. (disk - 1) .. 'StorageBar:Y] + 1)')
    end

    -- hide all of the disk's meters
    SKIN:Bang('!HideMeterGroup', 'MgDisk' .. disk)
    SKIN:Bang('!HideMeter', 'Disk' .. disk .. 'TempString')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'NameString', 'Hidden', '1')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'TempString', 'Hidden', '1')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'TimeString', 'Hidden', '1')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'WriteImage', 'Hidden', '1')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'WriteString', 'Hidden', '1')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'ReadImage', 'Hidden', '1')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'ReadString', 'Hidden', '1')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'StorageFractionString', 'Hidden', '1')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'StoragePercentString', 'Hidden', '1')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'StorageBar', 'Hidden', '1')

    -- set colors for the disk's histogram and line graph meters
    SKIN:Bang('!SetOption', 'Disk' .. disk .. 'Histogram', 'PrimaryColor', '0,0,0,0')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'Histogram', 'PrimaryColor', '0,0,0,0')

    SKIN:Bang('!SetOption', 'GraphLines', 'LineColor' .. (10 - disk), '0,0,0,0')
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'LineColor' .. (10 - disk), '0,0,0,0')

    -- update all affected meters, redraw the skin
    SKIN:Bang('!UpdateMeterGroup', 'MgDisk' .. disk)
    SKIN:Bang('!UpdateMeterGroup', 'DiskStorageBars')
    SKIN:Bang('!UpdateMeterGroup', 'Background')
    SKIN:Bang('!Redraw')
  else
    -- set disk hide variable
    SKIN:Bang('!SetVariable', 'hideDisk' .. disk, '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'hideDisk' .. disk, '0')

    -- enable all of the disk's measures that aren't related to sensing disk existence
    SKIN:Bang('!EnableMeasureGroup', 'MgDisk' .. disk)
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Name', 'Disabled', '0')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Temp', 'Disabled', '0')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'SpaceUsedPercent', 'Disabled', '0')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'IdleTime', 'Disabled', '0')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Time', 'Disabled', '0')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Read', 'Disabled', '0')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Write', 'Disabled', '0')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Command', 'Disabled', '0')

    -- set proper Y values
    SKIN:Bang('!SetOption', 'Disk' .. disk .. 'NameString', 'Y', '(#*rowSpacing*# + 4)r')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'NameString', 'Y', '(#*rowSpacing*# + 4)r')
    SKIN:Bang('!SetOption', 'Disk' .. disk .. 'StorageBar', 'Y', 'R')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'StorageBar', 'Y', 'R')

    -- show all of the disk's meters
    SKIN:Bang('!ShowMeterGroup', 'MgDisk' .. disk)
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'NameString', 'Hidden', '0')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'TimeString', 'Hidden', '0')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'WriteImage', 'Hidden', '0')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'WriteString', 'Hidden', '0')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'ReadImage', 'Hidden', '0')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'ReadString', 'Hidden', '0')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'StorageFractionString', 'Hidden', '0')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'StoragePercentString', 'Hidden', '0')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'StorageBar', 'Hidden', '0')

    -- show temperature meter if appropriate disk type
    if diskType == 4 then
      if isHwinfoAvailable == 1 then
        SKIN:Bang('!ShowMeter', 'Disk' .. disk .. 'TempString')
        SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'TempString', 'Hidden', '0')
        SKIN:Bang('!SetOption', 'Disk' .. disk .. 'TempString', 'Group', 'DiskTemps')
        SKIN:Bang('!UpdateMeter', 'Disk' .. disk .. 'TempString')
      else
        SKIN:Bang('!SetOption', 'Disk' .. disk .. 'TempString', 'Group', 'DiskTemps')
        SKIN:Bang('!UpdateMeter', 'Disk' .. disk .. 'TempString')
      end
    else
      SKIN:Bang('!HideMeter', 'Disk' .. disk .. 'TempString')
      SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'TempString', 'Hidden', '1')
      SKIN:Bang('!SetOption', 'Disk' .. disk .. 'TempString', 'Group', '')
      SKIN:Bang('!UpdateMeter', 'Disk' .. disk .. 'TempString')
    end

    -- set colors for the disk's histogram and line graph meters
    SKIN:Bang('!SetOption', 'Disk' .. disk .. 'Histogram', 'PrimaryColor', GetStringRgb(baseColor) .. ',' .. histogramA)
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'Histogram', 'PrimaryColor', GetStringRgb(baseColor) .. ',' .. histogramA)

    SKIN:Bang('!SetOption', 'GraphLines', 'LineColor' .. (10 - disk), baseColor)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'LineColor' .. (10 - disk), baseColor)

    -- update all affected meters, redraw the skin
    SKIN:Bang('!UpdateMeasureGroup', 'MgDisk' .. disk)
    SKIN:Bang('!UpdateMeterGroup', 'MgDisk' .. disk)
    SKIN:Bang('!UpdateMeterGroup', 'DiskTemps')
    SKIN:Bang('!UpdateMeasure', 'MeasureHwinfoDetect')
    SKIN:Bang('!UpdateMeter', 'Disk' .. disk .. 'Histogram')
    SKIN:Bang('!UpdateMeter', 'GraphLines')
    SKIN:Bang('!UpdateMeterGroup', 'DiskStorageBars')
    SKIN:Bang('!UpdateMeterGroup', 'Background')
    SKIN:Bang('!Redraw')
  end

end

-- gets the RGB values from an RGBA string
function GetStringRgb(source)

	local valueR = GetRgbaValue(source, 1)
	local valueG = GetRgbaValue(source, 2)
	local valueB = GetRgbaValue(source, 3)

	return tostring(valueR .. ',' .. valueG .. ',' .. valueB)

end

-- separates an RGBA value into the four values, and returns the value specified by 'key'
function GetRgbaValue(source, key)

	if key > 4 then
		LogHelper('\'key\' cannot exceed 4!', 'Error')
		return nil
	else
		rgbIt = string.gmatch(source,"%d+")
		rgbTable = {}
		for match in rgbIt do
			table.insert(rgbTable, match)
		end

		return tostring(rgbTable[key])
	end

end

-- function to make logging messages less cluttered
function LogHelper(message, type)

	if isDbg == true then
		SKIN:Bang("!Log", 'UpdateChecker.lua: ' .. message, type)
	elseif type ~= 'Debug' and type ~= nil then
		SKIN:Bang("!Log", 'UpdateChecker.lua: ' .. message, type)
	end

end
