/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4F2_0000_000D_C9F0()
 *
 * @name f__B4F2_0000_000D_C9F0
 * @implements B4F2:0000:000D:C9F0 ()
 *
 * Called From: 34F2:0020:0005:0000
 */
void f__B4F2_0000_000D_C9F0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2AB7);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x000D); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_000D_001C_9C78();
}

/**
 * Decompiled function f__B4F2_000D_001C_9C78()
 *
 * @name f__B4F2_000D_001C_9C78
 * @implements B4F2:000D:001C:9C78 ()
 *
 */
void f__B4F2_000D_001C_9C78()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4F2_004B_0004_9539(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0xA);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x41C2);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2AB7);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0029_000C_02B1();
}

/**
 * Decompiled function f__B4F2_0029_000C_02B1()
 *
 * @name f__B4F2_0029_000C_02B1
 * @implements B4F2:0029:000C:02B1 ()
 *
 */
void f__B4F2_0029_000C_02B1()
{
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x41C2));
	emu_push(emu_cs); emu_push(0x0035); emu_cs = 0x1DD7; f__1DD7_006F_001C_4403();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0035_000A_8FD3();
}

/**
 * Decompiled function f__B4F2_0035_000A_8FD3()
 *
 * @name f__B4F2_0035_000A_8FD3
 * @implements B4F2:0035:000A:8FD3 ()
 *
 */
void f__B4F2_0035_000A_8FD3()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x41C4));
	emu_push(emu_cs); emu_push(0x003F); emu_cs = 0x1DD7; f__1DD7_000E_001C_4593();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_003F_000C_04DE();
}

/**
 * Decompiled function f__B4F2_003F_000C_04DE()
 *
 * @name f__B4F2_003F_000C_04DE
 * @implements B4F2:003F:000C:04DE ()
 *
 */
void f__B4F2_003F_000C_04DE()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x41C6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3900), emu_ax);
	emu_movw(&emu_ax, 0x1);
	f__B4F2_0049_0002_C23A(); return;
}

/**
 * Decompiled function f__B4F2_0049_0002_C23A()
 *
 * @name f__B4F2_0049_0002_C23A
 * @implements B4F2:0049:0002:C23A ()
 *
 * Called From: B4F2:004D:0004:9539
 */
void f__B4F2_0049_0002_C23A()
{
	f__B4F2_004F_0002_2597(); return;
}

/**
 * Decompiled function f__B4F2_004B_0004_9539()
 *
 * @name f__B4F2_004B_0004_9539
 * @implements B4F2:004B:0004:9539 ()
 *
 * Called From: B4F2:0011:001C:9C78
 */
void f__B4F2_004B_0004_9539()
{
	emu_xorw(&emu_ax, emu_ax);
	f__B4F2_0049_0002_C23A(); return;
}

/**
 * Decompiled function f__B4F2_004F_0002_2597()
 *
 * @name f__B4F2_004F_0002_2597
 * @implements B4F2:004F:0002:2597 ()
 *
 * Called From: B4F2:0049:000C:04DE
 * Called From: B4F2:0049:0002:C23A
 */
void f__B4F2_004F_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0051_0012_A048()
 *
 * @name f__B4F2_0051_0012_A048
 * @implements B4F2:0051:0012:A048 ()
 *
 * Called From: B4F2:0338:0005:014D
 */
void f__B4F2_0051_0012_A048()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2AB7);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0063); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0063_0017_F3DE();
}

/**
 * Decompiled function f__B4F2_0063_0017_F3DE()
 *
 * @name f__B4F2_0063_0017_F3DE
 * @implements B4F2:0063:0017:F3DE ()
 *
 */
void f__B4F2_0063_0017_F3DE()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0xA);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x41C2);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x007A); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_007A_0009_2605();
}

/**
 * Decompiled function f__B4F2_007A_0009_2605()
 *
 * @name f__B4F2_007A_0009_2605
 * @implements B4F2:007A:0009:2605 ()
 *
 */
void f__B4F2_007A_0009_2605()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0083); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0083_0010_7381();
}

/**
 * Decompiled function f__B4F2_0083_0010_7381()
 *
 * @name f__B4F2_0083_0010_7381
 * @implements B4F2:0083:0010:7381 ()
 *
 */
void f__B4F2_0083_0010_7381()
{
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C2), 0x0);
	if (!emu_flags.zf) { f__B4F2_0094_0005_D5FA(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0093); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0093_0006_B1FB();
}

/**
 * Decompiled function f__B4F2_0093_0006_B1FB()
 *
 * @name f__B4F2_0093_0006_B1FB
 * @implements B4F2:0093:0006:B1FB ()
 *
 */
void f__B4F2_0093_0006_B1FB()
{
	emu_pop(&emu_cx);
	f__B4F2_0094_0005_D5FA(); return;
}

/**
 * Decompiled function f__B4F2_0094_0005_D5FA()
 *
 * @name f__B4F2_0094_0005_D5FA
 * @implements B4F2:0094:0005:D5FA ()
 *
 * Called From: B4F2:0089:0010:7381
 */
void f__B4F2_0094_0005_D5FA()
{
	emu_movw(&emu_ax, 0x1);
	f__B4F2_0099_0003_2E57(); return;
}

/**
 * Decompiled function f__B4F2_0099_0003_2E57()
 *
 * @name f__B4F2_0099_0003_2E57
 * @implements B4F2:0099:0003:2E57 ()
 *
 * Called From: B4F2:0097:0005:D5FA
 * Called From: B4F2:0097:0006:B1FB
 */
void f__B4F2_0099_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_009C_002E_D76F()
 *
 * @name f__B4F2_009C_002E_D76F
 * @implements B4F2:009C:002E:D76F ()
 *
 * Called From: 34F2:0025:0005:0000
 */
void f__B4F2_009C_002E_D76F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A34));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A34), 0x0);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, 0x00, 0x442));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x440));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00CA); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_00CA_0008_EC74();
}

/**
 * Decompiled function f__B4F2_00CA_0008_EC74()
 *
 * @name f__B4F2_00CA_0008_EC74
 * @implements B4F2:00CA:0008:EC74 ()
 *
 */
void f__B4F2_00CA_0008_EC74()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x00D2); emu_cs = 0x34B8; ovl__34B8(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_00D2_0019_2DA2();
}

/**
 * Decompiled function f__B4F2_00D2_0019_2DA2()
 *
 * @name f__B4F2_00D2_0019_2DA2
 * @implements B4F2:00D2:0019:2DA2 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4F2_00D2_0019_2DA2()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x300);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x70A2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00EB); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_00EB_0014_7995();
}

/**
 * Decompiled function f__B4F2_00EB_0014_7995()
 *
 * @name f__B4F2_00EB_0014_7995
 * @implements B4F2:00EB:0014:7995 ()
 *
 */
void f__B4F2_00EB_0014_7995()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x80B0), 0x0);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x00FF); emu_cs = 0x1DD7; f__1DD7_022D_0015_1956();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_00FF_000A_BA05();
}

/**
 * Decompiled function f__B4F2_00FF_000A_BA05()
 *
 * @name f__B4F2_00FF_000A_BA05
 * @implements B4F2:00FF:000A:BA05 ()
 *
 */
void f__B4F2_00FF_000A_BA05()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0109); emu_cs = 0x34E9; ovl__34E9(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0109_001C_9EE7();
}

/**
 * Decompiled function f__B4F2_0109_001C_9EE7()
 *
 * @name f__B4F2_0109_001C_9EE7
 * @implements B4F2:0109:001C:9EE7 ()
 *
 */
void f__B4F2_0109_001C_9EE7()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x22);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0125); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0125_000F_54A6();
}

/**
 * Decompiled function f__B4F2_0125_000F_54A6()
 *
 * @name f__B4F2_0125_000F_54A6
 * @implements B4F2:0125:000F:54A6 ()
 *
 */
void f__B4F2_0125_000F_54A6()
{
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x7530);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x0134); f__B4F2_11CF_0013_5635();
	f__B4F2_0134_0013_7748();
}

/**
 * Decompiled function f__B4F2_0134_0013_7748()
 *
 * @name f__B4F2_0134_0013_7748
 * @implements B4F2:0134:0013:7748 ()
 *
 */
void f__B4F2_0134_0013_7748()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2A91), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38D6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38D8));
	if (emu_flags.zf) { f__B4F2_016E_0005_3FA8(); return; }
	emu_push(emu_cs); emu_push(0x0147); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	/* Unresolved jump */ emu_ip = 0x0147; emu_last_cs = 0xB4F2; emu_last_ip = 0x0147; emu_last_length = 0x0013; emu_last_crc = 0x7748; emu_call();
}

/**
 * Decompiled function f__B4F2_016E_0005_3FA8()
 *
 * @name f__B4F2_016E_0005_3FA8
 * @implements B4F2:016E:0005:3FA8 ()
 *
 * Called From: B4F2:0140:0013:7748
 */
void f__B4F2_016E_0005_3FA8()
{
	emu_push(emu_cs);
	emu_push(0x0173); f__B4F2_0E16_0019_86E9();
	f__B4F2_0173_000A_3489();
}

/**
 * Decompiled function f__B4F2_0173_000A_3489()
 *
 * @name f__B4F2_0173_000A_3489
 * @implements B4F2:0173:000A:3489 ()
 *
 */
void f__B4F2_0173_000A_3489()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x264C);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x017D); f__B4F2_0EE0_000E_BC8E();
	f__B4F2_017D_000C_D4B9();
}

/**
 * Decompiled function f__B4F2_017D_000C_D4B9()
 *
 * @name f__B4F2_017D_000C_D4B9
 * @implements B4F2:017D:000C:D4B9 ()
 *
 */
void f__B4F2_017D_000C_D4B9()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x264C);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0189); f__B4F2_0855_0013_A7FD();
	f__B4F2_0189_0008_3C1D();
}

/**
 * Decompiled function f__B4F2_0189_0008_3C1D()
 *
 * @name f__B4F2_0189_0008_3C1D
 * @implements B4F2:0189:0008:3C1D ()
 *
 */
void f__B4F2_0189_0008_3C1D()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, 0x1);
	f__B4F2_02A7_0007_49AD(); return;
}

/**
 * Decompiled function f__B4F2_0191_000D_7056()
 *
 * @name f__B4F2_0191_000D_7056
 * @implements B4F2:0191:000D:7056 ()
 *
 * Called From: B4F2:02AB:0007:49AD
 */
void f__B4F2_0191_000D_7056()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x019E); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_019E_000D_3A4F();
}

/**
 * Decompiled function f__B4F2_019E_000D_3A4F()
 *
 * @name f__B4F2_019E_000D_3A4F
 * @implements B4F2:019E:000D:3A4F ()
 *
 */
void f__B4F2_019E_000D_3A4F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_testw(&emu_di, 0x8000);
	if (!emu_flags.zf) { f__B4F2_01AB_000E_6100(); return; }
	f__B4F2_02A2_0005_1765(); return;
}

/**
 * Decompiled function f__B4F2_01AB_000E_6100()
 *
 * @name f__B4F2_01AB_000E_6100
 * @implements B4F2:01AB:000E:6100 ()
 *
 * Called From: B4F2:01A6:000D:3A4F
 */
void f__B4F2_01AB_000E_6100()
{
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x01B9); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_01B9_0013_C71B();
}

/**
 * Decompiled function f__B4F2_01B9_0013_C71B()
 *
 * @name f__B4F2_01B9_0013_C71B
 * @implements B4F2:01B9:0013:C71B ()
 *
 */
void f__B4F2_01B9_0013_C71B()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x264C);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x01CC); f__B4F2_0F24_000E_BC8E();
	f__B4F2_01CC_0013_9E8D();
}

/**
 * Decompiled function f__B4F2_01CC_0013_9E8D()
 *
 * @name f__B4F2_01CC_0013_9E8D
 * @implements B4F2:01CC:0013:9E8D ()
 *
 */
void f__B4F2_01CC_0013_9E8D()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_di);
	emu_andw(&emu_bx, 0x7FFF);
	emu_subw(&emu_bx, 0x1E);
	emu_cmpw(&emu_bx, 0x6);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4F2_01DF_0007_29A0(); return; }
	f__B4F2_027D_0002_C03A(); return;
}

/**
 * Decompiled function f__B4F2_01DF_0007_29A0()
 *
 * @name f__B4F2_01DF_0007_29A0
 * @implements B4F2:01DF:0007:29A0 ()
 *
 * Called From: B4F2:01DA:0013:9E8D
 */
void f__B4F2_01DF_0007_29A0()
{
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x379);
	switch (emu_ip) {
		case 0x01E6: f__B4F2_01E6_0008_CA33(); return;
		case 0x01F8: f__B4F2_01F8_0009_39F0(); return;
		case 0x020A: f__B4F2_020A_000B_636B(); return;
		case 0x0219: f__B4F2_0219_0009_48EA(); return;
		case 0x0231: f__B4F2_0231_0009_49EC(); return;
		case 0x024E: f__B4F2_024E_0004_F879(); return;
		case 0x0252: f__B4F2_0252_0009_9BF4(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x01E1; emu_last_length = 0x0007; emu_last_crc = 0x29A0;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4F2_01E6_0008_CA33()
 *
 * @name f__B4F2_01E6_0008_CA33
 * @implements B4F2:01E6:0008:CA33 ()
 *
 * Called From: B4F2:01E1:0007:29A0
 */
void f__B4F2_01E6_0008_CA33()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x01EE); f__B4F2_04B7_0015_5960();
	f__B4F2_01EE_000A_E23B();
}

/**
 * Decompiled function f__B4F2_01EE_000A_E23B()
 *
 * @name f__B4F2_01EE_000A_E23B
 * @implements B4F2:01EE:000A:E23B ()
 *
 * Called From: B4F2:06AD:0006:F7CE
 */
void f__B4F2_01EE_000A_E23B()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) {
		emu_xorw(&emu_si, emu_si);
	}
	f__B4F2_01F5_0003_DD01(); return;
}

/**
 * Decompiled function f__B4F2_01F5_0003_DD01()
 *
 * @name f__B4F2_01F5_0003_DD01
 * @implements B4F2:01F5:0003:DD01 ()
 *
 * Called From: B4F2:01F1:000A:E23B
 */
void f__B4F2_01F5_0003_DD01()
{
	f__B4F2_027F_0015_800B(); return;
}

/**
 * Decompiled function f__B4F2_01F8_0009_39F0()
 *
 * @name f__B4F2_01F8_0009_39F0
 * @implements B4F2:01F8:0009:39F0 ()
 *
 * Called From: B4F2:01E1:0007:29A0
 */
void f__B4F2_01F8_0009_39F0()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0201); f__B4F2_04B7_0015_5960();
	f__B4F2_0201_0009_8EC4();
}

/**
 * Decompiled function f__B4F2_0201_0009_8EC4()
 *
 * @name f__B4F2_0201_0009_8EC4
 * @implements B4F2:0201:0009:8EC4 ()
 *
 */
void f__B4F2_0201_0009_8EC4()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) {
		emu_xorw(&emu_si, emu_si);
	}
	f__B4F2_0208_0002_FABA(); return;
}

/**
 * Decompiled function f__B4F2_0208_0002_FABA()
 *
 * @name f__B4F2_0208_0002_FABA
 * @implements B4F2:0208:0002:FABA ()
 *
 * Called From: B4F2:0204:0009:8EC4
 */
void f__B4F2_0208_0002_FABA()
{
	f__B4F2_027F_0015_800B(); return;
}

/**
 * Decompiled function f__B4F2_020A_000B_636B()
 *
 * @name f__B4F2_020A_000B_636B
 * @implements B4F2:020A:000B:636B ()
 *
 * Called From: B4F2:01E1:0007:29A0
 */
void f__B4F2_020A_000B_636B()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0215); f__B4F2_0387_000F_A3C2();
	f__B4F2_0215_0004_681F();
}

/**
 * Decompiled function f__B4F2_0215_0004_681F()
 *
 * @name f__B4F2_0215_0004_681F
 * @implements B4F2:0215:0004:681F ()
 *
 */
void f__B4F2_0215_0004_681F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B4F2_027F_0015_800B(); return;
}

/**
 * Decompiled function f__B4F2_0219_0009_48EA()
 *
 * @name f__B4F2_0219_0009_48EA
 * @implements B4F2:0219:0009:48EA ()
 *
 * Called From: B4F2:01E1:0007:29A0
 */
void f__B4F2_0219_0009_48EA()
{
	emu_movw(&emu_ax, 0x76);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0222); f__B4F2_1100_0019_B3DC();
	f__B4F2_0222_000F_7024();
}

/**
 * Decompiled function f__B4F2_0222_000F_7024()
 *
 * @name f__B4F2_0222_000F_7024
 * @implements B4F2:0222:000F:7024 ()
 *
 */
void f__B4F2_0222_000F_7024()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) {
		emu_xorw(&emu_si, emu_si);
		emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38BE), 0x1);
	}
	f__B4F2_022F_0002_E73A(); return;
}

/**
 * Decompiled function f__B4F2_022F_0002_E73A()
 *
 * @name f__B4F2_022F_0002_E73A
 * @implements B4F2:022F:0002:E73A ()
 *
 * Called From: B4F2:0225:000F:7024
 */
void f__B4F2_022F_0002_E73A()
{
	f__B4F2_027F_0015_800B(); return;
}

/**
 * Decompiled function f__B4F2_0231_0009_49EC()
 *
 * @name f__B4F2_0231_0009_49EC
 * @implements B4F2:0231:0009:49EC ()
 *
 * Called From: B4F2:01E1:0007:29A0
 */
