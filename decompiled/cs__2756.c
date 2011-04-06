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
 * Decompiled function f__2756_05E6_0038_06ED()
 *
 * @name f__2756_05E6_0038_06ED
 * @implements 2756:05E6:0038:06ED ()
 * @implements 2756:061E:0004:5A42
 *
 * Called From: 2756:0AD0:0030:D440
 */
void f__2756_05E6_0038_06ED()
{
l__05E6:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cld();
	emu_get_memory16(emu_cs, 0x00, 0x118) = 0xFFFF;
	emu_get_memory16(emu_cs, 0x00, 0x11A) = 0xFFFF;
	emu_push(emu_cs);
	emu_pop(&emu_es);
	emu_di = 0x6E;
	emu_cx = 0x11;
	emu_ax = 0x0;
	emu_rep_stosw();
	emu_di = 0x90;
	emu_cx = 0x22;
	emu_rep_stosw();
	emu_di = 0xD4;
	emu_cx = 0x22;
	emu_rep_stosw();
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x061E); f__2756_0618_0001_6780();
l__061E:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_0618_0001_6780()
 *
 * @name f__2756_0618_0001_6780
 * @implements 2756:0618:0001:6780 ()
 *
 * Called From: 2756:061B:0038:06ED
 */
void f__2756_0618_0001_6780()
{
l__0618:

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

/**
 * Decompiled function f__2756_0629_0049_2D48()
 *
 * @name f__2756_0629_0049_2D48
 * @implements 2756:0629:0049:2D48 ()
 * @implements 2756:0672:0005:5A7A
 *
 * Called From: 2756:0ADA:000A:EC64
 */
void f__2756_0629_0049_2D48()
{
l__0629:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_pushf();
	emu_cli();
	emu_ax = 0x0;
	emu_es = emu_ax;
	emu_bx = emu_get_memory16(emu_es, 0x00, 0x20);
	emu_es = emu_get_memory16(emu_es, 0x00, 0x22);
	emu_get_memory16(emu_cs, 0x00, 0x11C) = emu_bx;
	emu_get_memory16(emu_cs, 0x00, 0x11E) = emu_es;
	emu_bx = 0x622;
	emu_get_memory16(emu_cs, 0x00, 0x48) = emu_bx;
	emu_get_memory16(emu_cs, 0x00, 0x4A) = emu_cs;
	emu_ax = emu_cs;
	emu_ds = emu_ax;
	emu_dx = 0x50F;
	emu_ax = 0x0;
	emu_es = emu_ax;
	emu_get_memory16(emu_es, 0x00, 0x20) = emu_dx;
	emu_get_memory16(emu_es, 0x00, 0x22) = emu_ds;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0672); f__2756_066C_0001_6780();
l__0672:
	emu_pop(&emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_066C_0001_6780()
 *
 * @name f__2756_066C_0001_6780
 * @implements 2756:066C:0001:6780 ()
 *
 * Called From: 2756:066F:0049:2D48
 */
void f__2756_066C_0001_6780()
{
l__066C:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0677_002D_321F()
 *
 * @name f__2756_0677_002D_321F
 * @implements 2756:0677:002D:321F ()
 * @implements 2756:06A4:0005:5A7A
 *
 * Called From: 2756:085F:0006:0827
 */
void f__2756_0677_002D_321F()
{
l__0677:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_pushf();
	emu_cli();
	emu_get_memory16(emu_cs, 0x00, 0x120) = 0xFFFF;
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x11C);
	emu_ds = emu_get_memory16(emu_cs, 0x00, 0x11E);
	emu_ax = 0x0;
	emu_es = emu_ax;
	emu_get_memory16(emu_es, 0x00, 0x20) = emu_dx;
	emu_get_memory16(emu_es, 0x00, 0x22) = emu_ds;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x06A4); f__2756_069E_0001_6780();
l__06A4:
	emu_pop(&emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_069E_0001_6780()
 *
 * @name f__2756_069E_0001_6780
 * @implements 2756:069E:0001:6780 ()
 *
 * Called From: 2756:06A1:002D:321F
 */
void f__2756_069E_0001_6780()
{
l__069E:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_06A9_0015_B76D()
 *
 * @name f__2756_06A9_0015_B76D
 * @implements 2756:06A9:0015:B76D ()
 * @implements 2756:06BE:0006:E2B1
 * @implements 2756:06C4:0009:7FCE
 * @implements 2756:06CD:0005:C08A
 *
 * Called From: 2756:06F0:0004:E2A8
 * Called From: 2756:06F0:0021:3A37
 * Called From: 2756:0859:0035:3DAA
 */
void f__2756_06A9_0015_B76D()
{
l__06A9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_al = 0x36;
	emu_outb(0x43, emu_al);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_get_memory16(emu_cs, 0x00, 0x126) = emu_ax;
	goto l__06BE;
l__06BE:
	emu_outb(0x40, emu_al);
	emu_al = emu_ah;
	goto l__06C4;
l__06C4:
	emu_outb(0x40, emu_al);
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x06CD); f__2756_06C7_0001_6780();
l__06CD:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_06C7_0001_6780()
 *
 * @name f__2756_06C7_0001_6780
 * @implements 2756:06C7:0001:6780 ()
 *
 * Called From: 2756:06CA:0009:7FCE
 */
void f__2756_06C7_0001_6780()
{
l__06C7:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_06D2_0021_3A37()
 *
 * @name f__2756_06D2_0021_3A37
 * @implements 2756:06D2:0021:3A37 ()
 * @implements 2756:06EF:0004:E2A8
 * @implements 2756:06F3:0008:4A02
 *
 * Called From: 2756:07BC:0014:ACDF
 */
void f__2756_06D2_0021_3A37()
{
l__06D2:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x4), 0xD68D);
	if (emu_get_memory16(emu_ss, emu_bp,  0x4) < 0xD68D) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x4);
		emu_bx = 0x20BC;
		emu_cx = 0x2710;
		emu_mulw(&emu_ax, emu_cx);
		emu_divw(&emu_ax, emu_bx);
	}
l__06EF:
	emu_push(emu_ax);
	emu_push(0x06F3); f__2756_06A9_0015_B76D();
l__06F3:
	emu_addw(&emu_sp, 0x2);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_06FB_0042_E7A6()
 *
 * @name f__2756_06FB_0042_E7A6
 * @implements 2756:06FB:0042:E7A6 ()
 * @implements 2756:0722:001B:1899
 * @implements 2756:0734:0009:7BF4
 * @implements 2756:0739:0004:FED4
 * @implements 2756:0741:0005:C08A
 *
 * Called From: 2756:0BB1:0025:D5D8
 */
void f__2756_06FB_0042_E7A6()
{
l__06FB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_cx, emu_cx);
	if (emu_cx != 0) { /* Unresolved jump */ emu_ip = 0x0719; emu_last_cs = 0x2756; emu_last_ip = 0x070F; emu_last_length = 0x0042; emu_last_crc = 0xE7A6; emu_call(); return; }
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx == 0) { /* Unresolved jump */ emu_ip = 0x073D; emu_last_cs = 0x2756; emu_last_ip = 0x0713; emu_last_length = 0x0042; emu_last_crc = 0xE7A6; emu_call(); return; }
	emu_orw(&emu_bx, emu_bx);
	if (emu_bx == 0) { /* Unresolved jump */ emu_ip = 0x073D; emu_last_cs = 0x2756; emu_last_ip = 0x0717; emu_last_length = 0x0042; emu_last_crc = 0xE7A6; emu_call(); return; }
	emu_bp = emu_cx;
	emu_cx = 0x20;
	emu_xorw(&emu_di, emu_di);
	emu_xorw(&emu_si, emu_si);
l__0722:
	emu_shlw(&emu_ax, 0x1);
	emu_rclw(&emu_dx, 0x1);
	emu_rclw(&emu_si, 0x1);
	emu_rclw(&emu_di, 0x1);
	emu_cmpw(&emu_di, emu_bp);
	if (emu_di < emu_bp) goto l__0739;
	if (emu_di <= emu_bp) {
		emu_cmpw(&emu_si, emu_bx);
		if (emu_si < emu_bx) goto l__0739;
	}
l__0734:
	emu_subw(&emu_si, emu_bx);
	emu_sbbw(&emu_di, emu_bp);
	emu_incw(&emu_ax);
l__0739:
	if (--emu_cx != 0) goto l__0722;
	goto l__0741;
l__0741:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_0746_0079_B2E2()
 *
 * @name f__2756_0746_0079_B2E2
 * @implements 2756:0746:0079:B2E2 ()
 * @implements 2756:075D:0062:76D1
 * @implements 2756:0785:003A:7B1B
 * @implements 2756:078E:0031:4A01
 * @implements 2756:07AB:0014:ACDF
 * @implements 2756:07BF:0017:1417
 * @implements 2756:07CF:0007:3FBD
 * @implements 2756:07D6:0004:5A42
 *
 * Called From: 2756:0A3F:003D:0C0C
 */
void f__2756_0746_0079_B2E2()
{
l__0746:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cld();
	emu_get_memory16(emu_cs, 0x00, 0x122) = 0xFFFF;
	emu_get_memory16(emu_cs, 0x00, 0x124) = 0xFFFF;
	emu_si = 0x0;
l__075D:
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_cs, emu_bx, 0x6E), 0x0);
	if (emu_get_memory16(emu_cs, emu_bx, 0x6E) == 0x0) goto l__078E;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0xD4);
	emu_dx = emu_get_memory16(emu_cs, emu_bx, 0xD6);
	emu_cmpw(&emu_dx, emu_get_memory16(emu_cs, 0x00, 0x124));
	if (emu_dx >= emu_get_memory16(emu_cs, 0x00, 0x124)) {
		if (emu_dx > emu_get_memory16(emu_cs, 0x00, 0x124)) goto l__078E;
		emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x122));
		if (emu_ax >= emu_get_memory16(emu_cs, 0x00, 0x122)) goto l__078E;
	}
