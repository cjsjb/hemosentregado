        \context Staff = "track 5" \with { \consists Ambitus_engraver } <<
            \set Staff.instrumentName = "Tenor"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 4" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble_8"
	\transpose c'' c {
                R1*4  |
%% 5
                r4 g'' 8 g'' g'' 4 a'' 8 g'' ~  |
                g'' 4 f'' e'' d''  |
                c'' 4 d'' c'' d'' 8 c'' ~  |
                c'' 1  |
                r4 a'' 8 a'' a'' 4 a'' 8 a''  |
%% 10
                g'' 4 g'' f'' g''  |
                g'' 1 ~  |
                g'' 1  |
                r4 g'' 8 g'' g'' 4 a'' 8 g'' ~  |
                g'' 4 f'' e'' d''  |
%% 15
                c'' 4 d'' c'' d'' 8 c'' ~  |
                c'' 1  |
                r4 a'' 8 a'' a'' a'' 4 a'' 8  |
                g'' 4 g'' f'' g''  |
                g'' 2 g''  |
%% 20
                a'' 1 ~  |
                a'' 2 r4 d'''  |
                e''' 4 d''' c''' b'' 8 c''' ~  |
                c''' 2. r8 d'''  |
                e''' 4 d''' 8 c''' 2 ~ c''' 8 ~  |
%% 25
                c''' 2 r  |
                r4 d''' 8 d''' d''' 4 d''' 8 d''' ~  |
                d''' 4 c''' b'' a''  |
                g'' 4 c''' c''' c''' ~  |
                c''' 4 b'' 2 d''' 4  |
%% 30
                e''' 4 d''' c''' b'' 8 c''' ~  |
                c''' 2. r8 d'''  |
                e''' 4 d''' 8 c''' 4 c''' 4. ~  |
                c''' 2 r  |
                r4 d''' 8 d''' d''' 4 d''' 8 d''' ~  |
%% 35
                d''' 4 c''' b'' a''  |
                g'' 4 c''' c''' c''' ~  |
                c''' 4 b'' 2.  |
                R1  |
                r4 g'' 8 g'' \stemDown g'' \stemNeutral g'' 4 a'' 8  |
%% 40
                g'' 4 f'' e'' d''  |
                c'' 4 d'' c'' c'' ~  |
                c'' 1  |
                r4 a'' 8 a'' a'' a'' 4 a'' 8  |
                g'' 4 g'' f'' g''  |
%% 45
                g'' 1 \( 
                % warning: overlong bar truncated here |
                f'' 1 \)  |
                r4 g'' 8 g'' g'' 4 a'' 8 g'' ~  |
                g'' 4 f'' e'' d''  |
                c'' 4 d'' c'' d'' 8 c'' ~  |
%% 50
                c'' 1  |
                r4 a'' 8 a'' a'' a'' 4 a'' 8  |
                g'' 8 g'' 4 g'' 8 f'' 4 g''  |
                g'' 2 \( g'' 
                % warning: overlong bar truncated here |
                a'' 1 \) ~  |
%% 55
                a'' 2 r4 d'''  |
                e''' 4 d''' c''' b'' 8 c''' ~  |
                c''' 2. r8 d'''  |
                e''' 4 d''' 8 c''' 2 ~ c''' 8 ~  |
                c''' 2 r  |
%% 60
                r4 d''' 8 d''' d''' 4 d''' 8 d''' ~  |
                d''' 4 c''' b'' a''  |
                g'' 4 c''' c''' c''' ~  |
                c''' 4 b'' 2 d''' 4  |
                e''' 4 d''' c''' b'' 8 c''' ~  |
%% 65
                c''' 2. r8 d'''  |
                e''' 4 d''' 8 c''' 4 c''' 4. ~  |
                c''' 2 r  |
                r4 d''' 8 d''' d''' 4 d''' 8 d''' ~  |
                d''' 4 c''' b'' a''  |
%% 70
                g'' 4 c''' c''' c''' ~  |
                c''' 4 b'' 2.  |
                R1  |
                r4 g'' 8 g'' g'' 4 a'' 8 g'' ~  |
                g'' 4 f'' e'' d''  |
%% 75
                c'' 4 d'' c'' d'' 8 b' ~  |
                b' 1  |
                r4 a'' 8 a'' a'' a'' 4 a'' 8  |
                g'' 4 g'' f'' g''  |
                a'' 2 a'' ~  |
%% 80
                a'' 2 r4 b''  |
                c''' 1 ~  |
                c''' 2 r  |
                R1  |
                \bar "|."
	}
            } % Voice
            \lyricsto "voice 4" \new Lyrics \lyricmode {
                 "He-" "mos" "en-" "tre-" "ga-" "-do" "nues-" "tras" "vi-" "das" "al" "Se-" "ñor," "no_hay" "ma-" "yor" "ben-" "di-" "-ción" "que" "ser" "de" "él." "He-" "mos" "en-" "tre-" "ga-" "-do" "nues-" "tras" "vi-" "das" "al" "Se-" "ñor," "y_él" "a-" "ho-" "ra" "nos" "da" "su" "vi-" "da_e-" "-te-" "er-" "na." "Ben-" "-di-" "to" "seas," "Se-" "ñor," "por" "es-" "te" "pan," "fru-" "to" "de" "la" "tie-" "-rra_y" "del" "tra-" "-ba-" "jo" "del" "hom-" "-bre." "Ben-" "-di-" "to" "seas," "Se-" "ñor," "por" "es-" "te" "vi-" "no," "que_he-" "mos" "re-" "ci-" "bi-" "-do" "de" "tu_a-" "-mor" "y" "bon-" "da-" "-ad." "Y" "a-" "ho-" "ra," "Se-" "-ñor," "te" "pre-" "sen-" "-ta-" "mos" "el" "pan" "y" "el" "vi-" "no" "que" "tú" "con-" "ver-" "ti-" "-rá-" "-ás" "en" "el" "cuer-" "po_y" "san-" "-gre" "de" "tu" "hi-" "i-" "jo" "Je-" "sús," "pan" "de" "vi-" "da_y" "be-" "-bi-" "da" "de" "sal-" "va-" "-ció-" "ó-" "-ón." "Ben-" "-di-" "to" "seas," "Se-" "ñor," "por" "es-" "te" "pan," "fru-" "to" "de" "la" "tie-" "-rra_y" "del" "tra-" "-ba-" "jo" "del" "hom-" "-bre." "Ben-" "-di-" "to" "seas," "Se-" "ñor," "por" "es-" "te" "vi-" "no" "que_he-" "mos" "re-" "ci-" "bi-" "-do" "de" "tu_a-" "-mor" "y" "bon-" "da-" "-ad." "He-" "mos" "en-" "tre-" "ga-" "-do" "nues-" "tras" "vi-" "das" "al" "Se-" "ñor," "y_él" "a-" "ho-" "ra" "nos" "da" "su" "vi-" "da_e-" "-ter-" "na" _ _ 
             } % Lyrics
        >> % Staff
