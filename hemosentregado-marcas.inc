\context ChordNames \chords {
	$(if (>= (cadr (ly:version)) 24)
		#{ \set Score.rehearsalMarkFormatter = #format-mark-box-numbers #}
		#{ \set Score.markFormatter = #format-mark-box-numbers #})

	% intro
	\mark \default
	\skip 2*4

	% Hemos entregado...
	\mark \default
	\skip 2*8

	% Hemos entregado...
	\skip 2*9

	% Bendito seas, sennor...
	\mark \default
	\skip 2*8

	% Bendito seas, sennor...
	\skip 2*9

	% Y ahora, sennor...
	\mark \default
	\skip 2*8

	% En el cuerpo y sangre...
	\skip 2*9

	% Bendito seas, sennor...
	\mark \default
	\skip 2*8

	% Bendito seas, sennor...
	\skip 2*9

	% Hemos entregado...
	\mark \default
	%\skip 2*8
}
