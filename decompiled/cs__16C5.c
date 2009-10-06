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
	if (!emu_flags.zf) { f__16C5_00F9_0013_BAAB(); return; }
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
	if (emu_flags.zf) { f__16C5_00DF_0010_2718(); return; }
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
	f__16C5_00EF_0008_F6CF();
}

/**
 * Decompiled function f__16C5_00DF_0010_2718()
 *
 * @name f__16C5_00DF_0010_2718
 * @implements 16C5:00DF:0010:2718 ()
 *
 * Called From: 16C5:00AD:004D:9382
 */
void f__16C5_00DF_0010_2718()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_addw(&emu_ax.x, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6126));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00EF); emu_cs = 0x15C2; f__15C2_0559_0015_E98A();
	f__16C5_00EF_0008_F6CF();
}

/**
 * Decompiled function f__16C5_00EF_0008_F6CF()
 *
 * @name f__16C5_00EF_0008_F6CF
 * @implements 16C5:00EF:0008:F6CF ()
 *
 * Called From: 16C5:00EF:0010:2718
 */
void f__16C5_00EF_0008_F6CF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__16C5_00F7_0002_C43A(); return; }
	/* Unresolved jump */ emu_ip = 0x0121; emu_last_cs = 0x16C5; emu_last_ip = 0x00F5; emu_last_length = 0x0008; emu_last_crc = 0xF6CF; emu_call();
}

/**
 * Decompiled function f__16C5_00F7_0002_C43A()
 *
 * @name f__16C5_00F7_0002_C43A
 * @implements 16C5:00F7:0002:C43A ()
 *
 * Called From: 16C5:00A6:004D:9382
 * Called From: 16C5:00F3:0008:F6CF
 */
void f__16C5_00F7_0002_C43A()
{
	f__16C5_0101_000B_0673(); return;
}

/**
 * Decompiled function f__16C5_00F9_0013_BAAB()
 *
 * @name f__16C5_00F9_0013_BAAB
 * @implements 16C5:00F9:0013:BAAB ()
 *
 * Called From: 16C5:0090:002F:03B8
 */
void f__16C5_00F9_0013_BAAB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x010C); emu_cs = 0x104B; emu_AirUnit_FindNext();
	f__16C5_010C_0015_DF16();
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
 * Called From: 16C5:010C:0013:BAAB
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

/**
 * Decompiled function f__16C5_01EF_000D_1984()
 *
 * @name f__16C5_01EF_000D_1984
 * @implements 16C5:01EF:000D:1984 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_01EF_000D_1984()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	f__16C5_01FC_0002_2597(); return;
}

/**
 * Decompiled function f__16C5_01FC_0002_2597()
 *
 * @name f__16C5_01FC_0002_2597
 * @implements 16C5:01FC:0002:2597 ()
 *
 * Called From: 16C5:01FA:000D:1984
 */
void f__16C5_01FC_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__16C5_01FE_000D_19C4()
 *
 * @name f__16C5_01FE_000D_19C4
 * @implements 16C5:01FE:000D:19C4 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_01FE_000D_19C4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	f__16C5_020B_0002_2597(); return;
}

/**
 * Decompiled function f__16C5_020B_0002_2597()
 *
 * @name f__16C5_020B_0002_2597
 * @implements 16C5:020B:0002:2597 ()
 *
 * Called From: 16C5:0209:000D:19C4
 */
void f__16C5_020B_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__16C5_021C_003A_2718()
 *
 * @name f__16C5_021C_003A_2718
 * @implements 16C5:021C:003A:2718 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_021C_003A_2718()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	if ((emu_flags.sf != emu_flags.of)) { f__16C5_0256_0017_FF04(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x03BD; emu_last_cs = 0x16C5; emu_last_ip = 0x0253; emu_last_length = 0x003A; emu_last_crc = 0x2718; emu_call();
}

/**
 * Decompiled function f__16C5_0251_0005_DC2D()
 *
 * @name f__16C5_0251_0005_DC2D
 * @implements 16C5:0251:0005:DC2D ()
 *
 * Called From: 16C5:03BA:0003:6205
 */
void f__16C5_0251_0005_DC2D()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__16C5_03BD_0006_F7CE(); return;
}

/**
 * Decompiled function f__16C5_0253_0003_DDB9()
 *
 * @name f__16C5_0253_0003_DDB9
 * @implements 16C5:0253:0003:DDB9 ()
 *
 * Called From: 16C5:03B7:0006:A824
 */
void f__16C5_0253_0003_DDB9()
{
	f__16C5_03BD_0006_F7CE(); return;
}

