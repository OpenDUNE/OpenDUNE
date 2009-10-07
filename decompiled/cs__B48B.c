/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B48B_0000_001E_7E97()
 *
 * @name f__B48B_0000_001E_7E97
 * @implements B48B:0000:001E:7E97 ()
 *
 * Called From: 348B:0020:0005:0000
 * Called From: B48B:02F7:003C:DD44
 * Called From: B48B:02F7:0058:1F2E
 */
void f__B48B_0000_001E_7E97()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x001E; emu_last_cs = 0xB48B; emu_last_ip = 0x000C; emu_last_length = 0x001E; emu_last_crc = 0x7E97; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx,  0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx,  0x0), 0x0);
	f__B48B_0026_0016_3673(); return;
}

/**
 * Decompiled function f__B48B_0024_0002_EF3A()
 *
 * @name f__B48B_0024_0002_EF3A
 * @implements B48B:0024:0002:EF3A ()
 *
 * Called From: B48B:0082:000E:0C48
 * Called From: B48B:0082:001A:DFCC
 */
void f__B48B_0024_0002_EF3A()
{
	f__B48B_0084_0004_893F(); return;
}

/**
 * Decompiled function f__B48B_0026_0016_3673()
 *
 * @name f__B48B_0026_0016_3673
 * @implements B48B:0026:0016:3673 ()
 *
 * Called From: B48B:001C:001E:7E97
 */
void f__B48B_0026_0016_3673()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__B48B_006A_001A_DFCC(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	f__B48B_004C_001E_A15E(); return;
}

/**
 * Decompiled function f__B48B_003C_002E_CE21()
 *
 * @name f__B48B_003C_002E_CE21
 * @implements B48B:003C:002E:CE21 ()
 *
 * Called From: B48B:0056:001E:A15E
 * Called From: B48B:0056:002E:CE21
 */
void f__B48B_003C_002E_CE21()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x2));
	if (!emu_flags.zf) { f__B48B_003C_002E_CE21(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx,  0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx,  0x0), emu_dx);
	f__B48B_0076_000E_0C48(); return;
}

/**
 * Decompiled function f__B48B_004C_001E_A15E()
 *
 * @name f__B48B_004C_001E_A15E
 * @implements B48B:004C:001E:A15E ()
 *
 * Called From: B48B:003A:0016:3673
 */
void f__B48B_004C_001E_A15E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x2));
	if (!emu_flags.zf) { f__B48B_003C_002E_CE21(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx,  0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx,  0x0), emu_dx);
	f__B48B_0076_000E_0C48(); return;
}

/**
 * Decompiled function f__B48B_006A_001A_DFCC()
 *
 * @name f__B48B_006A_001A_DFCC
 * @implements B48B:006A:001A:DFCC ()
 *
 * Called From: B48B:002C:0016:3673
 */
void f__B48B_006A_001A_DFCC()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D75), 0x1);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B48B_0024_0002_EF3A(); return;
}

/**
 * Decompiled function f__B48B_0076_000E_0C48()
 *
 * @name f__B48B_0076_000E_0C48
 * @implements B48B:0076:000E:0C48 ()
 *
 * Called From: B48B:0068:001E:A15E
 * Called From: B48B:0068:002E:CE21
 */
void f__B48B_0076_000E_0C48()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D75), 0x1);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B48B_0024_0002_EF3A(); return;
}

/**
 * Decompiled function f__B48B_0084_0004_893F()
 *
 * @name f__B48B_0084_0004_893F
 * @implements B48B:0084:0004:893F ()
 *
 * Called From: B48B:0024:0002:EF3A
 */
void f__B48B_0084_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_0088_0029_3A68()
 *
 * @name f__B48B_0088_0029_3A68
 * @implements B48B:0088:0029:3A68 ()
 *
 * Called From: 348B:0025:0005:0000
 */
void f__B48B_0088_0029_3A68()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00B3; emu_last_cs = 0xB48B; emu_last_ip = 0x0091; emu_last_length = 0x0029; emu_last_crc = 0x3A68; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx,  0xE), 0x8);
	if (!emu_flags.zf) { f__B48B_00B3_0008_0F0A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx,  0xE), 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00B1); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	f__B48B_00B1_000A_9966();
}

