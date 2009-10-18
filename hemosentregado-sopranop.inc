        \context Staff = "track 2" \with { \consists Ambitus_engraver } <<
            \set Staff.instrumentName = "Soprano+"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 1" {
                \override Voice.TextScript #'padding = #2.0                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble^8"
                R1*4  |
%% 5
                r4 c''' 8 c''' c''' 4 c''' 8 b'' ~  |
                b'' 4 b'' b'' b''  |
                a'' 4 a'' a'' a'' 8 a'' ~  |
                a'' 1  |
                r4 a'' 8 a'' a'' 4 a'' 8 a''  |
%% 10
                g'' 4 e'' f'' g''  |
                g'' 2 _( c''' 
                % warning: overlong bar truncated here |
                b'' 8 a'' g'' 4 ~ g'' 2 )  |
                r4 c''' 8 c''' c''' 4 c''' 8 b'' ~  |
                b'' 4 b'' b'' b''  |
%% 15
                a'' 4 a'' a'' a'' 8 a'' ~  |
                a'' 1  |
                r4 a'' 8 a'' a'' a'' 4 \stemDown a'' 8 \stemNeutral  |
                b'' 4 b'' b'' b''  |
                c''' 2 b''  |
%% 20
                c''' 1 ~  |
                c''' 2 r4 b''  |
                c''' 4 b'' a'' g'' 8 a'' ~  |
                a'' 2. r8 b''  |
                c''' 4 b'' 8 a'' 2 ~ a'' 8 ~  |
%% 25
                a'' 2 r  |
                r4 b'' 8 b'' b'' 4 b'' 8 b'' ~  |
                b'' 4 a'' g'' f''  |
                e'' 4 c''' c''' c''' ~  |
                c''' 4 b'' 2 b'' 4  |
%% 30
                c''' 4 b'' a'' g'' 8 a'' ~  |
                a'' 2. r8 b''  |
                c''' 4 b'' 8 a'' 4 a'' 4. ~  |
                a'' 2 r  |
                r4 b'' 8 b'' b'' 4 b'' 8 b'' ~  |
%% 35
                b'' 4 a'' g'' f''  |
                e'' 4 c''' c''' c''' ~  |
                c''' 4 b'' 2.  |
                R1  |
                r4 c''' 8 c''' c''' c''' 4 c''' 8  |
%% 40
                b'' 4 b'' b'' b''  |
                a'' 4 a'' a'' a'' ~  |
                a'' 1  |
                r4 a'' 8 a'' a'' a'' 4 a'' 8  |
                g'' 4 e'' f'' g''  |
%% 45
                g'' 2 _( c''' 
                % warning: overlong bar truncated here |
                b'' 8 a'' g'' 4 ~ g'' 2 )  |
                r4 c''' 8 c''' c''' 4 c''' 8 b'' ~  |
                b'' 4 b'' b'' b''  |
                a'' 4 a'' a'' a'' 8 a'' ~  |
%% 50
                a'' 1  |
                r4 a'' 8 a'' a'' a'' 4 a'' 8  |
                b'' 8 b'' 4 b'' 8 b'' 4 b''  |
                c''' 2 \( b'' 
                % warning: overlong bar truncated here |
                c''' 1 \) ~  |
%% 55
                c''' 2 r4 b''  |
                c''' 4 b'' a'' g'' 8 a'' ~  |
                a'' 2. r8 b''  |
                c''' 4 b'' 8 a'' 2 ~ a'' 8 ~  |
                a'' 2 r  |
%% 60
                r4 b'' 8 b'' b'' 4 b'' 8 b'' ~  |
                b'' 4 a'' g'' f''  |
                e'' 4 c''' c''' c''' ~  |
                c''' 4 b'' 2 b'' 4  |
                c''' 4 b'' a'' g'' 8 a'' ~  |
%% 65
                a'' 2. r8 b''  |
                c''' 4 b'' 8 a'' 4 a'' 4. ~  |
                a'' 2 r  |
                r4 b'' 8 b'' b'' 4 b'' 8 b'' ~  |
                b'' 4 a'' g'' f''  |
%% 70
                e'' 4 c''' c''' c''' ~  |
                c''' 4 b'' 2.  |
                R1  |
                r4 c''' 8 c''' c''' 4 c''' 8 b'' ~  |
                b'' 4 b'' b'' b''  |
%% 75
                a'' 4 a'' a'' a'' 8 g'' ~  |
                g'' 1  |
                r4 a'' 8 a'' a'' a'' 4 a'' 8  |
                b'' 4 b'' b'' b''  |
                c''' 2 a'' ~  |
%% 80
                a'' 2 r4 b''  |
                c''' 1 ~  |
                c''' 2 r  |
                R1  |
                \bar "|."
            } % Voice
            \lyricsto "voice 1" \new Lyrics \lyricmode {
                 "He-" "mos" "en-" "tre-" "ga-" "-do" "nues-" "tras" "vi-" "das" "al" "Se-" "ñor," "no_hay" "ma-" "yor" "ben-" "di-" "-ción" "que" "ser" "de" "él." "He-" "mos" "en-" "tre-" "ga-" "-do" "nues-" "tras" "vi-" "das" "al" "Se-" "ñor," "y_él" "a-" "ho-" "ra" "nos" "da" "su" "vi-" "da_e-" "-te-" "er-" "na." "Ben-" "-di-" "to" "seas," "Se-" "ñor," "por" "es-" "te" "pan," "fru-" "to" "de" "la" "tie-" "-rra_y" "del" "tra-" "-ba-" "jo" "del" "hom-" "-bre." "Ben-" "-di-" "to" "seas," "Se-" "ñor," "por" "es-" "te" "vi-" "no," "que_he-" "mos" "re-" "ci-" "bi-" "-do" "de" "tu_a-" "-mor" "y" "bon-" "da-" "-ad." "Y" "a-" "ho-" "ra," "Se-" "-ñor," "te" "pre-" "sen-" "-ta-" "mos" "el" "pan" "y" "el" "vi-" "no" "que" "tú" "con-" "ver-" "ti-" "-rás" "en" "el" "cuer-" "po_y" "san-" "-gre" "de" "tu" "hi-" "i-" "jo" "Je-" "sús," "pan" "de" "vi-" "da_y" "be-" "-bi-" "da" "de" "sal-" "va-" "-ció-" "ó-" "-ón." "Ben-" "-di-" "to" "seas," "Se-" "ñor," "por" "es-" "te" "pan," "fru-" "to" "de" "la" "tie-" "-rra_y" "del" "tra-" "-ba-" "jo" "del" "hom-" "-bre." "Ben-" "-di-" "to" "seas," "Se-" "ñor," "por" "es-" "te" "vi-" "no" "que_he-" "mos" "re-" "ci-" "bi-" "-do" "de" "tu_a-" "-mor" "y" "bon-" "da-" "-ad." "He-" "mos" "en-" "tre-" "ga-" "-do" "nues-" "tras" "vi-" "das" "al" "Se-" "ñor," "y_él" "a-" "ho-" "ra" "nos" "da" "su" "vi-" "da_e-" "-ter-" "na" _ _ 
             } % Lyrics
        >> % Staff
