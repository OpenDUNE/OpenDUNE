/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4C1_0000_0022_1807()
 *
 * @name f__B4C1_0000_0022_1807
 * @implements B4C1:0000:0022:1807 ()
 *
 * Called From: 34C1:0025:0005:0000
 */
void f__B4C1_0000_0022_1807()
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
	if (!(emu_flags.sf != emu_flags.of)) { f__B4C1_0022_000D_2BD2(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__B4C1_0024_000B_7FB6(); return;
}

/**
 * Decompiled function f__B4C1_0022_000D_2BD2()
 *
 * @name f__B4C1_0022_000D_2BD2
 * @implements B4C1:0022:000D:2BD2 ()
 *
 * Called From: B4C1:001A:0022:1807
 */
void f__B4C1_0022_000D_2BD2()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_push(emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4C1_002F_0062_F44D(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__B4C1_0031_0060_57EF(); return;
}

/**
 * Decompiled function f__B4C1_0024_000B_7FB6()
 *
 * @name f__B4C1_0024_000B_7FB6
 * @implements B4C1:0024:000B:7FB6 ()
 *
 * Called From: B4C1:0020:0022:1807
 */
void f__B4C1_0024_000B_7FB6()
{
	emu_push(emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4C1_002F_0062_F44D(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__B4C1_0031_0060_57EF(); return;
}

/**
 * Decompiled function f__B4C1_002F_0062_F44D()
 *
 * @name f__B4C1_002F_0062_F44D
 * @implements B4C1:002F:0062:F44D ()
 *
 * Called From: B4C1:0027:000D:2BD2
 * Called From: B4C1:0027:000B:7FB6
 */
void f__B4C1_002F_0062_F44D()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, 0x1F40);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4C1_003E_0053_5980(); return; }
	emu_sarw(&emu_si, 0x1);
	emu_sarw(&emu_di, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4C1_0051_0040_2D5F(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x2);
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4C1_005F_0032_1BDF(); return; }
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
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x00A0; emu_last_cs = 0xB4C1; emu_last_ip = 0x007C; emu_last_length = 0x0062; emu_last_crc = 0xF44D; emu_call(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x009E; emu_last_cs = 0xB4C1; emu_last_ip = 0x0080; emu_last_length = 0x0062; emu_last_crc = 0xF44D; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_movb(&emu_cx.l, 0x8);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0091); emu_cs = 0x01F7; emu_ip = 0x058E; emu_last_cs = 0xB4C1; emu_last_ip = 0x008C; emu_last_length = 0x0062; emu_last_crc = 0xF44D; emu_call();
	f__B4C1_0091_0007_8446();
}

/**
 * Decompiled function f__B4C1_0031_0060_57EF()
 *
 * @name f__B4C1_0031_0060_57EF
 * @implements B4C1:0031:0060:57EF ()
 *
 * Called From: B4C1:002D:000D:2BD2
 * Called From: B4C1:002D:000B:7FB6
 */
void f__B4C1_0031_0060_57EF()
{
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, 0x1F40);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4C1_003E_0053_5980(); return; }
	emu_sarw(&emu_si, 0x1);
	emu_sarw(&emu_di, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0051; emu_last_cs = 0xB4C1; emu_last_ip = 0x0045; emu_last_length = 0x0060; emu_last_crc = 0x57EF; emu_call(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x2);
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4C1_005F_0032_1BDF(); return; }
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
	if ((emu_flags.sf != emu_flags.of)) { f__B4C1_00A0_0018_42F5(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x009E; emu_last_cs = 0xB4C1; emu_last_ip = 0x0080; emu_last_length = 0x0060; emu_last_crc = 0x57EF; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_movb(&emu_cx.l, 0x8);
	emu_push(emu_cs); emu_push(0x0091); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C1) { ovl__34C1(0xFF); }
	f__B4C1_0091_0007_8446();
}

/**
 * Decompiled function f__B4C1_003E_0053_5980()
 *
 * @name f__B4C1_003E_0053_5980
 * @implements B4C1:003E:0053:5980 ()
 *
 * Called From: B4C1:0038:0062:F44D
 * Called From: B4C1:0038:0060:57EF
 */