void f__B4F2_0231_0009_49EC()
{
	emu_movw(&emu_ax, 0x77);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x023A); f__B4F2_1100_0019_B3DC();
	f__B4F2_023A_000C_7BCE();
}

/**
 * Decompiled function f__B4F2_023A_000C_7BCE()
 *
 * @name f__B4F2_023A_000C_7BCE
 * @implements B4F2:023A:000C:7BCE ()
 *
 */
void f__B4F2_023A_000C_7BCE()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4F2_024C_0002_D8BA(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_cs); emu_push(0x0246); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0246_0008_C674();
}

/**
 * Decompiled function f__B4F2_0246_0008_C674()
 *
 * @name f__B4F2_0246_0008_C674
 * @implements B4F2:0246:0008:C674 ()
 *
 */
void f__B4F2_0246_0008_C674()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38BE), 0x2);
	f__B4F2_024C_0002_D8BA(); return;
}

/**
 * Decompiled function f__B4F2_024C_0002_D8BA()
 *
 * @name f__B4F2_024C_0002_D8BA
 * @implements B4F2:024C:0002:D8BA ()
 *
 * Called From: B4F2:023D:000C:7BCE
 */
void f__B4F2_024C_0002_D8BA()
{
	f__B4F2_027F_0015_800B(); return;
}

/**
 * Decompiled function f__B4F2_024E_0004_F879()
 *
 * @name f__B4F2_024E_0004_F879
 * @implements B4F2:024E:0004:F879 ()
 *
 * Called From: B4F2:01E1:0007:29A0
 */
void f__B4F2_024E_0004_F879()
{
	emu_xorw(&emu_si, emu_si);
	f__B4F2_027F_0015_800B(); return;
}

/**
 * Decompiled function f__B4F2_0252_0009_9BF4()
 *
 * @name f__B4F2_0252_0009_9BF4
 * @implements B4F2:0252:0009:9BF4 ()
 *
 * Called From: B4F2:01E1:0007:29A0
 */
void f__B4F2_0252_0009_9BF4()
{
	emu_movw(&emu_ax, 0x65);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x025B); f__B4F2_1100_0019_B3DC();
	f__B4F2_025B_0014_44C6();
}

/**
 * Decompiled function f__B4F2_025B_0014_44C6()
 *
 * @name f__B4F2_025B_0014_44C6
 * @implements B4F2:025B:0014:44C6 ()
 *
 */
void f__B4F2_025B_0014_44C6()
{
	emu_pop(&emu_cx);
	emu_negw(&emu_ax, emu_ax);
	emu_sbbw(&emu_ax, emu_ax);
	emu_incw(&emu_ax);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38F8), emu_ax);
	emu_movw(&emu_ax, 0xFFFE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x026F); emu_cs = 0x3483; ovl__3483(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_026F_0003_CB1A();
}

/**
 * Decompiled function f__B4F2_026F_0003_CB1A()
 *
 * @name f__B4F2_026F_0003_CB1A
 * @implements B4F2:026F:0003:CB1A ()
 *
 */
void f__B4F2_026F_0003_CB1A()
{
	emu_pop(&emu_cx);
	f__B4F2_0272_0005_7A4B(); return;
}

/**
 * Decompiled function f__B4F2_0272_0005_7A4B()
 *
 * @name f__B4F2_0272_0005_7A4B
 * @implements B4F2:0272:0005:7A4B ()
 *
 * Called From: B4F2:0270:0003:CB1A
 */
void f__B4F2_0272_0005_7A4B()
{
	emu_push(emu_cs); emu_push(0x0277); emu_cs = 0x1DD7; f__1DD7_01EB_0013_9C3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0277_0006_A5DD();
}

/**
 * Decompiled function f__B4F2_0277_0006_A5DD()
 *
 * @name f__B4F2_0277_0006_A5DD
 * @implements B4F2:0277:0006:A5DD ()
 *
 */
void f__B4F2_0277_0006_A5DD()
{
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4F2_0272_0005_7A4B(); return; }
	f__B4F2_027F_0015_800B(); return;
}

/**
 * Decompiled function f__B4F2_027D_0002_C03A()
 *
 * @name f__B4F2_027D_0002_C03A
 * @implements B4F2:027D:0002:C03A ()
 *
 * Called From: B4F2:01DC:0013:9E8D
 */
void f__B4F2_027D_0002_C03A()
{
	f__B4F2_027F_0015_800B(); return;
}

/**
 * Decompiled function f__B4F2_027F_0015_800B()
 *
 * @name f__B4F2_027F_0015_800B
 * @implements B4F2:027F:0015:800B ()
 *
 * Called From: B4F2:01F5:0003:DD01
 * Called From: B4F2:01F5:000A:E23B
 * Called From: B4F2:0208:0009:8EC4
 * Called From: B4F2:0208:0002:FABA
 * Called From: B4F2:0217:0004:681F
 * Called From: B4F2:022F:0002:E73A
 * Called From: B4F2:022F:000F:7024
 * Called From: B4F2:024C:0008:C674
 * Called From: B4F2:024C:0002:D8BA
 * Called From: B4F2:0250:0004:F879
 * Called From: B4F2:027B:0006:A5DD
 * Called From: B4F2:027D:0002:C03A
 */
void f__B4F2_027F_0015_800B()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38F8), 0x0);
	if (emu_flags.zf) { f__B4F2_02A2_0005_1765(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4F2_02A2_0005_1765(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x264C);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0294); f__B4F2_0EE0_000E_BC8E();
	f__B4F2_0294_000C_9527();
}

/**
 * Decompiled function f__B4F2_0294_000C_9527()
 *
 * @name f__B4F2_0294_000C_9527
 * @implements B4F2:0294:000C:9527 ()
 *
 */
void f__B4F2_0294_000C_9527()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x264C);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x02A0); f__B4F2_0855_0013_A7FD();
	f__B4F2_02A0_0007_73D6();
}

/**
 * Decompiled function f__B4F2_02A0_0007_73D6()
 *
 * @name f__B4F2_02A0_0007_73D6
 * @implements B4F2:02A0:0007:73D6 ()
 *
 */
void f__B4F2_02A0_0007_73D6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B4F2_02A2_0005_1765(); return;
}

/**
 * Decompiled function f__B4F2_02A2_0005_1765()
 *
 * @name f__B4F2_02A2_0005_1765
 * @implements B4F2:02A2:0005:1765 ()
 *
 * Called From: B4F2:01A8:000D:3A4F
 * Called From: B4F2:0284:0015:800B
 * Called From: B4F2:0288:0015:800B
 */
void f__B4F2_02A2_0005_1765()
{
	emu_push(emu_cs); emu_push(0x02A7); emu_cs = 0x0642; f__0642_0559_0027_3560();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_02A7_0007_49AD();
}

/**
 * Decompiled function f__B4F2_02A7_0007_49AD()
 *
 * @name f__B4F2_02A7_0007_49AD
 * @implements B4F2:02A7:0007:49AD ()
 *
 * Called From: B4F2:018E:0008:3C1D
 */
void f__B4F2_02A7_0007_49AD()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4F2_02AE_001E_2B44(); return; }
	f__B4F2_0191_000D_7056(); return;
}

/**
 * Decompiled function f__B4F2_02AE_001E_2B44()
 *
 * @name f__B4F2_02AE_001E_2B44
 * @implements B4F2:02AE:001E:2B44 ()
 *
 * Called From: B4F2:02A9:0007:49AD
 */
void f__B4F2_02AE_001E_2B44()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38C4), 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38D6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38D8));
	if (emu_flags.zf) { f__B4F2_0309_0005_8EFD(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0xFA00);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02CC); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	/* Unresolved jump */ emu_ip = 0x02CC; emu_last_cs = 0xB4F2; emu_last_ip = 0x02CC; emu_last_length = 0x001E; emu_last_crc = 0x2B44; emu_call();
}

/**
 * Decompiled function f__B4F2_0309_0005_8EFD()
 *
 * @name f__B4F2_0309_0005_8EFD
 * @implements B4F2:0309:0005:8EFD ()
 *
 * Called From: B4F2:02BB:001E:2B44
 */
void f__B4F2_0309_0005_8EFD()
{
	emu_push(emu_cs); emu_push(0x030E); emu_cs = 0x34B8; ovl__34B8(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_030E_0008_EA61();
}

/**
 * Decompiled function f__B4F2_030E_0008_EA61()
 *
 * @name f__B4F2_030E_0008_EA61
 * @implements B4F2:030E:0008:EA61 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4F2_030E_0008_EA61()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0316); emu_cs = 0x10E4; f__10E4_2099_0012_A216();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0316_0006_58B0();
}

/**
 * Decompiled function f__B4F2_0316_0006_58B0()
 *
 * @name f__B4F2_0316_0006_58B0
 * @implements B4F2:0316:0006:58B0 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4F2_0316_0006_58B0()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x031C); f__B4F2_0DE3_001F_AB1C();
	f__B4F2_031C_000E_514C();
}

/**
 * Decompiled function f__B4F2_031C_000E_514C()
 *
 * @name f__B4F2_031C_000E_514C
 * @implements B4F2:031C:000E:514C ()
 *
 */
void f__B4F2_031C_000E_514C()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x032A); emu_cs = 0x348B; ovl__348B(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_032A_000C_961D();
}

/**
 * Decompiled function f__B4F2_032A_000C_961D()
 *
 * @name f__B4F2_032A_000C_961D
 * @implements B4F2:032A:000C:961D ()
 *
 */
void f__B4F2_032A_000C_961D()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0336); emu_cs = 0x34E9; ovl__34E9(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0336_0005_014D();
}

/**
 * Decompiled function f__B4F2_0336_0005_014D()
 *
 * @name f__B4F2_0336_0005_014D
 * @implements B4F2:0336:0005:014D ()
 *
 */
void f__B4F2_0336_0005_014D()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x033B); f__B4F2_0051_0012_A048();
	f__B4F2_033B_0005_7CF0();
}

/**
 * Decompiled function f__B4F2_033B_0005_7CF0()
 *
 * @name f__B4F2_033B_0005_7CF0
 * @implements B4F2:033B:0005:7CF0 ()
 *
 */
void f__B4F2_033B_0005_7CF0()
{
	emu_push(emu_cs); emu_push(0x0340); emu_cs = 0x1082; emu_Building_Recount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0340_0005_D341();
}

/**
 * Decompiled function f__B4F2_0340_0005_D341()
 *
 * @name f__B4F2_0340_0005_D341
 * @implements B4F2:0340:0005:D341 ()
 *
 */
void f__B4F2_0340_0005_D341()
{
	emu_push(emu_cs); emu_push(0x0345); emu_cs = 0x0FE4; emu_Unit_Recount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0345_0027_E6B6();
}

/**
 * Decompiled function f__B4F2_0345_0027_E6B6()
 *
 * @name f__B4F2_0345_0027_E6B6
 * @implements B4F2:0345:0027:E6B6 ()
 *
 */
void f__B4F2_0345_0027_E6B6()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A34), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x036C); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_036C_0007_F97C();
}

/**
 * Decompiled function f__B4F2_036C_0007_F97C()
 *
 * @name f__B4F2_036C_0007_F97C
 * @implements B4F2:036C:0007:F97C ()
 *
 */
void f__B4F2_036C_0007_F97C()
{
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	f__B4F2_0373_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4F2_0373_0006_F7CE()
 *
 * @name f__B4F2_0373_0006_F7CE
 * @implements B4F2:0373:0006:F7CE ()
 *
 * Called From: B4F2:0371:0007:F97C
 */
void f__B4F2_0373_0006_F7CE()
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
 * Decompiled function f__B4F2_0387_000F_A3C2()
 *
 * @name f__B4F2_0387_000F_A3C2
 * @implements B4F2:0387:000F:A3C2 ()
 *
 * Called From: B4F2:0212:000B:636B
 */
void f__B4F2_0387_000F_A3C2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x26B5);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0396); f__B4F2_0EE0_000E_BC8E();
	f__B4F2_0396_000C_ECA6();
}

/**
 * Decompiled function f__B4F2_0396_000C_ECA6()
 *
 * @name f__B4F2_0396_000C_ECA6
 * @implements B4F2:0396:000C:ECA6 ()
 *
 */
void f__B4F2_0396_000C_ECA6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x26B5);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03A2); f__B4F2_0855_0013_A7FD();
	f__B4F2_03A2_0008_38A1();
}

/**
 * Decompiled function f__B4F2_03A2_0008_38A1()
 *
 * @name f__B4F2_03A2_0008_38A1
 * @implements B4F2:03A2:0008:38A1 ()
 *
 */
void f__B4F2_03A2_0008_38A1()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, 0x1);
	f__B4F2_0490_0007_6D11(); return;
}

/**
 * Decompiled function f__B4F2_03AA_000D_7056()
 *
 * @name f__B4F2_03AA_000D_7056
 * @implements B4F2:03AA:000D:7056 ()
 *
 * Called From: B4F2:0494:0007:6D11
 */
void f__B4F2_03AA_000D_7056()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x03B7); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_03B7_000D_3943();
}

/**
 * Decompiled function f__B4F2_03B7_000D_3943()
 *
 * @name f__B4F2_03B7_000D_3943
 * @implements B4F2:03B7:000D:3943 ()
 *
 */
void f__B4F2_03B7_000D_3943()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_testw(&emu_si, 0x8000);
	if (!emu_flags.zf) { f__B4F2_03C4_0013_1C32(); return; }
	f__B4F2_048B_0005_1765(); return;
}

/**
 * Decompiled function f__B4F2_03C4_0013_1C32()
 *
 * @name f__B4F2_03C4_0013_1C32
 * @implements B4F2:03C4:0013:1C32 ()
 *
 * Called From: B4F2:03BF:000D:3943
 */
void f__B4F2_03C4_0013_1C32()
{
	emu_movw(&emu_ax, emu_si);
	emu_andw(&emu_ax, 0x7FFF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x03D7); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_03D7_001E_062C();
}

/**
 * Decompiled function f__B4F2_03D7_001E_062C()
 *
 * @name f__B4F2_03D7_001E_062C
 * @implements B4F2:03D7:001E:062C ()
 *
 */
void f__B4F2_03D7_001E_062C()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax);
	emu_movw(&emu_bx, emu_si);
	emu_andw(&emu_bx, 0x7FFF);
	emu_subw(&emu_bx, 0x1E);
	emu_cmpw(&emu_bx, 0x5);
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x046B; emu_last_cs = 0xB4F2; emu_last_ip = 0x03EC; emu_last_length = 0x001E; emu_last_crc = 0x062C; emu_call(); return; }
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x4AB);
	switch (emu_ip) {
		case 0x03F5: f__B4F2_03F5_0011_E3EC(); return;
		case 0x0418: f__B4F2_0418_001A_FFEB(); return;
		case 0x0440: f__B4F2_0440_0019_423E(); return;
		case 0x0459: f__B4F2_0459_0007_09D8(); return;
		case 0x0460: f__B4F2_0460_0007_0C48(); return;
		case 0x0467: f__B4F2_0467_0004_EED9(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x03F0; emu_last_length = 0x001E; emu_last_crc = 0x062C;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4F2_03F5_0011_E3EC()
 *
 * @name f__B4F2_03F5_0011_E3EC
 * @implements B4F2:03F5:0011:E3EC ()
 *
 * Called From: B4F2:03F0:001E:062C
 */
void f__B4F2_03F5_0011_E3EC()
{
	emu_xorw(&emu_get_memory16(emu_ds, 0x00, 0x41C2), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C2), 0x0);
	if (!emu_flags.zf) { f__B4F2_040C_0009_8999(); return; }
	emu_push(emu_cs); emu_push(0x0406); emu_cs = 0x1DD7; f__1DD7_0A7B_001E_4A5A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0406_000F_AF85();
}

/**
 * Decompiled function f__B4F2_0406_000F_AF85()
 *
 * @name f__B4F2_0406_000F_AF85
 * @implements B4F2:0406:000F:AF85 ()
 *
 */
void f__B4F2_0406_000F_AF85()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x80B0), 0x1);
	f__B4F2_040C_0009_8999(); return;
}

/**
 * Decompiled function f__B4F2_040C_0009_8999()
 *
 * @name f__B4F2_040C_0009_8999
 * @implements B4F2:040C:0009:8999 ()
 *
 * Called From: B4F2:03FF:0011:E3EC
 */
void f__B4F2_040C_0009_8999()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x41C2));
	emu_push(emu_cs); emu_push(0x0415); emu_cs = 0x1DD7; f__1DD7_006F_001C_4403();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0415_0003_E19A();
}

/**
 * Decompiled function f__B4F2_0415_0003_E19A()
 *
 * @name f__B4F2_0415_0003_E19A
 * @implements B4F2:0415:0003:E19A ()
 *
 * Called From: B4F2:043E:0002:AABA
 */
void f__B4F2_0415_0003_E19A()
{
	emu_pop(&emu_cx);
	f__B4F2_046D_000E_814C(); return;
}

/**
 * Decompiled function f__B4F2_0418_001A_FFEB()
 *
 * @name f__B4F2_0418_001A_FFEB
 * @implements B4F2:0418:001A:FFEB ()
 *
 * Called From: B4F2:03F0:001E:062C
 */
void f__B4F2_0418_001A_FFEB()
{
	emu_xorw(&emu_get_memory16(emu_ds, 0x00, 0x41C4), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C4), 0x0);
	if (!emu_flags.zf) { f__B4F2_0435_0009_9993(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0432); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0432_000C_103B();
}

