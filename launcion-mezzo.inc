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
		\key d \major
		R1*4  |
%% 5
		r2 \times 2/3 { d' 4 e' fs' }  |
		b 2 b  |
		a 2 \times 2/3 { a 4 a a }  |
		cs' 2 cs'  |
		b 2 \times 2/3 { b 4 b b }  |
%% 10
		d' 2. d' 4  |
		d' 4. cs' b 4  |
		a 1  |
		r2 \times 2/3 { d' 4 e' fs' }  |
		b 2 b  |
%% 15
		a 2 \times 2/3 { a 4 a a }  |
		cs' 2 cs'  |
		b 2 \times 2/3 { b 4 b b }  |
		d' 2. d' 4  |
		d' 4. cs' b 4  |
%% 20
		a 1  |
		r4. a 8 a a a a  |
		b 4 b 8 b 4 b 8 b cs' ~  |
		cs' 8 cs' 2 cs' 8 cs' cs'  |
		cs' 4 cs' 8 cs' cs' cs' cs' d' ~  |
%% 25
		d' 8 d' 2 r8 r d'  |
		d' 4 d' d' d'  |
		d' 2 \times 2/3 { cs' 4 b cs' }  |
		a 2. ( b 4
		% warning: overlong bar truncated here |
		a 4 ) r8 a a a a a  |
%% 30
		b 4 b 8 b 4 b 8 b cs' ~  |
		cs' 8 cs' 2 cs' 8 cs' cs'  |
		cs' 4 cs' 8 cs' cs' cs' cs' d' ~  |
		d' 8 d' 2 r8 r d'  |
		d' 4 d' d' d'  |
%% 35
		cs' 4. r8 \times 2/3 { cs' 4 b cs' }  |
		a 1  |
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
