function CheckVars(default, alignment, Arg1, Arg2, Arg3, Arg4)
	
	if alignment == 'right' then
		if Arg2 ~= default and Arg4 ~= default then return 1
		else return 0 end
	elseif alignment == 'left' then
		if Arg1 ~= default and Arg3 ~= default then return 1
		else return 0 end
	else return 0
	end

end