void f__B4C1_003E_0053_5980()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4C1_0051_0040_2D5F(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x2);
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4C1_005F_0032_1BDF(); return; }
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
	if ((emu_flags.sf != emu_flags.of)) { f__B4C1_00A0_0018_42F5(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4C1_009E_0002_D2BA(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_movb(&emu_cx.l, 0x8);
	emu_push(emu_cs); emu_push(0x0091); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C1) { ovl__34C1(0xFF); }
	f__B4C1_0091_0007_8446();
}

/**
 * Decompiled function f__B4C1_0051_0040_2D5F()
 *
 * @name f__B4C1_0051_0040_2D5F
 * @implements B4C1:0051:0040:2D5F ()
 *
 * Called From: B4C1:0045:0053:5980
 * Called From: B4C1:0045:0062:F44D
 */
void f__B4C1_0051_0040_2D5F()
{
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4C1_005F_0032_1BDF(); return; }
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
	if ((emu_flags.sf != emu_flags.of)) { f__B4C1_00A0_0018_42F5(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x009E; emu_last_cs = 0xB4C1; emu_last_ip = 0x0080; emu_last_length = 0x0040; emu_last_crc = 0x2D5F; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_movb(&emu_cx.l, 0x8);
	emu_push(emu_cs); emu_push(0x0091); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C1) { ovl__34C1(0xFF); }
	f__B4C1_0091_0007_8446();
}

/**
 * Decompiled function f__B4C1_005F_0032_1BDF()
 *
 * @name f__B4C1_005F_0032_1BDF
 * @implements B4C1:005F:0032:1BDF ()
 *
 * Called From: B4C1:0053:0040:2D5F
 * Called From: B4C1:0053:0053:5980
 * Called From: B4C1:0053:0060:57EF
 * Called From: B4C1:0053:0062:F44D
 */
void f__B4C1_005F_0032_1BDF()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x23DA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x7FFF);
	emu_cmpw(&emu_si, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__B4C1_00A0_0018_42F5(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4C1_009E_0002_D2BA(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_movb(&emu_cx.l, 0x8);
	emu_push(emu_cs); emu_push(0x0091); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C1) { ovl__34C1(0xFF); }
	f__B4C1_0091_0007_8446();
}

/**
 * Decompiled function f__B4C1_0091_0007_8446()
 *
 * @name f__B4C1_0091_0007_8446
 * @implements B4C1:0091:0007:8446 ()
 *
 * Called From: B4C1:0091:0040:2D5F
 * Called From: B4C1:0091:0032:1BDF
 * Called From: B4C1:0091:0053:5980
 * Called From: B4C1:0091:0060:57EF
 */
void f__B4C1_0091_0007_8446()
{
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0098); emu_cs = 0x01F7; f__01F7_04E0_0004_E219();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C1) { ovl__34C1(0xFF); }
	f__B4C1_0098_0008_D019();
}

/**
 * Decompiled function f__B4C1_0098_0008_D019()
 *
 * @name f__B4C1_0098_0008_D019
 * @implements B4C1:0098:0008:D019 ()
 *
 * Called From: B4C1:0098:0007:8446
 */
void f__B4C1_0098_0008_D019()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	f__B4C1_00C5_0007_DFC5(); return;
}

/**
 * Decompiled function f__B4C1_009E_0002_D2BA()
 *
 * @name f__B4C1_009E_0002_D2BA
 * @implements B4C1:009E:0002:D2BA ()
 *
 * Called From: B4C1:0080:0032:1BDF
 * Called From: B4C1:0080:0053:5980
 */
void f__B4C1_009E_0002_D2BA()
{
	f__B4C1_00C5_0007_DFC5(); return;
}

/**
 * Decompiled function f__B4C1_00A0_0018_42F5()
 *
 * @name f__B4C1_00A0_0018_42F5
 * @implements B4C1:00A0:0018:42F5 ()
 *
 * Called From: B4C1:007C:0032:1BDF
 * Called From: B4C1:007C:0040:2D5F
 * Called From: B4C1:007C:0053:5980
 * Called From: B4C1:007C:0060:57EF
 */
