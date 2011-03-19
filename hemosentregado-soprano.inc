        \context Staff = "track 3" \with { \consists Ambitus_engraver } <<
            \set Staff.instrumentName = "Soprano I"
            \set Staff.shortInstrumentName = "S.1"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 2" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble"
	\transpose c'' c' {
                R1*2  |
                r8 g'' 16 g'' g'' 8 a'' 16 g'' ~ g'' 8 f'' e'' d''  |
                c'' 8 d'' c'' d'' 16 c'' ~ c'' 2  |
%% 5
                r8 f'' 16 f'' f'' 8 f'' 16 e'' d'' 8 b' c'' d''  |
                e'' 2 ( d'' )  |
                r8 g'' 16 g'' g'' 8 a'' 16 g'' ~ g'' 8 f'' e'' d''  |
                c'' 8 d'' c'' d'' 16 c'' ~ c'' 2  |
                r8 f'' 16 f'' f'' f'' 8 f'' 16 e'' 8 d'' c'' d''  |
%% 10
                e'' 4 ( g'' ) a'' 2 ~  |
                a'' 4 r8 b'' c''' b'' a'' g'' 16 a'' ~  |
                a'' 4. r16 b'' c''' 8 b'' 16 a'' 4 ~ a'' 16 ~  |
                a'' 4 r r8 b'' 16 b'' b'' 8 b'' 16 b'' ~  |
                b'' 8 a'' g'' f'' e'' g'' e'' a'' ~  |
%% 15
                a'' 8 g'' 4 b'' 8 c''' b'' a'' g'' 16 a'' ~  |
                a'' 4. r16 b'' c''' 8 b'' 16 a'' 8 a'' 8. ~  |
                a'' 4 r r8 b'' 16 b'' b'' 8 b'' 16 b'' ~  |
                b'' 8 a'' g'' f'' e'' g'' e'' a'' ~  |
                a'' 8 ( g'' 4. ) r2  |
%% 20
                r8 g'' 16 g'' g'' g'' 8 a'' 16 g'' 8 f'' e'' d''  |
                c'' 8 d'' c'' c'' ~ c'' 2  |
                r8 f'' 16 f'' f'' f'' 8 f'' 16 e'' 8 d'' c'' d''  |
                e'' 2 ( d'' )  |
                r8 g'' 16 g'' g'' 8 a'' 16 g'' ~ g'' 8 f'' e'' d''  |
%% 25
                c'' 8 ( d'' ) c'' d'' 16 c'' ~ c'' 2  |
                r8 f'' 16 f'' f'' f'' 8 f'' 16 e'' d'' 8 d'' 16 c'' 8 d''  |
                e'' 4 ( g'' a'' 2 ) ~  |
                a'' 4 r8 b'' c''' b'' a'' g'' 16 a'' ~  |
                a'' 4. r16 b'' c''' 8 b'' 16 a'' 4 ~ a'' 16 ~  |
%% 30
                a'' 4 r r8 b'' 16 b'' b'' 8 b'' 16 b'' ~  |
                b'' 8 a'' g'' f'' e'' g'' e'' a'' ~  |
                a'' 8 g'' 4 b'' 8 c''' b'' a'' g'' 16 a'' ~  |
                a'' 4. r16 b'' c''' 8 b'' 16 a'' 8 a'' 8. ~  |
                a'' 4 r r8 b'' 16 b'' b'' 8 b'' 16 b'' ~  |
%% 35
                b'' 8 a'' g'' f'' e'' g'' e'' a'' ~  |
                a'' 8 ( g'' 4. ) r2  |
                r8 g'' 16 g'' g'' 8 a'' 16 g'' ~ g'' 8 a'' b'' d'''  |
                c''' 8 b'' a'' e'' 16 g'' ~ g'' 2  |
                r8 a'' 16 a'' a'' a'' 8 a'' 16 a'' 8 g'' a'' b''  |
%% 40
                c''' 4 a'' ~ a'' r8 g'' 16 a''  |
                g'' 2 ~ g'' 4 r  |
                R2  |
                \bar "|."
	}
            } % Voice
            \lyricsto "voice 2" \new Lyrics \lyricmode {
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
