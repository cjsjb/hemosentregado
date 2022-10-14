\context Staff = "track 4" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		R2*4  |
%% 5
		r8 g' 16 g' g' 8 a' 16 g' ~  |
		g' 8 f' e' d'  |
		c' 8 d' c' d' 16 c' ~  |
		c' 2  |
		r8 f' 16 f' f' 8 f' 16 f'  |
%% 10
		e' 8 d' c' d'  |
		e' 2 (  |
		d' 2 )  |
		r8 g' 16 g' g' 8 a' 16 g' ~  |
		g' 8 f' e' d'  |
%% 15
		c' 8 d' c' d' 16 c' ~  |
		c' 2  |
		r8 f' 16 f' f' f' 8 f' 16  |
		e' 8 d' c' d'  |
		e' 4 ( d' )  |
%% 20
		f' 2 ~  |
		f' 4 r8 g'  |
		a' 8 g' e' d' 16 e' ~  |
		e' 4. r16 g'  |
		a' 8 g' 16 f' 4 ~ f' 16 ~  |
%% 25
		f' 4 r  |
		r8 g' 16 g' g' 8 g' 16 g' ~  |
		g' 8 f' e' d'  |
		c' 8 e' c' f' ~  |
		f' 8 d' 4 g' 8  |
%% 30
		a' 8 g' e' d' 16 e' ~  |
		e' 4. r16 g'  |
		a' 8 g' 16 f' 8 f' 8. ~  |
		f' 4 r  |
		r8 g' 16 g' g' 8 g' 16 g' ~  |
%% 35
		g' 8 f' e' d'  |
		c' 8 e' c' f' ~  |
		f' 8 ( d' 4. )  |
		R2  |
		r8 g' 16 g' g' g' 8 a' 16  |
%% 40
		g' 8 f' e' d'  |
		c' 8 d' c' c' ~  |
		c' 2  |
		r8 f' 16 f' f' f' 8 f' 16  |
		e' 8 d' c' d'  |
%% 45
		e' 2 (  |
		d' 2 )  |
		r8 g' 16 g' g' 8 a' 16 g' ~  |
		g' 8 f' e' d'  |
		c' 8 ( d' ) c' d' 16 c' ~  |
%% 50
		c' 2  |
		r8 f' 16 f' f' f' 8 f' 16  |
		e' 16 d' 8 d' 16 c' 8 d'  |
		e' 4 ( d'  |
		f' 2 ) ~  |
%% 55
		f' 4 r8 g'  |
		a' 8 g' e' d' 16 e' ~  |
		e' 4. r16 g'  |
		a' 8 g' 16 f' 4 ~ f' 16 ~  |
		f' 4 r  |
%% 60
		r8 g' 16 g' g' 8 g' 16 g' ~  |
		g' 8 f' e' d'  |
		c' 8 e' c' f' ~  |
		f' 8 d' 4 g' 8  |
		a' 8 g' e' d' 16 e' ~  |
%% 65
		e' 4. r16 g'  |
		a' 8 g' 16 f' 8 f' 8. ~  |
		f' 4 r  |
		r8 g' 16 g' g' 8 g' 16 g' ~  |
		g' 8 f' e' d'  |
%% 70
		c' 8 e' c' f' ~  |
		f' 8 ( d' 4. )  |
		R2  |
		r8 g' 16 g' g' 8 a' 16 g' ~  |
		g' 8 f' e' d'  |
%% 75
		c' 8 d' c' e' 16 e' ~  |
		e' 2  |
		r8 f' 16 f' f' f' 8 f' 16  |
		f' 8 e' f' g'  |
		a' 4 f' ~  |
%% 80
		f' 4 r8 e' 16 ( f'  |
		e' 2 ~  |
		e' 4 ) r  |
		R2  |
		\bar "|."
	}
	\new Lyrics \lyricsto "voz-mezzo" {
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