/**
 * Decompiled function f__B4F2_0432_000C_103B()
 *
 * @name f__B4F2_0432_000C_103B
 * @implements B4F2:0432:000C:103B ()
 *
 */
void f__B4F2_0432_000C_103B()
{
	emu_addw(&emu_sp, 0x6);
	f__B4F2_0435_0009_9993(); return;
}

/**
 * Decompiled function f__B4F2_0435_0009_9993()
 *
 * @name f__B4F2_0435_0009_9993
 * @implements B4F2:0435:0009:9993 ()
 *
 * Called From: B4F2:0422:001A:FFEB
 */
void f__B4F2_0435_0009_9993()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x41C4));
	emu_push(emu_cs); emu_push(0x043E); emu_cs = 0x1DD7; f__1DD7_000E_001C_4593();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_043E_0002_AABA();
}

/**
 * Decompiled function f__B4F2_043E_0002_AABA()
 *
 * @name f__B4F2_043E_0002_AABA
 * @implements B4F2:043E:0002:AABA ()
 *
 */
void f__B4F2_043E_0002_AABA()
{
	f__B4F2_0415_0003_E19A(); return;
}

/**
 * Decompiled function f__B4F2_0440_0019_423E()
 *
 * @name f__B4F2_0440_0019_423E
 * @implements B4F2:0440:0019:423E ()
 *
 * Called From: B4F2:03F0:001E:062C
 */
void f__B4F2_0440_0019_423E()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x41C6));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C6), 0x5);
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x41C6), 0x0);
	}
	f__B4F2_0451_0008_6C8F(); return;
}

/**
 * Decompiled function f__B4F2_0451_0008_6C8F()
 *
 * @name f__B4F2_0451_0008_6C8F
 * @implements B4F2:0451:0008:6C8F ()
 *
 * Called From: B4F2:0449:0019:423E
 */
void f__B4F2_0451_0008_6C8F()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x41C6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3900), emu_ax);
	f__B4F2_046D_000E_814C(); return;
}

/**
 * Decompiled function f__B4F2_0459_0007_09D8()
 *
 * @name f__B4F2_0459_0007_09D8
 * @implements B4F2:0459:0007:09D8 ()
 *
 * Called From: B4F2:03F0:001E:062C
 */
void f__B4F2_0459_0007_09D8()
{
	emu_xorw(&emu_get_memory16(emu_ds, 0x00, 0x41C8), 0x1);
	f__B4F2_046D_000E_814C(); return;
}

/**
 * Decompiled function f__B4F2_0460_0007_0C48()
 *
 * @name f__B4F2_0460_0007_0C48
 * @implements B4F2:0460:0007:0C48 ()
 *
 * Called From: B4F2:03F0:001E:062C
 */
void f__B4F2_0460_0007_0C48()
{
	emu_xorw(&emu_get_memory16(emu_ds, 0x00, 0x41CA), 0x1);
	f__B4F2_046D_000E_814C(); return;
}

/**
 * Decompiled function f__B4F2_0467_0004_EED9()
 *
 * @name f__B4F2_0467_0004_EED9
 * @implements B4F2:0467:0004:EED9 ()
 *
 * Called From: B4F2:03F0:001E:062C
 */
void f__B4F2_0467_0004_EED9()
{
	emu_xorw(&emu_di, emu_di);
	f__B4F2_046D_000E_814C(); return;
}

/**
 * Decompiled function f__B4F2_046D_000E_814C()
 *
 * @name f__B4F2_046D_000E_814C
 * @implements B4F2:046D:000E:814C ()
 *
 * Called From: B4F2:0416:0003:E19A
 * Called From: B4F2:0457:0008:6C8F
 * Called From: B4F2:0457:0019:423E
 * Called From: B4F2:045E:0007:09D8
 * Called From: B4F2:0465:0007:0C48
 * Called From: B4F2:0469:0004:EED9
 */
void f__B4F2_046D_000E_814C()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x047B); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_047B_000E_A6E7();
}

/**
 * Decompiled function f__B4F2_047B_000E_A6E7()
 *
 * @name f__B4F2_047B_000E_A6E7
 * @implements B4F2:047B:000E:A6E7 ()
 *
 */
void f__B4F2_047B_000E_A6E7()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0489); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0489_0007_73D6();
}

/**
 * Decompiled function f__B4F2_0489_0007_73D6()
 *
 * @name f__B4F2_0489_0007_73D6
 * @implements B4F2:0489:0007:73D6 ()
 *
 */
void f__B4F2_0489_0007_73D6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B4F2_048B_0005_1765(); return;
}

/**
 * Decompiled function f__B4F2_048B_0005_1765()
 *
 * @name f__B4F2_048B_0005_1765
 * @implements B4F2:048B:0005:1765 ()
 *
 * Called From: B4F2:03C1:000D:3943
 */
void f__B4F2_048B_0005_1765()
{
	emu_push(emu_cs); emu_push(0x0490); emu_cs = 0x0642; f__0642_0559_0027_3560();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0490_0007_6D11();
}

/**
 * Decompiled function f__B4F2_0490_0007_6D11()
 *
 * @name f__B4F2_0490_0007_6D11
 * @implements B4F2:0490:0007:6D11 ()
 *
 * Called From: B4F2:03A7:0008:38A1
 */
void f__B4F2_0490_0007_6D11()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4F2_0497_000A_CE31(); return; }
	f__B4F2_03AA_000D_7056(); return;
}

/**
 * Decompiled function f__B4F2_0497_000A_CE31()
 *
 * @name f__B4F2_0497_000A_CE31
 * @implements B4F2:0497:000A:CE31 ()
 *
 * Called From: B4F2:0492:0007:6D11
 */
void f__B4F2_0497_000A_CE31()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x26B5);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x04A1); f__B4F2_0F24_000E_BC8E();
	f__B4F2_04A1_0006_8EF0();
}

/**
 * Decompiled function f__B4F2_04A1_0006_8EF0()
 *
 * @name f__B4F2_04A1_0006_8EF0
 * @implements B4F2:04A1:0006:8EF0 ()
 *
 */
void f__B4F2_04A1_0006_8EF0()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	f__B4F2_04A7_0004_DE52(); return;
}

/**
 * Decompiled function f__B4F2_04A7_0004_DE52()
 *
 * @name f__B4F2_04A7_0004_DE52
 * @implements B4F2:04A7:0004:DE52 ()
 *
 * Called From: B4F2:04A5:0006:8EF0
 */
void f__B4F2_04A7_0004_DE52()
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
 * Decompiled function f__B4F2_04B7_0015_5960()
 *
 * @name f__B4F2_04B7_0015_5960
 * @implements B4F2:04B7:0015:5960 ()
 *
 * Called From: 34F2:002A:0005:0000
 * Called From: B4F2:01EB:0008:CA33
 * Called From: B4F2:01FE:0009:39F0
 */
void f__B4F2_04B7_0015_5960()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_push(emu_cs);
	emu_push(0x04CC); f__B4F2_1181_000B_D4AD();
	f__B4F2_04CC_000C_D9B0();
}

/**
 * Decompiled function f__B4F2_04CC_000C_D9B0()
 *
 * @name f__B4F2_04CC_000C_D9B0
 * @implements B4F2:04CC:000C:D9B0 ()
 *
 */
void f__B4F2_04CC_000C_D9B0()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x80B2), emu_ax);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4F2_04D8_0019_0F72(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x2A91));
	f__B4F2_04DA_0017_4F6B(); return;
}

/**
 * Decompiled function f__B4F2_04D8_0019_0F72()
 *
 * @name f__B4F2_04D8_0019_0F72
 * @implements B4F2:04D8:0019:0F72 ()
 *
 * Called From: B4F2:04D1:000C:D9B0
 */
void f__B4F2_04D8_0019_0F72()
{
	emu_xorw(&emu_ax, emu_ax);
	f__B4F2_04DA_0017_4F6B(); return;
}

/**
 * Decompiled function f__B4F2_04DA_0017_4F6B()
 *
 * @name f__B4F2_04DA_0017_4F6B
 * @implements B4F2:04DA:0017:4F6B ()
 *
 * Called From: B4F2:04D6:000C:D9B0
 */
void f__B4F2_04DA_0017_4F6B()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x80B2));
	emu_addw(&emu_dx, emu_ax);
	emu_decw(&emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2A97), emu_dx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x2A97), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4F2_04F1_000B_A00B(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x2A97));
	f__B4F2_04F3_0009_F00D(); return;
}

/**
 * Decompiled function f__B4F2_04F1_000B_A00B()
 *
 * @name f__B4F2_04F1_000B_A00B
 * @implements B4F2:04F1:000B:A00B ()
 *
 * Called From: B4F2:04EA:0017:4F6B
 * Called From: B4F2:04EA:0019:0F72
 */
void f__B4F2_04F1_000B_A00B()
{
	emu_xorw(&emu_ax, emu_ax);
	f__B4F2_04F3_0009_F00D(); return;
}

/**
 * Decompiled function f__B4F2_04F3_0009_F00D()
 *
 * @name f__B4F2_04F3_0009_F00D
 * @implements B4F2:04F3:0009:F00D ()
 *
 * Called From: B4F2:04EF:0017:4F6B
 * Called From: B4F2:04EF:0019:0F72
 */
void f__B4F2_04F3_0009_F00D()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2A97), emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x04FC); f__B4F2_1221_000D_EE32();
	f__B4F2_04FC_000A_90D1();
}

/**
 * Decompiled function f__B4F2_04FC_000A_90D1()
 *
 * @name f__B4F2_04FC_000A_90D1
 * @implements B4F2:04FC:000A:90D1 ()
 *
 * Called From: B4F2:1302:0006:F7CE
 */
void f__B4F2_04FC_000A_90D1()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4F2_0506_0010_8F88(); return; }
	emu_movw(&emu_ax, 0x62);
	f__B4F2_0509_000D_4D30(); return;
}

/**
 * Decompiled function f__B4F2_0506_0010_8F88()
 *
 * @name f__B4F2_0506_0010_8F88
 * @implements B4F2:0506:0010:8F88 ()
 *
 * Called From: B4F2:04FF:000A:90D1
 */
void f__B4F2_0506_0010_8F88()
{
	emu_movw(&emu_ax, 0x61);
	f__B4F2_0509_000D_4D30(); return;
}

/**
 * Decompiled function f__B4F2_0509_000D_4D30()
 *
 * @name f__B4F2_0509_000D_4D30
 * @implements B4F2:0509:000D:4D30 ()
 *
 * Called From: B4F2:0504:000A:90D1
 */
void f__B4F2_0509_000D_4D30()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2789), emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2787);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0516); f__B4F2_0EE0_000E_BC8E();
	f__B4F2_0516_000C_DD04();
}

/**
 * Decompiled function f__B4F2_0516_000C_DD04()
 *
 * @name f__B4F2_0516_000C_DD04
 * @implements B4F2:0516:000C:DD04 ()
 *
 */
void f__B4F2_0516_000C_DD04()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2787);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0522); f__B4F2_0855_0013_A7FD();
	f__B4F2_0522_000C_2EB3();
}

/**
 * Decompiled function f__B4F2_0522_000C_2EB3()
 *
 * @name f__B4F2_0522_000C_2EB3
 * @implements B4F2:0522:000C:2EB3 ()
 *
 */
void f__B4F2_0522_000C_2EB3()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x052E); f__B4F2_0D52_0029_1FC2();
	f__B4F2_052E_000A_F45D();
}

/**
 * Decompiled function f__B4F2_052E_000A_F45D()
 *
 * @name f__B4F2_052E_000A_F45D
 * @implements B4F2:052E:000A:F45D ()
 *
 */
void f__B4F2_052E_000A_F45D()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	f__B4F2_0691_0009_2E1A(); return;
}

/**
 * Decompiled function f__B4F2_0538_0009_A53C()
 *
 * @name f__B4F2_0538_0009_A53C
 * @implements B4F2:0538:0009:A53C ()
 *
 * Called From: B4F2:0697:0009:2E1A
 */
void f__B4F2_0538_0009_A53C()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0541); f__B4F2_0D52_0029_1FC2();
	f__B4F2_0541_000F_C332();
}

/**
 * Decompiled function f__B4F2_0541_000F_C332()
 *
 * @name f__B4F2_0541_000F_C332
 * @implements B4F2:0541:000F:C332 ()
 *
 */
void f__B4F2_0541_000F_C332()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x0550); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0550_000D_3AF9();
}

/**
 * Decompiled function f__B4F2_0550_000D_3AF9()
 *
 * @name f__B4F2_0550_000D_3AF9
 * @implements B4F2:0550:000D:3AF9 ()
 *
 */
void f__B4F2_0550_000D_3AF9()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_testw(&emu_di, 0x8000);
	if (!emu_flags.zf) { f__B4F2_055D_0012_AC5F(); return; }
	f__B4F2_068C_0005_1765(); return;
}

/**
 * Decompiled function f__B4F2_055D_0012_AC5F()
 *
 * @name f__B4F2_055D_0012_AC5F
 * @implements B4F2:055D:0012:AC5F ()
 *
 * Called From: B4F2:0558:000D:3AF9
 */
void f__B4F2_055D_0012_AC5F()
{
	emu_andw(&emu_di, 0x7FFF);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x056F); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_056F_001C_386D();
}

/**
 * Decompiled function f__B4F2_056F_001C_386D()
 *
 * @name f__B4F2_056F_001C_386D
 * @implements B4F2:056F:001C:386D ()
 *
 */
void f__B4F2_056F_001C_386D()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_di);
	emu_cmpw(&emu_ax, 0x23);
	if (emu_flags.zf) { f__B4F2_05EF_000D_5EC9(); return; }
	emu_cmpw(&emu_ax, 0x25);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x058B; emu_last_cs = 0xB4F2; emu_last_ip = 0x0582; emu_last_length = 0x001C; emu_last_crc = 0x386D; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x26);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05DB; emu_last_cs = 0xB4F2; emu_last_ip = 0x0587; emu_last_length = 0x001C; emu_last_crc = 0x386D; emu_call(); return; }
	f__B4F2_05FC_000A_BD94(); return;
}

/**
 * Decompiled function f__B4F2_05D6_0005_8FC5()
 *
 * @name f__B4F2_05D6_0005_8FC5
 * @implements B4F2:05D6:0005:8FC5 ()
 *
 * Called From: B4F2:0678:0003:A2B6
 */
void f__B4F2_05D6_0005_8FC5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B4F2_067B_000E_7936(); return;
}

/**
 * Decompiled function f__B4F2_05EF_000D_5EC9()
 *
 * @name f__B4F2_05EF_000D_5EC9
 * @implements B4F2:05EF:000D:5EC9 ()
 *
 * Called From: B4F2:057D:001C:386D
 */
void f__B4F2_05EF_000D_5EC9()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4F2_067B_000E_7936(); return;
}

/**
 * Decompiled function f__B4F2_05FC_000A_BD94()
 *
 * @name f__B4F2_05FC_000A_BD94
 * @implements B4F2:05FC:000A:BD94 ()
 *
 * Called From: B4F2:0589:001C:386D
 */
void f__B4F2_05FC_000A_BD94()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2787);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0606); f__B4F2_0F24_000E_BC8E();
	f__B4F2_0606_0015_09D0();
}

/**
 * Decompiled function f__B4F2_0606_0015_09D0()
 *
 * @name f__B4F2_0606_0015_09D0
 * @implements B4F2:0606:0015:09D0 ()
 *
 */
void f__B4F2_0606_0015_09D0()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_subw(&emu_di, 0x1E);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x2A97));
	emu_subw(&emu_ax, emu_di);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x16);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x061B); f__B4F2_11B4_0016_244A();
	f__B4F2_061B_000D_8771();
}

/**
 * Decompiled function f__B4F2_061B_000D_8771()
 *
 * @name f__B4F2_061B_000D_8771
 * @implements B4F2:061B:000D:8771 ()
 *
 */
void f__B4F2_061B_000D_8771()
{
	emu_addw(&emu_sp, 0x6);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4F2_0639_000A_7C45(); return; }
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0628); f__B4F2_06AE_0035_32F1();
	f__B4F2_0628_000F_6786();
}

/**
 * Decompiled function f__B4F2_0628_000F_6786()
 *
 * @name f__B4F2_0628_000F_6786
 * @implements B4F2:0628:000F:6786 ()
 *
 */
void f__B4F2_0628_000F_6786()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) { f__B4F2_0637_0002_C8BA(); return; }
	f__B4F2_0632_0005_8366(); return;
}

/**
 * Decompiled function f__B4F2_0632_0005_8366()
 *
 * @name f__B4F2_0632_0005_8366
 * @implements B4F2:0632:0005:8366 ()
 *
 * Called From: B4F2:06A6:0004:1E1F
 */
void f__B4F2_0632_0005_8366()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4F2_0635_0002_F8BA(); return;
}

/**
 * Decompiled function f__B4F2_0635_0002_F8BA()
 *
 * @name f__B4F2_0635_0002_F8BA
 * @implements B4F2:0635:0002:F8BA ()
 *
 * Called From: B4F2:0648:0007:C4C9
 */
void f__B4F2_0635_0002_F8BA()
{
	f__B4F2_06A8_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4F2_0637_0002_C8BA()
 *
 * @name f__B4F2_0637_0002_C8BA
 * @implements B4F2:0637:0002:C8BA ()
 *
 * Called From: B4F2:0630:000F:6786
 */
void f__B4F2_0637_0002_C8BA()
{
	f__B4F2_064A_000A_3D30(); return;
}

/**
 * Decompiled function f__B4F2_0639_000A_7C45()
 *
 * @name f__B4F2_0639_000A_7C45
 * @implements B4F2:0639:000A:7C45 ()
 *
 * Called From: B4F2:0620:000D:8771
 */
void f__B4F2_0639_000A_7C45()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x16);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0643); emu_cs = 0x3511; ovl__3511(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0643_0007_C4C9();
}

