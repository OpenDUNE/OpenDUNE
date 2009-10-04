/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__06F7_0008_0018_D7CD()
 *
 * @name f__06F7_0008_0018_D7CD
 * @implements 06F7:0008:0018:D7CD ()
 *
 * Called From: 0972:1580:000C:582A
 * Called From: 0C3A:1386:000E:7330
 * Called From: 176C:13BF:002F:7128
 * Called From: 1A34:04BC:004B:AB24
 * Called From: 1A34:04BC:005A:1EF0
 * Called From: 1A34:0655:0035:322D
 * Called From: B4CD:1522:000C:452A
 */
void f__06F7_0008_0018_D7CD()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x24);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_di, 0xB);
	if (!emu_flags.zf) { f__06F7_0020_0011_E117(); return; }
	emu_movw(&emu_ax.x, 0x20);
	/* Unresolved jump */ emu_ip = 0x0023; emu_last_cs = 0x06F7; emu_last_ip = 0x001E; emu_last_length = 0x0018; emu_last_crc = 0xD7CD; emu_call();
}

/**
 * Decompiled function f__06F7_0020_0011_E117()
 *
 * @name f__06F7_0020_0011_E117
 * @implements 06F7:0020:0011:E117 ()
 *
 * Called From: 06F7:0019:0018:D7CD
 */
void f__06F7_0020_0011_E117()
{
	emu_movw(&emu_ax.x, 0x10);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0031); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__06F7_0031_000F_001D();
}

/**
 * Decompiled function f__06F7_0031_000F_001D()
 *
 * @name f__06F7_0031_000F_001D
 * @implements 06F7:0031:000F:001D ()
 *
 * Called From: 06F7:0031:0011:E117
 */
void f__06F7_0031_000F_001D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B0), 0x0);
	if (emu_flags.zf) { f__06F7_0040_0007_F7AC(); return; }
	/* Unresolved jump */ emu_ip = 0x030B; emu_last_cs = 0x06F7; emu_last_ip = 0x003D; emu_last_length = 0x000F; emu_last_crc = 0x001D; emu_call();
}

/**
 * Decompiled function f__06F7_0040_0007_F7AC()
 *
 * @name f__06F7_0040_0007_F7AC
 * @implements 06F7:0040:0007:F7AC ()
 *
 * Called From: 06F7:003B:000F:001D
 */
void f__06F7_0040_0007_F7AC()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__06F7_0047_0012_9B52(); return; }
	f__06F7_030B_0013_4514(); return;
}

/**
 * Decompiled function f__06F7_0047_0012_9B52()
 *
 * @name f__06F7_0047_0012_9B52
 * @implements 06F7:0047:0012:9B52 ()
 *
 * Called From: 06F7:0042:0007:F7AC
 */
void f__06F7_0047_0012_9B52()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0059); emu_cs = 0x0FE4; f__0FE4_0243_003A_D5F2();
	f__06F7_0059_0006_5624();
}

/**
 * Decompiled function f__06F7_0059_0006_5624()
 *
 * @name f__06F7_0059_0006_5624
 * @implements 06F7:0059:0006:5624 ()
 *
 * Called From: 06F7:0059:0012:9B52
 */
void f__06F7_0059_0006_5624()
{
	emu_addws(&emu_sp, 0x8);
	f__06F7_02FA_0011_7F82(); return;
}

/**
 * Decompiled function f__06F7_005F_002E_4089()
 *
 * @name f__06F7_005F_002E_4089
 * @implements 06F7:005F:002E:4089 ()
 *
 * Called From: 06F7:0308:0011:7F82
 * Called From: 06F7:0308:0013:34B4
 */
void f__06F7_005F_002E_4089()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x008D); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__06F7_008D_0015_2E50();
}

/**
 * Decompiled function f__06F7_008D_0015_2E50()
 *
 * @name f__06F7_008D_0015_2E50
 * @implements 06F7:008D:0015:2E50 ()
 *
 * Called From: 06F7:008D:002E:4089
 */
void f__06F7_008D_0015_2E50()
{
	emu_addws(&emu_sp, 0x8);
	emu_movb(&emu_cx.l, 0x4);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if ((emu_flags.sf != emu_flags.of)) { f__06F7_00A2_0035_5769(); return; }
	f__06F7_02EE_000A_B112(); return;
}

/**
 * Decompiled function f__06F7_00A2_0035_5769()
 *
 * @name f__06F7_00A2_0035_5769
 * @implements 06F7:00A2:0035:5769 ()
 *
 * Called From: 06F7:009D:0015:2E50
 */
void f__06F7_00A2_0035_5769()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (!emu_flags.zf) { f__06F7_00B1_0026_6889(); return; }
	emu_cmpws(&emu_di, 0xD);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00DA; emu_last_cs = 0x06F7; emu_last_ip = 0x00AF; emu_last_length = 0x0035; emu_last_crc = 0x5769; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x1A);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00DA; emu_last_cs = 0x06F7; emu_last_ip = 0x00B9; emu_last_length = 0x0035; emu_last_crc = 0x5769; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movb(&emu_cx.l, 0x2);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_si);
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_shrw(&emu_dx.x, emu_cx.l);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x00D7); emu_cs = 0x1A34; f__1A34_0B71_0033_9787();
	f__06F7_00D7_0014_59DD();
}

/**
 * Decompiled function f__06F7_00B1_0026_6889()
 *
 * @name f__06F7_00B1_0026_6889
 * @implements 06F7:00B1:0026:6889 ()
 *
 * Called From: 06F7:00AA:0035:5769
 */
void f__06F7_00B1_0026_6889()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x1A);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00DA; emu_last_cs = 0x06F7; emu_last_ip = 0x00B9; emu_last_length = 0x0026; emu_last_crc = 0x6889; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movb(&emu_cx.l, 0x2);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_si);
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_shrw(&emu_dx.x, emu_cx.l);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x00D7); emu_cs = 0x1A34; f__1A34_0B71_0033_9787();
	f__06F7_00D7_0014_59DD();
}

/**
 * Decompiled function f__06F7_00D7_0014_59DD()
 *
 * @name f__06F7_00D7_0014_59DD
 * @implements 06F7:00D7:0014:59DD ()
 *
 * Called From: 06F7:00D7:0026:6889
 * Called From: 06F7:00D7:0035:5769
 */
void f__06F7_00D7_0014_59DD()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__06F7_00EB_0008_086B(); return; }
	f__06F7_02EE_000A_B112(); return;
}

/**
 * Decompiled function f__06F7_00EB_0008_086B()
 *
 * @name f__06F7_00EB_0008_086B
 * @implements 06F7:00EB:0008:086B ()
 *
 * Called From: 06F7:00E6:0014:59DD
 */
void f__06F7_00EB_0008_086B()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x00F3); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	f__06F7_00F3_0012_487D();
}

/**
 * Decompiled function f__06F7_00F3_0012_487D()
 *
 * @name f__06F7_00F3_0012_487D
 * @implements 06F7:00F3:0012:487D ()
 *
 * Called From: 06F7:00F3:0008:086B
 */
void f__06F7_00F3_0012_487D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!emu_flags.zf) { f__06F7_0105_0013_9DE3(); return; }
	f__06F7_02EE_000A_B112(); return;
}

/**
 * Decompiled function f__06F7_0105_0013_9DE3()
 *
 * @name f__06F7_0105_0013_9DE3
 * @implements 06F7:0105:0013:9DE3 ()
 *
 * Called From: 06F7:0100:0012:487D
 */
void f__06F7_0105_0013_9DE3()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0118; emu_last_cs = 0x06F7; emu_last_ip = 0x010E; emu_last_length = 0x0013; emu_last_crc = 0x9DE3; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!emu_flags.zf) { f__06F7_0118_000B_FD16(); return; }
	f__06F7_02EE_000A_B112(); return;
}

/**
 * Decompiled function f__06F7_0118_000B_FD16()
 *
 * @name f__06F7_0118_000B_FD16
 * @implements 06F7:0118:000B:FD16 ()
 *
 * Called From: 06F7:0113:0013:9DE3
 */
void f__06F7_0118_000B_FD16()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0123); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__06F7_0123_000E_417E();
}

/**
 * Decompiled function f__06F7_0123_000E_417E()
 *
 * @name f__06F7_0123_000E_417E
 * @implements 06F7:0123:000E:417E ()
 *
 * Called From: 06F7:0123:000B:FD16
 */
void f__06F7_0123_000E_417E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs); emu_push(0x0131); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__06F7_0131_0008_9688();
}

