% This LilyPond file was generated by Rosegarden 1.5.1
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
    title = "Hemos entregado nuestras vidas"
    composer = "Federico Carranza"
    tagline = "Coro Juvenil San Juan Bosco"
    copyright = "Copyright © 1982 Comunidad Jésed"
    instrument = "Mezzosoprano"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = { 
    \time 2/4
    \skip 2*83  %% 1-83
}
globalTempo = {
    \tempo 4 = 70  \skip 2*83
}
\score {
    \new StaffGroup <<
        % force offset of colliding notes in chords:
        \override Score.NoteColumn #'force-hshift = #1.0
	\override Score.MetronomeMark #'padding = #8.0

	\include "hemosentregado-acordes.inc"
	\include "hemosentregado-mezzo.inc"

    >> % notes

    \layout { }
} % score
