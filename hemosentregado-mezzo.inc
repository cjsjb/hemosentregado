        \context Staff = "track 4" \with { \consists Ambitus_engraver } <<
            \set Staff.instrumentName = "Mezzosoprano"
            \set Staff.shortInstrumentName = "M."
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 3" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble"
	\transpose c'' c' {
                R1*2  |
                r8 e'' 16 e'' e'' 8 f'' 16 d'' ~ d'' 8 d'' d'' b'  |
                c'' 8 c'' c'' c'' 16 c'' ~ c'' 2  |
%% 5
                r8 c'' 16 c'' c'' 8 c'' 16 c'' d'' 8 d'' c'' c''  |
                c'' 2 ( b' )  |
                r8 e'' 16 e'' e'' 8 f'' 16 d'' ~ d'' 8 d'' d'' b'  |
                c'' 8 c'' c'' c'' 16 c'' ~ c'' 2  |
                r8 c'' 16 c'' c'' 8 c'' 16 c'' e'' 8 d'' c'' d''  |
%% 10
                e'' 4 ( d'' ) f'' 2 ~  |
                f'' 4 r8 g'' a'' g'' e'' d'' 16 e'' ~  |
                e'' 4. r16 g'' a'' 8 g'' 16 f'' 4 ~ f'' 16 ~  |
                f'' 4 r r8 g'' 16 g'' g'' 8 g'' 16 g'' ~  |
                g'' 8 f'' e'' d'' c'' e'' c'' f'' ~  |
%% 15
                f'' 8 d'' 4 g'' 8 a'' g'' e'' d'' 16 e'' ~  |
                e'' 4. r16 g'' a'' 8 g'' 16 f'' 8 f'' 8. ~  |
                f'' 4 r r8 g'' 16 g'' g'' 8 g'' 16 g'' ~  |
                g'' 8 f'' e'' d'' c'' e'' c'' f'' ~  |
                f'' 8 ( d'' 4. ) r2  |
%% 20
                r8 e'' 16 e'' e'' e'' 8 f'' 16 d'' 8 d'' d'' b'  |
                c'' 8 c'' c'' c'' ~ c'' 2  |
                r8 c'' 16 c'' c'' c'' 8 c'' 16 e'' 8 d'' c'' c''  |
                c'' 2 ( b' )  |
                r8 e'' 16 e'' e'' 8 f'' 16 d'' ~ d'' 8 d'' d'' b'  |
%% 25
                c'' 8 ( c'' ) c'' c'' 16 c'' ~ c'' 2  |
                r8 c'' 16 c'' c'' c'' 8 c'' 16 e'' d'' 8 d'' 16 c'' 8 d''  |
                e'' 4 ( d'' f'' 2 ~ )  |
                f'' 4 r8 g'' a'' g'' e'' d'' 16 e'' ~  |
                e'' 4. r16 g'' a'' 8 g'' 16 f'' 4 ~ f'' 16 ~  |
%% 30
                f'' 4 r r8 g'' 16 g'' g'' 8 g'' 16 g'' ~  |
                g'' 8 f'' e'' d'' c'' e'' c'' f'' ~  |
                f'' 8 d'' 4 g'' 8 a'' g'' e'' d'' 16 e'' ~  |
                e'' 4. r16 g'' a'' 8 g'' 16 f'' 8 f'' 8. ~  |
                f'' 4 r r8 g'' 16 g'' g'' 8 g'' 16 g'' ~  |
%% 35
                g'' 8 f'' e'' d'' c'' e'' c'' f'' ~  |
                f'' 8 ( d'' 4. ) r2  |
                r8 g'' 16 g'' g'' 8 a'' 16 g'' ~ g'' 8 f'' e'' d''  |
                c'' 8 d'' c'' e'' 16 e'' ~ e'' 2  |
                r8 f'' 16 f'' f'' f'' 8 f'' 16 f'' 8 e'' f'' g''  |
%% 40
                a'' 4 f'' ~ f'' r8 e'' 16 f''  |
                e'' 2 ~ e'' 4 r  |
                R2  |
                \bar "|."
	}
            } % Voice
            \lyricsto "voice 3" \new Lyrics \lyricmode {
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