/**
 * Decompiled function f__B4F2_0643_0007_C4C9()
 *
 * @name f__B4F2_0643_0007_C4C9
 * @implements B4F2:0643:0007:C4C9 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4F2_0643_0007_C4C9()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x1);
	f__B4F2_0635_0002_F8BA(); return;
}

/**
 * Decompiled function f__B4F2_064A_000A_3D30()
 *
 * @name f__B4F2_064A_000A_3D30
 * @implements B4F2:064A:000A:3D30 ()
 *
 * Called From: B4F2:0637:0002:C8BA
 */
void f__B4F2_064A_000A_3D30()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2787);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0654); f__B4F2_0EE0_000E_BC8E();
	f__B4F2_0654_000C_A986();
}

/**
 * Decompiled function f__B4F2_0654_000C_A986()
 *
 * @name f__B4F2_0654_000C_A986
 * @implements B4F2:0654:000C:A986 ()
 *
 */
void f__B4F2_0654_000C_A986()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0660); f__B4F2_0D52_0029_1FC2();
	f__B4F2_0660_000C_5C32();
}

/**
 * Decompiled function f__B4F2_0660_000C_5C32()
 *
 * @name f__B4F2_0660_000C_5C32
 * @implements B4F2:0660:000C:5C32 ()
 *
 */
void f__B4F2_0660_000C_5C32()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2787);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x066C); f__B4F2_0855_0013_A7FD();
	f__B4F2_066C_000C_A98C();
}

/**
 * Decompiled function f__B4F2_066C_000C_A98C()
 *
 * @name f__B4F2_066C_000C_A98C
 * @implements B4F2:066C:000C:A98C ()
 *
 */
void f__B4F2_066C_000C_A98C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0678); f__B4F2_0D52_0029_1FC2();
	f__B4F2_0678_0003_A2B6();
}

/**
 * Decompiled function f__B4F2_0678_0003_A2B6()
 *
 * @name f__B4F2_0678_0003_A2B6
 * @implements B4F2:0678:0003:A2B6 ()
 *
 */
void f__B4F2_0678_0003_A2B6()
{
	f__B4F2_05D6_0005_8FC5(); return;
}

/**
 * Decompiled function f__B4F2_067B_000E_7936()
 *
 * @name f__B4F2_067B_000E_7936
 * @implements B4F2:067B:000E:7936 ()
 *
 * Called From: B4F2:05D8:0005:8FC5
 * Called From: B4F2:05F9:000D:5EC9
 */
void f__B4F2_067B_000E_7936()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0689); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0689_0008_8DED();
}

/**
 * Decompiled function f__B4F2_0689_0008_8DED()
 *
 * @name f__B4F2_0689_0008_8DED
 * @implements B4F2:0689:0008:8DED ()
 *
 */
void f__B4F2_0689_0008_8DED()
{
	emu_addw(&emu_sp, 0x6);
	f__B4F2_068C_0005_1765(); return;
}

/**
 * Decompiled function f__B4F2_068C_0005_1765()
 *
 * @name f__B4F2_068C_0005_1765
 * @implements B4F2:068C:0005:1765 ()
 *
 * Called From: B4F2:055A:000D:3AF9
 */
void f__B4F2_068C_0005_1765()
{
	emu_push(emu_cs); emu_push(0x0691); emu_cs = 0x0642; f__0642_0559_0027_3560();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0691_0009_2E1A();
}

/**
 * Decompiled function f__B4F2_0691_0009_2E1A()
 *
 * @name f__B4F2_0691_0009_2E1A
 * @implements B4F2:0691:0009:2E1A ()
 *
 * Called From: B4F2:0535:000A:F45D
 */
void f__B4F2_0691_0009_2E1A()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__B4F2_069A_000A_3D33(); return; }
	f__B4F2_0538_0009_A53C(); return;
}

/**
 * Decompiled function f__B4F2_069A_000A_3D33()
 *
 * @name f__B4F2_069A_000A_3D33
 * @implements B4F2:069A:000A:3D33 ()
 *
 * Called From: B4F2:0695:0009:2E1A
 */
void f__B4F2_069A_000A_3D33()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2787);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x06A4); f__B4F2_0F24_000E_BC8E();
	f__B4F2_06A4_0004_1E1F();
}

/**
 * Decompiled function f__B4F2_06A4_0004_1E1F()
 *
 * @name f__B4F2_06A4_0004_1E1F
 * @implements B4F2:06A4:0004:1E1F ()
 *
 */
void f__B4F2_06A4_0004_1E1F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B4F2_0632_0005_8366(); return;
}

/**
 * Decompiled function f__B4F2_06A8_0006_F7CE()
 *
 * @name f__B4F2_06A8_0006_F7CE
 * @implements B4F2:06A8:0006:F7CE ()
 *
 * Called From: B4F2:0635:000F:6786
 * Called From: B4F2:0635:0005:8366
 * Called From: B4F2:0635:0002:F8BA
 */
void f__B4F2_06A8_0006_F7CE()
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
 * Decompiled function f__B4F2_06AE_0035_32F1()
 *
 * @name f__B4F2_06AE_0035_32F1
 * @implements B4F2:06AE:0035:32F1 ()
 *
 * Called From: B4F2:0625:000D:8771
 */
void f__B4F2_06AE_0035_32F1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x33);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x80B4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x5B);
	if (emu_flags.zf) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	}
	f__B4F2_06D9_000A_0DAC(); return;
}

/**
 * Decompiled function f__B4F2_06D9_000A_0DAC()
 *
 * @name f__B4F2_06D9_000A_0DAC
 * @implements B4F2:06D9:000A:0DAC ()
 *
 * Called From: B4F2:06D0:0035:32F1
 */
void f__B4F2_06D9_000A_0DAC()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x27F0);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x06E3); f__B4F2_0EE0_000E_BC8E();
	f__B4F2_06E3_000C_EB11();
}

/**
 * Decompiled function f__B4F2_06E3_000C_EB11()
 *
 * @name f__B4F2_06E3_000C_EB11
 * @implements B4F2:06E3:000C:EB11 ()
 *
 */
void f__B4F2_06E3_000C_EB11()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x27F0);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x06EF); f__B4F2_0855_0013_A7FD();
	f__B4F2_06EF_0023_EA60();
}

/**
 * Decompiled function f__B4F2_06EF_0023_EA60()
 *
 * @name f__B4F2_06EF_0023_EA60
 * @implements B4F2:06EF:0023:EA60 ()
 *
 */
void f__B4F2_06EF_0023_EA60()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x5B);
	if (emu_flags.zf) {
		emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x80B2));
	}
	f__B4F2_070A_0008_64F7(); return;
}

/**
 * Decompiled function f__B4F2_070A_0008_64F7()
 *
 * @name f__B4F2_070A_0008_64F7
 * @implements B4F2:070A:0008:64F7 ()
 *
 * Called From: B4F2:0704:0023:EA60
 */
void f__B4F2_070A_0008_64F7()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0712); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0712_000A_DE66();
}

/**
 * Decompiled function f__B4F2_0712_000A_DE66()
 *
 * @name f__B4F2_0712_000A_DE66
 * @implements B4F2:0712:000A:DE66 ()
 *
 */
void f__B4F2_0712_000A_DE66()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x071C); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_071C_0006_0569();
}

/**
 * Decompiled function f__B4F2_071C_0006_0569()
 *
 * @name f__B4F2_071C_0006_0569
 * @implements B4F2:071C:0006:0569 ()
 *
 */
void f__B4F2_071C_0006_0569()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0722); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0722_002C_58CA();
}

/**
 * Decompiled function f__B4F2_0722_002C_58CA()
 *
 * @name f__B4F2_0722_002C_58CA
 * @implements B4F2:0722:002C:58CA ()
 *
 */
void f__B4F2_0722_002C_58CA()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x074E); emu_cs = 0x10E4; f__10E4_0008_0048_5BD4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_074E_0008_33E5();
}

/**
 * Decompiled function f__B4F2_074E_0008_33E5()
 *
 * @name f__B4F2_074E_0008_33E5
 * @implements B4F2:074E:0008:33E5 ()
 *
 */
void f__B4F2_074E_0008_33E5()
{
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x0756); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0756_0003_5D17();
}

/**
 * Decompiled function f__B4F2_0756_0003_5D17()
 *
 * @name f__B4F2_0756_0003_5D17
 * @implements B4F2:0756:0003:5D17 ()
 *
 */
void f__B4F2_0756_0003_5D17()
{
	f__B4F2_0836_0009_2EB3(); return;
}

/**
 * Decompiled function f__B4F2_0759_001D_11B0()
 *
 * @name f__B4F2_0759_001D_11B0
 * @implements B4F2:0759:001D:11B0 ()
 *
 * Called From: B4F2:083C:0009:2EB3
 */
void f__B4F2_0759_001D_11B0()
{
	emu_movw(&emu_ax, 0x22);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xEB);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xE8);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0776); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0776_0027_A2D1();
}

/**
 * Decompiled function f__B4F2_0776_0027_A2D1()
 *
 * @name f__B4F2_0776_0027_A2D1
 * @implements B4F2:0776:0027:A2D1 ()
 *
 */
void f__B4F2_0776_0027_A2D1()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x32);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x079D); emu_cs = 0x3527; ovl__3527(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_079D_0015_8FF6();
}

/**
 * Decompiled function f__B4F2_079D_0015_8FF6()
 *
 * @name f__B4F2_079D_0015_8FF6
 * @implements B4F2:079D:0015:8FF6 ()
 *
 */
void f__B4F2_079D_0015_8FF6()
{
	emu_addw(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x8000);
	if (!emu_flags.zf) { f__B4F2_07B2_0017_B773(); return; }
	f__B4F2_0836_0009_2EB3(); return;
}

/**
 * Decompiled function f__B4F2_07B2_0017_B773()
 *
 * @name f__B4F2_07B2_0017_B773
 * @implements B4F2:07B2:0017:B773 ()
 *
 * Called From: B4F2:07AD:0015:8FF6
 */
void f__B4F2_07B2_0017_B773()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_andw(&emu_ax, 0x7FFF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x07C9); emu_cs = 0x348B; ovl__348B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_07C9_000A_F8F6();
}

/**
 * Decompiled function f__B4F2_07C9_000A_F8F6()
 *
 * @name f__B4F2_07C9_000A_F8F6
 * @implements B4F2:07C9:000A:F8F6 ()
 *
 */
void f__B4F2_07C9_000A_F8F6()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07D3); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_07D3_0015_0F31();
}

/**
 * Decompiled function f__B4F2_07D3_0015_0F31()
 *
 * @name f__B4F2_07D3_0015_0F31
 * @implements B4F2:07D3:0015:0F31 ()
 *
 */
void f__B4F2_07D3_0015_0F31()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_andw(&emu_ax, 0x7FFF);
	emu_cmpw(&emu_ax, 0x1E);
	if (emu_flags.zf) { f__B4F2_07E8_0019_E1DC(); return; }
	emu_cmpw(&emu_ax, 0x1F);
	if (emu_flags.zf) { f__B4F2_0821_0010_6C88(); return; }
	/* Unresolved jump */ emu_ip = 0x0834; emu_last_cs = 0xB4F2; emu_last_ip = 0x07E6; emu_last_length = 0x0015; emu_last_crc = 0x0F31; emu_call();
}

/**
 * Decompiled function f__B4F2_07E8_0019_E1DC()
 *
 * @name f__B4F2_07E8_0019_E1DC
 * @implements B4F2:07E8:0019:E1DC ()
 *
 * Called From: B4F2:07DF:0015:0F31
 */
void f__B4F2_07E8_0019_E1DC()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x081F; emu_last_cs = 0xB4F2; emu_last_ip = 0x07EF; emu_last_length = 0x0019; emu_last_crc = 0xE1DC; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x2A97));
	emu_subw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x18);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0801); f__B4F2_11B4_0016_244A();
	f__B4F2_0801_0013_1F6E();
}

/**
 * Decompiled function f__B4F2_0801_0013_1F6E()
 *
 * @name f__B4F2_0801_0013_1F6E
 * @implements B4F2:0801:0013:1F6E ()
 *
 */
void f__B4F2_0801_0013_1F6E()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x18);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0814); emu_cs = 0x3511; ovl__3511(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0814_000D_00E4();
}

/**
 * Decompiled function f__B4F2_0814_000D_00E4()
 *
 * @name f__B4F2_0814_000D_00E4
 * @implements B4F2:0814:000D:00E4 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4F2_0814_000D_00E4()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_di, 0x1);
	f__B4F2_0836_0009_2EB3(); return;
}

/**
 * Decompiled function f__B4F2_0821_0010_6C88()
 *
 * @name f__B4F2_0821_0010_6C88
 * @implements B4F2:0821:0010:6C88 ()
 *
 * Called From: B4F2:07E4:0015:0F31
 */
void f__B4F2_0821_0010_6C88()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0831); f__B4F2_1221_000D_EE32();
	f__B4F2_0831_0003_CA1A();
}

/**
 * Decompiled function f__B4F2_0831_0003_CA1A()
 *
 * @name f__B4F2_0831_0003_CA1A
 * @implements B4F2:0831:0003:CA1A ()
 *
 */
void f__B4F2_0831_0003_CA1A()
{
	emu_pop(&emu_cx);
	f__B4F2_0836_0009_2EB3(); return;
}

/**
 * Decompiled function f__B4F2_0836_0009_2EB3()
 *
 * @name f__B4F2_0836_0009_2EB3
 * @implements B4F2:0836:0009:2EB3 ()
 *
 * Called From: B4F2:0756:0003:5D17
 * Called From: B4F2:07AF:0015:8FF6
 * Called From: B4F2:081F:000D:00E4
 * Called From: B4F2:0832:0003:CA1A
 */
void f__B4F2_0836_0009_2EB3()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_flags.zf) { f__B4F2_083F_000A_8D25(); return; }
	f__B4F2_0759_001D_11B0(); return;
}

/**
 * Decompiled function f__B4F2_083F_000A_8D25()
 *
 * @name f__B4F2_083F_000A_8D25
 * @implements B4F2:083F:000A:8D25 ()
 *
 * Called From: B4F2:083A:0009:2EB3
 */
void f__B4F2_083F_000A_8D25()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x27F0);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0849); f__B4F2_0F24_000E_BC8E();
	f__B4F2_0849_0006_0E1B();
}

/**
 * Decompiled function f__B4F2_0849_0006_0E1B()
 *
 * @name f__B4F2_0849_0006_0E1B
 * @implements B4F2:0849:0006:0E1B ()
 *
 */
void f__B4F2_0849_0006_0E1B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_di);
	f__B4F2_084F_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4F2_084F_0006_F7CE()
 *
 * @name f__B4F2_084F_0006_F7CE
 * @implements B4F2:084F:0006:F7CE ()
 *
 * Called From: B4F2:084D:0006:0E1B
 */
void f__B4F2_084F_0006_F7CE()
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
 * Decompiled function f__B4F2_0855_0013_A7FD()
 *
 * @name f__B4F2_0855_0013_A7FD
 * @implements B4F2:0855:0013:A7FD ()
 *
 * Called From: B4F2:0186:000C:D4B9
 * Called From: B4F2:029D:000C:9527
 * Called From: B4F2:039F:000C:ECA6
 * Called From: B4F2:051F:000C:DD04
 * Called From: B4F2:0669:000C:5C32
 * Called From: B4F2:06EC:000C:EB11
 * Called From: B4F2:1121:000B:D674
 */
void f__B4F2_0855_0013_A7FD()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4F2_0868_0015_B404(); return; }
	/* Unresolved jump */ emu_ip = 0x0D4C; emu_last_cs = 0xB4F2; emu_last_ip = 0x0865; emu_last_length = 0x0013; emu_last_crc = 0xA7FD; emu_call();
}

/**
 * Decompiled function f__B4F2_0868_0015_B404()
 *
 * @name f__B4F2_0868_0015_B404
 * @implements B4F2:0868:0015:B404 ()
 *
 * Called From: B4F2:0863:0013:A7FD
 */
void f__B4F2_0868_0015_B404()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2A95), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2A93), 0x0);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x087D); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_087D_000C_EE8E();
}

/**
 * Decompiled function f__B4F2_087D_000C_EE8E()
 *
 * @name f__B4F2_087D_000C_EE8E
 * @implements B4F2:087D:000C:EE8E ()
 *
 */
void f__B4F2_087D_000C_EE8E()
{
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0889); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0889_0012_37F8();
}

/**
 * Decompiled function f__B4F2_0889_0012_37F8()
 *
 * @name f__B4F2_0889_0012_37F8
 * @implements B4F2:0889:0012:37F8 ()
 *
 */
void f__B4F2_0889_0012_37F8()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs); emu_push(0x089B); emu_cs = 0x10E4; f__10E4_057F_0052_2B00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_089B_000F_B3B1();
}

/**
 * Decompiled function f__B4F2_089B_000F_B3B1()
 *
 * @name f__B4F2_089B_000F_B3B1
 * @implements B4F2:089B:000F:B3B1 ()
 *
 */
void f__B4F2_089B_000F_B3B1()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_cs);
	emu_push(0x08AA); f__B4F2_1303_0017_56DB();
	f__B4F2_08AA_0023_995F();
}

