\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4

		\clef "treble_8"
		\key d \major
		R1*4  |
%% 5
		r2 \times 2/3 { d 4 e fs }  |
		b, 2 g  |
		e 2 \times 2/3 { cs 4 d e }  |
		a, 2 e  |
		d 2 \times 2/3 { b, 4 cs d }  |
%% 10
		g, 2. d 4  |
		d 4. cs b, 4  |
		a, 1  |
		r2 \times 2/3 { d 4 e fs }  |
		g 1 (  |
%% 15
		e 2. ) r4  |
		fs 2 fs  |
		fs 2 \times 2/3 { fs 4 fs fs }  |
		g 2. g 4  |
		g 4. fs e 4  |
%% 20
		d 1  |
		r4. a, 8 fs e fs e  |
		g 1  |
		a 2. r4  |
		a 1 (
		% warning: overlong bar truncated here |
%% 25
		fs 8 ~ fs 2 ) r 8 r b,  |
		g 4 g g fs  |
		e 2 \times 2/3 { e 4 d e }  |
		fs 2. ( g 4
		% warning: overlong bar truncated here |
		a 2. ) r4  |
%% 30
		b 1  |
		a 2. r4  |
		a 1 (
		% warning: overlong bar truncated here |
		fs 8 ~ fs 2 ) r 8 r b,  |
		g 4 g g fs  |
%% 35
		e 4. r8 \times 2/3 { e 4 d cs }  |
		d 1  |
		R1  |
		\bar "|."
	}

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
		Hay u -- "na un" -- ción a -- quí
		ca -- yen -- do so -- bre mí,
		lim -- pián -- do -- me,
		cam -- bian -- do mi ser.

		Hay u -- "na un" -- ción __
		so -- bre mí,
		lim -- pián -- do -- me,
		cam -- bian -- do mi ser.

		"Mi es" -- pí -- ri -- "tu y" mi al -- "ma..."
		"ah..." __
		Mi vi -- da nun -- ca más se -- rá i -- gual. __

		"...Al" -- "ma..."
		"ah..." __
		Mi vi -- da nun -- ca más se -- rá i -- gual.
	}
>>
