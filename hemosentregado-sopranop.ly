\version "2.10.0"
#(ly:set-option 'point-and-click #f)
\header {
	title = "Hemos entregado nuestras vidas"
	composer = "Federico Carranza"
	tagline = "Coro Juvenil San Juan Bosco"
	copyright = "Copyright © 1982 Comunidad Jésed"
	instrument = "Soprano II"
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
}
globalTempo = {
	\tempo 4 = 70
}
\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "hemosentregado-acordes.inc"
		\include "hemosentregado-sopranop.inc"
	>>

	\layout { }
}
