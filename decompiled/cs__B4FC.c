/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4FC_0000_0018_E5DC()
 *
 * @name f__B4FC_0000_0018_E5DC
 * @implements B4FC:0000:0018:E5DC ()
 *
 * Called From: 34FC:0020:0005:0000
 */
void f__B4FC_0000_0018_E5DC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x10);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2AD2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x10);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0018); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0018_0028_4660(); return;
}

/**
 * Decompiled function f__B4FC_0018_0028_4660()
 *
 * @name f__B4FC_0018_0028_4660
 * @implements B4FC:0018:0028:4660 ()
 *
 */
void f__B4FC_0018_0028_4660()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x10);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x10);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0040); f__B4FC_03C8_002C_9251();
	f__B4FC_0040_000D_B649(); return;
}

/**
 * Decompiled function f__B4FC_0040_000D_B649()
 *
 * @name f__B4FC_0040_000D_B649
 * @implements B4FC:0040:000D:B649 ()
 *
 */
void f__B4FC_0040_000D_B649()
{
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x10);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x004D); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_004D_0004_5B1F(); return;
}

/**
 * Decompiled function f__B4FC_004D_0004_5B1F()
 *
 * @name f__B4FC_004D_0004_5B1F
 * @implements B4FC:004D:0004:5B1F ()
 *
 */
void f__B4FC_004D_0004_5B1F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B4FC_0051_0004_893F(); return;
}

/**
 * Decompiled function f__B4FC_0051_0004_893F()
 *
 * @name f__B4FC_0051_0004_893F
 * @implements B4FC:0051:0004:893F ()
 *
 * Called From: B4FC:004F:0004:5B1F
 */
void f__B4FC_0051_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4FC_03C8_002C_9251()
 *
 * @name f__B4FC_03C8_002C_9251
 * @implements B4FC:03C8:002C:9251 ()
 *
 * Called From: 34FC:0025:0005:0000
 * Called From: B4FC:003D:0028:4660
 */
void f__B4FC_03C8_002C_9251()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x46);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0405; emu_last_cs = 0xB4FC; emu_last_ip = 0x03D6; emu_last_length = 0x002C; emu_last_crc = 0x9251; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.zf) { f__B4FC_03F7_001D_D8F9(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs); emu_push(0x03F4); emu_cs = 0x01F7; f__01F7_39C4_0031_EE87();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_03F4_0020_5053(); return;
}

/**
 * Decompiled function f__B4FC_03F4_0020_5053()
 *
 * @name f__B4FC_03F4_0020_5053
 * @implements B4FC:03F4:0020:5053 ()
 *
 */
void f__B4FC_03F4_0020_5053()
{
	emu_addw(&emu_sp, 0xA);
	f__B4FC_03F7_001D_D8F9(); return;
}

/**
 * Decompiled function f__B4FC_03F7_001D_D8F9()
 *
 * @name f__B4FC_03F7_001D_D8F9
 * @implements B4FC:03F7:001D:D8F9 ()
 *
 * Called From: B4FC:03DE:002C:9251
 */
void f__B4FC_03F7_001D_D8F9()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xFFFF), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x18));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x1A));
	if (!emu_flags.zf) { f__B4FC_0416_000B_F320(); return; }
	f__B4FC_040D_0007_5563(); return;
}

/**
 * Decompiled function f__B4FC_040D_0007_5563()
 *
 * @name f__B4FC_040D_0007_5563
 * @implements B4FC:040D:0007:5563 ()
 *
 * Called From: B4FC:0493:0014:3ECD
 * Called From: B4FC:05AB:001C:63EB
 * Called From: B4FC:05AB:0003:A237
 */
void f__B4FC_040D_0007_5563()
{
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	f__B4FC_0411_0003_1C92(); return;
}

/**
 * Decompiled function f__B4FC_0411_0003_1C92()
 *
 * @name f__B4FC_0411_0003_1C92
 * @implements B4FC:0411:0003:1C92 ()
 *
 * Called From: B4FC:07D9:0009:9AB9
 */