/**
 * Decompiled function f__B48B_00B1_000A_9966()
 *
 * @name f__B48B_00B1_000A_9966
 * @implements B48B:00B1:000A:9966 ()
 *
 * Called From: B48B:00B1:0029:3A68
 */
void f__B48B_00B1_000A_9966()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B48B_00BB_0002_2597(); return;
}

/**
 * Decompiled function f__B48B_00B3_0008_0F0A()
 *
 * @name f__B48B_00B3_0008_0F0A
 * @implements B48B:00B3:0008:0F0A ()
 *
 * Called From: B48B:009C:0029:3A68
 */
void f__B48B_00B3_0008_0F0A()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B48B_00BB_0002_2597(); return;
}

/**
 * Decompiled function f__B48B_00BB_0002_2597()
 *
 * @name f__B48B_00BB_0002_2597
 * @implements B48B:00BB:0002:2597 ()
 *
 * Called From: B48B:00B9:0008:0F0A
 * Called From: B48B:00B9:000A:9966
 */
void f__B48B_00BB_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_00BD_0029_3530()
 *
 * @name f__B48B_00BD_0029_3530
 * @implements B48B:00BD:0029:3530 ()
 *
 * Called From: 348B:002A:0005:0000
 */
void f__B48B_00BD_0029_3530()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00E8; emu_last_cs = 0xB48B; emu_last_ip = 0x00C6; emu_last_length = 0x0029; emu_last_crc = 0x3530; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx,  0xE), 0x8);
	if (emu_flags.zf) { f__B48B_00E8_0008_0F0A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx,  0xE), 0xF7);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00E6); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	f__B48B_00E6_000A_9966();
}

/**
 * Decompiled function f__B48B_00E6_000A_9966()
 *
 * @name f__B48B_00E6_000A_9966
 * @implements B48B:00E6:000A:9966 ()
 *
 * Called From: B48B:00E6:0029:3530
 */
void f__B48B_00E6_000A_9966()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B48B_00F0_0002_2597(); return;
}

/**
 * Decompiled function f__B48B_00E8_0008_0F0A()
 *
 * @name f__B48B_00E8_0008_0F0A
 * @implements B48B:00E8:0008:0F0A ()
 *
 * Called From: B48B:00D1:0029:3530
 */
void f__B48B_00E8_0008_0F0A()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B48B_00F0_0002_2597(); return;
}

/**
 * Decompiled function f__B48B_00F0_0002_2597()
 *
 * @name f__B48B_00F0_0002_2597
 * @implements B48B:00F0:0002:2597 ()
 *
 * Called From: B48B:00EE:000A:9966
 * Called From: B48B:00EE:0008:0F0A
 */
void f__B48B_00F0_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_00F2_0005_601A()
 *
 * @name f__B48B_00F2_0005_601A
 * @implements B48B:00F2:0005:601A ()
 *
 * Called From: 348B:002F:0005:0000
 */
void f__B48B_00F2_0005_601A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	f__B48B_0115_0010_C2D5(); return;
}

/**
 * Decompiled function f__B48B_00F7_000E_11CF()
 *
 * @name f__B48B_00F7_000E_11CF
 * @implements B48B:00F7:000E:11CF ()
 *
 * Called From: B48B:011B:0010:C2D5
 * Called From: B48B:011B:0020:190A
 */
void f__B48B_00F7_000E_11CF()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.zf) { f__B48B_0105_0020_190A(); return; }
	f__B48B_011D_0008_0F0A(); return;
}

/**
 * Decompiled function f__B48B_0105_0020_190A()
 *
 * @name f__B48B_0105_0020_190A
 * @implements B48B:0105:0020:190A ()
 *
 * Called From: B48B:0101:000E:11CF
 */
void f__B48B_0105_0020_190A()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B48B_00F7_000E_11CF(); return; }
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B48B_0125_0002_2597(); return;
}

/**
 * Decompiled function f__B48B_0115_0010_C2D5()
 *
 * @name f__B48B_0115_0010_C2D5
 * @implements B48B:0115:0010:C2D5 ()
 *
 * Called From: B48B:00F5:0005:601A
 */
