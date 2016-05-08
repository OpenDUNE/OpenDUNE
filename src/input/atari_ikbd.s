	xdef	_install_ikbd_handler	;export symbol
	xdef	_uninstall_ikbd_handler	;export symbol

	code

_install_ikbd_handler:
	movem.l	d0-d1/a0-a1,-(sp)

	move.w	#$2700,sr	; Disable all interrupts

	; Save MFP registers used for ACIA interrupt
	lea	$fffffa00.w,a0
	btst	#6,$9(a0)
	sne		ikbd_ierb
	btst	#6,$15(a0)
	sne		ikbd_imrb

	move.l	$118.w,old_ikbd
	move.l	#ikbd,$118.w
	bset	#6,$fffffa09.w	; IERB
	bset	#6,$fffffa15.w	; IMRB

	; Set relative mouse motion mode
	; needed because running a .tos or .ttp program
	; disable the mouse (entering VT52 textmode)
	move.b #$08,$fffffc02.w

	move.w	#$2300,sr ; Re-enable interrupts

	movem.l	(sp)+,d0-d1/a0-a1
	rts

	; ------------ restore old vector
_uninstall_ikbd_handler:
	move.l	a0,-(sp)

	move.w	#$2700,sr	; Disable interrupts

	; Restore MFP registers
	lea	$fffffa00.w,a0

	bclr	#6,$9(a0)
	tst.b	ikbd_ierb
	beq.s	.ikbd_restoreierb
	bset	#6,$9(a0)
.ikbd_restoreierb:

	bclr	#6,$15(a0)
	tst.b	ikbd_imrb
	beq.s	.ikbd_restoreimrb
	bset	#6,$15(a0)
.ikbd_restoreimrb:

	move.l	old_ikbd,$118.w

	; Clear keyboard buffer
	lea	$fffffc00.w,a0
.ikbd_clearbuffer:
	btst	#0,(a0)
	beq.s	.ikbd_buffercleared
	tst.b	2(a0)
	bra.s	.ikbd_clearbuffer
.ikbd_buffercleared:

	move.w	#$2300,sr ; Re-enable interrupts

	move.l	(sp)+,a0
	rts


; custom IKBD vector
	EVEN
	dc.b	"XBRA"
	dc.b	"IKBD"
old_ikbd:	ds.l	1

ikbd:
	btst	#0,$fffffc00.w	; IKBD or MIDI ?
	beq.s	ikbd_return		; MIDI => out
	move.l	d0,-(sp)	; save register

	move.b	$fffffc02.w,d0
	cmp.b	#$ff,d0				; joystick 1 ?
	beq.s	.joystick1_packet
	cmp.b	#$f8,d0				; mouse ?
	bmi.s	.nomouse
	cmp.b	#$fc,d0
	bpl.s	.nomouse
		;it is the 1st byte of a mouse packet
	move.b	d0,ikbd_mouse_pkt0
	move.l	#ikbd_mousex,$118.w	; vector to handle next byte
	bra.s	ikbd_return_stack
.joystick1_packet:
	move.l	#ikbd_poll_joystick1,$118.w	; vector to handle joystick
	bra.s	ikbd_return_stack

.nomouse:
	; this is a keyboard scancode
	andi.l	#$ff,d0
	movem.l	d1/a0-a1,-(sp)
	move.l	d0,-(sp)
	jsr	_Input_EventHandler		; call higher level Keyboard input handler
	addq.l	#4,sp
	movem.l	(sp)+,d1/a0-a1

ikbd_return_stack:
	move.l	(sp)+,d0
ikbd_return:
	bclr	#6,$fffffa11.w		; acknowledge IKBD interrupt
	rte					; return from interrupt


	; 2nd byte mouse packet handler
ikbd_mousex:
	btst	#0,$fffffc00.w	; IKBD or MIDI ?
	beq.s	ikbd_return
	move.b	$fffffc02.w,ikbd_mouse_pktx
	move.l	#ikbd_mousey,$118.w		; handler for next 3rd byte
	bra.s	ikbd_return

	; 3nd byte mouse packet handler
ikbd_mousey:
	btst	#0,$fffffc00.w	; IKBD or MIDI ?
	beq.s	ikbd_return
	move.b	$fffffc02.w,ikbd_mouse_pkty
	movem.l	d0-d1/a0-a1,-(sp)
	pea		ikbd_mouse_pkt0
	jsr		_Mouse_Handler		; call higher level mouse handler
	addq.l	#4,sp
	movem.l	(sp)+,d0-d1/a0-a1
	move.l	#ikbd,$118.w		; back to regular handler
	bra.s	ikbd_return

ikbd_poll_joystick1:
	btst	#0,$fffffc00.w	; IKBD or MIDI ?
	beq.s	ikbd_return

	btst.b	#0,$fffffc02.w	; consume joystick byte, do nothing with it

	move.l	#ikbd,$118.w		; back to regular handler
	bra.s	ikbd_return

	bss
ikbd_ierb:
	ds.b 1
ikbd_imrb:
	ds.b 1
ikbd_mouse_pkt0:
	ds.b	1
ikbd_mouse_pktx:
	ds.b	1
ikbd_mouse_pkty:
	ds.b	1
