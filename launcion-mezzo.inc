\context Staff = "mezzosoprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4

		\clef "treble"
		\key e \major
		R1*4  |
%% 5
		r2 \times 2/3 { e' 4 fs' gs' }  |
		cs' 2 cs'  |
		b 2 \times 2/3 { b 4 b b }  |
		ds' 2 ds'  |
		cs' 2 \times 2/3 { cs' 4 cs' cs' }  |
%% 10
		e' 2. e' 4  |
		e' 4. ds' cs' 4  |
		b 1  |
		r2 \times 2/3 { e' 4 fs' gs' }  |
		cs' 2 cs'  |
%% 15
		b 2 \times 2/3 { b 4 b b }  |
		ds' 2 ds'  |
		cs' 2 \times 2/3 { cs' 4 cs' cs' }  |
		e' 2. e' 4  |
		e' 4. ds' cs' 4  |
%% 20
		b 1  |
		r4. b 8 b b b b  |
		cs' 4 cs' 8 cs' 4 cs' 8 cs' ds' ~  |
		ds' 8 ds' 2 ds' 8 ds' ds'  |
		ds' 4 ds' 8 ds' ds' ds' ds' e' ~  |
%% 25
		e' 8 e' 2 r8 r e'  |
		e' 4 e' e' e'  |
		e' 2 \times 2/3 { ds' 4 cs' ds' }  |
		b 2. ( cs' 4
		% warning: overlong bar truncated here |
		b 4 ) r8 b b b b b  |
%% 30
		cs' 4 cs' 8 cs' 4 cs' 8 cs' ds' ~  |
		ds' 8 ds' 2 ds' 8 ds' ds'  |
		ds' 4 ds' 8 ds' ds' ds' ds' e' ~  |
		e' 8 e' 2 r8 r e'  |
		e' 4 e' e' e'  |
%% 35
		ds' 4. r8 \times 2/3 { ds' 4 cs' ds' }  |
		b 1  |
		R1  |
		\bar "|."
	}

	\lyricsto "voz-mezzo" \new Lyrics \lyricmode {
		Hay u -- "na un" -- ción a -- quí
		ca -- yen -- do so -- bre mí,
		lim -- pián -- do -- me,
		cam -- bian -- do mi ser.

		Hay u -- "na un" -- ción a -- quí
		ca -- yen -- do so -- bre mí,
		lim -- pián -- do -- me,
		cam -- bian -- do mi ser.

		"Mi es" -- pí -- ri -- "tu y" mi al -- ma "se es" -- tán lle -- nan -- do
		con el po -- der de "tu Es" -- pí -- ri -- tu San -- to;
		mi vi -- da nun -- ca más se -- rá i -- gual. __

		"Mi es" -- pí -- ri -- "tu y" mi al -- ma "se es" -- tán lle -- nan -- do
		con el po -- der de "tu Es" -- pí -- ri -- tu San -- to;
		mi vi -- da nun -- ca más se -- rá i -- gual.
	}
>>
