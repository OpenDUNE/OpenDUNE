/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B48B_0000_001E_CF62()
 *
 * @name f__B48B_0000_001E_CF62
 * @implements B48B:0000:001E:CF62 ()
 *
 * Called From: 348B:0020:0005:1C4C
 * Called From: 348B:0020:0005:1C7A
 * Called From: 348B:0020:0005:1CC4
 * Called From: 348B:0020:0005:1CC6
 * Called From: 348B:0020:0005:1D38
 * Called From: 348B:0020:0005:1DB8
 * Called From: 348B:0020:0005:1DD2
 * Called From: 348B:0020:0005:1E3A
 * Called From: 348B:0020:0005:1EB4
 * Called From: 348B:0020:0005:1FE0
 * Called From: 348B:0020:0005:1F78
 * Called From: 348B:0020:0005:1F32
 * Called From: 348B:0020:0005:1ECC
 * Called From: 348B:0020:0005:1FA6
 * Called From: 348B:0020:0005:1F6E
 * Called From: 348B:0020:0005:1CFC
 * Called From: B48B:02F7:003C:4385
 * Called From: B48B:02F7:0058:7D9E
 */
void f__B48B_0000_001E_CF62()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { emu_ip = 0x001E; emu_last_cs = 0xB48B; emu_last_ip = 0x000C; emu_last_length = 0x001E; emu_last_crc = 0xCF62; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	f__B48B_0026_0016_22D9(); return;
}

/**
 * Decompiled function f__B48B_0024_0002_0310()
 *
 * @name f__B48B_0024_0002_0310
 * @implements B48B:0024:0002:0310 ()
 *
 * Called From: B48B:0082:000E:B3B9
 * Called From: B48B:0082:001A:4699
 */
void f__B48B_0024_0002_0310()
{
	f__B48B_0084_0004_0F7A(); return;
}

/**
 * Decompiled function f__B48B_0026_0016_22D9()
 *
 * @name f__B48B_0026_0016_22D9
 * @implements B48B:0026:0016:22D9 ()
 *
 * Called From: B48B:001C:001E:CF62
 */
void f__B48B_0026_0016_22D9()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__B48B_006A_001A_4699(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	f__B48B_004C_001E_C2E0(); return;
}

/**
 * Decompiled function f__B48B_003C_002E_CA3E()
 *
 * @name f__B48B_003C_002E_CA3E
 * @implements B48B:003C:002E:CA3E ()
 *
 * Called From: B48B:0056:001E:C2E0
 * Called From: B48B:0056:002E:CA3E
 */
void f__B48B_003C_002E_CA3E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	if (!emu_flags.zf) { f__B48B_003C_002E_CA3E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	f__B48B_0076_000E_B3B9(); return;
}

/**
 * Decompiled function f__B48B_004C_001E_C2E0()
 *
 * @name f__B48B_004C_001E_C2E0
 * @implements B48B:004C:001E:C2E0 ()
 *
 * Called From: B48B:003A:0016:22D9
 */
void f__B48B_004C_001E_C2E0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	if (!emu_flags.zf) { f__B48B_003C_002E_CA3E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	f__B48B_0076_000E_B3B9(); return;
}

/**
 * Decompiled function f__B48B_006A_001A_4699()
 *
 * @name f__B48B_006A_001A_4699
 * @implements B48B:006A:001A:4699 ()
 *
 * Called From: B48B:002C:0016:22D9
 */
void f__B48B_006A_001A_4699()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D75), 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B48B_0024_0002_0310(); return;
}

/**
 * Decompiled function f__B48B_0076_000E_B3B9()
 *
 * @name f__B48B_0076_000E_B3B9
 * @implements B48B:0076:000E:B3B9 ()
 *
 * Called From: B48B:0068:001E:C2E0
 * Called From: B48B:0068:002E:CA3E
 */
void f__B48B_0076_000E_B3B9()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D75), 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B48B_0024_0002_0310(); return;
}