l__0785:
	emu_get_memory16(emu_cs, 0x00, 0x122) = emu_ax;
	emu_get_memory16(emu_cs, 0x00, 0x124) = emu_dx;
l__078E:
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x10);
	if (emu_si <= 0x10) goto l__075D;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x122);
	emu_dx = emu_get_memory16(emu_cs, 0x00, 0x124);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x118));
	if (emu_ax == emu_get_memory16(emu_cs, 0x00, 0x118)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_cs, 0x00, 0x11A));
		if (emu_dx == emu_get_memory16(emu_cs, 0x00, 0x11A)) goto l__07CF;
	}
l__07AB:
	emu_get_memory16(emu_cs, 0x00, 0x120) = 0xFFFF;
	emu_get_memory16(emu_cs, 0x00, 0x118) = emu_ax;
	emu_get_memory16(emu_cs, 0x00, 0x11A) = emu_dx;
	emu_push(emu_ax);
	emu_push(0x07BF); f__2756_06D2_0021_3A37();
l__07BF:
	emu_addw(&emu_sp, 0x2);
	emu_push(emu_cs);
	emu_pop(&emu_es);
	emu_di = 0x90;
	emu_cx = 0x22;
	emu_ax = 0x0;
	emu_rep_stosw();
l__07CF:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x07D6); f__2756_07D0_0001_6780();
l__07D6:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_07D0_0001_6780()
 *
 * @name f__2756_07D0_0001_6780
 * @implements 2756:07D0:0001:6780 ()
 *
 * Called From: 2756:07D3:0017:1417
 * Called From: 2756:07D3:0007:3FBD
 */
