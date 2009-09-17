/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2903_007A_0032_762D()
 *
 * @name f__2903_007A_0032_762D
 * @implements 2903:007A:0032:762D ()
 *
 * Called From: B4B8:0AFB:000C:BF3D
 * Called From: B503:06FE:0031:E97D
 * Called From: B503:09C4:0011:F8CD
 * Called From: B503:0ADF:004B:3A88
 * Called From: B503:0E73:0011:F8C9
 */
void f__2903_007A_0032_762D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cx.x);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00C5; emu_last_cs = 0x2903; emu_last_ip = 0x0088; emu_last_length = 0x0032; emu_last_crc = 0x762D; emu_call(); return; }
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lodsw(emu_ds);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x00A4; emu_last_cs = 0x2903; emu_last_ip = 0x0097; emu_last_length = 0x0032; emu_last_crc = 0x762D; emu_call(); return; }
	emu_addw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_si,  0x0), 0x0);
	if (!emu_flags.zf) { f__2903_00AC_0016_704A(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x00C5; emu_last_cs = 0x2903; emu_last_ip = 0x00AA; emu_last_length = 0x0032; emu_last_crc = 0x762D; emu_call();
}

/**
 * Decompiled function f__2903_00AC_0016_704A()
 *
 * @name f__2903_00AC_0016_704A
 * @implements 2903:00AC:0016:704A ()
 *
 * Called From: 2903:00A2:0032:762D
 */
void f__2903_00AC_0016_704A()
{
	emu_movw(&emu_dx.x, emu_ds);
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, emu_si,  0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x0));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x2);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00C2); emu_cs = 0x2B0E; f__2B0E_00D0_0022_EC76();
	f__2903_00C2_0008_4ECE();
}

/**
 * Decompiled function f__2903_00C2_0008_4ECE()
 *
 * @name f__2903_00C2_0008_4ECE
 * @implements 2903:00C2:0008:4ECE ()
 *
 * Called From: 2903:00C2:0016:704A
 */
void f__2903_00C2_0008_4ECE()
{
	emu_addws(&emu_sp, 0x4);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2903_00CA_0015_756E()
 *
 * @name f__2903_00CA_0015_756E
 * @implements 2903:00CA:0015:756E ()
 *
 * Called From: 07D4:18FF:000B:8253
 */
void f__2903_00CA_0015_756E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00DB; emu_last_cs = 0x2903; emu_last_ip = 0x00D5; emu_last_length = 0x0015; emu_last_crc = 0x756E; emu_call(); return; }
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lodsw(emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2903_0158_001A_2931()
 *
 * @name f__2903_0158_001A_2931
 * @implements 2903:0158:001A:2931 ()
 *
 * Called From: 07D4:0BAD:0031:A814
 * Called From: 07D4:0C82:0046:7ED9
 * Called From: 07D4:0E39:0038:77DF
 * Called From: 07D4:0F95:002B:0C2A
 * Called From: 07D4:11FF:0049:B9BB
 * Called From: 07D4:1238:0025:37A1
 * Called From: 07D4:188B:0069:7F32
 * Called From: 0AEC:0931:0039:D31B
 * Called From: 0AEC:09CB:0031:D7BE
 * Called From: 0AEC:0A79:0043:91CA
 * Called From: 0AEC:0DB0:0036:9D34
 * Called From: 10E4:03E7:0038:D51C
 * Called From: 10E4:0812:0026:6E79
 * Called From: 10E4:0812:0030:A563
 * Called From: 10E4:08B1:0032:0FD7
 * Called From: 10E4:090D:003F:34F2
 * Called From: 10E4:0940:002E:FA57
 * Called From: 10E4:13A4:0033:5882
 * Called From: 10E4:13F4:0029:203C
 * Called From: 10E4:211E:0028:4959
 * Called From: 2B6C:0124:001F:F77F
 * Called From: B495:0955:002E:7A31
 * Called From: B495:09EC:002B:80B3
 * Called From: B495:12D1:0028:4959
 * Called From: B495:148B:0032:F13D
 * Called From: B4A2:08E0:0020:E97F
 * Called From: B4A2:08E0:0023:FD2E
 * Called From: B4DA:03EC:0023:B227
 * Called From: B4DA:0544:0023:B2A5
 * Called From: B4DA:06B0:0023:B2A5
 * Called From: B4DA:0A6F:0023:B323
 * Called From: B4DA:0AAE:0025:4AC8
 * Called From: B503:070C:000E:6448
 * Called From: B503:0A7C:002D:25DF
 * Called From: B503:0AED:000E:6448
 * Called From: B503:0EAC:0039:5737
 */
void f__2903_0158_001A_2931()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x44);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_es);
	emu_addw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { f__2903_0172_00B0_617E(); return; }
	/* Unresolved jump */ emu_ip = 0x0502; emu_last_cs = 0x2903; emu_last_ip = 0x016F; emu_last_length = 0x001A; emu_last_crc = 0x2931; emu_call();
}

/**
 * Decompiled function f__2903_0172_00B0_617E()
 *
 * @name f__2903_0172_00B0_617E
 * @implements 2903:0172:00B0:617E ()
 *
 * Called From: 2903:016D:001A:2931
 */
void f__2903_0172_00B0_617E()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x40), emu_ds);
	emu_testb(&emu_get_memory8(emu_es, emu_di,  0x0), 0x1);
	if (emu_flags.zf) { f__2903_0180_00A2_7DFA(); return; }
	emu_orw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x400);
	emu_movw(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2000);
	if (emu_flags.zf) { f__2903_0196_008C_28BE(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3C), emu_es);
	emu_addws(&emu_di, 0x4);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x100);
	if (emu_flags.zf) { f__2903_01B8_006A_9B16(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_es);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x16));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__2903_01B2_0070_C08B(); return; }
	emu_andw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0xFEFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_ax.x);
	emu_addws(&emu_di, 0x6);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x200);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01EC; emu_last_cs = 0x2903; emu_last_ip = 0x01BD; emu_last_length = 0x00B0; emu_last_crc = 0x617E; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_andws(&emu_get_memory16(emu_cs, 0x00,  0x5E), 0xF);
	emu_movw(&emu_bx.x, 0x60);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x70), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x74), 0x0);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), 0x100);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x1000);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01FD; emu_last_cs = 0x2903; emu_last_ip = 0x01F1; emu_last_length = 0x00B0; emu_last_crc = 0x617E; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x800);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x020D; emu_last_cs = 0x2903; emu_last_ip = 0x0202; emu_last_length = 0x00B0; emu_last_crc = 0x617E; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x18), emu_ax.l);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0222; emu_last_cs = 0x2903; emu_last_ip = 0x0212; emu_last_length = 0x00B0; emu_last_crc = 0x617E; emu_call(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_es);
	emu_addws(&emu_di, 0x4);
	/* Unresolved jump */ emu_ip = 0x0227; emu_last_cs = 0x2903; emu_last_ip = 0x0220; emu_last_length = 0x00B0; emu_last_crc = 0x617E; emu_call();
}

/**
 * Decompiled function f__2903_0180_00A2_7DFA()
 *
 * @name f__2903_0180_00A2_7DFA
 * @implements 2903:0180:00A2:7DFA ()
 *
 * Called From: 2903:0179:00B0:617E
 */
