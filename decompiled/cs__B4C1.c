/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4C1_0000_0022_859F()
 *
 * @name f__B4C1_0000_0022_859F
 * @implements B4C1:0000:0022:859F ()
 *
 * Called From: 34C1:0025:0005:1C32
 * Called From: 34C1:0025:0005:1F6C
 * Called From: 34C1:0025:0005:1EFA
 * Called From: 34C1:0025:0005:1D2E
 * Called From: 34C1:0025:0005:1C74
 */
void f__B4C1_0000_0022_859F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4C1_0022_000D_1C26(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__B4C1_0024_000B_1C3B(); return;
}

/**
 * Decompiled function f__B4C1_0022_000D_1C26()
 *
 * @name f__B4C1_0022_000D_1C26
 * @implements B4C1:0022:000D:1C26 ()
 *
 * Called From: B4C1:001A:0022:859F
 */
void f__B4C1_0022_000D_1C26()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_push(emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4C1_002F_0062_E8FE(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__B4C1_0031_0060_EB5C(); return;
}

/**
 * Decompiled function f__B4C1_0024_000B_1C3B()
 *
 * @name f__B4C1_0024_000B_1C3B
 * @implements B4C1:0024:000B:1C3B ()
 *
 * Called From: B4C1:0020:0022:859F
 */
void f__B4C1_0024_000B_1C3B()
{
	emu_push(emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4C1_002F_0062_E8FE(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__B4C1_0031_0060_EB5C(); return;
}

/**
 * Decompiled function f__B4C1_002F_0062_E8FE()
 *
 * @name f__B4C1_002F_0062_E8FE
 * @implements B4C1:002F:0062:E8FE ()
 *
 * Called From: B4C1:0027:000D:1C26
 * Called From: B4C1:0027:000B:1C3B
 */
void f__B4C1_002F_0062_E8FE()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, 0x1F40);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4C1_003E_0053_2DFE(); return; }
	emu_sarw(&emu_si, 0x1);
	emu_sarw(&emu_di, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4C1_0051_0040_FE62(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x2);
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x005F; emu_last_cs = 0xB4C1; emu_last_ip = 0x0053; emu_last_length = 0x0062; emu_last_crc = 0xE8FE; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x23DA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x7FFF);
	emu_cmpw(&emu_si, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x00A0; emu_last_cs = 0xB4C1; emu_last_ip = 0x007C; emu_last_length = 0x0062; emu_last_crc = 0xE8FE; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x009E; emu_last_cs = 0xB4C1; emu_last_ip = 0x0080; emu_last_length = 0x0062; emu_last_crc = 0xE8FE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_movb(&emu_cx.l, 0x8);
	emu_push(emu_cs); emu_push(0x0091); emu_cs = 0x01F7; emu_ip = 0x061F; emu_last_cs = 0xB4C1; emu_last_ip = 0x008C; emu_last_length = 0x0062; emu_last_crc = 0xE8FE; emu_call(); // Jump does not resolve
	f__B4C1_0091_0007_23BE();
}

/**
 * Decompiled function f__B4C1_0031_0060_EB5C()
 *
 * @name f__B4C1_0031_0060_EB5C
 * @implements B4C1:0031:0060:EB5C ()
 *
 * Called From: B4C1:002D:000D:1C26
 * Called From: B4C1:002D:000B:1C3B
 */
void f__B4C1_0031_0060_EB5C()
{
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, 0x1F40);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4C1_003E_0053_2DFE(); return; }
	emu_sarw(&emu_si, 0x1);
	emu_sarw(&emu_di, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0051; emu_last_cs = 0xB4C1; emu_last_ip = 0x0045; emu_last_length = 0x0060; emu_last_crc = 0xEB5C; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x2);
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4C1_005F_0032_ADF5(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x23DA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x7FFF);
	emu_cmpw(&emu_si, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x00A0; emu_last_cs = 0xB4C1; emu_last_ip = 0x007C; emu_last_length = 0x0060; emu_last_crc = 0xEB5C; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x009E; emu_last_cs = 0xB4C1; emu_last_ip = 0x0080; emu_last_length = 0x0060; emu_last_crc = 0xEB5C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_movb(&emu_cx.l, 0x8);
	emu_push(emu_cs); emu_push(0x0091); emu_cs = 0x01F7; emu_ip = 0x061F; emu_last_cs = 0xB4C1; emu_last_ip = 0x008C; emu_last_length = 0x0060; emu_last_crc = 0xEB5C; emu_call(); // Jump does not resolve
	f__B4C1_0091_0007_23BE();
}