void f__B48B_0115_0010_C2D5()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B48B_00F7_000E_11CF(); return; }
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	/* Unresolved jump */ emu_ip = 0x0125; emu_last_cs = 0xB48B; emu_last_ip = 0x0123; emu_last_length = 0x0010; emu_last_crc = 0xC2D5; emu_call();
}

/**
 * Decompiled function f__B48B_011D_0008_0F0A()
 *
 * @name f__B48B_011D_0008_0F0A
 * @implements B48B:011D:0008:0F0A ()
 *
 * Called From: B48B:0103:000E:11CF
 */
void f__B48B_011D_0008_0F0A()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B48B_0125_0002_2597(); return;
}

/**
 * Decompiled function f__B48B_0125_0002_2597()
 *
 * @name f__B48B_0125_0002_2597
 * @implements B48B:0125:0002:2597 ()
 *
 * Called From: B48B:0123:0008:0F0A
 * Called From: B48B:0123:0020:190A
 */
void f__B48B_0125_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_0127_000E_E325()
 *
 * @name f__B48B_0127_000E_E325
 * @implements B48B:0127:000E:E325 ()
 *
 * Called From: 348B:0034:0005:0000
 */
void f__B48B_0127_000E_E325()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B48B_0135_000E_EE25(); return; }
	f__B48B_01C4_0008_0F0A(); return;
}

/**
 * Decompiled function f__B48B_0135_000E_EE25()
 *
 * @name f__B48B_0135_000E_EE25
 * @implements B48B:0135:000E:EE25 ()
 *
 * Called From: B48B:0130:000E:E325
 */
void f__B48B_0135_000E_EE25()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx,  0xE), 0x8);
	if (emu_flags.zf) { f__B48B_0143_0015_1A4F(); return; }
	/* Unresolved jump */ emu_ip = 0x01C4; emu_last_cs = 0xB48B; emu_last_ip = 0x0140; emu_last_length = 0x000E; emu_last_crc = 0xEE25; emu_call();
}

/**
 * Decompiled function f__B48B_0143_0015_1A4F()
 *
 * @name f__B48B_0143_0015_1A4F
 * @implements B48B:0143:0015:1A4F ()
 *
 * Called From: B48B:013E:000E:EE25
 */
void f__B48B_0143_0015_1A4F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0x1);
	if (emu_flags.zf) { f__B48B_0158_002D_49A8(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0x8);
	f__B48B_0160_0025_9ED0(); return;
}

/**
 * Decompiled function f__B48B_0158_002D_49A8()
 *
 * @name f__B48B_0158_002D_49A8
 * @implements B48B:0158:002D:49A8 ()
 *
 * Called From: B48B:014C:0015:1A4F
 */
void f__B48B_0158_002D_49A8()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0xF7);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0xFE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0xFD);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0x4);
	if (emu_flags.zf) { f__B48B_0185_001B_BAF2(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0x10);
	f__B48B_018D_0013_6710(); return;
}

/**
 * Decompiled function f__B48B_0160_0025_9ED0()
 *
 * @name f__B48B_0160_0025_9ED0
 * @implements B48B:0160:0025:9ED0 ()
 *
 * Called From: B48B:0156:0015:1A4F
 */
void f__B48B_0160_0025_9ED0()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0xFE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0xFD);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0x4);
	if (emu_flags.zf) { f__B48B_0185_001B_BAF2(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0x10);
	f__B48B_018D_0013_6710(); return;
}

/**
 * Decompiled function f__B48B_0185_001B_BAF2()
 *
 * @name f__B48B_0185_001B_BAF2
 * @implements B48B:0185:001B:BAF2 ()
 *
 * Called From: B48B:0179:002D:49A8
 * Called From: B48B:0179:0025:9ED0
 */
void f__B48B_0185_001B_BAF2()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0xEF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0xFB);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x01A0); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	f__B48B_01A0_0022_19B9();
}

/**
 * Decompiled function f__B48B_018D_0013_6710()
 *
 * @name f__B48B_018D_0013_6710
 * @implements B48B:018D:0013:6710 ()
 *
 * Called From: B48B:0183:0025:9ED0
 * Called From: B48B:0183:002D:49A8
 */