/**
 * Decompiled function f__B48B_0084_0004_0F7A()
 *
 * @name f__B48B_0084_0004_0F7A
 * @implements B48B:0084:0004:0F7A ()
 *
 * Called From: B48B:0024:0002:0310
 */
void f__B48B_0084_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_0088_0029_5A9B()
 *
 * @name f__B48B_0088_0029_5A9B
 * @implements B48B:0088:0029:5A9B ()
 *
 * Called From: 348B:0025:0005:169E
 * Called From: 348B:0025:0005:147C
 * Called From: 348B:0025:0005:14AE
 * Called From: 348B:0025:0005:1634
 * Called From: 348B:0025:0005:1662
 * Called From: 348B:0025:0005:167A
 * Called From: 348B:0025:0005:1708
 * Called From: 348B:0025:0005:156C
 * Called From: 348B:0025:0005:1660
 * Called From: 348B:0025:0005:1726
 */
void f__B48B_0088_0029_5A9B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x00B3; emu_last_cs = 0xB48B; emu_last_ip = 0x0091; emu_last_length = 0x0029; emu_last_crc = 0x5A9B; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x8);
	if (!emu_flags.zf) { f__B48B_00B3_0008_B49C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00B1); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	f__B48B_00B1_000A_629D();
}

/**
 * Decompiled function f__B48B_00B1_000A_629D()
 *
 * @name f__B48B_00B1_000A_629D
 * @implements B48B:00B1:000A:629D ()
 *
 * Called From: B48B:00B1:0029:5A9B
 */
void f__B48B_00B1_000A_629D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B48B_00BB_0002_00E2(); return;
}

/**
 * Decompiled function f__B48B_00B3_0008_B49C()
 *
 * @name f__B48B_00B3_0008_B49C
 * @implements B48B:00B3:0008:B49C ()
 *
 * Called From: B48B:009C:0029:5A9B
 */
void f__B48B_00B3_0008_B49C()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B48B_00BB_0002_00E2(); return;
}

/**
 * Decompiled function f__B48B_00BB_0002_00E2()
 *
 * @name f__B48B_00BB_0002_00E2
 * @implements B48B:00BB:0002:00E2 ()
 *
 * Called From: B48B:00B9:0008:B49C
 * Called From: B48B:00B9:000A:629D
 */
void f__B48B_00BB_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_00BD_0029_AABE()
 *
 * @name f__B48B_00BD_0029_AABE
 * @implements B48B:00BD:0029:AABE ()
 *
 * Called From: 348B:002A:0005:15CE
 * Called From: 348B:002A:0005:172C
 * Called From: 348B:002A:0005:179C
 * Called From: 348B:002A:0005:1602
 * Called From: 348B:002A:0005:17FE
 * Called From: 348B:002A:0005:1532
 * Called From: 348B:002A:0005:163C
 * Called From: 348B:002A:0005:1530
 * Called From: 348B:002A:0005:1668
 * Called From: 348B:002A:0005:151C
 * Called From: 348B:002A:0005:14BE
 */
void f__B48B_00BD_0029_AABE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x00E8; emu_last_cs = 0xB48B; emu_last_ip = 0x00C6; emu_last_length = 0x0029; emu_last_crc = 0xAABE; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x8);
	if (emu_flags.zf) { f__B48B_00E8_0008_B49C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0xF7);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00E6); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	f__B48B_00E6_000A_629D();
}

/**
 * Decompiled function f__B48B_00E6_000A_629D()
 *
 * @name f__B48B_00E6_000A_629D
 * @implements B48B:00E6:000A:629D ()
 *
 * Called From: B48B:00E6:0029:AABE
 */
void f__B48B_00E6_000A_629D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B48B_00F0_0002_00E2(); return;
}

/**
 * Decompiled function f__B48B_00E8_0008_B49C()
 *
 * @name f__B48B_00E8_0008_B49C
 * @implements B48B:00E8:0008:B49C ()
 *
 * Called From: B48B:00D1:0029:AABE
 */
void f__B48B_00E8_0008_B49C()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B48B_00F0_0002_00E2(); return;
}

