/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__01F7_0000_000C_7FBC()
 *
 * @name f__01F7_0000_000C_7FBC
 * @implements 01F7:0000:000C:7FBC ()
 *
 * Called From: 0000:0000:0000:0000
 */
void f__01F7_0000_000C_7FBC()
{
	emu_movw(&emu_dx.x, 0x353F);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x291), emu_dx.x);
	emu_movb(&emu_ax.h, 0x30);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x000C); f__0070_0108_0005_1CF6();
	f__01F7_000C_001C_2E35();
}

/**
 * Decompiled function f__01F7_000C_001C_2E35()
 *
 * @name f__01F7_000C_001C_2E35
 * @implements 01F7:000C:001C:2E35 ()
 *
 * Called From: 01F7:000C:000C:7FBC
 */
void f__01F7_000C_001C_2E35()
{
	emu_movw(&emu_bp, emu_get_memory16(emu_ds, 0x00,  0x2));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x2C));
	emu_movw(&emu_ds, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7D), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B), emu_es);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x77), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x91), emu_bp);
	emu_push(0x0028); f__01F7_017D_0006_125E();
	f__01F7_0028_0059_CF03();
}

/**
 * Decompiled function f__01F7_0028_0059_CF03()
 *
 * @name f__01F7_0028_0059_CF03
 * @implements 01F7:0028:0059:CF03 ()
 *
 * Called From: 01F7:0028:001C:2E35
 */
void f__01F7_0028_0059_CF03()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x77));
	emu_movw(&emu_es, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_cx.x, 0x7FFF);
	emu_cld();
	emu_repne_scasb();
	if (emu_cx.x == 0) { emu_ip = 0x007E; emu_last_cs = 0x01F7; emu_last_ip = 0x0039; emu_last_length = 0x0059; emu_last_crc = 0xCF03; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_bx.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	if (!emu_flags.zf) { f__01F7_0037_004A_77E8(); return; }
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
	if (!emu_flags.cf) { emu_ip = 0x0075; emu_last_cs = 0x01F7; emu_last_ip = 0x006B; emu_last_length = 0x0059; emu_last_crc = 0xCF03; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_di, 0x200);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x7A68), emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_di, emu_cx.l);
	emu_incw(&emu_di);
	emu_cmpw(&emu_bp, emu_di);
	if (!emu_flags.cf) { emu_ip = 0x0081; emu_last_cs = 0x01F7; emu_last_ip = 0x007C; emu_last_length = 0x0059; emu_last_crc = 0xCF03; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x027A; emu_last_cs = 0x01F7; emu_last_ip = 0x007E; emu_last_length = 0x0059; emu_last_crc = 0xCF03; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0037_004A_77E8()
 *
 * @name f__01F7_0037_004A_77E8
 * @implements 01F7:0037:004A:77E8 ()
 *
 * Called From: 01F7:003F:004A:77E8
 * Called From: 01F7:003F:0059:CF03
 */
void f__01F7_0037_004A_77E8()
{
	emu_repne_scasb();
	if (emu_cx.x == 0) { emu_ip = 0x007E; emu_last_cs = 0x01F7; emu_last_ip = 0x0039; emu_last_length = 0x004A; emu_last_crc = 0x77E8; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_bx.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	if (!emu_flags.zf) { f__01F7_0037_004A_77E8(); return; }
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
	if (!emu_flags.cf) { f__01F7_0075_000C_C9B7(); return; }
	emu_movw(&emu_di, 0x200);
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x7A68), emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_di, emu_cx.l);
	emu_incw(&emu_di);
	emu_cmpw(&emu_bp, emu_di);
	if (!emu_flags.cf) { emu_ip = 0x0081; emu_last_cs = 0x01F7; emu_last_ip = 0x007C; emu_last_length = 0x004A; emu_last_crc = 0x77E8; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x027A; emu_last_cs = 0x01F7; emu_last_ip = 0x007E; emu_last_length = 0x004A; emu_last_crc = 0x77E8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0075_000C_C9B7()
 *
 * @name f__01F7_0075_000C_C9B7
 * @implements 01F7:0075:000C:C9B7 ()
 *
 * Called From: 01F7:006B:004A:77E8
 */
void f__01F7_0075_000C_C9B7()
{
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_di, emu_cx.l);
	emu_incw(&emu_di);
	emu_cmpw(&emu_bp, emu_di);
	if (!emu_flags.cf) { f__01F7_0081_0018_9706(); return; }
	emu_ip = 0x027A; emu_last_cs = 0x01F7; emu_last_ip = 0x007E; emu_last_length = 0x000C; emu_last_crc = 0xC9B7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0081_0018_9706()
 *
 * @name f__01F7_0081_0018_9706
 * @implements 01F7:0081:0018:9706 ()
 *
 * Called From: 01F7:007C:000C:C9B7
 */
void f__01F7_0081_0018_9706()
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
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0099); f__0070_0108_0005_1CF6();
	f__01F7_0099_0044_952A();
}

/**
 * Decompiled function f__01F7_0099_0044_952A()
 *
 * @name f__01F7_0099_0044_952A
 * @implements 01F7:0099:0044:952A ()
 *
 * Called From: 01F7:0099:0018:9706
 */
void f__01F7_0099_0044_952A()
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
	if ((emu_flags.cf || emu_flags.zf)) { f__01F7_010C_0004_0840(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7D), 0x3);
	if (emu_flags.cf) { emu_ip = 0x010C; emu_last_cs = 0x01F7; emu_last_ip = 0x00CA; emu_last_length = 0x0044; emu_last_crc = 0x952A; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x00D5; emu_last_cs = 0x01F7; emu_last_ip = 0x00CC; emu_last_length = 0x0044; emu_last_crc = 0x952A; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7E), 0x1E);
	if (emu_flags.cf) { emu_ip = 0x010C; emu_last_cs = 0x01F7; emu_last_ip = 0x00D3; emu_last_length = 0x0044; emu_last_crc = 0x952A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x5801);
	emu_movw(&emu_bx.x, 0x2);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x21 * 4 + 2); emu_push(0x00DD); emu_ip = emu_get_memory16(0, 0, 0x21 * 4 + 0); emu_last_cs = 0x01F7; emu_last_ip = 0x00DB; emu_last_length = 0x0044; emu_last_crc = 0x952A; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_010C_0004_0840()
 *
 * @name f__01F7_010C_0004_0840
 * @implements 01F7:010C:0004:0840 ()
 *
 * Called From: 01F7:00C3:0044:952A
 */
void f__01F7_010C_0004_0840()
{
	emu_movb(&emu_ax.h, 0x0);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0110); f__0070_00D0_0005_1D2E();
	f__01F7_0110_0028_05E2();
}

/**
 * Decompiled function f__01F7_0110_0028_05E2()
 *
 * @name f__01F7_0110_0028_05E2
 * @implements 01F7:0110:0028:05E2 ()
 *
 * Called From: 01F7:0110:0004:0840
 */
void f__01F7_0110_0028_05E2()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x81), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x83), emu_cx.x);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__01F7_0128_0010_34FE(); return; }
	emu_movw(&emu_ax.x, 0x40);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_bx.x, 0x70);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x1);
	emu_xorw(&emu_bp, emu_bp);
	emu_movw(&emu_es, emu_get_memory16(emu_cs, 0x00,  0x291));
	emu_movw(&emu_si, 0x7B68);
	emu_movw(&emu_di, 0x7B86);
	emu_push(0x0138); emu_ip = 0x01ED; emu_last_cs = 0x01F7; emu_last_ip = 0x0135; emu_last_length = 0x0028; emu_last_crc = 0x05E2; emu_call(); // Jump does not resolve
	f__01F7_0138_0019_69C0();
}

/**
 * Decompiled function f__01F7_0128_0010_34FE()
 *
 * @name f__01F7_0128_0010_34FE
 * @implements 01F7:0128:0010:34FE ()
 *
 * Called From: 01F7:011A:0028:05E2
 */
void f__01F7_0128_0010_34FE()
{
	emu_xorw(&emu_bp, emu_bp);
	emu_movw(&emu_es, emu_get_memory16(emu_cs, 0x00,  0x291));
	emu_movw(&emu_si, 0x7B68);
	emu_movw(&emu_di, 0x7B86);
	emu_push(0x0138); f__01F7_01ED_0024_2FF8();
	f__01F7_0138_0019_69C0();
}

/**
 * Decompiled function f__01F7_0138_0019_69C0()
 *
 * @name f__01F7_0138_0019_69C0
 * @implements 01F7:0138:0019:69C0 ()
 *
 * Called From: 01F7:0230:0001:0186
 */
void f__01F7_0138_0019_69C0()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x73));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x71));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6F));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6B));
	emu_push(emu_cs); emu_push(0x0151); emu_cs = 0x3480; ovl__3480(0);
	f__01F7_0151_0006_0124();
}

/**
 * Decompiled function f__01F7_0151_0006_0124()
 *
 * @name f__01F7_0151_0006_0124
 * @implements 01F7:0151:0006:0124 ()
 *
 * Called From: 01F7:0151:0019:69C0
 */
void f__01F7_0151_0006_0124()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0157); f__01F7_0377_000D_71AA();
	f__01F7_0157_0010_9660();
}

/**
 * Decompiled function f__01F7_0157_0010_9660()
 *
 * @name f__01F7_0157_0010_9660
 * @implements 01F7:0157:0010:9660 ()
 *
 * Called From: 01F7:0346:000C:D0AF
 */
void f__01F7_0157_0010_9660()
{
	emu_movw(&emu_es, emu_get_memory16(emu_cs, 0x00,  0x291));
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, 0x7B86);
	emu_movw(&emu_di, 0x7B8C);
	emu_push(0x0167); f__01F7_0231_0021_FA8A();
	f__01F7_0167_0003_0216();
}

/**
 * Decompiled function f__01F7_0167_0003_0216()
 *
 * @name f__01F7_0167_0003_0216
 * @implements 01F7:0167:0003:0216 ()
 *
 * Called From: 01F7:0167:0010:9660
 */
void f__01F7_0167_0003_0216()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_016A_0001_0196()
 *
 * @name f__01F7_016A_0001_0196
 * @implements 01F7:016A:0001:0196 ()
 *
 * Called From: 01F7:0354:0005:1410
 */
void f__01F7_016A_0001_0196()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_016B_0009_A577()
 *
 * @name f__01F7_016B_0009_A577
 * @implements 01F7:016B:0009:A577 ()
 *
 * Called From: 01F7:036E:0008:D2B2
 */
void f__01F7_016B_0009_A577()
{
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_ax.h, 0x4C);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x4));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0174); f__0070_0108_0005_1CF6();
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_017D_0006_125E()
 *
 * @name f__01F7_017D_0006_125E
 * @implements 01F7:017D:0006:125E ()
 *
 * Called From: 01F7:0025:001C:2E35
 */
void f__01F7_017D_0006_125E()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3500);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0183); f__0070_0108_0005_1CF6();
	f__01F7_0183_000D_3D0D();
}

/**
 * Decompiled function f__01F7_0183_000D_3D0D()
 *
 * @name f__01F7_0183_000D_3D0D
 * @implements 01F7:0183:000D:3D0D ()
 *
 * Called From: 01F7:0183:0006:125E
 */
void f__01F7_0183_000D_3D0D()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x5B), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x5D), emu_es);
	emu_movw(&emu_ax.x, 0x3504);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0190); f__0070_0108_0005_1CF6();
	f__01F7_0190_000D_031D();
}

/**
 * Decompiled function f__01F7_0190_000D_031D()
 *
 * @name f__01F7_0190_000D_031D
 * @implements 01F7:0190:000D:031D ()
 *
 * Called From: 01F7:0190:000D:3D0D
 */
void f__01F7_0190_000D_031D()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x5F), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x61), emu_es);
	emu_movw(&emu_ax.x, 0x3505);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x019D); f__0070_0108_0005_1CF6();
	f__01F7_019D_000D_E12C();
}

/**
 * Decompiled function f__01F7_019D_000D_E12C()
 *
 * @name f__01F7_019D_000D_E12C
 * @implements 01F7:019D:000D:E12C ()
 *
 * Called From: 01F7:019D:000D:031D
 */
void f__01F7_019D_000D_E12C()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x63), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x65), emu_es);
	emu_movw(&emu_ax.x, 0x3506);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01AA); f__0070_0108_0005_1CF6();
	f__01F7_01AA_0014_ED9D();
}

/**
 * Decompiled function f__01F7_01AA_0014_ED9D()
 *
 * @name f__01F7_01AA_0014_ED9D
 * @implements 01F7:01AA:0014:ED9D ()
 *
 * Called From: 01F7:01AA:000D:E12C
 */
void f__01F7_01AA_0014_ED9D()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x67), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x69), emu_es);
	emu_movw(&emu_ax.x, 0x2500);
	emu_movw(&emu_dx.x, emu_cs);
	emu_movw(&emu_ds, emu_dx.x);
	emu_movw(&emu_dx.x, 0x174);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01BE); f__0070_0108_0005_1CF6();
	f__01F7_01BE_0002_01FA();
}

/**
 * Decompiled function f__01F7_01BE_0002_01FA()
 *
 * @name f__01F7_01BE_0002_01FA
 * @implements 01F7:01BE:0002:01FA ()
 *
 * Called From: 01F7:01BE:0014:ED9D
 */
void f__01F7_01BE_0002_01FA()
{
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_01C0_000A_2FC7()
 *
 * @name f__01F7_01C0_000A_2FC7
 * @implements 01F7:01C0:000A:2FC7 ()
 *
 * Called From: 01F7:034F:0005:15E4
 */
void f__01F7_01C0_000A_2FC7()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2500);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ds, 0x00,  0x5B));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01CA); f__0070_0108_0005_1CF6();
	f__01F7_01CA_000B_D387();
}

/**
 * Decompiled function f__01F7_01CA_000B_D387()
 *
 * @name f__01F7_01CA_000B_D387
 * @implements 01F7:01CA:000B:D387 ()
 *
 * Called From: 01F7:01CA:000A:2FC7
 */
void f__01F7_01CA_000B_D387()
{
	emu_pop(&emu_ds);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2504);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ds, 0x00,  0x5F));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01D5); f__0070_0108_0005_1CF6();
	f__01F7_01D5_000B_D147();
}

/**
 * Decompiled function f__01F7_01D5_000B_D147()
 *
 * @name f__01F7_01D5_000B_D147
 * @implements 01F7:01D5:000B:D147 ()
 *
 * Called From: 01F7:01D5:000B:D387
 */
void f__01F7_01D5_000B_D147()
{
	emu_pop(&emu_ds);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2505);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ds, 0x00,  0x63));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01E0); f__0070_0108_0005_1CF6();
	f__01F7_01E0_000B_D207();
}

/**
 * Decompiled function f__01F7_01E0_000B_D207()
 *
 * @name f__01F7_01E0_000B_D207
 * @implements 01F7:01E0:000B:D207 ()
 *
 * Called From: 01F7:01E0:000B:D147
 */
void f__01F7_01E0_000B_D207()
{
	emu_pop(&emu_ds);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2506);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ds, 0x00,  0x67));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x01EB); f__0070_0108_0005_1CF6();
	f__01F7_01EB_0002_01EA();
}

/**
 * Decompiled function f__01F7_01EB_0002_01EA()
 *
 * @name f__01F7_01EB_0002_01EA
 * @implements 01F7:01EB:0002:01EA ()
 *
 * Called From: 01F7:01EB:000B:D207
 */
void f__01F7_01EB_0002_01EA()
{
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_01ED_0024_2FF8()
 *
 * @name f__01F7_01ED_0024_2FF8
 * @implements 01F7:01ED:0024:2FF8 ()
 *
 * Called From: 01F7:0135:0010:34FE
 * Called From: 01F7:0227:0003:021C
 * Called From: 01F7:022E:0003:02EE
 */
void f__01F7_01ED_0024_2FF8()
{
	emu_movw(&emu_ax.x, 0x100);
	emu_movw(&emu_dx.x, emu_di);
	emu_movw(&emu_bx.x, emu_si);
	emu_cmpw(&emu_bx.x, emu_di);
	if (emu_flags.zf) { emu_ip = 0x0211; emu_last_cs = 0x01F7; emu_last_ip = 0x01F6; emu_last_length = 0x0024; emu_last_crc = 0x2FF8; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { f__01F7_020C_0005_1E0A(); return; }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_xorb(&emu_cx.h, emu_cx.h);
	emu_cmpw(&emu_cx.x, emu_ax.x);
	if (!emu_flags.cf) { emu_ip = 0x020C; emu_last_cs = 0x01F7; emu_last_ip = 0x0206; emu_last_length = 0x0024; emu_last_crc = 0x2FF8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_bx.x);
	emu_addws(&emu_bx.x, 0x6);
	f__01F7_01F4_001D_25CF(); return;
}

/**
 * Decompiled function f__01F7_01F4_001D_25CF()
 *
 * @name f__01F7_01F4_001D_25CF
 * @implements 01F7:01F4:001D:25CF ()
 *
 * Called From: 01F7:020F:0005:1E0A
 * Called From: 01F7:020F:001D:25CF
 * Called From: 01F7:020F:0024:2FF8
 */
void f__01F7_01F4_001D_25CF()
{
	emu_cmpw(&emu_bx.x, emu_di);
	if (emu_flags.zf) { f__01F7_0211_0015_2B26(); return; }
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { f__01F7_020C_0005_1E0A(); return; }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_xorb(&emu_cx.h, emu_cx.h);
	emu_cmpw(&emu_cx.x, emu_ax.x);
	if (!emu_flags.cf) { f__01F7_020C_0005_1E0A(); return; }
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_bx.x);
	emu_addws(&emu_bx.x, 0x6);
	f__01F7_01F4_001D_25CF(); return;
}

/**
 * Decompiled function f__01F7_020C_0005_1E0A()
 *
 * @name f__01F7_020C_0005_1E0A
 * @implements 01F7:020C:0005:1E0A ()
 *
 * Called From: 01F7:01FC:001D:25CF
 * Called From: 01F7:01FC:0024:2FF8
 * Called From: 01F7:0206:001D:25CF
 */
void f__01F7_020C_0005_1E0A()
{
	emu_addws(&emu_bx.x, 0x6);
	f__01F7_01F4_001D_25CF(); return;
}

/**
 * Decompiled function f__01F7_0211_0015_2B26()
 *
 * @name f__01F7_0211_0015_2B26
 * @implements 01F7:0211:0015:2B26 ()
 *
 * Called From: 01F7:01F6:001D:25CF
 */
void f__01F7_0211_0015_2B26()
{
	emu_cmpw(&emu_dx.x, emu_di);
	if (emu_flags.zf) { f__01F7_0230_0001_0186(); return; }
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	emu_push(emu_es);
	if (emu_flags.zf) { p__01F7_0229_0004_04C0(); return; }

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx.x,  0x2);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx.x,  0x4);
	emu_push(0x0226);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F74027: f__01F7_4027_0011_D293(); break;
		case 0x217E0D2C: f__217E_0D2C_000B_D38F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0222; emu_last_length = 0x0015; emu_last_crc = 0x2B26;
			emu_call();
			return;
	}
	f__01F7_0226_0003_021C();
}

/**
 * Decompiled function f__01F7_0226_0003_021C()
 *
 * @name f__01F7_0226_0003_021C
 * @implements 01F7:0226:0003:021C ()
 *
 * Called From: 01F7:0226:0015:2B26
 */
void f__01F7_0226_0003_021C()
{
	emu_pop(&emu_es);
	f__01F7_01ED_0024_2FF8(); return;
}

/**
 * Decompiled function f__01F7_022D_0003_02EE()
 *
 * @name f__01F7_022D_0003_02EE
 * @implements 01F7:022D:0003:02EE ()
 *
 * Called From: 01F7:022D:0004:04C0
 * Called From: 01F7:21DA:0033:7B34
 */
void f__01F7_022D_0003_02EE()
{
	emu_pop(&emu_es);
	f__01F7_01ED_0024_2FF8(); return;
}

/**
 * Decompiled function f__01F7_0230_0001_0186()
 *
 * @name f__01F7_0230_0001_0186
 * @implements 01F7:0230:0001:0186 ()
 *
 * Called From: 01F7:0213:0015:2B26
 */
void f__01F7_0230_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_0231_0021_FA8A()
 *
 * @name f__01F7_0231_0021_FA8A
 * @implements 01F7:0231:0021:FA8A ()
 *
 * Called From: 01F7:0164:0010:9660
 * Called From: 01F7:0268:0003:021A
 */
void f__01F7_0231_0021_FA8A()
{
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, emu_di);
	emu_movw(&emu_bx.x, emu_si);
	emu_cmpw(&emu_bx.x, emu_di);
	if (emu_flags.zf) { emu_ip = 0x0252; emu_last_cs = 0x01F7; emu_last_ip = 0x0239; emu_last_length = 0x0021; emu_last_crc = 0xFA8A; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { f__01F7_024D_0005_1E06(); return; }
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), emu_ax.h);
	if (emu_flags.cf) { emu_ip = 0x024D; emu_last_cs = 0x01F7; emu_last_ip = 0x0245; emu_last_length = 0x0021; emu_last_crc = 0xFA8A; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.h, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_movw(&emu_dx.x, emu_bx.x);
	emu_addws(&emu_bx.x, 0x6);
	f__01F7_0237_001B_3B8E(); return;
}

/**
 * Decompiled function f__01F7_0237_001B_3B8E()
 *
 * @name f__01F7_0237_001B_3B8E
 * @implements 01F7:0237:001B:3B8E ()
 *
 * Called From: 01F7:0250:0005:1E06
 * Called From: 01F7:0250:0021:FA8A
 */
void f__01F7_0237_001B_3B8E()
{
	emu_cmpw(&emu_bx.x, emu_di);
	if (emu_flags.zf) { f__01F7_0252_0015_2B26(); return; }
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x024D; emu_last_cs = 0x01F7; emu_last_ip = 0x023F; emu_last_length = 0x001B; emu_last_crc = 0x3B8E; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), emu_ax.h);
	if (emu_flags.cf) { emu_ip = 0x024D; emu_last_cs = 0x01F7; emu_last_ip = 0x0245; emu_last_length = 0x001B; emu_last_crc = 0x3B8E; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.h, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_movw(&emu_dx.x, emu_bx.x);
	emu_addws(&emu_bx.x, 0x6);
	emu_ip = 0x0237; emu_last_cs = 0x01F7; emu_last_ip = 0x0250; emu_last_length = 0x001B; emu_last_crc = 0x3B8E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_024D_0005_1E06()
 *
 * @name f__01F7_024D_0005_1E06
 * @implements 01F7:024D:0005:1E06 ()
 *
 * Called From: 01F7:023F:0021:FA8A
 */
void f__01F7_024D_0005_1E06()
{
	emu_addws(&emu_bx.x, 0x6);
	f__01F7_0237_001B_3B8E(); return;
}

/**
 * Decompiled function f__01F7_0252_0015_2B26()
 *
 * @name f__01F7_0252_0015_2B26
 * @implements 01F7:0252:0015:2B26 ()
 *
 * Called From: 01F7:0239:001B:3B8E
 */
void f__01F7_0252_0015_2B26()
{
	emu_cmpw(&emu_dx.x, emu_di);
	if (emu_flags.zf) { f__01F7_0271_0001_0186(); return; }
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xFF);
	emu_push(emu_es);
	if (emu_flags.zf) { emu_ip = 0x026A; emu_last_cs = 0x01F7; emu_last_ip = 0x0261; emu_last_length = 0x0015; emu_last_crc = 0x2B26; emu_call(); return; } // Jump does not resolve

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx.x,  0x2);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx.x,  0x4);
	emu_push(0x0267);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x217E0198: f__217E_0198_0015_CAA0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0263; emu_last_length = 0x0015; emu_last_crc = 0x2B26;
			emu_call();
			return;
	}
	f__01F7_0267_0003_021A();
}

/**
 * Decompiled function f__01F7_0267_0003_021A()
 *
 * @name f__01F7_0267_0003_021A
 * @implements 01F7:0267:0003:021A ()
 *
 * Called From: 01F7:0267:0015:2B26
 */
void f__01F7_0267_0003_021A()
{
	emu_pop(&emu_es);
	f__01F7_0231_0021_FA8A(); return;
}

/**
 * Decompiled function f__01F7_0271_0001_0186()
 *
 * @name f__01F7_0271_0001_0186
 * @implements 01F7:0271:0001:0186 ()
 *
 * Called From: 01F7:0254:0015:2B26
 */
void f__01F7_0271_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_0272_0007_5E36()
 *
 * @name f__01F7_0272_0007_5E36
 * @implements 01F7:0272:0007:5E36 ()
 *
 * Called From: 01F7:0285:000E:DDBE
 */
void f__01F7_0272_0007_5E36()
{
	emu_movb(&emu_ax.h, 0x40);
	emu_movw(&emu_bx.x, 0x2);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0279); f__0070_0108_0005_1CF6();
	f__01F7_0279_0001_0186();
}

/**
 * Decompiled function f__01F7_0279_0001_0186()
 *
 * @name f__01F7_0279_0001_0186
 * @implements 01F7:0279:0001:0186 ()
 *
 * Called From: 01F7:0279:0007:5E36
 */
void f__01F7_0279_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_027A_000E_DDBE()
 *
 * @name f__01F7_027A_000E_DDBE
 * @implements 01F7:027A:000E:DDBE ()
 *
 * Called From: 217E:0D82:0005:192E
 */
void f__01F7_027A_000E_DDBE()
{
	emu_movw(&emu_cx.x, 0x1E);
	emu_movw(&emu_dx.x, 0x3D);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x291));
	emu_push(0x0288); f__01F7_0272_0007_5E36();
	f__01F7_0288_0009_7175();
}

/**
 * Decompiled function f__01F7_0288_0009_7175()
 *
 * @name f__01F7_0288_0009_7175
 * @implements 01F7:0288:0009:7175 ()
 *
 * Called From: 01F7:0288:000E:DDBE
 */
void f__01F7_0288_0009_7175()
{
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0291); f__01F7_0386_0010_6BCB();
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_02C9_0001_0196()
 *
 * @name f__01F7_02C9_0001_0196
 * @implements 01F7:02C9:0001:0196 ()
 *
 * Called From: 217E:03D0:001A:3A87
 * Called From: 217E:0551:0017:FBD1
 * Called From: 217E:0551:0020:0368
 */
void f__01F7_02C9_0001_0196()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_02F7_0007_1D3E()
 *
 * @name f__01F7_02F7_0007_1D3E
 * @implements 01F7:02F7:0007:1D3E ()
 *
 * Called From: 01F7:0435:0010:4994
 */
void f__01F7_02F7_0007_1D3E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_ax.h, 0x19);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x02FE); f__0070_0108_0005_1CF6();
	f__01F7_02FE_000B_C60F();
}

/**
 * Decompiled function f__01F7_02FE_000B_C60F()
 *
 * @name f__01F7_02FE_000B_C60F
 * @implements 01F7:02FE:000B:C60F ()
 *
 * Called From: 01F7:02FE:0007:1D3E
 */
void f__01F7_02FE_000B_C60F()
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
 * Decompiled function f__01F7_0309_000C_D785()
 *
 * @name f__01F7_0309_000C_D785
 * @implements 01F7:0309:000C:D785 ()
 *
 * Called From: 01F7:0454:0015:621D
 */
void f__01F7_0309_000C_D785()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_dx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_decb(&emu_dx.l);
	emu_movb(&emu_ax.h, 0xE);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0315); f__0070_0108_0005_1CF6();
	f__01F7_0315_000A_3588();
}

/**
 * Decompiled function f__01F7_0315_000A_3588()
 *
 * @name f__01F7_0315_000A_3588
 * @implements 01F7:0315:000A:3588 ()
 *
 * Called From: 01F7:0315:000C:D785
 */
void f__01F7_0315_000A_3588()
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
 * Decompiled function f__01F7_031F_0001_0196()
 *
 * @name f__01F7_031F_0001_0196
 * @implements 01F7:031F:0001:0196 ()
 *
 * Called From: 01F7:0361:000E:FE88
 * Called From: 01F7:0365:0004:0CF6
 */
void f__01F7_031F_0001_0196()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_0320_000D_55C9()
 *
 * @name f__01F7_0320_000D_55C9
 * @implements 01F7:0320:000D:55C9 ()
 *
 * Called From: 01F7:0381:000D:71AA
 * Called From: 01F7:0393:0010:6BCB
 */
void f__01F7_0320_000D_55C9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__01F7_034D_0005_15E4(); return; }
	f__01F7_033D_000C_D0AF(); return;
}

/**
 * Decompiled function f__01F7_033D_000C_D0AF()
 *
 * @name f__01F7_033D_000C_D0AF
 * @implements 01F7:033D:000C:D0AF ()
 *
 * Called From: 01F7:032B:000D:55C9
 */
void f__01F7_033D_000C_D0AF()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x76BA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x032D; emu_last_cs = 0x01F7; emu_last_ip = 0x0342; emu_last_length = 0x000C; emu_last_crc = 0xD0AF; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs);
	emu_push(0x0349); f__01F7_0157_0010_9660();
	f__01F7_0349_0004_0D16();
}

/**
 * Decompiled function f__01F7_0349_0004_0D16()
 *
 * @name f__01F7_0349_0004_0D16
 * @implements 01F7:0349:0004:0D16 ()
 *
 * Called From: 01F7:0349:000C:D0AF
 */
void f__01F7_0349_0004_0D16()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x77BE);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x77C0);
	emu_push(0x034D);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F74484: f__01F7_4484_0014_1052(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0349; emu_last_length = 0x0004; emu_last_crc = 0x0D16;
			emu_call();
			return;
	}
	f__01F7_034D_0005_15E4();
}

/**
 * Decompiled function f__01F7_034D_0005_15E4()
 *
 * @name f__01F7_034D_0005_15E4
 * @implements 01F7:034D:0005:15E4 ()
 *
 * Called From: 01F7:0329:000D:55C9
 * Called From: 01F7:034D:0004:0D16
 */
void f__01F7_034D_0005_15E4()
{
	emu_push(emu_cs);
	emu_push(0x0352); f__01F7_01C0_000A_2FC7();
	f__01F7_0352_0005_1410();
}

/**
 * Decompiled function f__01F7_0352_0005_1410()
 *
 * @name f__01F7_0352_0005_1410
 * @implements 01F7:0352:0005:1410 ()
 *
 * Called From: 01F7:0352:0005:15E4
 */
void f__01F7_0352_0005_1410()
{
	emu_push(emu_cs);
	emu_push(0x0357); f__01F7_016A_0001_0196();
	f__01F7_0357_000E_FE88();
}

/**
 * Decompiled function f__01F7_0357_000E_FE88()
 *
 * @name f__01F7_0357_000E_FE88
 * @implements 01F7:0357:000E:FE88 ()
 *
 * Called From: 01F7:0357:0005:1410
 */
void f__01F7_0357_000E_FE88()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0372; emu_last_cs = 0x01F7; emu_last_ip = 0x035B; emu_last_length = 0x000E; emu_last_crc = 0xFE88; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__01F7_0369_0008_D2B2(); return; }

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x77C2);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x77C4);
	emu_push(0x0365);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F7031F: f__01F7_031F_0001_0196(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0361; emu_last_length = 0x000E; emu_last_crc = 0xFE88;
			emu_call();
			return;
	}
	f__01F7_0365_0004_0CF6();
}

/**
 * Decompiled function f__01F7_0365_0004_0CF6()
 *
 * @name f__01F7_0365_0004_0CF6
 * @implements 01F7:0365:0004:0CF6 ()
 *
 * Called From: 01F7:0365:000E:FE88
 */
void f__01F7_0365_0004_0CF6()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x77C6);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x77C8);
	emu_push(0x0369);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x01F7031F: f__01F7_031F_0001_0196(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0365; emu_last_length = 0x0004; emu_last_crc = 0x0CF6;
			emu_call();
			return;
	}
	f__01F7_0369_0008_D2B2();
}

/**
 * Decompiled function f__01F7_0369_0008_D2B2()
 *
 * @name f__01F7_0369_0008_D2B2
 * @implements 01F7:0369:0008:D2B2 ()
 *
 * Called From: 01F7:035F:000E:FE88
 * Called From: 01F7:0369:0004:0CF6
 */
void f__01F7_0369_0008_D2B2()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_push(emu_cs);
	emu_push(0x0371); f__01F7_016B_0009_A577();
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_0377_000D_71AA()
 *
 * @name f__01F7_0377_000D_71AA
 * @implements 01F7:0377:000D:71AA ()
 *
 * Called From: 01F7:0154:0006:0124
 * Called From: 1423:0447:0008:50F6
 * Called From: B480:002E:000A:86F7
 * Called From: B4B8:1D65:0008:50F6
 */
void f__01F7_0377_000D_71AA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(0x0384); f__01F7_0320_000D_55C9();
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_0386_0010_6BCB()
 *
 * @name f__01F7_0386_0010_6BCB
 * @implements 01F7:0386:0010:6BCB ()
 *
 * Called From: 01F7:028E:0009:7175
 */
void f__01F7_0386_0010_6BCB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(0x0396); f__01F7_0320_000D_55C9();
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_03B2_0017_6839()
 *
 * @name f__01F7_03B2_0017_6839
 * @implements 01F7:03B2:0017:6839 ()
 *
 * Called From: 10E4:0DE7:0039:682B
 * Called From: 1587:015E:0010:1C6B
 * Called From: 2537:0040:0011:9CFA
 * Called From: B4F2:11F5:0018:E126
 * Called From: B4F2:1203:000E:2DE1
 * Called From: B520:08B6:0022:E0B0
 * Called From: B520:094C:0033:F226
 * Called From: B520:09E3:003E:E79B
 * Called From: B52A:00ED:0019:E074
 */
void f__01F7_03B2_0017_6839()
{
	emu_push(emu_si);
	emu_xchgw(&emu_ax.x, &emu_si);
	emu_xchgw(&emu_ax.x, &emu_dx.x);
	emu_testw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__01F7_03BB_000E_FBFB(); return; }
	emu_mulw(&emu_ax.x, emu_bx.x);
	if (emu_cx.x == 0) { emu_ip = 0x03C2; emu_last_cs = 0x01F7; emu_last_ip = 0x03BB; emu_last_length = 0x0017; emu_last_crc = 0x6839; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_03BB_000E_FBFB()
 *
 * @name f__01F7_03BB_000E_FBFB
 * @implements 01F7:03BB:000E:FBFB ()
 *
 * Called From: 01F7:03B7:0017:6839
 */
void f__01F7_03BB_000E_FBFB()
{
	if (emu_cx.x == 0) { f__01F7_03C2_0007_6CCE(); return; }
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
 * Decompiled function f__01F7_03C2_0007_6CCE()
 *
 * @name f__01F7_03C2_0007_6CCE
 * @implements 01F7:03C2:0007:6CCE ()
 *
 * Called From: 01F7:03BB:000E:FBFB
 */
void f__01F7_03C2_0007_6CCE()
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
 * Decompiled function f__01F7_03C9_001C_6AB6()
 *
 * @name f__01F7_03C9_001C_6AB6
 * @implements 01F7:03C9:001C:6AB6 ()
 *
 * Called From: 10E4:0F9D:0088:3BE7
 * Called From: B4B8:0A33:001A:11DB
 * Called From: B4F2:0E2A:0019:FF18
 */
void f__01F7_03C9_001C_6AB6()
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
 * Decompiled function f__01F7_03E5_000F_B264()
 *
 * @name f__01F7_03E5_000F_B264
 * @implements 01F7:03E5:000F:B264 ()
 *
 * Called From: 01F7:2795:001A:2004
 */
void f__01F7_03E5_000F_B264()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movb(&emu_ax.h, 0x47);
	emu_movb(&emu_dx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x03F4); f__0070_0108_0005_1CF6();
	f__01F7_03F4_0007_1514();
}

/**
 * Decompiled function f__01F7_03F4_0007_1514()
 *
 * @name f__01F7_03F4_0007_1514
 * @implements 01F7:03F4:0007:1514 ()
 *
 * Called From: 01F7:03F4:000F:B264
 */
void f__01F7_03F4_0007_1514()
{
	emu_pop(&emu_ds);
	if (emu_flags.cf) { emu_ip = 0x03FB; emu_last_cs = 0x01F7; emu_last_ip = 0x03F5; emu_last_length = 0x0007; emu_last_crc = 0x1514; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__01F7_03FF_0003_0212(); return;
}

/**
 * Decompiled function f__01F7_03FF_0003_0212()
 *
 * @name f__01F7_03FF_0003_0212
 * @implements 01F7:03FF:0003:0212 ()
 *
 * Called From: 01F7:03F9:0007:1514
 */
void f__01F7_03FF_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_0402_0007_1CA6()
 *
 * @name f__01F7_0402_0007_1CA6
 * @implements 01F7:0402:0007:1CA6 ()
 *
 * Called From: 01F7:104C:0010:38BE
 */
void f__01F7_0402_0007_1CA6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_ax.h, 0x2A);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0409); f__0070_0108_0005_1CF6();
	f__01F7_0409_000C_77AC();
}

/**
 * Decompiled function f__01F7_0409_000C_77AC()
 *
 * @name f__01F7_0409_000C_77AC
 * @implements 01F7:0409:000C:77AC ()
 *
 * Called From: 01F7:0409:0007:1CA6
 */
void f__01F7_0409_000C_77AC()
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
 * Decompiled function f__01F7_0415_0007_1C96()
 *
 * @name f__01F7_0415_0007_1C96
 * @implements 01F7:0415:0007:1C96 ()
 *
 * Called From: 01F7:1058:000C:22A8
 */
void f__01F7_0415_0007_1C96()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_ax.h, 0x2C);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x041C); f__0070_0108_0005_1CF6();
	f__01F7_041C_000C_77AC();
}

/**
 * Decompiled function f__01F7_041C_000C_77AC()
 *
 * @name f__01F7_041C_000C_77AC
 * @implements 01F7:041C:000C:77AC ()
 *
 * Called From: 01F7:041C:0007:1C96
 */
void f__01F7_041C_000C_77AC()
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
 * Decompiled function f__01F7_0428_0010_4994()
 *
 * @name f__01F7_0428_0010_4994
 * @implements 01F7:0428:0010:4994 ()
 *
 * Called From: 01F7:277B:000F:882B
 * Called From: 1DB6:0061:0011:208A
 * Called From: 1FB5:000F:000F:6025
 */
void f__01F7_0428_0010_4994()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0438); f__01F7_02F7_0007_1D3E();
	f__01F7_0438_000A_47FB();
}

/**
 * Decompiled function f__01F7_0438_000A_47FB()
 *
 * @name f__01F7_0438_000A_47FB
 * @implements 01F7:0438:000A:47FB ()
 *
 * Called From: 01F7:0438:0010:4994
 */
void f__01F7_0438_000A_47FB()
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
 * Decompiled function f__01F7_0442_0015_621D()
 *
 * @name f__01F7_0442_0015_621D
 * @implements 01F7:0442:0015:621D ()
 *
 * Called From: 1DB6:016F:0017:198C
 */
void f__01F7_0442_0015_621D()
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
	emu_push(0x0457); f__01F7_0309_000C_D785();
	f__01F7_0457_000A_C6B9();
}

/**
 * Decompiled function f__01F7_0457_000A_C6B9()
 *
 * @name f__01F7_0457_000A_C6B9
 * @implements 01F7:0457:000A:C6B9 ()
 *
 * Called From: 01F7:0457:0015:621D
 */
void f__01F7_0457_000A_C6B9()
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
 * Decompiled function f__01F7_0494_000D_E6E0()
 *
 * @name f__01F7_0494_000D_E6E0
 * @implements 01F7:0494:000D:E6E0 ()
 *
 * Called From: B4F2:11DD:0013:DC5E
 */
void f__01F7_0494_000D_E6E0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movb(&emu_ax.h, 0x36);
	emu_movb(&emu_dx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x04A1); f__0070_0108_0005_1CF6();
	f__01F7_04A1_001C_FA3A();
}

/**
 * Decompiled function f__01F7_04A1_001C_FA3A()
 *
 * @name f__01F7_04A1_001C_FA3A
 * @implements 01F7:04A1:001C:FA3A ()
 *
 * Called From: 01F7:04A1:000D:E6E0
 */
void f__01F7_04A1_001C_FA3A()
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
 * Decompiled function f__01F7_04BD_000A_EF26()
 *
 * @name f__01F7_04BD_000A_EF26
 * @implements 01F7:04BD:000A:EF26 ()
 *
 * Called From: 1DB6:0016:000C:F865
 */
void f__01F7_04BD_000A_EF26()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_ax.h, 0x35);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x04C7); f__0070_0108_0005_1CF6();
	f__01F7_04C7_0005_1C52();
}

/**
 * Decompiled function f__01F7_04C7_0005_1C52()
 *
 * @name f__01F7_04C7_0005_1C52
 * @implements 01F7:04C7:0005:1C52 ()
 *
 * Called From: 01F7:04C7:000A:EF26
 */
void f__01F7_04C7_0005_1C52()
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
 * Decompiled function f__01F7_04CC_000E_9C78()
 *
 * @name f__01F7_04CC_000E_9C78
 * @implements 01F7:04CC:000E:9C78 ()
 *
 * Called From: 01F7:1F02:0027:2887
 * Called From: 1DB6:0037:0021:BCC3
 * Called From: B500:008E:0011:96A9
 */
void f__01F7_04CC_000E_9C78()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_ax.h, 0x25);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x04DA); f__0070_0108_0005_1CF6();
	f__01F7_04DA_0003_001A();
}

/**
 * Decompiled function f__01F7_04DA_0003_001A()
 *
 * @name f__01F7_04DA_0003_001A
 * @implements 01F7:04DA:0003:001A ()
 *
 * Called From: 01F7:04DA:000E:9C78
 */
void f__01F7_04DA_0003_001A()
{
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_04E0_0004_06F8()
 *
 * @name f__01F7_04E0_0004_06F8
 * @implements 01F7:04E0:0004:06F8 ()
 *
 * Called From: 10E4:0DEE:0007:23BE
 * Called From: 15C2:069D:0027:9D76
 * Called From: 2537:0047:0007:23BE
 * Called From: B4C1:0093:0007:23BE
 * Called From: B4C1:00BA:0007:23BE
 * Called From: B4ED:04F8:000E:0F90
 * Called From: B4ED:04F8:0020:0705
 * Called From: B4ED:0540:0018:604E
 * Called From: B518:0020:0025:E9E8
 */
void f__01F7_04E0_0004_06F8()
{
	emu_xorw(&emu_cx.x, emu_cx.x);
	f__01F7_04FA_0084_19A5(); return;
}

/**
 * Decompiled function f__01F7_04E7_0005_1480()
 *
 * @name f__01F7_04E7_0005_1480
 * @implements 01F7:04E7:0005:1480 ()
 *
 * Called From: 1587:014E:000A:AFCD
 */
void f__01F7_04E7_0005_1480()
{
	emu_movw(&emu_cx.x, 0x1);
	f__01F7_04FA_0084_19A5(); return;
}

/**
 * Decompiled function f__01F7_04FA_0084_19A5()
 *
 * @name f__01F7_04FA_0084_19A5
 * @implements 01F7:04FA:0084:19A5 ()
 *
 * Called From: 01F7:04E2:0004:06F8
 * Called From: 01F7:04EA:0005:1480
 */
void f__01F7_04FA_0084_19A5()
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
	if (!emu_flags.zf) { emu_ip = 0x0519; emu_last_cs = 0x01F7; emu_last_ip = 0x050F; emu_last_length = 0x0084; emu_last_crc = 0x19A5; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { f__01F7_057E_000D_5FC3(); return; }
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x057E; emu_last_cs = 0x01F7; emu_last_ip = 0x0517; emu_last_length = 0x0084; emu_last_crc = 0x19A5; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_di, 0x1);
	if (!emu_flags.zf) { emu_ip = 0x053B; emu_last_cs = 0x01F7; emu_last_ip = 0x051D; emu_last_length = 0x0084; emu_last_crc = 0x19A5; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.sf) { f__01F7_052D_0051_7C4B(); return; }
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbws(&emu_dx.x, 0x0);
	emu_orws(&emu_di, 0xC);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.sf) { emu_ip = 0x053B; emu_last_cs = 0x01F7; emu_last_ip = 0x052F; emu_last_length = 0x0084; emu_last_crc = 0x19A5; emu_call(); return; } // Jump does not resolve
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
	if (emu_flags.cf) { emu_ip = 0x055C; emu_last_cs = 0x01F7; emu_last_ip = 0x054F; emu_last_length = 0x0084; emu_last_crc = 0x19A5; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0557; emu_last_cs = 0x01F7; emu_last_ip = 0x0551; emu_last_length = 0x0084; emu_last_crc = 0x19A5; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_bx.x);
	if (emu_flags.cf) { emu_ip = 0x055C; emu_last_cs = 0x01F7; emu_last_ip = 0x0555; emu_last_length = 0x0084; emu_last_crc = 0x19A5; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_si, emu_bx.x);
	emu_sbbw(&emu_di, emu_bp);
	emu_incw(&emu_ax.x);
	if (--emu_cx.x != 0) { emu_ip = 0x0545; emu_last_cs = 0x01F7; emu_last_ip = 0x055C; emu_last_length = 0x0084; emu_last_crc = 0x19A5; emu_call(); } // Jump does not resolve
	emu_pop(&emu_bx.x);
	emu_testw(&emu_bx.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x056B; emu_last_cs = 0x01F7; emu_last_ip = 0x0563; emu_last_length = 0x0084; emu_last_crc = 0x19A5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, emu_di);
	emu_shrw(&emu_bx.x, 0x1);
	emu_testw(&emu_bx.x, 0x4);
	if (emu_flags.zf) { emu_ip = 0x0578; emu_last_cs = 0x01F7; emu_last_ip = 0x056F; emu_last_length = 0x0084; emu_last_crc = 0x19A5; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_052D_0051_7C4B()
 *
 * @name f__01F7_052D_0051_7C4B
 * @implements 01F7:052D:0051:7C4B ()
 *
 * Called From: 01F7:0521:0084:19A5
 */
void f__01F7_052D_0051_7C4B()
{
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.sf) { f__01F7_053B_0043_39DC(); return; }
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
	if (emu_flags.cf) { emu_ip = 0x055C; emu_last_cs = 0x01F7; emu_last_ip = 0x054F; emu_last_length = 0x0051; emu_last_crc = 0x7C4B; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0557; emu_last_cs = 0x01F7; emu_last_ip = 0x0551; emu_last_length = 0x0051; emu_last_crc = 0x7C4B; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_bx.x);
	if (emu_flags.cf) { emu_ip = 0x055C; emu_last_cs = 0x01F7; emu_last_ip = 0x0555; emu_last_length = 0x0051; emu_last_crc = 0x7C4B; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_si, emu_bx.x);
	emu_sbbw(&emu_di, emu_bp);
	emu_incw(&emu_ax.x);
	if (--emu_cx.x != 0) { emu_ip = 0x0545; emu_last_cs = 0x01F7; emu_last_ip = 0x055C; emu_last_length = 0x0051; emu_last_crc = 0x7C4B; emu_call(); } // Jump does not resolve
	emu_pop(&emu_bx.x);
	emu_testw(&emu_bx.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x056B; emu_last_cs = 0x01F7; emu_last_ip = 0x0563; emu_last_length = 0x0051; emu_last_crc = 0x7C4B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, emu_di);
	emu_shrw(&emu_bx.x, 0x1);
	emu_testw(&emu_bx.x, 0x4);
	if (emu_flags.zf) { emu_ip = 0x0578; emu_last_cs = 0x01F7; emu_last_ip = 0x056F; emu_last_length = 0x0051; emu_last_crc = 0x7C4B; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_053B_0043_39DC()
 *
 * @name f__01F7_053B_0043_39DC
 * @implements 01F7:053B:0043:39DC ()
 *
 * Called From: 01F7:052F:0051:7C4B
 */
void f__01F7_053B_0043_39DC()
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
	if (emu_flags.cf) { emu_ip = 0x055C; emu_last_cs = 0x01F7; emu_last_ip = 0x054F; emu_last_length = 0x0043; emu_last_crc = 0x39DC; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0557; emu_last_cs = 0x01F7; emu_last_ip = 0x0551; emu_last_length = 0x0043; emu_last_crc = 0x39DC; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_bx.x);
	if (emu_flags.cf) { f__01F7_055C_0022_91B5(); return; }
	emu_subw(&emu_si, emu_bx.x);
	emu_sbbw(&emu_di, emu_bp);
	emu_incw(&emu_ax.x);
	if (--emu_cx.x != 0) { emu_ip = 0x0545; emu_last_cs = 0x01F7; emu_last_ip = 0x055C; emu_last_length = 0x0043; emu_last_crc = 0x39DC; emu_call(); } // Jump does not resolve
	emu_pop(&emu_bx.x);
	emu_testw(&emu_bx.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x056B; emu_last_cs = 0x01F7; emu_last_ip = 0x0563; emu_last_length = 0x0043; emu_last_crc = 0x39DC; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, emu_di);
	emu_shrw(&emu_bx.x, 0x1);
	emu_testw(&emu_bx.x, 0x4);
	if (emu_flags.zf) { emu_ip = 0x0578; emu_last_cs = 0x01F7; emu_last_ip = 0x056F; emu_last_length = 0x0043; emu_last_crc = 0x39DC; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_0545_0039_2F6C()
 *
 * @name f__01F7_0545_0039_2F6C
 * @implements 01F7:0545:0039:2F6C ()
 *
 * Called From: 01F7:055C:0022:91B5
 * Called From: 01F7:055C:0039:2F6C
 */
void f__01F7_0545_0039_2F6C()
{
	emu_shlw(&emu_ax.x, 0x1);
	emu_rclw(&emu_dx.x, 0x1);
	emu_rclw(&emu_si, 0x1);
	emu_rclw(&emu_di, 0x1);
	emu_cmpw(&emu_di, emu_bp);
	if (emu_flags.cf) { emu_ip = 0x055C; emu_last_cs = 0x01F7; emu_last_ip = 0x054F; emu_last_length = 0x0039; emu_last_crc = 0x2F6C; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0557; emu_last_cs = 0x01F7; emu_last_ip = 0x0551; emu_last_length = 0x0039; emu_last_crc = 0x2F6C; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_bx.x);
	if (emu_flags.cf) { f__01F7_055C_0022_91B5(); return; }
	emu_subw(&emu_si, emu_bx.x);
	emu_sbbw(&emu_di, emu_bp);
	emu_incw(&emu_ax.x);
	if (--emu_cx.x != 0) { f__01F7_0545_0039_2F6C(); return; }
	emu_pop(&emu_bx.x);
	emu_testw(&emu_bx.x, 0x2);
	if (emu_flags.zf) { f__01F7_056B_0013_9F31(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, emu_di);
	emu_shrw(&emu_bx.x, 0x1);
	emu_testw(&emu_bx.x, 0x4);
	if (emu_flags.zf) { emu_ip = 0x0578; emu_last_cs = 0x01F7; emu_last_ip = 0x056F; emu_last_length = 0x0039; emu_last_crc = 0x2F6C; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_055C_0022_91B5()
 *
 * @name f__01F7_055C_0022_91B5
 * @implements 01F7:055C:0022:91B5 ()
 *
 * Called From: 01F7:0555:0039:2F6C
 * Called From: 01F7:0555:0043:39DC
 */
void f__01F7_055C_0022_91B5()
{
	if (--emu_cx.x != 0) { f__01F7_0545_0039_2F6C(); return; }
	emu_pop(&emu_bx.x);
	emu_testw(&emu_bx.x, 0x2);
	if (emu_flags.zf) { f__01F7_056B_0013_9F31(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, emu_di);
	emu_shrw(&emu_bx.x, 0x1);
	emu_testw(&emu_bx.x, 0x4);
	if (emu_flags.zf) { emu_ip = 0x0578; emu_last_cs = 0x01F7; emu_last_ip = 0x056F; emu_last_length = 0x0022; emu_last_crc = 0x91B5; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_056B_0013_9F31()
 *
 * @name f__01F7_056B_0013_9F31
 * @implements 01F7:056B:0013:9F31 ()
 *
 * Called From: 01F7:0563:0022:91B5
 * Called From: 01F7:0563:0039:2F6C
 */
void f__01F7_056B_0013_9F31()
{
	emu_testw(&emu_bx.x, 0x4);
	if (emu_flags.zf) { f__01F7_0578_0006_1FA0(); return; }
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
 * Decompiled function f__01F7_0578_0006_1FA0()
 *
 * @name f__01F7_0578_0006_1FA0
 * @implements 01F7:0578:0006:1FA0 ()
 *
 * Called From: 01F7:056F:0013:9F31
 * Called From: 01F7:0589:0004:07D6
 */
void f__01F7_0578_0006_1FA0()
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
 * Decompiled function f__01F7_057E_000D_5FC3()
 *
 * @name f__01F7_057E_000D_5FC3
 * @implements 01F7:057E:000D:5FC3 ()
 *
 * Called From: 01F7:0513:0084:19A5
 */
void f__01F7_057E_000D_5FC3()
{
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_testw(&emu_di, 0x2);
	if (emu_flags.zf) { f__01F7_0587_0004_07D6(); return; }
	emu_xchgw(&emu_ax.x, &emu_dx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_ip = 0x0578; emu_last_cs = 0x01F7; emu_last_ip = 0x0589; emu_last_length = 0x000D; emu_last_crc = 0x5FC3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0587_0004_07D6()
 *
 * @name f__01F7_0587_0004_07D6
 * @implements 01F7:0587:0004:07D6 ()
 *
 * Called From: 01F7:0584:000D:5FC3
 */
void f__01F7_0587_0004_07D6()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	f__01F7_0578_0006_1FA0(); return;
}

/**
 * Decompiled function f__01F7_058B_0018_2E29()
 *
 * @name f__01F7_058B_0018_2E29
 * @implements 01F7:058B:0018:2E29 ()
 *
 * Called From: 01F7:1AF5:0010:C18E
 */
void f__01F7_058B_0018_2E29()
{
	emu_pop(&emu_bx.x);
	emu_push(emu_cs);
	emu_push(emu_bx.x);
	emu_cmpb(&emu_cx.l, 0x10);
	if (!emu_flags.cf) { emu_ip = 0x05A3; emu_last_cs = 0x01F7; emu_last_ip = 0x0591; emu_last_length = 0x0018; emu_last_crc = 0x2E29; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_058E_0015_66E9()
 *
 * @name f__01F7_058E_0015_66E9
 * @implements 01F7:058E:0015:66E9 ()
 *
 * Called From: 0AEC:0604:0015:1091
 * Called From: 0C3A:13FB:001C:339A
 * Called From: 0C3A:156A:000D:08D8
 * Called From: 10E4:0157:0030:00DF
 * Called From: 1A34:30FD:0011:E91E
 * Called From: 3FF1:0075:0016:0184
 * Called From: B480:0075:0016:0184
 * Called From: B4C1:008C:0032:ADF5
 * Called From: B4C1:008C:0040:FE62
 * Called From: B4C1:008C:0053:2DFE
 * Called From: B4C1:008C:0060:EB5C
 * Called From: B4C1:00B3:0018:2361
 * Called From: B4DA:0E1D:000B:5855
 * Called From: B4DA:13B7:000B:5855
 * Called From: B4DA:1628:000B:5855
 * Called From: B4E6:002C:0010:8841
 * Called From: B4E6:0057:0010:8841
 * Called From: B4E6:0057:0013:8F5D
 * Called From: B503:12BA:0013:3170
 * Called From: B503:1310:0013:3170
 */
void f__01F7_058E_0015_66E9()
{
	emu_cmpb(&emu_cx.l, 0x10);
	if (!emu_flags.cf) { f__01F7_05A3_0009_CB67(); return; }
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
 * Decompiled function f__01F7_05A3_0009_CB67()
 *
 * @name f__01F7_05A3_0009_CB67
 * @implements 01F7:05A3:0009:CB67 ()
 *
 * Called From: 01F7:0591:0015:66E9
 */
void f__01F7_05A3_0009_CB67()
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
 * Decompiled function f__01F7_05AF_0015_A629()
 *
 * @name f__01F7_05AF_0015_A629
 * @implements 01F7:05AF:0015:A629 ()
 *
 * Called From: B52A:07B0:0010:09FB
 */
void f__01F7_05AF_0015_A629()
{
	emu_cmpb(&emu_cx.l, 0x10);
	if (!emu_flags.cf) { emu_ip = 0x05C4; emu_last_cs = 0x01F7; emu_last_ip = 0x05B2; emu_last_length = 0x0015; emu_last_crc = 0xA629; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_05ED_0013_2A34()
 *
 * @name f__01F7_05ED_0013_2A34
 * @implements 01F7:05ED:0013:2A34 ()
 *
 * Called From: 01F7:1B26:0010:7F68
 */
void f__01F7_05ED_0013_2A34()
{
	emu_pop(&emu_es);
	emu_push(emu_cs);
	emu_push(emu_es);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!(emu_flags.sf != emu_flags.of)) { f__01F7_0600_001C_8D0E(); return; }
	emu_notw(&emu_bx.x, emu_bx.x);
	emu_notw(&emu_cx.x, emu_cx.x);
	emu_addws(&emu_bx.x, 0x1);
	emu_adcws(&emu_cx.x, 0x0);
	emu_ip = 0x062F; emu_last_cs = 0x01F7; emu_last_ip = 0x05FE; emu_last_length = 0x0013; emu_last_crc = 0x2A34; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_05F0_0010_2A38()
 *
 * @name f__01F7_05F0_0010_2A38
 * @implements 01F7:05F0:0010:2A38 ()
 *
 * Called From: 25C4:01CF:003F:551D
 */
void f__01F7_05F0_0010_2A38()
{
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!(emu_flags.sf != emu_flags.of)) { f__01F7_0600_001C_8D0E(); return; }
	emu_notw(&emu_bx.x, emu_bx.x);
	emu_notw(&emu_cx.x, emu_cx.x);
	emu_addws(&emu_bx.x, 0x1);
	emu_adcws(&emu_cx.x, 0x0);
	emu_ip = 0x062F; emu_last_cs = 0x01F7; emu_last_ip = 0x05FE; emu_last_length = 0x0010; emu_last_crc = 0x2A38; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0600_001C_8D0E()
 *
 * @name f__01F7_0600_001C_8D0E
 * @implements 01F7:0600:001C:8D0E ()
 *
 * Called From: 01F7:05F2:0010:2A38
 * Called From: 01F7:05F2:0013:2A34
 */
void f__01F7_0600_001C_8D0E()
{
	emu_addw(&emu_ax.x, emu_bx.x);
	if (!emu_flags.cf) { f__01F7_0608_0014_8309(); return; }
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
 * Decompiled function f__01F7_0608_0014_8309()
 *
 * @name f__01F7_0608_0014_8309
 * @implements 01F7:0608:0014:8309 ()
 *
 * Called From: 01F7:0602:001C:8D0E
 */
void f__01F7_0608_0014_8309()
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
 * Decompiled function f__01F7_064D_0028_C150()
 *
 * @name f__01F7_064D_0028_C150
 * @implements 01F7:064D:0028:C150 ()
 *
 * Called From: 01F7:1B92:0022:5AE0
 */
void f__01F7_064D_0028_C150()
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
 * Decompiled function f__01F7_0675_0020_2791()
 *
 * @name f__01F7_0675_0020_2791
 * @implements 01F7:0675:0020:2791 ()
 *
 * Called From: 01F7:2070:0033:DCD3
 * Called From: 01F7:2300:0004:024E
 * Called From: 01F7:29ED:0004:01EC
 * Called From: 01F7:2BBD:0004:0120
 */
void f__01F7_0675_0020_2791()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0695; emu_last_cs = 0x01F7; emu_last_ip = 0x067E; emu_last_length = 0x0020; emu_last_crc = 0x2791; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x58);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_0688_000D_30D0(); return; }
	emu_movw(&emu_si, 0x57);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7988), emu_si);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si,  0x798A));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_si, emu_ax.x);
	f__01F7_06A2_000C_2C40(); return;
}

/**
 * Decompiled function f__01F7_0688_000D_30D0()
 *
 * @name f__01F7_0688_000D_30D0
 * @implements 01F7:0688:000D:30D0 ()
 *
 * Called From: 01F7:0683:0020:2791
 */
void f__01F7_0688_000D_30D0()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7988), emu_si);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si,  0x798A));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_si, emu_ax.x);
	f__01F7_06A2_000C_2C40(); return;
}

/**
 * Decompiled function f__01F7_06A2_000C_2C40()
 *
 * @name f__01F7_06A2_000C_2C40
 * @implements 01F7:06A2:000C:2C40 ()
 *
 * Called From: 01F7:0693:000D:30D0
 * Called From: 01F7:0693:0020:2791
 */
void f__01F7_06A2_000C_2C40()
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
 * Decompiled function f__01F7_06C0_000B_E2C7()
 *
 * @name f__01F7_06C0_000B_E2C7
 * @implements 01F7:06C0:000B:E2C7 ()
 *
 * Called From: 01F7:0F8D:0042:2CC7
 * Called From: 01F7:0FC9:000D:3C83
 */
void f__01F7_06C0_000B_E2C7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, 0x4400);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x06CB); f__0070_0108_0005_1CF6();
	f__01F7_06CB_0006_28C2();
}

/**
 * Decompiled function f__01F7_06CB_0006_28C2()
 *
 * @name f__01F7_06CB_0006_28C2
 * @implements 01F7:06CB:0006:28C2 ()
 *
 * Called From: 01F7:06CB:000B:E2C7
 */
void f__01F7_06CB_0006_28C2()
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
 * Decompiled function f__01F7_06D1_004A_5E28()
 *
 * @name f__01F7_06D1_004A_5E28
 * @implements 01F7:06D1:004A:5E28 ()
 *
 * Called From: 01F7:133F:0014:ADE3
 * Called From: 01F7:133F:0010:A453
 */
void f__01F7_06D1_004A_5E28()
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
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0741; emu_last_cs = 0x01F7; emu_last_ip = 0x06E3; emu_last_length = 0x004A; emu_last_crc = 0x5E28; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_bx.l, 0x2);
	if (emu_flags.cf) { emu_ip = 0x0741; emu_last_cs = 0x01F7; emu_last_ip = 0x06E8; emu_last_length = 0x004A; emu_last_crc = 0x5E28; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!(emu_flags.sf != emu_flags.of)) { f__01F7_0706_0015_02D7(); return; }
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0706; emu_last_cs = 0x01F7; emu_last_ip = 0x06F8; emu_last_length = 0x004A; emu_last_crc = 0x5E28; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), 0x2D);
	emu_incw(&emu_di);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbws(&emu_cx.x, 0x0);
	emu_movw(&emu_si, emu_bp - 0x22);
	if (emu_cx.x == 0) { emu_ip = 0x071B; emu_last_cs = 0x01F7; emu_last_ip = 0x0709; emu_last_length = 0x004A; emu_last_crc = 0x5E28; emu_call(); return; } // Jump does not resolve
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_subw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_movb(&emu_get_memory8(emu_ss, emu_si,  0x0), emu_dx.l);
	emu_incw(&emu_si);
	if (emu_cx.x == 0) { emu_ip = 0x0723; emu_last_cs = 0x01F7; emu_last_ip = 0x0717; emu_last_length = 0x004A; emu_last_crc = 0x5E28; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x070B; emu_last_cs = 0x01F7; emu_last_ip = 0x0719; emu_last_length = 0x004A; emu_last_crc = 0x5E28; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0706_0015_02D7()
 *
 * @name f__01F7_0706_0015_02D7
 * @implements 01F7:0706:0015:02D7 ()
 *
 * Called From: 01F7:06F2:004A:5E28
 */
void f__01F7_0706_0015_02D7()
{
	emu_movw(&emu_si, emu_bp - 0x22);
	if (emu_cx.x == 0) { f__01F7_071B_0020_FB19(); return; }
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_subw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_movb(&emu_get_memory8(emu_ss, emu_si,  0x0), emu_dx.l);
	emu_incw(&emu_si);
	if (emu_cx.x == 0) { f__01F7_0723_0018_A77F(); return; }
	emu_ip = 0x070B; emu_last_cs = 0x01F7; emu_last_ip = 0x0719; emu_last_length = 0x0015; emu_last_crc = 0x02D7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_071B_0020_FB19()
 *
 * @name f__01F7_071B_0020_FB19
 * @implements 01F7:071B:0020:FB19 ()
 *
 * Called From: 01F7:0709:0015:02D7
 * Called From: 01F7:0725:0020:FB19
 * Called From: 01F7:0725:0018:A77F
 */
void f__01F7_071B_0020_FB19()
{
	emu_subw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_movb(&emu_get_memory8(emu_ss, emu_si,  0x0), emu_dx.l);
	emu_incw(&emu_si);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_071B_0020_FB19(); return; }
	emu_movw(&emu_cx.x, emu_bp - 0x22);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_addw(&emu_cx.x, emu_si);
	emu_cld();
	emu_decw(&emu_si);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_si,  0x0));
	emu_subb(&emu_ax.l, 0xA);
	if (!emu_flags.cf) { emu_ip = 0x073B; emu_last_cs = 0x01F7; emu_last_ip = 0x0735; emu_last_length = 0x0020; emu_last_crc = 0xFB19; emu_call(); return; } // Jump does not resolve
	emu_addb(&emu_ax.l, 0x3A);
	f__01F7_073E_0015_47CC(); return;
}

/**
 * Decompiled function f__01F7_0723_0018_A77F()
 *
 * @name f__01F7_0723_0018_A77F
 * @implements 01F7:0723:0018:A77F ()
 *
 * Called From: 01F7:0717:0015:02D7
 */
void f__01F7_0723_0018_A77F()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_071B_0020_FB19(); return; }
	emu_movw(&emu_cx.x, emu_bp - 0x22);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_addw(&emu_cx.x, emu_si);
	emu_cld();
	emu_decw(&emu_si);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_si,  0x0));
	emu_subb(&emu_ax.l, 0xA);
	if (!emu_flags.cf) { emu_ip = 0x073B; emu_last_cs = 0x01F7; emu_last_ip = 0x0735; emu_last_length = 0x0018; emu_last_crc = 0xA77F; emu_call(); return; } // Jump does not resolve
	emu_addb(&emu_ax.l, 0x3A);
	emu_ip = 0x073E; emu_last_cs = 0x01F7; emu_last_ip = 0x0739; emu_last_length = 0x0018; emu_last_crc = 0xA77F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_072F_000C_477D()
 *
 * @name f__01F7_072F_000C_477D
 * @implements 01F7:072F:000C:477D ()
 *
 * Called From: 01F7:073F:0015:47CC
 */
void f__01F7_072F_000C_477D()
{
	emu_decw(&emu_si);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_si,  0x0));
	emu_subb(&emu_ax.l, 0xA);
	if (!emu_flags.cf) { emu_ip = 0x073B; emu_last_cs = 0x01F7; emu_last_ip = 0x0735; emu_last_length = 0x000C; emu_last_crc = 0x477D; emu_call(); return; } // Jump does not resolve
	emu_addb(&emu_ax.l, 0x3A);
	f__01F7_073E_0015_47CC(); return;
}

/**
 * Decompiled function f__01F7_073E_0015_47CC()
 *
 * @name f__01F7_073E_0015_47CC
 * @implements 01F7:073E:0015:47CC ()
 *
 * Called From: 01F7:0739:0020:FB19
 * Called From: 01F7:0739:000C:477D
 */
void f__01F7_073E_0015_47CC()
{
	emu_stosb();
	if (--emu_cx.x != 0) { f__01F7_072F_000C_477D(); return; }
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
 * Decompiled function f__01F7_0773_001E_492D()
 *
 * @name f__01F7_0773_001E_492D
 * @implements 01F7:0773:001E:492D ()
 *
 * Called From: 1FB5:00A7:001B:F50E
 */
void f__01F7_0773_001E_492D()
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
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0791); f__0070_0108_0005_1CF6();
	f__01F7_0791_0004_0496();
}

/**
 * Decompiled function f__01F7_0791_0004_0496()
 *
 * @name f__01F7_0791_0004_0496
 * @implements 01F7:0791:0004:0496 ()
 *
 * Called From: 01F7:0791:001E:492D
 */
void f__01F7_0791_0004_0496()
{
	if (emu_flags.cf) { emu_ip = 0x0795; emu_last_cs = 0x01F7; emu_last_ip = 0x0791; emu_last_length = 0x0004; emu_last_crc = 0x0496; emu_call(); return; } // Jump does not resolve
	f__01F7_079A_0002_00E2(); return;
}

/**
 * Decompiled function f__01F7_079A_0002_00E2()
 *
 * @name f__01F7_079A_0002_00E2
 * @implements 01F7:079A:0002:00E2 ()
 *
 * Called From: 01F7:0793:0004:0496
 */
void f__01F7_079A_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_079C_0017_6829()
 *
 * @name f__01F7_079C_0017_6829
 * @implements 01F7:079C:0017:6829 ()
 *
 * Called From: 01F7:07F3:0011:0384
 * Called From: 01F7:3D34:0032:85DC
 * Called From: 01F7:3D4D:0019:F7F2
 * Called From: 01F7:3DE0:000F:6147
 * Called From: 01F7:3DFB:001B:854E
 */
void f__01F7_079C_0017_6829()
{
	emu_push(emu_si);
	emu_xchgw(&emu_ax.x, &emu_si);
	emu_xchgw(&emu_ax.x, &emu_dx.x);
	emu_testw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__01F7_07A5_000E_FBEB(); return; }
	emu_mulw(&emu_ax.x, emu_bx.x);
	if (emu_cx.x == 0) { f__01F7_07AC_0007_6CDE(); return; }
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
 * Decompiled function f__01F7_07A5_000E_FBEB()
 *
 * @name f__01F7_07A5_000E_FBEB
 * @implements 01F7:07A5:000E:FBEB ()
 *
 * Called From: 01F7:07A1:0017:6829
 */
void f__01F7_07A5_000E_FBEB()
{
	if (emu_cx.x == 0) { f__01F7_07AC_0007_6CDE(); return; }
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
 * Decompiled function f__01F7_07AC_0007_6CDE()
 *
 * @name f__01F7_07AC_0007_6CDE
 * @implements 01F7:07AC:0007:6CDE ()
 *
 * Called From: 01F7:07A5:000E:FBEB
 * Called From: 01F7:07A5:0017:6829
 */
void f__01F7_07AC_0007_6CDE()
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
 * Decompiled function f__01F7_07B3_0021_70BD()
 *
 * @name f__01F7_07B3_0021_70BD
 * @implements 01F7:07B3:0021:70BD ()
 *
 * Called From: 01F7:1ABA:0014:57F1
 * Called From: 01F7:1ACD:0013:1601
 * Called From: 01F7:1B37:0011:6687
 * Called From: 01F7:1B4A:0013:6441
 * Called From: 01F7:2978:0015:84B8
 */
void f__01F7_07B3_0021_70BD()
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
	if (!emu_flags.zf) { f__01F7_07D3_0001_0186(); return; }
	emu_cmpw(&emu_ax.x, emu_bx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_07D3_0001_0186()
 *
 * @name f__01F7_07D3_0001_0186
 * @implements 01F7:07D3:0001:0186 ()
 *
 * Called From: 01F7:07CF:0021:70BD
 */
void f__01F7_07D3_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_07D4_0011_EC70()
 *
 * @name f__01F7_07D4_0011_EC70
 * @implements 01F7:07D4:0011:EC70 ()
 *
 * Called From: 25C4:03DB:0008:7C66
 */
void f__01F7_07D4_0011_EC70()
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
 * Decompiled function f__01F7_07E5_0011_0384()
 *
 * @name f__01F7_07E5_0011_0384
 * @implements 01F7:07E5:0011:0384 ()
 *
 * Called From: 2537:002F:000C:7A71
 */
void f__01F7_07E5_0011_0384()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x79E6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x79E4));
	emu_movw(&emu_dx.x, 0x15A);
	emu_movw(&emu_ax.x, 0x4E35);
	emu_push(0x07F6); f__01F7_079C_0017_6829();
	f__01F7_07F6_0015_F3E6();
}

/**
 * Decompiled function f__01F7_07F6_0015_F3E6()
 *
 * @name f__01F7_07F6_0015_F3E6
 * @implements 01F7:07F6:0015:F3E6 ()
 *
 * Called From: 01F7:07F6:0011:0384
 */
void f__01F7_07F6_0015_F3E6()
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
 * Decompiled function f__01F7_080B_0016_F7E3()
 *
 * @name f__01F7_080B_0016_F7E3
 * @implements 01F7:080B:0016:F7E3 ()
 *
 * Called From: 01F7:32C7:0011:4137
 */
void f__01F7_080B_0016_F7E3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x2);
	if (emu_flags.zf) { f__01F7_0821_000E_6DE1(); return; }
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_ip = 0x0835; emu_last_cs = 0x01F7; emu_last_ip = 0x081F; emu_last_length = 0x0016; emu_last_crc = 0xF7E3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0821_000E_6DE1()
 *
 * @name f__01F7_0821_000E_6DE1
 * @implements 01F7:0821:000E:6DE1 ()
 *
 * Called From: 01F7:0819:0016:F7E3
 */
void f__01F7_0821_000E_6DE1()
{
	emu_push(emu_ds);
	emu_movb(&emu_ax.h, 0x3F);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x082F); f__0070_0108_0005_1CF6();
	f__01F7_082F_0005_0774();
}

/**
 * Decompiled function f__01F7_082F_0005_0774()
 *
 * @name f__01F7_082F_0005_0774
 * @implements 01F7:082F:0005:0774 ()
 *
 * Called From: 01F7:082F:000E:6DE1
 */
void f__01F7_082F_0005_0774()
{
	emu_pop(&emu_ds);
	if (emu_flags.cf) { emu_ip = 0x0834; emu_last_cs = 0x01F7; emu_last_ip = 0x0830; emu_last_length = 0x0005; emu_last_crc = 0x0774; emu_call(); return; } // Jump does not resolve
	f__01F7_0838_0002_00E2(); return;
}

/**
 * Decompiled function f__01F7_0838_0002_00E2()
 *
 * @name f__01F7_0838_0002_00E2
 * @implements 01F7:0838:0002:00E2 ()
 *
 * Called From: 01F7:0832:0005:0774
 */
void f__01F7_0838_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_083A_0014_BD8F()
 *
 * @name f__01F7_083A_0014_BD8F
 * @implements 01F7:083A:0014:BD8F ()
 *
 * Called From: 01F7:381E:001E:4ADA
 */
void f__01F7_083A_0014_BD8F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2A);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	f__01F7_0869_0020_280A(); return;
}

/**
 * Decompiled function f__01F7_084E_0011_2F92()
 *
 * @name f__01F7_084E_0011_2F92
 * @implements 01F7:084E:0011:2F92 ()
 *
 * Called From: 01F7:09B3:0015:7E06
 */
void f__01F7_084E_0011_2F92()
{
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_testb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x20);
	if (emu_flags.zf) { emu_ip = 0x085F; emu_last_cs = 0x01F7; emu_last_ip = 0x0855; emu_last_length = 0x0011; emu_last_crc = 0x2F92; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_es, emu_di,  0x0));
	emu_addws(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x4);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_0869_0020_280A()
 *
 * @name f__01F7_0869_0020_280A
 * @implements 01F7:0869:0020:280A ()
 *
 * Called From: 01F7:084C:0014:BD8F
 */
void f__01F7_0869_0020_280A()
{
	emu_push(emu_es);
	emu_cld();
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_lodsb(emu_es);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x08E5; emu_last_cs = 0x01F7; emu_last_ip = 0x0875; emu_last_length = 0x0020; emu_last_crc = 0x280A; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x25);
	if (emu_flags.zf) { f__01F7_08E8_0025_E996(); return; }
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
			emu_last_cs = 0x01F7; emu_last_ip = 0x0886; emu_last_length = 0x0020; emu_last_crc = 0x280A;
			emu_call();
			return;
	}
	f__01F7_0889_002A_9CB6();
}

/**
 * Decompiled function f__01F7_086B_001E_2872()
 *
 * @name f__01F7_086B_001E_2872
 * @implements 01F7:086B:001E:2872 ()
 *
 * Called From: 01F7:09BF:0003:0410
 */
void f__01F7_086B_001E_2872()
{
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_lodsb(emu_es);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__01F7_08E5_0003_06B2(); return; }
	emu_cmpb(&emu_ax.l, 0x25);
	if (emu_flags.zf) { emu_ip = 0x08E8; emu_last_cs = 0x01F7; emu_last_ip = 0x0879; emu_last_length = 0x001E; emu_last_crc = 0x2872; emu_call(); return; } // Jump does not resolve
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_xchgw(&emu_ax.x, &emu_di);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0889);
	switch (emu_ip) {
		case 0x37D0: f__01F7_37D0_0021_3A90(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0886; emu_last_length = 0x001E; emu_last_crc = 0x2872;
			emu_call();
			return;
	}
	f__01F7_0889_002A_9CB6();
}

/**
 * Decompiled function f__01F7_086E_001B_E85E()
 *
 * @name f__01F7_086E_001B_E85E
 * @implements 01F7:086E:001B:E85E ()
 *
 * Called From: 01F7:08D0:000E:FABA
 */
void f__01F7_086E_001B_E85E()
{
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_lodsb(emu_es);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x08E5; emu_last_cs = 0x01F7; emu_last_ip = 0x0875; emu_last_length = 0x001B; emu_last_crc = 0xE85E; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x25);
	if (emu_flags.zf) { f__01F7_08E8_0025_E996(); return; }
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
			emu_last_cs = 0x01F7; emu_last_ip = 0x0886; emu_last_length = 0x001B; emu_last_crc = 0xE85E;
			emu_call();
			return;
	}
	f__01F7_0889_002A_9CB6();
}

/**
 * Decompiled function f__01F7_0889_002A_9CB6()
 *
 * @name f__01F7_0889_002A_9CB6
 * @implements 01F7:0889:002A:9CB6 ()
 *
 * Called From: 01F7:0889:001E:2872
 */
void f__01F7_0889_002A_9CB6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x08B9; emu_last_cs = 0x01F7; emu_last_ip = 0x088D; emu_last_length = 0x002A; emu_last_crc = 0x9CB6; emu_call(); return; } // Jump does not resolve
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.sf) { emu_ip = 0x08CE; emu_last_cs = 0x01F7; emu_last_ip = 0x0892; emu_last_length = 0x002A; emu_last_crc = 0x9CB6; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_ds, emu_di,  0x79E8), 0x1);
	if (!emu_flags.zf) { f__01F7_08CE_000E_FABA(); return; }
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_orb(&emu_bx.l, emu_bx.l);
	if (emu_flags.sf) { emu_ip = 0x08BC; emu_last_cs = 0x01F7; emu_last_ip = 0x089E; emu_last_length = 0x002A; emu_last_crc = 0x9CB6; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_ds, emu_bx.x,  0x79E8), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x08BC; emu_last_cs = 0x01F7; emu_last_ip = 0x08A5; emu_last_length = 0x002A; emu_last_crc = 0x9CB6; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x08B3);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x08B0; emu_last_length = 0x002A; emu_last_crc = 0x9CB6;
			emu_call();
			return;
	}
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_08CE_000E_FABA()
 *
 * @name f__01F7_08CE_000E_FABA
 * @implements 01F7:08CE:000E:FABA ()
 *
 * Called From: 01F7:0899:002A:9CB6
 */
void f__01F7_08CE_000E_FABA()
{
	emu_cmpw(&emu_ax.x, emu_di);
	if (emu_flags.zf) { f__01F7_086E_001B_E85E(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(0x08DC);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x08D9; emu_last_length = 0x000E; emu_last_crc = 0xFABA;
			emu_call();
			return;
	}
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_08E5_0003_06B2()
 *
 * @name f__01F7_08E5_0003_06B2
 * @implements 01F7:08E5:0003:06B2 ()
 *
 * Called From: 01F7:0875:001E:2872
 */
void f__01F7_08E5_0003_06B2()
{
	f__01F7_0C67_0007_2330(); return;
}

/**
 * Decompiled function f__01F7_08E8_0025_E996()
 *
 * @name f__01F7_08E8_0025_E996
 * @implements 01F7:08E8:0025:E996 ()
 *
 * Called From: 01F7:0879:0020:280A
 * Called From: 01F7:0879:001B:E85E
 */
void f__01F7_08E8_0025_E996()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xFFFF);
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x20);
	emu_lodsb(emu_es);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_si);
	emu_xchgw(&emu_ax.x, &emu_di);
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0918; emu_last_cs = 0x01F7; emu_last_ip = 0x08FD; emu_last_length = 0x0025; emu_last_crc = 0xE996; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_bx.l, emu_get_memory8(emu_ds, emu_di,  0x79E8));
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_cmpws(&emu_bx.x, 0x15);
	if ((emu_flags.cf || emu_flags.zf)) { f__01F7_090D_0007_5F5A(); return; }
	emu_ip = 0x0C4F; emu_last_cs = 0x01F7; emu_last_ip = 0x090A; emu_last_length = 0x0025; emu_last_crc = 0xE996; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_090D_0007_5F5A()
 *
 * @name f__01F7_090D_0007_5F5A
 * @implements 01F7:090D:0007:5F5A ()
 *
 * Called From: 01F7:0908:0025:E996
 */
void f__01F7_090D_0007_5F5A()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0xD02);
	switch (emu_ip) {
		case 0x0965: f__01F7_0965_0005_14C2(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x090F; emu_last_length = 0x0007; emu_last_crc = 0x5F5A;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__01F7_0965_0005_14C2()
 *
 * @name f__01F7_0965_0005_14C2
 * @implements 01F7:0965:0005:14C2 ()
 *
 * Called From: 01F7:090F:0007:5F5A
 */
void f__01F7_0965_0005_14C2()
{
	emu_movw(&emu_si, 0xA);
	f__01F7_0971_0030_7FC9(); return;
}

/**
 * Decompiled function f__01F7_0971_0030_7FC9()
 *
 * @name f__01F7_0971_0030_7FC9
 * @implements 01F7:0971:0030:7FC9 ()
 *
 * Called From: 01F7:0968:0005:14C2
 */
void f__01F7_0971_0030_7FC9()
{
	emu_testw(&emu_di, 0x20);
	if (!emu_flags.zf) { f__01F7_0980_0021_6559(); return; }
	emu_cmpws(&emu_di, 0x58);
	if (emu_flags.zf) { emu_ip = 0x0980; emu_last_cs = 0x01F7; emu_last_ip = 0x097A; emu_last_length = 0x0030; emu_last_crc = 0x7FC9; emu_call(); return; } // Jump does not resolve
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
	emu_push(0x09A1); emu_ip = 0x0D59; emu_last_cs = 0x01F7; emu_last_ip = 0x099E; emu_last_length = 0x0030; emu_last_crc = 0x7FC9; emu_call(); // Jump does not resolve
	f__01F7_09A1_0015_7E06();
}

/**
 * Decompiled function f__01F7_0980_0021_6559()
 *
 * @name f__01F7_0980_0021_6559
 * @implements 01F7:0980:0021:6559 ()
 *
 * Called From: 01F7:0975:0030:7FC9
 */
void f__01F7_0980_0021_6559()
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
	emu_push(0x09A1); f__01F7_0D59_0022_0E82();
	f__01F7_09A1_0015_7E06();
}

/**
 * Decompiled function f__01F7_09A1_0015_7E06()
 *
 * @name f__01F7_09A1_0015_7E06
 * @implements 01F7:09A1:0015:7E06 ()
 *
 * Called From: 01F7:09A1:0021:6559
 */
void f__01F7_09A1_0015_7E06()
{
	emu_addws(&emu_sp, 0x14);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x09C2; emu_last_cs = 0x01F7; emu_last_ip = 0x09A8; emu_last_length = 0x0015; emu_last_crc = 0x7E06; emu_call(); return; } // Jump does not resolve
	emu_testb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x09BF; emu_last_cs = 0x01F7; emu_last_ip = 0x09AE; emu_last_length = 0x0015; emu_last_crc = 0x7E06; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(0x09B6); f__01F7_084E_0011_2F92();
	f__01F7_09B6_000C_C46D();
}

/**
 * Decompiled function f__01F7_09B6_000C_C46D()
 *
 * @name f__01F7_09B6_000C_C46D
 * @implements 01F7:09B6:000C:C46D ()
 *
 * Called From: 01F7:09B6:0015:7E06
 */
void f__01F7_09B6_000C_C46D()
{
	emu_stosw();
	emu_testb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x4);
	if (emu_flags.zf) { f__01F7_09BF_0003_0410(); return; }
	emu_xchgw(&emu_ax.x, &emu_dx.x);
	emu_stosw();
	emu_ip = 0x086B; emu_last_cs = 0x01F7; emu_last_ip = 0x09BF; emu_last_length = 0x000C; emu_last_crc = 0xC46D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_09BF_0003_0410()
 *
 * @name f__01F7_09BF_0003_0410
 * @implements 01F7:09BF:0003:0410 ()
 *
 * Called From: 01F7:09BB:000C:C46D
 */
void f__01F7_09BF_0003_0410()
{
	f__01F7_086B_001E_2872(); return;
}

/**
 * Decompiled function f__01F7_0C67_0007_2330()
 *
 * @name f__01F7_0C67_0007_2330
 * @implements 01F7:0C67:0007:2330 ()
 *
 * Called From: 01F7:08E5:0003:06B2
 */
void f__01F7_0C67_0007_2330()
{
	emu_pop(&emu_es);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__01F7_0CFC_0006_136A(); return;
}

/**
 * Decompiled function f__01F7_0CFC_0006_136A()
 *
 * @name f__01F7_0CFC_0006_136A
 * @implements 01F7:0CFC:0006:136A ()
 *
 * Called From: 01F7:0C6B:0007:2330
 */
void f__01F7_0CFC_0006_136A()
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
 * Decompiled function f__01F7_0D2E_0015_EEA7()
 *
 * @name f__01F7_0D2E_0015_EEA7
 * @implements 01F7:0D2E:0015:EEA7 ()
 *
 * Called From: 01F7:0E4B:0007:5B8C
 * Called From: 01F7:0E75:0009:B1D4
 */
void f__01F7_0D2E_0015_EEA7()
{
	emu_push(emu_bx.x);
	emu_subb(&emu_bx.l, 0x30);
	if (emu_flags.cf) { f__01F7_0D56_0003_00BA(); return; }
	emu_cmpb(&emu_bx.l, 0x9);
	if ((emu_flags.cf || emu_flags.zf)) { f__01F7_0D4B_000B_71DA(); return; }
	emu_cmpb(&emu_bx.l, 0x2A);
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_0D43_0013_C6C9(); return; }
	emu_subb(&emu_bx.l, 0x7);
	emu_ip = 0x0D46; emu_last_cs = 0x01F7; emu_last_ip = 0x0D41; emu_last_length = 0x0015; emu_last_crc = 0xEEA7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0D43_0013_C6C9()
 *
 * @name f__01F7_0D43_0013_C6C9
 * @implements 01F7:0D43:0013:C6C9 ()
 *
 * Called From: 01F7:0D3C:0015:EEA7
 */
void f__01F7_0D43_0013_C6C9()
{
	emu_subb(&emu_bx.l, 0x27);
	emu_cmpb(&emu_bx.l, 0x9);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0D56; emu_last_cs = 0x01F7; emu_last_ip = 0x0D49; emu_last_length = 0x0013; emu_last_crc = 0xC6C9; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_bx.l, emu_cx.l);
	if (!emu_flags.cf) { f__01F7_0D56_0003_00BA(); return; }
	emu_incw(&emu_sp);
	emu_incw(&emu_sp);
	emu_clc();
	emu_movb(&emu_bx.h, 0x0);
	emu_ip = 0x0D58; emu_last_cs = 0x01F7; emu_last_ip = 0x0D54; emu_last_length = 0x0013; emu_last_crc = 0xC6C9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0D4B_000B_71DA()
 *
 * @name f__01F7_0D4B_000B_71DA
 * @implements 01F7:0D4B:000B:71DA ()
 *
 * Called From: 01F7:0D37:0015:EEA7
 */
void f__01F7_0D4B_000B_71DA()
{
	emu_cmpb(&emu_bx.l, emu_cx.l);
	if (!emu_flags.cf) { emu_ip = 0x0D56; emu_last_cs = 0x01F7; emu_last_ip = 0x0D4D; emu_last_length = 0x000B; emu_last_crc = 0x71DA; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_sp);
	emu_incw(&emu_sp);
	emu_clc();
	emu_movb(&emu_bx.h, 0x0);
	f__01F7_0D58_0001_0186(); return;
}

/**
 * Decompiled function f__01F7_0D56_0003_00BA()
 *
 * @name f__01F7_0D56_0003_00BA
 * @implements 01F7:0D56:0003:00BA ()
 *
 * Called From: 01F7:0D32:0015:EEA7
 * Called From: 01F7:0D4D:0013:C6C9
 */
void f__01F7_0D56_0003_00BA()
{
	emu_pop(&emu_bx.x);
	emu_stc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_0D58_0001_0186()
 *
 * @name f__01F7_0D58_0001_0186
 * @implements 01F7:0D58:0001:0186 ()
 *
 * Called From: 01F7:0D54:000B:71DA
 */
void f__01F7_0D58_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_0D59_0022_0E82()
 *
 * @name f__01F7_0D59_0022_0E82
 * @implements 01F7:0D59:0022:0E82 ()
 *
 * Called From: 01F7:099E:0021:6559
 */
void f__01F7_0D59_0022_0E82()
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
		case 0x37D0: f__01F7_37D0_0021_3A90(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0D78; emu_last_length = 0x0022; emu_last_crc = 0x0E82;
			emu_call();
			return;
	}
	f__01F7_0D7B_0037_9A72();
}

/**
 * Decompiled function f__01F7_0D6F_000C_8A27()
 *
 * @name f__01F7_0D6F_000C_8A27
 * @implements 01F7:0D6F:000C:8A27 ()
 *
 * Called From: 01F7:0D8E:0037:9A72
 */
void f__01F7_0D6F_000C_8A27()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0D7B);
	switch (emu_ip) {
		case 0x37D0: f__01F7_37D0_0021_3A90(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0D78; emu_last_length = 0x000C; emu_last_crc = 0x8A27;
			emu_call();
			return;
	}
	f__01F7_0D7B_0037_9A72();
}

/**
 * Decompiled function f__01F7_0D7B_0037_9A72()
 *
 * @name f__01F7_0D7B_0037_9A72
 * @implements 01F7:0D7B:0037:9A72 ()
 *
 * Called From: 01F7:0D7B:0022:0E82
 * Called From: 01F7:0D7B:000C:8A27
 */
void f__01F7_0D7B_0037_9A72()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DF2; emu_last_cs = 0x01F7; emu_last_ip = 0x0D7F; emu_last_length = 0x0037; emu_last_crc = 0x9A72; emu_call(); return; } // Jump does not resolve
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_testb(&emu_bx.l, 0x80);
	if (!emu_flags.zf) { emu_ip = 0x0D90; emu_last_cs = 0x01F7; emu_last_ip = 0x0D86; emu_last_length = 0x0037; emu_last_crc = 0x9A72; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_di, 0x76BD);
	emu_testb(&emu_get_memory8(emu_ds, emu_bx.x + emu_di,  0x0), 0x1);
	if (!emu_flags.zf) { f__01F7_0D6F_000C_8A27(); return; }
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DF9; emu_last_cs = 0x01F7; emu_last_ip = 0x0D94; emu_last_length = 0x0037; emu_last_crc = 0x9A72; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x2B);
	if (emu_flags.zf) { emu_ip = 0x0DA1; emu_last_cs = 0x01F7; emu_last_ip = 0x0D98; emu_last_length = 0x0037; emu_last_crc = 0x9A72; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x2D);
	if (!emu_flags.zf) { f__01F7_0DB8_002D_9D05(); return; }
	emu_incb(&emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DF9; emu_last_cs = 0x01F7; emu_last_ip = 0x0DA4; emu_last_length = 0x0037; emu_last_crc = 0x9A72; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0DB2);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0DAF; emu_last_length = 0x0037; emu_last_crc = 0x9A72;
			emu_call();
			return;
	}
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_0DB8_002D_9D05()
 *
 * @name f__01F7_0DB8_002D_9D05
 * @implements 01F7:0DB8:002D:9D05 ()
 *
 * Called From: 01F7:0D9C:0037:9A72
 */
void f__01F7_0DB8_002D_9D05()
{
	emu_subw(&emu_si, emu_si);
	emu_movw(&emu_di, emu_si);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_cx.x == 0) { emu_ip = 0x0E17; emu_last_cs = 0x01F7; emu_last_ip = 0x0DBF; emu_last_length = 0x002D; emu_last_crc = 0x9D05; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_cx.x, 0x24);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0DF9; emu_last_cs = 0x01F7; emu_last_ip = 0x0DC4; emu_last_length = 0x002D; emu_last_crc = 0x9D05; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_cx.l, 0x2);
	if (emu_flags.cf) { emu_ip = 0x0DF9; emu_last_cs = 0x01F7; emu_last_ip = 0x0DC9; emu_last_length = 0x002D; emu_last_crc = 0x9D05; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x30);
	if (!emu_flags.zf) { f__01F7_0E47_0007_5B8C(); return; }
	emu_cmpb(&emu_cx.l, 0x10);
	if (!emu_flags.zf) { f__01F7_0E45_0002_0382(); return; }
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0E14; emu_last_cs = 0x01F7; emu_last_ip = 0x0DD7; emu_last_length = 0x002D; emu_last_crc = 0x9D05; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0DE5);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0DE2; emu_last_length = 0x002D; emu_last_crc = 0x9D05;
			emu_call();
			return;
	}
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_0E45_0002_0382()
 *
 * @name f__01F7_0E45_0002_0382
 * @implements 01F7:0E45:0002:0382 ()
 *
 * Called From: 01F7:0DD2:002D:9D05
 */
void f__01F7_0E45_0002_0382()
{
	f__01F7_0E5E_0011_8B84(); return;
}

/**
 * Decompiled function f__01F7_0E47_0007_5B8C()
 *
 * @name f__01F7_0E47_0007_5B8C
 * @implements 01F7:0E47:0007:5B8C ()
 *
 * Called From: 01F7:0DCD:002D:9D05
 */
void f__01F7_0E47_0007_5B8C()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_push(0x0E4E); f__01F7_0D2E_0015_EEA7();
	f__01F7_0E4E_0006_2708();
}

/**
 * Decompiled function f__01F7_0E4E_0006_2708()
 *
 * @name f__01F7_0E4E_0006_2708
 * @implements 01F7:0E4E:0006:2708 ()
 *
 * Called From: 01F7:0E4E:0007:5B8C
 */
void f__01F7_0E4E_0006_2708()
{
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	if (emu_flags.cf) { emu_ip = 0x0DF9; emu_last_cs = 0x01F7; emu_last_ip = 0x0E4F; emu_last_length = 0x0006; emu_last_crc = 0x2708; emu_call(); return; } // Jump does not resolve
	emu_xchgw(&emu_ax.x, &emu_si);
	f__01F7_0E5E_0011_8B84(); return;
}

/**
 * Decompiled function f__01F7_0E54_001B_14AB()
 *
 * @name f__01F7_0E54_001B_14AB
 * @implements 01F7:0E54:001B:14AB ()
 *
 * Called From: 01F7:0E79:0005:1068
 */
void f__01F7_0E54_001B_14AB()
{
	emu_xchgw(&emu_ax.x, &emu_si);
	emu_mulw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_si, emu_ax.x);
	emu_adcw(&emu_di, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x0E8E; emu_last_cs = 0x01F7; emu_last_ip = 0x0E5C; emu_last_length = 0x001B; emu_last_crc = 0x14AB; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0EBB; emu_last_cs = 0x01F7; emu_last_ip = 0x0E61; emu_last_length = 0x001B; emu_last_crc = 0x14AB; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0E6F);
	switch (emu_ip) {
		case 0x37D0: f__01F7_37D0_0021_3A90(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0E6C; emu_last_length = 0x001B; emu_last_crc = 0x14AB;
			emu_call();
			return;
	}
	f__01F7_0E6F_0009_B1D4();
}

/**
 * Decompiled function f__01F7_0E5E_0011_8B84()
 *
 * @name f__01F7_0E5E_0011_8B84
 * @implements 01F7:0E5E:0011:8B84 ()
 *
 * Called From: 01F7:0E45:0002:0382
 * Called From: 01F7:0E52:0006:2708
 */
void f__01F7_0E5E_0011_8B84()
{
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0EBB; emu_last_cs = 0x01F7; emu_last_ip = 0x0E61; emu_last_length = 0x0011; emu_last_crc = 0x8B84; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_push(0x0E6F);
	switch (emu_ip) {
		case 0x37D0: f__01F7_37D0_0021_3A90(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0E6C; emu_last_length = 0x0011; emu_last_crc = 0x8B84;
			emu_call();
			return;
	}
	f__01F7_0E6F_0009_B1D4();
}

/**
 * Decompiled function f__01F7_0E6F_0009_B1D4()
 *
 * @name f__01F7_0E6F_0009_B1D4
 * @implements 01F7:0E6F:0009:B1D4 ()
 *
 * Called From: 01F7:0E6F:0011:8B84
 * Called From: 01F7:0E6F:001B:14AB
 */
void f__01F7_0E6F_0009_B1D4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_push(0x0E78); f__01F7_0D2E_0015_EEA7();
	f__01F7_0E78_0005_1068();
}

/**
 * Decompiled function f__01F7_0E78_0005_1068()
 *
 * @name f__01F7_0E78_0005_1068
 * @implements 01F7:0E78:0005:1068 ()
 *
 * Called From: 01F7:0E78:0009:B1D4
 */
void f__01F7_0E78_0005_1068()
{
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	if (!emu_flags.cf) { f__01F7_0E54_001B_14AB(); return; }
	f__01F7_0EAB_000A_7AAF(); return;
}

/**
 * Decompiled function f__01F7_0EAB_000A_7AAF()
 *
 * @name f__01F7_0EAB_000A_7AAF
 * @implements 01F7:0EAB:000A:7AAF ()
 *
 * Called From: 01F7:0E7B:0005:1068
 */
void f__01F7_0EAB_000A_7AAF()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(0x0EB5);
	switch (emu_ip) {
		case 0x37F8: f__01F7_37F8_000B_BD3B(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0EB2; emu_last_length = 0x000A; emu_last_crc = 0x7AAF;
			emu_call();
			return;
	}
	f__01F7_0EB5_002A_06A8();
}

/**
 * Decompiled function f__01F7_0EB5_002A_06A8()
 *
 * @name f__01F7_0EB5_002A_06A8
 * @implements 01F7:0EB5:002A:06A8 ()
 *
 * Called From: 01F7:0EB5:000A:7AAF
 */
void f__01F7_0EB5_002A_06A8()
{
	emu_addws(&emu_sp, 0x6);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, emu_di);
	emu_xchgw(&emu_ax.x, &emu_si);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x1), 0x0);
	if (emu_flags.zf) { f__01F7_0ECB_0014_1B71(); return; }
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbws(&emu_dx.x, 0x0);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_es, emu_di,  0x0), emu_bx.x);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_di,  0x0), emu_bx.x);
	emu_ip = 0x0EF5; emu_last_cs = 0x01F7; emu_last_ip = 0x0EDD; emu_last_length = 0x002A; emu_last_crc = 0x06A8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0ECB_0014_1B71()
 *
 * @name f__01F7_0ECB_0014_1B71
 * @implements 01F7:0ECB:0014:1B71 ()
 *
 * Called From: 01F7:0EC2:002A:06A8
 */
void f__01F7_0ECB_0014_1B71()
{
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_es, emu_di,  0x0), emu_bx.x);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_di,  0x0), emu_bx.x);
	f__01F7_0EF5_0006_136A(); return;
}

/**
 * Decompiled function f__01F7_0EF5_0006_136A()
 *
 * @name f__01F7_0EF5_0006_136A
 * @implements 01F7:0EF5:0006:136A ()
 *
 * Called From: 01F7:0EDD:0014:1B71
 */
void f__01F7_0EF5_0006_136A()
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
 * Decompiled function f__01F7_0EFB_0020_9AF7()
 *
 * @name f__01F7_0EFB_0020_9AF7
 * @implements 01F7:0EFB:0020:9AF7 ()
 *
 * Called From: 01F7:1FBD:0010:18A6
 */
void f__01F7_0EFB_0020_9AF7()
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
 * Decompiled function f__01F7_0F45_004B_D392()
 *
 * @name f__01F7_0F45_004B_D392
 * @implements 01F7:0F45:004B:D392 ()
 *
 * Called From: 01F7:0229:0004:04C0
 */
void f__01F7_0F45_004B_D392()
{
	emu_movw(&emu_cx.x, 0x5);
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x795A));
	if (!emu_flags.cf) { emu_ip = 0x0F86; emu_last_cs = 0x01F7; emu_last_ip = 0x0F4C; emu_last_length = 0x004B; emu_last_crc = 0xD392; emu_call(); return; } // Jump does not resolve
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
	if (emu_flags.cf) { f__01F7_0F4E_0042_2CC7(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x77CE));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0F90); emu_ip = 0x06C0; emu_last_cs = 0x01F7; emu_last_ip = 0x0F8D; emu_last_length = 0x004B; emu_last_crc = 0xD392; emu_call(); // Jump does not resolve
	f__01F7_0F90_001C_677E();
}

/**
 * Decompiled function f__01F7_0F4E_0042_2CC7()
 *
 * @name f__01F7_0F4E_0042_2CC7
 * @implements 01F7:0F4E:0042:2CC7 ()
 *
 * Called From: 01F7:0F84:0042:2CC7
 * Called From: 01F7:0F84:004B:D392
 */
void f__01F7_0F4E_0042_2CC7()
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
	if (emu_flags.cf) { f__01F7_0F4E_0042_2CC7(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x77CE));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0F90); f__01F7_06C0_000B_E2C7();
	f__01F7_0F90_001C_677E();
}

/**
 * Decompiled function f__01F7_0F90_001C_677E()
 *
 * @name f__01F7_0F90_001C_677E
 * @implements 01F7:0F90:001C:677E ()
 *
 * Called From: 01F7:0F90:0042:2CC7
 */
void f__01F7_0F90_001C_677E()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_0F9B_0011_1084(); return; }
	emu_andw(&emu_get_memory16(emu_ds, 0x00,  0x77CC), 0xFDFF);
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x77CC), 0x200);
	if (emu_flags.zf) { emu_ip = 0x0FAC; emu_last_cs = 0x01F7; emu_last_ip = 0x0FA5; emu_last_length = 0x001C; emu_last_crc = 0x677E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0FAE; emu_last_cs = 0x01F7; emu_last_ip = 0x0FAA; emu_last_length = 0x001C; emu_last_crc = 0x677E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0F9B_0011_1084()
 *
 * @name f__01F7_0F9B_0011_1084
 * @implements 01F7:0F9B:0011:1084 ()
 *
 * Called From: 01F7:0F93:001C:677E
 */
void f__01F7_0F9B_0011_1084()
{
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x77CC), 0x200);
	if (emu_flags.zf) { emu_ip = 0x0FAC; emu_last_cs = 0x01F7; emu_last_ip = 0x0FA5; emu_last_length = 0x0011; emu_last_crc = 0x1084; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__01F7_0FAE_0011_EAE5(); return;
}

/**
 * Decompiled function f__01F7_0FAE_0011_EAE5()
 *
 * @name f__01F7_0FAE_0011_EAE5
 * @implements 01F7:0FAE:0011:EAE5 ()
 *
 * Called From: 01F7:0FAA:0011:1084
 */
void f__01F7_0FAE_0011_EAE5()
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
	emu_push(0x0FBF); f__01F7_3357_0028_18B7();
	f__01F7_0FBF_000D_3C83();
}

/**
 * Decompiled function f__01F7_0FBF_000D_3C83()
 *
 * @name f__01F7_0FBF_000D_3C83
 * @implements 01F7:0FBF:000D:3C83 ()
 *
 * Called From: 01F7:0FBF:0011:EAE5
 */
void f__01F7_0FBF_000D_3C83()
{
	emu_addws(&emu_sp, 0xC);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x77E2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0FCC); f__01F7_06C0_000B_E2C7();
	f__01F7_0FCC_001C_02CF();
}

/**
 * Decompiled function f__01F7_0FCC_001C_02CF()
 *
 * @name f__01F7_0FCC_001C_02CF
 * @implements 01F7:0FCC:001C:02CF ()
 *
 * Called From: 01F7:0FCC:000D:3C83
 */
void f__01F7_0FCC_001C_02CF()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_0FD7_0011_70B5(); return; }
	emu_andw(&emu_get_memory16(emu_ds, 0x00,  0x77E0), 0xFDFF);
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x77E0), 0x200);
	if (emu_flags.zf) { emu_ip = 0x0FE8; emu_last_cs = 0x01F7; emu_last_ip = 0x0FE1; emu_last_length = 0x001C; emu_last_crc = 0x02CF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_ip = 0x0FEA; emu_last_cs = 0x01F7; emu_last_ip = 0x0FE6; emu_last_length = 0x001C; emu_last_crc = 0x02CF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_0FD7_0011_70B5()
 *
 * @name f__01F7_0FD7_0011_70B5
 * @implements 01F7:0FD7:0011:70B5 ()
 *
 * Called From: 01F7:0FCF:001C:02CF
 */
void f__01F7_0FD7_0011_70B5()
{
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x77E0), 0x200);
	if (emu_flags.zf) { emu_ip = 0x0FE8; emu_last_cs = 0x01F7; emu_last_ip = 0x0FE1; emu_last_length = 0x0011; emu_last_crc = 0x70B5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	f__01F7_0FEA_0011_FDF5(); return;
}

/**
 * Decompiled function f__01F7_0FEA_0011_FDF5()
 *
 * @name f__01F7_0FEA_0011_FDF5
 * @implements 01F7:0FEA:0011:FDF5 ()
 *
 * Called From: 01F7:0FE6:0011:70B5
 */
void f__01F7_0FEA_0011_FDF5()
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
	emu_push(0x0FFB); f__01F7_3357_0028_18B7();
	f__01F7_0FFB_0004_0FA6();
}

/**
 * Decompiled function f__01F7_0FFB_0004_0FA6()
 *
 * @name f__01F7_0FFB_0004_0FA6
 * @implements 01F7:0FFB:0004:0FA6 ()
 *
 * Called From: 01F7:0FFB:0011:FDF5
 */
void f__01F7_0FFB_0004_0FA6()
{
	emu_addws(&emu_sp, 0xC);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_103F_0010_38BE()
 *
 * @name f__01F7_103F_0010_38BE
 * @implements 01F7:103F:0010:38BE ()
 *
 * Called From: 25C4:03D3:000B:036C
 */
void f__01F7_103F_0010_38BE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x104F); f__01F7_0402_0007_1CA6();
	f__01F7_104F_000C_22A8();
}

/**
 * Decompiled function f__01F7_104F_000C_22A8()
 *
 * @name f__01F7_104F_000C_22A8
 * @implements 01F7:104F:000C:22A8 ()
 *
 * Called From: 01F7:104F:0010:38BE
 */
void f__01F7_104F_000C_22A8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x105B); f__01F7_0415_0007_1C96();
	f__01F7_105B_0011_F90B();
}

/**
 * Decompiled function f__01F7_105B_0011_F90B()
 *
 * @name f__01F7_105B_0011_F90B
 * @implements 01F7:105B:0011:F90B ()
 *
 * Called From: 01F7:105B:000C:22A8
 */
void f__01F7_105B_0011_F90B()
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
	emu_push(0x106C); f__01F7_3CF9_000C_50AD();
	f__01F7_106C_002B_65D2();
}

/**
 * Decompiled function f__01F7_106C_002B_65D2()
 *
 * @name f__01F7_106C_002B_65D2
 * @implements 01F7:106C:002B:65D2 ()
 *
 * Called From: 01F7:106C:0011:F90B
 */
void f__01F7_106C_002B_65D2()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__01F7_108D_000A_33F8(); return; }
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
 * Decompiled function f__01F7_108D_000A_33F8()
 *
 * @name f__01F7_108D_000A_33F8
 * @implements 01F7:108D:000A:33F8 ()
 *
 * Called From: 01F7:107B:002B:65D2
 */
void f__01F7_108D_000A_33F8()
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
 * Decompiled function f__01F7_1097_0010_906C()
 *
 * @name f__01F7_1097_0010_906C
 * @implements 01F7:1097:0010:906C ()
 *
 * Called From: B536:01D6:000A:756C
 */
void f__01F7_1097_0010_906C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_dx.x, 0xFF);
	if (!emu_flags.zf) { f__01F7_10A7_0016_7B8E(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x10C1; emu_last_cs = 0x01F7; emu_last_ip = 0x10A5; emu_last_length = 0x0010; emu_last_crc = 0x906C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_10A7_0016_7B8E()
 *
 * @name f__01F7_10A7_0016_7B8E
 * @implements 01F7:10A7:0016:7B8E ()
 *
 * Called From: 01F7:10A0:0010:906C
 */
void f__01F7_10A7_0016_7B8E()
{
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_ds, emu_bx.x,  0x76BD), 0x4);
	if (emu_flags.zf) { f__01F7_10BD_0006_3162(); return; }
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movb(&emu_ax.h, 0x0);
	emu_addw(&emu_ax.x, 0x20);
	emu_ip = 0x10C1; emu_last_cs = 0x01F7; emu_last_ip = 0x10BB; emu_last_length = 0x0016; emu_last_crc = 0x7B8E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_10BD_0006_3162()
 *
 * @name f__01F7_10BD_0006_3162
 * @implements 01F7:10BD:0006:3162 ()
 *
 * Called From: 01F7:10B2:0016:7B8E
 */
void f__01F7_10BD_0006_3162()
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
 * Decompiled function f__01F7_10C3_0010_906C()
 *
 * @name f__01F7_10C3_0010_906C
 * @implements 01F7:10C3:0010:906C ()
 *
 * Called From: 01F7:28F0:000E:0117
 * Called From: 01F7:2900:0010:C126
 * Called From: B4DA:173A:002D:8F3A
 * Called From: B4E6:03C8:0019:D485
 * Called From: B4E6:03DD:0007:24AE
 */
void f__01F7_10C3_0010_906C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_dx.x, 0xFF);
	if (!emu_flags.zf) { f__01F7_10D3_0016_B076(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x10ED; emu_last_cs = 0x01F7; emu_last_ip = 0x10D1; emu_last_length = 0x0010; emu_last_crc = 0x906C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_10D3_0016_B076()
 *
 * @name f__01F7_10D3_0016_B076
 * @implements 01F7:10D3:0016:B076 ()
 *
 * Called From: 01F7:10CC:0010:906C
 */
void f__01F7_10D3_0016_B076()
{
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_ds, emu_bx.x,  0x76BD), 0x8);
	if (emu_flags.zf) { f__01F7_10E9_0006_3162(); return; }
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movb(&emu_ax.h, 0x0);
	emu_addw(&emu_ax.x, 0xFFE0);
	f__01F7_10ED_0002_00E2(); return;
}

/**
 * Decompiled function f__01F7_10E9_0006_3162()
 *
 * @name f__01F7_10E9_0006_3162
 * @implements 01F7:10E9:0006:3162 ()
 *
 * Called From: 01F7:10DE:0016:B076
 */
void f__01F7_10E9_0006_3162()
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
 * Decompiled function f__01F7_10ED_0002_00E2()
 *
 * @name f__01F7_10ED_0002_00E2
 * @implements 01F7:10ED:0002:00E2 ()
 *
 * Called From: 01F7:10E7:0016:B076
 */
void f__01F7_10ED_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_111F_001A_F966()
 *
 * @name f__01F7_111F_001A_F966
 * @implements 01F7:111F:001A:F966 ()
 *
 * Called From: 01F7:2BDA:0019:6EF0
 * Called From: 01F7:37AA:0020:4A95
 * Called From: 01F7:37CB:001F:B961
 */
void f__01F7_111F_001A_F966()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x96);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x50);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	f__01F7_1183_0025_2286(); return;
}

/**
 * Decompiled function f__01F7_1139_000D_93C7()
 *
 * @name f__01F7_1139_000D_93C7
 * @implements 01F7:1139:000D:93C7 ()
 *
 * Called From: 01F7:13F0:0003:07A2
 * Called From: 01F7:1450:0011:C320
 * Called From: 01F7:1482:0003:0468
 */
void f__01F7_1139_000D_93C7()
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
 * Decompiled function f__01F7_1146_0023_9242()
 *
 * @name f__01F7_1146_0023_9242
 * @implements 01F7:1146:0023:9242 ()
 *
 * Called From: 01F7:14D6:0005:130C
 * Called From: 01F7:1517:0009:A749
 * Called From: 01F7:1517:0005:1308
 */
void f__01F7_1146_0023_9242()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if (!emu_flags.zf) { f__01F7_1182_0001_0186(); return; }
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
			emu_last_cs = 0x01F7; emu_last_ip = 0x1166; emu_last_length = 0x0023; emu_last_crc = 0x9242;
			emu_call();
			return;
	}
	f__01F7_1169_001A_1C20();
}

/**
 * Decompiled function f__01F7_114F_001A_59E8()
 *
 * @name f__01F7_114F_001A_59E8
 * @implements 01F7:114F:001A:59E8 ()
 *
 * Called From: 01F7:11A5:0016:E670
 * Called From: 01F7:1598:0009:17F7
 */
void f__01F7_114F_001A_59E8()
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
		case 0x2DA4: f__01F7_2DA4_001B_54CC(); break;
		case 0x374D: f__01F7_374D_001D_4334(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x1166; emu_last_length = 0x001A; emu_last_crc = 0x59E8;
			emu_call();
			return;
	}
	f__01F7_1169_001A_1C20();
}

/**
 * Decompiled function f__01F7_1169_001A_1C20()
 *
 * @name f__01F7_1169_001A_1C20
 * @implements 01F7:1169:001A:1C20 ()
 *
 * Called From: 01F7:1169:001A:59E8
 */
void f__01F7_1169_001A_1C20()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_1172_0011_F009(); return; }
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
 * Decompiled function f__01F7_1172_0011_F009()
 *
 * @name f__01F7_1172_0011_F009
 * @implements 01F7:1172:0011:F009 ()
 *
 * Called From: 01F7:116B:001A:1C20
 */
void f__01F7_1172_0011_F009()
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
 * Decompiled function f__01F7_1182_0001_0186()
 *
 * @name f__01F7_1182_0001_0186
 * @implements 01F7:1182:0001:0186 ()
 *
 * Called From: 01F7:114D:0023:9242
 */
void f__01F7_1182_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1183_0025_2286()
 *
 * @name f__01F7_1183_0025_2286
 * @implements 01F7:1183:0025:2286 ()
 *
 * Called From: 01F7:1137:001A:F966
 */
void f__01F7_1183_0025_2286()
{
	emu_push(emu_es);
	emu_cld();
	emu_movw(&emu_di, emu_bp - 0x96);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lodsb(emu_es);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__01F7_11AA_0003_04DA(); return; }
	emu_cmpb(&emu_ax.l, 0x25);
	if (emu_flags.zf) { f__01F7_11AD_0025_CDBA(); return; }
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_1192_0016_E670(); return; }
	emu_push(0x11A8); emu_ip = 0x114F; emu_last_cs = 0x01F7; emu_last_ip = 0x11A5; emu_last_length = 0x0025; emu_last_crc = 0x2286; emu_call(); // Jump does not resolve
	f__01F7_11A8_0002_027C();
}

/**
 * Decompiled function f__01F7_118F_0019_1B71()
 *
 * @name f__01F7_118F_0019_1B71
 * @implements 01F7:118F:0019:1B71 ()
 *
 * Called From: 01F7:153F:0003:0784
 */
void f__01F7_118F_0019_1B71()
{
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lodsb(emu_es);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__01F7_11AA_0003_04DA(); return; }
	emu_cmpb(&emu_ax.l, 0x25);
	if (emu_flags.zf) { f__01F7_11AD_0025_CDBA(); return; }
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_1192_0016_E670(); return; }
	emu_push(0x11A8); emu_ip = 0x114F; emu_last_cs = 0x01F7; emu_last_ip = 0x11A5; emu_last_length = 0x0019; emu_last_crc = 0x1B71; emu_call(); // Jump does not resolve
	f__01F7_11A8_0002_027C();
}

/**
 * Decompiled function f__01F7_1192_0016_E670()
 *
 * @name f__01F7_1192_0016_E670
 * @implements 01F7:1192:0016:E670 ()
 *
 * Called From: 01F7:11A3:000C:5D15
 * Called From: 01F7:11A3:0016:E670
 * Called From: 01F7:11A3:0019:1B71
 * Called From: 01F7:11A3:0025:2286
 * Called From: 01F7:11A8:0002:027C
 */
void f__01F7_1192_0016_E670()
{
	emu_lodsb(emu_es);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__01F7_11AA_0003_04DA(); return; }
	emu_cmpb(&emu_ax.l, 0x25);
	if (emu_flags.zf) { f__01F7_11AD_0025_CDBA(); return; }
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_1192_0016_E670(); return; }
	emu_push(0x11A8); f__01F7_114F_001A_59E8();
	f__01F7_11A8_0002_027C();
}

/**
 * Decompiled function f__01F7_119C_000C_5D15()
 *
 * @name f__01F7_119C_000C_5D15
 * @implements 01F7:119C:000C:5D15 ()
 *
 * Called From: 01F7:11B4:0025:CDBA
 */
void f__01F7_119C_000C_5D15()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_1192_0016_E670(); return; }
	emu_push(0x11A8); emu_ip = 0x114F; emu_last_cs = 0x01F7; emu_last_ip = 0x11A5; emu_last_length = 0x000C; emu_last_crc = 0x5D15; emu_call(); // Jump does not resolve
	f__01F7_11A8_0002_027C();
}

/**
 * Decompiled function f__01F7_11A8_0002_027C()
 *
 * @name f__01F7_11A8_0002_027C
 * @implements 01F7:11A8:0002:027C ()
 *
 * Called From: 01F7:11A8:0016:E670
 */
void f__01F7_11A8_0002_027C()
{
	f__01F7_1192_0016_E670(); return;
}

/**
 * Decompiled function f__01F7_11AA_0003_04DA()
 *
 * @name f__01F7_11AA_0003_04DA
 * @implements 01F7:11AA:0003:04DA ()
 *
 * Called From: 01F7:1196:0016:E670
 * Called From: 01F7:1196:0019:1B71
 * Called From: 01F7:1196:0025:2286
 */
void f__01F7_11AA_0003_04DA()
{
	f__01F7_1592_0009_17F7(); return;
}

/**
 * Decompiled function f__01F7_11AD_0025_CDBA()
 *
 * @name f__01F7_11AD_0025_CDBA
 * @implements 01F7:11AD:0025:CDBA ()
 *
 * Called From: 01F7:119A:0016:E670
 * Called From: 01F7:119A:0019:1B71
 * Called From: 01F7:119A:0025:2286
 */
void f__01F7_11AD_0025_CDBA()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_si);
	emu_lodsb(emu_es);
	emu_cmpb(&emu_ax.l, 0x25);
	if (emu_flags.zf) { f__01F7_119C_000C_5D15(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_di);
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0xB), emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xFFFF);
	f__01F7_11D4_001A_EC7F(); return;
}

/**
 * Decompiled function f__01F7_11D2_001C_EC78()
 *
 * @name f__01F7_11D2_001C_EC78
 * @implements 01F7:11D2:001C:EC78 ()
 *
 * Called From: 01F7:122A:0004:0998
 * Called From: 01F7:123E:0014:FA6F
 * Called From: 01F7:1261:0003:070E
 */
void f__01F7_11D2_001C_EC78()
{
	emu_lodsb(emu_es);
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_subb(&emu_bx.l, 0x20);
	emu_cmpb(&emu_bx.l, 0x60);
	if (!emu_flags.cf) { emu_ip = 0x11F5; emu_last_cs = 0x01F7; emu_last_ip = 0x11E0; emu_last_length = 0x001C; emu_last_crc = 0xEC78; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_bx.l, emu_get_memory8(emu_ds, emu_bx.x,  0x7A71));
	emu_cmpws(&emu_bx.x, 0x17);
	if ((emu_flags.cf || emu_flags.zf)) { f__01F7_11EE_0007_5DAA(); return; }
	emu_ip = 0x157E; emu_last_cs = 0x01F7; emu_last_ip = 0x11EB; emu_last_length = 0x001C; emu_last_crc = 0xEC78; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_11D4_001A_EC7F()
 *
 * @name f__01F7_11D4_001A_EC7F
 * @implements 01F7:11D4:001A:EC7F ()
 *
 * Called From: 01F7:11D0:0025:CDBA
 */
void f__01F7_11D4_001A_EC7F()
{
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_subb(&emu_bx.l, 0x20);
	emu_cmpb(&emu_bx.l, 0x60);
	if (!emu_flags.cf) { emu_ip = 0x11F5; emu_last_cs = 0x01F7; emu_last_ip = 0x11E0; emu_last_length = 0x001A; emu_last_crc = 0xEC7F; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_bx.l, emu_get_memory8(emu_ds, emu_bx.x,  0x7A71));
	emu_cmpws(&emu_bx.x, 0x17);
	if ((emu_flags.cf || emu_flags.zf)) { f__01F7_11EE_0007_5DAA(); return; }
	emu_ip = 0x157E; emu_last_cs = 0x01F7; emu_last_ip = 0x11EB; emu_last_length = 0x001A; emu_last_crc = 0xEC7F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_11EE_0007_5DAA()
 *
 * @name f__01F7_11EE_0007_5DAA
 * @implements 01F7:11EE:0007:5DAA ()
 *
 * Called From: 01F7:11E9:001A:EC7F
 * Called From: 01F7:11E9:001C:EC78
 */
void f__01F7_11EE_0007_5DAA()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x15B2);
	switch (emu_ip) {
		case 0x122C: f__01F7_122C_0014_FA6F(); return;
		case 0x127E: f__01F7_127E_0022_4A5C(); return;
		case 0x12BC: f__01F7_12BC_0007_4BE2(); return;
		case 0x12D3: f__01F7_12D3_0004_0898(); return;
		case 0x12F1: f__01F7_12F1_003D_FEB7(); return;
		case 0x13A1: f__01F7_13A1_0020_A25E(); return;
		case 0x13C1: f__01F7_13C1_001D_8DCA(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x11F0; emu_last_length = 0x0007; emu_last_crc = 0x5DAA;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__01F7_1228_0004_0998()
 *
 * @name f__01F7_1228_0004_0998
 * @implements 01F7:1228:0004:0998 ()
 *
 * Called From: 01F7:12C0:0007:4BE2
 */
void f__01F7_1228_0004_0998()
{
	emu_movb(&emu_cx.h, 0x5);
	f__01F7_11D2_001C_EC78(); return;
}

/**
 * Decompiled function f__01F7_122C_0014_FA6F()
 *
 * @name f__01F7_122C_0014_FA6F
 * @implements 01F7:122C:0014:FA6F ()
 *
 * Called From: 01F7:11F0:0007:5DAA
 */
void f__01F7_122C_0014_FA6F()
{
	emu_cmpb(&emu_cx.h, 0x0);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x127E; emu_last_cs = 0x01F7; emu_last_ip = 0x122F; emu_last_length = 0x0014; emu_last_crc = 0xFA6F; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x1261; emu_last_cs = 0x01F7; emu_last_ip = 0x1236; emu_last_length = 0x0014; emu_last_crc = 0xFA6F; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	emu_movb(&emu_cx.h, 0x1);
	f__01F7_11D2_001C_EC78(); return;
}

/**
 * Decompiled function f__01F7_1261_0003_070E()
 *
 * @name f__01F7_1261_0003_070E
 * @implements 01F7:1261:0003:070E ()
 *
 * Called From: 01F7:128E:0022:4A5C
 */
void f__01F7_1261_0003_070E()
{
	f__01F7_11D2_001C_EC78(); return;
}

/**
 * Decompiled function f__01F7_127E_0022_4A5C()
 *
 * @name f__01F7_127E_0022_4A5C
 * @implements 01F7:127E:0022:4A5C ()
 *
 * Called From: 01F7:11F0:0007:5DAA
 */
void f__01F7_127E_0022_4A5C()
{
	emu_xchgw(&emu_ax.x, &emu_dx.x);
	emu_subb(&emu_ax.l, 0x30);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpb(&emu_cx.h, 0x2);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x12A0; emu_last_cs = 0x01F7; emu_last_ip = 0x1285; emu_last_length = 0x0022; emu_last_crc = 0x4A5C; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_cx.h, 0x2);
	emu_xchgw(&emu_get_memory16(emu_ss, emu_bp, -0x8), &emu_ax.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.sf != emu_flags.of)) { f__01F7_1261_0003_070E(); return; }
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_ip = 0x11D2; emu_last_cs = 0x01F7; emu_last_ip = 0x129D; emu_last_length = 0x0022; emu_last_crc = 0x4A5C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_12BC_0007_4BE2()
 *
 * @name f__01F7_12BC_0007_4BE2
 * @implements 01F7:12BC:0007:4BE2 ()
 *
 * Called From: 01F7:11F0:0007:5DAA
 */
void f__01F7_12BC_0007_4BE2()
{
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x10);
	f__01F7_1228_0004_0998(); return;
}

/**
 * Decompiled function f__01F7_12D3_0004_0898()
 *
 * @name f__01F7_12D3_0004_0898
 * @implements 01F7:12D3:0004:0898 ()
 *
 * Called From: 01F7:11F0:0007:5DAA
 */
void f__01F7_12D3_0004_0898()
{
	emu_movb(&emu_bx.h, 0xA);
	f__01F7_12E1_0010_D446(); return;
}

/**
 * Decompiled function f__01F7_12E1_0010_D446()
 *
 * @name f__01F7_12E1_0010_D446
 * @implements 01F7:12E1:0010:D446 ()
 *
 * Called From: 01F7:12D5:0004:0898
 */
void f__01F7_12E1_0010_D446()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), emu_dx.l);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x6), emu_dx.l);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_di,  0x0));
	f__01F7_1301_002D_E6D4(); return;
}

/**
 * Decompiled function f__01F7_12F1_003D_FEB7()
 *
 * @name f__01F7_12F1_003D_FEB7
 * @implements 01F7:12F1:003D:FEB7 ()
 *
 * Called From: 01F7:11F0:0007:5DAA
 */
void f__01F7_12F1_003D_FEB7()
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
	if (emu_flags.zf) { f__01F7_1312_001C_A01D(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x4), emu_di);
	emu_movw(&emu_di, emu_bp - 0x45);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_132E_0014_ADE3(); return; }
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x132E; emu_last_cs = 0x01F7; emu_last_ip = 0x131E; emu_last_length = 0x003D; emu_last_crc = 0xFEB7; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1332; emu_last_cs = 0x01F7; emu_last_ip = 0x1324; emu_last_length = 0x003D; emu_last_crc = 0xFEB7; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), 0x0);
	emu_movw(&emu_ax.x, emu_di);
	emu_ip = 0x1342; emu_last_cs = 0x01F7; emu_last_ip = 0x132C; emu_last_length = 0x003D; emu_last_crc = 0xFEB7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1301_002D_E6D4()
 *
 * @name f__01F7_1301_002D_E6D4
 * @implements 01F7:1301:002D:E6D4 ()
 *
 * Called From: 01F7:12EF:0010:D446
 */
void f__01F7_1301_002D_E6D4()
{
	emu_incw(&emu_di);
	emu_incw(&emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_si);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x10);
	if (emu_flags.zf) { f__01F7_1312_001C_A01D(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x4), emu_di);
	emu_movw(&emu_di, emu_bp - 0x45);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x132E; emu_last_cs = 0x01F7; emu_last_ip = 0x131A; emu_last_length = 0x002D; emu_last_crc = 0xE6D4; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x132E; emu_last_cs = 0x01F7; emu_last_ip = 0x131E; emu_last_length = 0x002D; emu_last_crc = 0xE6D4; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1332; emu_last_cs = 0x01F7; emu_last_ip = 0x1324; emu_last_length = 0x002D; emu_last_crc = 0xE6D4; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), 0x0);
	emu_movw(&emu_ax.x, emu_di);
	emu_ip = 0x1342; emu_last_cs = 0x01F7; emu_last_ip = 0x132C; emu_last_length = 0x002D; emu_last_crc = 0xE6D4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1312_001C_A01D()
 *
 * @name f__01F7_1312_001C_A01D
 * @implements 01F7:1312:001C:A01D ()
 *
 * Called From: 01F7:130B:002D:E6D4
 * Called From: 01F7:130B:003D:FEB7
 */
void f__01F7_1312_001C_A01D()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x4), emu_di);
	emu_movw(&emu_di, emu_bp - 0x45);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_132E_0014_ADE3(); return; }
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x132E; emu_last_cs = 0x01F7; emu_last_ip = 0x131E; emu_last_length = 0x001C; emu_last_crc = 0xA01D; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__01F7_1332_0010_A453(); return; }
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), 0x0);
	emu_movw(&emu_ax.x, emu_di);
	emu_ip = 0x1342; emu_last_cs = 0x01F7; emu_last_ip = 0x132C; emu_last_length = 0x001C; emu_last_crc = 0xA01D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_132E_0014_ADE3()
 *
 * @name f__01F7_132E_0014_ADE3
 * @implements 01F7:132E:0014:ADE3 ()
 *
 * Called From: 01F7:131A:001C:A01D
 * Called From: 01F7:131A:003D:FEB7
 */
void f__01F7_132E_0014_ADE3()
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
	emu_push(0x1342); f__01F7_06D1_004A_5E28();
	f__01F7_1342_000C_140B();
}

/**
 * Decompiled function f__01F7_1332_0010_A453()
 *
 * @name f__01F7_1332_0010_A453
 * @implements 01F7:1332:0010:A453 ()
 *
 * Called From: 01F7:1324:001C:A01D
 */
void f__01F7_1332_0010_A453()
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
	emu_push(0x1342); f__01F7_06D1_004A_5E28();
	f__01F7_1342_000C_140B();
}

/**
 * Decompiled function f__01F7_1342_000C_140B()
 *
 * @name f__01F7_1342_000C_140B
 * @implements 01F7:1342:000C:140B ()
 *
 * Called From: 01F7:1342:0014:ADE3
 * Called From: 01F7:1342:0010:A453
 */
void f__01F7_1342_000C_140B()
{
	emu_push(emu_ss);
	emu_pop(&emu_es);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x134E; emu_last_cs = 0x01F7; emu_last_ip = 0x1349; emu_last_length = 0x000C; emu_last_crc = 0x140B; emu_call(); return; } // Jump does not resolve
	f__01F7_1442_0011_C320(); return;
}

/**
 * Decompiled function f__01F7_13A1_0020_A25E()
 *
 * @name f__01F7_13A1_0020_A25E
 * @implements 01F7:13A1:0020:A25E ()
 *
 * Called From: 01F7:11F0:0007:5DAA
 */
void f__01F7_13A1_0020_A25E()
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
	f__01F7_1485_0028_31E1(); return;
}

/**
 * Decompiled function f__01F7_13C1_001D_8DCA()
 *
 * @name f__01F7_13C1_001D_8DCA
 * @implements 01F7:13C1:001D:8DCA ()
 *
 * Called From: 01F7:11F0:0007:5DAA
 */
void f__01F7_13C1_001D_8DCA()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_si);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), emu_dx.l);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	if (!emu_flags.zf) { f__01F7_13DE_0015_60D0(); return; }
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_di,  0x0));
	emu_addws(&emu_get_memory16(emu_ss, emu_bp,  0x4), 0x2);
	emu_push(emu_ds);
	emu_pop(&emu_es);
	emu_orw(&emu_di, emu_di);
	emu_ip = 0x13E9; emu_last_cs = 0x01F7; emu_last_ip = 0x13DC; emu_last_length = 0x001D; emu_last_crc = 0x8DCA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_13DE_0015_60D0()
 *
 * @name f__01F7_13DE_0015_60D0
 * @implements 01F7:13DE:0015:60D0 ()
 *
 * Called From: 01F7:13CF:001D:8DCA
 */
void f__01F7_13DE_0015_60D0()
{
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_di,  0x0));
	emu_addws(&emu_get_memory16(emu_ss, emu_bp,  0x4), 0x4);
	emu_movw(&emu_ax.x, emu_es);
	emu_orw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { f__01F7_13F0_0003_07A2(); return; }
	emu_push(emu_ds);
	emu_pop(&emu_es);
	emu_movw(&emu_di, 0x7A6A);
	emu_push(0x13F3); emu_ip = 0x1139; emu_last_cs = 0x01F7; emu_last_ip = 0x13F0; emu_last_length = 0x0015; emu_last_crc = 0x60D0; emu_call(); // Jump does not resolve
	f__01F7_13F3_000B_5AB5();
}

/**
 * Decompiled function f__01F7_13F0_0003_07A2()
 *
 * @name f__01F7_13F0_0003_07A2
 * @implements 01F7:13F0:0003:07A2 ()
 *
 * Called From: 01F7:13E9:0015:60D0
 */
void f__01F7_13F0_0003_07A2()
{
	emu_push(0x13F3); f__01F7_1139_000D_93C7();
	f__01F7_13F3_000B_5AB5();
}

/**
 * Decompiled function f__01F7_13F3_000B_5AB5()
 *
 * @name f__01F7_13F3_000B_5AB5
 * @implements 01F7:13F3:000B:5AB5 ()
 *
 * Called From: 01F7:13F3:0003:07A2
 */
void f__01F7_13F3_000B_5AB5()
{
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_flags.cf || emu_flags.zf)) { f__01F7_13FB_0003_0554(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_ip = 0x1485; emu_last_cs = 0x01F7; emu_last_ip = 0x13FB; emu_last_length = 0x000B; emu_last_crc = 0x5AB5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_13FB_0003_0554()
 *
 * @name f__01F7_13FB_0003_0554
 * @implements 01F7:13FB:0003:0554 ()
 *
 * Called From: 01F7:13F6:000B:5AB5
 */
void f__01F7_13FB_0003_0554()
{
	f__01F7_1485_0028_31E1(); return;
}

/**
 * Decompiled function f__01F7_1442_0011_C320()
 *
 * @name f__01F7_1442_0011_C320
 * @implements 01F7:1442:0011:C320 ()
 *
 * Called From: 01F7:134B:000C:140B
 */
void f__01F7_1442_0011_C320()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	if (emu_flags.zf) { f__01F7_1461_0024_4E2B(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_dx.x, emu_dx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1461; emu_last_cs = 0x01F7; emu_last_ip = 0x144E; emu_last_length = 0x0011; emu_last_crc = 0xC320; emu_call(); return; } // Jump does not resolve
	emu_push(0x1453); f__01F7_1139_000D_93C7();
	f__01F7_1453_0032_93C3();
}

/**
 * Decompiled function f__01F7_1453_0032_93C3()
 *
 * @name f__01F7_1453_0032_93C3
 * @implements 01F7:1453:0032:93C3 ()
 *
 * Called From: 01F7:1453:0011:C320
 */
void f__01F7_1453_0032_93C3()
{
	emu_cmpb(&emu_get_memory8(emu_es, emu_di,  0x0), 0x2D);
	if (!emu_flags.zf) { f__01F7_145A_002B_E269(); return; }
	emu_decw(&emu_cx.x);
	emu_subw(&emu_dx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1461; emu_last_cs = 0x01F7; emu_last_ip = 0x145C; emu_last_length = 0x0032; emu_last_crc = 0x93C3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_di,  0x0), 0x2D);
	if (emu_flags.zf) { emu_ip = 0x1472; emu_last_cs = 0x01F7; emu_last_ip = 0x1465; emu_last_length = 0x0032; emu_last_crc = 0x93C3; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xB));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x1482; emu_last_cs = 0x01F7; emu_last_ip = 0x146C; emu_last_length = 0x0032; emu_last_crc = 0x93C3; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_di);
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1482; emu_last_cs = 0x01F7; emu_last_ip = 0x1476; emu_last_length = 0x0032; emu_last_crc = 0x93C3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x1482; emu_last_cs = 0x01F7; emu_last_ip = 0x147D; emu_last_length = 0x0032; emu_last_crc = 0x93C3; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(0x1485); emu_ip = 0x1139; emu_last_cs = 0x01F7; emu_last_ip = 0x1482; emu_last_length = 0x0032; emu_last_crc = 0x93C3; emu_call(); // Jump does not resolve
	f__01F7_1485_0028_31E1();
}

/**
 * Decompiled function f__01F7_145A_002B_E269()
 *
 * @name f__01F7_145A_002B_E269
 * @implements 01F7:145A:002B:E269 ()
 *
 * Called From: 01F7:1457:0032:93C3
 */
void f__01F7_145A_002B_E269()
{
	emu_subw(&emu_dx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1461; emu_last_cs = 0x01F7; emu_last_ip = 0x145C; emu_last_length = 0x002B; emu_last_crc = 0xE269; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_di,  0x0), 0x2D);
	if (emu_flags.zf) { emu_ip = 0x1472; emu_last_cs = 0x01F7; emu_last_ip = 0x1465; emu_last_length = 0x002B; emu_last_crc = 0xE269; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xB));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__01F7_1482_0003_0468(); return; }
	emu_decw(&emu_di);
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1482; emu_last_cs = 0x01F7; emu_last_ip = 0x1476; emu_last_length = 0x002B; emu_last_crc = 0xE269; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x1482; emu_last_cs = 0x01F7; emu_last_ip = 0x147D; emu_last_length = 0x002B; emu_last_crc = 0xE269; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(0x1485); emu_ip = 0x1139; emu_last_cs = 0x01F7; emu_last_ip = 0x1482; emu_last_length = 0x002B; emu_last_crc = 0xE269; emu_call(); // Jump does not resolve
	f__01F7_1485_0028_31E1();
}

/**
 * Decompiled function f__01F7_1461_0024_4E2B()
 *
 * @name f__01F7_1461_0024_4E2B
 * @implements 01F7:1461:0024:4E2B ()
 *
 * Called From: 01F7:1447:0011:C320
 */
void f__01F7_1461_0024_4E2B()
{
	emu_cmpb(&emu_get_memory8(emu_es, emu_di,  0x0), 0x2D);
	if (emu_flags.zf) { emu_ip = 0x1472; emu_last_cs = 0x01F7; emu_last_ip = 0x1465; emu_last_length = 0x0024; emu_last_crc = 0x4E2B; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xB));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__01F7_1482_0003_0468(); return; }
	emu_decw(&emu_di);
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1482; emu_last_cs = 0x01F7; emu_last_ip = 0x1476; emu_last_length = 0x0024; emu_last_crc = 0x4E2B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x1482; emu_last_cs = 0x01F7; emu_last_ip = 0x147D; emu_last_length = 0x0024; emu_last_crc = 0x4E2B; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(0x1485); emu_ip = 0x1139; emu_last_cs = 0x01F7; emu_last_ip = 0x1482; emu_last_length = 0x0024; emu_last_crc = 0x4E2B; emu_call(); // Jump does not resolve
	f__01F7_1485_0028_31E1();
}

/**
 * Decompiled function f__01F7_1482_0003_0468()
 *
 * @name f__01F7_1482_0003_0468
 * @implements 01F7:1482:0003:0468 ()
 *
 * Called From: 01F7:146C:0024:4E2B
 * Called From: 01F7:146C:002B:E269
 */
void f__01F7_1482_0003_0468()
{
	emu_push(0x1485); f__01F7_1139_000D_93C7();
	f__01F7_1485_0028_31E1();
}

/**
 * Decompiled function f__01F7_1485_0028_31E1()
 *
 * @name f__01F7_1485_0028_31E1
 * @implements 01F7:1485:0028:31E1 ()
 *
 * Called From: 01F7:13BE:0020:A25E
 * Called From: 01F7:13FB:0003:0554
 * Called From: 01F7:1485:0003:0468
 */
void f__01F7_1485_0028_31E1()
{
	emu_movw(&emu_si, emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, 0x5);
	emu_andw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, 0x5);
	if (!emu_flags.zf) { f__01F7_14AB_0002_039A(); return; }
	emu_movb(&emu_ax.h, emu_get_memory8(emu_ss, emu_bp, -0x5));
	emu_cmpb(&emu_ax.h, 0x6F);
	if (!emu_flags.zf) { emu_ip = 0x14AD; emu_last_cs = 0x01F7; emu_last_ip = 0x149E; emu_last_length = 0x0028; emu_last_crc = 0x31E1; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x14AB; emu_last_cs = 0x01F7; emu_last_ip = 0x14A4; emu_last_length = 0x0028; emu_last_crc = 0x31E1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_ip = 0x14C8; emu_last_cs = 0x01F7; emu_last_ip = 0x14AB; emu_last_length = 0x0028; emu_last_crc = 0x31E1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_14AB_0002_039A()
 *
 * @name f__01F7_14AB_0002_039A
 * @implements 01F7:14AB:0002:039A ()
 *
 * Called From: 01F7:1496:0028:31E1
 */
void f__01F7_14AB_0002_039A()
{
	f__01F7_14C8_000C_5B10(); return;
}

/**
 * Decompiled function f__01F7_14C8_000C_5B10()
 *
 * @name f__01F7_14C8_000C_5B10
 * @implements 01F7:14C8:000C:5B10 ()
 *
 * Called From: 01F7:14AB:0002:039A
 */
void f__01F7_14C8_000C_5B10()
{
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x14DE; emu_last_cs = 0x01F7; emu_last_ip = 0x14D0; emu_last_length = 0x000C; emu_last_crc = 0x5B10; emu_call(); return; } // Jump does not resolve
	f__01F7_14DA_0010_9250(); return;
}

/**
 * Decompiled function f__01F7_14D4_0005_130C()
 *
 * @name f__01F7_14D4_0005_130C
 * @implements 01F7:14D4:0005:130C ()
 *
 * Called From: 01F7:14DC:0010:9250
 * Called From: 01F7:14DC:0011:92C6
 */
void f__01F7_14D4_0005_130C()
{
	emu_movb(&emu_ax.l, 0x20);
	emu_push(0x14D9); f__01F7_1146_0023_9242();
	f__01F7_14D9_0011_92C6();
}

/**
 * Decompiled function f__01F7_14D9_0011_92C6()
 *
 * @name f__01F7_14D9_0011_92C6
 * @implements 01F7:14D9:0011:92C6 ()
 *
 * Called From: 01F7:14D9:0005:130C
 */
void f__01F7_14D9_0011_92C6()
{
	emu_decw(&emu_bx.x);
	emu_cmpw(&emu_bx.x, emu_cx.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_14D4_0005_130C(); return; }
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x40);
	if (emu_flags.zf) { f__01F7_14F0_001F_DFA6(); return; }
	emu_movb(&emu_ax.l, 0x30);
	emu_push(0x14EA); emu_ip = 0x1146; emu_last_cs = 0x01F7; emu_last_ip = 0x14E7; emu_last_length = 0x0011; emu_last_crc = 0x92C6; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_14DA_0010_9250()
 *
 * @name f__01F7_14DA_0010_9250
 * @implements 01F7:14DA:0010:9250 ()
 *
 * Called From: 01F7:14D2:000C:5B10
 */
void f__01F7_14DA_0010_9250()
{
	emu_cmpw(&emu_bx.x, emu_cx.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_14D4_0005_130C(); return; }
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x40);
	if (emu_flags.zf) { f__01F7_14F0_001F_DFA6(); return; }
	emu_movb(&emu_ax.l, 0x30);
	emu_push(0x14EA); emu_ip = 0x1146; emu_last_cs = 0x01F7; emu_last_ip = 0x14E7; emu_last_length = 0x0010; emu_last_crc = 0x9250; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_14F0_001F_DFA6()
 *
 * @name f__01F7_14F0_001F_DFA6
 * @implements 01F7:14F0:001F:DFA6 ()
 *
 * Called From: 01F7:14E3:0010:9250
 * Called From: 01F7:14E3:0011:92C6
 */
void f__01F7_14F0_001F_DFA6()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_orw(&emu_dx.x, emu_dx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_151E_0012_D2E0(); return; }
	emu_subw(&emu_cx.x, emu_dx.x);
	emu_subw(&emu_bx.x, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_cmpb(&emu_ax.l, 0x2D);
	if (emu_flags.zf) { emu_ip = 0x150A; emu_last_cs = 0x01F7; emu_last_ip = 0x1500; emu_last_length = 0x001F; emu_last_crc = 0xDFA6; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x20);
	if (emu_flags.zf) { emu_ip = 0x150A; emu_last_cs = 0x01F7; emu_last_ip = 0x1504; emu_last_length = 0x001F; emu_last_crc = 0xDFA6; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x2B);
	if (!emu_flags.zf) { f__01F7_1511_0009_A749(); return; }
	emu_lodsb(emu_es);
	emu_push(0x150F); emu_ip = 0x1146; emu_last_cs = 0x01F7; emu_last_ip = 0x150C; emu_last_length = 0x001F; emu_last_crc = 0xDFA6; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_1511_0009_A749()
 *
 * @name f__01F7_1511_0009_A749
 * @implements 01F7:1511:0009:A749 ()
 *
 * Called From: 01F7:1508:001F:DFA6
 */
void f__01F7_1511_0009_A749()
{
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	if (emu_cx.x == 0) { emu_ip = 0x151C; emu_last_cs = 0x01F7; emu_last_ip = 0x1513; emu_last_length = 0x0009; emu_last_crc = 0xA749; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, 0x30);
	emu_push(0x151A); f__01F7_1146_0023_9242();
	f__01F7_151A_0016_FB60();
}

/**
 * Decompiled function f__01F7_1515_0005_1308()
 *
 * @name f__01F7_1515_0005_1308
 * @implements 01F7:1515:0005:1308 ()
 *
 * Called From: 01F7:151A:0016:FB60
 */
void f__01F7_1515_0005_1308()
{
	emu_movb(&emu_ax.l, 0x30);
	emu_push(0x151A); f__01F7_1146_0023_9242();
	f__01F7_151A_0016_FB60();
}

/**
 * Decompiled function f__01F7_151A_0016_FB60()
 *
 * @name f__01F7_151A_0016_FB60
 * @implements 01F7:151A:0016:FB60 ()
 *
 * Called From: 01F7:151A:0009:A749
 * Called From: 01F7:151A:0005:1308
 */
void f__01F7_151A_0016_FB60()
{
	if (--emu_cx.x != 0) { f__01F7_1515_0005_1308(); return; }
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	if (emu_cx.x == 0) { emu_ip = 0x1532; emu_last_cs = 0x01F7; emu_last_ip = 0x151E; emu_last_length = 0x0016; emu_last_crc = 0xFB60; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_lodsb(emu_es);
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_1530_000D_E4CC(); return; }
	emu_push(0x1530); emu_ip = 0x114F; emu_last_cs = 0x01F7; emu_last_ip = 0x152D; emu_last_length = 0x0016; emu_last_crc = 0xFB60; emu_call(); // Jump does not resolve
	f__01F7_1530_000D_E4CC();
}

/**
 * Decompiled function f__01F7_151E_0012_D2E0()
 *
 * @name f__01F7_151E_0012_D2E0
 * @implements 01F7:151E:0012:D2E0 ()
 *
 * Called From: 01F7:14F5:001F:DFA6
 */
void f__01F7_151E_0012_D2E0()
{
	if (emu_cx.x == 0) { emu_ip = 0x1532; emu_last_cs = 0x01F7; emu_last_ip = 0x151E; emu_last_length = 0x0012; emu_last_crc = 0xD2E0; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_lodsb(emu_es);
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_1530_000D_E4CC(); return; }
	emu_push(0x1530); emu_ip = 0x114F; emu_last_cs = 0x01F7; emu_last_ip = 0x152D; emu_last_length = 0x0012; emu_last_crc = 0xD2E0; emu_call(); // Jump does not resolve
	f__01F7_1530_000D_E4CC();
}

/**
 * Decompiled function f__01F7_1522_000E_510F()
 *
 * @name f__01F7_1522_000E_510F
 * @implements 01F7:1522:000E:510F ()
 *
 * Called From: 01F7:1530:000D:E4CC
 */
void f__01F7_1522_000E_510F()
{
	emu_lodsb(emu_es);
	emu_movb(&emu_get_memory8(emu_ss, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_1530_000D_E4CC(); return; }
	emu_push(0x1530); emu_ip = 0x114F; emu_last_cs = 0x01F7; emu_last_ip = 0x152D; emu_last_length = 0x000E; emu_last_crc = 0x510F; emu_call(); // Jump does not resolve
	f__01F7_1530_000D_E4CC();
}

/**
 * Decompiled function f__01F7_1530_000D_E4CC()
 *
 * @name f__01F7_1530_000D_E4CC
 * @implements 01F7:1530:000D:E4CC ()
 *
 * Called From: 01F7:152B:000E:510F
 * Called From: 01F7:152B:0012:D2E0
 * Called From: 01F7:152B:0016:FB60
 */
void f__01F7_1530_000D_E4CC()
{
	if (--emu_cx.x != 0) { f__01F7_1522_000E_510F(); return; }
	emu_orw(&emu_bx.x, emu_bx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_153F_0003_0784(); return; }
	emu_movw(&emu_cx.x, emu_bx.x);
	emu_movb(&emu_ax.l, 0x20);
	emu_push(0x153D); emu_ip = 0x1146; emu_last_cs = 0x01F7; emu_last_ip = 0x153A; emu_last_length = 0x000D; emu_last_crc = 0xE4CC; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_153F_0003_0784()
 *
 * @name f__01F7_153F_0003_0784
 * @implements 01F7:153F:0003:0784 ()
 *
 * Called From: 01F7:1534:000D:E4CC
 */
void f__01F7_153F_0003_0784()
{
	f__01F7_118F_0019_1B71(); return;
}

/**
 * Decompiled function f__01F7_1592_0009_17F7()
 *
 * @name f__01F7_1592_0009_17F7
 * @implements 01F7:1592:0009:17F7 ()
 *
 * Called From: 01F7:11AA:0003:04DA
 */
void f__01F7_1592_0009_17F7()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x14), 0x50);
	if (!(emu_flags.sf != emu_flags.of)) { f__01F7_159B_000C_63E6(); return; }
	emu_push(0x159B); f__01F7_114F_001A_59E8();
	f__01F7_159B_000C_63E6();
}

/**
 * Decompiled function f__01F7_159B_000C_63E6()
 *
 * @name f__01F7_159B_000C_63E6
 * @implements 01F7:159B:000C:63E6 ()
 *
 * Called From: 01F7:1596:0009:17F7
 * Called From: 01F7:159B:0009:17F7
 */
void f__01F7_159B_000C_63E6()
{
	emu_pop(&emu_es);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (emu_flags.zf) { f__01F7_15A7_000B_D194(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x15AA; emu_last_cs = 0x01F7; emu_last_ip = 0x15A5; emu_last_length = 0x000C; emu_last_crc = 0x63E6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_15A7_000B_D194()
 *
 * @name f__01F7_15A7_000B_D194
 * @implements 01F7:15A7:000B:D194 ()
 *
 * Called From: 01F7:15A0:000C:63E6
 */
void f__01F7_15A7_000B_D194()
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
 * Decompiled function f__01F7_160D_001B_566C()
 *
 * @name f__01F7_160D_001B_566C
 * @implements 01F7:160D:001B:566C ()
 *
 * Called From: 01F7:1759:001B:55D2
 */
void f__01F7_160D_001B_566C()
{
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	if (emu_flags.zf) { emu_ip = 0x164B; emu_last_cs = 0x01F7; emu_last_ip = 0x1612; emu_last_length = 0x001B; emu_last_crc = 0x566C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ds, emu_dx.x);
	emu_movw(&emu_ds, emu_get_memory16(emu_ds, 0x00,  0x2));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2), 0x0);
	if (emu_flags.zf) { f__01F7_1628_0017_4134(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1603), emu_ds);
	f__01F7_1660_000C_CF7A(); return;
}

/**
 * Decompiled function f__01F7_1628_0017_4134()
 *
 * @name f__01F7_1628_0017_4134
 * @implements 01F7:1628:0017:4134 ()
 *
 * Called From: 01F7:161F:001B:566C
 */
void f__01F7_1628_0017_4134()
{
	emu_movw(&emu_ax.x, emu_ds);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	if (emu_flags.zf) { emu_ip = 0x1646; emu_last_cs = 0x01F7; emu_last_ip = 0x162F; emu_last_length = 0x0017; emu_last_crc = 0x4134; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1603), emu_ax.x);
	emu_push(emu_ds);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(0x163F); f__01F7_16E1_0021_8510();
	f__01F7_163F_0007_346A();
}

/**
 * Decompiled function f__01F7_163F_0007_346A()
 *
 * @name f__01F7_163F_0007_346A
 * @implements 01F7:163F:0007:346A ()
 *
 * Called From: 01F7:163F:0017:4134
 */
void f__01F7_163F_0007_346A()
{
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x1607));
	f__01F7_1669_0003_07BC(); return;
}

/**
 * Decompiled function f__01F7_1660_000C_CF7A()
 *
 * @name f__01F7_1660_000C_CF7A
 * @implements 01F7:1660:000C:CF7A ()
 *
 * Called From: 01F7:1626:001B:566C
 */
void f__01F7_1660_000C_CF7A()
{
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x1607));
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(0x166C); f__01F7_1AA9_0014_57F1();
	f__01F7_166C_0004_0F86();
}

/**
 * Decompiled function f__01F7_1669_0003_07BC()
 *
 * @name f__01F7_1669_0003_07BC
 * @implements 01F7:1669:0003:07BC ()
 *
 * Called From: 01F7:1644:0007:346A
 */
void f__01F7_1669_0003_07BC()
{
	emu_push(0x166C); f__01F7_1AA9_0014_57F1();
	f__01F7_166C_0004_0F86();
}

/**
 * Decompiled function f__01F7_166C_0004_0F86()
 *
 * @name f__01F7_166C_0004_0F86
 * @implements 01F7:166C:0004:0F86 ()
 *
 * Called From: 01F7:166C:0003:07BC
 * Called From: 01F7:166C:000C:CF7A
 */
void f__01F7_166C_0004_0F86()
{
	emu_addws(&emu_sp, 0x4);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1670_003F_01E0()
 *
 * @name f__01F7_1670_003F_01E0
 * @implements 01F7:1670:003F:01E0 ()
 *
 * Called From: 01F7:175E:0003:0682
 */
void f__01F7_1670_003F_01E0()
{
	emu_movw(&emu_ds, emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00,  0x2));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8), emu_es);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	if (emu_flags.zf) { emu_ip = 0x16B6; emu_last_cs = 0x01F7; emu_last_ip = 0x1686; emu_last_length = 0x003F; emu_last_crc = 0x01E0; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0x2), 0x0);
	if (!emu_flags.zf) { f__01F7_16B6_0003_0604(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_pop(&emu_bx.x);
	emu_push(emu_es);
	emu_addw(&emu_get_memory16(emu_es, 0x00,  0x0), emu_ax.x);
	emu_movw(&emu_cx.x, emu_es);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0x2), 0x0);
	if (!emu_flags.zf) { f__01F7_16AF_0007_330A(); return; }
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x8), emu_cx.x);
	f__01F7_16B9_0012_1776(); return;
}

/**
 * Decompiled function f__01F7_16AF_0007_330A()
 *
 * @name f__01F7_16AF_0007_330A
 * @implements 01F7:16AF:0007:330A ()
 *
 * Called From: 01F7:16A6:003F:01E0
 */
void f__01F7_16AF_0007_330A()
{
	emu_movw(&emu_get_memory16(emu_es, 0x00,  0x2), emu_cx.x);
	f__01F7_16B9_0012_1776(); return;
}

/**
 * Decompiled function f__01F7_16B6_0003_0604()
 *
 * @name f__01F7_16B6_0003_0604
 * @implements 01F7:16B6:0003:0604 ()
 *
 * Called From: 01F7:168E:003F:01E0
 */
void f__01F7_16B6_0003_0604()
{
	emu_push(0x16B9); f__01F7_170A_0029_BF73();
	f__01F7_16B9_0012_1776();
}

/**
 * Decompiled function f__01F7_16B9_0012_1776()
 *
 * @name f__01F7_16B9_0012_1776
 * @implements 01F7:16B9:0012:1776 ()
 *
 * Called From: 01F7:16AD:003F:01E0
 * Called From: 01F7:16B4:0007:330A
 * Called From: 01F7:16B9:0003:0604
 */
void f__01F7_16B9_0012_1776()
{
	emu_pop(&emu_es);
	emu_movw(&emu_ax.x, emu_es);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, 0x00,  0x0));
	emu_movw(&emu_ds, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2), 0x0);
	if (emu_flags.zf) { f__01F7_16CB_0037_FEAA(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_16CB_0037_FEAA()
 *
 * @name f__01F7_16CB_0037_FEAA
 * @implements 01F7:16CB:0037:FEAA ()
 *
 * Called From: 01F7:16C8:0012:1776
 */
void f__01F7_16CB_0037_FEAA()
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
	if (emu_flags.zf) { emu_ip = 0x1702; emu_last_cs = 0x01F7; emu_last_ip = 0x16E7; emu_last_length = 0x0037; emu_last_crc = 0xFEAA; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_16E1_0021_8510()
 *
 * @name f__01F7_16E1_0021_8510
 * @implements 01F7:16E1:0021:8510 ()
 *
 * Called From: 01F7:163C:0017:4134
 * Called From: 01F7:18BB:0005:0790
 */
void f__01F7_16E1_0021_8510()
{
	emu_movw(&emu_bx.x, emu_ds);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x6));
	if (emu_flags.zf) { f__01F7_1702_0008_4C46(); return; }
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
 * Decompiled function f__01F7_1702_0008_4C46()
 *
 * @name f__01F7_1702_0008_4C46
 * @implements 01F7:1702:0008:4C46 ()
 *
 * Called From: 01F7:16E7:0021:8510
 */
void f__01F7_1702_0008_4C46()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1605), 0x0);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_170A_0029_BF73()
 *
 * @name f__01F7_170A_0029_BF73
 * @implements 01F7:170A:0029:BF73 ()
 *
 * Called From: 01F7:16B6:0003:0604
 */
void f__01F7_170A_0029_BF73()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1605));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__01F7_1733_000E_85CC(); return; }
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
 * Decompiled function f__01F7_1733_000E_85CC()
 *
 * @name f__01F7_1733_000E_85CC
 * @implements 01F7:1733:000E:85CC ()
 *
 * Called From: 01F7:1710:0029:BF73
 */
void f__01F7_1733_000E_85CC()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1605), emu_ds);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4), emu_ds);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6), emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1741_001B_55D2()
 *
 * @name f__01F7_1741_001B_55D2
 * @implements 01F7:1741:001B:55D2 ()
 *
 * Called From: 23E1:0223:0035:1F01
 * Called From: 23E1:0247:0006:0036
 */
void f__01F7_1741_001B_55D2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1607), emu_ds);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x1761; emu_last_cs = 0x01F7; emu_last_ip = 0x1750; emu_last_length = 0x001B; emu_last_crc = 0x55D2; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x1603));
	if (!emu_flags.zf) { f__01F7_175E_0003_0682(); return; }
	emu_push(0x175C); f__01F7_160D_001B_566C();
	f__01F7_175C_0002_03AA();
}

/**
 * Decompiled function f__01F7_175C_0002_03AA()
 *
 * @name f__01F7_175C_0002_03AA
 * @implements 01F7:175C:0002:03AA ()
 *
 * Called From: 01F7:175C:001B:55D2
 */
void f__01F7_175C_0002_03AA()
{
	f__01F7_1761_0009_D9E2(); return;
}

/**
 * Decompiled function f__01F7_175E_0003_0682()
 *
 * @name f__01F7_175E_0003_0682
 * @implements 01F7:175E:0003:0682 ()
 *
 * Called From: 01F7:1757:001B:55D2
 */
void f__01F7_175E_0003_0682()
{
	emu_push(0x1761); f__01F7_1670_003F_01E0();
	f__01F7_1761_0009_D9E2();
}

/**
 * Decompiled function f__01F7_1761_0009_D9E2()
 *
 * @name f__01F7_1761_0009_D9E2
 * @implements 01F7:1761:0009:D9E2 ()
 *
 * Called From: 01F7:175C:0002:03AA
 * Called From: 01F7:1761:0003:0682
 */
void f__01F7_1761_0009_D9E2()
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
 * Decompiled function f__01F7_176A_000D_D00E()
 *
 * @name f__01F7_176A_000D_D00E
 * @implements 01F7:176A:000D:D00E ()
 *
 * Called From: 01F7:18AA:0003:0448
 */
void f__01F7_176A_000D_D00E()
{
	emu_push(emu_ax.x);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x1607));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(0x1777); f__01F7_1AE8_0010_C18E();
	f__01F7_1777_0019_8F27();
}

/**
 * Decompiled function f__01F7_1777_0019_8F27()
 *
 * @name f__01F7_1777_0019_8F27
 * @implements 01F7:1777:0019:8F27 ()
 *
 * Called From: 01F7:1777:000D:D00E
 */
void f__01F7_1777_0019_8F27()
{
	emu_addws(&emu_sp, 0x4);
	emu_andw(&emu_ax.x, 0xF);
	if (emu_flags.zf) { f__01F7_1793_0016_3E33(); return; }
	emu_movw(&emu_dx.x, 0x10);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x1607));
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(0x1790); emu_ip = 0x1AE8; emu_last_cs = 0x01F7; emu_last_ip = 0x178D; emu_last_length = 0x0019; emu_last_crc = 0x8F27; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_1793_0016_3E33()
 *
 * @name f__01F7_1793_0016_3E33
 * @implements 01F7:1793:0016:3E33 ()
 *
 * Called From: 01F7:177D:0019:8F27
 */
void f__01F7_1793_0016_3E33()
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
	emu_push(0x17A9); f__01F7_1AE8_0010_C18E();
	f__01F7_17A9_0021_CC7E();
}

/**
 * Decompiled function f__01F7_17A9_0021_CC7E()
 *
 * @name f__01F7_17A9_0021_CC7E
 * @implements 01F7:17A9:0021:CC7E ()
 *
 * Called From: 01F7:17A9:0016:3E33
 */
void f__01F7_17A9_0021_CC7E()
{
	emu_addws(&emu_sp, 0x4);
	emu_pop(&emu_bx.x);
	emu_cmpw(&emu_ax.x, 0xFFFF);
	if (emu_flags.zf) { emu_ip = 0x17CA; emu_last_cs = 0x01F7; emu_last_ip = 0x17B0; emu_last_length = 0x0021; emu_last_crc = 0xCC7E; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_17CE_0015_28DB()
 *
 * @name f__01F7_17CE_0015_28DB
 * @implements 01F7:17CE:0015:28DB ()
 *
 * Called From: 01F7:18A5:0003:0626
 * Called From: 01F7:18A5:0013:85A1
 * Called From: 01F7:18A5:0053:5E94
 */
void f__01F7_17CE_0015_28DB()
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
	emu_push(0x17E3); f__01F7_1AE8_0010_C18E();
	f__01F7_17E3_0026_C1FA();
}

/**
 * Decompiled function f__01F7_17E3_0026_C1FA()
 *
 * @name f__01F7_17E3_0026_C1FA
 * @implements 01F7:17E3:0026:C1FA ()
 *
 * Called From: 01F7:17E3:0015:28DB
 */
void f__01F7_17E3_0026_C1FA()
{
	emu_addws(&emu_sp, 0x4);
	emu_pop(&emu_bx.x);
	emu_cmpw(&emu_ax.x, 0xFFFF);
	if (emu_flags.zf) { emu_ip = 0x1824; emu_last_cs = 0x01F7; emu_last_ip = 0x17EA; emu_last_length = 0x0026; emu_last_crc = 0xC1FA; emu_call(); return; } // Jump does not resolve
	emu_andw(&emu_ax.x, 0xF);
	if (!emu_flags.zf) { emu_ip = 0x1809; emu_last_cs = 0x01F7; emu_last_ip = 0x17EF; emu_last_length = 0x0026; emu_last_crc = 0xC1FA; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_1828_0023_9ECC()
 *
 * @name f__01F7_1828_0023_9ECC
 * @implements 01F7:1828:0023:9ECC ()
 *
 * Called From: 01F7:18AF:0003:0766
 */
void f__01F7_1828_0023_9ECC()
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
 * Decompiled function f__01F7_184B_000A_958E()
 *
 * @name f__01F7_184B_000A_958E
 * @implements 01F7:184B:000A:958E ()
 *
 * Called From: 01F7:2209:0012:F153
 * Called From: 01F7:3429:004A:07CB
 */
void f__01F7_184B_000A_958E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__01F7_185E_004A_6F7F(); return;
}

/**
 * Decompiled function f__01F7_1855_0053_5E94()
 *
 * @name f__01F7_1855_0053_5E94
 * @implements 01F7:1855:0053:5E94 ()
 *
 * Called From: 217E:0D5E:0010:05BE
 * Called From: 23E1:006C:000B:E088
 */
void f__01F7_1855_0053_5E94()
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
	if (emu_flags.zf) { emu_ip = 0x18C9; emu_last_cs = 0x01F7; emu_last_ip = 0x1869; emu_last_length = 0x0053; emu_last_crc = 0x5E94; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_ax.x, 0x13);
	emu_adcws(&emu_dx.x, 0x0);
	if (emu_flags.cf) { emu_ip = 0x18B4; emu_last_cs = 0x01F7; emu_last_ip = 0x1871; emu_last_length = 0x0053; emu_last_crc = 0x5E94; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_dx.x, 0xFFF0);
	if (!emu_flags.zf) { emu_ip = 0x18B4; emu_last_cs = 0x01F7; emu_last_ip = 0x1877; emu_last_length = 0x0053; emu_last_crc = 0x5E94; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_orb(&emu_ax.h, emu_dx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { f__01F7_18AA_0003_0448(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x1605));
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { f__01F7_18A5_0003_0626(); return; }
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x0), emu_ax.x);
	if (!emu_flags.cf) { f__01F7_18B9_0005_0790(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6));
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__01F7_1895_0013_85A1(); return; }
	emu_push(0x18A8); f__01F7_17CE_0015_28DB();
	f__01F7_18A8_0002_0392();
}

/**
 * Decompiled function f__01F7_185E_004A_6F7F()
 *
 * @name f__01F7_185E_004A_6F7F
 * @implements 01F7:185E:004A:6F7F ()
 *
 * Called From: 01F7:1853:000A:958E
 */
void f__01F7_185E_004A_6F7F()
{
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_orw(&emu_cx.x, emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x1607), emu_ds);
	if (emu_flags.zf) { emu_ip = 0x18C9; emu_last_cs = 0x01F7; emu_last_ip = 0x1869; emu_last_length = 0x004A; emu_last_crc = 0x6F7F; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_ax.x, 0x13);
	emu_adcws(&emu_dx.x, 0x0);
	if (emu_flags.cf) { emu_ip = 0x18B4; emu_last_cs = 0x01F7; emu_last_ip = 0x1871; emu_last_length = 0x004A; emu_last_crc = 0x6F7F; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_dx.x, 0xFFF0);
	if (!emu_flags.zf) { emu_ip = 0x18B4; emu_last_cs = 0x01F7; emu_last_ip = 0x1877; emu_last_length = 0x004A; emu_last_crc = 0x6F7F; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_orb(&emu_ax.h, emu_dx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x18AA; emu_last_cs = 0x01F7; emu_last_ip = 0x1888; emu_last_length = 0x004A; emu_last_crc = 0x6F7F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x1605));
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { f__01F7_18A5_0003_0626(); return; }
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x0), emu_ax.x);
	if (!emu_flags.cf) { emu_ip = 0x18B9; emu_last_cs = 0x01F7; emu_last_ip = 0x189B; emu_last_length = 0x004A; emu_last_crc = 0x6F7F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6));
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { emu_ip = 0x1895; emu_last_cs = 0x01F7; emu_last_ip = 0x18A3; emu_last_length = 0x004A; emu_last_crc = 0x6F7F; emu_call(); return; } // Jump does not resolve
	emu_push(0x18A8); emu_ip = 0x17CE; emu_last_cs = 0x01F7; emu_last_ip = 0x18A5; emu_last_length = 0x004A; emu_last_crc = 0x6F7F; emu_call(); // Jump does not resolve
	f__01F7_18A8_0002_0392();
}

/**
 * Decompiled function f__01F7_1895_0013_85A1()
 *
 * @name f__01F7_1895_0013_85A1
 * @implements 01F7:1895:0013:85A1 ()
 *
 * Called From: 01F7:18A3:0053:5E94
 * Called From: 01F7:18A3:0013:85A1
 */
void f__01F7_1895_0013_85A1()
{
	emu_movw(&emu_ds, emu_dx.x);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x0), emu_ax.x);
	if (!emu_flags.cf) { f__01F7_18B9_0005_0790(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6));
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__01F7_1895_0013_85A1(); return; }
	emu_push(0x18A8); f__01F7_17CE_0015_28DB();
	f__01F7_18A8_0002_0392();
}

/**
 * Decompiled function f__01F7_18A5_0003_0626()
 *
 * @name f__01F7_18A5_0003_0626
 * @implements 01F7:18A5:0003:0626 ()
 *
 * Called From: 01F7:1891:004A:6F7F
 * Called From: 01F7:1891:0053:5E94
 */
void f__01F7_18A5_0003_0626()
{
	emu_push(0x18A8); f__01F7_17CE_0015_28DB();
	f__01F7_18A8_0002_0392();
}

/**
 * Decompiled function f__01F7_18A8_0002_0392()
 *
 * @name f__01F7_18A8_0002_0392
 * @implements 01F7:18A8:0002:0392 ()
 *
 * Called From: 01F7:18A8:0003:0626
 * Called From: 01F7:18A8:0013:85A1
 * Called From: 01F7:18A8:0053:5E94
 */
void f__01F7_18A8_0002_0392()
{
	f__01F7_18C9_0009_D9E2(); return;
}

/**
 * Decompiled function f__01F7_18AA_0003_0448()
 *
 * @name f__01F7_18AA_0003_0448
 * @implements 01F7:18AA:0003:0448 ()
 *
 * Called From: 01F7:1888:0053:5E94
 */
void f__01F7_18AA_0003_0448()
{
	emu_push(0x18AD); f__01F7_176A_000D_D00E();
	f__01F7_18AD_0002_0398();
}

/**
 * Decompiled function f__01F7_18AD_0002_0398()
 *
 * @name f__01F7_18AD_0002_0398
 * @implements 01F7:18AD:0002:0398 ()
 *
 * Called From: 01F7:18AD:0003:0448
 */
void f__01F7_18AD_0002_0398()
{
	f__01F7_18C9_0009_D9E2(); return;
}

/**
 * Decompiled function f__01F7_18AF_0003_0766()
 *
 * @name f__01F7_18AF_0003_0766
 * @implements 01F7:18AF:0003:0766 ()
 *
 * Called From: 01F7:18B9:0005:0790
 */
void f__01F7_18AF_0003_0766()
{
	emu_push(0x18B2); f__01F7_1828_0023_9ECC();
	f__01F7_18B2_0002_0386();
}

/**
 * Decompiled function f__01F7_18B2_0002_0386()
 *
 * @name f__01F7_18B2_0002_0386
 * @implements 01F7:18B2:0002:0386 ()
 *
 * Called From: 01F7:18B2:0003:0766
 */
void f__01F7_18B2_0002_0386()
{
	f__01F7_18C9_0009_D9E2(); return;
}

/**
 * Decompiled function f__01F7_18B9_0005_0790()
 *
 * @name f__01F7_18B9_0005_0790
 * @implements 01F7:18B9:0005:0790 ()
 *
 * Called From: 01F7:189B:0013:85A1
 * Called From: 01F7:189B:0053:5E94
 */
void f__01F7_18B9_0005_0790()
{
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_18AF_0003_0766(); return; }
	emu_push(0x18BE); f__01F7_16E1_0021_8510();
	f__01F7_18BE_0014_F10F();
}

/**
 * Decompiled function f__01F7_18BE_0014_F10F()
 *
 * @name f__01F7_18BE_0014_F10F
 * @implements 01F7:18BE:0014:F10F ()
 *
 * Called From: 01F7:18BE:0005:0790
 */
void f__01F7_18BE_0014_F10F()
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
 * Decompiled function f__01F7_18C9_0009_D9E2()
 *
 * @name f__01F7_18C9_0009_D9E2
 * @implements 01F7:18C9:0009:D9E2 ()
 *
 * Called From: 01F7:18A8:0002:0392
 * Called From: 01F7:18AD:0002:0398
 * Called From: 01F7:18B2:0002:0386
 */
void f__01F7_18C9_0009_D9E2()
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
 * Decompiled function f__01F7_1A33_002B_A140()
 *
 * @name f__01F7_1A33_002B_A140
 * @implements 01F7:1A33:002B:A140 ()
 *
 * Called From: 01F7:1AD8:000B:319C
 * Called From: 01F7:1B62:0018:66F0
 */
void f__01F7_1A33_002B_A140()
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
	if (!emu_flags.zf) { f__01F7_1A5E_0022_A159(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8D), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8B), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__01F7_1AA4_0005_0810(); return;
}

/**
 * Decompiled function f__01F7_1A4C_0012_8F49()
 *
 * @name f__01F7_1A4C_0012_8F49
 * @implements 01F7:1A4C:0012:8F49 ()
 *
 * Called From: 01F7:1A92:0014:B6B9
 */
void f__01F7_1A4C_0012_8F49()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8D), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8B), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__01F7_1AA4_0005_0810(); return;
}

/**
 * Decompiled function f__01F7_1A5E_0022_A159()
 *
 * @name f__01F7_1A5E_0022_A159
 * @implements 01F7:1A5E:0022:A159 ()
 *
 * Called From: 01F7:1A4A:002B:A140
 */
void f__01F7_1A5E_0022_A159()
{
	emu_movb(&emu_cx.l, 0x6);
	emu_shlw(&emu_si, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x91));
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7B));
	emu_cmpw(&emu_ax.x, emu_dx.x);
	if ((emu_flags.cf || emu_flags.zf)) { f__01F7_1A76_000A_B956(); return; }
	emu_movw(&emu_si, emu_dx.x);
	emu_subw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x7B));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7B));
	emu_push(emu_cs);
	emu_push(0x1A80); emu_ip = 0x21DE; emu_last_cs = 0x01F7; emu_last_ip = 0x1A7D; emu_last_length = 0x0022; emu_last_crc = 0xA159; emu_call(); // Jump does not resolve
	f__01F7_1A80_0014_B6B9();
}

/**
 * Decompiled function f__01F7_1A76_000A_B956()
 *
 * @name f__01F7_1A76_000A_B956
 * @implements 01F7:1A76:000A:B956 ()
 *
 * Called From: 01F7:1A6E:0022:A159
 */
void f__01F7_1A76_000A_B956()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7B));
	emu_push(emu_cs);
	emu_push(0x1A80); f__01F7_21DE_000D_84E1();
	f__01F7_1A80_0014_B6B9();
}

/**
 * Decompiled function f__01F7_1A80_0014_B6B9()
 *
 * @name f__01F7_1A80_0014_B6B9
 * @implements 01F7:1A80:0014:B6B9 ()
 *
 * Called From: 01F7:1A80:000A:B956
 */
void f__01F7_1A80_0014_B6B9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_cmpws(&emu_dx.x, 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x1A94; emu_last_cs = 0x01F7; emu_last_ip = 0x1A87; emu_last_length = 0x0014; emu_last_crc = 0xB6B9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x6);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B04), emu_ax.x);
	f__01F7_1A4C_0012_8F49(); return;
}

/**
 * Decompiled function f__01F7_1AA4_0005_0810()
 *
 * @name f__01F7_1AA4_0005_0810
 * @implements 01F7:1AA4:0005:0810 ()
 *
 * Called From: 01F7:1A5C:0012:8F49
 * Called From: 01F7:1A5C:002B:A140
 */
void f__01F7_1AA4_0005_0810()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 4;
	return;
}

/**
 * Decompiled function f__01F7_1AA9_0014_57F1()
 *
 * @name f__01F7_1AA9_0014_57F1
 * @implements 01F7:1AA9:0014:57F1 ()
 *
 * Called From: 01F7:1669:0003:07BC
 * Called From: 01F7:1669:000C:CF7A
 */
void f__01F7_1AA9_0014_57F1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x89));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x87));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_push(0x1ABD); f__01F7_07B3_0021_70BD();
	f__01F7_1ABD_0013_1601();
}

/**
 * Decompiled function f__01F7_1ABD_0013_1601()
 *
 * @name f__01F7_1ABD_0013_1601
 * @implements 01F7:1ABD:0013:1601 ()
 *
 * Called From: 01F7:1ABD:0014:57F1
 */
void f__01F7_1ABD_0013_1601()
{
	if (emu_flags.cf) { emu_ip = 0x1ADF; emu_last_cs = 0x01F7; emu_last_ip = 0x1ABD; emu_last_length = 0x0013; emu_last_crc = 0x1601; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x91));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x8F));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_push(0x1AD0); f__01F7_07B3_0021_70BD();
	f__01F7_1AD0_000B_319C();
}

/**
 * Decompiled function f__01F7_1AD0_000B_319C()
 *
 * @name f__01F7_1AD0_000B_319C
 * @implements 01F7:1AD0:000B:319C ()
 *
 * Called From: 01F7:1AD0:0013:1601
 */
void f__01F7_1AD0_000B_319C()
{
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1ADF; emu_last_cs = 0x01F7; emu_last_ip = 0x1AD0; emu_last_length = 0x000B; emu_last_crc = 0x319C; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_push(0x1ADB); f__01F7_1A33_002B_A140();
	f__01F7_1ADB_0009_F160();
}

/**
 * Decompiled function f__01F7_1ADB_0009_F160()
 *
 * @name f__01F7_1ADB_0009_F160
 * @implements 01F7:1ADB:0009:F160 ()
 *
 * Called From: 01F7:1ADB:000B:319C
 */
void f__01F7_1ADB_0009_F160()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_1AE4_0004_05C2(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x1AE6; emu_last_cs = 0x01F7; emu_last_ip = 0x1AE2; emu_last_length = 0x0009; emu_last_crc = 0xF160; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1AE4_0004_05C2()
 *
 * @name f__01F7_1AE4_0004_05C2
 * @implements 01F7:1AE4:0004:05C2 ()
 *
 * Called From: 01F7:1ADD:0009:F160
 */
void f__01F7_1AE4_0004_05C2()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1AE8_0010_C18E()
 *
 * @name f__01F7_1AE8_0010_C18E
 * @implements 01F7:1AE8:0010:C18E ()
 *
 * Called From: 01F7:1774:000D:D00E
 * Called From: 01F7:17A6:0016:3E33
 * Called From: 01F7:17E0:0015:28DB
 * Called From: 01F7:1BD6:0007:2692
 */
void f__01F7_1AE8_0010_C18E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8D));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x4);
	emu_push(0x1AF8); f__01F7_058B_0018_2E29();
	f__01F7_1AF8_0021_11CB();
}

/**
 * Decompiled function f__01F7_1AF8_0021_11CB()
 *
 * @name f__01F7_1AF8_0021_11CB
 * @implements 01F7:1AF8:0021:11CB ()
 *
 * Called From: 01F7:1AF8:0010:C18E
 */
void f__01F7_1AF8_0021_11CB()
{
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8B));
	emu_adcws(&emu_dx.x, 0x0);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_adcw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_dx.x, 0xF);
	if ((emu_flags.sf != emu_flags.of)) { f__01F7_1B19_0010_7F68(); return; }
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1B11; emu_last_cs = 0x01F7; emu_last_ip = 0x1B0A; emu_last_length = 0x0021; emu_last_crc = 0x11CB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0xFFFF);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1B19; emu_last_cs = 0x01F7; emu_last_ip = 0x1B0F; emu_last_length = 0x0021; emu_last_crc = 0x11CB; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0xFFFF);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x1B6F; emu_last_cs = 0x01F7; emu_last_ip = 0x1B17; emu_last_length = 0x0021; emu_last_crc = 0x11CB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1B19_0010_7F68()
 *
 * @name f__01F7_1B19_0010_7F68
 * @implements 01F7:1B19:0010:7F68 ()
 *
 * Called From: 01F7:1B08:0021:11CB
 */
void f__01F7_1B19_0010_7F68()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x8D));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8B));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_push(0x1B29); f__01F7_05ED_0013_2A34();
	f__01F7_1B29_0011_6687();
}

/**
 * Decompiled function f__01F7_1B29_0011_6687()
 *
 * @name f__01F7_1B29_0011_6687
 * @implements 01F7:1B29:0011:6687 ()
 *
 * Called From: 01F7:1B29:0010:7F68
 */
void f__01F7_1B29_0011_6687()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x89));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x87));
	emu_push(0x1B3A); f__01F7_07B3_0021_70BD();
	f__01F7_1B3A_0013_6441();
}

/**
 * Decompiled function f__01F7_1B3A_0013_6441()
 *
 * @name f__01F7_1B3A_0013_6441
 * @implements 01F7:1B3A:0013:6441 ()
 *
 * Called From: 01F7:1B3A:0011:6687
 */
void f__01F7_1B3A_0013_6441()
{
	if (emu_flags.cf) { emu_ip = 0x1B11; emu_last_cs = 0x01F7; emu_last_ip = 0x1B3A; emu_last_length = 0x0013; emu_last_crc = 0x6441; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x91));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x8F));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(0x1B4D); f__01F7_07B3_0021_70BD();
	f__01F7_1B4D_0018_66F0();
}

/**
 * Decompiled function f__01F7_1B4D_0018_66F0()
 *
 * @name f__01F7_1B4D_0018_66F0
 * @implements 01F7:1B4D:0018:66F0 ()
 *
 * Called From: 01F7:1B4D:0013:6441
 */
void f__01F7_1B4D_0018_66F0()
{
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1B11; emu_last_cs = 0x01F7; emu_last_ip = 0x1B4D; emu_last_length = 0x0018; emu_last_crc = 0x66F0; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x8D));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x8B));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(0x1B65); f__01F7_1A33_002B_A140();
	f__01F7_1B65_000E_FE70();
}

/**
 * Decompiled function f__01F7_1B65_000E_FE70()
 *
 * @name f__01F7_1B65_000E_FE70
 * @implements 01F7:1B65:000E:FE70 ()
 *
 * Called From: 01F7:1B65:0018:66F0
 */
void f__01F7_1B65_000E_FE70()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x1B11; emu_last_cs = 0x01F7; emu_last_ip = 0x1B67; emu_last_length = 0x000E; emu_last_crc = 0xFE70; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_1B73_0022_5AE0()
 *
 * @name f__01F7_1B73_0022_5AE0
 * @implements 01F7:1B73:0022:5AE0 ()
 *
 * Called From: 23E1:0367:0005:1776
 * Called From: 23E1:0418:0005:1776
 */
void f__01F7_1B73_0022_5AE0()
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
	emu_push(0x1B95); f__01F7_064D_0028_C150();
	f__01F7_1B95_002E_4D2F();
}

/**
 * Decompiled function f__01F7_1B95_002E_4D2F()
 *
 * @name f__01F7_1B95_002E_4D2F
 * @implements 01F7:1B95:002E:4D2F ()
 *
 * Called From: 01F7:1B95:0022:5AE0
 */
void f__01F7_1B95_002E_4D2F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.cf) { emu_ip = 0x1BB1; emu_last_cs = 0x01F7; emu_last_ip = 0x1B9F; emu_last_length = 0x002E; emu_last_crc = 0x4D2F; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_1BA9_001A_207A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x10);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1BB1; emu_last_cs = 0x01F7; emu_last_ip = 0x1BA7; emu_last_length = 0x002E; emu_last_crc = 0x4D2F; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_1BA9_001A_207A()
 *
 * @name f__01F7_1BA9_001A_207A
 * @implements 01F7:1BA9:001A:207A ()
 *
 * Called From: 01F7:1BA1:002E:4D2F
 */
void f__01F7_1BA9_001A_207A()
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
 * Decompiled function f__01F7_1BC3_000F_5F02()
 *
 * @name f__01F7_1BC3_000F_5F02
 * @implements 01F7:1BC3:000F:5F02 ()
 *
 * Called From: 23E1:033A:000B:B6F7
 * Called From: 23E1:03E1:000B:B6F7
 * Called From: B500:0069:0005:1C76
 */
void f__01F7_1BC3_000F_5F02()
{
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_bp);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_1BD2_0007_2692(); return; }
	emu_ip = 0x1CAD; emu_last_cs = 0x01F7; emu_last_ip = 0x1BCF; emu_last_length = 0x000F; emu_last_crc = 0x5F02; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1BD2_0007_2692()
 *
 * @name f__01F7_1BD2_0007_2692
 * @implements 01F7:1BD2:0007:2692 ()
 *
 * Called From: 01F7:1BCD:000F:5F02
 */
void f__01F7_1BD2_0007_2692()
{
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_push(emu_bx.x);
	emu_push(emu_bx.x);
	emu_push(0x1BD9); f__01F7_1AE8_0010_C18E();
	f__01F7_1BD9_000A_BF6F();
}

/**
 * Decompiled function f__01F7_1BD9_000A_BF6F()
 *
 * @name f__01F7_1BD9_000A_BF6F
 * @implements 01F7:1BD9:000A:BF6F ()
 *
 * Called From: 01F7:1BD9:0007:2692
 */
void f__01F7_1BD9_000A_BF6F()
{
	emu_addws(&emu_sp, 0x4);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__01F7_1BE3_0012_319C(); return; }
	emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1BE0; emu_last_length = 0x000A; emu_last_crc = 0xBF6F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1BE3_0012_319C()
 *
 * @name f__01F7_1BE3_0012_319C
 * @implements 01F7:1BE3:0012:319C ()
 *
 * Called From: 01F7:1BDE:000A:BF6F
 */
void f__01F7_1BE3_0012_319C()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x1603));
	emu_movw(&emu_ds, emu_bx.x);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_cmpw(&emu_bx.x, emu_dx.x);
	if (emu_flags.zf) { f__01F7_1BF5_002F_9CA3(); return; }
	emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1BF2; emu_last_length = 0x0012; emu_last_crc = 0x319C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1BF5_002F_9CA3()
 *
 * @name f__01F7_1BF5_002F_9CA3
 * @implements 01F7:1BF5:002F:9CA3 ()
 *
 * Called From: 01F7:1BF0:0012:319C
 */
void f__01F7_1BF5_002F_9CA3()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_movw(&emu_ds, emu_ax.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_movw(&emu_es, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2), 0x0);
	if (!emu_flags.zf) { f__01F7_1C24_0033_CB63(); return; }
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_movw(&emu_si, emu_ds);
	emu_cmpw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x1603));
	if (emu_flags.zf) { emu_ip = 0x1C68; emu_last_cs = 0x01F7; emu_last_ip = 0x1C17; emu_last_length = 0x002F; emu_last_crc = 0x9CA3; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0x2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1C24; emu_last_cs = 0x01F7; emu_last_ip = 0x1C1F; emu_last_length = 0x002F; emu_last_crc = 0x9CA3; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C21; emu_last_length = 0x002F; emu_last_crc = 0x9CA3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1C05_001F_9742()
 *
 * @name f__01F7_1C05_001F_9742
 * @implements 01F7:1C05:001F:9742 ()
 *
 * Called From: 01F7:1C66:000C:9648
 * Called From: 01F7:1C66:0011:9624
 */
void f__01F7_1C05_001F_9742()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2), 0x0);
	if (!emu_flags.zf) { f__01F7_1C24_0033_CB63(); return; }
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_movw(&emu_si, emu_ds);
	emu_cmpw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x1603));
	if (emu_flags.zf) { emu_ip = 0x1C68; emu_last_cs = 0x01F7; emu_last_ip = 0x1C17; emu_last_length = 0x001F; emu_last_crc = 0x9742; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0x2), 0x0);
	if (!emu_flags.zf) { f__01F7_1C24_0033_CB63(); return; }
	emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C21; emu_last_length = 0x001F; emu_last_crc = 0x9742; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1C24_0033_CB63()
 *
 * @name f__01F7_1C24_0033_CB63
 * @implements 01F7:1C24:0033:CB63 ()
 *
 * Called From: 01F7:1C0A:001F:9742
 * Called From: 01F7:1C0A:002F:9CA3
 * Called From: 01F7:1C1F:001F:9742
 */
void f__01F7_1C24_0033_CB63()
{
	emu_movw(&emu_si, emu_ds);
	emu_movw(&emu_di, emu_es);
	emu_cmpw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x1603));
	if (emu_flags.zf) { f__01F7_1C68_0040_9CCB(); return; }
	emu_cmpw(&emu_si, emu_di);
	if (emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C31; emu_last_length = 0x0033; emu_last_crc = 0xCB63; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C38; emu_last_length = 0x0033; emu_last_crc = 0xCB63; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x1601));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C3F; emu_last_length = 0x0033; emu_last_crc = 0xCB63; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x1603));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C46; emu_last_length = 0x0033; emu_last_crc = 0xCB63; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_es, 0x00,  0x2), 0x0);
	if (emu_flags.zf) { f__01F7_1C57_0011_9624(); return; }
	emu_cmpw(&emu_get_memory16(emu_es, 0x00,  0x2), emu_si);
	f__01F7_1C5C_000C_9648(); return;
}

/**
 * Decompiled function f__01F7_1C57_0011_9624()
 *
 * @name f__01F7_1C57_0011_9624
 * @implements 01F7:1C57:0011:9624 ()
 *
 * Called From: 01F7:1C4E:0033:CB63
 */
void f__01F7_1C57_0011_9624()
{
	emu_cmpw(&emu_get_memory16(emu_es, 0x00,  0x8), emu_si);
	if (!emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C5C; emu_last_length = 0x0011; emu_last_crc = 0x9624; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ds, emu_di);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_movw(&emu_es, emu_di);
	f__01F7_1C05_001F_9742(); return;
}

/**
 * Decompiled function f__01F7_1C5C_000C_9648()
 *
 * @name f__01F7_1C5C_000C_9648
 * @implements 01F7:1C5C:000C:9648 ()
 *
 * Called From: 01F7:1C55:0033:CB63
 */
void f__01F7_1C5C_000C_9648()
{
	if (!emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C5C; emu_last_length = 0x000C; emu_last_crc = 0x9648; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ds, emu_di);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_movw(&emu_es, emu_di);
	f__01F7_1C05_001F_9742(); return;
}

/**
 * Decompiled function f__01F7_1C68_0040_9CCB()
 *
 * @name f__01F7_1C68_0040_9CCB
 * @implements 01F7:1C68:0040:9CCB ()
 *
 * Called From: 01F7:1C2D:0033:CB63
 */
void f__01F7_1C68_0040_9CCB()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x1605));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__01F7_1CB2_000C_6D23(); return; }
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C79; emu_last_length = 0x0040; emu_last_crc = 0x9CCB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x1601));
	if (emu_flags.cf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C80; emu_last_length = 0x0040; emu_last_crc = 0x9CCB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x1603));
	if (!emu_flags.cf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C87; emu_last_length = 0x0040; emu_last_crc = 0x9CCB; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00,  0x6));
	emu_movw(&emu_di, emu_es);
	emu_cmpw(&emu_di, emu_ax.x);
	if (emu_flags.zf) { f__01F7_1CB2_000C_6D23(); return; }
	emu_cmpw(&emu_si, emu_di);
	if (emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C99; emu_last_length = 0x0040; emu_last_crc = 0x9CCB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_es, 0x00,  0x4), emu_si);
	if (!emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1CA0; emu_last_length = 0x0040; emu_last_crc = 0x9CCB; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, emu_es);
	emu_movw(&emu_ds, emu_si);
	f__01F7_1C74_0034_A671(); return;
}

/**
 * Decompiled function f__01F7_1C74_0034_A671()
 *
 * @name f__01F7_1C74_0034_A671
 * @implements 01F7:1C74:0034:A671 ()
 *
 * Called From: 01F7:1CA6:0040:9CCB
 * Called From: 01F7:1CA6:0034:A671
 */
void f__01F7_1C74_0034_A671()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C79; emu_last_length = 0x0034; emu_last_crc = 0xA671; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x1601));
	if (emu_flags.cf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C80; emu_last_length = 0x0034; emu_last_crc = 0xA671; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x1603));
	if (!emu_flags.cf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C87; emu_last_length = 0x0034; emu_last_crc = 0xA671; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x0));
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00,  0x6));
	emu_movw(&emu_di, emu_es);
	emu_cmpw(&emu_di, emu_ax.x);
	if (emu_flags.zf) { f__01F7_1CB2_000C_6D23(); return; }
	emu_cmpw(&emu_si, emu_di);
	if (emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1C99; emu_last_length = 0x0034; emu_last_crc = 0xA671; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_es, 0x00,  0x4), emu_si);
	if (!emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1CA0; emu_last_length = 0x0034; emu_last_crc = 0xA671; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, emu_es);
	emu_movw(&emu_ds, emu_si);
	f__01F7_1C74_0034_A671(); return;
}

/**
 * Decompiled function f__01F7_1CB2_000C_6D23()
 *
 * @name f__01F7_1CB2_000C_6D23
 * @implements 01F7:1CB2:000C:6D23 ()
 *
 * Called From: 01F7:1C6E:0040:9CCB
 * Called From: 01F7:1C95:0034:A671
 * Called From: 01F7:1C95:0040:9CCB
 */
void f__01F7_1CB2_000C_6D23()
{
	emu_cmpw(&emu_cx.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x1CA8; emu_last_cs = 0x01F7; emu_last_ip = 0x1CB4; emu_last_length = 0x000C; emu_last_crc = 0x6D23; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_1DE5_0036_743A()
 *
 * @name f__01F7_1DE5_0036_743A
 * @implements 01F7:1DE5:0036:743A ()
 *
 * Called From: 23E1:03A7:000A:7727
 * Called From: 23E1:044C:000A:7727
 * Called From: 23E1:044C:0022:16AC
 */
void f__01F7_1DE5_0036_743A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_di, 0xF0);
	if (emu_flags.cf) { f__01F7_1DFA_0021_0125(); return; }
	emu_incw(&emu_bx.x);
	emu_subws(&emu_di, 0x10);
	emu_movw(&emu_ds, emu_bx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, emu_di,  0x2));
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x1E0E; emu_last_cs = 0x01F7; emu_last_ip = 0x1E01; emu_last_length = 0x0036; emu_last_crc = 0x743A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x1603));
	if (emu_flags.zf) { emu_ip = 0x1E54; emu_last_cs = 0x01F7; emu_last_ip = 0x1E08; emu_last_length = 0x0036; emu_last_crc = 0x743A; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.zf) { emu_ip = 0x1E1B; emu_last_cs = 0x01F7; emu_last_ip = 0x1E0C; emu_last_length = 0x0036; emu_last_crc = 0x743A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x1E4F; emu_last_cs = 0x01F7; emu_last_ip = 0x1E15; emu_last_length = 0x0036; emu_last_crc = 0x743A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_es, emu_bx.x);
	emu_ip = 0x1E24; emu_last_cs = 0x01F7; emu_last_ip = 0x1E19; emu_last_length = 0x0036; emu_last_crc = 0x743A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1DFA_0021_0125()
 *
 * @name f__01F7_1DFA_0021_0125
 * @implements 01F7:1DFA:0021:0125 ()
 *
 * Called From: 01F7:1DF4:0036:743A
 */
void f__01F7_1DFA_0021_0125()
{
	emu_movw(&emu_ds, emu_bx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, emu_di,  0x2));
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { f__01F7_1E0E_000D_D9CB(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x1603));
	if (emu_flags.zf) { f__01F7_1E54_0008_BE82(); return; }
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.zf) { f__01F7_1E1B_0034_2AAB(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x1E4F; emu_last_cs = 0x01F7; emu_last_ip = 0x1E15; emu_last_length = 0x0021; emu_last_crc = 0x0125; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_es, emu_bx.x);
	emu_ip = 0x1E24; emu_last_cs = 0x01F7; emu_last_ip = 0x1E19; emu_last_length = 0x0021; emu_last_crc = 0x0125; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_1E0E_000D_D9CB()
 *
 * @name f__01F7_1E0E_000D_D9CB
 * @implements 01F7:1E0E:000D:D9CB ()
 *
 * Called From: 01F7:1E01:0021:0125
 */
void f__01F7_1E0E_000D_D9CB()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x1601));
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x1E4F; emu_last_cs = 0x01F7; emu_last_ip = 0x1E15; emu_last_length = 0x000D; emu_last_crc = 0xD9CB; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_es, emu_bx.x);
	f__01F7_1E24_002B_D4CE(); return;
}

/**
 * Decompiled function f__01F7_1E1B_0034_2AAB()
 *
 * @name f__01F7_1E1B_0034_2AAB
 * @implements 01F7:1E1B:0034:2AAB ()
 *
 * Called From: 01F7:1E0C:0021:0125
 */
void f__01F7_1E1B_0034_2AAB()
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
	if (emu_flags.zf) { f__01F7_1E4A_0005_149C(); return; }
	emu_incw(&emu_get_memory16(emu_ds, emu_di,  0x8));
	emu_movw(&emu_ax.x, 0x2);
	f__01F7_1E57_0005_0402(); return;
}

/**
 * Decompiled function f__01F7_1E24_002B_D4CE()
 *
 * @name f__01F7_1E24_002B_D4CE
 * @implements 01F7:1E24:002B:D4CE ()
 *
 * Called From: 01F7:1E19:000D:D9CB
 */
void f__01F7_1E24_002B_D4CE()
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
	if (emu_flags.zf) { emu_ip = 0x1E4A; emu_last_cs = 0x01F7; emu_last_ip = 0x1E45; emu_last_length = 0x002B; emu_last_crc = 0xD4CE; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, emu_di,  0x8));
	emu_movw(&emu_ax.x, 0x2);
	f__01F7_1E57_0005_0402(); return;
}

/**
 * Decompiled function f__01F7_1E4A_0005_149C()
 *
 * @name f__01F7_1E4A_0005_149C
 * @implements 01F7:1E4A:0005:149C ()
 *
 * Called From: 01F7:1E45:0034:2AAB
 */
void f__01F7_1E4A_0005_149C()
{
	emu_movw(&emu_ax.x, 0x2);
	f__01F7_1E57_0005_0402(); return;
}

/**
 * Decompiled function f__01F7_1E54_0008_BE82()
 *
 * @name f__01F7_1E54_0008_BE82
 * @implements 01F7:1E54:0008:BE82 ()
 *
 * Called From: 01F7:1E08:0021:0125
 */
void f__01F7_1E54_0008_BE82()
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
 * Decompiled function f__01F7_1E57_0005_0402()
 *
 * @name f__01F7_1E57_0005_0402
 * @implements 01F7:1E57:0005:0402 ()
 *
 * Called From: 01F7:1E4D:0005:149C
 * Called From: 01F7:1E4D:002B:D4CE
 * Called From: 01F7:1E4D:0034:2AAB
 */
void f__01F7_1E57_0005_0402()
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
 * Decompiled function f__01F7_1E5C_000E_01FC()
 *
 * @name f__01F7_1E5C_000E_01FC
 * @implements 01F7:1E5C:000E:01FC ()
 *
 * Called From: 2531:0024:0010:8C90
 */
void f__01F7_1E5C_000E_01FC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1E6A); f__01F7_1EDE_0027_2887();
	f__01F7_1E6A_0004_07BA();
}

/**
 * Decompiled function f__01F7_1E6A_0004_07BA()
 *
 * @name f__01F7_1E6A_0004_07BA
 * @implements 01F7:1E6A:0004:07BA ()
 *
 * Called From: 01F7:1E6A:000E:01FC
 */
void f__01F7_1E6A_0004_07BA()
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
 * Decompiled function f__01F7_1EDE_0027_2887()
 *
 * @name f__01F7_1EDE_0027_2887
 * @implements 01F7:1EDE:0027:2887 ()
 *
 * Called From: 01F7:1E67:000E:01FC
 */
void f__01F7_1EDE_0027_2887()
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
	emu_push(0x1F05); f__01F7_04CC_000E_9C78();
	f__01F7_1F05_0005_1CF2();
}

/**
 * Decompiled function f__01F7_1F05_0005_1CF2()
 *
 * @name f__01F7_1F05_0005_1CF2
 * @implements 01F7:1F05:0005:1CF2 ()
 *
 * Called From: 01F7:1F05:0027:2887
 */
void f__01F7_1F05_0005_1CF2()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_1FB0_0010_18A6()
 *
 * @name f__01F7_1FB0_0010_18A6
 * @implements 01F7:1FB0:0010:18A6 ()
 *
 * Called From: 263B:001D:001C:EE50
 * Called From: 263B:0067:0024:2ADA
 * Called From: 263B:0067:0027:7E1A
 */
void f__01F7_1FB0_0010_18A6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1FC0); f__01F7_0EFB_0020_9AF7();
	f__01F7_1FC0_001A_269D();
}

/**
 * Decompiled function f__01F7_1FC0_001A_269D()
 *
 * @name f__01F7_1FC0_001A_269D
 * @implements 01F7:1FC0:001A:269D ()
 *
 * Called From: 01F7:1FC0:0010:18A6
 */
void f__01F7_1FC0_001A_269D()
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
	emu_push(0x1FDA); f__01F7_1FE1_005F_0FA6();
	f__01F7_1FDA_0007_7E3A();
}

/**
 * Decompiled function f__01F7_1FDA_0007_7E3A()
 *
 * @name f__01F7_1FDA_0007_7E3A
 * @implements 01F7:1FDA:0007:7E3A ()
 *
 * Called From: 01F7:1FDA:001A:269D
 */
void f__01F7_1FDA_0007_7E3A()
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
 * Decompiled function f__01F7_1FE1_005F_0FA6()
 *
 * @name f__01F7_1FE1_005F_0FA6
 * @implements 01F7:1FE1:005F:0FA6 ()
 *
 * Called From: 01F7:1FD7:001A:269D
 */
void f__01F7_1FE1_005F_0FA6()
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
	if (emu_flags.cf) { f__01F7_201F_0021_F345(); return; }
	emu_cmpb(&emu_ax.l, 0x26);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x201F; emu_last_cs = 0x01F7; emu_last_ip = 0x200C; emu_last_length = 0x005F; emu_last_crc = 0x0FA6; emu_call(); return; } // Jump does not resolve
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
			emu_last_cs = 0x01F7; emu_last_ip = 0x203D; emu_last_length = 0x005F; emu_last_crc = 0x0FA6;
			emu_call();
			return;
	}
	f__01F7_2040_0033_DCD3();
}

/**
 * Decompiled function f__01F7_201F_0021_F345()
 *
 * @name f__01F7_201F_0021_F345
 * @implements 01F7:201F:0021:F345 ()
 *
 * Called From: 01F7:2008:005F:0FA6
 */
void f__01F7_201F_0021_F345()
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
		case 0x3EEE0E82: f__3EEE_0E82_0003_01BC(); break;
		case 0x3EEE0E86: f__3EEE_0E86_0003_01BC(); break;
		case 0x3EEE0EB6: f__3EEE_0EB6_0003_01BC(); break;
		case 0x3EEE0EBA: f__3EEE_0EBA_0003_01BC(); break;
		case 0x3EEE0EC2: f__3EEE_0EC2_0003_01BC(); break;
		case 0x3EEE0ECE: f__3EEE_0ECE_0003_01BC(); break;
		case 0x3EEE0ED2: f__3EEE_0ED2_0003_01BC(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x203D; emu_last_length = 0x0021; emu_last_crc = 0xF345;
			emu_call();
			return;
	}
	f__01F7_2040_0033_DCD3();
}

/**
 * Decompiled function f__01F7_2040_0033_DCD3()
 *
 * @name f__01F7_2040_0033_DCD3
 * @implements 01F7:2040:0033:DCD3 ()
 *
 * Called From: 01F7:2040:0021:F345
 */
void f__01F7_2040_0033_DCD3()
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
	if (emu_flags.zf) { emu_ip = 0x2074; emu_last_cs = 0x01F7; emu_last_ip = 0x206C; emu_last_length = 0x0033; emu_last_crc = 0xDCD3; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(0x2073); f__01F7_0675_0020_2791();
	f__01F7_2073_0007_3F7A();
}

/**
 * Decompiled function f__01F7_2073_0007_3F7A()
 *
 * @name f__01F7_2073_0007_3F7A
 * @implements 01F7:2073:0007:3F7A ()
 *
 * Called From: 01F7:2073:0033:DCD3
 */
void f__01F7_2073_0007_3F7A()
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
 * Decompiled function f__01F7_207A_0014_A979()
 *
 * @name f__01F7_207A_0014_A979
 * @implements 01F7:207A:0014:A979 ()
 *
 * Called From: 01F7:2ADA:0012:1608
 */
void f__01F7_207A_0014_A979()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.h, 0x44);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x208E); f__0070_0108_0005_1CF6();
	f__01F7_208E_000D_48C6();
}

/**
 * Decompiled function f__01F7_208E_000D_48C6()
 *
 * @name f__01F7_208E_000D_48C6
 * @implements 01F7:208E:000D:48C6 ()
 *
 * Called From: 01F7:208E:0014:A979
 */
void f__01F7_208E_000D_48C6()
{
	emu_pop(&emu_ds);
	if (emu_flags.cf) { emu_ip = 0x209D; emu_last_cs = 0x01F7; emu_last_ip = 0x208F; emu_last_length = 0x000D; emu_last_crc = 0x48C6; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x209B; emu_last_cs = 0x01F7; emu_last_ip = 0x2095; emu_last_length = 0x000D; emu_last_crc = 0x48C6; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_dx.x);
	f__01F7_20A1_0002_00E2(); return;
}

/**
 * Decompiled function f__01F7_20A1_0002_00E2()
 *
 * @name f__01F7_20A1_0002_00E2
 * @implements 01F7:20A1:0002:00E2 ()
 *
 * Called From: 01F7:2099:000D:48C6
 */
void f__01F7_20A1_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_20B5_0076_659B()
 *
 * @name f__01F7_20B5_0076_659B
 * @implements 01F7:20B5:0076:659B ()
 *
 * Called From: 01F7:0229:0004:04C0
 */
void f__01F7_20B5_0076_659B()
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
	if (emu_flags.cf) { emu_ip = 0x2101; emu_last_cs = 0x01F7; emu_last_ip = 0x20EE; emu_last_length = 0x0076; emu_last_crc = 0x659B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00,  0x77));
	emu_movw(&emu_di, emu_si);
	emu_movb(&emu_cx.l, 0x7F);
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_repne_scasb();
	if (emu_cx.x == 0) { emu_ip = 0x2170; emu_last_cs = 0x01F7; emu_last_ip = 0x20FC; emu_last_length = 0x0076; emu_last_crc = 0x659B; emu_call(); return; } // Jump does not resolve
	emu_xorb(&emu_cx.l, 0x7F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_incw(&emu_ax.x);
	emu_andw(&emu_ax.x, 0xFFFE);
	emu_movw(&emu_di, emu_sp);
	emu_subw(&emu_di, emu_ax.x);
	if (emu_flags.cf) { emu_ip = 0x2170; emu_last_cs = 0x01F7; emu_last_ip = 0x210E; emu_last_length = 0x0076; emu_last_crc = 0x659B; emu_call(); return; } // Jump does not resolve
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
	emu_push(0x212B); f__01F7_2148_0028_C6FC();
	f__01F7_212B_000B_23DB();
}

/**
 * Decompiled function f__01F7_2128_0003_0734()
 *
 * @name f__01F7_2128_0003_0734
 * @implements 01F7:2128:0003:0734 ()
 *
 * Called From: 01F7:2146:0004:074C
 */
void f__01F7_2128_0003_0734()
{
	emu_push(0x212B); f__01F7_2148_0028_C6FC();
	f__01F7_212B_000B_23DB();
}

/**
 * Decompiled function f__01F7_212B_000B_23DB()
 *
 * @name f__01F7_212B_000B_23DB
 * @implements 01F7:212B:000B:23DB ()
 *
 * Called From: 01F7:212B:0003:0734
 * Called From: 01F7:212B:0076:659B
 */
void f__01F7_212B_000B_23DB()
{
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_2138_0010_4E3E(); return; }
	if (emu_flags.cf) { f__01F7_2175_0069_700D(); return; }
	emu_cmpb(&emu_ax.l, 0xD);
	if (emu_flags.zf) { emu_ip = 0x2144; emu_last_cs = 0x01F7; emu_last_ip = 0x2131; emu_last_length = 0x000B; emu_last_crc = 0x23DB; emu_call(); return; } // Jump does not resolve
	emu_push(0x2136); emu_ip = 0x2148; emu_last_cs = 0x01F7; emu_last_ip = 0x2133; emu_last_length = 0x000B; emu_last_crc = 0x23DB; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_2138_0010_4E3E()
 *
 * @name f__01F7_2138_0010_4E3E
 * @implements 01F7:2138:0010:4E3E ()
 *
 * Called From: 01F7:212B:000B:23DB
 */
void f__01F7_2138_0010_4E3E()
{
	emu_cmpb(&emu_ax.l, 0x20);
	if (emu_flags.zf) { emu_ip = 0x2144; emu_last_cs = 0x01F7; emu_last_ip = 0x213A; emu_last_length = 0x0010; emu_last_crc = 0x4E3E; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0xD);
	if (emu_flags.zf) { f__01F7_2144_0004_074C(); return; }
	emu_cmpb(&emu_ax.l, 0x9);
	if (!emu_flags.zf) { emu_ip = 0x2128; emu_last_cs = 0x01F7; emu_last_ip = 0x2142; emu_last_length = 0x0010; emu_last_crc = 0x4E3E; emu_call(); return; } // Jump does not resolve
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_ip = 0x2128; emu_last_cs = 0x01F7; emu_last_ip = 0x2146; emu_last_length = 0x0010; emu_last_crc = 0x4E3E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2144_0004_074C()
 *
 * @name f__01F7_2144_0004_074C
 * @implements 01F7:2144:0004:074C ()
 *
 * Called From: 01F7:213E:0010:4E3E
 */
void f__01F7_2144_0004_074C()
{
	emu_xorb(&emu_ax.l, emu_ax.l);
	f__01F7_2128_0003_0734(); return;
}

/**
 * Decompiled function f__01F7_2148_0028_C6FC()
 *
 * @name f__01F7_2148_0028_C6FC
 * @implements 01F7:2148:0028:C6FC ()
 *
 * Called From: 01F7:2128:0003:0734
 * Called From: 01F7:2128:0076:659B
 */
void f__01F7_2148_0028_C6FC()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__01F7_2153_001D_F0A1(); return; }
	emu_incw(&emu_dx.x);
	emu_stosb();
	emu_orb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { emu_ip = 0x2153; emu_last_cs = 0x01F7; emu_last_ip = 0x2150; emu_last_length = 0x0028; emu_last_crc = 0xC6FC; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_bx.x);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_stc();
	if (emu_cx.x == 0) { emu_ip = 0x216F; emu_last_cs = 0x01F7; emu_last_ip = 0x2158; emu_last_length = 0x0028; emu_last_crc = 0xC6FC; emu_call(); return; } // Jump does not resolve
	emu_lodsb(emu_ds);
	emu_decw(&emu_cx.x);
	emu_subb(&emu_ax.l, 0x22);
	if (emu_flags.zf) { emu_ip = 0x216F; emu_last_cs = 0x01F7; emu_last_ip = 0x215E; emu_last_length = 0x0028; emu_last_crc = 0xC6FC; emu_call(); return; } // Jump does not resolve
	emu_addb(&emu_ax.l, 0x22);
	emu_cmpb(&emu_ax.l, 0x5C);
	if (!emu_flags.zf) { emu_ip = 0x216D; emu_last_cs = 0x01F7; emu_last_ip = 0x2164; emu_last_length = 0x0028; emu_last_crc = 0xC6FC; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_get_memory8(emu_ds, emu_si,  0x0), 0x22);
	if (!emu_flags.zf) { emu_ip = 0x216D; emu_last_cs = 0x01F7; emu_last_ip = 0x2169; emu_last_length = 0x0028; emu_last_crc = 0xC6FC; emu_call(); return; } // Jump does not resolve
	emu_lodsb(emu_ds);
	emu_decw(&emu_cx.x);
	emu_orw(&emu_si, emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_2153_001D_F0A1()
 *
 * @name f__01F7_2153_001D_F0A1
 * @implements 01F7:2153:001D:F0A1 ()
 *
 * Called From: 01F7:214A:0028:C6FC
 */
void f__01F7_2153_001D_F0A1()
{
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_stc();
	if (emu_cx.x == 0) { f__01F7_216F_0001_0186(); return; }
	emu_lodsb(emu_ds);
	emu_decw(&emu_cx.x);
	emu_subb(&emu_ax.l, 0x22);
	if (emu_flags.zf) { emu_ip = 0x216F; emu_last_cs = 0x01F7; emu_last_ip = 0x215E; emu_last_length = 0x001D; emu_last_crc = 0xF0A1; emu_call(); return; } // Jump does not resolve
	emu_addb(&emu_ax.l, 0x22);
	emu_cmpb(&emu_ax.l, 0x5C);
	if (!emu_flags.zf) { f__01F7_216D_0003_0206(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, emu_si,  0x0), 0x22);
	if (!emu_flags.zf) { emu_ip = 0x216D; emu_last_cs = 0x01F7; emu_last_ip = 0x2169; emu_last_length = 0x001D; emu_last_crc = 0xF0A1; emu_call(); return; } // Jump does not resolve
	emu_lodsb(emu_ds);
	emu_decw(&emu_cx.x);
	emu_orw(&emu_si, emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_216D_0003_0206()
 *
 * @name f__01F7_216D_0003_0206
 * @implements 01F7:216D:0003:0206 ()
 *
 * Called From: 01F7:2164:001D:F0A1
 */
void f__01F7_216D_0003_0206()
{
	emu_orw(&emu_si, emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_216F_0001_0186()
 *
 * @name f__01F7_216F_0001_0186
 * @implements 01F7:216F:0001:0186 ()
 *
 * Called From: 01F7:2158:001D:F0A1
 */
void f__01F7_216F_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_2175_0069_700D()
 *
 * @name f__01F7_2175_0069_700D
 * @implements 01F7:2175:0069:700D ()
 *
 * Called From: 01F7:212D:000B:23DB
 */
void f__01F7_2175_0069_700D()
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
	if (emu_flags.cf) { emu_ip = 0x2170; emu_last_cs = 0x01F7; emu_last_ip = 0x218C; emu_last_length = 0x0069; emu_last_crc = 0x700D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_sp, emu_bp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B08), emu_bp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B0A), emu_ss);
	if (emu_cx.x == 0) { emu_ip = 0x21AB; emu_last_cs = 0x01F7; emu_last_ip = 0x2198; emu_last_length = 0x0069; emu_last_crc = 0x700D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x0), emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), emu_ss);
	emu_addws(&emu_bp, 0x4);
	emu_lodsb(emu_ss);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (--emu_cx.x != 0 && !emu_flags.zf) { f__01F7_21A3_003B_E1E7(); return; }
	if (emu_flags.zf) { emu_ip = 0x2198; emu_last_cs = 0x01F7; emu_last_ip = 0x21A9; emu_last_length = 0x0069; emu_last_crc = 0x700D; emu_call(); return; } // Jump does not resolve
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
			emu_last_cs = 0x01F7; emu_last_ip = 0x21DA; emu_last_length = 0x0069; emu_last_crc = 0x700D;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__01F7_2198_0046_F150()
 *
 * @name f__01F7_2198_0046_F150
 * @implements 01F7:2198:0046:F150 ()
 *
 * Called From: 01F7:21A9:003B:E1E7
 */
void f__01F7_2198_0046_F150()
{
	if (emu_cx.x == 0) { f__01F7_21AB_0033_7B34(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x0), emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x2), emu_ss);
	emu_addws(&emu_bp, 0x4);
	emu_lodsb(emu_ss);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (--emu_cx.x != 0 && !emu_flags.zf) { emu_ip = 0x21A3; emu_last_cs = 0x01F7; emu_last_ip = 0x21A7; emu_last_length = 0x0046; emu_last_crc = 0xF150; emu_call(); } // Jump does not resolve
	if (emu_flags.zf) { emu_ip = 0x2198; emu_last_cs = 0x01F7; emu_last_ip = 0x21A9; emu_last_length = 0x0046; emu_last_crc = 0xF150; emu_call(); return; } // Jump does not resolve
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
			emu_last_cs = 0x01F7; emu_last_ip = 0x21DA; emu_last_length = 0x0046; emu_last_crc = 0xF150;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__01F7_21A3_003B_E1E7()
 *
 * @name f__01F7_21A3_003B_E1E7
 * @implements 01F7:21A3:003B:E1E7 ()
 *
 * Called From: 01F7:21A7:003B:E1E7
 * Called From: 01F7:21A7:0069:700D
 */
void f__01F7_21A3_003B_E1E7()
{
	emu_lodsb(emu_ss);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (--emu_cx.x != 0 && !emu_flags.zf) { f__01F7_21A3_003B_E1E7(); return; }
	if (emu_flags.zf) { f__01F7_2198_0046_F150(); return; }
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
			emu_last_cs = 0x01F7; emu_last_ip = 0x21DA; emu_last_length = 0x003B; emu_last_crc = 0xE1E7;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__01F7_21AB_0033_7B34()
 *
 * @name f__01F7_21AB_0033_7B34
 * @implements 01F7:21AB:0033:7B34 ()
 *
 * Called From: 01F7:2198:0046:F150
 */
void f__01F7_21AB_0033_7B34()
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
		case 0x022D: f__01F7_022D_0003_02EE(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x21DA; emu_last_length = 0x0033; emu_last_crc = 0x7B34;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__01F7_21DE_000D_84E1()
 *
 * @name f__01F7_21DE_000D_84E1
 * @implements 01F7:21DE:000D:84E1 ()
 *
 * Called From: 01F7:1A7D:000A:B956
 */
void f__01F7_21DE_000D_84E1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_ax.h, 0x4A);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x21EB); f__0070_0108_0005_1CF6();
	f__01F7_21EB_0007_24E8();
}

/**
 * Decompiled function f__01F7_21EB_0007_24E8()
 *
 * @name f__01F7_21EB_0007_24E8
 * @implements 01F7:21EB:0007:24E8 ()
 *
 * Called From: 01F7:21EB:000D:84E1
 */
void f__01F7_21EB_0007_24E8()
{
	if (emu_flags.cf) { emu_ip = 0x21F2; emu_last_cs = 0x01F7; emu_last_ip = 0x21EB; emu_last_length = 0x0007; emu_last_crc = 0x24E8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xFFFF);
	f__01F7_21F8_0002_00E2(); return;
}

/**
 * Decompiled function f__01F7_21F8_0002_00E2()
 *
 * @name f__01F7_21F8_0002_00E2
 * @implements 01F7:21F8:0002:00E2 ()
 *
 * Called From: 01F7:21F0:0007:24E8
 */
void f__01F7_21F8_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_21FA_0012_F153()
 *
 * @name f__01F7_21FA_0012_F153
 * @implements 01F7:21FA:0012:F153 ()
 *
 * Called From: 01F7:0229:0004:04C0
 */
void f__01F7_21FA_0012_F153()
{
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_es, emu_get_memory16(emu_ds, 0x00,  0x77));
	emu_xorw(&emu_di, emu_di);
	emu_push(emu_es);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x79));
	emu_push(emu_cs);
	emu_push(0x220C); f__01F7_184B_000A_958E();
	f__01F7_220C_0017_7A1F();
}

/**
 * Decompiled function f__01F7_220C_0017_7A1F()
 *
 * @name f__01F7_220C_0017_7A1F
 * @implements 01F7:220C:0017:7A1F ()
 *
 * Called From: 01F7:220C:0012:F153
 */
void f__01F7_220C_0017_7A1F()
{
	emu_pop(&emu_bx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B18), emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_dx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__01F7_2223_002F_35D5(); return; }
	emu_ip = 0x027A; emu_last_cs = 0x01F7; emu_last_ip = 0x2220; emu_last_length = 0x0017; emu_last_crc = 0x7A1F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2223_002F_35D5()
 *
 * @name f__01F7_2223_002F_35D5
 * @implements 01F7:2223:002F:35D5 ()
 *
 * Called From: 01F7:221C:0017:7A1F
 */
void f__01F7_2223_002F_35D5()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_cx.x, 0xFFFF);
	emu_cmpb(&emu_get_memory8(emu_es, emu_di,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x223D; emu_last_cs = 0x01F7; emu_last_ip = 0x222C; emu_last_length = 0x002F; emu_last_crc = 0x35D5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x0), emu_di);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x2), emu_es);
	emu_addws(&emu_bx.x, 0x4);
	emu_repne_scasb();
	emu_cmpb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	if (!emu_flags.zf) { f__01F7_222E_0024_2402(); return; }
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
 * Decompiled function f__01F7_222E_0024_2402()
 *
 * @name f__01F7_222E_0024_2402
 * @implements 01F7:222E:0024:2402 ()
 *
 * Called From: 01F7:223B:0024:2402
 * Called From: 01F7:223B:002F:35D5
 */
void f__01F7_222E_0024_2402()
{
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x0), emu_di);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x2), emu_es);
	emu_addws(&emu_bx.x, 0x4);
	emu_repne_scasb();
	emu_cmpb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	if (!emu_flags.zf) { f__01F7_222E_0024_2402(); return; }
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
 * Decompiled function f__01F7_2252_0045_E30C()
 *
 * @name f__01F7_2252_0045_E30C
 * @implements 01F7:2252:0045:E30C ()
 *
 * Called From: B4B5:03FB:000F:33E5
 * Called From: B4B5:04B7:000A:A5AD
 * Called From: B4B5:04FB:000A:A5AD
 * Called From: B4B5:0529:000A:A5AD
 * Called From: B4B5:0754:000F:33E5
 * Called From: B4B5:07E8:000A:A5AD
 * Called From: B4B5:0807:000A:A5AD
 * Called From: B4B5:0A9C:000B:3AA9
 * Called From: B4B5:0B40:000B:3AA9
 * Called From: B4B5:0CA8:000B:21A9
 * Called From: B4B5:1037:000E:8914
 * Called From: B4FC:0048:000D:ECB3
 * Called From: B503:0D4C:0017:D148
 * Called From: B503:0D4C:000E:9E90
 */
void f__01F7_2252_0045_E30C()
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
	if (!emu_flags.zf) { f__01F7_2268_002F_C41F(); return; }
	emu_movw(&emu_bp, 0x0);
	emu_cmpb(&emu_bx.l, 0x2B);
	if (emu_flags.zf) { emu_ip = 0x227F; emu_last_cs = 0x01F7; emu_last_ip = 0x2277; emu_last_length = 0x0045; emu_last_crc = 0xE30C; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_bx.l, 0x2D);
	if (!emu_flags.zf) { f__01F7_2283_0014_DEDD(); return; }
	emu_incw(&emu_bp);
	emu_movb(&emu_bx.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_incw(&emu_si);
	emu_cmpb(&emu_bx.l, 0x39);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x22B7; emu_last_cs = 0x01F7; emu_last_ip = 0x2286; emu_last_length = 0x0045; emu_last_crc = 0xE30C; emu_call(); return; } // Jump does not resolve
	emu_subb(&emu_bx.l, 0x30);
	if (emu_flags.cf) { emu_ip = 0x22B7; emu_last_cs = 0x01F7; emu_last_ip = 0x228B; emu_last_length = 0x0045; emu_last_crc = 0xE30C; emu_call(); return; } // Jump does not resolve
	emu_mulw(&emu_ax.x, emu_cx.x);
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_adcb(&emu_dx.l, emu_dx.h);
	if (emu_flags.zf) { f__01F7_227F_0018_B21D(); return; }
	emu_ip = 0x22A9; emu_last_cs = 0x01F7; emu_last_ip = 0x2295; emu_last_length = 0x0045; emu_last_crc = 0xE30C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2268_002F_C41F()
 *
 * @name f__01F7_2268_002F_C41F
 * @implements 01F7:2268:002F:C41F ()
 *
 * Called From: 01F7:226F:0045:E30C
 */
void f__01F7_2268_002F_C41F()
{
	emu_movb(&emu_bx.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_incw(&emu_si);
	emu_testb(&emu_get_memory8(emu_ds, emu_bx.x + emu_di,  0x0), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x2268; emu_last_cs = 0x01F7; emu_last_ip = 0x226F; emu_last_length = 0x002F; emu_last_crc = 0xC41F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bp, 0x0);
	emu_cmpb(&emu_bx.l, 0x2B);
	if (emu_flags.zf) { emu_ip = 0x227F; emu_last_cs = 0x01F7; emu_last_ip = 0x2277; emu_last_length = 0x002F; emu_last_crc = 0xC41F; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_bx.l, 0x2D);
	if (!emu_flags.zf) { f__01F7_2283_0014_DEDD(); return; }
	emu_incw(&emu_bp);
	emu_movb(&emu_bx.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_incw(&emu_si);
	emu_cmpb(&emu_bx.l, 0x39);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x22B7; emu_last_cs = 0x01F7; emu_last_ip = 0x2286; emu_last_length = 0x002F; emu_last_crc = 0xC41F; emu_call(); return; } // Jump does not resolve
	emu_subb(&emu_bx.l, 0x30);
	if (emu_flags.cf) { emu_ip = 0x22B7; emu_last_cs = 0x01F7; emu_last_ip = 0x228B; emu_last_length = 0x002F; emu_last_crc = 0xC41F; emu_call(); return; } // Jump does not resolve
	emu_mulw(&emu_ax.x, emu_cx.x);
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_adcb(&emu_dx.l, emu_dx.h);
	if (emu_flags.zf) { emu_ip = 0x227F; emu_last_cs = 0x01F7; emu_last_ip = 0x2293; emu_last_length = 0x002F; emu_last_crc = 0xC41F; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x22A9; emu_last_cs = 0x01F7; emu_last_ip = 0x2295; emu_last_length = 0x002F; emu_last_crc = 0xC41F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_227F_0018_B21D()
 *
 * @name f__01F7_227F_0018_B21D
 * @implements 01F7:227F:0018:B21D ()
 *
 * Called From: 01F7:2293:0014:DEDD
 * Called From: 01F7:2293:0018:B21D
 * Called From: 01F7:2293:0045:E30C
 */
void f__01F7_227F_0018_B21D()
{
	emu_movb(&emu_bx.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_incw(&emu_si);
	emu_cmpb(&emu_bx.l, 0x39);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x22B7; emu_last_cs = 0x01F7; emu_last_ip = 0x2286; emu_last_length = 0x0018; emu_last_crc = 0xB21D; emu_call(); return; } // Jump does not resolve
	emu_subb(&emu_bx.l, 0x30);
	if (emu_flags.cf) { f__01F7_22B7_0010_9426(); return; }
	emu_mulw(&emu_ax.x, emu_cx.x);
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_adcb(&emu_dx.l, emu_dx.h);
	if (emu_flags.zf) { f__01F7_227F_0018_B21D(); return; }
	emu_ip = 0x22A9; emu_last_cs = 0x01F7; emu_last_ip = 0x2295; emu_last_length = 0x0018; emu_last_crc = 0xB21D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2283_0014_DEDD()
 *
 * @name f__01F7_2283_0014_DEDD
 * @implements 01F7:2283:0014:DEDD ()
 *
 * Called From: 01F7:227C:0045:E30C
 * Called From: 01F7:227C:002F:C41F
 */
void f__01F7_2283_0014_DEDD()
{
	emu_cmpb(&emu_bx.l, 0x39);
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_22B7_0010_9426(); return; }
	emu_subb(&emu_bx.l, 0x30);
	if (emu_flags.cf) { emu_ip = 0x22B7; emu_last_cs = 0x01F7; emu_last_ip = 0x228B; emu_last_length = 0x0014; emu_last_crc = 0xDEDD; emu_call(); return; } // Jump does not resolve
	emu_mulw(&emu_ax.x, emu_cx.x);
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_adcb(&emu_dx.l, emu_dx.h);
	if (emu_flags.zf) { f__01F7_227F_0018_B21D(); return; }
	emu_ip = 0x22A9; emu_last_cs = 0x01F7; emu_last_ip = 0x2295; emu_last_length = 0x0014; emu_last_crc = 0xDEDD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_22B7_0010_9426()
 *
 * @name f__01F7_22B7_0010_9426
 * @implements 01F7:22B7:0010:9426 ()
 *
 * Called From: 01F7:2286:0014:DEDD
 * Called From: 01F7:228B:0018:B21D
 */
void f__01F7_22B7_0010_9426()
{
	emu_decw(&emu_bp);
	if ((emu_flags.sf != emu_flags.of)) { f__01F7_22C1_0006_1042(); return; }
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
 * Decompiled function f__01F7_22C1_0006_1042()
 *
 * @name f__01F7_22C1_0006_1042
 * @implements 01F7:22C1:0006:1042 ()
 *
 * Called From: 01F7:22B8:0010:9426
 */
void f__01F7_22C1_0006_1042()
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
 * Decompiled function f__01F7_22E8_0011_8341()
 *
 * @name f__01F7_22E8_0011_8341
 * @implements 01F7:22E8:0011:8341 ()
 *
 * Called From: 01F7:2A2D:000E:2327
 */
void f__01F7_22E8_0011_8341()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movb(&emu_ax.h, 0x43);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x22F9); f__0070_0108_0005_1CF6();
	f__01F7_22F9_0006_0E9C();
}

/**
 * Decompiled function f__01F7_22F9_0006_0E9C()
 *
 * @name f__01F7_22F9_0006_0E9C
 * @implements 01F7:22F9:0006:0E9C ()
 *
 * Called From: 01F7:22F9:0011:8341
 */
void f__01F7_22F9_0006_0E9C()
{
	emu_pop(&emu_ds);
	if (emu_flags.cf) { f__01F7_22FF_0004_024E(); return; }
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	f__01F7_2303_0002_00E2(); return;
}

/**
 * Decompiled function f__01F7_22FF_0004_024E()
 *
 * @name f__01F7_22FF_0004_024E
 * @implements 01F7:22FF:0004:024E ()
 *
 * Called From: 01F7:22FA:0006:0E9C
 */
void f__01F7_22FF_0004_024E()
{
	emu_push(emu_ax.x);
	emu_push(0x2303); f__01F7_0675_0020_2791();
	f__01F7_2303_0002_00E2();
}

/**
 * Decompiled function f__01F7_2303_0002_00E2()
 *
 * @name f__01F7_2303_0002_00E2
 * @implements 01F7:2303:0002:00E2 ()
 *
 * Called From: 01F7:22FD:0006:0E9C
 * Called From: 01F7:2303:0004:024E
 */
void f__01F7_2303_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_23CC_0013_04A4()
 *
 * @name f__01F7_23CC_0013_04A4
 * @implements 01F7:23CC:0013:04A4 ()
 *
 * Called From: 1DB6:00C0:000F:D96E
 * Called From: 1FB5:0054:0012:481D
 * Called From: 24E6:00AD:000C:13C9
 * Called From: 261F:019A:001A:60F2
 */
void f__01F7_23CC_0013_04A4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x795A));
	if (emu_flags.cf) { f__01F7_23E1_0010_EBEB(); return; }
	emu_movw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_push(0x23DF); emu_ip = 0x0675; emu_last_cs = 0x01F7; emu_last_ip = 0x23DC; emu_last_length = 0x0013; emu_last_crc = 0x04A4; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_23E1_0010_EBEB()
 *
 * @name f__01F7_23E1_0010_EBEB
 * @implements 01F7:23E1:0010:EBEB ()
 *
 * Called From: 01F7:23D6:0013:04A4
 */
void f__01F7_23E1_0010_EBEB()
{
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x0);
	emu_push(emu_dx.x);
	emu_push(emu_cs);
	emu_push(0x23F1); f__01F7_23F4_000A_EC46();
	f__01F7_23F1_0003_022A();
}

/**
 * Decompiled function f__01F7_23F1_0003_022A()
 *
 * @name f__01F7_23F1_0003_022A
 * @implements 01F7:23F1:0003:022A ()
 *
 * Called From: 01F7:23F1:0010:EBEB
 */
void f__01F7_23F1_0003_022A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_23F4_000A_EC46()
 *
 * @name f__01F7_23F4_000A_EC46
 * @implements 01F7:23F4:000A:EC46 ()
 *
 * Called From: 01F7:23EE:0010:EBEB
 */
void f__01F7_23F4_000A_EC46()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_ax.h, 0x3E);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x23FE); f__0070_0108_0005_1CF6();
	f__01F7_23FE_000E_7C01();
}

/**
 * Decompiled function f__01F7_23FE_000E_7C01()
 *
 * @name f__01F7_23FE_000E_7C01
 * @implements 01F7:23FE:000E:7C01 ()
 *
 * Called From: 01F7:23FE:000A:EC46
 */
void f__01F7_23FE_000E_7C01()
{
	if (emu_flags.cf) { emu_ip = 0x240C; emu_last_cs = 0x01F7; emu_last_ip = 0x23FE; emu_last_length = 0x000E; emu_last_crc = 0x7C01; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__01F7_2410_0002_00E2(); return;
}

/**
 * Decompiled function f__01F7_2410_0002_00E2()
 *
 * @name f__01F7_2410_0002_00E2
 * @implements 01F7:2410:0002:00E2 ()
 *
 * Called From: 01F7:240A:000E:7C01
 */
void f__01F7_2410_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2412_0011_3683()
 *
 * @name f__01F7_2412_0011_3683
 * @implements 01F7:2412:0011:3683 ()
 *
 * Called From: 01F7:44A9:0014:179C
 */
void f__01F7_2412_0011_3683()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__01F7_2426_0012_835A(); return; }
	emu_push(emu_cs);
	emu_push(0x2423); emu_ip = 0x2520; emu_last_cs = 0x01F7; emu_last_ip = 0x2420; emu_last_length = 0x0011; emu_last_crc = 0x3683; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_2426_0012_835A()
 *
 * @name f__01F7_2426_0012_835A
 * @implements 01F7:2426:0012:835A ()
 *
 * Called From: 01F7:241C:0011:3683
 */
void f__01F7_2426_0012_835A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_flags.zf) { f__01F7_2438_0023_534D(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x24DC; emu_last_cs = 0x01F7; emu_last_ip = 0x2435; emu_last_length = 0x0012; emu_last_crc = 0x835A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2438_0023_534D()
 *
 * @name f__01F7_2438_0023_534D
 * @implements 01F7:2438:0023:534D ()
 *
 * Called From: 01F7:2430:0012:835A
 */
void f__01F7_2438_0023_534D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x2492; emu_last_cs = 0x01F7; emu_last_ip = 0x243F; emu_last_length = 0x0023; emu_last_crc = 0x534D; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { f__01F7_2461_002F_0674(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addws(&emu_dx.x, 0x5);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__01F7_245B_0035_033F(); return; }
	f__01F7_24DA_0005_0872(); return;
}

/**
 * Decompiled function f__01F7_245B_0035_033F()
 *
 * @name f__01F7_245B_0035_033F
 * @implements 01F7:245B:0035:033F ()
 *
 * Called From: 01F7:2456:0023:534D
 */
void f__01F7_245B_0035_033F()
{
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x24DA; emu_last_cs = 0x01F7; emu_last_ip = 0x245F; emu_last_length = 0x0035; emu_last_crc = 0x033F; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addws(&emu_dx.x, 0x5);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { emu_ip = 0x24DA; emu_last_cs = 0x01F7; emu_last_ip = 0x2476; emu_last_length = 0x0035; emu_last_crc = 0x033F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x24DA; emu_last_cs = 0x01F7; emu_last_ip = 0x247C; emu_last_length = 0x0035; emu_last_crc = 0x033F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	f__01F7_24DA_0005_0872(); return;
}

/**
 * Decompiled function f__01F7_2461_002F_0674()
 *
 * @name f__01F7_2461_002F_0674
 * @implements 01F7:2461:002F:0674 ()
 *
 * Called From: 01F7:2447:0023:534D
 */
void f__01F7_2461_002F_0674()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addws(&emu_dx.x, 0x5);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__01F7_24DA_0005_0872(); return; }
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x24DA; emu_last_cs = 0x01F7; emu_last_ip = 0x247C; emu_last_length = 0x002F; emu_last_crc = 0x0674; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	emu_ip = 0x24DA; emu_last_cs = 0x01F7; emu_last_ip = 0x248E; emu_last_length = 0x002F; emu_last_crc = 0x0674; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_24DA_0005_0872()
 *
 * @name f__01F7_24DA_0005_0872
 * @implements 01F7:24DA:0005:0872 ()
 *
 * Called From: 01F7:2458:0023:534D
 * Called From: 01F7:2476:002F:0674
 * Called From: 01F7:248E:0035:033F
 */
void f__01F7_24DA_0005_0872()
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
 * Decompiled function f__01F7_276F_000F_882B()
 *
 * @name f__01F7_276F_000F_882B
 * @implements 01F7:276F:000F:882B ()
 *
 * Called From: 1DB6:010B:0014:C3CB
 */
void f__01F7_276F_000F_882B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x44);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x277E); f__01F7_0428_0010_4994();
	f__01F7_277E_001A_2004();
}

/**
 * Decompiled function f__01F7_277E_001A_2004()
 *
 * @name f__01F7_277E_001A_2004
 * @implements 01F7:277E:001A:2004 ()
 *
 * Called From: 01F7:277E:000F:882B
 */
void f__01F7_277E_001A_2004()
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
	emu_push(0x2798); f__01F7_03E5_000F_B264();
	f__01F7_2798_000E_AC83();
}

/**
 * Decompiled function f__01F7_2798_000E_AC83()
 *
 * @name f__01F7_2798_000E_AC83
 * @implements 01F7:2798:000E:AC83 ()
 *
 * Called From: 01F7:2798:001A:2004
 */
void f__01F7_2798_000E_AC83()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpw(&emu_ax.x, 0xFFFF);
	if (!emu_flags.zf) { f__01F7_27A6_000A_5857(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x27F8; emu_last_cs = 0x01F7; emu_last_ip = 0x27A4; emu_last_length = 0x000E; emu_last_crc = 0xAC83; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_27A6_000A_5857()
 *
 * @name f__01F7_27A6_000A_5857
 * @implements 01F7:27A6:000A:5857 ()
 *
 * Called From: 01F7:279E:000E:AC83
 */
void f__01F7_27A6_000A_5857()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x44);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x27B0); f__01F7_39A5_001F_856D();
	f__01F7_27B0_000E_E391();
}

/**
 * Decompiled function f__01F7_27B0_000E_E391()
 *
 * @name f__01F7_27B0_000E_E391
 * @implements 01F7:27B0:000E:E391 ()
 *
 * Called From: 01F7:27B0:000A:5857
 */
void f__01F7_27B0_000E_E391()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_si);
	if (emu_flags.cf) { f__01F7_27BE_000E_4997(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7F), 0x22);
	emu_ip = 0x27A0; emu_last_cs = 0x01F7; emu_last_ip = 0x27BC; emu_last_length = 0x000E; emu_last_crc = 0xE391; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_27BE_000E_4997()
 *
 * @name f__01F7_27BE_000E_4997
 * @implements 01F7:27BE:000E:4997 ()
 *
 * Called From: 01F7:27B4:000E:E391
 */
void f__01F7_27BE_000E_4997()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__01F7_27DF_0010_604B(); return; }
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x27CC); emu_ip = 0x184B; emu_last_cs = 0x01F7; emu_last_ip = 0x27C9; emu_last_length = 0x000E; emu_last_crc = 0x4997; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_27DF_0010_604B()
 *
 * @name f__01F7_27DF_0010_604B
 * @implements 01F7:27DF:0010:604B ()
 *
 * Called From: 01F7:27C4:000E:4997
 */
void f__01F7_27DF_0010_604B()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x44);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x27EF); f__01F7_38F6_0029_5C00();
	f__01F7_27EF_000E_7D07();
}

/**
 * Decompiled function f__01F7_27EF_000E_7D07()
 *
 * @name f__01F7_27EF_000E_7D07
 * @implements 01F7:27EF:000E:7D07 ()
 *
 * Called From: 01F7:27EF:0010:604B
 */
void f__01F7_27EF_000E_7D07()
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
 * Decompiled function f__01F7_27FD_0037_08CE()
 *
 * @name f__01F7_27FD_0037_08CE
 * @implements 01F7:27FD:0037:08CE ()
 *
 * Called From: 01F7:4035:0011:D293
 */
void f__01F7_27FD_0037_08CE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_es);
	emu_orw(&emu_ax.x, emu_di);
	if (emu_flags.zf) { emu_ip = 0x282E; emu_last_cs = 0x01F7; emu_last_ip = 0x280C; emu_last_length = 0x0037; emu_last_crc = 0x08CE; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.h, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_movw(&emu_cx.x, 0xFFFF);
	emu_cld();
	emu_repne_scasb();
	emu_notw(&emu_cx.x, emu_cx.x);
	emu_decw(&emu_cx.x);
	if (emu_flags.zf) { emu_ip = 0x282E; emu_last_cs = 0x01F7; emu_last_ip = 0x281C; emu_last_length = 0x0037; emu_last_crc = 0x08CE; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x7B16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_es);
	emu_movw(&emu_bx.x, emu_es);
	emu_orw(&emu_bx.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_di);
	if (!emu_flags.zf) { f__01F7_283B_0032_BD79(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x2867; emu_last_cs = 0x01F7; emu_last_ip = 0x2832; emu_last_length = 0x0037; emu_last_crc = 0x08CE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_282E_0006_107A()
 *
 * @name f__01F7_282E_0006_107A
 * @implements 01F7:282E:0006:107A ()
 *
 * Called From: 01F7:2842:0039:9AF8
 */
void f__01F7_282E_0006_107A()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__01F7_2867_0006_137A(); return;
}

/**
 * Decompiled function f__01F7_2834_0039_9AF8()
 *
 * @name f__01F7_2834_0039_9AF8
 * @implements 01F7:2834:0039:9AF8 ()
 *
 * Called From: 01F7:284D:0032:BD79
 * Called From: 01F7:284D:0039:9AF8
 */
void f__01F7_2834_0039_9AF8()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x4);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_es, emu_di,  0x0));
	emu_movw(&emu_bx.x, emu_es);
	emu_orw(&emu_bx.x, emu_di);
	if (emu_flags.zf) { f__01F7_282E_0006_107A(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x282E; emu_last_cs = 0x01F7; emu_last_ip = 0x2849; emu_last_length = 0x0039; emu_last_crc = 0x9AF8; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.h, emu_ax.l);
	if (!emu_flags.zf) { f__01F7_2834_0039_9AF8(); return; }
	emu_movw(&emu_bx.x, emu_cx.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x + emu_di,  0x0), 0x3D);
	if (!emu_flags.zf) { emu_ip = 0x2834; emu_last_cs = 0x01F7; emu_last_ip = 0x2855; emu_last_length = 0x0039; emu_last_crc = 0x9AF8; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_rep_cmpsb(emu_ds);
	emu_pop(&emu_ds);
	emu_xchgw(&emu_bx.x, &emu_cx.x);
	if (!emu_flags.zf) { emu_ip = 0x2834; emu_last_cs = 0x01F7; emu_last_ip = 0x2860; emu_last_length = 0x0039; emu_last_crc = 0x9AF8; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_283B_0032_BD79()
 *
 * @name f__01F7_283B_0032_BD79
 * @implements 01F7:283B:0032:BD79 ()
 *
 * Called From: 01F7:282C:0037:08CE
 */
void f__01F7_283B_0032_BD79()
{
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_es, emu_di,  0x0));
	emu_movw(&emu_bx.x, emu_es);
	emu_orw(&emu_bx.x, emu_di);
	if (emu_flags.zf) { emu_ip = 0x282E; emu_last_cs = 0x01F7; emu_last_ip = 0x2842; emu_last_length = 0x0032; emu_last_crc = 0xBD79; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x282E; emu_last_cs = 0x01F7; emu_last_ip = 0x2849; emu_last_length = 0x0032; emu_last_crc = 0xBD79; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.h, emu_ax.l);
	if (!emu_flags.zf) { f__01F7_2834_0039_9AF8(); return; }
	emu_movw(&emu_bx.x, emu_cx.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x + emu_di,  0x0), 0x3D);
	if (!emu_flags.zf) { emu_ip = 0x2834; emu_last_cs = 0x01F7; emu_last_ip = 0x2855; emu_last_length = 0x0032; emu_last_crc = 0xBD79; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_rep_cmpsb(emu_ds);
	emu_pop(&emu_ds);
	emu_xchgw(&emu_bx.x, &emu_cx.x);
	if (!emu_flags.zf) { emu_ip = 0x2834; emu_last_cs = 0x01F7; emu_last_ip = 0x2860; emu_last_length = 0x0032; emu_last_crc = 0xBD79; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_2867_0006_137A()
 *
 * @name f__01F7_2867_0006_137A
 * @implements 01F7:2867:0006:137A ()
 *
 * Called From: 01F7:2832:0006:107A
 */
void f__01F7_2867_0006_137A()
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
 * Decompiled function f__01F7_286D_0023_087E()
 *
 * @name f__01F7_286D_0023_087E
 * @implements 01F7:286D:0023:087E ()
 *
 * Called From: 1A34:1E49:0014:4588
 * Called From: 1A34:1E49:0015:4EA8
 * Called From: B4E9:0204:002D:BB29
 */
void f__01F7_286D_0023_087E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_cx.x == 0) { emu_ip = 0x2881; emu_last_cs = 0x01F7; emu_last_ip = 0x2877; emu_last_length = 0x0023; emu_last_crc = 0x087E; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_cld();
	emu_repne_scasb();
	if (emu_flags.zf) { f__01F7_2888_0008_24FA(); return; }
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
 * Decompiled function f__01F7_2888_0008_24FA()
 *
 * @name f__01F7_2888_0008_24FA
 * @implements 01F7:2888:0008:24FA ()
 *
 * Called From: 01F7:287F:0023:087E
 */
void f__01F7_2888_0008_24FA()
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
 * Decompiled function f__01F7_28B8_0024_D407()
 *
 * @name f__01F7_28B8_0024_D407
 * @implements 01F7:28B8:0024:D407 ()
 *
 * Called From: 01F7:3767:001D:4334
 * Called From: 0642:05B2:0026:4BFD
 * Called From: 0642:05B2:0028:B8FD
 * Called From: 0642:05B2:002B:44F8
 * Called From: 0642:077D:0014:7ED1
 * Called From: 0FE4:05E9:0034:E832
 * Called From: 1319:0244:0028:5812
 * Called From: 176C:2035:001C:2CDC
 * Called From: 176C:2035:001F:AC83
 * Called From: 1DB6:0050:0019:9A38
 * Called From: 259E:00DD:0015:61B8
 * Called From: B4B8:02F2:0015:FD53
 * Called From: B4B8:05E8:0015:FD53
 * Called From: B4B8:1707:0017:79B3
 * Called From: B4ED:00A9:001C:6C84
 * Called From: B4ED:0104:002E:26E0
 * Called From: B4ED:0134:0016:337F
 * Called From: B4ED:06D3:001C:4484
 * Called From: B4ED:0879:0013:F5BF
 * Called From: B4ED:08D2:002C:F9EB
 * Called From: B4ED:09FB:0013:F5BF
 * Called From: B4ED:0B0E:001A:9ADD
 * Called From: B4ED:0B0E:0038:397F
 * Called From: B4ED:0BEA:001B:D25E
 * Called From: B4FC:06AE:003A:0DC5
 * Called From: B4FC:06AE:003D:6DD9
 * Called From: B4FC:073D:0022:0E11
 * Called From: B503:013E:001A:6C9C
 * Called From: B503:0169:002B:101F
 * Called From: B503:017F:0016:6DA3
 * Called From: B503:053E:001A:DCA7
 * Called From: B503:119A:0015:3B59
 * Called From: B503:13A0:0021:B921
 * Called From: B503:13A0:0027:DB91
 * Called From: B518:053C:001A:DA41
 * Called From: B518:06C8:0029:5839
 * Called From: B518:07C6:0013:D120
 * Called From: B518:088E:001E:9E73
 * Called From: B518:08B1:001A:022F
 * Called From: B518:08C7:0016:64AC
 * Called From: B518:0A85:001D:7801
 * Called From: B518:0E04:0036:A372
 */
void f__01F7_28B8_0024_D407()
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
	if (!emu_flags.cf) { f__01F7_28D0_000C_EB2E(); return; }
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
 * Decompiled function f__01F7_28D0_000C_EB2E()
 *
 * @name f__01F7_28D0_000C_EB2E
 * @implements 01F7:28D0:000C:EB2E ()
 *
 * Called From: 01F7:28CD:0024:D407
 */
void f__01F7_28D0_000C_EB2E()
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
 * Decompiled function f__01F7_28DC_0009_5738()
 *
 * @name f__01F7_28DC_0009_5738
 * @implements 01F7:28DC:0009:5738 ()
 *
 * Called From: B4B5:06A4:0014:4241
 * Called From: B4FC:04AC:001B:BFCC
 * Called From: B4FC:05D0:0027:7573
 */
void f__01F7_28DC_0009_5738()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	f__01F7_2917_000C_6C3D(); return;
}

/**
 * Decompiled function f__01F7_28E5_000E_0117()
 *
 * @name f__01F7_28E5_000E_0117
 * @implements 01F7:28E5:000E:0117 ()
 *
 * Called From: 01F7:291C:000C:6C3D
 * Called From: 01F7:291C:0012:2F24
 */
void f__01F7_28E5_000E_0117()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x28F3); f__01F7_10C3_0010_906C();
	f__01F7_28F3_0010_C126();
}

/**
 * Decompiled function f__01F7_28F3_0010_C126()
 *
 * @name f__01F7_28F3_0010_C126
 * @implements 01F7:28F3:0010:C126 ()
 *
 * Called From: 01F7:28F3:000E:0117
 */
void f__01F7_28F3_0010_C126()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x2903); f__01F7_10C3_0010_906C();
	f__01F7_2903_000E_DE00();
}

/**
 * Decompiled function f__01F7_2903_000E_DE00()
 *
 * @name f__01F7_2903_000E_DE00
 * @implements 01F7:2903:000E:DE00 ()
 *
 * Called From: 01F7:2903:0010:C126
 */
void f__01F7_2903_000E_DE00()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { f__01F7_2911_0012_2F24(); return; }
	emu_movw(&emu_ax.x, emu_bx.x);
	f__01F7_2920_0003_0212(); return;
}

/**
 * Decompiled function f__01F7_2911_0012_2F24()
 *
 * @name f__01F7_2911_0012_2F24
 * @implements 01F7:2911:0012:2F24 ()
 *
 * Called From: 01F7:290B:000E:DE00
 */
void f__01F7_2911_0012_2F24()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_si);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_28E5_000E_0117(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2917_000C_6C3D()
 *
 * @name f__01F7_2917_000C_6C3D
 * @implements 01F7:2917:000C:6C3D ()
 *
 * Called From: 01F7:28E3:0009:5738
 */
void f__01F7_2917_000C_6C3D()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_decw(&emu_si);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_28E5_000E_0117(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2920_0003_0212()
 *
 * @name f__01F7_2920_0003_0212
 * @implements 01F7:2920:0003:0212 ()
 *
 * Called From: 01F7:290F:000E:DE00
 */
void f__01F7_2920_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2923_0024_BDA8()
 *
 * @name f__01F7_2923_0024_BDA8
 * @implements 01F7:2923:0024:BDA8 ()
 *
 * Called From: 01F7:2958:0014:9C5E
 */
void f__01F7_2923_0024_BDA8()
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
	if (emu_flags.zf) { f__01F7_293D_000A_24D8(); return; }
	if (emu_cx.x == 0) { emu_ip = 0x2944; emu_last_cs = 0x01F7; emu_last_ip = 0x2939; emu_last_length = 0x0024; emu_last_crc = 0xBDA8; emu_call(); return; } // Jump does not resolve
	emu_stosb();
	emu_decw(&emu_cx.x);
	emu_shrw(&emu_cx.x, 0x1);
	emu_rep_stosw();
	if (!emu_flags.cf) { f__01F7_2944_0003_021A(); return; }
	emu_stosb();
	emu_pop(&emu_di);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_293D_000A_24D8()
 *
 * @name f__01F7_293D_000A_24D8
 * @implements 01F7:293D:000A:24D8 ()
 *
 * Called From: 01F7:2937:0024:BDA8
 */
void f__01F7_293D_000A_24D8()
{
	emu_shrw(&emu_cx.x, 0x1);
	emu_rep_stosw();
	if (!emu_flags.cf) { f__01F7_2944_0003_021A(); return; }
	emu_stosb();
	emu_pop(&emu_di);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2944_0003_021A()
 *
 * @name f__01F7_2944_0003_021A
 * @implements 01F7:2944:0003:021A ()
 *
 * Called From: 01F7:2941:000A:24D8
 * Called From: 01F7:2941:0024:BDA8
 */
void f__01F7_2944_0003_021A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2947_0014_9C5E()
 *
 * @name f__01F7_2947_0014_9C5E
 * @implements 01F7:2947:0014:9C5E ()
 *
 * Called From: 07D4:0367:001F:64B1
 * Called From: 07D4:037B:0014:BFEF
 * Called From: 07D4:1275:001D:2F95
 * Called From: 07D4:1289:0014:447A
 * Called From: 0FE4:017C:001D:6C2C
 * Called From: 0FE4:017C:0026:3A74
 * Called From: 0FE4:04E5:0019:4F59
 * Called From: 104B:009A:001D:C474
 * Called From: 104B:009A:0026:9247
 * Called From: 1082:00D5:001D:5F11
 * Called From: 1082:00D5:0026:0937
 * Called From: 1082:02C3:001A:A35A
 * Called From: 10BE:004D:001D:E785
 * Called From: 10BE:004D:0026:B18C
 * Called From: 10BE:00FF:0064:F23B
 * Called From: 10E4:1F8B:0011:73DB
 * Called From: 23E1:0113:0012:EB05
 * Called From: 23E1:014E:0026:0CEE
 * Called From: 23E1:014E:003B:2BE0
 * Called From: 24DA:0067:0012:F082
 * Called From: 24DA:00A2:0020:BECE
 * Called From: 24DA:00A2:003B:963A
 * Called From: 25C4:003B:0013:1968
 * Called From: 25C4:03AF:0018:D8BD
 * Called From: 2649:0012:0014:BF6F
 * Called From: B495:0DEC:0018:6245
 * Called From: B495:15BF:0027:3A70
 * Called From: B495:180C:002B:8A2E
 * Called From: B4B5:0070:0014:33B2
 * Called From: B4B5:009F:0014:5D0D
 * Called From: B4B8:02C5:0012:EF7C
 * Called From: B4DA:00A5:0011:112B
 * Called From: B4DA:00A5:0014:1F0B
 * Called From: B4E0:0C02:0019:CD43
 * Called From: B4ED:011E:001A:8AA1
 * Called From: B4ED:0148:0014:D0E1
 * Called From: B4ED:0694:002B:D77C
 * Called From: B4ED:0B24:0011:20D9
 * Called From: B503:0037:0013:C1B7
 * Called From: B503:05D4:0029:64FB
 * Called From: B511:0AD5:0016:4962
 * Called From: B511:0AEC:0017:0416
 * Called From: B511:0B03:0017:D91B
 * Called From: B511:0B17:0014:497A
 * Called From: B511:0B2B:0014:4A7A
 * Called From: B511:0B3F:0014:4B7A
 * Called From: B511:0B53:0014:447A
 * Called From: B511:0B67:0014:457A
 * Called From: B511:0B84:001D:7041
 * Called From: B511:0B98:0014:4A4D
 * Called From: B511:0FD3:0028:715B
 * Called From: B518:1148:0015:3EB5
 * Called From: B52A:025F:0020:4A80
 */
void f__01F7_2947_0014_9C5E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x295B); f__01F7_2923_0024_BDA8();
	f__01F7_295B_000B_AFD5();
}

/**
 * Decompiled function f__01F7_295B_000B_AFD5()
 *
 * @name f__01F7_295B_000B_AFD5
 * @implements 01F7:295B:000B:AFD5 ()
 *
 * Called From: 01F7:295B:0014:9C5E
 */
void f__01F7_295B_000B_AFD5()
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
 * Decompiled function f__01F7_2966_0015_84B8()
 *
 * @name f__01F7_2966_0015_84B8
 * @implements 01F7:2966:0015:84B8 ()
 *
 * Called From: 01F7:29CB:0016:C77F
 */
void f__01F7_2966_0015_84B8()
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
	emu_push(0x297B); f__01F7_07B3_0021_70BD();
	f__01F7_297B_0008_5BFA();
}

/**
 * Decompiled function f__01F7_297B_0008_5BFA()
 *
 * @name f__01F7_297B_0008_5BFA
 * @implements 01F7:297B:0008:5BFA ()
 *
 * Called From: 01F7:297B:0015:84B8
 */
void f__01F7_297B_0008_5BFA()
{
	if (!emu_flags.cf) { f__01F7_2983_0035_31CD(); return; }
	emu_std();
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x2986; emu_last_cs = 0x01F7; emu_last_ip = 0x2981; emu_last_length = 0x0008; emu_last_crc = 0x5BFA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2983_0035_31CD()
 *
 * @name f__01F7_2983_0035_31CD
 * @implements 01F7:2983:0035:31CD ()
 *
 * Called From: 01F7:297B:0008:5BFA
 */
void f__01F7_2983_0035_31CD()
{
	emu_cld();
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__01F7_2999_001F_F1C4(); return; }
	emu_addw(&emu_si, emu_cx.x);
	emu_decw(&emu_si);
	emu_addw(&emu_di, emu_cx.x);
	emu_decw(&emu_di);
	emu_testw(&emu_di, 0x1);
	if (emu_flags.zf) { emu_ip = 0x29A3; emu_last_cs = 0x01F7; emu_last_ip = 0x299D; emu_last_length = 0x0035; emu_last_crc = 0x31CD; emu_call(); return; } // Jump does not resolve
	if (emu_cx.x == 0) { emu_ip = 0x29B2; emu_last_cs = 0x01F7; emu_last_ip = 0x299F; emu_last_length = 0x0035; emu_last_crc = 0x31CD; emu_call(); return; } // Jump does not resolve
	emu_movsb(emu_ds);
	emu_decw(&emu_cx.x);
	emu_subw(&emu_si, emu_ax.x);
	emu_subw(&emu_di, emu_ax.x);
	emu_shrw(&emu_cx.x, 0x1);
	emu_rep_movsw(emu_ds);
	if (!emu_flags.cf) { emu_ip = 0x29B2; emu_last_cs = 0x01F7; emu_last_ip = 0x29AB; emu_last_length = 0x0035; emu_last_crc = 0x31CD; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_2999_001F_F1C4()
 *
 * @name f__01F7_2999_001F_F1C4
 * @implements 01F7:2999:001F:F1C4 ()
 *
 * Called From: 01F7:2991:0035:31CD
 */
void f__01F7_2999_001F_F1C4()
{
	emu_testw(&emu_di, 0x1);
	if (emu_flags.zf) { f__01F7_29A3_0015_B6CC(); return; }
	if (emu_cx.x == 0) { emu_ip = 0x29B2; emu_last_cs = 0x01F7; emu_last_ip = 0x299F; emu_last_length = 0x001F; emu_last_crc = 0xF1C4; emu_call(); return; } // Jump does not resolve
	emu_movsb(emu_ds);
	emu_decw(&emu_cx.x);
	emu_subw(&emu_si, emu_ax.x);
	emu_subw(&emu_di, emu_ax.x);
	emu_shrw(&emu_cx.x, 0x1);
	emu_rep_movsw(emu_ds);
	if (!emu_flags.cf) { emu_ip = 0x29B2; emu_last_cs = 0x01F7; emu_last_ip = 0x29AB; emu_last_length = 0x001F; emu_last_crc = 0xF1C4; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_29A3_0015_B6CC()
 *
 * @name f__01F7_29A3_0015_B6CC
 * @implements 01F7:29A3:0015:B6CC ()
 *
 * Called From: 01F7:299D:001F:F1C4
 */
void f__01F7_29A3_0015_B6CC()
{
	emu_subw(&emu_si, emu_ax.x);
	emu_subw(&emu_di, emu_ax.x);
	emu_shrw(&emu_cx.x, 0x1);
	emu_rep_movsw(emu_ds);
	if (!emu_flags.cf) { emu_ip = 0x29B2; emu_last_cs = 0x01F7; emu_last_ip = 0x29AB; emu_last_length = 0x0015; emu_last_crc = 0xB6CC; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_29B8_0016_C77F()
 *
 * @name f__01F7_29B8_0016_C77F
 * @implements 01F7:29B8:0016:C77F ()
 *
 * Called From: 176C:20FF:0025:C6C8
 */
void f__01F7_29B8_0016_C77F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x29CE); f__01F7_2966_0015_84B8();
	f__01F7_29CE_000B_ABD5();
}

/**
 * Decompiled function f__01F7_29CE_000B_ABD5()
 *
 * @name f__01F7_29CE_000B_ABD5
 * @implements 01F7:29CE:000B:ABD5 ()
 *
 * Called From: 01F7:29CE:0016:C77F
 */
void f__01F7_29CE_000B_ABD5()
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
 * Decompiled function f__01F7_29D9_000E_EF8E()
 *
 * @name f__01F7_29D9_000E_EF8E
 * @implements 01F7:29D9:000E:EF8E ()
 *
 * Called From: 01F7:2AB3:000C:D3DF
 */
void f__01F7_29D9_000E_EF8E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movb(&emu_ax.h, 0x3C);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x29E7); f__0070_0108_0005_1CF6();
	f__01F7_29E7_0005_0774();
}

/**
 * Decompiled function f__01F7_29E7_0005_0774()
 *
 * @name f__01F7_29E7_0005_0774
 * @implements 01F7:29E7:0005:0774 ()
 *
 * Called From: 01F7:29E7:000E:EF8E
 */
void f__01F7_29E7_0005_0774()
{
	emu_pop(&emu_ds);
	if (emu_flags.cf) { f__01F7_29EC_0004_01EC(); return; }
	f__01F7_29F0_0004_03D8(); return;
}

/**
 * Decompiled function f__01F7_29EC_0004_01EC()
 *
 * @name f__01F7_29EC_0004_01EC
 * @implements 01F7:29EC:0004:01EC ()
 *
 * Called From: 01F7:29E8:0005:0774
 */
void f__01F7_29EC_0004_01EC()
{
	emu_push(emu_ax.x);
	emu_push(0x29F0); f__01F7_0675_0020_2791();
	f__01F7_29F0_0004_03D8();
}

/**
 * Decompiled function f__01F7_29F0_0004_03D8()
 *
 * @name f__01F7_29F0_0004_03D8
 * @implements 01F7:29F0:0004:03D8 ()
 *
 * Called From: 01F7:29EA:0005:0774
 * Called From: 01F7:29F0:0004:01EC
 */
void f__01F7_29F0_0004_03D8()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 6;
	return;
}

/**
 * Decompiled function f__01F7_29F4_000E_9D39()
 *
 * @name f__01F7_29F4_000E_9D39
 * @implements 01F7:29F4:000E:9D39 ()
 *
 * Called From: 01F7:2B11:000A:4CCE
 */
void f__01F7_29F4_000E_9D39()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_subw(&emu_cx.x, emu_cx.x);
	emu_subw(&emu_dx.x, emu_dx.x);
	emu_movb(&emu_ax.h, 0x40);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x2A02); f__0070_0108_0005_1CF6();
	f__01F7_2A02_0004_03C8();
}

/**
 * Decompiled function f__01F7_2A02_0004_03C8()
 *
 * @name f__01F7_2A02_0004_03C8
 * @implements 01F7:2A02:0004:03C8 ()
 *
 * Called From: 01F7:2A02:000E:9D39
 */
void f__01F7_2A02_0004_03C8()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_sp += 2;
	return;
}

/**
 * Decompiled function f__01F7_2A06_002A_FCED()
 *
 * @name f__01F7_2A06_002A_FCED
 * @implements 01F7:2A06:002A:FCED ()
 *
 * Called From: 1FB5:0137:001B:F2B6
 * Called From: 24E6:0083:001A:7053
 * Called From: 261F:0045:000E:638B
 */
void f__01F7_2A06_002A_FCED()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_testw(&emu_si, 0xC000);
	if (!emu_flags.zf) { f__01F7_2A22_000E_2327(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7984));
	emu_andw(&emu_ax.x, 0xC000);
	emu_orw(&emu_si, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2A30); emu_ip = 0x22E8; emu_last_cs = 0x01F7; emu_last_ip = 0x2A2D; emu_last_length = 0x002A; emu_last_crc = 0xFCED; emu_call(); // Jump does not resolve
	f__01F7_2A30_000F_3BE0();
}

/**
 * Decompiled function f__01F7_2A22_000E_2327()
 *
 * @name f__01F7_2A22_000E_2327
 * @implements 01F7:2A22:000E:2327 ()
 *
 * Called From: 01F7:2A18:002A:FCED
 */
void f__01F7_2A22_000E_2327()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2A30); f__01F7_22E8_0011_8341();
	f__01F7_2A30_000F_3BE0();
}

/**
 * Decompiled function f__01F7_2A30_000F_3BE0()
 *
 * @name f__01F7_2A30_000F_3BE0
 * @implements 01F7:2A30:000F:3BE0 ()
 *
 * Called From: 01F7:2A30:000E:2327
 */
void f__01F7_2A30_000F_3BE0()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_testw(&emu_si, 0x100);
	if (!emu_flags.zf) { f__01F7_2A3F_0012_8656(); return; }
	f__01F7_2ABF_000C_828B(); return;
}

/**
 * Decompiled function f__01F7_2A3F_0012_8656()
 *
 * @name f__01F7_2A3F_0012_8656
 * @implements 01F7:2A3F:0012:8656 ()
 *
 * Called From: 01F7:2A3A:000F:3BE0
 */
void f__01F7_2A3F_0012_8656()
{
	emu_andw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x7986));
	emu_movw(&emu_ax.x, emu_di);
	emu_testw(&emu_ax.x, 0x180);
	if (!emu_flags.zf) { f__01F7_2A51_0014_49A6(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(0x2A51); emu_ip = 0x0675; emu_last_cs = 0x01F7; emu_last_ip = 0x2A4E; emu_last_length = 0x0012; emu_last_crc = 0x8656; emu_call(); // Jump does not resolve
	f__01F7_2A51_0014_49A6();
}

/**
 * Decompiled function f__01F7_2A51_0014_49A6()
 *
 * @name f__01F7_2A51_0014_49A6
 * @implements 01F7:2A51:0014:49A6 ()
 *
 * Called From: 01F7:2A48:0012:8656
 */
void f__01F7_2A51_0014_49A6()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	if (!emu_flags.zf) { f__01F7_2A7A_000C_071D(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7988), 0x2);
	if (emu_flags.zf) { f__01F7_2A68_000A_C918(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7988));
	emu_push(0x2A65); emu_ip = 0x0675; emu_last_cs = 0x01F7; emu_last_ip = 0x2A62; emu_last_length = 0x0014; emu_last_crc = 0x49A6; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_2A68_000A_C918()
 *
 * @name f__01F7_2A68_000A_C918
 * @implements 01F7:2A68:000A:C918 ()
 *
 * Called From: 01F7:2A5C:0014:49A6
 */
void f__01F7_2A68_000A_C918()
{
	emu_testw(&emu_di, 0x80);
	if (emu_flags.zf) { emu_ip = 0x2A72; emu_last_cs = 0x01F7; emu_last_ip = 0x2A6C; emu_last_length = 0x000A; emu_last_crc = 0xC918; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__01F7_2A75_0005_1104(); return;
}

/**
 * Decompiled function f__01F7_2A75_0005_1104()
 *
 * @name f__01F7_2A75_0005_1104
 * @implements 01F7:2A75:0005:1104 ()
 *
 * Called From: 01F7:2A70:000A:C918
 */
void f__01F7_2A75_0005_1104()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	f__01F7_2A86_0012_3FC9(); return;
}

/**
 * Decompiled function f__01F7_2A7A_000C_071D()
 *
 * @name f__01F7_2A7A_000C_071D
 * @implements 01F7:2A7A:000C:071D ()
 *
 * Called From: 01F7:2A55:0014:49A6
 */
void f__01F7_2A7A_000C_071D()
{
	emu_testw(&emu_si, 0x400);
	if (emu_flags.zf) { f__01F7_2ABF_000C_828B(); return; }
	emu_movw(&emu_ax.x, 0x50);
	emu_push(emu_ax.x);
	emu_ip = 0x2A62; emu_last_cs = 0x01F7; emu_last_ip = 0x2A84; emu_last_length = 0x000C; emu_last_crc = 0x071D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2A86_0012_3FC9()
 *
 * @name f__01F7_2A86_0012_3FC9
 * @implements 01F7:2A86:0012:3FC9 ()
 *
 * Called From: 01F7:2A78:0005:1104
 */
void f__01F7_2A86_0012_3FC9()
{
	emu_testw(&emu_si, 0xF0);
	if (emu_flags.zf) { f__01F7_2AAA_000C_D3DF(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(0x2A98); emu_ip = 0x29D9; emu_last_cs = 0x01F7; emu_last_ip = 0x2A95; emu_last_length = 0x0012; emu_last_crc = 0x3FC9; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_2AAA_000C_D3DF()
 *
 * @name f__01F7_2AAA_000C_D3DF
 * @implements 01F7:2AAA:000C:D3DF ()
 *
 * Called From: 01F7:2A8A:0012:3FC9
 */
void f__01F7_2AAA_000C_D3DF()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(0x2AB6); f__01F7_29D9_000E_EF8E();
	f__01F7_2AB6_0009_D631();
}

/**
 * Decompiled function f__01F7_2AB6_0009_D631()
 *
 * @name f__01F7_2AB6_0009_D631
 * @implements 01F7:2AB6:0009:D631 ()
 *
 * Called From: 01F7:2AB6:000C:D3DF
 */
void f__01F7_2AB6_0009_D631()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!(emu_flags.sf != emu_flags.of)) { f__01F7_2B3A_000F_BC5B(); return; }
	f__01F7_2B6D_0008_FBFA(); return;
}

/**
 * Decompiled function f__01F7_2ABF_000C_828B()
 *
 * @name f__01F7_2ABF_000C_828B
 * @implements 01F7:2ABF:000C:828B ()
 *
 * Called From: 01F7:2A3C:000F:3BE0
 * Called From: 01F7:2A7E:000C:071D
 */
void f__01F7_2ABF_000C_828B()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2ACB); f__01F7_2B75_002A_42F7();
	f__01F7_2ACB_0012_1608();
}

/**
 * Decompiled function f__01F7_2ACB_0012_1608()
 *
 * @name f__01F7_2ACB_0012_1608
 * @implements 01F7:2ACB:0012:1608 ()
 *
 * Called From: 01F7:2ACB:000C:828B
 */
void f__01F7_2ACB_0012_1608()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.sf != emu_flags.of)) { f__01F7_2B3A_000F_BC5B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x2ADD); f__01F7_207A_0014_A979();
	f__01F7_2ADD_0028_B168();
}

/**
 * Decompiled function f__01F7_2ADD_0028_B168()
 *
 * @name f__01F7_2ADD_0028_B168
 * @implements 01F7:2ADD:0028:B168 ()
 *
 * Called From: 01F7:2ADD:0012:1608
 */
void f__01F7_2ADD_0028_B168()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_testw(&emu_ax.x, 0x80);
	if (emu_flags.zf) { f__01F7_2B0A_000A_4CCE(); return; }
	emu_orw(&emu_si, 0x2000);
	emu_testw(&emu_si, 0x8000);
	if (emu_flags.zf) { emu_ip = 0x2B14; emu_last_cs = 0x01F7; emu_last_ip = 0x2AEF; emu_last_length = 0x0028; emu_last_crc = 0xB168; emu_call(); return; } // Jump does not resolve
	emu_andw(&emu_ax.x, 0xFF);
	emu_orw(&emu_ax.x, 0x20);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x2B05); emu_ip = 0x207A; emu_last_cs = 0x01F7; emu_last_ip = 0x2B02; emu_last_length = 0x0028; emu_last_crc = 0xB168; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_2B0A_000A_4CCE()
 *
 * @name f__01F7_2B0A_000A_4CCE
 * @implements 01F7:2B0A:000A:4CCE ()
 *
 * Called From: 01F7:2AE5:0028:B168
 */
void f__01F7_2B0A_000A_4CCE()
{
	emu_testw(&emu_si, 0x200);
	if (emu_flags.zf) { f__01F7_2B14_0023_9587(); return; }
	emu_push(emu_di);
	emu_push(0x2B14); f__01F7_29F4_000E_9D39();
	f__01F7_2B14_0023_9587();
}

/**
 * Decompiled function f__01F7_2B14_0023_9587()
 *
 * @name f__01F7_2B14_0023_9587
 * @implements 01F7:2B14:0023:9587 ()
 *
 * Called From: 01F7:2B0E:000A:4CCE
 * Called From: 01F7:2B14:000A:4CCE
 */
void f__01F7_2B14_0023_9587()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if (emu_flags.zf) { f__01F7_2B3A_000F_BC5B(); return; }
	emu_testw(&emu_si, 0x100);
	if (emu_flags.zf) { emu_ip = 0x2B3A; emu_last_cs = 0x01F7; emu_last_ip = 0x2B1F; emu_last_length = 0x0023; emu_last_crc = 0x9587; emu_call(); return; } // Jump does not resolve
	emu_testw(&emu_si, 0xF0);
	if (emu_flags.zf) { emu_ip = 0x2B3A; emu_last_cs = 0x01F7; emu_last_ip = 0x2B25; emu_last_length = 0x0023; emu_last_crc = 0x9587; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2B37); emu_ip = 0x22E8; emu_last_cs = 0x01F7; emu_last_ip = 0x2B34; emu_last_length = 0x0023; emu_last_crc = 0x9587; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_2B3A_000F_BC5B()
 *
 * @name f__01F7_2B3A_000F_BC5B
 * @implements 01F7:2B3A:000F:BC5B ()
 *
 * Called From: 01F7:2ABA:0009:D631
 * Called From: 01F7:2AD2:0012:1608
 * Called From: 01F7:2B19:0023:9587
 */
void f__01F7_2B3A_000F_BC5B()
{
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__01F7_2B6D_0008_FBFA(); return; }
	emu_testw(&emu_si, 0x300);
	if (emu_flags.zf) { f__01F7_2B49_0016_BF83(); return; }
	emu_movw(&emu_ax.x, 0x1000);
	f__01F7_2B4B_0014_AB43(); return;
}

/**
 * Decompiled function f__01F7_2B49_0016_BF83()
 *
 * @name f__01F7_2B49_0016_BF83
 * @implements 01F7:2B49:0016:BF83 ()
 *
 * Called From: 01F7:2B42:000F:BC5B
 */
void f__01F7_2B49_0016_BF83()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, emu_si);
	emu_andw(&emu_dx.x, 0xF8FF);
	emu_orw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if (emu_flags.zf) { f__01F7_2B5F_0016_DC77(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x2B62; emu_last_cs = 0x01F7; emu_last_ip = 0x2B5D; emu_last_length = 0x0016; emu_last_crc = 0xBF83; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2B4B_0014_AB43()
 *
 * @name f__01F7_2B4B_0014_AB43
 * @implements 01F7:2B4B:0014:AB43 ()
 *
 * Called From: 01F7:2B47:000F:BC5B
 */
void f__01F7_2B4B_0014_AB43()
{
	emu_movw(&emu_dx.x, emu_si);
	emu_andw(&emu_dx.x, 0xF8FF);
	emu_orw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if (emu_flags.zf) { f__01F7_2B5F_0016_DC77(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x2B62; emu_last_cs = 0x01F7; emu_last_ip = 0x2B5D; emu_last_length = 0x0014; emu_last_crc = 0xAB43; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2B5F_0016_DC77()
 *
 * @name f__01F7_2B5F_0016_DC77
 * @implements 01F7:2B5F:0016:DC77 ()
 *
 * Called From: 01F7:2B59:0014:AB43
 * Called From: 01F7:2B59:0016:BF83
 */
void f__01F7_2B5F_0016_DC77()
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
 * Decompiled function f__01F7_2B6D_0008_FBFA()
 *
 * @name f__01F7_2B6D_0008_FBFA
 * @implements 01F7:2B6D:0008:FBFA ()
 *
 * Called From: 01F7:2ABC:0009:D631
 * Called From: 01F7:2B3C:000F:BC5B
 */
void f__01F7_2B6D_0008_FBFA()
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
 * Decompiled function f__01F7_2B75_002A_42F7()
 *
 * @name f__01F7_2B75_002A_42F7
 * @implements 01F7:2B75:002A:42F7 ()
 *
 * Called From: 01F7:2AC8:000C:828B
 */
void f__01F7_2B75_002A_42F7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movb(&emu_ax.l, 0x1);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_testw(&emu_cx.x, 0x2);
	if (!emu_flags.zf) { f__01F7_2B90_000F_B44C(); return; }
	emu_movb(&emu_ax.l, 0x2);
	emu_testw(&emu_cx.x, 0x4);
	if (!emu_flags.zf) { emu_ip = 0x2B90; emu_last_cs = 0x01F7; emu_last_ip = 0x2B8C; emu_last_length = 0x002A; emu_last_crc = 0x42F7; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, 0x0);
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0xF0);
	emu_andb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_orb(&emu_ax.l, emu_cx.l);
	emu_movb(&emu_ax.h, 0x3D);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x2B9F); f__0070_0108_0005_1CF6();
	f__01F7_2B9F_001D_4462();
}

/**
 * Decompiled function f__01F7_2B90_000F_B44C()
 *
 * @name f__01F7_2B90_000F_B44C
 * @implements 01F7:2B90:000F:B44C ()
 *
 * Called From: 01F7:2B84:002A:42F7
 */
void f__01F7_2B90_000F_B44C()
{
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0xF0);
	emu_andb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_orb(&emu_ax.l, emu_cx.l);
	emu_movb(&emu_ax.h, 0x3D);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x2B9F); f__0070_0108_0005_1CF6();
	f__01F7_2B9F_001D_4462();
}

/**
 * Decompiled function f__01F7_2B9F_001D_4462()
 *
 * @name f__01F7_2B9F_001D_4462
 * @implements 01F7:2B9F:001D:4462 ()
 *
 * Called From: 01F7:2B9F:000F:B44C
 * Called From: 01F7:2B9F:002A:42F7
 */
void f__01F7_2B9F_001D_4462()
{
	emu_pop(&emu_ds);
	if (emu_flags.cf) { f__01F7_2BBC_0004_0120(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax.x, 0xB8FF);
	emu_orw(&emu_ax.x, 0x8000);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__01F7_2BC0_0004_0F7A(); return;
}

/**
 * Decompiled function f__01F7_2BBC_0004_0120()
 *
 * @name f__01F7_2BBC_0004_0120
 * @implements 01F7:2BBC:0004:0120 ()
 *
 * Called From: 01F7:2BA0:001D:4462
 */
void f__01F7_2BBC_0004_0120()
{
	emu_push(emu_ax.x);
	emu_push(0x2BC0); f__01F7_0675_0020_2791();
	f__01F7_2BC0_0004_0F7A();
}

/**
 * Decompiled function f__01F7_2BC0_0004_0F7A()
 *
 * @name f__01F7_2BC0_0004_0F7A
 * @implements 01F7:2BC0:0004:0F7A ()
 *
 * Called From: 01F7:2BBA:001D:4462
 * Called From: 01F7:2BC0:0004:0120
 */
void f__01F7_2BC0_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2BC4_0019_6EF0()
 *
 * @name f__01F7_2BC4_0019_6EF0
 * @implements 01F7:2BC4:0019:6EF0 ()
 *
 * Called From: B480:0024:0011:FD5C
 * Called From: B480:02E8:0008:7986
 */
void f__01F7_2BC4_0019_6EF0()
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
	emu_push(0x2BDD); f__01F7_111F_001A_F966();
	f__01F7_2BDD_0002_00E2();
}

/**
 * Decompiled function f__01F7_2BDD_0002_00E2()
 *
 * @name f__01F7_2BDD_0002_00E2
 * @implements 01F7:2BDD:0002:00E2 ()
 *
 * Called From: 01F7:2BDD:0019:6EF0
 */
void f__01F7_2BDD_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_2DA4_001B_54CC()
 *
 * @name f__01F7_2DA4_001B_54CC
 * @implements 01F7:2DA4:001B:54CC ()
 *
 * Called From: 01F7:1166:001A:59E8
 */
void f__01F7_2DA4_001B_54CC()
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
	if (emu_flags.zf) { f__01F7_2DEB_000E_C942(); return; }
	emu_ip = 0x2DE1; emu_last_cs = 0x01F7; emu_last_ip = 0x2DBD; emu_last_length = 0x001B; emu_last_crc = 0x54CC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2DEB_000E_C942()
 *
 * @name f__01F7_2DEB_000E_C942
 * @implements 01F7:2DEB:000E:C942 ()
 *
 * Called From: 01F7:2DBB:001B:54CC
 */
void f__01F7_2DEB_000E_C942()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x40);
	if (!emu_flags.zf) { emu_ip = 0x2DF9; emu_last_cs = 0x01F7; emu_last_ip = 0x2DF4; emu_last_length = 0x000E; emu_last_crc = 0xC942; emu_call(); return; } // Jump does not resolve
	f__01F7_2F21_000C_57FC(); return;
}

/**
 * Decompiled function f__01F7_2F21_000C_57FC()
 *
 * @name f__01F7_2F21_000C_57FC
 * @implements 01F7:2F21:000C:57FC ()
 *
 * Called From: 01F7:2DF6:000E:C942
 */
void f__01F7_2F21_000C_57FC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	if (emu_flags.zf) { f__01F7_2F7D_0015_592A(); return; }
	emu_ip = 0x2F74; emu_last_cs = 0x01F7; emu_last_ip = 0x2F2B; emu_last_length = 0x000C; emu_last_crc = 0x57FC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2F7D_0015_592A()
 *
 * @name f__01F7_2F7D_0015_592A
 * @implements 01F7:2F7D:0015:592A ()
 *
 * Called From: 01F7:2F29:000C:57FC
 */
void f__01F7_2F7D_0015_592A()
{
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x2F92); f__01F7_42F4_0019_E682();
	f__01F7_2F92_000A_A947();
}

/**
 * Decompiled function f__01F7_2F92_000A_A947()
 *
 * @name f__01F7_2F92_000A_A947
 * @implements 01F7:2F92:000A:A947 ()
 *
 * Called From: 01F7:2F92:0015:592A
 */
void f__01F7_2F92_000A_A947()
{
	emu_addws(&emu_sp, 0x8);
	emu_cmpw(&emu_ax.x, emu_di);
	if (emu_flags.zf) { f__01F7_2F9C_000B_F18C(); return; }
	emu_ip = 0x2DDC; emu_last_cs = 0x01F7; emu_last_ip = 0x2F99; emu_last_length = 0x000A; emu_last_crc = 0xA947; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2F9C_000B_F18C()
 *
 * @name f__01F7_2F9C_000B_F18C
 * @implements 01F7:2F9C:000B:F18C ()
 *
 * Called From: 01F7:2F97:000A:A947
 */
void f__01F7_2F9C_000B_F18C()
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
 * Decompiled function f__01F7_2FA7_002E_66F6()
 *
 * @name f__01F7_2FA7_002E_66F6
 * @implements 01F7:2FA7:002E:66F6 ()
 *
 * Called From: 01F7:301F:0003:04AA
 * Called From: 01F7:306F:0016:86F2
 * Called From: 01F7:30BA:0003:0514
 */
void f__01F7_2FA7_002E_66F6()
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
	if (!emu_flags.cf) { emu_ip = 0x2FC5; emu_last_cs = 0x01F7; emu_last_ip = 0x2FBA; emu_last_length = 0x002E; emu_last_crc = 0x66F6; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_movsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x1), emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x2FCE; emu_last_cs = 0x01F7; emu_last_ip = 0x2FC3; emu_last_length = 0x002E; emu_last_crc = 0x66F6; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_di,  0x0));
	emu_movsw(emu_ds);
	emu_movw(&emu_get_memory16(emu_ds, emu_si, -0x2), emu_ax.x);
	if (--emu_cx.x != 0) { f__01F7_2FC5_0010_0B1E(); return; }
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
 * Decompiled function f__01F7_2FC5_0010_0B1E()
 *
 * @name f__01F7_2FC5_0010_0B1E
 * @implements 01F7:2FC5:0010:0B1E ()
 *
 * Called From: 01F7:2FCC:002E:66F6
 * Called From: 01F7:2FCC:0010:0B1E
 */
void f__01F7_2FC5_0010_0B1E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_di,  0x0));
	emu_movsw(emu_ds);
	emu_movw(&emu_get_memory16(emu_ds, emu_si, -0x2), emu_ax.x);
	if (--emu_cx.x != 0) { f__01F7_2FC5_0010_0B1E(); return; }
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
 * Decompiled function f__01F7_2FD5_0018_0C3D()
 *
 * @name f__01F7_2FD5_0018_0C3D
 * @implements 01F7:2FD5:0018:0C3D ()
 *
 * Called From: 01F7:327E:0026:41F1
 */
void f__01F7_2FD5_0018_0C3D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x14);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_cmpws(&emu_si, 0x2);
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_3025_0037_F0ED(); return; }
	emu_cmpws(&emu_si, 0x2);
	if (emu_flags.zf) { f__01F7_2FED_001C_0D8F(); return; }
	emu_ip = 0x3253; emu_last_cs = 0x01F7; emu_last_ip = 0x2FEA; emu_last_length = 0x0018; emu_last_crc = 0x0C3D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_2FED_001C_0D8F()
 *
 * @name f__01F7_2FED_001C_0D8F
 * @implements 01F7:2FED:001C:0D8F ()
 *
 * Called From: 01F7:2FE8:0018:0C3D
 */
void f__01F7_2FED_001C_0D8F()
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
			emu_last_cs = 0x01F7; emu_last_ip = 0x3005; emu_last_length = 0x001C; emu_last_crc = 0x0D8F;
			emu_call();
			return;
	}
	f__01F7_3009_000A_B01F();
}

/**
 * Decompiled function f__01F7_3009_000A_B01F()
 *
 * @name f__01F7_3009_000A_B01F
 * @implements 01F7:3009:000A:B01F ()
 *
 * Called From: 01F7:3009:001C:0D8F
 */
void f__01F7_3009_000A_B01F()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x3013; emu_last_cs = 0x01F7; emu_last_ip = 0x300E; emu_last_length = 0x000A; emu_last_crc = 0xB01F; emu_call(); return; } // Jump does not resolve
	f__01F7_3253_0008_4DB8(); return;
}

/**
 * Decompiled function f__01F7_301F_0003_04AA()
 *
 * @name f__01F7_301F_0003_04AA
 * @implements 01F7:301F:0003:04AA ()
 *
 * Called From: 01F7:30CE:0014:9909
 */
void f__01F7_301F_0003_04AA()
{
	emu_push(0x3022); f__01F7_2FA7_002E_66F6();
	f__01F7_3022_0003_07F4();
}

/**
 * Decompiled function f__01F7_3022_0003_07F4()
 *
 * @name f__01F7_3022_0003_07F4
 * @implements 01F7:3022:0003:07F4 ()
 *
 * Called From: 01F7:3022:0003:04AA
 */
void f__01F7_3022_0003_07F4()
{
	f__01F7_3253_0008_4DB8(); return;
}

/**
 * Decompiled function f__01F7_3025_0037_F0ED()
 *
 * @name f__01F7_3025_0037_F0ED
 * @implements 01F7:3025:0037:F0ED ()
 *
 * Called From: 01F7:2FE3:0018:0C3D
 */
void f__01F7_3025_0037_F0ED()
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
			emu_last_cs = 0x01F7; emu_last_ip = 0x3058; emu_last_length = 0x0037; emu_last_crc = 0xF0ED;
			emu_call();
			return;
	}
	f__01F7_305C_0016_86F2();
}

/**
 * Decompiled function f__01F7_305C_0016_86F2()
 *
 * @name f__01F7_305C_0016_86F2
 * @implements 01F7:305C:0016:86F2 ()
 *
 * Called From: 01F7:305C:0037:F0ED
 */
void f__01F7_305C_0016_86F2()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x3072; emu_last_cs = 0x01F7; emu_last_ip = 0x3061; emu_last_length = 0x0016; emu_last_crc = 0x86F2; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(0x3072); f__01F7_2FA7_002E_66F6();
	f__01F7_3072_0010_2E11();
}

/**
 * Decompiled function f__01F7_3072_0010_2E11()
 *
 * @name f__01F7_3072_0010_2E11
 * @implements 01F7:3072:0010:2E11 ()
 *
 * Called From: 01F7:3072:0016:86F2
 */
void f__01F7_3072_0010_2E11()
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
			emu_last_cs = 0x01F7; emu_last_ip = 0x307E; emu_last_length = 0x0010; emu_last_crc = 0x2E11;
			emu_call();
			return;
	}
	f__01F7_3082_0015_F8D6();
}

/**
 * Decompiled function f__01F7_3082_0015_F8D6()
 *
 * @name f__01F7_3082_0015_F8D6
 * @implements 01F7:3082:0015:F8D6 ()
 *
 * Called From: 01F7:3082:0010:2E11
 */
void f__01F7_3082_0015_F8D6()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x3097; emu_last_cs = 0x01F7; emu_last_ip = 0x3087; emu_last_length = 0x0015; emu_last_crc = 0xF8D6; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__01F7_30BA_0003_0514(); return;
}

/**
 * Decompiled function f__01F7_30BA_0003_0514()
 *
 * @name f__01F7_30BA_0003_0514
 * @implements 01F7:30BA:0003:0514 ()
 *
 * Called From: 01F7:3095:0015:F8D6
 */
void f__01F7_30BA_0003_0514()
{
	emu_push(0x30BD); f__01F7_2FA7_002E_66F6();
	f__01F7_30BD_0014_9909();
}

/**
 * Decompiled function f__01F7_30BD_0014_9909()
 *
 * @name f__01F7_30BD_0014_9909
 * @implements 01F7:30BD:0014:9909 ()
 *
 * Called From: 01F7:30BD:0003:0514
 */
void f__01F7_30BD_0014_9909()
{
	emu_cmpws(&emu_si, 0x3);
	if (!emu_flags.zf) { emu_ip = 0x30D1; emu_last_cs = 0x01F7; emu_last_ip = 0x30C0; emu_last_length = 0x0014; emu_last_crc = 0x9909; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__01F7_301F_0003_04AA(); return;
}

/**
 * Decompiled function f__01F7_3253_0008_4DB8()
 *
 * @name f__01F7_3253_0008_4DB8
 * @implements 01F7:3253:0008:4DB8 ()
 *
 * Called From: 01F7:3010:000A:B01F
 * Called From: 01F7:3022:0003:07F4
 */
void f__01F7_3253_0008_4DB8()
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
 * Decompiled function f__01F7_325B_0026_41F1()
 *
 * @name f__01F7_325B_0026_41F1
 * @implements 01F7:325B:0026:41F1 ()
 *
 * Called From: B495:19A2:001A:1453
 */
void f__01F7_325B_0026_41F1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x6524), emu_ax.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x3281; emu_last_cs = 0x01F7; emu_last_ip = 0x3266; emu_last_length = 0x0026; emu_last_crc = 0x41F1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x6520), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x6522), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(0x3281); f__01F7_2FD5_0018_0C3D();
	f__01F7_3281_0002_00E2();
}

/**
 * Decompiled function f__01F7_3281_0002_00E2()
 *
 * @name f__01F7_3281_0002_00E2
 * @implements 01F7:3281:0002:00E2 ()
 *
 * Called From: 01F7:3281:0026:41F1
 */
void f__01F7_3281_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3283_0018_3355()
 *
 * @name f__01F7_3283_0018_3355
 * @implements 01F7:3283:0018:3355 ()
 *
 * Called From: 01F7:3354:0003:0606
 */
void f__01F7_3283_0018_3355()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x795A));
	if (emu_flags.cf) { f__01F7_329E_001B_E1A2(); return; }
	emu_movw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_push(0x329B); emu_ip = 0x0675; emu_last_cs = 0x01F7; emu_last_ip = 0x3298; emu_last_length = 0x0018; emu_last_crc = 0x3355; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_329E_001B_E1A2()
 *
 * @name f__01F7_329E_001B_E1A2
 * @implements 01F7:329E:001B:E1A2 ()
 *
 * Called From: 01F7:3292:0018:3355
 */
void f__01F7_329E_001B_E1A2()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_incw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.cf) { emu_ip = 0x32B4; emu_last_cs = 0x01F7; emu_last_ip = 0x32A5; emu_last_length = 0x001B; emu_last_crc = 0xE1A2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x200);
	if (emu_flags.zf) { f__01F7_32B9_0011_4137(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x334E; emu_last_cs = 0x01F7; emu_last_ip = 0x32B6; emu_last_length = 0x001B; emu_last_crc = 0xE1A2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_32B9_0011_4137()
 *
 * @name f__01F7_32B9_0011_4137
 * @implements 01F7:32B9:0011:4137 ()
 *
 * Called From: 01F7:32B2:001B:E1A2
 */
void f__01F7_32B9_0011_4137()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x32CA); f__01F7_080B_0016_F7E3();
	f__01F7_32CA_001E_89F7();
}

/**
 * Decompiled function f__01F7_32CA_001E_89F7()
 *
 * @name f__01F7_32CA_001E_89F7
 * @implements 01F7:32CA:001E:89F7 ()
 *
 * Called From: 01F7:32CA:0011:4137
 */
void f__01F7_32CA_001E_89F7()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_incw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.cf) { emu_ip = 0x32E3; emu_last_cs = 0x01F7; emu_last_ip = 0x32D4; emu_last_length = 0x001E; emu_last_crc = 0x89F7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x4000);
	if (!emu_flags.zf) { emu_ip = 0x32E8; emu_last_cs = 0x01F7; emu_last_ip = 0x32E1; emu_last_length = 0x001E; emu_last_crc = 0x89F7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__01F7_334E_0006_137A(); return;
}

/**
 * Decompiled function f__01F7_334E_0006_137A()
 *
 * @name f__01F7_334E_0006_137A
 * @implements 01F7:334E:0006:137A ()
 *
 * Called From: 01F7:32E6:001E:89F7
 */
void f__01F7_334E_0006_137A()
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
 * Decompiled function f__01F7_3354_0003_0606()
 *
 * @name f__01F7_3354_0003_0606
 * @implements 01F7:3354:0003:0606 ()
 *
 * Called From: 1FB5:00DB:001B:F75E
 * Called From: 24E6:00A1:0010:FC7C
 */
void f__01F7_3354_0003_0606()
{
	f__01F7_3283_0018_3355(); return;
}

/**
 * Decompiled function f__01F7_3357_0028_18B7()
 *
 * @name f__01F7_3357_0028_18B7
 * @implements 01F7:3357:0028:18B7 ()
 *
 * Called From: 01F7:0FBC:0011:EAE5
 * Called From: 01F7:0FF8:0011:FDF5
 */
void f__01F7_3357_0028_18B7()
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
	if (!emu_flags.zf) { emu_ip = 0x3379; emu_last_cs = 0x01F7; emu_last_ip = 0x336C; emu_last_length = 0x0028; emu_last_crc = 0x18B7; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_di, 0x2);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x3379; emu_last_cs = 0x01F7; emu_last_ip = 0x3371; emu_last_length = 0x0028; emu_last_crc = 0x18B7; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, 0x7FFF);
	if ((emu_flags.cf || emu_flags.zf)) { f__01F7_337F_0016_B6F9(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x3470; emu_last_cs = 0x01F7; emu_last_ip = 0x337C; emu_last_length = 0x0028; emu_last_crc = 0x18B7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_337F_0016_B6F9()
 *
 * @name f__01F7_337F_0016_B6F9
 * @implements 01F7:337F:0016:B6F9 ()
 *
 * Called From: 01F7:3377:0028:18B7
 */
void f__01F7_337F_0016_B6F9()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7B1E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x3395; emu_last_cs = 0x01F7; emu_last_ip = 0x3384; emu_last_length = 0x0016; emu_last_crc = 0xB6F9; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x77DE);
	if (!emu_flags.zf) { f__01F7_3395_0030_8CD1(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B1E), 0x1);
	f__01F7_33A9_001C_F776(); return;
}

/**
 * Decompiled function f__01F7_3395_0030_8CD1()
 *
 * @name f__01F7_3395_0030_8CD1
 * @implements 01F7:3395:0030:8CD1 ()
 *
 * Called From: 01F7:338B:0016:B6F9
 */
void f__01F7_3395_0030_8CD1()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x7B1C), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x33A9; emu_last_cs = 0x01F7; emu_last_ip = 0x339A; emu_last_length = 0x0030; emu_last_crc = 0x8CD1; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x77CA);
	if (!emu_flags.zf) { emu_ip = 0x33A9; emu_last_cs = 0x01F7; emu_last_ip = 0x33A1; emu_last_length = 0x0030; emu_last_crc = 0x8CD1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7B1C), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__01F7_33C8_0018_1C5B(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_bx.x);
	emu_push(emu_cs);
	emu_push(0x33C5); emu_ip = 0x260F; emu_last_cs = 0x01F7; emu_last_ip = 0x33C2; emu_last_length = 0x0030; emu_last_crc = 0x8CD1; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_33A9_001C_F776()
 *
 * @name f__01F7_33A9_001C_F776
 * @implements 01F7:33A9:001C:F776 ()
 *
 * Called From: 01F7:3393:0016:B6F9
 */
void f__01F7_33A9_001C_F776()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__01F7_33C8_0018_1C5B(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_bx.x);
	emu_push(emu_cs);
	emu_push(0x33C5); emu_ip = 0x260F; emu_last_cs = 0x01F7; emu_last_ip = 0x33C2; emu_last_length = 0x001C; emu_last_crc = 0xF776; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_33C8_0018_1C5B()
 *
 * @name f__01F7_33C8_0018_1C5B
 * @implements 01F7:33C8:0018:1C5B ()
 *
 * Called From: 01F7:33B0:001C:F776
 * Called From: 01F7:33B0:0030:8CD1
 */
void f__01F7_33C8_0018_1C5B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x4);
	if (emu_flags.zf) { f__01F7_33E2_004A_07CB(); return; }
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_push(emu_cs);
	emu_push(0x33E0); emu_ip = 0x1741; emu_last_cs = 0x01F7; emu_last_ip = 0x33DD; emu_last_length = 0x0018; emu_last_crc = 0x1C5B; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_33E2_004A_07CB()
 *
 * @name f__01F7_33E2_004A_07CB
 * @implements 01F7:33E2:004A:07CB ()
 *
 * Called From: 01F7:33D1:0018:1C5B
 */
void f__01F7_33E2_004A_07CB()
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
	if (emu_flags.zf) { f__01F7_346E_0006_1322(); return; }
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x346E; emu_last_cs = 0x01F7; emu_last_ip = 0x3410; emu_last_length = 0x004A; emu_last_crc = 0x07CB; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x77C0), 0x1F7);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x77BE), 0x4484);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { emu_ip = 0x3447; emu_last_cs = 0x01F7; emu_last_ip = 0x3424; emu_last_length = 0x004A; emu_last_crc = 0x07CB; emu_call(); return; } // Jump does not resolve
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x342C); f__01F7_184B_000A_958E();
	f__01F7_342C_000E_FFDA();
}

/**
 * Decompiled function f__01F7_342C_000E_FFDA()
 *
 * @name f__01F7_342C_000E_FFDA
 * @implements 01F7:342C:000E:FFDA ()
 *
 * Called From: 01F7:342C:004A:07CB
 */
void f__01F7_342C_000E_FFDA()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__01F7_343A_000A_9389(); return; }
	emu_ip = 0x3379; emu_last_cs = 0x01F7; emu_last_ip = 0x3437; emu_last_length = 0x000E; emu_last_crc = 0xFFDA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_343A_000A_9389()
 *
 * @name f__01F7_343A_000A_9389
 * @implements 01F7:343A:000A:9389 ()
 *
 * Called From: 01F7:3435:000E:FFDA
 */
void f__01F7_343A_000A_9389()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x4);
	f__01F7_3447_002D_BC6D(); return;
}

/**
 * Decompiled function f__01F7_3447_002D_BC6D()
 *
 * @name f__01F7_3447_002D_BC6D
 * @implements 01F7:3447:002D:BC6D ()
 *
 * Called From: 01F7:3442:000A:9389
 */
void f__01F7_3447_002D_BC6D()
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
	if (!emu_flags.zf) { emu_ip = 0x346E; emu_last_cs = 0x01F7; emu_last_ip = 0x3467; emu_last_length = 0x002D; emu_last_crc = 0xBC6D; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_346E_0006_1322()
 *
 * @name f__01F7_346E_0006_1322
 * @implements 01F7:346E:0006:1322 ()
 *
 * Called From: 01F7:340C:004A:07CB
 */
void f__01F7_346E_0006_1322()
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
 * Decompiled function f__01F7_374D_001D_4334()
 *
 * @name f__01F7_374D_001D_4334
 * @implements 01F7:374D:001D:4334 ()
 *
 * Called From: 01F7:1166:001A:59E8
 */
void f__01F7_374D_001D_4334()
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
	emu_push(0x376A); f__01F7_28B8_0024_D407();
	f__01F7_376A_0023_8B4B();
}

/**
 * Decompiled function f__01F7_376A_0023_8B4B()
 *
 * @name f__01F7_376A_0023_8B4B
 * @implements 01F7:376A:0023:8B4B ()
 *
 * Called From: 01F7:376A:001D:4334
 */
void f__01F7_376A_0023_8B4B()
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
 * Decompiled function f__01F7_378D_0020_4A95()
 *
 * @name f__01F7_378D_0020_4A95
 * @implements 01F7:378D:0020:4A95 ()
 *
 * Called From: 0972:0612:0012:F1C2
 * Called From: 0AEC:06FD:000D:F07B
 * Called From: 0C3A:1B2E:000D:F07B
 * Called From: 10E4:082D:001B:1864
 * Called From: 10E4:0842:0015:9051
 * Called From: 1A34:285B:0018:08D3
 * Called From: 1A34:2924:000C:A5F1
 * Called From: B480:039A:009A:C356
 * Called From: B4B5:0047:0038:FB9F
 * Called From: B4B8:0A95:002B:483D
 * Called From: B4B8:22A8:0018:F006
 * Called From: B4DA:0027:002C:ACE1
 * Called From: B4E0:0465:0036:25C9
 * Called From: B4E0:0771:004D:063C
 * Called From: B4ED:0345:001A:021B
 * Called From: B4ED:0345:003E:A015
 * Called From: B4FC:0013:0018:2772
 * Called From: B4FC:0439:001D:9716
 * Called From: B503:05AB:0013:7600
 * Called From: B503:05EF:0013:654F
 * Called From: B503:096E:001E:C1B9
 * Called From: B503:0CC8:001A:B050
 * Called From: B503:0D70:0024:D7AC
 * Called From: B503:0E1D:0011:873A
 * Called From: B503:111D:0031:6DD1
 * Called From: B511:0D90:0022:6A96
 * Called From: B511:0D90:0023:685E
 * Called From: B511:12E7:002A:A3C3
 * Called From: B518:0CBC:000D:F07B
 */
void f__01F7_378D_0020_4A95()
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
	emu_push(0x37AD); f__01F7_111F_001A_F966();
	f__01F7_37AD_0002_00E2();
}

/**
 * Decompiled function f__01F7_37AD_0002_00E2()
 *
 * @name f__01F7_37AD_0002_00E2
 * @implements 01F7:37AD:0002:00E2 ()
 *
 * Called From: 01F7:37AD:0020:4A95
 */
void f__01F7_37AD_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_37AF_001F_B961()
 *
 * @name f__01F7_37AF_001F_B961
 * @implements 01F7:37AF:001F:B961 ()
 *
 * Called From: 10E4:0297:0029:4307
 * Called From: 10E4:09D7:0031:9946
 * Called From: 10E4:2030:0027:4CFD
 * Called From: 10E4:2030:002F:1BD7
 */
void f__01F7_37AF_001F_B961()
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
	emu_push(0x37CE); f__01F7_111F_001A_F966();
	f__01F7_37CE_0002_00E2();
}

/**
 * Decompiled function f__01F7_37CE_0002_00E2()
 *
 * @name f__01F7_37CE_0002_00E2
 * @implements 01F7:37CE:0002:00E2 ()
 *
 * Called From: 01F7:37CE:001F:B961
 */
void f__01F7_37CE_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_37D0_0021_3A90()
 *
 * @name f__01F7_37D0_0021_3A90
 * @implements 01F7:37D0:0021:3A90 ()
 *
 * Called From: 01F7:0886:001E:2872
 * Called From: 01F7:0D78:0022:0E82
 * Called From: 01F7:0D78:000C:8A27
 * Called From: 01F7:0E6C:0011:8B84
 * Called From: 01F7:0E6C:001B:14AB
 */
void f__01F7_37D0_0021_3A90()
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
	if (!emu_flags.zf) { f__01F7_37F1_0007_6102(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	f__01F7_37F5_0003_0202(); return;
}

/**
 * Decompiled function f__01F7_37F1_0007_6102()
 *
 * @name f__01F7_37F1_0007_6102
 * @implements 01F7:37F1:0007:6102 ()
 *
 * Called From: 01F7:37EA:0021:3A90
 */
void f__01F7_37F1_0007_6102()
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
 * Decompiled function f__01F7_37F5_0003_0202()
 *
 * @name f__01F7_37F5_0003_0202
 * @implements 01F7:37F5:0003:0202 ()
 *
 * Called From: 01F7:37EF:0021:3A90
 */
void f__01F7_37F5_0003_0202()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__01F7_37F8_000B_BD3B()
 *
 * @name f__01F7_37F8_000B_BD3B
 * @implements 01F7:37F8:000B:BD3B ()
 *
 * Called From: 01F7:0EB2:000A:7AAF
 */
void f__01F7_37F8_000B_BD3B()
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
 * Decompiled function f__01F7_3803_001E_4ADA()
 *
 * @name f__01F7_3803_001E_4ADA
 * @implements 01F7:3803:001E:4ADA ()
 *
 * Called From: B4DA:1240:0018:B720
 * Called From: B503:0655:0033:19AB
 * Called From: B503:09B3:001C:137E
 * Called From: B503:0E62:001C:137E
 * Called From: B503:126C:0017:FF3A
 */
void f__01F7_3803_001E_4ADA()
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
	emu_push(0x3821); f__01F7_083A_0014_BD8F();
	f__01F7_3821_0005_1C42();
}

/**
 * Decompiled function f__01F7_3821_0005_1C42()
 *
 * @name f__01F7_3821_0005_1C42
 * @implements 01F7:3821:0005:1C42 ()
 *
 * Called From: 01F7:3821:001E:4ADA
 */
void f__01F7_3821_0005_1C42()
{
	emu_addws(&emu_sp, 0x10);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_384A_003F_A636()
 *
 * @name f__01F7_384A_003F_A636
 * @implements 01F7:384A:003F:A636 ()
 *
 * Called From: 0642:0794:0017:5463
 * Called From: 0642:07AD:0019:C7FE
 * Called From: 1A34:293A:000F:BC44
 * Called From: 1DB6:0158:0010:7721
 * Called From: B518:1313:0012:DFD8
 * Called From: B518:138B:0020:5A3E
 * Called From: B518:139D:0012:3FD9
 * Called From: B518:13C1:000D:FC73
 */
void f__01F7_384A_003F_A636()
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
	if (emu_flags.zf) { f__01F7_387A_000F_C4C6(); return; }
	emu_movsb(emu_ds);
	emu_decw(&emu_cx.x);
	emu_shrw(&emu_cx.x, 0x1);
	emu_rep_movsw(emu_ds);
	if (!emu_flags.cf) { f__01F7_3881_0008_E082(); return; }
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
 * Decompiled function f__01F7_387A_000F_C4C6()
 *
 * @name f__01F7_387A_000F_C4C6
 * @implements 01F7:387A:000F:C4C6 ()
 *
 * Called From: 01F7:3876:003F:A636
 */
void f__01F7_387A_000F_C4C6()
{
	emu_shrw(&emu_cx.x, 0x1);
	emu_rep_movsw(emu_ds);
	if (!emu_flags.cf) { f__01F7_3881_0008_E082(); return; }
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
 * Decompiled function f__01F7_3881_0008_E082()
 *
 * @name f__01F7_3881_0008_E082
 * @implements 01F7:3881:0008:E082 ()
 *
 * Called From: 01F7:387E:000F:C4C6
 * Called From: 01F7:387E:003F:A636
 */
void f__01F7_3881_0008_E082()
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
 * Decompiled function f__01F7_3889_0033_9299()
 *
 * @name f__01F7_3889_0033_9299
 * @implements 01F7:3889:0033:9299 ()
 *
 * Called From: B4B8:0AA7:0012:A595
 * Called From: B4FC:047D:000F:FE86
 * Called From: B4FC:047D:002B:EA6D
 * Called From: B4FC:04EF:0025:F010
 * Called From: B4FC:058D:0013:F9F1
 * Called From: B4FC:058D:0017:DDD1
 * Called From: B4FC:061D:001E:E2DA
 * Called From: B4FC:0635:0018:8FF7
 * Called From: B4FC:065B:0012:7D1F
 * Called From: B4FC:06FC:000F:7E9F
 * Called From: B4FC:0777:0015:7BB9
 * Called From: B518:0CD4:0018:04A0
 */
void f__01F7_3889_0033_9299()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_cld();
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_bx.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_testw(&emu_si, 0x1);
	if (emu_flags.zf) { f__01F7_38A4_0018_E74B(); return; }
	emu_lodsb(emu_ds);
	emu_cmpb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { f__01F7_38BC_000A_02A2(); return; }
	emu_andb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x38B5; emu_last_cs = 0x01F7; emu_last_ip = 0x38A2; emu_last_length = 0x0033; emu_last_crc = 0x9299; emu_call(); return; } // Jump does not resolve
	emu_lodsw(emu_ds);
	emu_cmpb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { f__01F7_38BD_0009_1AA3(); return; }
	emu_andb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x38B5; emu_last_cs = 0x01F7; emu_last_ip = 0x38AB; emu_last_length = 0x0033; emu_last_crc = 0x9299; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.h, emu_bx.l);
	if (emu_flags.zf) { f__01F7_38BC_000A_02A2(); return; }
	emu_andb(&emu_ax.h, emu_ax.h);
	if (!emu_flags.zf) { f__01F7_38A4_0018_E74B(); return; }
	emu_pop(&emu_ds);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x38C3; emu_last_cs = 0x01F7; emu_last_ip = 0x38BA; emu_last_length = 0x0033; emu_last_crc = 0x9299; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_38A4_0018_E74B()
 *
 * @name f__01F7_38A4_0018_E74B
 * @implements 01F7:38A4:0018:E74B ()
 *
 * Called From: 01F7:3899:0033:9299
 * Called From: 01F7:38B3:0018:E74B
 * Called From: 01F7:38B3:0033:9299
 */
void f__01F7_38A4_0018_E74B()
{
	emu_lodsw(emu_ds);
	emu_cmpb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { f__01F7_38BD_0009_1AA3(); return; }
	emu_andb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__01F7_38B5_0007_1F92(); return; }
	emu_cmpb(&emu_ax.h, emu_bx.l);
	if (emu_flags.zf) { f__01F7_38BC_000A_02A2(); return; }
	emu_andb(&emu_ax.h, emu_ax.h);
	if (!emu_flags.zf) { f__01F7_38A4_0018_E74B(); return; }
	emu_pop(&emu_ds);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__01F7_38C3_0003_0212(); return;
}

/**
 * Decompiled function f__01F7_38B5_0007_1F92()
 *
 * @name f__01F7_38B5_0007_1F92
 * @implements 01F7:38B5:0007:1F92 ()
 *
 * Called From: 01F7:38AB:0018:E74B
 */
void f__01F7_38B5_0007_1F92()
{
	emu_pop(&emu_ds);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__01F7_38C3_0003_0212(); return;
}

/**
 * Decompiled function f__01F7_38BC_000A_02A2()
 *
 * @name f__01F7_38BC_000A_02A2
 * @implements 01F7:38BC:000A:02A2 ()
 *
 * Called From: 01F7:389E:0033:9299
 * Called From: 01F7:38AF:0018:E74B
 * Called From: 01F7:38AF:0033:9299
 */
void f__01F7_38BC_000A_02A2()
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
 * Decompiled function f__01F7_38BD_0009_1AA3()
 *
 * @name f__01F7_38BD_0009_1AA3
 * @implements 01F7:38BD:0009:1AA3 ()
 *
 * Called From: 01F7:38A7:0018:E74B
 * Called From: 01F7:38A7:0033:9299
 */
void f__01F7_38BD_0009_1AA3()
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
 * Decompiled function f__01F7_38C3_0003_0212()
 *
 * @name f__01F7_38C3_0003_0212
 * @implements 01F7:38C3:0003:0212 ()
 *
 * Called From: 01F7:38BA:0007:1F92
 * Called From: 01F7:38BA:0018:E74B
 */
void f__01F7_38C3_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_38C6_0030_9B78()
 *
 * @name f__01F7_38C6_0030_9B78
 * @implements 01F7:38C6:0030:9B78 ()
 *
 * Called From: B4DA:1577:0012:52B5
 */
void f__01F7_38C6_0030_9B78()
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
 * Decompiled function f__01F7_38F6_0029_5C00()
 *
 * @name f__01F7_38F6_0029_5C00
 * @implements 01F7:38F6:0029:5C00 ()
 *
 * Called From: 01F7:27EC:0010:604B
 * Called From: 01F7:40FD:0024:4526
 * Called From: 01F7:4112:0015:750E
 * Called From: 10E4:0A75:001F:931D
 * Called From: 10E4:0BC3:000F:3D0D
 * Called From: 10E4:0BED:0012:EFD0
 * Called From: 10E4:0BED:0014:EAE0
 * Called From: 10E4:0CAF:001F:0D51
 * Called From: 10E4:0CCD:001E:A29B
 * Called From: 1DB6:011D:0012:8307
 * Called From: B4E0:0480:000E:C225
 * Called From: B518:0CF2:0013:332D
 * Called From: B518:1301:0010:C761
 * Called From: B52A:02D5:0063:662B
 * Called From: B536:077E:0011:E8E5
 */
void f__01F7_38F6_0029_5C00()
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
 * Decompiled function f__01F7_3964_0041_A550()
 *
 * @name f__01F7_3964_0041_A550
 * @implements 01F7:3964:0041:A550 ()
 *
 * Called From: 10E4:0A56:0015:262A
 * Called From: 10E4:0C5E:000F:343F
 * Called From: 10E4:0C77:000F:3425
 * Called From: 10E4:0C90:000F:342B
 * Called From: 1381:0033:0023:2101
 * Called From: 1381:0078:001C:E8EE
 * Called From: 1FB5:1B04:0011:51AC
 * Called From: B530:002E:0023:6CE7
 * Called From: B533:002E:0023:3197
 */
void f__01F7_3964_0041_A550()
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
	if (emu_flags.zf) { emu_ip = 0x399D; emu_last_cs = 0x01F7; emu_last_ip = 0x397F; emu_last_length = 0x0041; emu_last_crc = 0xA550; emu_call(); return; } // Jump does not resolve
	emu_scasb();
	if (emu_flags.zf) { f__01F7_3979_002C_C76C(); return; }
	emu_cmpb(&emu_ax.l, emu_cx.h);
	if (emu_flags.cf) { f__01F7_398E_0017_43F0(); return; }
	emu_cmpb(&emu_ax.l, emu_cx.l);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x398E; emu_last_cs = 0x01F7; emu_last_ip = 0x398A; emu_last_length = 0x0041; emu_last_crc = 0xA550; emu_call(); return; } // Jump does not resolve
	emu_subb(&emu_ax.l, 0x20);
	emu_cmpb(&emu_bx.l, emu_cx.h);
	if (emu_flags.cf) { f__01F7_3999_000C_A5A7(); return; }
	emu_cmpb(&emu_bx.l, emu_cx.l);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x3999; emu_last_cs = 0x01F7; emu_last_ip = 0x3994; emu_last_length = 0x0041; emu_last_crc = 0xA550; emu_call(); return; } // Jump does not resolve
	emu_subb(&emu_bx.l, 0x20);
	emu_cmpb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { emu_ip = 0x3979; emu_last_cs = 0x01F7; emu_last_ip = 0x399B; emu_last_length = 0x0041; emu_last_crc = 0xA550; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_3979_002C_C76C()
 *
 * @name f__01F7_3979_002C_C76C
 * @implements 01F7:3979:002C:C76C ()
 *
 * Called From: 01F7:3982:002C:C76C
 * Called From: 01F7:3982:0041:A550
 * Called From: 01F7:399B:000C:A5A7
 * Called From: 01F7:399B:0017:43F0
 */
void f__01F7_3979_002C_C76C()
{
	emu_lodsb(emu_ds);
	emu_movb(&emu_bx.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__01F7_399D_0008_75A2(); return; }
	emu_scasb();
	if (emu_flags.zf) { f__01F7_3979_002C_C76C(); return; }
	emu_cmpb(&emu_ax.l, emu_cx.h);
	if (emu_flags.cf) { f__01F7_398E_0017_43F0(); return; }
	emu_cmpb(&emu_ax.l, emu_cx.l);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x398E; emu_last_cs = 0x01F7; emu_last_ip = 0x398A; emu_last_length = 0x002C; emu_last_crc = 0xC76C; emu_call(); return; } // Jump does not resolve
	emu_subb(&emu_ax.l, 0x20);
	emu_cmpb(&emu_bx.l, emu_cx.h);
	if (emu_flags.cf) { f__01F7_3999_000C_A5A7(); return; }
	emu_cmpb(&emu_bx.l, emu_cx.l);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x3999; emu_last_cs = 0x01F7; emu_last_ip = 0x3994; emu_last_length = 0x002C; emu_last_crc = 0xC76C; emu_call(); return; } // Jump does not resolve
	emu_subb(&emu_bx.l, 0x20);
	emu_cmpb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { emu_ip = 0x3979; emu_last_cs = 0x01F7; emu_last_ip = 0x399B; emu_last_length = 0x002C; emu_last_crc = 0xC76C; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_398E_0017_43F0()
 *
 * @name f__01F7_398E_0017_43F0
 * @implements 01F7:398E:0017:43F0 ()
 *
 * Called From: 01F7:3986:002C:C76C
 * Called From: 01F7:3986:0041:A550
 */
void f__01F7_398E_0017_43F0()
{
	emu_cmpb(&emu_bx.l, emu_cx.h);
	if (emu_flags.cf) { f__01F7_3999_000C_A5A7(); return; }
	emu_cmpb(&emu_bx.l, emu_cx.l);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x3999; emu_last_cs = 0x01F7; emu_last_ip = 0x3994; emu_last_length = 0x0017; emu_last_crc = 0x43F0; emu_call(); return; } // Jump does not resolve
	emu_subb(&emu_bx.l, 0x20);
	emu_cmpb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { f__01F7_3979_002C_C76C(); return; }
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
 * Decompiled function f__01F7_3999_000C_A5A7()
 *
 * @name f__01F7_3999_000C_A5A7
 * @implements 01F7:3999:000C:A5A7 ()
 *
 * Called From: 01F7:3990:0017:43F0
 * Called From: 01F7:3990:002C:C76C
 * Called From: 01F7:3990:0041:A550
 */
void f__01F7_3999_000C_A5A7()
{
	emu_cmpb(&emu_ax.l, emu_bx.l);
	if (emu_flags.zf) { f__01F7_3979_002C_C76C(); return; }
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
 * Decompiled function f__01F7_399D_0008_75A2()
 *
 * @name f__01F7_399D_0008_75A2
 * @implements 01F7:399D:0008:75A2 ()
 *
 * Called From: 01F7:397F:002C:C76C
 */
void f__01F7_399D_0008_75A2()
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
 * Decompiled function f__01F7_39A5_001F_856D()
 *
 * @name f__01F7_39A5_001F_856D
 * @implements 01F7:39A5:001F:856D ()
 *
 * Called From: 01F7:27AD:000A:5857
 * Called From: 01F7:3A4F:0011:E0FE
 * Called From: 0FCB:0133:000C:A504
 * Called From: 1A34:2918:000D:F28B
 * Called From: 1DB6:012A:000D:A91B
 * Called From: 2521:0045:0015:2811
 * Called From: B4B5:0292:000B:A685
 * Called From: B4B5:03A6:000B:3C01
 * Called From: B4B5:062D:000E:0E39
 * Called From: B4B5:064A:000B:3C01
 * Called From: B4B5:087A:0054:A166
 * Called From: B4B5:0897:000B:3C01
 * Called From: B4B5:0A35:000B:3501
 * Called From: B4B5:0C3E:000B:3C01
 * Called From: B4B5:0E39:000B:2E01
 * Called From: B4B5:0E56:000B:3C01
 * Called From: B4B5:0F90:000B:3501
 * Called From: B4B5:0FAD:000B:3C01
 * Called From: B4B5:1052:000B:3501
 * Called From: B4B5:1052:001B:572D
 * Called From: B4B8:0B1D:0022:26C1
 * Called From: B4DA:0E12:0013:FB4A
 * Called From: B4DA:13AC:000D:850F
 * Called From: B4DA:161D:000D:850F
 * Called From: B4DA:1A56:0011:0F4B
 * Called From: B4FC:0452:000C:0E00
 * Called From: B4FC:053F:000B:3C01
 * Called From: B4FC:0576:0017:66B8
 * Called From: B4FC:0762:000D:638E
 * Called From: B4FC:0838:001E:FFA3
 * Called From: B518:0777:0017:DDF7
 * Called From: B536:078B:000D:0D1B
 */
void f__01F7_39A5_001F_856D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__01F7_39B7_000D_37CB(); return; }
	emu_cmpw(&emu_ax.x, emu_di);
	if (emu_flags.zf) { emu_ip = 0x39C1; emu_last_cs = 0x01F7; emu_last_ip = 0x39B5; emu_last_length = 0x001F; emu_last_crc = 0x856D; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_39B7_000D_37CB()
 *
 * @name f__01F7_39B7_000D_37CB
 * @implements 01F7:39B7:000D:37CB ()
 *
 * Called From: 01F7:39B1:001F:856D
 */
void f__01F7_39B7_000D_37CB()
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
 * Decompiled function f__01F7_39C4_0031_C789()
 *
 * @name f__01F7_39C4_0031_C789
 * @implements 01F7:39C4:0031:C789 ()
 *
 * Called From: B4FC:03EF:002C:033A
 * Called From: B503:0CFE:002E:93EA
 */
void f__01F7_39C4_0031_C789()
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
 * Decompiled function f__01F7_3A41_0011_E0FE()
 *
 * @name f__01F7_3A41_0011_E0FE
 * @implements 01F7:3A41:0011:E0FE ()
 *
 * Called From: 1FB5:1B43:0027:1B5D
 */
void f__01F7_3A41_0011_E0FE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x3A52); f__01F7_39A5_001F_856D();
	f__01F7_3A52_0015_1411();
}

/**
 * Decompiled function f__01F7_3A52_0015_1411()
 *
 * @name f__01F7_3A52_0015_1411
 * @implements 01F7:3A52:0015:1411 ()
 *
 * Called From: 01F7:3A52:0011:E0FE
 */
void f__01F7_3A52_0015_1411()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_dx.x, emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	f__01F7_3A7E_000C_A7BC(); return;
}

/**
 * Decompiled function f__01F7_3A67_0016_C5DE()
 *
 * @name f__01F7_3A67_0016_C5DE
 * @implements 01F7:3A67:0016:C5DE ()
 *
 * Called From: 01F7:3A80:000C:A7BC
 * Called From: 01F7:3A80:000D:87B5
 */
void f__01F7_3A67_0016_C5DE()
{
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	if (!emu_flags.zf) { f__01F7_3A7D_000D_87B5(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ip = 0x3A86; emu_last_cs = 0x01F7; emu_last_ip = 0x3A7B; emu_last_length = 0x0016; emu_last_crc = 0xC5DE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_3A7D_000D_87B5()
 *
 * @name f__01F7_3A7D_000D_87B5
 * @implements 01F7:3A7D:000D:87B5 ()
 *
 * Called From: 01F7:3A73:0016:C5DE
 */
void f__01F7_3A7D_000D_87B5()
{
	emu_decw(&emu_cx.x);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.zf) { f__01F7_3A67_0016_C5DE(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3A7E_000C_A7BC()
 *
 * @name f__01F7_3A7E_000C_A7BC
 * @implements 01F7:3A7E:000C:A7BC ()
 *
 * Called From: 01F7:3A65:0015:1411
 */
void f__01F7_3A7E_000C_A7BC()
{
	emu_orw(&emu_cx.x, emu_cx.x);
	if (!emu_flags.zf) { f__01F7_3A67_0016_C5DE(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3A8A_0018_2332()
 *
 * @name f__01F7_3A8A_0018_2332
 * @implements 01F7:3A8A:0018:2332 ()
 *
 * Called From: B4B5:0273:000E:9175
 */
void f__01F7_3A8A_0018_2332()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_3AA2_003F_42F5(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ip = 0x3AF4; emu_last_cs = 0x01F7; emu_last_ip = 0x3AA0; emu_last_length = 0x0018; emu_last_crc = 0x2332; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_3AA2_003F_42F5()
 *
 * @name f__01F7_3AA2_003F_42F5
 * @implements 01F7:3AA2:003F:42F5 ()
 *
 * Called From: 01F7:3A98:0018:2332
 */
void f__01F7_3AA2_003F_42F5()
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
	if (!emu_flags.zf) { emu_ip = 0x3AD8; emu_last_cs = 0x01F7; emu_last_ip = 0x3AD2; emu_last_length = 0x003F; emu_last_crc = 0x42F5; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, emu_dx.x);
	if (!emu_flags.cf) { f__01F7_3AE1_0017_8307(); return; }
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_movw(&emu_es, emu_bx.x);
	emu_movw(&emu_bx.x, 0x1);
	emu_ip = 0x3AEE; emu_last_cs = 0x01F7; emu_last_ip = 0x3ADF; emu_last_length = 0x003F; emu_last_crc = 0x42F5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_3AC7_001A_2DD7()
 *
 * @name f__01F7_3AC7_001A_2DD7
 * @implements 01F7:3AC7:001A:2DD7 ()
 *
 * Called From: 01F7:3AEC:0017:8307
 */
void f__01F7_3AC7_001A_2DD7()
{
	emu_movw(&emu_si, emu_bp);
	emu_lodsb(emu_ds);
	emu_xchgw(&emu_bx.x, &emu_di);
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	emu_repne_scasb();
	emu_movw(&emu_bx.x, emu_di);
	if (!emu_flags.zf) { f__01F7_3AD8_0009_DE06(); return; }
	emu_cmpw(&emu_cx.x, emu_dx.x);
	if (!emu_flags.cf) { emu_ip = 0x3AE1; emu_last_cs = 0x01F7; emu_last_ip = 0x3AD6; emu_last_length = 0x001A; emu_last_crc = 0x2DD7; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_movw(&emu_es, emu_bx.x);
	emu_movw(&emu_bx.x, 0x1);
	emu_ip = 0x3AEE; emu_last_cs = 0x01F7; emu_last_ip = 0x3ADF; emu_last_length = 0x001A; emu_last_crc = 0x2DD7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_3AD8_0009_DE06()
 *
 * @name f__01F7_3AD8_0009_DE06
 * @implements 01F7:3AD8:0009:DE06 ()
 *
 * Called From: 01F7:3AD2:001A:2DD7
 */
void f__01F7_3AD8_0009_DE06()
{
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_movw(&emu_es, emu_bx.x);
	emu_movw(&emu_bx.x, 0x1);
	f__01F7_3AEE_000A_B1A3(); return;
}

/**
 * Decompiled function f__01F7_3AE1_0017_8307()
 *
 * @name f__01F7_3AE1_0017_8307
 * @implements 01F7:3AE1:0017:8307 ()
 *
 * Called From: 01F7:3AD6:003F:42F5
 */
void f__01F7_3AE1_0017_8307()
{
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	if (emu_cx.x == 0) { emu_ip = 0x3AEE; emu_last_cs = 0x01F7; emu_last_ip = 0x3AE3; emu_last_length = 0x0017; emu_last_crc = 0x8307; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_cx.x);
	emu_decw(&emu_cx.x);
	emu_rep_cmpsb(emu_ds);
	emu_movw(&emu_cx.x, emu_ax.x);
	if (!emu_flags.zf) { f__01F7_3AC7_001A_2DD7(); return; }
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
 * Decompiled function f__01F7_3AEE_000A_B1A3()
 *
 * @name f__01F7_3AEE_000A_B1A3
 * @implements 01F7:3AEE:000A:B1A3 ()
 *
 * Called From: 01F7:3ADF:0009:DE06
 */
void f__01F7_3AEE_000A_B1A3()
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
 * Decompiled function f__01F7_3AF8_001D_2425()
 *
 * @name f__01F7_3AF8_001D_2425
 * @implements 01F7:3AF8:001D:2425 ()
 *
 * Called From: B4B5:0439:0013:040D
 * Called From: B4B5:045F:0010:AE28
 * Called From: B4B5:04AD:0019:195D
 * Called From: B4B5:04F1:0019:2880
 * Called From: B4B5:051F:001C:E7CB
 * Called From: B4B5:0542:0019:A85C
 * Called From: B4B5:0792:0013:040D
 * Called From: B4B5:07B0:0014:AABC
 * Called From: B4B5:07DE:0010:AE28
 * Called From: B4B5:07FD:0015:A410
 * Called From: B4B5:0A7E:0013:440A
 * Called From: B4B5:0ADA:003E:7EB0
 * Called From: B4B5:0B22:0013:440A
 * Called From: B4B5:0B7D:0010:EE2F
 * Called From: B4B5:0BC5:0013:440A
 * Called From: B4B5:0CE5:0013:040D
 * Called From: B4B5:0ED2:0013:040D
 */
void f__01F7_3AF8_001D_2425()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__01F7_3B4B_001A_A371(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x651C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x651E), emu_dx.x);
	f__01F7_3B4B_001A_A371(); return;
}

/**
 * Decompiled function f__01F7_3B15_000E_5187()
 *
 * @name f__01F7_3B15_000E_5187
 * @implements 01F7:3B15:000E:5187 ()
 *
 * Called From: 01F7:3B53:001A:A371
 */
void f__01F7_3B15_000E_5187()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	f__01F7_3B35_0030_0872(); return;
}

/**
 * Decompiled function f__01F7_3B23_0042_5485()
 *
 * @name f__01F7_3B23_0042_5485
 * @implements 01F7:3B23:0042:5485 ()
 *
 * Called From: 01F7:3B3C:0030:0872
 * Called From: 01F7:3B3C:0042:5485
 */
void f__01F7_3B23_0042_5485()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	if (emu_flags.zf) { emu_ip = 0x3B3E; emu_last_cs = 0x01F7; emu_last_ip = 0x3B30; emu_last_length = 0x0042; emu_last_crc = 0x5485; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__01F7_3B23_0042_5485(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__01F7_3B55_0010_3A56(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x3B15; emu_last_cs = 0x01F7; emu_last_ip = 0x3B53; emu_last_length = 0x0042; emu_last_crc = 0x5485; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x3B65; emu_last_cs = 0x01F7; emu_last_ip = 0x3B5D; emu_last_length = 0x0042; emu_last_crc = 0x5485; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x3BBB; emu_last_cs = 0x01F7; emu_last_ip = 0x3B63; emu_last_length = 0x0042; emu_last_crc = 0x5485; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_3B35_0030_0872()
 *
 * @name f__01F7_3B35_0030_0872
 * @implements 01F7:3B35:0030:0872 ()
 *
 * Called From: 01F7:3B21:000E:5187
 */
void f__01F7_3B35_0030_0872()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__01F7_3B23_0042_5485(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x3B55; emu_last_cs = 0x01F7; emu_last_ip = 0x3B45; emu_last_length = 0x0030; emu_last_crc = 0x0872; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x3B15; emu_last_cs = 0x01F7; emu_last_ip = 0x3B53; emu_last_length = 0x0030; emu_last_crc = 0x0872; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x3B65; emu_last_cs = 0x01F7; emu_last_ip = 0x3B5D; emu_last_length = 0x0030; emu_last_crc = 0x0872; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x3BBB; emu_last_cs = 0x01F7; emu_last_ip = 0x3B63; emu_last_length = 0x0030; emu_last_crc = 0x0872; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_3B4B_001A_A371()
 *
 * @name f__01F7_3B4B_001A_A371
 * @implements 01F7:3B4B:001A:A371 ()
 *
 * Called From: 01F7:3B04:001D:2425
 * Called From: 01F7:3B13:001D:2425
 */
void f__01F7_3B4B_001A_A371()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__01F7_3B15_000E_5187(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x3B65; emu_last_cs = 0x01F7; emu_last_ip = 0x3B5D; emu_last_length = 0x001A; emu_last_crc = 0xA371; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__01F7_3BBB_0004_0F7A(); return;
}

/**
 * Decompiled function f__01F7_3B55_0010_3A56()
 *
 * @name f__01F7_3B55_0010_3A56
 * @implements 01F7:3B55:0010:3A56 ()
 *
 * Called From: 01F7:3B45:0042:5485
 */
void f__01F7_3B55_0010_3A56()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__01F7_3B65_000F_F8B2(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x3BBB; emu_last_cs = 0x01F7; emu_last_ip = 0x3B63; emu_last_length = 0x0010; emu_last_crc = 0x3A56; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_3B65_000F_F8B2()
 *
 * @name f__01F7_3B65_000F_F8B2
 * @implements 01F7:3B65:000F:F8B2 ()
 *
 * Called From: 01F7:3B5D:0010:3A56
 */
void f__01F7_3B65_000F_F8B2()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x651C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	f__01F7_3BAB_0014_581F(); return;
}

/**
 * Decompiled function f__01F7_3B74_000E_519B()
 *
 * @name f__01F7_3B74_000E_519B
 * @implements 01F7:3B74:000E:519B ()
 *
 * Called From: 01F7:3BB3:0014:581F
 * Called From: 01F7:3BB3:0024:925D
 */
void f__01F7_3B74_000E_519B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	f__01F7_3B9E_0021_9C6D(); return;
}

/**
 * Decompiled function f__01F7_3B82_0019_F2C4()
 *
 * @name f__01F7_3B82_0019_F2C4
 * @implements 01F7:3B82:0019:F2C4 ()
 *
 * Called From: 01F7:3BA5:0021:9C6D
 * Called From: 01F7:3BA5:0024:925D
 */
void f__01F7_3B82_0019_F2C4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	if (!emu_flags.zf) { f__01F7_3B9B_0024_925D(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x651E));
	f__01F7_3BB5_000A_3E78(); return;
}

/**
 * Decompiled function f__01F7_3B9B_0024_925D()
 *
 * @name f__01F7_3B9B_0024_925D
 * @implements 01F7:3B9B:0024:925D ()
 *
 * Called From: 01F7:3B8F:0019:F2C4
 */
void f__01F7_3B9B_0024_925D()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__01F7_3B82_0019_F2C4(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__01F7_3B74_000E_519B(); return; }
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
 * Decompiled function f__01F7_3B9E_0021_9C6D()
 *
 * @name f__01F7_3B9E_0021_9C6D
 * @implements 01F7:3B9E:0021:9C6D ()
 *
 * Called From: 01F7:3B80:000E:519B
 */
void f__01F7_3B9E_0021_9C6D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__01F7_3B82_0019_F2C4(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x3B74; emu_last_cs = 0x01F7; emu_last_ip = 0x3BB3; emu_last_length = 0x0021; emu_last_crc = 0x9C6D; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__01F7_3BAB_0014_581F()
 *
 * @name f__01F7_3BAB_0014_581F
 * @implements 01F7:3BAB:0014:581F ()
 *
 * Called From: 01F7:3B72:000F:F8B2
 */
void f__01F7_3BAB_0014_581F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x651E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__01F7_3B74_000E_519B(); return; }
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
 * Decompiled function f__01F7_3BB5_000A_3E78()
 *
 * @name f__01F7_3BB5_000A_3E78
 * @implements 01F7:3BB5:000A:3E78 ()
 *
 * Called From: 01F7:3B99:0019:F2C4
 */
void f__01F7_3BB5_000A_3E78()
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
 * Decompiled function f__01F7_3BBB_0004_0F7A()
 *
 * @name f__01F7_3BBB_0004_0F7A
 * @implements 01F7:3BBB:0004:0F7A ()
 *
 * Called From: 01F7:3B63:001A:A371
 */
void f__01F7_3BBB_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_3CD5_000D_BC7F()
 *
 * @name f__01F7_3CD5_000D_BC7F
 * @implements 01F7:3CD5:000D:BC7F ()
 *
 * Called From: 1FB5:1B70:0017:2545
 * Called From: B4B5:0265:000E:8194
 * Called From: B4FC:0446:000D:1133
 */
void f__01F7_3CD5_000D_BC7F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_cld();
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_si);
	f__01F7_3CED_000C_B8AA(); return;
}

/**
 * Decompiled function f__01F7_3CE2_0017_5355()
 *
 * @name f__01F7_3CE2_0017_5355
 * @implements 01F7:3CE2:0017:5355 ()
 *
 * Called From: 01F7:3CF0:000C:B8AA
 * Called From: 01F7:3CF0:0017:5355
 */
void f__01F7_3CE2_0017_5355()
{
	emu_subb(&emu_ax.l, 0x61);
	emu_cmpb(&emu_ax.l, 0x19);
	if (!(emu_flags.cf || emu_flags.zf)) { f__01F7_3CED_000C_B8AA(); return; }
	emu_addb(&emu_ax.l, 0x41);
	emu_movb(&emu_get_memory8(emu_ds, emu_si, -0x1), emu_ax.l);
	emu_lodsb(emu_ds);
	emu_andb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { f__01F7_3CE2_0017_5355(); return; }
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
 * Decompiled function f__01F7_3CED_000C_B8AA()
 *
 * @name f__01F7_3CED_000C_B8AA
 * @implements 01F7:3CED:000C:B8AA ()
 *
 * Called From: 01F7:3CE0:000D:BC7F
 * Called From: 01F7:3CE6:0017:5355
 */
void f__01F7_3CED_000C_B8AA()
{
	emu_lodsb(emu_ds);
	emu_andb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { f__01F7_3CE2_0017_5355(); return; }
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
 * Decompiled function f__01F7_3CF9_000C_50AD()
 *
 * @name f__01F7_3CF9_000C_50AD
 * @implements 01F7:3CF9:000C:50AD ()
 *
 * Called From: 01F7:1069:0011:F90B
 */
void f__01F7_3CF9_000C_50AD()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x3D05); f__01F7_4027_0011_D293();
	f__01F7_3D05_0032_85DC();
}

/**
 * Decompiled function f__01F7_3D05_0032_85DC()
 *
 * @name f__01F7_3D05_0032_85DC
 * @implements 01F7:3D05:0032:85DC ()
 *
 * Called From: 01F7:3D05:000C:50AD
 */
void f__01F7_3D05_0032_85DC()
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
	emu_push(0x3D37); f__01F7_079C_0017_6829();
	f__01F7_3D37_0019_F7F2();
}

/**
 * Decompiled function f__01F7_3D37_0019_F7F2()
 *
 * @name f__01F7_3D37_0019_F7F2
 * @implements 01F7:3D37:0019:F7F2 ()
 *
 * Called From: 01F7:3D37:0032:85DC
 */
void f__01F7_3D37_0019_F7F2()
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
	emu_push(0x3D50); f__01F7_079C_0017_6829();
	f__01F7_3D50_0024_0669();
}

/**
 * Decompiled function f__01F7_3D50_0024_0669()
 *
 * @name f__01F7_3D50_0024_0669
 * @implements 01F7:3D50:0024:0669 ()
 *
 * Called From: 01F7:3D50:0019:F7F2
 */
void f__01F7_3D50_0024_0669()
{
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_testw(&emu_si, 0x3);
	if (emu_flags.zf) { f__01F7_3D65_000F_793B(); return; }
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x5180);
	emu_adcws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_ip = 0x3D7C; emu_last_cs = 0x01F7; emu_last_ip = 0x3D72; emu_last_length = 0x0024; emu_last_crc = 0x0669; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_3D65_000F_793B()
 *
 * @name f__01F7_3D65_000F_793B
 * @implements 01F7:3D65:000F:793B ()
 *
 * Called From: 01F7:3D5A:0024:0669
 */
void f__01F7_3D65_000F_793B()
{
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	f__01F7_3D7C_0053_155E(); return;
}

/**
 * Decompiled function f__01F7_3D7C_0053_155E()
 *
 * @name f__01F7_3D7C_0053_155E
 * @implements 01F7:3D7C:0053:155E ()
 *
 * Called From: 01F7:3D72:000F:793B
 */
void f__01F7_3D7C_0053_155E()
{
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x3D74; emu_last_cs = 0x01F7; emu_last_ip = 0x3D7E; emu_last_length = 0x0053; emu_last_crc = 0x155E; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_decw(&emu_ax.x);
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0x2);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__01F7_3D9A_0035_3D08(); return; }
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x3);
	if (!emu_flags.zf) { emu_ip = 0x3D9A; emu_last_cs = 0x01F7; emu_last_ip = 0x3D97; emu_last_length = 0x0053; emu_last_crc = 0x155E; emu_call(); return; } // Jump does not resolve
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
	if (emu_flags.zf) { emu_ip = 0x3DD4; emu_last_cs = 0x01F7; emu_last_ip = 0x3DB5; emu_last_length = 0x0053; emu_last_crc = 0x155E; emu_call(); return; } // Jump does not resolve
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
	emu_push(0x3DCF); emu_ip = 0x4215; emu_last_cs = 0x01F7; emu_last_ip = 0x3DCC; emu_last_length = 0x0053; emu_last_crc = 0x155E; emu_call(); // Jump does not resolve
	f__01F7_3DCF_0014_666B();
}

/**
 * Decompiled function f__01F7_3D9A_0035_3D08()
 *
 * @name f__01F7_3D9A_0035_3D08
 * @implements 01F7:3D9A:0035:3D08 ()
 *
 * Called From: 01F7:3D90:0053:155E
 */
void f__01F7_3D9A_0035_3D08()
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
	if (emu_flags.zf) { emu_ip = 0x3DD4; emu_last_cs = 0x01F7; emu_last_ip = 0x3DB5; emu_last_length = 0x0035; emu_last_crc = 0x3D08; emu_call(); return; } // Jump does not resolve
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
	emu_push(0x3DCF); f__01F7_4215_0026_6AE4();
	f__01F7_3DCF_0014_666B();
}

/**
 * Decompiled function f__01F7_3DCF_0014_666B()
 *
 * @name f__01F7_3DCF_0014_666B
 * @implements 01F7:3DCF:0014:666B ()
 *
 * Called From: 01F7:3DCF:0035:3D08
 */
void f__01F7_3DCF_0014_666B()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__01F7_3DD4_000F_6147(); return; }
	emu_decw(&emu_si);
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0xE10);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_push(0x3DE3); emu_ip = 0x079C; emu_last_cs = 0x01F7; emu_last_ip = 0x3DE0; emu_last_length = 0x0014; emu_last_crc = 0x666B; emu_call(); // Jump does not resolve
	f__01F7_3DE3_001B_854E();
}

/**
 * Decompiled function f__01F7_3DD4_000F_6147()
 *
 * @name f__01F7_3DD4_000F_6147
 * @implements 01F7:3DD4:000F:6147 ()
 *
 * Called From: 01F7:3DD1:0014:666B
 */
void f__01F7_3DD4_000F_6147()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0xE10);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_push(0x3DE3); f__01F7_079C_0017_6829();
	f__01F7_3DE3_001B_854E();
}

/**
 * Decompiled function f__01F7_3DE3_001B_854E()
 *
 * @name f__01F7_3DE3_001B_854E
 * @implements 01F7:3DE3:001B:854E ()
 *
 * Called From: 01F7:3DE3:000F:6147
 */
void f__01F7_3DE3_001B_854E()
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
	emu_push(0x3DFE); f__01F7_079C_0017_6829();
	f__01F7_3DFE_0025_0E91();
}

/**
 * Decompiled function f__01F7_3DFE_0025_0E91()
 *
 * @name f__01F7_3DFE_0025_0E91
 * @implements 01F7:3DFE:0025:0E91 ()
 *
 * Called From: 01F7:3DFE:001B:854E
 */
void f__01F7_3DFE_0025_0E91()
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
 * Decompiled function f__01F7_4027_0011_D293()
 *
 * @name f__01F7_4027_0011_D293
 * @implements 01F7:4027:0011:D293 ()
 *
 * Called From: 01F7:0222:0015:2B26
 * Called From: 01F7:3D02:000C:50AD
 */
void f__01F7_4027_0011_D293()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x7B54);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x4038); f__01F7_27FD_0037_08CE();
	f__01F7_4038_000F_1AA7();
}

/**
 * Decompiled function f__01F7_4038_000F_1AA7()
 *
 * @name f__01F7_4038_000F_1AA7
 * @implements 01F7:4038:000F:1AA7 ()
 *
 * Called From: 01F7:4038:0011:D293
 */
void f__01F7_4038_000F_1AA7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x4047; emu_last_cs = 0x01F7; emu_last_ip = 0x4042; emu_last_length = 0x000F; emu_last_crc = 0x1AA7; emu_call(); return; } // Jump does not resolve
	f__01F7_40DC_0024_4526(); return;
}

/**
 * Decompiled function f__01F7_40DC_0024_4526()
 *
 * @name f__01F7_40DC_0024_4526
 * @implements 01F7:40DC:0024:4526 ()
 *
 * Called From: 01F7:4044:000F:1AA7
 */
void f__01F7_40DC_0024_4526()
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
	emu_push(0x4100); f__01F7_38F6_0029_5C00();
	f__01F7_4100_0015_750E();
}

/**
 * Decompiled function f__01F7_4100_0015_750E()
 *
 * @name f__01F7_4100_0015_750E
 * @implements 01F7:4100:0015:750E ()
 *
 * Called From: 01F7:4100:0024:4526
 */
void f__01F7_4100_0015_750E()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x7B5B);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7B4C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7B4A));
	emu_push(emu_cs);
	emu_push(0x4115); f__01F7_38F6_0029_5C00();
	f__01F7_4115_0006_3C5C();
}

/**
 * Decompiled function f__01F7_4115_0006_3C5C()
 *
 * @name f__01F7_4115_0006_3C5C
 * @implements 01F7:4115:0006:3C5C ()
 *
 * Called From: 01F7:4115:0015:750E
 */
void f__01F7_4115_0006_3C5C()
{
	emu_addws(&emu_sp, 0x8);
	f__01F7_4210_0005_04BA(); return;
}

/**
 * Decompiled function f__01F7_4210_0005_04BA()
 *
 * @name f__01F7_4210_0005_04BA
 * @implements 01F7:4210:0005:04BA ()
 *
 * Called From: 01F7:4118:0006:3C5C
 */
void f__01F7_4210_0005_04BA()
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
 * Decompiled function f__01F7_4215_0026_6AE4()
 *
 * @name f__01F7_4215_0026_6AE4
 * @implements 01F7:4215:0026:6AE4 ()
 *
 * Called From: 01F7:3DCC:0035:3D08
 */
void f__01F7_4215_0026_6AE4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x424B; emu_last_cs = 0x01F7; emu_last_ip = 0x421D; emu_last_length = 0x0026; emu_last_crc = 0x6AE4; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x3B);
	if (emu_flags.cf) { f__01F7_4234_0007_716A(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x4));
	emu_addw(&emu_ax.x, 0x46);
	emu_testw(&emu_ax.x, 0x3);
	if (!emu_flags.zf) { emu_ip = 0x4234; emu_last_cs = 0x01F7; emu_last_ip = 0x4231; emu_last_length = 0x0026; emu_last_crc = 0x6AE4; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	emu_ip = 0x423E; emu_last_cs = 0x01F7; emu_last_ip = 0x4239; emu_last_length = 0x0026; emu_last_crc = 0x6AE4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_4234_0007_716A()
 *
 * @name f__01F7_4234_0007_716A
 * @implements 01F7:4234:0007:716A ()
 *
 * Called From: 01F7:4226:0026:6AE4
 */
void f__01F7_4234_0007_716A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	f__01F7_423E_000D_57E8(); return;
}

/**
 * Decompiled function f__01F7_423B_0010_D735()
 *
 * @name f__01F7_423B_0010_D735
 * @implements 01F7:423B:0010:D735 ()
 *
 * Called From: 01F7:4247:000D:57E8
 */
void f__01F7_423B_0010_D735()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x7B2C), emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x423B; emu_last_cs = 0x01F7; emu_last_ip = 0x4247; emu_last_length = 0x0010; emu_last_crc = 0xD735; emu_call(); return; } // Jump does not resolve
	f__01F7_426C_002A_2227(); return;
}

/**
 * Decompiled function f__01F7_423E_000D_57E8()
 *
 * @name f__01F7_423E_000D_57E8
 * @implements 01F7:423E:000D:57E8 ()
 *
 * Called From: 01F7:4239:0007:716A
 */
void f__01F7_423E_000D_57E8()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x7B2C), emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { f__01F7_423B_0010_D735(); return; }
	emu_ip = 0x426C; emu_last_cs = 0x01F7; emu_last_ip = 0x4249; emu_last_length = 0x000D; emu_last_crc = 0x57E8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_426C_002A_2227()
 *
 * @name f__01F7_426C_002A_2227
 * @implements 01F7:426C:002A:2227 ()
 *
 * Called From: 01F7:4249:0010:D735
 */
void f__01F7_426C_002A_2227()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x4);
	if (emu_flags.cf) { f__01F7_42ED_0007_21A0(); return; }
	if (emu_flags.zf) { emu_ip = 0x427C; emu_last_cs = 0x01F7; emu_last_ip = 0x4272; emu_last_length = 0x002A; emu_last_crc = 0x2227; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0xA);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x42ED; emu_last_cs = 0x01F7; emu_last_ip = 0x4278; emu_last_length = 0x002A; emu_last_crc = 0x2227; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x42E8; emu_last_cs = 0x01F7; emu_last_ip = 0x427A; emu_last_length = 0x002A; emu_last_crc = 0x2227; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x4), 0x10);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x4296; emu_last_cs = 0x01F7; emu_last_ip = 0x4285; emu_last_length = 0x002A; emu_last_crc = 0x2227; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x4296; emu_last_cs = 0x01F7; emu_last_ip = 0x428B; emu_last_length = 0x002A; emu_last_crc = 0x2227; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x7B2A));
	emu_addws(&emu_cx.x, 0x7);
	emu_ip = 0x429A; emu_last_cs = 0x01F7; emu_last_ip = 0x4294; emu_last_length = 0x002A; emu_last_crc = 0x2227; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_42ED_0007_21A0()
 *
 * @name f__01F7_42ED_0007_21A0
 * @implements 01F7:42ED:0007:21A0 ()
 *
 * Called From: 01F7:4270:002A:2227
 */
void f__01F7_42ED_0007_21A0()
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
 * Decompiled function f__01F7_42F4_0019_E682()
 *
 * @name f__01F7_42F4_0019_E682
 * @implements 01F7:42F4:0019:E682 ()
 *
 * Called From: 01F7:2F8F:0015:592A
 * Called From: 01F7:4481:0003:0774
 */
void f__01F7_42F4_0019_E682()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8E);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x795A));
	if (emu_flags.cf) { f__01F7_4310_000E_0546(); return; }
	emu_movw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_push(0x430D); emu_ip = 0x0675; emu_last_cs = 0x01F7; emu_last_ip = 0x430A; emu_last_length = 0x0019; emu_last_crc = 0xE682; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_4310_000E_0546()
 *
 * @name f__01F7_4310_000E_0546
 * @implements 01F7:4310:000E:0546 ()
 *
 * Called From: 01F7:4304:0019:E682
 */
void f__01F7_4310_000E_0546()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_incw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (!emu_flags.cf) { f__01F7_431E_001C_47A1(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x443F; emu_last_cs = 0x01F7; emu_last_ip = 0x431B; emu_last_length = 0x000E; emu_last_crc = 0x0546; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_431E_001C_47A1()
 *
 * @name f__01F7_431E_001C_47A1
 * @implements 01F7:431E:001C:47A1 ()
 *
 * Called From: 01F7:4317:000E:0546
 */
void f__01F7_431E_001C_47A1()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x800);
	if (emu_flags.zf) { f__01F7_433D_001B_5513(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x433A); emu_ip = 0x0773; emu_last_cs = 0x01F7; emu_last_ip = 0x4337; emu_last_length = 0x001C; emu_last_crc = 0x47A1; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_433D_001B_5513()
 *
 * @name f__01F7_433D_001B_5513
 * @implements 01F7:433D:001B:5513 ()
 *
 * Called From: 01F7:4328:001C:47A1
 */
void f__01F7_433D_001B_5513()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x4000);
	if (!emu_flags.zf) { f__01F7_435E_001E_8BCB(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x4358); f__01F7_4445_0016_FB89();
	f__01F7_4358_0006_3C0C();
}

/**
 * Decompiled function f__01F7_4358_0006_3C0C()
 *
 * @name f__01F7_4358_0006_3C0C
 * @implements 01F7:4358:0006:3C0C ()
 *
 * Called From: 01F7:4358:001B:5513
 */
void f__01F7_4358_0006_3C0C()
{
	emu_addws(&emu_sp, 0x8);
	f__01F7_443F_0006_137A(); return;
}

/**
 * Decompiled function f__01F7_435E_001E_8BCB()
 *
 * @name f__01F7_435E_001E_8BCB
 * @implements 01F7:435E:001E:8BCB ()
 *
 * Called From: 01F7:4347:001B:5513
 */
void f__01F7_435E_001E_8BCB()
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
	f__01F7_43F1_0013_1AC9(); return;
}

/**
 * Decompiled function f__01F7_437C_005A_225B()
 *
 * @name f__01F7_437C_005A_225B
 * @implements 01F7:437C:005A:225B ()
 *
 * Called From: 01F7:4401:0013:1AC9
 * Called From: 01F7:4401:0009:0CE7
 */
void f__01F7_437C_005A_225B()
{
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x7), emu_ax.l);
	emu_cmpb(&emu_ax.l, 0xA);
	if (!emu_flags.zf) { f__01F7_4399_003D_4B1C(); return; }
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
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x43FB; emu_last_cs = 0x01F7; emu_last_ip = 0x43B5; emu_last_length = 0x005A; emu_last_crc = 0x225B; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x43BF; emu_last_cs = 0x01F7; emu_last_ip = 0x43B7; emu_last_length = 0x005A; emu_last_crc = 0x225B; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, 0x80);
	if (emu_flags.cf) { f__01F7_43FB_0009_0CE7(); return; }
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
	emu_push(0x43D6); emu_ip = 0x4445; emu_last_cs = 0x01F7; emu_last_ip = 0x43D3; emu_last_length = 0x005A; emu_last_crc = 0x225B; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_4399_003D_4B1C()
 *
 * @name f__01F7_4399_003D_4B1C
 * @implements 01F7:4399:003D:4B1C ()
 *
 * Called From: 01F7:438D:005A:225B
 */
void f__01F7_4399_003D_4B1C()
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
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x43FB; emu_last_cs = 0x01F7; emu_last_ip = 0x43B5; emu_last_length = 0x003D; emu_last_crc = 0x4B1C; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x43BF; emu_last_cs = 0x01F7; emu_last_ip = 0x43B7; emu_last_length = 0x003D; emu_last_crc = 0x4B1C; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, 0x80);
	if (emu_flags.cf) { f__01F7_43FB_0009_0CE7(); return; }
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
	emu_push(0x43D6); emu_ip = 0x4445; emu_last_cs = 0x01F7; emu_last_ip = 0x43D3; emu_last_length = 0x003D; emu_last_crc = 0x4B1C; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__01F7_43F1_0013_1AC9()
 *
 * @name f__01F7_43F1_0013_1AC9
 * @implements 01F7:43F1:0013:1AC9 ()
 *
 * Called From: 01F7:437A:001E:8BCB
 */
void f__01F7_43F1_0013_1AC9()
{
	emu_movw(&emu_ax.x, emu_bp - 0x8E);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_flags.zf) { emu_ip = 0x4404; emu_last_cs = 0x01F7; emu_last_ip = 0x43FF; emu_last_length = 0x0013; emu_last_crc = 0x1AC9; emu_call(); return; } // Jump does not resolve
	f__01F7_437C_005A_225B(); return;
}

/**
 * Decompiled function f__01F7_43FB_0009_0CE7()
 *
 * @name f__01F7_43FB_0009_0CE7
 * @implements 01F7:43FB:0009:0CE7 ()
 *
 * Called From: 01F7:43BD:003D:4B1C
 * Called From: 01F7:43BD:005A:225B
 */
void f__01F7_43FB_0009_0CE7()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_flags.zf) { f__01F7_4404_0021_C543(); return; }
	f__01F7_437C_005A_225B(); return;
}

/**
 * Decompiled function f__01F7_4404_0021_C543()
 *
 * @name f__01F7_4404_0021_C543
 * @implements 01F7:4404:0021:C543 ()
 *
 * Called From: 01F7:43FF:0009:0CE7
 */
void f__01F7_4404_0021_C543()
{
	emu_movw(&emu_ax.x, emu_bp - 0x8E);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_subw(&emu_si, emu_ax.x);
	emu_sbbws(&emu_dx.x, 0x0);
	emu_movw(&emu_ax.x, emu_si);
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x443C; emu_last_cs = 0x01F7; emu_last_ip = 0x4416; emu_last_length = 0x0021; emu_last_crc = 0xC543; emu_call(); return; } // Jump does not resolve
	emu_push(emu_si);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x8E);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x4425); f__01F7_4445_0016_FB89();
	f__01F7_4425_0017_2339();
}

/**
 * Decompiled function f__01F7_4425_0017_2339()
 *
 * @name f__01F7_4425_0017_2339
 * @implements 01F7:4425:0017:2339 ()
 *
 * Called From: 01F7:4425:0021:C543
 */
void f__01F7_4425_0017_2339()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_si);
	if (emu_flags.zf) { f__01F7_443C_0009_457B(); return; }
	emu_cmpws(&emu_dx.x, 0xFF);
	if (emu_flags.zf) { emu_ip = 0x43E4; emu_last_cs = 0x01F7; emu_last_ip = 0x4431; emu_last_length = 0x0017; emu_last_crc = 0x2339; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_subw(&emu_ax.x, emu_si);
	emu_ip = 0x443F; emu_last_cs = 0x01F7; emu_last_ip = 0x443A; emu_last_length = 0x0017; emu_last_crc = 0x2339; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_443C_0009_457B()
 *
 * @name f__01F7_443C_0009_457B
 * @implements 01F7:443C:0009:457B ()
 *
 * Called From: 01F7:442C:0017:2339
 */
void f__01F7_443C_0009_457B()
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
 * Decompiled function f__01F7_443F_0006_137A()
 *
 * @name f__01F7_443F_0006_137A
 * @implements 01F7:443F:0006:137A ()
 *
 * Called From: 01F7:435B:0006:3C0C
 */
void f__01F7_443F_0006_137A()
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
 * Decompiled function f__01F7_4445_0016_FB89()
 *
 * @name f__01F7_4445_0016_FB89
 * @implements 01F7:4445:0016:FB89 ()
 *
 * Called From: 01F7:4355:001B:5513
 * Called From: 01F7:4422:0021:C543
 */
void f__01F7_4445_0016_FB89()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x1);
	if (emu_flags.zf) { f__01F7_445B_000E_9DE6(); return; }
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_ip = 0x447C; emu_last_cs = 0x01F7; emu_last_ip = 0x4459; emu_last_length = 0x0016; emu_last_crc = 0xFB89; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__01F7_445B_000E_9DE6()
 *
 * @name f__01F7_445B_000E_9DE6
 * @implements 01F7:445B:000E:9DE6 ()
 *
 * Called From: 01F7:4453:0016:FB89
 */
void f__01F7_445B_000E_9DE6()
{
	emu_push(emu_ds);
	emu_movb(&emu_ax.h, 0x40);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_lfp(&emu_ds, &emu_dx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x4469); f__0070_0108_0005_1CF6();
	f__01F7_4469_0012_D9B6();
}

/**
 * Decompiled function f__01F7_4469_0012_D9B6()
 *
 * @name f__01F7_4469_0012_D9B6
 * @implements 01F7:4469:0012:D9B6 ()
 *
 * Called From: 01F7:4469:000E:9DE6
 */
void f__01F7_4469_0012_D9B6()
{
	emu_pop(&emu_ds);
	if (emu_flags.cf) { emu_ip = 0x447B; emu_last_cs = 0x01F7; emu_last_ip = 0x446A; emu_last_length = 0x0012; emu_last_crc = 0xD9B6; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_orw(&emu_get_memory16(emu_ds, emu_bx.x,  0x795C), 0x1000);
	emu_pop(&emu_ax.x);
	f__01F7_447F_0002_00E2(); return;
}

/**
 * Decompiled function f__01F7_447F_0002_00E2()
 *
 * @name f__01F7_447F_0002_00E2
 * @implements 01F7:447F:0002:00E2 ()
 *
 * Called From: 01F7:4479:0012:D9B6
 */
void f__01F7_447F_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_4481_0003_0774()
 *
 * @name f__01F7_4481_0003_0774
 * @implements 01F7:4481:0003:0774 ()
 *
 * Called From: 1FB5:0109:001B:F9B6
 */
void f__01F7_4481_0003_0774()
{
	f__01F7_42F4_0019_E682(); return;
}

/**
 * Decompiled function f__01F7_4484_0014_1052()
 *
 * @name f__01F7_4484_0014_1052
 * @implements 01F7:4484:0014:1052 ()
 *
 * Called From: 01F7:0349:0004:0D16
 */
void f__01F7_4484_0014_1052()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, 0x4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x77CA);
	f__01F7_44B3_0009_E67A(); return;
}

/**
 * Decompiled function f__01F7_4498_0014_179C()
 *
 * @name f__01F7_4498_0014_179C
 * @implements 01F7:4498:0014:179C ()
 *
 * Called From: 01F7:44B5:0009:E67A
 * Called From: 01F7:44B5:0010:560F
 */
void f__01F7_4498_0014_179C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x3);
	if (emu_flags.zf) { emu_ip = 0x44AE; emu_last_cs = 0x01F7; emu_last_ip = 0x44A1; emu_last_length = 0x0014; emu_last_crc = 0x179C; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_bx.x);
	emu_push(emu_cs);
	emu_push(0x44AC); f__01F7_2412_0011_3683();
	f__01F7_44AC_0010_560F();
}

/**
 * Decompiled function f__01F7_44AC_0010_560F()
 *
 * @name f__01F7_44AC_0010_560F
 * @implements 01F7:44AC:0010:560F ()
 *
 * Called From: 01F7:44AC:0014:179C
 */
void f__01F7_44AC_0010_560F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_decw(&emu_si);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x14);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__01F7_4498_0014_179C(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__01F7_44B3_0009_E67A()
 *
 * @name f__01F7_44B3_0009_E67A
 * @implements 01F7:44B3:0009:E67A ()
 *
 * Called From: 01F7:4496:0014:1052
 */
void f__01F7_44B3_0009_E67A()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__01F7_4498_0014_179C(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
