debug = false

alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

function Initialize()

	dofile(SKIN:GetVariable('scriptPath') .. 'Utilities.lua')
	dynamicVarsPath = SKIN:GetVariable('dynamicVarsPath')
	UpdateHideDisks()
	SetDiskColors()

end

function Update() end

function ConfigureDisk(disk, index)

	LogHelper('CONFIGURING  disk: ' .. disk .. ' | index: ' .. index, 'Debug')

	if index > 1 and not table.contains(hideDisks, disk) then
		SKIN:Bang('!EnableMeasureGroup', 'Disk' .. disk)
		SKIN:Bang('!ShowMeterGroup', 'Disk' .. disk)
		SKIN:Bang('!SetOption', 'Disk' .. disk .. 'EjectButton', 'Hidden', '(#*hideDisk' .. disk .. '*# = 1) || ([MeasureDisk' .. disk .. 'Type:] = 4) || (#*showEjectButtons*# = 0)')
		SetVariable('hideDisk' .. disk, '0', dynamicVarsPath)
	else
		SKIN:Bang('!HideMeterGroup', 'Disk' .. disk)
		SKIN:Bang('!DisableMeasureGroup', 'Disk' .. disk)
		SetVariable('hideDisk' .. disk, '1', dynamicVarsPath)
	end

	SetDiskColors()

	SKIN:Bang('!UpdateMeasureGroup', 'Disk' .. disk)
	SKIN:Bang('!UpdateMeterGroup', 'Disk' .. disk)
	SKIN:Bang('!UpdateMeterGroup', 'LineGraph')
	SKIN:Bang('!UpdateMeterGroup', 'Background')
	SKIN:Bang('!Update')
	SKIN:Bang('!Redraw')

end

function SetDiskColors()

	local i = 0

	alphabet:gsub(".", function(c)
		local d = tonumber(SKIN:GetVariable('hideDisk' .. c))
		if d == 0 then
			i = i + 1
			local color = SKIN:GetVariable('colorDisk' .. i)
			SetVariable('colorDisk' .. c, color, dynamicVarsPath)
			SKIN:Bang('!SetOptionGroup', 'Disk' .. c .. 'Arrows', 'ImageTint', color)
			-- LogHelper('Set disk ' .. c .. ' color to: ' .. color, 'Debug')
		else
			SetVariable('colorDisk' .. c, '0,0,0,0', dynamicVarsPath)
	    end
	end)

end

function UpdateHideDisks()

	manualHideDisks = SKIN:GetVariable('manualHideDisks')
	hideDisks = {}

	for i in string.gmatch(manualHideDisks, "%S+") do
		table.insert(hideDisks, i)
	end

	alphabet:gsub(".", function(c)
		local d = tonumber(SKIN:GetVariable('hideDisk' .. c))
		if d == 0 and table.contains(hideDisks, c) then
			ConfigureDisk(c, 0, true)
	    else
	    	local s = SKIN:GetMeasure('MeasureDisk' .. c .. 'SpaceTotal')
	    	if s == nil then s = 0 else s = s:GetValue() end
			local t = SKIN:GetMeasure('MeasureDisk' .. c .. 'Type')
			if t == nil then t = 0 else t = t:GetValue() end
			if d == 1 and s > 0 then 
	    		ConfigureDisk(c, t, true)
	    	end
	    end
	end)

end

function table.contains(table, element)
  for _, value in pairs(table) do
    if value == element then
      return true
    end
  end
  return false
end