/**
 * Decompiled function f__06F7_0131_0008_9688()
 *
 * @name f__06F7_0131_0008_9688
 * @implements 06F7:0131:0008:9688 ()
 *
 * Called From: 06F7:0131:000E:417E
 */
void f__06F7_0131_0008_9688()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0139); emu_cs = 0x1423; f__1423_0F34_0017_464D();
	f__06F7_0139_0009_F712();
}

/**
 * Decompiled function f__06F7_0139_0009_F712()
 *
 * @name f__06F7_0139_0009_F712
 * @implements 06F7:0139:0009:F712 ()
 *
 * Called From: 06F7:0139:0008:9688
 */
void f__06F7_0139_0009_F712()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__06F7_0142_000B_E1A3(); return; }
	f__06F7_02EE_000A_B112(); return;
}

/**
 * Decompiled function f__06F7_0142_000B_E1A3()
 *
 * @name f__06F7_0142_000B_E1A3
 * @implements 06F7:0142:000B:E1A3 ()
 *
 * Called From: 06F7:013D:0009:F712
 */
void f__06F7_0142_000B_E1A3()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x014D); emu_cs = 0x0FE4; f__0FE4_0632_0031_75AA();
	f__06F7_014D_0025_8494();
}

/**
 * Decompiled function f__06F7_014D_0025_8494()
 *
 * @name f__06F7_014D_0025_8494
 * @implements 06F7:014D:0025:8494 ()
 *
 * Called From: 06F7:014D:000B:E1A3
 */
void f__06F7_014D_0025_8494()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_flags.zf) { f__06F7_01D0_0049_4F3C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0188; emu_last_cs = 0x06F7; emu_last_ip = 0x0165; emu_last_length = 0x0025; emu_last_crc = 0x8494; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0172); emu_cs = 0x16BC; emu_ip = 0x0044; emu_last_cs = 0x06F7; emu_last_ip = 0x016D; emu_last_length = 0x0025; emu_last_crc = 0x8494; emu_call();
	/* Unresolved jump */ emu_ip = 0x0172; emu_last_cs = 0x06F7; emu_last_ip = 0x0172; emu_last_length = 0x0025; emu_last_crc = 0x8494; emu_call();
}

/**
 * Decompiled function f__06F7_01D0_0049_4F3C()
 *
 * @name f__06F7_01D0_0049_4F3C
 * @implements 06F7:01D0:0049:4F3C ()
 *
 * Called From: 06F7:015B:0025:8494
 */
void f__06F7_01D0_0049_4F3C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { f__06F7_0229_001F_480B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x0);
	if (!emu_flags.zf) { f__06F7_0229_001F_480B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0229; emu_last_cs = 0x06F7; emu_last_ip = 0x01FE; emu_last_length = 0x0049; emu_last_crc = 0x4F3C; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x021C; emu_last_cs = 0x06F7; emu_last_ip = 0x0208; emu_last_length = 0x0049; emu_last_crc = 0x4F3C; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0219); emu_cs = 0x176C; emu_ip = 0x000E; emu_last_cs = 0x06F7; emu_last_ip = 0x0214; emu_last_length = 0x0049; emu_last_crc = 0x4F3C; emu_call();
	/* Unresolved jump */ emu_ip = 0x0219; emu_last_cs = 0x06F7; emu_last_ip = 0x0219; emu_last_length = 0x0049; emu_last_crc = 0x4F3C; emu_call();
}

/**
 * Decompiled function f__06F7_0229_001F_480B()
 *
 * @name f__06F7_0229_001F_480B
 * @implements 06F7:0229:001F:480B ()
 *
 * Called From: 06F7:01D8:0049:4F3C
 * Called From: 06F7:01F4:0049:4F3C
 */
void f__06F7_0229_001F_480B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0xFF);
	if (!emu_flags.zf) { f__06F7_0248_0032_1BCC(); return; }
	f__06F7_02EE_000A_B112(); return;
}

/**
 * Decompiled function f__06F7_0248_0032_1BCC()
 *
 * @name f__06F7_0248_0032_1BCC
 * @implements 06F7:0248:0032:1BCC ()
 *
 * Called From: 06F7:0243:001F:480B
 */
void f__06F7_0248_0032_1BCC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x027D; emu_last_cs = 0x06F7; emu_last_ip = 0x0254; emu_last_length = 0x0032; emu_last_crc = 0x1BCC; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x3);
	if (!emu_flags.zf) { f__06F7_027D_002A_EB74(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x200);
	if (emu_flags.zf) { f__06F7_027D_002A_EB74(); return; }
	emu_movw(&emu_ax.x, 0xB);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x027A); emu_cs = 0x176C; f__176C_000E_000E_633D();
	f__06F7_027A_002D_3F30();
}

/**
 * Decompiled function f__06F7_027A_002D_3F30()
 *
 * @name f__06F7_027A_002D_3F30
 * @implements 06F7:027A:002D:3F30 ()
 *
 * Called From: 06F7:027A:0032:1BCC
 */
void f__06F7_027A_002D_3F30()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (emu_flags.zf) { f__06F7_0291_0016_E02E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0xB);
	if (emu_flags.zf) { f__06F7_029B_000C_9030(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02EE; emu_last_cs = 0x06F7; emu_last_ip = 0x0299; emu_last_length = 0x002D; emu_last_crc = 0x3F30; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x02A7); emu_cs = 0x167E; emu_ip = 0x0284; emu_last_cs = 0x06F7; emu_last_ip = 0x02A2; emu_last_length = 0x002D; emu_last_crc = 0x3F30; emu_call();
	f__06F7_02A7_0015_A544();
}

/**
 * Decompiled function f__06F7_027D_002A_EB74()
 *
 * @name f__06F7_027D_002A_EB74
 * @implements 06F7:027D:002A:EB74 ()
 *
 * Called From: 06F7:025E:0032:1BCC
 * Called From: 06F7:0269:0032:1BCC
 */
void f__06F7_027D_002A_EB74()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (emu_flags.zf) { f__06F7_0291_0016_E02E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0xB);
	if (emu_flags.zf) { f__06F7_029B_000C_9030(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (!emu_flags.zf) { f__06F7_02EE_000A_B112(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x02A7); emu_cs = 0x167E; emu_ip = 0x0284; emu_last_cs = 0x06F7; emu_last_ip = 0x02A2; emu_last_length = 0x002A; emu_last_crc = 0xEB74; emu_call();
	f__06F7_02A7_0015_A544();
}

/**
 * Decompiled function f__06F7_0291_0016_E02E()
 *
 * @name f__06F7_0291_0016_E02E
 * @implements 06F7:0291:0016:E02E ()
 *
 * Called From: 06F7:0285:002D:3F30
 * Called From: 06F7:0285:002A:EB74
 */
void f__06F7_0291_0016_E02E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02EE; emu_last_cs = 0x06F7; emu_last_ip = 0x0299; emu_last_length = 0x0016; emu_last_crc = 0xE02E; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_push(emu_cs); emu_push(0x02A7); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	f__06F7_02A7_0015_A544();
}

/**
 * Decompiled function f__06F7_029B_000C_9030()
 *
 * @name f__06F7_029B_000C_9030
 * @implements 06F7:029B:000C:9030 ()
 *
 * Called From: 06F7:028F:002A:EB74
 * Called From: 06F7:028F:002D:3F30
 */
void f__06F7_029B_000C_9030()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_push(emu_cs); emu_push(0x02A7); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	f__06F7_02A7_0015_A544();
}

/**
 * Decompiled function f__06F7_02A7_0015_A544()
 *
 * @name f__06F7_02A7_0015_A544
 * @implements 06F7:02A7:0015:A544 ()
 *
 * Called From: 06F7:02A7:000C:9030
 * Called From: 06F7:02A7:0016:E02E
 */
void f__06F7_02A7_0015_A544()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__06F7_02DD_000E_1B8D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x02BC); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__06F7_02BC_000F_C338();
}

/**
 * Decompiled function f__06F7_02BC_000F_C338()
 *
 * @name f__06F7_02BC_000F_C338
 * @implements 06F7:02BC:000F:C338 ()
 *
 * Called From: 06F7:02BC:0015:A544
 */
void f__06F7_02BC_000F_C338()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_push(emu_cs); emu_push(0x02CB); emu_cs = 0x167E; f__167E_0162_000D_A6D2();
	f__06F7_02CB_0007_838A();
}

