\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4

		\clef "treble"
		\key e \major
		R1*4  |
%% 5
		r2 \times 2/3 { e' 4 fs' gs' }  |
		cs' 2 a'  |
		fs' 2 \times 2/3 { ds' 4 e' fs' }  |
		b 2 fs'  |
		e' 2 \times 2/3 { cs' 4 ds' e' }  |
%% 10
		a 2. e' 4  |
		e' 4. ds' cs' 4  |
		b 1  |
		r2 \times 2/3 { e' 4 fs' gs' }  |
		cs' 2 a'  |
%% 15
		fs' 2 \times 2/3 { ds' 4 e' fs' }  |
		b 2 fs'  |
		e' 2 \times 2/3 { cs' 4 ds' e' }  |
		a 2. e' 4  |
		e' 4. ds' cs' 4  |
%% 20
		b 1  |
		r4. b 8 gs' fs' gs' fs'  |
		a' 4 cs' 8 a' 4 a' 8 gs' gs' ~  |
		gs' 8 fs' 2 e' 8 e' fs'  |
		gs' 4 gs' 8 a' gs' fs' e' fs' ~  |
%% 25
		fs' 8 e' 2 r8 r cs'  |
		a' 4 a' a' gs'  |
		fs' 2 \times 2/3 { fs' 4 e' fs' }  |
		gs' 1 ~  |
		gs' 4 r8 b gs' fs' gs' fs'  |
%% 30
		a' 4 cs' 8 a' 4 a' 8 gs' gs' ~  |
		gs' 8 fs' 2 e' 8 e' fs'  |
		gs' 4 gs' 8 a' gs' fs' e' fs' ~  |
		fs' 8 e' 2 r8 r cs'  |
		a' 4 a' a' gs'  |
%% 35
		fs' 4. r8 \times 2/3 { fs' 4 e' ds' }  |
		e' 1  |
		R1  |
		\bar "|."
	}

	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
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
