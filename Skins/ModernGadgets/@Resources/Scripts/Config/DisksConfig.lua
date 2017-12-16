debug = false

alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

function Initialize()

  histogramA = SKIN:GetVariable('histogramA')
  dynamicVarsPath = SKIN:GetVariable('dynamicVarsPath')

end

function Update() end

-- configures the specified disk's meters and measures based on given input
function ConfigureDisk(disk, diskType, mode)

  isHwinfoAvailable=tonumber(SKIN:GetVariable('isHwinfoAvailable'))

  diskType = tonumber(diskType)

  index = alphabet:find(disk)
  prevDisk = alphabet:sub((index - 1), (index - 1))

  LogHelper('Configuring disk ' .. disk .. ' | diskType: ' .. diskType .. ' | index: ' .. index .. ' | mode: ' .. tostring(mode), 'Debug')

  if mode then
    -- set disk hide variable
    SKIN:Bang('!SetVariable', 'hideDisk' .. disk, '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'hideDisk' .. disk, '0', dynamicVarsPath)

    -- enable all of the disk's measures that aren't related to sensing disk existence
    SKIN:Bang('!EnableMeasureGroup', 'Disk' .. disk)
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Name', 'Disabled', '0')
    -- SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'SpaceTotal', 'Disabled', '0')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'SpaceUsed', 'Disabled', '0')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'SpaceUsedPercent', 'Disabled', '0')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'IdleTime', 'Disabled', '0')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Time', 'Disabled', '0')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Read', 'Disabled', '0')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Write', 'Disabled', '0')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Activity', 'Disabled', '0')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Command', 'Disabled', '0')

    -- set proper Y values
    SKIN:Bang('!SetOption', 'Disk' .. disk .. 'NameString', 'Y', '(#*rowSpacing*# + 4)r')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'NameString', 'Y', '(#*rowSpacing*# + 4)r')

    SKIN:Bang('!SetOption', 'Disk' .. disk .. 'StorageBar', 'Y', '#*barTextOffset*#R')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'StorageBar', 'Y', '#*barTextOffset*#R')

    -- show all of the disk's meters
    SKIN:Bang('!ShowMeterGroup', 'Disk' .. disk)
    SKIN:Bang('!HideMeter', 'Disk' .. disk .. 'EjectButton')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'NameString', 'Hidden', '0')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'TimeString', 'Hidden', '0')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'WriteImage', 'Hidden', '0')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'WriteString', 'Hidden', '0')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'ReadImage', 'Hidden', '0')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'ReadString', 'Hidden', '0')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'StorageFractionString', 'Hidden', '0')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'StoragePercentString', 'Hidden', '0')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'StorageBar', 'Hidden', '0')

    if diskType == 3 then
      SKIN:Bang('!ShowMeter', 'Disk' .. disk .. 'EjectButton')
      SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'EjectButton', 'Hidden', 0)      
    end

  else
    -- set disk hide variable
    SKIN:Bang('!SetVariable', 'hideDisk' .. disk, '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'hideDisk' .. disk, '1', dynamicVarsPath)

    -- disable all of the disk's measures that aren't related to sensing disk existence
    SKIN:Bang('!DisableMeasureGroup', 'Disk' .. disk)
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Name', 'Disabled', '1')
    -- SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'SpaceTotal', 'Disabled', '1')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'SpaceUsed', 'Disabled', '1')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'SpaceUsedPercent', 'Disabled', '1')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'IdleTime', 'Disabled', '1')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Time', 'Disabled', '1')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Read', 'Disabled', '1')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Write', 'Disabled', '1')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Activity', 'Disabled', '1')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'Command', 'Disabled', '1')
    SKIN:Bang('!WriteKeyValue', 'MeasureDisk' .. disk .. 'RunCommand', 'Disabled', '1')

    -- set special Y values for proper positioning
    SKIN:Bang('!SetOption', 'Disk' .. disk .. 'NameString', 'Y', '#*contentMargin*#')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'NameString', 'Y', '#*contentMargin*#')
    if index > 1 then
      SKIN:Bang('!SetOption', 'Disk' .. disk .. 'StorageBar', 'Y', '[Disk' .. prevDisk .. 'StorageBar:Y]')
      SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'StorageBar', 'Y', '[Disk' .. prevDisk .. 'StorageBar:Y]')
    else
      SKIN:Bang('!SetOption', 'Disk' .. disk .. 'StorageBar', 'Y', '([DiskMetersMargin:Y])')
      SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'StorageBar', 'Y', '([DiskMetersMargin:Y])')
    end

    -- hide all of the disk's meters
    SKIN:Bang('!HideMeterGroup', 'Disk' .. disk)
    SKIN:Bang('!HideMeter', 'Disk' .. disk .. 'TempString')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'NameString', 'Hidden', '1')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'EjectButton', 'Hidden', '1')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'TimeString', 'Hidden', '1')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'WriteImage', 'Hidden', '1')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'WriteString', 'Hidden', '1')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'ReadImage', 'Hidden', '1')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'ReadString', 'Hidden', '1')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'StorageFractionString', 'Hidden', '1')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'StoragePercentString', 'Hidden', '1')
    SKIN:Bang('!WriteKeyValue', 'Disk' .. disk .. 'StorageBar', 'Hidden', '1')
  end

  SetDiskColors()

  -- update all affected meters, redraw the skin
  SKIN:Bang('!UpdateMeasureGroup', 'Disk' .. disk)
  SKIN:Bang('!UpdateMeterGroup', 'Disk' .. disk)
  -- SKIN:Bang('!UpdateMeterGroup', 'DiskTemps')
  -- SKIN:Bang('!UpdateMeasure', 'MeasureHwinfoDetect')
  SKIN:Bang('!UpdateMeter', 'Disk' .. disk .. 'Histogram')
  SKIN:Bang('!UpdateMeter', 'GraphLines')
  SKIN:Bang('!UpdateMeterGroup', 'DiskStorageBars')
  SKIN:Bang('!UpdateMeterGroup', 'Background')
  SKIN:Bang('!Redraw')

end

function SetDiskColors()

  local i = 0

  alphabet:gsub(".", function(c)
    local d = tonumber(SKIN:GetVariable('hideDisk' .. c))
    if d == 0 then
      i = i + 1
      local color = SKIN:GetVariable('colorDisk' .. i)
      SKIN:Bang('!SetVariable', 'colorDisk' .. c, color)
      LogHelper('Set disk ' .. c .. ' color to: ' .. color, 'Debug')
    else
      SKIN:Bang('!SetVariable', 'colorDisk' .. c, '0,0,0,0')
    end
end)

end

-- function to make logging messages less cluttered
function LogHelper(message, type)

	if debug == true then
		SKIN:Bang("!Log", 'DisksConfig.lua: ' .. message, type)
	elseif type ~= 'Debug' and type ~= nil then
		SKIN:Bang("!Log", 'DisksConfig.lua: ' .. message, type)
	end

end