/**
 * Decompiled function f__06F7_02CB_0007_838A()
 *
 * @name f__06F7_02CB_0007_838A
 * @implements 06F7:02CB:0007:838A ()
 *
 * Called From: 06F7:02CB:000F:C338
 */
void f__06F7_02CB_0007_838A()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02D2); emu_cs = 0x0F3F; f__0F3F_0360_0038_97C0();
	f__06F7_02D2_0019_1195();
}

/**
 * Decompiled function f__06F7_02D2_0019_1195()
 *
 * @name f__06F7_02D2_0019_1195
 * @implements 06F7:02D2:0019:1195 ()
 *
 * Called From: 06F7:02D2:0007:838A
 */
void f__06F7_02D2_0019_1195()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x50));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__06F7_02EE_000A_B112(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x02EB); emu_cs = 0x1A34; f__1A34_1A66_0011_34D4();
	f__06F7_02EB_000D_6556();
}

/**
 * Decompiled function f__06F7_02DD_000E_1B8D()
 *
 * @name f__06F7_02DD_000E_1B8D
 * @implements 06F7:02DD:000E:1B8D ()
 *
 * Called From: 06F7:02AA:0015:A544
 */
void f__06F7_02DD_000E_1B8D()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x02EB); emu_cs = 0x1A34; f__1A34_1A66_0011_34D4();
	f__06F7_02EB_000D_6556();
}

/**
 * Decompiled function f__06F7_02EB_000D_6556()
 *
 * @name f__06F7_02EB_000D_6556
 * @implements 06F7:02EB:000D:6556 ()
 *
 * Called From: 06F7:02EB:000E:1B8D
 * Called From: 06F7:02EB:0019:1195
 */
void f__06F7_02EB_000D_6556()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02F8); emu_cs = 0x0FE4; f__0FE4_0283_0038_4950();
	f__06F7_02F8_0013_34B4();
}

/**
 * Decompiled function f__06F7_02EE_000A_B112()
 *
 * @name f__06F7_02EE_000A_B112
 * @implements 06F7:02EE:000A:B112 ()
 *
 * Called From: 06F7:009F:0015:2E50
 * Called From: 06F7:00E8:0014:59DD
 * Called From: 06F7:0102:0012:487D
 * Called From: 06F7:0115:0013:9DE3
 * Called From: 06F7:013F:0009:F712
 * Called From: 06F7:0245:001F:480B
 * Called From: 06F7:0299:002A:EB74
 * Called From: 06F7:02DB:0019:1195
 */
void f__06F7_02EE_000A_B112()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02F8); emu_cs = 0x0FE4; f__0FE4_0283_0038_4950();
	f__06F7_02F8_0013_34B4();
}

/**
 * Decompiled function f__06F7_02F8_0013_34B4()
 *
 * @name f__06F7_02F8_0013_34B4
 * @implements 06F7:02F8:0013:34B4 ()
 *
 * Called From: 06F7:02F8:000A:B112
 * Called From: 06F7:02F8:000D:6556
 */
void f__06F7_02F8_0013_34B4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) { f__06F7_030B_0013_4514(); return; }
	f__06F7_005F_002E_4089(); return;
}

/**
 * Decompiled function f__06F7_02FA_0011_7F82()
 *
 * @name f__06F7_02FA_0011_7F82
 * @implements 06F7:02FA:0011:7F82 ()
 *
 * Called From: 06F7:005C:0006:5624
 */
void f__06F7_02FA_0011_7F82()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x030B; emu_last_cs = 0x06F7; emu_last_ip = 0x0306; emu_last_length = 0x0011; emu_last_crc = 0x7F82; emu_call(); return; }
	f__06F7_005F_002E_4089(); return;
}

/**
 * Decompiled function f__06F7_030B_0013_4514()
 *
 * @name f__06F7_030B_0013_4514
 * @implements 06F7:030B:0013:4514 ()
 *
 * Called From: 06F7:0044:0007:F7AC
 * Called From: 06F7:0306:0013:34B4
 */
void f__06F7_030B_0013_4514()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B0), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x037A; emu_last_cs = 0x06F7; emu_last_ip = 0x0310; emu_last_length = 0x0013; emu_last_crc = 0x4514; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__06F7_037A_0008_610A(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x031E); emu_cs = 0x34CD; ovl__34CD(30);
	f__06F7_031E_0049_CA1D();
}

/**
 * Decompiled function f__06F7_031E_0049_CA1D()
 *
 * @name f__06F7_031E_0049_CA1D
 * @implements 06F7:031E:0049:CA1D ()
 *
 * Called From: 06F7:031E:0013:4514
 */
void f__06F7_031E_0049_CA1D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	if (emu_flags.zf) { f__06F7_037A_0008_610A(); return; }
	emu_cmpws(&emu_di, 0x2);
	if (!emu_flags.zf) { f__06F7_0359_000E_E9D8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1A));
	emu_sarw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__06F7_0359_000E_E9D8(); return; }
	emu_movw(&emu_di, 0xF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0367); emu_cs = 0x1423; f__1423_0E4F_0010_843C();
	f__06F7_0367_0010_92A7();
}

/**
 * Decompiled function f__06F7_0359_000E_E9D8()
 *
 * @name f__06F7_0359_000E_E9D8
 * @implements 06F7:0359:000E:E9D8 ()
 *
 * Called From: 06F7:0330:0049:CA1D
 * Called From: 06F7:0354:0049:CA1D
 */
void f__06F7_0359_000E_E9D8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0367); emu_cs = 0x1423; f__1423_0E4F_0010_843C();
	f__06F7_0367_0010_92A7();
}

/**
 * Decompiled function f__06F7_0367_0010_92A7()
 *
 * @name f__06F7_0367_0010_92A7
 * @implements 06F7:0367:0010:92A7 ()
 *
 * Called From: 06F7:0367:000E:E9D8
 * Called From: 06F7:0367:0049:CA1D
 */
void f__06F7_0367_0010_92A7()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_cs); emu_push(0x0377); emu_cs = 0x0C3A; f__0C3A_1216_0013_E56D();
	f__06F7_0377_000B_301E();
}

/**
 * Decompiled function f__06F7_0377_000B_301E()
 *
 * @name f__06F7_0377_000B_301E
 * @implements 06F7:0377:000B:301E ()
 *
 * Called From: 06F7:0377:0010:92A7
 */
void f__06F7_0377_000B_301E()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0382); emu_cs = 0x34CD; ovl__34CD(13);
	f__06F7_0382_001B_4D13();
}

/**
 * Decompiled function f__06F7_037A_0008_610A()
 *
 * @name f__06F7_037A_0008_610A
 * @implements 06F7:037A:0008:610A ()
 *
 * Called From: 06F7:0314:0013:4514
 * Called From: 06F7:032B:0049:CA1D
 */
void f__06F7_037A_0008_610A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0382); emu_cs = 0x34CD; ovl__34CD(13);
	f__06F7_0382_001B_4D13();
}

/**
 * Decompiled function f__06F7_0382_001B_4D13()
 *
 * @name f__06F7_0382_001B_4D13
 * @implements 06F7:0382:001B:4D13 ()
 *
 * Called From: 06F7:0382:0008:610A
 * Called From: 06F7:0382:000B:301E
 */
void f__06F7_0382_001B_4D13()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0xB);
	if (!emu_flags.zf) { f__06F7_03E0_0019_5C88(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03E0; emu_last_cs = 0x06F7; emu_last_ip = 0x038A; emu_last_length = 0x001B; emu_last_crc = 0x4D13; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x2C94);
	emu_movw(&emu_es, emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_es, 0x00,  0x55A), emu_si);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x039D; emu_last_cs = 0x06F7; emu_last_ip = 0x0396; emu_last_length = 0x001B; emu_last_crc = 0x4D13; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x039F; emu_last_cs = 0x06F7; emu_last_ip = 0x039B; emu_last_length = 0x001B; emu_last_crc = 0x4D13; emu_call();
}

/**
 * Decompiled function f__06F7_03E0_0019_5C88()
 *
 * @name f__06F7_03E0_0019_5C88
 * @implements 06F7:03E0:0019:5C88 ()
 *
 * Called From: 06F7:0386:001B:4D13
 */
void f__06F7_03E0_0019_5C88()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x3214));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x3212));
	emu_push(emu_cs);
	emu_push(0x03F9); f__06F7_0493_0015_AAB2();
	f__06F7_03F9_0009_B39F();
}

/**
 * Decompiled function f__06F7_03F9_0009_B39F()
 *
 * @name f__06F7_03F9_0009_B39F
 * @implements 06F7:03F9:0009:B39F ()
 *
 * Called From: 06F7:03F9:0019:5C88
 */