/**
 * Decompiled function f__16C5_0256_0017_FF04()
 *
 * @name f__16C5_0256_0017_FF04
 * @implements 16C5:0256:0017:FF04 ()
 *
 * Called From: 16C5:024F:003A:2718
 */
void f__16C5_0256_0017_FF04()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x026D); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	f__16C5_026D_0006_973F();
}

/**
 * Decompiled function f__16C5_026D_0006_973F()
 *
 * @name f__16C5_026D_0006_973F
 * @implements 16C5:026D:0006:973F ()
 *
 * Called From: 16C5:026D:0017:FF04
 */
void f__16C5_026D_0006_973F()
{
	emu_addws(&emu_sp, 0x8);
	f__16C5_0367_0011_96EF(); return;
}

/**
 * Decompiled function f__16C5_0273_000E_E383()
 *
 * @name f__16C5_0273_000E_E383
 * @implements 16C5:0273:000E:E383 ()
 *
 * Called From: 16C5:0375:0011:96EF
 * Called From: 16C5:0375:0013:DDD9
 */
void f__16C5_0273_000E_E383()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x200);
	if (emu_flags.zf) { f__16C5_0281_000D_E586(); return; }
	f__16C5_035A_000B_799F(); return;
}

/**
 * Decompiled function f__16C5_0281_000D_E586()
 *
 * @name f__16C5_0281_000D_E586
 * @implements 16C5:0281:000D:E586 ()
 *
 * Called From: 16C5:027C:000E:E383
 */
void f__16C5_0281_000D_E586()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x6);
	if (!emu_flags.zf) { f__16C5_028E_0026_21FC(); return; }
	/* Unresolved jump */ emu_ip = 0x035A; emu_last_cs = 0x16C5; emu_last_ip = 0x028B; emu_last_length = 0x000D; emu_last_crc = 0xE586; emu_call();
}

/**
 * Decompiled function f__16C5_028E_0026_21FC()
 *
 * @name f__16C5_028E_0026_21FC
 * @implements 16C5:028E:0026:21FC ()
 *
 * Called From: 16C5:0289:000D:E586
 */
void f__16C5_028E_0026_21FC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3C));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	if (emu_flags.zf) { f__16C5_02B4_0028_C684(); return; }
	f__16C5_035A_000B_799F(); return;
}

/**
 * Decompiled function f__16C5_02B4_0028_C684()
 *
 * @name f__16C5_02B4_0028_C684
 * @implements 16C5:02B4:0028:C684 ()
 *
 * Called From: 16C5:02AF:0026:21FC
 */
void f__16C5_02B4_0028_C684()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02F9; emu_last_cs = 0x16C5; emu_last_ip = 0x02BE; emu_last_length = 0x0028; emu_last_crc = 0xC684; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_push(emu_cs); emu_push(0x02DC); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__16C5_02DC_001D_4A1C();
}

/**
 * Decompiled function f__16C5_02DC_001D_4A1C()
 *
 * @name f__16C5_02DC_001D_4A1C
 * @implements 16C5:02DC:001D:4A1C ()
 *
 * Called From: 16C5:02DC:0028:C684
 */
void f__16C5_02DC_001D_4A1C()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x02E9; emu_last_cs = 0x16C5; emu_last_ip = 0x02E3; emu_last_length = 0x001D; emu_last_crc = 0x4A1C; emu_call(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__16C5_02F7_0002_F0BA(); return; }
	emu_movw(&emu_di, emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	f__16C5_035A_000B_799F(); return;
}

/**
 * Decompiled function f__16C5_02F7_0002_F0BA()
 *
 * @name f__16C5_02F7_0002_F0BA
 * @implements 16C5:02F7:0002:F0BA ()
 *
 * Called From: 16C5:02E7:001D:4A1C
 */
void f__16C5_02F7_0002_F0BA()
{
	f__16C5_035A_000B_799F(); return;
}

/**
 * Decompiled function f__16C5_035A_000B_799F()
 *
 * @name f__16C5_035A_000B_799F
 * @implements 16C5:035A:000B:799F ()
 *
 * Called From: 16C5:027E:000E:E383
 * Called From: 16C5:02B1:0026:21FC
 * Called From: 16C5:02F7:001D:4A1C
 * Called From: 16C5:02F7:0002:F0BA
 */
void f__16C5_035A_000B_799F()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0365); emu_cs = 0x0FE4; emu_Unit_FindNext();
	f__16C5_0365_0013_DDD9();
}

/**
 * Decompiled function f__16C5_0365_0013_DDD9()
 *
 * @name f__16C5_0365_0013_DDD9
 * @implements 16C5:0365:0013:DDD9 ()
 *
 * Called From: 16C5:0365:000B:799F
 */
