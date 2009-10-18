% This LilyPond file was generated by Rosegarden 1.5.1
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
    title = "Hemos Entregado Nuestras Vidas"
    composer = "Federico Carranza"
    tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
global = { 
    \time 4/4
    \skip 1*83  %% 1-83
}
globalTempo = {
    \tempo 4 = 140  \skip 1*83 
}
\score {
    \new StaffGroup <<
        % force offset of colliding notes in chords:
        \override Score.NoteColumn #'force-hshift = #1.0
	\override Score.MetronomeMark #'padding = #8.0

	\include "hemosentregado-acordes.inc"
	\include "hemosentregado-sopranop.inc"
	\include "hemosentregado-soprano.inc"
	\include "hemosentregado-mezzo.inc"
	\include "hemosentregado-tenor.inc"

    >> % notes

    \layout { }
} % score