void f__06F7_03F9_0009_B39F()
{
	emu_addws(&emu_sp, 0x8);
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
 * Decompiled function f__06F7_0493_0015_AAB2()
 *
 * @name f__06F7_0493_0015_AAB2
 * @implements 06F7:0493:0015:AAB2 ()
 *
 * Called From: 06F7:03F6:0019:5C88
 */
void f__06F7_0493_0015_AAB2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__06F7_04A8_000B_8922(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x0576; emu_last_cs = 0x06F7; emu_last_ip = 0x04A5; emu_last_length = 0x0015; emu_last_crc = 0xAAB2; emu_call();
}

/**
 * Decompiled function f__06F7_04A5_0003_9D13()
 *
 * @name f__06F7_04A5_0003_9D13
 * @implements 06F7:04A5:0003:9D13 ()
 *
 * Called From: 06F7:0567:008D:B829
 */
void f__06F7_04A5_0003_9D13()
{
	f__06F7_0576_0006_F7CE(); return;
}

/**
 * Decompiled function f__06F7_04A8_000B_8922()
 *
 * @name f__06F7_04A8_000B_8922
 * @implements 06F7:04A8:000B:8922 ()
 *
 * Called From: 06F7:04A1:0015:AAB2
 */
void f__06F7_04A8_000B_8922()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x04B3); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__06F7_04B3_000A_7932();
}

/**
 * Decompiled function f__06F7_04B3_000A_7932()
 *
 * @name f__06F7_04B3_000A_7932
 * @implements 06F7:04B3:000A:7932 ()
 *
 * Called From: 06F7:04B3:000B:8922
 */
void f__06F7_04B3_000A_7932()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x04BD); f__06F7_057C_001F_E1C7();
	f__06F7_04BD_0006_189C();
}

/**
 * Decompiled function f__06F7_04BD_0006_189C()
 *
 * @name f__06F7_04BD_0006_189C
 * @implements 06F7:04BD:0006:189C ()
 *
 * Called From: 06F7:04BD:000A:7932
 */
void f__06F7_04BD_0006_189C()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_si, emu_si);
	f__06F7_056B_0008_53A0(); return;
}

/**
 * Decompiled function f__06F7_04C3_001A_0964()
 *
 * @name f__06F7_04C3_001A_0964
 * @implements 06F7:04C3:001A:0964 ()
 *
 * Called From: 06F7:0570:0008:53A0
 * Called From: 06F7:0570:0009:5383
 */
void f__06F7_04C3_001A_0964()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x395A));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (emu_flags.zf) { f__06F7_04DD_008D_B829(); return; }
	f__06F7_056A_0009_5383(); return;
}

/**
 * Decompiled function f__06F7_04DD_008D_B829()
 *
 * @name f__06F7_04DD_008D_B829
 * @implements 06F7:04DD:008D:B829 ()
 *
 * Called From: 06F7:04D8:001A:0964
 */
void f__06F7_04DD_008D_B829()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x395C));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x395A));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x7), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3210), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x320E), 0x0);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x80);
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_04A5_0003_9D13(); return;
}

/**
 * Decompiled function f__06F7_056A_0009_5383()
 *
 * @name f__06F7_056A_0009_5383
 * @implements 06F7:056A:0009:5383 ()
 *
 * Called From: 06F7:04DA:001A:0964
 */
void f__06F7_056A_0009_5383()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0573; emu_last_cs = 0x06F7; emu_last_ip = 0x056E; emu_last_length = 0x0009; emu_last_crc = 0x5383; emu_call(); return; }
	f__06F7_04C3_001A_0964(); return;
}

/**
 * Decompiled function f__06F7_056B_0008_53A0()
 *
 * @name f__06F7_056B_0008_53A0
 * @implements 06F7:056B:0008:53A0 ()
 *
 * Called From: 06F7:04C0:0006:189C
 */
void f__06F7_056B_0008_53A0()
{
	emu_cmpws(&emu_si, 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0573; emu_last_cs = 0x06F7; emu_last_ip = 0x056E; emu_last_length = 0x0008; emu_last_crc = 0x53A0; emu_call(); return; }
	f__06F7_04C3_001A_0964(); return;
}

/**
 * Decompiled function f__06F7_0576_0006_F7CE()
 *
 * @name f__06F7_0576_0006_F7CE
 * @implements 06F7:0576:0006:F7CE ()
 *
 * Called From: 06F7:04A5:0003:9D13
 */
void f__06F7_0576_0006_F7CE()
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
 * Decompiled function f__06F7_057C_001F_E1C7()
 *
 * @name f__06F7_057C_001F_E1C7
 * @implements 06F7:057C:001F:E1C7 ()
 *
 * Called From: 06F7:04BA:000A:7932
 */
void f__06F7_057C_001F_E1C7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x80);
	if (emu_flags.zf) { f__06F7_05FA_0004_9539(); return; }
	emu_xorw(&emu_si, emu_si);
	f__06F7_05F0_000A_4FBF(); return;
}

/**
 * Decompiled function f__06F7_059B_0031_20FF()
 *
 * @name f__06F7_059B_0031_20FF
 * @implements 06F7:059B:0031:20FF ()
 *
 * Called From: 06F7:05F3:000A:4FBF
 * Called From: 06F7:05F3:000E:ADDD
 * Called From: 06F7:05F3:000B:8FB7
 */
void f__06F7_059B_0031_20FF()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x395A));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (emu_flags.zf) { f__06F7_05EF_000B_8FB7(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x395A));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x05CC); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__06F7_05CC_0020_AD79();
}

/**
 * Decompiled function f__06F7_05CC_0020_AD79()
 *
 * @name f__06F7_05CC_0020_AD79
 * @implements 06F7:05CC:0020:AD79 ()
 *
 * Called From: 06F7:05CC:0031:20FF
 */
void f__06F7_05CC_0020_AD79()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { f__06F7_05EF_000B_8FB7(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x395A));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x395C));
	emu_push(emu_dx.x);
	emu_push(emu_cs);
	emu_push(0x05EC); f__06F7_0A6C_0016_FA05();
	f__06F7_05EC_000E_ADDD();
}

/**
 * Decompiled function f__06F7_05EC_000E_ADDD()
 *
 * @name f__06F7_05EC_000E_ADDD
 * @implements 06F7:05EC:000E:ADDD ()
 *
 * Called From: 06F7:05EC:0020:AD79
 */
void f__06F7_05EC_000E_ADDD()
{
	emu_addws(&emu_sp, 0x6);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x20);
	if ((emu_flags.sf != emu_flags.of)) { f__06F7_059B_0031_20FF(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x05FE; emu_last_cs = 0x06F7; emu_last_ip = 0x05F8; emu_last_length = 0x000E; emu_last_crc = 0xADDD; emu_call();
}

/**
 * Decompiled function f__06F7_05EF_000B_8FB7()
 *
 * @name f__06F7_05EF_000B_8FB7
 * @implements 06F7:05EF:000B:8FB7 ()
 *
 * Called From: 06F7:05B0:0031:20FF
 * Called From: 06F7:05D0:0020:AD79
 */
void f__06F7_05EF_000B_8FB7()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x20);
	if ((emu_flags.sf != emu_flags.of)) { f__06F7_059B_0031_20FF(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_05FE_0004_DE52(); return;
}

/**
 * Decompiled function f__06F7_05F0_000A_4FBF()
 *
 * @name f__06F7_05F0_000A_4FBF
 * @implements 06F7:05F0:000A:4FBF ()
 *
 * Called From: 06F7:0599:001F:E1C7
 */
void f__06F7_05F0_000A_4FBF()
{
	emu_cmpws(&emu_si, 0x20);
	if ((emu_flags.sf != emu_flags.of)) { f__06F7_059B_0031_20FF(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x05FE; emu_last_cs = 0x06F7; emu_last_ip = 0x05F8; emu_last_length = 0x000A; emu_last_crc = 0x4FBF; emu_call();
}

/**
 * Decompiled function f__06F7_05F8_0002_C23A()
 *
 * @name f__06F7_05F8_0002_C23A
 * @implements 06F7:05F8:0002:C23A ()
 *
 * Called From: 06F7:05FC:0004:9539
 */
void f__06F7_05F8_0002_C23A()
{
	f__06F7_05FE_0004_DE52(); return;
}

/**
 * Decompiled function f__06F7_05FA_0004_9539()
 *
 * @name f__06F7_05FA_0004_9539
 * @implements 06F7:05FA:0004:9539 ()
 *
 * Called From: 06F7:0595:001F:E1C7
 */
void f__06F7_05FA_0004_9539()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__06F7_05F8_0002_C23A(); return;
}

/**
 * Decompiled function f__06F7_05FE_0004_DE52()
 *
 * @name f__06F7_05FE_0004_DE52
 * @implements 06F7:05FE:0004:DE52 ()
 *
 * Called From: 06F7:05F8:0002:C23A
 * Called From: 06F7:05F8:000B:8FB7
 */
void f__06F7_05FE_0004_DE52()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0602_0018_CEB0()
 *
 * @name f__06F7_0602_0018_CEB0
 * @implements 06F7:0602:0018:CEB0 ()
 *
 * Called From: 07D4:0044:0015:CB18
 * Called From: 07D4:0044:0005:E72D
 */
void f__06F7_0602_0018_CEB0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3210));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x320E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__06F7_061A_000B_03AD(); return; }
	f__06F7_0704_0009_7D17(); return;
}

