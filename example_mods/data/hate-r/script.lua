local allowCountdown = false
function onCreatePost()
	if not allowCountdown and isStoryMode and not seenCutscene then --Block the first countdown
		startVideo('testVideo');
		allowCountdown = true;
		return Function_Stop;
	end
	return Function_Continue;
end