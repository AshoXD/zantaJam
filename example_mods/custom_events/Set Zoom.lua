local lolZoma = 0;


function onEvent(tag, var1, var2)
	if tag == 'Set Zoom' then

		lolZoma = tonumber(var2)

		if lolZoma < 5 then
		doTweenZoom('sdhjdkl', 'camGame', var1, var2, 'circOut')
		end
		if lolZoma > 5 then
		doTweenZoom('sdhjdkl', 'camGame', var1, var2, 'linear')
		end


	end
end

function onUpdatePost()
	setProperty('camZooming', false)
end