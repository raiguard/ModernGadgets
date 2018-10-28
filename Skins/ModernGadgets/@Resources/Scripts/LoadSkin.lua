--[[
--------------------------------------------------

LOADSKIN.LUA
raiguard
v3.0.0

--------------------------------------------------

Release Notes:
v3.0.0 - 2018-10-28
- Redesigned script to simplify the required inputs
- Improved documentation
v2.0.0 - 2018-6-22
- Updated to use the new ConfigActive plugin rather than WebParser
v1.3.0 - 2018-6-21
- The script now gets the input from a WebParser measure, rather than directly parsing
  Rainmeter.ini (for Rainmeter 4.2+ compatibility)
v1.2.0 - 2017-12-27
 - Added ability to specifically load or unload skins, rather than always toggling them
v1.1.0 - 2017-12-7
 - Consolidated LoadConfig() into LoadSkin()
v1.0.0 - 2017-10-2
 - Initial release

--------------------------------------------------

This script loads / unlaods the specified skin or config, and sets parameters for toggle
buttons related to those skins.


INSTRUCTIONS FOR USE:
Copy this file and paste it into your own suite. First, you will need to create a
ConfigActive plugin measure:

	[MeasureConfigActive]
	Measure=Plugin
	Plugin=ConfigActive

That's all you need to add to this measure, the script will handle the rest. Speaking of
the script, that is the next measure you need to create:

	[MeasureLoadSkinScript]
	Measure=Script
	ScriptFile=#@#Scripts\LoadSkin.lua
	ToggleOn=#@#Images\toggle-on.png
	ToggleOff=#@#Images\toggle-off.png
	ToggleGroup=ToggleButtons
	MeasureName=MeasureConfigActive

The 'ToggleOn' and 'ToggleOff' parameters are for the toggle buttons. If you are using
images, these will be the image paths for the buttons' respective on and off states. If
you are using strings, these will be the 'on' and 'off' strings that will show on the
buttons. If you do not include these parameters, the script will default to 'Enabled'
and 'Disabled' respectively.

There are also optional 'RadioOn' and 'RadioOff' options for the script measure. This
allows you to specify a different set of images or strings for 'radio buttons', usually
to have buttons that will load different variants of a config. These options are
optional, and if left unspecified, will be defined as what you set in 'ToggleOn' and
'ToggleOff' respectively.

The 'ToggleGroup' parameter specifies the group that the toggle button meters belong to.
If you do not include this option, it will default to 'SkinToggles'.

Last but not least, the 'MeasureName' option is simply the name of the ConfigActive
measure that you created before. If unspecified, it will default to 'MeasureConfigActive'.

A toggle button meter should look something like this:

	[MeterToggleSystem]
	Meter=Image
	ImageName=[&MeasureLoadSkinScript:GetIcon('illustro\\System')]
	X=5
	Y=5
	W=31
	H=20
	LeftMouseUpAction=[!CommandMeasure MeasureLoadSkinScript "ToggleSkin('illustro\\System')"]
	DynamicVariables=1
	Group=SkinToggles

The toggle buttons get their parameters via inline LUA, which requires that
'DynamicVariables=1' must be set on all the buttons. The buttons must also belong to the
group specified in the script measure.

Obviously, if you are using strings as your buttons, the inline LUA will be contained in
the 'Text' option, rather than 'ImageName'.

--------------------------------------------------
]]--

function Initialize()

	toggleOn = SELF:GetOption('ToggleOn', SKIN:GetVariable('toggleOn'))
	toggleOff = SELF:GetOption('ToggleOff', SKIN:GetVariable('toggleOff'))
	radioOn = SELF:GetOption('RadioOn', toggleOn)
	radioOff = SELF:GetOption('RadioOff', toggleOff)
	toggleGroup = SELF:GetOption('ToggleGroup', 'SkinToggles')
	caMeasureName = SELF:GetOption('MeasureName', 'MeasureConfigActive')
	measureCA = SKIN:GetMeasure(caMeasureName)

end

function Update() end

-- toggles or sets the specified skin or config
function ToggleSkin(configName, iniName, toState)

	--[[
		PLEASE NOTE THAT THE DOUBLE BACKSLASHES ARE ALWAYS REQUIRED BECAUSE OF LUA SHENANIGANS
		configName: the name of the config you wish to toggle (e.g. 'illustro\\Disk')
		iniName (optional): the name of the skin INI you wish to toggle (e.g. '1 Disk.ini')
		toState (optional): the state you wish to set the skin to (1 for active, -1 for inactive)
	]]--

	local configState, activeIni = GetConfigState(configName)
	local toState = toState or iniName and (iniName == activeIni and -1 or 1) or configState * -1

	if toState == 1 then
		if iniName == nil then
			SKIN:Bang('!ActivateConfig', configName)
		elseif iniName ~= activeIni then
			SKIN:Bang('!ActivateConfig', configName, iniName)
		end
	elseif configState == 1 then
		SKIN:Bang('!DeactivateConfig', configName)
	end

	SKIN:Bang('!UpdateMeterGroup', toggleGroup)
	SKIN:Bang('!Redraw')

	return ''

end

-- returns the corresponding button state
function GetIcon(configName, iniName, radio)

	--[[
		PLEASE NOTE THAT THE DOUBLE BACKSLASHES ARE ALWAYS REQUIRED BECAUSE OF LUA SHENANIGANS
		configName: the name of the relevant config (e.g. 'illustro\\Disk')
		iniName (optional): the name of the relevant INI file (e.g. '1 Disk.ini')
		radio: if set to true, the function will return the 'radioOn' and 'radioOff' options,
			   instead of 'toggleOn' and 'toggleOff'
	]]--
	
	local configState, activeIni = GetConfigState(configName)
	-- determine which icon to provide
	if iniName then
		if configState == 1 and activeIni == iniName then return radio and radioOn or toggleOn
		else return radio and radioOff or toggleOff end
	else
		if configState == 1 then return radio and radioOn or toggleOn
		else return radio and radioOff or toggleOff end
	end

end

-- retrieves config state and active INI
function GetConfigState(configName)

	SKIN:Bang('!SetOption', caMeasureName, 'ConfigName', configName)
	SKIN:Bang('!UpdateMeasure', caMeasureName)
	return measureCA:GetValue(),	   -- active state of the config (1 or -1)
		   measureCA:GetStringValue()  -- name of the currently active INI (if inactive, returns -1)

end