/**
 * Decompiled function f__B4F2_08AA_0023_995F()
 *
 * @name f__B4F2_08AA_0023_995F
 * @implements B4F2:08AA:0023:995F ()
 *
 */
void f__B4F2_08AA_0023_995F()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0902; emu_last_cs = 0xB4F2; emu_last_ip = 0x08AD; emu_last_length = 0x0023; emu_last_crc = 0x995F; emu_call(); return; }
	emu_movw(&emu_ax, 0x122);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xEE);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_ds);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	if (!emu_flags.zf) { f__B4F2_08CD_002A_5752(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x271E);
	if (!emu_flags.zf) { f__B4F2_08CD_002A_5752(); return; }
	emu_movw(&emu_ax, 0x2);
	f__B4F2_08CF_0028_5BF2(); return;
}

/**
 * Decompiled function f__B4F2_08CD_002A_5752()
 *
 * @name f__B4F2_08CD_002A_5752
 * @implements B4F2:08CD:002A:5752 ()
 *
 * Called From: B4F2:08C6:0023:995F
 */
void f__B4F2_08CD_002A_5752()
{
	emu_xorw(&emu_ax, emu_ax);
	f__B4F2_08CF_0028_5BF2(); return;
}

/**
 * Decompiled function f__B4F2_08CF_0028_5BF2()
 *
 * @name f__B4F2_08CF_0028_5BF2
 * @implements B4F2:08CF:0028:5BF2 ()
 *
 * Called From: B4F2:08CB:0023:995F
 */
void f__B4F2_08CF_0028_5BF2()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_addw(&emu_dx, emu_ax);
	emu_addw(&emu_dx, 0x6);
	emu_push(emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	emu_addw(&emu_ax, emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_cs);
	emu_push(0x08F7); f__B4F2_1303_0017_56DB();
	f__B4F2_08F7_0008_0683();
}

/**
 * Decompiled function f__B4F2_08F7_0008_0683()
 *
 * @name f__B4F2_08F7_0008_0683
 * @implements B4F2:08F7:0008:0683 ()
 *
 */
void f__B4F2_08F7_0008_0683()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08FF); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_08FF_000F_E61A();
}

/**
 * Decompiled function f__B4F2_08FF_000F_E61A()
 *
 * @name f__B4F2_08FF_000F_E61A
 * @implements B4F2:08FF:000F:E61A ()
 *
 */
void f__B4F2_08FF_000F_E61A()
{
	emu_addw(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_push(emu_cs);
	emu_push(0x090E); f__B4F2_1303_0017_56DB();
	f__B4F2_090E_002B_B1B5();
}

/**
 * Decompiled function f__B4F2_090E_002B_B1B5()
 *
 * @name f__B4F2_090E_002B_B1B5
 * @implements B4F2:090E:002B:B1B5 ()
 *
 */
void f__B4F2_090E_002B_B1B5()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { f__B4F2_0944_0005_ADA0(); return; }
	emu_movw(&emu_ax, 0x22);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xE8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_addw(&emu_ax, 0x2A);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_addw(&emu_ax, 0x2);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x151);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0939); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0939_0008_0683();
}

/**
 * Decompiled function f__B4F2_0939_0008_0683()
 *
 * @name f__B4F2_0939_0008_0683
 * @implements B4F2:0939:0008:0683 ()
 *
 */
void f__B4F2_0939_0008_0683()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0941); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0941_0008_1728();
}

/**
 * Decompiled function f__B4F2_0941_0008_1728()
 *
 * @name f__B4F2_0941_0008_1728
 * @implements B4F2:0941:0008:1728 ()
 *
 */
void f__B4F2_0941_0008_1728()
{
	emu_addw(&emu_sp, 0xE);
	f__B4F2_0944_0005_ADA0(); return;
}

/**
 * Decompiled function f__B4F2_0944_0005_ADA0()
 *
 * @name f__B4F2_0944_0005_ADA0
 * @implements B4F2:0944:0005:ADA0 ()
 *
 * Called From: B4F2:0911:002B:B1B5
 */
void f__B4F2_0944_0005_ADA0()
{
	emu_xorw(&emu_di, emu_di);
	f__B4F2_0BA6_000F_3ECB(); return;
}

/**
 * Decompiled function f__B4F2_0949_0037_8E4A()
 *
 * @name f__B4F2_0949_0037_8E4A
 * @implements B4F2:0949:0037:8E4A ()
 *
 * Called From: B4F2:0BB2:000F:3ECB
 * Called From: B4F2:0BB2:0010:3E8C
 * Called From: B4F2:0BB2:0013:29DD
 */
void f__B4F2_0949_0037_8E4A()
{
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2A77));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x2A75));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movw(&emu_ax, emu_di);
	emu_movw(&emu_dx, 0xE);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_addw(&emu_bx, 0x7);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs);
	emu_push(0x0980); f__B4F2_1303_0017_56DB();
	f__B4F2_0980_0008_3E9A();
}

/**
 * Decompiled function f__B4F2_0980_0008_3E9A()
 *
 * @name f__B4F2_0980_0008_3E9A
 * @implements B4F2:0980:0008:3E9A ()
 *
 */
void f__B4F2_0980_0008_3E9A()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { f__B4F2_0988_0079_A2B2(); return; }
	f__B4F2_0BA5_0010_3E8C(); return;
}

/**
 * Decompiled function f__B4F2_0988_0079_A2B2()
 *
 * @name f__B4F2_0988_0079_A2B2
 * @implements B4F2:0988:0079:A2B2 ()
 *
 * Called From: B4F2:0983:0008:3E9A
 */
void f__B4F2_0988_0079_A2B2()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x1E), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x20), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x22), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x24), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x8), 0x0);
	emu_movw(&emu_ax, emu_ds);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09EE; emu_last_cs = 0xB4F2; emu_last_ip = 0x09E5; emu_last_length = 0x0079; emu_last_crc = 0xA2B2; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x27F0);
	if (emu_flags.zf) { f__B4F2_0A23_00A0_F132(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x0);
	if (emu_flags.zf) { f__B4F2_0A01_000B_51A5(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	f__B4F2_0A07_0005_3DBD(); return;
}

/**
 * Decompiled function f__B4F2_0A01_000B_51A5()
 *
 * @name f__B4F2_0A01_000B_51A5
 * @implements B4F2:0A01:000B:51A5 ()
 *
 * Called From: B4F2:09F6:0079:A2B2
 */
void f__B4F2_0A01_000B_51A5()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	f__B4F2_0A07_0005_3DBD(); return;
}

/**
 * Decompiled function f__B4F2_0A07_0005_3DBD()
 *
 * @name f__B4F2_0A07_0005_3DBD
 * @implements B4F2:0A07:0005:3DBD ()
 *
 * Called From: B4F2:09FF:0079:A2B2
 */
void f__B4F2_0A07_0005_3DBD()
{
	emu_push(emu_cs);
	emu_push(0x0A0C); f__B4F2_1303_0017_56DB();
	f__B4F2_0A0C_000F_E74D();
}

/**
 * Decompiled function f__B4F2_0A0C_000F_E74D()
 *
 * @name f__B4F2_0A0C_000F_E74D
 * @implements B4F2:0A0C:000F:E74D ()
 *
 */
void f__B4F2_0A0C_000F_E74D()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A1B); emu_cs = 0x29DA; f__29DA_00D0_0013_E21A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0A1B_00A8_6448();
}

/**
 * Decompiled function f__B4F2_0A1B_00A8_6448()
 *
 * @name f__B4F2_0A1B_00A8_6448
 * @implements B4F2:0A1B:00A8:6448 ()
 *
 */
void f__B4F2_0A1B_00A8_6448()
{
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x6), emu_ax);
	f__B4F2_0A23_00A0_F132(); return;
}

/**
 * Decompiled function f__B4F2_0A23_00A0_F132()
 *
 * @name f__B4F2_0A23_00A0_F132
 * @implements B4F2:0A23:00A0:F132 ()
 *
 * Called From: B4F2:09EC:0079:A2B2
 */
void f__B4F2_0A23_00A0_F132()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x1B);
	if (emu_flags.zf) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x8), 0x13);
	}
	f__B4F2_0A44_007F_1761(); return;
}

/**
 * Decompiled function f__B4F2_0A44_007F_1761()
 *
 * @name f__B4F2_0A44_007F_1761
 * @implements B4F2:0A44:007F:1761 ()
 *
 * Called From: B4F2:0A39:00A8:6448
 * Called From: B4F2:0A39:00A0:F132
 */
void f__B4F2_0A44_007F_1761()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_si, 0x0));
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x38), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xA), 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xB), 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xC), 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x12), 0x34F2);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x10), 0x61);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x16), 0x34F2);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x14), 0x61);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x1A), 0x34F2);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x18), 0x61);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_si, 0x0));
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x1C), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x0AC3); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0AC3_0015_5E76();
}

/**
 * Decompiled function f__B4F2_0AC3_0015_5E76()
 *
 * @name f__B4F2_0AC3_0015_5E76
 * @implements B4F2:0AC3:0015:5E76 ()
 *
 */
void f__B4F2_0AC3_0015_5E76()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2A95), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2A93), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0AD8); emu_cs = 0x348B; ovl__348B(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0AD8_0010_CB6F();
}

/**
 * Decompiled function f__B4F2_0AD8_0010_CB6F()
 *
 * @name f__B4F2_0AD8_0010_CB6F
 * @implements B4F2:0AD8:0010:CB6F ()
 *
 */
void f__B4F2_0AD8_0010_CB6F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0AE8); emu_cs = 0x348B; ovl__348B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0AE8_000E_5E9D();
}

/**
 * Decompiled function f__B4F2_0AE8_000E_5E9D()
 *
 * @name f__B4F2_0AE8_000E_5E9D
 * @implements B4F2:0AE8:000E:5E9D ()
 *
 */
void f__B4F2_0AE8_000E_5E9D()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0AF6); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0AF6_000F_CEE8();
}

/**
 * Decompiled function f__B4F2_0AF6_000F_CEE8()
 *
 * @name f__B4F2_0AF6_000F_CEE8
 * @implements B4F2:0AF6:000F:CEE8 ()
 *
 */
void f__B4F2_0AF6_000F_CEE8()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x0);
	if (!emu_flags.zf) { f__B4F2_0B05_0044_6791(); return; }
	f__B4F2_0BA5_0010_3E8C(); return;
}

/**
 * Decompiled function f__B4F2_0B05_0044_6791()
 *
 * @name f__B4F2_0B05_0044_6791
 * @implements B4F2:0B05:0044:6791 ()
 *
 * Called From: B4F2:0B00:000F:CEE8
 */
void f__B4F2_0B05_0044_6791()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x1);
	if (!emu_flags.zf) { f__B4F2_0B49_0051_E4E8(); return; }
	emu_movw(&emu_ax, 0x22);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xE8);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x20));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_addw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4062));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x28);
	/* Unresolved jump */ emu_ip = 0x0B8D; emu_last_cs = 0xB4F2; emu_last_ip = 0x0B47; emu_last_length = 0x0044; emu_last_crc = 0x6791; emu_call();
}

/**
 * Decompiled function f__B4F2_0B49_0051_E4E8()
 *
 * @name f__B4F2_0B49_0051_E4E8
 * @implements B4F2:0B49:0051:E4E8 ()
 *
 * Called From: B4F2:0B0A:0044:6791
 */
void f__B4F2_0B49_0051_E4E8()
{
	emu_movw(&emu_ax, 0x222);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xE8);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x20));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_addw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x4062));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_dx, emu_cl);
	emu_addw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xFFF6);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs);
	emu_push(0x0B9A); f__B4F2_1303_0017_56DB();
	f__B4F2_0B9A_0008_0683();
}

/**
 * Decompiled function f__B4F2_0B9A_0008_0683()
 *
 * @name f__B4F2_0B9A_0008_0683
 * @implements B4F2:0B9A:0008:0683 ()
 *
 */
void f__B4F2_0B9A_0008_0683()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BA2); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0BA2_0013_29DD();
}

/**
 * Decompiled function f__B4F2_0BA2_0013_29DD()
 *
 * @name f__B4F2_0BA2_0013_29DD
 * @implements B4F2:0BA2:0013:29DD ()
 *
 */
void f__B4F2_0BA2_0013_29DD()
{
	emu_addw(&emu_sp, 0xE);
	f__B4F2_0BA5_0010_3E8C(); return;
}

/**
 * Decompiled function f__B4F2_0BA5_0010_3E8C()
 *
 * @name f__B4F2_0BA5_0010_3E8C
 * @implements B4F2:0BA5:0010:3E8C ()
 *
 * Called From: B4F2:0985:0008:3E9A
 * Called From: B4F2:0B02:000F:CEE8
 */
void f__B4F2_0BA5_0010_3E8C()
{
	emu_incw(&emu_di);
	f__B4F2_0BA6_000F_3ECB(); return;
}

/**
 * Decompiled function f__B4F2_0BA6_000F_3ECB()
 *
 * @name f__B4F2_0BA6_000F_3ECB
 * @implements B4F2:0BA6:000F:3ECB ()
 *
 * Called From: B4F2:0946:0005:ADA0
 * Called From: B4F2:0946:0008:1728
 */
void f__B4F2_0BA6_000F_3ECB()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x6));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4F2_0BB5_000A_6986(); return; }
	f__B4F2_0949_0037_8E4A(); return;
}

/**
 * Decompiled function f__B4F2_0BB5_000A_6986()
 *
 * @name f__B4F2_0BB5_000A_6986
 * @implements B4F2:0BB5:000A:6986 ()
 *
 * Called From: B4F2:0BB0:0010:3E8C
 */
void f__B4F2_0BB5_000A_6986()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x80B2), 0x5);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0BBF; emu_last_cs = 0xB4F2; emu_last_ip = 0x0BBA; emu_last_length = 0x000A; emu_last_crc = 0x6986; emu_call(); return; }
	f__B4F2_0D06_0005_6168(); return;
}

/**
 * Decompiled function f__B4F2_0D06_0005_6168()
 *
 * @name f__B4F2_0D06_0005_6168
 * @implements B4F2:0D06:0005:6168 ()
 *
 * Called From: B4F2:0BBC:000A:6986
 */
void f__B4F2_0D06_0005_6168()
{
	emu_push(emu_cs); emu_push(0x0D0B); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0D0B_000B_EB1E();
}

/**
 * Decompiled function f__B4F2_0D0B_000B_EB1E()
 *
 * @name f__B4F2_0D0B_000B_EB1E
 * @implements B4F2:0D0B:000B:EB1E ()
 *
 */
void f__B4F2_0D0B_000B_EB1E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0D16); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0D16_0025_F411();
}

/**
 * Decompiled function f__B4F2_0D16_0025_F411()
 *
 * @name f__B4F2_0D16_0025_F411
 * @implements B4F2:0D16:0025:F411 ()
 *
 */
void f__B4F2_0D16_0025_F411()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x0D3B); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0D3B_0008_43E5();
}

/**
 * Decompiled function f__B4F2_0D3B_0008_43E5()
 *
 * @name f__B4F2_0D3B_0008_43E5
 * @implements B4F2:0D3B:0008:43E5 ()
 *
 */
void f__B4F2_0D3B_0008_43E5()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0D43); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0D43_0008_64F7();
}

/**
 * Decompiled function f__B4F2_0D43_0008_64F7()
 *
 * @name f__B4F2_0D43_0008_64F7
 * @implements B4F2:0D43:0008:64F7 ()
 *
 */
void f__B4F2_0D43_0008_64F7()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D4B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0D4B_0007_F77C();
}

/**
 * Decompiled function f__B4F2_0D4B_0007_F77C()
 *
 * @name f__B4F2_0D4B_0007_F77C
 * @implements B4F2:0D4B:0007:F77C ()
 *
 */
void f__B4F2_0D4B_0007_F77C()
{
	emu_pop(&emu_cx);
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
 * Decompiled function f__B4F2_0D52_0029_1FC2()
 *
 * @name f__B4F2_0D52_0029_1FC2
 * @implements B4F2:0D52:0029:1FC2 ()
 *
 * Called From: B4F2:052B:000C:2EB3
 * Called From: B4F2:053E:0009:A53C
 * Called From: B4F2:065D:000C:A986
 * Called From: B4F2:0675:000C:A98C
 */
void f__B4F2_0D52_0029_1FC2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x2A97));
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x2A99));
		if (emu_flags.zf) { f__B4F2_0DE1_0002_2597(); return; }
	}
	f__B4F2_0D64_0017_7F9F(); return;
}

/**
 * Decompiled function f__B4F2_0D64_0017_7F9F()
 *
 * @name f__B4F2_0D64_0017_7F9F
 * @implements B4F2:0D64:0017:7F9F ()
 *
 * Called From: B4F2:0D59:0029:1FC2
 */
void f__B4F2_0D64_0017_7F9F()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x2A97));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2A99), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x2A97), 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__B4F2_0D7F_000A_F079(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2A39);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0D7B); emu_cs = 0x348B; emu_ip = 0x002A; emu_last_cs = 0xB4F2; emu_last_ip = 0x0D76; emu_last_length = 0x0017; emu_last_crc = 0x7F9F; emu_call();
	/* Unresolved jump */ emu_ip = 0x0D7B; emu_last_cs = 0xB4F2; emu_last_ip = 0x0D7B; emu_last_length = 0x0017; emu_last_crc = 0x7F9F; emu_call();
}