/**
 * Decompiled function f__06F7_061A_000B_03AD()
 *
 * @name f__06F7_061A_000B_03AD
 * @implements 06F7:061A:000B:03AD ()
 *
 * Called From: 06F7:0615:0018:CEB0
 */
void f__06F7_061A_000B_03AD()
{
	if (!emu_flags.zf) { f__06F7_0625_0010_F195(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if ((emu_flags.cf || emu_flags.zf)) { f__06F7_0625_0010_F195(); return; }
	f__06F7_0704_0009_7D17(); return;
}

/**
 * Decompiled function f__06F7_0625_0010_F195()
 *
 * @name f__06F7_0625_0010_F195
 * @implements 06F7:0625:0010:F195 ()
 *
 * Called From: 06F7:061A:000B:03AD
 * Called From: 06F7:0620:000B:03AD
 */
void f__06F7_0625_0010_F195()
{
	emu_addw(&emu_get_memory16(emu_ds, 0x00,  0x320E), 0x2710);
	emu_adcws(&emu_get_memory16(emu_ds, 0x00,  0x3210), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__06F7_06FC_0008_13B8(); return;
}

/**
 * Decompiled function f__06F7_0635_0027_82B9()
 *
 * @name f__06F7_0635_0027_82B9
 * @implements 06F7:0635:0027:82B9 ()
 *
 * Called From: 06F7:0701:0008:13B8
 * Called From: 06F7:0701:0009:139B
 * Called From: 06F7:0701:0042:731D
 * Called From: 06F7:0701:003F:D13B
 * Called From: 06F7:0701:001A:BE2E
 */
void f__06F7_0635_0027_82B9()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x395C));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x395A));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (!emu_flags.zf) { f__06F7_065C_0066_DC6B(); return; }
	f__06F7_06FB_0009_139B(); return;
}

/**
 * Decompiled function f__06F7_065C_0066_DC6B()
 *
 * @name f__06F7_065C_0066_DC6B
 * @implements 06F7:065C:0066:DC6B ()
 *
 * Called From: 06F7:0657:0027:82B9
 */
void f__06F7_065C_0066_DC6B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x06C5; emu_last_cs = 0x06F7; emu_last_ip = 0x066A; emu_last_length = 0x0066; emu_last_crc = 0xDC6B; emu_call(); return; }
	if (!emu_flags.zf) { f__06F7_0674_004E_37CC(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!(emu_flags.cf || emu_flags.zf)) { f__06F7_06C5_003F_D13B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_ax.x, 0xFFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0xC);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_andw(&emu_ax.x, 0xF);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_di, 0xE);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__06F7_06AF_0013_D2D5(); return; }
	emu_movw(&emu_di, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, emu_bx.x,  0x3262);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, emu_bx.x,  0x3264);
	emu_push(0x06C2);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x06F7; emu_last_ip = 0x06BE; emu_last_length = 0x0066; emu_last_crc = 0xDC6B;
			emu_call();
			return;
	}
	f__06F7_06C2_0042_731D();
}

/**
 * Decompiled function f__06F7_0674_004E_37CC()
 *
 * @name f__06F7_0674_004E_37CC
 * @implements 06F7:0674:004E:37CC ()
 *
 * Called From: 06F7:066C:0066:DC6B
 */
void f__06F7_0674_004E_37CC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_ax.x, 0xFFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0xC);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_andw(&emu_ax.x, 0xF);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_di, 0xE);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__06F7_06AF_0013_D2D5(); return; }
	emu_movw(&emu_di, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, emu_bx.x,  0x3262);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, emu_bx.x,  0x3264);
	emu_push(0x06C2);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x06F7; emu_last_ip = 0x06BE; emu_last_length = 0x004E; emu_last_crc = 0x37CC;
			emu_call();
			return;
	}
	f__06F7_06C2_0042_731D();
}

/**
 * Decompiled function f__06F7_06AF_0013_D2D5()
 *
 * @name f__06F7_06AF_0013_D2D5
 * @implements 06F7:06AF:0013:D2D5 ()
 *
 * Called From: 06F7:06AA:0066:DC6B
 * Called From: 06F7:06AA:004E:37CC
 */
void f__06F7_06AF_0013_D2D5()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, emu_bx.x,  0x3262);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, emu_bx.x,  0x3264);
	emu_push(0x06C2);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x06F7072B: f__06F7_072B_0018_F05F(); break;
		case 0x06F708BD: f__06F7_08BD_0016_9292(); break;
		case 0x06F708DD: f__06F7_08DD_0013_C78B(); break;
		case 0x06F70913: f__06F7_0913_0013_C78B(); break;
		case 0x06F70A27: f__06F7_0A27_001D_1D75(); break;
		case 0x06F70A6C: f__06F7_0A6C_0016_FA05(); break;
		case 0x06F70AC1: f__06F7_0AC1_001F_55CB(); break;
		case 0x06F70AE2: f__06F7_0AE2_0010_0B2F(); break;
		case 0x06F70B14: f__06F7_0B14_0024_BD9C(); break;
		case 0x06F70B42: f__06F7_0B42_0024_BD9D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x06F7; emu_last_ip = 0x06BE; emu_last_length = 0x0013; emu_last_crc = 0xD2D5;
			emu_call();
			return;
	}
	f__06F7_06C2_0042_731D();
}

/**
 * Decompiled function f__06F7_06C2_0042_731D()
 *
 * @name f__06F7_06C2_0042_731D
 * @implements 06F7:06C2:0042:731D ()
 *
 * Called From: 06F7:06C2:0013:D2D5
 */
void f__06F7_06C2_0042_731D()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (emu_flags.zf) { f__06F7_06FB_0009_139B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3210));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__06F7_06FB_0009_139B(); return; }
	if ((emu_flags.sf != emu_flags.of)) { f__06F7_06EA_001A_BE2E(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x320E));
	if (!emu_flags.cf) { f__06F7_06FB_0009_139B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3210), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x320E), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0704; emu_last_cs = 0x06F7; emu_last_ip = 0x06FF; emu_last_length = 0x0042; emu_last_crc = 0x731D; emu_call(); return; }
	f__06F7_0635_0027_82B9(); return;
}

/**
 * Decompiled function f__06F7_06C5_003F_D13B()
 *
 * @name f__06F7_06C5_003F_D13B
 * @implements 06F7:06C5:003F:D13B ()
 *
 * Called From: 06F7:0672:0066:DC6B
 */
void f__06F7_06C5_003F_D13B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x06FB; emu_last_cs = 0x06F7; emu_last_ip = 0x06D0; emu_last_length = 0x003F; emu_last_crc = 0xD13B; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3210));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__06F7_06FB_0009_139B(); return; }
	if ((emu_flags.sf != emu_flags.of)) { f__06F7_06EA_001A_BE2E(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x320E));
	if (!emu_flags.cf) { f__06F7_06FB_0009_139B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3210), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x320E), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0704; emu_last_cs = 0x06F7; emu_last_ip = 0x06FF; emu_last_length = 0x003F; emu_last_crc = 0xD13B; emu_call(); return; }
	f__06F7_0635_0027_82B9(); return;
}

/**
 * Decompiled function f__06F7_06EA_001A_BE2E()
 *
 * @name f__06F7_06EA_001A_BE2E
 * @implements 06F7:06EA:001A:BE2E ()
 *
 * Called From: 06F7:06E2:0042:731D
 * Called From: 06F7:06E2:003F:D13B
 */
