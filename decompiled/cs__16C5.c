/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__16C5_0009_0023_21B3()
 *
 * @name f__16C5_0009_0023_21B3
 * @implements 16C5:0009:0023:21B3 ()
 *
 * Called From: 0642:03BD:0007:BB52
 */
void f__16C5_0009_0023_21B3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6166));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6164));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x004A; emu_last_cs = 0x16C5; emu_last_ip = 0x001A; emu_last_length = 0x0023; emu_last_crc = 0x21B3; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { f__16C5_0024_0008_EF7F(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__16C5_004A_0007_F6A9(); return; }
	emu_movw(&emu_si, 0x1);
	emu_push(emu_cs); emu_push(0x002C); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__16C5_002C_0025_E446();
}

/**
 * Decompiled function f__16C5_0024_0008_EF7F()
 *
 * @name f__16C5_0024_0008_EF7F
 * @implements 16C5:0024:0008:EF7F ()
 *
 * Called From: 16C5:001C:0023:21B3
 */
void f__16C5_0024_0008_EF7F()
{
	emu_movw(&emu_si, 0x1);
	emu_push(emu_cs); emu_push(0x002C); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__16C5_002C_0025_E446();
}

/**
 * Decompiled function f__16C5_002C_0025_E446()
 *
 * @name f__16C5_002C_0025_E446
 * @implements 16C5:002C:0025:E446 ()
 *
 * Called From: 16C5:002C:0023:21B3
 * Called From: 16C5:002C:0008:EF7F
 */
void f__16C5_002C_0025_E446()
{
	emu_andw(&emu_ax.x, 0x7);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_adcws(&emu_dx.x, 0x0);
	emu_addws(&emu_bx.x, 0x5);
	emu_adcws(&emu_dx.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6166), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6164), emu_bx.x);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__16C5_0051_000F_288A(); return; }
	emu_ip = 0x0121; emu_last_cs = 0x16C5; emu_last_ip = 0x004E; emu_last_length = 0x0025; emu_last_crc = 0xE446; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__16C5_004A_0007_F6A9()
 *
 * @name f__16C5_004A_0007_F6A9
 * @implements 16C5:004A:0007:F6A9 ()
 *
 * Called From: 16C5:0022:0023:21B3
 */
void f__16C5_004A_0007_F6A9()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { emu_ip = 0x0051; emu_last_cs = 0x16C5; emu_last_ip = 0x004C; emu_last_length = 0x0007; emu_last_crc = 0xF6A9; emu_call(); return; } // Jump does not resolve
	f__16C5_0121_0003_2E57(); return;
}

/**
 * Decompiled function f__16C5_0051_000F_288A()
 *
 * @name f__16C5_0051_000F_288A
 * @implements 16C5:0051:000F:288A ()
 *
 * Called From: 16C5:004C:0025:E446
 */
void f__16C5_0051_000F_288A()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0060); emu_cs = 0x104B; f__104B_00C2_0030_20A6();
	f__16C5_0060_0006_7728();
}

/**
 * Decompiled function f__16C5_0060_0006_7728()
 *
 * @name f__16C5_0060_0006_7728
 * @implements 16C5:0060:0006:7728 ()
 *
 * Called From: 16C5:0060:000F:288A
 */
void f__16C5_0060_0006_7728()
{
	emu_addws(&emu_sp, 0x6);
	f__16C5_010E_0013_4DDB(); return;
}

/**
 * Decompiled function f__16C5_010E_0013_4DDB()
 *
 * @name f__16C5_010E_0013_4DDB
 * @implements 16C5:010E:0013:4DDB ()
 *
 * Called From: 16C5:0063:0006:7728
 */
void f__16C5_010E_0013_4DDB()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6126), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6124), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6126));
	if (emu_flags.zf) { f__16C5_0121_0003_2E57(); return; }
	emu_ip = 0x0066; emu_last_cs = 0x16C5; emu_last_ip = 0x011E; emu_last_length = 0x0013; emu_last_crc = 0x4DDB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__16C5_0121_0003_2E57()
 *
 * @name f__16C5_0121_0003_2E57
 * @implements 16C5:0121:0003:2E57 ()
 *
 * Called From: 16C5:004E:0007:F6A9
 * Called From: 16C5:011C:0013:4DDB
 */
void f__16C5_0121_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