/**
 * Decompiled function f__B4C1_003E_0053_2DFE()
 *
 * @name f__B4C1_003E_0053_2DFE
 * @implements B4C1:003E:0053:2DFE ()
 *
 * Called From: B4C1:0038:0062:E8FE
 * Called From: B4C1:0038:0060:EB5C
 */
void f__B4C1_003E_0053_2DFE()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4C1_0051_0040_FE62(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x2);
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4C1_005F_0032_ADF5(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x23DA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x7FFF);
	emu_cmpw(&emu_si, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__B4C1_00A0_0018_2361(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4C1_009E_0002_03E6(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_movb(&emu_cx.l, 0x8);
	emu_push(emu_cs); emu_push(0x0091); emu_cs = 0x01F7; f__01F7_058E_0015_66E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C1) { ovl__34C1(0xFF); }
	f__B4C1_0091_0007_23BE();
}

/**
 * Decompiled function f__B4C1_0051_0040_FE62()
 *
 * @name f__B4C1_0051_0040_FE62
 * @implements B4C1:0051:0040:FE62 ()
 *
 * Called From: B4C1:0045:0053:2DFE
 * Called From: B4C1:0045:0062:E8FE
 */
void f__B4C1_0051_0040_FE62()
{
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4C1_005F_0032_ADF5(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x23DA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x7FFF);
	emu_cmpw(&emu_si, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__B4C1_00A0_0018_2361(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x009E; emu_last_cs = 0xB4C1; emu_last_ip = 0x0080; emu_last_length = 0x0040; emu_last_crc = 0xFE62; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_movb(&emu_cx.l, 0x8);
	emu_push(emu_cs); emu_push(0x0091); emu_cs = 0x01F7; f__01F7_058E_0015_66E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C1) { ovl__34C1(0xFF); }
	f__B4C1_0091_0007_23BE();
}

/**
 * Decompiled function f__B4C1_005F_0032_ADF5()
 *
 * @name f__B4C1_005F_0032_ADF5
 * @implements B4C1:005F:0032:ADF5 ()
 *
 * Called From: B4C1:0053:0040:FE62
 * Called From: B4C1:0053:0053:2DFE
 * Called From: B4C1:0053:0060:EB5C
 */
void f__B4C1_005F_0032_ADF5()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x23DA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x7FFF);
	emu_cmpw(&emu_si, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__B4C1_00A0_0018_2361(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4C1_009E_0002_03E6(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_movb(&emu_cx.l, 0x8);
	emu_push(emu_cs); emu_push(0x0091); emu_cs = 0x01F7; f__01F7_058E_0015_66E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C1) { ovl__34C1(0xFF); }
	f__B4C1_0091_0007_23BE();
}

/**
 * Decompiled function f__B4C1_0091_0007_23BE()
 *
 * @name f__B4C1_0091_0007_23BE
 * @implements B4C1:0091:0007:23BE ()
 *
 * Called From: B4C1:0091:0032:ADF5
 * Called From: B4C1:0091:0053:2DFE
 * Called From: B4C1:0091:0040:FE62
 */
void f__B4C1_0091_0007_23BE()
{
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0098); emu_cs = 0x01F7; f__01F7_04E0_0004_06F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C1) { ovl__34C1(0xFF); }
	f__B4C1_0098_0008_8C76();
}

/**
 * Decompiled function f__B4C1_0098_0008_8C76()
 *
 * @name f__B4C1_0098_0008_8C76
 * @implements B4C1:0098:0008:8C76 ()
 *
 * Called From: B4C1:0098:0007:23BE
 */
void f__B4C1_0098_0008_8C76()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	f__B4C1_00C5_0007_6E6A(); return;
}

/**
 * Decompiled function f__B4C1_009E_0002_03E6()
 *
 * @name f__B4C1_009E_0002_03E6
 * @implements B4C1:009E:0002:03E6 ()
 *
 * Called From: B4C1:0080:0053:2DFE
 * Called From: B4C1:0080:0032:ADF5
 */
void f__B4C1_009E_0002_03E6()
{
	f__B4C1_00C5_0007_6E6A(); return;
}

/**
 * Decompiled function f__B4C1_00A0_0018_2361()
 *
 * @name f__B4C1_00A0_0018_2361
 * @implements B4C1:00A0:0018:2361 ()
 *
 * Called From: B4C1:007C:0032:ADF5
 * Called From: B4C1:007C:0040:FE62
 * Called From: B4C1:007C:0053:2DFE
 */
void f__B4C1_00A0_0018_2361()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4C1_00C5_0007_6E6A(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_cwd();
	emu_movb(&emu_cx.l, 0x8);
	emu_push(emu_cs); emu_push(0x00B8); emu_cs = 0x01F7; f__01F7_058E_0015_66E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C1) { ovl__34C1(0xFF); }
	f__B4C1_00B8_0007_23BE();
}