/**
 * Decompiled function f__B4F2_0D7F_000A_F079()
 *
 * @name f__B4F2_0D7F_000A_F079
 * @implements B4F2:0D7F:000A:F079 ()
 *
 * Called From: B4F2:0D6F:0017:7F9F
 * Called From: B4F2:0D6F:0029:1FC2
 */
void f__B4F2_0D7F_000A_F079()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2A39);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D89); emu_cs = 0x348B; ovl__348B(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0D89_0010_3CB0();
}

/**
 * Decompiled function f__B4F2_0D89_0010_3CB0()
 *
 * @name f__B4F2_0D89_0010_3CB0
 * @implements B4F2:0D89:0010:3CB0 ()
 *
 */
void f__B4F2_0D89_0010_3CB0()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0xE9);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2A39);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0D99); f__B4F2_13CE_0013_65D7();
	f__B4F2_0D99_000E_986A();
}

/**
 * Decompiled function f__B4F2_0D99_000E_986A()
 *
 * @name f__B4F2_0D99_000E_986A
 * @implements B4F2:0D99:000E:986A ()
 *
 */
void f__B4F2_0D99_000E_986A()
{
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { f__B4F2_0DA7_0019_443B(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x2A91));
	f__B4F2_0DA9_0017_0422(); return;
}

/**
 * Decompiled function f__B4F2_0DA7_0019_443B()
 *
 * @name f__B4F2_0DA7_0019_443B
 * @implements B4F2:0DA7:0019:443B ()
 *
 * Called From: B4F2:0DA0:000E:986A
 */
void f__B4F2_0DA7_0019_443B()
{
	emu_xorw(&emu_ax, emu_ax);
	f__B4F2_0DA9_0017_0422(); return;
}

/**
 * Decompiled function f__B4F2_0DA9_0017_0422()
 *
 * @name f__B4F2_0DA9_0017_0422
 * @implements B4F2:0DA9:0017:0422 ()
 *
 * Called From: B4F2:0DA5:000E:986A
 */
void f__B4F2_0DA9_0017_0422()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x80B2));
	emu_addw(&emu_dx, emu_ax);
	emu_decw(&emu_dx);
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x2A97));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4F2_0DC4_000A_347F(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x29FD);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0DC0); emu_cs = 0x348B; emu_ip = 0x002A; emu_last_cs = 0xB4F2; emu_last_ip = 0x0DBB; emu_last_length = 0x0017; emu_last_crc = 0x0422; emu_call();
	/* Unresolved jump */ emu_ip = 0x0DC0; emu_last_cs = 0xB4F2; emu_last_ip = 0x0DC0; emu_last_length = 0x0017; emu_last_crc = 0x0422; emu_call();
}

/**
 * Decompiled function f__B4F2_0DC4_000A_347F()
 *
 * @name f__B4F2_0DC4_000A_347F
 * @implements B4F2:0DC4:000A:347F ()
 *
 * Called From: B4F2:0DB4:0017:0422
 * Called From: B4F2:0DB4:0019:443B
 */
void f__B4F2_0DC4_000A_347F()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x29FD);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DCE); emu_cs = 0x348B; ovl__348B(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0DCE_0010_B907();
}

/**
 * Decompiled function f__B4F2_0DCE_0010_B907()
 *
 * @name f__B4F2_0DCE_0010_B907
 * @implements B4F2:0DCE:0010:B907 ()
 *
 */
void f__B4F2_0DCE_0010_B907()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0xE9);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x29FD);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0DDE); f__B4F2_13CE_0013_65D7();
	f__B4F2_0DDE_0005_6143();
}

/**
 * Decompiled function f__B4F2_0DDE_0005_6143()
 *
 * @name f__B4F2_0DDE_0005_6143
 * @implements B4F2:0DDE:0005:6143 ()
 *
 */
void f__B4F2_0DDE_0005_6143()
{
	emu_addw(&emu_sp, 0x6);
	f__B4F2_0DE1_0002_2597(); return;
}

/**
 * Decompiled function f__B4F2_0DE1_0002_2597()
 *
 * @name f__B4F2_0DE1_0002_2597
 * @implements B4F2:0DE1:0002:2597 ()
 *
 * Called From: B4F2:0D62:0029:1FC2
 */
void f__B4F2_0DE1_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0DE3_001F_AB1C()
 *
 * @name f__B4F2_0DE3_001F_AB1C
 * @implements B4F2:0DE3:001F:AB1C ()
 *
 * Called From: B4F2:0319:0006:58B0
 */
void f__B4F2_0DE3_001F_AB1C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x300);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x0E02); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0E02_0010_2CBB();
}

/**
 * Decompiled function f__B4F2_0E02_0010_2CBB()
 *
 * @name f__B4F2_0E02_0010_2CBB
 * @implements B4F2:0E02:0010:2CBB ()
 *
 */
void f__B4F2_0E02_0010_2CBB()
{
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0E12); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0E12_0004_BEB2();
}

/**
 * Decompiled function f__B4F2_0E12_0004_BEB2()
 *
 * @name f__B4F2_0E12_0004_BEB2
 * @implements B4F2:0E12:0004:BEB2 ()
 *
 */
void f__B4F2_0E12_0004_BEB2()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0E16_0019_86E9()
 *
 * @name f__B4F2_0E16_0019_86E9
 * @implements B4F2:0E16:0019:86E9 ()
 *
 * Called From: B4F2:0170:0005:3FA8
 */
void f__B4F2_0E16_0019_86E9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x1A);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_bp - 0x1A);
	emu_push(emu_ss);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2A9B);
	emu_push(emu_ds);
	emu_push(emu_ax);
	emu_movw(&emu_cx, 0x12);
	emu_push(emu_cs); emu_push(0x0E2F); emu_cs = 0x01F7; f__01F7_03C9_001C_11C7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0E2F_001C_FAAE();
}

/**
 * Decompiled function f__B4F2_0E2F_001C_FAAE()
 *
 * @name f__B4F2_0E2F_001C_FAAE
 * @implements B4F2:0E2F:001C:FAAE ()
 *
 */
void f__B4F2_0E2F_001C_FAAE()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x300);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0E4B); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0E4B_0014_537D();
}

/**
 * Decompiled function f__B4F2_0E4B_0014_537D()
 *
 * @name f__B4F2_0E4B_0014_537D
 * @implements B4F2:0E4B:0014:537D ()
 *
 */
void f__B4F2_0E4B_0014_537D()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_xorw(&emu_si, emu_si);
	f__B4F2_0E73_0011_CF2A(); return;
}

/**
 * Decompiled function f__B4F2_0E5F_0025_489F()
 *
 * @name f__B4F2_0E5F_0025_489F
 * @implements B4F2:0E5F:0025:489F ()
 *
 * Called From: B4F2:0E77:0011:CF2A
 * Called From: B4F2:0E77:0025:489F
 */
void f__B4F2_0E5F_0025_489F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movb(&emu_ah, 0x0);
	emu_sarw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_si);
	f__B4F2_0E73_0011_CF2A(); return;
}

/**
 * Decompiled function f__B4F2_0E73_0011_CF2A()
 *
 * @name f__B4F2_0E73_0011_CF2A
 * @implements B4F2:0E73:0011:CF2A ()
 *
 * Called From: B4F2:0E5D:0014:537D
 */
void f__B4F2_0E73_0011_CF2A()
{
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__B4F2_0E5F_0025_489F(); return; }
	emu_movw(&emu_ax, emu_bp - 0x1A);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ss);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	f__B4F2_0EC3_0016_F9AF(); return;
}

/**
 * Decompiled function f__B4F2_0E84_0038_CF2A()
 *
 * @name f__B4F2_0E84_0038_CF2A
 * @implements B4F2:0E84:0038:CF2A ()
 *
 * Called From: B4F2:0ECA:0016:F9AF
 * Called From: B4F2:0ECA:001D:B10D
 */
void f__B4F2_0E84_0038_CF2A()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x3);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_dx, 0x3);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_dx, 0x3);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0EBC); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0EBC_001D_B10D();
}

/**
 * Decompiled function f__B4F2_0EBC_001D_B10D()
 *
 * @name f__B4F2_0EBC_001D_B10D
 * @implements B4F2:0EBC:001D:B10D ()
 *
 */
void f__B4F2_0EBC_001D_B10D()
{
	emu_addw(&emu_sp, 0xC);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	f__B4F2_0EC3_0016_F9AF(); return;
}

/**
 * Decompiled function f__B4F2_0EC3_0016_F9AF()
 *
 * @name f__B4F2_0EC3_0016_F9AF
 * @implements B4F2:0EC3:0016:F9AF ()
 *
 * Called From: B4F2:0E82:0025:489F
 */
void f__B4F2_0EC3_0016_F9AF()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (!emu_flags.zf) { f__B4F2_0E84_0038_CF2A(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x0ED9); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0ED9_0007_EF7C();
}

/**
 * Decompiled function f__B4F2_0ED9_0007_EF7C()
 *
 * @name f__B4F2_0ED9_0007_EF7C
 * @implements B4F2:0ED9:0007:EF7C ()
 *
 */
void f__B4F2_0ED9_0007_EF7C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0EE0_000E_BC8E()
 *
 * @name f__B4F2_0EE0_000E_BC8E
 * @implements B4F2:0EE0:000E:BC8E ()
 *
 * Called From: B4F2:017A:000A:3489
 * Called From: B4F2:0291:0015:800B
 * Called From: B4F2:0393:000F:A3C2
 * Called From: B4F2:0513:000D:4D30
 * Called From: B4F2:0513:0010:8F88
 * Called From: B4F2:0651:000A:3D30
 * Called From: B4F2:06E0:000A:0DAC
 * Called From: B4F2:06E0:0035:32F1
 * Called From: B4F2:1116:0019:B3DC
 */
void f__B4F2_0EE0_000E_BC8E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0EEE); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0EEE_0006_0569();
}

/**
 * Decompiled function f__B4F2_0EEE_0006_0569()
 *
 * @name f__B4F2_0EEE_0006_0569
 * @implements B4F2:0EEE:0006:0569 ()
 *
 */
void f__B4F2_0EEE_0006_0569()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0EF4); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0EF4_0009_C306();
}

/**
 * Decompiled function f__B4F2_0EF4_0009_C306()
 *
 * @name f__B4F2_0EF4_0009_C306
 * @implements B4F2:0EF4:0009:C306 ()
 *
 */
void f__B4F2_0EF4_0009_C306()
{
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EFD); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0EFD_001D_FFB4();
}

/**
 * Decompiled function f__B4F2_0EFD_001D_FFB4()
 *
 * @name f__B4F2_0EFD_001D_FFB4
 * @implements B4F2:0EFD:001D:FFB4 ()
 *
 */
void f__B4F2_0EFD_001D_FFB4()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x66C0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x66C2);
	emu_push(0x0F1A);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6101C: f__22A6_101C_004B_D9F3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x0F15; emu_last_length = 0x001D; emu_last_crc = 0xFFB4;
			emu_call();
			return;
	}
	f__B4F2_0F1A_0008_33E5();
}

/**
 * Decompiled function f__B4F2_0F1A_0008_33E5()
 *
 * @name f__B4F2_0F1A_0008_33E5
 * @implements B4F2:0F1A:0008:33E5 ()
 *
 */
void f__B4F2_0F1A_0008_33E5()
{
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x0F22); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0F22_0002_2597();
}

/**
 * Decompiled function f__B4F2_0F22_0002_2597()
 *
 * @name f__B4F2_0F22_0002_2597
 * @implements B4F2:0F22:0002:2597 ()
 *
 */
void f__B4F2_0F22_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0F24_000E_BC8E()
 *
 * @name f__B4F2_0F24_000E_BC8E
 * @implements B4F2:0F24:000E:BC8E ()
 *
 * Called From: B4F2:01C9:0013:C71B
 * Called From: B4F2:049E:000A:CE31
 * Called From: B4F2:0603:000A:BD94
 * Called From: B4F2:06A1:000A:3D33
 * Called From: B4F2:0846:000A:8D25
 * Called From: B4F2:1172:000D:BD26
 */
void f__B4F2_0F24_000E_BC8E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0F32); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0F32_0006_0569();
}

/**
 * Decompiled function f__B4F2_0F32_0006_0569()
 *
 * @name f__B4F2_0F32_0006_0569
 * @implements B4F2:0F32:0006:0569 ()
 *
 */
void f__B4F2_0F32_0006_0569()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0F38); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0F38_0009_C306();
}

/**
 * Decompiled function f__B4F2_0F38_0009_C306()
 *
 * @name f__B4F2_0F38_0009_C306
 * @implements B4F2:0F38:0009:C306 ()
 *
 */
void f__B4F2_0F38_0009_C306()
{
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F41); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0F41_001D_FF8F();
}

/**
 * Decompiled function f__B4F2_0F41_001D_FF8F()
 *
 * @name f__B4F2_0F41_001D_FF8F
 * @implements B4F2:0F41:001D:FF8F ()
 *
 */
void f__B4F2_0F41_001D_FF8F()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x662C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x662E);
	emu_push(0x0F5E);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604F8: f__22A6_04F8_007A_6E25(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x0F59; emu_last_length = 0x001D; emu_last_crc = 0xFF8F;
			emu_call();
			return;
	}
	f__B4F2_0F5E_0008_33E5();
}

/**
 * Decompiled function f__B4F2_0F5E_0008_33E5()
 *
 * @name f__B4F2_0F5E_0008_33E5
 * @implements B4F2:0F5E:0008:33E5 ()
 *
 */
void f__B4F2_0F5E_0008_33E5()
{
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x0F66); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0F66_0002_2597();
}

/**
 * Decompiled function f__B4F2_0F66_0002_2597()
 *
 * @name f__B4F2_0F66_0002_2597
 * @implements B4F2:0F66:0002:2597 ()
 *
 */
void f__B4F2_0F66_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0F68_0011_1140()
 *
 * @name f__B4F2_0F68_0011_1140
 * @implements B4F2:0F68:0011:1140 ()
 *
 * Called From: 34F2:0061:0005:0000
 */
void f__B4F2_0F68_0011_1140()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F79); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_0F79_0086_1AA0();
}

/**
 * Decompiled function f__B4F2_0F79_0086_1AA0()
 *
 * @name f__B4F2_0F79_0086_1AA0
 * @implements B4F2:0F79:0086:1AA0 ()
 *
 */
void f__B4F2_0F79_0086_1AA0()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x4062));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_dx, emu_cl);
	emu_addw(&emu_ax, emu_dx);
	emu_movw(&emu_si, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x20));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_movw(&emu_di, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x22));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x24));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x3);
	emu_sarw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x4192), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x4194), emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cl, 0x3);
	emu_sarw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x4196), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x4198), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2E));
	emu_andw(&emu_ax, 0x5);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { f__B4F2_100B_0007_A775(); return; }
	emu_cmpw(&emu_ax, 0x4);
	if (emu_flags.zf) { f__B4F2_0FFF_000C_55F2(); return; }
	emu_cmpw(&emu_ax, 0x5);
	if (emu_flags.zf) { f__B4F2_100B_0007_A775(); return; }
	f__B4F2_1012_000C_AC72(); return;
}

/**
 * Decompiled function f__B4F2_0FFF_000C_55F2()
 *
 * @name f__B4F2_0FFF_000C_55F2
 * @implements B4F2:0FFF:000C:55F2 ()
 *
 * Called From: B4F2:0FF6:0086:1AA0
 */
void f__B4F2_0FFF_000C_55F2()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x2);
	f__B4F2_1004_0007_A78B(); return;
}

/**
 * Decompiled function f__B4F2_1004_0007_A78B()
 *
 * @name f__B4F2_1004_0007_A78B
 * @implements B4F2:1004:0007:A78B ()
 *
 * Called From: B4F2:1010:0007:A775
 */
void f__B4F2_1004_0007_A78B()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xE7);
	f__B4F2_101E_0010_DC57(); return;
}

/**
 * Decompiled function f__B4F2_100B_0007_A775()
 *
 * @name f__B4F2_100B_0007_A775
 * @implements B4F2:100B:0007:A775 ()
 *
 * Called From: B4F2:0FF1:0086:1AA0
 * Called From: B4F2:0FFB:0086:1AA0
 */
void f__B4F2_100B_0007_A775()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__B4F2_1004_0007_A78B(); return;
}

/**
 * Decompiled function f__B4F2_1012_000C_AC72()
 *
 * @name f__B4F2_1012_000C_AC72
 * @implements B4F2:1012:000C:AC72 ()
 *
 * Called From: B4F2:0FFD:0086:1AA0
 */
void f__B4F2_1012_000C_AC72()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xE8);
	f__B4F2_101E_0010_DC57(); return;
}

/**
 * Decompiled function f__B4F2_101E_0010_DC57()
 *
 * @name f__B4F2_101E_0010_DC57
 * @implements B4F2:101E:0010:DC57 ()
 *
 * Called From: B4F2:1009:000C:55F2
 * Called From: B4F2:1009:0007:A78B
 * Called From: B4F2:101C:000C:AC72
 */
void f__B4F2_101E_0010_DC57()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, 0x13);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x102E); emu_cs = 0x10E4; f__10E4_057F_0052_2B00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_102E_0047_75DD();
}

/**
 * Decompiled function f__B4F2_102E_0047_75DD()
 *
 * @name f__B4F2_102E_0047_75DD
 * @implements B4F2:102E:0047:75DD ()
 *
 */
void f__B4F2_102E_0047_75DD()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x38), 0x1E);
	if (!emu_flags.zf) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x38), 0x6B);
		if (!emu_flags.zf) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
			emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x38), 0x6C);
			if (!emu_flags.zf) {
				emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
				emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x38), 0x66);
				if (!emu_flags.zf) { f__B4F2_1075_0022_D216(); return; }
			}
		}
	}
	f__B4F2_1059_001C_705D(); return;
}

