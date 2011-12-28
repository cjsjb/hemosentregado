\context Staff = "track 2" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano II"
	\set Staff.shortInstrumentName = "S.2"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voice 1" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		R2*4  |
%% 5
		r8 c'' 16 c'' c'' 8 c'' 16 b' ~  |
		b' 8 b' b' b'  |
		a' 8 a' a' a' 16 a' ~  |
		a' 2  |
		r8 a' 16 a' a' 8 a' 16 a'  |
%% 10
		g' 8 e' f' g'  |
		g' 4 ( c''
		% warning: overlong bar truncated here |
		b' 16 a' g' 8 ~ g' 4 )  |
		r8 c'' 16 c'' c'' 8 c'' 16 b' ~  |
		b' 8 b' b' b'  |
%% 15
		a' 8 a' a' a' 16 a' ~  |
		a' 2  |
		r8 a' 16 a' a' a' 8 a' 16  |
		b' 8 b' b' b'  |
		c'' 4 ( b' )  |
%% 20
		c'' 2 ~  |
		c'' 4 r8 b'  |
		c'' 8 b' a' g' 16 a' ~  |
		a' 4. r16 b'  |
		c'' 8 b' 16 a' 4 ~ a' 16 ~  |
%% 25
		a' 4 r  |
		r8 b' 16 b' b' 8 b' 16 b' ~  |
		b' 8 a' g' f'  |
		e' 8 c'' c'' c'' ~  |
		c'' 8 b' 4 b' 8  |
%% 30
		c'' 8 b' a' g' 16 a' ~  |
		a' 4. r16 b'  |
		c'' 8 b' 16 a' 8 a' 8. ~  |
		a' 4 r  |
		r8 b' 16 b' b' 8 b' 16 b' ~  |
%% 35
		b' 8 a' g' f'  |
		e' 8 c'' c'' c'' ~  |
		c'' 8 ( b' 4. )  |
		R2  |
		r8 c'' 16 c'' c'' c'' 8 c'' 16  |
%% 40
		b' 8 b' b' b'  |
		a' 8 a' a' a' ~  |
		a' 2  |
		r8 a' 16 a' a' a' 8 a' 16  |
		g' 8 e' f' g'  |
%% 45
		g' 4 ( c''
		% warning: overlong bar truncated here |
		b' 16 a' g' 8 ~ g' 4 )  |
		r8 c'' 16 c'' c'' 8 c'' 16 b' ~  |
		b' 8 b' b' b'  |
		a' 8 ( a' ) a' a' 16 a' ~  |
%% 50
		a' 2  |
		r8 a' 16 a' a' a' 8 a' 16  |
		b' 16 b' 8 b' 16 b' 8 b'  |
		c'' 4 ( b'
		% warning: overlong bar truncated here |
		c'' 2 ) ~  |
%% 55
		c'' 4 r8 b'  |
		c'' 8 b' a' g' 16 a' ~  |
		a' 4. r16 b'  |
		c'' 8 b' 16 a' 4 ~ a' 16 ~  |
		a' 4 r  |
%% 60
		r8 b' 16 b' b' 8 b' 16 b' ~  |
		b' 8 a' g' f'  |
		e' 8 c'' c'' c'' ~  |
		c'' 8 b' 4 b' 8  |
		c'' 8 b' a' g' 16 a' ~  |
%% 65
		a' 4. r16 b'  |
		c'' 8 b' 16 a' 8 a' 8. ~  |
		a' 4 r  |
		r8 b' 16 b' b' 8 b' 16 b' ~  |
		b' 8 a' g' f'  |
%% 70
		e' 8 c'' c'' c'' ~  |
		c'' 8 ( b' 4. )  |
		R2  |
		r8 c'' 16 c'' c'' 8 c'' 16 b' ~  |
		b' 8 b' b' b'  |
%% 75
		a' 8 a' a' a' 16 g' ~  |
		g' 2  |
		r8 a' 16 a' a' a' 8 a' 16  |
		b' 8 b' b' b'  |
		c'' 4 a' ~  |
%% 80
		a' 4 r8 b'  |
		c'' 2 ~  |
		c'' 4 r  |
		R2  |
		\bar "|."
	} % Voice
	\lyricsto "voice 1" \new Lyrics \lyricmode {
		"He" -- "mos" "en" -- "tre" -- "ga" -- "do" "nues" -- "tras" "vi" -- "das" "al" "Se" -- "ñor,"
		"no hay" "ma" -- "yor" "ben" -- "di" -- "ción" "que" "ser" "de" "él." __
		"He" -- "mos" "en" -- "tre" -- "ga" -- "do" "nues" -- "tras" "vi" -- "das" "al" "Se" -- "ñor,"
		"y él" "a" -- "ho" -- "ra" "nos" "da" "su" "vi" -- "da e" -- "ter" -- "na."

		"Ben" -- "di" -- "to" "seas," "Se" -- "ñor," "por" "es" -- "te" "pan,"
		"fru" -- "to" "de" "la" "tie" -- "rra y" "del" "tra" -- "ba" -- "jo" "del" "hom" -- "bre."
		"Ben" -- "di" -- "to" "seas," "Se" -- "ñor," "por" "es" -- "te" "vi" -- "no,"
		"que he" -- "mos" "re" -- "ci" -- "bi" -- "do" "de" "tu a" -- "mor" "y" "bon" -- "dad." __

		"Y" "a" -- "ho" -- "ra," "Se" -- "ñor," "te" "pre" -- "sen" -- "ta" -- "mos" "el" "pan"
		"y" "el" "vi" -- "no" "que" "tú" "con" -- "ver" -- "ti" -- "rás" __
		"en" "el" "cuer" -- "po y" "san" -- "gre" "de" "tu" "hi" __ "jo" "Je" -- "sús,"
		"pan" "de" "vi" -- "da y" "be" -- "bi" -- "da" "de" "sal" -- "va" -- "ción." __

		"Ben" -- "di" -- "to" "seas," "Se" -- "ñor," "por" "es" -- "te" "pan,"
		"fru" -- "to" "de" "la" "tie" -- "rra y" "del" "tra" -- "ba" -- "jo" "del" "hom" -- "bre."
		"Ben" -- "di" -- "to" "seas," "Se" -- "ñor,"	"por" "es" -- "te" "vi" -- "no"
		"que he" -- "mos" "re" -- "ci" -- "bi" -- "do" "de" "tu a" -- "mor" "y" "bon" -- "dad." __

		"He" -- "mos" "en" -- "tre" -- "ga" -- "do" "nues" -- "tras" "vi" -- "das" "al" "Se" -- "ñor,"
		"y él" "a" -- "ho" -- "ra" "nos" "da" "su" "vi" -- "da e" -- "ter" -- "na." "Ah." __
	 }
>>