/**
 * Decompiled function f__B4C1_00B8_0007_23BE()
 *
 * @name f__B4C1_00B8_0007_23BE
 * @implements B4C1:00B8:0007:23BE ()
 *
 * Called From: B4C1:00B8:0018:2361
 */
void f__B4C1_00B8_0007_23BE()
{
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00BF); emu_cs = 0x01F7; f__01F7_04E0_0004_06F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C1) { ovl__34C1(0xFF); }
	f__B4C1_00BF_000D_9C7B();
}

/**
 * Decompiled function f__B4C1_00BF_000D_9C7B()
 *
 * @name f__B4C1_00BF_000D_9C7B
 * @implements B4C1:00BF:000D:9C7B ()
 *
 * Called From: B4C1:00BF:0007:23BE
 */
void f__B4C1_00BF_000D_9C7B()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4C1_00CF_004A_A912(); return;
}

/**
 * Decompiled function f__B4C1_00C5_0007_6E6A()
 *
 * @name f__B4C1_00C5_0007_6E6A
 * @implements B4C1:00C5:0007:6E6A ()
 *
 * Called From: B4C1:009E:0008:8C76
 * Called From: B4C1:009E:0002:03E6
 * Called From: B4C1:00A7:0018:2361
 */
void f__B4C1_00C5_0007_6E6A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4C1_00CF_004A_A912(); return;
}

/**
 * Decompiled function f__B4C1_00CC_004D_D90E()
 *
 * @name f__B4C1_00CC_004D_D90E
 * @implements B4C1:00CC:004D:D90E ()
 *
 * Called From: B4C1:00EE:004A:A912
 * Called From: B4C1:00EE:004D:D90E
 */