/**
 * Decompiled function f__B48B_00F0_0002_00E2()
 *
 * @name f__B48B_00F0_0002_00E2
 * @implements B48B:00F0:0002:00E2 ()
 *
 * Called From: B48B:00EE:000A:629D
 * Called From: B48B:00EE:0008:B49C
 */
void f__B48B_00F0_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_00F2_0005_06E0()
 *
 * @name f__B48B_00F2_0005_06E0
 * @implements B48B:00F2:0005:06E0 ()
 *
 * Called From: 348B:002F:0005:113E
 * Called From: 348B:002F:0005:13DC
 * Called From: 348B:002F:0005:12F2
 * Called From: 348B:002F:0005:130E
 * Called From: 348B:002F:0005:1194
 * Called From: 348B:002F:0005:11C2
 * Called From: 348B:002F:0005:11DA
 * Called From: 348B:002F:0005:10A8
 * Called From: 348B:002F:0005:12CC
 * Called From: 348B:002F:0005:11C0
 * Called From: 348B:002F:0005:11EC
 * Called From: 348B:002F:0005:1086
 */
void f__B48B_00F2_0005_06E0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	f__B48B_0115_0010_1430(); return;
}

/**
 * Decompiled function f__B48B_00F7_000E_3FA5()
 *
 * @name f__B48B_00F7_000E_3FA5
 * @implements B48B:00F7:000E:3FA5 ()
 *
 * Called From: B48B:011B:0010:1430
 * Called From: B48B:011B:0020:3748
 */
void f__B48B_00F7_000E_3FA5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.zf) { f__B48B_0105_0020_3748(); return; }
	f__B48B_011D_0008_B49C(); return;
}

/**
 * Decompiled function f__B48B_0105_0020_3748()
 *
 * @name f__B48B_0105_0020_3748
 * @implements B48B:0105:0020:3748 ()
 *
 * Called From: B48B:0101:000E:3FA5
 */
void f__B48B_0105_0020_3748()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B48B_00F7_000E_3FA5(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B48B_0125_0002_00E2(); return;
}

/**
 * Decompiled function f__B48B_0115_0010_1430()
 *
 * @name f__B48B_0115_0010_1430
 * @implements B48B:0115:0010:1430 ()
 *
 * Called From: B48B:00F5:0005:06E0
 */
void f__B48B_0115_0010_1430()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B48B_00F7_000E_3FA5(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ip = 0x0125; emu_last_cs = 0xB48B; emu_last_ip = 0x0123; emu_last_length = 0x0010; emu_last_crc = 0x1430; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B48B_011D_0008_B49C()
 *
 * @name f__B48B_011D_0008_B49C
 * @implements B48B:011D:0008:B49C ()
 *
 * Called From: B48B:0103:000E:3FA5
 */
void f__B48B_011D_0008_B49C()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B48B_0125_0002_00E2(); return;
}

/**
 * Decompiled function f__B48B_0125_0002_00E2()
 *
 * @name f__B48B_0125_0002_00E2
 * @implements B48B:0125:0002:00E2 ()
 *
 * Called From: B48B:0123:0008:B49C
 * Called From: B48B:0123:0020:3748
 */
void f__B48B_0125_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_0127_000E_8DEB()
 *
 * @name f__B48B_0127_000E_8DEB
 * @implements B48B:0127:000E:8DEB ()
 *
 * Called From: 348B:0034:0005:1E34
 * Called From: 348B:0034:0005:1FAA
 * Called From: 348B:0034:0005:1CCC
 * Called From: 348B:0034:0005:1C9A
 * Called From: 348B:0034:0005:1C82
 * Called From: 348B:0034:0005:1DF0
 * Called From: 348B:0034:0005:1F94
 * Called From: 348B:0034:0005:1C98
 * Called From: 348B:0034:0005:1FC0
 * Called From: 348B:0034:0005:1CB4
 * Called From: 348B:0034:0005:1E56
 * Called From: 348B:0034:0005:1DDE
 * Called From: 348B:0034:0005:1E84
 * Called From: 348B:0034:0005:1D16
 */