void f__B4FC_0411_0003_1C92()
{
	f__B4FC_07DC_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4FC_0416_000B_F320()
 *
 * @name f__B4FC_0416_000B_F320
 * @implements B4FC:0416:000B:F320 ()
 *
 * Called From: B4FC:040B:0020:5053
 * Called From: B4FC:040B:001D:D8F9
 */
void f__B4FC_0416_000B_F320()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x18));
	emu_push(emu_cs); emu_push(0x0421); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0421_001D_503F(); return;
}

/**
 * Decompiled function f__B4FC_0421_001D_503F()
 *
 * @name f__B4FC_0421_001D_503F
 * @implements B4FC:0421:001D:503F ()
 *
 */
void f__B4FC_0421_001D_503F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x1A), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x18), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2AEE);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x46);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x043E); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_043E_000D_8516(); return;
}

/**
 * Decompiled function f__B4FC_043E_000D_8516()
 *
 * @name f__B4FC_043E_000D_8516
 * @implements B4FC:043E:000D:8516 ()
 *
 */
void f__B4FC_043E_000D_8516()
{
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x46);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x044B); emu_cs = 0x01F7; f__01F7_3CD5_000D_9D98();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_044B_000C_346F(); return;
}

/**
 * Decompiled function f__B4FC_044B_000C_346F()
 *
 * @name f__B4FC_044B_000C_346F
 * @implements B4FC:044B:000C:346F ()
 *
 */
void f__B4FC_044B_000C_346F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x46);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0457); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0457_002B_AFC3(); return;
}

/**
 * Decompiled function f__B4FC_0457_002B_AFC3()
 *
 * @name f__B4FC_0457_002B_AFC3
 * @implements B4FC:0457:002B:AFC3 ()
 *
 */
void f__B4FC_0457_002B_AFC3()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x1A));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x1A));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	f__B4FC_0473_000F_D507(); return;
}

/**
 * Decompiled function f__B4FC_0473_000F_D507()
 *
 * @name f__B4FC_0473_000F_D507
 * @implements B4FC:0473:000F:D507 ()
 *
 * Called From: B4FC:07D0:0006:5D34
 */
void f__B4FC_0473_000F_D507()
{
	emu_movw(&emu_ax, 0x5B);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0482); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0482_0014_3ECD(); return;
}

/**
 * Decompiled function f__B4FC_0482_0014_3ECD()
 *
 * @name f__B4FC_0482_0014_3ECD
 * @implements B4FC:0482:0014:3ECD ()
 *
 */
void f__B4FC_0482_0014_3ECD()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B4FC_0496_001B_F59D(); return; }
	f__B4FC_040D_0007_5563(); return;
}

/**
 * Decompiled function f__B4FC_0496_001B_F59D()
 *
 * @name f__B4FC_0496_001B_F59D
 * @implements B4FC:0496:001B:F59D ()
 *
 * Called From: B4FC:0491:0014:3ECD
 */
void f__B4FC_0496_001B_F59D()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xFFFF));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x11), emu_al);
	emu_push(emu_si);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x46);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x04B1); emu_cs = 0x01F7; f__01F7_28DC_0009_EE56();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_04B1_000A_85B3(); return;
}

/**
 * Decompiled function f__B4FC_04B1_000A_85B3()
 *
 * @name f__B4FC_04B1_000A_85B3
 * @implements B4FC:04B1:000A:85B3 ()
 *
 */
void f__B4FC_04B1_000A_85B3()
{
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4FC_04BB_000F_5F8E(); return; }
	f__B4FC_07CD_0006_5D34(); return;
}

/**
 * Decompiled function f__B4FC_04BB_000F_5F8E()
 *
 * @name f__B4FC_04BB_000F_5F8E
 * @implements B4FC:04BB:000F:5F8E ()
 *
 * Called From: B4FC:04B6:000A:85B3
 */
void f__B4FC_04BB_000F_5F8E()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x11), 0xA);
	if (emu_flags.zf) { f__B4FC_04CA_0005_BE35(); return; }
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x11), 0xD);
	if (emu_flags.zf) { f__B4FC_04CA_0005_BE35(); return; }
	f__B4FC_07CD_0006_5D34(); return;
}

