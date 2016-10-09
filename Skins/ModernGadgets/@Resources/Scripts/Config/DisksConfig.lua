-- MODERNGADGETS DISKS CONFIG SCRIPT
-- Written by iamanai

function Initialize() end

function Update() end

-- configures the specified disk's meters and measures based on given input
function ConfigureDisk(disk, diskType, baseColor, pos, mode)

  histogramA = SKIN:GetVariable('histogramA')

  SKIN:Bang('!Log', 'Configuring disk ' .. disk .. ' | diskType: ' .. diskType .. ' | baseColor: ' .. baseColor .. ' | mode: ' .. tostring(mode), 'Debug')

  if mode then
    
  else

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