void f__B48B_0127_000E_8DEB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B48B_0135_000E_C3C4(); return; }
	f__B48B_01C4_0008_B49C(); return;
}

/**
 * Decompiled function f__B48B_0135_000E_C3C4()
 *
 * @name f__B48B_0135_000E_C3C4
 * @implements B48B:0135:000E:C3C4 ()
 *
 * Called From: B48B:0130:000E:8DEB
 */
void f__B48B_0135_000E_C3C4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x8);
	if (emu_flags.zf) { f__B48B_0143_0015_DD4E(); return; }
	emu_ip = 0x01C4; emu_last_cs = 0xB48B; emu_last_ip = 0x0140; emu_last_length = 0x000E; emu_last_crc = 0xC3C4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B48B_0143_0015_DD4E()
 *
 * @name f__B48B_0143_0015_DD4E
 * @implements B48B:0143:0015:DD4E ()
 *
 * Called From: B48B:013E:000E:C3C4
 */
void f__B48B_0143_0015_DD4E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1);
	if (emu_flags.zf) { f__B48B_0158_002D_038E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x8);
	f__B48B_0160_0025_8052(); return;
}

/**
 * Decompiled function f__B48B_0158_002D_038E()
 *
 * @name f__B48B_0158_002D_038E
 * @implements B48B:0158:002D:038E ()
 *
 * Called From: B48B:014C:0015:DD4E
 */
void f__B48B_0158_002D_038E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xF7);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFE);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFD);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x4);
	if (emu_flags.zf) { f__B48B_0185_001B_F071(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x10);
	f__B48B_018D_0013_D106(); return;
}

/**
 * Decompiled function f__B48B_0160_0025_8052()
 *
 * @name f__B48B_0160_0025_8052
 * @implements B48B:0160:0025:8052 ()
 *
 * Called From: B48B:0156:0015:DD4E
 */
void f__B48B_0160_0025_8052()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFE);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFD);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x4);
	if (emu_flags.zf) { f__B48B_0185_001B_F071(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x10);
	f__B48B_018D_0013_D106(); return;
}

/**
 * Decompiled function f__B48B_0185_001B_F071()
 *
 * @name f__B48B_0185_001B_F071
 * @implements B48B:0185:001B:F071 ()
 *
 * Called From: B48B:0179:002D:038E
 * Called From: B48B:0179:0025:8052
 */
void f__B48B_0185_001B_F071()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xEF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFB);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x01A0); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	f__B48B_01A0_0022_D70A();
}

/**
 * Decompiled function f__B48B_018D_0013_D106()
 *
 * @name f__B48B_018D_0013_D106
 * @implements B48B:018D:0013:D106 ()
 *
 * Called From: B48B:0183:0025:8052
 * Called From: B48B:0183:002D:038E
 */
void f__B48B_018D_0013_D106()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFB);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x01A0); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	f__B48B_01A0_0022_D70A();
}

/**
 * Decompiled function f__B48B_01A0_0022_D70A()
 *
 * @name f__B48B_01A0_0022_D70A
 * @implements B48B:01A0:0022:D70A ()
 *
 * Called From: B48B:01A0:001B:F071
 * Called From: B48B:01A0:0013:D106
 */
void f__B48B_01A0_0022_D70A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__B48B_01C4_0008_B49C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x30));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x32));
	if (emu_flags.zf) { emu_ip = 0x01C4; emu_last_cs = 0xB48B; emu_last_ip = 0x01B3; emu_last_length = 0x0022; emu_last_crc = 0xD70A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx.x,  0x30);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx.x,  0x32);
	emu_push(0x01C2);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB48B; emu_last_ip = 0x01BE; emu_last_length = 0x0022; emu_last_crc = 0xD70A;
			emu_call();
			return;
	}
	emu_unknown_call();
}

/**
 * Decompiled function f__B48B_01C4_0008_B49C()
 *
 * @name f__B48B_01C4_0008_B49C
 * @implements B48B:01C4:0008:B49C ()
 *
 * Called From: B48B:0132:000E:8DEB
 * Called From: B48B:01A6:0022:D70A
 */