/**
 * Decompiled function f__B4FC_04CA_0005_BE35()
 *
 * @name f__B4FC_04CA_0005_BE35
 * @implements B4FC:04CA:0005:BE35 ()
 *
 * Called From: B4FC:04BF:000F:5F8E
 */
void f__B4FC_04CA_0005_BE35()
{
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	f__B4FC_04D2_0022_23CD(); return;
}

/**
 * Decompiled function f__B4FC_04CF_0025_5BB1()
 *
 * @name f__B4FC_04CF_0025_5BB1
 * @implements B4FC:04CF:0025:5BB1 ()
 *
 * Called From: B4FC:04E3:0022:23CD
 * Called From: B4FC:04E3:0025:5BB1
 */
void f__B4FC_04CF_0025_5BB1()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4FC_04D2_0022_23CD(); return;
}

/**
 * Decompiled function f__B4FC_04D2_0022_23CD()
 *
 * @name f__B4FC_04D2_0022_23CD
 * @implements B4FC:04D2:0022:23CD ()
 *
 * Called From: B4FC:04CD:0005:BE35
 */
void f__B4FC_04D2_0022_23CD()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, emu_bx, 0x76BD));
	emu_movws(&emu_ax, emu_al);
	emu_testw(&emu_ax, 0x1);
	if (!emu_flags.zf) { f__B4FC_04CF_0025_5BB1(); return; }
	emu_movw(&emu_ax, 0x5B);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x04F4); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_04F4_0029_C1EA(); return;
}

/**
 * Decompiled function f__B4FC_04F4_0029_C1EA()
 *
 * @name f__B4FC_04F4_0029_C1EA
 * @implements B4FC:04F4:0029:C1EA ()
 *
 */
void f__B4FC_04F4_0029_C1EA()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	f__B4FC_04FD_0020_6A2B(); return;
}

/**
 * Decompiled function f__B4FC_04FD_0020_6A2B()
 *
 * @name f__B4FC_04FD_0020_6A2B
 * @implements B4FC:04FD:0020:6A2B ()
 *
 * Called From: B4FC:0557:0002:923A
 */
void f__B4FC_04FD_0020_6A2B()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) { f__B4FC_0539_000B_6148(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xFFFF));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x11), emu_al);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x11), 0xA);
	if (!emu_flags.zf) {
		emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x11), 0xD);
		if (!emu_flags.zf) { f__B4FC_051D_0011_F59E(); return; }
	}
	f__B4FC_051B_0002_DE3A(); return;
}

/**
 * Decompiled function f__B4FC_051B_0002_DE3A()
 *
 * @name f__B4FC_051B_0002_DE3A
 * @implements B4FC:051B:0002:DE3A ()
 *
 * Called From: B4FC:0513:0029:C1EA
 */
void f__B4FC_051B_0002_DE3A()
{
	f__B4FC_0559_000B_640D(); return;
}

/**
 * Decompiled function f__B4FC_051D_0011_F59E()
 *
 * @name f__B4FC_051D_0011_F59E
 * @implements B4FC:051D:0011:F59E ()
 *
 * Called From: B4FC:0519:0029:C1EA
 * Called From: B4FC:0519:0020:6A2B
 */
void f__B4FC_051D_0011_F59E()
{
	emu_movw(&emu_ax, 0x5B);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_incw(&emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x052E); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_052E_000B_A5CA(); return;
}

/**
 * Decompiled function f__B4FC_052E_000B_A5CA()
 *
 * @name f__B4FC_052E_000B_A5CA
 * @implements B4FC:052E:000B:A5CA ()
 *
 */
void f__B4FC_052E_000B_A5CA()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	f__B4FC_0557_0002_923A(); return;
}

/**
 * Decompiled function f__B4FC_0539_000B_6148()
 *
 * @name f__B4FC_0539_000B_6148
 * @implements B4FC:0539:000B:6148 ()
 *
 * Called From: B4FC:0503:0029:C1EA
 * Called From: B4FC:0503:0020:6A2B
 */
void f__B4FC_0539_000B_6148()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0544); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0544_0013_A3F2(); return;
}

/**
 * Decompiled function f__B4FC_0544_0013_A3F2()
 *
 * @name f__B4FC_0544_0013_A3F2
 * @implements B4FC:0544:0013:A3F2 ()
 *
 */