void f__06F7_06EA_001A_BE2E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3210), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x320E), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0704; emu_last_cs = 0x06F7; emu_last_ip = 0x06FF; emu_last_length = 0x001A; emu_last_crc = 0xBE2E; emu_call(); return; }
	f__06F7_0635_0027_82B9(); return;
}

/**
 * Decompiled function f__06F7_06FB_0009_139B()
 *
 * @name f__06F7_06FB_0009_139B
 * @implements 06F7:06FB:0009:139B ()
 *
 * Called From: 06F7:0659:0027:82B9
 * Called From: 06F7:06D0:0042:731D
 * Called From: 06F7:06E0:003F:D13B
 * Called From: 06F7:06E0:0042:731D
 * Called From: 06F7:06E8:003F:D13B
 * Called From: 06F7:06E8:0042:731D
 */
void f__06F7_06FB_0009_139B()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { f__06F7_0704_0009_7D17(); return; }
	f__06F7_0635_0027_82B9(); return;
}

/**
 * Decompiled function f__06F7_06FC_0008_13B8()
 *
 * @name f__06F7_06FC_0008_13B8
 * @implements 06F7:06FC:0008:13B8 ()
 *
 * Called From: 06F7:0632:0010:F195
 */
void f__06F7_06FC_0008_13B8()
{
	emu_cmpws(&emu_si, 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { f__06F7_0704_0009_7D17(); return; }
	f__06F7_0635_0027_82B9(); return;
}

/**
 * Decompiled function f__06F7_0704_0009_7D17()
 *
 * @name f__06F7_0704_0009_7D17
 * @implements 06F7:0704:0009:7D17 ()
 *
 * Called From: 06F7:0617:0018:CEB0
 * Called From: 06F7:0622:000B:03AD
 * Called From: 06F7:06FF:0009:139B
 * Called From: 06F7:06FF:0008:13B8
 */
void f__06F7_0704_0009_7D17()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3210));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x320E));
	f__06F7_070D_0006_F7CE(); return;
}

/**
 * Decompiled function f__06F7_070D_0006_F7CE()
 *
 * @name f__06F7_070D_0006_F7CE
 * @implements 06F7:070D:0006:F7CE ()
 *
 * Called From: 06F7:070B:0009:7D17
 */
void f__06F7_070D_0006_F7CE()
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
 * Decompiled function f__06F7_072B_0018_F05F()
 *
 * @name f__06F7_072B_0018_F05F
 * @implements 06F7:072B:0018:F05F ()
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_072B_0018_F05F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x0743); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__06F7_0743_000A_CA6A();
}

/**
 * Decompiled function f__06F7_0743_000A_CA6A()
 *
 * @name f__06F7_0743_000A_CA6A
 * @implements 06F7:0743:000A:CA6A ()
 *
 * Called From: 06F7:0743:0018:F05F
 */
void f__06F7_0743_000A_CA6A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x074D); emu_cs = 0x34CD; ovl__34CD(9);
	f__06F7_074D_000A_5E83();
}

/**
 * Decompiled function f__06F7_074D_000A_5E83()
 *
 * @name f__06F7_074D_000A_5E83
 * @implements 06F7:074D:000A:5E83 ()
 *
 * Called From: 06F7:074D:000A:CA6A
 */
void f__06F7_074D_000A_5E83()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__06F7_0757_0006_16E4(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__06F7_08B7_0006_F7CE(); return;
}

/**
 * Decompiled function f__06F7_0752_0005_1C2C()
 *
 * @name f__06F7_0752_0005_1C2C
 * @implements 06F7:0752:0005:1C2C ()
 *
 * Called From: 06F7:076F:0008:8987
 */
void f__06F7_0752_0005_1C2C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__06F7_08B7_0006_F7CE(); return;
}

/**
 * Decompiled function f__06F7_0754_0003_1DB8()
 *
 * @name f__06F7_0754_0003_1DB8
 * @implements 06F7:0754:0003:1DB8 ()
 *
 * Called From: 06F7:08B4:0009:8640
 */
void f__06F7_0754_0003_1DB8()
{
	f__06F7_08B7_0006_F7CE(); return;
}

/**
 * Decompiled function f__06F7_0757_0006_16E4()
 *
 * @name f__06F7_0757_0006_16E4
 * @implements 06F7:0757:0006:16E4 ()
 *
 * Called From: 06F7:0750:000A:5E83
 */
void f__06F7_0757_0006_16E4()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x075D); emu_cs = 0x34CD; ovl__34CD(13);
	f__06F7_075D_000C_C42B();
}

/**
 * Decompiled function f__06F7_075D_000C_C42B()
 *
 * @name f__06F7_075D_000C_C42B
 * @implements 06F7:075D:000C:C42B ()
 *
 * Called From: 06F7:075D:0006:16E4
 */
void f__06F7_075D_000C_C42B()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0xD);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x076F; emu_last_cs = 0x06F7; emu_last_ip = 0x0761; emu_last_length = 0x000C; emu_last_crc = 0xC42B; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0769); emu_cs = 0x34CD; ovl__34CD(13);
	f__06F7_0769_0008_8987();
}

/**
 * Decompiled function f__06F7_0769_0008_8987()
 *
 * @name f__06F7_0769_0008_8987
 * @implements 06F7:0769:0008:8987 ()
 *
 * Called From: 06F7:0769:000C:C42B
 */
void f__06F7_0769_0008_8987()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0xC);
	if (!emu_flags.zf) { f__06F7_0771_0006_16E4(); return; }
	f__06F7_0752_0005_1C2C(); return;
}

/**
 * Decompiled function f__06F7_0771_0006_16E4()
 *
 * @name f__06F7_0771_0006_16E4
 * @implements 06F7:0771:0006:16E4 ()
 *
 * Called From: 06F7:076D:0008:8987
 */
void f__06F7_0771_0006_16E4()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0777); emu_cs = 0x34CD; ovl__34CD(13);
	f__06F7_0777_003A_CADB();
}

/**
 * Decompiled function f__06F7_0777_003A_CADB()
 *
 * @name f__06F7_0777_003A_CADB
 * @implements 06F7:0777:003A:CADB ()
 *
 * Called From: 06F7:0777:0006:16E4
 */
void f__06F7_0777_003A_CADB()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0xA);
	if (!emu_flags.zf) { f__06F7_07B4_0006_16E4(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x323F));
	emu_andw(&emu_ax.x, 0x7FFF);
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_dx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x07B1); emu_cs = 0x34CD; ovl__34CD(29);
	f__06F7_07B1_0009_52A9();
}

/**
 * Decompiled function f__06F7_07B1_0009_52A9()
 *
 * @name f__06F7_07B1_0009_52A9
 * @implements 06F7:07B1:0009:52A9 ()
 *
 * Called From: 06F7:07B1:003A:CADB
 */
void f__06F7_07B1_0009_52A9()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x07BA); emu_cs = 0x34CD; ovl__34CD(13);
	f__06F7_07BA_001E_E1E4();
}

/**
 * Decompiled function f__06F7_07B4_0006_16E4()
 *
 * @name f__06F7_07B4_0006_16E4
 * @implements 06F7:07B4:0006:16E4 ()
 *
 * Called From: 06F7:077B:003A:CADB
 */
void f__06F7_07B4_0006_16E4()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x07BA); emu_cs = 0x34CD; ovl__34CD(13);
	f__06F7_07BA_001E_E1E4();
}

/**
 * Decompiled function f__06F7_07BA_001E_E1E4()
 *
 * @name f__06F7_07BA_001E_E1E4
 * @implements 06F7:07BA:001E:E1E4 ()
 *
 * Called From: 06F7:07BA:0006:16E4
 * Called From: 06F7:07BA:0009:52A9
 */
void f__06F7_07BA_001E_E1E4()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3A52));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x329E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFF);
	if (!emu_flags.zf) { f__06F7_07D8_002A_42DA(); return; }
	/* Unresolved jump */ emu_ip = 0x0752; emu_last_cs = 0x06F7; emu_last_ip = 0x07D5; emu_last_length = 0x001E; emu_last_crc = 0xE1E4; emu_call();
}

/**
 * Decompiled function f__06F7_07D8_002A_42DA()
 *
 * @name f__06F7_07D8_002A_42DA
 * @implements 06F7:07D8:002A:42DA ()
 *
 * Called From: 06F7:07D3:001E:E1E4
 */