void f__2756_07D0_0001_6780()
{
l__07D0:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_07DA_0048_9F5D()
 *
 * @name f__2756_07DA_0048_9F5D
 * @implements 2756:07DA:0048:9F5D ()
 * @implements 2756:0822:0005:5E7A
 *
 * Called From: 1DD7:039E:0008:D3BD
 */
void f__2756_07DA_0048_9F5D()
{
l__07DA:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_pushf();
	emu_cli();
	emu_get_memory16(emu_cs, 0x00, 0x4) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x6) = 0x0;
	emu_get_memory16(emu_cs, 0x00, 0x462) = 0x0;
	emu_cld();
	emu_ax = emu_cs;
	emu_es = emu_ax;
	emu_di = 0x128;
	emu_cx = 0x20;
	emu_ax = 0x0;
	emu_rep_stosw();
	emu_di = 0x168;
	emu_cx = 0x10;
	emu_ax = 0xFFFF;
	emu_rep_stosw();
	emu_di = 0x188;
	emu_cx = 0x10;
	emu_ax = 0x0;
	emu_rep_stosw();
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0822); f__2756_081C_0001_6780();
l__0822:
	emu_pop(&emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2756_081C_0001_6780()
 *
 * @name f__2756_081C_0001_6780
 * @implements 2756:081C:0001:6780 ()
 *
 * Called From: 2756:081F:0048:9F5D
 */
void f__2756_081C_0001_6780()
{
l__081C:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0827_0035_3DAA()
 *
 * @name f__2756_0827_0035_3DAA
 * @implements 2756:0827:0035:3DAA ()
 * @implements 2756:085C:0006:0827
 * @implements 2756:0862:0007:3FBD
 * @implements 2756:0869:0005:C48A
 *
 * Called From: 1DD7:0404:000C:8340
 * Called From: 2756:0975:0029:7838
 */
void f__2756_0827_0035_3DAA()
{
l__0827:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_bx, 0xFFFF);
	if (emu_bx == 0xFFFF) goto l__0862;
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_cs, emu_bx, 0x6E), 0x0);
	if (emu_get_memory16(emu_cs, emu_bx, 0x6E) == 0x0) goto l__0862;
	emu_get_memory16(emu_cs, emu_bx, 0x6E) = 0x0;
	emu_decw(&emu_get_memory16(emu_cs, 0x00, 0x4));
	if (emu_get_memory16(emu_cs, 0x00, 0x4) != 0) goto l__0862;
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(0x085C); f__2756_06A9_0015_B76D();
l__085C:
	emu_addw(&emu_sp, 0x2);
	emu_push(0x0862); f__2756_0677_002D_321F();
l__0862:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0869); f__2756_0863_0001_6780();
l__0869:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2756_0863_0001_6780()
 *
 * @name f__2756_0863_0001_6780
 * @implements 2756:0863:0001:6780 ()
 *
 * Called From: 2756:0866:0007:3FBD
 */
void f__2756_0863_0001_6780()
{
l__0863:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_094F_0029_7838()
 *
 * @name f__2756_094F_0029_7838
 * @implements 2756:04F8:0009:907D ()
 * @implements 2756:094F:0029:7838
 * @implements 2756:0978:0009:07BA
 * @implements 2756:097B:0006:43FF
 * @implements 2756:0981:0001:6580
 *
 * Called From: 1DD7:170B:0011:F32E
 */
void f__2756_094F_0029_7838()
{
	goto l__094F;
	emu_movw(&emu_bx, emu_sp);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bx, 0x4));
	emu_calli(-0x45, 0x0501, 0x04FE);
l__094F:
	emu_bx = emu_sp;
	emu_bx = emu_get_memory16(emu_ss, emu_bx, 0x4);
	emu_cmpw(&emu_bx, 0x10);
	if (emu_bx >= 0x10) goto l__0981;
	emu_shlw(&emu_bx, 0x1);
	emu_dx = 0x0;
	emu_xchgw(&emu_get_memory16(emu_cs, emu_bx, 0x188), &emu_dx);
	emu_cmpw(&emu_dx, 0x0);
	if (emu_dx == 0x0) goto l__0981;
	emu_dx = emu_get_memory16(emu_cs, emu_bx, 0x168);
	emu_cmpw(&emu_dx, 0xFFFF);
	if (emu_dx == 0xFFFF) goto l__097B;
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x0978); f__2756_0827_0035_3DAA();
l__0978:
	emu_addw(&emu_sp, 0x2);
l__097B:
	emu_ax = 0x68;
	emu_Drivers_CallFunction(); return;
l__0981:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2756_0A05_003D_0C0C()
 *
 * @name f__2756_0A05_003D_0C0C
 * @implements 2756:0A05:003D:0C0C ()
 * @implements 2756:0A42:0012:6E30
 * @implements 2756:0A54:0005:C48A
 *
 * Called From: 2756:0AFC:0022:2C19
 * Called From: 2756:0BBD:000C:C1DF
 */
void f__2756_0A05_003D_0C0C()
{
l__0A05:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x6E);
	emu_push(emu_ax);
	emu_get_memory16(emu_cs, emu_bx, 0x6E) = 0x1;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_cs, emu_bx, 0xD4) = emu_ax;
	emu_get_memory16(emu_cs, emu_bx, 0xD6) = emu_dx;
	emu_get_memory16(emu_cs, emu_bx, 0x90) = 0x0;
	emu_get_memory16(emu_cs, emu_bx, 0x92) = 0x0;
	emu_push(0x0A42); f__2756_0746_0079_B2E2();
l__0A42:
	emu_pop(&emu_ax);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_shlw(&emu_bx, 0x1);
	emu_get_memory16(emu_cs, emu_bx, 0x6E) = emu_ax;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0A54); f__2756_0A4E_0001_6780();
l__0A54:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2756_0A4E_0001_6780()
 *
 * @name f__2756_0A4E_0001_6780
 * @implements 2756:0A4E:0001:6780 ()
 *
 * Called From: 2756:0A51:0012:6E30
 */
void f__2756_0A4E_0001_6780()
{
l__0A4E:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0A59_0023_D969()
 *
 * @name f__2756_0A59_0023_D969
 * @implements 2756:0A59:0023:D969 ()
 * @implements 2756:0A7C:0005:C48A
 *
 * Called From: 1DD7:03CC:000C:B4EE
 * Called From: 1DD7:13EB:000F:9227
 * Called From: 2756:0B0D:0011:9F12
 * Called From: 2756:0DFF:0020:1F42
 */
void f__2756_0A59_0023_D969()
{
l__0A59:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_cs, emu_bx, 0x6E), 0x1);
	if (emu_get_memory16(emu_cs, emu_bx, 0x6E) != 0x1) { /* Unresolved jump */ emu_ip = 0x0A75; emu_last_cs = 0x2756; emu_last_ip = 0x0A6C; emu_last_length = 0x0023; emu_last_crc = 0xD969; emu_call(); return; }
	emu_get_memory16(emu_cs, emu_bx, 0x6E) = 0x2;
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0A7C); f__2756_0A76_0001_6780();
l__0A7C:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2756_0A76_0001_6780()
 *
 * @name f__2756_0A76_0001_6780
 * @implements 2756:0A76:0001:6780 ()
 *
 * Called From: 2756:0A79:0023:D969
 */
void f__2756_0A76_0001_6780()
{
l__0A76:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function emu_CustomTimer_AddHandler()
 *
 * @name emu_CustomTimer_AddHandler
 * @implements 2756:0A81:0022:9F5C ()
 * @implements 2756:0A8E:0015:4ECC
 * @implements 2756:0AA3:0030:D440
 * @implements 2756:0AD3:000A:EC64
 * @implements 2756:0ADD:0022:2C19
 * @implements 2756:0AFF:0011:9F12
 * @implements 2756:0B10:0016:04AE
 * @implements 2756:0B1F:0007:3FBD
 * @implements 2756:0B26:0005:C48A
 *
 * Called From: 1DD7:03AB:000D:7940
 * Called From: 1DD7:138A:0014:469E
 * Called From: 2756:0DA5:0010:D71A
 */
void emu_CustomTimer_AddHandler()
{
l__0A81:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cx = emu_ds;
	emu_bx = 0x0;
l__0A8E:
	emu_cmpw(&emu_get_memory16(emu_cs, emu_bx, 0x6E), 0x0);
	if (emu_get_memory16(emu_cs, emu_bx, 0x6E) == 0x0) goto l__0AA3;
	emu_addw(&emu_bx, 0x2);
	emu_cmpw(&emu_bx, 0x20);
	if (emu_bx < 0x20) goto l__0A8E;
	emu_ax = 0xFFFF;
	goto l__0B1F;
l__0AA3:
	emu_ax = emu_bx;
	emu_shrw(&emu_ax, 0x1);
	emu_get_memory16(emu_cs, emu_bx, 0x6E) = 0x1;
	emu_get_memory16(emu_cs, emu_bx, 0x4C) = emu_cx;
	emu_shlw(&emu_bx, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_cs, emu_bx, 0x8) = emu_si;
	emu_get_memory16(emu_cs, emu_bx, 0xA) = emu_ds;
	emu_incw(&emu_get_memory16(emu_cs, 0x00, 0x4));
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x4), 0x1);
	if (emu_get_memory16(emu_cs, 0x00, 0x4) != 0x1) goto l__0B1F;
	emu_push(emu_ax);
	emu_push(0x0AD3); f__2756_05E6_0038_06ED();
l__0AD3:
	emu_get_memory16(emu_cs, 0x00, 0x8E) = 0x1;
	emu_push(0x0ADD); f__2756_0629_0049_2D48();
l__0ADD:
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0xD68D;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x10;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0AFF); f__2756_0A05_003D_0C0C();
l__0AFF:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x10;
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0B10); f__2756_0A59_0023_D969();
l__0B10:
	emu_addw(&emu_sp, 0x2);
	emu_pop(&emu_ax);
	emu_bx = emu_ax;
	emu_shlw(&emu_bx, 0x1);
	emu_get_memory16(emu_cs, emu_bx, 0x6E) = 0x1;
l__0B1F:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0B26); f__2756_0B20_0001_6780();
l__0B26:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2756_0B20_0001_6780()
 *
 * @name f__2756_0B20_0001_6780
 * @implements 2756:0B20:0001:6780 ()
 *
 * Called From: 2756:0B23:0016:04AE
 * Called From: 2756:0B23:0007:3FBD
 */
void f__2756_0B20_0001_6780()
{
l__0B20:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0B8F_0025_D5D8()
 *
 * @name f__2756_0B8F_0025_D5D8
 * @implements 2756:0B8F:0025:D5D8 ()
 * @implements 2756:0BB4:000C:C1DF
 * @implements 2756:0BC0:000A:191F
 * @implements 2756:0BCA:0005:C48A
 *
 * Called From: 1DD7:03C0:0015:9C30
 * Called From: 1DD7:13DC:0011:3116
 * Called From: 2756:0DC6:0021:A207
 */
void f__2756_0B8F_0025_D5D8()
{
l__0B8F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0xF;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x4240;
	emu_pop(&emu_bp);
	emu_push(0x0BB4); f__2756_06FB_0042_E7A6();
l__0BB4:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0BC0); f__2756_0A05_003D_0C0C();
l__0BC0:
	emu_addw(&emu_sp, 0x6);
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0BCA); f__2756_0BC4_0001_6780();
l__0BCA:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2756_0BC4_0001_6780()
 *
 * @name f__2756_0BC4_0001_6780
 * @implements 2756:0BC4:0001:6780 ()
 *
 * Called From: 2756:0BC7:000A:191F
 */
void f__2756_0BC4_0001_6780()
{
l__0BC4:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0C0B_0021_873C()
 *
 * @name f__2756_0C0B_0021_873C
 * @implements 2756:0C0B:0021:873C ()
 * @implements 2756:0C2C:0005:6143
 *
 * Called From: 1DD7:1451:000B:4AA6
 * Called From: 2756:0CA9:0029:2392
 * Called From: 2756:0D7C:000E:5C1B
 */
void f__2756_0C0B_0021_873C()
{
l__0C0B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x2756;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x888;
	emu_pop(&emu_bp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0x64;
	emu_push(emu_cs);
	emu_push(0x0C2C); emu_Drivers_CallFunction();
l__0C2C:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2756_0C31_0037_2A81()
 *
 * @name f__2756_0C31_0037_2A81
 * @implements 2756:0C31:0037:2A81 ()
 * @implements 2756:0C41:0027:648B
 * @implements 2756:0C68:0044:6D99
 * @implements 2756:0C83:0029:2392
 * @implements 2756:0CAC:0023:062D
 * @implements 2756:0CCF:0006:D88A
 *
 * Called From: 1DD7:1432:0010:2628
 */
void f__2756_0C31_0037_2A81()
{
l__0C31:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_pushf();
	emu_cli();
	emu_get_memory16(emu_cs, 0x00, 0x1AC) = 0x0;
l__0C41:
	emu_si = emu_get_memory16(emu_cs, 0x00, 0x1AC);
	emu_shlw(&emu_si, 0x1);
	emu_shlw(&emu_si, 0x1);
	emu_ax = emu_get_memory16(emu_cs, emu_si, 0x128);
	emu_orw(&emu_ax, emu_get_memory16(emu_cs, emu_si, 0x12A));
	if (emu_ax == 0) goto l__0C68;
	emu_incw(&emu_get_memory16(emu_cs, 0x00, 0x1AC));
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x1AC), 0x10);
	if (emu_get_memory16(emu_cs, 0x00, 0x1AC) != 0x10) goto l__0C41;
	emu_ax = 0xFFFF;
	/* Unresolved jump */ emu_ip = 0x0CC8; emu_last_cs = 0x2756; emu_last_ip = 0x0C66; emu_last_length = 0x0027; emu_last_crc = 0x648B; emu_call();
l__0C68:
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_di, 0x3), 0x4944);
	if (emu_get_memory16(emu_es, emu_di, 0x3) == 0x4944) {
		emu_cmpw(&emu_get_memory16(emu_es, emu_di, 0x5), 0x5047);
		if (emu_get_memory16(emu_es, emu_di, 0x5) == 0x5047) {
			emu_cmpw(&emu_get_memory16(emu_es, emu_di, 0x7), 0x4B41);
			if (emu_get_memory16(emu_es, emu_di, 0x7) == 0x4B41) { /* Unresolved jump */ emu_ip = 0x0CD5; emu_last_cs = 0x2756; emu_last_ip = 0x0C81; emu_last_length = 0x0044; emu_last_crc = 0x6D99; emu_call(); return; }
		}
	}
l__0C83:
	emu_ax = 0xFFFF;
	emu_cmpw(&emu_get_memory16(emu_es, emu_di, 0x2), 0x6F43);
	if (emu_get_memory16(emu_es, emu_di, 0x2) != 0x6F43) { /* Unresolved jump */ emu_ip = 0x0CC8; emu_last_cs = 0x2756; emu_last_ip = 0x0C8C; emu_last_length = 0x0029; emu_last_crc = 0x2392; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_es, emu_di, 0x4), 0x7970);
	if (emu_get_memory16(emu_es, emu_di, 0x4) != 0x7970) { /* Unresolved jump */ emu_ip = 0x0CC8; emu_last_cs = 0x2756; emu_last_ip = 0x0C94; emu_last_length = 0x0029; emu_last_crc = 0x2392; emu_call(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_es, emu_di, 0x0));
	emu_get_memory16(emu_cs, emu_si, 0x128) = emu_di;
	emu_get_memory16(emu_cs, emu_si, 0x12A) = emu_es;
	emu_push(emu_get_memory16(emu_cs, 0x00, 0x1AC));
	emu_push(emu_cs);
	emu_push(0x0CAC); f__2756_0C0B_0021_873C();
