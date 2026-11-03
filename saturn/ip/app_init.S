/* saturn/ip/app_init.S - application initial program of IP.BIN.
 *
 * Sega's SYS_INIT ends by branching to the byte right after itself, where
 * the application initial program must be linked (SBL6 SEGASMP/SYS/SMPSYS.C).
 * The SBL sample clears VDP/sound RAM there and then jumps to the program;
 * our crt0/main does its own hardware setup, so just jump. */

	.section .app_init, "ax"
	mov.l	entry, r0
	jmp	@r0
	nop
	.align	2
entry:	.long	0x06004000	/* 1st read address, see sys_id.S */