void f__06F7_07D8_002A_42DA()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_shrw(&emu_ax.x, 0x1);
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	emu_subw(&emu_ax.x, 0x10);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.cf) { f__06F7_0802_0036_B153(); return; }
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0802; emu_last_cs = 0x06F7; emu_last_ip = 0x07FD; emu_last_length = 0x002A; emu_last_crc = 0x42DA; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0752; emu_last_cs = 0x06F7; emu_last_ip = 0x07FF; emu_last_length = 0x002A; emu_last_crc = 0x42DA; emu_call();
}

/**
 * Decompiled function f__06F7_0802_0036_B153()
 *
 * @name f__06F7_0802_0036_B153
 * @implements 06F7:0802:0036:B153 ()
 *
 * Called From: 06F7:07F7:002A:42DA
 */
void f__06F7_0802_0036_B153()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x39F0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_di);
	if (!(emu_flags.cf || emu_flags.zf)) { f__06F7_0833_0005_517D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_di);
	if (!emu_flags.cf) { f__06F7_083F_0018_1886(); return; }
	emu_push(emu_cs); emu_push(0x0838); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__06F7_0838_0007_6C78();
}

/**
 * Decompiled function f__06F7_0833_0005_517D()
 *
 * @name f__06F7_0833_0005_517D
 * @implements 06F7:0833:0005:517D ()
 *
 * Called From: 06F7:0828:0036:B153
 */
void f__06F7_0833_0005_517D()
{
	emu_push(emu_cs); emu_push(0x0838); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__06F7_0838_0007_6C78();
}

/**
 * Decompiled function f__06F7_0838_0007_6C78()
 *
 * @name f__06F7_0838_0007_6C78
 * @implements 06F7:0838:0007:6C78 ()
 *
 * Called From: 06F7:0838:0005:517D
 * Called From: 06F7:0838:0036:B153
 */
void f__06F7_0838_0007_6C78()
{
	emu_andw(&emu_ax.x, 0x1);
	emu_movw(&emu_di, emu_ax.x);
	f__06F7_084D_000A_9737(); return;
}

/**
 * Decompiled function f__06F7_083F_0018_1886()
 *
 * @name f__06F7_083F_0018_1886
 * @implements 06F7:083F:0018:1886 ()
 *
 * Called From: 06F7:0831:0036:B153
 */
void f__06F7_083F_0018_1886()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpws(&emu_di, 0x4);
	if (!emu_flags.cf) { f__06F7_084D_000A_9737(); return; }
	emu_addws(&emu_di, 0x2);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0857); emu_cs = 0x34CD; ovl__34CD(28);
	f__06F7_0857_0024_722A();
}

/**
 * Decompiled function f__06F7_084D_000A_9737()
 *
 * @name f__06F7_084D_000A_9737
 * @implements 06F7:084D:000A:9737 ()
 *
 * Called From: 06F7:083D:0007:6C78
 * Called From: 06F7:0848:0018:1886
 */
void f__06F7_084D_000A_9737()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0857); emu_cs = 0x34CD; ovl__34CD(28);
	f__06F7_0857_0024_722A();
}

/**
 * Decompiled function f__06F7_0857_0024_722A()
 *
 * @name f__06F7_0857_0024_722A
 * @implements 06F7:0857:0024:722A ()
 *
 * Called From: 06F7:0857:000A:9737
 * Called From: 06F7:0857:0018:1886
 */
void f__06F7_0857_0024_722A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_andw(&emu_ax.x, 0x1FF);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F4));
	if (!emu_flags.zf) { f__06F7_0880_002E_5B22(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_si);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x087B); emu_cs = 0x34CD; emu_ip = 0x0093; emu_last_cs = 0x06F7; emu_last_ip = 0x0876; emu_last_length = 0x0024; emu_last_crc = 0x722A; emu_call();
	/* Unresolved jump */ emu_ip = 0x087B; emu_last_cs = 0x06F7; emu_last_ip = 0x087B; emu_last_length = 0x0024; emu_last_crc = 0x722A; emu_call();
}

/**
 * Decompiled function f__06F7_0880_002E_5B22()
 *
 * @name f__06F7_0880_002E_5B22
 * @implements 06F7:0880:002E:5B22 ()
 *
 * Called From: 06F7:086F:0024:722A
 */
void f__06F7_0880_002E_5B22()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_dx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), 0x1);
	emu_shlb(&emu_ax.l, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), emu_ax.l);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x08AE); emu_cs = 0x34CD; ovl__34CD(29);
	f__06F7_08AE_0009_8640();
}

/**
 * Decompiled function f__06F7_08AE_0009_8640()
 *
 * @name f__06F7_08AE_0009_8640
 * @implements 06F7:08AE:0009:8640 ()
 *
 * Called From: 06F7:08AE:002E:5B22
 */
void f__06F7_08AE_0009_8640()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_0754_0003_1DB8(); return;
}

/**
 * Decompiled function f__06F7_08B7_0006_F7CE()
 *
 * @name f__06F7_08B7_0006_F7CE
 * @implements 06F7:08B7:0006:F7CE ()
 *
 * Called From: 06F7:0754:000A:5E83
 * Called From: 06F7:0754:0003:1DB8
 * Called From: 06F7:0754:0005:1C2C
 */
void f__06F7_08B7_0006_F7CE()
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
 * Decompiled function f__06F7_08BD_0016_9292()
 *
 * @name f__06F7_08BD_0016_9292
 * @implements 06F7:08BD:0016:9292 ()
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_08BD_0016_9292()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x08D3); emu_cs = 0x3483; ovl__3483(0);
	f__06F7_08D3_0008_4F72();
}

/**
 * Decompiled function f__06F7_08D3_0008_4F72()
 *
 * @name f__06F7_08D3_0008_4F72
 * @implements 06F7:08D3:0008:4F72 ()
 *
 * Called From: 06F7:08D3:0016:9292
 */
void f__06F7_08D3_0008_4F72()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_08DB_0002_2597(); return;
}

/**
 * Decompiled function f__06F7_08DB_0002_2597()
 *
 * @name f__06F7_08DB_0002_2597
 * @implements 06F7:08DB:0002:2597 ()
 *
 * Called From: 06F7:08D9:0008:4F72
 */
void f__06F7_08DB_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_08DD_0013_C78B()
 *
 * @name f__06F7_08DD_0013_C78B
 * @implements 06F7:08DD:0013:C78B ()
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_08DD_0013_C78B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x08F0); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__06F7_08F0_0008_9754();
}

/**
 * Decompiled function f__06F7_08F0_0008_9754()
 *
 * @name f__06F7_08F0_0008_9754
 * @implements 06F7:08F0:0008:9754 ()
 *
 * Called From: 06F7:08F0:0013:C78B
 */
void f__06F7_08F0_0008_9754()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08F8); emu_cs = 0x34CD; ovl__34CD(9);
	f__06F7_08F8_0013_E47B();
}

/**
 * Decompiled function f__06F7_08F8_0013_E47B()
 *
 * @name f__06F7_08F8_0013_E47B
 * @implements 06F7:08F8:0013:E47B ()
 *
 * Called From: 06F7:08F8:0008:9754
 */
void f__06F7_08F8_0013_E47B()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__06F7_090C_0005_D5FA(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66E0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66E2);
	emu_push(0x090B);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A61200: f__22A6_1200_007B_0356(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x06F7; emu_last_ip = 0x0906; emu_last_length = 0x0013; emu_last_crc = 0xE47B;
			emu_call();
			return;
	}
	f__06F7_090B_0006_B1FB();
}

/**
 * Decompiled function f__06F7_090B_0006_B1FB()
 *
 * @name f__06F7_090B_0006_B1FB
 * @implements 06F7:090B:0006:B1FB ()
 *
 * Called From: 06F7:090B:0013:E47B
 */
void f__06F7_090B_0006_B1FB()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_0911_0002_2597(); return;
}

/**
 * Decompiled function f__06F7_090C_0005_D5FA()
 *
 * @name f__06F7_090C_0005_D5FA
 * @implements 06F7:090C:0005:D5FA ()
 *
 * Called From: 06F7:08FB:0013:E47B
 */
void f__06F7_090C_0005_D5FA()
{
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_0911_0002_2597(); return;
}

/**
 * Decompiled function f__06F7_0911_0002_2597()
 *
 * @name f__06F7_0911_0002_2597
 * @implements 06F7:0911:0002:2597 ()
 *
 * Called From: 06F7:090F:0006:B1FB
 * Called From: 06F7:090F:0005:D5FA
 */
void f__06F7_0911_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0913_0013_C78B()
 *
 * @name f__06F7_0913_0013_C78B
 * @implements 06F7:0913:0013:C78B ()
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0913_0013_C78B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x0926); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__06F7_0926_002C_6E65();
}

