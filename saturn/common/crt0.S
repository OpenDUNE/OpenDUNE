/* saturn/common/crt0.S - entry point of the 1st read file.
 *
 * The BIOS loads the file at the 1st read address from IP.BIN (0x06004000)
 * and jumps here. Set the stack, clear .bss, run Saturn_Start(). */

	.section .text.start, "ax"
	.global	start
start:
	mov.l	stack_top, r15

	/* clear .bss (both ends are 4-byte aligned by the linker script) */
	mov.l	bss_start, r0
	mov.l	bss_end, r1
	mov	#0, r2
1:	cmp/hs	r1, r0
	bt	2f
	mov.l	r2, @r0
	bra	1b
	add	#4, r0
2:
	mov.l	start_ptr, r0
	jsr	@r0
	nop

	/* Saturn_Start() does not return; hang if it does */
3:	bra	3b
	nop

	.align	2
stack_top:	.long	__stack_top
bss_start:	.long	__bss_start
bss_end:	.long	__bss_end
start_ptr:	.long	_Saturn_Start