void f__B4C1_00A0_0018_42F5()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4C1_00C5_0007_DFC5(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_cwd();
	emu_movb(&emu_cx.l, 0x8);
	emu_push(emu_cs); emu_push(0x00B8); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C1) { ovl__34C1(0xFF); }
	f__B4C1_00B8_0007_8446();
}

/**
 * Decompiled function f__B4C1_00B8_0007_8446()
 *
 * @name f__B4C1_00B8_0007_8446
 * @implements B4C1:00B8:0007:8446 ()
 *
 * Called From: B4C1:00B8:0018:42F5
 */
void f__B4C1_00B8_0007_8446()
{
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00BF); emu_cs = 0x01F7; f__01F7_04E0_0004_E219();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C1) { ovl__34C1(0xFF); }
	f__B4C1_00BF_000D_CADD();
}

/**
 * Decompiled function f__B4C1_00BF_000D_CADD()
 *
 * @name f__B4C1_00BF_000D_CADD
 * @implements B4C1:00BF:000D:CADD ()
 *
 * Called From: B4C1:00BF:0007:8446
 */
void f__B4C1_00BF_000D_CADD()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4C1_00CF_004A_D29C(); return;
}

/**
 * Decompiled function f__B4C1_00C5_0007_DFC5()
 *
 * @name f__B4C1_00C5_0007_DFC5
 * @implements B4C1:00C5:0007:DFC5 ()
 *
 * Called From: B4C1:009E:0008:D019
 * Called From: B4C1:009E:0002:D2BA
 * Called From: B4C1:00A7:0018:42F5
 */
void f__B4C1_00C5_0007_DFC5()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4C1_00CF_004A_D29C(); return;
}

/**
 * Decompiled function f__B4C1_00CC_004D_EEE4()
 *
 * @name f__B4C1_00CC_004D_EEE4
 * @implements B4C1:00CC:004D:EEE4 ()
 *
 * Called From: B4C1:00EE:004A:D29C
 * Called From: B4C1:00EE:004D:EEE4
 * Called From: B4C1:00EE:002F:4ABE
 */
