\context Staff = "track 5" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voice 4" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		R2*4  |
%% 5
		r8 c' 16 c' c' 8 c' 16 b ~  |
		b 8 b b b  |
		a 8 a a a 16 a ~  |
		a 2  |
		r8 a 16 a a 8 a 16 a  |
%% 10
		g 8 e f g  |
		g 2 ~  |
		g 2  |
		r8 c' 16 c' c' 8 c' 16 b ~  |
		b 8 b b b  |
%% 15
		a 8 a a a 16 a ~  |
		a 2  |
		r8 a 16 a a a 8 a 16  |
		g 8 f e f  |
		g 4 ( f )  |
%% 20
		a 2 ~  |
		a 4 r8 d'  |
		e' 8 d' c' b 16 c' ~  |
		c' 4. r16 d'  |
		e' 8 d' 16 c' 4 ~ c' 16 ~  |
%% 25
		c' 4 r  |
		r8 d' 16 d' d' 8 d' 16 d' ~  |
		d' 8 c' b a  |
		g 8 c' c' c' ~  |
		c' 8 b 4 d' 8  |
%% 30
		e' 8 d' c' b 16 c' ~  |
		c' 4. r16 d'  |
		e' 8 d' 16 c' 8 c' 8. ~  |
		c' 4 r  |
		r8 d' 16 d' d' 8 d' 16 d' ~  |
%% 35
		d' 8 c' b a  |
		g 8 c' c' c' ~  |
		c' 8 ( b 4. )  |
		R2  |
		r8 c' 16 c' c' c' 8 c' 16  |
%% 40
		b 8 b b b  |
		a 8 a a a ~  |
		a 2  |
		r8 a 16 a a a 8 a 16  |
		g 8 e f g  |
%% 45
		g 2 ~  |
		g 2  |
		r8 c' 16 c' c' 8 c' 16 b ~  |
		b 8 b b b  |
		a 8 ( a ) a a 16 a ~  |
%% 50
		a 2  |
		r8 a 16 a a a 8 a 16  |
		g 16 f 8 f 16 e 8 f  |
		g 4 ( f  |
		a 2 ) ~  |
%% 55
		a 4 r8 d'  |
		e' 8 d' c' b 16 c' ~  |
		c' 4. r16 d'  |
		e' 8 d' 16 c' 4 ~ c' 16 ~  |
		c' 4 r  |
%% 60
		r8 d' 16 d' d' 8 d' 16 d' ~  |
		d' 8 c' b a  |
		g 8 c' c' c' ~  |
		c' 8 b 4 d' 8  |
		e' 8 d' c' b 16 c' ~  |
%% 65
		c' 4. r16 d'  |
		e' 8 d' 16 c' 8 c' 8. ~  |
		c' 4 r  |
		r8 d' 16 d' d' 8 d' 16 d' ~  |
		d' 8 c' b a  |
%% 70
		g 8 c' c' c' ~  |
		c' 8 ( b 4. )  |
		R2  |
		r8 c' 16 c' c' 8 c' 16 b ~  |
		b 8 b b b  |
%% 75
		a 8 a a a 16 g ~  |
		g 2  |
		r8 a 16 a a a 8 a 16  |
		b 8 b b b  |
		c' 4 a ~  |
%% 80
		a 4 r8 b (  |
		c' 2 ~  |
		c' 4 ) r  |
		R2  |
		\bar "|."
	}
	\lyricsto "voice 4" \new Lyrics \lyricmode {
		"He" -- "mos" "en" -- "tre" -- "ga" __ "do" "nues" -- "tras" "vi" -- "das" "al" "Se" -- "ñor," __
		"no hay" "ma" -- "yor" "ben" -- "di" -- "ción" "que" "ser" "de" "él." __
		"He" -- "mos" "en" -- "tre" -- "ga" __ "do" "nues" -- "tras" "vi" -- "das" "al" "Se" -- "ñor," __
		"y él" "a" -- "ho" -- "ra" "nos" "da" "su" "vi" -- "da e" -- "ter" __ "na." __

		"Ben" -- "di" -- "to" "seas," "Se" -- "ñor," __ "por" "es" -- "te" "pan," __
		"fru" -- "to" "de" "la" "tie" __ "rra y" "del" "tra" -- "ba" -- "jo" "del" "hom" __ "bre."
		"Ben" -- "di" -- "to" "seas," "Se" -- "ñor," __ "por" "es" -- "te" "vi" -- "no," __
		"que he" -- "mos" "re" -- "ci" -- "bi" __ "do" "de" "tu a" -- "mor" "y" "bon" -- "dad." __

		"Y" "a" -- "ho" -- "ra," "Se" -- "ñor," "te" "pre" -- "sen" -- "ta" -- "mos" "el" "pan" __
		"y" "el" "vi" -- "no" "que" "tú" "con" -- "ver" -- "ti" -- "rás" __
		"en" "el" "cuer" -- "po y" "san" -- "gre" "de" "tu" "hi" __ "jo" "Je" -- "sús," __
		"pan" "de" "vi" -- "da y" "be" -- "bi" -- "da" "de" "sal" -- "va" -- "ción." __

		"Ben" -- "di" -- "to" "seas," "Se" -- "ñor," __ "por" "es" -- "te" "pan," __
		"fru" -- "to" "de" "la" "tie" __ "rra y" "del" "tra" -- "ba" -- "jo" "del" "hom" __ "bre."
		"Ben" -- "di" -- "to" "seas," "Se" -- "ñor," __ "por" "es" -- "te" "vi" -- "no," __
		"que he" -- "mos" "re" -- "ci" -- "bi" __ "do" "de" "tu a" -- "mor" "y" "bon" -- "dad." __

		"He" -- "mos" "en" -- "tre" -- "ga" __ "do" "nues" -- "tras" "vi" -- "das" "al" "Se" -- "ñor," __
		"y él" "a" -- "ho" -- "ra" "nos" "da" "su" "vi" -- "da e" -- "ter" -- "na." __ "Ah." __
	 }
>>
