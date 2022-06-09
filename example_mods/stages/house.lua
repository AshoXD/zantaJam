function onCreatePost()
	makeLuaSprite('snow', 'house/Snow', -509.85, 477.35)
	makeLuaSprite('house', 'house/House', -324.35, -77.05)
	makeLuaSprite('fenceLeft', 'house/Fence2', -557.3, 191.55)
	makeLuaSprite('fenceRight', 'house/Fence', 1230.9, 209)
	makeLuaSprite('sky', 'house/Sky', -64.65, -21.85)
	setScrollFactor('sky', 0, 0)




	addLuaSprite('sky', false)
	addLuaSprite('snow', false)
	addLuaSprite('house', false)
	addLuaSprite('fenceLeft', false)
	addLuaSprite('fenceRight', false)


end