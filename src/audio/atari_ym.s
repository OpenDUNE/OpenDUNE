	; Copyright (C) 2026 Neil Rackett
	; SPDX-License-Identifier: GPL-2.0-or-later
	;
	; MFP 68901 Timer A clock of the YM2149 music (see midi_ym_atari.c) :
	; calls YM_Tick() at 2457600 / 100 / 205 = 119.88Hz, the rate the
	; XMIDI sequencer counts in.
	;
	; MFP registers used ($FFFFFA00 + offset) :
	; $07 IERA  $0B IPRA  $0F ISRA  $13 IMRA  (bit 5 = Timer A)
	; $19 TACR  $1F TADR
	; Timer A is MFP channel 13, vector $134.

	xdef	_YM_TimerStart	; export symbols
	xdef	_YM_TimerStop
	xref	_YM_Tick

	code

	; long YM_TimerStart(void), from supervisor mode :
	; 0 if started, -1 if Timer A is already in use.
_YM_TimerStart:
	move.w	sr,-(sp)
	move.w	#$2700,sr	; Disable all interrupts

	lea	$fffffa00.w,a0
	moveq	#-1,d0
	tst.b	$19(a0)		; Timer A running ?
	bne.s	.busy
	btst	#5,$7(a0)	; Timer A interrupt enabled ?
	bne.s	.busy

	move.l	$134.w,old_timera
	move.l	#timera,$134.w
	move.b	#205,$1f(a0)	; data
	move.b	#6,$19(a0)	; delay mode, prescale / 100
	bset	#5,$7(a0)	; Interrupt enable A / Timer A
	bset	#5,$13(a0)	; Interrupt mask A / Timer A
	st	timera_on
	moveq	#0,d0
.busy:
	move.w	(sp)+,sr
	rts

	; void YM_TimerStop(void), from supervisor mode. Only stops a
	; timer YM_TimerStart() started.
_YM_TimerStop:
	move.w	sr,-(sp)
	move.w	#$2700,sr	; Disable all interrupts

	tst.b	timera_on
	beq.s	.stopped
	lea	$fffffa00.w,a0
	clr.b	$19(a0)		; stop Timer A
	bclr	#5,$7(a0)
	bclr	#5,$13(a0)
	move.b	#$df,$b(a0)	; drop a pending request
	move.b	#$df,$f(a0)	; and the in-service bit
	cmp.l	#timera,$134.w
	bne.s	.notours
	move.l	old_timera,$134.w
.notours:
	sf	timera_on
.stopped:
	move.w	(sp)+,sr
	rts


; Timer A interrupt
	EVEN
	dc.b	"XBRA"
	dc.b	"ODYM"
old_timera:	ds.l	1

timera:
	bclr	#5,$fffffa0f.w	; end of interrupt, so lower MFP channels
				; (keyboard ACIA, Timer C) can come in
	tst.b	timera_busy	; previous tick not finished : skip this one
	bne.s	.return
	st	timera_busy
	move.w	#$2500,sr	; let the ACIA and Timer C interrupt the tick
	movem.l	d0-d1/a0-a1,-(sp)
	move.l	sp,timera_sp
	lea	timera_stack_end,sp	; own stack : the tick can land in GEMDOS
	jsr	_YM_Tick
	move.l	timera_sp,sp
	movem.l	(sp)+,d0-d1/a0-a1
	move.w	#$2700,sr
	sf	timera_busy
.return:
	rte

	bss
timera_on:
	ds.b	1
timera_busy:
	ds.b	1
	EVEN
timera_sp:
	ds.l	1
timera_stack:
	ds.b	4096
timera_stack_end:
