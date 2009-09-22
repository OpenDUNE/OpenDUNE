/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2756_04BC_002C_80A5()
 *
 * @name f__2756_04BC_002C_80A5
 * @implements 2756:04BC:002C:80A5 ()
 *
 * Called From: 2756:04FE:0009:907D
 */
void f__2756_04BC_002C_80A5()
{
	emu_push(emu_es);
	emu_cmpws(&emu_bx.x, 0x10);
	if (!emu_flags.cf) { f__2756_04E8_0008_1C51(); return; }
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_cs, emu_bx.x,  0x128));
	emu_movw(&emu_cx.x, emu_es);
	emu_orw(&emu_cx.x, emu_bx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x04E8; emu_last_cs = 0x2756; emu_last_ip = 0x04CF; emu_last_length = 0x002C; emu_last_crc = 0x80A5; emu_call(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_cx.x, emu_ax.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x04F0; emu_last_cs = 0x2756; emu_last_ip = 0x04D6; emu_last_length = 0x002C; emu_last_crc = 0x80A5; emu_call(); return; }
	emu_addws(&emu_bx.x, 0x4);
	emu_cmpws(&emu_cx.x, 0xFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x04D1; emu_last_cs = 0x2756; emu_last_ip = 0x04DE; emu_last_length = 0x002C; emu_last_crc = 0x80A5; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_dx.x, 0x0);
	emu_pop(&emu_es);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_04E8_0008_1C51()
 *
 * @name f__2756_04E8_0008_1C51
 * @implements 2756:04E8:0008:1C51 ()
 *
 * Called From: 2756:04C0:002C:80A5
 */
void f__2756_04E8_0008_1C51()
{
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_dx.x, 0x0);
	emu_pop(&emu_es);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_04F8_0009_907D()
 *
 * @name f__2756_04F8_0009_907D
 * @implements 2756:04F8:0009:907D ()
 *
 * Called From: 2756:0E39:0006:85ED
 */
void f__2756_04F8_0009_907D()
{
	emu_movw(&emu_bx.x, emu_sp);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bx.x,  0x4));
	emu_push(0x0501); f__2756_04BC_002C_80A5();
	f__2756_0501_000D_ABC3();
}

/**
 * Decompiled function f__2756_0501_000D_ABC3()
 *
 * @name f__2756_0501_000D_ABC3
 * @implements 2756:0501:000D:ABC3 ()
 *
 * Called From: 2756:0501:0009:907D
 */
void f__2756_0501_000D_ABC3()
{
	emu_cmpw(&emu_ax.x, 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x050B; emu_last_cs = 0x2756; emu_last_ip = 0x0504; emu_last_length = 0x000D; emu_last_crc = 0xABC3; emu_call(); return; }
	emu_cmpws(&emu_dx.x, 0x0);
	if (emu_flags.zf) { f__2756_050E_0001_6580(); return; }
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2756_050E_0001_6580()
 *
 * @name f__2756_050E_0001_6580
 * @implements 2756:050E:0001:6580 ()
 *
 * Called From: 2756:0509:000D:ABC3
 */
void f__2756_050E_0001_6580()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2756_050F_000B_0871()
 *
 * @name f__2756_050F_000B_0871
 * @implements 2756:050F:000B:0871 ()
 *
 * Called From: 0000:0000:0000:0000
 */
void f__2756_050F_000B_0871()
{
	emu_cmpws(&emu_get_memory16(emu_cs, 0x00,  0x6), 0x0);
	if (emu_flags.zf) { f__2756_051A_006F_3626(); return; }
	/* Unresolved jump */ emu_ip = 0x05C9; emu_last_cs = 0x2756; emu_last_ip = 0x0517; emu_last_length = 0x000B; emu_last_crc = 0x0871; emu_call();
}

/**
 * Decompiled function f__2756_051A_006F_3626()
 *
 * @name f__2756_051A_006F_3626
 * @implements 2756:051A:006F:3626 ()
 *
 * Called From: 2756:0515:000B:0871
 */
void f__2756_051A_006F_3626()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6), 0x1);
	emu_cld();
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_bp);
	emu_push(emu_es);
	emu_push(emu_ds);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x3B8), emu_ss);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x3BA), emu_sp);
	emu_movw(&emu_ax.x, emu_cs);
	emu_movw(&emu_ss, emu_ax.x);
	emu_movw(&emu_sp, 0x3B8);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x120), 0x0);
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x120));
	emu_shlw(&emu_si, 0x1);
	emu_cmpws(&emu_get_memory16(emu_cs, emu_si,  0x6E), 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05A2; emu_last_cs = 0x2756; emu_last_ip = 0x0550; emu_last_length = 0x006F; emu_last_crc = 0x3626; emu_call(); return; }
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, emu_si,  0x4C));
	emu_shlw(&emu_si, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_si,  0x90));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, emu_si,  0x92));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x118));
	emu_adcw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x11A));
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, emu_si,  0xD6));
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x057D; emu_last_cs = 0x2756; emu_last_ip = 0x0572; emu_last_length = 0x006F; emu_last_crc = 0x3626; emu_call(); return; }
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0589; emu_last_cs = 0x2756; emu_last_ip = 0x0574; emu_last_length = 0x006F; emu_last_crc = 0x3626; emu_call(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, emu_si,  0xD4));
	if (!emu_flags.cf) { f__2756_0589_0019_7966(); return; }
	emu_movw(&emu_get_memory16(emu_cs, emu_si,  0x90), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, emu_si,  0x92), emu_dx.x);
	/* Unresolved jump */ emu_ip = 0x05A2; emu_last_cs = 0x2756; emu_last_ip = 0x0587; emu_last_length = 0x006F; emu_last_crc = 0x3626; emu_call();
}

/**
 * Decompiled function f__2756_0543_0046_62C4()
 *
 * @name f__2756_0543_0046_62C4
 * @implements 2756:0543:0046:62C4 ()
 *
 * Called From: 2756:05AD:0040:EA7C
 */
void f__2756_0543_0046_62C4()
{
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x120));
	emu_shlw(&emu_si, 0x1);
	emu_cmpws(&emu_get_memory16(emu_cs, emu_si,  0x6E), 0x2);
	if (!emu_flags.zf) { f__2756_05A2_0040_EA7C(); return; }
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, emu_si,  0x4C));
	emu_shlw(&emu_si, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_si,  0x90));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, emu_si,  0x92));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x118));
	emu_adcw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x11A));
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, emu_si,  0xD6));
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x057D; emu_last_cs = 0x2756; emu_last_ip = 0x0572; emu_last_length = 0x0046; emu_last_crc = 0x62C4; emu_call(); return; }
	if (!(emu_flags.cf || emu_flags.zf)) { f__2756_0589_0019_7966(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, emu_si,  0xD4));
	if (!emu_flags.cf) { f__2756_0589_0019_7966(); return; }
	emu_movw(&emu_get_memory16(emu_cs, emu_si,  0x90), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, emu_si,  0x92), emu_dx.x);
	f__2756_05A2_0040_EA7C(); return;
}

/**
 * Decompiled function f__2756_0589_0019_7966()
 *
 * @name f__2756_0589_0019_7966
 * @implements 2756:0589:0019:7966 ()
 *
 * Called From: 2756:0574:0046:62C4
 * Called From: 2756:057B:006F:3626
 * Called From: 2756:057B:0046:62C4
 */
void f__2756_0589_0019_7966()
{
	emu_subw(&emu_ax.x, emu_get_memory16(emu_cs, emu_si,  0xD4));
	emu_sbbw(&emu_dx.x, emu_get_memory16(emu_cs, emu_si,  0xD6));
	emu_movw(&emu_get_memory16(emu_cs, emu_si,  0x90), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, emu_si,  0x92), emu_dx.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_si,  0x8);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_cs, emu_si,  0xA);
	emu_push(0x05A2);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x27560622: f__2756_0622_0006_823A(); break;
		case 0x2BD10006: f__2BD1_0006_004A_CD10(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2756; emu_last_ip = 0x059D; emu_last_length = 0x0019; emu_last_crc = 0x7966;
			emu_call();
			return;
	}
	f__2756_05A2_0040_EA7C();
}

/**
 * Decompiled function f__2756_05A2_0040_EA7C()
 *
 * @name f__2756_05A2_0040_EA7C
 * @implements 2756:05A2:0040:EA7C ()
 *
 * Called From: 2756:0550:0046:62C4
 * Called From: 2756:0587:0046:62C4
 * Called From: 2756:05A2:0019:7966
 */
void f__2756_05A2_0040_EA7C()
{
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x120));
	emu_cmpws(&emu_get_memory16(emu_cs, 0x00,  0x120), 0x10);
	if ((emu_flags.cf || emu_flags.zf)) { f__2756_0543_0046_62C4(); return; }
	emu_movw(&emu_ss, emu_get_memory16(emu_cs, 0x00,  0x3B8));
	emu_movw(&emu_sp, emu_get_memory16(emu_cs, 0x00,  0x3BA));
	emu_pop(&emu_ds);
	emu_pop(&emu_es);
	emu_pop(&emu_bp);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6), 0x0);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, 0x20);
	emu_outb(0x20, emu_ax.l);
	emu_pop(&emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00,  0x1B4), 0x6554);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05E2; emu_last_cs = 0x2756; emu_last_ip = 0x05D6; emu_last_length = 0x0040; emu_last_crc = 0xEA7C; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00,  0x1B6), 0x7473);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05E2; emu_last_cs = 0x2756; emu_last_ip = 0x05DF; emu_last_length = 0x0040; emu_last_crc = 0xEA7C; emu_call(); return; }

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
 *
 * Called From: 2756:0AD0:0030:D440
 */
void f__2756_05E6_0038_06ED()
{
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cld();
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x118), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x11A), 0xFFFF);
	emu_push(emu_cs);
	emu_pop(&emu_es);
	emu_movw(&emu_di, 0x6E);
	emu_movw(&emu_cx.x, 0x11);
	emu_movw(&emu_ax.x, 0x0);
	emu_rep_stosw();
	emu_movw(&emu_di, 0x90);
	emu_movw(&emu_cx.x, 0x22);
	emu_rep_stosw();
	emu_movw(&emu_di, 0xD4);
	emu_movw(&emu_cx.x, 0x22);
	emu_rep_stosw();
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x061E); f__2756_0618_0001_6780();
	f__2756_061E_0004_5A42();
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

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_061E_0004_5A42()
 *
 * @name f__2756_061E_0004_5A42
 * @implements 2756:061E:0004:5A42 ()
 *
 * Called From: 2756:061E:0038:06ED
 */
void f__2756_061E_0004_5A42()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_0622_0006_823A()
 *
 * @name f__2756_0622_0006_823A
 * @implements 2756:0622:0006:823A ()
 *
 * Called From: 2756:059D:0019:7966
 */
void f__2756_0622_0006_823A()
{
	emu_pushf();

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, 0x00,  0x11C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_cs, 0x00,  0x11E);
	emu_push(0x0628);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x00700040: Interrupt_Timer(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2756; emu_last_ip = 0x0623; emu_last_length = 0x0006; emu_last_crc = 0x823A;
			emu_call();
			return;
	}
	f__2756_0628_0001_6180();
}

/**
 * Decompiled function f__2756_0628_0001_6180()
 *
 * @name f__2756_0628_0001_6180
 * @implements 2756:0628:0001:6180 ()
 *
 * Called From: 2756:0628:0006:823A
 */
void f__2756_0628_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_0629_0049_2D48()
 *
 * @name f__2756_0629_0049_2D48
 * @implements 2756:0629:0049:2D48 ()
 *
 * Called From: 2756:0ADA:000A:EC64
 */
void f__2756_0629_0049_2D48()
{
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_pushf();
	emu_cli();
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, 0x00,  0x20));
	emu_movw(&emu_es, emu_get_memory16(emu_es, 0x00,  0x22));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x11C), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x11E), emu_es);
	emu_movw(&emu_bx.x, 0x622);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x48), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x4A), emu_cs);
	emu_movw(&emu_ax.x, emu_cs);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_dx.x, 0x50F);
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x22), emu_ds);
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x0672); f__2756_066C_0001_6780();
	f__2756_0672_0005_5A7A();
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

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0672_0005_5A7A()
 *
 * @name f__2756_0672_0005_5A7A
 * @implements 2756:0672:0005:5A7A ()
 *
 * Called From: 2756:0672:0049:2D48
 */
void f__2756_0672_0005_5A7A()
{
	emu_pop(&emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_0677_002D_321F()
 *
 * @name f__2756_0677_002D_321F
 * @implements 2756:0677:002D:321F ()
 *
 * Called From: 2756:085F:0006:0827
 */
void f__2756_0677_002D_321F()
{
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_pushf();
	emu_cli();
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x120), 0xFFFF);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x11C));
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x11E));
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x22), emu_ds);
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x06A4); f__2756_069E_0001_6780();
	f__2756_06A4_0005_5A7A();
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

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_06A4_0005_5A7A()
 *
 * @name f__2756_06A4_0005_5A7A
 * @implements 2756:06A4:0005:5A7A ()
 *
 * Called From: 2756:06A4:002D:321F
 */
void f__2756_06A4_0005_5A7A()
{
	emu_pop(&emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_06A9_0015_B76D()
 *
 * @name f__2756_06A9_0015_B76D
 * @implements 2756:06A9:0015:B76D ()
 *
 * Called From: 2756:06F0:0004:E2A8
 * Called From: 2756:06F0:0021:3A37
 * Called From: 2756:0859:0035:3DAA
 */
void f__2756_06A9_0015_B76D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_movb(&emu_ax.l, 0x36);
	emu_outb(0x43, emu_ax.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x126), emu_ax.x);
	f__2756_06BE_0006_E2B1(); return;
}

/**
 * Decompiled function f__2756_06BE_0006_E2B1()
 *
 * @name f__2756_06BE_0006_E2B1
 * @implements 2756:06BE:0006:E2B1 ()
 *
 * Called From: 2756:06BC:0015:B76D
 */
void f__2756_06BE_0006_E2B1()
{
	emu_outb(0x40, emu_ax.l);
	emu_movb(&emu_ax.l, emu_ax.h);
	f__2756_06C4_0009_7FCE(); return;
}

/**
 * Decompiled function f__2756_06C4_0009_7FCE()
 *
 * @name f__2756_06C4_0009_7FCE
 * @implements 2756:06C4:0009:7FCE ()
 *
 * Called From: 2756:06C2:0006:E2B1
 */
void f__2756_06C4_0009_7FCE()
{
	emu_outb(0x40, emu_ax.l);
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x06CD); f__2756_06C7_0001_6780();
	f__2756_06CD_0005_C08A();
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

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_06CD_0005_C08A()
 *
 * @name f__2756_06CD_0005_C08A
 * @implements 2756:06CD:0005:C08A ()
 *
 * Called From: 2756:06CD:0009:7FCE
 */
void f__2756_06CD_0005_C08A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_06D2_0021_3A37()
 *
 * @name f__2756_06D2_0021_3A37
 * @implements 2756:06D2:0021:3A37 ()
 *
 * Called From: 2756:07BC:0014:ACDF
 */
void f__2756_06D2_0021_3A37()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x0);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x4), 0xD68D);
	if (!emu_flags.cf) { f__2756_06EF_0004_E2A8(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movw(&emu_bx.x, 0x20BC);
	emu_movw(&emu_cx.x, 0x2710);
	emu_mulw(&emu_ax.x, emu_cx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_push(emu_ax.x);
	emu_push(0x06F3); f__2756_06A9_0015_B76D();
	f__2756_06F3_0008_4A02();
}

/**
 * Decompiled function f__2756_06EF_0004_E2A8()
 *
 * @name f__2756_06EF_0004_E2A8
 * @implements 2756:06EF:0004:E2A8 ()
 *
 * Called From: 2756:06E0:0021:3A37
 */
void f__2756_06EF_0004_E2A8()
{
	emu_push(emu_ax.x);
	emu_push(0x06F3); f__2756_06A9_0015_B76D();
	f__2756_06F3_0008_4A02();
}

/**
 * Decompiled function f__2756_06F3_0008_4A02()
 *
 * @name f__2756_06F3_0008_4A02
 * @implements 2756:06F3:0008:4A02 ()
 *
 * Called From: 2756:06F3:0004:E2A8
 * Called From: 2756:06F3:0021:3A37
 */
void f__2756_06F3_0008_4A02()
{
	emu_addws(&emu_sp, 0x2);
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
 *
 * Called From: 2756:0BB1:0025:D5D8
 */
void f__2756_06FB_0042_E7A6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0719; emu_last_cs = 0x2756; emu_last_ip = 0x070F; emu_last_length = 0x0042; emu_last_crc = 0xE7A6; emu_call(); return; }
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x073D; emu_last_cs = 0x2756; emu_last_ip = 0x0713; emu_last_length = 0x0042; emu_last_crc = 0xE7A6; emu_call(); return; }
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x073D; emu_last_cs = 0x2756; emu_last_ip = 0x0717; emu_last_length = 0x0042; emu_last_crc = 0xE7A6; emu_call(); return; }
	emu_movw(&emu_bp, emu_cx.x);
	emu_movw(&emu_cx.x, 0x20);
	emu_xorw(&emu_di, emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_rclw(&emu_dx.x, 0x1);
	emu_rclw(&emu_si, 0x1);
	emu_rclw(&emu_di, 0x1);
	emu_cmpw(&emu_di, emu_bp);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0739; emu_last_cs = 0x2756; emu_last_ip = 0x072C; emu_last_length = 0x0042; emu_last_crc = 0xE7A6; emu_call(); return; }
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0734; emu_last_cs = 0x2756; emu_last_ip = 0x072E; emu_last_length = 0x0042; emu_last_crc = 0xE7A6; emu_call(); return; }
	emu_cmpw(&emu_si, emu_bx.x);
	if (emu_flags.cf) { f__2756_0739_0004_FED4(); return; }
	emu_subw(&emu_si, emu_bx.x);
	emu_sbbw(&emu_di, emu_bp);
	emu_incw(&emu_ax.x);
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x0722; emu_last_cs = 0x2756; emu_last_ip = 0x0739; emu_last_length = 0x0042; emu_last_crc = 0xE7A6; emu_call(); }
	/* Unresolved jump */ emu_ip = 0x0741; emu_last_cs = 0x2756; emu_last_ip = 0x073B; emu_last_length = 0x0042; emu_last_crc = 0xE7A6; emu_call();
}

/**
 * Decompiled function f__2756_0722_001B_1899()
 *
 * @name f__2756_0722_001B_1899
 * @implements 2756:0722:001B:1899 ()
 *
 * Called From: 2756:0739:0004:FED4
 * Called From: 2756:0739:001B:1899
 */
void f__2756_0722_001B_1899()
{
	emu_shlw(&emu_ax.x, 0x1);
	emu_rclw(&emu_dx.x, 0x1);
	emu_rclw(&emu_si, 0x1);
	emu_rclw(&emu_di, 0x1);
	emu_cmpw(&emu_di, emu_bp);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0739; emu_last_cs = 0x2756; emu_last_ip = 0x072C; emu_last_length = 0x001B; emu_last_crc = 0x1899; emu_call(); return; }
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0734; emu_last_cs = 0x2756; emu_last_ip = 0x072E; emu_last_length = 0x001B; emu_last_crc = 0x1899; emu_call(); return; }
	emu_cmpw(&emu_si, emu_bx.x);
	if (emu_flags.cf) { f__2756_0739_0004_FED4(); return; }
	emu_subw(&emu_si, emu_bx.x);
	emu_sbbw(&emu_di, emu_bp);
	emu_incw(&emu_ax.x);
	if (--emu_cx.x != 0) { f__2756_0722_001B_1899(); return; }
	/* Unresolved jump */ emu_ip = 0x0741; emu_last_cs = 0x2756; emu_last_ip = 0x073B; emu_last_length = 0x001B; emu_last_crc = 0x1899; emu_call();
}

/**
 * Decompiled function f__2756_0739_0004_FED4()
 *
 * @name f__2756_0739_0004_FED4
 * @implements 2756:0739:0004:FED4 ()
 *
 * Called From: 2756:0732:0042:E7A6
 * Called From: 2756:0732:001B:1899
 */
void f__2756_0739_0004_FED4()
{
	if (--emu_cx.x != 0) { f__2756_0722_001B_1899(); return; }
	f__2756_0741_0005_C08A(); return;
}

/**
 * Decompiled function f__2756_0741_0005_C08A()
 *
 * @name f__2756_0741_0005_C08A
 * @implements 2756:0741:0005:C08A ()
 *
 * Called From: 2756:073B:0004:FED4
 */
void f__2756_0741_0005_C08A()
{
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
 *
 * Called From: 2756:0A3F:003D:0C0C
 */
void f__2756_0746_0079_B2E2()
{
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_cld();
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x122), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x124), 0xFFFF);
	emu_movw(&emu_si, 0x0);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpws(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x0);
	if (emu_flags.zf) { f__2756_078E_0031_4A01(); return; }
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0xD4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, emu_bx.x,  0xD6));
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x124));
	if (emu_flags.cf) { f__2756_0785_003A_7B1B(); return; }
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x078E; emu_last_cs = 0x2756; emu_last_ip = 0x077C; emu_last_length = 0x0079; emu_last_crc = 0xB2E2; emu_call(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x122));
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x078E; emu_last_cs = 0x2756; emu_last_ip = 0x0783; emu_last_length = 0x0079; emu_last_crc = 0xB2E2; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x122), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x124), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x075D; emu_last_cs = 0x2756; emu_last_ip = 0x0792; emu_last_length = 0x0079; emu_last_crc = 0xB2E2; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x122));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x124));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x118));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07AB; emu_last_cs = 0x2756; emu_last_ip = 0x07A2; emu_last_length = 0x0079; emu_last_crc = 0xB2E2; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x11A));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07CF; emu_last_cs = 0x2756; emu_last_ip = 0x07A9; emu_last_length = 0x0079; emu_last_crc = 0xB2E2; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x120), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x118), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x11A), emu_dx.x);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(0x07BF); emu_ip = 0x06D2; emu_last_cs = 0x2756; emu_last_ip = 0x07BC; emu_last_length = 0x0079; emu_last_crc = 0xB2E2; emu_call();
	f__2756_07BF_0017_1417();
}

/**
 * Decompiled function f__2756_075D_0062_76D1()
 *
 * @name f__2756_075D_0062_76D1
 * @implements 2756:075D:0062:76D1 ()
 *
 * Called From: 2756:0792:0031:4A01
 * Called From: 2756:0792:003A:7B1B
 */
void f__2756_075D_0062_76D1()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpws(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x0);
	if (emu_flags.zf) { f__2756_078E_0031_4A01(); return; }
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0xD4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, emu_bx.x,  0xD6));
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x124));
	if (emu_flags.cf) { f__2756_0785_003A_7B1B(); return; }
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x078E; emu_last_cs = 0x2756; emu_last_ip = 0x077C; emu_last_length = 0x0062; emu_last_crc = 0x76D1; emu_call(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x122));
	if (!emu_flags.cf) { f__2756_078E_0031_4A01(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x122), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x124), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x075D; emu_last_cs = 0x2756; emu_last_ip = 0x0792; emu_last_length = 0x0062; emu_last_crc = 0x76D1; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x122));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x124));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x118));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07AB; emu_last_cs = 0x2756; emu_last_ip = 0x07A2; emu_last_length = 0x0062; emu_last_crc = 0x76D1; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x11A));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07CF; emu_last_cs = 0x2756; emu_last_ip = 0x07A9; emu_last_length = 0x0062; emu_last_crc = 0x76D1; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x120), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x118), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x11A), emu_dx.x);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(0x07BF); emu_ip = 0x06D2; emu_last_cs = 0x2756; emu_last_ip = 0x07BC; emu_last_length = 0x0062; emu_last_crc = 0x76D1; emu_call();
	f__2756_07BF_0017_1417();
}

/**
 * Decompiled function f__2756_0785_003A_7B1B()
 *
 * @name f__2756_0785_003A_7B1B
 * @implements 2756:0785:003A:7B1B ()
 *
 * Called From: 2756:077A:0062:76D1
 * Called From: 2756:077A:0079:B2E2
 */
void f__2756_0785_003A_7B1B()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x122), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x124), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.cf || emu_flags.zf)) { f__2756_075D_0062_76D1(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x122));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x124));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x118));
	if (!emu_flags.zf) { f__2756_07AB_0014_ACDF(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x11A));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07CF; emu_last_cs = 0x2756; emu_last_ip = 0x07A9; emu_last_length = 0x003A; emu_last_crc = 0x7B1B; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x120), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x118), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x11A), emu_dx.x);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(0x07BF); emu_ip = 0x06D2; emu_last_cs = 0x2756; emu_last_ip = 0x07BC; emu_last_length = 0x003A; emu_last_crc = 0x7B1B; emu_call();
	f__2756_07BF_0017_1417();
}

/**
 * Decompiled function f__2756_078E_0031_4A01()
 *
 * @name f__2756_078E_0031_4A01
 * @implements 2756:078E:0031:4A01 ()
 *
 * Called From: 2756:0767:0079:B2E2
 * Called From: 2756:0767:0062:76D1
 * Called From: 2756:0783:0062:76D1
 */
void f__2756_078E_0031_4A01()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.cf || emu_flags.zf)) { f__2756_075D_0062_76D1(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x122));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x124));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x118));
	if (!emu_flags.zf) { f__2756_07AB_0014_ACDF(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x11A));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07CF; emu_last_cs = 0x2756; emu_last_ip = 0x07A9; emu_last_length = 0x0031; emu_last_crc = 0x4A01; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x120), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x118), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x11A), emu_dx.x);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(0x07BF); emu_ip = 0x06D2; emu_last_cs = 0x2756; emu_last_ip = 0x07BC; emu_last_length = 0x0031; emu_last_crc = 0x4A01; emu_call();
	f__2756_07BF_0017_1417();
}

/**
 * Decompiled function f__2756_07AB_0014_ACDF()
 *
 * @name f__2756_07AB_0014_ACDF
 * @implements 2756:07AB:0014:ACDF ()
 *
 * Called From: 2756:07A2:003A:7B1B
 * Called From: 2756:07A2:0031:4A01
 */
void f__2756_07AB_0014_ACDF()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x120), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x118), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x11A), emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(0x07BF); f__2756_06D2_0021_3A37();
	f__2756_07BF_0017_1417();
}

/**
 * Decompiled function f__2756_07BF_0017_1417()
 *
 * @name f__2756_07BF_0017_1417
 * @implements 2756:07BF:0017:1417 ()
 *
 * Called From: 2756:07BF:0014:ACDF
 */
void f__2756_07BF_0017_1417()
{
	emu_addws(&emu_sp, 0x2);
	emu_push(emu_cs);
	emu_pop(&emu_es);
	emu_movw(&emu_di, 0x90);
	emu_movw(&emu_cx.x, 0x22);
	emu_movw(&emu_ax.x, 0x0);
	emu_rep_stosw();
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x07D6); f__2756_07D0_0001_6780();
	f__2756_07D6_0004_5A42();
}

/**
 * Decompiled function f__2756_07D0_0001_6780()
 *
 * @name f__2756_07D0_0001_6780
 * @implements 2756:07D0:0001:6780 ()
 *
 * Called From: 2756:07D3:0017:1417
 */
void f__2756_07D0_0001_6780()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_07D6_0004_5A42()
 *
 * @name f__2756_07D6_0004_5A42
 * @implements 2756:07D6:0004:5A42 ()
 *
 * Called From: 2756:07D6:0017:1417
 */
void f__2756_07D6_0004_5A42()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2756_07DA_0048_9F5D()
 *
 * @name f__2756_07DA_0048_9F5D
 * @implements 2756:07DA:0048:9F5D ()
 *
 * Called From: 1DD7:039E:0008:D3BD
 */
void f__2756_07DA_0048_9F5D()
{
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_pushf();
	emu_cli();
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x462), 0x0);
	emu_cld();
	emu_movw(&emu_ax.x, emu_cs);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_di, 0x128);
	emu_movw(&emu_cx.x, 0x20);
	emu_movw(&emu_ax.x, 0x0);
	emu_rep_stosw();
	emu_movw(&emu_di, 0x168);
	emu_movw(&emu_cx.x, 0x10);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_rep_stosw();
	emu_movw(&emu_di, 0x188);
	emu_movw(&emu_cx.x, 0x10);
	emu_movw(&emu_ax.x, 0x0);
	emu_rep_stosw();
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x0822); f__2756_081C_0001_6780();
	f__2756_0822_0005_5E7A();
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

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0822_0005_5E7A()
 *
 * @name f__2756_0822_0005_5E7A
 * @implements 2756:0822:0005:5E7A ()
 *
 * Called From: 2756:0822:0048:9F5D
 */
void f__2756_0822_0005_5E7A()
{
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
 * Decompiled function f__2756_0827_0035_3DAA()
 *
 * @name f__2756_0827_0035_3DAA
 * @implements 2756:0827:0035:3DAA ()
 *
 * Called From: 1DD7:0404:000C:8340
 */
void f__2756_0827_0035_3DAA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_bx.x, 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0862; emu_last_cs = 0x2756; emu_last_ip = 0x0835; emu_last_length = 0x0035; emu_last_crc = 0x3DAA; emu_call(); return; }
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpws(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0862; emu_last_cs = 0x2756; emu_last_ip = 0x083F; emu_last_length = 0x0035; emu_last_crc = 0x3DAA; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x0);
	emu_decw(&emu_get_memory16(emu_cs, 0x00,  0x4));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0862; emu_last_cs = 0x2756; emu_last_ip = 0x084D; emu_last_length = 0x0035; emu_last_crc = 0x3DAA; emu_call(); return; }
	emu_push(emu_ax.x);
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0x0);
	emu_pop(&emu_bp);
	emu_push(0x085C); f__2756_06A9_0015_B76D();
	f__2756_085C_0006_0827();
}

/**
 * Decompiled function f__2756_085C_0006_0827()
 *
 * @name f__2756_085C_0006_0827
 * @implements 2756:085C:0006:0827 ()
 *
 * Called From: 2756:085C:0035:3DAA
 */
void f__2756_085C_0006_0827()
{
	emu_addws(&emu_sp, 0x2);
	emu_push(0x0862); f__2756_0677_002D_321F();
	f__2756_0862_0007_3FBD();
}

/**
 * Decompiled function f__2756_0862_0007_3FBD()
 *
 * @name f__2756_0862_0007_3FBD
 * @implements 2756:0862:0007:3FBD ()
 *
 * Called From: 2756:0862:0006:0827
 */
void f__2756_0862_0007_3FBD()
{
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x0869); f__2756_0863_0001_6780();
	f__2756_0869_0005_C48A();
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

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0869_0005_C48A()
 *
 * @name f__2756_0869_0005_C48A
 * @implements 2756:0869:0005:C48A ()
 *
 * Called From: 2756:0869:0007:3FBD
 */
void f__2756_0869_0005_C48A()
{
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
 * Decompiled function f__2756_0A05_003D_0C0C()
 *
 * @name f__2756_0A05_003D_0C0C
 * @implements 2756:0A05:003D:0C0C ()
 *
 * Called From: 2756:0AFC:0022:2C19
 * Called From: 2756:0BBD:000C:C1DF
 */
void f__2756_0A05_003D_0C0C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x6E));
	emu_push(emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0xD4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0xD6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x90), 0x0);
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x92), 0x0);
	emu_push(0x0A42); f__2756_0746_0079_B2E2();
	f__2756_0A42_0012_6E30();
}

/**
 * Decompiled function f__2756_0A42_0012_6E30()
 *
 * @name f__2756_0A42_0012_6E30
 * @implements 2756:0A42:0012:6E30 ()
 *
 * Called From: 2756:0A42:003D:0C0C
 */
void f__2756_0A42_0012_6E30()
{
	emu_pop(&emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), emu_ax.x);
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x0A54); f__2756_0A4E_0001_6780();
	f__2756_0A54_0005_C48A();
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

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0A54_0005_C48A()
 *
 * @name f__2756_0A54_0005_C48A
 * @implements 2756:0A54:0005:C48A ()
 *
 * Called From: 2756:0A54:0012:6E30
 */
void f__2756_0A54_0005_C48A()
{
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
 * Decompiled function f__2756_0A59_0023_D969()
 *
 * @name f__2756_0A59_0023_D969
 * @implements 2756:0A59:0023:D969 ()
 *
 * Called From: 1DD7:03CC:000C:B4EE
 * Called From: 2756:0B0D:0011:9F12
 */
void f__2756_0A59_0023_D969()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpws(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0A75; emu_last_cs = 0x2756; emu_last_ip = 0x0A6C; emu_last_length = 0x0023; emu_last_crc = 0xD969; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x2);
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x0A7C); f__2756_0A76_0001_6780();
	f__2756_0A7C_0005_C48A();
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

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0A7C_0005_C48A()
 *
 * @name f__2756_0A7C_0005_C48A
 * @implements 2756:0A7C:0005:C48A ()
 *
 * Called From: 2756:0A7C:0023:D969
 */
void f__2756_0A7C_0005_C48A()
{
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
 * Decompiled function f__2756_0A81_0022_9F5C()
 *
 * @name f__2756_0A81_0022_9F5C
 * @implements 2756:0A81:0022:9F5C ()
 *
 * Called From: 1DD7:03AB:000D:7940
 */
void f__2756_0A81_0022_9F5C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_movw(&emu_cx.x, emu_ds);
	emu_movw(&emu_bx.x, 0x0);
	emu_cmpws(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x0);
	if (emu_flags.zf) { f__2756_0AA3_0030_D440(); return; }
	emu_addws(&emu_bx.x, 0x2);
	emu_cmpws(&emu_bx.x, 0x20);
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0A8E; emu_last_cs = 0x2756; emu_last_ip = 0x0A9C; emu_last_length = 0x0022; emu_last_crc = 0x9F5C; emu_call(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	/* Unresolved jump */ emu_ip = 0x0B1F; emu_last_cs = 0x2756; emu_last_ip = 0x0AA1; emu_last_length = 0x0022; emu_last_crc = 0x9F5C; emu_call();
}

/**
 * Decompiled function f__2756_0AA3_0030_D440()
 *
 * @name f__2756_0AA3_0030_D440
 * @implements 2756:0AA3:0030:D440 ()
 *
 * Called From: 2756:0A94:0022:9F5C
 */
void f__2756_0AA3_0030_D440()
{
	emu_movw(&emu_ax.x, emu_bx.x);
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x1);
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x4C), emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x8), emu_si);
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0xA), emu_ds);
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x4));
	emu_cmpws(&emu_get_memory16(emu_cs, 0x00,  0x4), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B1F; emu_last_cs = 0x2756; emu_last_ip = 0x0ACD; emu_last_length = 0x0030; emu_last_crc = 0xD440; emu_call(); return; }
	emu_push(emu_ax.x);
	emu_push(0x0AD3); f__2756_05E6_0038_06ED();
	f__2756_0AD3_000A_EC64();
}