void f__B4C1_00CC_004D_EEE4()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x23E4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x23E2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x00F0; emu_last_cs = 0xB4C1; emu_last_ip = 0x00E1; emu_last_length = 0x004D; emu_last_crc = 0xEEE4; emu_call(); return; }
	if (!(emu_flags.cf || emu_flags.zf)) { f__B4C1_00EA_002F_4ABE(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.cf || emu_flags.zf)) { f__B4C1_00F0_0029_084F(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	if ((emu_flags.sf != emu_flags.of)) { f__B4C1_00CC_004D_EEE4(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__B4C1_00FF_001A_70F2(); return; }
	emu_movw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__B4C1_010B_000E_6A3C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x3);
	if (!emu_flags.zf) { f__B4C1_011B_0008_ACE9(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax.x, 0xFF);
	/* Unresolved jump */ emu_ip = 0x0123; emu_last_cs = 0xB4C1; emu_last_ip = 0x0117; emu_last_length = 0x004D; emu_last_crc = 0xEEE4; emu_call();
}

/**
 * Decompiled function f__B4C1_00CF_004A_D29C()
 *
 * @name f__B4C1_00CF_004A_D29C
 * @implements B4C1:00CF:004A:D29C ()
 *
 * Called From: B4C1:00CA:000D:CADD
 * Called From: B4C1:00CA:0007:DFC5
 */
void f__B4C1_00CF_004A_D29C()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x23E4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x23E2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.cf) { f__B4C1_00F0_0029_084F(); return; }
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x00EA; emu_last_cs = 0xB4C1; emu_last_ip = 0x00E3; emu_last_length = 0x004A; emu_last_crc = 0xD29C; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.cf || emu_flags.zf)) { f__B4C1_00F0_0029_084F(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	if ((emu_flags.sf != emu_flags.of)) { f__B4C1_00CC_004D_EEE4(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00FF; emu_last_cs = 0xB4C1; emu_last_ip = 0x00F4; emu_last_length = 0x004A; emu_last_crc = 0xD29C; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x010B; emu_last_cs = 0xB4C1; emu_last_ip = 0x0103; emu_last_length = 0x004A; emu_last_crc = 0xD29C; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x3);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x011B; emu_last_cs = 0xB4C1; emu_last_ip = 0x0109; emu_last_length = 0x004A; emu_last_crc = 0xD29C; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax.x, 0xFF);
	f__B4C1_0123_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4C1_00EA_002F_4ABE()
 *
 * @name f__B4C1_00EA_002F_4ABE
 * @implements B4C1:00EA:002F:4ABE ()
 *
 * Called From: B4C1:00E3:004D:EEE4
 */
void f__B4C1_00EA_002F_4ABE()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	if ((emu_flags.sf != emu_flags.of)) { f__B4C1_00CC_004D_EEE4(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__B4C1_00FF_001A_70F2(); return; }
	emu_movw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__B4C1_010B_000E_6A3C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x3);
	if (!emu_flags.zf) { f__B4C1_011B_0008_ACE9(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax.x, 0xFF);
	f__B4C1_0123_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4C1_00F0_0029_084F()
 *
 * @name f__B4C1_00F0_0029_084F
 * @implements B4C1:00F0:0029:084F ()
 *
 * Called From: B4C1:00E1:004A:D29C
 * Called From: B4C1:00E8:004D:EEE4
 * Called From: B4C1:00E8:004A:D29C
 */
void f__B4C1_00F0_0029_084F()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__B4C1_00FF_001A_70F2(); return; }
	emu_movw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__B4C1_010B_000E_6A3C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x3);
	if (!emu_flags.zf) { f__B4C1_011B_0008_ACE9(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax.x, 0xFF);
	f__B4C1_0123_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4C1_00FF_001A_70F2()
 *
 * @name f__B4C1_00FF_001A_70F2
 * @implements B4C1:00FF:001A:70F2 ()
 *
 * Called From: B4C1:00F4:0029:084F
 * Called From: B4C1:00F4:002F:4ABE
 * Called From: B4C1:00F4:004D:EEE4
 */
void f__B4C1_00FF_001A_70F2()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__B4C1_010B_000E_6A3C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x3);
	if (!emu_flags.zf) { f__B4C1_011B_0008_ACE9(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax.x, 0xFF);
	f__B4C1_0123_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4C1_010B_000E_6A3C()
 *
 * @name f__B4C1_010B_000E_6A3C
 * @implements B4C1:010B:000E:6A3C ()
 *
 * Called From: B4C1:0103:001A:70F2
 * Called From: B4C1:0103:0029:084F
 * Called From: B4C1:0103:002F:4ABE
 * Called From: B4C1:0103:004D:EEE4
 */
void f__B4C1_010B_000E_6A3C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, 0x40);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax.x, 0xFF);
	f__B4C1_0123_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4C1_0114_0005_341D()
 *
 * @name f__B4C1_0114_0005_341D
 * @implements B4C1:0114:0005:341D ()
 *
 * Called From: B4C1:0121:0008:ACE9
 */
void f__B4C1_0114_0005_341D()
{
	emu_andw(&emu_ax.x, 0xFF);
	f__B4C1_0123_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4C1_011B_0008_ACE9()
 *
 * @name f__B4C1_011B_0008_ACE9
 * @implements B4C1:011B:0008:ACE9 ()
 *
 * Called From: B4C1:0109:001A:70F2
 * Called From: B4C1:0109:0029:084F
 * Called From: B4C1:0109:002F:4ABE
 * Called From: B4C1:0109:004D:EEE4
 */
void f__B4C1_011B_0008_ACE9()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4C1_0114_0005_341D(); return;
}

/**
 * Decompiled function f__B4C1_0123_0006_F7CE()
 *
 * @name f__B4C1_0123_0006_F7CE
 * @implements B4C1:0123:0006:F7CE ()
 *
 * Called From: B4C1:0117:000E:6A3C
 * Called From: B4C1:0117:0005:341D
 * Called From: B4C1:0117:0029:084F
 * Called From: B4C1:0117:001A:70F2
 * Called From: B4C1:0117:002F:4ABE
 * Called From: B4C1:0117:004A:D29C
 */