void f__B4C1_00CC_004D_D90E()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x23E4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x23E2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.cf) { emu_ip = 0x00F0; emu_last_cs = 0xB4C1; emu_last_ip = 0x00E1; emu_last_length = 0x004D; emu_last_crc = 0xD90E; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { f__B4C1_00EA_002F_EF72(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.cf || emu_flags.zf)) { f__B4C1_00F0_0029_BF31(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	if ((emu_flags.sf != emu_flags.of)) { f__B4C1_00CC_004D_D90E(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x00FF; emu_last_cs = 0xB4C1; emu_last_ip = 0x00F4; emu_last_length = 0x004D; emu_last_crc = 0xD90E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { emu_ip = 0x010B; emu_last_cs = 0xB4C1; emu_last_ip = 0x0103; emu_last_length = 0x004D; emu_last_crc = 0xD90E; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x3);
	if (!emu_flags.zf) { emu_ip = 0x011B; emu_last_cs = 0xB4C1; emu_last_ip = 0x0109; emu_last_length = 0x004D; emu_last_crc = 0xD90E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax.x, 0xFF);
	emu_ip = 0x0123; emu_last_cs = 0xB4C1; emu_last_ip = 0x0117; emu_last_length = 0x004D; emu_last_crc = 0xD90E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4C1_00CF_004A_A912()
 *
 * @name f__B4C1_00CF_004A_A912
 * @implements B4C1:00CF:004A:A912 ()
 *
 * Called From: B4C1:00CA:000D:9C7B
 * Called From: B4C1:00CA:0007:6E6A
 */
void f__B4C1_00CF_004A_A912()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x23E4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x23E2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.cf) { emu_ip = 0x00F0; emu_last_cs = 0xB4C1; emu_last_ip = 0x00E1; emu_last_length = 0x004A; emu_last_crc = 0xA912; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x00EA; emu_last_cs = 0xB4C1; emu_last_ip = 0x00E3; emu_last_length = 0x004A; emu_last_crc = 0xA912; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.cf || emu_flags.zf)) { f__B4C1_00F0_0029_BF31(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	if ((emu_flags.sf != emu_flags.of)) { f__B4C1_00CC_004D_D90E(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x00FF; emu_last_cs = 0xB4C1; emu_last_ip = 0x00F4; emu_last_length = 0x004A; emu_last_crc = 0xA912; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { emu_ip = 0x010B; emu_last_cs = 0xB4C1; emu_last_ip = 0x0103; emu_last_length = 0x004A; emu_last_crc = 0xA912; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x3);
	if (!emu_flags.zf) { emu_ip = 0x011B; emu_last_cs = 0xB4C1; emu_last_ip = 0x0109; emu_last_length = 0x004A; emu_last_crc = 0xA912; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax.x, 0xFF);
	emu_ip = 0x0123; emu_last_cs = 0xB4C1; emu_last_ip = 0x0117; emu_last_length = 0x004A; emu_last_crc = 0xA912; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4C1_00EA_002F_EF72()
 *
 * @name f__B4C1_00EA_002F_EF72
 * @implements B4C1:00EA:002F:EF72 ()
 *
 * Called From: B4C1:00E3:004D:D90E
 */
void f__B4C1_00EA_002F_EF72()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x00CC; emu_last_cs = 0xB4C1; emu_last_ip = 0x00EE; emu_last_length = 0x002F; emu_last_crc = 0xEF72; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x00FF; emu_last_cs = 0xB4C1; emu_last_ip = 0x00F4; emu_last_length = 0x002F; emu_last_crc = 0xEF72; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__B4C1_010B_000E_974C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x3);
	if (!emu_flags.zf) { f__B4C1_011B_0008_97BE(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax.x, 0xFF);
	f__B4C1_0123_0006_137A(); return;
}

/**
 * Decompiled function f__B4C1_00F0_0029_BF31()
 *
 * @name f__B4C1_00F0_0029_BF31
 * @implements B4C1:00F0:0029:BF31 ()
 *
 * Called From: B4C1:00E8:004D:D90E
 * Called From: B4C1:00E8:004A:A912
 */
void f__B4C1_00F0_0029_BF31()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__B4C1_00FF_001A_86E5(); return; }
	emu_movw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__B4C1_010B_000E_974C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x3);
	if (!emu_flags.zf) { f__B4C1_011B_0008_97BE(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax.x, 0xFF);
	f__B4C1_0123_0006_137A(); return;
}

/**
 * Decompiled function f__B4C1_00FF_001A_86E5()
 *
 * @name f__B4C1_00FF_001A_86E5
 * @implements B4C1:00FF:001A:86E5 ()
 *
 * Called From: B4C1:00F4:0029:BF31
 */
void f__B4C1_00FF_001A_86E5()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__B4C1_010B_000E_974C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x3);
	if (!emu_flags.zf) { f__B4C1_011B_0008_97BE(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax.x, 0xFF);
	f__B4C1_0123_0006_137A(); return;
}

/**
 * Decompiled function f__B4C1_010B_000E_974C()
 *
 * @name f__B4C1_010B_000E_974C
 * @implements B4C1:010B:000E:974C ()
 *
 * Called From: B4C1:0103:001A:86E5
 * Called From: B4C1:0103:002F:EF72
 * Called From: B4C1:0103:0029:BF31
 */
void f__B4C1_010B_000E_974C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax.x, 0xFF);
	f__B4C1_0123_0006_137A(); return;
}

/**
 * Decompiled function f__B4C1_0114_0005_08E8()
 *
 * @name f__B4C1_0114_0005_08E8
 * @implements B4C1:0114:0005:08E8 ()
 *
 * Called From: B4C1:0121:0008:97BE
 */
void f__B4C1_0114_0005_08E8()
{
	emu_andw(&emu_ax.x, 0xFF);
	f__B4C1_0123_0006_137A(); return;
}

/**
 * Decompiled function f__B4C1_011B_0008_97BE()
 *
 * @name f__B4C1_011B_0008_97BE
 * @implements B4C1:011B:0008:97BE ()
 *
 * Called From: B4C1:0109:001A:86E5
 * Called From: B4C1:0109:002F:EF72
 * Called From: B4C1:0109:0029:BF31
 */
void f__B4C1_011B_0008_97BE()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4C1_0114_0005_08E8(); return;
}

/**
 * Decompiled function f__B4C1_0123_0006_137A()
 *
 * @name f__B4C1_0123_0006_137A
 * @implements B4C1:0123:0006:137A ()
 *
 * Called From: B4C1:0117:000E:974C
 * Called From: B4C1:0117:0005:08E8
 * Called From: B4C1:0117:002F:EF72
 * Called From: B4C1:0117:0029:BF31
 * Called From: B4C1:0117:001A:86E5
 */
void f__B4C1_0123_0006_137A()
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
 * Decompiled function f__B4C1_0129_0028_CDAC()
 *
 * @name f__B4C1_0129_0028_CDAC
 * @implements B4C1:0129:0028:CDAC ()
 *
 * Called From: 34C1:0020:0005:1FCC
 * Called From: 34C1:0020:0005:1C20
 * Called From: 34C1:0020:0005:1EEC
 * Called From: 34C1:0020:0005:1C62
 * Called From: 34C1:0020:0005:1EAA
 * Called From: 34C1:0020:0005:1DF4
 * Called From: 34C1:0020:0005:1FB6
 * Called From: 34C1:0020:0005:1E20
 */
