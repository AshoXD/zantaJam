function onCreate()
	--Iterate over all notes
	for i = 0, getProperty('unspawnNotes.length')-1 do
		--Check if the note is an Instakill Note
		if getPropertyFromGroup('unspawnNotes', i, 'noteType') == 'Ignore Note' then
			setPropertyFromGroup('unspawnNotes', i, 'ignoreNote', true); --Change texture

		end
	end
	--debugPrint('Script started!')
end