void f__B4C1_0123_0006_F7CE()
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
 * Decompiled function f__B4C1_0129_0028_FB8E()
 *
 * @name f__B4C1_0129_0028_FB8E
 * @implements B4C1:0129:0028:FB8E ()
 *
 * Called From: 34C1:0020:0005:0000
 */
void f__B4C1_0129_0028_FB8E()
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
	if (emu_flags.zf) { f__B4C1_0149_0008_CA29(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	/* Unresolved jump */ emu_ip = 0x0151; emu_last_cs = 0xB4C1; emu_last_ip = 0x014F; emu_last_length = 0x0028; emu_last_crc = 0xFB8E; emu_call();
}

/**
 * Decompiled function f__B4C1_0149_0008_CA29()
 *
 * @name f__B4C1_0149_0008_CA29
 * @implements B4C1:0149:0008:CA29 ()
 *
 * Called From: B4C1:0144:0028:FB8E
 */
void f__B4C1_0149_0008_CA29()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4C1_0151_0004_893F(); return;
}

/**
 * Decompiled function f__B4C1_0151_0004_893F()
 *
 * @name f__B4C1_0151_0004_893F
 * @implements B4C1:0151:0004:893F ()
 *
 * Called From: B4C1:014F:0008:CA29
 */
void f__B4C1_0151_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C1_0155_002A_AC43()
 *
 * @name f__B4C1_0155_002A_AC43
 * @implements B4C1:0155:002A:AC43 ()
 *
 * Called From: 34C1:002A:0005:0000
 */
void f__B4C1_0155_002A_AC43()
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
	if (emu_flags.zf) { f__B4C1_017F_0014_52B1(); return; }
	emu_addw(&emu_ax.x, 0x1);
	emu_adcws(&emu_dx.x, 0x0);
	emu_shrw(&emu_dx.x, 0x1);
	emu_rcrw(&emu_ax.x, 0x1);
	emu_addws(&emu_bx.x, 0x1);
	emu_shrw(&emu_bx.x, 0x1);
	f__B4C1_0169_0016_2275(); return;
}

/**
 * Decompiled function f__B4C1_0169_0016_2275()
 *
 * @name f__B4C1_0169_0016_2275
 * @implements B4C1:0169:0016:2275 ()
 *
 * Called From: B4C1:017D:002A:AC43
 * Called From: B4C1:017D:0016:2275
 */
void f__B4C1_0169_0016_2275()
{
	emu_cmpws(&emu_dx.x, 0x0);
	if (emu_flags.zf) { f__B4C1_017F_0014_52B1(); return; }
	emu_addw(&emu_ax.x, 0x1);
	emu_adcws(&emu_dx.x, 0x0);
	emu_shrw(&emu_dx.x, 0x1);
	emu_rcrw(&emu_ax.x, 0x1);
	emu_addws(&emu_bx.x, 0x1);
	emu_shrw(&emu_bx.x, 0x1);
	f__B4C1_0169_0016_2275(); return;
}

/**
 * Decompiled function f__B4C1_017F_0014_52B1()
 *
 * @name f__B4C1_017F_0014_52B1
 * @implements B4C1:017F:0014:52B1 ()
 *
 * Called From: B4C1:016C:002A:AC43
 * Called From: B4C1:016C:0016:2275
 */
void f__B4C1_017F_0014_52B1()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	emu_cmpws(&emu_bx.x, 0x0);
	if (emu_flags.zf) { f__B4C1_018E_0005_BBA6(); return; }
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4C1_0193_0004_893F(); return;
}

/**
 * Decompiled function f__B4C1_018E_0005_BBA6()
 *
 * @name f__B4C1_018E_0005_BBA6
 * @implements B4C1:018E:0005:BBA6 ()
 *
 * Called From: B4C1:0187:0014:52B1
 */
void f__B4C1_018E_0005_BBA6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4C1_0193_0004_893F(); return;
}

/**
 * Decompiled function f__B4C1_0193_0004_893F()
 *
 * @name f__B4C1_0193_0004_893F
 * @implements B4C1:0193:0004:893F ()
 *
 * Called From: B4C1:0191:0005:BBA6
 * Called From: B4C1:0191:0014:52B1
 */
void f__B4C1_0193_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