void f__B48B_018D_0013_6710()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0xFB);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x01A0); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	f__B48B_01A0_0022_19B9();
}

/**
 * Decompiled function f__B48B_01A0_0022_19B9()
 *
 * @name f__B48B_01A0_0022_19B9
 * @implements B48B:01A0:0022:19B9 ()
 *
 * Called From: B48B:01A0:001B:BAF2
 * Called From: B48B:01A0:0013:6710
 */
void f__B48B_01A0_0022_19B9()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__B48B_01C4_0008_0F0A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x30));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x32));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01C4; emu_last_cs = 0xB48B; emu_last_ip = 0x01B3; emu_last_length = 0x0022; emu_last_crc = 0x19B9; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx,  0x30);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx,  0x32);
	emu_push(0x01C2);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB48B; emu_last_ip = 0x01BE; emu_last_length = 0x0022; emu_last_crc = 0x19B9;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x01C2; emu_last_cs = 0xB48B; emu_last_ip = 0x01C2; emu_last_length = 0x0022; emu_last_crc = 0x19B9; emu_call();
}

/**
 * Decompiled function f__B48B_01C4_0008_0F0A()
 *
 * @name f__B48B_01C4_0008_0F0A
 * @implements B48B:01C4:0008:0F0A ()
 *
 * Called From: B48B:0132:000E:E325
 * Called From: B48B:01A6:0022:19B9
 */
void f__B48B_01C4_0008_0F0A()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B48B_01CC_0002_2597(); return;
}

/**
 * Decompiled function f__B48B_01CC_0002_2597()
 *
 * @name f__B48B_01CC_0002_2597
 * @implements B48B:01CC:0002:2597 ()
 *
 * Called From: B48B:01CA:0008:0F0A
 */
void f__B48B_01CC_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_01CE_002B_7574()
 *
 * @name f__B48B_01CE_002B_7574
 * @implements B48B:01CE:002B:7574 ()
 *
 * Called From: 348B:0039:0005:0000
 */
void f__B48B_01CE_002B_7574()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__B48B_0238_0008_0F0A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx,  0xE), 0x8);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0238; emu_last_cs = 0xB48B; emu_last_ip = 0x01E2; emu_last_length = 0x002B; emu_last_crc = 0x7574; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0x1);
	if (emu_flags.zf) { f__B48B_01F9_001B_35F3(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0x8);
	f__B48B_0201_0013_6810(); return;
}

/**
 * Decompiled function f__B48B_01F9_001B_35F3()
 *
 * @name f__B48B_01F9_001B_35F3
 * @implements B48B:01F9:001B:35F3 ()
 *
 * Called From: B48B:01ED:002B:7574
 */
void f__B48B_01F9_001B_35F3()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0xF7);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0x1);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0214); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	f__B48B_0214_0022_19B9();
}

/**
 * Decompiled function f__B48B_0201_0013_6810()
 *
 * @name f__B48B_0201_0013_6810
 * @implements B48B:0201:0013:6810 ()
 *
 * Called From: B48B:01F7:002B:7574
 */
void f__B48B_0201_0013_6810()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx,  0x2E), 0x1);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0214); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	f__B48B_0214_0022_19B9();
}

/**
 * Decompiled function f__B48B_0214_0022_19B9()
 *
 * @name f__B48B_0214_0022_19B9
 * @implements B48B:0214:0022:19B9 ()
 *
 * Called From: B48B:0214:001B:35F3
 * Called From: B48B:0214:0013:6810
 */
void f__B48B_0214_0022_19B9()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__B48B_0238_0008_0F0A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x30));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x32));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0238; emu_last_cs = 0xB48B; emu_last_ip = 0x0227; emu_last_length = 0x0022; emu_last_crc = 0x19B9; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx,  0x30);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx,  0x32);
	emu_push(0x0236);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB48B; emu_last_ip = 0x0232; emu_last_length = 0x0022; emu_last_crc = 0x19B9;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x0236; emu_last_cs = 0xB48B; emu_last_ip = 0x0236; emu_last_length = 0x0022; emu_last_crc = 0x19B9; emu_call();
}