l__0CAC:
	emu_addw(&emu_sp, 0x2);
	emu_es = emu_dx;
	emu_di = emu_ax;
	emu_orw(&emu_dx, emu_ax);
	emu_ax = 0xFFFF;
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0CC8; emu_last_cs = 0x2756; emu_last_ip = 0x0CB8; emu_last_length = 0x0023; emu_last_crc = 0x062D; emu_call(); return; }
	emu_dx = emu_get_memory16(emu_es, emu_di, 0x0);
	emu_cmpw(&emu_dx, emu_get_memory16(emu_cs, 0x00, 0x3BC));
	if (emu_dx > emu_get_memory16(emu_cs, 0x00, 0x3BC)) { /* Unresolved jump */ emu_ip = 0x0CC8; emu_last_cs = 0x2756; emu_last_ip = 0x0CC2; emu_last_length = 0x0023; emu_last_crc = 0x062D; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x1AC);
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0CCF); f__2756_0CC9_0001_6780();
l__0CCF:
	emu_pop(&emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2756_0CC9_0001_6780()
 *
 * @name f__2756_0CC9_0001_6780
 * @implements 2756:0CC9:0001:6780 ()
 *
 * Called From: 2756:0CCC:0023:062D
 */
void f__2756_0CC9_0001_6780()
{
l__0CC9:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0D12_0042_A9FA()
 *
 * @name f__2756_0D12_0042_A9FA
 * @implements 2756:0D12:0042:A9FA ()
 * @implements 2756:0D4D:0007:3FBD
 * @implements 2756:0D54:0005:C48A
 *
 * Called From: 1DD7:15D3:0012:C55E
 * Called From: 1DD7:1719:000E:F8EB
 */
void f__2756_0D12_0042_A9FA()
{
l__0D12:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_bx, 0x10);
	if (emu_bx < 0x10) {
		emu_shlw(&emu_bx, 0x1);
		emu_shlw(&emu_bx, 0x1);
		emu_get_memory16(emu_cs, emu_bx, 0x128) = 0x0;
		emu_get_memory16(emu_cs, emu_bx, 0x12A) = 0x0;
		emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x462), 0x0);
		if (emu_get_memory16(emu_cs, 0x00, 0x462) != 0x0) {
			emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
			emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x460));
			if (emu_ax == emu_get_memory16(emu_cs, 0x00, 0x460)) {
				emu_get_memory16(emu_cs, 0x00, 0x462) = 0x0;
			}
		}
	}
l__0D4D:
	emu_orb(&emu_bh, 0x0);
	emu_push(emu_cs);
	emu_push(0x0D54); f__2756_0D4E_0001_6780();
l__0D54:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2756_0D4E_0001_6780()
 *
 * @name f__2756_0D4E_0001_6780
 * @implements 2756:0D4E:0001:6780 ()
 *
 * Called From: 2756:0D51:0007:3FBD
 */
void f__2756_0D4E_0001_6780()
{
l__0D4E:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0E2A_0006_85C8()
 *
 * @name f__2756_0E2A_0006_85C8
 * @implements 2756:04F8:0009:907D ()
 * @implements 2756:0E2A:0006:85C8
 *
 * Called From: 1DD7:0384:001B:8CE5
 */
void f__2756_0E2A_0006_85C8()
{
	goto l__0E2A;
	emu_movw(&emu_bx, emu_sp);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bx, 0x4));
	emu_calli(-0x45, 0x0501, 0x04FE);
l__0E2A:
	emu_ax = 0x7B;
	emu_Drivers_CallFunction(); return;
}

/**
 * Decompiled function f__2756_0E36_0006_85ED()
 *
 * @name f__2756_0E36_0006_85ED
 * @implements 2756:04F8:0009:907D ()
 * @implements 2756:0E36:0006:85ED
 *
 * Called From: 1DD7:01F9:0013:9C3C
 */
void f__2756_0E36_0006_85ED()
{
	goto l__0E36;
	emu_movw(&emu_bx, emu_sp);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bx, 0x4));
	emu_calli(-0x45, 0x0501, 0x04FE);
l__0E36:
	emu_ax = 0x7C;
	emu_Drivers_CallFunction(); return;
}

/**
 * Decompiled function f__2756_0E3C_0006_05E7()
 *
 * @name f__2756_0E3C_0006_05E7
 * @implements 2756:04F8:0009:907D ()
 * @implements 2756:0E3C:0006:05E7
 *
 * Called From: 1DD7:0390:000C:E638
 */
void f__2756_0E3C_0006_05E7()
{
	goto l__0E3C;
	emu_movw(&emu_bx, emu_sp);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bx, 0x4));
	emu_calli(-0x45, 0x0501, 0x04FE);
l__0E3C:
	emu_ax = 0x7D;
	emu_Drivers_CallFunction(); return;
}

/**
 * Decompiled function f__2756_0E42_0006_85FE()
 *
 * @name f__2756_0E42_0006_85FE
 * @implements 2756:04F8:0009:907D ()
 * @implements 2756:0E42:0006:85FE
 *
 * Called From: 1DD7:01BB:000E:58D9
 */
void f__2756_0E42_0006_85FE()
{
	goto l__0E42;
	emu_movw(&emu_bx, emu_sp);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bx, 0x4));
	emu_calli(-0x45, 0x0501, 0x04FE);
l__0E42:
	emu_ax = 0x7E;
	emu_Drivers_CallFunction(); return;
}

/**
 * Decompiled function f__2756_0E54_0006_020D()
 *
 * @name f__2756_0E54_0006_020D
 * @implements 2756:04F8:0009:907D ()
 * @implements 2756:0E54:0006:020D
 *
 * Called From: 1DD7:02B6:0013:5E4E
 */
void f__2756_0E54_0006_020D()
{
	goto l__0E54;
	emu_movw(&emu_bx, emu_sp);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bx, 0x4));
	emu_calli(-0x45, 0x0501, 0x04FE);