void f__B4FC_0544_0013_A3F2()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_decw(&emu_bx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_bx);
	f__B4FC_0559_000B_640D(); return;
}

/**
 * Decompiled function f__B4FC_0557_0002_923A()
 *
 * @name f__B4FC_0557_0002_923A
 * @implements B4FC:0557:0002:923A ()
 *
 * Called From: B4FC:0537:000B:A5CA
 */
void f__B4FC_0557_0002_923A()
{
	f__B4FC_04FD_0020_6A2B(); return;
}

/**
 * Decompiled function f__B4FC_0559_000B_640D()
 *
 * @name f__B4FC_0559_000B_640D
 * @implements B4FC:0559:000B:640D ()
 *
 * Called From: B4FC:051B:0002:DE3A
 * Called From: B4FC:0555:0013:A3F2
 */
void f__B4FC_0559_000B_640D()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__B4FC_0564_0017_0883(); return; }
	f__B4FC_06D8_0017_351B(); return;
}

/**
 * Decompiled function f__B4FC_0564_0017_0883()
 *
 * @name f__B4FC_0564_0017_0883
 * @implements B4FC:0564:0017:0883 ()
 *
 * Called From: B4FC:055F:000B:640D
 */
void f__B4FC_0564_0017_0883()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x057B); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_057B_0017_0D26(); return;
}

/**
 * Decompiled function f__B4FC_057B_0017_0D26()
 *
 * @name f__B4FC_057B_0017_0D26
 * @implements B4FC:057B:0017:0D26 ()
 *
 */
void f__B4FC_057B_0017_0D26()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	f__B4FC_057F_0013_EDC2(); return;
}

/**
 * Decompiled function f__B4FC_057F_0013_EDC2()
 *
 * @name f__B4FC_057F_0013_EDC2
 * @implements B4FC:057F:0013:EDC2 ()
 *
 * Called From: B4FC:06D2:0006:DC36
 */
void f__B4FC_057F_0013_EDC2()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0592); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0592_001C_63EB(); return;
}

/**
 * Decompiled function f__B4FC_0592_001C_63EB()
 *
 * @name f__B4FC_0592_001C_63EB
 * @implements B4FC:0592:001C:63EB ()
 *
 */
void f__B4FC_0592_001C_63EB()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
		if (emu_flags.cf) { f__B4FC_05AE_0027_BF9B(); return; }
	}
	f__B4FC_05AB_0003_A237(); return;
}

/**
 * Decompiled function f__B4FC_05AB_0003_A237()
 *
 * @name f__B4FC_05AB_0003_A237
 * @implements B4FC:05AB:0003:A237 ()
 *
 * Called From: B4FC:05A1:001C:63EB
 */
void f__B4FC_05AB_0003_A237()
{
	f__B4FC_040D_0007_5563(); return;
}

/**
 * Decompiled function f__B4FC_05AE_0027_BF9B()
 *
 * @name f__B4FC_05AE_0027_BF9B
 * @implements B4FC:05AE:0027:BF9B ()
 *
 * Called From: B4FC:05A9:001C:63EB
 */
void f__B4FC_05AE_0027_BF9B()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xFFFF));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x11), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_di);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x12), emu_al);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x05D5); emu_cs = 0x01F7; f__01F7_28DC_0009_EE56();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_05D5_000A_040B(); return;
}

/**
 * Decompiled function f__B4FC_05D5_000A_040B()
 *
 * @name f__B4FC_05D5_000A_040B
 * @implements B4FC:05D5:000A:040B ()
 *
 */
void f__B4FC_05D5_000A_040B()
{
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4FC_05DF_000F_DE36(); return; }
	f__B4FC_06CF_0006_DC36(); return;
}

/**
 * Decompiled function f__B4FC_05DF_000F_DE36()
 *
 * @name f__B4FC_05DF_000F_DE36
 * @implements B4FC:05DF:000F:DE36 ()
 *
 * Called From: B4FC:05DA:000A:040B
 */