/**
 * Decompiled function f__B48B_0238_0008_0F0A()
 *
 * @name f__B48B_0238_0008_0F0A
 * @implements B48B:0238:0008:0F0A ()
 *
 * Called From: B48B:01D7:002B:7574
 * Called From: B48B:021A:0022:19B9
 */
void f__B48B_0238_0008_0F0A()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B48B_0240_0002_2597(); return;
}

/**
 * Decompiled function f__B48B_0240_0002_2597()
 *
 * @name f__B48B_0240_0002_2597
 * @implements B48B:0240:0002:2597 ()
 *
 * Called From: B48B:023E:0008:0F0A
 */
void f__B48B_0240_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_0242_0017_581D()
 *
 * @name f__B48B_0242_0017_581D
 * @implements B48B:0242:0017:581D ()
 *
 * Called From: 348B:003E:0005:0000
 */
void f__B48B_0242_0017_581D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B48B_0259_0010_340C(); return; }
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	f__B48B_0334_0004_893F(); return;
}

/**
 * Decompiled function f__B48B_0256_0003_DD16()
 *
 * @name f__B48B_0256_0003_DD16
 * @implements B48B:0256:0003:DD16 ()
 *
 * Called From: B48B:0331:000F:DBE6
 * Called From: B48B:0331:002F:4AF9
 */
void f__B48B_0256_0003_DD16()
{
	f__B48B_0334_0004_893F(); return;
}

/**
 * Decompiled function f__B48B_0259_0010_340C()
 *
 * @name f__B48B_0259_0010_340C
 * @implements B48B:0259:0010:340C ()
 *
 * Called From: B48B:024E:0017:581D
 */
void f__B48B_0259_0010_340C()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__B48B_0269_0034_5F53(); return; }
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	/* Unresolved jump */ emu_ip = 0x0256; emu_last_cs = 0xB48B; emu_last_ip = 0x0267; emu_last_length = 0x0010; emu_last_crc = 0x340C; emu_call();
}

/**
 * Decompiled function f__B48B_0269_0034_5F53()
 *
 * @name f__B48B_0269_0034_5F53
 * @implements B48B:0269:0034:5F53 ()
 *
 * Called From: B48B:025F:0010:340C
 */
void f__B48B_0269_0034_5F53()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x4));
	if (!(emu_flags.cf || emu_flags.zf)) { f__B48B_02A0_0002_CE3A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx,  0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx,  0x0), emu_dx);
	/* Unresolved jump */ emu_ip = 0x0250; emu_last_cs = 0xB48B; emu_last_ip = 0x029B; emu_last_length = 0x0034; emu_last_crc = 0x5F53; emu_call();
}

/**
 * Decompiled function f__B48B_02A0_0002_CE3A()
 *
 * @name f__B48B_02A0_0002_CE3A
 * @implements B48B:02A0:0002:CE3A ()
 *
 * Called From: B48B:0289:0034:5F53
 */
void f__B48B_02A0_0002_CE3A()
{
	f__B48B_02BE_003C_DD44(); return;
}

/**
 * Decompiled function f__B48B_02A2_0058_1F2E()
 *
 * @name f__B48B_02A2_0058_1F2E
 * @implements B48B:02A2:0058:1F2E ()
 *
 * Called From: B48B:02D8:003C:DD44
 * Called From: B48B:02D8:0058:1F2E
 */
void f__B48B_02A2_0058_1F2E()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x4));
	if ((emu_flags.cf || emu_flags.zf)) { f__B48B_02DA_0020_1036(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x2));
	if (!emu_flags.zf) { f__B48B_02A2_0058_1F2E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x4));
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0305; emu_last_cs = 0xB48B; emu_last_ip = 0x02E8; emu_last_length = 0x0058; emu_last_crc = 0x1F2E; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x02FA); f__B48B_0000_001E_7E97();
	f__B48B_02FA_000B_4C0E();
}

/**
 * Decompiled function f__B48B_02BE_003C_DD44()
 *
 * @name f__B48B_02BE_003C_DD44
 * @implements B48B:02BE:003C:DD44 ()
 *
 * Called From: B48B:02A0:0002:CE3A
 */
