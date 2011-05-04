/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Interrupt_CustomTimer()
 *
 * @name emu_Interrupt_CustomTimer
 * @implements 2756:050F:000B:0871 ()
 * @implements 2756:051A:006F:3626
 * @implements 2756:0543:0046:62C4
 * @implements 2756:057D:000C:CFF4
 * @implements 2756:0589:0019:7966
 * @implements 2756:05A2:0040:EA7C
 *
 * Called From: 0000:0000:0000:0000
 */
void emu_Interrupt_CustomTimer()
{
l__050F:
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x6), 0x0);
	if (emu_get_memory16(emu_cs, 0x00, 0x6) == 0x0) goto l__051A;
	/* Unresolved jump */ emu_ip = 0x05C9; emu_last_cs = 0x2756; emu_last_ip = 0x0517; emu_last_length = 0x000B; emu_last_crc = 0x0871; emu_call();
l__051A:
	emu_get_memory16(emu_cs, 0x00, 0x6) = 0x1;
	emu_cld();
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_bp);
	emu_push(emu_es);
	emu_push(emu_ds);
	emu_get_memory16(emu_cs, 0x00, 0x3B8) = emu_ss;
	emu_get_memory16(emu_cs, 0x00, 0x3BA) = emu_sp;
	emu_ax = emu_cs;
	emu_ss = emu_ax;
	emu_sp = 0x3B8;
	emu_get_memory16(emu_cs, 0x00, 0x120) = 0x0;
l__0543:
	emu_si = emu_get_memory16(emu_cs, 0x00, 0x120);
	emu_shlw(&emu_si, 0x1);
	emu_cmpw(&emu_get_memory16(emu_cs, emu_si, 0x6E), 0x2);
	if (emu_get_memory16(emu_cs, emu_si, 0x6E) != 0x2) goto l__05A2;
	emu_ds = emu_get_memory16(emu_cs, emu_si, 0x4C);
	emu_shlw(&emu_si, 0x1);
	emu_ax = emu_get_memory16(emu_cs, emu_si, 0x90);
	emu_dx = emu_get_memory16(emu_cs, emu_si, 0x92);
	emu_addw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x118));
	emu_adcw(&emu_dx, emu_get_memory16(emu_cs, 0x00, 0x11A));
	emu_cmpw(&emu_dx, emu_get_memory16(emu_cs, emu_si, 0xD6));
	if (emu_dx >= emu_get_memory16(emu_cs, emu_si, 0xD6)) {
		if (emu_dx > emu_get_memory16(emu_cs, emu_si, 0xD6)) goto l__0589;
		emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, emu_si, 0xD4));
		if (emu_ax >= emu_get_memory16(emu_cs, emu_si, 0xD4)) goto l__0589;
	}
l__057D:
	emu_get_memory16(emu_cs, emu_si, 0x90) = emu_ax;
	emu_get_memory16(emu_cs, emu_si, 0x92) = emu_dx;
	goto l__05A2;
l__0589:
	emu_subw(&emu_ax, emu_get_memory16(emu_cs, emu_si, 0xD4));
	emu_sbbw(&emu_dx, emu_get_memory16(emu_cs, emu_si, 0xD6));
	emu_get_memory16(emu_cs, emu_si, 0x90) = emu_ax;
	emu_get_memory16(emu_cs, emu_si, 0x92) = emu_dx;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_si, 0x8);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_cs, emu_si, 0xA);
	emu_push(0x05A2);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x27560622: f__2756_0622_0006_823A(); break;
		case 0x2BD10006: f__2BD1_0006_004A_CD10(); break;
		case 0x44AF1CEE: emu_MPU_Interrupt(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2756; emu_last_ip = 0x059D; emu_last_length = 0x0019; emu_last_crc = 0x7966;
			emu_call();
			return;
	}
l__05A2:
	emu_incw(&emu_get_memory16(emu_cs, 0x00, 0x120));
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x120), 0x10);
	if (emu_get_memory16(emu_cs, 0x00, 0x120) <= 0x10) goto l__0543;
	emu_ss = emu_get_memory16(emu_cs, 0x00, 0x3B8);
	emu_sp = emu_get_memory16(emu_cs, 0x00, 0x3BA);
	emu_pop(&emu_ds);
	emu_pop(&emu_es);
	emu_pop(&emu_bp);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_get_memory16(emu_cs, 0x00, 0x6) = 0x0;
	emu_push(emu_ax);
	emu_al = 0x20;
	emu_outb(0x20, emu_al);
	emu_pop(&emu_ax);
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x1B4), 0x6554);
	if (emu_get_memory16(emu_cs, 0x00, 0x1B4) != 0x6554) { /* Unresolved jump */ emu_ip = 0x05E2; emu_last_cs = 0x2756; emu_last_ip = 0x05D6; emu_last_length = 0x0040; emu_last_crc = 0xEA7C; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x1B6), 0x7473);
	if (emu_get_memory16(emu_cs, 0x00, 0x1B6) != 0x7473) { /* Unresolved jump */ emu_ip = 0x05E2; emu_last_cs = 0x2756; emu_last_ip = 0x05DF; emu_last_length = 0x0040; emu_last_crc = 0xEA7C; emu_call(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0622_0006_823A()
 *
 * @name f__2756_0622_0006_823A
 * @implements 2756:0622:0006:823A ()
 * @implements 2756:0628:0001:6180
 *
 * Called From: 2756:059D:0019:7966
 */
void f__2756_0622_0006_823A()
{
l__0622:
	emu_pushf();

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, 0x00, 0x11C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_cs, 0x00, 0x11E);
	emu_push(0x0628);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x00700040: Interrupt_Timer(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2756; emu_last_ip = 0x0623; emu_last_length = 0x0006; emu_last_crc = 0x823A;
			emu_call();
			return;
	}
l__0628:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}