void f__B4FC_05DF_000F_DE36()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x11), 0xA);
	if (emu_flags.zf) { f__B4FC_05EE_0016_4149(); return; }
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x11), 0xD);
	if (emu_flags.zf) { f__B4FC_05EE_0016_4149(); return; }
	f__B4FC_06CF_0006_DC36(); return;
}

/**
 * Decompiled function f__B4FC_05EE_0016_4149()
 *
 * @name f__B4FC_05EE_0016_4149
 * @implements B4FC:05EE:0016:4149 ()
 *
 * Called From: B4FC:05E3:000F:DE36
 */
void f__B4FC_05EE_0016_4149()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x12), 0x3D);
	if (emu_flags.zf) { f__B4FC_0604_001E_C800(); return; }
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x12));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_ds, emu_bx, 0x76BD), 0x1);
	if (!emu_flags.zf) { f__B4FC_0604_001E_C800(); return; }
	f__B4FC_06CF_0006_DC36(); return;
}

/**
 * Decompiled function f__B4FC_0604_001E_C800()
 *
 * @name f__B4FC_0604_001E_C800
 * @implements B4FC:0604:001E:C800 ()
 *
 * Called From: B4FC:05F2:0016:4149
 * Called From: B4FC:05FF:0016:4149
 */
void f__B4FC_0604_001E_C800()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_di);
	emu_movw(&emu_ax, 0x3D);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0622); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0622_0018_5684(); return;
}

/**
 * Decompiled function f__B4FC_0622_0018_5684()
 *
 * @name f__B4FC_0622_0018_5684
 * @implements B4FC:0622:0018:5684 ()
 *
 */
void f__B4FC_0622_0018_5684()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, 0xD);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x063A); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_063A_0014_F183(); return;
}

/**
 * Decompiled function f__B4FC_063A_0014_F183()
 *
 * @name f__B4FC_063A_0014_F183
 * @implements B4FC:063A:0014:F183 ()
 *
 */
void f__B4FC_063A_0014_F183()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.cf) { f__B4FC_064E_0012_379C(); return; }
	f__B4FC_07D3_0009_9AB9(); return;
}

/**
 * Decompiled function f__B4FC_064E_0012_379C()
 *
 * @name f__B4FC_064E_0012_379C
 * @implements B4FC:064E:0012:379C ()
 *
 * Called From: B4FC:0649:0014:F183
 */
void f__B4FC_064E_0012_379C()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, 0xD);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0660); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0660_000B_8CCA(); return;
}

/**
 * Decompiled function f__B4FC_0660_000B_8CCA()
 *
 * @name f__B4FC_0660_000B_8CCA
 * @implements B4FC:0660:000B:8CCA ()
 *
 */
void f__B4FC_0660_000B_8CCA()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	f__B4FC_0679_003A_FCA2(); return;
}

/**
 * Decompiled function f__B4FC_066B_000B_C447()
 *
 * @name f__B4FC_066B_000B_C447
 * @implements B4FC:066B:000B:C447 ()
 *
 * Called From: B4FC:068A:003A:FCA2
 * Called From: B4FC:068A:003D:80DA
 */
void f__B4FC_066B_000B_C447()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.cf) { f__B4FC_0676_003D_80DA(); return; }
	f__B4FC_07D3_0009_9AB9(); return;
}

/**
 * Decompiled function f__B4FC_0676_003D_80DA()
 *
 * @name f__B4FC_0676_003D_80DA
 * @implements B4FC:0676:003D:80DA ()
 *
 * Called From: B4FC:0671:000B:C447
 */
void f__B4FC_0676_003D_80DA()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4FC_0679_003A_FCA2(); return;
}

/**
 * Decompiled function f__B4FC_0679_003A_FCA2()
 *
 * @name f__B4FC_0679_003A_FCA2
 * @implements B4FC:0679:003A:FCA2 ()
 *
 * Called From: B4FC:0669:000B:8CCA
 */
void f__B4FC_0679_003A_FCA2()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, emu_bx, 0x76BD));
	emu_movws(&emu_ax, emu_al);
	emu_testw(&emu_ax, 0x1);
	if (!emu_flags.zf) { f__B4FC_066B_000B_C447(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_dx, emu_dx);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_sbbw(&emu_dx, 0x0);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x06CC; emu_last_cs = 0xB4FC; emu_last_ip = 0x069F; emu_last_length = 0x003A; emu_last_crc = 0xFCA2; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs); emu_push(0x06B3); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_06B3_0017_1FA4(); return;
}