void f__B48B_02BE_003C_DD44()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x4));
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x02DA; emu_last_cs = 0xB48B; emu_last_ip = 0x02CC; emu_last_length = 0x003C; emu_last_crc = 0xDD44; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x2));
	if (!emu_flags.zf) { f__B48B_02A2_0058_1F2E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x4));
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0305; emu_last_cs = 0xB48B; emu_last_ip = 0x02E8; emu_last_length = 0x003C; emu_last_crc = 0xDD44; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x02FA); f__B48B_0000_001E_7E97();
	f__B48B_02FA_000B_4C0E();
}

/**
 * Decompiled function f__B48B_02DA_0020_1036()
 *
 * @name f__B48B_02DA_0020_1036
 * @implements B48B:02DA:0020:1036 ()
 *
 * Called From: B48B:02CC:0058:1F2E
 */
void f__B48B_02DA_0020_1036()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x4));
	if ((emu_flags.cf || emu_flags.zf)) { f__B48B_0305_002F_4AF9(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x02FA); emu_ip = 0x0000; emu_last_cs = 0xB48B; emu_last_ip = 0x02F7; emu_last_length = 0x0020; emu_last_crc = 0x1036; emu_call();
	f__B48B_02FA_000B_4C0E();
}

/**
 * Decompiled function f__B48B_02FA_000B_4C0E()
 *
 * @name f__B48B_02FA_000B_4C0E
 * @implements B48B:02FA:000B:4C0E ()
 *
 * Called From: B48B:02FA:003C:DD44
 * Called From: B48B:02FA:0058:1F2E
 */
void f__B48B_02FA_000B_4C0E()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax);
	f__B48B_0325_000F_DBE6(); return;
}

/**
 * Decompiled function f__B48B_0305_002F_4AF9()
 *
 * @name f__B48B_0305_002F_4AF9
 * @implements B48B:0305:002F:4AF9 ()
 *
 * Called From: B48B:02E8:0020:1036
 */
void f__B48B_0305_002F_4AF9()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx,  0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx,  0x0), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx,  0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx,  0x0), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D75), 0x1);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B48B_0256_0003_DD16(); return;
}

/**
 * Decompiled function f__B48B_0325_000F_DBE6()
 *
 * @name f__B48B_0325_000F_DBE6
 * @implements B48B:0325:000F:DBE6 ()
 *
 * Called From: B48B:0303:000B:4C0E
 */
void f__B48B_0325_000F_DBE6()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D75), 0x1);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B48B_0256_0003_DD16(); return;
}

/**
 * Decompiled function f__B48B_0334_0004_893F()
 *
 * @name f__B48B_0334_0004_893F
 * @implements B48B:0334:0004:893F ()
 *
 * Called From: B48B:0256:0017:581D
 * Called From: B48B:0256:0003:DD16
 */
void f__B48B_0334_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_03A4_0005_619A()
 *
 * @name f__B48B_03A4_0005_619A
 * @implements B48B:03A4:0005:619A ()
 *
 * Called From: 348B:0043:0005:0000
 */
void f__B48B_03A4_0005_619A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	f__B48B_03C6_000A_5244(); return;
}

/**
 * Decompiled function f__B48B_03A9_000B_848D()
 *
 * @name f__B48B_03A9_000B_848D
 * @implements B48B:03A9:000B:848D ()
 *
 * Called From: B48B:03CC:000A:5244
 * Called From: B48B:03CC:001C:8029
 */
void f__B48B_03A9_000B_848D()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03B4); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	f__B48B_03B4_001C_8029();
}

/**
 * Decompiled function f__B48B_03B4_001C_8029()
 *
 * @name f__B48B_03B4_001C_8029
 * @implements B48B:03B4:001C:8029 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B48B:03B4:000B:848D
 */
void f__B48B_03B4_001C_8029()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx,  0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B48B_03A9_000B_848D(); return; }
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_03C6_000A_5244()
 *
 * @name f__B48B_03C6_000A_5244
 * @implements B48B:03C6:000A:5244 ()
 *
 * Called From: B48B:03A7:0005:619A
 */
void f__B48B_03C6_000A_5244()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B48B_03A9_000B_848D(); return; }
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
