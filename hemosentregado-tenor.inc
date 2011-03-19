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
	\transpose c'' c {
                R1*2  |
                r8 g'' 16 g'' g'' 8 a'' 16 g'' ~ g'' 8 f'' e'' d''  |
                c'' 8 d'' c'' d'' 16 c'' ~ c'' 2  |
%% 5
                r8 a'' 16 a'' a'' 8 a'' 16 a'' g'' 8 g'' f'' g''  |
                g'' 2 ~ g''  |
                r8 g'' 16 g'' g'' 8 a'' 16 g'' ~ g'' 8 f'' e'' d''  |
                c'' 8 d'' c'' d'' 16 c'' ~ c'' 2  |
                r8 a'' 16 a'' a'' a'' 8 a'' 16 g'' 8 g'' f'' g''  |
%% 10
                g'' 4 ( g'' ) a'' 2 ~  |
                a'' 4 r8 d''' e''' d''' c''' b'' 16 c''' ~  |
                c''' 4. r16 d''' e''' 8 d''' 16 c''' 4 ~ c''' 16 ~  |
                c''' 4 r r8 d''' 16 d''' d''' 8 d''' 16 d''' ~  |
                d''' 8 c''' b'' a'' g'' c''' c''' c''' ~  |
%% 15
                c''' 8 b'' 4 d''' 8 e''' d''' c''' b'' 16 c''' ~  |
                c''' 4. r16 d''' e''' 8 d''' 16 c''' 8 c''' 8. ~  |
                c''' 4 r r8 d''' 16 d''' d''' 8 d''' 16 d''' ~  |
                d''' 8 c''' b'' a'' g'' c''' c''' c''' ~  |
                c''' 8 ( b'' 4. ) r2  |
%% 20
                r8 g'' 16 g'' g'' g'' 8 a'' 16 g'' 8 f'' e'' d''  |
                c'' 8 d'' c'' c'' ~ c'' 2  |
                r8 a'' 16 a'' a'' a'' 8 a'' 16 g'' 8 g'' f'' g''  |
                g'' 2 _( f'' )  |
                r8 g'' 16 g'' g'' 8 a'' 16 g'' ~ g'' 8 f'' e'' d''  |
%% 25
                c'' 8 ( d'' ) c'' d'' 16 c'' ~ c'' 2  |
                r8 a'' 16 a'' a'' a'' 8 a'' 16 g'' g'' 8 g'' 16 f'' 8 g''  |
                g'' 4 _( g'' a'' 2 ) ~  |
                a'' 4 r8 d''' e''' d''' c''' b'' 16 c''' ~  |
                c''' 4. r16 d''' e''' 8 d''' 16 c''' 4 ~ c''' 16 ~  |
%% 30
                c''' 4 r r8 d''' 16 d''' d''' 8 d''' 16 d''' ~  |
                d''' 8 c''' b'' a'' g'' c''' c''' c''' ~  |
                c''' 8 b'' 4 d''' 8 e''' d''' c''' b'' 16 c''' ~  |
                c''' 4. r16 d''' e''' 8 d''' 16 c''' 8 c''' 8. ~  |
                c''' 4 r r8 d''' 16 d''' d''' 8 d''' 16 d''' ~  |
%% 35
                d''' 8 c''' b'' a'' g'' c''' c''' c''' ~  |
                c''' 8 ( b'' 4. ) r2  |
                r8 g'' 16 g'' g'' 8 a'' 16 g'' ~ g'' 8 f'' e'' d''  |
                c'' 8 d'' c'' d'' 16 b' ~ b' 2  |
                r8 a'' 16 a'' a'' a'' 8 a'' 16 g'' 8 g'' f'' g''  |
%% 40
                a'' 4 a'' ~ a'' r8 b''  |
                c''' 2 ~ c''' 4 r  |
                R2  |
                \bar "|."
	}
            } % Voice
            \lyricsto "voice 4" \new Lyrics \lyricmode {
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
             } % Lyrics
        >> % Staff