/**
 * Decompiled function f__B4FC_06B3_0017_1FA4()
 *
 * @name f__B4FC_06B3_0017_1FA4
 * @implements B4FC:06B3:0017:1FA4 ()
 *
 */
void f__B4FC_06B3_0017_1FA4()
{
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_addw(&emu_bx, emu_si);
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs);
	emu_push(0x06CA); f__B4FC_07E2_0012_911F();
	f__B4FC_06CA_0005_8F6C(); return;
}

/**
 * Decompiled function f__B4FC_06CA_0005_8F6C()
 *
 * @name f__B4FC_06CA_0005_8F6C
 * @implements B4FC:06CA:0005:8F6C ()
 *
 */
void f__B4FC_06CA_0005_8F6C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B4FC_07D3_0009_9AB9(); return;
}

/**
 * Decompiled function f__B4FC_06CF_0006_DC36()
 *
 * @name f__B4FC_06CF_0006_DC36
 * @implements B4FC:06CF:0006:DC36 ()
 *
 * Called From: B4FC:05DC:000A:040B
 * Called From: B4FC:05EB:000F:DE36
 * Called From: B4FC:0601:0016:4149
 */
void f__B4FC_06CF_0006_DC36()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4FC_057F_0013_EDC2(); return;
}

/**
 * Decompiled function f__B4FC_06D8_0017_351B()
 *
 * @name f__B4FC_06D8_0017_351B
 * @implements B4FC:06D8:0017:351B ()
 *
 * Called From: B4FC:0561:000B:640D
 */
void f__B4FC_06D8_0017_351B()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (!emu_flags.zf) { f__B4FC_06EF_0003_1D0C(); return; }
	/* Unresolved jump */ emu_ip = 0x07C9; emu_last_cs = 0xB4FC; emu_last_ip = 0x06EC; emu_last_length = 0x0017; emu_last_crc = 0x351B; emu_call();
}

/**
 * Decompiled function f__B4FC_06EF_0003_1D0C()
 *
 * @name f__B4FC_06EF_0003_1D0C
 * @implements B4FC:06EF:0003:1D0C ()
 *
 * Called From: B4FC:06EA:0017:351B
 */
void f__B4FC_06EF_0003_1D0C()
{
	f__B4FC_07A2_0013_5B66(); return;
}

/**
 * Decompiled function f__B4FC_06F2_000F_D49F()
 *
 * @name f__B4FC_06F2_000F_D49F
 * @implements B4FC:06F2:000F:D49F ()
 *
 * Called From: B4FC:07B2:0013:5B66
 */
void f__B4FC_06F2_000F_D49F()
{
	emu_movw(&emu_ax, 0x3D);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0701); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0701_0014_5930(); return;
}

/**
 * Decompiled function f__B4FC_0701_0014_5930()
 *
 * @name f__B4FC_0701_0014_5930
 * @implements B4FC:0701:0014:5930 ()
 *
 */
void f__B4FC_0701_0014_5930()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B4FC_0715_000B_A4F2(); return; }
	f__B4FC_07A0_0002_C9BA(); return;
}

/**
 * Decompiled function f__B4FC_0715_000B_A4F2()
 *
 * @name f__B4FC_0715_000B_A4F2
 * @implements B4FC:0715:000B:A4F2 ()
 *
 * Called From: B4FC:0710:0014:5930
 */
void f__B4FC_0715_000B_A4F2()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_flags.cf) { f__B4FC_0720_0022_AE11(); return; }
	f__B4FC_07A0_0002_C9BA(); return;
}

/**
 * Decompiled function f__B4FC_0720_0022_AE11()
 *
 * @name f__B4FC_0720_0022_AE11
 * @implements B4FC:0720:0022:AE11 ()
 *
 * Called From: B4FC:071B:000B:A4F2
 */