void f__B48B_01C4_0008_B49C()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B48B_01CC_0002_00E2(); return;
}

/**
 * Decompiled function f__B48B_01CC_0002_00E2()
 *
 * @name f__B48B_01CC_0002_00E2
 * @implements B48B:01CC:0002:00E2 ()
 *
 * Called From: B48B:01CA:0008:B49C
 */
void f__B48B_01CC_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_01CE_002B_2382()
 *
 * @name f__B48B_01CE_002B_2382
 * @implements B48B:01CE:002B:2382 ()
 *
 * Called From: 348B:0039:0005:10C6
 * Called From: 348B:0039:0005:120A
 * Called From: 348B:0039:0005:1104
 * Called From: 348B:0039:0005:1208
 * Called From: 348B:0039:0005:1014
 */
void f__B48B_01CE_002B_2382()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__B48B_0238_0008_B49C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x8);
	if (!emu_flags.zf) { emu_ip = 0x0238; emu_last_cs = 0xB48B; emu_last_ip = 0x01E2; emu_last_length = 0x002B; emu_last_crc = 0x2382; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1);
	if (emu_flags.zf) { f__B48B_01F9_001B_51F4(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x8);
	f__B48B_0201_0013_7103(); return;
}

/**
 * Decompiled function f__B48B_01F9_001B_51F4()
 *
 * @name f__B48B_01F9_001B_51F4
 * @implements B48B:01F9:001B:51F4 ()
 *
 * Called From: B48B:01ED:002B:2382
 */
void f__B48B_01F9_001B_51F4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xF7);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0214); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	f__B48B_0214_0022_D70A();
}

/**
 * Decompiled function f__B48B_0201_0013_7103()
 *
 * @name f__B48B_0201_0013_7103
 * @implements B48B:0201:0013:7103 ()
 *
 * Called From: B48B:01F7:002B:2382
 */
void f__B48B_0201_0013_7103()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0214); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	f__B48B_0214_0022_D70A();
}

/**
 * Decompiled function f__B48B_0214_0022_D70A()
 *
 * @name f__B48B_0214_0022_D70A
 * @implements B48B:0214:0022:D70A ()
 *
 * Called From: B48B:0214:001B:51F4
 * Called From: B48B:0214:0013:7103
 */
void f__B48B_0214_0022_D70A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__B48B_0238_0008_B49C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x30));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x32));
	if (emu_flags.zf) { emu_ip = 0x0238; emu_last_cs = 0xB48B; emu_last_ip = 0x0227; emu_last_length = 0x0022; emu_last_crc = 0xD70A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx.x,  0x30);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx.x,  0x32);
	emu_push(0x0236);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB48B; emu_last_ip = 0x0232; emu_last_length = 0x0022; emu_last_crc = 0xD70A;
			emu_call();
			return;
	}
	emu_unknown_call();
}

/**
 * Decompiled function f__B48B_0238_0008_B49C()
 *
 * @name f__B48B_0238_0008_B49C
 * @implements B48B:0238:0008:B49C ()
 *
 * Called From: B48B:01D7:002B:2382
 * Called From: B48B:021A:0022:D70A
 */
void f__B48B_0238_0008_B49C()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	f__B48B_0240_0002_00E2(); return;
}

/**
 * Decompiled function f__B48B_0240_0002_00E2()
 *
 * @name f__B48B_0240_0002_00E2
 * @implements B48B:0240:0002:00E2 ()
 *
 * Called From: B48B:023E:0008:B49C
 */
void f__B48B_0240_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_0242_0017_7F6F()
 *
 * @name f__B48B_0242_0017_7F6F
 * @implements B48B:0242:0017:7F6F ()
 *
 * Called From: 348B:003E:0005:180E
 * Called From: 348B:003E:0005:189C
 * Called From: 348B:003E:0005:190E
 * Called From: 348B:003E:0005:1988
 * Called From: 348B:003E:0005:1A56
 */
