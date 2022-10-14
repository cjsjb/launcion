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
		\key e \major
		R1*4  |
%% 5
		r2 \times 2/3 { e 4 fs gs }  |
		cs 2 a  |
		fs 2 \times 2/3 { ds 4 e fs }  |
		b, 2 fs  |
		e 2 \times 2/3 { cs 4 ds e }  |
%% 10
		a, 2. e 4  |
		e 4. ds cs 4  |
		b, 1  |
		r2 \times 2/3 { e 4 fs gs }  |
		a 1 (
		% warning: overlong bar truncated here |
%% 15
		fs 2. ) r4  |
		gs 2 gs  |
		gs 2 \times 2/3 { gs 4 gs gs }  |
		a 2. a 4  |
		a 4. gs fs 4  |
%% 20
		e 1  |
		r4. b, 8 gs fs gs fs  |
		a 1  |
		b 2. r4  |
		b 1 (
		% warning: overlong bar truncated here |
%% 25
		gs 8 ~ gs 2 ) r8 r cs  |
		a 4 a a gs  |
		fs 2 \times 2/3 { fs 4 e fs }  |
		gs 2. ( a 4
		% warning: overlong bar truncated here |
		b 2. ) r4  |
%% 30
		cs' 1  |
		b 2. r4  |
		b 1 (
		% warning: overlong bar truncated here |
		gs 8 ~ gs 2 ) r8 r cs  |
		a 4 a a gs  |
%% 35
		fs 4. r8 \times 2/3 { fs 4 e ds }  |
		e 1  |
		R1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-tenor" {
		Hay u -- "na un" -- ción a -- quí
		ca -- yen -- do so -- bre mí,
		lim -- pián -- do -- me,
		cam -- bian -- do mi ser.

		Hay u -- "na un" -- "ción..." __
		"...so" -- bre mí,
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
