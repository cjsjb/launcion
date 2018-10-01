\context Staff = "violin" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "V."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"
		\key e \major
		r2 \times 2/3 { e'' 4 fs'' gs'' }  |
		a'' 1  |
		b'' 2 \times 2/3 { a'' 4 gs'' fs'' }  |
		e'' 1  |
		R1*16  |
		gs 8 a b cs' ds' e' fs' gs'  |
		a' 1  |
		R1*6  |
		gs 8 a b cs' ds' e' fs' gs'  |
		a' 1  |
	}

>>