void f__16C5_0365_0013_DDD9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__16C5_0378_0027_420B(); return; }
	f__16C5_0273_000E_E383(); return;
}

/**
 * Decompiled function f__16C5_0367_0011_96EF()
 *
 * @name f__16C5_0367_0011_96EF
 * @implements 16C5:0367:0011:96EF ()
 *
 * Called From: 16C5:0270:0006:973F
 */
void f__16C5_0367_0011_96EF()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0378; emu_last_cs = 0x16C5; emu_last_ip = 0x0373; emu_last_length = 0x0011; emu_last_crc = 0x96EF; emu_call(); return; }
	f__16C5_0273_000E_E383(); return;
}

/**
 * Decompiled function f__16C5_0378_0027_420B()
 *
 * @name f__16C5_0378_0027_420B
 * @implements 16C5:0378:0027:420B ()
 *
 * Called From: 16C5:0373:0013:DDD9
 */
void f__16C5_0378_0027_420B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__16C5_038C_0013_6D07(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__16C5_03BA_0003_6205(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x039F); emu_cs = 0x16BC; emu_ip = 0x0044; emu_last_cs = 0x16C5; emu_last_ip = 0x039A; emu_last_length = 0x0027; emu_last_crc = 0x420B; emu_call();
	f__16C5_039F_0015_91C5();
}

/**
 * Decompiled function f__16C5_038C_0013_6D07()
 *
 * @name f__16C5_038C_0013_6D07
 * @implements 16C5:038C:0013:6D07 ()
 *
 * Called From: 16C5:037E:0027:420B
 */
void f__16C5_038C_0013_6D07()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03BA; emu_last_cs = 0x16C5; emu_last_ip = 0x0392; emu_last_length = 0x0013; emu_last_crc = 0x6D07; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x039F); emu_cs = 0x16BC; f__16BC_0044_0027_CB92();
	f__16C5_039F_0015_91C5();
}

/**
 * Decompiled function f__16C5_039F_0015_91C5()
 *
 * @name f__16C5_039F_0015_91C5
 * @implements 16C5:039F:0015:91C5 ()
 *
 * Called From: 16C5:039F:0013:6D07
 */
void f__16C5_039F_0015_91C5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6126));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_push(emu_cs); emu_push(0x03B4); emu_cs = 0x16BC; f__16BC_0001_0018_AE47();
	f__16C5_03B4_0006_A824();
}

/**
 * Decompiled function f__16C5_03B4_0006_A824()
 *
 * @name f__16C5_03B4_0006_A824
 * @implements 16C5:03B4:0006:A824 ()
 *
 * Called From: 16C5:03B4:0015:91C5
 */
void f__16C5_03B4_0006_A824()
{
	emu_addws(&emu_sp, 0x8);
	f__16C5_0253_0003_DDB9(); return;
}

/**
 * Decompiled function f__16C5_03BA_0003_6205()
 *
 * @name f__16C5_03BA_0003_6205
 * @implements 16C5:03BA:0003:6205 ()
 *
 * Called From: 16C5:0392:0027:420B
 */
void f__16C5_03BA_0003_6205()
{
	f__16C5_0251_0005_DC2D(); return;
}

/**
 * Decompiled function f__16C5_03BD_0006_F7CE()
 *
 * @name f__16C5_03BD_0006_F7CE
 * @implements 16C5:03BD:0006:F7CE ()
 *
 * Called From: 16C5:0253:0003:DDB9
 * Called From: 16C5:0253:0005:DC2D
 */
void f__16C5_03BD_0006_F7CE()
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
 * Decompiled function f__16C5_03C3_002D_24E5()
 *
 * @name f__16C5_03C3_002D_24E5
 * @implements 16C5:03C3:002D:24E5 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_03C3_002D_24E5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x03F0); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	f__16C5_03F0_0005_A1AE();
}

/**
 * Decompiled function f__16C5_03F0_0005_A1AE()
 *
 * @name f__16C5_03F0_0005_A1AE
 * @implements 16C5:03F0:0005:A1AE ()
 *
 * Called From: 16C5:03F0:002D:24E5
 */
void f__16C5_03F0_0005_A1AE()
{
	emu_addws(&emu_sp, 0x8);
	f__16C5_043E_0015_8FEB(); return;
}

/**
 * Decompiled function f__16C5_03F5_0023_C4F4()
 *
 * @name f__16C5_03F5_0023_C4F4
 * @implements 16C5:03F5:0023:C4F4 ()
 *
 * Called From: 16C5:044A:0015:8FEB
 * Called From: 16C5:044A:0017:EB58
 */