void f__B48B_0242_0017_7F6F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B48B_0259_0010_91E8(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	f__B48B_0334_0004_0F7A(); return;
}

/**
 * Decompiled function f__B48B_0256_0003_0424()
 *
 * @name f__B48B_0256_0003_0424
 * @implements B48B:0256:0003:0424 ()
 *
 * Called From: B48B:0331:000F:6495
 * Called From: B48B:0331:002F:328B
 */
void f__B48B_0256_0003_0424()
{
	f__B48B_0334_0004_0F7A(); return;
}

/**
 * Decompiled function f__B48B_0259_0010_91E8()
 *
 * @name f__B48B_0259_0010_91E8
 * @implements B48B:0259:0010:91E8 ()
 *
 * Called From: B48B:024E:0017:7F6F
 */
void f__B48B_0259_0010_91E8()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__B48B_0269_0034_1998(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ip = 0x0256; emu_last_cs = 0xB48B; emu_last_ip = 0x0267; emu_last_length = 0x0010; emu_last_crc = 0x91E8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B48B_0269_0034_1998()
 *
 * @name f__B48B_0269_0034_1998
 * @implements B48B:0269:0034:1998 ()
 *
 * Called From: B48B:025F:0010:91E8
 */
void f__B48B_0269_0034_1998()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	if (!(emu_flags.cf || emu_flags.zf)) { f__B48B_02A0_0002_0394(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	emu_ip = 0x0250; emu_last_cs = 0xB48B; emu_last_ip = 0x029B; emu_last_length = 0x0034; emu_last_crc = 0x1998; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B48B_02A0_0002_0394()
 *
 * @name f__B48B_02A0_0002_0394
 * @implements B48B:02A0:0002:0394 ()
 *
 * Called From: B48B:0289:0034:1998
 */
void f__B48B_02A0_0002_0394()
{
	f__B48B_02BE_003C_4385(); return;
}

/**
 * Decompiled function f__B48B_02A2_0058_7D9E()
 *
 * @name f__B48B_02A2_0058_7D9E
 * @implements B48B:02A2:0058:7D9E ()
 *
 * Called From: B48B:02D8:003C:4385
 * Called From: B48B:02D8:0058:7D9E
 */
void f__B48B_02A2_0058_7D9E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	if ((emu_flags.cf || emu_flags.zf)) { f__B48B_02DA_0020_43A6(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	if (!emu_flags.zf) { f__B48B_02A2_0058_7D9E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0305; emu_last_cs = 0xB48B; emu_last_ip = 0x02E8; emu_last_length = 0x0058; emu_last_crc = 0x7D9E; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x02FA); f__B48B_0000_001E_CF62();
	f__B48B_02FA_000B_AE9B();
}

/**
 * Decompiled function f__B48B_02BE_003C_4385()
 *
 * @name f__B48B_02BE_003C_4385
 * @implements B48B:02BE:003C:4385 ()
 *
 * Called From: B48B:02A0:0002:0394
 */
void f__B48B_02BE_003C_4385()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x02DA; emu_last_cs = 0xB48B; emu_last_ip = 0x02CC; emu_last_length = 0x003C; emu_last_crc = 0x4385; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	if (!emu_flags.zf) { f__B48B_02A2_0058_7D9E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0305; emu_last_cs = 0xB48B; emu_last_ip = 0x02E8; emu_last_length = 0x003C; emu_last_crc = 0x4385; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x02FA); f__B48B_0000_001E_CF62();
	f__B48B_02FA_000B_AE9B();
}

/**
 * Decompiled function f__B48B_02DA_0020_43A6()
 *
 * @name f__B48B_02DA_0020_43A6
 * @implements B48B:02DA:0020:43A6 ()
 *
 * Called From: B48B:02CC:0058:7D9E
 */
void f__B48B_02DA_0020_43A6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	if ((emu_flags.cf || emu_flags.zf)) { f__B48B_0305_002F_328B(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x02FA); emu_ip = 0x0000; emu_last_cs = 0xB48B; emu_last_ip = 0x02F7; emu_last_length = 0x0020; emu_last_crc = 0x43A6; emu_call(); // Jump does not resolve
	f__B48B_02FA_000B_AE9B();
}

/**
 * Decompiled function f__B48B_02FA_000B_AE9B()
 *
 * @name f__B48B_02FA_000B_AE9B
 * @implements B48B:02FA:000B:AE9B ()
 *
 * Called From: B48B:02FA:003C:4385
 * Called From: B48B:02FA:0058:7D9E
 */
void f__B48B_02FA_000B_AE9B()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax.x);
	f__B48B_0325_000F_6495(); return;
}

/**
 * Decompiled function f__B48B_0305_002F_328B()
 *
 * @name f__B48B_0305_002F_328B
 * @implements B48B:0305:002F:328B ()
 *
 * Called From: B48B:02E8:0020:43A6
 */
void f__B48B_0305_002F_328B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D75), 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B48B_0256_0003_0424(); return;
}