void f__2903_0180_00A2_7DFA()
{
	emu_movw(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2000);
	if (emu_flags.zf) { f__2903_0196_008C_28BE(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3C), emu_es);
	emu_addws(&emu_di, 0x4);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x100);
	if (emu_flags.zf) { f__2903_01B8_006A_9B16(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_es);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x16));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01B2; emu_last_cs = 0x2903; emu_last_ip = 0x01AB; emu_last_length = 0x00A2; emu_last_crc = 0x7DFA; emu_call(); return; }
	emu_andw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0xFEFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_ax.x);
	emu_addws(&emu_di, 0x6);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x200);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01EC; emu_last_cs = 0x2903; emu_last_ip = 0x01BD; emu_last_length = 0x00A2; emu_last_crc = 0x7DFA; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_andws(&emu_get_memory16(emu_cs, 0x00,  0x5E), 0xF);
	emu_movw(&emu_bx.x, 0x60);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x70), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x74), 0x0);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), 0x100);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x1000);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01FD; emu_last_cs = 0x2903; emu_last_ip = 0x01F1; emu_last_length = 0x00A2; emu_last_crc = 0x7DFA; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x800);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x020D; emu_last_cs = 0x2903; emu_last_ip = 0x0202; emu_last_length = 0x00A2; emu_last_crc = 0x7DFA; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x18), emu_ax.l);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0222; emu_last_cs = 0x2903; emu_last_ip = 0x0212; emu_last_length = 0x00A2; emu_last_crc = 0x7DFA; emu_call(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_es);
	emu_addws(&emu_di, 0x4);
	/* Unresolved jump */ emu_ip = 0x0227; emu_last_cs = 0x2903; emu_last_ip = 0x0220; emu_last_length = 0x00A2; emu_last_crc = 0x7DFA; emu_call();
}

/**
 * Decompiled function f__2903_0196_008C_28BE()
 *
 * @name f__2903_0196_008C_28BE
 * @implements 2903:0196:008C:28BE ()
 *
 * Called From: 2903:0188:00A2:7DFA
 * Called From: 2903:0188:00B0:617E
 */
void f__2903_0196_008C_28BE()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x100);
	if (emu_flags.zf) { f__2903_01B8_006A_9B16(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_es);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x16));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__2903_01B2_0070_C08B(); return; }
	emu_andw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0xFEFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_ax.x);
	emu_addws(&emu_di, 0x6);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x200);
	if (emu_flags.zf) { f__2903_01EC_0036_14C5(); return; }
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_andws(&emu_get_memory16(emu_cs, 0x00,  0x5E), 0xF);
	emu_movw(&emu_bx.x, 0x60);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x70), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x74), 0x0);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), 0x100);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x1000);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01FD; emu_last_cs = 0x2903; emu_last_ip = 0x01F1; emu_last_length = 0x008C; emu_last_crc = 0x28BE; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x800);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x020D; emu_last_cs = 0x2903; emu_last_ip = 0x0202; emu_last_length = 0x008C; emu_last_crc = 0x28BE; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x18), emu_ax.l);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0222; emu_last_cs = 0x2903; emu_last_ip = 0x0212; emu_last_length = 0x008C; emu_last_crc = 0x28BE; emu_call(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_es);
	emu_addws(&emu_di, 0x4);
	/* Unresolved jump */ emu_ip = 0x0227; emu_last_cs = 0x2903; emu_last_ip = 0x0220; emu_last_length = 0x008C; emu_last_crc = 0x28BE; emu_call();
}

/**
 * Decompiled function f__2903_01B2_0070_C08B()
 *
 * @name f__2903_01B2_0070_C08B
 * @implements 2903:01B2:0070:C08B ()
 *
 * Called From: 2903:01AB:008C:28BE
 * Called From: 2903:01AB:00B0:617E
 */
void f__2903_01B2_0070_C08B()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_ax.x);
	emu_addws(&emu_di, 0x6);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x200);
	if (emu_flags.zf) { f__2903_01EC_0036_14C5(); return; }
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_andws(&emu_get_memory16(emu_cs, 0x00,  0x5E), 0xF);
	emu_movw(&emu_bx.x, 0x60);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x70), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x74), 0x0);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), 0x100);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x1000);
	if (emu_flags.zf) { f__2903_01FD_0025_A30E(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x800);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x020D; emu_last_cs = 0x2903; emu_last_ip = 0x0202; emu_last_length = 0x0070; emu_last_crc = 0xC08B; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x18), emu_ax.l);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0222; emu_last_cs = 0x2903; emu_last_ip = 0x0212; emu_last_length = 0x0070; emu_last_crc = 0xC08B; emu_call(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_es);
	emu_addws(&emu_di, 0x4);
	/* Unresolved jump */ emu_ip = 0x0227; emu_last_cs = 0x2903; emu_last_ip = 0x0220; emu_last_length = 0x0070; emu_last_crc = 0xC08B; emu_call();
}

/**
 * Decompiled function f__2903_01B8_006A_9B16()
 *
 * @name f__2903_01B8_006A_9B16
 * @implements 2903:01B8:006A:9B16 ()
 *
 * Called From: 2903:019B:008C:28BE
 * Called From: 2903:019B:00B0:617E
 * Called From: 2903:019B:00A2:7DFA
 */
void f__2903_01B8_006A_9B16()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x200);
	if (emu_flags.zf) { f__2903_01EC_0036_14C5(); return; }
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_andws(&emu_get_memory16(emu_cs, 0x00,  0x5E), 0xF);
	emu_movw(&emu_bx.x, 0x60);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x70), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x74), 0x0);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), 0x100);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x1000);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01FD; emu_last_cs = 0x2903; emu_last_ip = 0x01F1; emu_last_length = 0x006A; emu_last_crc = 0x9B16; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x800);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x020D; emu_last_cs = 0x2903; emu_last_ip = 0x0202; emu_last_length = 0x006A; emu_last_crc = 0x9B16; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x18), emu_ax.l);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0222; emu_last_cs = 0x2903; emu_last_ip = 0x0212; emu_last_length = 0x006A; emu_last_crc = 0x9B16; emu_call(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_es);
	emu_addws(&emu_di, 0x4);
	/* Unresolved jump */ emu_ip = 0x0227; emu_last_cs = 0x2903; emu_last_ip = 0x0220; emu_last_length = 0x006A; emu_last_crc = 0x9B16; emu_call();
}

/**
 * Decompiled function f__2903_01EC_0036_14C5()
 *
 * @name f__2903_01EC_0036_14C5
 * @implements 2903:01EC:0036:14C5 ()
 *
 * Called From: 2903:01BD:006A:9B16
 * Called From: 2903:01BD:008C:28BE
 * Called From: 2903:01BD:0070:C08B
 */
void f__2903_01EC_0036_14C5()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x1000);
	if (emu_flags.zf) { f__2903_01FD_0025_A30E(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x800);
	if (emu_flags.zf) { f__2903_020D_0015_50E3(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x18), emu_ax.l);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0222; emu_last_cs = 0x2903; emu_last_ip = 0x0212; emu_last_length = 0x0036; emu_last_crc = 0x14C5; emu_call(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_es);
	emu_addws(&emu_di, 0x4);
	/* Unresolved jump */ emu_ip = 0x0227; emu_last_cs = 0x2903; emu_last_ip = 0x0220; emu_last_length = 0x0036; emu_last_crc = 0x14C5; emu_call();
}

/**
 * Decompiled function f__2903_01FD_0025_A30E()
 *
 * @name f__2903_01FD_0025_A30E
 * @implements 2903:01FD:0025:A30E ()
 *
 * Called From: 2903:01F1:0036:14C5
 * Called From: 2903:01F1:0070:C08B
 */