/**
 * Decompiled function f__06F7_0926_002C_6E65()
 *
 * @name f__06F7_0926_002C_6E65
 * @implements 06F7:0926:002C:6E65 ()
 *
 * Called From: 06F7:0926:0013:C78B
 */
void f__06F7_0926_002C_6E65()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_andw(&emu_ax.x, 0x1FF);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F4));
	if (!emu_flags.zf) { f__06F7_0960_0005_A97A(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x0952); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__06F7_0952_0008_7759();
}

/**
 * Decompiled function f__06F7_0952_0008_7759()
 *
 * @name f__06F7_0952_0008_7759
 * @implements 06F7:0952:0008:7759 ()
 *
 * Called From: 06F7:0952:002C:6E65
 */
void f__06F7_0952_0008_7759()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x095A); emu_cs = 0x34CD; ovl__34CD(23);
	f__06F7_095A_0006_8C70();
}

/**
 * Decompiled function f__06F7_095A_0006_8C70()
 *
 * @name f__06F7_095A_0006_8C70
 * @implements 06F7:095A:0006:8C70 ()
 *
 * Called From: 06F7:095A:0008:7759
 */
void f__06F7_095A_0006_8C70()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__06F7_0965_0002_2597(); return;
}

/**
 * Decompiled function f__06F7_095E_0002_C2BA()
 *
 * @name f__06F7_095E_0002_C2BA
 * @implements 06F7:095E:0002:C2BA ()
 *
 * Called From: 06F7:0963:0005:A97A
 */
void f__06F7_095E_0002_C2BA()
{
	f__06F7_0965_0002_2597(); return;
}

/**
 * Decompiled function f__06F7_0960_0005_A97A()
 *
 * @name f__06F7_0960_0005_A97A
 * @implements 06F7:0960:0005:A97A ()
 *
 * Called From: 06F7:093C:002C:6E65
 */
void f__06F7_0960_0005_A97A()
{
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_095E_0002_C2BA(); return;
}

/**
 * Decompiled function f__06F7_0965_0002_2597()
 *
 * @name f__06F7_0965_0002_2597
 * @implements 06F7:0965:0002:2597 ()
 *
 * Called From: 06F7:095E:0002:C2BA
 * Called From: 06F7:095E:0006:8C70
 */
void f__06F7_0965_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0A27_001D_1D75()
 *
 * @name f__06F7_0A27_001D_1D75
 * @implements 06F7:0A27:001D:1D75 ()
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0A27_001D_1D75()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_si, emu_di);
	emu_testw(&emu_di, 0x800);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0A3B; emu_last_cs = 0x06F7; emu_last_ip = 0x0A35; emu_last_length = 0x001D; emu_last_crc = 0x1D75; emu_call(); return; }
	emu_orw(&emu_si, 0xF000);
	emu_push(emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A44); emu_cs = 0x0F3F; f__0F3F_002C_000B_51FA();
	f__06F7_0A44_0012_8814();
}

/**
 * Decompiled function f__06F7_0A44_0012_8814()
 *
 * @name f__06F7_0A44_0012_8814
 * @implements 06F7:0A44:0012:8814 ()
 *
 * Called From: 06F7:0A44:001D:1D75
 */
void f__06F7_0A44_0012_8814()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_ax.x);
	emu_adcw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_0A56_0004_DE52(); return;
}

/**
 * Decompiled function f__06F7_0A56_0004_DE52()
 *
 * @name f__06F7_0A56_0004_DE52
 * @implements 06F7:0A56:0004:DE52 ()
 *
 * Called From: 06F7:0A54:0012:8814
 */
void f__06F7_0A56_0004_DE52()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0A6C_0016_FA05()
 *
 * @name f__06F7_0A6C_0016_FA05
 * @implements 06F7:0A6C:0016:FA05 ()
 *
 * Called From: 06F7:05E9:0020:AD79
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0A6C_0016_FA05()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x0A82); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__06F7_0A82_0025_93F6();
}

/**
 * Decompiled function f__06F7_0A82_0025_93F6()
 *
 * @name f__06F7_0A82_0025_93F6
 * @implements 06F7:0A82:0025:93F6 ()
 *
 * Called From: 06F7:0A82:0016:FA05
 */
void f__06F7_0A82_0025_93F6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x7F);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0AA7); emu_cs = 0x34CD; ovl__34CD(14);
	f__06F7_0AA7_0016_284C();
}

/**
 * Decompiled function f__06F7_0AA7_0016_284C()
 *
 * @name f__06F7_0AA7_0016_284C
 * @implements 06F7:0AA7:0016:284C ()
 *
 * Called From: 06F7:0AA7:0025:93F6
 */
void f__06F7_0AA7_0016_284C()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__06F7_0ABD_0004_893F(); return;
}

/**
 * Decompiled function f__06F7_0ABD_0004_893F()
 *
 * @name f__06F7_0ABD_0004_893F
 * @implements 06F7:0ABD:0004:893F ()
 *
 * Called From: 06F7:0ABB:0016:284C
 */
void f__06F7_0ABD_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0AC1_001F_55CB()
 *
 * @name f__06F7_0AC1_001F_55CB
 * @implements 06F7:0AC1:001F:55CB ()
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0AC1_001F_55CB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_adcw(&emu_ax.x, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_0AE0_0002_2597(); return;
}

/**
 * Decompiled function f__06F7_0AE0_0002_2597()
 *
 * @name f__06F7_0AE0_0002_2597
 * @implements 06F7:0AE0:0002:2597 ()
 *
 * Called From: 06F7:0ADE:001F:55CB
 */
void f__06F7_0AE0_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0AE2_0010_0B2F()
 *
 * @name f__06F7_0AE2_0010_0B2F
 * @implements 06F7:0AE2:0010:0B2F ()
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0AE2_0010_0B2F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0AF2); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	f__06F7_0AF2_001F_99B5();
}

/**
 * Decompiled function f__06F7_0AF2_001F_99B5()
 *
 * @name f__06F7_0AF2_001F_99B5
 * @implements 06F7:0AF2:001F:99B5 ()
 *
 * Called From: 06F7:0AF2:0010:0B2F
 */
void f__06F7_0AF2_001F_99B5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addw(&emu_dx.x, emu_si);
	emu_adcw(&emu_ax.x, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_0B11_0003_2E57(); return;
}

/**
 * Decompiled function f__06F7_0B11_0003_2E57()
 *
 * @name f__06F7_0B11_0003_2E57
 * @implements 06F7:0B11:0003:2E57 ()
 *
 * Called From: 06F7:0B0F:001F:99B5
 */
void f__06F7_0B11_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0B14_0024_BD9C()
 *
 * @name f__06F7_0B14_0024_BD9C
 * @implements 06F7:0B14:0024:BD9C ()
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0B14_0024_BD9C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B38); emu_cs = 0x34CD; ovl__34CD(14);
	f__06F7_0B38_0008_4F72();
}

/**
 * Decompiled function f__06F7_0B38_0008_4F72()
 *
 * @name f__06F7_0B38_0008_4F72
 * @implements 06F7:0B38:0008:4F72 ()
 *
 * Called From: 06F7:0B38:0024:BD9C
 */
void f__06F7_0B38_0008_4F72()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_0B40_0002_2597(); return;
}

/**
 * Decompiled function f__06F7_0B40_0002_2597()
 *
 * @name f__06F7_0B40_0002_2597
 * @implements 06F7:0B40:0002:2597 ()
 *
 * Called From: 06F7:0B3E:0008:4F72
 */
void f__06F7_0B40_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0B42_0024_BD9D()
 *
 * @name f__06F7_0B42_0024_BD9D
 * @implements 06F7:0B42:0024:BD9D ()
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0B42_0024_BD9D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x1);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B66); emu_cs = 0x34CD; ovl__34CD(14);
	f__06F7_0B66_0008_4F72();
}

/**
 * Decompiled function f__06F7_0B66_0008_4F72()
 *
 * @name f__06F7_0B66_0008_4F72
 * @implements 06F7:0B66:0008:4F72 ()
 *
 * Called From: 06F7:0B66:0024:BD9D
 */
void f__06F7_0B66_0008_4F72()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__06F7_0B6E_0002_2597(); return;
}

/**
 * Decompiled function f__06F7_0B6E_0002_2597()
 *
 * @name f__06F7_0B6E_0002_2597
 * @implements 06F7:0B6E:0002:2597 ()
 *
 * Called From: 06F7:0B6C:0008:4F72
 */
void f__06F7_0B6E_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
