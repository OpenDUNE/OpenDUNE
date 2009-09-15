/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__16C5_0009_0023_95F8()
 *
 * @name f__16C5_0009_0023_95F8
 * @implements 16C5:0009:0023:95F8 ()
 *
 * Called From: 0642:03BD:0007:2A28
 */
void f__16C5_0009_0023_95F8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6166));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6164));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__16C5_004A_0007_3298(); return; }
	if (!emu_flags.zf) { emu_ip = 0x0024; emu_last_cs = 0x16C5; emu_last_ip = 0x001C; emu_last_length = 0x0023; emu_last_crc = 0x95F8; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__16C5_004A_0007_3298(); return; }
	emu_movw(&emu_si, 0x1);
	emu_push(emu_cs); emu_push(0x002C); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__16C5_002C_0025_8476();
}

/**
 * Decompiled function f__16C5_002C_0025_8476()
 *
 * @name f__16C5_002C_0025_8476
 * @implements 16C5:002C:0025:8476 ()
 *
 * Called From: 16C5:002C:0023:95F8
 */
void f__16C5_002C_0025_8476()
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
	if (!emu_flags.zf) { f__16C5_0051_000F_2E97(); return; }
	emu_ip = 0x0121; emu_last_cs = 0x16C5; emu_last_ip = 0x004E; emu_last_length = 0x0025; emu_last_crc = 0x8476; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__16C5_004A_0007_3298()
 *
 * @name f__16C5_004A_0007_3298
 * @implements 16C5:004A:0007:3298 ()
 *
 * Called From: 16C5:001A:0023:95F8
 * Called From: 16C5:0022:0023:95F8
 */
void f__16C5_004A_0007_3298()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { emu_ip = 0x0051; emu_last_cs = 0x16C5; emu_last_ip = 0x004C; emu_last_length = 0x0007; emu_last_crc = 0x3298; emu_call(); return; } // Jump does not resolve
	f__16C5_0121_0003_0212(); return;
}

/**
 * Decompiled function f__16C5_0051_000F_2E97()
 *
 * @name f__16C5_0051_000F_2E97
 * @implements 16C5:0051:000F:2E97 ()
 *
 * Called From: 16C5:004C:0025:8476
 */
void f__16C5_0051_000F_2E97()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0060); emu_cs = 0x104B; f__104B_00C2_0030_C2D2();
	f__16C5_0060_0006_3DC8();
}

/**
 * Decompiled function f__16C5_0060_0006_3DC8()
 *
 * @name f__16C5_0060_0006_3DC8
 * @implements 16C5:0060:0006:3DC8 ()
 *
 * Called From: 16C5:0060:000F:2E97
 */
void f__16C5_0060_0006_3DC8()
{
	emu_addws(&emu_sp, 0x6);
	f__16C5_010E_0013_0231(); return;
}

/**
 * Decompiled function f__16C5_010E_0013_0231()
 *
 * @name f__16C5_010E_0013_0231
 * @implements 16C5:010E:0013:0231 ()
 *
 * Called From: 16C5:0063:0006:3DC8
 */
void f__16C5_010E_0013_0231()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6126), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6124), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6126));
	if (emu_flags.zf) { f__16C5_0121_0003_0212(); return; }
	emu_ip = 0x0066; emu_last_cs = 0x16C5; emu_last_ip = 0x011E; emu_last_length = 0x0013; emu_last_crc = 0x0231; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__16C5_0121_0003_0212()
 *
 * @name f__16C5_0121_0003_0212
 * @implements 16C5:0121:0003:0212 ()
 *
 * Called From: 16C5:004E:0007:3298
 * Called From: 16C5:011C:0013:0231
 */
void f__16C5_0121_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