void f__2903_01FD_0025_A30E()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x800);
	if (emu_flags.zf) { f__2903_020D_0015_50E3(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x18), emu_ax.l);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0222; emu_last_cs = 0x2903; emu_last_ip = 0x0212; emu_last_length = 0x0025; emu_last_crc = 0xA30E; emu_call(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_es);
	emu_addws(&emu_di, 0x4);
	/* Unresolved jump */ emu_ip = 0x0227; emu_last_cs = 0x2903; emu_last_ip = 0x0220; emu_last_length = 0x0025; emu_last_crc = 0xA30E; emu_call();
}

/**
 * Decompiled function f__2903_020D_0015_50E3()
 *
 * @name f__2903_020D_0015_50E3
 * @implements 2903:020D:0015:50E3 ()
 *
 * Called From: 2903:0202:0025:A30E
 * Called From: 2903:0202:0036:14C5
 */
void f__2903_020D_0015_50E3()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { f__2903_0222_0041_BA21(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_es);
	emu_addws(&emu_di, 0x4);
	/* Unresolved jump */ emu_ip = 0x0227; emu_last_cs = 0x2903; emu_last_ip = 0x0220; emu_last_length = 0x0015; emu_last_crc = 0x50E3; emu_call();
}

/**
 * Decompiled function f__2903_0222_0041_BA21()
 *
 * @name f__2903_0222_0041_BA21
 * @implements 2903:0222:0041:BA21 ()
 *
 * Called From: 2903:0212:0015:50E3
 */
void f__2903_0222_0041_BA21()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), 0x100);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x34), 0x0);
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_movb(&emu_bx.l, emu_get_memory8(emu_ss, emu_bp,  0x12));
	emu_shlb(&emu_bx.l, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x2E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movb(&emu_bx.l, emu_get_memory8(emu_ss, emu_bp,  0x13));
	emu_andb(&emu_bx.l, 0xF);
	emu_shlb(&emu_bx.l, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x3E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0263); emu_cs = 0x252E; f__252E_001B_0018_EA2C();
	f__2903_0263_0060_2C9A();
}

/**
 * Decompiled function f__2903_0263_0060_2C9A()
 *
 * @name f__2903_0263_0060_2C9A
 * @implements 2903:0263:0060:2C9A ()
 *
 * Called From: 2903:0263:0041:BA21
 */
void f__2903_0263_0060_2C9A()
{
	emu_pop(&emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_si, 0x4062);
	emu_movb(&emu_cx.l, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_si, emu_ax.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x0));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_di, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4000);
	if (!emu_flags.zf) { f__2903_0286_003D_3E37(); return; }
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x4));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4000);
	if (emu_flags.zf) { f__2903_029E_0025_6B18(); return; }
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lodsw(emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_lodsb(emu_ds);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02C3; emu_last_cs = 0x2903; emu_last_ip = 0x02B3; emu_last_length = 0x0060; emu_last_crc = 0x2C9A; emu_call(); return; }
	emu_mulw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_movb(&emu_ax.h, emu_dx.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02C3; emu_last_cs = 0x2903; emu_last_ip = 0x02BE; emu_last_length = 0x0060; emu_last_crc = 0x2C9A; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0502; emu_last_cs = 0x2903; emu_last_ip = 0x02C0; emu_last_length = 0x0060; emu_last_crc = 0x2C9A; emu_call();
}

/**
 * Decompiled function f__2903_0286_003D_3E37()
 *
 * @name f__2903_0286_003D_3E37
 * @implements 2903:0286:003D:3E37 ()
 *
 * Called From: 2903:0281:0060:2C9A
 */
void f__2903_0286_003D_3E37()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x4));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4000);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x029E; emu_last_cs = 0x2903; emu_last_ip = 0x0299; emu_last_length = 0x003D; emu_last_crc = 0x3E37; emu_call(); return; }
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lodsw(emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_lodsb(emu_ds);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { f__2903_02C3_002A_DF7C(); return; }
	emu_mulw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_movb(&emu_ax.h, emu_dx.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__2903_02C3_002A_DF7C(); return; }
	/* Unresolved jump */ emu_ip = 0x0502; emu_last_cs = 0x2903; emu_last_ip = 0x02C0; emu_last_length = 0x003D; emu_last_crc = 0x3E37; emu_call();
}

/**
 * Decompiled function f__2903_029E_0025_6B18()
 *
 * @name f__2903_029E_0025_6B18
 * @implements 2903:029E:0025:6B18 ()
 *
 * Called From: 2903:0299:0060:2C9A
 */
void f__2903_029E_0025_6B18()
{
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lodsw(emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_lodsb(emu_ds);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { f__2903_02C3_002A_DF7C(); return; }
	emu_mulw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_movb(&emu_ax.h, emu_dx.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02C3; emu_last_cs = 0x2903; emu_last_ip = 0x02BE; emu_last_length = 0x0025; emu_last_crc = 0x6B18; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0502; emu_last_cs = 0x2903; emu_last_ip = 0x02C0; emu_last_length = 0x0025; emu_last_crc = 0x6B18; emu_call();
}

/**
 * Decompiled function f__2903_02C3_002A_DF7C()
 *
 * @name f__2903_02C3_002A_DF7C
 * @implements 2903:02C3:002A:DF7C ()
 *
 * Called From: 2903:02B3:0025:6B18
 * Called From: 2903:02B3:003D:3E37
 * Called From: 2903:02BE:003D:3E37
 */
void f__2903_02C3_002A_DF7C()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x8000);
	if (emu_flags.zf) { f__2903_02D1_001C_D95B(); return; }
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_shrw(&emu_dx.x, 0x1);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_lodsw(emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { f__2903_02ED_0054_FC7A(); return; }
	emu_mulw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_movb(&emu_ax.h, emu_dx.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02ED; emu_last_cs = 0x2903; emu_last_ip = 0x02E8; emu_last_length = 0x002A; emu_last_crc = 0xDF7C; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0502; emu_last_cs = 0x2903; emu_last_ip = 0x02EA; emu_last_length = 0x002A; emu_last_crc = 0xDF7C; emu_call();
}

/**
 * Decompiled function f__2903_02D1_001C_D95B()
 *
 * @name f__2903_02D1_001C_D95B
 * @implements 2903:02D1:001C:D95B ()
 *
 * Called From: 2903:02C8:002A:DF7C
 */
void f__2903_02D1_001C_D95B()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_lodsw(emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { f__2903_02ED_0054_FC7A(); return; }
	emu_mulw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_movb(&emu_ax.h, emu_dx.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02ED; emu_last_cs = 0x2903; emu_last_ip = 0x02E8; emu_last_length = 0x001C; emu_last_crc = 0xD95B; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0502; emu_last_cs = 0x2903; emu_last_ip = 0x02EA; emu_last_length = 0x001C; emu_last_crc = 0xD95B; emu_call();
}

/**
 * Decompiled function f__2903_02ED_0054_FC7A()
 *
 * @name f__2903_02ED_0054_FC7A
 * @implements 2903:02ED:0054:FC7A ()
 *
 * Called From: 2903:02DD:001C:D95B
 * Called From: 2903:02DD:002A:DF7C
 */
void f__2903_02ED_0054_FC7A()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x8000);
	if (emu_flags.zf) { f__2903_02FB_0046_75BF(); return; }
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_shrw(&emu_dx.x, 0x1);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_addws(&emu_si, 0x3);
	emu_lodsw(emu_ds);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	if (emu_flags.zf) { f__2903_031B_0026_C426(); return; }
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2000);
	if (!emu_flags.zf) { f__2903_031B_0026_C426(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3E), emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3C), emu_ds);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x400);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0325; emu_last_cs = 0x2903; emu_last_ip = 0x0320; emu_last_length = 0x0054; emu_last_crc = 0xFC7A; emu_call(); return; }
	emu_addws(&emu_si, 0x10);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x034A; emu_last_cs = 0x2903; emu_last_ip = 0x032A; emu_last_length = 0x0054; emu_last_crc = 0xFC7A; emu_call(); return; }
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp, -0x40));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x6F18));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0341); emu_cs = 0x2BD6; f__2BD6_0000_0015_24A9();
	f__2903_0341_0018_4AE8();
}

/**
 * Decompiled function f__2903_02FB_0046_75BF()
 *
 * @name f__2903_02FB_0046_75BF
 * @implements 2903:02FB:0046:75BF ()
 *
 * Called From: 2903:02F2:0054:FC7A
 */
void f__2903_02FB_0046_75BF()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_addws(&emu_si, 0x3);
	emu_lodsw(emu_ds);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	if (emu_flags.zf) { f__2903_031B_0026_C426(); return; }
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2000);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x031B; emu_last_cs = 0x2903; emu_last_ip = 0x0313; emu_last_length = 0x0046; emu_last_crc = 0x75BF; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3E), emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3C), emu_ds);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x400);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0325; emu_last_cs = 0x2903; emu_last_ip = 0x0320; emu_last_length = 0x0046; emu_last_crc = 0x75BF; emu_call(); return; }
	emu_addws(&emu_si, 0x10);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2);
	if (!emu_flags.zf) { f__2903_034A_000F_6AD7(); return; }
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp, -0x40));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x6F18));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0341); emu_cs = 0x2BD6; f__2BD6_0000_0015_24A9();
	f__2903_0341_0018_4AE8();
}

/**
 * Decompiled function f__2903_031B_0026_C426()
 *
 * @name f__2903_031B_0026_C426
 * @implements 2903:031B:0026:C426 ()
 *
 * Called From: 2903:030C:0046:75BF
 * Called From: 2903:030C:0054:FC7A
 * Called From: 2903:0313:0054:FC7A
 */
void f__2903_031B_0026_C426()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x400);
	if (emu_flags.zf) { f__2903_0325_001C_850F(); return; }
	emu_addws(&emu_si, 0x10);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2);
	if (!emu_flags.zf) { f__2903_034A_000F_6AD7(); return; }
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp, -0x40));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x6F18));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0341); emu_cs = 0x2BD6; f__2BD6_0000_0015_24A9();
	f__2903_0341_0018_4AE8();
}

/**
 * Decompiled function f__2903_0325_001C_850F()
 *
 * @name f__2903_0325_001C_850F
 * @implements 2903:0325:001C:850F ()
 *
 * Called From: 2903:0320:0026:C426
 */
void f__2903_0325_001C_850F()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2);
	if (!emu_flags.zf) { f__2903_034A_000F_6AD7(); return; }
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp, -0x40));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x6F18));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0341); emu_cs = 0x2BD6; f__2BD6_0000_0015_24A9();
	f__2903_0341_0018_4AE8();
}

/**
 * Decompiled function f__2903_0341_0018_4AE8()
 *
 * @name f__2903_0341_0018_4AE8
 * @implements 2903:0341:0018:4AE8 ()
 *
 * Called From: 2903:0341:0046:75BF
 * Called From: 2903:0341:001C:850F
 * Called From: 2903:0341:0026:C426
 * Called From: 2903:0341:0054:FC7A
 */
void f__2903_0341_0018_4AE8()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00,  0x6F18));
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (!emu_flags.zf) { f__2903_0359_0013_7287(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	f__2903_0362_000A_8999(); return;
}

/**
 * Decompiled function f__2903_034A_000F_6AD7()
 *
 * @name f__2903_034A_000F_6AD7
 * @implements 2903:034A:000F:6AD7 ()
 *
 * Called From: 2903:032A:001C:850F
 * Called From: 2903:032A:0026:C426
 * Called From: 2903:032A:0046:75BF
 */
void f__2903_034A_000F_6AD7()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (!emu_flags.zf) { f__2903_0359_0013_7287(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	f__2903_0362_000A_8999(); return;
}

/**
 * Decompiled function f__2903_0359_0013_7287()
 *
 * @name f__2903_0359_0013_7287
 * @implements 2903:0359:0013:7287 ()
 *
 * Called From: 2903:034F:000F:6AD7
 * Called From: 2903:034F:0018:4AE8
 */
void f__2903_0359_0013_7287()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!emu_flags.sf) { f__2903_03BB_000F_9DD4(); return; }
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2903_036C_001B_6CB6(); return; }
	f__2903_0502_000C_D968(); return;
}

/**
 * Decompiled function f__2903_0362_000A_8999()
 *
 * @name f__2903_0362_000A_8999
 * @implements 2903:0362:000A:8999 ()
 *
 * Called From: 2903:0357:000F:6AD7
 * Called From: 2903:0357:0018:4AE8
 */
void f__2903_0362_000A_8999()
{
	if (!emu_flags.sf) { f__2903_03BB_000F_9DD4(); return; }
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2903_036C_001B_6CB6(); return; }
	f__2903_0502_000C_D968(); return;
}

/**
 * Decompiled function f__2903_036C_001B_6CB6()
 *
 * @name f__2903_036C_001B_6CB6
 * @implements 2903:036C:001B:6CB6 ()
 *
 * Called From: 2903:0367:000A:8999
 * Called From: 2903:0367:0013:7287
 */
void f__2903_036C_001B_6CB6()
{
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x42), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x36), emu_ds);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_cx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(0x0387);
	switch (emu_ip) {
		case 0x050E: f__2903_050E_0022_419A(); break;
		case 0x0545: f__2903_0545_0024_06E5(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x0384; emu_last_length = 0x001B; emu_last_crc = 0x6CB6;
			emu_call();
			return;
	}
	f__2903_0387_0043_3750();
}

/**
 * Decompiled function f__2903_0371_0016_7D40()
 *
 * @name f__2903_0371_0016_7D40
 * @implements 2903:0371:0016:7D40 ()
 *
 * Called From: 2903:039C:0043:3750
 */
void f__2903_0371_0016_7D40()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x42), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x36), emu_ds);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_cx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(0x0387);
	switch (emu_ip) {
		case 0x050E: f__2903_050E_0022_419A(); break;
		case 0x0545: f__2903_0545_0024_06E5(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x0384; emu_last_length = 0x0016; emu_last_crc = 0x7D40;
			emu_call();
			return;
	}
	f__2903_0387_0043_3750();
}

/**
 * Decompiled function f__2903_0387_0043_3750()
 *
 * @name f__2903_0387_0043_3750
 * @implements 2903:0387:0043:3750 ()
 *
 * Called From: 2903:0387:001B:6CB6
 * Called From: 2903:0387:0016:7D40
 */
void f__2903_0387_0043_3750()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x34), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x34), 0xFF00);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0371; emu_last_cs = 0x2903; emu_last_ip = 0x0392; emu_last_length = 0x0043; emu_last_crc = 0x3750; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xchgb(&emu_get_memory8(emu_ss, emu_bp, -0x33), &emu_ax.l);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2903_0371_0016_7D40(); return; }
	if (!emu_flags.sf) { f__2903_03AE_001C_5777(); return; }
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x38));
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_negw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_movb(&emu_ax.h, emu_get_memory8(emu_ss, emu_bp, -0x2A));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x34), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03BB; emu_last_cs = 0x2903; emu_last_ip = 0x03B3; emu_last_length = 0x0043; emu_last_crc = 0x3750; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03CA; emu_last_cs = 0x2903; emu_last_ip = 0x03C0; emu_last_length = 0x0043; emu_last_crc = 0x3750; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	/* Unresolved jump */ emu_ip = 0x03D3; emu_last_cs = 0x2903; emu_last_ip = 0x03C8; emu_last_length = 0x0043; emu_last_crc = 0x3750; emu_call();
}

