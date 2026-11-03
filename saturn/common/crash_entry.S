/* saturn/common/crash_entry.S - SH-2 exception entry points for crash reports.
 *
 * On an exception the SH-2 pushes SR, then PC, on the current stack. Each
 * stub loads its vector number and jumps to the common part, which reads
 * PC and SR, switches to an emergency stack (the faulting one may be the
 * problem) and calls Crash_Report(vector, pc, sr, sp). It never returns. */

	.macro	CRASH_STUB vector
	.global	_Crash_Entry\vector
_Crash_Entry\vector:
	bra	crash_common
	mov	#\vector, r4
	.endm

	.text
	CRASH_STUB 4	/* general illegal instruction */
	CRASH_STUB 6	/* slot illegal instruction */
	CRASH_STUB 9	/* CPU address error */
	CRASH_STUB 10	/* DMA address error */

crash_common:
	mov.l	@r15, r5		/* PC */
	mov.l	@(4, r15), r6		/* SR */
	mov	r15, r7			/* SP at the time of the fault */
	mov.l	emergency_stack, r15
	mov.l	crash_report_ptr, r0
	jmp	@r0
	nop

	.align	2
emergency_stack:	.long	crash_stack_end
crash_report_ptr:	.long	_Crash_Report

	.bss
	.align	2
	.space	1024
crash_stack_end:
