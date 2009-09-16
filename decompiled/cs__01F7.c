/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__01F7_0000_000C_3D76()
 *
 * @name f__01F7_0000_000C_3D76
 * @implements 01F7:0000:000C:3D76 ()
 *
 * Called From: 0000:0000:0000:0000
 */
void f__01F7_0000_000C_3D76()
{
	emu_movw(&emu_dx.x, 0x353F);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x291), emu_dx.x);
	emu_movb(&emu_ax.h, 0x30);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x000C); f__0070_0108_0005_E45B();
	f__01F7_000C_001C_7156();
}

/**
 * Decompiled function f__01F7_000C_001C_7156()
 *
 * @name f__01F7_000C_001C_7156
 * @implements 01F7:000C:001C:7156 ()
 *
 * Called From: 01F7:000C:000C:3D76
 */
void f__01F7_000C_001C_7156()
{
	emu_movw(&emu_bp, emu_get_memory16(emu_ds, 0x00,  0x2));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x2C));
	emu_movw(&emu_ds, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7D), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B), emu_es);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x77), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x91), emu_bp);
	emu_push(0x0028); f__01F7_017D_0006_2BD3();
	f__01F7_0028_0059_D698();
}

/**
 * Decompiled function f__01F7_0028_0059_D698()
 *
 * @name f__01F7_0028_0059_D698
 * @implements 01F7:0028:0059:D698 ()
 *
 * Called From: 01F7:0028:001C:7156
 */
void f__01F7_0028_0059_D698()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x77));
	emu_movw(&emu_es, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_cx.x, 0x7FFF);
	emu_cld();
	emu_repne_scasb();
	if (emu_cx.x == 0) { emu_ip = 0x007E; emu_last_cs = 0x01F7; emu_last_ip = 0x0039; emu_last_length = 0x0059; emu_last_crc = 0xD698; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_bx.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	if (!emu_flags.zf) { f__01F7_0037_004A_166D(); return; }
	emu_orb(&emu_cx.h, 0x80);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x75), emu_cx.x);
	emu_movw(&emu_cx.x, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addws(&emu_bx.x, 0x10);
	emu_andws(&emu_bx.x, 0xF0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x79), emu_bx.x);
	emu_movw(&emu_dx.x, emu_ss);
	emu_subw(&emu_bp, emu_dx.x);
	emu_movw(&emu_di, 0x353F);
	emu_movw(&emu_es, emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_es, 0x00,  0x7A68));
	emu_cmpw(&emu_di, 0x200);
	if (!emu_flags.cf) { emu_ip = 0x0075; emu_last_cs = 0x01F7; emu_last_ip = 0x006B; emu_last_length = 0x0059; emu_last_crc = 0xD698; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_di, 0x200);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x7A68), emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_di, emu_cx.l);
	emu_incw(&emu_di);
	emu_cmpw(&emu_bp, emu_di);
	if (!emu_flags.cf) { emu_ip = 0x0081; emu_last_cs = 0x01F7; emu_last_ip = 0x007C; emu_last_length = 0x0059; emu_last_crc = 0xD698; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x027A; emu_last_cs = 0x01F7; emu_last_ip = 0x007E; emu_last_length = 0x0059; emu_last_crc = 0xD698; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0037_004A_166D()
 *
 * @name f__01F7_0037_004A_166D
 * @implements 01F7:0037:004A:166D ()
 *
 * Called From: 01F7:003F:0059:D698
 * Called From: 01F7:003F:004A:166D
 */
void f__01F7_0037_004A_166D()
{
	emu_repne_scasb();
	if (emu_cx.x == 0) { emu_ip = 0x007E; emu_last_cs = 0x01F7; emu_last_ip = 0x0039; emu_last_length = 0x004A; emu_last_crc = 0x166D; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_bx.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	if (!emu_flags.zf) { f__01F7_0037_004A_166D(); return; }
	emu_orb(&emu_cx.h, 0x80);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x75), emu_cx.x);
	emu_movw(&emu_cx.x, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addws(&emu_bx.x, 0x10);
	emu_andws(&emu_bx.x, 0xF0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x79), emu_bx.x);
	emu_movw(&emu_dx.x, emu_ss);
	emu_subw(&emu_bp, emu_dx.x);
	emu_movw(&emu_di, 0x353F);
	emu_movw(&emu_es, emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_es, 0x00,  0x7A68));
	emu_cmpw(&emu_di, 0x200);
	if (!emu_flags.cf) { f__01F7_0075_000C_AAD4(); return; }
	emu_movw(&emu_di, 0x200);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x7A68), emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_di, emu_cx.l);
	emu_incw(&emu_di);
	emu_cmpw(&emu_bp, emu_di);
	if (!emu_flags.cf) { emu_ip = 0x0081; emu_last_cs = 0x01F7; emu_last_ip = 0x007C; emu_last_length = 0x004A; emu_last_crc = 0x166D; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x027A; emu_last_cs = 0x01F7; emu_last_ip = 0x007E; emu_last_length = 0x004A; emu_last_crc = 0x166D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0075_000C_AAD4()
 *
 * @name f__01F7_0075_000C_AAD4
 * @implements 01F7:0075:000C:AAD4 ()
 *
 * Called From: 01F7:006B:004A:166D
 */
void f__01F7_0075_000C_AAD4()
{
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_di, emu_cx.l);
	emu_incw(&emu_di);
	emu_cmpw(&emu_bp, emu_di);
	if (!emu_flags.cf) { f__01F7_0081_0018_A1DB(); return; }
	emu_ip = 0x027A; emu_last_cs = 0x01F7; emu_last_ip = 0x007E; emu_last_length = 0x000C; emu_last_crc = 0xAAD4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0081_0018_A1DB()
 *
 * @name f__01F7_0081_0018_A1DB
 * @implements 01F7:0081:0018:A1DB ()
 *
 * Called From: 01F7:007C:000C:AAD4
 */
void f__01F7_0081_0018_A1DB()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x89), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8D), emu_bx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B));
	emu_subw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_movb(&emu_ax.h, 0x4A);
	emu_push(emu_di);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0099); f__0070_0108_0005_E45B();
	f__01F7_0099_0044_8C82();
}

/**
 * Decompiled function f__01F7_0099_0044_8C82()
 *
 * @name f__01F7_0099_0044_8C82
 * @implements 01F7:0099:0044:8C82 ()
 *
 * Called From: 01F7:0099:0018:A1DB
 */
void f__01F7_0099_0044_8C82()
{
	emu_pop(&emu_di);
	emu_shlw(&emu_di, emu_cx.l);
	emu_cli();
	emu_movw(&emu_ss, emu_dx.x);
	emu_movw(&emu_sp, emu_di);
	emu_sti();
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x7A68), emu_di);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_es, emu_get_memory16(emu_cs, 0x00,  0x291));
	emu_movw(&emu_di, 0x7B8C);
	emu_movw(&emu_cx.x, 0x9AEE);
	emu_subw(&emu_cx.x, emu_di);
	emu_cld();
	emu_rep_stosb();
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x795A), 0x14);
	if ((emu_flags.cf || emu_flags.zf)) { f__01F7_010C_0004_0D38(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7D), 0x3);
	if (emu_flags.cf) { emu_ip = 0x010C; emu_last_cs = 0x01F7; emu_last_ip = 0x00CA; emu_last_length = 0x0044; emu_last_crc = 0x8C82; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x00D5; emu_last_cs = 0x01F7; emu_last_ip = 0x00CC; emu_last_length = 0x0044; emu_last_crc = 0x8C82; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7E), 0x1E);
	if (emu_flags.cf) { emu_ip = 0x010C; emu_last_cs = 0x01F7; emu_last_ip = 0x00D3; emu_last_length = 0x0044; emu_last_crc = 0x8C82; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x5801);
	emu_movw(&emu_bx.x, 0x2);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x00DD); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x01F7; emu_last_ip = 0x00DB; emu_last_length = 0x0044; emu_last_crc = 0x8C82; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_010C_0004_0D38()
 *
 * @name f__01F7_010C_0004_0D38
 * @implements 01F7:010C:0004:0D38 ()
 *
 * Called From: 01F7:00C3:0044:8C82
 */
void f__01F7_010C_0004_0D38()
{
	emu_movb(&emu_ax.h, 0x0);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0110); f__0070_00D0_0005_E33B();
	f__01F7_0110_0028_782B();
}

/**
 * Decompiled function f__01F7_0110_0028_782B()
 *
 * @name f__01F7_0110_0028_782B
 * @implements 01F7:0110:0028:782B ()
 *
 * Called From: 01F7:0110:0004:0D38
 */
void f__01F7_0110_0028_782B()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x81), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x83), emu_cx.x);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__01F7_0128_0010_F7CD(); return; }
	emu_movw(&emu_ax.x, 0x40);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_bx.x, 0x70);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x1);
	emu_xorw(&emu_bp, emu_bp);
	emu_movw(&emu_es, emu_get_memory16(emu_cs, 0x00,  0x291));
	emu_movw(&emu_si, 0x7B68);
	emu_movw(&emu_di, 0x7B86);
	emu_push(0x0138); emu_ip = 0x01ED; emu_last_cs = 0x01F7; emu_last_ip = 0x0135; emu_last_length = 0x0028; emu_last_crc = 0x782B; emu_call(); // Jump does not resolve
	f__01F7_0138_0019_8DC5();
}

/**
 * Decompiled function f__01F7_0128_0010_F7CD()
 *
 * @name f__01F7_0128_0010_F7CD
 * @implements 01F7:0128:0010:F7CD ()
 *
 * Called From: 01F7:011A:0028:782B
 */
void f__01F7_0128_0010_F7CD()
{
	emu_xorw(&emu_bp, emu_bp);
	emu_movw(&emu_es, emu_get_memory16(emu_cs, 0x00,  0x291));
	emu_movw(&emu_si, 0x7B68);
	emu_movw(&emu_di, 0x7B86);
	emu_push(0x0138); f__01F7_01ED_0024_A432();
	f__01F7_0138_0019_8DC5();
}

/**
 * Decompiled function f__01F7_0138_0019_8DC5()
 *
 * @name f__01F7_0138_0019_8DC5
 * @implements 01F7:0138:0019:8DC5 ()
 *
 * Called From: 01F7:0230:0001:6180
 */
void f__01F7_0138_0019_8DC5()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x73));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x71));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6F));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6B));
	emu_push(emu_cs); emu_push(0x0151); emu_cs = 0x3480; ovl__3480(0);
	f__01F7_0151_0006_B889();
}

/**
 * Decompiled function f__01F7_0151_0006_B889()
 *
 * @name f__01F7_0151_0006_B889
 * @implements 01F7:0151:0006:B889 ()
 *
 * Called From: 01F7:0151:0019:8DC5
 */
void f__01F7_0151_0006_B889()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0157); f__01F7_0377_000D_81BB();
	f__01F7_0157_0010_1227();
}

/**
 * Decompiled function f__01F7_0157_0010_1227()
 *
 * @name f__01F7_0157_0010_1227
 * @implements 01F7:0157:0010:1227 ()
 *
 * Called From: 01F7:0346:000C:44E6
 */
void f__01F7_0157_0010_1227()
{
	emu_movw(&emu_es, emu_get_memory16(emu_cs, 0x00,  0x291));
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, 0x7B86);
	emu_movw(&emu_di, 0x7B8C);
	emu_push(0x0167); f__01F7_0231_0021_40ED();
	f__01F7_0167_0003_EE77();
}

/**
 * Decompiled function f__01F7_0167_0003_EE77()
 *
 * @name f__01F7_0167_0003_EE77
 * @implements 01F7:0167:0003:EE77 ()
 *
 * Called From: 01F7:0167:0010:1227
 */
void f__01F7_0167_0003_EE77()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_016A_0001_6580()
 *
 * @name f__01F7_016A_0001_6580
 * @implements 01F7:016A:0001:6580 ()
 *
 * Called From: 01F7:0354:0005:4684
 */
void f__01F7_016A_0001_6580()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_016B_0009_694B()
 *
 * @name f__01F7_016B_0009_694B
 * @implements 01F7:016B:0009:694B ()
 *
 * Called From: 01F7:036E:0008:E8D2
 */
void f__01F7_016B_0009_694B()
{
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_ax.h, 0x4C);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x4));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0174); f__0070_0108_0005_E45B();
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_017D_0006_2BD3()
 *
 * @name f__01F7_017D_0006_2BD3
 * @implements 01F7:017D:0006:2BD3 ()
 *
 * Called From: 01F7:0025:001C:7156
 */
void f__01F7_017D_0006_2BD3()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3500);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0183); f__0070_0108_0005_E45B();
	f__01F7_0183_000D_3CC0();
}

/**
 * Decompiled function f__01F7_0183_000D_3CC0()
 *
 * @name f__01F7_0183_000D_3CC0
 * @implements 01F7:0183:000D:3CC0 ()
 *
 * Called From: 01F7:0183:0006:2BD3
 */
void f__01F7_0183_000D_3CC0()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x5B), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x5D), emu_es);
	emu_movw(&emu_ax.x, 0x3504);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0190); f__0070_0108_0005_E45B();
	f__01F7_0190_000D_ACB8();
}

/**
 * Decompiled function f__01F7_0190_000D_ACB8()
 *
 * @name f__01F7_0190_000D_ACB8
 * @implements 01F7:0190:000D:ACB8 ()
 *
 * Called From: 01F7:0190:000D:3CC0
 */
void f__01F7_0190_000D_ACB8()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x5F), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x61), emu_es);
	emu_movw(&emu_ax.x, 0x3505);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x019D); f__0070_0108_0005_E45B();
	f__01F7_019D_000D_1CB7();
}

/**
 * Decompiled function f__01F7_019D_000D_1CB7()
 *
 * @name f__01F7_019D_000D_1CB7
 * @implements 01F7:019D:000D:1CB7 ()
 *
 * Called From: 01F7:019D:000D:ACB8
 */
void f__01F7_019D_000D_1CB7()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x63), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x65), emu_es);
	emu_movw(&emu_ax.x, 0x3506);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01AA); f__0070_0108_0005_E45B();
	f__01F7_01AA_0014_EA24();
}

/**
 * Decompiled function f__01F7_01AA_0014_EA24()
 *
 * @name f__01F7_01AA_0014_EA24
 * @implements 01F7:01AA:0014:EA24 ()
 *
 * Called From: 01F7:01AA:000D:1CB7
 */
void f__01F7_01AA_0014_EA24()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x67), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x69), emu_es);
	emu_movw(&emu_ax.x, 0x2500);
	emu_movw(&emu_dx.x, emu_cs);
	emu_movw(&emu_ds, emu_dx.x);
	emu_movw(&emu_dx.x, 0x174);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01BE); f__0070_0108_0005_E45B();
	f__01F7_01BE_0002_A187();
}

/**
 * Decompiled function f__01F7_01BE_0002_A187()
 *
 * @name f__01F7_01BE_0002_A187
 * @implements 01F7:01BE:0002:A187 ()
 *
 * Called From: 01F7:01BE:0014:EA24
 */
void f__01F7_01BE_0002_A187()
{
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_01C0_000A_F393()
 *
 * @name f__01F7_01C0_000A_F393
 * @implements 01F7:01C0:000A:F393 ()
 *
 * Called From: 01F7:034F:0005:069B
 */
void f__01F7_01C0_000A_F393()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2500);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ds, 0x00,  0x5B));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01CA); f__0070_0108_0005_E45B();
	f__01F7_01CA_000B_5790();
}

/**
 * Decompiled function f__01F7_01CA_000B_5790()
 *
 * @name f__01F7_01CA_000B_5790
 * @implements 01F7:01CA:000B:5790 ()
 *
 * Called From: 01F7:01CA:000A:F393
 */
void f__01F7_01CA_000B_5790()
{
	emu_pop(&emu_ds);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2504);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ds, 0x00,  0x5F));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01D5); f__0070_0108_0005_E45B();
	f__01F7_01D5_000B_9693();
}

/**
 * Decompiled function f__01F7_01D5_000B_9693()
 *
 * @name f__01F7_01D5_000B_9693
 * @implements 01F7:01D5:000B:9693 ()
 *
 * Called From: 01F7:01D5:000B:5790
 */
void f__01F7_01D5_000B_9693()
{
	emu_pop(&emu_ds);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2505);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ds, 0x00,  0x63));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01E0); f__0070_0108_0005_E45B();
	f__01F7_01E0_000B_D593();
}

/**
 * Decompiled function f__01F7_01E0_000B_D593()
 *
 * @name f__01F7_01E0_000B_D593
 * @implements 01F7:01E0:000B:D593 ()
 *
 * Called From: 01F7:01E0:000B:9693
 */
void f__01F7_01E0_000B_D593()
{
	emu_pop(&emu_ds);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2506);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ds, 0x00,  0x67));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01EB); f__0070_0108_0005_E45B();
	f__01F7_01EB_0002_A587();
}

/**
 * Decompiled function f__01F7_01EB_0002_A587()
 *
 * @name f__01F7_01EB_0002_A587
 * @implements 01F7:01EB:0002:A587 ()
 *
 * Called From: 01F7:01EB:000B:D593
 */
void f__01F7_01EB_0002_A587()
{
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_01ED_0024_A432()
 *
 * @name f__01F7_01ED_0024_A432
 * @implements 01F7:01ED:0024:A432 ()
 *
 * Called From: 01F7:0135:0010:F7CD
 * Called From: 01F7:0227:0003:A2DA
 * Called From: 01F7:022E:0003:9E5A
 */
void f__01F7_01ED_0024_A432()
{
	emu_movw(&emu_ax.x, 0x100);
	emu_movw(&emu_dx.x, emu_di);
	emu_movw(&emu_bx.x, emu_si);
	emu_cmpw(&emu_bx.x, emu_di);
	if (emu_flags.zf) { emu_ip = 0x0211; emu_last_cs = 0x01F7; emu_last_ip = 0x01F6; emu_last_length = 0x0024; emu_last_crc = 0xA432; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { f__01F7_020C_0005_856E(); return; }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_xorb(&emu_cx.h, emu_cx.h);
	emu_cmpw(&emu_cx.x, emu_ax.x);
	if (!emu_flags.cf) { emu_ip = 0x020C; emu_last_cs = 0x01F7; emu_last_ip = 0x0206; emu_last_length = 0x0024; emu_last_crc = 0xA432; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_bx.x);
	emu_addws(&emu_bx.x, 0x6);
	f__01F7_01F4_001D_3417(); return;
}

/**
 * Decompiled function f__01F7_01F4_001D_3417()
 *
 * @name f__01F7_01F4_001D_3417
 * @implements 01F7:01F4:001D:3417 ()
 *
 * Called From: 01F7:020F:0024:A432
 * Called From: 01F7:020F:0005:856E
 * Called From: 01F7:020F:001D:3417
 */
void f__01F7_01F4_001D_3417()
{
	emu_cmpw(&emu_bx.x, emu_di);
	if (emu_flags.zf) { f__01F7_0211_0015_AC4F(); return; }
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { f__01F7_020C_0005_856E(); return; }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_xorb(&emu_cx.h, emu_cx.h);
	emu_cmpw(&emu_cx.x, emu_ax.x);
	if (!emu_flags.cf) { f__01F7_020C_0005_856E(); return; }
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_bx.x);
	emu_addws(&emu_bx.x, 0x6);
	f__01F7_01F4_001D_3417(); return;
}

/**
 * Decompiled function f__01F7_020C_0005_856E()
 *
 * @name f__01F7_020C_0005_856E
 * @implements 01F7:020C:0005:856E ()
 *
 * Called From: 01F7:01FC:0024:A432
 * Called From: 01F7:01FC:001D:3417
 * Called From: 01F7:0206:001D:3417
 */
void f__01F7_020C_0005_856E()
{
	emu_addws(&emu_bx.x, 0x6);
	f__01F7_01F4_001D_3417(); return;
}

/**
 * Decompiled function f__01F7_0211_0015_AC4F()
 *
 * @name f__01F7_0211_0015_AC4F
 * @implements 01F7:0211:0015:AC4F ()
 *
 * Called From: 01F7:01F6:001D:3417
 */
void f__01F7_0211_0015_AC4F()
{
	emu_cmpw(&emu_dx.x, emu_di);
	if (emu_flags.zf) { f__01F7_0230_0001_6180(); return; }
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	emu_push(emu_es);
	if (emu_flags.zf) { p__01F7_0229_0004_BEF7(); return; }

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx.x,  0x2);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx.x,  0x4);
	emu_push(0x0226);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F74027: f__01F7_4027_0011_8951(); break;
		case 0x217E0D2C: f__217E_0D2C_000B_83A7(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0222; emu_last_length = 0x0015; emu_last_crc = 0xAC4F;
			emu_call();
			return;
	}
	f__01F7_0226_0003_A2DA();
}

/**
 * Decompiled function f__01F7_0226_0003_A2DA()
 *
 * @name f__01F7_0226_0003_A2DA
 * @implements 01F7:0226:0003:A2DA ()
 *
 * Called From: 01F7:0226:0015:AC4F
 */
void f__01F7_0226_0003_A2DA()
{
	emu_pop(&emu_es);
	f__01F7_01ED_0024_A432(); return;
}

/**
 * Decompiled function f__01F7_022D_0003_9E5A()
 *
 * @name f__01F7_022D_0003_9E5A
 * @implements 01F7:022D:0003:9E5A ()
 *
 * Called From: 01F7:022D:0004:BEF7
 * Called From: 01F7:21DA:0033:2CD8
 */
void f__01F7_022D_0003_9E5A()
{
	emu_pop(&emu_es);
	f__01F7_01ED_0024_A432(); return;
}

/**
 * Decompiled function f__01F7_0230_0001_6180()
 *
 * @name f__01F7_0230_0001_6180
 * @implements 01F7:0230:0001:6180 ()
 *
 * Called From: 01F7:0213:0015:AC4F
 */
void f__01F7_0230_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_0231_0021_40ED()
 *
 * @name f__01F7_0231_0021_40ED
 * @implements 01F7:0231:0021:40ED ()
 *
 * Called From: 01F7:0164:0010:1227
 * Called From: 01F7:0268:0003:A35A
 */
void f__01F7_0231_0021_40ED()
{
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, emu_di);
	emu_movw(&emu_bx.x, emu_si);
	emu_cmpw(&emu_bx.x, emu_di);
	if (emu_flags.zf) { emu_ip = 0x0252; emu_last_cs = 0x01F7; emu_last_ip = 0x0239; emu_last_length = 0x0021; emu_last_crc = 0x40ED; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { f__01F7_024D_0005_866E(); return; }
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), emu_ax.h);
	if (emu_flags.cf) { emu_ip = 0x024D; emu_last_cs = 0x01F7; emu_last_ip = 0x0245; emu_last_length = 0x0021; emu_last_crc = 0x40ED; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.h, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_movw(&emu_dx.x, emu_bx.x);
	emu_addws(&emu_bx.x, 0x6);
	f__01F7_0237_001B_5A54(); return;
}

/**
 * Decompiled function f__01F7_0237_001B_5A54()
 *
 * @name f__01F7_0237_001B_5A54
 * @implements 01F7:0237:001B:5A54 ()
 *
 * Called From: 01F7:0250:0021:40ED
 * Called From: 01F7:0250:0005:866E
 */
void f__01F7_0237_001B_5A54()
{
	emu_cmpw(&emu_bx.x, emu_di);
	if (emu_flags.zf) { f__01F7_0252_0015_AC4F(); return; }
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x024D; emu_last_cs = 0x01F7; emu_last_ip = 0x023F; emu_last_length = 0x001B; emu_last_crc = 0x5A54; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), emu_ax.h);
	if (emu_flags.cf) { emu_ip = 0x024D; emu_last_cs = 0x01F7; emu_last_ip = 0x0245; emu_last_length = 0x001B; emu_last_crc = 0x5A54; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.h, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_movw(&emu_dx.x, emu_bx.x);
	emu_addws(&emu_bx.x, 0x6);
	emu_ip = 0x0237; emu_last_cs = 0x01F7; emu_last_ip = 0x0250; emu_last_length = 0x001B; emu_last_crc = 0x5A54; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_024D_0005_866E()
 *
 * @name f__01F7_024D_0005_866E
 * @implements 01F7:024D:0005:866E ()
 *
 * Called From: 01F7:023F:0021:40ED
 */
void f__01F7_024D_0005_866E()
{
	emu_addws(&emu_bx.x, 0x6);
	f__01F7_0237_001B_5A54(); return;
}

/**
 * Decompiled function f__01F7_0252_0015_AC4F()
 *
 * @name f__01F7_0252_0015_AC4F
 * @implements 01F7:0252:0015:AC4F ()
 *
 * Called From: 01F7:0239:001B:5A54
 */
void f__01F7_0252_0015_AC4F()
{
	emu_cmpw(&emu_dx.x, emu_di);
	if (emu_flags.zf) { f__01F7_0271_0001_6180(); return; }
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	emu_push(emu_es);
	if (emu_flags.zf) { emu_ip = 0x026A; emu_last_cs = 0x01F7; emu_last_ip = 0x0261; emu_last_length = 0x0015; emu_last_crc = 0xAC4F; emu_call(); return; } // Jump does not resolve

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx.x,  0x2);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx.x,  0x4);
	emu_push(0x0267);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x217E0198: f__217E_0198_0015_D478(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0263; emu_last_length = 0x0015; emu_last_crc = 0xAC4F;
			emu_call();
			return;
	}
	f__01F7_0267_0003_A35A();
}

/**
 * Decompiled function f__01F7_0267_0003_A35A()
 *
 * @name f__01F7_0267_0003_A35A
 * @implements 01F7:0267:0003:A35A ()
 *
 * Called From: 01F7:0267:0015:AC4F
 */
void f__01F7_0267_0003_A35A()
{
	emu_pop(&emu_es);
	f__01F7_0231_0021_40ED(); return;
}

/**
 * Decompiled function f__01F7_0271_0001_6180()
 *
 * @name f__01F7_0271_0001_6180
 * @implements 01F7:0271:0001:6180 ()
 *
 * Called From: 01F7:0254:0015:AC4F
 */
void f__01F7_0271_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_02C9_0001_6580()
 *
 * @name f__01F7_02C9_0001_6580
 * @implements 01F7:02C9:0001:6580 ()
 *
 * Called From: 217E:03D0:001A:D1EE
 * Called From: 217E:0551:0020:2849
 * Called From: 217E:0551:0017:FADA
 */
void f__01F7_02C9_0001_6580()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_02F7_0007_3850()
 *
 * @name f__01F7_02F7_0007_3850
 * @implements 01F7:02F7:0007:3850 ()
 *
 * Called From: 01F7:0435:0010:87B4
 */
void f__01F7_02F7_0007_3850()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_ax.h, 0x19);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x02FE); f__0070_0108_0005_E45B();
	f__01F7_02FE_000B_E8C5();
}

/**
 * Decompiled function f__01F7_02FE_000B_E8C5()
 *
 * @name f__01F7_02FE_000B_E8C5
 * @implements 01F7:02FE:000B:E8C5 ()
 *
 * Called From: 01F7:02FE:0007:3850
 */
void f__01F7_02FE_000B_E8C5()
{
	emu_movb(&emu_ax.h, 0x0);
	emu_incw(&emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_0309_000C_E723()
 *
 * @name f__01F7_0309_000C_E723
 * @implements 01F7:0309:000C:E723 ()
 *
 * Called From: 01F7:0454:0015:6A10
 */
void f__01F7_0309_000C_E723()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_dx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_decb(&emu_dx.l);
	emu_movb(&emu_ax.h, 0xE);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0315); f__0070_0108_0005_E45B();
	f__01F7_0315_000A_7DF3();
}

/**
 * Decompiled function f__01F7_0315_000A_7DF3()
 *
 * @name f__01F7_0315_000A_7DF3
 * @implements 01F7:0315:000A:7DF3 ()
 *
 * Called From: 01F7:0315:000C:E723
 */
void f__01F7_0315_000A_7DF3()
{
	emu_movb(&emu_ax.h, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_031F_0001_6580()
 *
 * @name f__01F7_031F_0001_6580
 * @implements 01F7:031F:0001:6580 ()
 *
 * Called From: 01F7:0361:000E:F9F7
 * Called From: 01F7:0365:0004:487E
 */
void f__01F7_031F_0001_6580()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_0320_000D_74B7()
 *
 * @name f__01F7_0320_000D_74B7
 * @implements 01F7:0320:000D:74B7 ()
 *
 * Called From: 01F7:0381:000D:81BB
 */
void f__01F7_0320_000D_74B7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { emu_ip = 0x034D; emu_last_cs = 0x01F7; emu_last_ip = 0x0329; emu_last_length = 0x000D; emu_last_crc = 0x74B7; emu_call(); return; } // Jump does not resolve
	f__01F7_033D_000C_44E6(); return;
}

/**
 * Decompiled function f__01F7_033D_000C_44E6()
 *
 * @name f__01F7_033D_000C_44E6
 * @implements 01F7:033D:000C:44E6 ()
 *
 * Called From: 01F7:032B:000D:74B7
 */
void f__01F7_033D_000C_44E6()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x76BA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x032D; emu_last_cs = 0x01F7; emu_last_ip = 0x0342; emu_last_length = 0x000C; emu_last_crc = 0x44E6; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs);
	emu_push(0x0349); f__01F7_0157_0010_1227();
	f__01F7_0349_0004_4860();
}

/**
 * Decompiled function f__01F7_0349_0004_4860()
 *
 * @name f__01F7_0349_0004_4860
 * @implements 01F7:0349:0004:4860 ()
 *
 * Called From: 01F7:0349:000C:44E6
 */
void f__01F7_0349_0004_4860()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x77BE);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x77C0);
	emu_push(0x034D);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F74484: f__01F7_4484_0014_5939(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0349; emu_last_length = 0x0004; emu_last_crc = 0x4860;
			emu_call();
			return;
	}
	f__01F7_034D_0005_069B();
}

/**
 * Decompiled function f__01F7_034D_0005_069B()
 *
 * @name f__01F7_034D_0005_069B
 * @implements 01F7:034D:0005:069B ()
 *
 * Called From: 01F7:034D:0004:4860
 */
void f__01F7_034D_0005_069B()
{
	emu_push(emu_cs);
	emu_push(0x0352); f__01F7_01C0_000A_F393();
	f__01F7_0352_0005_4684();
}

/**
 * Decompiled function f__01F7_0352_0005_4684()
 *
 * @name f__01F7_0352_0005_4684
 * @implements 01F7:0352:0005:4684 ()
 *
 * Called From: 01F7:0352:0005:069B
 */
void f__01F7_0352_0005_4684()
{
	emu_push(emu_cs);
	emu_push(0x0357); f__01F7_016A_0001_6580();
	f__01F7_0357_000E_F9F7();
}

/**
 * Decompiled function f__01F7_0357_000E_F9F7()
 *
 * @name f__01F7_0357_000E_F9F7
 * @implements 01F7:0357:000E:F9F7 ()
 *
 * Called From: 01F7:0357:0005:4684
 */
void f__01F7_0357_000E_F9F7()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0372; emu_last_cs = 0x01F7; emu_last_ip = 0x035B; emu_last_length = 0x000E; emu_last_crc = 0xF9F7; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { emu_ip = 0x0369; emu_last_cs = 0x01F7; emu_last_ip = 0x035F; emu_last_length = 0x000E; emu_last_crc = 0xF9F7; emu_call(); return; } // Jump does not resolve

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x77C2);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x77C4);
	emu_push(0x0365);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F7031F: f__01F7_031F_0001_6580(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0361; emu_last_length = 0x000E; emu_last_crc = 0xF9F7;
			emu_call();
			return;
	}
	f__01F7_0365_0004_487E();
}

/**
 * Decompiled function f__01F7_0365_0004_487E()
 *
 * @name f__01F7_0365_0004_487E
 * @implements 01F7:0365:0004:487E ()
 *
 * Called From: 01F7:0365:000E:F9F7
 */
void f__01F7_0365_0004_487E()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x77C6);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x77C8);
	emu_push(0x0369);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F7031F: f__01F7_031F_0001_6580(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0365; emu_last_length = 0x0004; emu_last_crc = 0x487E;
			emu_call();
			return;
	}
	f__01F7_0369_0008_E8D2();
}

/**
 * Decompiled function f__01F7_0369_0008_E8D2()
 *
 * @name f__01F7_0369_0008_E8D2
 * @implements 01F7:0369:0008:E8D2 ()
 *
 * Called From: 01F7:0369:0004:487E
 */
void f__01F7_0369_0008_E8D2()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_push(emu_cs);
	emu_push(0x0371); f__01F7_016B_0009_694B();
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_0377_000D_81BB()
 *
 * @name f__01F7_0377_000D_81BB
 * @implements 01F7:0377:000D:81BB ()
 *
 * Called From: 01F7:0154:0006:B889
 * Called From: 1423:0447:0008:C68B
 * Called From: B4B8:1D65:0008:C68B
 */
void f__01F7_0377_000D_81BB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(0x0384); f__01F7_0320_000D_74B7();
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_03B2_0017_7CBE()
 *
 * @name f__01F7_03B2_0017_7CBE
 * @implements 01F7:03B2:0017:7CBE ()
 *
 * Called From: 10E4:0DE7:0039:BC66
 * Called From: 1587:015E:0010:4D09
 * Called From: 2537:0040:0011:C388
 * Called From: B4F2:11F5:0018:1D91
 * Called From: B4F2:1203:000E:5317
 * Called From: B520:08B6:0022:663C
 * Called From: B520:094C:0033:733E
 * Called From: B520:09E3:003E:D22C
 * Called From: B52A:00ED:0019:2572
 */
void f__01F7_03B2_0017_7CBE()
{
	emu_push(emu_si);
	emu_xchgw(&emu_ax.x, &emu_si);
	emu_xchgw(&emu_ax.x, &emu_dx.x);
	emu_testw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__01F7_03BB_000E_AF63(); return; }
	emu_mulw(&emu_ax.x, emu_bx.x);
	if (emu_cx.x == 0) { emu_ip = 0x03C2; emu_last_cs = 0x01F7; emu_last_ip = 0x03BB; emu_last_length = 0x0017; emu_last_crc = 0x7CBE; emu_call(); return; } // Jump does not resolve
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_mulw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_cx.x);
	emu_xchgw(&emu_ax.x, &emu_si);
	emu_mulw(&emu_ax.x, emu_bx.x);
	emu_addw(&emu_dx.x, emu_si);
	emu_pop(&emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_03BB_000E_AF63()
 *
 * @name f__01F7_03BB_000E_AF63
 * @implements 01F7:03BB:000E:AF63 ()
 *
 * Called From: 01F7:03B7:0017:7CBE
 */
void f__01F7_03BB_000E_AF63()
{
	if (emu_cx.x == 0) { f__01F7_03C2_0007_1560(); return; }
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_mulw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_cx.x);
	emu_xchgw(&emu_ax.x, &emu_si);
	emu_mulw(&emu_ax.x, emu_bx.x);
	emu_addw(&emu_dx.x, emu_si);
	emu_pop(&emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_03C2_0007_1560()
 *
 * @name f__01F7_03C2_0007_1560
 * @implements 01F7:03C2:0007:1560 ()
 *
 * Called From: 01F7:03BB:000E:AF63
 */
void f__01F7_03C2_0007_1560()
{
	emu_xchgw(&emu_ax.x, &emu_si);
	emu_mulw(&emu_ax.x, emu_bx.x);
	emu_addw(&emu_dx.x, emu_si);
	emu_pop(&emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_03C9_001C_11C7()
 *
 * @name f__01F7_03C9_001C_11C7
 * @implements 01F7:03C9:001C:11C7 ()
 *
 * Called From: 10E4:0F9D:0088:7622
 * Called From: B4B8:0A33:001A:E094
 * Called From: B4F2:0E2A:0019:86E9
 */
void f__01F7_03C9_001C_11C7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cld();
	emu_shrw(&emu_cx.x, 0x1);
	emu_rep_movsw(emu_ds);
	emu_adcw(&emu_cx.x, emu_cx.x);
	emu_rep_movsb(emu_ds);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_sp += 8;
	return;
}

/**
 * Decompiled function f__01F7_03E5_000F_055B()
 *
 * @name f__01F7_03E5_000F_055B
 * @implements 01F7:03E5:000F:055B ()
 *
 * Called From: 01F7:2795:001A:E421
 */
void f__01F7_03E5_000F_055B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movb(&emu_ax.h, 0x47);
	emu_movb(&emu_dx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x03F4); f__0070_0108_0005_E45B();
	f__01F7_03F4_0007_2226();
}

/**
 * Decompiled function f__01F7_03F4_0007_2226()
 *
 * @name f__01F7_03F4_0007_2226
 * @implements 01F7:03F4:0007:2226 ()
 *
 * Called From: 01F7:03F4:000F:055B
 */
void f__01F7_03F4_0007_2226()
{
	emu_pop(&emu_ds);
	if (emu_flags.cf) { emu_ip = 0x03FB; emu_last_cs = 0x01F7; emu_last_ip = 0x03F5; emu_last_length = 0x0007; emu_last_crc = 0x2226; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__01F7_03FF_0003_2E57(); return;
}

/**
 * Decompiled function f__01F7_03FF_0003_2E57()
 *
 * @name f__01F7_03FF_0003_2E57
 * @implements 01F7:03FF:0003:2E57 ()
 *
 * Called From: 01F7:03F9:0007:2226
 */
void f__01F7_03FF_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_0402_0007_3E30()
 *
 * @name f__01F7_0402_0007_3E30
 * @implements 01F7:0402:0007:3E30 ()
 *
 * Called From: 01F7:104C:0010:4132
 */
void f__01F7_0402_0007_3E30()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_ax.h, 0x2A);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0409); f__0070_0108_0005_E45B();
	f__01F7_0409_000C_8D5C();
}

/**
 * Decompiled function f__01F7_0409_000C_8D5C()
 *
 * @name f__01F7_0409_000C_8D5C
 * @implements 01F7:0409:000C:8D5C ()
 *
 * Called From: 01F7:0409:0007:3E30
 */
void f__01F7_0409_000C_8D5C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_dx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_0415_0007_3EF0()
 *
 * @name f__01F7_0415_0007_3EF0
 * @implements 01F7:0415:0007:3EF0 ()
 *
 * Called From: 01F7:1058:000C:A782
 */
void f__01F7_0415_0007_3EF0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_ax.h, 0x2C);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x041C); f__0070_0108_0005_E45B();
	f__01F7_041C_000C_8D5C();
}

/**
 * Decompiled function f__01F7_041C_000C_8D5C()
 *
 * @name f__01F7_041C_000C_8D5C
 * @implements 01F7:041C:000C:8D5C ()
 *
 * Called From: 01F7:041C:0007:3EF0
 */
void f__01F7_041C_000C_8D5C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_dx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_0428_0010_87B4()
 *
 * @name f__01F7_0428_0010_87B4
 * @implements 01F7:0428:0010:87B4 ()
 *
 * Called From: 01F7:277B:000F:E56B
 * Called From: 1DB6:0061:0011:84E2
 * Called From: 1FB5:000F:000F:62CC
 */
void f__01F7_0428_0010_87B4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0438); f__01F7_02F7_0007_3850();
	f__01F7_0438_000A_6E9C();
}

/**
 * Decompiled function f__01F7_0438_000A_6E9C()
 *
 * @name f__01F7_0438_000A_6E9C
 * @implements 01F7:0438:000A:6E9C ()
 *
 * Called From: 01F7:0438:0010:87B4
 */
void f__01F7_0438_000A_6E9C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_0442_0015_6A10()
 *
 * @name f__01F7_0442_0015_6A10
 * @implements 01F7:0442:0015:6A10 ()
 *
 * Called From: 1DB6:016F:0017:0927
 */
void f__01F7_0442_0015_6A10()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0457); f__01F7_0309_000C_E723();
	f__01F7_0457_000A_B17A();
}

/**
 * Decompiled function f__01F7_0457_000A_B17A()
 *
 * @name f__01F7_0457_000A_B17A
 * @implements 01F7:0457:000A:B17A ()
 *
 * Called From: 01F7:0457:0015:6A10
 */
void f__01F7_0457_000A_B17A()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_0494_000D_EF57()
 *
 * @name f__01F7_0494_000D_EF57
 * @implements 01F7:0494:000D:EF57 ()
 *
 * Called From: B4F2:11DD:0013:5635
 */
void f__01F7_0494_000D_EF57()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movb(&emu_ax.h, 0x36);
	emu_movb(&emu_dx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x04A1); f__0070_0108_0005_E45B();
	f__01F7_04A1_001C_75A1();
}

/**
 * Decompiled function f__01F7_04A1_001C_75A1()
 *
 * @name f__01F7_04A1_001C_75A1
 * @implements 01F7:04A1:001C:75A1 ()
 *
 * Called From: 01F7:04A1:000D:EF57
 */
void f__01F7_04A1_001C_75A1()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_cx.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_04BD_000A_984A()
 *
 * @name f__01F7_04BD_000A_984A
 * @implements 01F7:04BD:000A:984A ()
 *
 * Called From: 1DB6:0016:000C:BA0F
 */
void f__01F7_04BD_000A_984A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_ax.h, 0x35);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x04C7); f__0070_0108_0005_E45B();
	f__01F7_04C7_0005_F947();
}

/**
 * Decompiled function f__01F7_04C7_0005_F947()
 *
 * @name f__01F7_04C7_0005_F947
 * @implements 01F7:04C7:0005:F947 ()
 *
 * Called From: 01F7:04C7:000A:984A
 */
void f__01F7_04C7_0005_F947()
{
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_movw(&emu_dx.x, emu_es);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_04CC_000E_D711()
 *
 * @name f__01F7_04CC_000E_D711
 * @implements 01F7:04CC:000E:D711 ()
 *
 * Called From: 01F7:1F02:0027:0D8F
 * Called From: 1DB6:0037:0021:7587
 * Called From: B500:008E:0011:8B05
 */
void f__01F7_04CC_000E_D711()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_ax.h, 0x25);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x04DA); f__0070_0108_0005_E45B();
	f__01F7_04DA_0003_2677();
}

/**
 * Decompiled function f__01F7_04DA_0003_2677()
 *
 * @name f__01F7_04DA_0003_2677
 * @implements 01F7:04DA:0003:2677 ()
 *
 * Called From: 01F7:04DA:000E:D711
 */
void f__01F7_04DA_0003_2677()
{
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_04E0_0004_E219()
 *
 * @name f__01F7_04E0_0004_E219
 * @implements 01F7:04E0:0004:E219 ()
 *
 * Called From: 10E4:0DEE:0007:8446
 * Called From: 15C2:069D:0027:82B4
 * Called From: 2537:0047:0007:8446
 * Called From: B4C1:0093:0007:8446
 * Called From: B4C1:00BA:0007:8446
 * Called From: B4ED:04F8:0020:1485
 * Called From: B4ED:04F8:000E:C186
 * Called From: B4ED:0540:0018:173C
 * Called From: B50B:0553:0036:7E4C
 * Called From: B518:0020:0025:FC16
 */
void f__01F7_04E0_0004_E219()
{
	emu_xorw(&emu_cx.x, emu_cx.x);
	f__01F7_04FA_0084_C87E(); return;
}

/**
 * Decompiled function f__01F7_04E7_0005_D2F2()
 *
 * @name f__01F7_04E7_0005_D2F2
 * @implements 01F7:04E7:0005:D2F2 ()
 *
 * Called From: 1587:014E:000A:DCE4
 */
void f__01F7_04E7_0005_D2F2()
{
	emu_movw(&emu_cx.x, 0x1);
	f__01F7_04FA_0084_C87E(); return;
}

/**
 * Decompiled function f__01F7_04FA_0084_C87E()
 *
 * @name f__01F7_04FA_0084_C87E
 * @implements 01F7:04FA:0084:C87E ()
 *
 * Called From: 01F7:04E2:0004:E219
 * Called From: 01F7:04EA:0005:D2F2
 */
void f__01F7_04FA_0084_C87E()
{
	emu_push(emu_bp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_di, emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.zf) { emu_ip = 0x0519; emu_last_cs = 0x01F7; emu_last_ip = 0x050F; emu_last_length = 0x0084; emu_last_crc = 0xC87E; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { f__01F7_057E_000D_FA69(); return; }
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x057E; emu_last_cs = 0x01F7; emu_last_ip = 0x0517; emu_last_length = 0x0084; emu_last_crc = 0xC87E; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_di, 0x1);
	if (!emu_flags.zf) { emu_ip = 0x053B; emu_last_cs = 0x01F7; emu_last_ip = 0x051D; emu_last_length = 0x0084; emu_last_crc = 0xC87E; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.sf) { f__01F7_052D_0051_4101(); return; }
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbws(&emu_dx.x, 0x0);
	emu_orws(&emu_di, 0xC);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.sf) { emu_ip = 0x053B; emu_last_cs = 0x01F7; emu_last_ip = 0x052F; emu_last_length = 0x0084; emu_last_crc = 0xC87E; emu_call(); return; } // Jump does not resolve
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_negw(&emu_bx.x, emu_bx.x);
	emu_sbbws(&emu_cx.x, 0x0);
	emu_xorws(&emu_di, 0x4);
	emu_movw(&emu_bp, emu_cx.x);
	emu_movw(&emu_cx.x, 0x20);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_rclw(&emu_dx.x, 0x1);
	emu_rclw(&emu_si, 0x1);
	emu_rclw(&emu_di, 0x1);
	emu_cmpw(&emu_di, emu_bp);
	if (emu_flags.cf) { emu_ip = 0x055C; emu_last_cs = 0x01F7; emu_last_ip = 0x054F; emu_last_length = 0x0084; emu_last_crc = 0xC87E; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0557; emu_last_cs = 0x01F7; emu_last_ip = 0x0551; emu_last_length = 0x0084; emu_last_crc = 0xC87E; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_bx.x);
	if (emu_flags.cf) { emu_ip = 0x055C; emu_last_cs = 0x01F7; emu_last_ip = 0x0555; emu_last_length = 0x0084; emu_last_crc = 0xC87E; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_si, emu_bx.x);
	emu_sbbw(&emu_di, emu_bp);
	emu_incw(&emu_ax.x);
	if (--emu_cx.x != 0) { emu_ip = 0x0545; emu_last_cs = 0x01F7; emu_last_ip = 0x055C; emu_last_length = 0x0084; emu_last_crc = 0xC87E; emu_call(); } // Jump does not resolve
	emu_pop(&emu_bx.x);
	emu_testw(&emu_bx.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x056B; emu_last_cs = 0x01F7; emu_last_ip = 0x0563; emu_last_length = 0x0084; emu_last_crc = 0xC87E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, emu_di);
	emu_shrw(&emu_bx.x, 0x1);
	emu_testw(&emu_bx.x, 0x4);
	if (emu_flags.zf) { emu_ip = 0x0578; emu_last_cs = 0x01F7; emu_last_ip = 0x056F; emu_last_length = 0x0084; emu_last_crc = 0xC87E; emu_call(); return; } // Jump does not resolve
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbws(&emu_dx.x, 0x0);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_sp += 8;
	return;
}

/**
 * Decompiled function f__01F7_052D_0051_4101()
 *
 * @name f__01F7_052D_0051_4101
 * @implements 01F7:052D:0051:4101 ()
 *
 * Called From: 01F7:0521:0084:C87E
 */
void f__01F7_052D_0051_4101()
{
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.sf) { f__01F7_053B_0043_C7D2(); return; }
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_negw(&emu_bx.x, emu_bx.x);
	emu_sbbws(&emu_cx.x, 0x0);
	emu_xorws(&emu_di, 0x4);
	emu_movw(&emu_bp, emu_cx.x);
	emu_movw(&emu_cx.x, 0x20);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_rclw(&emu_dx.x, 0x1);
	emu_rclw(&emu_si, 0x1);
	emu_rclw(&emu_di, 0x1);
	emu_cmpw(&emu_di, emu_bp);
	if (emu_flags.cf) { emu_ip = 0x055C; emu_last_cs = 0x01F7; emu_last_ip = 0x054F; emu_last_length = 0x0051; emu_last_crc = 0x4101; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0557; emu_last_cs = 0x01F7; emu_last_ip = 0x0551; emu_last_length = 0x0051; emu_last_crc = 0x4101; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_bx.x);
	if (emu_flags.cf) { emu_ip = 0x055C; emu_last_cs = 0x01F7; emu_last_ip = 0x0555; emu_last_length = 0x0051; emu_last_crc = 0x4101; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_si, emu_bx.x);
	emu_sbbw(&emu_di, emu_bp);
	emu_incw(&emu_ax.x);
	if (--emu_cx.x != 0) { emu_ip = 0x0545; emu_last_cs = 0x01F7; emu_last_ip = 0x055C; emu_last_length = 0x0051; emu_last_crc = 0x4101; emu_call(); } // Jump does not resolve
	emu_pop(&emu_bx.x);
	emu_testw(&emu_bx.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x056B; emu_last_cs = 0x01F7; emu_last_ip = 0x0563; emu_last_length = 0x0051; emu_last_crc = 0x4101; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, emu_di);
	emu_shrw(&emu_bx.x, 0x1);
	emu_testw(&emu_bx.x, 0x4);
	if (emu_flags.zf) { emu_ip = 0x0578; emu_last_cs = 0x01F7; emu_last_ip = 0x056F; emu_last_length = 0x0051; emu_last_crc = 0x4101; emu_call(); return; } // Jump does not resolve
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbws(&emu_dx.x, 0x0);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_sp += 8;
	return;
}

/**
 * Decompiled function f__01F7_053B_0043_C7D2()
 *
 * @name f__01F7_053B_0043_C7D2
 * @implements 01F7:053B:0043:C7D2 ()
 *
 * Called From: 01F7:052F:0051:4101
 */
void f__01F7_053B_0043_C7D2()
{
	emu_movw(&emu_bp, emu_cx.x);
	emu_movw(&emu_cx.x, 0x20);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_rclw(&emu_dx.x, 0x1);
	emu_rclw(&emu_si, 0x1);
	emu_rclw(&emu_di, 0x1);
	emu_cmpw(&emu_di, emu_bp);
	if (emu_flags.cf) { emu_ip = 0x055C; emu_last_cs = 0x01F7; emu_last_ip = 0x054F; emu_last_length = 0x0043; emu_last_crc = 0xC7D2; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0557; emu_last_cs = 0x01F7; emu_last_ip = 0x0551; emu_last_length = 0x0043; emu_last_crc = 0xC7D2; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_bx.x);
	if (emu_flags.cf) { f__01F7_055C_0022_9834(); return; }
	emu_subw(&emu_si, emu_bx.x);
	emu_sbbw(&emu_di, emu_bp);
	emu_incw(&emu_ax.x);
	if (--emu_cx.x != 0) { emu_ip = 0x0545; emu_last_cs = 0x01F7; emu_last_ip = 0x055C; emu_last_length = 0x0043; emu_last_crc = 0xC7D2; emu_call(); } // Jump does not resolve
	emu_pop(&emu_bx.x);
	emu_testw(&emu_bx.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x056B; emu_last_cs = 0x01F7; emu_last_ip = 0x0563; emu_last_length = 0x0043; emu_last_crc = 0xC7D2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, emu_di);
	emu_shrw(&emu_bx.x, 0x1);
	emu_testw(&emu_bx.x, 0x4);
	if (emu_flags.zf) { emu_ip = 0x0578; emu_last_cs = 0x01F7; emu_last_ip = 0x056F; emu_last_length = 0x0043; emu_last_crc = 0xC7D2; emu_call(); return; } // Jump does not resolve
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbws(&emu_dx.x, 0x0);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_sp += 8;
	return;
}

/**
 * Decompiled function f__01F7_0545_0039_0103()
 *
 * @name f__01F7_0545_0039_0103
 * @implements 01F7:0545:0039:0103 ()
 *
 * Called From: 01F7:055C:0022:9834
 * Called From: 01F7:055C:0039:0103
 * Called From: 01F7:055C:0027:8CB6
 */
void f__01F7_0545_0039_0103()
{
	emu_shlw(&emu_ax.x, 0x1);
	emu_rclw(&emu_dx.x, 0x1);
	emu_rclw(&emu_si, 0x1);
	emu_rclw(&emu_di, 0x1);
	emu_cmpw(&emu_di, emu_bp);
	if (emu_flags.cf) { emu_ip = 0x055C; emu_last_cs = 0x01F7; emu_last_ip = 0x054F; emu_last_length = 0x0039; emu_last_crc = 0x0103; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_0557_0027_8CB6(); return; }
	emu_cmpw(&emu_si, emu_bx.x);
	if (emu_flags.cf) { f__01F7_055C_0022_9834(); return; }
	emu_subw(&emu_si, emu_bx.x);
	emu_sbbw(&emu_di, emu_bp);
	emu_incw(&emu_ax.x);
	if (--emu_cx.x != 0) { f__01F7_0545_0039_0103(); return; }
	emu_pop(&emu_bx.x);
	emu_testw(&emu_bx.x, 0x2);
	if (emu_flags.zf) { f__01F7_056B_0013_BA82(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, emu_di);
	emu_shrw(&emu_bx.x, 0x1);
	emu_testw(&emu_bx.x, 0x4);
	if (emu_flags.zf) { emu_ip = 0x0578; emu_last_cs = 0x01F7; emu_last_ip = 0x056F; emu_last_length = 0x0039; emu_last_crc = 0x0103; emu_call(); return; } // Jump does not resolve
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbws(&emu_dx.x, 0x0);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_sp += 8;
	return;
}

/**
 * Decompiled function f__01F7_0557_0027_8CB6()
 *
 * @name f__01F7_0557_0027_8CB6
 * @implements 01F7:0557:0027:8CB6 ()
 *
 * Called From: 01F7:0551:0039:0103
 */
void f__01F7_0557_0027_8CB6()
{
	emu_subw(&emu_si, emu_bx.x);
	emu_sbbw(&emu_di, emu_bp);
	emu_incw(&emu_ax.x);
	if (--emu_cx.x != 0) { f__01F7_0545_0039_0103(); return; }
	emu_pop(&emu_bx.x);
	emu_testw(&emu_bx.x, 0x2);
	if (emu_flags.zf) { f__01F7_056B_0013_BA82(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, emu_di);
	emu_shrw(&emu_bx.x, 0x1);
	emu_testw(&emu_bx.x, 0x4);
	if (emu_flags.zf) { emu_ip = 0x0578; emu_last_cs = 0x01F7; emu_last_ip = 0x056F; emu_last_length = 0x0027; emu_last_crc = 0x8CB6; emu_call(); return; } // Jump does not resolve
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbws(&emu_dx.x, 0x0);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_sp += 8;
	return;
}

/**
 * Decompiled function f__01F7_055C_0022_9834()
 *
 * @name f__01F7_055C_0022_9834
 * @implements 01F7:055C:0022:9834 ()
 *
 * Called From: 01F7:0555:0043:C7D2
 * Called From: 01F7:0555:0039:0103
 */
void f__01F7_055C_0022_9834()
{
	if (--emu_cx.x != 0) { f__01F7_0545_0039_0103(); return; }
	emu_pop(&emu_bx.x);
	emu_testw(&emu_bx.x, 0x2);
	if (emu_flags.zf) { f__01F7_056B_0013_BA82(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, emu_di);
	emu_shrw(&emu_bx.x, 0x1);
	emu_testw(&emu_bx.x, 0x4);
	if (emu_flags.zf) { emu_ip = 0x0578; emu_last_cs = 0x01F7; emu_last_ip = 0x056F; emu_last_length = 0x0022; emu_last_crc = 0x9834; emu_call(); return; } // Jump does not resolve
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbws(&emu_dx.x, 0x0);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_sp += 8;
	return;
}

/**
 * Decompiled function f__01F7_056B_0013_BA82()
 *
 * @name f__01F7_056B_0013_BA82
 * @implements 01F7:056B:0013:BA82 ()
 *
 * Called From: 01F7:0563:0039:0103
 * Called From: 01F7:0563:0022:9834
 * Called From: 01F7:0563:0027:8CB6
 */
void f__01F7_056B_0013_BA82()
{
	emu_testw(&emu_bx.x, 0x4);
	if (emu_flags.zf) { f__01F7_0578_0006_B7B6(); return; }
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbws(&emu_dx.x, 0x0);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_sp += 8;
	return;
}

/**
 * Decompiled function f__01F7_0578_0006_B7B6()
 *
 * @name f__01F7_0578_0006_B7B6
 * @implements 01F7:0578:0006:B7B6 ()
 *
 * Called From: 01F7:056F:0013:BA82
 * Called From: 01F7:0589:0004:9CF9
 */
void f__01F7_0578_0006_B7B6()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_sp += 8;
	return;
}

/**
 * Decompiled function f__01F7_057E_000D_FA69()
 *
 * @name f__01F7_057E_000D_FA69
 * @implements 01F7:057E:000D:FA69 ()
 *
 * Called From: 01F7:0513:0084:C87E
 */
void f__01F7_057E_000D_FA69()
{
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_testw(&emu_di, 0x2);
	if (emu_flags.zf) { f__01F7_0587_0004_9CF9(); return; }
	emu_xchgw(&emu_ax.x, &emu_dx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_ip = 0x0578; emu_last_cs = 0x01F7; emu_last_ip = 0x0589; emu_last_length = 0x000D; emu_last_crc = 0xFA69; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0587_0004_9CF9()
 *
 * @name f__01F7_0587_0004_9CF9
 * @implements 01F7:0587:0004:9CF9 ()
 *
 * Called From: 01F7:0584:000D:FA69
 */
void f__01F7_0587_0004_9CF9()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	f__01F7_0578_0006_B7B6(); return;
}

/**
 * Decompiled function f__01F7_058B_0018_D9CF()
 *
 * @name f__01F7_058B_0018_D9CF
 * @implements 01F7:058B:0018:D9CF ()
 *
 * Called From: 01F7:1AF5:0010:0EEE
 */
void f__01F7_058B_0018_D9CF()
{
	emu_pop(&emu_bx.x);
	emu_push(emu_cs);
	emu_push(emu_bx.x);
	emu_cmpb(&emu_cx.l, 0x10);
	if (!emu_flags.cf) { emu_ip = 0x05A3; emu_last_cs = 0x01F7; emu_last_ip = 0x0591; emu_last_length = 0x0018; emu_last_crc = 0xD9CF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_negb(&emu_cx.l, emu_cx.l);
	emu_addb(&emu_cx.l, 0x10);
	emu_shrw(&emu_bx.x, emu_cx.l);
	emu_orw(&emu_dx.x, emu_bx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_058E_0015_CED2()
 *
 * @name f__01F7_058E_0015_CED2
 * @implements 01F7:058E:0015:CED2 ()
 *
 * Called From: 0AEC:0604:0015:DE27
 * Called From: 0C3A:13FB:001C:C40E
 * Called From: 0C3A:156A:000D:A32C
 * Called From: 10E4:0157:0030:DB62
 * Called From: 1A34:30FD:0011:EA5C
 * Called From: B480:0075:0016:6150
 * Called From: B4C1:008C:0040:2D5F
 * Called From: B4C1:008C:0032:1BDF
 * Called From: B4C1:008C:0053:5980
 * Called From: B4C1:008C:0060:57EF
 * Called From: B4C1:00B3:0018:42F5
 * Called From: B4DA:0E1D:000B:49F5
 * Called From: B4DA:13B7:000B:49F5
 * Called From: B4DA:1628:000B:49F5
 * Called From: B4E6:002C:0010:9BFD
 * Called From: B4E6:0057:0010:9BFD
 * Called From: B4E6:0057:0013:7B0C
 * Called From: B503:12BA:0013:473F
 * Called From: B503:1310:0013:473F
 */
void f__01F7_058E_0015_CED2()
{
	emu_cmpb(&emu_cx.l, 0x10);
	if (!emu_flags.cf) { f__01F7_05A3_0009_5F2E(); return; }
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_negb(&emu_cx.l, emu_cx.l);
	emu_addb(&emu_cx.l, 0x10);
	emu_shrw(&emu_bx.x, emu_cx.l);
	emu_orw(&emu_dx.x, emu_bx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_05A3_0009_5F2E()
 *
 * @name f__01F7_05A3_0009_5F2E
 * @implements 01F7:05A3:0009:5F2E ()
 *
 * Called From: 01F7:0591:0015:CED2
 */
void f__01F7_05A3_0009_5F2E()
{
	emu_subb(&emu_cx.l, 0x10);
	emu_xchgw(&emu_ax.x, &emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_shlw(&emu_dx.x, emu_cx.l);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_05AF_0015_0AD5()
 *
 * @name f__01F7_05AF_0015_0AD5
 * @implements 01F7:05AF:0015:0AD5 ()
 *
 * Called From: B52A:07B0:0010:C5C7
 */
void f__01F7_05AF_0015_0AD5()
{
	emu_cmpb(&emu_cx.l, 0x10);
	if (!emu_flags.cf) { emu_ip = 0x05C4; emu_last_cs = 0x01F7; emu_last_ip = 0x05B2; emu_last_length = 0x0015; emu_last_crc = 0x0AD5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_sarw(&emu_dx.x, emu_cx.l);
	emu_negb(&emu_cx.l, emu_cx.l);
	emu_addb(&emu_cx.l, 0x10);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_orw(&emu_ax.x, emu_bx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_05ED_0013_E7F6()
 *
 * @name f__01F7_05ED_0013_E7F6
 * @implements 01F7:05ED:0013:E7F6 ()
 *
 * Called From: 01F7:1B26:0010:8C34
 */
void f__01F7_05ED_0013_E7F6()
{
	emu_pop(&emu_es);
	emu_push(emu_cs);
	emu_push(emu_es);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!(emu_flags.sf != emu_flags.of)) { f__01F7_0600_001C_45D7(); return; }
	emu_notw(&emu_bx.x, emu_bx.x);
	emu_notw(&emu_cx.x, emu_cx.x);
	emu_addws(&emu_bx.x, 0x1);
	emu_adcws(&emu_cx.x, 0x0);
	emu_ip = 0x062F; emu_last_cs = 0x01F7; emu_last_ip = 0x05FE; emu_last_length = 0x0013; emu_last_crc = 0xE7F6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_05F0_0010_6415()
 *
 * @name f__01F7_05F0_0010_6415
 * @implements 01F7:05F0:0010:6415 ()
 *
 * Called From: 25C4:01CF:003F:BA75
 */
void f__01F7_05F0_0010_6415()
{
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!(emu_flags.sf != emu_flags.of)) { f__01F7_0600_001C_45D7(); return; }
	emu_notw(&emu_bx.x, emu_bx.x);
	emu_notw(&emu_cx.x, emu_cx.x);
	emu_addws(&emu_bx.x, 0x1);
	emu_adcws(&emu_cx.x, 0x0);
	emu_ip = 0x062F; emu_last_cs = 0x01F7; emu_last_ip = 0x05FE; emu_last_length = 0x0010; emu_last_crc = 0x6415; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0600_001C_45D7()
 *
 * @name f__01F7_0600_001C_45D7
 * @implements 01F7:0600:001C:45D7 ()
 *
 * Called From: 01F7:05F2:0013:E7F6
 * Called From: 01F7:05F2:0010:6415
 */
void f__01F7_0600_001C_45D7()
{
	emu_addw(&emu_ax.x, emu_bx.x);
	if (!emu_flags.cf) { f__01F7_0608_0014_B939(); return; }
	emu_addw(&emu_dx.x, 0x1000);
	emu_movb(&emu_cx.h, emu_cx.l);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlb(&emu_cx.h, emu_cx.l);
	emu_addb(&emu_dx.h, emu_cx.h);
	emu_movb(&emu_cx.h, emu_ax.l);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_cx.h);
	emu_andw(&emu_ax.x, 0xF);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_0608_0014_B939()
 *
 * @name f__01F7_0608_0014_B939
 * @implements 01F7:0608:0014:B939 ()
 *
 * Called From: 01F7:0602:001C:45D7
 */
void f__01F7_0608_0014_B939()
{
	emu_movb(&emu_cx.h, emu_cx.l);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlb(&emu_cx.h, emu_cx.l);
	emu_addb(&emu_dx.h, emu_cx.h);
	emu_movb(&emu_cx.h, emu_ax.l);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_cx.h);
	emu_andw(&emu_ax.x, 0xF);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_064D_0028_3537()
 *
 * @name f__01F7_064D_0028_3537
 * @implements 01F7:064D:0028:3537 ()
 *
 * Called From: 01F7:1B92:0022:8ADB
 */
void f__01F7_064D_0028_3537()
{
	emu_pop(&emu_es);
	emu_push(emu_cs);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_cx.x);
	emu_movb(&emu_cx.h, emu_dx.h);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_shrb(&emu_cx.h, emu_cx.l);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_adcb(&emu_cx.h, 0x0);
	emu_movw(&emu_ax.x, emu_di);
	emu_shlw(&emu_di, emu_cx.l);
	emu_shrb(&emu_ax.h, emu_cx.l);
	emu_addw(&emu_bx.x, emu_di);
	emu_adcb(&emu_ax.h, 0x0);
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_sbbb(&emu_cx.h, emu_ax.h);
	emu_movb(&emu_ax.l, emu_cx.h);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_xchgw(&emu_ax.x, &emu_dx.x);
	emu_pop(&emu_di);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_0675_0020_D684()
 *
 * @name f__01F7_0675_0020_D684
 * @implements 01F7:0675:0020:D684 ()
 *
 * Called From: 01F7:2070:0033:F011
 * Called From: 01F7:2300:0004:EC99
 * Called From: 01F7:2BBD:0004:3028
 */
void f__01F7_0675_0020_D684()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0695; emu_last_cs = 0x01F7; emu_last_ip = 0x067E; emu_last_length = 0x0020; emu_last_crc = 0xD684; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x58);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_0688_000D_5817(); return; }
	emu_movw(&emu_si, 0x57);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7988), emu_si);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si,  0x798A));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_si, emu_ax.x);
	f__01F7_06A2_000C_D81E(); return;
}

/**
 * Decompiled function f__01F7_0688_000D_5817()
 *
 * @name f__01F7_0688_000D_5817
 * @implements 01F7:0688:000D:5817 ()
 *
 * Called From: 01F7:0683:0020:D684
 */
void f__01F7_0688_000D_5817()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7988), emu_si);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si,  0x798A));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_si, emu_ax.x);
	f__01F7_06A2_000C_D81E(); return;
}

/**
 * Decompiled function f__01F7_06A2_000C_D81E()
 *
 * @name f__01F7_06A2_000C_D81E
 * @implements 01F7:06A2:000C:D81E ()
 *
 * Called From: 01F7:0693:0020:D684
 * Called From: 01F7:0693:000D:5817
 */
void f__01F7_06A2_000C_D81E()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7F), emu_si);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 2;
	return;
}

/**
 * Decompiled function f__01F7_06C0_000B_9E93()
 *
 * @name f__01F7_06C0_000B_9E93
 * @implements 01F7:06C0:000B:9E93 ()
 *
 * Called From: 01F7:0F8D:0042:0225
 * Called From: 01F7:0FC9:000D:08B8
 */
void f__01F7_06C0_000B_9E93()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, 0x4400);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x06CB); f__0070_0108_0005_E45B();
	f__01F7_06CB_0006_6CB5();
}

/**
 * Decompiled function f__01F7_06CB_0006_6CB5()
 *
 * @name f__01F7_06CB_0006_6CB5
 * @implements 01F7:06CB:0006:6CB5 ()
 *
 * Called From: 01F7:06CB:000B:9E93
 */
void f__01F7_06CB_0006_6CB5()
{
	emu_xchgw(&emu_ax.x, &emu_dx.x);
	emu_andw(&emu_ax.x, 0x80);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_06D1_004A_EF77()
 *
 * @name f__01F7_06D1_004A_EF77
 * @implements 01F7:06D1:004A:EF77 ()
 *
 * Called From: 01F7:133F:0014:99C6
 * Called From: 01F7:133F:0010:2231
 */
void f__01F7_06D1_004A_EF77()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x22);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_bx.x, 0x24);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0741; emu_last_cs = 0x01F7; emu_last_ip = 0x06E3; emu_last_length = 0x004A; emu_last_crc = 0xEF77; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_bx.l, 0x2);
	if (emu_flags.cf) { emu_ip = 0x0741; emu_last_cs = 0x01F7; emu_last_ip = 0x06E8; emu_last_length = 0x004A; emu_last_crc = 0xEF77; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!(emu_flags.sf != emu_flags.of)) { f__01F7_0706_0015_2486(); return; }
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0706; emu_last_cs = 0x01F7; emu_last_ip = 0x06F8; emu_last_length = 0x004A; emu_last_crc = 0xEF77; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), 0x2D);
	emu_incw(&emu_di);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbws(&emu_cx.x, 0x0);
	emu_movw(&emu_si, emu_bp - 0x22);
	if (emu_cx.x == 0) { emu_ip = 0x071B; emu_last_cs = 0x01F7; emu_last_ip = 0x0709; emu_last_length = 0x004A; emu_last_crc = 0xEF77; emu_call(); return; } // Jump does not resolve
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_subw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_movb(&emu_get_memory8(emu_ss, emu_si,  0x0), emu_dx.l);
	emu_incw(&emu_si);
	if (emu_cx.x == 0) { emu_ip = 0x0723; emu_last_cs = 0x01F7; emu_last_ip = 0x0717; emu_last_length = 0x004A; emu_last_crc = 0xEF77; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x070B; emu_last_cs = 0x01F7; emu_last_ip = 0x0719; emu_last_length = 0x004A; emu_last_crc = 0xEF77; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0706_0015_2486()
 *
 * @name f__01F7_0706_0015_2486
 * @implements 01F7:0706:0015:2486 ()
 *
 * Called From: 01F7:06F2:004A:EF77
 */
void f__01F7_0706_0015_2486()
{
	emu_movw(&emu_si, emu_bp - 0x22);
	if (emu_cx.x == 0) { f__01F7_071B_0020_A7B0(); return; }
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_subw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_movb(&emu_get_memory8(emu_ss, emu_si,  0x0), emu_dx.l);
	emu_incw(&emu_si);
	if (emu_cx.x == 0) { f__01F7_0723_0018_9E13(); return; }
	emu_ip = 0x070B; emu_last_cs = 0x01F7; emu_last_ip = 0x0719; emu_last_length = 0x0015; emu_last_crc = 0x2486; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_071B_0020_A7B0()
 *
 * @name f__01F7_071B_0020_A7B0
 * @implements 01F7:071B:0020:A7B0 ()
 *
 * Called From: 01F7:0709:0015:2486
 * Called From: 01F7:0725:0020:A7B0
 * Called From: 01F7:0725:0018:9E13
 */
void f__01F7_071B_0020_A7B0()
{
	emu_subw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_movb(&emu_get_memory8(emu_ss, emu_si,  0x0), emu_dx.l);
	emu_incw(&emu_si);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_071B_0020_A7B0(); return; }
	emu_movw(&emu_cx.x, emu_bp - 0x22);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_addw(&emu_cx.x, emu_si);
	emu_cld();
	emu_decw(&emu_si);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_si,  0x0));
	emu_subb(&emu_ax.l, 0xA);
	if (!emu_flags.cf) { emu_ip = 0x073B; emu_last_cs = 0x01F7; emu_last_ip = 0x0735; emu_last_length = 0x0020; emu_last_crc = 0xA7B0; emu_call(); return; } // Jump does not resolve
	emu_addb(&emu_ax.l, 0x3A);
	f__01F7_073E_0015_C9B2(); return;
}

/**
 * Decompiled function f__01F7_0723_0018_9E13()
 *
 * @name f__01F7_0723_0018_9E13
 * @implements 01F7:0723:0018:9E13 ()
 *
 * Called From: 01F7:0717:0015:2486
 */
void f__01F7_0723_0018_9E13()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_071B_0020_A7B0(); return; }
	emu_movw(&emu_cx.x, emu_bp - 0x22);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_addw(&emu_cx.x, emu_si);
	emu_cld();
	emu_decw(&emu_si);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_si,  0x0));
	emu_subb(&emu_ax.l, 0xA);
	if (!emu_flags.cf) { emu_ip = 0x073B; emu_last_cs = 0x01F7; emu_last_ip = 0x0735; emu_last_length = 0x0018; emu_last_crc = 0x9E13; emu_call(); return; } // Jump does not resolve
	emu_addb(&emu_ax.l, 0x3A);
	emu_ip = 0x073E; emu_last_cs = 0x01F7; emu_last_ip = 0x0739; emu_last_length = 0x0018; emu_last_crc = 0x9E13; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_072F_000C_80AB()
 *
 * @name f__01F7_072F_000C_80AB
 * @implements 01F7:072F:000C:80AB ()
 *
 * Called From: 01F7:073F:0015:C9B2
 */
void f__01F7_072F_000C_80AB()
{
	emu_decw(&emu_si);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_si,  0x0));
	emu_subb(&emu_ax.l, 0xA);
	if (!emu_flags.cf) { emu_ip = 0x073B; emu_last_cs = 0x01F7; emu_last_ip = 0x0735; emu_last_length = 0x000C; emu_last_crc = 0x80AB; emu_call(); return; } // Jump does not resolve
	emu_addb(&emu_ax.l, 0x3A);
	f__01F7_073E_0015_C9B2(); return;
}

/**
 * Decompiled function f__01F7_073E_0015_C9B2()
 *
 * @name f__01F7_073E_0015_C9B2
 * @implements 01F7:073E:0015:C9B2 ()
 *
 * Called From: 01F7:0739:0020:A7B0
 * Called From: 01F7:0739:000C:80AB
 */
void f__01F7_073E_0015_C9B2()
{
	emu_stosb();
	if (--emu_cx.x != 0) { f__01F7_072F_000C_80AB(); return; }
	emu_movb(&emu_ax.l, 0x0);
	emu_stosb();
	emu_pop(&emu_es);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 14;
	return;
}

/**
 * Decompiled function f__01F7_0773_001E_D7DA()
 *
 * @name f__01F7_0773_001E_D7DA
 * @implements 01F7:0773:001E:D7DA ()
 *
 * Called From: 1FB5:00A7:001B:4066
 */
void f__01F7_0773_001E_D7DA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_andw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0xFDFF);
	emu_movb(&emu_ax.h, 0x42);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0791); f__0070_0108_0005_E45B();
	f__01F7_0791_0004_E2FD();
}

/**
 * Decompiled function f__01F7_0791_0004_E2FD()
 *
 * @name f__01F7_0791_0004_E2FD
 * @implements 01F7:0791:0004:E2FD ()
 *
 * Called From: 01F7:0791:001E:D7DA
 */
void f__01F7_0791_0004_E2FD()
{
	if (emu_flags.cf) { emu_ip = 0x0795; emu_last_cs = 0x01F7; emu_last_ip = 0x0791; emu_last_length = 0x0004; emu_last_crc = 0xE2FD; emu_call(); return; } // Jump does not resolve
	f__01F7_079A_0002_2597(); return;
}

/**
 * Decompiled function f__01F7_079A_0002_2597()
 *
 * @name f__01F7_079A_0002_2597
 * @implements 01F7:079A:0002:2597 ()
 *
 * Called From: 01F7:0793:0004:E2FD
 */
void f__01F7_079A_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_079C_0017_78BE()
 *
 * @name f__01F7_079C_0017_78BE
 * @implements 01F7:079C:0017:78BE ()
 *
 * Called From: 01F7:07F3:0011:F68B
 * Called From: 01F7:3D34:0032:1561
 * Called From: 01F7:3D4D:0019:225A
 * Called From: 01F7:3DE0:000F:9FFD
 * Called From: 01F7:3DFB:001B:E08E
 */
void f__01F7_079C_0017_78BE()
{
	emu_push(emu_si);
	emu_xchgw(&emu_ax.x, &emu_si);
	emu_xchgw(&emu_ax.x, &emu_dx.x);
	emu_testw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__01F7_07A5_000E_AB63(); return; }
	emu_mulw(&emu_ax.x, emu_bx.x);
	if (emu_cx.x == 0) { f__01F7_07AC_0007_1160(); return; }
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_mulw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_cx.x);
	emu_xchgw(&emu_ax.x, &emu_si);
	emu_mulw(&emu_ax.x, emu_bx.x);
	emu_addw(&emu_dx.x, emu_si);
	emu_pop(&emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_07A5_000E_AB63()
 *
 * @name f__01F7_07A5_000E_AB63
 * @implements 01F7:07A5:000E:AB63 ()
 *
 * Called From: 01F7:07A1:0017:78BE
 */
void f__01F7_07A5_000E_AB63()
{
	if (emu_cx.x == 0) { f__01F7_07AC_0007_1160(); return; }
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_mulw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_cx.x);
	emu_xchgw(&emu_ax.x, &emu_si);
	emu_mulw(&emu_ax.x, emu_bx.x);
	emu_addw(&emu_dx.x, emu_si);
	emu_pop(&emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_07AC_0007_1160()
 *
 * @name f__01F7_07AC_0007_1160
 * @implements 01F7:07AC:0007:1160 ()
 *
 * Called From: 01F7:07A5:0017:78BE
 * Called From: 01F7:07A5:000E:AB63
 */
void f__01F7_07AC_0007_1160()
{
	emu_xchgw(&emu_ax.x, &emu_si);
	emu_mulw(&emu_ax.x, emu_bx.x);
	emu_addw(&emu_dx.x, emu_si);
	emu_pop(&emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_07B3_0021_4ED6()
 *
 * @name f__01F7_07B3_0021_4ED6
 * @implements 01F7:07B3:0021:4ED6 ()
 *
 * Called From: 01F7:1ABA:0014:FC63
 * Called From: 01F7:1ACD:0013:C371
 * Called From: 01F7:1B37:0011:30D4
 * Called From: 01F7:1B4A:0013:4292
 * Called From: 01F7:2978:0015:53C0
 */
void f__01F7_07B3_0021_4ED6()
{
	emu_push(emu_cx.x);
	emu_movb(&emu_cx.h, emu_ax.l);
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_cx.h);
	emu_movb(&emu_ax.h, emu_bx.l);
	emu_shrw(&emu_bx.x, emu_cx.l);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_cx.x, emu_bx.x);
	emu_movb(&emu_bx.l, emu_ax.h);
	emu_andw(&emu_ax.x, 0xF);
	emu_andws(&emu_bx.x, 0xF);
	emu_cmpw(&emu_dx.x, emu_cx.x);
	if (!emu_flags.zf) { f__01F7_07D3_0001_6180(); return; }
	emu_cmpw(&emu_ax.x, emu_bx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_07D3_0001_6180()
 *
 * @name f__01F7_07D3_0001_6180
 * @implements 01F7:07D3:0001:6180 ()
 *
 * Called From: 01F7:07CF:0021:4ED6
 */
void f__01F7_07D3_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_07D4_0011_370E()
 *
 * @name f__01F7_07D4_0011_370E
 * @implements 01F7:07D4:0011:370E ()
 *
 * Called From: 25C4:03DB:0008:9D33
 */
void f__01F7_07D4_0011_370E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x79E6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x79E4), emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_07E5_0011_F68B()
 *
 * @name f__01F7_07E5_0011_F68B
 * @implements 01F7:07E5:0011:F68B ()
 *
 * Called From: 2537:002F:000C:718A
 */
void f__01F7_07E5_0011_F68B()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x79E6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x79E4));
	emu_movw(&emu_dx.x, 0x15A);
	emu_movw(&emu_ax.x, 0x4E35);
	emu_push(0x07F6); f__01F7_079C_0017_78BE();
	f__01F7_07F6_0015_EF96();
}

/**
 * Decompiled function f__01F7_07F6_0015_EF96()
 *
 * @name f__01F7_07F6_0015_EF96
 * @implements 01F7:07F6:0015:EF96 ()
 *
 * Called From: 01F7:07F6:0011:F68B
 */
void f__01F7_07F6_0015_EF96()
{
	emu_addw(&emu_ax.x, 0x1);
	emu_adcws(&emu_dx.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x79E6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x79E4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x79E6));
	emu_cwd();
	emu_andw(&emu_ax.x, 0x7FFF);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_080B_0016_8E7B()
 *
 * @name f__01F7_080B_0016_8E7B
 * @implements 01F7:080B:0016:8E7B ()
 *
 * Called From: 01F7:32C7:0011:1DCE
 */
void f__01F7_080B_0016_8E7B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x2);
	if (emu_flags.zf) { f__01F7_0821_000E_581D(); return; }
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_ip = 0x0835; emu_last_cs = 0x01F7; emu_last_ip = 0x081F; emu_last_length = 0x0016; emu_last_crc = 0x8E7B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0821_000E_581D()
 *
 * @name f__01F7_0821_000E_581D
 * @implements 01F7:0821:000E:581D ()
 *
 * Called From: 01F7:0819:0016:8E7B
 */
void f__01F7_0821_000E_581D()
{
	emu_push(emu_ds);
	emu_movb(&emu_ax.h, 0x3F);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x082F); f__0070_0108_0005_E45B();
	f__01F7_082F_0005_E285();
}

/**
 * Decompiled function f__01F7_082F_0005_E285()
 *
 * @name f__01F7_082F_0005_E285
 * @implements 01F7:082F:0005:E285 ()
 *
 * Called From: 01F7:082F:000E:581D
 */
void f__01F7_082F_0005_E285()
{
	emu_pop(&emu_ds);
	if (emu_flags.cf) { emu_ip = 0x0834; emu_last_cs = 0x01F7; emu_last_ip = 0x0830; emu_last_length = 0x0005; emu_last_crc = 0xE285; emu_call(); return; } // Jump does not resolve
	f__01F7_0838_0002_2597(); return;
}

/**
 * Decompiled function f__01F7_0838_0002_2597()
 *
 * @name f__01F7_0838_0002_2597
 * @implements 01F7:0838:0002:2597 ()
 *
 * Called From: 01F7:0832:0005:E285
 */
void f__01F7_0838_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_083A_0014_CDF5()
 *
 * @name f__01F7_083A_0014_CDF5
 * @implements 01F7:083A:0014:CDF5 ()
 *
 * Called From: 01F7:381E:001E:AAD4
 */
void f__01F7_083A_0014_CDF5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2A);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	f__01F7_0869_0020_482B(); return;
}

/**
 * Decompiled function f__01F7_084E_0011_B741()
 *
 * @name f__01F7_084E_0011_B741
 * @implements 01F7:084E:0011:B741 ()
 *
 * Called From: 01F7:09B3:0015:2118
 */
void f__01F7_084E_0011_B741()
{
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_testb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x20);
	if (emu_flags.zf) { emu_ip = 0x085F; emu_last_cs = 0x01F7; emu_last_ip = 0x0855; emu_last_length = 0x0011; emu_last_crc = 0xB741; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_es, emu_di,  0x0));
	emu_addws(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x4);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_0869_0020_482B()
 *
 * @name f__01F7_0869_0020_482B
 * @implements 01F7:0869:0020:482B ()
 *
 * Called From: 01F7:084C:0014:CDF5
 */
void f__01F7_0869_0020_482B()
{
	emu_push(emu_es);
	emu_cld();
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_lodsb(emu_es);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x08E5; emu_last_cs = 0x01F7; emu_last_ip = 0x0875; emu_last_length = 0x0020; emu_last_crc = 0x482B; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x25);
	if (emu_flags.zf) { f__01F7_08E8_0025_73A9(); return; }
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_xchgw(&emu_ax.x, &emu_di);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0889);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0886; emu_last_length = 0x0020; emu_last_crc = 0x482B;
			emu_call();
			return;
	}
	f__01F7_0889_002A_3EEB();
}

/**
 * Decompiled function f__01F7_086B_001E_B02C()
 *
 * @name f__01F7_086B_001E_B02C
 * @implements 01F7:086B:001E:B02C ()
 *
 * Called From: 01F7:09BF:0003:220A
 */
void f__01F7_086B_001E_B02C()
{
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_lodsb(emu_es);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__01F7_08E5_0003_DCBF(); return; }
	emu_cmpb(&emu_ax.l, 0x25);
	if (emu_flags.zf) { emu_ip = 0x08E8; emu_last_cs = 0x01F7; emu_last_ip = 0x0879; emu_last_length = 0x001E; emu_last_crc = 0xB02C; emu_call(); return; } // Jump does not resolve
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_xchgw(&emu_ax.x, &emu_di);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0889);
	switch (emu_ip) {
		case 0x37D0: f__01F7_37D0_0021_EE69(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0886; emu_last_length = 0x001E; emu_last_crc = 0xB02C;
			emu_call();
			return;
	}
	f__01F7_0889_002A_3EEB();
}

/**
 * Decompiled function f__01F7_086E_001B_02C3()
 *
 * @name f__01F7_086E_001B_02C3
 * @implements 01F7:086E:001B:02C3 ()
 *
 * Called From: 01F7:08D0:000E:CF0D
 */
void f__01F7_086E_001B_02C3()
{
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_lodsb(emu_es);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x08E5; emu_last_cs = 0x01F7; emu_last_ip = 0x0875; emu_last_length = 0x001B; emu_last_crc = 0x02C3; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x25);
	if (emu_flags.zf) { f__01F7_08E8_0025_73A9(); return; }
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_xchgw(&emu_ax.x, &emu_di);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0889);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0886; emu_last_length = 0x001B; emu_last_crc = 0x02C3;
			emu_call();
			return;
	}
	f__01F7_0889_002A_3EEB();
}

/**
 * Decompiled function f__01F7_0889_002A_3EEB()
 *
 * @name f__01F7_0889_002A_3EEB
 * @implements 01F7:0889:002A:3EEB ()
 *
 * Called From: 01F7:0889:001E:B02C
 */
void f__01F7_0889_002A_3EEB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x08B9; emu_last_cs = 0x01F7; emu_last_ip = 0x088D; emu_last_length = 0x002A; emu_last_crc = 0x3EEB; emu_call(); return; } // Jump does not resolve
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.sf) { emu_ip = 0x08CE; emu_last_cs = 0x01F7; emu_last_ip = 0x0892; emu_last_length = 0x002A; emu_last_crc = 0x3EEB; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_ds, emu_di,  0x79E8), 0x1);
	if (!emu_flags.zf) { f__01F7_08CE_000E_CF0D(); return; }
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_orb(&emu_bx.l, emu_bx.l);
	if (emu_flags.sf) { emu_ip = 0x08BC; emu_last_cs = 0x01F7; emu_last_ip = 0x089E; emu_last_length = 0x002A; emu_last_crc = 0x3EEB; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_ds, emu_bx.x,  0x79E8), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x08BC; emu_last_cs = 0x01F7; emu_last_ip = 0x08A5; emu_last_length = 0x002A; emu_last_crc = 0x3EEB; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x08B3);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x08B0; emu_last_length = 0x002A; emu_last_crc = 0x3EEB;
			emu_call();
			return;
	}
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_08CE_000E_CF0D()
 *
 * @name f__01F7_08CE_000E_CF0D
 * @implements 01F7:08CE:000E:CF0D ()
 *
 * Called From: 01F7:0899:002A:3EEB
 */
void f__01F7_08CE_000E_CF0D()
{
	emu_cmpw(&emu_ax.x, emu_di);
	if (emu_flags.zf) { f__01F7_086E_001B_02C3(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(0x08DC);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x08D9; emu_last_length = 0x000E; emu_last_crc = 0xCF0D;
			emu_call();
			return;
	}
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_08E5_0003_DCBF()
 *
 * @name f__01F7_08E5_0003_DCBF
 * @implements 01F7:08E5:0003:DCBF ()
 *
 * Called From: 01F7:0875:001E:B02C
 */
void f__01F7_08E5_0003_DCBF()
{
	f__01F7_0C67_0007_7330(); return;
}

/**
 * Decompiled function f__01F7_08E8_0025_73A9()
 *
 * @name f__01F7_08E8_0025_73A9
 * @implements 01F7:08E8:0025:73A9 ()
 *
 * Called From: 01F7:0879:0020:482B
 * Called From: 01F7:0879:001B:02C3
 */
void f__01F7_08E8_0025_73A9()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xFFFF);
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x20);
	emu_lodsb(emu_es);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_si);
	emu_xchgw(&emu_ax.x, &emu_di);
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0918; emu_last_cs = 0x01F7; emu_last_ip = 0x08FD; emu_last_length = 0x0025; emu_last_crc = 0x73A9; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_bx.l, emu_get_memory8(emu_ds, emu_di,  0x79E8));
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_cmpws(&emu_bx.x, 0x15);
	if ((emu_flags.cf || emu_flags.zf)) { f__01F7_090D_0007_EEBE(); return; }
	emu_ip = 0x0C4F; emu_last_cs = 0x01F7; emu_last_ip = 0x090A; emu_last_length = 0x0025; emu_last_crc = 0x73A9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_090D_0007_EEBE()
 *
 * @name f__01F7_090D_0007_EEBE
 * @implements 01F7:090D:0007:EEBE ()
 *
 * Called From: 01F7:0908:0025:73A9
 */
void f__01F7_090D_0007_EEBE()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0xD02);
	switch (emu_ip) {
		case 0x0965: f__01F7_0965_0005_664A(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x090F; emu_last_length = 0x0007; emu_last_crc = 0xEEBE;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__01F7_0965_0005_664A()
 *
 * @name f__01F7_0965_0005_664A
 * @implements 01F7:0965:0005:664A ()
 *
 * Called From: 01F7:090F:0007:EEBE
 */
void f__01F7_0965_0005_664A()
{
	emu_movw(&emu_si, 0xA);
	f__01F7_0971_0030_D033(); return;
}

/**
 * Decompiled function f__01F7_0971_0030_D033()
 *
 * @name f__01F7_0971_0030_D033
 * @implements 01F7:0971:0030:D033 ()
 *
 * Called From: 01F7:0968:0005:664A
 */
void f__01F7_0971_0030_D033()
{
	emu_testw(&emu_di, 0x20);
	if (!emu_flags.zf) { f__01F7_0980_0021_6AA6(); return; }
	emu_cmpws(&emu_di, 0x58);
	if (emu_flags.zf) { emu_ip = 0x0980; emu_last_cs = 0x01F7; emu_last_ip = 0x097A; emu_last_length = 0x0030; emu_last_crc = 0xD033; emu_call(); return; } // Jump does not resolve
	emu_orb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x4);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_andw(&emu_ax.x, 0x7FFF);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_push(0x09A1); emu_ip = 0x0D59; emu_last_cs = 0x01F7; emu_last_ip = 0x099E; emu_last_length = 0x0030; emu_last_crc = 0xD033; emu_call(); // Jump does not resolve
	f__01F7_09A1_0015_2118();
}

/**
 * Decompiled function f__01F7_0980_0021_6AA6()
 *
 * @name f__01F7_0980_0021_6AA6
 * @implements 01F7:0980:0021:6AA6 ()
 *
 * Called From: 01F7:0975:0030:D033
 */
void f__01F7_0980_0021_6AA6()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_andw(&emu_ax.x, 0x7FFF);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_push(0x09A1); f__01F7_0D59_0022_B62B();
	f__01F7_09A1_0015_2118();
}

/**
 * Decompiled function f__01F7_09A1_0015_2118()
 *
 * @name f__01F7_09A1_0015_2118
 * @implements 01F7:09A1:0015:2118 ()
 *
 * Called From: 01F7:09A1:0021:6AA6
 */
void f__01F7_09A1_0015_2118()
{
	emu_addws(&emu_sp, 0x14);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x09C2; emu_last_cs = 0x01F7; emu_last_ip = 0x09A8; emu_last_length = 0x0015; emu_last_crc = 0x2118; emu_call(); return; } // Jump does not resolve
	emu_testb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x09BF; emu_last_cs = 0x01F7; emu_last_ip = 0x09AE; emu_last_length = 0x0015; emu_last_crc = 0x2118; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(0x09B6); f__01F7_084E_0011_B741();
	f__01F7_09B6_000C_C129();
}

/**
 * Decompiled function f__01F7_09B6_000C_C129()
 *
 * @name f__01F7_09B6_000C_C129
 * @implements 01F7:09B6:000C:C129 ()
 *
 * Called From: 01F7:09B6:0015:2118
 */
void f__01F7_09B6_000C_C129()
{
	emu_stosw();
	emu_testb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x4);
	if (emu_flags.zf) { f__01F7_09BF_0003_220A(); return; }
	emu_xchgw(&emu_ax.x, &emu_dx.x);
	emu_stosw();
	emu_ip = 0x086B; emu_last_cs = 0x01F7; emu_last_ip = 0x09BF; emu_last_length = 0x000C; emu_last_crc = 0xC129; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_09BF_0003_220A()
 *
 * @name f__01F7_09BF_0003_220A
 * @implements 01F7:09BF:0003:220A ()
 *
 * Called From: 01F7:09BB:000C:C129
 */
void f__01F7_09BF_0003_220A()
{
	f__01F7_086B_001E_B02C(); return;
}

/**
 * Decompiled function f__01F7_0C67_0007_7330()
 *
 * @name f__01F7_0C67_0007_7330
 * @implements 01F7:0C67:0007:7330 ()
 *
 * Called From: 01F7:08E5:0003:DCBF
 */
void f__01F7_0C67_0007_7330()
{
	emu_pop(&emu_es);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__01F7_0CFC_0006_F3CE(); return;
}

/**
 * Decompiled function f__01F7_0CFC_0006_F3CE()
 *
 * @name f__01F7_0CFC_0006_F3CE
 * @implements 01F7:0CFC:0006:F3CE ()
 *
 * Called From: 01F7:0C6B:0007:7330
 */
void f__01F7_0CFC_0006_F3CE()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_0D2E_0015_C196()
 *
 * @name f__01F7_0D2E_0015_C196
 * @implements 01F7:0D2E:0015:C196 ()
 *
 * Called From: 01F7:0E4B:0007:6B46
 * Called From: 01F7:0E75:0009:327F
 */
void f__01F7_0D2E_0015_C196()
{
	emu_push(emu_bx.x);
	emu_subb(&emu_bx.l, 0x30);
	if (emu_flags.cf) { f__01F7_0D56_0003_2ADE(); return; }
	emu_cmpb(&emu_bx.l, 0x9);
	if ((emu_flags.cf || emu_flags.zf)) { f__01F7_0D4B_000B_5706(); return; }
	emu_cmpb(&emu_bx.l, 0x2A);
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_0D43_0013_D2AA(); return; }
	emu_subb(&emu_bx.l, 0x7);
	emu_ip = 0x0D46; emu_last_cs = 0x01F7; emu_last_ip = 0x0D41; emu_last_length = 0x0015; emu_last_crc = 0xC196; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0D43_0013_D2AA()
 *
 * @name f__01F7_0D43_0013_D2AA
 * @implements 01F7:0D43:0013:D2AA ()
 *
 * Called From: 01F7:0D3C:0015:C196
 */
void f__01F7_0D43_0013_D2AA()
{
	emu_subb(&emu_bx.l, 0x27);
	emu_cmpb(&emu_bx.l, 0x9);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0D56; emu_last_cs = 0x01F7; emu_last_ip = 0x0D49; emu_last_length = 0x0013; emu_last_crc = 0xD2AA; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_bx.l, emu_cx.l);
	if (!emu_flags.cf) { f__01F7_0D56_0003_2ADE(); return; }
	emu_incw(&emu_sp);
	emu_incw(&emu_sp);
	emu_clc();
	emu_movb(&emu_bx.h, 0x0);
	emu_ip = 0x0D58; emu_last_cs = 0x01F7; emu_last_ip = 0x0D54; emu_last_length = 0x0013; emu_last_crc = 0xD2AA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0D4B_000B_5706()
 *
 * @name f__01F7_0D4B_000B_5706
 * @implements 01F7:0D4B:000B:5706 ()
 *
 * Called From: 01F7:0D37:0015:C196
 */
void f__01F7_0D4B_000B_5706()
{
	emu_cmpb(&emu_bx.l, emu_cx.l);
	if (!emu_flags.cf) { emu_ip = 0x0D56; emu_last_cs = 0x01F7; emu_last_ip = 0x0D4D; emu_last_length = 0x000B; emu_last_crc = 0x5706; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_sp);
	emu_incw(&emu_sp);
	emu_clc();
	emu_movb(&emu_bx.h, 0x0);
	f__01F7_0D58_0001_6180(); return;
}

/**
 * Decompiled function f__01F7_0D56_0003_2ADE()
 *
 * @name f__01F7_0D56_0003_2ADE
 * @implements 01F7:0D56:0003:2ADE ()
 *
 * Called From: 01F7:0D32:0015:C196
 * Called From: 01F7:0D4D:0013:D2AA
 */
void f__01F7_0D56_0003_2ADE()
{
	emu_pop(&emu_bx.x);
	emu_stc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_0D58_0001_6180()
 *
 * @name f__01F7_0D58_0001_6180
 * @implements 01F7:0D58:0001:6180 ()
 *
 * Called From: 01F7:0D54:000B:5706
 */
void f__01F7_0D58_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_0D59_0022_B62B()
 *
 * @name f__01F7_0D59_0022_B62B
 * @implements 01F7:0D59:0022:B62B ()
 *
 * Called From: 01F7:099E:0021:6AA6
 */
void f__01F7_0D59_0022_B62B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0D7B);
	switch (emu_ip) {
		case 0x37D0: f__01F7_37D0_0021_EE69(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0D78; emu_last_length = 0x0022; emu_last_crc = 0xB62B;
			emu_call();
			return;
	}
	f__01F7_0D7B_0037_8260();
}

/**
 * Decompiled function f__01F7_0D6F_000C_E4D5()
 *
 * @name f__01F7_0D6F_000C_E4D5
 * @implements 01F7:0D6F:000C:E4D5 ()
 *
 * Called From: 01F7:0D8E:0037:8260
 */
void f__01F7_0D6F_000C_E4D5()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0D7B);
	switch (emu_ip) {
		case 0x37D0: f__01F7_37D0_0021_EE69(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0D78; emu_last_length = 0x000C; emu_last_crc = 0xE4D5;
			emu_call();
			return;
	}
	f__01F7_0D7B_0037_8260();
}

/**
 * Decompiled function f__01F7_0D7B_0037_8260()
 *
 * @name f__01F7_0D7B_0037_8260
 * @implements 01F7:0D7B:0037:8260 ()
 *
 * Called From: 01F7:0D7B:0022:B62B
 * Called From: 01F7:0D7B:000C:E4D5
 */
void f__01F7_0D7B_0037_8260()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DF2; emu_last_cs = 0x01F7; emu_last_ip = 0x0D7F; emu_last_length = 0x0037; emu_last_crc = 0x8260; emu_call(); return; } // Jump does not resolve
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_testb(&emu_bx.l, 0x80);
	if (!emu_flags.zf) { emu_ip = 0x0D90; emu_last_cs = 0x01F7; emu_last_ip = 0x0D86; emu_last_length = 0x0037; emu_last_crc = 0x8260; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_di, 0x76BD);
	emu_testb(&emu_get_memory8(emu_ds, emu_bx.x + emu_di,  0x0), 0x1);
	if (!emu_flags.zf) { f__01F7_0D6F_000C_E4D5(); return; }
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DF9; emu_last_cs = 0x01F7; emu_last_ip = 0x0D94; emu_last_length = 0x0037; emu_last_crc = 0x8260; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x2B);
	if (emu_flags.zf) { emu_ip = 0x0DA1; emu_last_cs = 0x01F7; emu_last_ip = 0x0D98; emu_last_length = 0x0037; emu_last_crc = 0x8260; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x2D);
	if (!emu_flags.zf) { f__01F7_0DB8_002D_E539(); return; }
	emu_incb(&emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DF9; emu_last_cs = 0x01F7; emu_last_ip = 0x0DA4; emu_last_length = 0x0037; emu_last_crc = 0x8260; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0DB2);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0DAF; emu_last_length = 0x0037; emu_last_crc = 0x8260;
			emu_call();
			return;
	}
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_0DB8_002D_E539()
 *
 * @name f__01F7_0DB8_002D_E539
 * @implements 01F7:0DB8:002D:E539 ()
 *
 * Called From: 01F7:0D9C:0037:8260
 */
void f__01F7_0DB8_002D_E539()
{
	emu_subw(&emu_si, emu_si);
	emu_movw(&emu_di, emu_si);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_cx.x == 0) { emu_ip = 0x0E17; emu_last_cs = 0x01F7; emu_last_ip = 0x0DBF; emu_last_length = 0x002D; emu_last_crc = 0xE539; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_cx.x, 0x24);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0DF9; emu_last_cs = 0x01F7; emu_last_ip = 0x0DC4; emu_last_length = 0x002D; emu_last_crc = 0xE539; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_cx.l, 0x2);
	if (emu_flags.cf) { emu_ip = 0x0DF9; emu_last_cs = 0x01F7; emu_last_ip = 0x0DC9; emu_last_length = 0x002D; emu_last_crc = 0xE539; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x30);
	if (!emu_flags.zf) { f__01F7_0E47_0007_6B46(); return; }
	emu_cmpb(&emu_cx.l, 0x10);
	if (!emu_flags.zf) { f__01F7_0E45_0002_CBBA(); return; }
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0E14; emu_last_cs = 0x01F7; emu_last_ip = 0x0DD7; emu_last_length = 0x002D; emu_last_crc = 0xE539; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0DE5);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0DE2; emu_last_length = 0x002D; emu_last_crc = 0xE539;
			emu_call();
			return;
	}
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_0E45_0002_CBBA()
 *
 * @name f__01F7_0E45_0002_CBBA
 * @implements 01F7:0E45:0002:CBBA ()
 *
 * Called From: 01F7:0DD2:002D:E539
 */
void f__01F7_0E45_0002_CBBA()
{
	f__01F7_0E5E_0011_46E9(); return;
}

/**
 * Decompiled function f__01F7_0E47_0007_6B46()
 *
 * @name f__01F7_0E47_0007_6B46
 * @implements 01F7:0E47:0007:6B46 ()
 *
 * Called From: 01F7:0DCD:002D:E539
 */
void f__01F7_0E47_0007_6B46()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_push(0x0E4E); f__01F7_0D2E_0015_C196();
	f__01F7_0E4E_0006_1862();
}

/**
 * Decompiled function f__01F7_0E4E_0006_1862()
 *
 * @name f__01F7_0E4E_0006_1862
 * @implements 01F7:0E4E:0006:1862 ()
 *
 * Called From: 01F7:0E4E:0007:6B46
 */
void f__01F7_0E4E_0006_1862()
{
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	if (emu_flags.cf) { emu_ip = 0x0DF9; emu_last_cs = 0x01F7; emu_last_ip = 0x0E4F; emu_last_length = 0x0006; emu_last_crc = 0x1862; emu_call(); return; } // Jump does not resolve
	emu_xchgw(&emu_ax.x, &emu_si);
	f__01F7_0E5E_0011_46E9(); return;
}

/**
 * Decompiled function f__01F7_0E54_001B_D936()
 *
 * @name f__01F7_0E54_001B_D936
 * @implements 01F7:0E54:001B:D936 ()
 *
 * Called From: 01F7:0E79:0005:F885
 */
void f__01F7_0E54_001B_D936()
{
	emu_xchgw(&emu_ax.x, &emu_si);
	emu_mulw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_si, emu_ax.x);
	emu_adcw(&emu_di, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x0E8E; emu_last_cs = 0x01F7; emu_last_ip = 0x0E5C; emu_last_length = 0x001B; emu_last_crc = 0xD936; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0EBB; emu_last_cs = 0x01F7; emu_last_ip = 0x0E61; emu_last_length = 0x001B; emu_last_crc = 0xD936; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0E6F);
	switch (emu_ip) {
		case 0x37D0: f__01F7_37D0_0021_EE69(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0E6C; emu_last_length = 0x001B; emu_last_crc = 0xD936;
			emu_call();
			return;
	}
	f__01F7_0E6F_0009_327F();
}

/**
 * Decompiled function f__01F7_0E5E_0011_46E9()
 *
 * @name f__01F7_0E5E_0011_46E9
 * @implements 01F7:0E5E:0011:46E9 ()
 *
 * Called From: 01F7:0E45:0002:CBBA
 * Called From: 01F7:0E52:0006:1862
 */
void f__01F7_0E5E_0011_46E9()
{
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0EBB; emu_last_cs = 0x01F7; emu_last_ip = 0x0E61; emu_last_length = 0x0011; emu_last_crc = 0x46E9; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0E6F);
	switch (emu_ip) {
		case 0x37D0: f__01F7_37D0_0021_EE69(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0E6C; emu_last_length = 0x0011; emu_last_crc = 0x46E9;
			emu_call();
			return;
	}
	f__01F7_0E6F_0009_327F();
}

/**
 * Decompiled function f__01F7_0E6F_0009_327F()
 *
 * @name f__01F7_0E6F_0009_327F
 * @implements 01F7:0E6F:0009:327F ()
 *
 * Called From: 01F7:0E6F:0011:46E9
 * Called From: 01F7:0E6F:001B:D936
 */
void f__01F7_0E6F_0009_327F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_push(0x0E78); f__01F7_0D2E_0015_C196();
	f__01F7_0E78_0005_F885();
}

/**
 * Decompiled function f__01F7_0E78_0005_F885()
 *
 * @name f__01F7_0E78_0005_F885
 * @implements 01F7:0E78:0005:F885 ()
 *
 * Called From: 01F7:0E78:0009:327F
 */
void f__01F7_0E78_0005_F885()
{
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	if (!emu_flags.cf) { f__01F7_0E54_001B_D936(); return; }
	f__01F7_0EAB_000A_70B4(); return;
}

/**
 * Decompiled function f__01F7_0EAB_000A_70B4()
 *
 * @name f__01F7_0EAB_000A_70B4
 * @implements 01F7:0EAB:000A:70B4 ()
 *
 * Called From: 01F7:0E7B:0005:F885
 */
void f__01F7_0EAB_000A_70B4()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(0x0EB5);
	switch (emu_ip) {
		case 0x37F8: f__01F7_37F8_000B_8F48(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0EB2; emu_last_length = 0x000A; emu_last_crc = 0x70B4;
			emu_call();
			return;
	}
	f__01F7_0EB5_002A_954C();
}

/**
 * Decompiled function f__01F7_0EB5_002A_954C()
 *
 * @name f__01F7_0EB5_002A_954C
 * @implements 01F7:0EB5:002A:954C ()
 *
 * Called From: 01F7:0EB5:000A:70B4
 */
void f__01F7_0EB5_002A_954C()
{
	emu_addws(&emu_sp, 0x6);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, emu_di);
	emu_xchgw(&emu_ax.x, &emu_si);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x0);
	if (emu_flags.zf) { f__01F7_0ECB_0014_5ED0(); return; }
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbws(&emu_dx.x, 0x0);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_es, emu_di,  0x0), emu_bx.x);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_di,  0x0), emu_bx.x);
	emu_ip = 0x0EF5; emu_last_cs = 0x01F7; emu_last_ip = 0x0EDD; emu_last_length = 0x002A; emu_last_crc = 0x954C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0ECB_0014_5ED0()
 *
 * @name f__01F7_0ECB_0014_5ED0
 * @implements 01F7:0ECB:0014:5ED0 ()
 *
 * Called From: 01F7:0EC2:002A:954C
 */
void f__01F7_0ECB_0014_5ED0()
{
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_es, emu_di,  0x0), emu_bx.x);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_di,  0x0), emu_bx.x);
	f__01F7_0EF5_0006_F3CE(); return;
}

/**
 * Decompiled function f__01F7_0EF5_0006_F3CE()
 *
 * @name f__01F7_0EF5_0006_F3CE
 * @implements 01F7:0EF5:0006:F3CE ()
 *
 * Called From: 01F7:0EDD:0014:5ED0
 */
void f__01F7_0EF5_0006_F3CE()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_0EFB_0020_CAA8()
 *
 * @name f__01F7_0EFB_0020_CAA8
 * @implements 01F7:0EFB:0020:CAA8 ()
 *
 * Called From: 01F7:1FBD:0010:CF18
 */
void f__01F7_0EFB_0020_CAA8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_bx.x, emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_si,  0x0), emu_bx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_si,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_si,  0x4), emu_ss);
	emu_movw(&emu_get_memory16(emu_es, emu_si,  0x6), emu_ds);
	emu_movw(&emu_es, emu_bx.x);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_0F45_004B_44A0()
 *
 * @name f__01F7_0F45_004B_44A0
 * @implements 01F7:0F45:004B:44A0 ()
 *
 * Called From: 01F7:0229:0004:BEF7
 */
void f__01F7_0F45_004B_44A0()
{
	emu_movw(&emu_cx.x, 0x5);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x795A));
	if (!emu_flags.cf) { emu_ip = 0x0F86; emu_last_cs = 0x01F7; emu_last_ip = 0x0F4C; emu_last_length = 0x004B; emu_last_crc = 0x44A0; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x0);
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_get_memory8(emu_ds, emu_bx.x,  0x77CE), 0xFF);
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x77CA);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x77DC), emu_ax.x);
	emu_incw(&emu_cx.x);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x795A));
	if (emu_flags.cf) { f__01F7_0F4E_0042_0225(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x77CE));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0F90); emu_ip = 0x06C0; emu_last_cs = 0x01F7; emu_last_ip = 0x0F8D; emu_last_length = 0x004B; emu_last_crc = 0x44A0; emu_call(); // Jump does not resolve
	f__01F7_0F90_001C_DDFD();
}

/**
 * Decompiled function f__01F7_0F4E_0042_0225()
 *
 * @name f__01F7_0F4E_0042_0225
 * @implements 01F7:0F4E:0042:0225 ()
 *
 * Called From: 01F7:0F84:004B:44A0
 * Called From: 01F7:0F84:0042:0225
 */
void f__01F7_0F4E_0042_0225()
{
	emu_movw(&emu_bx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x0);
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_get_memory8(emu_ds, emu_bx.x,  0x77CE), 0xFF);
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x77CA);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x77DC), emu_ax.x);
	emu_incw(&emu_cx.x);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x795A));
	if (emu_flags.cf) { f__01F7_0F4E_0042_0225(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x77CE));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0F90); f__01F7_06C0_000B_9E93();
	f__01F7_0F90_001C_DDFD();
}

/**
 * Decompiled function f__01F7_0F90_001C_DDFD()
 *
 * @name f__01F7_0F90_001C_DDFD
 * @implements 01F7:0F90:001C:DDFD ()
 *
 * Called From: 01F7:0F90:0042:0225
 */
void f__01F7_0F90_001C_DDFD()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_0F9B_0011_BEEC(); return; }
	emu_andw(&emu_get_memory16(emu_ds, 0x00,  0x77CC), 0xFDFF);
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x77CC), 0x200);
	if (emu_flags.zf) { emu_ip = 0x0FAC; emu_last_cs = 0x01F7; emu_last_ip = 0x0FA5; emu_last_length = 0x001C; emu_last_crc = 0xDDFD; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0FAE; emu_last_cs = 0x01F7; emu_last_ip = 0x0FAA; emu_last_length = 0x001C; emu_last_crc = 0xDDFD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0F9B_0011_BEEC()
 *
 * @name f__01F7_0F9B_0011_BEEC
 * @implements 01F7:0F9B:0011:BEEC ()
 *
 * Called From: 01F7:0F93:001C:DDFD
 */
void f__01F7_0F9B_0011_BEEC()
{
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x77CC), 0x200);
	if (emu_flags.zf) { emu_ip = 0x0FAC; emu_last_cs = 0x01F7; emu_last_ip = 0x0FA5; emu_last_length = 0x0011; emu_last_crc = 0xBEEC; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__01F7_0FAE_0011_18E7(); return;
}

/**
 * Decompiled function f__01F7_0FAE_0011_18E7()
 *
 * @name f__01F7_0FAE_0011_18E7
 * @implements 01F7:0FAE:0011:18E7 ()
 *
 * Called From: 01F7:0FAA:0011:BEEC
 */
void f__01F7_0FAE_0011_18E7()
{
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x77CA);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0FBF); f__01F7_3357_0028_B817();
	f__01F7_0FBF_000D_08B8();
}

/**
 * Decompiled function f__01F7_0FBF_000D_08B8()
 *
 * @name f__01F7_0FBF_000D_08B8
 * @implements 01F7:0FBF:000D:08B8 ()
 *
 * Called From: 01F7:0FBF:0011:18E7
 */
void f__01F7_0FBF_000D_08B8()
{
	emu_addws(&emu_sp, 0xC);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x77E2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0FCC); f__01F7_06C0_000B_9E93();
	f__01F7_0FCC_001C_6C98();
}

/**
 * Decompiled function f__01F7_0FCC_001C_6C98()
 *
 * @name f__01F7_0FCC_001C_6C98
 * @implements 01F7:0FCC:001C:6C98 ()
 *
 * Called From: 01F7:0FCC:000D:08B8
 */
void f__01F7_0FCC_001C_6C98()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_0FD7_0011_0EE9(); return; }
	emu_andw(&emu_get_memory16(emu_ds, 0x00,  0x77E0), 0xFDFF);
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x77E0), 0x200);
	if (emu_flags.zf) { emu_ip = 0x0FE8; emu_last_cs = 0x01F7; emu_last_ip = 0x0FE1; emu_last_length = 0x001C; emu_last_crc = 0x6C98; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_ip = 0x0FEA; emu_last_cs = 0x01F7; emu_last_ip = 0x0FE6; emu_last_length = 0x001C; emu_last_crc = 0x6C98; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0FD7_0011_0EE9()
 *
 * @name f__01F7_0FD7_0011_0EE9
 * @implements 01F7:0FD7:0011:0EE9 ()
 *
 * Called From: 01F7:0FCF:001C:6C98
 */
void f__01F7_0FD7_0011_0EE9()
{
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x77E0), 0x200);
	if (emu_flags.zf) { emu_ip = 0x0FE8; emu_last_cs = 0x01F7; emu_last_ip = 0x0FE1; emu_last_length = 0x0011; emu_last_crc = 0x0EE9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	f__01F7_0FEA_0011_0CD6(); return;
}

/**
 * Decompiled function f__01F7_0FEA_0011_0CD6()
 *
 * @name f__01F7_0FEA_0011_0CD6
 * @implements 01F7:0FEA:0011:0CD6 ()
 *
 * Called From: 01F7:0FE6:0011:0EE9
 */
void f__01F7_0FEA_0011_0CD6()
{
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x77DE);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0FFB); f__01F7_3357_0028_B817();
	f__01F7_0FFB_0004_490B();
}

/**
 * Decompiled function f__01F7_0FFB_0004_490B()
 *
 * @name f__01F7_0FFB_0004_490B
 * @implements 01F7:0FFB:0004:490B ()
 *
 * Called From: 01F7:0FFB:0011:0CD6
 */
void f__01F7_0FFB_0004_490B()
{
	emu_addws(&emu_sp, 0xC);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_103F_0010_4132()
 *
 * @name f__01F7_103F_0010_4132
 * @implements 01F7:103F:0010:4132 ()
 *
 * Called From: 25C4:03D3:000B:7CD0
 */
void f__01F7_103F_0010_4132()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x104F); f__01F7_0402_0007_3E30();
	f__01F7_104F_000C_A782();
}

/**
 * Decompiled function f__01F7_104F_000C_A782()
 *
 * @name f__01F7_104F_000C_A782
 * @implements 01F7:104F:000C:A782 ()
 *
 * Called From: 01F7:104F:0010:4132
 */
void f__01F7_104F_000C_A782()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x105B); f__01F7_0415_0007_3EF0();
	f__01F7_105B_0011_10F9();
}

/**
 * Decompiled function f__01F7_105B_0011_10F9()
 *
 * @name f__01F7_105B_0011_10F9
 * @implements 01F7:105B:0011:10F9 ()
 *
 * Called From: 01F7:105B:000C:A782
 */
void f__01F7_105B_0011_10F9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x106C); f__01F7_3CF9_000C_1201();
	f__01F7_106C_002B_5C05();
}

/**
 * Decompiled function f__01F7_106C_002B_5C05()
 *
 * @name f__01F7_106C_002B_5C05
 * @implements 01F7:106C:002B:5C05 ()
 *
 * Called From: 01F7:106C:0011:10F9
 */
void f__01F7_106C_002B_5C05()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__01F7_108D_000A_4363(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_108D_000A_4363()
 *
 * @name f__01F7_108D_000A_4363
 * @implements 01F7:108D:000A:4363 ()
 *
 * Called From: 01F7:107B:002B:5C05
 */
void f__01F7_108D_000A_4363()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_10C3_0010_64C2()
 *
 * @name f__01F7_10C3_0010_64C2
 * @implements 01F7:10C3:0010:64C2 ()
 *
 * Called From: 01F7:28F0:000E:EFC0
 * Called From: 01F7:2900:0010:4F5D
 * Called From: B4DA:173A:002D:1CF6
 * Called From: B4E6:03C8:0019:E3C0
 * Called From: B4E6:03DD:0007:B6D2
 */
void f__01F7_10C3_0010_64C2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_dx.x, 0xFF);
	if (!emu_flags.zf) { f__01F7_10D3_0016_E224(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	f__01F7_10ED_0002_2597(); return;
}

/**
 * Decompiled function f__01F7_10D3_0016_E224()
 *
 * @name f__01F7_10D3_0016_E224
 * @implements 01F7:10D3:0016:E224 ()
 *
 * Called From: 01F7:10CC:0010:64C2
 */
void f__01F7_10D3_0016_E224()
{
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_ds, emu_bx.x,  0x76BD), 0x8);
	if (emu_flags.zf) { f__01F7_10E9_0006_4B8E(); return; }
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movb(&emu_ax.h, 0x0);
	emu_addw(&emu_ax.x, 0xFFE0);
	f__01F7_10ED_0002_2597(); return;
}

/**
 * Decompiled function f__01F7_10E9_0006_4B8E()
 *
 * @name f__01F7_10E9_0006_4B8E
 * @implements 01F7:10E9:0006:4B8E ()
 *
 * Called From: 01F7:10DE:0016:E224
 */
void f__01F7_10E9_0006_4B8E()
{
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movb(&emu_ax.h, 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_10ED_0002_2597()
 *
 * @name f__01F7_10ED_0002_2597
 * @implements 01F7:10ED:0002:2597 ()
 *
 * Called From: 01F7:10D1:0010:64C2
 * Called From: 01F7:10E7:0016:E224
 */
void f__01F7_10ED_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_111F_001A_B513()
 *
 * @name f__01F7_111F_001A_B513
 * @implements 01F7:111F:001A:B513 ()
 *
 * Called From: 01F7:2BDA:0019:3608
 * Called From: 01F7:37AA:0020:0F64
 * Called From: 01F7:37CB:001F:03E8
 */
void f__01F7_111F_001A_B513()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x96);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x50);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	f__01F7_1183_0025_4423(); return;
}

/**
 * Decompiled function f__01F7_1139_000D_AAB0()
 *
 * @name f__01F7_1139_000D_AAB0
 * @implements 01F7:1139:000D:AAB0 ()
 *
 * Called From: 01F7:13F0:0003:E391
 * Called From: 01F7:1450:0011:E292
 * Called From: 01F7:1482:0003:632D
 */
void f__01F7_1139_000D_AAB0()
{
	emu_push(emu_di);
	emu_movw(&emu_cx.x, 0xFFFF);
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_repne_scasb();
	emu_notw(&emu_cx.x, emu_cx.x);
	emu_decw(&emu_cx.x);
	emu_pop(&emu_di);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1146_0023_6860()
 *
 * @name f__01F7_1146_0023_6860
 * @implements 01F7:1146:0023:6860 ()
 *
 * Called From: 01F7:14D6:0005:2699
 * Called From: 01F7:1517:0009:310D
 * Called From: 01F7:1517:0005:6688
 */
void f__01F7_1146_0023_6860()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if (!emu_flags.zf) { f__01F7_1182_0001_6180(); return; }
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_movw(&emu_ax.x, emu_bp - 0x96);
	emu_subw(&emu_di, emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x96);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_push(0x1169);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x1166; emu_last_length = 0x0023; emu_last_crc = 0x6860;
			emu_call();
			return;
	}
	f__01F7_1169_001A_40B5();
}

/**
 * Decompiled function f__01F7_114F_001A_962D()
 *
 * @name f__01F7_114F_001A_962D
 * @implements 01F7:114F:001A:962D ()
 *
 * Called From: 01F7:11A5:0016:5243
 * Called From: 01F7:1598:0009:6CDC
 */
void f__01F7_114F_001A_962D()
{
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_movw(&emu_ax.x, emu_bp - 0x96);
	emu_subw(&emu_di, emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x96);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_push(0x1169);
	switch (emu_ip) {
		case 0x2DA4: f__01F7_2DA4_001B_CF3B(); break;
		case 0x374D: f__01F7_374D_001D_AA1B(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x1166; emu_last_length = 0x001A; emu_last_crc = 0x962D;
			emu_call();
			return;
	}
	f__01F7_1169_001A_40B5();
}

/**
 * Decompiled function f__01F7_1169_001A_40B5()
 *
 * @name f__01F7_1169_001A_40B5
 * @implements 01F7:1169:001A:40B5 ()
 *
 * Called From: 01F7:1169:001A:962D
 */
void f__01F7_1169_001A_40B5()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_1172_0011_8902(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x50);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_di);
	emu_movw(&emu_di, emu_bp - 0x96);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1172_0011_8902()
 *
 * @name f__01F7_1172_0011_8902
 * @implements 01F7:1172:0011:8902 ()
 *
 * Called From: 01F7:116B:001A:40B5
 */
void f__01F7_1172_0011_8902()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x50);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_di);
	emu_movw(&emu_di, emu_bp - 0x96);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1182_0001_6180()
 *
 * @name f__01F7_1182_0001_6180
 * @implements 01F7:1182:0001:6180 ()
 *
 * Called From: 01F7:114D:0023:6860
 */
void f__01F7_1182_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1183_0025_4423()
 *
 * @name f__01F7_1183_0025_4423
 * @implements 01F7:1183:0025:4423 ()
 *
 * Called From: 01F7:1137:001A:B513
 */
void f__01F7_1183_0025_4423()
{
	emu_push(emu_es);
	emu_cld();
	emu_movw(&emu_di, emu_bp - 0x96);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lodsb(emu_es);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__01F7_11AA_0003_5C99(); return; }
	emu_cmpb(&emu_ax.l, 0x25);
	if (emu_flags.zf) { f__01F7_11AD_0025_BB88(); return; }
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_1192_0016_5243(); return; }
	emu_push(0x11A8); emu_ip = 0x114F; emu_last_cs = 0x01F7; emu_last_ip = 0x11A5; emu_last_length = 0x0025; emu_last_crc = 0x4423; emu_call(); // Jump does not resolve
	f__01F7_11A8_0002_B43A();
}

/**
 * Decompiled function f__01F7_118F_0019_242D()
 *
 * @name f__01F7_118F_0019_242D
 * @implements 01F7:118F:0019:242D ()
 *
 * Called From: 01F7:153F:0003:2333
 */
void f__01F7_118F_0019_242D()
{
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lodsb(emu_es);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__01F7_11AA_0003_5C99(); return; }
	emu_cmpb(&emu_ax.l, 0x25);
	if (emu_flags.zf) { f__01F7_11AD_0025_BB88(); return; }
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_1192_0016_5243(); return; }
	emu_push(0x11A8); emu_ip = 0x114F; emu_last_cs = 0x01F7; emu_last_ip = 0x11A5; emu_last_length = 0x0019; emu_last_crc = 0x242D; emu_call(); // Jump does not resolve
	f__01F7_11A8_0002_B43A();
}

/**
 * Decompiled function f__01F7_1192_0016_5243()
 *
 * @name f__01F7_1192_0016_5243
 * @implements 01F7:1192:0016:5243 ()
 *
 * Called From: 01F7:11A3:0019:242D
 * Called From: 01F7:11A3:0016:5243
 * Called From: 01F7:11A3:0025:4423
 * Called From: 01F7:11A3:000C:BDD2
 * Called From: 01F7:11A8:0002:B43A
 */
void f__01F7_1192_0016_5243()
{
	emu_lodsb(emu_es);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__01F7_11AA_0003_5C99(); return; }
	emu_cmpb(&emu_ax.l, 0x25);
	if (emu_flags.zf) { f__01F7_11AD_0025_BB88(); return; }
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_1192_0016_5243(); return; }
	emu_push(0x11A8); f__01F7_114F_001A_962D();
	f__01F7_11A8_0002_B43A();
}

/**
 * Decompiled function f__01F7_119C_000C_BDD2()
 *
 * @name f__01F7_119C_000C_BDD2
 * @implements 01F7:119C:000C:BDD2 ()
 *
 * Called From: 01F7:11B4:0025:BB88
 */
void f__01F7_119C_000C_BDD2()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_1192_0016_5243(); return; }
	emu_push(0x11A8); emu_ip = 0x114F; emu_last_cs = 0x01F7; emu_last_ip = 0x11A5; emu_last_length = 0x000C; emu_last_crc = 0xBDD2; emu_call(); // Jump does not resolve
	f__01F7_11A8_0002_B43A();
}

/**
 * Decompiled function f__01F7_11A8_0002_B43A()
 *
 * @name f__01F7_11A8_0002_B43A
 * @implements 01F7:11A8:0002:B43A ()
 *
 * Called From: 01F7:11A8:0016:5243
 */
void f__01F7_11A8_0002_B43A()
{
	f__01F7_1192_0016_5243(); return;
}

/**
 * Decompiled function f__01F7_11AA_0003_5C99()
 *
 * @name f__01F7_11AA_0003_5C99
 * @implements 01F7:11AA:0003:5C99 ()
 *
 * Called From: 01F7:1196:0016:5243
 * Called From: 01F7:1196:0019:242D
 * Called From: 01F7:1196:0025:4423
 */
void f__01F7_11AA_0003_5C99()
{
	f__01F7_1592_0009_6CDC(); return;
}

/**
 * Decompiled function f__01F7_11AD_0025_BB88()
 *
 * @name f__01F7_11AD_0025_BB88
 * @implements 01F7:11AD:0025:BB88 ()
 *
 * Called From: 01F7:119A:0025:4423
 * Called From: 01F7:119A:0016:5243
 * Called From: 01F7:119A:0019:242D
 */
void f__01F7_11AD_0025_BB88()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_si);
	emu_lodsb(emu_es);
	emu_cmpb(&emu_ax.l, 0x25);
	if (emu_flags.zf) { f__01F7_119C_000C_BDD2(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_di);
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0xB), emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xFFFF);
	f__01F7_11D4_001A_ADCB(); return;
}

/**
 * Decompiled function f__01F7_11D2_001C_2FBE()
 *
 * @name f__01F7_11D2_001C_2FBE
 * @implements 01F7:11D2:001C:2FBE ()
 *
 * Called From: 01F7:122A:0004:C391
 * Called From: 01F7:123E:0014:04C1
 * Called From: 01F7:1261:0003:E2BB
 */
void f__01F7_11D2_001C_2FBE()
{
	emu_lodsb(emu_es);
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_subb(&emu_bx.l, 0x20);
	emu_cmpb(&emu_bx.l, 0x60);
	if (!emu_flags.cf) { emu_ip = 0x11F5; emu_last_cs = 0x01F7; emu_last_ip = 0x11E0; emu_last_length = 0x001C; emu_last_crc = 0x2FBE; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_bx.l, emu_get_memory8(emu_ds, emu_bx.x,  0x7A71));
	emu_cmpws(&emu_bx.x, 0x17);
	if ((emu_flags.cf || emu_flags.zf)) { f__01F7_11EE_0007_E292(); return; }
	emu_ip = 0x157E; emu_last_cs = 0x01F7; emu_last_ip = 0x11EB; emu_last_length = 0x001C; emu_last_crc = 0x2FBE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_11D4_001A_ADCB()
 *
 * @name f__01F7_11D4_001A_ADCB
 * @implements 01F7:11D4:001A:ADCB ()
 *
 * Called From: 01F7:11D0:0025:BB88
 */
void f__01F7_11D4_001A_ADCB()
{
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_subb(&emu_bx.l, 0x20);
	emu_cmpb(&emu_bx.l, 0x60);
	if (!emu_flags.cf) { emu_ip = 0x11F5; emu_last_cs = 0x01F7; emu_last_ip = 0x11E0; emu_last_length = 0x001A; emu_last_crc = 0xADCB; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_bx.l, emu_get_memory8(emu_ds, emu_bx.x,  0x7A71));
	emu_cmpws(&emu_bx.x, 0x17);
	if ((emu_flags.cf || emu_flags.zf)) { f__01F7_11EE_0007_E292(); return; }
	emu_ip = 0x157E; emu_last_cs = 0x01F7; emu_last_ip = 0x11EB; emu_last_length = 0x001A; emu_last_crc = 0xADCB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_11EE_0007_E292()
 *
 * @name f__01F7_11EE_0007_E292
 * @implements 01F7:11EE:0007:E292 ()
 *
 * Called From: 01F7:11E9:001A:ADCB
 * Called From: 01F7:11E9:001C:2FBE
 */
void f__01F7_11EE_0007_E292()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x15B2);
	switch (emu_ip) {
		case 0x122C: f__01F7_122C_0014_04C1(); return;
		case 0x127E: f__01F7_127E_0022_EBA7(); return;
		case 0x12BC: f__01F7_12BC_0007_1C4F(); return;
		case 0x12D3: f__01F7_12D3_0004_B471(); return;
		case 0x12F1: f__01F7_12F1_003D_88BC(); return;
		case 0x13A1: f__01F7_13A1_0020_0407(); return;
		case 0x13C1: f__01F7_13C1_001D_838F(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x11F0; emu_last_length = 0x0007; emu_last_crc = 0xE292;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__01F7_1228_0004_C391()
 *
 * @name f__01F7_1228_0004_C391
 * @implements 01F7:1228:0004:C391 ()
 *
 * Called From: 01F7:12C0:0007:1C4F
 */
void f__01F7_1228_0004_C391()
{
	emu_movb(&emu_cx.h, 0x5);
	f__01F7_11D2_001C_2FBE(); return;
}

/**
 * Decompiled function f__01F7_122C_0014_04C1()
 *
 * @name f__01F7_122C_0014_04C1
 * @implements 01F7:122C:0014:04C1 ()
 *
 * Called From: 01F7:11F0:0007:E292
 */
void f__01F7_122C_0014_04C1()
{
	emu_cmpb(&emu_cx.h, 0x0);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x127E; emu_last_cs = 0x01F7; emu_last_ip = 0x122F; emu_last_length = 0x0014; emu_last_crc = 0x04C1; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x1261; emu_last_cs = 0x01F7; emu_last_ip = 0x1236; emu_last_length = 0x0014; emu_last_crc = 0x04C1; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	emu_movb(&emu_cx.h, 0x1);
	f__01F7_11D2_001C_2FBE(); return;
}

/**
 * Decompiled function f__01F7_1261_0003_E2BB()
 *
 * @name f__01F7_1261_0003_E2BB
 * @implements 01F7:1261:0003:E2BB ()
 *
 * Called From: 01F7:128E:0022:EBA7
 */
void f__01F7_1261_0003_E2BB()
{
	f__01F7_11D2_001C_2FBE(); return;
}

/**
 * Decompiled function f__01F7_127E_0022_EBA7()
 *
 * @name f__01F7_127E_0022_EBA7
 * @implements 01F7:127E:0022:EBA7 ()
 *
 * Called From: 01F7:11F0:0007:E292
 */
void f__01F7_127E_0022_EBA7()
{
	emu_xchgw(&emu_ax.x, &emu_dx.x);
	emu_subb(&emu_ax.l, 0x30);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpb(&emu_cx.h, 0x2);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x12A0; emu_last_cs = 0x01F7; emu_last_ip = 0x1285; emu_last_length = 0x0022; emu_last_crc = 0xEBA7; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_cx.h, 0x2);
	emu_xchgw(&emu_get_memory16(emu_ss, emu_bp, -0x8), &emu_ax.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.sf != emu_flags.of)) { f__01F7_1261_0003_E2BB(); return; }
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_ip = 0x11D2; emu_last_cs = 0x01F7; emu_last_ip = 0x129D; emu_last_length = 0x0022; emu_last_crc = 0xEBA7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_12BC_0007_1C4F()
 *
 * @name f__01F7_12BC_0007_1C4F
 * @implements 01F7:12BC:0007:1C4F ()
 *
 * Called From: 01F7:11F0:0007:E292
 */
void f__01F7_12BC_0007_1C4F()
{
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x10);
	f__01F7_1228_0004_C391(); return;
}

/**
 * Decompiled function f__01F7_12D3_0004_B471()
 *
 * @name f__01F7_12D3_0004_B471
 * @implements 01F7:12D3:0004:B471 ()
 *
 * Called From: 01F7:11F0:0007:E292
 */
void f__01F7_12D3_0004_B471()
{
	emu_movb(&emu_bx.h, 0xA);
	f__01F7_12E1_0010_CD77(); return;
}

/**
 * Decompiled function f__01F7_12E1_0010_CD77()
 *
 * @name f__01F7_12E1_0010_CD77
 * @implements 01F7:12E1:0010:CD77 ()
 *
 * Called From: 01F7:12D5:0004:B471
 */
void f__01F7_12E1_0010_CD77()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), emu_dx.l);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x6), emu_dx.l);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_di,  0x0));
	f__01F7_1301_002D_1213(); return;
}

/**
 * Decompiled function f__01F7_12F1_003D_88BC()
 *
 * @name f__01F7_12F1_003D_88BC
 * @implements 01F7:12F1:003D:88BC ()
 *
 * Called From: 01F7:11F0:0007:E292
 */
void f__01F7_12F1_003D_88BC()
{
	emu_movb(&emu_bx.h, 0xA);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x6), 0x1);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), emu_dx.l);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_di,  0x0));
	emu_cwd();
	emu_incw(&emu_di);
	emu_incw(&emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_si);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x10);
	if (emu_flags.zf) { f__01F7_1312_001C_5AE8(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x4), emu_di);
	emu_movw(&emu_di, emu_bp - 0x45);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_132E_0014_99C6(); return; }
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x132E; emu_last_cs = 0x01F7; emu_last_ip = 0x131E; emu_last_length = 0x003D; emu_last_crc = 0x88BC; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1332; emu_last_cs = 0x01F7; emu_last_ip = 0x1324; emu_last_length = 0x003D; emu_last_crc = 0x88BC; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), 0x0);
	emu_movw(&emu_ax.x, emu_di);
	emu_ip = 0x1342; emu_last_cs = 0x01F7; emu_last_ip = 0x132C; emu_last_length = 0x003D; emu_last_crc = 0x88BC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1301_002D_1213()
 *
 * @name f__01F7_1301_002D_1213
 * @implements 01F7:1301:002D:1213 ()
 *
 * Called From: 01F7:12EF:0010:CD77
 */
void f__01F7_1301_002D_1213()
{
	emu_incw(&emu_di);
	emu_incw(&emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_si);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x10);
	if (emu_flags.zf) { f__01F7_1312_001C_5AE8(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x4), emu_di);
	emu_movw(&emu_di, emu_bp - 0x45);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x132E; emu_last_cs = 0x01F7; emu_last_ip = 0x131A; emu_last_length = 0x002D; emu_last_crc = 0x1213; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x132E; emu_last_cs = 0x01F7; emu_last_ip = 0x131E; emu_last_length = 0x002D; emu_last_crc = 0x1213; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1332; emu_last_cs = 0x01F7; emu_last_ip = 0x1324; emu_last_length = 0x002D; emu_last_crc = 0x1213; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), 0x0);
	emu_movw(&emu_ax.x, emu_di);
	emu_ip = 0x1342; emu_last_cs = 0x01F7; emu_last_ip = 0x132C; emu_last_length = 0x002D; emu_last_crc = 0x1213; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1312_001C_5AE8()
 *
 * @name f__01F7_1312_001C_5AE8
 * @implements 01F7:1312:001C:5AE8 ()
 *
 * Called From: 01F7:130B:003D:88BC
 * Called From: 01F7:130B:002D:1213
 */
void f__01F7_1312_001C_5AE8()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x4), emu_di);
	emu_movw(&emu_di, emu_bp - 0x45);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_132E_0014_99C6(); return; }
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x132E; emu_last_cs = 0x01F7; emu_last_ip = 0x131E; emu_last_length = 0x001C; emu_last_crc = 0x5AE8; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__01F7_1332_0010_2231(); return; }
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), 0x0);
	emu_movw(&emu_ax.x, emu_di);
	emu_ip = 0x1342; emu_last_cs = 0x01F7; emu_last_ip = 0x132C; emu_last_length = 0x001C; emu_last_crc = 0x5AE8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_132E_0014_99C6()
 *
 * @name f__01F7_132E_0014_99C6
 * @implements 01F7:132E:0014:99C6 ()
 *
 * Called From: 01F7:131A:001C:5AE8
 * Called From: 01F7:131A:003D:88BC
 */
void f__01F7_132E_0014_99C6()
{
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_push(emu_di);
	emu_movb(&emu_ax.l, emu_bx.h);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(0x1342); f__01F7_06D1_004A_EF77();
	f__01F7_1342_000C_536B();
}

/**
 * Decompiled function f__01F7_1332_0010_2231()
 *
 * @name f__01F7_1332_0010_2231
 * @implements 01F7:1332:0010:2231 ()
 *
 * Called From: 01F7:1324:001C:5AE8
 */
void f__01F7_1332_0010_2231()
{
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_push(emu_di);
	emu_movb(&emu_ax.l, emu_bx.h);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(0x1342); f__01F7_06D1_004A_EF77();
	f__01F7_1342_000C_536B();
}

/**
 * Decompiled function f__01F7_1342_000C_536B()
 *
 * @name f__01F7_1342_000C_536B
 * @implements 01F7:1342:000C:536B ()
 *
 * Called From: 01F7:1342:0014:99C6
 * Called From: 01F7:1342:0010:2231
 */
void f__01F7_1342_000C_536B()
{
	emu_push(emu_ss);
	emu_pop(&emu_es);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x134E; emu_last_cs = 0x01F7; emu_last_ip = 0x1349; emu_last_length = 0x000C; emu_last_crc = 0x536B; emu_call(); return; } // Jump does not resolve
	f__01F7_1442_0011_E292(); return;
}

/**
 * Decompiled function f__01F7_13A1_0020_0407()
 *
 * @name f__01F7_13A1_0020_0407
 * @implements 01F7:13A1:0020:0407 ()
 *
 * Called From: 01F7:11F0:0007:E292
 */
void f__01F7_13A1_0020_0407()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_si);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), emu_dx.l);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_di,  0x0));
	emu_addws(&emu_get_memory16(emu_ss, emu_bp,  0x4), 0x2);
	emu_push(emu_ss);
	emu_pop(&emu_es);
	emu_movw(&emu_di, emu_bp - 0x45);
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movw(&emu_get_memory16(emu_ss, emu_di,  0x0), emu_ax.x);
	emu_movw(&emu_cx.x, 0x1);
	f__01F7_1485_0028_6B27(); return;
}

/**
 * Decompiled function f__01F7_13C1_001D_838F()
 *
 * @name f__01F7_13C1_001D_838F
 * @implements 01F7:13C1:001D:838F ()
 *
 * Called From: 01F7:11F0:0007:E292
 */
void f__01F7_13C1_001D_838F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_si);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), emu_dx.l);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	if (!emu_flags.zf) { f__01F7_13DE_0015_702E(); return; }
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_di,  0x0));
	emu_addws(&emu_get_memory16(emu_ss, emu_bp,  0x4), 0x2);
	emu_push(emu_ds);
	emu_pop(&emu_es);
	emu_orw(&emu_di, emu_di);
	emu_ip = 0x13E9; emu_last_cs = 0x01F7; emu_last_ip = 0x13DC; emu_last_length = 0x001D; emu_last_crc = 0x838F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_13DE_0015_702E()
 *
 * @name f__01F7_13DE_0015_702E
 * @implements 01F7:13DE:0015:702E ()
 *
 * Called From: 01F7:13CF:001D:838F
 */
void f__01F7_13DE_0015_702E()
{
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_di,  0x0));
	emu_addws(&emu_get_memory16(emu_ss, emu_bp,  0x4), 0x4);
	emu_movw(&emu_ax.x, emu_es);
	emu_orw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { f__01F7_13F0_0003_E391(); return; }
	emu_push(emu_ds);
	emu_pop(&emu_es);
	emu_movw(&emu_di, 0x7A6A);
	emu_push(0x13F3); emu_ip = 0x1139; emu_last_cs = 0x01F7; emu_last_ip = 0x13F0; emu_last_length = 0x0015; emu_last_crc = 0x702E; emu_call(); // Jump does not resolve
	f__01F7_13F3_000B_9686();
}

/**
 * Decompiled function f__01F7_13F0_0003_E391()
 *
 * @name f__01F7_13F0_0003_E391
 * @implements 01F7:13F0:0003:E391 ()
 *
 * Called From: 01F7:13E9:0015:702E
 */
void f__01F7_13F0_0003_E391()
{
	emu_push(0x13F3); f__01F7_1139_000D_AAB0();
	f__01F7_13F3_000B_9686();
}

/**
 * Decompiled function f__01F7_13F3_000B_9686()
 *
 * @name f__01F7_13F3_000B_9686
 * @implements 01F7:13F3:000B:9686 ()
 *
 * Called From: 01F7:13F3:0003:E391
 */
void f__01F7_13F3_000B_9686()
{
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_flags.cf || emu_flags.zf)) { f__01F7_13FB_0003_DD01(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_ip = 0x1485; emu_last_cs = 0x01F7; emu_last_ip = 0x13FB; emu_last_length = 0x000B; emu_last_crc = 0x9686; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_13FB_0003_DD01()
 *
 * @name f__01F7_13FB_0003_DD01
 * @implements 01F7:13FB:0003:DD01 ()
 *
 * Called From: 01F7:13F6:000B:9686
 */
void f__01F7_13FB_0003_DD01()
{
	f__01F7_1485_0028_6B27(); return;
}

/**
 * Decompiled function f__01F7_1442_0011_E292()
 *
 * @name f__01F7_1442_0011_E292
 * @implements 01F7:1442:0011:E292 ()
 *
 * Called From: 01F7:134B:000C:536B
 */
void f__01F7_1442_0011_E292()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	if (emu_flags.zf) { f__01F7_1461_0024_6E38(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_dx.x, emu_dx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1461; emu_last_cs = 0x01F7; emu_last_ip = 0x144E; emu_last_length = 0x0011; emu_last_crc = 0xE292; emu_call(); return; } // Jump does not resolve
	emu_push(0x1453); f__01F7_1139_000D_AAB0();
	f__01F7_1453_0032_F0B1();
}

/**
 * Decompiled function f__01F7_1453_0032_F0B1()
 *
 * @name f__01F7_1453_0032_F0B1
 * @implements 01F7:1453:0032:F0B1 ()
 *
 * Called From: 01F7:1453:0011:E292
 */
void f__01F7_1453_0032_F0B1()
{
	emu_cmpb(&emu_get_memory8(emu_es, emu_di,  0x0), 0x2D);
	if (!emu_flags.zf) { f__01F7_145A_002B_67C1(); return; }
	emu_decw(&emu_cx.x);
	emu_subw(&emu_dx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1461; emu_last_cs = 0x01F7; emu_last_ip = 0x145C; emu_last_length = 0x0032; emu_last_crc = 0xF0B1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_di,  0x0), 0x2D);
	if (emu_flags.zf) { emu_ip = 0x1472; emu_last_cs = 0x01F7; emu_last_ip = 0x1465; emu_last_length = 0x0032; emu_last_crc = 0xF0B1; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xB));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x1482; emu_last_cs = 0x01F7; emu_last_ip = 0x146C; emu_last_length = 0x0032; emu_last_crc = 0xF0B1; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_di);
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1482; emu_last_cs = 0x01F7; emu_last_ip = 0x1476; emu_last_length = 0x0032; emu_last_crc = 0xF0B1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x1482; emu_last_cs = 0x01F7; emu_last_ip = 0x147D; emu_last_length = 0x0032; emu_last_crc = 0xF0B1; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(0x1485); emu_ip = 0x1139; emu_last_cs = 0x01F7; emu_last_ip = 0x1482; emu_last_length = 0x0032; emu_last_crc = 0xF0B1; emu_call(); // Jump does not resolve
	f__01F7_1485_0028_6B27();
}

/**
 * Decompiled function f__01F7_145A_002B_67C1()
 *
 * @name f__01F7_145A_002B_67C1
 * @implements 01F7:145A:002B:67C1 ()
 *
 * Called From: 01F7:1457:0032:F0B1
 */
void f__01F7_145A_002B_67C1()
{
	emu_subw(&emu_dx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1461; emu_last_cs = 0x01F7; emu_last_ip = 0x145C; emu_last_length = 0x002B; emu_last_crc = 0x67C1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_di,  0x0), 0x2D);
	if (emu_flags.zf) { emu_ip = 0x1472; emu_last_cs = 0x01F7; emu_last_ip = 0x1465; emu_last_length = 0x002B; emu_last_crc = 0x67C1; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xB));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__01F7_1482_0003_632D(); return; }
	emu_decw(&emu_di);
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1482; emu_last_cs = 0x01F7; emu_last_ip = 0x1476; emu_last_length = 0x002B; emu_last_crc = 0x67C1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x1482; emu_last_cs = 0x01F7; emu_last_ip = 0x147D; emu_last_length = 0x002B; emu_last_crc = 0x67C1; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(0x1485); emu_ip = 0x1139; emu_last_cs = 0x01F7; emu_last_ip = 0x1482; emu_last_length = 0x002B; emu_last_crc = 0x67C1; emu_call(); // Jump does not resolve
	f__01F7_1485_0028_6B27();
}

/**
 * Decompiled function f__01F7_1461_0024_6E38()
 *
 * @name f__01F7_1461_0024_6E38
 * @implements 01F7:1461:0024:6E38 ()
 *
 * Called From: 01F7:1447:0011:E292
 */
void f__01F7_1461_0024_6E38()
{
	emu_cmpb(&emu_get_memory8(emu_es, emu_di,  0x0), 0x2D);
	if (emu_flags.zf) { emu_ip = 0x1472; emu_last_cs = 0x01F7; emu_last_ip = 0x1465; emu_last_length = 0x0024; emu_last_crc = 0x6E38; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xB));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__01F7_1482_0003_632D(); return; }
	emu_decw(&emu_di);
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1482; emu_last_cs = 0x01F7; emu_last_ip = 0x1476; emu_last_length = 0x0024; emu_last_crc = 0x6E38; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x1482; emu_last_cs = 0x01F7; emu_last_ip = 0x147D; emu_last_length = 0x0024; emu_last_crc = 0x6E38; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(0x1485); emu_ip = 0x1139; emu_last_cs = 0x01F7; emu_last_ip = 0x1482; emu_last_length = 0x0024; emu_last_crc = 0x6E38; emu_call(); // Jump does not resolve
	f__01F7_1485_0028_6B27();
}

/**
 * Decompiled function f__01F7_1482_0003_632D()
 *
 * @name f__01F7_1482_0003_632D
 * @implements 01F7:1482:0003:632D ()
 *
 * Called From: 01F7:146C:002B:67C1
 * Called From: 01F7:146C:0024:6E38
 */
void f__01F7_1482_0003_632D()
{
	emu_push(0x1485); f__01F7_1139_000D_AAB0();
	f__01F7_1485_0028_6B27();
}

/**
 * Decompiled function f__01F7_1485_0028_6B27()
 *
 * @name f__01F7_1485_0028_6B27
 * @implements 01F7:1485:0028:6B27 ()
 *
 * Called From: 01F7:13BE:0020:0407
 * Called From: 01F7:13FB:0003:DD01
 * Called From: 01F7:1485:0003:632D
 */
void f__01F7_1485_0028_6B27()
{
	emu_movw(&emu_si, emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, 0x5);
	emu_andw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, 0x5);
	if (!emu_flags.zf) { f__01F7_14AB_0002_CDBA(); return; }
	emu_movb(&emu_ax.h, emu_get_memory8(emu_ss, emu_bp, -0x5));
	emu_cmpb(&emu_ax.h, 0x6F);
	if (!emu_flags.zf) { emu_ip = 0x14AD; emu_last_cs = 0x01F7; emu_last_ip = 0x149E; emu_last_length = 0x0028; emu_last_crc = 0x6B27; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x14AB; emu_last_cs = 0x01F7; emu_last_ip = 0x14A4; emu_last_length = 0x0028; emu_last_crc = 0x6B27; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_ip = 0x14C8; emu_last_cs = 0x01F7; emu_last_ip = 0x14AB; emu_last_length = 0x0028; emu_last_crc = 0x6B27; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_14AB_0002_CDBA()
 *
 * @name f__01F7_14AB_0002_CDBA
 * @implements 01F7:14AB:0002:CDBA ()
 *
 * Called From: 01F7:1496:0028:6B27
 */
void f__01F7_14AB_0002_CDBA()
{
	f__01F7_14C8_000C_A183(); return;
}

/**
 * Decompiled function f__01F7_14C8_000C_A183()
 *
 * @name f__01F7_14C8_000C_A183
 * @implements 01F7:14C8:000C:A183 ()
 *
 * Called From: 01F7:14AB:0002:CDBA
 */
void f__01F7_14C8_000C_A183()
{
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x14DE; emu_last_cs = 0x01F7; emu_last_ip = 0x14D0; emu_last_length = 0x000C; emu_last_crc = 0xA183; emu_call(); return; } // Jump does not resolve
	f__01F7_14DA_0010_B965(); return;
}

/**
 * Decompiled function f__01F7_14D4_0005_2699()
 *
 * @name f__01F7_14D4_0005_2699
 * @implements 01F7:14D4:0005:2699 ()
 *
 * Called From: 01F7:14DC:0010:B965
 * Called From: 01F7:14DC:0011:9CE5
 */
void f__01F7_14D4_0005_2699()
{
	emu_movb(&emu_ax.l, 0x20);
	emu_push(0x14D9); f__01F7_1146_0023_6860();
	f__01F7_14D9_0011_9CE5();
}

/**
 * Decompiled function f__01F7_14D9_0011_9CE5()
 *
 * @name f__01F7_14D9_0011_9CE5
 * @implements 01F7:14D9:0011:9CE5 ()
 *
 * Called From: 01F7:14D9:0005:2699
 */
void f__01F7_14D9_0011_9CE5()
{
	emu_decw(&emu_bx.x);
	emu_cmpw(&emu_bx.x, emu_cx.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_14D4_0005_2699(); return; }
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x40);
	if (emu_flags.zf) { f__01F7_14F0_001F_69A1(); return; }
	emu_movb(&emu_ax.l, 0x30);
	emu_push(0x14EA); emu_ip = 0x1146; emu_last_cs = 0x01F7; emu_last_ip = 0x14E7; emu_last_length = 0x0011; emu_last_crc = 0x9CE5; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_14DA_0010_B965()
 *
 * @name f__01F7_14DA_0010_B965
 * @implements 01F7:14DA:0010:B965 ()
 *
 * Called From: 01F7:14D2:000C:A183
 */
void f__01F7_14DA_0010_B965()
{
	emu_cmpw(&emu_bx.x, emu_cx.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_14D4_0005_2699(); return; }
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x40);
	if (emu_flags.zf) { f__01F7_14F0_001F_69A1(); return; }
	emu_movb(&emu_ax.l, 0x30);
	emu_push(0x14EA); emu_ip = 0x1146; emu_last_cs = 0x01F7; emu_last_ip = 0x14E7; emu_last_length = 0x0010; emu_last_crc = 0xB965; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_14F0_001F_69A1()
 *
 * @name f__01F7_14F0_001F_69A1
 * @implements 01F7:14F0:001F:69A1 ()
 *
 * Called From: 01F7:14E3:0010:B965
 * Called From: 01F7:14E3:0011:9CE5
 */
void f__01F7_14F0_001F_69A1()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_orw(&emu_dx.x, emu_dx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_151E_0012_47FD(); return; }
	emu_subw(&emu_cx.x, emu_dx.x);
	emu_subw(&emu_bx.x, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_cmpb(&emu_ax.l, 0x2D);
	if (emu_flags.zf) { emu_ip = 0x150A; emu_last_cs = 0x01F7; emu_last_ip = 0x1500; emu_last_length = 0x001F; emu_last_crc = 0x69A1; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x20);
	if (emu_flags.zf) { emu_ip = 0x150A; emu_last_cs = 0x01F7; emu_last_ip = 0x1504; emu_last_length = 0x001F; emu_last_crc = 0x69A1; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x2B);
	if (!emu_flags.zf) { f__01F7_1511_0009_310D(); return; }
	emu_lodsb(emu_es);
	emu_push(0x150F); emu_ip = 0x1146; emu_last_cs = 0x01F7; emu_last_ip = 0x150C; emu_last_length = 0x001F; emu_last_crc = 0x69A1; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_1511_0009_310D()
 *
 * @name f__01F7_1511_0009_310D
 * @implements 01F7:1511:0009:310D ()
 *
 * Called From: 01F7:1508:001F:69A1
 */
void f__01F7_1511_0009_310D()
{
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	if (emu_cx.x == 0) { emu_ip = 0x151C; emu_last_cs = 0x01F7; emu_last_ip = 0x1513; emu_last_length = 0x0009; emu_last_crc = 0x310D; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, 0x30);
	emu_push(0x151A); f__01F7_1146_0023_6860();
	f__01F7_151A_0016_A17E();
}

/**
 * Decompiled function f__01F7_1515_0005_6688()
 *
 * @name f__01F7_1515_0005_6688
 * @implements 01F7:1515:0005:6688 ()
 *
 * Called From: 01F7:151A:0016:A17E
 */
void f__01F7_1515_0005_6688()
{
	emu_movb(&emu_ax.l, 0x30);
	emu_push(0x151A); f__01F7_1146_0023_6860();
	f__01F7_151A_0016_A17E();
}

/**
 * Decompiled function f__01F7_151A_0016_A17E()
 *
 * @name f__01F7_151A_0016_A17E
 * @implements 01F7:151A:0016:A17E ()
 *
 * Called From: 01F7:151A:0009:310D
 * Called From: 01F7:151A:0005:6688
 */
void f__01F7_151A_0016_A17E()
{
	if (--emu_cx.x != 0) { f__01F7_1515_0005_6688(); return; }
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	if (emu_cx.x == 0) { emu_ip = 0x1532; emu_last_cs = 0x01F7; emu_last_ip = 0x151E; emu_last_length = 0x0016; emu_last_crc = 0xA17E; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_lodsb(emu_es);
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_1530_000D_4B6C(); return; }
	emu_push(0x1530); emu_ip = 0x114F; emu_last_cs = 0x01F7; emu_last_ip = 0x152D; emu_last_length = 0x0016; emu_last_crc = 0xA17E; emu_call(); // Jump does not resolve
	f__01F7_1530_000D_4B6C();
}

/**
 * Decompiled function f__01F7_151E_0012_47FD()
 *
 * @name f__01F7_151E_0012_47FD
 * @implements 01F7:151E:0012:47FD ()
 *
 * Called From: 01F7:14F5:001F:69A1
 */
void f__01F7_151E_0012_47FD()
{
	if (emu_cx.x == 0) { emu_ip = 0x1532; emu_last_cs = 0x01F7; emu_last_ip = 0x151E; emu_last_length = 0x0012; emu_last_crc = 0x47FD; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_lodsb(emu_es);
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_1530_000D_4B6C(); return; }
	emu_push(0x1530); emu_ip = 0x114F; emu_last_cs = 0x01F7; emu_last_ip = 0x152D; emu_last_length = 0x0012; emu_last_crc = 0x47FD; emu_call(); // Jump does not resolve
	f__01F7_1530_000D_4B6C();
}

/**
 * Decompiled function f__01F7_1522_000E_3CEF()
 *
 * @name f__01F7_1522_000E_3CEF
 * @implements 01F7:1522:000E:3CEF ()
 *
 * Called From: 01F7:1530:000D:4B6C
 */
void f__01F7_1522_000E_3CEF()
{
	emu_lodsb(emu_es);
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_1530_000D_4B6C(); return; }
	emu_push(0x1530); emu_ip = 0x114F; emu_last_cs = 0x01F7; emu_last_ip = 0x152D; emu_last_length = 0x000E; emu_last_crc = 0x3CEF; emu_call(); // Jump does not resolve
	f__01F7_1530_000D_4B6C();
}

/**
 * Decompiled function f__01F7_1530_000D_4B6C()
 *
 * @name f__01F7_1530_000D_4B6C
 * @implements 01F7:1530:000D:4B6C ()
 *
 * Called From: 01F7:152B:0012:47FD
 * Called From: 01F7:152B:000E:3CEF
 * Called From: 01F7:152B:0016:A17E
 */
void f__01F7_1530_000D_4B6C()
{
	if (--emu_cx.x != 0) { f__01F7_1522_000E_3CEF(); return; }
	emu_orw(&emu_bx.x, emu_bx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_153F_0003_2333(); return; }
	emu_movw(&emu_cx.x, emu_bx.x);
	emu_movb(&emu_ax.l, 0x20);
	emu_push(0x153D); emu_ip = 0x1146; emu_last_cs = 0x01F7; emu_last_ip = 0x153A; emu_last_length = 0x000D; emu_last_crc = 0x4B6C; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_153F_0003_2333()
 *
 * @name f__01F7_153F_0003_2333
 * @implements 01F7:153F:0003:2333 ()
 *
 * Called From: 01F7:1534:000D:4B6C
 */
void f__01F7_153F_0003_2333()
{
	f__01F7_118F_0019_242D(); return;
}

/**
 * Decompiled function f__01F7_1592_0009_6CDC()
 *
 * @name f__01F7_1592_0009_6CDC
 * @implements 01F7:1592:0009:6CDC ()
 *
 * Called From: 01F7:11AA:0003:5C99
 */
void f__01F7_1592_0009_6CDC()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x14), 0x50);
	if (!(emu_flags.sf != emu_flags.of)) { f__01F7_159B_000C_40E8(); return; }
	emu_push(0x159B); f__01F7_114F_001A_962D();
	f__01F7_159B_000C_40E8();
}

/**
 * Decompiled function f__01F7_159B_000C_40E8()
 *
 * @name f__01F7_159B_000C_40E8
 * @implements 01F7:159B:000C:40E8 ()
 *
 * Called From: 01F7:1596:0009:6CDC
 * Called From: 01F7:159B:0009:6CDC
 */
void f__01F7_159B_000C_40E8()
{
	emu_pop(&emu_es);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (emu_flags.zf) { f__01F7_15A7_000B_CD36(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x15AA; emu_last_cs = 0x01F7; emu_last_ip = 0x15A5; emu_last_length = 0x000C; emu_last_crc = 0x40E8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_15A7_000B_CD36()
 *
 * @name f__01F7_15A7_000B_CD36
 * @implements 01F7:15A7:000B:CD36 ()
 *
 * Called From: 01F7:15A0:000C:40E8
 */
void f__01F7_15A7_000B_CD36()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 12;
	return;
}

/**
 * Decompiled function f__01F7_160D_001B_4171()
 *
 * @name f__01F7_160D_001B_4171
 * @implements 01F7:160D:001B:4171 ()
 *
 * Called From: 01F7:1759:001B:9E34
 */
void f__01F7_160D_001B_4171()
{
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	if (emu_flags.zf) { emu_ip = 0x164B; emu_last_cs = 0x01F7; emu_last_ip = 0x1612; emu_last_length = 0x001B; emu_last_crc = 0x4171; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ds, emu_dx.x);
	emu_movw(&emu_ds, emu_get_memory16(emu_ds, 0x00,  0x2));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2), 0x0);
	if (emu_flags.zf) { f__01F7_1628_0017_DA8D(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1603), emu_ds);
	f__01F7_1660_000C_C6DC(); return;
}

/**
 * Decompiled function f__01F7_1628_0017_DA8D()
 *
 * @name f__01F7_1628_0017_DA8D
 * @implements 01F7:1628:0017:DA8D ()
 *
 * Called From: 01F7:161F:001B:4171
 */
void f__01F7_1628_0017_DA8D()
{
	emu_movw(&emu_ax.x, emu_ds);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	if (emu_flags.zf) { emu_ip = 0x1646; emu_last_cs = 0x01F7; emu_last_ip = 0x162F; emu_last_length = 0x0017; emu_last_crc = 0xDA8D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1603), emu_ax.x);
	emu_push(emu_ds);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(0x163F); f__01F7_16E1_0021_50D4();
	f__01F7_163F_0007_9BD4();
}

/**
 * Decompiled function f__01F7_163F_0007_9BD4()
 *
 * @name f__01F7_163F_0007_9BD4
 * @implements 01F7:163F:0007:9BD4 ()
 *
 * Called From: 01F7:163F:0017:DA8D
 */
void f__01F7_163F_0007_9BD4()
{
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x1607));
	f__01F7_1669_0003_5F0F(); return;
}

/**
 * Decompiled function f__01F7_1660_000C_C6DC()
 *
 * @name f__01F7_1660_000C_C6DC
 * @implements 01F7:1660:000C:C6DC ()
 *
 * Called From: 01F7:1626:001B:4171
 */
void f__01F7_1660_000C_C6DC()
{
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x1607));
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(0x166C); f__01F7_1AA9_0014_FC63();
	f__01F7_166C_0004_4909();
}

/**
 * Decompiled function f__01F7_1669_0003_5F0F()
 *
 * @name f__01F7_1669_0003_5F0F
 * @implements 01F7:1669:0003:5F0F ()
 *
 * Called From: 01F7:1644:0007:9BD4
 */
void f__01F7_1669_0003_5F0F()
{
	emu_push(0x166C); f__01F7_1AA9_0014_FC63();
	f__01F7_166C_0004_4909();
}

/**
 * Decompiled function f__01F7_166C_0004_4909()
 *
 * @name f__01F7_166C_0004_4909
 * @implements 01F7:166C:0004:4909 ()
 *
 * Called From: 01F7:166C:000C:C6DC
 * Called From: 01F7:166C:0003:5F0F
 */
void f__01F7_166C_0004_4909()
{
	emu_addws(&emu_sp, 0x4);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1670_003F_2D8D()
 *
 * @name f__01F7_1670_003F_2D8D
 * @implements 01F7:1670:003F:2D8D ()
 *
 * Called From: 01F7:175E:0003:A283
 */
void f__01F7_1670_003F_2D8D()
{
	emu_movw(&emu_ds, emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00,  0x2));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8), emu_es);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	if (emu_flags.zf) { emu_ip = 0x16B6; emu_last_cs = 0x01F7; emu_last_ip = 0x1686; emu_last_length = 0x003F; emu_last_crc = 0x2D8D; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0x2), 0x0);
	if (!emu_flags.zf) { f__01F7_16B6_0003_5D14(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_pop(&emu_bx.x);
	emu_push(emu_es);
	emu_addw(&emu_get_memory16(emu_es, 0x00,  0x0), emu_ax.x);
	emu_movw(&emu_cx.x, emu_es);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0x2), 0x0);
	if (!emu_flags.zf) { f__01F7_16AF_0007_C584(); return; }
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x8), emu_cx.x);
	f__01F7_16B9_0012_7D5D(); return;
}

/**
 * Decompiled function f__01F7_16AF_0007_C584()
 *
 * @name f__01F7_16AF_0007_C584
 * @implements 01F7:16AF:0007:C584 ()
 *
 * Called From: 01F7:16A6:003F:2D8D
 */
void f__01F7_16AF_0007_C584()
{
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x2), emu_cx.x);
	f__01F7_16B9_0012_7D5D(); return;
}

/**
 * Decompiled function f__01F7_16B6_0003_5D14()
 *
 * @name f__01F7_16B6_0003_5D14
 * @implements 01F7:16B6:0003:5D14 ()
 *
 * Called From: 01F7:168E:003F:2D8D
 */
void f__01F7_16B6_0003_5D14()
{
	emu_push(0x16B9); f__01F7_170A_0029_EF04();
	f__01F7_16B9_0012_7D5D();
}

/**
 * Decompiled function f__01F7_16B9_0012_7D5D()
 *
 * @name f__01F7_16B9_0012_7D5D
 * @implements 01F7:16B9:0012:7D5D ()
 *
 * Called From: 01F7:16AD:003F:2D8D
 * Called From: 01F7:16B4:0007:C584
 * Called From: 01F7:16B9:0003:5D14
 */
void f__01F7_16B9_0012_7D5D()
{
	emu_pop(&emu_es);
	emu_movw(&emu_ax.x, emu_es);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x0));
	emu_movw(&emu_ds, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2), 0x0);
	if (emu_flags.zf) { f__01F7_16CB_0037_9CE5(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_16CB_0037_9CE5()
 *
 * @name f__01F7_16CB_0037_9CE5
 * @implements 01F7:16CB:0037:9CE5 ()
 *
 * Called From: 01F7:16C8:0012:7D5D
 */
void f__01F7_16CB_0037_9CE5()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_addw(&emu_get_memory16(emu_es, 0x00,  0x0), emu_ax.x);
	emu_movw(&emu_ax.x, emu_es);
	emu_movw(&emu_bx.x, emu_ds);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_movw(&emu_es, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x2), emu_ax.x);
	emu_movw(&emu_bx.x, emu_ds);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x6));
	if (emu_flags.zf) { emu_ip = 0x1702; emu_last_cs = 0x01F7; emu_last_ip = 0x16E7; emu_last_length = 0x0037; emu_last_crc = 0x9CE5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00,  0x6));
	emu_movw(&emu_ds, emu_get_memory16(emu_ds, 0x00,  0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6), emu_es);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x4), emu_ds);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1605), emu_ds);
	emu_movw(&emu_ds, emu_bx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_16E1_0021_50D4()
 *
 * @name f__01F7_16E1_0021_50D4
 * @implements 01F7:16E1:0021:50D4 ()
 *
 * Called From: 01F7:163C:0017:DA8D
 * Called From: 01F7:18BB:0005:E1BF
 */
void f__01F7_16E1_0021_50D4()
{
	emu_movw(&emu_bx.x, emu_ds);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x6));
	if (emu_flags.zf) { f__01F7_1702_0008_3627(); return; }
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00,  0x6));
	emu_movw(&emu_ds, emu_get_memory16(emu_ds, 0x00,  0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6), emu_es);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x4), emu_ds);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1605), emu_ds);
	emu_movw(&emu_ds, emu_bx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1702_0008_3627()
 *
 * @name f__01F7_1702_0008_3627
 * @implements 01F7:1702:0008:3627 ()
 *
 * Called From: 01F7:16E7:0021:50D4
 */
void f__01F7_1702_0008_3627()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1605), 0x0);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_170A_0029_EF04()
 *
 * @name f__01F7_170A_0029_EF04
 * @implements 01F7:170A:0029:EF04 ()
 *
 * Called From: 01F7:16B6:0003:5D14
 */
void f__01F7_170A_0029_EF04()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1605));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__01F7_1733_000E_5FB3(); return; }
	emu_movw(&emu_bx.x, emu_ss);
	emu_pushf();
	emu_cli();
	emu_movw(&emu_ss, emu_ax.x);
	emu_movw(&emu_es, emu_get_memory16(emu_ss, 0x00,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, 0x00,  0x6), emu_ds);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4), emu_ss);
	emu_movw(&emu_ss, emu_bx.x);
	emu_popf();
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x4), emu_ds);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6), emu_es);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1733_000E_5FB3()
 *
 * @name f__01F7_1733_000E_5FB3
 * @implements 01F7:1733:000E:5FB3 ()
 *
 * Called From: 01F7:1710:0029:EF04
 */
void f__01F7_1733_000E_5FB3()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1605), emu_ds);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4), emu_ds);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6), emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1741_001B_9E34()
 *
 * @name f__01F7_1741_001B_9E34
 * @implements 01F7:1741:001B:9E34 ()
 *
 * Called From: 23E1:0223:0035:7AA8
 * Called From: 23E1:0247:0006:9688
 */
void f__01F7_1741_001B_9E34()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1607), emu_ds);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x1761; emu_last_cs = 0x01F7; emu_last_ip = 0x1750; emu_last_length = 0x001B; emu_last_crc = 0x9E34; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x1603));
	if (!emu_flags.zf) { f__01F7_175E_0003_A283(); return; }
	emu_push(0x175C); f__01F7_160D_001B_4171();
	f__01F7_175C_0002_C1BA();
}

/**
 * Decompiled function f__01F7_175C_0002_C1BA()
 *
 * @name f__01F7_175C_0002_C1BA
 * @implements 01F7:175C:0002:C1BA ()
 *
 * Called From: 01F7:175C:001B:9E34
 */
void f__01F7_175C_0002_C1BA()
{
	f__01F7_1761_0009_4CC9(); return;
}

/**
 * Decompiled function f__01F7_175E_0003_A283()
 *
 * @name f__01F7_175E_0003_A283
 * @implements 01F7:175E:0003:A283 ()
 *
 * Called From: 01F7:1757:001B:9E34
 */
void f__01F7_175E_0003_A283()
{
	emu_push(0x1761); f__01F7_1670_003F_2D8D();
	f__01F7_1761_0009_4CC9();
}

/**
 * Decompiled function f__01F7_1761_0009_4CC9()
 *
 * @name f__01F7_1761_0009_4CC9
 * @implements 01F7:1761:0009:4CC9 ()
 *
 * Called From: 01F7:175C:0002:C1BA
 * Called From: 01F7:1761:0003:A283
 */
void f__01F7_1761_0009_4CC9()
{
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x1607));
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_176A_000D_8D0C()
 *
 * @name f__01F7_176A_000D_8D0C
 * @implements 01F7:176A:000D:8D0C ()
 *
 * Called From: 01F7:18AA:0003:222F
 */
void f__01F7_176A_000D_8D0C()
{
	emu_push(emu_ax.x);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x1607));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(0x1777); f__01F7_1AE8_0010_0EEE();
	f__01F7_1777_0019_73FC();
}

/**
 * Decompiled function f__01F7_1777_0019_73FC()
 *
 * @name f__01F7_1777_0019_73FC
 * @implements 01F7:1777:0019:73FC ()
 *
 * Called From: 01F7:1777:000D:8D0C
 */
void f__01F7_1777_0019_73FC()
{
	emu_addws(&emu_sp, 0x4);
	emu_andw(&emu_ax.x, 0xF);
	if (emu_flags.zf) { f__01F7_1793_0016_6ACD(); return; }
	emu_movw(&emu_dx.x, 0x10);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x1607));
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(0x1790); emu_ip = 0x1AE8; emu_last_cs = 0x01F7; emu_last_ip = 0x178D; emu_last_length = 0x0019; emu_last_crc = 0x73FC; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_1793_0016_6ACD()
 *
 * @name f__01F7_1793_0016_6ACD
 * @implements 01F7:1793:0016:6ACD ()
 *
 * Called From: 01F7:177D:0019:73FC
 */
void f__01F7_1793_0016_6ACD()
{
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_movb(&emu_bx.l, emu_ax.h);
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_bx.x, emu_cx.l);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x1607));
	emu_push(emu_bx.x);
	emu_push(emu_ax.x);
	emu_push(0x17A9); f__01F7_1AE8_0010_0EEE();
	f__01F7_17A9_0021_5DBA();
}

/**
 * Decompiled function f__01F7_17A9_0021_5DBA()
 *
 * @name f__01F7_17A9_0021_5DBA
 * @implements 01F7:17A9:0021:5DBA ()
 *
 * Called From: 01F7:17A9:0016:6ACD
 */
void f__01F7_17A9_0021_5DBA()
{
	emu_addws(&emu_sp, 0x4);
	emu_pop(&emu_bx.x);
	emu_cmpw(&emu_ax.x, 0xFFFF);
	if (emu_flags.zf) { emu_ip = 0x17CA; emu_last_cs = 0x01F7; emu_last_ip = 0x17B0; emu_last_length = 0x0021; emu_last_crc = 0x5DBA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1601), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1603), emu_dx.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x0), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2), emu_dx.x);
	emu_movw(&emu_ax.x, 0x4);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_17CE_0015_8AC2()
 *
 * @name f__01F7_17CE_0015_8AC2
 * @implements 01F7:17CE:0015:8AC2 ()
 *
 * Called From: 01F7:18A5:0003:E289
 * Called From: 01F7:18A5:0053:AC2D
 * Called From: 01F7:18A5:0013:DC7A
 */
void f__01F7_17CE_0015_8AC2()
{
	emu_push(emu_ax.x);
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_movb(&emu_bx.l, emu_ax.h);
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_bx.x, emu_cx.l);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x1607));
	emu_push(emu_bx.x);
	emu_push(emu_ax.x);
	emu_push(0x17E3); f__01F7_1AE8_0010_0EEE();
	f__01F7_17E3_0026_CC3B();
}

/**
 * Decompiled function f__01F7_17E3_0026_CC3B()
 *
 * @name f__01F7_17E3_0026_CC3B
 * @implements 01F7:17E3:0026:CC3B ()
 *
 * Called From: 01F7:17E3:0015:8AC2
 */
void f__01F7_17E3_0026_CC3B()
{
	emu_addws(&emu_sp, 0x4);
	emu_pop(&emu_bx.x);
	emu_cmpw(&emu_ax.x, 0xFFFF);
	if (emu_flags.zf) { emu_ip = 0x1824; emu_last_cs = 0x01F7; emu_last_ip = 0x17EA; emu_last_length = 0x0026; emu_last_crc = 0xCC3B; emu_call(); return; } // Jump does not resolve
	emu_andw(&emu_ax.x, 0xF);
	if (!emu_flags.zf) { emu_ip = 0x1809; emu_last_cs = 0x01F7; emu_last_ip = 0x17EF; emu_last_length = 0x0026; emu_last_crc = 0xCC3B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0x1603));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1603), emu_dx.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x0), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2), emu_cx.x);
	emu_movw(&emu_ax.x, 0x4);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1828_0023_D335()
 *
 * @name f__01F7_1828_0023_D335
 * @implements 01F7:1828:0023:D335 ()
 *
 * Called From: 01F7:18AF:0003:E29D
 */
void f__01F7_1828_0023_D335()
{
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_subw(&emu_get_memory16(emu_ds, 0x00,  0x0), emu_ax.x);
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_movw(&emu_ds, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2), emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_movw(&emu_ds, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2), emu_dx.x);
	emu_movw(&emu_ax.x, 0x4);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_184B_000A_9146()
 *
 * @name f__01F7_184B_000A_9146
 * @implements 01F7:184B:000A:9146 ()
 *
 * Called From: 01F7:2209:0012:B06A
 * Called From: 01F7:3429:004A:D92C
 */
void f__01F7_184B_000A_9146()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__01F7_185E_004A_2060(); return;
}

/**
 * Decompiled function f__01F7_1855_0053_AC2D()
 *
 * @name f__01F7_1855_0053_AC2D
 * @implements 01F7:1855:0053:AC2D ()
 *
 * Called From: 217E:0D5E:0010:E0EA
 * Called From: 23E1:006C:000B:8D1F
 */
void f__01F7_1855_0053_AC2D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_orw(&emu_cx.x, emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1607), emu_ds);
	if (emu_flags.zf) { emu_ip = 0x18C9; emu_last_cs = 0x01F7; emu_last_ip = 0x1869; emu_last_length = 0x0053; emu_last_crc = 0xAC2D; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_ax.x, 0x13);
	emu_adcws(&emu_dx.x, 0x0);
	if (emu_flags.cf) { emu_ip = 0x18B4; emu_last_cs = 0x01F7; emu_last_ip = 0x1871; emu_last_length = 0x0053; emu_last_crc = 0xAC2D; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_dx.x, 0xFFF0);
	if (!emu_flags.zf) { emu_ip = 0x18B4; emu_last_cs = 0x01F7; emu_last_ip = 0x1877; emu_last_length = 0x0053; emu_last_crc = 0xAC2D; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_orb(&emu_ax.h, emu_dx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { f__01F7_18AA_0003_222F(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x1605));
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { f__01F7_18A5_0003_E289(); return; }
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x0), emu_ax.x);
	if (!emu_flags.cf) { f__01F7_18B9_0005_E1BF(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6));
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__01F7_1895_0013_DC7A(); return; }
	emu_push(0x18A8); f__01F7_17CE_0015_8AC2();
	f__01F7_18A8_0002_CFBA();
}

/**
 * Decompiled function f__01F7_185E_004A_2060()
 *
 * @name f__01F7_185E_004A_2060
 * @implements 01F7:185E:004A:2060 ()
 *
 * Called From: 01F7:1853:000A:9146
 */
void f__01F7_185E_004A_2060()
{
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_orw(&emu_cx.x, emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1607), emu_ds);
	if (emu_flags.zf) { emu_ip = 0x18C9; emu_last_cs = 0x01F7; emu_last_ip = 0x1869; emu_last_length = 0x004A; emu_last_crc = 0x2060; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_ax.x, 0x13);
	emu_adcws(&emu_dx.x, 0x0);
	if (emu_flags.cf) { emu_ip = 0x18B4; emu_last_cs = 0x01F7; emu_last_ip = 0x1871; emu_last_length = 0x004A; emu_last_crc = 0x2060; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_dx.x, 0xFFF0);
	if (!emu_flags.zf) { emu_ip = 0x18B4; emu_last_cs = 0x01F7; emu_last_ip = 0x1877; emu_last_length = 0x004A; emu_last_crc = 0x2060; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_orb(&emu_ax.h, emu_dx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x18AA; emu_last_cs = 0x01F7; emu_last_ip = 0x1888; emu_last_length = 0x004A; emu_last_crc = 0x2060; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x1605));
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { f__01F7_18A5_0003_E289(); return; }
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x0), emu_ax.x);
	if (!emu_flags.cf) { emu_ip = 0x18B9; emu_last_cs = 0x01F7; emu_last_ip = 0x189B; emu_last_length = 0x004A; emu_last_crc = 0x2060; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6));
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { emu_ip = 0x1895; emu_last_cs = 0x01F7; emu_last_ip = 0x18A3; emu_last_length = 0x004A; emu_last_crc = 0x2060; emu_call(); return; } // Jump does not resolve
	emu_push(0x18A8); emu_ip = 0x17CE; emu_last_cs = 0x01F7; emu_last_ip = 0x18A5; emu_last_length = 0x004A; emu_last_crc = 0x2060; emu_call(); // Jump does not resolve
	f__01F7_18A8_0002_CFBA();
}

/**
 * Decompiled function f__01F7_1895_0013_DC7A()
 *
 * @name f__01F7_1895_0013_DC7A
 * @implements 01F7:1895:0013:DC7A ()
 *
 * Called From: 01F7:18A3:0053:AC2D
 * Called From: 01F7:18A3:0013:DC7A
 */
void f__01F7_1895_0013_DC7A()
{
	emu_movw(&emu_ds, emu_dx.x);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x0), emu_ax.x);
	if (!emu_flags.cf) { f__01F7_18B9_0005_E1BF(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6));
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__01F7_1895_0013_DC7A(); return; }
	emu_push(0x18A8); f__01F7_17CE_0015_8AC2();
	f__01F7_18A8_0002_CFBA();
}

/**
 * Decompiled function f__01F7_18A5_0003_E289()
 *
 * @name f__01F7_18A5_0003_E289
 * @implements 01F7:18A5:0003:E289 ()
 *
 * Called From: 01F7:1891:004A:2060
 * Called From: 01F7:1891:0053:AC2D
 */
void f__01F7_18A5_0003_E289()
{
	emu_push(0x18A8); f__01F7_17CE_0015_8AC2();
	f__01F7_18A8_0002_CFBA();
}

/**
 * Decompiled function f__01F7_18A8_0002_CFBA()
 *
 * @name f__01F7_18A8_0002_CFBA
 * @implements 01F7:18A8:0002:CFBA ()
 *
 * Called From: 01F7:18A8:0003:E289
 * Called From: 01F7:18A8:0053:AC2D
 * Called From: 01F7:18A8:0013:DC7A
 */
void f__01F7_18A8_0002_CFBA()
{
	f__01F7_18C9_0009_4CC9(); return;
}

/**
 * Decompiled function f__01F7_18AA_0003_222F()
 *
 * @name f__01F7_18AA_0003_222F
 * @implements 01F7:18AA:0003:222F ()
 *
 * Called From: 01F7:1888:0053:AC2D
 */
void f__01F7_18AA_0003_222F()
{
	emu_push(0x18AD); f__01F7_176A_000D_8D0C();
	f__01F7_18AD_0002_CD3A();
}

/**
 * Decompiled function f__01F7_18AD_0002_CD3A()
 *
 * @name f__01F7_18AD_0002_CD3A
 * @implements 01F7:18AD:0002:CD3A ()
 *
 * Called From: 01F7:18AD:0003:222F
 */
void f__01F7_18AD_0002_CD3A()
{
	f__01F7_18C9_0009_4CC9(); return;
}

/**
 * Decompiled function f__01F7_18AF_0003_E29D()
 *
 * @name f__01F7_18AF_0003_E29D
 * @implements 01F7:18AF:0003:E29D ()
 *
 * Called From: 01F7:18B9:0005:E1BF
 */
void f__01F7_18AF_0003_E29D()
{
	emu_push(0x18B2); f__01F7_1828_0023_D335();
	f__01F7_18B2_0002_CABA();
}

/**
 * Decompiled function f__01F7_18B2_0002_CABA()
 *
 * @name f__01F7_18B2_0002_CABA
 * @implements 01F7:18B2:0002:CABA ()
 *
 * Called From: 01F7:18B2:0003:E29D
 */
void f__01F7_18B2_0002_CABA()
{
	f__01F7_18C9_0009_4CC9(); return;
}

/**
 * Decompiled function f__01F7_18B9_0005_E1BF()
 *
 * @name f__01F7_18B9_0005_E1BF
 * @implements 01F7:18B9:0005:E1BF ()
 *
 * Called From: 01F7:189B:0053:AC2D
 * Called From: 01F7:189B:0013:DC7A
 */
void f__01F7_18B9_0005_E1BF()
{
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_18AF_0003_E29D(); return; }
	emu_push(0x18BE); f__01F7_16E1_0021_50D4();
	f__01F7_18BE_0014_4802();
}

/**
 * Decompiled function f__01F7_18BE_0014_4802()
 *
 * @name f__01F7_18BE_0014_4802
 * @implements 01F7:18BE:0014:4802 ()
 *
 * Called From: 01F7:18BE:0005:E1BF
 */
void f__01F7_18BE_0014_4802()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x8));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2), emu_bx.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x1607));
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_18C9_0009_4CC9()
 *
 * @name f__01F7_18C9_0009_4CC9
 * @implements 01F7:18C9:0009:4CC9 ()
 *
 * Called From: 01F7:18A8:0002:CFBA
 * Called From: 01F7:18AD:0002:CD3A
 * Called From: 01F7:18B2:0002:CABA
 */
void f__01F7_18C9_0009_4CC9()
{
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x1607));
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_1A33_002B_B2CA()
 *
 * @name f__01F7_1A33_002B_B2CA
 * @implements 01F7:1A33:002B:B2CA ()
 *
 * Called From: 01F7:1AD8:000B:C818
 * Called From: 01F7:1B62:0018:3D83
 */
void f__01F7_1A33_002B_B2CA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_si);
	emu_subw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x7B));
	emu_addws(&emu_si, 0x3F);
	emu_movb(&emu_cx.l, 0x6);
	emu_shrw(&emu_si, emu_cx.l);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x7B04));
	if (!emu_flags.zf) { f__01F7_1A5E_0022_58BB(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8D), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8B), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__01F7_1AA4_0005_CAB4(); return;
}

/**
 * Decompiled function f__01F7_1A4C_0012_1FF4()
 *
 * @name f__01F7_1A4C_0012_1FF4
 * @implements 01F7:1A4C:0012:1FF4 ()
 *
 * Called From: 01F7:1A92:0014:CCE4
 */
void f__01F7_1A4C_0012_1FF4()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8D), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8B), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__01F7_1AA4_0005_CAB4(); return;
}

/**
 * Decompiled function f__01F7_1A5E_0022_58BB()
 *
 * @name f__01F7_1A5E_0022_58BB
 * @implements 01F7:1A5E:0022:58BB ()
 *
 * Called From: 01F7:1A4A:002B:B2CA
 */
void f__01F7_1A5E_0022_58BB()
{
	emu_movb(&emu_cx.l, 0x6);
	emu_shlw(&emu_si, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x91));
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B));
	emu_cmpw(&emu_ax.x, emu_dx.x);
	if ((emu_flags.cf || emu_flags.zf)) { f__01F7_1A76_000A_D91E(); return; }
	emu_movw(&emu_si, emu_dx.x);
	emu_subw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x7B));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7B));
	emu_push(emu_cs);
	emu_push(0x1A80); emu_ip = 0x21DE; emu_last_cs = 0x01F7; emu_last_ip = 0x1A7D; emu_last_length = 0x0022; emu_last_crc = 0x58BB; emu_call(); // Jump does not resolve
	f__01F7_1A80_0014_CCE4();
}

/**
 * Decompiled function f__01F7_1A76_000A_D91E()
 *
 * @name f__01F7_1A76_000A_D91E
 * @implements 01F7:1A76:000A:D91E ()
 *
 * Called From: 01F7:1A6E:0022:58BB
 */
void f__01F7_1A76_000A_D91E()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7B));
	emu_push(emu_cs);
	emu_push(0x1A80); f__01F7_21DE_000D_9231();
	f__01F7_1A80_0014_CCE4();
}

/**
 * Decompiled function f__01F7_1A80_0014_CCE4()
 *
 * @name f__01F7_1A80_0014_CCE4
 * @implements 01F7:1A80:0014:CCE4 ()
 *
 * Called From: 01F7:1A80:000A:D91E
 */
void f__01F7_1A80_0014_CCE4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_cmpws(&emu_dx.x, 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x1A94; emu_last_cs = 0x01F7; emu_last_ip = 0x1A87; emu_last_length = 0x0014; emu_last_crc = 0xCCE4; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x6);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B04), emu_ax.x);
	f__01F7_1A4C_0012_1FF4(); return;
}

/**
 * Decompiled function f__01F7_1AA4_0005_CAB4()
 *
 * @name f__01F7_1AA4_0005_CAB4
 * @implements 01F7:1AA4:0005:CAB4 ()
 *
 * Called From: 01F7:1A5C:0012:1FF4
 * Called From: 01F7:1A5C:002B:B2CA
 */
void f__01F7_1AA4_0005_CAB4()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 4;
	return;
}

/**
 * Decompiled function f__01F7_1AA9_0014_FC63()
 *
 * @name f__01F7_1AA9_0014_FC63
 * @implements 01F7:1AA9:0014:FC63 ()
 *
 * Called From: 01F7:1669:000C:C6DC
 * Called From: 01F7:1669:0003:5F0F
 */
void f__01F7_1AA9_0014_FC63()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x89));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x87));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_push(0x1ABD); f__01F7_07B3_0021_4ED6();
	f__01F7_1ABD_0013_C371();
}

/**
 * Decompiled function f__01F7_1ABD_0013_C371()
 *
 * @name f__01F7_1ABD_0013_C371
 * @implements 01F7:1ABD:0013:C371 ()
 *
 * Called From: 01F7:1ABD:0014:FC63
 */
void f__01F7_1ABD_0013_C371()
{
	if (emu_flags.cf) { emu_ip = 0x1ADF; emu_last_cs = 0x01F7; emu_last_ip = 0x1ABD; emu_last_length = 0x0013; emu_last_crc = 0xC371; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x91));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x8F));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_push(0x1AD0); f__01F7_07B3_0021_4ED6();
	f__01F7_1AD0_000B_C818();
}

/**
 * Decompiled function f__01F7_1AD0_000B_C818()
 *
 * @name f__01F7_1AD0_000B_C818
 * @implements 01F7:1AD0:000B:C818 ()
 *
 * Called From: 01F7:1AD0:0013:C371
 */
void f__01F7_1AD0_000B_C818()
{
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1ADF; emu_last_cs = 0x01F7; emu_last_ip = 0x1AD0; emu_last_length = 0x000B; emu_last_crc = 0xC818; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_push(0x1ADB); f__01F7_1A33_002B_B2CA();
	f__01F7_1ADB_0009_7FFA();
}

/**
 * Decompiled function f__01F7_1ADB_0009_7FFA()
 *
 * @name f__01F7_1ADB_0009_7FFA
 * @implements 01F7:1ADB:0009:7FFA ()
 *
 * Called From: 01F7:1ADB:000B:C818
 */
void f__01F7_1ADB_0009_7FFA()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_1AE4_0004_0994(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x1AE6; emu_last_cs = 0x01F7; emu_last_ip = 0x1AE2; emu_last_length = 0x0009; emu_last_crc = 0x7FFA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1AE4_0004_0994()
 *
 * @name f__01F7_1AE4_0004_0994
 * @implements 01F7:1AE4:0004:0994 ()
 *
 * Called From: 01F7:1ADD:0009:7FFA
 */
void f__01F7_1AE4_0004_0994()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1AE8_0010_0EEE()
 *
 * @name f__01F7_1AE8_0010_0EEE
 * @implements 01F7:1AE8:0010:0EEE ()
 *
 * Called From: 01F7:1774:000D:8D0C
 * Called From: 01F7:17A6:0016:6ACD
 * Called From: 01F7:17E0:0015:8AC2
 * Called From: 01F7:1BD6:0007:FC7B
 */
void f__01F7_1AE8_0010_0EEE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8D));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x4);
	emu_push(0x1AF8); f__01F7_058B_0018_D9CF();
	f__01F7_1AF8_0021_2D85();
}

/**
 * Decompiled function f__01F7_1AF8_0021_2D85()
 *
 * @name f__01F7_1AF8_0021_2D85
 * @implements 01F7:1AF8:0021:2D85 ()
 *
 * Called From: 01F7:1AF8:0010:0EEE
 */
void f__01F7_1AF8_0021_2D85()
{
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8B));
	emu_adcws(&emu_dx.x, 0x0);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_adcw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_dx.x, 0xF);
	if ((emu_flags.sf != emu_flags.of)) { f__01F7_1B19_0010_8C34(); return; }
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1B11; emu_last_cs = 0x01F7; emu_last_ip = 0x1B0A; emu_last_length = 0x0021; emu_last_crc = 0x2D85; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0xFFFF);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1B19; emu_last_cs = 0x01F7; emu_last_ip = 0x1B0F; emu_last_length = 0x0021; emu_last_crc = 0x2D85; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0xFFFF);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x1B6F; emu_last_cs = 0x01F7; emu_last_ip = 0x1B17; emu_last_length = 0x0021; emu_last_crc = 0x2D85; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1B19_0010_8C34()
 *
 * @name f__01F7_1B19_0010_8C34
 * @implements 01F7:1B19:0010:8C34 ()
 *
 * Called From: 01F7:1B08:0021:2D85
 */
void f__01F7_1B19_0010_8C34()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x8D));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8B));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_push(0x1B29); f__01F7_05ED_0013_E7F6();
	f__01F7_1B29_0011_30D4();
}

/**
 * Decompiled function f__01F7_1B29_0011_30D4()
 *
 * @name f__01F7_1B29_0011_30D4
 * @implements 01F7:1B29:0011:30D4 ()
 *
 * Called From: 01F7:1B29:0010:8C34
 */
void f__01F7_1B29_0011_30D4()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x89));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x87));
	emu_push(0x1B3A); f__01F7_07B3_0021_4ED6();
	f__01F7_1B3A_0013_4292();
}

/**
 * Decompiled function f__01F7_1B3A_0013_4292()
 *
 * @name f__01F7_1B3A_0013_4292
 * @implements 01F7:1B3A:0013:4292 ()
 *
 * Called From: 01F7:1B3A:0011:30D4
 */
void f__01F7_1B3A_0013_4292()
{
	if (emu_flags.cf) { emu_ip = 0x1B11; emu_last_cs = 0x01F7; emu_last_ip = 0x1B3A; emu_last_length = 0x0013; emu_last_crc = 0x4292; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x91));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x8F));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(0x1B4D); f__01F7_07B3_0021_4ED6();
	f__01F7_1B4D_0018_3D83();
}

/**
 * Decompiled function f__01F7_1B4D_0018_3D83()
 *
 * @name f__01F7_1B4D_0018_3D83
 * @implements 01F7:1B4D:0018:3D83 ()
 *
 * Called From: 01F7:1B4D:0013:4292
 */
void f__01F7_1B4D_0018_3D83()
{
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1B11; emu_last_cs = 0x01F7; emu_last_ip = 0x1B4D; emu_last_length = 0x0018; emu_last_crc = 0x3D83; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8D));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x8B));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(0x1B65); f__01F7_1A33_002B_B2CA();
	f__01F7_1B65_000E_4C7C();
}

/**
 * Decompiled function f__01F7_1B65_000E_4C7C()
 *
 * @name f__01F7_1B65_000E_4C7C
 * @implements 01F7:1B65:000E:4C7C ()
 *
 * Called From: 01F7:1B65:0018:3D83
 */
void f__01F7_1B65_000E_4C7C()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x1B11; emu_last_cs = 0x01F7; emu_last_ip = 0x1B67; emu_last_length = 0x000E; emu_last_crc = 0x4C7C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1B73_0022_8ADB()
 *
 * @name f__01F7_1B73_0022_8ADB
 * @implements 01F7:1B73:0022:8ADB ()
 *
 * Called From: 23E1:0367:0005:F70A
 * Called From: 23E1:0418:0005:F70A
 */
void f__01F7_1B73_0022_8ADB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x91));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8F));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x8D));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x8B));
	emu_push(0x1B95); f__01F7_064D_0028_3537();
	f__01F7_1B95_002E_D9FA();
}

/**
 * Decompiled function f__01F7_1B95_002E_D9FA()
 *
 * @name f__01F7_1B95_002E_D9FA
 * @implements 01F7:1B95:002E:D9FA ()
 *
 * Called From: 01F7:1B95:0022:8ADB
 */
void f__01F7_1B95_002E_D9FA()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.cf) { emu_ip = 0x1BB1; emu_last_cs = 0x01F7; emu_last_ip = 0x1B9F; emu_last_length = 0x002E; emu_last_crc = 0xD9FA; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_1BA9_001A_B724(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x10);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1BB1; emu_last_cs = 0x01F7; emu_last_ip = 0x1BA7; emu_last_length = 0x002E; emu_last_crc = 0xD9FA; emu_call(); return; } // Jump does not resolve
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x10);
	emu_sbbws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_andws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xF0);
	emu_andws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_1BA9_001A_B724()
 *
 * @name f__01F7_1BA9_001A_B724
 * @implements 01F7:1BA9:001A:B724 ()
 *
 * Called From: 01F7:1BA1:002E:D9FA
 */
void f__01F7_1BA9_001A_B724()
{
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x10);
	emu_sbbws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_andws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xF0);
	emu_andws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_1BC3_000F_9450()
 *
 * @name f__01F7_1BC3_000F_9450
 * @implements 01F7:1BC3:000F:9450 ()
 *
 * Called From: 23E1:033A:000B:CF65
 * Called From: 23E1:03E1:000B:CF65
 * Called From: B500:0069:0005:F701
 */
void f__01F7_1BC3_000F_9450()
{
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_bp);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_1BD2_0007_FC7B(); return; }
	emu_ip = 0x1CAD; emu_last_cs = 0x01F7; emu_last_ip = 0x1BCF; emu_last_length = 0x000F; emu_last_crc = 0x9450; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1BD2_0007_FC7B()
 *
 * @name f__01F7_1BD2_0007_FC7B
 * @implements 01F7:1BD2:0007:FC7B ()
 *
 * Called From: 01F7:1BCD:000F:9450
 */
void f__01F7_1BD2_0007_FC7B()
{
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_push(emu_bx.x);
	emu_push(emu_bx.x);
	emu_push(0x1BD9); f__01F7_1AE8_0010_0EEE();
	f__01F7_1BD9_000A_4A06();
}

/**
 * Decompiled function f__01F7_1BD9_000A_4A06()
 *
 * @name f__01F7_1BD9_000A_4A06
 * @implements 01F7:1BD9:000A:4A06 ()
 *
 * Called From: 01F7:1BD9:0007:FC7B
 */
void f__01F7_1BD9_000A_4A06()
{
	emu_addws(&emu_sp, 0x4);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__01F7_1BE3_0012_5F20(); return; }
	emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1BE0; emu_last_length = 0x000A; emu_last_crc = 0x4A06; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1BE3_0012_5F20()
 *
 * @name f__01F7_1BE3_0012_5F20
 * @implements 01F7:1BE3:0012:5F20 ()
 *
 * Called From: 01F7:1BDE:000A:4A06
 */
void f__01F7_1BE3_0012_5F20()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x1603));
	emu_movw(&emu_ds, emu_bx.x);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_cmpw(&emu_bx.x, emu_dx.x);
	if (emu_flags.zf) { f__01F7_1BF5_002F_3225(); return; }
	emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1BF2; emu_last_length = 0x0012; emu_last_crc = 0x5F20; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1BF5_002F_3225()
 *
 * @name f__01F7_1BF5_002F_3225
 * @implements 01F7:1BF5:002F:3225 ()
 *
 * Called From: 01F7:1BF0:0012:5F20
 */
void f__01F7_1BF5_002F_3225()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_movw(&emu_ds, emu_ax.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_movw(&emu_es, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2), 0x0);
	if (!emu_flags.zf) { f__01F7_1C24_0033_C8B8(); return; }
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_movw(&emu_si, emu_ds);
	emu_cmpw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x1603));
	if (emu_flags.zf) { emu_ip = 0x1C68; emu_last_cs = 0x01F7; emu_last_ip = 0x1C17; emu_last_length = 0x002F; emu_last_crc = 0x3225; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0x2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1C24; emu_last_cs = 0x01F7; emu_last_ip = 0x1C1F; emu_last_length = 0x002F; emu_last_crc = 0x3225; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C21; emu_last_length = 0x002F; emu_last_crc = 0x3225; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1C05_001F_2005()
 *
 * @name f__01F7_1C05_001F_2005
 * @implements 01F7:1C05:001F:2005 ()
 *
 * Called From: 01F7:1C66:000C:9198
 * Called From: 01F7:1C66:0011:EE81
 */
void f__01F7_1C05_001F_2005()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2), 0x0);
	if (!emu_flags.zf) { f__01F7_1C24_0033_C8B8(); return; }
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_movw(&emu_si, emu_ds);
	emu_cmpw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x1603));
	if (emu_flags.zf) { emu_ip = 0x1C68; emu_last_cs = 0x01F7; emu_last_ip = 0x1C17; emu_last_length = 0x001F; emu_last_crc = 0x2005; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0x2), 0x0);
	if (!emu_flags.zf) { f__01F7_1C24_0033_C8B8(); return; }
	emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C21; emu_last_length = 0x001F; emu_last_crc = 0x2005; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1C24_0033_C8B8()
 *
 * @name f__01F7_1C24_0033_C8B8
 * @implements 01F7:1C24:0033:C8B8 ()
 *
 * Called From: 01F7:1C0A:002F:3225
 * Called From: 01F7:1C0A:001F:2005
 * Called From: 01F7:1C1F:001F:2005
 */
void f__01F7_1C24_0033_C8B8()
{
	emu_movw(&emu_si, emu_ds);
	emu_movw(&emu_di, emu_es);
	emu_cmpw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x1603));
	if (emu_flags.zf) { f__01F7_1C68_0040_3BF5(); return; }
	emu_cmpw(&emu_si, emu_di);
	if (emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C31; emu_last_length = 0x0033; emu_last_crc = 0xC8B8; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C38; emu_last_length = 0x0033; emu_last_crc = 0xC8B8; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x1601));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C3F; emu_last_length = 0x0033; emu_last_crc = 0xC8B8; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x1603));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C46; emu_last_length = 0x0033; emu_last_crc = 0xC8B8; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0x2), 0x0);
	if (emu_flags.zf) { f__01F7_1C57_0011_EE81(); return; }
	emu_cmpw(&emu_get_memory16(emu_es, 0x00,  0x2), emu_si);
	f__01F7_1C5C_000C_9198(); return;
}

/**
 * Decompiled function f__01F7_1C57_0011_EE81()
 *
 * @name f__01F7_1C57_0011_EE81
 * @implements 01F7:1C57:0011:EE81 ()
 *
 * Called From: 01F7:1C4E:0033:C8B8
 */
void f__01F7_1C57_0011_EE81()
{
	emu_cmpw(&emu_get_memory16(emu_es, 0x00,  0x8), emu_si);
	if (!emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C5C; emu_last_length = 0x0011; emu_last_crc = 0xEE81; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ds, emu_di);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_movw(&emu_es, emu_di);
	f__01F7_1C05_001F_2005(); return;
}

/**
 * Decompiled function f__01F7_1C5C_000C_9198()
 *
 * @name f__01F7_1C5C_000C_9198
 * @implements 01F7:1C5C:000C:9198 ()
 *
 * Called From: 01F7:1C55:0033:C8B8
 */
void f__01F7_1C5C_000C_9198()
{
	if (!emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C5C; emu_last_length = 0x000C; emu_last_crc = 0x9198; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ds, emu_di);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_movw(&emu_es, emu_di);
	f__01F7_1C05_001F_2005(); return;
}

/**
 * Decompiled function f__01F7_1C68_0040_3BF5()
 *
 * @name f__01F7_1C68_0040_3BF5
 * @implements 01F7:1C68:0040:3BF5 ()
 *
 * Called From: 01F7:1C2D:0033:C8B8
 */
void f__01F7_1C68_0040_3BF5()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1605));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__01F7_1CB2_000C_D81E(); return; }
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C79; emu_last_length = 0x0040; emu_last_crc = 0x3BF5; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x1601));
	if (emu_flags.cf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C80; emu_last_length = 0x0040; emu_last_crc = 0x3BF5; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x1603));
	if (!emu_flags.cf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C87; emu_last_length = 0x0040; emu_last_crc = 0x3BF5; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00,  0x6));
	emu_movw(&emu_di, emu_es);
	emu_cmpw(&emu_di, emu_ax.x);
	if (emu_flags.zf) { f__01F7_1CB2_000C_D81E(); return; }
	emu_cmpw(&emu_si, emu_di);
	if (emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C99; emu_last_length = 0x0040; emu_last_crc = 0x3BF5; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_es, 0x00,  0x4), emu_si);
	if (!emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1CA0; emu_last_length = 0x0040; emu_last_crc = 0x3BF5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, emu_es);
	emu_movw(&emu_ds, emu_si);
	f__01F7_1C74_0034_7075(); return;
}

/**
 * Decompiled function f__01F7_1C74_0034_7075()
 *
 * @name f__01F7_1C74_0034_7075
 * @implements 01F7:1C74:0034:7075 ()
 *
 * Called From: 01F7:1CA6:0040:3BF5
 * Called From: 01F7:1CA6:0034:7075
 */
void f__01F7_1C74_0034_7075()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C79; emu_last_length = 0x0034; emu_last_crc = 0x7075; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x1601));
	if (emu_flags.cf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C80; emu_last_length = 0x0034; emu_last_crc = 0x7075; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x1603));
	if (!emu_flags.cf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C87; emu_last_length = 0x0034; emu_last_crc = 0x7075; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00,  0x6));
	emu_movw(&emu_di, emu_es);
	emu_cmpw(&emu_di, emu_ax.x);
	if (emu_flags.zf) { f__01F7_1CB2_000C_D81E(); return; }
	emu_cmpw(&emu_si, emu_di);
	if (emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C99; emu_last_length = 0x0034; emu_last_crc = 0x7075; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_es, 0x00,  0x4), emu_si);
	if (!emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1CA0; emu_last_length = 0x0034; emu_last_crc = 0x7075; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, emu_es);
	emu_movw(&emu_ds, emu_si);
	f__01F7_1C74_0034_7075(); return;
}

/**
 * Decompiled function f__01F7_1CB2_000C_D81E()
 *
 * @name f__01F7_1CB2_000C_D81E
 * @implements 01F7:1CB2:000C:D81E ()
 *
 * Called From: 01F7:1C6E:0040:3BF5
 * Called From: 01F7:1C95:0040:3BF5
 * Called From: 01F7:1C95:0034:7075
 */
void f__01F7_1CB2_000C_D81E()
{
	emu_cmpw(&emu_cx.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1CB4; emu_last_length = 0x000C; emu_last_crc = 0xD81E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);
	emu_pop(&emu_di);
	emu_pop(&emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_1DE5_0036_9480()
 *
 * @name f__01F7_1DE5_0036_9480
 * @implements 01F7:1DE5:0036:9480 ()
 *
 * Called From: 23E1:03A7:000A:15E0
 * Called From: 23E1:044C:000A:15E0
 * Called From: 23E1:044C:0022:89AF
 */
void f__01F7_1DE5_0036_9480()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_di, 0xF0);
	if (emu_flags.cf) { f__01F7_1DFA_0021_B5CE(); return; }
	emu_incw(&emu_bx.x);
	emu_subws(&emu_di, 0x10);
	emu_movw(&emu_ds, emu_bx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, emu_di,  0x2));
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x1E0E; emu_last_cs = 0x01F7; emu_last_ip = 0x1E01; emu_last_length = 0x0036; emu_last_crc = 0x9480; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x1603));
	if (emu_flags.zf) { emu_ip = 0x1E54; emu_last_cs = 0x01F7; emu_last_ip = 0x1E08; emu_last_length = 0x0036; emu_last_crc = 0x9480; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.zf) { emu_ip = 0x1E1B; emu_last_cs = 0x01F7; emu_last_ip = 0x1E0C; emu_last_length = 0x0036; emu_last_crc = 0x9480; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x1E4F; emu_last_cs = 0x01F7; emu_last_ip = 0x1E15; emu_last_length = 0x0036; emu_last_crc = 0x9480; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_es, emu_bx.x);
	emu_ip = 0x1E24; emu_last_cs = 0x01F7; emu_last_ip = 0x1E19; emu_last_length = 0x0036; emu_last_crc = 0x9480; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1DFA_0021_B5CE()
 *
 * @name f__01F7_1DFA_0021_B5CE
 * @implements 01F7:1DFA:0021:B5CE ()
 *
 * Called From: 01F7:1DF4:0036:9480
 */
void f__01F7_1DFA_0021_B5CE()
{
	emu_movw(&emu_ds, emu_bx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, emu_di,  0x2));
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { f__01F7_1E0E_000D_5F5C(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x1603));
	if (emu_flags.zf) { f__01F7_1E54_0008_66A0(); return; }
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.zf) { f__01F7_1E1B_0034_E354(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x1E4F; emu_last_cs = 0x01F7; emu_last_ip = 0x1E15; emu_last_length = 0x0021; emu_last_crc = 0xB5CE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_es, emu_bx.x);
	emu_ip = 0x1E24; emu_last_cs = 0x01F7; emu_last_ip = 0x1E19; emu_last_length = 0x0021; emu_last_crc = 0xB5CE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1E0E_000D_5F5C()
 *
 * @name f__01F7_1E0E_000D_5F5C
 * @implements 01F7:1E0E:000D:5F5C ()
 *
 * Called From: 01F7:1E01:0021:B5CE
 */
void f__01F7_1E0E_000D_5F5C()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x1E4F; emu_last_cs = 0x01F7; emu_last_ip = 0x1E15; emu_last_length = 0x000D; emu_last_crc = 0x5F5C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_es, emu_bx.x);
	f__01F7_1E24_002B_E69F(); return;
}

/**
 * Decompiled function f__01F7_1E1B_0034_E354()
 *
 * @name f__01F7_1E1B_0034_E354
 * @implements 01F7:1E1B:0034:E354 ()
 *
 * Called From: 01F7:1E0C:0021:B5CE
 */
void f__01F7_1E1B_0034_E354()
{
	emu_movw(&emu_es, emu_bx.x);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_es, 0x00,  0x0));
	emu_movw(&emu_es, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_di,  0x2), emu_es);
	emu_movw(&emu_get_memory16(emu_ds, emu_di,  0x0), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x0));
	emu_movw(&emu_bx.x, 0x10);
	emu_mulw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_di,  0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_di,  0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_di,  0x8), 0x0);
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0x2), 0x0);
	if (emu_flags.zf) { f__01F7_1E4A_0005_E1FA(); return; }
	emu_incw(&emu_get_memory16(emu_ds, emu_di,  0x8));
	emu_movw(&emu_ax.x, 0x2);
	f__01F7_1E57_0005_DEAA(); return;
}

/**
 * Decompiled function f__01F7_1E24_002B_E69F()
 *
 * @name f__01F7_1E24_002B_E69F
 * @implements 01F7:1E24:002B:E69F ()
 *
 * Called From: 01F7:1E19:000D:5F5C
 */
void f__01F7_1E24_002B_E69F()
{
	emu_movw(&emu_get_memory16(emu_ds, emu_di,  0x2), emu_es);
	emu_movw(&emu_get_memory16(emu_ds, emu_di,  0x0), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x0));
	emu_movw(&emu_bx.x, 0x10);
	emu_mulw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_di,  0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_di,  0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_di,  0x8), 0x0);
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0x2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x1E4A; emu_last_cs = 0x01F7; emu_last_ip = 0x1E45; emu_last_length = 0x002B; emu_last_crc = 0xE69F; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, emu_di,  0x8));
	emu_movw(&emu_ax.x, 0x2);
	f__01F7_1E57_0005_DEAA(); return;
}

/**
 * Decompiled function f__01F7_1E4A_0005_E1FA()
 *
 * @name f__01F7_1E4A_0005_E1FA
 * @implements 01F7:1E4A:0005:E1FA ()
 *
 * Called From: 01F7:1E45:0034:E354
 */
void f__01F7_1E4A_0005_E1FA()
{
	emu_movw(&emu_ax.x, 0x2);
	f__01F7_1E57_0005_DEAA(); return;
}

/**
 * Decompiled function f__01F7_1E54_0008_66A0()
 *
 * @name f__01F7_1E54_0008_66A0
 * @implements 01F7:1E54:0008:66A0 ()
 *
 * Called From: 01F7:1E08:0021:B5CE
 */
void f__01F7_1E54_0008_66A0()
{
	emu_movw(&emu_ax.x, 0x5);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_1E57_0005_DEAA()
 *
 * @name f__01F7_1E57_0005_DEAA
 * @implements 01F7:1E57:0005:DEAA ()
 *
 * Called From: 01F7:1E4D:002B:E69F
 * Called From: 01F7:1E4D:0034:E354
 * Called From: 01F7:1E4D:0005:E1FA
 */
void f__01F7_1E57_0005_DEAA()
{
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_1E5C_000E_B47A()
 *
 * @name f__01F7_1E5C_000E_B47A
 * @implements 01F7:1E5C:000E:B47A ()
 *
 * Called From: 2531:0024:0010:2000
 */
void f__01F7_1E5C_000E_B47A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1E6A); f__01F7_1EDE_0027_0D8F();
	f__01F7_1E6A_0004_BEB2();
}

/**
 * Decompiled function f__01F7_1E6A_0004_BEB2()
 *
 * @name f__01F7_1E6A_0004_BEB2
 * @implements 01F7:1E6A:0004:BEB2 ()
 *
 * Called From: 01F7:1E6A:000E:B47A
 */
void f__01F7_1E6A_0004_BEB2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_1EDE_0027_0D8F()
 *
 * @name f__01F7_1EDE_0027_0D8F
 * @implements 01F7:1EDE:0027:0D8F ()
 *
 * Called From: 01F7:1E67:000E:B47A
 */
void f__01F7_1EDE_0027_0D8F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x652A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x652C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x6532), 0x0);
	emu_movw(&emu_ax.x, 0x1F7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1E8A);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x24);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1F05); f__01F7_04CC_000E_D711();
	f__01F7_1F05_0005_6143();
}

/**
 * Decompiled function f__01F7_1F05_0005_6143()
 *
 * @name f__01F7_1F05_0005_6143
 * @implements 01F7:1F05:0005:6143 ()
 *
 * Called From: 01F7:1F05:0027:0D8F
 */
void f__01F7_1F05_0005_6143()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_1FB0_0010_CF18()
 *
 * @name f__01F7_1FB0_0010_CF18
 * @implements 01F7:1FB0:0010:CF18 ()
 *
 * Called From: 263B:001D:001C:9C72
 * Called From: 263B:0067:0024:9FBD
 * Called From: 263B:0067:0027:058F
 */
void f__01F7_1FB0_0010_CF18()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1FC0); f__01F7_0EFB_0020_CAA8();
	f__01F7_1FC0_001A_86D3();
}

/**
 * Decompiled function f__01F7_1FC0_001A_86D3()
 *
 * @name f__01F7_1FC0_001A_86D3
 * @implements 01F7:1FC0:001A:86D3 ()
 *
 * Called From: 01F7:1FC0:0010:CF18
 */
void f__01F7_1FC0_001A_86D3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1FDA); f__01F7_1FE1_005F_A74A();
	f__01F7_1FDA_0007_984A();
}

/**
 * Decompiled function f__01F7_1FDA_0007_984A()
 *
 * @name f__01F7_1FDA_0007_984A
 * @implements 01F7:1FDA:0007:984A ()
 *
 * Called From: 01F7:1FDA:001A:86D3
 */
void f__01F7_1FDA_0007_984A()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_1FE1_005F_A74A()
 *
 * @name f__01F7_1FE1_005F_A74A
 * @implements 01F7:1FE1:005F:A74A ()
 *
 * Called From: 01F7:1FD7:001A:86D3
 */
void f__01F7_1FE1_005F_A74A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_movw(&emu_cx.x, emu_bp - 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ss);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0xE), 0x55);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0xD), 0xCD);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0xC), emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xB), 0xCB5D);
	emu_cmpb(&emu_ax.l, 0x25);
	if (emu_flags.cf) { f__01F7_201F_0021_24DC(); return; }
	emu_cmpb(&emu_ax.l, 0x26);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x201F; emu_last_cs = 0x01F7; emu_last_ip = 0x200C; emu_last_length = 0x005F; emu_last_crc = 0xA74A; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0xB), 0x36);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x68F);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xCB5D);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ds, emu_si,  0x0));
	emu_push(emu_get_memory16(emu_ds, emu_si,  0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, emu_si,  0x2));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, emu_si,  0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_si,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ds, emu_si,  0xA));
	emu_movw(&emu_si, emu_get_memory16(emu_ds, emu_si,  0x8));
	emu_pop(&emu_ds);
	emu_pop(&emu_es);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x2040);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x203D; emu_last_length = 0x005F; emu_last_crc = 0xA74A;
			emu_call();
			return;
	}
	f__01F7_2040_0033_F011();
}

/**
 * Decompiled function f__01F7_201F_0021_24DC()
 *
 * @name f__01F7_201F_0021_24DC
 * @implements 01F7:201F:0021:24DC ()
 *
 * Called From: 01F7:2008:005F:A74A
 */
void f__01F7_201F_0021_24DC()
{
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ds, emu_si,  0x0));
	emu_push(emu_get_memory16(emu_ds, emu_si,  0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, emu_si,  0x2));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, emu_si,  0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_si,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ds, emu_si,  0xA));
	emu_movw(&emu_si, emu_get_memory16(emu_ds, emu_si,  0x8));
	emu_pop(&emu_ds);
	emu_pop(&emu_es);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x2040);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x3EEE0E82: f__3EEE_0E82_0003_4293(); break;
		case 0x3EEE0E86: f__3EEE_0E86_0003_4293(); break;
		case 0x3EEE0EB6: f__3EEE_0EB6_0003_4293(); break;
		case 0x3EEE0EBA: f__3EEE_0EBA_0003_4293(); break;
		case 0x3EEE0EC2: f__3EEE_0EC2_0003_4293(); break;
		case 0x3EEE0ECE: f__3EEE_0ECE_0003_4293(); break;
		case 0x3EEE0ED2: f__3EEE_0ED2_0003_4293(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x203D; emu_last_length = 0x0021; emu_last_crc = 0x24DC;
			emu_call();
			return;
	}
	f__01F7_2040_0033_F011();
}

/**
 * Decompiled function f__01F7_2040_0033_F011()
 *
 * @name f__01F7_2040_0033_F011
 * @implements 01F7:2040:0033:F011 ()
 *
 * Called From: 01F7:2040:0021:24DC
 */
void f__01F7_2040_0033_F011()
{
	emu_pushf();
	emu_pushf();
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_pop(&emu_get_memory16(emu_ds, emu_si,  0x0));
	emu_pop(&emu_get_memory16(emu_ds, emu_si,  0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_pop(&emu_get_memory16(emu_ds, emu_si,  0x8));
	emu_pop(&emu_get_memory16(emu_ds, emu_si,  0xE));
	emu_pop(&emu_get_memory16(emu_ds, emu_si,  0xC));
	emu_andws(&emu_get_memory16(emu_ds, emu_si,  0xC), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, emu_si,  0xA), emu_di);
	emu_movw(&emu_get_memory16(emu_ds, emu_si,  0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_si,  0x4), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_si,  0x2), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_si,  0x0), emu_ax.x);
	emu_pop(&emu_ds);
	if (emu_flags.zf) { emu_ip = 0x2074; emu_last_cs = 0x01F7; emu_last_ip = 0x206C; emu_last_length = 0x0033; emu_last_crc = 0xF011; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(0x2073); f__01F7_0675_0020_D684();
	f__01F7_2073_0007_F77E();
}

/**
 * Decompiled function f__01F7_2073_0007_F77E()
 *
 * @name f__01F7_2073_0007_F77E
 * @implements 01F7:2073:0007:F77E ()
 *
 * Called From: 01F7:2073:0033:F011
 */
void f__01F7_2073_0007_F77E()
{
	emu_pop(&emu_ax.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_207A_0014_31F0()
 *
 * @name f__01F7_207A_0014_31F0
 * @implements 01F7:207A:0014:31F0 ()
 *
 * Called From: 01F7:2ADA:0012:A5D7
 */
void f__01F7_207A_0014_31F0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.h, 0x44);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x208E); f__0070_0108_0005_E45B();
	f__01F7_208E_000D_E88D();
}

/**
 * Decompiled function f__01F7_208E_000D_E88D()
 *
 * @name f__01F7_208E_000D_E88D
 * @implements 01F7:208E:000D:E88D ()
 *
 * Called From: 01F7:208E:0014:31F0
 */
void f__01F7_208E_000D_E88D()
{
	emu_pop(&emu_ds);
	if (emu_flags.cf) { emu_ip = 0x209D; emu_last_cs = 0x01F7; emu_last_ip = 0x208F; emu_last_length = 0x000D; emu_last_crc = 0xE88D; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x209B; emu_last_cs = 0x01F7; emu_last_ip = 0x2095; emu_last_length = 0x000D; emu_last_crc = 0xE88D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_dx.x);
	f__01F7_20A1_0002_2597(); return;
}

/**
 * Decompiled function f__01F7_20A1_0002_2597()
 *
 * @name f__01F7_20A1_0002_2597
 * @implements 01F7:20A1:0002:2597 ()
 *
 * Called From: 01F7:2099:000D:E88D
 */
void f__01F7_20A1_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_20B5_0076_64ED()
 *
 * @name f__01F7_20B5_0076_64ED
 * @implements 01F7:20B5:0076:64ED ()
 *
 * Called From: 01F7:0229:0004:BEF7
 */
void f__01F7_20B5_0076_64ED()
{
	emu_pop(&emu_get_memory16(emu_ds, 0x00,  0x7B0C));
	emu_pop(&emu_get_memory16(emu_ds, 0x00,  0x7B0E));
	emu_pop(&emu_get_memory16(emu_ds, 0x00,  0x7B10));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x20B3), emu_ds);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B12), emu_si);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B14), emu_di);
	emu_cld();
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00,  0x7B));
	emu_movw(&emu_si, 0x80);
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_lodsb(emu_es);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_bp, emu_es);
	emu_xchgw(&emu_si, &emu_dx.x);
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x75));
	emu_incw(&emu_si);
	emu_incw(&emu_si);
	emu_movw(&emu_cx.x, 0x1);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7D), 0x3);
	if (emu_flags.cf) { emu_ip = 0x2101; emu_last_cs = 0x01F7; emu_last_ip = 0x20EE; emu_last_length = 0x0076; emu_last_crc = 0x64ED; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00,  0x77));
	emu_movw(&emu_di, emu_si);
	emu_movb(&emu_cx.l, 0x7F);
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_repne_scasb();
	if (emu_cx.x == 0) { emu_ip = 0x2170; emu_last_cs = 0x01F7; emu_last_ip = 0x20FC; emu_last_length = 0x0076; emu_last_crc = 0x64ED; emu_call(); return; } // Jump does not resolve
	emu_xorb(&emu_cx.l, 0x7F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_incw(&emu_ax.x);
	emu_andw(&emu_ax.x, 0xFFFE);
	emu_movw(&emu_di, emu_sp);
	emu_subw(&emu_di, emu_ax.x);
	if (emu_flags.cf) { emu_ip = 0x2170; emu_last_cs = 0x01F7; emu_last_ip = 0x210E; emu_last_length = 0x0076; emu_last_crc = 0x64ED; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_sp, emu_di);
	emu_push(emu_es);
	emu_pop(&emu_ds);
	emu_push(emu_ss);
	emu_pop(&emu_es);
	emu_push(emu_cx.x);
	emu_decw(&emu_cx.x);
	emu_rep_movsb(emu_ds);
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_stosb();
	emu_movw(&emu_ds, emu_bp);
	emu_xchgw(&emu_dx.x, &emu_si);
	emu_xchgw(&emu_cx.x, &emu_bx.x);
	emu_movw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_incw(&emu_bx.x);
	emu_push(0x212B); f__01F7_2148_0028_6CAC();
	f__01F7_212B_000B_1E2A();
}

/**
 * Decompiled function f__01F7_2128_0003_5D07()
 *
 * @name f__01F7_2128_0003_5D07
 * @implements 01F7:2128:0003:5D07 ()
 *
 * Called From: 01F7:2146:0004:8839
 */
void f__01F7_2128_0003_5D07()
{
	emu_push(0x212B); f__01F7_2148_0028_6CAC();
	f__01F7_212B_000B_1E2A();
}

/**
 * Decompiled function f__01F7_212B_000B_1E2A()
 *
 * @name f__01F7_212B_000B_1E2A
 * @implements 01F7:212B:000B:1E2A ()
 *
 * Called From: 01F7:212B:0076:64ED
 * Called From: 01F7:212B:0003:5D07
 */
void f__01F7_212B_000B_1E2A()
{
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_2138_0010_D825(); return; }
	if (emu_flags.cf) { f__01F7_2175_0069_3297(); return; }
	emu_cmpb(&emu_ax.l, 0xD);
	if (emu_flags.zf) { emu_ip = 0x2144; emu_last_cs = 0x01F7; emu_last_ip = 0x2131; emu_last_length = 0x000B; emu_last_crc = 0x1E2A; emu_call(); return; } // Jump does not resolve
	emu_push(0x2136); emu_ip = 0x2148; emu_last_cs = 0x01F7; emu_last_ip = 0x2133; emu_last_length = 0x000B; emu_last_crc = 0x1E2A; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_2138_0010_D825()
 *
 * @name f__01F7_2138_0010_D825
 * @implements 01F7:2138:0010:D825 ()
 *
 * Called From: 01F7:212B:000B:1E2A
 */
void f__01F7_2138_0010_D825()
{
	emu_cmpb(&emu_ax.l, 0x20);
	if (emu_flags.zf) { emu_ip = 0x2144; emu_last_cs = 0x01F7; emu_last_ip = 0x213A; emu_last_length = 0x0010; emu_last_crc = 0xD825; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0xD);
	if (emu_flags.zf) { f__01F7_2144_0004_8839(); return; }
	emu_cmpb(&emu_ax.l, 0x9);
	if (!emu_flags.zf) { emu_ip = 0x2128; emu_last_cs = 0x01F7; emu_last_ip = 0x2142; emu_last_length = 0x0010; emu_last_crc = 0xD825; emu_call(); return; } // Jump does not resolve
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_ip = 0x2128; emu_last_cs = 0x01F7; emu_last_ip = 0x2146; emu_last_length = 0x0010; emu_last_crc = 0xD825; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2144_0004_8839()
 *
 * @name f__01F7_2144_0004_8839
 * @implements 01F7:2144:0004:8839 ()
 *
 * Called From: 01F7:213E:0010:D825
 */
void f__01F7_2144_0004_8839()
{
	emu_xorb(&emu_ax.l, emu_ax.l);
	f__01F7_2128_0003_5D07(); return;
}

/**
 * Decompiled function f__01F7_2148_0028_6CAC()
 *
 * @name f__01F7_2148_0028_6CAC
 * @implements 01F7:2148:0028:6CAC ()
 *
 * Called From: 01F7:2128:0076:64ED
 * Called From: 01F7:2128:0003:5D07
 */
void f__01F7_2148_0028_6CAC()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__01F7_2153_001D_602A(); return; }
	emu_incw(&emu_dx.x);
	emu_stosb();
	emu_orb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { emu_ip = 0x2153; emu_last_cs = 0x01F7; emu_last_ip = 0x2150; emu_last_length = 0x0028; emu_last_crc = 0x6CAC; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_bx.x);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_stc();
	if (emu_cx.x == 0) { emu_ip = 0x216F; emu_last_cs = 0x01F7; emu_last_ip = 0x2158; emu_last_length = 0x0028; emu_last_crc = 0x6CAC; emu_call(); return; } // Jump does not resolve
	emu_lodsb(emu_ds);
	emu_decw(&emu_cx.x);
	emu_subb(&emu_ax.l, 0x22);
	if (emu_flags.zf) { emu_ip = 0x216F; emu_last_cs = 0x01F7; emu_last_ip = 0x215E; emu_last_length = 0x0028; emu_last_crc = 0x6CAC; emu_call(); return; } // Jump does not resolve
	emu_addb(&emu_ax.l, 0x22);
	emu_cmpb(&emu_ax.l, 0x5C);
	if (!emu_flags.zf) { emu_ip = 0x216D; emu_last_cs = 0x01F7; emu_last_ip = 0x2164; emu_last_length = 0x0028; emu_last_crc = 0x6CAC; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_ds, emu_si,  0x0), 0x22);
	if (!emu_flags.zf) { emu_ip = 0x216D; emu_last_cs = 0x01F7; emu_last_ip = 0x2169; emu_last_length = 0x0028; emu_last_crc = 0x6CAC; emu_call(); return; } // Jump does not resolve
	emu_lodsb(emu_ds);
	emu_decw(&emu_cx.x);
	emu_orw(&emu_si, emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_2153_001D_602A()
 *
 * @name f__01F7_2153_001D_602A
 * @implements 01F7:2153:001D:602A ()
 *
 * Called From: 01F7:214A:0028:6CAC
 */
void f__01F7_2153_001D_602A()
{
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_stc();
	if (emu_cx.x == 0) { f__01F7_216F_0001_6180(); return; }
	emu_lodsb(emu_ds);
	emu_decw(&emu_cx.x);
	emu_subb(&emu_ax.l, 0x22);
	if (emu_flags.zf) { emu_ip = 0x216F; emu_last_cs = 0x01F7; emu_last_ip = 0x215E; emu_last_length = 0x001D; emu_last_crc = 0x602A; emu_call(); return; } // Jump does not resolve
	emu_addb(&emu_ax.l, 0x22);
	emu_cmpb(&emu_ax.l, 0x5C);
	if (!emu_flags.zf) { f__01F7_216D_0003_E0DD(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, emu_si,  0x0), 0x22);
	if (!emu_flags.zf) { emu_ip = 0x216D; emu_last_cs = 0x01F7; emu_last_ip = 0x2169; emu_last_length = 0x001D; emu_last_crc = 0x602A; emu_call(); return; } // Jump does not resolve
	emu_lodsb(emu_ds);
	emu_decw(&emu_cx.x);
	emu_orw(&emu_si, emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_216D_0003_E0DD()
 *
 * @name f__01F7_216D_0003_E0DD
 * @implements 01F7:216D:0003:E0DD ()
 *
 * Called From: 01F7:2164:001D:602A
 */
void f__01F7_216D_0003_E0DD()
{
	emu_orw(&emu_si, emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_216F_0001_6180()
 *
 * @name f__01F7_216F_0001_6180
 * @implements 01F7:216F:0001:6180 ()
 *
 * Called From: 01F7:2158:001D:602A
 */
void f__01F7_216F_0001_6180()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_2175_0069_3297()
 *
 * @name f__01F7_2175_0069_3297
 * @implements 01F7:2175:0069:3297 ()
 *
 * Called From: 01F7:212D:000B:1E2A
 */
void f__01F7_2175_0069_3297()
{
	emu_pop(&emu_cx.x);
	emu_addw(&emu_cx.x, emu_dx.x);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x20B3));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B06), emu_bx.x);
	emu_incw(&emu_bx.x);
	emu_addw(&emu_bx.x, emu_bx.x);
	emu_addw(&emu_bx.x, emu_bx.x);
	emu_movw(&emu_si, emu_sp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_bp, emu_bx.x);
	if (emu_flags.cf) { emu_ip = 0x2170; emu_last_cs = 0x01F7; emu_last_ip = 0x218C; emu_last_length = 0x0069; emu_last_crc = 0x3297; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_sp, emu_bp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B08), emu_bp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B0A), emu_ss);
	if (emu_cx.x == 0) { emu_ip = 0x21AB; emu_last_cs = 0x01F7; emu_last_ip = 0x2198; emu_last_length = 0x0069; emu_last_crc = 0x3297; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x0), emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), emu_ss);
	emu_addws(&emu_bp, 0x4);
	emu_lodsb(emu_ss);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (--emu_cx.x != 0 && !emu_flags.zf) { f__01F7_21A3_003B_3DB6(); return; }
	if (emu_flags.zf) { emu_ip = 0x2198; emu_last_cs = 0x01F7; emu_last_ip = 0x21A9; emu_last_length = 0x0069; emu_last_crc = 0x3297; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), emu_ax.x);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x20B3));
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x7B12));
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x7B14));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7B10));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7B0E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B06));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6B), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B0A));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6F), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B08));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D), emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x7B0C);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x21DA; emu_last_length = 0x0069; emu_last_crc = 0x3297;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__01F7_2198_0046_47E9()
 *
 * @name f__01F7_2198_0046_47E9
 * @implements 01F7:2198:0046:47E9 ()
 *
 * Called From: 01F7:21A9:003B:3DB6
 */
void f__01F7_2198_0046_47E9()
{
	if (emu_cx.x == 0) { f__01F7_21AB_0033_2CD8(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x0), emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), emu_ss);
	emu_addws(&emu_bp, 0x4);
	emu_lodsb(emu_ss);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (--emu_cx.x != 0 && !emu_flags.zf) { emu_ip = 0x21A3; emu_last_cs = 0x01F7; emu_last_ip = 0x21A7; emu_last_length = 0x0046; emu_last_crc = 0x47E9; emu_call(); } // Jump does not resolve
	if (emu_flags.zf) { emu_ip = 0x2198; emu_last_cs = 0x01F7; emu_last_ip = 0x21A9; emu_last_length = 0x0046; emu_last_crc = 0x47E9; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), emu_ax.x);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x20B3));
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x7B12));
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x7B14));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7B10));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7B0E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B06));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6B), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B0A));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6F), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B08));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D), emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x7B0C);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x21DA; emu_last_length = 0x0046; emu_last_crc = 0x47E9;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__01F7_21A3_003B_3DB6()
 *
 * @name f__01F7_21A3_003B_3DB6
 * @implements 01F7:21A3:003B:3DB6 ()
 *
 * Called From: 01F7:21A7:0069:3297
 * Called From: 01F7:21A7:003B:3DB6
 */
void f__01F7_21A3_003B_3DB6()
{
	emu_lodsb(emu_ss);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (--emu_cx.x != 0 && !emu_flags.zf) { f__01F7_21A3_003B_3DB6(); return; }
	if (emu_flags.zf) { f__01F7_2198_0046_47E9(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), emu_ax.x);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x20B3));
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x7B12));
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x7B14));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7B10));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7B0E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B06));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6B), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B0A));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6F), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B08));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D), emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x7B0C);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x21DA; emu_last_length = 0x003B; emu_last_crc = 0x3DB6;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__01F7_21AB_0033_2CD8()
 *
 * @name f__01F7_21AB_0033_2CD8
 * @implements 01F7:21AB:0033:2CD8 ()
 *
 * Called From: 01F7:2198:0046:47E9
 */
void f__01F7_21AB_0033_2CD8()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), emu_ax.x);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x20B3));
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x7B12));
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x7B14));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7B10));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7B0E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B06));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6B), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B0A));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6F), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B08));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D), emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x7B0C);
	switch (emu_ip) {
		case 0x022D: f__01F7_022D_0003_9E5A(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x21DA; emu_last_length = 0x0033; emu_last_crc = 0x2CD8;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__01F7_21DE_000D_9231()
 *
 * @name f__01F7_21DE_000D_9231
 * @implements 01F7:21DE:000D:9231 ()
 *
 * Called From: 01F7:1A7D:000A:D91E
 */
void f__01F7_21DE_000D_9231()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_ax.h, 0x4A);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x21EB); f__0070_0108_0005_E45B();
	f__01F7_21EB_0007_3DF1();
}

/**
 * Decompiled function f__01F7_21EB_0007_3DF1()
 *
 * @name f__01F7_21EB_0007_3DF1
 * @implements 01F7:21EB:0007:3DF1 ()
 *
 * Called From: 01F7:21EB:000D:9231
 */
void f__01F7_21EB_0007_3DF1()
{
	if (emu_flags.cf) { emu_ip = 0x21F2; emu_last_cs = 0x01F7; emu_last_ip = 0x21EB; emu_last_length = 0x0007; emu_last_crc = 0x3DF1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xFFFF);
	f__01F7_21F8_0002_2597(); return;
}

/**
 * Decompiled function f__01F7_21F8_0002_2597()
 *
 * @name f__01F7_21F8_0002_2597
 * @implements 01F7:21F8:0002:2597 ()
 *
 * Called From: 01F7:21F0:0007:3DF1
 */
void f__01F7_21F8_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_21FA_0012_B06A()
 *
 * @name f__01F7_21FA_0012_B06A
 * @implements 01F7:21FA:0012:B06A ()
 *
 * Called From: 01F7:0229:0004:BEF7
 */
void f__01F7_21FA_0012_B06A()
{
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00,  0x77));
	emu_xorw(&emu_di, emu_di);
	emu_push(emu_es);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x79));
	emu_push(emu_cs);
	emu_push(0x220C); f__01F7_184B_000A_9146();
	f__01F7_220C_0017_0F59();
}

/**
 * Decompiled function f__01F7_220C_0017_0F59()
 *
 * @name f__01F7_220C_0017_0F59
 * @implements 01F7:220C:0017:0F59 ()
 *
 * Called From: 01F7:220C:0012:B06A
 */
void f__01F7_220C_0017_0F59()
{
	emu_pop(&emu_bx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B18), emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_dx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__01F7_2223_002F_EF0A(); return; }
	emu_ip = 0x027A; emu_last_cs = 0x01F7; emu_last_ip = 0x2220; emu_last_length = 0x0017; emu_last_crc = 0x0F59; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2223_002F_EF0A()
 *
 * @name f__01F7_2223_002F_EF0A
 * @implements 01F7:2223:002F:EF0A ()
 *
 * Called From: 01F7:221C:0017:0F59
 */
void f__01F7_2223_002F_EF0A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_cx.x, 0xFFFF);
	emu_cmpb(&emu_get_memory8(emu_es, emu_di,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x223D; emu_last_cs = 0x01F7; emu_last_ip = 0x222C; emu_last_length = 0x002F; emu_last_crc = 0xEF0A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x0), emu_di);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x2), emu_es);
	emu_addws(&emu_bx.x, 0x4);
	emu_repne_scasb();
	emu_cmpb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	if (!emu_flags.zf) { f__01F7_222E_0024_4959(); return; }
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x2), emu_ax.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B18));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x73), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B16));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x71), emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_222E_0024_4959()
 *
 * @name f__01F7_222E_0024_4959
 * @implements 01F7:222E:0024:4959 ()
 *
 * Called From: 01F7:223B:002F:EF0A
 * Called From: 01F7:223B:0024:4959
 */
void f__01F7_222E_0024_4959()
{
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x0), emu_di);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x2), emu_es);
	emu_addws(&emu_bx.x, 0x4);
	emu_repne_scasb();
	emu_cmpb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	if (!emu_flags.zf) { f__01F7_222E_0024_4959(); return; }
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x2), emu_ax.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B18));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x73), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B16));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x71), emu_ax.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_2252_0045_03CB()
 *
 * @name f__01F7_2252_0045_03CB
 * @implements 01F7:2252:0045:03CB ()
 *
 * Called From: B4B5:03FB:000F:A0F4
 * Called From: B4B5:04B7:000A:882F
 * Called From: B4B5:04FB:000A:882F
 * Called From: B4B5:0529:000A:882F
 * Called From: B4B5:0754:000F:A0F4
 * Called From: B4B5:07E8:000A:882F
 * Called From: B4B5:0807:000A:882F
 * Called From: B4B5:0A9C:000B:0225
 * Called From: B4B5:0B40:000B:0225
 * Called From: B4B5:0CA8:000B:3223
 * Called From: B4B5:1037:000E:3FBC
 * Called From: B4FC:0048:000D:B649
 * Called From: B503:0D4C:0017:BC75
 * Called From: B503:0D4C:000E:7F53
 */
void f__01F7_2252_0045_03CB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_push(emu_bp);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cld();
	emu_subw(&emu_ax.x, emu_ax.x);
	emu_cwd();
	emu_movw(&emu_cx.x, 0xA);
	emu_movb(&emu_bx.h, 0x0);
	emu_movw(&emu_di, 0x76BD);
	emu_movb(&emu_bx.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_incw(&emu_si);
	emu_testb(&emu_get_memory8(emu_ds, emu_bx.x + emu_di,  0x0), 0x1);
	if (!emu_flags.zf) { f__01F7_2268_002F_CA14(); return; }
	emu_movw(&emu_bp, 0x0);
	emu_cmpb(&emu_bx.l, 0x2B);
	if (emu_flags.zf) { emu_ip = 0x227F; emu_last_cs = 0x01F7; emu_last_ip = 0x2277; emu_last_length = 0x0045; emu_last_crc = 0x03CB; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_bx.l, 0x2D);
	if (!emu_flags.zf) { f__01F7_2283_0014_C5BB(); return; }
	emu_incw(&emu_bp);
	emu_movb(&emu_bx.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_incw(&emu_si);
	emu_cmpb(&emu_bx.l, 0x39);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x22B7; emu_last_cs = 0x01F7; emu_last_ip = 0x2286; emu_last_length = 0x0045; emu_last_crc = 0x03CB; emu_call(); return; } // Jump does not resolve
	emu_subb(&emu_bx.l, 0x30);
	if (emu_flags.cf) { emu_ip = 0x22B7; emu_last_cs = 0x01F7; emu_last_ip = 0x228B; emu_last_length = 0x0045; emu_last_crc = 0x03CB; emu_call(); return; } // Jump does not resolve
	emu_mulw(&emu_ax.x, emu_cx.x);
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_adcb(&emu_dx.l, emu_dx.h);
	if (emu_flags.zf) { f__01F7_227F_0018_909F(); return; }
	emu_ip = 0x22A9; emu_last_cs = 0x01F7; emu_last_ip = 0x2295; emu_last_length = 0x0045; emu_last_crc = 0x03CB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2268_002F_CA14()
 *
 * @name f__01F7_2268_002F_CA14
 * @implements 01F7:2268:002F:CA14 ()
 *
 * Called From: 01F7:226F:0045:03CB
 */
void f__01F7_2268_002F_CA14()
{
	emu_movb(&emu_bx.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_incw(&emu_si);
	emu_testb(&emu_get_memory8(emu_ds, emu_bx.x + emu_di,  0x0), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x2268; emu_last_cs = 0x01F7; emu_last_ip = 0x226F; emu_last_length = 0x002F; emu_last_crc = 0xCA14; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bp, 0x0);
	emu_cmpb(&emu_bx.l, 0x2B);
	if (emu_flags.zf) { emu_ip = 0x227F; emu_last_cs = 0x01F7; emu_last_ip = 0x2277; emu_last_length = 0x002F; emu_last_crc = 0xCA14; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_bx.l, 0x2D);
	if (!emu_flags.zf) { f__01F7_2283_0014_C5BB(); return; }
	emu_incw(&emu_bp);
	emu_movb(&emu_bx.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_incw(&emu_si);
	emu_cmpb(&emu_bx.l, 0x39);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x22B7; emu_last_cs = 0x01F7; emu_last_ip = 0x2286; emu_last_length = 0x002F; emu_last_crc = 0xCA14; emu_call(); return; } // Jump does not resolve
	emu_subb(&emu_bx.l, 0x30);
	if (emu_flags.cf) { emu_ip = 0x22B7; emu_last_cs = 0x01F7; emu_last_ip = 0x228B; emu_last_length = 0x002F; emu_last_crc = 0xCA14; emu_call(); return; } // Jump does not resolve
	emu_mulw(&emu_ax.x, emu_cx.x);
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_adcb(&emu_dx.l, emu_dx.h);
	if (emu_flags.zf) { emu_ip = 0x227F; emu_last_cs = 0x01F7; emu_last_ip = 0x2293; emu_last_length = 0x002F; emu_last_crc = 0xCA14; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x22A9; emu_last_cs = 0x01F7; emu_last_ip = 0x2295; emu_last_length = 0x002F; emu_last_crc = 0xCA14; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_227F_0018_909F()
 *
 * @name f__01F7_227F_0018_909F
 * @implements 01F7:227F:0018:909F ()
 *
 * Called From: 01F7:2293:0014:C5BB
 * Called From: 01F7:2293:0018:909F
 * Called From: 01F7:2293:0045:03CB
 */
void f__01F7_227F_0018_909F()
{
	emu_movb(&emu_bx.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_incw(&emu_si);
	emu_cmpb(&emu_bx.l, 0x39);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x22B7; emu_last_cs = 0x01F7; emu_last_ip = 0x2286; emu_last_length = 0x0018; emu_last_crc = 0x909F; emu_call(); return; } // Jump does not resolve
	emu_subb(&emu_bx.l, 0x30);
	if (emu_flags.cf) { f__01F7_22B7_0010_6BC2(); return; }
	emu_mulw(&emu_ax.x, emu_cx.x);
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_adcb(&emu_dx.l, emu_dx.h);
	if (emu_flags.zf) { f__01F7_227F_0018_909F(); return; }
	emu_ip = 0x22A9; emu_last_cs = 0x01F7; emu_last_ip = 0x2295; emu_last_length = 0x0018; emu_last_crc = 0x909F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2283_0014_C5BB()
 *
 * @name f__01F7_2283_0014_C5BB
 * @implements 01F7:2283:0014:C5BB ()
 *
 * Called From: 01F7:227C:0045:03CB
 * Called From: 01F7:227C:002F:CA14
 */
void f__01F7_2283_0014_C5BB()
{
	emu_cmpb(&emu_bx.l, 0x39);
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_22B7_0010_6BC2(); return; }
	emu_subb(&emu_bx.l, 0x30);
	if (emu_flags.cf) { emu_ip = 0x22B7; emu_last_cs = 0x01F7; emu_last_ip = 0x228B; emu_last_length = 0x0014; emu_last_crc = 0xC5BB; emu_call(); return; } // Jump does not resolve
	emu_mulw(&emu_ax.x, emu_cx.x);
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_adcb(&emu_dx.l, emu_dx.h);
	if (emu_flags.zf) { f__01F7_227F_0018_909F(); return; }
	emu_ip = 0x22A9; emu_last_cs = 0x01F7; emu_last_ip = 0x2295; emu_last_length = 0x0014; emu_last_crc = 0xC5BB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_22B7_0010_6BC2()
 *
 * @name f__01F7_22B7_0010_6BC2
 * @implements 01F7:22B7:0010:6BC2 ()
 *
 * Called From: 01F7:2286:0014:C5BB
 * Called From: 01F7:228B:0018:909F
 */
void f__01F7_22B7_0010_6BC2()
{
	emu_decw(&emu_bp);
	if ((emu_flags.sf != emu_flags.of)) { f__01F7_22C1_0006_AA6B(); return; }
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbws(&emu_dx.x, 0x0);
	emu_pop(&emu_bp);
	emu_pop(&emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_22C1_0006_AA6B()
 *
 * @name f__01F7_22C1_0006_AA6B
 * @implements 01F7:22C1:0006:AA6B ()
 *
 * Called From: 01F7:22B8:0010:6BC2
 */
void f__01F7_22C1_0006_AA6B()
{
	emu_pop(&emu_bp);
	emu_pop(&emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_22E8_0011_1764()
 *
 * @name f__01F7_22E8_0011_1764
 * @implements 01F7:22E8:0011:1764 ()
 *
 * Called From: 01F7:2A2D:000E:9A13
 */
void f__01F7_22E8_0011_1764()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movb(&emu_ax.h, 0x43);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x22F9); f__0070_0108_0005_E45B();
	f__01F7_22F9_0006_9F8A();
}

/**
 * Decompiled function f__01F7_22F9_0006_9F8A()
 *
 * @name f__01F7_22F9_0006_9F8A
 * @implements 01F7:22F9:0006:9F8A ()
 *
 * Called From: 01F7:22F9:0011:1764
 */
void f__01F7_22F9_0006_9F8A()
{
	emu_pop(&emu_ds);
	if (emu_flags.cf) { f__01F7_22FF_0004_EC99(); return; }
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	f__01F7_2303_0002_2597(); return;
}

/**
 * Decompiled function f__01F7_22FF_0004_EC99()
 *
 * @name f__01F7_22FF_0004_EC99
 * @implements 01F7:22FF:0004:EC99 ()
 *
 * Called From: 01F7:22FA:0006:9F8A
 */
void f__01F7_22FF_0004_EC99()
{
	emu_push(emu_ax.x);
	emu_push(0x2303); f__01F7_0675_0020_D684();
	f__01F7_2303_0002_2597();
}

/**
 * Decompiled function f__01F7_2303_0002_2597()
 *
 * @name f__01F7_2303_0002_2597
 * @implements 01F7:2303:0002:2597 ()
 *
 * Called From: 01F7:22FD:0006:9F8A
 * Called From: 01F7:2303:0004:EC99
 */
void f__01F7_2303_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_23CC_0013_6B52()
 *
 * @name f__01F7_23CC_0013_6B52
 * @implements 01F7:23CC:0013:6B52 ()
 *
 * Called From: 1DB6:00C0:000F:5886
 * Called From: 1FB5:0054:0012:2389
 * Called From: 24E6:00AD:000C:1590
 * Called From: 261F:019A:001A:54D2
 */
void f__01F7_23CC_0013_6B52()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x795A));
	if (emu_flags.cf) { f__01F7_23E1_0010_A514(); return; }
	emu_movw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_push(0x23DF); emu_ip = 0x0675; emu_last_cs = 0x01F7; emu_last_ip = 0x23DC; emu_last_length = 0x0013; emu_last_crc = 0x6B52; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_23E1_0010_A514()
 *
 * @name f__01F7_23E1_0010_A514
 * @implements 01F7:23E1:0010:A514 ()
 *
 * Called From: 01F7:23D6:0013:6B52
 */
void f__01F7_23E1_0010_A514()
{
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x0);
	emu_push(emu_dx.x);
	emu_push(emu_cs);
	emu_push(0x23F1); f__01F7_23F4_000A_3443();
	f__01F7_23F1_0003_2EB7();
}

/**
 * Decompiled function f__01F7_23F1_0003_2EB7()
 *
 * @name f__01F7_23F1_0003_2EB7
 * @implements 01F7:23F1:0003:2EB7 ()
 *
 * Called From: 01F7:23F1:0010:A514
 */
void f__01F7_23F1_0003_2EB7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_23F4_000A_3443()
 *
 * @name f__01F7_23F4_000A_3443
 * @implements 01F7:23F4:000A:3443 ()
 *
 * Called From: 01F7:23EE:0010:A514
 */
void f__01F7_23F4_000A_3443()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_ax.h, 0x3E);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x23FE); f__0070_0108_0005_E45B();
	f__01F7_23FE_000E_0B8C();
}

/**
 * Decompiled function f__01F7_23FE_000E_0B8C()
 *
 * @name f__01F7_23FE_000E_0B8C
 * @implements 01F7:23FE:000E:0B8C ()
 *
 * Called From: 01F7:23FE:000A:3443
 */
void f__01F7_23FE_000E_0B8C()
{
	if (emu_flags.cf) { emu_ip = 0x240C; emu_last_cs = 0x01F7; emu_last_ip = 0x23FE; emu_last_length = 0x000E; emu_last_crc = 0x0B8C; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__01F7_2410_0002_2597(); return;
}

/**
 * Decompiled function f__01F7_2410_0002_2597()
 *
 * @name f__01F7_2410_0002_2597
 * @implements 01F7:2410:0002:2597 ()
 *
 * Called From: 01F7:240A:000E:0B8C
 */
void f__01F7_2410_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2412_0011_FC80()
 *
 * @name f__01F7_2412_0011_FC80
 * @implements 01F7:2412:0011:FC80 ()
 *
 * Called From: 01F7:44A9:0014:E159
 */
void f__01F7_2412_0011_FC80()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__01F7_2426_0012_574D(); return; }
	emu_push(emu_cs);
	emu_push(0x2423); emu_ip = 0x2520; emu_last_cs = 0x01F7; emu_last_ip = 0x2420; emu_last_length = 0x0011; emu_last_crc = 0xFC80; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_2426_0012_574D()
 *
 * @name f__01F7_2426_0012_574D
 * @implements 01F7:2426:0012:574D ()
 *
 * Called From: 01F7:241C:0011:FC80
 */
void f__01F7_2426_0012_574D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_flags.zf) { f__01F7_2438_0023_497F(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x24DC; emu_last_cs = 0x01F7; emu_last_ip = 0x2435; emu_last_length = 0x0012; emu_last_crc = 0x574D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2438_0023_497F()
 *
 * @name f__01F7_2438_0023_497F
 * @implements 01F7:2438:0023:497F ()
 *
 * Called From: 01F7:2430:0012:574D
 */
void f__01F7_2438_0023_497F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x2492; emu_last_cs = 0x01F7; emu_last_ip = 0x243F; emu_last_length = 0x0023; emu_last_crc = 0x497F; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { f__01F7_2461_002F_28DD(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addws(&emu_dx.x, 0x5);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__01F7_245B_0035_89F4(); return; }
	f__01F7_24DA_0005_2FC3(); return;
}

/**
 * Decompiled function f__01F7_245B_0035_89F4()
 *
 * @name f__01F7_245B_0035_89F4
 * @implements 01F7:245B:0035:89F4 ()
 *
 * Called From: 01F7:2456:0023:497F
 */
void f__01F7_245B_0035_89F4()
{
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x24DA; emu_last_cs = 0x01F7; emu_last_ip = 0x245F; emu_last_length = 0x0035; emu_last_crc = 0x89F4; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addws(&emu_dx.x, 0x5);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { emu_ip = 0x24DA; emu_last_cs = 0x01F7; emu_last_ip = 0x2476; emu_last_length = 0x0035; emu_last_crc = 0x89F4; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x24DA; emu_last_cs = 0x01F7; emu_last_ip = 0x247C; emu_last_length = 0x0035; emu_last_crc = 0x89F4; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	f__01F7_24DA_0005_2FC3(); return;
}

/**
 * Decompiled function f__01F7_2461_002F_28DD()
 *
 * @name f__01F7_2461_002F_28DD
 * @implements 01F7:2461:002F:28DD ()
 *
 * Called From: 01F7:2447:0023:497F
 */
void f__01F7_2461_002F_28DD()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addws(&emu_dx.x, 0x5);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__01F7_24DA_0005_2FC3(); return; }
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x24DA; emu_last_cs = 0x01F7; emu_last_ip = 0x247C; emu_last_length = 0x002F; emu_last_crc = 0x28DD; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	emu_ip = 0x24DA; emu_last_cs = 0x01F7; emu_last_ip = 0x248E; emu_last_length = 0x002F; emu_last_crc = 0x28DD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_24DA_0005_2FC3()
 *
 * @name f__01F7_24DA_0005_2FC3
 * @implements 01F7:24DA:0005:2FC3 ()
 *
 * Called From: 01F7:2458:0023:497F
 * Called From: 01F7:2476:002F:28DD
 * Called From: 01F7:248E:0035:89F4
 */
void f__01F7_24DA_0005_2FC3()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_276F_000F_E56B()
 *
 * @name f__01F7_276F_000F_E56B
 * @implements 01F7:276F:000F:E56B ()
 *
 * Called From: 1DB6:010B:0014:A7DD
 */
void f__01F7_276F_000F_E56B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x44);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x277E); f__01F7_0428_0010_87B4();
	f__01F7_277E_001A_E421();
}

/**
 * Decompiled function f__01F7_277E_001A_E421()
 *
 * @name f__01F7_277E_001A_E421
 * @implements 01F7:277E:001A:E421 ()
 *
 * Called From: 01F7:277E:000F:E56B
 */
void f__01F7_277E_001A_E421()
{
	emu_addb(&emu_ax.l, 0x41);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x44), emu_ax.l);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x43), 0x3A);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x42), 0x5C);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x41);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x2798); f__01F7_03E5_000F_055B();
	f__01F7_2798_000E_4377();
}

/**
 * Decompiled function f__01F7_2798_000E_4377()
 *
 * @name f__01F7_2798_000E_4377
 * @implements 01F7:2798:000E:4377 ()
 *
 * Called From: 01F7:2798:001A:E421
 */
void f__01F7_2798_000E_4377()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpw(&emu_ax.x, 0xFFFF);
	if (!emu_flags.zf) { f__01F7_27A6_000A_3382(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x27F8; emu_last_cs = 0x01F7; emu_last_ip = 0x27A4; emu_last_length = 0x000E; emu_last_crc = 0x4377; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_27A6_000A_3382()
 *
 * @name f__01F7_27A6_000A_3382
 * @implements 01F7:27A6:000A:3382 ()
 *
 * Called From: 01F7:279E:000E:4377
 */
void f__01F7_27A6_000A_3382()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x44);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x27B0); f__01F7_39A5_001F_1A5D();
	f__01F7_27B0_000E_BC7F();
}

/**
 * Decompiled function f__01F7_27B0_000E_BC7F()
 *
 * @name f__01F7_27B0_000E_BC7F
 * @implements 01F7:27B0:000E:BC7F ()
 *
 * Called From: 01F7:27B0:000A:3382
 */
void f__01F7_27B0_000E_BC7F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_si);
	if (emu_flags.cf) { f__01F7_27BE_000E_2F67(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7F), 0x22);
	emu_ip = 0x27A0; emu_last_cs = 0x01F7; emu_last_ip = 0x27BC; emu_last_length = 0x000E; emu_last_crc = 0xBC7F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_27BE_000E_2F67()
 *
 * @name f__01F7_27BE_000E_2F67
 * @implements 01F7:27BE:000E:2F67 ()
 *
 * Called From: 01F7:27B4:000E:BC7F
 */
void f__01F7_27BE_000E_2F67()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__01F7_27DF_0010_D57C(); return; }
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x27CC); emu_ip = 0x184B; emu_last_cs = 0x01F7; emu_last_ip = 0x27C9; emu_last_length = 0x000E; emu_last_crc = 0x2F67; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_27DF_0010_D57C()
 *
 * @name f__01F7_27DF_0010_D57C
 * @implements 01F7:27DF:0010:D57C ()
 *
 * Called From: 01F7:27C4:000E:2F67
 */
void f__01F7_27DF_0010_D57C()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x44);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x27EF); f__01F7_38F6_0029_8B99();
	f__01F7_27EF_000E_4F5C();
}

/**
 * Decompiled function f__01F7_27EF_000E_4F5C()
 *
 * @name f__01F7_27EF_000E_4F5C
 * @implements 01F7:27EF:000E:4F5C ()
 *
 * Called From: 01F7:27EF:0010:D57C
 */
void f__01F7_27EF_000E_4F5C()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_27FD_0037_E2C0()
 *
 * @name f__01F7_27FD_0037_E2C0
 * @implements 01F7:27FD:0037:E2C0 ()
 *
 * Called From: 01F7:4035:0011:8951
 */
void f__01F7_27FD_0037_E2C0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_es);
	emu_orw(&emu_ax.x, emu_di);
	if (emu_flags.zf) { emu_ip = 0x282E; emu_last_cs = 0x01F7; emu_last_ip = 0x280C; emu_last_length = 0x0037; emu_last_crc = 0xE2C0; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.h, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_movw(&emu_cx.x, 0xFFFF);
	emu_cld();
	emu_repne_scasb();
	emu_notw(&emu_cx.x, emu_cx.x);
	emu_decw(&emu_cx.x);
	if (emu_flags.zf) { emu_ip = 0x282E; emu_last_cs = 0x01F7; emu_last_ip = 0x281C; emu_last_length = 0x0037; emu_last_crc = 0xE2C0; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x7B16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_es);
	emu_movw(&emu_bx.x, emu_es);
	emu_orw(&emu_bx.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_di);
	if (!emu_flags.zf) { f__01F7_283B_0032_FBDE(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x2867; emu_last_cs = 0x01F7; emu_last_ip = 0x2832; emu_last_length = 0x0037; emu_last_crc = 0xE2C0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_282E_0006_3B29()
 *
 * @name f__01F7_282E_0006_3B29
 * @implements 01F7:282E:0006:3B29 ()
 *
 * Called From: 01F7:2842:0039:D5C0
 */
void f__01F7_282E_0006_3B29()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__01F7_2867_0006_F7CE(); return;
}

/**
 * Decompiled function f__01F7_2834_0039_D5C0()
 *
 * @name f__01F7_2834_0039_D5C0
 * @implements 01F7:2834:0039:D5C0 ()
 *
 * Called From: 01F7:284D:0032:FBDE
 * Called From: 01F7:284D:0039:D5C0
 */
void f__01F7_2834_0039_D5C0()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x4);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_es, emu_di,  0x0));
	emu_movw(&emu_bx.x, emu_es);
	emu_orw(&emu_bx.x, emu_di);
	if (emu_flags.zf) { f__01F7_282E_0006_3B29(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x282E; emu_last_cs = 0x01F7; emu_last_ip = 0x2849; emu_last_length = 0x0039; emu_last_crc = 0xD5C0; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.h, emu_ax.l);
	if (!emu_flags.zf) { f__01F7_2834_0039_D5C0(); return; }
	emu_movw(&emu_bx.x, emu_cx.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x + emu_di,  0x0), 0x3D);
	if (!emu_flags.zf) { emu_ip = 0x2834; emu_last_cs = 0x01F7; emu_last_ip = 0x2855; emu_last_length = 0x0039; emu_last_crc = 0xD5C0; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_rep_cmpsb(emu_ds);
	emu_pop(&emu_ds);
	emu_xchgw(&emu_bx.x, &emu_cx.x);
	if (!emu_flags.zf) { emu_ip = 0x2834; emu_last_cs = 0x01F7; emu_last_ip = 0x2860; emu_last_length = 0x0039; emu_last_crc = 0xD5C0; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_di);
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_283B_0032_FBDE()
 *
 * @name f__01F7_283B_0032_FBDE
 * @implements 01F7:283B:0032:FBDE ()
 *
 * Called From: 01F7:282C:0037:E2C0
 */
void f__01F7_283B_0032_FBDE()
{
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_es, emu_di,  0x0));
	emu_movw(&emu_bx.x, emu_es);
	emu_orw(&emu_bx.x, emu_di);
	if (emu_flags.zf) { emu_ip = 0x282E; emu_last_cs = 0x01F7; emu_last_ip = 0x2842; emu_last_length = 0x0032; emu_last_crc = 0xFBDE; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x282E; emu_last_cs = 0x01F7; emu_last_ip = 0x2849; emu_last_length = 0x0032; emu_last_crc = 0xFBDE; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.h, emu_ax.l);
	if (!emu_flags.zf) { f__01F7_2834_0039_D5C0(); return; }
	emu_movw(&emu_bx.x, emu_cx.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x + emu_di,  0x0), 0x3D);
	if (!emu_flags.zf) { emu_ip = 0x2834; emu_last_cs = 0x01F7; emu_last_ip = 0x2855; emu_last_length = 0x0032; emu_last_crc = 0xFBDE; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_rep_cmpsb(emu_ds);
	emu_pop(&emu_ds);
	emu_xchgw(&emu_bx.x, &emu_cx.x);
	if (!emu_flags.zf) { emu_ip = 0x2834; emu_last_cs = 0x01F7; emu_last_ip = 0x2860; emu_last_length = 0x0032; emu_last_crc = 0xFBDE; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_di);
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2867_0006_F7CE()
 *
 * @name f__01F7_2867_0006_F7CE
 * @implements 01F7:2867:0006:F7CE ()
 *
 * Called From: 01F7:2832:0006:3B29
 */
void f__01F7_2867_0006_F7CE()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_286D_0023_9A13()
 *
 * @name f__01F7_286D_0023_9A13
 * @implements 01F7:286D:0023:9A13 ()
 *
 * Called From: 1A34:1E49:0014:E870
 * Called From: 1A34:1E49:0015:EAB8
 * Called From: B4E9:0204:002D:A3B3
 */
void f__01F7_286D_0023_9A13()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_cx.x == 0) { emu_ip = 0x2881; emu_last_cs = 0x01F7; emu_last_ip = 0x2877; emu_last_length = 0x0023; emu_last_crc = 0x9A13; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_cld();
	emu_repne_scasb();
	if (emu_flags.zf) { f__01F7_2888_0008_580E(); return; }
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_es, emu_di);
	emu_movw(&emu_di, 0x1);
	emu_decw(&emu_di);
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2888_0008_580E()
 *
 * @name f__01F7_2888_0008_580E
 * @implements 01F7:2888:0008:580E ()
 *
 * Called From: 01F7:287F:0023:9A13
 */
void f__01F7_2888_0008_580E()
{
	emu_decw(&emu_di);
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_28B8_0024_83C9()
 *
 * @name f__01F7_28B8_0024_83C9
 * @implements 01F7:28B8:0024:83C9 ()
 *
 * Called From: 01F7:3767:001D:AA1B
 * Called From: 0642:05B2:0026:A299
 * Called From: 0642:05B2:0028:2879
 * Called From: 0642:05B2:002B:2BAE
 * Called From: 0642:077D:0014:FFCC
 * Called From: 0FE4:05E9:0034:78C1
 * Called From: 1319:0244:0028:703F
 * Called From: 176C:2035:001C:7FD5
 * Called From: 176C:2035:001F:0FEC
 * Called From: 1DB6:0050:0019:FD4E
 * Called From: 259E:00DD:0015:D443
 * Called From: B4B8:02F2:0015:4DA7
 * Called From: B4B8:05E8:0015:4DA7
 * Called From: B4B8:1707:0017:8515
 * Called From: B4C4:035B:0023:AC02
 * Called From: B4C4:0413:0024:34F7
 * Called From: B4C4:0498:0023:5C32
 * Called From: B4C4:061A:002C:3269
 * Called From: B4ED:00A9:001C:7E78
 * Called From: B4ED:0104:002E:CBCB
 * Called From: B4ED:0134:0016:7423
 * Called From: B4ED:06D3:001C:7CF8
 * Called From: B4ED:0879:0013:0001
 * Called From: B4ED:08D2:002C:7E4B
 * Called From: B4ED:09FB:0013:0001
 * Called From: B4ED:0B0E:001A:F677
 * Called From: B4ED:0BEA:001B:FFBA
 * Called From: B4FC:06AE:003A:FCA2
 * Called From: B4FC:06AE:003D:80DA
 * Called From: B4FC:073D:0022:AE11
 * Called From: B503:013E:001A:AA1B
 * Called From: B503:0169:002B:640D
 * Called From: B503:017F:0016:9A37
 * Called From: B503:053E:001A:2E3C
 * Called From: B503:119A:0015:612E
 * Called From: B503:13A0:0021:5375
 * Called From: B503:13A0:0027:FA79
 * Called From: B50B:034D:0014:33ED
 * Called From: B50B:03C8:0015:A7EC
 * Called From: B50B:044E:0014:3099
 * Called From: B50B:062F:002C:0256
 * Called From: B518:053C:001A:A983
 * Called From: B518:06C8:0029:41CB
 * Called From: B518:07C6:0013:9031
 * Called From: B518:088E:001E:C536
 * Called From: B518:08B1:001A:542C
 * Called From: B518:08C7:0016:0385
 * Called From: B518:0A85:001D:CF58
 * Called From: B518:0E04:0036:0F81
 */
void f__01F7_28B8_0024_83C9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_dx.x, emu_ds);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_shrw(&emu_cx.x, 0x1);
	emu_cld();
	emu_rep_movsw(emu_ds);
	if (!emu_flags.cf) { f__01F7_28D0_000C_A565(); return; }
	emu_movsb(emu_ds);
	emu_movw(&emu_ds, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_28D0_000C_A565()
 *
 * @name f__01F7_28D0_000C_A565
 * @implements 01F7:28D0:000C:A565 ()
 *
 * Called From: 01F7:28CD:0024:83C9
 */
void f__01F7_28D0_000C_A565()
{
	emu_movw(&emu_ds, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_28DC_0009_EE56()
 *
 * @name f__01F7_28DC_0009_EE56
 * @implements 01F7:28DC:0009:EE56 ()
 *
 * Called From: B4B5:06A4:0014:F457
 * Called From: B4FC:04AC:001B:F59D
 * Called From: B4FC:05D0:0027:BF9B
 */
void f__01F7_28DC_0009_EE56()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	f__01F7_2917_000C_A803(); return;
}

/**
 * Decompiled function f__01F7_28E5_000E_EFC0()
 *
 * @name f__01F7_28E5_000E_EFC0
 * @implements 01F7:28E5:000E:EFC0 ()
 *
 * Called From: 01F7:291C:000C:A803
 * Called From: 01F7:291C:0012:E423
 */
void f__01F7_28E5_000E_EFC0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x28F3); f__01F7_10C3_0010_64C2();
	f__01F7_28F3_0010_4F5D();
}

/**
 * Decompiled function f__01F7_28F3_0010_4F5D()
 *
 * @name f__01F7_28F3_0010_4F5D
 * @implements 01F7:28F3:0010:4F5D ()
 *
 * Called From: 01F7:28F3:000E:EFC0
 */
void f__01F7_28F3_0010_4F5D()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x2903); f__01F7_10C3_0010_64C2();
	f__01F7_2903_000E_4424();
}

/**
 * Decompiled function f__01F7_2903_000E_4424()
 *
 * @name f__01F7_2903_000E_4424
 * @implements 01F7:2903:000E:4424 ()
 *
 * Called From: 01F7:2903:0010:4F5D
 */
void f__01F7_2903_000E_4424()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { f__01F7_2911_0012_E423(); return; }
	emu_movw(&emu_ax.x, emu_bx.x);
	f__01F7_2920_0003_2E57(); return;
}

/**
 * Decompiled function f__01F7_2911_0012_E423()
 *
 * @name f__01F7_2911_0012_E423
 * @implements 01F7:2911:0012:E423 ()
 *
 * Called From: 01F7:290B:000E:4424
 */
void f__01F7_2911_0012_E423()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_si);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_28E5_000E_EFC0(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2917_000C_A803()
 *
 * @name f__01F7_2917_000C_A803
 * @implements 01F7:2917:000C:A803 ()
 *
 * Called From: 01F7:28E3:0009:EE56
 */
void f__01F7_2917_000C_A803()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_si);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_28E5_000E_EFC0(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2920_0003_2E57()
 *
 * @name f__01F7_2920_0003_2E57
 * @implements 01F7:2920:0003:2E57 ()
 *
 * Called From: 01F7:290F:000E:4424
 */
void f__01F7_2920_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2923_0024_671B()
 *
 * @name f__01F7_2923_0024_671B
 * @implements 01F7:2923:0024:671B ()
 *
 * Called From: 01F7:2958:0014:02B8
 */
void f__01F7_2923_0024_671B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_cld();
	emu_testw(&emu_di, 0x1);
	if (emu_flags.zf) { f__01F7_293D_000A_0416(); return; }
	if (emu_cx.x == 0) { emu_ip = 0x2944; emu_last_cs = 0x01F7; emu_last_ip = 0x2939; emu_last_length = 0x0024; emu_last_crc = 0x671B; emu_call(); return; } // Jump does not resolve
	emu_stosb();
	emu_decw(&emu_cx.x);
	emu_shrw(&emu_cx.x, 0x1);
	emu_rep_stosw();
	if (!emu_flags.cf) { f__01F7_2944_0003_2E77(); return; }
	emu_stosb();
	emu_pop(&emu_di);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_293D_000A_0416()
 *
 * @name f__01F7_293D_000A_0416
 * @implements 01F7:293D:000A:0416 ()
 *
 * Called From: 01F7:2937:0024:671B
 */
void f__01F7_293D_000A_0416()
{
	emu_shrw(&emu_cx.x, 0x1);
	emu_rep_stosw();
	if (!emu_flags.cf) { f__01F7_2944_0003_2E77(); return; }
	emu_stosb();
	emu_pop(&emu_di);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2944_0003_2E77()
 *
 * @name f__01F7_2944_0003_2E77
 * @implements 01F7:2944:0003:2E77 ()
 *
 * Called From: 01F7:2941:000A:0416
 * Called From: 01F7:2941:0024:671B
 */
void f__01F7_2944_0003_2E77()
{
	emu_pop(&emu_di);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2947_0014_02B8()
 *
 * @name f__01F7_2947_0014_02B8
 * @implements 01F7:2947:0014:02B8 ()
 *
 * Called From: 07D4:0367:001F:FF64
 * Called From: 07D4:037B:0014:D20F
 * Called From: 07D4:1275:001D:1903
 * Called From: 07D4:1289:0014:F74B
 * Called From: 0FE4:017C:0026:ADF7
 * Called From: 0FE4:017C:001D:133A
 * Called From: 0FE4:04E5:0019:1614
 * Called From: 104B:009A:0026:FD93
 * Called From: 104B:009A:001D:CF58
 * Called From: 1082:00D5:0026:CE00
 * Called From: 1082:00D5:001D:48CA
 * Called From: 1082:02C3:001A:47E1
 * Called From: 10BE:004D:0026:4F78
 * Called From: 10BE:004D:001D:55B0
 * Called From: 10BE:00FF:0064:DF2A
 * Called From: 10E4:1F8B:0011:E0DB
 * Called From: 23E1:0113:0012:D6D9
 * Called From: 23E1:014E:003B:3097
 * Called From: 23E1:014E:0026:6C1D
 * Called From: 24DA:0067:0012:E658
 * Called From: 24DA:00A2:0020:C39B
 * Called From: 24DA:00A2:003B:A407
 * Called From: 25C4:003B:0013:0723
 * Called From: 25C4:03AF:0018:6AD8
 * Called From: 2649:0012:0014:67A9
 * Called From: B495:0DEC:0018:EC07
 * Called From: B495:15BF:0027:1B29
 * Called From: B495:180C:002B:0A6D
 * Called From: B4B5:0070:0014:7874
 * Called From: B4B5:009F:0014:EBAA
 * Called From: B4B8:02C5:0012:2C51
 * Called From: B4DA:00A5:0014:D1CA
 * Called From: B4DA:00A5:0011:F941
 * Called From: B4E0:0C02:0019:6AEE
 * Called From: B4ED:011E:001A:B36D
 * Called From: B4ED:0148:0014:E047
 * Called From: B4ED:0694:002B:A83F
 * Called From: B4ED:0B24:0011:B6CD
 * Called From: B503:0037:0013:4B76
 * Called From: B503:05D4:0029:2499
 * Called From: B511:0AD5:0016:9707
 * Called From: B511:0AEC:0017:3E92
 * Called From: B511:0B03:0017:AFF4
 * Called From: B511:0B17:0014:F77F
 * Called From: B511:0B2B:0014:F773
 * Called From: B511:0B3F:0014:F777
 * Called From: B511:0B53:0014:F74B
 * Called From: B511:0B67:0014:F74F
 * Called From: B511:0B84:001D:7B37
 * Called From: B511:0B98:0014:F14D
 * Called From: B511:0FD3:0028:02A0
 * Called From: B518:05B8:0018:9016
 * Called From: B518:1148:0015:484E
 * Called From: B52A:025F:0020:17D8
 */
void f__01F7_2947_0014_02B8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x295B); f__01F7_2923_0024_671B();
	f__01F7_295B_000B_BBB3();
}

/**
 * Decompiled function f__01F7_295B_000B_BBB3()
 *
 * @name f__01F7_295B_000B_BBB3
 * @implements 01F7:295B:000B:BBB3 ()
 *
 * Called From: 01F7:295B:0014:02B8
 */
void f__01F7_295B_000B_BBB3()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2966_0015_53C0()
 *
 * @name f__01F7_2966_0015_53C0
 * @implements 01F7:2966:0015:53C0 ()
 *
 * Called From: 01F7:29CB:0016:B3E0
 */
void f__01F7_2966_0015_53C0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(0x297B); f__01F7_07B3_0021_4ED6();
	f__01F7_297B_0008_5375();
}

/**
 * Decompiled function f__01F7_297B_0008_5375()
 *
 * @name f__01F7_297B_0008_5375
 * @implements 01F7:297B:0008:5375 ()
 *
 * Called From: 01F7:297B:0015:53C0
 */
void f__01F7_297B_0008_5375()
{
	if (!emu_flags.cf) { f__01F7_2983_0035_708C(); return; }
	emu_std();
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x2986; emu_last_cs = 0x01F7; emu_last_ip = 0x2981; emu_last_length = 0x0008; emu_last_crc = 0x5375; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2983_0035_708C()
 *
 * @name f__01F7_2983_0035_708C
 * @implements 01F7:2983:0035:708C ()
 *
 * Called From: 01F7:297B:0008:5375
 */
void f__01F7_2983_0035_708C()
{
	emu_cld();
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__01F7_2999_001F_CB6D(); return; }
	emu_addw(&emu_si, emu_cx.x);
	emu_decw(&emu_si);
	emu_addw(&emu_di, emu_cx.x);
	emu_decw(&emu_di);
	emu_testw(&emu_di, 0x1);
	if (emu_flags.zf) { emu_ip = 0x29A3; emu_last_cs = 0x01F7; emu_last_ip = 0x299D; emu_last_length = 0x0035; emu_last_crc = 0x708C; emu_call(); return; } // Jump does not resolve
	if (emu_cx.x == 0) { emu_ip = 0x29B2; emu_last_cs = 0x01F7; emu_last_ip = 0x299F; emu_last_length = 0x0035; emu_last_crc = 0x708C; emu_call(); return; } // Jump does not resolve
	emu_movsb(emu_ds);
	emu_decw(&emu_cx.x);
	emu_subw(&emu_si, emu_ax.x);
	emu_subw(&emu_di, emu_ax.x);
	emu_shrw(&emu_cx.x, 0x1);
	emu_rep_movsw(emu_ds);
	if (!emu_flags.cf) { emu_ip = 0x29B2; emu_last_cs = 0x01F7; emu_last_ip = 0x29AB; emu_last_length = 0x0035; emu_last_crc = 0x708C; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_si, emu_ax.x);
	emu_addw(&emu_di, emu_ax.x);
	emu_movsb(emu_ds);
	emu_cld();
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2999_001F_CB6D()
 *
 * @name f__01F7_2999_001F_CB6D
 * @implements 01F7:2999:001F:CB6D ()
 *
 * Called From: 01F7:2991:0035:708C
 */
void f__01F7_2999_001F_CB6D()
{
	emu_testw(&emu_di, 0x1);
	if (emu_flags.zf) { f__01F7_29A3_0015_1B46(); return; }
	if (emu_cx.x == 0) { emu_ip = 0x29B2; emu_last_cs = 0x01F7; emu_last_ip = 0x299F; emu_last_length = 0x001F; emu_last_crc = 0xCB6D; emu_call(); return; } // Jump does not resolve
	emu_movsb(emu_ds);
	emu_decw(&emu_cx.x);
	emu_subw(&emu_si, emu_ax.x);
	emu_subw(&emu_di, emu_ax.x);
	emu_shrw(&emu_cx.x, 0x1);
	emu_rep_movsw(emu_ds);
	if (!emu_flags.cf) { emu_ip = 0x29B2; emu_last_cs = 0x01F7; emu_last_ip = 0x29AB; emu_last_length = 0x001F; emu_last_crc = 0xCB6D; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_si, emu_ax.x);
	emu_addw(&emu_di, emu_ax.x);
	emu_movsb(emu_ds);
	emu_cld();
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_29A3_0015_1B46()
 *
 * @name f__01F7_29A3_0015_1B46
 * @implements 01F7:29A3:0015:1B46 ()
 *
 * Called From: 01F7:299D:001F:CB6D
 */
void f__01F7_29A3_0015_1B46()
{
	emu_subw(&emu_si, emu_ax.x);
	emu_subw(&emu_di, emu_ax.x);
	emu_shrw(&emu_cx.x, 0x1);
	emu_rep_movsw(emu_ds);
	if (!emu_flags.cf) { emu_ip = 0x29B2; emu_last_cs = 0x01F7; emu_last_ip = 0x29AB; emu_last_length = 0x0015; emu_last_crc = 0x1B46; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_si, emu_ax.x);
	emu_addw(&emu_di, emu_ax.x);
	emu_movsb(emu_ds);
	emu_cld();
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_29B8_0016_B3E0()
 *
 * @name f__01F7_29B8_0016_B3E0
 * @implements 01F7:29B8:0016:B3E0 ()
 *
 * Called From: 176C:20FF:0025:8BA8
 */
void f__01F7_29B8_0016_B3E0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x29CE); f__01F7_2966_0015_53C0();
	f__01F7_29CE_000B_BBB2();
}

/**
 * Decompiled function f__01F7_29CE_000B_BBB2()
 *
 * @name f__01F7_29CE_000B_BBB2
 * @implements 01F7:29CE:000B:BBB2 ()
 *
 * Called From: 01F7:29CE:0016:B3E0
 */
void f__01F7_29CE_000B_BBB2()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_29D9_000E_7642()
 *
 * @name f__01F7_29D9_000E_7642
 * @implements 01F7:29D9:000E:7642 ()
 *
 * Called From: 01F7:2AB3:000C:86B9
 */
void f__01F7_29D9_000E_7642()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movb(&emu_ax.h, 0x3C);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x29E7); f__0070_0108_0005_E45B();
	f__01F7_29E7_0005_E285();
}

/**
 * Decompiled function f__01F7_29E7_0005_E285()
 *
 * @name f__01F7_29E7_0005_E285
 * @implements 01F7:29E7:0005:E285 ()
 *
 * Called From: 01F7:29E7:000E:7642
 */
void f__01F7_29E7_0005_E285()
{
	emu_pop(&emu_ds);
	if (emu_flags.cf) { emu_ip = 0x29EC; emu_last_cs = 0x01F7; emu_last_ip = 0x29E8; emu_last_length = 0x0005; emu_last_crc = 0xE285; emu_call(); return; } // Jump does not resolve
	f__01F7_29F0_0004_4844(); return;
}

/**
 * Decompiled function f__01F7_29F0_0004_4844()
 *
 * @name f__01F7_29F0_0004_4844
 * @implements 01F7:29F0:0004:4844 ()
 *
 * Called From: 01F7:29EA:0005:E285
 */
void f__01F7_29F0_0004_4844()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 6;
	return;
}

/**
 * Decompiled function f__01F7_29F4_000E_B8B9()
 *
 * @name f__01F7_29F4_000E_B8B9
 * @implements 01F7:29F4:000E:B8B9 ()
 *
 * Called From: 01F7:2B11:000A:FFBB
 */
void f__01F7_29F4_000E_B8B9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_subw(&emu_cx.x, emu_cx.x);
	emu_subw(&emu_dx.x, emu_dx.x);
	emu_movb(&emu_ax.h, 0x40);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x2A02); f__0070_0108_0005_E45B();
	f__01F7_2A02_0004_4845();
}

/**
 * Decompiled function f__01F7_2A02_0004_4845()
 *
 * @name f__01F7_2A02_0004_4845
 * @implements 01F7:2A02:0004:4845 ()
 *
 * Called From: 01F7:2A02:000E:B8B9
 */
void f__01F7_2A02_0004_4845()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 2;
	return;
}

/**
 * Decompiled function f__01F7_2A06_002A_9A90()
 *
 * @name f__01F7_2A06_002A_9A90
 * @implements 01F7:2A06:002A:9A90 ()
 *
 * Called From: 1FB5:0137:001B:0DC1
 * Called From: 24E6:0083:001A:719E
 * Called From: 261F:0045:000E:672A
 */
void f__01F7_2A06_002A_9A90()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_testw(&emu_si, 0xC000);
	if (!emu_flags.zf) { f__01F7_2A22_000E_9A13(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7984));
	emu_andw(&emu_ax.x, 0xC000);
	emu_orw(&emu_si, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2A30); emu_ip = 0x22E8; emu_last_cs = 0x01F7; emu_last_ip = 0x2A2D; emu_last_length = 0x002A; emu_last_crc = 0x9A90; emu_call(); // Jump does not resolve
	f__01F7_2A30_000F_AEDA();
}

/**
 * Decompiled function f__01F7_2A22_000E_9A13()
 *
 * @name f__01F7_2A22_000E_9A13
 * @implements 01F7:2A22:000E:9A13 ()
 *
 * Called From: 01F7:2A18:002A:9A90
 */
void f__01F7_2A22_000E_9A13()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2A30); f__01F7_22E8_0011_1764();
	f__01F7_2A30_000F_AEDA();
}

/**
 * Decompiled function f__01F7_2A30_000F_AEDA()
 *
 * @name f__01F7_2A30_000F_AEDA
 * @implements 01F7:2A30:000F:AEDA ()
 *
 * Called From: 01F7:2A30:000E:9A13
 */
void f__01F7_2A30_000F_AEDA()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_testw(&emu_si, 0x100);
	if (!emu_flags.zf) { f__01F7_2A3F_0012_EC22(); return; }
	f__01F7_2ABF_000C_66BD(); return;
}

/**
 * Decompiled function f__01F7_2A3F_0012_EC22()
 *
 * @name f__01F7_2A3F_0012_EC22
 * @implements 01F7:2A3F:0012:EC22 ()
 *
 * Called From: 01F7:2A3A:000F:AEDA
 */
void f__01F7_2A3F_0012_EC22()
{
	emu_andw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x7986));
	emu_movw(&emu_ax.x, emu_di);
	emu_testw(&emu_ax.x, 0x180);
	if (!emu_flags.zf) { f__01F7_2A51_0014_6887(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(0x2A51); emu_ip = 0x0675; emu_last_cs = 0x01F7; emu_last_ip = 0x2A4E; emu_last_length = 0x0012; emu_last_crc = 0xEC22; emu_call(); // Jump does not resolve
	f__01F7_2A51_0014_6887();
}

/**
 * Decompiled function f__01F7_2A51_0014_6887()
 *
 * @name f__01F7_2A51_0014_6887
 * @implements 01F7:2A51:0014:6887 ()
 *
 * Called From: 01F7:2A48:0012:EC22
 */
void f__01F7_2A51_0014_6887()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	if (!emu_flags.zf) { f__01F7_2A7A_000C_FDAC(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7988), 0x2);
	if (emu_flags.zf) { f__01F7_2A68_000A_043B(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7988));
	emu_push(0x2A65); emu_ip = 0x0675; emu_last_cs = 0x01F7; emu_last_ip = 0x2A62; emu_last_length = 0x0014; emu_last_crc = 0x6887; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_2A68_000A_043B()
 *
 * @name f__01F7_2A68_000A_043B
 * @implements 01F7:2A68:000A:043B ()
 *
 * Called From: 01F7:2A5C:0014:6887
 */
void f__01F7_2A68_000A_043B()
{
	emu_testw(&emu_di, 0x80);
	if (emu_flags.zf) { emu_ip = 0x2A72; emu_last_cs = 0x01F7; emu_last_ip = 0x2A6C; emu_last_length = 0x000A; emu_last_crc = 0x043B; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__01F7_2A75_0005_BDB6(); return;
}

/**
 * Decompiled function f__01F7_2A75_0005_BDB6()
 *
 * @name f__01F7_2A75_0005_BDB6
 * @implements 01F7:2A75:0005:BDB6 ()
 *
 * Called From: 01F7:2A70:000A:043B
 */
void f__01F7_2A75_0005_BDB6()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	f__01F7_2A86_0012_8105(); return;
}

/**
 * Decompiled function f__01F7_2A7A_000C_FDAC()
 *
 * @name f__01F7_2A7A_000C_FDAC
 * @implements 01F7:2A7A:000C:FDAC ()
 *
 * Called From: 01F7:2A55:0014:6887
 */
void f__01F7_2A7A_000C_FDAC()
{
	emu_testw(&emu_si, 0x400);
	if (emu_flags.zf) { f__01F7_2ABF_000C_66BD(); return; }
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_ip = 0x2A62; emu_last_cs = 0x01F7; emu_last_ip = 0x2A84; emu_last_length = 0x000C; emu_last_crc = 0xFDAC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2A86_0012_8105()
 *
 * @name f__01F7_2A86_0012_8105
 * @implements 01F7:2A86:0012:8105 ()
 *
 * Called From: 01F7:2A78:0005:BDB6
 */
void f__01F7_2A86_0012_8105()
{
	emu_testw(&emu_si, 0xF0);
	if (emu_flags.zf) { f__01F7_2AAA_000C_86B9(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(0x2A98); emu_ip = 0x29D9; emu_last_cs = 0x01F7; emu_last_ip = 0x2A95; emu_last_length = 0x0012; emu_last_crc = 0x8105; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_2AAA_000C_86B9()
 *
 * @name f__01F7_2AAA_000C_86B9
 * @implements 01F7:2AAA:000C:86B9 ()
 *
 * Called From: 01F7:2A8A:0012:8105
 */
void f__01F7_2AAA_000C_86B9()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(0x2AB6); f__01F7_29D9_000E_7642();
	f__01F7_2AB6_0009_06B4();
}

/**
 * Decompiled function f__01F7_2AB6_0009_06B4()
 *
 * @name f__01F7_2AB6_0009_06B4
 * @implements 01F7:2AB6:0009:06B4 ()
 *
 * Called From: 01F7:2AB6:000C:86B9
 */
void f__01F7_2AB6_0009_06B4()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!(emu_flags.sf != emu_flags.of)) { f__01F7_2B3A_000F_F783(); return; }
	emu_ip = 0x2B6D; emu_last_cs = 0x01F7; emu_last_ip = 0x2ABC; emu_last_length = 0x0009; emu_last_crc = 0x06B4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2ABF_000C_66BD()
 *
 * @name f__01F7_2ABF_000C_66BD
 * @implements 01F7:2ABF:000C:66BD ()
 *
 * Called From: 01F7:2A3C:000F:AEDA
 * Called From: 01F7:2A7E:000C:FDAC
 */
void f__01F7_2ABF_000C_66BD()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2ACB); f__01F7_2B75_002A_45D8();
	f__01F7_2ACB_0012_A5D7();
}

/**
 * Decompiled function f__01F7_2ACB_0012_A5D7()
 *
 * @name f__01F7_2ACB_0012_A5D7
 * @implements 01F7:2ACB:0012:A5D7 ()
 *
 * Called From: 01F7:2ACB:000C:66BD
 */
void f__01F7_2ACB_0012_A5D7()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.sf != emu_flags.of)) { f__01F7_2B3A_000F_F783(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x2ADD); f__01F7_207A_0014_31F0();
	f__01F7_2ADD_0028_9E59();
}

/**
 * Decompiled function f__01F7_2ADD_0028_9E59()
 *
 * @name f__01F7_2ADD_0028_9E59
 * @implements 01F7:2ADD:0028:9E59 ()
 *
 * Called From: 01F7:2ADD:0012:A5D7
 */
void f__01F7_2ADD_0028_9E59()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_testw(&emu_ax.x, 0x80);
	if (emu_flags.zf) { f__01F7_2B0A_000A_FFBB(); return; }
	emu_orw(&emu_si, 0x2000);
	emu_testw(&emu_si, 0x8000);
	if (emu_flags.zf) { emu_ip = 0x2B14; emu_last_cs = 0x01F7; emu_last_ip = 0x2AEF; emu_last_length = 0x0028; emu_last_crc = 0x9E59; emu_call(); return; } // Jump does not resolve
	emu_andw(&emu_ax.x, 0xFF);
	emu_orw(&emu_ax.x, 0x20);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x2B05); emu_ip = 0x207A; emu_last_cs = 0x01F7; emu_last_ip = 0x2B02; emu_last_length = 0x0028; emu_last_crc = 0x9E59; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_2B0A_000A_FFBB()
 *
 * @name f__01F7_2B0A_000A_FFBB
 * @implements 01F7:2B0A:000A:FFBB ()
 *
 * Called From: 01F7:2AE5:0028:9E59
 */
void f__01F7_2B0A_000A_FFBB()
{
	emu_testw(&emu_si, 0x200);
	if (emu_flags.zf) { f__01F7_2B14_0023_AF3A(); return; }
	emu_push(emu_di);
	emu_push(0x2B14); f__01F7_29F4_000E_B8B9();
	f__01F7_2B14_0023_AF3A();
}

/**
 * Decompiled function f__01F7_2B14_0023_AF3A()
 *
 * @name f__01F7_2B14_0023_AF3A
 * @implements 01F7:2B14:0023:AF3A ()
 *
 * Called From: 01F7:2B0E:000A:FFBB
 * Called From: 01F7:2B14:000A:FFBB
 */
void f__01F7_2B14_0023_AF3A()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if (emu_flags.zf) { f__01F7_2B3A_000F_F783(); return; }
	emu_testw(&emu_si, 0x100);
	if (emu_flags.zf) { emu_ip = 0x2B3A; emu_last_cs = 0x01F7; emu_last_ip = 0x2B1F; emu_last_length = 0x0023; emu_last_crc = 0xAF3A; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_si, 0xF0);
	if (emu_flags.zf) { emu_ip = 0x2B3A; emu_last_cs = 0x01F7; emu_last_ip = 0x2B25; emu_last_length = 0x0023; emu_last_crc = 0xAF3A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2B37); emu_ip = 0x22E8; emu_last_cs = 0x01F7; emu_last_ip = 0x2B34; emu_last_length = 0x0023; emu_last_crc = 0xAF3A; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_2B3A_000F_F783()
 *
 * @name f__01F7_2B3A_000F_F783
 * @implements 01F7:2B3A:000F:F783 ()
 *
 * Called From: 01F7:2ABA:0009:06B4
 * Called From: 01F7:2AD2:0012:A5D7
 * Called From: 01F7:2B19:0023:AF3A
 */
void f__01F7_2B3A_000F_F783()
{
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__01F7_2B6D_0008_7D40(); return; }
	emu_testw(&emu_si, 0x300);
	if (emu_flags.zf) { f__01F7_2B49_0016_ED65(); return; }
	emu_movw(&emu_ax.x, 0x1000);
	f__01F7_2B4B_0014_2765(); return;
}

/**
 * Decompiled function f__01F7_2B49_0016_ED65()
 *
 * @name f__01F7_2B49_0016_ED65
 * @implements 01F7:2B49:0016:ED65 ()
 *
 * Called From: 01F7:2B42:000F:F783
 */
void f__01F7_2B49_0016_ED65()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, emu_si);
	emu_andw(&emu_dx.x, 0xF8FF);
	emu_orw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if (emu_flags.zf) { f__01F7_2B5F_0016_F477(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x2B62; emu_last_cs = 0x01F7; emu_last_ip = 0x2B5D; emu_last_length = 0x0016; emu_last_crc = 0xED65; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2B4B_0014_2765()
 *
 * @name f__01F7_2B4B_0014_2765
 * @implements 01F7:2B4B:0014:2765 ()
 *
 * Called From: 01F7:2B47:000F:F783
 */
void f__01F7_2B4B_0014_2765()
{
	emu_movw(&emu_dx.x, emu_si);
	emu_andw(&emu_dx.x, 0xF8FF);
	emu_orw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if (emu_flags.zf) { f__01F7_2B5F_0016_F477(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x2B62; emu_last_cs = 0x01F7; emu_last_ip = 0x2B5D; emu_last_length = 0x0014; emu_last_crc = 0x2765; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2B5F_0016_F477()
 *
 * @name f__01F7_2B5F_0016_F477
 * @implements 01F7:2B5F:0016:F477 ()
 *
 * Called From: 01F7:2B59:0016:ED65
 * Called From: 01F7:2B59:0014:2765
 */
void f__01F7_2B5F_0016_F477()
{
	emu_movw(&emu_ax.x, 0x100);
	emu_pop(&emu_dx.x);
	emu_orw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), emu_dx.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2B6D_0008_7D40()
 *
 * @name f__01F7_2B6D_0008_7D40
 * @implements 01F7:2B6D:0008:7D40 ()
 *
 * Called From: 01F7:2B3C:000F:F783
 */
void f__01F7_2B6D_0008_7D40()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2B75_002A_45D8()
 *
 * @name f__01F7_2B75_002A_45D8
 * @implements 01F7:2B75:002A:45D8 ()
 *
 * Called From: 01F7:2AC8:000C:66BD
 */
void f__01F7_2B75_002A_45D8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movb(&emu_ax.l, 0x1);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_testw(&emu_cx.x, 0x2);
	if (!emu_flags.zf) { f__01F7_2B90_000F_E475(); return; }
	emu_movb(&emu_ax.l, 0x2);
	emu_testw(&emu_cx.x, 0x4);
	if (!emu_flags.zf) { emu_ip = 0x2B90; emu_last_cs = 0x01F7; emu_last_ip = 0x2B8C; emu_last_length = 0x002A; emu_last_crc = 0x45D8; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, 0x0);
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0xF0);
	emu_andb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_orb(&emu_ax.l, emu_cx.l);
	emu_movb(&emu_ax.h, 0x3D);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x2B9F); f__0070_0108_0005_E45B();
	f__01F7_2B9F_001D_8C05();
}

/**
 * Decompiled function f__01F7_2B90_000F_E475()
 *
 * @name f__01F7_2B90_000F_E475
 * @implements 01F7:2B90:000F:E475 ()
 *
 * Called From: 01F7:2B84:002A:45D8
 */
void f__01F7_2B90_000F_E475()
{
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0xF0);
	emu_andb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_orb(&emu_ax.l, emu_cx.l);
	emu_movb(&emu_ax.h, 0x3D);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x2B9F); f__0070_0108_0005_E45B();
	f__01F7_2B9F_001D_8C05();
}

/**
 * Decompiled function f__01F7_2B9F_001D_8C05()
 *
 * @name f__01F7_2B9F_001D_8C05
 * @implements 01F7:2B9F:001D:8C05 ()
 *
 * Called From: 01F7:2B9F:002A:45D8
 * Called From: 01F7:2B9F:000F:E475
 */
void f__01F7_2B9F_001D_8C05()
{
	emu_pop(&emu_ds);
	if (emu_flags.cf) { f__01F7_2BBC_0004_3028(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax.x, 0xB8FF);
	emu_orw(&emu_ax.x, 0x8000);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__01F7_2BC0_0004_893F(); return;
}

/**
 * Decompiled function f__01F7_2BBC_0004_3028()
 *
 * @name f__01F7_2BBC_0004_3028
 * @implements 01F7:2BBC:0004:3028 ()
 *
 * Called From: 01F7:2BA0:001D:8C05
 */
void f__01F7_2BBC_0004_3028()
{
	emu_push(emu_ax.x);
	emu_push(0x2BC0); f__01F7_0675_0020_D684();
	f__01F7_2BC0_0004_893F();
}

/**
 * Decompiled function f__01F7_2BC0_0004_893F()
 *
 * @name f__01F7_2BC0_0004_893F
 * @implements 01F7:2BC0:0004:893F ()
 *
 * Called From: 01F7:2BBA:001D:8C05
 * Called From: 01F7:2BC0:0004:3028
 */
void f__01F7_2BC0_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2BC4_0019_3608()
 *
 * @name f__01F7_2BC4_0019_3608
 * @implements 01F7:2BC4:0019:3608 ()
 *
 * Called From: B480:02E8:0008:98A4
 */
void f__01F7_2BC4_0019_3608()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, 0x2DA4);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x77DE);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(0x2BDD); f__01F7_111F_001A_B513();
	f__01F7_2BDD_0002_2597();
}

/**
 * Decompiled function f__01F7_2BDD_0002_2597()
 *
 * @name f__01F7_2BDD_0002_2597
 * @implements 01F7:2BDD:0002:2597 ()
 *
 * Called From: 01F7:2BDD:0019:3608
 */
void f__01F7_2BDD_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2DA4_001B_CF3B()
 *
 * @name f__01F7_2DA4_001B_CF3B
 * @implements 01F7:2DA4:001B:CF3B ()
 *
 * Called From: 01F7:1166:001A:962D
 */
void f__01F7_2DA4_001B_CF3B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x8);
	if (emu_flags.zf) { f__01F7_2DEB_000E_A237(); return; }
	emu_ip = 0x2DE1; emu_last_cs = 0x01F7; emu_last_ip = 0x2DBD; emu_last_length = 0x001B; emu_last_crc = 0xCF3B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2DEB_000E_A237()
 *
 * @name f__01F7_2DEB_000E_A237
 * @implements 01F7:2DEB:000E:A237 ()
 *
 * Called From: 01F7:2DBB:001B:CF3B
 */
void f__01F7_2DEB_000E_A237()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x40);
	if (!emu_flags.zf) { emu_ip = 0x2DF9; emu_last_cs = 0x01F7; emu_last_ip = 0x2DF4; emu_last_length = 0x000E; emu_last_crc = 0xA237; emu_call(); return; } // Jump does not resolve
	f__01F7_2F21_000C_FF5B(); return;
}

/**
 * Decompiled function f__01F7_2F21_000C_FF5B()
 *
 * @name f__01F7_2F21_000C_FF5B
 * @implements 01F7:2F21:000C:FF5B ()
 *
 * Called From: 01F7:2DF6:000E:A237
 */
void f__01F7_2F21_000C_FF5B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	if (emu_flags.zf) { f__01F7_2F7D_0015_335E(); return; }
	emu_ip = 0x2F74; emu_last_cs = 0x01F7; emu_last_ip = 0x2F2B; emu_last_length = 0x000C; emu_last_crc = 0xFF5B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2F7D_0015_335E()
 *
 * @name f__01F7_2F7D_0015_335E
 * @implements 01F7:2F7D:0015:335E ()
 *
 * Called From: 01F7:2F29:000C:FF5B
 */
void f__01F7_2F7D_0015_335E()
{
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x2F92); f__01F7_42F4_0019_54E2();
	f__01F7_2F92_000A_6547();
}

/**
 * Decompiled function f__01F7_2F92_000A_6547()
 *
 * @name f__01F7_2F92_000A_6547
 * @implements 01F7:2F92:000A:6547 ()
 *
 * Called From: 01F7:2F92:0015:335E
 */
void f__01F7_2F92_000A_6547()
{
	emu_addws(&emu_sp, 0x8);
	emu_cmpw(&emu_ax.x, emu_di);
	if (emu_flags.zf) { f__01F7_2F9C_000B_4D3F(); return; }
	emu_ip = 0x2DDC; emu_last_cs = 0x01F7; emu_last_ip = 0x2F99; emu_last_length = 0x000A; emu_last_crc = 0x6547; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2F9C_000B_4D3F()
 *
 * @name f__01F7_2F9C_000B_4D3F
 * @implements 01F7:2F9C:000B:4D3F ()
 *
 * Called From: 01F7:2F97:000A:6547
 */
void f__01F7_2F9C_000B_4D3F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 10;
	return;
}

/**
 * Decompiled function f__01F7_2FA7_002E_FEFD()
 *
 * @name f__01F7_2FA7_002E_FEFD
 * @implements 01F7:2FA7:002E:FEFD ()
 *
 * Called From: 01F7:301F:0003:22A1
 * Called From: 01F7:306F:0016:E1E7
 * Called From: 01F7:30BA:0003:E23A
 */
void f__01F7_2FA7_002E_FEFD()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_cld();
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00, -0x6524));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_shrw(&emu_cx.x, 0x1);
	if (!emu_flags.cf) { emu_ip = 0x2FC5; emu_last_cs = 0x01F7; emu_last_ip = 0x2FBA; emu_last_length = 0x002E; emu_last_crc = 0xFEFD; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_movsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x1), emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x2FCE; emu_last_cs = 0x01F7; emu_last_ip = 0x2FC3; emu_last_length = 0x002E; emu_last_crc = 0xFEFD; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_di,  0x0));
	emu_movsw(emu_ds);
	emu_movw(&emu_get_memory16(emu_ds, emu_si, -0x2), emu_ax.x);
	if (--emu_cx.x != 0) { f__01F7_2FC5_0010_C8D7(); return; }
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 8;
	return;
}

/**
 * Decompiled function f__01F7_2FC5_0010_C8D7()
 *
 * @name f__01F7_2FC5_0010_C8D7
 * @implements 01F7:2FC5:0010:C8D7 ()
 *
 * Called From: 01F7:2FCC:002E:FEFD
 * Called From: 01F7:2FCC:0010:C8D7
 */
void f__01F7_2FC5_0010_C8D7()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_di,  0x0));
	emu_movsw(emu_ds);
	emu_movw(&emu_get_memory16(emu_ds, emu_si, -0x2), emu_ax.x);
	if (--emu_cx.x != 0) { f__01F7_2FC5_0010_C8D7(); return; }
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 8;
	return;
}

/**
 * Decompiled function f__01F7_2FD5_0018_0AEC()
 *
 * @name f__01F7_2FD5_0018_0AEC
 * @implements 01F7:2FD5:0018:0AEC ()
 *
 * Called From: 01F7:327E:0026:C673
 */
void f__01F7_2FD5_0018_0AEC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x14);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_cmpws(&emu_si, 0x2);
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_3025_0037_57AE(); return; }
	emu_cmpws(&emu_si, 0x2);
	if (emu_flags.zf) { f__01F7_2FED_001C_E64C(); return; }
	emu_ip = 0x3253; emu_last_cs = 0x01F7; emu_last_ip = 0x2FEA; emu_last_length = 0x0018; emu_last_crc = 0x0AEC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2FED_001C_E64C()
 *
 * @name f__01F7_2FED_001C_E64C
 * @implements 01F7:2FED:001C:E64C ()
 *
 * Called From: 01F7:2FE8:0018:0AEC
 */
void f__01F7_2FED_001C_E64C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x6524));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, -0x6522);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, -0x6520);
	emu_push(0x3009);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34950098: ovl__3495(24); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x3005; emu_last_length = 0x001C; emu_last_crc = 0xE64C;
			emu_call();
			return;
	}
	f__01F7_3009_000A_077F();
}

/**
 * Decompiled function f__01F7_3009_000A_077F()
 *
 * @name f__01F7_3009_000A_077F
 * @implements 01F7:3009:000A:077F ()
 *
 * Called From: 01F7:3009:001C:E64C
 */
void f__01F7_3009_000A_077F()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x3013; emu_last_cs = 0x01F7; emu_last_ip = 0x300E; emu_last_length = 0x000A; emu_last_crc = 0x077F; emu_call(); return; } // Jump does not resolve
	f__01F7_3253_0008_3CD2(); return;
}

/**
 * Decompiled function f__01F7_301F_0003_22A1()
 *
 * @name f__01F7_301F_0003_22A1
 * @implements 01F7:301F:0003:22A1 ()
 *
 * Called From: 01F7:30CE:0014:8E6C
 */
void f__01F7_301F_0003_22A1()
{
	emu_push(0x3022); f__01F7_2FA7_002E_FEFD();
	f__01F7_3022_0003_9C2B();
}

/**
 * Decompiled function f__01F7_3022_0003_9C2B()
 *
 * @name f__01F7_3022_0003_9C2B
 * @implements 01F7:3022:0003:9C2B ()
 *
 * Called From: 01F7:3022:0003:22A1
 */
void f__01F7_3022_0003_9C2B()
{
	f__01F7_3253_0008_3CD2(); return;
}

/**
 * Decompiled function f__01F7_3025_0037_57AE()
 *
 * @name f__01F7_3025_0037_57AE
 * @implements 01F7:3025:0037:57AE ()
 *
 * Called From: 01F7:2FE3:0018:0AEC
 */
void f__01F7_3025_0037_57AE()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_ax.x);
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x6524));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_bx.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_shrw(&emu_ax.x, 0x1);
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x6524));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_dx.x);
	emu_push(emu_bx.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, -0x6522);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, -0x6520);
	emu_push(0x305C);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34950098: ovl__3495(24); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x3058; emu_last_length = 0x0037; emu_last_crc = 0x57AE;
			emu_call();
			return;
	}
	f__01F7_305C_0016_E1E7();
}

/**
 * Decompiled function f__01F7_305C_0016_E1E7()
 *
 * @name f__01F7_305C_0016_E1E7
 * @implements 01F7:305C:0016:E1E7 ()
 *
 * Called From: 01F7:305C:0037:57AE
 */
void f__01F7_305C_0016_E1E7()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x3072; emu_last_cs = 0x01F7; emu_last_ip = 0x3061; emu_last_length = 0x0016; emu_last_crc = 0xE1E7; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(0x3072); f__01F7_2FA7_002E_FEFD();
	f__01F7_3072_0010_F2A4();
}

/**
 * Decompiled function f__01F7_3072_0010_F2A4()
 *
 * @name f__01F7_3072_0010_F2A4
 * @implements 01F7:3072:0010:F2A4 ()
 *
 * Called From: 01F7:3072:0016:E1E7
 */
void f__01F7_3072_0010_F2A4()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, -0x6522);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, -0x6520);
	emu_push(0x3082);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34950098: ovl__3495(24); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x307E; emu_last_length = 0x0010; emu_last_crc = 0xF2A4;
			emu_call();
			return;
	}
	f__01F7_3082_0015_D1FF();
}

/**
 * Decompiled function f__01F7_3082_0015_D1FF()
 *
 * @name f__01F7_3082_0015_D1FF
 * @implements 01F7:3082:0015:D1FF ()
 *
 * Called From: 01F7:3082:0010:F2A4
 */
void f__01F7_3082_0015_D1FF()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x3097; emu_last_cs = 0x01F7; emu_last_ip = 0x3087; emu_last_length = 0x0015; emu_last_crc = 0xD1FF; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__01F7_30BA_0003_E23A(); return;
}

/**
 * Decompiled function f__01F7_30BA_0003_E23A()
 *
 * @name f__01F7_30BA_0003_E23A
 * @implements 01F7:30BA:0003:E23A ()
 *
 * Called From: 01F7:3095:0015:D1FF
 */
void f__01F7_30BA_0003_E23A()
{
	emu_push(0x30BD); f__01F7_2FA7_002E_FEFD();
	f__01F7_30BD_0014_8E6C();
}

/**
 * Decompiled function f__01F7_30BD_0014_8E6C()
 *
 * @name f__01F7_30BD_0014_8E6C
 * @implements 01F7:30BD:0014:8E6C ()
 *
 * Called From: 01F7:30BD:0003:E23A
 */
void f__01F7_30BD_0014_8E6C()
{
	emu_cmpws(&emu_si, 0x3);
	if (!emu_flags.zf) { emu_ip = 0x30D1; emu_last_cs = 0x01F7; emu_last_ip = 0x30C0; emu_last_length = 0x0014; emu_last_crc = 0x8E6C; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__01F7_301F_0003_22A1(); return;
}

/**
 * Decompiled function f__01F7_3253_0008_3CD2()
 *
 * @name f__01F7_3253_0008_3CD2
 * @implements 01F7:3253:0008:3CD2 ()
 *
 * Called From: 01F7:3010:000A:077F
 * Called From: 01F7:3022:0003:9C2B
 */
void f__01F7_3253_0008_3CD2()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 6;
	return;
}

/**
 * Decompiled function f__01F7_325B_0026_C673()
 *
 * @name f__01F7_325B_0026_C673
 * @implements 01F7:325B:0026:C673 ()
 *
 * Called From: B495:19A2:001A:5737
 */
void f__01F7_325B_0026_C673()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x6524), emu_ax.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x3281; emu_last_cs = 0x01F7; emu_last_ip = 0x3266; emu_last_length = 0x0026; emu_last_crc = 0xC673; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x6520), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x6522), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(0x3281); f__01F7_2FD5_0018_0AEC();
	f__01F7_3281_0002_2597();
}

/**
 * Decompiled function f__01F7_3281_0002_2597()
 *
 * @name f__01F7_3281_0002_2597
 * @implements 01F7:3281:0002:2597 ()
 *
 * Called From: 01F7:3281:0026:C673
 */
void f__01F7_3281_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3283_0018_6655()
 *
 * @name f__01F7_3283_0018_6655
 * @implements 01F7:3283:0018:6655 ()
 *
 * Called From: 01F7:3354:0003:62AB
 */
void f__01F7_3283_0018_6655()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x795A));
	if (emu_flags.cf) { f__01F7_329E_001B_32A6(); return; }
	emu_movw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_push(0x329B); emu_ip = 0x0675; emu_last_cs = 0x01F7; emu_last_ip = 0x3298; emu_last_length = 0x0018; emu_last_crc = 0x6655; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_329E_001B_32A6()
 *
 * @name f__01F7_329E_001B_32A6
 * @implements 01F7:329E:001B:32A6 ()
 *
 * Called From: 01F7:3292:0018:6655
 */
void f__01F7_329E_001B_32A6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_incw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.cf) { emu_ip = 0x32B4; emu_last_cs = 0x01F7; emu_last_ip = 0x32A5; emu_last_length = 0x001B; emu_last_crc = 0x32A6; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x200);
	if (emu_flags.zf) { f__01F7_32B9_0011_1DCE(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x334E; emu_last_cs = 0x01F7; emu_last_ip = 0x32B6; emu_last_length = 0x001B; emu_last_crc = 0x32A6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_32B9_0011_1DCE()
 *
 * @name f__01F7_32B9_0011_1DCE
 * @implements 01F7:32B9:0011:1DCE ()
 *
 * Called From: 01F7:32B2:001B:32A6
 */
void f__01F7_32B9_0011_1DCE()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x32CA); f__01F7_080B_0016_8E7B();
	f__01F7_32CA_001E_C660();
}

/**
 * Decompiled function f__01F7_32CA_001E_C660()
 *
 * @name f__01F7_32CA_001E_C660
 * @implements 01F7:32CA:001E:C660 ()
 *
 * Called From: 01F7:32CA:0011:1DCE
 */
void f__01F7_32CA_001E_C660()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_incw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.cf) { f__01F7_32E3_0005_88A6(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x4000);
	if (!emu_flags.zf) { emu_ip = 0x32E8; emu_last_cs = 0x01F7; emu_last_ip = 0x32E1; emu_last_length = 0x001E; emu_last_crc = 0xC660; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__01F7_334E_0006_F7CE(); return;
}

/**
 * Decompiled function f__01F7_32E3_0005_88A6()
 *
 * @name f__01F7_32E3_0005_88A6
 * @implements 01F7:32E3:0005:88A6 ()
 *
 * Called From: 01F7:32D4:001E:C660
 */
void f__01F7_32E3_0005_88A6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__01F7_334E_0006_F7CE(); return;
}

/**
 * Decompiled function f__01F7_334E_0006_F7CE()
 *
 * @name f__01F7_334E_0006_F7CE
 * @implements 01F7:334E:0006:F7CE ()
 *
 * Called From: 01F7:32E6:001E:C660
 * Called From: 01F7:32E6:0005:88A6
 */
void f__01F7_334E_0006_F7CE()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3354_0003_62AB()
 *
 * @name f__01F7_3354_0003_62AB
 * @implements 01F7:3354:0003:62AB ()
 *
 * Called From: 1FB5:00DB:001B:2EE4
 * Called From: 24E6:00A1:0010:7426
 */
void f__01F7_3354_0003_62AB()
{
	f__01F7_3283_0018_6655(); return;
}

/**
 * Decompiled function f__01F7_3357_0028_B817()
 *
 * @name f__01F7_3357_0028_B817
 * @implements 01F7:3357:0028:B817 ()
 *
 * Called From: 01F7:0FBC:0011:18E7
 * Called From: 01F7:0FF8:0011:0CD6
 */
void f__01F7_3357_0028_B817()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { emu_ip = 0x3379; emu_last_cs = 0x01F7; emu_last_ip = 0x336C; emu_last_length = 0x0028; emu_last_crc = 0xB817; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_di, 0x2);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x3379; emu_last_cs = 0x01F7; emu_last_ip = 0x3371; emu_last_length = 0x0028; emu_last_crc = 0xB817; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, 0x7FFF);
	if ((emu_flags.cf || emu_flags.zf)) { f__01F7_337F_0016_7DA1(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x3470; emu_last_cs = 0x01F7; emu_last_ip = 0x337C; emu_last_length = 0x0028; emu_last_crc = 0xB817; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_337F_0016_7DA1()
 *
 * @name f__01F7_337F_0016_7DA1
 * @implements 01F7:337F:0016:7DA1 ()
 *
 * Called From: 01F7:3377:0028:B817
 */
void f__01F7_337F_0016_7DA1()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7B1E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x3395; emu_last_cs = 0x01F7; emu_last_ip = 0x3384; emu_last_length = 0x0016; emu_last_crc = 0x7DA1; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x77DE);
	if (!emu_flags.zf) { f__01F7_3395_0030_93A7(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B1E), 0x1);
	f__01F7_33A9_001C_2400(); return;
}

/**
 * Decompiled function f__01F7_3395_0030_93A7()
 *
 * @name f__01F7_3395_0030_93A7
 * @implements 01F7:3395:0030:93A7 ()
 *
 * Called From: 01F7:338B:0016:7DA1
 */
void f__01F7_3395_0030_93A7()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7B1C), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x33A9; emu_last_cs = 0x01F7; emu_last_ip = 0x339A; emu_last_length = 0x0030; emu_last_crc = 0x93A7; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x77CA);
	if (!emu_flags.zf) { emu_ip = 0x33A9; emu_last_cs = 0x01F7; emu_last_ip = 0x33A1; emu_last_length = 0x0030; emu_last_crc = 0x93A7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B1C), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__01F7_33C8_0018_05C5(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_bx.x);
	emu_push(emu_cs);
	emu_push(0x33C5); emu_ip = 0x260F; emu_last_cs = 0x01F7; emu_last_ip = 0x33C2; emu_last_length = 0x0030; emu_last_crc = 0x93A7; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_33A9_001C_2400()
 *
 * @name f__01F7_33A9_001C_2400
 * @implements 01F7:33A9:001C:2400 ()
 *
 * Called From: 01F7:3393:0016:7DA1
 */
void f__01F7_33A9_001C_2400()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__01F7_33C8_0018_05C5(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_bx.x);
	emu_push(emu_cs);
	emu_push(0x33C5); emu_ip = 0x260F; emu_last_cs = 0x01F7; emu_last_ip = 0x33C2; emu_last_length = 0x001C; emu_last_crc = 0x2400; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_33C8_0018_05C5()
 *
 * @name f__01F7_33C8_0018_05C5
 * @implements 01F7:33C8:0018:05C5 ()
 *
 * Called From: 01F7:33B0:0030:93A7
 * Called From: 01F7:33B0:001C:2400
 */
void f__01F7_33C8_0018_05C5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x4);
	if (emu_flags.zf) { f__01F7_33E2_004A_D92C(); return; }
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_push(emu_cs);
	emu_push(0x33E0); emu_ip = 0x1741; emu_last_cs = 0x01F7; emu_last_ip = 0x33DD; emu_last_length = 0x0018; emu_last_crc = 0x05C5; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_33E2_004A_D92C()
 *
 * @name f__01F7_33E2_004A_D92C
 * @implements 01F7:33E2:004A:D92C ()
 *
 * Called From: 01F7:33D1:0018:05C5
 */
void f__01F7_33E2_004A_D92C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0xF3);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addws(&emu_dx.x, 0x5);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	emu_cmpws(&emu_di, 0x2);
	if (emu_flags.zf) { f__01F7_346E_0006_1452(); return; }
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x346E; emu_last_cs = 0x01F7; emu_last_ip = 0x3410; emu_last_length = 0x004A; emu_last_crc = 0xD92C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x77C0), 0x1F7);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x77BE), 0x4484);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { emu_ip = 0x3447; emu_last_cs = 0x01F7; emu_last_ip = 0x3424; emu_last_length = 0x004A; emu_last_crc = 0xD92C; emu_call(); return; } // Jump does not resolve
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x342C); f__01F7_184B_000A_9146();
	f__01F7_342C_000E_7D70();
}

/**
 * Decompiled function f__01F7_342C_000E_7D70()
 *
 * @name f__01F7_342C_000E_7D70
 * @implements 01F7:342C:000E:7D70 ()
 *
 * Called From: 01F7:342C:004A:D92C
 */
void f__01F7_342C_000E_7D70()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__01F7_343A_000A_D823(); return; }
	emu_ip = 0x3379; emu_last_cs = 0x01F7; emu_last_ip = 0x3437; emu_last_length = 0x000E; emu_last_crc = 0x7D70; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_343A_000A_D823()
 *
 * @name f__01F7_343A_000A_D823
 * @implements 01F7:343A:000A:D823 ()
 *
 * Called From: 01F7:3435:000E:7D70
 */
void f__01F7_343A_000A_D823()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x4);
	f__01F7_3447_002D_8DA6(); return;
}

/**
 * Decompiled function f__01F7_3447_002D_8DA6()
 *
 * @name f__01F7_3447_002D_8DA6
 * @implements 01F7:3447:002D:8DA6 ()
 *
 * Called From: 01F7:3442:000A:D823
 */
void f__01F7_3447_002D_8DA6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_si);
	emu_cmpws(&emu_di, 0x1);
	if (!emu_flags.zf) { emu_ip = 0x346E; emu_last_cs = 0x01F7; emu_last_ip = 0x3467; emu_last_length = 0x002D; emu_last_crc = 0x8DA6; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_346E_0006_1452()
 *
 * @name f__01F7_346E_0006_1452
 * @implements 01F7:346E:0006:1452 ()
 *
 * Called From: 01F7:340C:004A:D92C
 */
void f__01F7_346E_0006_1452()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_374D_001D_AA1B()
 *
 * @name f__01F7_374D_001D_AA1B
 * @implements 01F7:374D:001D:AA1B ()
 *
 * Called From: 01F7:1166:001A:962D
 */
void f__01F7_374D_001D_AA1B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs);
	emu_push(0x376A); f__01F7_28B8_0024_83C9();
	f__01F7_376A_0023_2BAF();
}

/**
 * Decompiled function f__01F7_376A_0023_2BAF()
 *
 * @name f__01F7_376A_0023_2BAF
 * @implements 01F7:376A:0023:2BAF ()
 *
 * Called From: 01F7:376A:001D:AA1B
 */
void f__01F7_376A_0023_2BAF()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_addw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	emu_push(emu_bx.x);
	emu_push(emu_es);
	emu_movw(&emu_es, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_ax.x, emu_es);
	emu_pop(&emu_es);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_es, emu_ax.x);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movw(&emu_ax.x, emu_si);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 10;
	return;
}

/**
 * Decompiled function f__01F7_378D_0020_0F64()
 *
 * @name f__01F7_378D_0020_0F64
 * @implements 01F7:378D:0020:0F64 ()
 *
 * Called From: 0972:0612:0012:6987
 * Called From: 0AEC:06FD:000D:A042
 * Called From: 0C3A:1B2E:000D:A042
 * Called From: 10E4:082D:001B:C66D
 * Called From: 10E4:0842:0015:9380
 * Called From: 1A34:285B:0018:A7FE
 * Called From: 1A34:2924:000C:6F7F
 * Called From: B480:039A:009A:0548
 * Called From: B4B5:0047:0038:72B6
 * Called From: B4B8:0A95:002B:8318
 * Called From: B4B8:22A8:0018:A862
 * Called From: B4DA:0027:002C:B3C2
 * Called From: B4E0:0465:0036:4669
 * Called From: B4ED:0345:003E:5B9C
 * Called From: B4ED:0345:001A:CFD9
 * Called From: B4F2:11C5:0016:244A
 * Called From: B4FC:0013:0018:E5DC
 * Called From: B4FC:0439:001D:503F
 * Called From: B503:05AB:0013:54BB
 * Called From: B503:05EF:0013:55F7
 * Called From: B503:096E:001E:C363
 * Called From: B503:0CC8:001A:FEEE
 * Called From: B503:0D70:0024:968B
 * Called From: B503:0E1D:0011:B034
 * Called From: B503:111D:0031:8BDC
 * Called From: B511:0D90:0023:911C
 * Called From: B511:0D90:0022:9A3C
 * Called From: B511:12E7:002A:D28B
 * Called From: B518:0CBC:000D:A042
 */
void f__01F7_378D_0020_0F64()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movw(&emu_ax.x, 0x374D);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_bp + 0xE);
	emu_push(emu_ax.x);
	emu_push(0x37AD); f__01F7_111F_001A_B513();
	f__01F7_37AD_0002_2597();
}

/**
 * Decompiled function f__01F7_37AD_0002_2597()
 *
 * @name f__01F7_37AD_0002_2597
 * @implements 01F7:37AD:0002:2597 ()
 *
 * Called From: 01F7:37AD:0020:0F64
 */
void f__01F7_37AD_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_37AF_001F_03E8()
 *
 * @name f__01F7_37AF_001F_03E8
 * @implements 01F7:37AF:001F:03E8 ()
 *
 * Called From: 10E4:0297:0029:DCE5
 * Called From: 10E4:09D7:0031:5E8E
 * Called From: 10E4:2030:0027:C344
 * Called From: 10E4:2030:002F:F3AC
 */
void f__01F7_37AF_001F_03E8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movw(&emu_ax.x, 0x374D);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(0x37CE); f__01F7_111F_001A_B513();
	f__01F7_37CE_0002_2597();
}

/**
 * Decompiled function f__01F7_37CE_0002_2597()
 *
 * @name f__01F7_37CE_0002_2597
 * @implements 01F7:37CE:0002:2597 ()
 *
 * Called From: 01F7:37CE:001F:03E8
 */
void f__01F7_37CE_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_37D0_0021_EE69()
 *
 * @name f__01F7_37D0_0021_EE69
 * @implements 01F7:37D0:0021:EE69 ()
 *
 * Called From: 01F7:0886:001E:B02C
 * Called From: 01F7:0D78:0022:B62B
 * Called From: 01F7:0D78:000C:E4D5
 * Called From: 01F7:0E6C:0011:46E9
 * Called From: 01F7:0E6C:001B:D936
 */
void f__01F7_37D0_0021_EE69()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_es, emu_ax.x);
	emu_movb(&emu_dx.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { f__01F7_37F1_0007_26E0(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	f__01F7_37F5_0003_2A57(); return;
}

/**
 * Decompiled function f__01F7_37F1_0007_26E0()
 *
 * @name f__01F7_37F1_0007_26E0
 * @implements 01F7:37F1:0007:26E0 ()
 *
 * Called From: 01F7:37EA:0021:EE69
 */
void f__01F7_37F1_0007_26E0()
{
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movb(&emu_ax.h, 0x0);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_37F5_0003_2A57()
 *
 * @name f__01F7_37F5_0003_2A57
 * @implements 01F7:37F5:0003:2A57 ()
 *
 * Called From: 01F7:37EF:0021:EE69
 */
void f__01F7_37F5_0003_2A57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_37F8_000B_8F48()
 *
 * @name f__01F7_37F8_000B_8F48
 * @implements 01F7:37F8:000B:8F48 ()
 *
 * Called From: 01F7:0EB2:000A:70B4
 */
void f__01F7_37F8_000B_8F48()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_3803_001E_AAD4()
 *
 * @name f__01F7_3803_001E_AAD4
 * @implements 01F7:3803:001E:AAD4 ()
 *
 * Called From: B4DA:1240:0018:9D99
 * Called From: B503:0655:0033:8391
 * Called From: B503:09B3:001C:7696
 * Called From: B503:0E62:001C:7696
 * Called From: B503:126C:0017:1F8F
 */
void f__01F7_3803_001E_AAD4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x37F8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x37D0);
	emu_push(emu_ax.x);
	emu_push(0x3821); f__01F7_083A_0014_CDF5();
	f__01F7_3821_0005_6383();
}

/**
 * Decompiled function f__01F7_3821_0005_6383()
 *
 * @name f__01F7_3821_0005_6383
 * @implements 01F7:3821:0005:6383 ()
 *
 * Called From: 01F7:3821:001E:AAD4
 */
void f__01F7_3821_0005_6383()
{
	emu_addws(&emu_sp, 0x10);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_384A_003F_AE43()
 *
 * @name f__01F7_384A_003F_AE43
 * @implements 01F7:384A:003F:AE43 ()
 *
 * Called From: 0642:0794:0017:3AC1
 * Called From: 0642:07AD:0019:BAF4
 * Called From: 1A34:293A:000F:BC4B
 * Called From: 1DB6:0158:0010:743C
 * Called From: B518:1313:0012:3A86
 * Called From: B518:138B:0020:B4DF
 * Called From: B518:139D:0012:4286
 * Called From: B518:13C1:000D:D1AE
 */
void f__01F7_384A_003F_AE43()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cld();
	emu_push(emu_ds);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_di);
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_movw(&emu_cx.x, 0xFFFF);
	emu_repne_scasb();
	emu_push(emu_es);
	emu_movw(&emu_si, emu_di - 0x1);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, 0xFFFF);
	emu_repne_scasb();
	emu_notw(&emu_cx.x, emu_cx.x);
	emu_subw(&emu_di, emu_cx.x);
	emu_push(emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_es);
	emu_xchgw(&emu_di, &emu_si);
	emu_testw(&emu_si, 0x1);
	if (emu_flags.zf) { f__01F7_387A_000F_165F(); return; }
	emu_movsb(emu_ds);
	emu_decw(&emu_cx.x);
	emu_shrw(&emu_cx.x, 0x1);
	emu_rep_movsw(emu_ds);
	if (!emu_flags.cf) { f__01F7_3881_0008_45B1(); return; }
	emu_movsb(emu_ds);
	emu_xchgw(&emu_ax.x, &emu_dx.x);
	emu_movw(&emu_dx.x, emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_387A_000F_165F()
 *
 * @name f__01F7_387A_000F_165F
 * @implements 01F7:387A:000F:165F ()
 *
 * Called From: 01F7:3876:003F:AE43
 */
void f__01F7_387A_000F_165F()
{
	emu_shrw(&emu_cx.x, 0x1);
	emu_rep_movsw(emu_ds);
	if (!emu_flags.cf) { f__01F7_3881_0008_45B1(); return; }
	emu_movsb(emu_ds);
	emu_xchgw(&emu_ax.x, &emu_dx.x);
	emu_movw(&emu_dx.x, emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3881_0008_45B1()
 *
 * @name f__01F7_3881_0008_45B1
 * @implements 01F7:3881:0008:45B1 ()
 *
 * Called From: 01F7:387E:000F:165F
 * Called From: 01F7:387E:003F:AE43
 */
void f__01F7_3881_0008_45B1()
{
	emu_xchgw(&emu_ax.x, &emu_dx.x);
	emu_movw(&emu_dx.x, emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3889_0033_4660()
 *
 * @name f__01F7_3889_0033_4660
 * @implements 01F7:3889:0033:4660 ()
 *
 * Called From: B4B8:0AA7:0012:3EFE
 * Called From: B4FC:047D:002B:AFC3
 * Called From: B4FC:047D:000F:D507
 * Called From: B4FC:04EF:0025:5BB1
 * Called From: B4FC:058D:0017:0D26
 * Called From: B4FC:058D:0013:EDC2
 * Called From: B4FC:061D:001E:C800
 * Called From: B4FC:0635:0018:5684
 * Called From: B4FC:065B:0012:379C
 * Called From: B4FC:06FC:000F:D49F
 * Called From: B4FC:0777:0015:3D82
 * Called From: B518:0CD4:0018:CBCF
 */
void f__01F7_3889_0033_4660()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_cld();
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_bx.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_testw(&emu_si, 0x1);
	if (emu_flags.zf) { f__01F7_38A4_0018_3CB8(); return; }
	emu_lodsb(emu_ds);
	emu_cmpb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { f__01F7_38BC_000A_3CBE(); return; }
	emu_andb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x38B5; emu_last_cs = 0x01F7; emu_last_ip = 0x38A2; emu_last_length = 0x0033; emu_last_crc = 0x4660; emu_call(); return; } // Jump does not resolve
	emu_lodsw(emu_ds);
	emu_cmpb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { f__01F7_38BD_0009_2D3E(); return; }
	emu_andb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x38B5; emu_last_cs = 0x01F7; emu_last_ip = 0x38AB; emu_last_length = 0x0033; emu_last_crc = 0x4660; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.h, emu_bx.l);
	if (emu_flags.zf) { f__01F7_38BC_000A_3CBE(); return; }
	emu_andb(&emu_ax.h, emu_ax.h);
	if (!emu_flags.zf) { f__01F7_38A4_0018_3CB8(); return; }
	emu_pop(&emu_ds);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x38C3; emu_last_cs = 0x01F7; emu_last_ip = 0x38BA; emu_last_length = 0x0033; emu_last_crc = 0x4660; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_38A4_0018_3CB8()
 *
 * @name f__01F7_38A4_0018_3CB8
 * @implements 01F7:38A4:0018:3CB8 ()
 *
 * Called From: 01F7:3899:0033:4660
 * Called From: 01F7:38B3:0033:4660
 * Called From: 01F7:38B3:0018:3CB8
 */
void f__01F7_38A4_0018_3CB8()
{
	emu_lodsw(emu_ds);
	emu_cmpb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { f__01F7_38BD_0009_2D3E(); return; }
	emu_andb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__01F7_38B5_0007_2117(); return; }
	emu_cmpb(&emu_ax.h, emu_bx.l);
	if (emu_flags.zf) { f__01F7_38BC_000A_3CBE(); return; }
	emu_andb(&emu_ax.h, emu_ax.h);
	if (!emu_flags.zf) { f__01F7_38A4_0018_3CB8(); return; }
	emu_pop(&emu_ds);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__01F7_38C3_0003_2E57(); return;
}

/**
 * Decompiled function f__01F7_38B5_0007_2117()
 *
 * @name f__01F7_38B5_0007_2117
 * @implements 01F7:38B5:0007:2117 ()
 *
 * Called From: 01F7:38AB:0018:3CB8
 */
void f__01F7_38B5_0007_2117()
{
	emu_pop(&emu_ds);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__01F7_38C3_0003_2E57(); return;
}

/**
 * Decompiled function f__01F7_38BC_000A_3CBE()
 *
 * @name f__01F7_38BC_000A_3CBE
 * @implements 01F7:38BC:000A:3CBE ()
 *
 * Called From: 01F7:389E:0033:4660
 * Called From: 01F7:38AF:0018:3CB8
 * Called From: 01F7:38AF:0033:4660
 */
void f__01F7_38BC_000A_3CBE()
{
	emu_incw(&emu_si);
	emu_movw(&emu_ax.x, emu_si - 0x2);
	emu_movw(&emu_dx.x, emu_ds);
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_38BD_0009_2D3E()
 *
 * @name f__01F7_38BD_0009_2D3E
 * @implements 01F7:38BD:0009:2D3E ()
 *
 * Called From: 01F7:38A7:0018:3CB8
 * Called From: 01F7:38A7:0033:4660
 */
void f__01F7_38BD_0009_2D3E()
{
	emu_movw(&emu_ax.x, emu_si - 0x2);
	emu_movw(&emu_dx.x, emu_ds);
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_38C3_0003_2E57()
 *
 * @name f__01F7_38C3_0003_2E57
 * @implements 01F7:38C3:0003:2E57 ()
 *
 * Called From: 01F7:38BA:0018:3CB8
 * Called From: 01F7:38BA:0007:2117
 */
void f__01F7_38C3_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_38C6_0030_705A()
 *
 * @name f__01F7_38C6_0030_705A
 * @implements 01F7:38C6:0030:705A ()
 *
 * Called From: B4DA:1577:0012:9005
 */
void f__01F7_38C6_0030_705A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_dx.x, emu_ds);
	emu_cld();
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_si, emu_di);
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_movw(&emu_cx.x, 0xFFFF);
	emu_repne_scasb();
	emu_notw(&emu_cx.x, emu_cx.x);
	emu_movw(&emu_di, emu_si);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_rep_cmpsb(emu_ds);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si, -0x1));
	emu_movb(&emu_bx.l, emu_get_memory8(emu_es, emu_di, -0x1));
	emu_subw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_38F6_0029_8B99()
 *
 * @name f__01F7_38F6_0029_8B99
 * @implements 01F7:38F6:0029:8B99 ()
 *
 * Called From: 01F7:27EC:0010:D57C
 * Called From: 01F7:40FD:0024:F92B
 * Called From: 01F7:4112:0015:9374
 * Called From: 10E4:0A75:001F:F767
 * Called From: 10E4:0BC3:000F:3D5D
 * Called From: 10E4:0BED:0012:B741
 * Called From: 10E4:0BED:0014:9F42
 * Called From: 10E4:0CAF:001F:FF74
 * Called From: 10E4:0CCD:001E:659A
 * Called From: 1DB6:011D:0012:EEC5
 * Called From: B4E0:0480:000E:69F3
 * Called From: B4F2:126F:0014:86F2
 * Called From: B518:0CF2:0013:A981
 * Called From: B518:1301:0010:0F35
 * Called From: B52A:02D5:0063:F767
 */
void f__01F7_38F6_0029_8B99()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cld();
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_si, emu_di);
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_movw(&emu_cx.x, 0xFFFF);
	emu_repne_scasb();
	emu_notw(&emu_cx.x, emu_cx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, emu_es);
	emu_movw(&emu_ds, emu_ax.x);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_rep_movsb(emu_ds);
	emu_pop(&emu_ds);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3964_0041_7552()
 *
 * @name f__01F7_3964_0041_7552
 * @implements 01F7:3964:0041:7552 ()
 *
 * Called From: 10E4:0A56:0015:56BE
 * Called From: 10E4:0C5E:000F:1C48
 * Called From: 10E4:0C77:000F:9C4E
 * Called From: 10E4:0C90:000F:1C4D
 * Called From: 1381:0033:0023:81F4
 * Called From: 1381:0078:001C:0B13
 * Called From: 1FB5:1B04:0011:AD2D
 * Called From: B530:002E:0023:BD3C
 * Called From: B533:002E:0023:A798
 */
void f__01F7_3964_0041_7552()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_dx.x, emu_ds);
	emu_cld();
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_cx.x, 0x617A);
	emu_lodsb(emu_ds);
	emu_movb(&emu_bx.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x399D; emu_last_cs = 0x01F7; emu_last_ip = 0x397F; emu_last_length = 0x0041; emu_last_crc = 0x7552; emu_call(); return; } // Jump does not resolve
	emu_scasb();
	if (emu_flags.zf) { f__01F7_3979_002C_34A6(); return; }
	emu_cmpb(&emu_ax.l, emu_cx.h);
	if (emu_flags.cf) { f__01F7_398E_0017_CC6E(); return; }
	emu_cmpb(&emu_ax.l, emu_cx.l);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x398E; emu_last_cs = 0x01F7; emu_last_ip = 0x398A; emu_last_length = 0x0041; emu_last_crc = 0x7552; emu_call(); return; } // Jump does not resolve
	emu_subb(&emu_ax.l, 0x20);
	emu_cmpb(&emu_bx.l, emu_cx.h);
	if (emu_flags.cf) { f__01F7_3999_000C_B4D0(); return; }
	emu_cmpb(&emu_bx.l, emu_cx.l);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x3999; emu_last_cs = 0x01F7; emu_last_ip = 0x3994; emu_last_length = 0x0041; emu_last_crc = 0x7552; emu_call(); return; } // Jump does not resolve
	emu_subb(&emu_bx.l, 0x20);
	emu_cmpb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { emu_ip = 0x3979; emu_last_cs = 0x01F7; emu_last_ip = 0x399B; emu_last_length = 0x0041; emu_last_crc = 0x7552; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3979_002C_34A6()
 *
 * @name f__01F7_3979_002C_34A6
 * @implements 01F7:3979:002C:34A6 ()
 *
 * Called From: 01F7:3982:002C:34A6
 * Called From: 01F7:3982:0041:7552
 * Called From: 01F7:399B:0017:CC6E
 * Called From: 01F7:399B:000C:B4D0
 */
void f__01F7_3979_002C_34A6()
{
	emu_lodsb(emu_ds);
	emu_movb(&emu_bx.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__01F7_399D_0008_CA06(); return; }
	emu_scasb();
	if (emu_flags.zf) { f__01F7_3979_002C_34A6(); return; }
	emu_cmpb(&emu_ax.l, emu_cx.h);
	if (emu_flags.cf) { f__01F7_398E_0017_CC6E(); return; }
	emu_cmpb(&emu_ax.l, emu_cx.l);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x398E; emu_last_cs = 0x01F7; emu_last_ip = 0x398A; emu_last_length = 0x002C; emu_last_crc = 0x34A6; emu_call(); return; } // Jump does not resolve
	emu_subb(&emu_ax.l, 0x20);
	emu_cmpb(&emu_bx.l, emu_cx.h);
	if (emu_flags.cf) { f__01F7_3999_000C_B4D0(); return; }
	emu_cmpb(&emu_bx.l, emu_cx.l);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x3999; emu_last_cs = 0x01F7; emu_last_ip = 0x3994; emu_last_length = 0x002C; emu_last_crc = 0x34A6; emu_call(); return; } // Jump does not resolve
	emu_subb(&emu_bx.l, 0x20);
	emu_cmpb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { emu_ip = 0x3979; emu_last_cs = 0x01F7; emu_last_ip = 0x399B; emu_last_length = 0x002C; emu_last_crc = 0x34A6; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_398E_0017_CC6E()
 *
 * @name f__01F7_398E_0017_CC6E
 * @implements 01F7:398E:0017:CC6E ()
 *
 * Called From: 01F7:3986:0041:7552
 * Called From: 01F7:3986:002C:34A6
 */
void f__01F7_398E_0017_CC6E()
{
	emu_cmpb(&emu_bx.l, emu_cx.h);
	if (emu_flags.cf) { f__01F7_3999_000C_B4D0(); return; }
	emu_cmpb(&emu_bx.l, emu_cx.l);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x3999; emu_last_cs = 0x01F7; emu_last_ip = 0x3994; emu_last_length = 0x0017; emu_last_crc = 0xCC6E; emu_call(); return; } // Jump does not resolve
	emu_subb(&emu_bx.l, 0x20);
	emu_cmpb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { f__01F7_3979_002C_34A6(); return; }
	emu_subw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3999_000C_B4D0()
 *
 * @name f__01F7_3999_000C_B4D0
 * @implements 01F7:3999:000C:B4D0 ()
 *
 * Called From: 01F7:3990:0017:CC6E
 * Called From: 01F7:3990:0041:7552
 * Called From: 01F7:3990:002C:34A6
 */
void f__01F7_3999_000C_B4D0()
{
	emu_cmpb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { f__01F7_3979_002C_34A6(); return; }
	emu_subw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_399D_0008_CA06()
 *
 * @name f__01F7_399D_0008_CA06
 * @implements 01F7:399D:0008:CA06 ()
 *
 * Called From: 01F7:397F:002C:34A6
 */
void f__01F7_399D_0008_CA06()
{
	emu_subw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_39A5_001F_1A5D()
 *
 * @name f__01F7_39A5_001F_1A5D
 * @implements 01F7:39A5:001F:1A5D ()
 *
 * Called From: 01F7:27AD:000A:3382
 * Called From: 0FCB:0133:000C:74DA
 * Called From: 1A34:2918:000D:2180
 * Called From: 1DB6:012A:000D:43EF
 * Called From: 2521:0045:0015:AA0F
 * Called From: B4B5:0292:000B:6FB9
 * Called From: B4B5:03A6:000B:6148
 * Called From: B4B5:062D:000E:6326
 * Called From: B4B5:064A:000B:6148
 * Called From: B4B5:087A:0054:FF92
 * Called From: B4B5:0897:000B:6148
 * Called From: B4B5:0A35:000B:714A
 * Called From: B4B5:0C3E:000B:6148
 * Called From: B4B5:0E39:000B:414C
 * Called From: B4B5:0E56:000B:6148
 * Called From: B4B5:0F90:000B:714A
 * Called From: B4B5:0FAD:000B:6148
 * Called From: B4B5:1052:000B:714A
 * Called From: B4B5:1052:001B:6488
 * Called From: B4B8:0B1D:0022:7AFB
 * Called From: B4DA:0E12:0013:390A
 * Called From: B4DA:13AC:000D:BCD8
 * Called From: B4DA:161D:000D:BCD8
 * Called From: B4DA:1A56:0011:649B
 * Called From: B4FC:0452:000C:346F
 * Called From: B4FC:053F:000B:6148
 * Called From: B4FC:0576:0017:0883
 * Called From: B4FC:0762:000D:14AC
 * Called From: B4FC:0838:001E:E9EF
 * Called From: B511:08A1:000E:9B98
 * Called From: B518:0777:0017:5D3C
 */
void f__01F7_39A5_001F_1A5D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__01F7_39B7_000D_EFE3(); return; }
	emu_cmpw(&emu_ax.x, emu_di);
	if (emu_flags.zf) { emu_ip = 0x39C1; emu_last_cs = 0x01F7; emu_last_ip = 0x39B5; emu_last_length = 0x001F; emu_last_crc = 0x1A5D; emu_call(); return; } // Jump does not resolve
	emu_cld();
	emu_movw(&emu_cx.x, 0xFFFF);
	emu_repne_scasb();
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_notw(&emu_ax.x, emu_ax.x);
	emu_decw(&emu_ax.x);
	emu_pop(&emu_di);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_39B7_000D_EFE3()
 *
 * @name f__01F7_39B7_000D_EFE3
 * @implements 01F7:39B7:000D:EFE3 ()
 *
 * Called From: 01F7:39B1:001F:1A5D
 */
void f__01F7_39B7_000D_EFE3()
{
	emu_cld();
	emu_movw(&emu_cx.x, 0xFFFF);
	emu_repne_scasb();
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_notw(&emu_ax.x, emu_ax.x);
	emu_decw(&emu_ax.x);
	emu_pop(&emu_di);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_39C4_0031_EE87()
 *
 * @name f__01F7_39C4_0031_EE87
 * @implements 01F7:39C4:0031:EE87 ()
 *
 * Called From: B4FC:03EF:002C:9251
 * Called From: B503:0CFE:002E:9EAC
 */
void f__01F7_39C4_0031_EE87()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cld();
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_si, emu_di);
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_cx.x, emu_bx.x);
	emu_repne_scasb();
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_push(emu_ds);
	emu_movw(&emu_di, emu_es);
	emu_movw(&emu_ds, emu_di);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xchgw(&emu_bx.x, &emu_cx.x);
	emu_rep_movsb(emu_ds);
	emu_movw(&emu_cx.x, emu_bx.x);
	emu_rep_stosb();
	emu_pop(&emu_ds);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3A8A_0018_E4EE()
 *
 * @name f__01F7_3A8A_0018_E4EE
 * @implements 01F7:3A8A:0018:E4EE ()
 *
 * Called From: B4B5:0273:000E:B38A
 */
void f__01F7_3A8A_0018_E4EE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_3AA2_003F_5E2F(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ip = 0x3AF4; emu_last_cs = 0x01F7; emu_last_ip = 0x3AA0; emu_last_length = 0x0018; emu_last_crc = 0xE4EE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_3AA2_003F_5E2F()
 *
 * @name f__01F7_3AA2_003F_5E2F
 * @implements 01F7:3AA2:003F:5E2F ()
 *
 * Called From: 01F7:3A98:0018:E4EE
 */
void f__01F7_3AA2_003F_5E2F()
{
	emu_push(emu_ds);
	emu_cld();
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_es);
	emu_movw(&emu_bx.x, emu_di);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_cx.x, 0xFFFF);
	emu_repne_scasb();
	emu_notw(&emu_cx.x, emu_cx.x);
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_es);
	emu_movw(&emu_bp, emu_di);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_cx.x, 0xFFFF);
	emu_repne_scasb();
	emu_incw(&emu_cx.x);
	emu_notw(&emu_cx.x, emu_cx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_es);
	emu_movw(&emu_si, emu_bp);
	emu_lodsb(emu_ds);
	emu_xchgw(&emu_bx.x, &emu_di);
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	emu_repne_scasb();
	emu_movw(&emu_bx.x, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x3AD8; emu_last_cs = 0x01F7; emu_last_ip = 0x3AD2; emu_last_length = 0x003F; emu_last_crc = 0x5E2F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, emu_dx.x);
	if (!emu_flags.cf) { f__01F7_3AE1_0017_4E03(); return; }
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_movw(&emu_es, emu_bx.x);
	emu_movw(&emu_bx.x, 0x1);
	emu_ip = 0x3AEE; emu_last_cs = 0x01F7; emu_last_ip = 0x3ADF; emu_last_length = 0x003F; emu_last_crc = 0x5E2F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_3AC7_001A_452C()
 *
 * @name f__01F7_3AC7_001A_452C
 * @implements 01F7:3AC7:001A:452C ()
 *
 * Called From: 01F7:3AEC:0017:4E03
 */
void f__01F7_3AC7_001A_452C()
{
	emu_movw(&emu_si, emu_bp);
	emu_lodsb(emu_ds);
	emu_xchgw(&emu_bx.x, &emu_di);
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	emu_repne_scasb();
	emu_movw(&emu_bx.x, emu_di);
	if (!emu_flags.zf) { f__01F7_3AD8_0009_8564(); return; }
	emu_cmpw(&emu_cx.x, emu_dx.x);
	if (!emu_flags.cf) { emu_ip = 0x3AE1; emu_last_cs = 0x01F7; emu_last_ip = 0x3AD6; emu_last_length = 0x001A; emu_last_crc = 0x452C; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_movw(&emu_es, emu_bx.x);
	emu_movw(&emu_bx.x, 0x1);
	emu_ip = 0x3AEE; emu_last_cs = 0x01F7; emu_last_ip = 0x3ADF; emu_last_length = 0x001A; emu_last_crc = 0x452C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_3AD8_0009_8564()
 *
 * @name f__01F7_3AD8_0009_8564
 * @implements 01F7:3AD8:0009:8564 ()
 *
 * Called From: 01F7:3AD2:001A:452C
 */
void f__01F7_3AD8_0009_8564()
{
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_movw(&emu_es, emu_bx.x);
	emu_movw(&emu_bx.x, 0x1);
	f__01F7_3AEE_000A_AC55(); return;
}

/**
 * Decompiled function f__01F7_3AE1_0017_4E03()
 *
 * @name f__01F7_3AE1_0017_4E03
 * @implements 01F7:3AE1:0017:4E03 ()
 *
 * Called From: 01F7:3AD6:003F:5E2F
 */
void f__01F7_3AE1_0017_4E03()
{
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	if (emu_cx.x == 0) { emu_ip = 0x3AEE; emu_last_cs = 0x01F7; emu_last_ip = 0x3AE3; emu_last_length = 0x0017; emu_last_crc = 0x4E03; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_decw(&emu_cx.x);
	emu_rep_cmpsb(emu_ds);
	emu_movw(&emu_cx.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_3AC7_001A_452C(); return; }
	emu_pop(&emu_ds);
	emu_movw(&emu_ax.x, emu_bx.x);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_dx.x, emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3AEE_000A_AC55()
 *
 * @name f__01F7_3AEE_000A_AC55
 * @implements 01F7:3AEE:000A:AC55 ()
 *
 * Called From: 01F7:3ADF:0009:8564
 */
void f__01F7_3AEE_000A_AC55()
{
	emu_pop(&emu_ds);
	emu_movw(&emu_ax.x, emu_bx.x);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_dx.x, emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3AF8_001D_A439()
 *
 * @name f__01F7_3AF8_001D_A439
 * @implements 01F7:3AF8:001D:A439 ()
 *
 * Called From: B4B5:0439:0013:2B96
 * Called From: B4B5:045F:0010:8687
 * Called From: B4B5:04AD:0019:B499
 * Called From: B4B5:04F1:0019:97D1
 * Called From: B4B5:051F:001C:DBB3
 * Called From: B4B5:0542:0019:A2F9
 * Called From: B4B5:0792:0013:2B96
 * Called From: B4B5:07B0:0014:A580
 * Called From: B4B5:07DE:0010:8687
 * Called From: B4B5:07FD:0015:F37B
 * Called From: B4B5:0A7E:0013:2BE2
 * Called From: B4B5:0ADA:003E:17EA
 * Called From: B4B5:0B22:0013:2BE2
 * Called From: B4B5:0B7D:0010:86F3
 * Called From: B4B5:0BC5:0013:2BE2
 * Called From: B4B5:0CE5:0013:2B96
 * Called From: B4B5:0ED2:0013:2B96
 */
void f__01F7_3AF8_001D_A439()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__01F7_3B4B_001A_0078(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x651C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x651E), emu_dx.x);
	f__01F7_3B4B_001A_0078(); return;
}

/**
 * Decompiled function f__01F7_3B15_000E_8402()
 *
 * @name f__01F7_3B15_000E_8402
 * @implements 01F7:3B15:000E:8402 ()
 *
 * Called From: 01F7:3B53:001A:0078
 */
void f__01F7_3B15_000E_8402()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	f__01F7_3B35_0030_ADAF(); return;
}

/**
 * Decompiled function f__01F7_3B23_0042_18E1()
 *
 * @name f__01F7_3B23_0042_18E1
 * @implements 01F7:3B23:0042:18E1 ()
 *
 * Called From: 01F7:3B3C:0030:ADAF
 * Called From: 01F7:3B3C:0042:18E1
 */
void f__01F7_3B23_0042_18E1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	if (emu_flags.zf) { emu_ip = 0x3B3E; emu_last_cs = 0x01F7; emu_last_ip = 0x3B30; emu_last_length = 0x0042; emu_last_crc = 0x18E1; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__01F7_3B23_0042_18E1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__01F7_3B55_0010_9E5D(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x3B15; emu_last_cs = 0x01F7; emu_last_ip = 0x3B53; emu_last_length = 0x0042; emu_last_crc = 0x18E1; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x3B65; emu_last_cs = 0x01F7; emu_last_ip = 0x3B5D; emu_last_length = 0x0042; emu_last_crc = 0x18E1; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x3BBB; emu_last_cs = 0x01F7; emu_last_ip = 0x3B63; emu_last_length = 0x0042; emu_last_crc = 0x18E1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_3B35_0030_ADAF()
 *
 * @name f__01F7_3B35_0030_ADAF
 * @implements 01F7:3B35:0030:ADAF ()
 *
 * Called From: 01F7:3B21:000E:8402
 */
void f__01F7_3B35_0030_ADAF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__01F7_3B23_0042_18E1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x3B55; emu_last_cs = 0x01F7; emu_last_ip = 0x3B45; emu_last_length = 0x0030; emu_last_crc = 0xADAF; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x3B15; emu_last_cs = 0x01F7; emu_last_ip = 0x3B53; emu_last_length = 0x0030; emu_last_crc = 0xADAF; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x3B65; emu_last_cs = 0x01F7; emu_last_ip = 0x3B5D; emu_last_length = 0x0030; emu_last_crc = 0xADAF; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x3BBB; emu_last_cs = 0x01F7; emu_last_ip = 0x3B63; emu_last_length = 0x0030; emu_last_crc = 0xADAF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_3B4B_001A_0078()
 *
 * @name f__01F7_3B4B_001A_0078
 * @implements 01F7:3B4B:001A:0078 ()
 *
 * Called From: 01F7:3B04:001D:A439
 * Called From: 01F7:3B13:001D:A439
 */
void f__01F7_3B4B_001A_0078()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__01F7_3B15_000E_8402(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x3B65; emu_last_cs = 0x01F7; emu_last_ip = 0x3B5D; emu_last_length = 0x001A; emu_last_crc = 0x0078; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__01F7_3BBB_0004_893F(); return;
}

/**
 * Decompiled function f__01F7_3B55_0010_9E5D()
 *
 * @name f__01F7_3B55_0010_9E5D
 * @implements 01F7:3B55:0010:9E5D ()
 *
 * Called From: 01F7:3B45:0042:18E1
 */
void f__01F7_3B55_0010_9E5D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__01F7_3B65_000F_A092(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x3BBB; emu_last_cs = 0x01F7; emu_last_ip = 0x3B63; emu_last_length = 0x0010; emu_last_crc = 0x9E5D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_3B65_000F_A092()
 *
 * @name f__01F7_3B65_000F_A092
 * @implements 01F7:3B65:000F:A092 ()
 *
 * Called From: 01F7:3B5D:0010:9E5D
 */
void f__01F7_3B65_000F_A092()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x651C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	f__01F7_3BAB_0014_266B(); return;
}

/**
 * Decompiled function f__01F7_3B74_000E_8302()
 *
 * @name f__01F7_3B74_000E_8302
 * @implements 01F7:3B74:000E:8302 ()
 *
 * Called From: 01F7:3BB3:0014:266B
 * Called From: 01F7:3BB3:0024:A95A
 */
void f__01F7_3B74_000E_8302()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	f__01F7_3B9E_0021_51AA(); return;
}

/**
 * Decompiled function f__01F7_3B82_0019_65CA()
 *
 * @name f__01F7_3B82_0019_65CA
 * @implements 01F7:3B82:0019:65CA ()
 *
 * Called From: 01F7:3BA5:0021:51AA
 * Called From: 01F7:3BA5:0024:A95A
 */
void f__01F7_3B82_0019_65CA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	if (!emu_flags.zf) { f__01F7_3B9B_0024_A95A(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x651E));
	f__01F7_3BB5_000A_4F03(); return;
}

/**
 * Decompiled function f__01F7_3B9B_0024_A95A()
 *
 * @name f__01F7_3B9B_0024_A95A
 * @implements 01F7:3B9B:0024:A95A ()
 *
 * Called From: 01F7:3B8F:0019:65CA
 */
void f__01F7_3B9B_0024_A95A()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__01F7_3B82_0019_65CA(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__01F7_3B74_000E_8302(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3B9E_0021_51AA()
 *
 * @name f__01F7_3B9E_0021_51AA
 * @implements 01F7:3B9E:0021:51AA ()
 *
 * Called From: 01F7:3B80:000E:8302
 */
void f__01F7_3B9E_0021_51AA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__01F7_3B82_0019_65CA(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x3B74; emu_last_cs = 0x01F7; emu_last_ip = 0x3BB3; emu_last_length = 0x0021; emu_last_crc = 0x51AA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3BAB_0014_266B()
 *
 * @name f__01F7_3BAB_0014_266B
 * @implements 01F7:3BAB:0014:266B ()
 *
 * Called From: 01F7:3B72:000F:A092
 */
void f__01F7_3BAB_0014_266B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__01F7_3B74_000E_8302(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3BB5_000A_4F03()
 *
 * @name f__01F7_3BB5_000A_4F03
 * @implements 01F7:3BB5:000A:4F03 ()
 *
 * Called From: 01F7:3B99:0019:65CA
 */
void f__01F7_3BB5_000A_4F03()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3BBB_0004_893F()
 *
 * @name f__01F7_3BBB_0004_893F
 * @implements 01F7:3BBB:0004:893F ()
 *
 * Called From: 01F7:3B63:001A:0078
 */
void f__01F7_3BBB_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3CD5_000D_9D98()
 *
 * @name f__01F7_3CD5_000D_9D98
 * @implements 01F7:3CD5:000D:9D98 ()
 *
 * Called From: B4B5:0265:000E:4C74
 * Called From: B4FC:0446:000D:8516
 */
void f__01F7_3CD5_000D_9D98()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_cld();
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_si);
	f__01F7_3CED_000C_E35E(); return;
}

/**
 * Decompiled function f__01F7_3CE2_0017_5350()
 *
 * @name f__01F7_3CE2_0017_5350
 * @implements 01F7:3CE2:0017:5350 ()
 *
 * Called From: 01F7:3CF0:000C:E35E
 * Called From: 01F7:3CF0:0017:5350
 */
void f__01F7_3CE2_0017_5350()
{
	emu_subb(&emu_ax.l, 0x61);
	emu_cmpb(&emu_ax.l, 0x19);
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_3CED_000C_E35E(); return; }
	emu_addb(&emu_ax.l, 0x41);
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x1), emu_ax.l);
	emu_lodsb(emu_ds);
	emu_andb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { f__01F7_3CE2_0017_5350(); return; }
	emu_xchgw(&emu_ax.x, &emu_dx.x);
	emu_movw(&emu_dx.x, emu_ds);
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3CED_000C_E35E()
 *
 * @name f__01F7_3CED_000C_E35E
 * @implements 01F7:3CED:000C:E35E ()
 *
 * Called From: 01F7:3CE0:000D:9D98
 * Called From: 01F7:3CE6:0017:5350
 */
void f__01F7_3CED_000C_E35E()
{
	emu_lodsb(emu_ds);
	emu_andb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { f__01F7_3CE2_0017_5350(); return; }
	emu_xchgw(&emu_ax.x, &emu_dx.x);
	emu_movw(&emu_dx.x, emu_ds);
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3CF9_000C_1201()
 *
 * @name f__01F7_3CF9_000C_1201
 * @implements 01F7:3CF9:000C:1201 ()
 *
 * Called From: 01F7:1069:0011:10F9
 */
void f__01F7_3CF9_000C_1201()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x3D05); f__01F7_4027_0011_8951();
	f__01F7_3D05_0032_1561();
}

/**
 * Decompiled function f__01F7_3D05_0032_1561()
 *
 * @name f__01F7_3D05_0032_1561
 * @implements 01F7:3D05:0032:1561 ()
 *
 * Called From: 01F7:3D05:000C:1201
 */
void f__01F7_3D05_0032_1561()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B50));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x7B4E));
	emu_addw(&emu_dx.x, 0xA600);
	emu_adcw(&emu_ax.x, 0x12CE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_addw(&emu_si, 0xF844);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_cwd();
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_dx.x, 0x786);
	emu_movw(&emu_ax.x, 0x1F80);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_push(0x3D37); f__01F7_079C_0017_78BE();
	f__01F7_3D37_0019_225A();
}

/**
 * Decompiled function f__01F7_3D37_0019_225A()
 *
 * @name f__01F7_3D37_0019_225A
 * @implements 01F7:3D37:0019:225A ()
 *
 * Called From: 01F7:3D37:0032:1561
 */
void f__01F7_3D37_0019_225A()
{
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_andw(&emu_ax.x, 0x3);
	emu_cwd();
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_dx.x, 0x1E1);
	emu_movw(&emu_ax.x, 0x3380);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_push(0x3D50); f__01F7_079C_0017_78BE();
	f__01F7_3D50_0024_0E49();
}

/**
 * Decompiled function f__01F7_3D50_0024_0E49()
 *
 * @name f__01F7_3D50_0024_0E49
 * @implements 01F7:3D50:0024:0E49 ()
 *
 * Called From: 01F7:3D50:0019:225A
 */
void f__01F7_3D50_0024_0E49()
{
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_testw(&emu_si, 0x3);
	if (emu_flags.zf) { f__01F7_3D65_000F_C671(); return; }
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x5180);
	emu_adcws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_ip = 0x3D7C; emu_last_cs = 0x01F7; emu_last_ip = 0x3D72; emu_last_length = 0x0024; emu_last_crc = 0x0E49; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_3D65_000F_C671()
 *
 * @name f__01F7_3D65_000F_C671
 * @implements 01F7:3D65:000F:C671 ()
 *
 * Called From: 01F7:3D5A:0024:0E49
 */
void f__01F7_3D65_000F_C671()
{
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	f__01F7_3D7C_0053_E1F5(); return;
}

/**
 * Decompiled function f__01F7_3D7C_0053_E1F5()
 *
 * @name f__01F7_3D7C_0053_E1F5
 * @implements 01F7:3D7C:0053:E1F5 ()
 *
 * Called From: 01F7:3D72:000F:C671
 */
void f__01F7_3D7C_0053_E1F5()
{
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x3D74; emu_last_cs = 0x01F7; emu_last_ip = 0x3D7E; emu_last_length = 0x0053; emu_last_crc = 0xE1F5; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_decw(&emu_ax.x);
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0x2);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_3D9A_0035_C4C8(); return; }
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x3);
	if (!emu_flags.zf) { emu_ip = 0x3D9A; emu_last_cs = 0x01F7; emu_last_ip = 0x3D97; emu_last_length = 0x0053; emu_last_crc = 0xE1F5; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7B52), 0x0);
	if (emu_flags.zf) { emu_ip = 0x3DD4; emu_last_cs = 0x01F7; emu_last_ip = 0x3DB5; emu_last_length = 0x0053; emu_last_crc = 0xE1F5; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_addw(&emu_ax.x, 0xF84E);
	emu_push(emu_ax.x);
	emu_push(0x3DCF); emu_ip = 0x4215; emu_last_cs = 0x01F7; emu_last_ip = 0x3DCC; emu_last_length = 0x0053; emu_last_crc = 0xE1F5; emu_call(); // Jump does not resolve
	f__01F7_3DCF_0014_372E();
}

/**
 * Decompiled function f__01F7_3D9A_0035_C4C8()
 *
 * @name f__01F7_3D9A_0035_C4C8
 * @implements 01F7:3D9A:0035:C4C8 ()
 *
 * Called From: 01F7:3D90:0053:E1F5
 */
void f__01F7_3D9A_0035_C4C8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7B52), 0x0);
	if (emu_flags.zf) { emu_ip = 0x3DD4; emu_last_cs = 0x01F7; emu_last_ip = 0x3DB5; emu_last_length = 0x0035; emu_last_crc = 0xC4C8; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_addw(&emu_ax.x, 0xF84E);
	emu_push(emu_ax.x);
	emu_push(0x3DCF); f__01F7_4215_0026_431F();
	f__01F7_3DCF_0014_372E();
}

/**
 * Decompiled function f__01F7_3DCF_0014_372E()
 *
 * @name f__01F7_3DCF_0014_372E
 * @implements 01F7:3DCF:0014:372E ()
 *
 * Called From: 01F7:3DCF:0035:C4C8
 */
void f__01F7_3DCF_0014_372E()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__01F7_3DD4_000F_9FFD(); return; }
	emu_decw(&emu_si);
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0xE10);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_push(0x3DE3); emu_ip = 0x079C; emu_last_cs = 0x01F7; emu_last_ip = 0x3DE0; emu_last_length = 0x0014; emu_last_crc = 0x372E; emu_call(); // Jump does not resolve
	f__01F7_3DE3_001B_E08E();
}

/**
 * Decompiled function f__01F7_3DD4_000F_9FFD()
 *
 * @name f__01F7_3DD4_000F_9FFD
 * @implements 01F7:3DD4:000F:9FFD ()
 *
 * Called From: 01F7:3DD1:0014:372E
 */
void f__01F7_3DD4_000F_9FFD()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0xE10);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_push(0x3DE3); f__01F7_079C_0017_78BE();
	f__01F7_3DE3_001B_E08E();
}

/**
 * Decompiled function f__01F7_3DE3_001B_E08E()
 *
 * @name f__01F7_3DE3_001B_E08E
 * @implements 01F7:3DE3:001B:E08E ()
 *
 * Called From: 01F7:3DE3:000F:9FFD
 */
void f__01F7_3DE3_001B_E08E()
{
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_cwd();
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x3C);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_push(0x3DFE); f__01F7_079C_0017_78BE();
	f__01F7_3DFE_0025_0E25();
}

/**
 * Decompiled function f__01F7_3DFE_0025_0E25()
 *
 * @name f__01F7_3DFE_0025_0E25
 * @implements 01F7:3DFE:0025:0E25 ()
 *
 * Called From: 01F7:3DFE:001B:E08E
 */
void f__01F7_3DFE_0025_0E25()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_bx.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movb(&emu_bx.h, 0x0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_bx.x);
	emu_push(emu_dx.x);
	emu_cwd();
	emu_pop(&emu_bx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_adcw(&emu_bx.x, emu_dx.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_cx.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_bx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_4027_0011_8951()
 *
 * @name f__01F7_4027_0011_8951
 * @implements 01F7:4027:0011:8951 ()
 *
 * Called From: 01F7:0222:0015:AC4F
 * Called From: 01F7:3D02:000C:1201
 */
void f__01F7_4027_0011_8951()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x7B54);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x4038); f__01F7_27FD_0037_E2C0();
	f__01F7_4038_000F_86C4();
}

/**
 * Decompiled function f__01F7_4038_000F_86C4()
 *
 * @name f__01F7_4038_000F_86C4
 * @implements 01F7:4038:000F:86C4 ()
 *
 * Called From: 01F7:4038:0011:8951
 */
void f__01F7_4038_000F_86C4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x4047; emu_last_cs = 0x01F7; emu_last_ip = 0x4042; emu_last_length = 0x000F; emu_last_crc = 0x86C4; emu_call(); return; } // Jump does not resolve
	f__01F7_40DC_0024_F92B(); return;
}

/**
 * Decompiled function f__01F7_40DC_0024_F92B()
 *
 * @name f__01F7_40DC_0024_F92B
 * @implements 01F7:40DC:0024:F92B ()
 *
 * Called From: 01F7:4044:000F:86C4
 */
void f__01F7_40DC_0024_F92B()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B52), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B50), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B4E), 0x4650);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x7B57);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7B48));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7B46));
	emu_push(emu_cs);
	emu_push(0x4100); f__01F7_38F6_0029_8B99();
	f__01F7_4100_0015_9374();
}

/**
 * Decompiled function f__01F7_4100_0015_9374()
 *
 * @name f__01F7_4100_0015_9374
 * @implements 01F7:4100:0015:9374 ()
 *
 * Called From: 01F7:4100:0024:F92B
 */
void f__01F7_4100_0015_9374()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x7B5B);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7B4C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7B4A));
	emu_push(emu_cs);
	emu_push(0x4115); f__01F7_38F6_0029_8B99();
	f__01F7_4115_0006_D73F();
}

/**
 * Decompiled function f__01F7_4115_0006_D73F()
 *
 * @name f__01F7_4115_0006_D73F
 * @implements 01F7:4115:0006:D73F ()
 *
 * Called From: 01F7:4115:0015:9374
 */
void f__01F7_4115_0006_D73F()
{
	emu_addws(&emu_sp, 0x8);
	f__01F7_4210_0005_8BCF(); return;
}

/**
 * Decompiled function f__01F7_4210_0005_8BCF()
 *
 * @name f__01F7_4210_0005_8BCF
 * @implements 01F7:4210:0005:8BCF ()
 *
 * Called From: 01F7:4118:0006:D73F
 */
void f__01F7_4210_0005_8BCF()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_4215_0026_431F()
 *
 * @name f__01F7_4215_0026_431F
 * @implements 01F7:4215:0026:431F ()
 *
 * Called From: 01F7:3DCC:0035:C4C8
 */
void f__01F7_4215_0026_431F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x424B; emu_last_cs = 0x01F7; emu_last_ip = 0x421D; emu_last_length = 0x0026; emu_last_crc = 0x431F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x3B);
	if (emu_flags.cf) { f__01F7_4234_0007_D805(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_addw(&emu_ax.x, 0x46);
	emu_testw(&emu_ax.x, 0x3);
	if (!emu_flags.zf) { emu_ip = 0x4234; emu_last_cs = 0x01F7; emu_last_ip = 0x4231; emu_last_length = 0x0026; emu_last_crc = 0x431F; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	emu_ip = 0x423E; emu_last_cs = 0x01F7; emu_last_ip = 0x4239; emu_last_length = 0x0026; emu_last_crc = 0x431F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_4234_0007_D805()
 *
 * @name f__01F7_4234_0007_D805
 * @implements 01F7:4234:0007:D805 ()
 *
 * Called From: 01F7:4226:0026:431F
 */
void f__01F7_4234_0007_D805()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	f__01F7_423E_000D_0C9E(); return;
}

/**
 * Decompiled function f__01F7_423B_0010_8079()
 *
 * @name f__01F7_423B_0010_8079
 * @implements 01F7:423B:0010:8079 ()
 *
 * Called From: 01F7:4247:000D:0C9E
 */
void f__01F7_423B_0010_8079()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x7B2C), emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x423B; emu_last_cs = 0x01F7; emu_last_ip = 0x4247; emu_last_length = 0x0010; emu_last_crc = 0x8079; emu_call(); return; } // Jump does not resolve
	f__01F7_426C_002A_8B7E(); return;
}

/**
 * Decompiled function f__01F7_423E_000D_0C9E()
 *
 * @name f__01F7_423E_000D_0C9E
 * @implements 01F7:423E:000D:0C9E ()
 *
 * Called From: 01F7:4239:0007:D805
 */
void f__01F7_423E_000D_0C9E()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x7B2C), emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { f__01F7_423B_0010_8079(); return; }
	emu_ip = 0x426C; emu_last_cs = 0x01F7; emu_last_ip = 0x4249; emu_last_length = 0x000D; emu_last_crc = 0x0C9E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_426C_002A_8B7E()
 *
 * @name f__01F7_426C_002A_8B7E
 * @implements 01F7:426C:002A:8B7E ()
 *
 * Called From: 01F7:4249:0010:8079
 */
void f__01F7_426C_002A_8B7E()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x4);
	if (emu_flags.cf) { f__01F7_42ED_0007_CAD2(); return; }
	if (emu_flags.zf) { emu_ip = 0x427C; emu_last_cs = 0x01F7; emu_last_ip = 0x4272; emu_last_length = 0x002A; emu_last_crc = 0x8B7E; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0xA);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x42ED; emu_last_cs = 0x01F7; emu_last_ip = 0x4278; emu_last_length = 0x002A; emu_last_crc = 0x8B7E; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x42E8; emu_last_cs = 0x01F7; emu_last_ip = 0x427A; emu_last_length = 0x002A; emu_last_crc = 0x8B7E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x4), 0x10);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x4296; emu_last_cs = 0x01F7; emu_last_ip = 0x4285; emu_last_length = 0x002A; emu_last_crc = 0x8B7E; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x4296; emu_last_cs = 0x01F7; emu_last_ip = 0x428B; emu_last_length = 0x002A; emu_last_crc = 0x8B7E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x7B2A));
	emu_addws(&emu_cx.x, 0x7);
	emu_ip = 0x429A; emu_last_cs = 0x01F7; emu_last_ip = 0x4294; emu_last_length = 0x002A; emu_last_crc = 0x8B7E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_42ED_0007_CAD2()
 *
 * @name f__01F7_42ED_0007_CAD2
 * @implements 01F7:42ED:0007:CAD2 ()
 *
 * Called From: 01F7:4270:002A:8B7E
 */
void f__01F7_42ED_0007_CAD2()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 8;
	return;
}

/**
 * Decompiled function f__01F7_42F4_0019_54E2()
 *
 * @name f__01F7_42F4_0019_54E2
 * @implements 01F7:42F4:0019:54E2 ()
 *
 * Called From: 01F7:2F8F:0015:335E
 * Called From: 01F7:4481:0003:623C
 */
void f__01F7_42F4_0019_54E2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8E);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x795A));
	if (emu_flags.cf) { f__01F7_4310_000E_757D(); return; }
	emu_movw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_push(0x430D); emu_ip = 0x0675; emu_last_cs = 0x01F7; emu_last_ip = 0x430A; emu_last_length = 0x0019; emu_last_crc = 0x54E2; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_4310_000E_757D()
 *
 * @name f__01F7_4310_000E_757D
 * @implements 01F7:4310:000E:757D ()
 *
 * Called From: 01F7:4304:0019:54E2
 */
void f__01F7_4310_000E_757D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_incw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (!emu_flags.cf) { f__01F7_431E_001C_8DD0(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x443F; emu_last_cs = 0x01F7; emu_last_ip = 0x431B; emu_last_length = 0x000E; emu_last_crc = 0x757D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_431E_001C_8DD0()
 *
 * @name f__01F7_431E_001C_8DD0
 * @implements 01F7:431E:001C:8DD0 ()
 *
 * Called From: 01F7:4317:000E:757D
 */
void f__01F7_431E_001C_8DD0()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x800);
	if (emu_flags.zf) { f__01F7_433D_001B_C045(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x433A); emu_ip = 0x0773; emu_last_cs = 0x01F7; emu_last_ip = 0x4337; emu_last_length = 0x001C; emu_last_crc = 0x8DD0; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_433D_001B_C045()
 *
 * @name f__01F7_433D_001B_C045
 * @implements 01F7:433D:001B:C045 ()
 *
 * Called From: 01F7:4328:001C:8DD0
 */
void f__01F7_433D_001B_C045()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x4000);
	if (!emu_flags.zf) { f__01F7_435E_001E_CFA7(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x4358); f__01F7_4445_0016_943B();
	f__01F7_4358_0006_D73A();
}

/**
 * Decompiled function f__01F7_4358_0006_D73A()
 *
 * @name f__01F7_4358_0006_D73A
 * @implements 01F7:4358:0006:D73A ()
 *
 * Called From: 01F7:4358:001B:C045
 */
void f__01F7_4358_0006_D73A()
{
	emu_addws(&emu_sp, 0x8);
	f__01F7_443F_0006_F7CE(); return;
}

/**
 * Decompiled function f__01F7_435E_001E_CFA7()
 *
 * @name f__01F7_435E_001E_CFA7
 * @implements 01F7:435E:001E:CFA7 ()
 *
 * Called From: 01F7:4347:001B:C045
 */
void f__01F7_435E_001E_CFA7()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_andw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0xFDFF);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	f__01F7_43F1_0013_1813(); return;
}

/**
 * Decompiled function f__01F7_437C_005A_66C8()
 *
 * @name f__01F7_437C_005A_66C8
 * @implements 01F7:437C:005A:66C8 ()
 *
 * Called From: 01F7:4401:0013:1813
 * Called From: 01F7:4401:0009:AEAB
 */
void f__01F7_437C_005A_66C8()
{
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x7), emu_ax.l);
	emu_cmpb(&emu_ax.l, 0xA);
	if (!emu_flags.zf) { f__01F7_4399_003D_4254(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xD);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x7));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_bp - 0x8E);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_sbbws(&emu_bx.x, 0x0);
	emu_orw(&emu_bx.x, emu_bx.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x43FB; emu_last_cs = 0x01F7; emu_last_ip = 0x43B5; emu_last_length = 0x005A; emu_last_crc = 0x66C8; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x43BF; emu_last_cs = 0x01F7; emu_last_ip = 0x43B7; emu_last_length = 0x005A; emu_last_crc = 0x66C8; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, 0x80);
	if (emu_flags.cf) { emu_ip = 0x43FB; emu_last_cs = 0x01F7; emu_last_ip = 0x43BD; emu_last_length = 0x005A; emu_last_crc = 0x66C8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_bp - 0x8E);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_subw(&emu_si, emu_ax.x);
	emu_sbbws(&emu_dx.x, 0x0);
	emu_push(emu_si);
	emu_push(emu_ss);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x43D6); emu_ip = 0x4445; emu_last_cs = 0x01F7; emu_last_ip = 0x43D3; emu_last_length = 0x005A; emu_last_crc = 0x66C8; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_4399_003D_4254()
 *
 * @name f__01F7_4399_003D_4254
 * @implements 01F7:4399:003D:4254 ()
 *
 * Called From: 01F7:438D:005A:66C8
 */
void f__01F7_4399_003D_4254()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x7));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_bp - 0x8E);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_sbbws(&emu_bx.x, 0x0);
	emu_orw(&emu_bx.x, emu_bx.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x43FB; emu_last_cs = 0x01F7; emu_last_ip = 0x43B5; emu_last_length = 0x003D; emu_last_crc = 0x4254; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x43BF; emu_last_cs = 0x01F7; emu_last_ip = 0x43B7; emu_last_length = 0x003D; emu_last_crc = 0x4254; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, 0x80);
	if (emu_flags.cf) { f__01F7_43FB_0009_AEAB(); return; }
	emu_movw(&emu_ax.x, emu_bp - 0x8E);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_subw(&emu_si, emu_ax.x);
	emu_sbbws(&emu_dx.x, 0x0);
	emu_push(emu_si);
	emu_push(emu_ss);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x43D6); emu_ip = 0x4445; emu_last_cs = 0x01F7; emu_last_ip = 0x43D3; emu_last_length = 0x003D; emu_last_crc = 0x4254; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_43F1_0013_1813()
 *
 * @name f__01F7_43F1_0013_1813
 * @implements 01F7:43F1:0013:1813 ()
 *
 * Called From: 01F7:437A:001E:CFA7
 */
void f__01F7_43F1_0013_1813()
{
	emu_movw(&emu_ax.x, emu_bp - 0x8E);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_flags.zf) { emu_ip = 0x4404; emu_last_cs = 0x01F7; emu_last_ip = 0x43FF; emu_last_length = 0x0013; emu_last_crc = 0x1813; emu_call(); return; } // Jump does not resolve
	f__01F7_437C_005A_66C8(); return;
}

/**
 * Decompiled function f__01F7_43FB_0009_AEAB()
 *
 * @name f__01F7_43FB_0009_AEAB
 * @implements 01F7:43FB:0009:AEAB ()
 *
 * Called From: 01F7:43BD:003D:4254
 */
void f__01F7_43FB_0009_AEAB()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_flags.zf) { f__01F7_4404_0021_4078(); return; }
	f__01F7_437C_005A_66C8(); return;
}

/**
 * Decompiled function f__01F7_4404_0021_4078()
 *
 * @name f__01F7_4404_0021_4078
 * @implements 01F7:4404:0021:4078 ()
 *
 * Called From: 01F7:43FF:0009:AEAB
 */
void f__01F7_4404_0021_4078()
{
	emu_movw(&emu_ax.x, emu_bp - 0x8E);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_subw(&emu_si, emu_ax.x);
	emu_sbbws(&emu_dx.x, 0x0);
	emu_movw(&emu_ax.x, emu_si);
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x443C; emu_last_cs = 0x01F7; emu_last_ip = 0x4416; emu_last_length = 0x0021; emu_last_crc = 0x4078; emu_call(); return; } // Jump does not resolve
	emu_push(emu_si);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x8E);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x4425); f__01F7_4445_0016_943B();
	f__01F7_4425_0017_D0B7();
}

/**
 * Decompiled function f__01F7_4425_0017_D0B7()
 *
 * @name f__01F7_4425_0017_D0B7
 * @implements 01F7:4425:0017:D0B7 ()
 *
 * Called From: 01F7:4425:0021:4078
 */
void f__01F7_4425_0017_D0B7()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_si);
	if (emu_flags.zf) { f__01F7_443C_0009_3193(); return; }
	emu_cmpws(&emu_dx.x, 0xFF);
	if (emu_flags.zf) { emu_ip = 0x43E4; emu_last_cs = 0x01F7; emu_last_ip = 0x4431; emu_last_length = 0x0017; emu_last_crc = 0xD0B7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_subw(&emu_ax.x, emu_si);
	emu_ip = 0x443F; emu_last_cs = 0x01F7; emu_last_ip = 0x443A; emu_last_length = 0x0017; emu_last_crc = 0xD0B7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_443C_0009_3193()
 *
 * @name f__01F7_443C_0009_3193
 * @implements 01F7:443C:0009:3193 ()
 *
 * Called From: 01F7:442C:0017:D0B7
 */
void f__01F7_443C_0009_3193()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_443F_0006_F7CE()
 *
 * @name f__01F7_443F_0006_F7CE
 * @implements 01F7:443F:0006:F7CE ()
 *
 * Called From: 01F7:435B:0006:D73A
 */
void f__01F7_443F_0006_F7CE()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_4445_0016_943B()
 *
 * @name f__01F7_4445_0016_943B
 * @implements 01F7:4445:0016:943B ()
 *
 * Called From: 01F7:4355:001B:C045
 * Called From: 01F7:4422:0021:4078
 */
void f__01F7_4445_0016_943B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x1);
	if (emu_flags.zf) { f__01F7_445B_000E_5FED(); return; }
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_ip = 0x447C; emu_last_cs = 0x01F7; emu_last_ip = 0x4459; emu_last_length = 0x0016; emu_last_crc = 0x943B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_445B_000E_5FED()
 *
 * @name f__01F7_445B_000E_5FED
 * @implements 01F7:445B:000E:5FED ()
 *
 * Called From: 01F7:4453:0016:943B
 */
void f__01F7_445B_000E_5FED()
{
	emu_push(emu_ds);
	emu_movb(&emu_ax.h, 0x40);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x4469); f__0070_0108_0005_E45B();
	f__01F7_4469_0012_915E();
}

/**
 * Decompiled function f__01F7_4469_0012_915E()
 *
 * @name f__01F7_4469_0012_915E
 * @implements 01F7:4469:0012:915E ()
 *
 * Called From: 01F7:4469:000E:5FED
 */
void f__01F7_4469_0012_915E()
{
	emu_pop(&emu_ds);
	if (emu_flags.cf) { emu_ip = 0x447B; emu_last_cs = 0x01F7; emu_last_ip = 0x446A; emu_last_length = 0x0012; emu_last_crc = 0x915E; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_orw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x1000);
	emu_pop(&emu_ax.x);
	f__01F7_447F_0002_2597(); return;
}

/**
 * Decompiled function f__01F7_447F_0002_2597()
 *
 * @name f__01F7_447F_0002_2597
 * @implements 01F7:447F:0002:2597 ()
 *
 * Called From: 01F7:4479:0012:915E
 */
void f__01F7_447F_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_4481_0003_623C()
 *
 * @name f__01F7_4481_0003_623C
 * @implements 01F7:4481:0003:623C ()
 *
 * Called From: 1FB5:0109:001B:7009
 */
void f__01F7_4481_0003_623C()
{
	f__01F7_42F4_0019_54E2(); return;
}

/**
 * Decompiled function f__01F7_4484_0014_5939()
 *
 * @name f__01F7_4484_0014_5939
 * @implements 01F7:4484:0014:5939 ()
 *
 * Called From: 01F7:0349:0004:4860
 */
void f__01F7_4484_0014_5939()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, 0x4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x77CA);
	f__01F7_44B3_0009_7923(); return;
}

/**
 * Decompiled function f__01F7_4498_0014_E159()
 *
 * @name f__01F7_4498_0014_E159
 * @implements 01F7:4498:0014:E159 ()
 *
 * Called From: 01F7:44B5:0009:7923
 * Called From: 01F7:44B5:0010:5339
 */
void f__01F7_4498_0014_E159()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x3);
	if (emu_flags.zf) { emu_ip = 0x44AE; emu_last_cs = 0x01F7; emu_last_ip = 0x44A1; emu_last_length = 0x0014; emu_last_crc = 0xE159; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_bx.x);
	emu_push(emu_cs);
	emu_push(0x44AC); f__01F7_2412_0011_FC80();
	f__01F7_44AC_0010_5339();
}

/**
 * Decompiled function f__01F7_44AC_0010_5339()
 *
 * @name f__01F7_44AC_0010_5339
 * @implements 01F7:44AC:0010:5339 ()
 *
 * Called From: 01F7:44AC:0014:E159
 */
void f__01F7_44AC_0010_5339()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_decw(&emu_si);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x14);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__01F7_4498_0014_E159(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_44B3_0009_7923()
 *
 * @name f__01F7_44B3_0009_7923
 * @implements 01F7:44B3:0009:7923 ()
 *
 * Called From: 01F7:4496:0014:5939
 */
void f__01F7_44B3_0009_7923()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__01F7_4498_0014_E159(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
