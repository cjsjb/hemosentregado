        \context Staff = "track 4" \with { \consists Ambitus_engraver } <<
            \set Staff.instrumentName = "Mezzo"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 3" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble_8"
	\transpose c'' c' {
                R1*4  |
%% 5
                r4 e'' 8 e'' e'' 4 f'' 8 d'' ~  |
                d'' 4 d'' d'' b'  |
                c'' 4 c'' c'' c'' 8 c'' ~  |
                c'' 1  |
                r4 c'' 8 c'' c'' 4 c'' 8 c''  |
%% 10
                d'' 4 d'' c'' c''  |
                c'' 1  |
                b' 1  |
                r4 e'' 8 e'' e'' 4 f'' 8 d'' ~  |
                d'' 4 d'' d'' b'  |
%% 15
                c'' 4 c'' c'' c'' 8 c'' ~  |
                c'' 1  |
                r4 c'' 8 c'' c'' 4 c'' 8 c''  |
                e'' 4 d'' c'' d''  |
                e'' 2 d''  |
%% 20
                f'' 1 ~  |
                f'' 2 r4 g''  |
                a'' 4 g'' e'' d'' 8 e'' ~  |
                e'' 2. r8 g''  |
                a'' 4 g'' 8 f'' 2 ~ f'' 8 ~  |
%% 25
                f'' 2 r  |
                r4 g'' 8 g'' g'' 4 g'' 8 g'' ~  |
                g'' 4 f'' e'' d''  |
                c'' 4 e'' c'' f'' ~  |
                f'' 4 d'' 2 g'' 4  |
%% 30
                a'' 4 g'' e'' d'' 8 e'' ~  |
                e'' 2. r8 g''  |
                a'' 4 g'' 8 f'' 4 f'' 4. ~  |
                f'' 2 r  |
                r4 g'' 8 g'' g'' 4 g'' 8 g'' ~  |
%% 35
                g'' 4 f'' e'' d''  |
                c'' 4 e'' c'' f'' ~  |
                f'' 4 d'' 2.  |
                R1  |
                r4 e'' 8 e'' \stemDown e'' \stemNeutral e'' 4 f'' 8  |
%% 40
                d'' 4 d'' d'' b'  |
                c'' 4 c'' c'' c'' ~  |
                c'' 1  |
                r4 c'' 8 c'' c'' c'' 4 c'' 8  |
                e'' 4 d'' c'' c''  |
%% 45
                c'' 1  |
                b' 1  |
                r4 e'' 8 e'' e'' 4 f'' 8 d'' ~  |
                d'' 4 d'' d'' b'  |
                c'' 4 c'' c'' c'' 8 c'' ~  |
%% 50
                c'' 1  |
                r4 c'' 8 c'' c'' c'' 4 c'' 8  |
                e'' 8 \stemDown d'' 4 \stemNeutral d'' 8 c'' 4 d''  |
                e'' 2 d''  |
                f'' 1 ~  |
%% 55
                f'' 2 r4 g''  |
                a'' 4 g'' e'' d'' 8 e'' ~  |
                e'' 2. r8 g''  |
                a'' 4 g'' 8 f'' 2 ~ f'' 8 ~  |
                f'' 2 r  |
%% 60
                r4 g'' 8 g'' g'' 4 g'' 8 g'' ~  |
                g'' 4 f'' e'' d''  |
                c'' 4 e'' c'' f'' ~  |
                f'' 4 d'' 2 g'' 4  |
                a'' 4 g'' e'' d'' 8 e'' ~  |
%% 65
                e'' 2. r8 g''  |
                a'' 4 g'' 8 f'' 4 f'' 4. ~  |
                f'' 2 r  |
                r4 g'' 8 g'' g'' 4 g'' 8 g'' ~  |
                g'' 4 f'' e'' d''  |
%% 70
                c'' 4 e'' c'' f'' ~  |
                f'' 4 d'' 2.  |
                R1  |
                r4 g'' 8 g'' g'' 4 a'' 8 g'' ~  |
                g'' 4 f'' e'' d''  |
%% 75
                c'' 4 d'' c'' e'' 8 e'' ~  |
                e'' 1  |
                r4 f'' 8 f'' f'' f'' 4 \stemDown f'' 8 \stemNeutral  |
                f'' 4 e'' f'' g''  |
                a'' 2 f'' ~  |
%% 80
                f'' 2 r4 e'' 8 f''  |
                e'' 1 ~  |
                e'' 2 r  |
                R1  |
                \bar "|."
	}
            } % Voice
            \lyricsto "voice 3" \new Lyrics \lyricmode {
                 "He-" "mos" "en-" "tre-" "ga-" "-do" "nues-" "tras" "vi-" "das" "al" "Se-" "ñor," "no_hay" "ma-" "yor" "ben-" "di-" "-ción" "que" "ser" "de" "é-" "-él." "He-" "mos" "en-" "tre-" "ga-" "-do" "nues-" "tras" "vi-" "das" "al" "Se-" "ñor," "y_él" "a-" "ho-" "ra" "nos" "da" "su" "vi-" "da_e-" "-te-" "er-" "na." "Ben-" "-di-" "to" "seas," "Se-" "ñor," "por" "es-" "te" "pan," "fru-" "to" "de" "la" "tie-" "-rra_y" "del" "tra-" "-ba-" "jo" "del" "hom-" "-bre." "Ben-" "-di-" "to" "seas," "Se-" "ñor," "por" "es-" "te" "vi-" "no," "que_he-" "mos" "re-" "ci-" "bi-" "-do" "de" "tu_a-" "-mor" "y" "bon-" "da-" "-ad." "Y" "a-" "ho-" "ra," "Se-" "-ñor," "te" "pre-" "sen-" "-ta-" "mos" "el" "pan" "y" "el" "vi-" "no" "que" "tú" "con-" "ver-" "ti-" "-rá-" "-ás" "en" "el" "cuer-" "po_y" "san-" "-gre" "de" "tu" "hi-" "i-" "jo" "Je-" "sús," "pan" "de" "vi-" "da_y" "be-" "-bi-" "da" "de" "sal-" "va-" "-ció-" "ó-" "-ón." "Ben-" "-di-" "to" "seas," "Se-" "ñor," "por" "es-" "te" "pan," "fru-" "to" "de" "la" "tie-" "-rra_y" "del" "tra-" "-ba-" "jo" "del" "hom-" "-bre." "Ben-" "-di-" "to" "seas," "Se-" "ñor," "por" "es-" "te" "vi-" "no" "que_he-" "mos" "re-" "ci-" "bi-" "-do" "de" "tu_a-" "-mor" "y" "bon-" "da-" "-ad." "He-" "mos" "en-" "tre-" "ga-" "-do" "nues-" "tras" "vi-" "das" "al" "Se-" "ñor," "y_él" "a-" "ho-" "ra" "nos" "da" "su" "vi-" "da_e-" "-ter-" "na" _ _ _ 
             } % Lyrics
        >> % Staff