l__0E54:
	emu_ax = 0x81;
	emu_Drivers_CallFunction(); return;
}

/**
 * Decompiled function f__2756_0E72_0006_82BA()
 *
 * @name f__2756_0E72_0006_82BA
 * @implements 2756:04F8:0009:907D ()
 * @implements 2756:0E72:0006:82BA
 *
 * Called From: 1DD7:0532:002A:9046
 * Called From: 1DD7:0532:003C:DF0B
 * Called From: 1DD7:096F:0020:62CD
 * Called From: 1DD7:096F:0028:5495
 */
void f__2756_0E72_0006_82BA()
{
	goto l__0E72;
	emu_movw(&emu_bx, emu_sp);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bx, 0x4));
	emu_calli(-0x45, 0x0501, 0x04FE);
l__0E72:
	emu_ax = 0x97;
	emu_Drivers_CallFunction(); return;
}

/**
 * Decompiled function f__2756_0E78_0006_02FC()
 *
 * @name f__2756_0E78_0006_02FC
 * @implements 2756:04F8:0009:907D ()
 * @implements 2756:0E78:0006:02FC
 *
 * Called From: 1DD7:04F6:0019:FAFC
 * Called From: 1DD7:0947:000F:FCBA
 * Called From: 1DD7:0A22:0018:FA0A
 * Called From: 1DD7:0AA3:000F:FCBA
 * Called From: 1DD7:1054:000F:FCBA
 * Called From: 1DD7:1234:0018:FA0A
 */
void f__2756_0E78_0006_02FC()
{
	goto l__0E78;
	emu_movw(&emu_bx, emu_sp);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bx, 0x4));
	emu_calli(-0x45, 0x0501, 0x04FE);
l__0E78:
	emu_ax = 0x98;
	emu_Drivers_CallFunction(); return;
}

/**
 * Decompiled function f__2756_0E8A_0006_82E0()
 *
 * @name f__2756_0E8A_0006_82E0
 * @implements 2756:04F8:0009:907D ()
 * @implements 2756:0E8A:0006:82E0
 *
 * Called From: 1DD7:0D54:000E:E9B7
 */
void f__2756_0E8A_0006_82E0()
{
	goto l__0E8A;
	emu_movw(&emu_bx, emu_sp);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bx, 0x4));
	emu_calli(-0x45, 0x0501, 0x04FE);
l__0E8A:
	emu_ax = 0x9B;
	emu_Drivers_CallFunction(); return;
}

/**
 * Decompiled function f__2756_0EA8_0006_0360()
 *
 * @name f__2756_0EA8_0006_0360
 * @implements 2756:04F8:0009:907D ()
 * @implements 2756:0EA8:0006:0360
 *
 * Called From: 1DD7:0577:001B:056D
 * Called From: 1DD7:0993:0011:8F49
 */
void f__2756_0EA8_0006_0360()
{
	goto l__0EA8;
	emu_movw(&emu_bx, emu_sp);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bx, 0x4));
	emu_calli(-0x45, 0x0501, 0x04FE);
l__0EA8:
	emu_ax = 0xAA;
	emu_Drivers_CallFunction(); return;
}

/**
 * Decompiled function f__2756_0EAE_0006_836B()
 *
 * @name f__2756_0EAE_0006_836B
 * @implements 2756:04F8:0009:907D ()
 * @implements 2756:0EAE:0006:836B
 *
 * Called From: 1DD7:04DD:0028:EBD0
 * Called From: 1DD7:0938:0014:C1EF
 * Called From: 1DD7:0A0A:0026:5877
 * Called From: 1DD7:0A94:001E:4A5A
 * Called From: 1DD7:1045:001E:4902
 * Called From: 1DD7:121C:0026:5877
 */
void f__2756_0EAE_0006_836B()
{
	goto l__0EAE;
	emu_movw(&emu_bx, emu_sp);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bx, 0x4));
	emu_calli(-0x45, 0x0501, 0x04FE);
l__0EAE:
	emu_ax = 0xAB;
	emu_Drivers_CallFunction(); return;
}

/**
 * Decompiled function f__2756_0ECC_0006_03A3()
 *
 * @name f__2756_0ECC_0006_03A3
 * @implements 2756:04F8:0009:907D ()
 * @implements 2756:0ECC:0006:03A3
 *
 * Called From: 1DD7:05A2:002B:11DD
 * Called From: 1DD7:09B4:0021:161D
 * Called From: 1DD7:0B73:0025:36F7
 */
void f__2756_0ECC_0006_03A3()
{
	goto l__0ECC;
	emu_movw(&emu_bx, emu_sp);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bx, 0x4));
	emu_calli(-0x45, 0x0501, 0x04FE);
l__0ECC:
	emu_ax = 0xB1;
	emu_Drivers_CallFunction(); return;
}
