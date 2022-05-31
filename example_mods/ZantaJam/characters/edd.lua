local tomIdle = true;
local mattIdle = true;
local tordIdle = true;
local tomChair = false;


function onCreatePost()
	makeAnimatedLuaSprite('tom', 'characters/tom', -339, 204.4)
	addAnimationByIndices('tom', 'idle', 'Tom', '0, 1, 2, 3, 4, 5, 6', 24)
	addAnimationByIndices('tom', 'singLEFT', 'Tom', '7, 8, 9, 10', 24)
	addAnimationByIndices('tom', 'singRIGHT', 'Tom', '11, 12, 13, 14', 24)
	addAnimationByIndices('tom', 'singUP', 'Tom', '15, 16, 17, 18', 24)
	addAnimationByIndices('tom', 'singDOWN', 'Tom', '19, 20, 21, 22', 24)
	addAnimationByIndices('tom', 'chairNotice', 'Tom', '23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39', 24)
	addAnimationByIndices('tom', 'chairWalk', 'Tom', '40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 40, 41, 42, 43, 44, 45, 46', 24)
	addAnimationByIndices('tom', 'chairComeback', 'Tom', '55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 55, 56, 57, 58, 59, 60', 24)
	addAnimationByIndices('tom', 'chairIdle', 'Tom', '70, 71, 72, 73, 74', 24)
	addAnimationByIndices('tom', 'chairDiesLol', 'Tom', '75, 76, 77, 78, 79, 80, 81, 82, 83, 84', 24)


	makeAnimatedLuaSprite('matt', 'characters/matt', -56.8, 180.6)
	addAnimationByIndices('matt', 'idle', 'Matt', '0, 1, 2, 3, 4', 24)
	addAnimationByIndices('matt', 'singLEFT', 'Matt', '5, 6, 7', 24)
	addAnimationByIndices('matt', 'singRIGHT', 'Matt', '8, 9, 10', 24)
	addAnimationByIndices('matt', 'singUP', 'Matt', '11, 12, 13', 24)
	addAnimationByIndices('matt', 'singDOWN', 'Matt', '14, 15, 16', 24)
	

	makeAnimatedLuaSprite('tord', 'characters/tord', 82.85, 107.05)
	addAnimationByIndices('tord', 'idle', 'Tord', '0, 1, 2, 3, 4, 5, 6', 24)
	addAnimationByIndices('tord', 'singLEFT', 'Tord', '7, 8, 9', 24)
	addAnimationByIndices('tord', 'singDOWN', 'Tord', '10, 11, 12', 24)
	addAnimationByIndices('tord', 'singUP', 'Tord', '13, 14, 15', 24)
	addAnimationByIndices('tord', 'singRIGHT', 'Tord', '16, 17, 18', 24)
	addAnimationByIndices('tord', 'laugh', 'Tord', '19, 20, 21', 24)

	makeLuaSprite('night', 'house/Night', -29.15, -7.95)
	setScrollFactor('night', 0, 0)
	setBlendMode('night', 'SUBTRACT')

	makeLuaSprite('thx', 'eduardo', 0, 0)

	makeLuaSprite('thx2', 'haha', 0, 0)

	addLuaSprite('tord', false)
	addLuaSprite('matt', false)
	addLuaSprite('tom', true)

	addLuaSprite('night', true)

	setProperty('gf.visible', false)

	makeLuaSprite('black', 'black', 0, 0)
	setScrollFactor('black', 0, 0)


	makeLuaSprite('black2', 'black', 0, 0)
	setScrollFactor('black2', 0, 0)
	setProperty('black2.alpha', 0)

	addLuaSprite('black', true)
	addLuaSprite('black2', true)


	setObjectCamera('night', 'camHUD')
	setObjectCamera('black2', 'camHUD')
	setObjectCamera('thx', 'camOther')
	setObjectCamera('thx2', 'camOther')
	setProperty('thx.alpha', 0)
	setProperty('thx2.alpha', 0)

end

function onSongStart()
	doTweenAlpha('goPlayWackyMod', 'night', '0.45', '11.17', 'linear')
	doTweenAlpha('itsVeryGood', 'black', '0', '11.17', 'linear')
end

function onBeatHit()
	if tomIdle and curBeat % 2 == 0 then
		objectPlayAnimation('tom', 'idle', true)
	end
	if curBeat == 484 then
		doTweenAlpha('itsVeryGood', 'black2', '1', '1.5', 'linear')
	end
	if curBeat == 488 then
		addLuaSprite('thx', true)
		doTweenAlpha('saltySundayNight', 'thx', '1', '1.5', 'linear')
	end
	if curBeat == 508 then
		doTweenAlpha('xd', 'thx', '0', '1.5', 'linear')
	end
	if curBeat == 512 then
		addLuaSprite('thx2', true)
		doTweenAlpha('shadowMarioBalls', 'thx2', '1', '1.5', 'linear')
	end
	if tomChair and curBeat % 2 == 0 then
		objectPlayAnimation('tom', 'chairIdle', true)
	end
	if mattIdle and curBeat % 2 == 0 then
		objectPlayAnimation('matt', 'idle', true)
	end
	if tordIdle and curBeat % 2 == 0 then
		objectPlayAnimation('tord', 'idle', true)
	end
end