void f__B4FC_0720_0022_AE11()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_dx, emu_dx);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_sbbw(&emu_dx, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs); emu_push(0x0742); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0742_0018_65C2(); return;
}

/**
 * Decompiled function f__B4FC_0742_0018_65C2()
 *
 * @name f__B4FC_0742_0018_65C2
 * @implements B4FC:0742:0018:65C2 ()
 *
 */
void f__B4FC_0742_0018_65C2()
{
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs);
	emu_push(0x075A); f__B4FC_07E2_0012_911F();
	f__B4FC_075A_000D_14AC(); return;
}

/**
 * Decompiled function f__B4FC_075A_000D_14AC()
 *
 * @name f__B4FC_075A_000D_14AC
 * @implements B4FC:075A:000D:14AC ()
 *
 */
void f__B4FC_075A_000D_14AC()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs); emu_push(0x0767); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0767_0015_3D82(); return;
}

/**
 * Decompiled function f__B4FC_0767_0015_3D82()
 *
 * @name f__B4FC_0767_0015_3D82
 * @implements B4FC:0767:0015:3D82 ()
 *
 */
void f__B4FC_0767_0015_3D82()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x12), emu_ax);
	emu_movw(&emu_ax, 0xD);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x077C); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_077C_0013_3222(); return;
}

/**
 * Decompiled function f__B4FC_077C_0013_3222()
 *
 * @name f__B4FC_077C_0013_3222
 * @implements B4FC:077C:0013:3222 ()
 *
 */
void f__B4FC_077C_0013_3222()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B4FC_078F_0011_A4A2(); return; }
	f__B4FC_07B5_0016_75CA(); return;
}

/**
 * Decompiled function f__B4FC_078F_0011_A4A2()
 *
 * @name f__B4FC_078F_0011_A4A2
 * @implements B4FC:078F:0011:A4A2 ()
 *
 * Called From: B4FC:078B:0013:3222
 */
void f__B4FC_078F_0011_A4A2()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xA);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x079E; emu_last_cs = 0xB4FC; emu_last_ip = 0x0799; emu_last_length = 0x0011; emu_last_crc = 0xA4A2; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4FC_07A2_0013_5B66(); return;
}

/**
 * Decompiled function f__B4FC_07A0_0002_C9BA()
 *
 * @name f__B4FC_07A0_0002_C9BA
 * @implements B4FC:07A0:0002:C9BA ()
 *
 * Called From: B4FC:0712:0014:5930
 * Called From: B4FC:071D:000B:A4F2
 */
void f__B4FC_07A0_0002_C9BA()
{
	f__B4FC_07B5_0016_75CA(); return;
}

/**
 * Decompiled function f__B4FC_07A2_0013_5B66()
 *
 * @name f__B4FC_07A2_0013_5B66
 * @implements B4FC:07A2:0013:5B66 ()
 *
 * Called From: B4FC:06EF:0003:1D0C
 * Called From: B4FC:079E:0011:A4A2
 */
void f__B4FC_07A2_0013_5B66()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__B4FC_07B5_0016_75CA(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!emu_flags.cf) { f__B4FC_07B5_0016_75CA(); return; }
	f__B4FC_06F2_000F_D49F(); return;
}

/**
 * Decompiled function f__B4FC_07B5_0016_75CA()
 *
 * @name f__B4FC_07B5_0016_75CA
 * @implements B4FC:07B5:0016:75CA ()
 *
 * Called From: B4FC:07A0:0002:C9BA
 * Called From: B4FC:07B0:0013:5B66
 */
void f__B4FC_07B5_0016_75CA()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x12));
	f__B4FC_07D3_0009_9AB9(); return;
}

/**
 * Decompiled function f__B4FC_07CD_0006_5D34()
 *
 * @name f__B4FC_07CD_0006_5D34
 * @implements B4FC:07CD:0006:5D34 ()
 *
 * Called From: B4FC:04B8:000A:85B3
 */
void f__B4FC_07CD_0006_5D34()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4FC_0473_000F_D507(); return;
}

/**
 * Decompiled function f__B4FC_07D3_0009_9AB9()
 *
 * @name f__B4FC_07D3_0009_9AB9
 * @implements B4FC:07D3:0009:9AB9 ()
 *
 * Called From: B4FC:06CC:0005:8F6C
 * Called From: B4FC:07C9:0016:75CA
 */