/**
 * Decompiled function f__B4F2_1059_001C_705D()
 *
 * @name f__B4F2_1059_001C_705D
 * @implements B4F2:1059:001C:705D ()
 *
 * Called From: B4F2:1039:0047:75DD
 * Called From: B4F2:1043:0047:75DD
 * Called From: B4F2:104D:0047:75DD
 */
void f__B4F2_1059_001C_705D()
{
	emu_movw(&emu_ax, 0x122);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_sarw(&emu_ax, 0x1);
	emu_movw(&emu_dx, emu_si);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	f__B4F2_108B_000C_2AAD(); return;
}

/**
 * Decompiled function f__B4F2_1075_0022_D216()
 *
 * @name f__B4F2_1075_0022_D216
 * @implements B4F2:1075:0022:D216 ()
 *
 * Called From: B4F2:1057:0047:75DD
 */
void f__B4F2_1075_0022_D216()
{
	emu_movw(&emu_ax, 0x22);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, 0x3);
	emu_push(emu_ax);
	f__B4F2_108B_000C_2AAD(); return;
}

/**
 * Decompiled function f__B4F2_108B_000C_2AAD()
 *
 * @name f__B4F2_108B_000C_2AAD
 * @implements B4F2:108B:000C:2AAD ()
 *
 * Called From: B4F2:1073:001C:705D
 * Called From: B4F2:1073:0047:75DD
 */
void f__B4F2_108B_000C_2AAD()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x38));
	emu_push(emu_cs);
	emu_push(0x1097); f__B4F2_1303_0017_56DB();
	f__B4F2_1097_0008_0683();
}

/**
 * Decompiled function f__B4F2_1097_0008_0683()
 *
 * @name f__B4F2_1097_0008_0683
 * @implements B4F2:1097:0008:0683 ()
 *
 */
void f__B4F2_1097_0008_0683()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x109F); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_109F_001C_4E38();
}

/**
 * Decompiled function f__B4F2_109F_001C_4E38()
 *
 * @name f__B4F2_109F_001C_4E38
 * @implements B4F2:109F:001C:4E38 ()
 *
 */
void f__B4F2_109F_001C_4E38()
{
	emu_addw(&emu_sp, 0xE);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__B4F2_10ED_0008_1199(); return; }
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x10BB); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_10BB_002A_1D60();
}

/**
 * Decompiled function f__B4F2_10BB_002A_1D60()
 *
 * @name f__B4F2_10BB_002A_1D60
 * @implements B4F2:10BB:002A:1D60 ()
 *
 */
void f__B4F2_10BB_002A_1D60()
{
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cl, 0x3);
	emu_sarw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x3);
	emu_sarw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x3);
	emu_sarw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10E5); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_10E5_0008_F38A();
}

/**
 * Decompiled function f__B4F2_10E5_0008_F38A()
 *
 * @name f__B4F2_10E5_0008_F38A
 * @implements B4F2:10E5:0008:F38A ()
 *
 */
void f__B4F2_10E5_0008_F38A()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x10ED); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_10ED_0008_1199();
}

/**
 * Decompiled function f__B4F2_10ED_0008_1199()
 *
 * @name f__B4F2_10ED_0008_1199
 * @implements B4F2:10ED:0008:1199 ()
 *
 * Called From: B4F2:10A6:001C:4E38
 */
void f__B4F2_10ED_0008_1199()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x10F5); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_10F5_0005_EAF1();
}

/**
 * Decompiled function f__B4F2_10F5_0005_EAF1()
 *
 * @name f__B4F2_10F5_0005_EAF1
 * @implements B4F2:10F5:0005:EAF1 ()
 *
 */
void f__B4F2_10F5_0005_EAF1()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	f__B4F2_10FA_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4F2_10FA_0006_F7CE()
 *
 * @name f__B4F2_10FA_0006_F7CE
 * @implements B4F2:10FA:0006:F7CE ()
 *
 * Called From: B4F2:10F8:0005:EAF1
 */
void f__B4F2_10FA_0006_F7CE()
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
 * Decompiled function f__B4F2_1100_0019_B3DC()
 *
 * @name f__B4F2_1100_0019_B3DC
 * @implements B4F2:1100:0019:B3DC ()
 *
 * Called From: 34F2:002F:0005:0000
 * Called From: B4F2:021F:0009:48EA
 * Called From: B4F2:0237:0009:49EC
 * Called From: B4F2:0258:0009:9BF4
 */
void f__B4F2_1100_0019_B3DC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2720), emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x271E);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1119); f__B4F2_0EE0_000E_BC8E();
	f__B4F2_1119_000B_D674();
}

/**
 * Decompiled function f__B4F2_1119_000B_D674()
 *
 * @name f__B4F2_1119_000B_D674
 * @implements B4F2:1119:000B:D674 ()
 *
 */
void f__B4F2_1119_000B_D674()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x271E);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1124); f__B4F2_0855_0013_A7FD();
	f__B4F2_1124_0007_AFF1();
}

/**
 * Decompiled function f__B4F2_1124_0007_AFF1()
 *
 * @name f__B4F2_1124_0007_AFF1
 * @implements B4F2:1124:0007:AFF1 ()
 *
 */
void f__B4F2_1124_0007_AFF1()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, 0x1);
	f__B4F2_1168_000D_BD26(); return;
}

/**
 * Decompiled function f__B4F2_112B_000D_7056()
 *
 * @name f__B4F2_112B_000D_7056
 * @implements B4F2:112B:000D:7056 ()
 *
 * Called From: B4F2:116A:000D:BD26
 */
void f__B4F2_112B_000D_7056()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x1138); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_1138_001E_D0F3();
}

/**
 * Decompiled function f__B4F2_1138_001E_D0F3()
 *
 * @name f__B4F2_1138_001E_D0F3
 * @implements B4F2:1138:001E:D0F3 ()
 *
 */
void f__B4F2_1138_001E_D0F3()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8000);
	if (emu_flags.zf) { f__B4F2_1163_0005_1765(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax, 0x7FFF);
	emu_cmpw(&emu_ax, 0x1E);
	if (emu_flags.zf) { f__B4F2_1156_0005_D6CA(); return; }
	emu_cmpw(&emu_ax, 0x1F);
	if (emu_flags.zf) { f__B4F2_115B_0004_EFF9(); return; }
	/* Unresolved jump */ emu_ip = 0x115F; emu_last_cs = 0xB4F2; emu_last_ip = 0x1154; emu_last_length = 0x001E; emu_last_crc = 0xD0F3; emu_call();
}

/**
 * Decompiled function f__B4F2_1156_0005_D6CA()
 *
 * @name f__B4F2_1156_0005_D6CA
 * @implements B4F2:1156:0005:D6CA ()
 *
 * Called From: B4F2:114D:001E:D0F3
 */
void f__B4F2_1156_0005_D6CA()
{
	emu_movw(&emu_si, 0x1);
	f__B4F2_1161_0007_EB00(); return;
}

/**
 * Decompiled function f__B4F2_115B_0004_EFF9()
 *
 * @name f__B4F2_115B_0004_EFF9
 * @implements B4F2:115B:0004:EFF9 ()
 *
 * Called From: B4F2:1152:001E:D0F3
 */
void f__B4F2_115B_0004_EFF9()
{
	emu_xorw(&emu_si, emu_si);
	f__B4F2_1161_0007_EB00(); return;
}

/**
 * Decompiled function f__B4F2_1161_0007_EB00()
 *
 * @name f__B4F2_1161_0007_EB00
 * @implements B4F2:1161:0007:EB00 ()
 *
 * Called From: B4F2:1159:0005:D6CA
 * Called From: B4F2:115D:0004:EFF9
 */
void f__B4F2_1161_0007_EB00()
{
	emu_xorw(&emu_di, emu_di);
	f__B4F2_1163_0005_1765(); return;
}

/**
 * Decompiled function f__B4F2_1163_0005_1765()
 *
 * @name f__B4F2_1163_0005_1765
 * @implements B4F2:1163:0005:1765 ()
 *
 * Called From: B4F2:1142:001E:D0F3
 */
void f__B4F2_1163_0005_1765()
{
	emu_push(emu_cs); emu_push(0x1168); emu_cs = 0x0642; f__0642_0559_0027_3560();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_1168_000D_BD26();
}

/**
 * Decompiled function f__B4F2_1168_000D_BD26()
 *
 * @name f__B4F2_1168_000D_BD26
 * @implements B4F2:1168:000D:BD26 ()
 *
 * Called From: B4F2:1129:0007:AFF1
 */
void f__B4F2_1168_000D_BD26()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4F2_112B_000D_7056(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x271E);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1175); f__B4F2_0F24_000E_BC8E();
	f__B4F2_1175_0006_0E3B();
}

/**
 * Decompiled function f__B4F2_1175_0006_0E3B()
 *
 * @name f__B4F2_1175_0006_0E3B
 * @implements B4F2:1175:0006:0E3B ()
 *
 */
void f__B4F2_1175_0006_0E3B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_si);
	f__B4F2_117B_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4F2_117B_0006_F7CE()
 *
 * @name f__B4F2_117B_0006_F7CE
 * @implements B4F2:117B:0006:F7CE ()
 *
 * Called From: B4F2:1179:0006:0E3B
 */
void f__B4F2_117B_0006_F7CE()
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
 * Decompiled function f__B4F2_1181_000B_D4AD()
 *
 * @name f__B4F2_1181_000B_D4AD
 * @implements B4F2:1181:000B:D4AD ()
 *
 * Called From: B4F2:04C9:0015:5960
 */
void f__B4F2_1181_000B_D4AD()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	f__B4F2_118D_000B_BBAE(); return;
}

/**
 * Decompiled function f__B4F2_118C_000C_BFCE()
 *
 * @name f__B4F2_118C_000C_BFCE
 * @implements B4F2:118C:000C:BFCE ()
 *
 * Called From: B4F2:11A9:000A:2717
 */
void f__B4F2_118C_000C_BFCE()
{
	emu_incw(&emu_si);
	f__B4F2_118D_000B_BBAE(); return;
}

/**
 * Decompiled function f__B4F2_118D_000B_BBAE()
 *
 * @name f__B4F2_118D_000B_BBAE
 * @implements B4F2:118D:000B:BBAE ()
 *
 * Called From: B4F2:118A:000B:D4AD
 */
void f__B4F2_118D_000B_BBAE()
{
	emu_push(emu_si);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1198); f__B4F2_11B4_0016_244A();
	f__B4F2_1198_000D_4FB1();
}

/**
 * Decompiled function f__B4F2_1198_000D_4FB1()
 *
 * @name f__B4F2_1198_000D_4FB1
 * @implements B4F2:1198:000D:4FB1 ()
 *
 */
void f__B4F2_1198_000D_4FB1()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x11A5); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_11A5_000A_2717();
}

/**
 * Decompiled function f__B4F2_11A5_000A_2717()
 *
 * @name f__B4F2_11A5_000A_2717
 * @implements B4F2:11A5:000A:2717 ()
 *
 */
void f__B4F2_11A5_000A_2717()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4F2_118C_000C_BFCE(); return; }
	emu_movw(&emu_ax, emu_si);
	f__B4F2_11AF_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4F2_11AF_0005_8BCF()
 *
 * @name f__B4F2_11AF_0005_8BCF
 * @implements B4F2:11AF:0005:8BCF ()
 *
 * Called From: B4F2:11AD:000A:2717
 */
void f__B4F2_11AF_0005_8BCF()
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
 * Decompiled function f__B4F2_11B4_0016_244A()
 *
 * @name f__B4F2_11B4_0016_244A
 * @implements B4F2:11B4:0016:244A ()
 *
 * Called From: B4F2:0618:0015:09D0
 * Called From: B4F2:07FE:0019:E1DC
 * Called From: B4F2:1195:000B:BBAE
 * Called From: B4F2:1195:000C:BFCE
 * Called From: B4F2:1295:000F:0377
 */
void f__B4F2_11B4_0016_244A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2AC3);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x11CA); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_11CA_0005_60C3();
}

/**
 * Decompiled function f__B4F2_11CA_0005_60C3()
 *
 * @name f__B4F2_11CA_0005_60C3
 * @implements B4F2:11CA:0005:60C3 ()
 *
 */
void f__B4F2_11CA_0005_60C3()
{
	emu_addw(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_11CF_0013_5635()
 *
 * @name f__B4F2_11CF_0013_5635
 * @implements B4F2:11CF:0013:5635 ()
 *
 * Called From: B4F2:0131:000F:54A6
 */
void f__B4F2_11CF_0013_5635()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_movb(&emu_al, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x11E2); emu_cs = 0x01F7; f__01F7_0494_000D_EF57();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_11E2_0018_1D91();
}

/**
 * Decompiled function f__B4F2_11E2_0018_1D91()
 *
 * @name f__B4F2_11E2_0018_1D91
 * @implements B4F2:11E2:0018:1D91 ()
 *
 */
void f__B4F2_11E2_0018_1D91()
{
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1219; emu_last_cs = 0xB4F2; emu_last_ip = 0x11E9; emu_last_length = 0x0018; emu_last_crc = 0x1D91; emu_call(); return; }
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_cx, emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_cs); emu_push(0x11FA); emu_cs = 0x01F7; f__01F7_03B2_0017_7CBE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_11FA_000E_5317();
}

/**
 * Decompiled function f__B4F2_11FA_000E_5317()
 *
 * @name f__B4F2_11FA_000E_5317
 * @implements B4F2:11FA:000E:5317 ()
 *
 */
void f__B4F2_11FA_000E_5317()
{
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_dx);
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_push(emu_cs); emu_push(0x1208); emu_cs = 0x01F7; f__01F7_03B2_0017_7CBE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_1208_0011_0023();
}

/**
 * Decompiled function f__B4F2_1208_0011_0023()
 *
 * @name f__B4F2_1208_0011_0023
 * @implements B4F2:1208:0011:0023 ()
 *
 */
void f__B4F2_1208_0011_0023()
{
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1219; emu_last_cs = 0xB4F2; emu_last_ip = 0x120B; emu_last_length = 0x0011; emu_last_crc = 0x0023; emu_call(); return; }
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
		if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x1219; emu_last_cs = 0xB4F2; emu_last_ip = 0x1212; emu_last_length = 0x0011; emu_last_crc = 0x0023; emu_call(); return; }
	}
	f__B4F2_1214_0005_D7FA(); return;
}

/**
 * Decompiled function f__B4F2_1214_0005_D7FA()
 *
 * @name f__B4F2_1214_0005_D7FA
 * @implements B4F2:1214:0005:D7FA ()
 *
 * Called From: B4F2:120D:0011:0023
 */
void f__B4F2_1214_0005_D7FA()
{
	emu_movw(&emu_ax, 0x1);
	f__B4F2_121D_0004_893F(); return;
}

/**
 * Decompiled function f__B4F2_121D_0004_893F()
 *
 * @name f__B4F2_121D_0004_893F
 * @implements B4F2:121D:0004:893F ()
 *
 * Called From: B4F2:1217:0005:D7FA
 */
void f__B4F2_121D_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_1221_000D_EE32()
 *
 * @name f__B4F2_1221_000D_EE32
 * @implements B4F2:1221:000D:EE32 ()
 *
 * Called From: B4F2:04F9:000B:A00B
 * Called From: B4F2:04F9:0009:F00D
 * Called From: B4F2:082E:0010:6C88
 */
void f__B4F2_1221_000D_EE32()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	f__B4F2_12F5_0008_87B8(); return;
}

/**
 * Decompiled function f__B4F2_122E_0018_F493()
 *
 * @name f__B4F2_122E_0018_F493
 * @implements B4F2:122E:0018:F493 ()
 *
 * Called From: B4F2:12FA:0008:87B8
 * Called From: B4F2:12FA:0009:879B
 */
void f__B4F2_122E_0018_F493()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x2A97));
	emu_subw(&emu_ax, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4F2_1246_001A_72DC(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x33);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_movb(&emu_get_memory8(emu_ds, emu_bx, 0x80B4), 0x0);
	f__B4F2_12F4_0009_879B(); return;
}

/**
 * Decompiled function f__B4F2_1246_001A_72DC()
 *
 * @name f__B4F2_1246_001A_72DC
 * @implements B4F2:1246:001A:72DC ()
 *
 * Called From: B4F2:1233:0018:F493
 */
void f__B4F2_1246_001A_72DC()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x2A97));
	emu_subw(&emu_ax, emu_si);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x80B2));
	if (!emu_flags.zf) { f__B4F2_1289_000F_0377(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { f__B4F2_1279_0010_7924(); return; }
	emu_movw(&emu_ax, 0x63);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1260); f__B4F2_1303_0017_56DB();
	f__B4F2_1260_0014_86F2();
}

/**
 * Decompiled function f__B4F2_1260_0014_86F2()
 *
 * @name f__B4F2_1260_0014_86F2
 * @implements B4F2:1260:0014:86F2 ()
 *
 */
void f__B4F2_1260_0014_86F2()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x33);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x80B4);
	emu_push(emu_ds);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1274); emu_cs = 0x01F7; f__01F7_38F6_0029_8B99();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_1274_0005_822E();
}

/**
 * Decompiled function f__B4F2_1274_0005_822E()
 *
 * @name f__B4F2_1274_0005_822E
 * @implements B4F2:1274:0005:822E ()
 *
 */
