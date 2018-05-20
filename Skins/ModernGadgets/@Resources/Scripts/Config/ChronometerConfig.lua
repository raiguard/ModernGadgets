debug = false
measureTime = 0

function Initialize()

	dofile(SKIN:GetVariable('scriptPath') .. 'Utilities.lua')

end

function Update()

	measureTime = SKIN:GetMeasure('MeasureTime'):GetValue()
	return measureTime

end