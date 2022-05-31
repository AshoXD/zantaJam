function onEvent(tag, useless, uselessToo)
	if tag == 'Flash' and flashingLights then
		cameraFlash('other', '0x92FFFFFF', 1, true)
	end
end	