void f__B4C1_0129_0028_CDAC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_mulw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x80);
	emu_adcws(&emu_dx.x, 0x0);
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_movb(&emu_ax.h, emu_dx.l);
	emu_cmpb(&emu_dx.h, 0x0);
	if (emu_flags.zf) { f__B4C1_0149_0008_84DC(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_ip = 0x0151; emu_last_cs = 0xB4C1; emu_last_ip = 0x014F; emu_last_length = 0x0028; emu_last_crc = 0xCDAC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4C1_0149_0008_84DC()
 *
 * @name f__B4C1_0149_0008_84DC
 * @implements B4C1:0149:0008:84DC ()
 *
 * Called From: B4C1:0144:0028:CDAC
 */
void f__B4C1_0149_0008_84DC()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4C1_0151_0004_0F7A(); return;
}

/**
 * Decompiled function f__B4C1_0151_0004_0F7A()
 *
 * @name f__B4C1_0151_0004_0F7A
 * @implements B4C1:0151:0004:0F7A ()
 *
 * Called From: B4C1:014F:0008:84DC
 */
void f__B4C1_0151_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C1_0155_002A_DA9F()
 *
 * @name f__B4C1_0155_002A_DA9F
 * @implements B4C1:0155:002A:DA9F ()
 *
 * Called From: 34C1:002A:0005:192C
 * Called From: 34C1:002A:0005:1BA2
 * Called From: 34C1:002A:0005:196A
 * Called From: 34C1:002A:0005:1A34
 * Called From: 34C1:002A:0005:1876
 * Called From: 34C1:002A:0005:19E0
 */
void f__B4C1_0155_002A_DA9F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_xorb(&emu_dx.h, emu_dx.h);
	emu_movb(&emu_dx.l, emu_ax.h);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_dx.x, 0x0);
	if (emu_flags.zf) { f__B4C1_017F_0014_9A1F(); return; }
	emu_addw(&emu_ax.x, 0x1);
	emu_adcws(&emu_dx.x, 0x0);
	emu_shrw(&emu_dx.x, 0x1);
	emu_rcrw(&emu_ax.x, 0x1);
	emu_addws(&emu_bx.x, 0x1);
	emu_shrw(&emu_bx.x, 0x1);
	f__B4C1_0169_0016_9F01(); return;
}

/**
 * Decompiled function f__B4C1_0169_0016_9F01()
 *
 * @name f__B4C1_0169_0016_9F01
 * @implements B4C1:0169:0016:9F01 ()
 *
 * Called From: B4C1:017D:002A:DA9F
 * Called From: B4C1:017D:0016:9F01
 */
void f__B4C1_0169_0016_9F01()
{
	emu_cmpws(&emu_dx.x, 0x0);
	if (emu_flags.zf) { f__B4C1_017F_0014_9A1F(); return; }
	emu_addw(&emu_ax.x, 0x1);
	emu_adcws(&emu_dx.x, 0x0);
	emu_shrw(&emu_dx.x, 0x1);
	emu_rcrw(&emu_ax.x, 0x1);
	emu_addws(&emu_bx.x, 0x1);
	emu_shrw(&emu_bx.x, 0x1);
	f__B4C1_0169_0016_9F01(); return;
}

/**
 * Decompiled function f__B4C1_017F_0014_9A1F()
 *
 * @name f__B4C1_017F_0014_9A1F
 * @implements B4C1:017F:0014:9A1F ()
 *
 * Called From: B4C1:016C:002A:DA9F
 * Called From: B4C1:016C:0016:9F01
 */
void f__B4C1_017F_0014_9A1F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	emu_cmpws(&emu_bx.x, 0x0);
	if (emu_flags.zf) { f__B4C1_018E_0005_115C(); return; }
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4C1_0193_0004_0F7A(); return;
}

/**
 * Decompiled function f__B4C1_018E_0005_115C()
 *
 * @name f__B4C1_018E_0005_115C
 * @implements B4C1:018E:0005:115C ()
 *
 * Called From: B4C1:0187:0014:9A1F
 */
void f__B4C1_018E_0005_115C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4C1_0193_0004_0F7A(); return;
}

/**
 * Decompiled function f__B4C1_0193_0004_0F7A()
 *
 * @name f__B4C1_0193_0004_0F7A
 * @implements B4C1:0193:0004:0F7A ()
 *
 * Called From: B4C1:0191:0005:115C
 * Called From: B4C1:0191:0014:9A1F
 */
void f__B4C1_0193_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
