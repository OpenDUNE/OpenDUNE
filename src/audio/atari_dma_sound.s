	xdef	_set_dma_sound	; export symbol
	xdef	_stop_dma_sound

_set_dma_sound:
	movem.l	d5-d6,-(sp)
	move.l	16(sp),d6	; len
	move.l	12(sp),d5	; buffer
	add.l	d5,d6	; d6 = buffer end

	pea		setdma(pc)
	move	#38,-(sp)	; Supexec
	trap	#14			; XBIOS
	addq.l	#6,sp

	movem.l	(sp)+,d5-d6
	rts

_stop_dma_sound:
	clr.b    $FFFF8901.w;DMA OFF
	rts

setdmaaddrsub:	; set start/end address
	swap	d1
	move.b	d1,1(a0)	; hi byte
	swap	d1
	clr.l	d2
	move.b	d1,d2
	lsr.w	#8,d1
	move.b	d1,3(a0)	; mid byte
	move.b	d2,5(a0)	; low byte
	rts

setdma:
	clr.b    $FFFF8901.w;DMA OFF
	; SET DMA playback
	move.l   d5,d1
	lea		$FFFF8902.w,a0	; start address
	bsr.s	setdmaaddrsub

	move.l   d6,d1
	lea		12(a0),a0	;$FFFF890E.w,a0	; end address
	bsr.s	setdmaaddrsub

	;   6258HZ (d0=0) not available on Falcon
	;  12517HZ (d0=1)
	;  25033HZ (d0=2)
	;  50066HZ (d0=3)
	moveq.l	#1,d0
	ori.b	#$80,d0		; set Mono Flag
	move.b	d0,$FFFF8921.w

	move.b  #1,$FFFF8901.w     * Start playback, single pass mode - stops at end
	;move.b  #3,$FFFF8901.w     * Start playback, loop mode  - stops not self. Stop by resetting bit 0 .
	rts