void f__16C5_03F5_0023_C4F4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_decw(&emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	if (!emu_flags.zf) { f__16C5_0431_000B_799F(); return; }
	emu_incw(&emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0418); emu_cs = 0x0F3F; emu_ip = 0x0046; emu_last_cs = 0x16C5; emu_last_ip = 0x0413; emu_last_length = 0x0023; emu_last_crc = 0xC4F4; emu_call();
	/* Unresolved jump */ emu_ip = 0x0418; emu_last_cs = 0x16C5; emu_last_ip = 0x0418; emu_last_length = 0x0023; emu_last_crc = 0xC4F4; emu_call();
}

/**
 * Decompiled function f__16C5_0431_000B_799F()
 *
 * @name f__16C5_0431_000B_799F
 * @implements 16C5:0431:000B:799F ()
 *
 * Called From: 16C5:0405:0023:C4F4
 */
void f__16C5_0431_000B_799F()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x043C); emu_cs = 0x0FE4; emu_Unit_FindNext();
	f__16C5_043C_0017_EB58();
}

/**
 * Decompiled function f__16C5_043C_0017_EB58()
 *
 * @name f__16C5_043C_0017_EB58
 * @implements 16C5:043C:0017:EB58 ()
 *
 * Called From: 16C5:043C:000B:799F
 */
void f__16C5_043C_0017_EB58()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__16C5_03F5_0023_C4F4(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0453; emu_last_cs = 0x16C5; emu_last_ip = 0x044E; emu_last_length = 0x0017; emu_last_crc = 0xEB58; emu_call(); return; }
	f__16C5_0538_0005_BB66(); return;
}

/**
 * Decompiled function f__16C5_043E_0015_8FEB()
 *
 * @name f__16C5_043E_0015_8FEB
 * @implements 16C5:043E:0015:8FEB ()
 *
 * Called From: 16C5:03F3:0005:A1AE
 */
void f__16C5_043E_0015_8FEB()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__16C5_03F5_0023_C4F4(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0453; emu_last_cs = 0x16C5; emu_last_ip = 0x044E; emu_last_length = 0x0015; emu_last_crc = 0x8FEB; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0538; emu_last_cs = 0x16C5; emu_last_ip = 0x0450; emu_last_length = 0x0015; emu_last_crc = 0x8FEB; emu_call();
}

/**
 * Decompiled function f__16C5_0538_0005_BB66()
 *
 * @name f__16C5_0538_0005_BB66
 * @implements 16C5:0538:0005:BB66 ()
 *
 * Called From: 16C5:0450:0017:EB58
 */
void f__16C5_0538_0005_BB66()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__16C5_053D_0006_F7CE(); return;
}

/**
 * Decompiled function f__16C5_053D_0006_F7CE()
 *
 * @name f__16C5_053D_0006_F7CE
 * @implements 16C5:053D:0006:F7CE ()
 *
 * Called From: 16C5:053B:0005:BB66
 */
void f__16C5_053D_0006_F7CE()
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
 * Decompiled function f__16C5_09C4_003E_31D6()
 *
 * @name f__16C5_09C4_003E_31D6
 * @implements 16C5:09C4:003E:31D6 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_09C4_003E_31D6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0A19; emu_last_cs = 0x16C5; emu_last_ip = 0x09E3; emu_last_length = 0x003E; emu_last_crc = 0x31D6; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x392E);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_addw(&emu_ax.x, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6126));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A02); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	f__16C5_0A02_0014_245A();
}

/**
 * Decompiled function f__16C5_0A02_0014_245A()
 *
 * @name f__16C5_0A02_0014_245A
 * @implements 16C5:0A02:0014:245A ()
 *
 * Called From: 16C5:0A02:003E:31D6
 */
void f__16C5_0A02_0014_245A()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6124));
	emu_addw(&emu_ax.x, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6126));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A16); emu_cs = 0x15C2; f__15C2_03D9_0011_D202();
	f__16C5_0A16_0007_F90C();
}

/**
 * Decompiled function f__16C5_0A16_0007_F90C()
 *
 * @name f__16C5_0A16_0007_F90C
 * @implements 16C5:0A16:0007:F90C ()
 *
 * Called From: 16C5:0A16:0014:245A
 */
void f__16C5_0A16_0007_F90C()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__16C5_0A1D_0003_2E57(); return;
}

/**
 * Decompiled function f__16C5_0A1D_0003_2E57()
 *
 * @name f__16C5_0A1D_0003_2E57
 * @implements 16C5:0A1D:0003:2E57 ()
 *
 * Called From: 16C5:0A1B:0007:F90C
 */
void f__16C5_0A1D_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