/**
 * Decompiled function f__2756_0AD3_000A_EC64()
 *
 * @name f__2756_0AD3_000A_EC64
 * @implements 2756:0AD3:000A:EC64 ()
 *
 * Called From: 2756:0AD3:0030:D440
 */
void f__2756_0AD3_000A_EC64()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x8E), 0x1);
	emu_push(0x0ADD); f__2756_0629_0049_2D48();
	f__2756_0ADD_0022_2C19();
}

/**
 * Decompiled function f__2756_0ADD_0022_2C19()
 *
 * @name f__2756_0ADD_0022_2C19
 * @implements 2756:0ADD:0022:2C19 ()
 *
 * Called From: 2756:0ADD:000A:EC64
 */
void f__2756_0ADD_0022_2C19()
{
	emu_push(emu_ax.x);
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0x0);
	emu_pop(&emu_bp);
	emu_push(emu_ax.x);
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0xD68D);
	emu_pop(&emu_bp);
	emu_push(emu_ax.x);
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0x10);
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0AFF); f__2756_0A05_003D_0C0C();
	f__2756_0AFF_0011_9F12();
}

/**
 * Decompiled function f__2756_0AFF_0011_9F12()
 *
 * @name f__2756_0AFF_0011_9F12
 * @implements 2756:0AFF:0011:9F12 ()
 *
 * Called From: 2756:0AFF:0022:2C19
 */
void f__2756_0AFF_0011_9F12()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0x10);
	emu_pop(&emu_bp);
	emu_push(emu_cs);
	emu_push(0x0B10); f__2756_0A59_0023_D969();
	f__2756_0B10_0016_04AE();
}

/**
 * Decompiled function f__2756_0B10_0016_04AE()
 *
 * @name f__2756_0B10_0016_04AE
 * @implements 2756:0B10:0016:04AE ()
 *
 * Called From: 2756:0B10:0011:9F12
 */
void f__2756_0B10_0016_04AE()
{
	emu_addws(&emu_sp, 0x2);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_cs, emu_bx.x,  0x6E), 0x1);
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x0B26); f__2756_0B20_0001_6780();
	f__2756_0B26_0005_C48A();
}

/**
 * Decompiled function f__2756_0B20_0001_6780()
 *
 * @name f__2756_0B20_0001_6780
 * @implements 2756:0B20:0001:6780 ()
 *
 * Called From: 2756:0B23:0016:04AE
 */
void f__2756_0B20_0001_6780()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0B26_0005_C48A()
 *
 * @name f__2756_0B26_0005_C48A
 * @implements 2756:0B26:0005:C48A ()
 *
 * Called From: 2756:0B26:0016:04AE
 */
void f__2756_0B26_0005_C48A()
{
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
 * Decompiled function f__2756_0B8F_0025_D5D8()
 *
 * @name f__2756_0B8F_0025_D5D8
 * @implements 2756:0B8F:0025:D5D8 ()
 *
 * Called From: 1DD7:03C0:0015:9C30
 */
void f__2756_0B8F_0025_D5D8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0xF);
	emu_pop(&emu_bp);
	emu_push(emu_ax.x);
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), 0x4240);
	emu_pop(&emu_bp);
	emu_push(0x0BB4); f__2756_06FB_0042_E7A6();
	f__2756_0BB4_000C_C1DF();
}

/**
 * Decompiled function f__2756_0BB4_000C_C1DF()
 *
 * @name f__2756_0BB4_000C_C1DF
 * @implements 2756:0BB4:000C:C1DF ()
 *
 * Called From: 2756:0BB4:0025:D5D8
 */
void f__2756_0BB4_000C_C1DF()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0BC0); f__2756_0A05_003D_0C0C();
	f__2756_0BC0_000A_191F();
}

/**
 * Decompiled function f__2756_0BC0_000A_191F()
 *
 * @name f__2756_0BC0_000A_191F
 * @implements 2756:0BC0:000A:191F ()
 *
 * Called From: 2756:0BC0:000C:C1DF
 */
void f__2756_0BC0_000A_191F()
{
	emu_addws(&emu_sp, 0x6);
	emu_orb(&emu_bx.h, 0x0);
	emu_push(emu_cs);
	emu_push(0x0BCA); f__2756_0BC4_0001_6780();
	f__2756_0BCA_0005_C48A();
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

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__2756_0BCA_0005_C48A()
 *
 * @name f__2756_0BCA_0005_C48A
 * @implements 2756:0BCA:0005:C48A ()
 *
 * Called From: 2756:0BCA:000A:191F
 */
void f__2756_0BCA_0005_C48A()
{
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
 * Decompiled function f__2756_0E36_0006_85ED()
 *
 * @name f__2756_0E36_0006_85ED
 * @implements 2756:0E36:0006:85ED ()
 *
 * Called From: 1DD7:01F9:0013:9C3C
 */
void f__2756_0E36_0006_85ED()
{
	emu_movw(&emu_ax.x, 0x7C);
	f__2756_04F8_0009_907D(); return;
}