/**
 * Decompiled function f__B48B_0325_000F_6495()
 *
 * @name f__B48B_0325_000F_6495
 * @implements B48B:0325:000F:6495 ()
 *
 * Called From: B48B:0303:000B:AE9B
 */
void f__B48B_0325_000F_6495()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D75), 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B48B_0256_0003_0424(); return;
}

/**
 * Decompiled function f__B48B_0334_0004_0F7A()
 *
 * @name f__B48B_0334_0004_0F7A
 * @implements B48B:0334:0004:0F7A ()
 *
 * Called From: B48B:0256:0003:0424
 * Called From: B48B:0256:0017:7F6F
 */
void f__B48B_0334_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_03A4_0005_06E6()
 *
 * @name f__B48B_03A4_0005_06E6
 * @implements B48B:03A4:0005:06E6 ()
 *
 * Called From: 348B:0043:0005:140E
 * Called From: 348B:0043:0005:1422
 * Called From: 348B:0043:0005:1490
 * Called From: 348B:0043:0005:14BA
 * Called From: 348B:0043:0005:152E
 * Called From: 348B:0043:0005:1542
 * Called From: 348B:0043:0005:15A2
 * Called From: 348B:0043:0005:15B8
 * Called From: 348B:0043:0005:15CC
 * Called From: 348B:0043:0005:169C
 * Called From: 348B:0043:0005:16A4
 * Called From: 348B:0043:0005:16F4
 * Called From: 348B:0043:0005:170C
 * Called From: 348B:0043:0005:170E
 * Called From: 348B:0043:0005:1778
 * Called From: 348B:0043:0005:1786
 * Called From: 348B:0043:0005:17B4
 * Called From: 348B:0043:0005:17E0
 * Called From: 348B:0043:0005:16FC
 * Called From: 348B:0043:0005:14B8
 */
void f__B48B_03A4_0005_06E6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	f__B48B_03C6_000A_B268(); return;
}

/**
 * Decompiled function f__B48B_03A9_000B_E626()
 *
 * @name f__B48B_03A9_000B_E626
 * @implements B48B:03A9:000B:E626 ()
 *
 * Called From: B48B:03CC:000A:B268
 * Called From: B48B:03CC:001C:0AE2
 */
void f__B48B_03A9_000B_E626()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03B4); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	f__B48B_03B4_001C_0AE2();
}

/**
 * Decompiled function f__B48B_03B4_001C_0AE2()
 *
 * @name f__B48B_03B4_001C_0AE2
 * @implements B48B:03B4:001C:0AE2 ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B48B:03B4:000B:E626
 */
void f__B48B_03B4_001C_0AE2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B48B_03A9_000B_E626(); return; }
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_03C6_000A_B268()
 *
 * @name f__B48B_03C6_000A_B268
 * @implements B48B:03C6:000A:B268 ()
 *
 * Called From: B48B:03A7:0005:06E6
 */
void f__B48B_03C6_000A_B268()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B48B_03A9_000B_E626(); return; }
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
