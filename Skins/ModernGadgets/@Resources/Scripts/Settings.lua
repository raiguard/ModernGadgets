-- --------------------------------------------------------------------------------
-- DYNAMIC RAINMETER SETTINGS SYSTEM
-- v1.0.0
-- By raiguard
-- --------------------------------------------------------------------------------
-- MIT License

-- Copyright (c) 2018 Caleb Heuer

-- Permission is hereby granted, free of charge, to any person obtaining a copy
-- of this software and associated documentation files (the "Software"), to deal
-- in the Software without restriction, including without limitation the rights
-- to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
-- copies of the Software, and to permit persons to whom the Software is
-- furnished to do so, subject to the following conditions:

-- The above copyright notice and this permission notice shall be included in all
-- copies or substantial portions of the Software.

-- THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
-- IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
-- FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
-- AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
-- LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
-- OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
-- SOFTWARE.
-- --------------------------------------------------------------------------------
-- Documentation: https://github.com/raiguard/rainmeter-settings/blob/master/README.md

debug = false

function Initialize()

	meterUpdateGroup = SELF:GetOption('MeterUpdateGroup', 'Settings')
	settingsPath = SELF:GetOption('SettingsPath', SKIN:GetVariable('CURRENTPATH'))
	configPath = SELF:GetOption('ConfigPath', SKIN:GetVariable('CURRENTCONFIGPATH'))
	toggleOn = SELF:GetOption('ToggleOn')
	toggleOff = SELF:GetOption('ToggleOff')
	radioOn = SELF:GetOption('RadioOn')
	radioOff = SELF:GetOption('RadioOff')
	defaultAction = SELF:GetOption('DefaultAction')

end

function Update() end

-- oggles the specified variable between the two given states
function Toggle(variable, onState, offState, actionSet, ifLogic, oSettingsPath, oConfigPath)

	local value = SKIN:GetVariable(variable)
	local lSettingsPath = oSettingsPath or settingsPath
	local lConfigPath = oConfigPath or configPath

	if value == offState then
		SetVariable(variable, onState, lSettingsPath, lConfigPath)
		RmLog(variable .. '=' .. onState, 'Debug')
		value = onState
	else
		SetVariable(variable, offState, lSettingsPath, lConfigPath)
		RmLog(variable .. '=' .. offState, 'Debug')
		value = offState
	end

	UpdateMeters()
	ActionSet(actionSet, ifLogic, value)

end

-- sets the specified variable to the given input. For use with radio buttons
-- and input boxes.
function Set(variable, input, actionSet, ifLogic, oSettingsPath, oConfigPath)

	local lSettingsPath = oSettingsPath or settingsPath
	local lConfigPath = oConfigPath or configPath

	SetVariable(variable, input, lSettingsPath, lConfigPath)
	RmLog(variable .. '=' .. input, 'Debug')	
	UpdateMeters()
	ActionSet(actionSet, ifLogic, input)

end

-- changes variable to the next or previous value, based on a provided data table
function Pivot(variable, data, direction, actionSet, ifLogic, oSettingsPath, oConfigPath)

	local lSettingsPath = oSettingsPath or settingsPath
	local lConfigPath = oConfigPath or configPath

	local tableLength = table.length(data)
	local index = table.find(data, SKIN:GetVariable(variable))
	
	if index < tableLength and direction == 'right' then
		SetVariable(variable, data[index + 1], lSettingsPath, lConfigPath)
		RmLog(variable .. '=' .. data[index + 1], 'Debug')	
		UpdateMeters()
		ActionSet(actionSet, ifLogic, data[index + 1])
	elseif index > 1 and direction == 'left' then
		SetVariable(variable, data[index - 1], lSettingsPath, lConfigPath)
		RmLog(variable .. '=' .. data[index - 1], 'Debug')
		UpdateMeters()	
		ActionSet(actionSet, ifLogic, data[index - 1])
	end

end

