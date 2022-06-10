function onEvent(tag, var1, var2)
	if tag == 'Screen Cut out' then
		setProperty('camHUD.visible', var1)
		setProperty('camGame.visible', var2)
	end
end