/**
 * Decompiled function f__2903_03AE_001C_5777()
 *
 * @name f__2903_03AE_001C_5777
 * @implements 2903:03AE:001C:5777 ()
 *
 * Called From: 2903:039E:0043:3750
 */
void f__2903_03AE_001C_5777()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (!emu_flags.zf) { f__2903_03BB_000F_9DD4(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03CA; emu_last_cs = 0x2903; emu_last_ip = 0x03C0; emu_last_length = 0x001C; emu_last_crc = 0x5777; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	f__2903_03D3_005C_6B02(); return;
}

/**
 * Decompiled function f__2903_03BB_000F_9DD4()
 *
 * @name f__2903_03BB_000F_9DD4
 * @implements 2903:03BB:000F:9DD4 ()
 *
 * Called From: 2903:0362:000A:8999
 * Called From: 2903:0362:0013:7287
 * Called From: 2903:03B3:001C:5777
 */
void f__2903_03BB_000F_9DD4()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (!emu_flags.zf) { f__2903_03CA_0065_0A6F(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	f__2903_03D3_005C_6B02(); return;
}

/**
 * Decompiled function f__2903_03CA_0065_0A6F()
 *
 * @name f__2903_03CA_0065_0A6F
 * @implements 2903:03CA:0065:0A6F ()
 *
 * Called From: 2903:03C0:000F:9DD4
 */
void f__2903_03CA_0065_0A6F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.sf) { f__2903_042F_0003_1D14(); return; }
	if (emu_flags.zf) { f__2903_042F_0003_1D14(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!emu_flags.cf) { f__2903_03EC_0043_4B28(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03EC; emu_last_cs = 0x2903; emu_last_ip = 0x03E4; emu_last_length = 0x0065; emu_last_crc = 0x0A6F; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { f__2903_040A_0025_90A0(); return; }
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x042F; emu_last_cs = 0x2903; emu_last_ip = 0x0403; emu_last_length = 0x0065; emu_last_crc = 0x0A6F; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x042F; emu_last_cs = 0x2903; emu_last_ip = 0x0415; emu_last_length = 0x0065; emu_last_crc = 0x0A6F; emu_call(); return; }
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x042F; emu_last_cs = 0x2903; emu_last_ip = 0x0417; emu_last_length = 0x0065; emu_last_crc = 0x0A6F; emu_call(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (!emu_flags.cf) { f__2903_0432_0072_D3F8(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x0432; emu_last_cs = 0x2903; emu_last_ip = 0x042D; emu_last_length = 0x0065; emu_last_crc = 0x0A6F; emu_call();
}

/**
 * Decompiled function f__2903_03D3_005C_6B02()
 *
 * @name f__2903_03D3_005C_6B02
 * @implements 2903:03D3:005C:6B02 ()
 *
 * Called From: 2903:03C8:000F:9DD4
 * Called From: 2903:03C8:001C:5777
 */
void f__2903_03D3_005C_6B02()
{
	if (emu_flags.sf) { f__2903_042F_0003_1D14(); return; }
	if (emu_flags.zf) { f__2903_042F_0003_1D14(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!emu_flags.cf) { f__2903_03EC_0043_4B28(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (emu_flags.zf) { f__2903_03EC_0043_4B28(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x040A; emu_last_cs = 0x2903; emu_last_ip = 0x03F6; emu_last_length = 0x005C; emu_last_crc = 0x6B02; emu_call(); return; }
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x042F; emu_last_cs = 0x2903; emu_last_ip = 0x0403; emu_last_length = 0x005C; emu_last_crc = 0x6B02; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x042F; emu_last_cs = 0x2903; emu_last_ip = 0x0415; emu_last_length = 0x005C; emu_last_crc = 0x6B02; emu_call(); return; }
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x042F; emu_last_cs = 0x2903; emu_last_ip = 0x0417; emu_last_length = 0x005C; emu_last_crc = 0x6B02; emu_call(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0432; emu_last_cs = 0x2903; emu_last_ip = 0x041C; emu_last_length = 0x005C; emu_last_crc = 0x6B02; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x0432; emu_last_cs = 0x2903; emu_last_ip = 0x042D; emu_last_length = 0x005C; emu_last_crc = 0x6B02; emu_call();
}

/**
 * Decompiled function f__2903_03EC_0043_4B28()
 *
 * @name f__2903_03EC_0043_4B28
 * @implements 2903:03EC:0043:4B28 ()
 *
 * Called From: 2903:03DA:005C:6B02
 * Called From: 2903:03DA:0065:0A6F
 * Called From: 2903:03E4:005C:6B02
 */
void f__2903_03EC_0043_4B28()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { f__2903_040A_0025_90A0(); return; }
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!emu_flags.cf) { f__2903_042F_0003_1D14(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x042F; emu_last_cs = 0x2903; emu_last_ip = 0x0415; emu_last_length = 0x0043; emu_last_crc = 0x4B28; emu_call(); return; }
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x042F; emu_last_cs = 0x2903; emu_last_ip = 0x0417; emu_last_length = 0x0043; emu_last_crc = 0x4B28; emu_call(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (!emu_flags.cf) { f__2903_0432_0072_D3F8(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x0432; emu_last_cs = 0x2903; emu_last_ip = 0x042D; emu_last_length = 0x0043; emu_last_crc = 0x4B28; emu_call();
}

/**
 * Decompiled function f__2903_040A_0025_90A0()
 *
 * @name f__2903_040A_0025_90A0
 * @implements 2903:040A:0025:90A0 ()
 *
 * Called From: 2903:03F6:0043:4B28
 * Called From: 2903:03F6:0065:0A6F
 */
void f__2903_040A_0025_90A0()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.sf) { f__2903_042F_0003_1D14(); return; }
	if (emu_flags.zf) { f__2903_042F_0003_1D14(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (!emu_flags.cf) { f__2903_0432_0072_D3F8(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	f__2903_0432_0072_D3F8(); return;
}

/**
 * Decompiled function f__2903_042F_0003_1D14()
 *
 * @name f__2903_042F_0003_1D14
 * @implements 2903:042F:0003:1D14 ()
 *
 * Called From: 2903:03D3:005C:6B02
 * Called From: 2903:03D3:0065:0A6F
 * Called From: 2903:03D5:005C:6B02
 * Called From: 2903:03D5:0065:0A6F
 * Called From: 2903:0403:0043:4B28
 * Called From: 2903:0415:0025:90A0
 * Called From: 2903:0417:0025:90A0
 */
void f__2903_042F_0003_1D14()
{
	f__2903_0502_000C_D968(); return;
}

/**
 * Decompiled function f__2903_0432_0072_D3F8()
 *
 * @name f__2903_0432_0072_D3F8
 * @implements 2903:0432:0072:D3F8 ()
 *
 * Called From: 2903:041C:0025:90A0
 * Called From: 2903:041C:0043:4B28
 * Called From: 2903:041C:0065:0A6F
 * Called From: 2903:042D:0025:90A0
 */
void f__2903_0432_0072_D3F8()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3A), 0x140);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp, -0x40));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (emu_flags.zf) { f__2903_044D_0057_4D65(); return; }
	emu_negw(&emu_get_memory16(emu_ss, emu_bp, -0x3A), emu_get_memory16(emu_ss, emu_bp, -0x3A));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_decw(&emu_bx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00,  0x66EC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x + emu_si,  0x0));
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_di, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_di);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x1);
	if (emu_flags.zf) { f__2903_0478_002C_6AED(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_xchgw(&emu_get_memory16(emu_ss, emu_bp, -0x20), &emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_decw(&emu_ax.x);
	emu_addw(&emu_di, emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { f__2903_049B_0009_5066(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x44), emu_ax.x);
	emu_xchgb(&emu_ax.h, &emu_dx.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_divw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x42), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x34), 0xFF00);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x04A4; emu_last_cs = 0x2903; emu_last_ip = 0x04A0; emu_last_length = 0x0072; emu_last_crc = 0xD3F8; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x04C4; emu_last_cs = 0x2903; emu_last_ip = 0x04A2; emu_last_length = 0x0072; emu_last_crc = 0xD3F8; emu_call();
}

/**
 * Decompiled function f__2903_044D_0057_4D65()
 *
 * @name f__2903_044D_0057_4D65
 * @implements 2903:044D:0057:4D65 ()
 *
 * Called From: 2903:0444:0072:D3F8
 */
void f__2903_044D_0057_4D65()
{
	emu_shlw(&emu_bx.x, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00,  0x66EC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x + emu_si,  0x0));
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_di, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_di);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x1);
	if (emu_flags.zf) { f__2903_0478_002C_6AED(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_xchgw(&emu_get_memory16(emu_ss, emu_bp, -0x20), &emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_decw(&emu_ax.x);
	emu_addw(&emu_di, emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { f__2903_049B_0009_5066(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x44), emu_ax.x);
	emu_xchgb(&emu_ax.h, &emu_dx.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_divw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x42), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x34), 0xFF00);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x04A4; emu_last_cs = 0x2903; emu_last_ip = 0x04A0; emu_last_length = 0x0057; emu_last_crc = 0x4D65; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x04C4; emu_last_cs = 0x2903; emu_last_ip = 0x04A2; emu_last_length = 0x0057; emu_last_crc = 0x4D65; emu_call();
}

/**
 * Decompiled function f__2903_0478_002C_6AED()
 *
 * @name f__2903_0478_002C_6AED
 * @implements 2903:0478:002C:6AED ()
 *
 * Called From: 2903:0464:0057:4D65
 * Called From: 2903:0464:0072:D3F8
 */
void f__2903_0478_002C_6AED()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { f__2903_049B_0009_5066(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x44), emu_ax.x);
	emu_xchgb(&emu_ax.h, &emu_dx.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_divw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x42), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x34), 0xFF00);
	if (emu_flags.zf) { f__2903_04A4_0018_7352(); return; }
	/* Unresolved jump */ emu_ip = 0x04C4; emu_last_cs = 0x2903; emu_last_ip = 0x04A2; emu_last_length = 0x002C; emu_last_crc = 0x6AED; emu_call();
}

/**
 * Decompiled function f__2903_049B_0009_5066()
 *
 * @name f__2903_049B_0009_5066
 * @implements 2903:049B:0009:5066 ()
 *
 * Called From: 2903:047D:002C:6AED
 * Called From: 2903:047D:0057:4D65
 * Called From: 2903:047D:0072:D3F8
 */
void f__2903_049B_0009_5066()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x34), 0xFF00);
	if (emu_flags.zf) { f__2903_04A4_0018_7352(); return; }
	f__2903_04C4_0010_92CB(); return;
}

/**
 * Decompiled function f__2903_04A4_0018_7352()
 *
 * @name f__2903_04A4_0018_7352
 * @implements 2903:04A4:0018:7352 ()
 *
 * Called From: 2903:04A0:0009:5066
 * Called From: 2903:04A0:002C:6AED
 * Called From: 2903:04FB:0018:6F98
 */
void f__2903_04A4_0018_7352()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x34), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x34), 0xFF00);
	if (!emu_flags.zf) { f__2903_04BE_0016_C1E2(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_cx.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(0x04BC);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x04B9; emu_last_length = 0x0018; emu_last_crc = 0x7352;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x04BC; emu_last_cs = 0x2903; emu_last_ip = 0x04B9; emu_last_length = 0x0018; emu_last_crc = 0x7352; emu_call();
}

/**
 * Decompiled function f__2903_04BE_0016_C1E2()
 *
 * @name f__2903_04BE_0016_C1E2
 * @implements 2903:04BE:0016:C1E2 ()
 *
 * Called From: 2903:04B1:0018:7352
 */
void f__2903_04BE_0016_C1E2()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x36), emu_ds);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x04D4);
	switch (emu_ip) {
		case 0x050E: f__2903_050E_0022_419A(); break;
		case 0x0545: f__2903_0545_0024_06E5(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x04D1; emu_last_length = 0x0016; emu_last_crc = 0xC1E2;
			emu_call();
			return;
	}
	f__2903_04D4_000E_82DD();
}

/**
 * Decompiled function f__2903_04C4_0010_92CB()
 *
 * @name f__2903_04C4_0010_92CB
 * @implements 2903:04C4:0010:92CB ()
 *
 * Called From: 2903:04A2:0009:5066
 * Called From: 2903:0500:0018:6F98
 */
void f__2903_04C4_0010_92CB()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x04D4);
	switch (emu_ip) {
		case 0x050E: f__2903_050E_0022_419A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x04D1; emu_last_length = 0x0010; emu_last_crc = 0x92CB;
			emu_call();
			return;
	}
	f__2903_04D4_000E_82DD();
}

/**
 * Decompiled function f__2903_04D4_000E_82DD()
 *
 * @name f__2903_04D4_000E_82DD
 * @implements 2903:04D4:000E:82DD ()
 *
 * Called From: 2903:04D4:0016:C1E2
 * Called From: 2903:04D4:0010:92CB
 */
void f__2903_04D4_000E_82DD()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x04EA; emu_last_cs = 0x2903; emu_last_ip = 0x04D8; emu_last_length = 0x000E; emu_last_crc = 0x82DD; emu_call(); return; }
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2903_04E2_0008_5672(); return; }

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_push(0x04E2);
	switch (emu_ip) {
		case 0x0530: f__2903_0530_0008_CF42(); break;
		case 0x0569: f__2903_0569_000A_C3B0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x04DF; emu_last_length = 0x000E; emu_last_crc = 0x82DD;
			emu_call();
			return;
	}
	f__2903_04E2_0008_5672();
}

/**
 * Decompiled function f__2903_04E2_0008_5672()
 *
 * @name f__2903_04E2_0008_5672
 * @implements 2903:04E2:0008:5672 ()
 *
 * Called From: 2903:04DD:000E:82DD
 * Called From: 2903:04E2:000E:82DD
 */
void f__2903_04E2_0008_5672()
{
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_cx.x == 0) { f__2903_04EA_0018_6F98(); return; }

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(0x04EA);
	switch (emu_ip) {
		case 0x050E: f__2903_050E_0022_419A(); break;
		case 0x0545: f__2903_0545_0024_06E5(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x04E7; emu_last_length = 0x0008; emu_last_crc = 0x5672;
			emu_call();
			return;
	}
	f__2903_04EA_0018_6F98();
}

/**
 * Decompiled function f__2903_04EA_0018_6F98()
 *
 * @name f__2903_04EA_0018_6F98
 * @implements 2903:04EA:0018:6F98 ()
 *
 * Called From: 2903:04E5:0008:5672
 * Called From: 2903:04EA:0008:5672
 */
void f__2903_04EA_0018_6F98()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x3A));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (emu_flags.zf) { f__2903_0502_000C_D968(); return; }
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x33));
	if (emu_flags.zf) { f__2903_04A4_0018_7352(); return; }
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x38));
	f__2903_04C4_0010_92CB(); return;
}

/**
 * Decompiled function f__2903_0502_000C_D968()
 *
 * @name f__2903_0502_000C_D968
 * @implements 2903:0502:000C:D968 ()
 *
 * Called From: 2903:0369:000A:8999
 * Called From: 2903:0369:0013:7287
 * Called From: 2903:042F:0003:1D14
 * Called From: 2903:04F6:0018:6F98
 */
void f__2903_0502_000C_D968()
{
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2903_050E_0022_419A()
 *
 * @name f__2903_050E_0022_419A
 * @implements 2903:050E:0022:419A ()
 *
 * Called From: 2903:0384:001B:6CB6
 * Called From: 2903:0384:0016:7D40
 * Called From: 2903:04D1:0016:C1E2
 * Called From: 2903:04D1:0010:92CB
 * Called From: 2903:04E7:0008:5672
 */
void f__2903_050E_0022_419A()
{
	emu_push(emu_es);
	emu_movw(&emu_bx.x, emu_ds);
	emu_movw(&emu_es, emu_bx.x);
	emu_xchgw(&emu_di, &emu_si);
	if (emu_cx.x == 0) { f__2903_0528_0008_C0D2(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_repne_scasb();
	if (emu_flags.zf) { f__2903_051F_0011_4D58(); return; }
	if (emu_cx.x == 0) { f__2903_0528_0008_C0D2(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0517; emu_last_cs = 0x2903; emu_last_ip = 0x0526; emu_last_length = 0x0022; emu_last_crc = 0x419A; emu_call(); return; }
	emu_movw(&emu_ds, emu_bx.x);
	emu_xchgw(&emu_di, &emu_si);
	emu_pop(&emu_es);
	emu_subw(&emu_di, emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0517_0019_CB65()
 *
 * @name f__2903_0517_0019_CB65
 * @implements 2903:0517:0019:CB65 ()
 *
 * Called From: 2903:0526:0011:4D58
 */
void f__2903_0517_0019_CB65()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_repne_scasb();
	if (emu_flags.zf) { f__2903_051F_0011_4D58(); return; }
	if (emu_cx.x == 0) { f__2903_0528_0008_C0D2(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0517; emu_last_cs = 0x2903; emu_last_ip = 0x0526; emu_last_length = 0x0019; emu_last_crc = 0xCB65; emu_call(); return; }
	emu_movw(&emu_ds, emu_bx.x);
	emu_xchgw(&emu_di, &emu_si);
	emu_pop(&emu_es);
	emu_subw(&emu_di, emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_051F_0011_4D58()
 *
 * @name f__2903_051F_0011_4D58
 * @implements 2903:051F:0011:4D58 ()
 *
 * Called From: 2903:051B:0022:419A
 * Called From: 2903:051B:0019:CB65
 */
void f__2903_051F_0011_4D58()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2903_0517_0019_CB65(); return; }
	emu_movw(&emu_ds, emu_bx.x);
	emu_xchgw(&emu_di, &emu_si);
	emu_pop(&emu_es);
	emu_subw(&emu_di, emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0528_0008_C0D2()
 *
 * @name f__2903_0528_0008_C0D2
 * @implements 2903:0528:0008:C0D2 ()
 *
 * Called From: 2903:0515:0022:419A
 * Called From: 2903:051D:0022:419A
 * Called From: 2903:051D:0019:CB65
 */
void f__2903_0528_0008_C0D2()
{
	emu_movw(&emu_ds, emu_bx.x);
	emu_xchgw(&emu_di, &emu_si);
	emu_pop(&emu_es);
	emu_subw(&emu_di, emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0530_0008_CF42()
 *
 * @name f__2903_0530_0008_CF42
 * @implements 2903:0530:0008:CF42 ()
 *
 * Called From: 2903:04DF:000E:82DD
 * Called From: 2903:0539:0005:FF2C
 * Called From: 2903:0542:0008:A30A
 */
void f__2903_0530_0008_CF42()
{
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__2903_053D_0008_A30A(); return; }

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x0538);
	switch (emu_ip) {
		case 0x0580: f__2903_0580_0004_5083(); break;
		case 0x0584: f__2903_0584_0015_8493(); break;
		case 0x05C8: f__2903_05C8_0018_6BB5(); break;
		case 0x05E0: f__2903_05E0_000A_A47A(); break;
		case 0x061F: f__2903_061F_0015_4925(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x0535; emu_last_length = 0x0008; emu_last_crc = 0xCF42;
			emu_call();
			return;
	}
	f__2903_0538_0005_FF2C();
}

/**
 * Decompiled function f__2903_0538_0005_FF2C()
 *
 * @name f__2903_0538_0005_FF2C
 * @implements 2903:0538:0005:FF2C ()
 *
 * Called From: 2903:0538:0008:CF42
 */
void f__2903_0538_0005_FF2C()
{
	emu_incw(&emu_di);
	if (--emu_cx.x != 0) { f__2903_0530_0008_CF42(); return; }
	f__2903_0544_0001_6180(); return;
}

/**
 * Decompiled function f__2903_053D_0008_A30A()
 *
 * @name f__2903_053D_0008_A30A
 * @implements 2903:053D:0008:A30A ()
 *
 * Called From: 2903:0533:0008:CF42
 */
void f__2903_053D_0008_A30A()
{
	emu_lodsb(emu_ds);
	emu_addw(&emu_di, emu_ax.x);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2903_0530_0008_CF42(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0544_0001_6180()
 *
 * @name f__2903_0544_0001_6180
 * @implements 2903:0544:0001:6180 ()
 *
 * Called From: 2903:053B:0005:FF2C
 */
void f__2903_0544_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0545_0024_06E5()
 *
 * @name f__2903_0545_0024_06E5
 * @implements 2903:0545:0024:06E5 ()
 *
 * Called From: 2903:0384:001B:6CB6
 * Called From: 2903:0384:0016:7D40
 * Called From: 2903:04D1:0016:C1E2
 * Called From: 2903:04E7:0008:5672
 */
void f__2903_0545_0024_06E5()
{
	emu_push(emu_es);
	emu_movw(&emu_ax.x, emu_ds);
	emu_movw(&emu_es, emu_ax.x);
	emu_xchgw(&emu_di, &emu_si);
	if (emu_cx.x == 0) { f__2903_055F_000A_E6B4(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_repne_scasb();
	if (emu_flags.zf) { f__2903_0556_0013_45D6(); return; }
	if (emu_cx.x == 0) { f__2903_055F_000A_E6B4(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x054E; emu_last_cs = 0x2903; emu_last_ip = 0x055D; emu_last_length = 0x0024; emu_last_crc = 0x06E5; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_es);
	emu_movw(&emu_ds, emu_ax.x);
	emu_xchgw(&emu_di, &emu_si);
	emu_pop(&emu_es);
	emu_addw(&emu_di, emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_054E_001B_2459()
 *
 * @name f__2903_054E_001B_2459
 * @implements 2903:054E:001B:2459 ()
 *
 * Called From: 2903:055D:0013:45D6
 */
void f__2903_054E_001B_2459()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_repne_scasb();
	if (emu_flags.zf) { f__2903_0556_0013_45D6(); return; }
	if (emu_cx.x == 0) { f__2903_055F_000A_E6B4(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x054E; emu_last_cs = 0x2903; emu_last_ip = 0x055D; emu_last_length = 0x001B; emu_last_crc = 0x2459; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_es);
	emu_movw(&emu_ds, emu_ax.x);
	emu_xchgw(&emu_di, &emu_si);
	emu_pop(&emu_es);
	emu_addw(&emu_di, emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0556_0013_45D6()
 *
 * @name f__2903_0556_0013_45D6
 * @implements 2903:0556:0013:45D6 ()
 *
 * Called From: 2903:0552:0024:06E5
 * Called From: 2903:0552:001B:2459
 */
void f__2903_0556_0013_45D6()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2903_054E_001B_2459(); return; }
	emu_movw(&emu_ax.x, emu_es);
	emu_movw(&emu_ds, emu_ax.x);
	emu_xchgw(&emu_di, &emu_si);
	emu_pop(&emu_es);
	emu_addw(&emu_di, emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_055F_000A_E6B4()
 *
 * @name f__2903_055F_000A_E6B4
 * @implements 2903:055F:000A:E6B4 ()
 *
 * Called From: 2903:054C:0024:06E5
 * Called From: 2903:0554:001B:2459
 * Called From: 2903:0554:0024:06E5
 */
void f__2903_055F_000A_E6B4()
{
	emu_movw(&emu_ax.x, emu_es);
	emu_movw(&emu_ds, emu_ax.x);
	emu_xchgw(&emu_di, &emu_si);
	emu_pop(&emu_es);
	emu_addw(&emu_di, emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0569_000A_C3B0()
 *
 * @name f__2903_0569_000A_C3B0
 * @implements 2903:0569:000A:C3B0 ()
 *
 * Called From: 2903:04DF:000E:82DD
 */
void f__2903_0569_000A_C3B0()
{
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__2903_0578_0008_A35A(); return; }

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x0573);
	switch (emu_ip) {
		case 0x0580: f__2903_0580_0004_5083(); break;
		case 0x05C8: f__2903_05C8_0018_6BB5(); break;
		case 0x05E0: f__2903_05E0_000A_A47A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x0570; emu_last_length = 0x000A; emu_last_crc = 0xC3B0;
			emu_call();
			return;
	}
	f__2903_0573_0005_FF6C();
}

/**
 * Decompiled function f__2903_056B_0008_CF42()
 *
 * @name f__2903_056B_0008_CF42
 * @implements 2903:056B:0008:CF42 ()
 *
 * Called From: 2903:0574:0005:FF6C
 * Called From: 2903:057D:0008:A35A
 */
void f__2903_056B_0008_CF42()
{
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__2903_0578_0008_A35A(); return; }

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x0573);
	switch (emu_ip) {
		case 0x0580: f__2903_0580_0004_5083(); break;
		case 0x05C8: f__2903_05C8_0018_6BB5(); break;
		case 0x05E0: f__2903_05E0_000A_A47A(); break;
		case 0x061F: f__2903_061F_0015_4925(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x0570; emu_last_length = 0x0008; emu_last_crc = 0xCF42;
			emu_call();
			return;
	}
	f__2903_0573_0005_FF6C();
}

/**
 * Decompiled function f__2903_0573_0005_FF6C()
 *
 * @name f__2903_0573_0005_FF6C
 * @implements 2903:0573:0005:FF6C ()
 *
 * Called From: 2903:0573:0008:CF42
 * Called From: 2903:0573:000A:C3B0
 */
void f__2903_0573_0005_FF6C()
{
	emu_decw(&emu_di);
	if (--emu_cx.x != 0) { f__2903_056B_0008_CF42(); return; }
	f__2903_057F_0001_6180(); return;
}

/**
 * Decompiled function f__2903_0578_0008_A35A()
 *
 * @name f__2903_0578_0008_A35A
 * @implements 2903:0578:0008:A35A ()
 *
 * Called From: 2903:056E:000A:C3B0
 * Called From: 2903:056E:0008:CF42
 */
void f__2903_0578_0008_A35A()
{
	emu_lodsb(emu_ds);
	emu_subw(&emu_di, emu_ax.x);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2903_056B_0008_CF42(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_057F_0001_6180()
 *
 * @name f__2903_057F_0001_6180
 * @implements 2903:057F:0001:6180 ()
 *
 * Called From: 2903:0576:0005:FF6C
 */
void f__2903_057F_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0580_0004_5083()
 *
 * @name f__2903_0580_0004_5083
 * @implements 2903:0580:0004:5083 ()
 *
 * Called From: 2903:0535:0008:CF42
 * Called From: 2903:0570:0008:CF42
 * Called From: 2903:0570:000A:C3B0
 */
void f__2903_0580_0004_5083()
{
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0584_0015_8493()
 *
 * @name f__2903_0584_0015_8493
 * @implements 2903:0584:0015:8493 ()
 *
 * Called From: 2903:0535:0008:CF42
 */
void f__2903_0584_0015_8493()
{
	emu_push(emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_cx.x);
	emu_lfp(&emu_ds, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x + emu_ax.l,  0x0));
	if (--emu_cx.x != 0) { f__2903_058E_000B_34EF(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_058E_000B_34EF()
 *
 * @name f__2903_058E_000B_34EF
 * @implements 2903:058E:000B:34EF ()
 *
 * Called From: 2903:058F:0015:8493
 */
void f__2903_058E_000B_34EF()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x + emu_ax.l,  0x0));
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x058E; emu_last_cs = 0x2903; emu_last_ip = 0x058F; emu_last_length = 0x000B; emu_last_crc = 0x34EF; emu_call(); }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_05C8_0018_6BB5()
 *
 * @name f__2903_05C8_0018_6BB5
 * @implements 2903:05C8:0018:6BB5 ()
 *
 * Called From: 2903:0535:0008:CF42
 * Called From: 2903:0570:0008:CF42
 * Called From: 2903:0570:000A:C3B0
 */
void f__2903_05C8_0018_6BB5()
{
	emu_push(emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_cx.x);
	emu_lfp(&emu_ds, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x + emu_ax.l,  0x0));
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x05D5; emu_last_cs = 0x2903; emu_last_ip = 0x05D6; emu_last_length = 0x0018; emu_last_crc = 0x6BB5; emu_call(); }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_05E0_000A_A47A()
 *
 * @name f__2903_05E0_000A_A47A
 * @implements 2903:05E0:000A:A47A ()
 *
 * Called From: 2903:0535:0008:CF42
 * Called From: 2903:0570:0008:CF42
 * Called From: 2903:0570:000A:C3B0
 */
void f__2903_05E0_000A_A47A()
{
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x3E));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x + emu_ax.l,  0x0));
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_061F_0015_4925()
 *
 * @name f__2903_061F_0015_4925
 * @implements 2903:061F:0015:4925 ()
 *
 * Called From: 2903:0535:0008:CF42
 * Called From: 2903:0570:0008:CF42
 */
void f__2903_061F_0015_4925()
{
	emu_push(emu_ds);
	emu_push(emu_cx.x);
	emu_lfp(&emu_ds, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x3E));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x + emu_ax.l,  0x0));
	emu_lfp(&emu_ds, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x + emu_ax.l,  0x0));
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x062B; emu_last_cs = 0x2903; emu_last_ip = 0x062C; emu_last_length = 0x0015; emu_last_crc = 0x4925; emu_call(); }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_090A_0019_4354()
 *
 * @name f__2903_090A_0019_4354
 * @implements 2903:090A:0019:4354 ()
 *
 * Called From: B4B8:194F:001B:556A
 */
void f__2903_090A_0019_4354()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6F1C), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6F18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6F1A), emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