void f__B4FC_07D3_0009_9AB9()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	f__B4FC_0411_0003_1C92(); return;
}

/**
 * Decompiled function f__B4FC_07DC_0006_F7CE()
 *
 * @name f__B4FC_07DC_0006_F7CE
 * @implements B4FC:07DC:0006:F7CE ()
 *
 * Called From: B4FC:0411:0003:1C92
 * Called From: B4FC:0411:0007:5563
 */
void f__B4FC_07DC_0006_F7CE()
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
 * Decompiled function f__B4FC_07E2_0012_911F()
 *
 * @name f__B4FC_07E2_0012_911F
 * @implements B4FC:07E2:0012:911F ()
 *
 * Called From: B4FC:06C7:0017:1FA4
 * Called From: B4FC:0757:0018:65C2
 */
void f__B4FC_07E2_0012_911F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4FC_07F4_000B_8B29(); return; }
	f__B4FC_087B_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4FC_07F4_000B_8B29()
 *
 * @name f__B4FC_07F4_000B_8B29
 * @implements B4FC:07F4:000B:8B29 ()
 *
 * Called From: B4FC:07EF:0012:911F
 */
void f__B4FC_07F4_000B_8B29()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x07FF); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_07FF_000A_9076(); return;
}

/**
 * Decompiled function f__B4FC_07FF_000A_9076()
 *
 * @name f__B4FC_07FF_000A_9076
 * @implements B4FC:07FF:000A:9076 ()
 *
 */
void f__B4FC_07FF_000A_9076()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax);
	f__B4FC_081F_001E_E9EF(); return;
}

/**
 * Decompiled function f__B4FC_081F_001E_E9EF()
 *
 * @name f__B4FC_081F_001E_E9EF
 * @implements B4FC:081F:001E:E9EF ()
 *
 * Called From: B4FC:0807:000A:9076
 */
void f__B4FC_081F_001E_E9EF()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, emu_bx, 0x76BD));
	emu_movws(&emu_ax, emu_al);
	emu_testw(&emu_ax, 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0809; emu_last_cs = 0xB4FC; emu_last_ip = 0x0830; emu_last_length = 0x001E; emu_last_crc = 0xE9EF; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x083D); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_083D_002C_DCED(); return;
}

/**
 * Decompiled function f__B4FC_083D_002C_DCED()
 *
 * @name f__B4FC_083D_002C_DCED
 * @implements B4FC:083D:002C:DCED ()
 *
 */
void f__B4FC_083D_002C_DCED()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4FC_087B_0005_8BCF(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_dx, emu_si);
	emu_decw(&emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	f__B4FC_0854_0015_0D64(); return;
}

/**
 * Decompiled function f__B4FC_0854_0015_0D64()
 *
 * @name f__B4FC_0854_0015_0D64
 * @implements B4FC:0854:0015:0D64 ()
 *
 * Called From: B4FC:0879:0017:621F
 */
void f__B4FC_0854_0015_0D64()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, emu_bx, 0x76BD));
	emu_movws(&emu_ax, emu_al);
	emu_testw(&emu_ax, 0x1);
	if (!emu_flags.zf) { f__B4FC_0869_0017_621F(); return; }
	f__B4FC_087B_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4FC_0869_0017_621F()
 *
 * @name f__B4FC_0869_0017_621F
 * @implements B4FC:0869:0017:621F ()
 *
 * Called From: B4FC:0865:002C:DCED
 * Called From: B4FC:0865:0015:0D64
 */
void f__B4FC_0869_0017_621F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!(emu_flags.cf || emu_flags.zf)) { f__B4FC_0854_0015_0D64(); return; }
	f__B4FC_087B_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4FC_087B_0005_8BCF()
 *
 * @name f__B4FC_087B_0005_8BCF
 * @implements B4FC:087B:0005:8BCF ()
 *
 * Called From: B4FC:0867:002C:DCED
 * Called From: B4FC:0867:0015:0D64
 */
void f__B4FC_087B_0005_8BCF()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
