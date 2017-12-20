-- LUA Utilities
--
-- This is just a collection of common functions used across almost all the LUA scripts in this project.
--

-- function to make logging messages less cluttered
function LogHelper(message, type)

  if type == nil then type = 'Debug' end

  if debug == true then
    SKIN:Bang("!Log", message, type)
  elseif type ~= 'Debug' then
  	SKIN:Bang("!Log", message, type)
	end

end

-- for toggle buttons, returns the correct icon name depending on the given setting
function GetIcon(setting, activeState)

  if activeState == nil then activeState = 1 end

  if setting == activeState then return '[#toggleOn]'
  else return '[#toggleOff]' end

end

-- just for ease of use
function SetVariable(name, parameter, filePath, configPath)

  SKIN:Bang('!SetVariable', name, parameter)
  if filePath == nil then SKIN:Bang('!WriteKeyValue', 'Variables', name, parameter) 
  else SKIN:Bang('!WriteKeyValue', 'Variables', name, parameter, filePath) end
  if configPath ~= nil then SKIN:Bang('!SetVariable', name, parameter, configPath) end

end

-- updates the toggle buttons for the current skin
function UpdateToggles()

  SKIN:Bang('!UpdateMeterGroup', 'ToggleButtons')
  SKIN:Bang('!Redraw')

end