function opponentNoteHit(id, noteData, noteType, isSustainNote)
	if noteType == 'Tom Note' then
		if noteData == 0 then
			objectPlayAnimation('tom', 'singLEFT', true)
			runTimer('tomBack', 1, 1)
			tomIdle = false;
		end
		if noteData == 1 then
			objectPlayAnimation('tom', 'singDOWN', true)
			runTimer('tomBack', 1, 1)
			tomIdle = false;
		end
		if noteData == 2 then
			objectPlayAnimation('tom', 'singUP', true)
			runTimer('tomBack', 1, 1)
			tomIdle = false;
		end
		if noteData == 3 then
			objectPlayAnimation('tom', 'singRIGHT', true)
			runTimer('tordBack', 1, 1)
			tomIdle = false;
		end
	end
	if noteType == 'Tord Note' then
		if noteData == 0 then
			objectPlayAnimation('tord', 'singLEFT', true)
			runTimer('tordBack', 1, 1)
			tordIdle = false;
		end
		if noteData == 1 then
			objectPlayAnimation('tord', 'singDOWN', true)
			runTimer('tordBack', 1, 1)
			tordIdle = false;
		end
		if noteData == 2 then
			objectPlayAnimation('tord', 'singUP', true)
			runTimer('tordBack', 1, 1)
			tordIdle = false;
		end
		if noteData == 3 then
			objectPlayAnimation('tord', 'singRIGHT', true)
			runTimer('tordBack', 1, 1)
			tordIdle = false;
		end
	end
	if noteType == 'Matt Note' then
		if noteData == 0 then
			objectPlayAnimation('matt', 'singLEFT', true)
			runTimer('mattBack', 1, 1)
			mattIdle = false;
		end
		if noteData == 1 then
			objectPlayAnimation('matt', 'singDOWN', true)
			runTimer('mattBack', 1, 1)
			mattIdle = false;
		end
		if noteData == 2 then
			objectPlayAnimation('matt', 'singUP', true)
			runTimer('mattBack', 1, 1)
			mattIdle = false;
		end
		if noteData == 3 then
			objectPlayAnimation('matt', 'singRIGHT', true)
			runTimer('mattBack', 1, 1)
			mattIdle = false;
		end
	end
	if noteType == 'Duet Note' then
		if noteData == 0 then
			objectPlayAnimation('tom', 'singLEFT', true)
			runTimer('tomBack', 1, 1)
			tomIdle = false;
			objectPlayAnimation('matt', 'singLEFT', true)
			runTimer('mattBack', 1, 1)
			mattIdle = false;
			objectPlayAnimation('tord', 'singLEFT', true)
			runTimer('tordBack', 1, 1)
			tordIdle = false;
		end
		if noteData == 1 then
			objectPlayAnimation('tom', 'singDOWN', true)
			runTimer('tomBack', 1, 1)
			tomIdle = false;
			objectPlayAnimation('matt', 'singDOWN', true)
			runTimer('mattBack', 1, 1)
			mattIdle = false;
			objectPlayAnimation('tord', 'singDOWN', true)
			runTimer('tordBack', 1, 1)
			tordIdle = false;
		end
		if noteData == 2 then
			objectPlayAnimation('tom', 'singUP', true)
			runTimer('tomBack', 1, 1)
			tomIdle = false;
			objectPlayAnimation('matt', 'singUP', true)
			runTimer('mattBack', 1, 1)
			mattIdle = false;
			objectPlayAnimation('tord', 'singUP', true)
			runTimer('tordBack', 1, 1)
			tordIdle = false;
		end
		if noteData == 3 then
			objectPlayAnimation('tom', 'singRIGHT', true)
			runTimer('tomBack', 1, 1)
			tomIdle = false;
			objectPlayAnimation('matt', 'singRIGHT', true)
			runTimer('mattBack', 1, 1)
			mattIdle = false;
			objectPlayAnimation('tord', 'singRIGHT', true)
			runTimer('tordBack', 1, 1)
			tordIdle = false;
		end
	end
end

function onTimerCompleted(tag, useless1, useless2)
	if tag == 'tomBack' then
		tomIdle = true;
		objectPlayAnimation('tom', 'idle', true)
	end
	if tag == 'mattBack' then
		mattIdle = true;
		objectPlayAnimation('matt', 'idle', true)
	end
	if tag == 'tordBack' then
		tordIdle = true;
		objectPlayAnimation('tord', 'idle', true)
	end
end

function onTweenCompleted(tag)
	if tag == 'chairComebacking' then
		tomChair = true;
	end
end

function onEvent(tag, var1, var2)
	if tag == 'Edd Play Anim' then
		objectPlayAnimation(var1, var2, true)

		if var2 == 'chairWalk' then
			doTweenX('chairPick', 'tom', -729.65, 2, 'linear')
		end
		if var2 == 'chairComeback' then
			cancelTween('chairPick')
			doTweenX('chairComebacking', 'tom', -339, 2, 'linear')
		end
		if var2 == 'chairDiesLol' then
			tomChair = false;
		end
		if var1 == 'tord' then
			tordIdle = false;
		end
		if var1 == 'matt' then
			mattIdle = false;
		end
		if var1 == 'tom' then
			tomIdle = false;
		end
		if var2 == 'idle' then
			if var1 == 'tord' then
			tordIdle = true;
			end
			if var1 == 'matt' then
			mattIdle = true;
			end
			if var1 == 'tom' then
			tomIdle = true;
			end
		end
	end
end