void f__B4F2_1274_0005_822E()
{
	emu_addw(&emu_sp, 0x8);
	f__B4F2_1287_0002_F5BA(); return;
}

/**
 * Decompiled function f__B4F2_1279_0010_7924()
 *
 * @name f__B4F2_1279_0010_7924
 * @implements B4F2:1279:0010:7924 ()
 *
 * Called From: B4F2:1255:001A:72DC
 */
void f__B4F2_1279_0010_7924()
{
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x33);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_movb(&emu_get_memory8(emu_ds, emu_bx, 0x80B4), 0x0);
	f__B4F2_1287_0002_F5BA(); return;
}

/**
 * Decompiled function f__B4F2_1287_0002_F5BA()
 *
 * @name f__B4F2_1287_0002_F5BA
 * @implements B4F2:1287:0002:F5BA ()
 *
 * Called From: B4F2:1277:0005:822E
 */
void f__B4F2_1287_0002_F5BA()
{
	f__B4F2_12F4_0009_879B(); return;
}

/**
 * Decompiled function f__B4F2_1289_000F_0377()
 *
 * @name f__B4F2_1289_000F_0377
 * @implements B4F2:1289:000F:0377 ()
 *
 * Called From: B4F2:124F:001A:72DC
 */
void f__B4F2_1289_000F_0377()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x2A97));
	emu_subw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1298); f__B4F2_11B4_0016_244A();
	f__B4F2_1298_000D_4FB1();
}

/**
 * Decompiled function f__B4F2_1298_000D_4FB1()
 *
 * @name f__B4F2_1298_000D_4FB1
 * @implements B4F2:1298:000D:4FB1 ()
 *
 */
void f__B4F2_1298_000D_4FB1()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12A5); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_12A5_0010_09E9();
}

/**
 * Decompiled function f__B4F2_12A5_0010_09E9()
 *
 * @name f__B4F2_12A5_0010_09E9
 * @implements B4F2:12A5:0010:09E9 ()
 *
 */
void f__B4F2_12A5_0010_09E9()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x12E6; emu_last_cs = 0xB4F2; emu_last_ip = 0x12A9; emu_last_length = 0x0010; emu_last_crc = 0x09E9; emu_call(); return; }
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12B5); emu_cs = 0x34B1; ovl__34B1(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_12B5_0025_4F31();
}

/**
 * Decompiled function f__B4F2_12B5_0025_4F31()
 *
 * @name f__B4F2_12B5_0025_4F31
 * @implements B4F2:12B5:0025:4F31 ()
 *
 */
void f__B4F2_12B5_0025_4F31()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x32);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x33);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x80B4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x454D);
	emu_movw(&emu_dx, 0x414E);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x12DA); emu_cs = 0x34B1; ovl__34B1(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_12DA_0009_06A3();
}

/**
 * Decompiled function f__B4F2_12DA_0009_06A3()
 *
 * @name f__B4F2_12DA_0009_06A3
 * @implements B4F2:12DA:0009:06A3 ()
 *
 */
void f__B4F2_12DA_0009_06A3()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x12E3); emu_cs = 0x34B1; ovl__34B1(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_12E3_0003_CC1A();
}

/**
 * Decompiled function f__B4F2_12E3_0003_CC1A()
 *
 * @name f__B4F2_12E3_0003_CC1A
 * @implements B4F2:12E3:0003:CC1A ()
 *
 */
void f__B4F2_12E3_0003_CC1A()
{
	emu_pop(&emu_cx);
	f__B4F2_12F4_0009_879B(); return;
}

/**
 * Decompiled function f__B4F2_12F4_0009_879B()
 *
 * @name f__B4F2_12F4_0009_879B
 * @implements B4F2:12F4:0009:879B ()
 *
 * Called From: B4F2:1243:0018:F493
 * Called From: B4F2:1287:0002:F5BA
 * Called From: B4F2:1287:0010:7924
 * Called From: B4F2:12E4:0003:CC1A
 */
void f__B4F2_12F4_0009_879B()
{
	emu_incw(&emu_si);
	f__B4F2_12F5_0008_87B8(); return;
}

/**
 * Decompiled function f__B4F2_12F5_0008_87B8()
 *
 * @name f__B4F2_12F5_0008_87B8
 * @implements B4F2:12F5:0008:87B8 ()
 *
 * Called From: B4F2:122B:000D:EE32
 */
void f__B4F2_12F5_0008_87B8()
{
	emu_cmpw(&emu_si, 0x5);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4F2_12FD_0006_F7CE(); return; }
	f__B4F2_122E_0018_F493(); return;
}

/**
 * Decompiled function f__B4F2_12FD_0006_F7CE()
 *
 * @name f__B4F2_12FD_0006_F7CE
 * @implements B4F2:12FD:0006:F7CE ()
 *
 * Called From: B4F2:12F8:0009:879B
 */
void f__B4F2_12FD_0006_F7CE()
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
 * Decompiled function f__B4F2_1303_0017_56DB()
 *
 * @name f__B4F2_1303_0017_56DB
 * @implements B4F2:1303:0017:56DB ()
 *
 * Called From: B4F2:08A7:000F:B3B1
 * Called From: B4F2:08F4:002A:5752
 * Called From: B4F2:08F4:0028:5BF2
 * Called From: B4F2:090B:000F:E61A
 * Called From: B4F2:097D:0037:8E4A
 * Called From: B4F2:0A09:000B:51A5
 * Called From: B4F2:0A09:0005:3DBD
 * Called From: B4F2:0B97:0051:E4E8
 * Called From: B4F2:1094:0022:D216
 * Called From: B4F2:1094:000C:2AAD
 * Called From: B4F2:125D:001A:72DC
 */
void f__B4F2_1303_0017_56DB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_si);
	emu_subw(&emu_bx, 0xFFF2);
	emu_cmpw(&emu_bx, 0xD);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4F2_131A_0007_E192(); return; }
	f__B4F2_13A2_0002_C03A(); return;
}

/**
 * Decompiled function f__B4F2_131A_0007_E192()
 *
 * @name f__B4F2_131A_0007_E192
 * @implements B4F2:131A:0007:E192 ()
 *
 * Called From: B4F2:1315:0017:56DB
 */
void f__B4F2_131A_0007_E192()
{
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x13B2);
	switch (emu_ip) {
		case 0x1321: f__B4F2_1321_002F_0347(); return;
		case 0x1350: f__B4F2_1350_000C_3803(); return;
		case 0x1363: f__B4F2_1363_000C_3983(); return;
		case 0x1374: f__B4F2_1374_000C_B6A3(); return;
		case 0x1380: f__B4F2_1380_000C_3A83(); return;
		case 0x1391: f__B4F2_1391_000C_3A03(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x131C; emu_last_length = 0x0007; emu_last_crc = 0xE192;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4F2_1321_002F_0347()
 *
 * @name f__B4F2_1321_002F_0347
 * @implements B4F2:1321:002F:0347 ()
 *
 * Called From: B4F2:131C:0007:E192
 */
void f__B4F2_1321_002F_0347()
{
	emu_movw(&emu_ax, emu_si);
	emu_negw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x33);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x8081);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) {
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	}
	f__B4F2_1348_0008_E6C9(); return;
}

/**
 * Decompiled function f__B4F2_1348_0008_E6C9()
 *
 * @name f__B4F2_1348_0008_E6C9
 * @implements B4F2:1348:0008:E6C9 ()
 *
 * Called From: B4F2:133C:002F:0347
 */
void f__B4F2_1348_0008_E6C9()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4F2_134E_0002_EEBA(); return;
}

/**
 * Decompiled function f__B4F2_134E_0002_EEBA()
 *
 * @name f__B4F2_134E_0002_EEBA
 * @implements B4F2:134E:0002:EEBA ()
 *
 * Called From: B4F2:13AB:0003:9B9A
 */
void f__B4F2_134E_0002_EEBA()
{
	f__B4F2_13AD_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4F2_1350_000C_3803()
 *
 * @name f__B4F2_1350_000C_3803
 * @implements B4F2:1350:000C:3803 ()
 *
 * Called From: B4F2:131C:0007:E192
 */
void f__B4F2_1350_000C_3803()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C2), 0x0);
	if (emu_flags.zf) { f__B4F2_135C_0007_E7C3(); return; }
	emu_movw(&emu_ax, 0x69);
	f__B4F2_135F_0004_4EB2(); return;
}

/**
 * Decompiled function f__B4F2_135C_0007_E7C3()
 *
 * @name f__B4F2_135C_0007_E7C3
 * @implements B4F2:135C:0007:E7C3 ()
 *
 * Called From: B4F2:1355:000C:3803
 */
void f__B4F2_135C_0007_E7C3()
{
	emu_movw(&emu_ax, 0x6A);
	f__B4F2_135F_0004_4EB2(); return;
}

/**
 * Decompiled function f__B4F2_135F_0004_4EB2()
 *
 * @name f__B4F2_135F_0004_4EB2
 * @implements B4F2:135F:0004:4EB2 ()
 *
 * Called From: B4F2:135A:000C:3803
 * Called From: B4F2:1372:0002:B5BA
 * Called From: B4F2:1372:0005:107C
 * Called From: B4F2:138F:0002:A73A
 * Called From: B4F2:138F:0005:02FC
 * Called From: B4F2:13A0:0005:3B7C
 * Called From: B4F2:13A0:0002:9EBA
 */
void f__B4F2_135F_0004_4EB2()
{
	emu_movw(&emu_si, emu_ax);
	f__B4F2_13A4_0006_6B66(); return;
}

/**
 * Decompiled function f__B4F2_1363_000C_3983()
 *
 * @name f__B4F2_1363_000C_3983
 * @implements B4F2:1363:000C:3983 ()
 *
 * Called From: B4F2:131C:0007:E192
 */
void f__B4F2_1363_000C_3983()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C4), 0x0);
	if (emu_flags.zf) { f__B4F2_136F_0005_107C(); return; }
	emu_movw(&emu_ax, 0x69);
	f__B4F2_1372_0002_B5BA(); return;
}

/**
 * Decompiled function f__B4F2_136F_0005_107C()
 *
 * @name f__B4F2_136F_0005_107C
 * @implements B4F2:136F:0005:107C ()
 *
 * Called From: B4F2:1368:000C:3983
 */
void f__B4F2_136F_0005_107C()
{
	emu_movw(&emu_ax, 0x6A);
	f__B4F2_1372_0002_B5BA(); return;
}

/**
 * Decompiled function f__B4F2_1372_0002_B5BA()
 *
 * @name f__B4F2_1372_0002_B5BA
 * @implements B4F2:1372:0002:B5BA ()
 *
 * Called From: B4F2:136D:000C:3983
 */
void f__B4F2_1372_0002_B5BA()
{
	f__B4F2_135F_0004_4EB2(); return;
}

/**
 * Decompiled function f__B4F2_1374_000C_B6A3()
 *
 * @name f__B4F2_1374_000C_B6A3
 * @implements B4F2:1374:000C:B6A3 ()
 *
 * Called From: B4F2:131C:0007:E192
 */
void f__B4F2_1374_000C_B6A3()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x3900));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, emu_bx, 0x2AAD));
	f__B4F2_13A4_0006_6B66(); return;
}

/**
 * Decompiled function f__B4F2_1380_000C_3A83()
 *
 * @name f__B4F2_1380_000C_3A83
 * @implements B4F2:1380:000C:3A83 ()
 *
 * Called From: B4F2:131C:0007:E192
 */
void f__B4F2_1380_000C_3A83()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C8), 0x0);
	if (emu_flags.zf) { f__B4F2_138C_0005_02FC(); return; }
	emu_movw(&emu_ax, 0x69);
	f__B4F2_138F_0002_A73A(); return;
}

/**
 * Decompiled function f__B4F2_138C_0005_02FC()
 *
 * @name f__B4F2_138C_0005_02FC
 * @implements B4F2:138C:0005:02FC ()
 *
 * Called From: B4F2:1385:000C:3A83
 */
void f__B4F2_138C_0005_02FC()
{
	emu_movw(&emu_ax, 0x6A);
	f__B4F2_138F_0002_A73A(); return;
}

/**
 * Decompiled function f__B4F2_138F_0002_A73A()
 *
 * @name f__B4F2_138F_0002_A73A
 * @implements B4F2:138F:0002:A73A ()
 *
 * Called From: B4F2:138A:000C:3A83
 */
void f__B4F2_138F_0002_A73A()
{
	f__B4F2_135F_0004_4EB2(); return;
}

/**
 * Decompiled function f__B4F2_1391_000C_3A03()
 *
 * @name f__B4F2_1391_000C_3A03
 * @implements B4F2:1391:000C:3A03 ()
 *
 * Called From: B4F2:131C:0007:E192
 */
void f__B4F2_1391_000C_3A03()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41CA), 0x0);
	if (emu_flags.zf) { f__B4F2_139D_0005_3B7C(); return; }
	emu_movw(&emu_ax, 0x69);
	f__B4F2_13A0_0002_9EBA(); return;
}

/**
 * Decompiled function f__B4F2_139D_0005_3B7C()
 *
 * @name f__B4F2_139D_0005_3B7C
 * @implements B4F2:139D:0005:3B7C ()
 *
 * Called From: B4F2:1396:000C:3A03
 */
void f__B4F2_139D_0005_3B7C()
{
	emu_movw(&emu_ax, 0x6A);
	f__B4F2_13A0_0002_9EBA(); return;
}

/**
 * Decompiled function f__B4F2_13A0_0002_9EBA()
 *
 * @name f__B4F2_13A0_0002_9EBA
 * @implements B4F2:13A0:0002:9EBA ()
 *
 * Called From: B4F2:139B:000C:3A03
 */
void f__B4F2_13A0_0002_9EBA()
{
	f__B4F2_135F_0004_4EB2(); return;
}

/**
 * Decompiled function f__B4F2_13A2_0002_C03A()
 *
 * @name f__B4F2_13A2_0002_C03A
 * @implements B4F2:13A2:0002:C03A ()
 *
 * Called From: B4F2:1317:0017:56DB
 */
void f__B4F2_13A2_0002_C03A()
{
	f__B4F2_13A4_0006_6B66(); return;
}

/**
 * Decompiled function f__B4F2_13A4_0006_6B66()
 *
 * @name f__B4F2_13A4_0006_6B66
 * @implements B4F2:13A4:0006:6B66 ()
 *
 * Called From: B4F2:1361:0004:4EB2
 * Called From: B4F2:1361:0007:E7C3
 * Called From: B4F2:137E:000C:B6A3
 * Called From: B4F2:13A2:0002:C03A
 */
void f__B4F2_13A4_0006_6B66()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x13AA); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_13AA_0003_9B9A();
}

/**
 * Decompiled function f__B4F2_13AA_0003_9B9A()
 *
 * @name f__B4F2_13AA_0003_9B9A
 * @implements B4F2:13AA:0003:9B9A ()
 *
 */
void f__B4F2_13AA_0003_9B9A()
{
	emu_pop(&emu_cx);
	f__B4F2_134E_0002_EEBA(); return;
}

/**
 * Decompiled function f__B4F2_13AD_0005_8BCF()
 *
 * @name f__B4F2_13AD_0005_8BCF
 * @implements B4F2:13AD:0005:8BCF ()
 *
 * Called From: B4F2:134E:0002:EEBA
 * Called From: B4F2:134E:0008:E6C9
 * Called From: B4F2:134E:002F:0347
 */
void f__B4F2_13AD_0005_8BCF()
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
 * Decompiled function f__B4F2_13CE_0013_65D7()
 *
 * @name f__B4F2_13CE_0013_65D7
 * @implements B4F2:13CE:0013:65D7 ()
 *
 * Called From: B4F2:0D96:0010:3CB0
 * Called From: B4F2:0DDB:0010:B907
 */
void f__B4F2_13CE_0013_65D7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4F2_13E1_0060_F8EA(); return; }
	f__B4F2_1470_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4F2_13E1_0060_F8EA()
 *
 * @name f__B4F2_13E1_0060_F8EA
 * @implements B4F2:13E1:0060:F8EA ()
 *
 * Called From: B4F2:13DC:0013:65D7
 */
void f__B4F2_13E1_0060_F8EA()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx, 0x20));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x22));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x24));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4062));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_si, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1444; emu_last_cs = 0xB4F2; emu_last_ip = 0x142C; emu_last_length = 0x0060; emu_last_crc = 0xF8EA; emu_call(); return; }
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1441); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_1441_0020_1786();
}

/**
 * Decompiled function f__B4F2_1441_0020_1786()
 *
 * @name f__B4F2_1441_0020_1786
 * @implements B4F2:1441:0020:1786 ()
 *
 */
void f__B4F2_1441_0020_1786()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x1461);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x145C; emu_last_length = 0x0020; emu_last_crc = 0x1786;
			emu_call();
			return;
	}
	f__B4F2_1461_000F_9CB8();
}

/**
 * Decompiled function f__B4F2_1461_000F_9CB8()
 *
 * @name f__B4F2_1461_000F_9CB8
 * @implements B4F2:1461:000F:9CB8 ()
 *
 */
void f__B4F2_1461_000F_9CB8()
{
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (!emu_flags.zf) { f__B4F2_1470_0006_F7CE(); return; }
	emu_push(emu_cs); emu_push(0x1470); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { ovl__34F2(0xFF); }
	f__B4F2_1470_0006_F7CE();
}

/**
 * Decompiled function f__B4F2_1470_0006_F7CE()
 *
 * @name f__B4F2_1470_0006_F7CE
 * @implements B4F2:1470:0006:F7CE ()
 *
 */
void f__B4F2_1470_0006_F7CE()
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
