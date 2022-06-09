function onCreate()
	--Iterate over all notes
	for i = 0, getProperty('unspawnNotes.length')-1 do
		--Check if the note is an Instakill Note
		if getPropertyFromGroup('unspawnNotes', i, 'noteType') == 'Tord Note' then
			setPropertyFromGroup('unspawnNotes', i, 'noAnimation', true); --Change texture

			if getPropertyFromGroup('unspawnNotes', i, 'mustPress') then
				setPropertyFromGroup('unspawnNotes', i, 'noteType', '');
				setPropertyFromGroup('unspawnNotes', i, 'noAnimation', false);
			end

		end
	end
	--debugPrint('Script started!')
end