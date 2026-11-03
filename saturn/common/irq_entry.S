/* saturn/common/irq_entry.S - entry points for SCU interrupt handlers.
 *
 * The BIOS interrupt dispatcher (BIOS_SETUINT) saves the general registers
 * but not MACH/MACL, which the SH-2 multiply instructions leave their result
 * in: a C handler that multiplies would change the product of the code it
 * interrupted, between its multiply and the read of the result. Like Sega's
 * own trampoline (SBL6 SEGALIB/INT/INT_TRMP.SRC), these save MACL, MACH and
 * PR around the C handler. */

	.macro	IRQ_ENTRY name, handler
	.global	\name
\name:
	sts.l	macl, @-r15
	sts.l	mach, @-r15
	sts.l	pr, @-r15
	mov.l	1f, r0
	jsr	@r0
	nop
	lds.l	@r15+, pr
	lds.l	@r15+, mach
	rts
	lds.l	@r15+, macl
	.align	2
1:	.long	\handler
	.endm

	.text
	IRQ_ENTRY _SaturnTimer_VBlankInEntry, _SaturnTimer_VBlankIn
	IRQ_ENTRY _Scsp_TimerEntry, _Scsp_TimerInterrupt
