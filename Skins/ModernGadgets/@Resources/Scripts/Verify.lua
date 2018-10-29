function Initialize()
	
	default = SKIN:GetVariable('colorSbControlCorner')

end

function Update() end

function CheckColor(input) return (input ~= default) end