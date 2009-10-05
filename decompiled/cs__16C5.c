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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__16C5_004A_0007_F6A9(); return; }
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
	/* Unresolved jump */ emu_ip = 0x0121; emu_last_cs = 0x16C5; emu_last_ip = 0x004E; emu_last_length = 0x0025; emu_last_crc = 0xE446; emu_call();
}

/**
 * Decompiled function f__16C5_004A_0007_F6A9()
 *
 * @name f__16C5_004A_0007_F6A9
 * @implements 16C5:004A:0007:F6A9 ()
 *
 * Called From: 16C5:001A:0023:21B3
 * Called From: 16C5:0022:0023:21B3
 */
void f__16C5_004A_0007_F6A9()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__16C5_0051_000F_288A(); return; }
	f__16C5_0121_0003_2E57(); return;
}

/**
 * Decompiled function f__16C5_0051_000F_288A()
 *
 * @name f__16C5_0051_000F_288A
 * @implements 16C5:0051:000F:288A ()
 *
 * Called From: 16C5:004C:0025:E446
 * Called From: 16C5:004C:0007:F6A9
 */
void f__16C5_0051_000F_288A()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0060); emu_cs = 0x104B; emu_AirUnit_FindFirst();
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
 * Decompiled function f__16C5_0066_000D_3A8A()
 *
 * @name f__16C5_0066_000D_3A8A
 * @implements 16C5:0066:000D:3A8A ()
 *
 * Called From: 16C5:011E:0013:4DDB
 * Called From: 16C5:011E:0015:DF16
 */
void f__16C5_0066_000D_3A8A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x0073); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	f__16C5_0073_002F_03B8();
}

/**
 * Decompiled function f__16C5_0073_002F_03B8()
 *
 * @name f__16C5_0073_002F_03B8
 * @implements 16C5:0073:002F:03B8 ()
 *
 * Called From: 16C5:0073:000D:3A8A
 */
void f__16C5_0073_002F_03B8()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x394C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x394A), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	if (emu_flags.zf) { f__16C5_0101_000B_0673(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x1C), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00F9; emu_last_cs = 0x16C5; emu_last_ip = 0x0090; emu_last_length = 0x002F; emu_last_crc = 0x03B8; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_addw(&emu_ax.x, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6126));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00A2); emu_cs = 0x15C2; f__15C2_0526_000F_EA1E();
	f__16C5_00A2_004D_9382();
}

/**
 * Decompiled function f__16C5_00A2_004D_9382()
 *
 * @name f__16C5_00A2_004D_9382
 * @implements 16C5:00A2:004D:9382 ()
 *
 * Called From: 16C5:00A2:002F:03B8
 */
void f__16C5_00A2_004D_9382()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__16C5_00F7_0002_C43A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00DF; emu_last_cs = 0x16C5; emu_last_ip = 0x00AD; emu_last_length = 0x004D; emu_last_crc = 0x9382; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37A4), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x37A2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x29));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0xF);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x37A8));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x00DF; emu_last_cs = 0x16C5; emu_last_ip = 0x00CB; emu_last_length = 0x004D; emu_last_crc = 0x9382; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x29));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0xF);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37A8), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_addw(&emu_ax.x, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6126));
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x00EF); emu_cs = 0x15C2; emu_ip = 0x0559; emu_last_cs = 0x16C5; emu_last_ip = 0x00EA; emu_last_length = 0x004D; emu_last_crc = 0x9382; emu_call();
	/* Unresolved jump */ emu_ip = 0x00EF; emu_last_cs = 0x16C5; emu_last_ip = 0x00EF; emu_last_length = 0x004D; emu_last_crc = 0x9382; emu_call();
}

/**
 * Decompiled function f__16C5_00F7_0002_C43A()
 *
 * @name f__16C5_00F7_0002_C43A
 * @implements 16C5:00F7:0002:C43A ()
 *
 * Called From: 16C5:00A6:004D:9382
 */
void f__16C5_00F7_0002_C43A()
{
	f__16C5_0101_000B_0673(); return;
}

/**
 * Decompiled function f__16C5_0101_000B_0673()
 *
 * @name f__16C5_0101_000B_0673
 * @implements 16C5:0101:000B:0673 ()
 *
 * Called From: 16C5:0085:002F:03B8
 * Called From: 16C5:00F7:0002:C43A
 */
void f__16C5_0101_000B_0673()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x010C); emu_cs = 0x104B; emu_AirUnit_FindNext();
	f__16C5_010C_0015_DF16();
}

/**
 * Decompiled function f__16C5_010C_0015_DF16()
 *
 * @name f__16C5_010C_0015_DF16
 * @implements 16C5:010C:0015:DF16 ()
 *
 * Called From: 16C5:010C:000B:0673
 */
void f__16C5_010C_0015_DF16()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6126), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6124), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6126));
	if (emu_flags.zf) { f__16C5_0121_0003_2E57(); return; }
	f__16C5_0066_000D_3A8A(); return;
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
	f__16C5_0066_000D_3A8A(); return;
}

/**
 * Decompiled function f__16C5_0121_0003_2E57()
 *
 * @name f__16C5_0121_0003_2E57
 * @implements 16C5:0121:0003:2E57 ()
 *
 * Called From: 16C5:004E:0007:F6A9
 * Called From: 16C5:011C:0013:4DDB
 * Called From: 16C5:011C:0015:DF16
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
