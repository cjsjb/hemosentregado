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
                R1*4  |
%% 5
                r4 g'' 8 g'' g'' 4 a'' 8 g'' ~  |
                g'' 4 f'' e'' d''  |
                c'' 4 d'' c'' d'' 8 c'' ~  |
                c'' 1  |
                r4 f'' 8 f'' f'' 4 f'' 8 e''  |
%% 10
                d'' 4 b' c'' d''  |
                e'' 1 \( 
                % warning: overlong bar truncated here |
                d'' 1 \)  |
                r4 g'' 8 g'' g'' 4 a'' 8 g'' ~  |
                g'' 4 f'' e'' d''  |
%% 15
                c'' 4 d'' c'' d'' 8 c'' ~  |
                c'' 1  |
                r4 f'' 8 f'' f'' f'' 4 f'' 8  |
                e'' 4 d'' c'' d''  |
                e'' 2 g''  |
%% 20
                a'' 1 ~  |
                a'' 2 r4 b''  |
                c''' 4 b'' a'' g'' 8 a'' ~  |
                a'' 2. r8 b''  |
                c''' 4 b'' 8 a'' 8 ~ a'' 2 ~  |
%% 25
                a'' 2 r  |
                r4 b'' 8 b'' b'' 4 b'' 8 b'' ~  |
                b'' 4 a'' g'' f''  |
                e'' 4 g'' e'' a'' ~  |
                a'' 4 g'' 2 b'' 4  |
%% 30
                c''' 4 b'' a'' g'' 8 a'' ~  |
                a'' 2. r8 b''  |
                c''' 4 b'' 8 a'' 4 a'' 4. ~  |
                a'' 2 r  |
                r4 b'' 8 b'' b'' 4 b'' 8 b'' ~  |
%% 35
                b'' 4 a'' g'' f''  |
                e'' 4 g'' e'' a'' ~  |
                a'' 4 g'' 2.  |
                R1  |
                r4 g'' 8 g'' g'' g'' 4 a'' 8  |
%% 40
                g'' 4 f'' e'' d''  |
                c'' 4 d'' c'' c'' ~  |
                c'' 1  |
                r4 f'' 8 f'' f'' f'' 4 f'' 8  |
                e'' 4 d'' c'' d''  |
%% 45
                e'' 1 \( 
                % warning: overlong bar truncated here |
                d'' 1 \)  |
                r4 g'' 8 g'' g'' 4 a'' 8 g'' ~  |
                g'' 4 f'' e'' d''  |
                c'' 4 \( d'' \) c'' d'' 8 c'' ~  |
%% 50
                c'' 1  |
                r4 f'' 8 f'' f'' f'' 4 f'' 8  |
                e'' 8 d'' 4 d'' 8 c'' 4 d''  |
                e'' 2 \( g'' 
                % warning: overlong bar truncated here |
                a'' 1 \) ~  |
%% 55
                a'' 2 r4 b''  |
                c''' 4 b'' a'' g'' 8 a'' ~  |
                a'' 2. r8 b''  |
                c''' 4 b'' 8 a'' 8 ~ a'' 2 ~  |
                a'' 2 r  |
%% 60
                r4 b'' 8 b'' b'' 4 b'' 8 b'' ~  |
                b'' 4 a'' g'' f''  |
                e'' 4 g'' e'' a'' ~  |
                a'' 4 g'' 2 b'' 4  |
                c''' 4 b'' a'' g'' 8 a'' ~  |
%% 65
                a'' 2. r8 b''  |
                c''' 4 b'' 8 a'' 4 a'' 4. ~  |
                a'' 2 r  |
                r4 b'' 8 b'' b'' 4 b'' 8 b'' ~  |
                b'' 4 a'' g'' f''  |
%% 70
                e'' 4 g'' e'' a'' ~  |
                a'' 4 g'' 2.  |
                R1  |
                r4 g'' 8 g'' g'' 4 a'' 8 g'' ~  |
                g'' 4 a'' b'' d'''  |
%% 75
                c''' 4 b'' a'' e'' 8 g'' ~  |
                g'' 1  |
                r4 a'' 8 a'' a'' a'' 4 a'' 8  |
                a'' 4 g'' a'' b''  |
                c''' 2 a'' ~  |
%% 80
                a'' 2 r4 g'' 8 a''  |
                g'' 1 ~  |
                g'' 2 r  |
                R1  |
                \bar "|."
	}
            } % Voice
            \lyricsto "voice 2" \new Lyrics \lyricmode {
                 "He-" "mos" "en-" "tre-" "ga-" "-do" "nues-" "tras" "vi-" "das" "al" "Se-" "ñor," "no_hay" "ma-" "yor" "ben-" "di-" "-ción" "que" "ser" "de" "é-" "-él." "He-" "mos" "en-" "tre-" "ga-" "-do" "nues-" "tras" "vi-" "das" "al" "Se-" "ñor," "y_él" "a-" "ho-" "ra" "nos" "da" "su" "vi-" "da_e-" "-te-" "er-" "na." "Ben-" "-di-" "to" "seas," "Se-" "ñor," "por" "es-" "te" "pan," "fru-" "to" "de" "la" "tie-" "-rra_y" "del" "tra-" "-ba-" "jo" "del" "hom-" "-bre." "Ben-" "-di-" "to" "seas," "Se-" "ñor," "por" "es-" "te" "vi-" "no," "que_he-" "mos" "re-" "ci-" "bi-" "-do" "de" "tu_a-" "-mor" "y" "bon-" "da-" "-ad." "Y" "a-" "ho-" "ra," "Se-" "-ñor," "te" "pre-" "sen-" "-ta-" "mos" "el" "pan" "y" "el" "vi-" "no" "que" "tú" "con-" "ver-" "ti-" "-rá-" "-ás" "en" "el" "cuer-" "po_y" "san-" "-gre" "de" "tu" "hi-" "i-" "jo" "Je-" "sús," "pan" "de" "vi-" "da_y" "be-" "-bi-" "da" "de" "sal-" "va-" "-ció-" "ó-" "-ón." "Ben-" "-di-" "to" "seas," "Se-" "ñor," "por" "es-" "te" "pan," "fru-" "to" "de" "la" "tie-" "-rra_y" "del" "tra-" "-ba-" "jo" "del" "hom-" "-bre." "Ben-" "-di-" "to" "seas," "Se-" "ñor," "por" "es-" "te" "vi-" "no" "que_he-" "mos" "re-" "ci-" "bi-" "-do" "de" "tu_a-" "-mor" "y" "bon-" "da-" "-ad." "He-" "mos" "en-" "tre-" "ga-" "-do" "nues-" "tras" "vi-" "das" "al" "Se-" "ñor," "y_él" "a-" "ho-" "ra" "nos" "da" "su" "vi-" "da_e-" "-ter-" "na" _ _ _ 
             } % Lyrics
        >> % Staff
