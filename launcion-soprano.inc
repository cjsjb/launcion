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
		\key d \major
		R1*4  |
%% 5
		r2 \times 2/3 { d' 4 e' fs' }  |
		b 2 g'  |
		e' 2 \times 2/3 { cs' 4 d' e' }  |
		a 2 e'  |
		d' 2 \times 2/3 { b 4 cs' d' }  |
%% 10
		g 2. d' 4  |
		d' 4. cs' b 4  |
		a 1  |
		r2 \times 2/3 { d' 4 e' fs' }  |
		b 2 g'  |
%% 15
		e' 2 \times 2/3 { cs' 4 d' e' }  |
		a 2 e'  |
		d' 2 \times 2/3 { b 4 cs' d' }  |
		g 2. d' 4  |
		d' 4. cs' b 4  |
%% 20
		a 1  |
		r4. a 8 fs' e' fs' e'  |
		g' 4 b 8 g' 4 g' 8 fs' fs' ~  |
		fs' 8 e' 2 d' 8 d' e'  |
		fs' 4 fs' 8 g' fs' e' d' e' ~  |
%% 25
		e' 8 d' 2 r8 r b  |
		g' 4 g' g' fs'  |
		e' 2 \times 2/3 { e' 4 d' e' }  |
		fs' 1 ~  |
		fs' 4 r8 a fs' e' fs' e'  |
%% 30
		g' 4 b 8 g' 4 g' 8 fs' fs' ~  |
		fs' 8 e' 2 d' 8 d' e'  |
		fs' 4 fs' 8 g' fs' e' d' e' ~  |
		e' 8 d' 2 r8 r b  |
		g' 4 g' g' fs'  |
%% 35
		e' 4. r8 \times 2/3 { e' 4 d' cs' }  |
		d' 1  |
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