function Switch(data, actionSet, ifLogic, oSettingsPath, oConfigPath)

	local lSettingsPath = oSettingsPath or settingsPath
	local lConfigPath = oConfigPath or configPath

	for k,v in pairs(data) do
		local cValue = SKIN:GetVariable(k)
		if type(v) == 'table' then
			for k1, v1 in pairs(v) do
				if v1 == cValue then
					RmLog(k .. ': this is it!')
				else
					RmLog(k .. ': this is definitely not it!')
				end
			end
		else
			v = tostring(v)
		end
	end

end

function ActionSet(actionSet, ifLogic, input)

	local actionSetName = actionSet

	if actionSet == nil then
		SKIN:Bang(defaultAction)
	else
		if ifLogic == true then
			actionSetName = actionSet .. input
			actionSet = SELF:GetOption(actionSet .. input)
			else actionSet = SELF:GetOption(actionSet) end
		if actionSet == '' then RmLog('ActionSet \'' .. actionSetName .. '\' is empty or missing', 'Warning') end
		RmLog(actionSetName .. '=' .. actionSet)
		SKIN:Bang(actionSet)
	end

end

-- returns the 'toggleOn' or 'toggleOff' parameters depending on the state of the
-- given variable
function GetIcon(value, onState, offState)

	if offState == nil then
		if onState == nil then
			if value == 1 then return toggleOn
				else return toggleOff end
		else
			if value == onState then return radioOn
				else return radioOff end
		end
	else
		if value == onState then return toggleOn
			else return toggleOff end
	end

end

-- sets the variable using both !SetVariable and !WriteKeyValue, updating the
-- value both in the settings skin and the primary skin
function SetVariable(name, parameter, filePath, configPath)

	-- -- handle any escaped variables
	-- while true do
	-- 	local v = string.match(parameter, '%#%*(.*)%*%#')
		

	-- enact the changes within the skin
	SKIN:Bang('!SetVariable', name, parameter)
	if filePath == nil then SKIN:Bang('!WriteKeyValue', 'Variables', name, parameter) 
		else SKIN:Bang('!WriteKeyValue', 'Variables', name, parameter, filePath) end
	if configPath ~= nil then SKIN:Bang('!SetVariable', name, parameter, configPath) end

end

-- function to make logging messages less complicated
function RmLog(message, type)

	if type == nil then type = 'Debug' end

	if debug == true then SKIN:Bang("!Log", message, type)
    elseif type ~= 'Debug' then SKIN:Bang("!Log", message, type) end

end

-- updates the toggle buttons, radio buttons, and input boxes
function UpdateMeters()

	SKIN:Bang('!UpdateMeterGroup', meterUpdateGroup)
	SKIN:Bang('!Redraw')

end

function table.length(T)
    local count = 0
    for _ in pairs(T) do count = count + 1 end
    return count
end

function table.find(t, value)
	for _,v in pairs(t) do
		if (v == value) then
			return _
		end
	end
	return false
end

printIndent = '     '

-- prints the entire contents of a table to the Rainmeter log
function PrintTable(table)
    for k,v in pairs(table) do
        if type(v) == 'table' then
            local pI = printIndent
            RmLog(printIndent .. tostring(k) .. ':')
            printIndent = printIndent .. '  '
            PrintTable(v)
            printIndent = pI
        else
            RmLog(printIndent .. tostring(k) .. ': ' .. tostring(v))
        end
    end
end

-- --------------------------------------------------------------------------------
-- CUSTOM LUA ACTIONS
--
-- Everything below this point is not usually included with the script, and are
-- functions specifically designed for settings in this suite. If copying this file
-- for use in other suites, do not include this section.
-- --------------------------------------------------------------------------------

function SetCustomCpuName(input)

	local settingsPath = SKIN:GetVariable('cpuSettingsPath')
	local configPath = SKIN:GetVariable('cpuMeterConfig')

	if input == '' then
		Set('cpuName', 'auto', 'CustomCpuNameActionAuto')
	else
		Set('cpuName', input, 'CustomCpuNameAction')
	end

end

function SetCustomGpuName(input)

	local settingsPath = SKIN:GetVariable('gpuSettingsPath')
	local configPath = SKIN:GetVariable('gpuMeterConfig')

	if input == '' then
		Set('gpuName', 'auto', 'CustomGpuNameActionAuto')
	else
		Set('gpuName', input, 'CustomGpuNameAction')
	end

end