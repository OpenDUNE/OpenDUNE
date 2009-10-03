/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__176C_000E_000E_633D()
 *
 * @name f__176C_000E_000E_633D
 * @implements 176C:000E:000E:633D ()
 *
 * Called From: 06F7:0275:0032:1BCC
 * Called From: 0972:1699:000F:4845
 * Called From: 0AEC:03EA:0013:2700
 * Called From: 1423:0B8C:001F:C162
 * Called From: 176C:07B4:002F:3687
 * Called From: 176C:07B4:0037:8F26
 * Called From: 176C:1C44:000D:7589
 * Called From: 176C:1C63:0017:E375
 * Called From: 176C:2A7B:0028:B0C0
 * Called From: 1A34:0206:001A:B3E0
 * Called From: 1A34:0B48:000B:1D44
 * Called From: 1A34:0B48:0012:C7F2
 * Called From: 1A34:0CB7:000F:8015
 * Called From: 1A34:0CB7:0010:804C
 * Called From: 1A34:0DE4:0029:C1D4
 * Called From: 1A34:1DFC:002D:D435
 * Called From: 1A34:2A73:000B:F53C
 * Called From: B4B5:05B0:001F:757D
 */
void f__176C_000E_000E_633D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__176C_001C_001D_EB93(); return; }
	/* Unresolved jump */ emu_ip = 0x0109; emu_last_cs = 0x176C; emu_last_ip = 0x0019; emu_last_length = 0x000E; emu_last_crc = 0x633D; emu_call();
}

/**
 * Decompiled function f__176C_001C_001D_EB93()
 *
 * @name f__176C_001C_001D_EB93
 * @implements 176C:001C:001D:EB93 ()
 *
 * Called From: 176C:0017:000E:633D
 */
void f__176C_001C_001D_EB93()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0xD);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0036; emu_last_cs = 0x176C; emu_last_ip = 0x0024; emu_last_length = 0x001D; emu_last_crc = 0xEB93; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0xA);
	if (emu_flags.zf) { f__176C_0036_0003_1D14(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFF);
	if (!emu_flags.zf) { f__176C_0039_0025_526C(); return; }
	f__176C_0109_0002_2597(); return;
}

/**
 * Decompiled function f__176C_0036_0003_1D14()
 *
 * @name f__176C_0036_0003_1D14
 * @implements 176C:0036:0003:1D14 ()
 *
 * Called From: 176C:002E:001D:EB93
 */
void f__176C_0036_0003_1D14()
{
	f__176C_0109_0002_2597(); return;
}

/**
 * Decompiled function f__176C_0039_0025_526C()
 *
 * @name f__176C_0039_0025_526C
 * @implements 176C:0039:0025:526C ()
 *
 * Called From: 176C:0034:001D:EB93
 */
void f__176C_0039_0025_526C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x74));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__176C_0061_001A_F455(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__176C_007B_003E_BA74(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x005E; emu_last_cs = 0x176C; emu_last_ip = 0x0059; emu_last_length = 0x0025; emu_last_crc = 0x526C; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x00E0; emu_last_cs = 0x176C; emu_last_ip = 0x005B; emu_last_length = 0x0025; emu_last_crc = 0x526C; emu_call();
}

/**
 * Decompiled function f__176C_0061_001A_F455()
 *
 * @name f__176C_0061_001A_F455
 * @implements 176C:0061:001A:F455 ()
 *
 * Called From: 176C:004F:0025:526C
 */
void f__176C_0061_001A_F455()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	if (emu_flags.zf) { f__176C_007B_003E_BA74(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x50), emu_ax.l);
	f__176C_0109_0002_2597(); return;
}

/**
 * Decompiled function f__176C_007B_003E_BA74()
 *
 * @name f__176C_007B_003E_BA74
 * @implements 176C:007B:003E:BA74 ()
 *
 * Called From: 176C:0054:0025:526C
 * Called From: 176C:006C:001A:F455
 */
void f__176C_007B_003E_BA74()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x50), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4B), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x49), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x0);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3902);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00B9); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	f__176C_00B9_0025_6898();
}

/**
 * Decompiled function f__176C_00B9_0025_6898()
 *
 * @name f__176C_00B9_0025_6898
 * @implements 176C:00B9:0025:6898 ()
 *
 * Called From: 176C:00B9:003E:BA74
 */
void f__176C_00B9_0025_6898()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1E), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00DE); emu_cs = 0x15C2; f__15C2_03D9_0011_D202();
	f__176C_00DE_0002_D13A();
}

/**
 * Decompiled function f__176C_00DE_0002_D13A()
 *
 * @name f__176C_00DE_0002_D13A
 * @implements 176C:00DE:0002:D13A ()
 *
 * Called From: 176C:00DE:0025:6898
 */
void f__176C_00DE_0002_D13A()
{
	f__176C_0102_0005_85EE(); return;
}

/**
 * Decompiled function f__176C_0102_0005_85EE()
 *
 * @name f__176C_0102_0005_85EE
 * @implements 176C:0102:0005:85EE ()
 *
 * Called From: 176C:00DE:0002:D13A
 */
void f__176C_0102_0005_85EE()
{
	emu_addws(&emu_sp, 0x6);
	f__176C_0109_0002_2597(); return;
}

/**
 * Decompiled function f__176C_0109_0002_2597()
 *
 * @name f__176C_0109_0002_2597
 * @implements 176C:0109:0002:2597 ()
 *
 * Called From: 176C:0036:001D:EB93
 * Called From: 176C:0036:0003:1D14
 * Called From: 176C:0078:001A:F455
 * Called From: 176C:0105:0005:85EE
 */
void f__176C_0109_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_010B_002F_7FAE()
 *
 * @name f__176C_010B_002F_7FAE
 * @implements 176C:010B:002F:7FAE ()
 *
 * Called From: 0642:03C2:0005:BF6B
 */
void f__176C_010B_002F_7FAE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__176C_013A_0055_6C8A(); return; }
	f__176C_07E2_0006_F7CE(); return;
}

/**
 * Decompiled function f__176C_013A_0055_6C8A()
 *
 * @name f__176C_013A_0055_6C8A
 * @implements 176C:013A:0055:6C8A ()
 *
 * Called From: 176C:0135:002F:7FAE
 */
void f__176C_013A_0055_6C8A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6272));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6270));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0166_0029_F66B(); return; }
	if (!emu_flags.zf) { f__176C_014F_0040_7270(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0166_0029_F66B(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6272), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6270), emu_dx.x);
	emu_movw(&emu_si, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6276));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6274));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x01AA; emu_last_cs = 0x176C; emu_last_ip = 0x0171; emu_last_length = 0x0055; emu_last_crc = 0x6C8A; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x017B; emu_last_cs = 0x176C; emu_last_ip = 0x0173; emu_last_length = 0x0055; emu_last_crc = 0x6C8A; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_01AA_00F8_FA80(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x018F); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	f__176C_018F_0113_0405();
}

/**
 * Decompiled function f__176C_014F_0040_7270()
 *
 * @name f__176C_014F_0040_7270
 * @implements 176C:014F:0040:7270 ()
 *
 * Called From: 176C:0147:0055:6C8A
 */
void f__176C_014F_0040_7270()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6272), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6270), emu_dx.x);
	emu_movw(&emu_si, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6276));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6274));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x01AA; emu_last_cs = 0x176C; emu_last_ip = 0x0171; emu_last_length = 0x0040; emu_last_crc = 0x7270; emu_call(); return; }
	if (!emu_flags.zf) { f__176C_017B_0014_5245(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x01AA; emu_last_cs = 0x176C; emu_last_ip = 0x0179; emu_last_length = 0x0040; emu_last_crc = 0x7270; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x018F); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	f__176C_018F_0113_0405();
}

/**
 * Decompiled function f__176C_0166_0029_F66B()
 *
 * @name f__176C_0166_0029_F66B
 * @implements 176C:0166:0029:F66B ()
 *
 * Called From: 176C:0145:0055:6C8A
 * Called From: 176C:014D:0055:6C8A
 */
void f__176C_0166_0029_F66B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6276));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6274));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_01AA_00F8_FA80(); return; }
	if (!emu_flags.zf) { f__176C_017B_0014_5245(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_01AA_00F8_FA80(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x018F); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	f__176C_018F_0113_0405();
}

/**
 * Decompiled function f__176C_017B_0014_5245()
 *
 * @name f__176C_017B_0014_5245
 * @implements 176C:017B:0014:5245 ()
 *
 * Called From: 176C:0173:0040:7270
 * Called From: 176C:0173:0029:F66B
 */
void f__176C_017B_0014_5245()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x018F); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	f__176C_018F_0113_0405();
}

/**
 * Decompiled function f__176C_018F_0113_0405()
 *
 * @name f__176C_018F_0113_0405
 * @implements 176C:018F:0113:0405 ()
 *
 * Called From: 176C:018F:0014:5245
 * Called From: 176C:018F:0029:F66B
 * Called From: 176C:018F:0055:6C8A
 */
void f__176C_018F_0113_0405()
{
	emu_addws(&emu_sp, 0x8);
	emu_cwd();
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_adcw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6276), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6274), emu_cx.x);
	emu_movw(&emu_di, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x627A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6278));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x01D8; emu_last_cs = 0x176C; emu_last_ip = 0x01B5; emu_last_length = 0x0113; emu_last_crc = 0x0405; emu_call(); return; }
	if (!emu_flags.zf) { f__176C_01BF_00E3_C733(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_01D8_00CA_9CA5(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x627A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6278), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x627E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x627C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0206_009C_C4F1(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01ED; emu_last_cs = 0x176C; emu_last_ip = 0x01E5; emu_last_length = 0x0113; emu_last_crc = 0x0405; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0206_009C_C4F1(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x14);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x627E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x627C), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6282));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6280));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0234; emu_last_cs = 0x176C; emu_last_ip = 0x0211; emu_last_length = 0x0113; emu_last_crc = 0x0405; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x021B; emu_last_cs = 0x176C; emu_last_ip = 0x0213; emu_last_length = 0x0113; emu_last_crc = 0x0405; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0234_006E_13E8(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6282), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6280), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6286));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6284));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0262; emu_last_cs = 0x176C; emu_last_ip = 0x023F; emu_last_length = 0x0113; emu_last_crc = 0x0405; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0249; emu_last_cs = 0x176C; emu_last_ip = 0x0241; emu_last_length = 0x0113; emu_last_crc = 0x0405; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0262_0040_5621(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6286), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6284), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x628A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6288));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0290; emu_last_cs = 0x176C; emu_last_ip = 0x026D; emu_last_length = 0x0113; emu_last_crc = 0x0405; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0277; emu_last_cs = 0x176C; emu_last_ip = 0x026F; emu_last_length = 0x0113; emu_last_crc = 0x0405; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0290_0012_9B52(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x628A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6288), emu_dx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; f__0FE4_0243_003A_D5F2();
	f__176C_02A2_0006_558B();
}

/**
 * Decompiled function f__176C_01AA_00F8_FA80()
 *
 * @name f__176C_01AA_00F8_FA80
 * @implements 176C:01AA:00F8:FA80 ()
 *
 * Called From: 176C:0171:0029:F66B
 * Called From: 176C:0179:0029:F66B
 * Called From: 176C:0179:0055:6C8A
 */
void f__176C_01AA_00F8_FA80()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x627A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6278));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_01D8_00CA_9CA5(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01BF; emu_last_cs = 0x176C; emu_last_ip = 0x01B7; emu_last_length = 0x00F8; emu_last_crc = 0xFA80; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_01D8_00CA_9CA5(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x627A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6278), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x627E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x627C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0206; emu_last_cs = 0x176C; emu_last_ip = 0x01E3; emu_last_length = 0x00F8; emu_last_crc = 0xFA80; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01ED; emu_last_cs = 0x176C; emu_last_ip = 0x01E5; emu_last_length = 0x00F8; emu_last_crc = 0xFA80; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0206_009C_C4F1(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x14);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x627E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x627C), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6282));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6280));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0234; emu_last_cs = 0x176C; emu_last_ip = 0x0211; emu_last_length = 0x00F8; emu_last_crc = 0xFA80; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x021B; emu_last_cs = 0x176C; emu_last_ip = 0x0213; emu_last_length = 0x00F8; emu_last_crc = 0xFA80; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0234_006E_13E8(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6282), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6280), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6286));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6284));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0262; emu_last_cs = 0x176C; emu_last_ip = 0x023F; emu_last_length = 0x00F8; emu_last_crc = 0xFA80; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0249; emu_last_cs = 0x176C; emu_last_ip = 0x0241; emu_last_length = 0x00F8; emu_last_crc = 0xFA80; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0262_0040_5621(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6286), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6284), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x628A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6288));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0290; emu_last_cs = 0x176C; emu_last_ip = 0x026D; emu_last_length = 0x00F8; emu_last_crc = 0xFA80; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0277; emu_last_cs = 0x176C; emu_last_ip = 0x026F; emu_last_length = 0x00F8; emu_last_crc = 0xFA80; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0290_0012_9B52(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x628A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6288), emu_dx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; f__0FE4_0243_003A_D5F2();
	f__176C_02A2_0006_558B();
}

/**
 * Decompiled function f__176C_01BF_00E3_C733()
 *
 * @name f__176C_01BF_00E3_C733
 * @implements 176C:01BF:00E3:C733 ()
 *
 * Called From: 176C:01B7:0113:0405
 */
void f__176C_01BF_00E3_C733()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x627A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6278), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x627E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x627C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0206; emu_last_cs = 0x176C; emu_last_ip = 0x01E3; emu_last_length = 0x00E3; emu_last_crc = 0xC733; emu_call(); return; }
	if (!emu_flags.zf) { f__176C_01ED_00B5_53EB(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0206; emu_last_cs = 0x176C; emu_last_ip = 0x01EB; emu_last_length = 0x00E3; emu_last_crc = 0xC733; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x14);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x627E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x627C), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6282));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6280));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0234; emu_last_cs = 0x176C; emu_last_ip = 0x0211; emu_last_length = 0x00E3; emu_last_crc = 0xC733; emu_call(); return; }
	if (!emu_flags.zf) { f__176C_021B_0087_F6C5(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0234; emu_last_cs = 0x176C; emu_last_ip = 0x0219; emu_last_length = 0x00E3; emu_last_crc = 0xC733; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6282), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6280), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6286));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6284));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0262; emu_last_cs = 0x176C; emu_last_ip = 0x023F; emu_last_length = 0x00E3; emu_last_crc = 0xC733; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0249; emu_last_cs = 0x176C; emu_last_ip = 0x0241; emu_last_length = 0x00E3; emu_last_crc = 0xC733; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0262; emu_last_cs = 0x176C; emu_last_ip = 0x0247; emu_last_length = 0x00E3; emu_last_crc = 0xC733; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6286), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6284), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x628A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6288));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0290; emu_last_cs = 0x176C; emu_last_ip = 0x026D; emu_last_length = 0x00E3; emu_last_crc = 0xC733; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0277; emu_last_cs = 0x176C; emu_last_ip = 0x026F; emu_last_length = 0x00E3; emu_last_crc = 0xC733; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0290; emu_last_cs = 0x176C; emu_last_ip = 0x0275; emu_last_length = 0x00E3; emu_last_crc = 0xC733; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x628A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6288), emu_dx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; f__0FE4_0243_003A_D5F2();
	f__176C_02A2_0006_558B();
}

/**
 * Decompiled function f__176C_01D8_00CA_9CA5()
 *
 * @name f__176C_01D8_00CA_9CA5
 * @implements 176C:01D8:00CA:9CA5 ()
 *
 * Called From: 176C:01B5:00F8:FA80
 * Called From: 176C:01BD:00F8:FA80
 * Called From: 176C:01BD:0113:0405
 */
void f__176C_01D8_00CA_9CA5()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x627E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x627C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0206_009C_C4F1(); return; }
	if (!emu_flags.zf) { f__176C_01ED_00B5_53EB(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0206_009C_C4F1(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x14);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x627E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x627C), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6282));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6280));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0234; emu_last_cs = 0x176C; emu_last_ip = 0x0211; emu_last_length = 0x00CA; emu_last_crc = 0x9CA5; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x021B; emu_last_cs = 0x176C; emu_last_ip = 0x0213; emu_last_length = 0x00CA; emu_last_crc = 0x9CA5; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0234_006E_13E8(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6282), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6280), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6286));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6284));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0262; emu_last_cs = 0x176C; emu_last_ip = 0x023F; emu_last_length = 0x00CA; emu_last_crc = 0x9CA5; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0249; emu_last_cs = 0x176C; emu_last_ip = 0x0241; emu_last_length = 0x00CA; emu_last_crc = 0x9CA5; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0262_0040_5621(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6286), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6284), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x628A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6288));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0290; emu_last_cs = 0x176C; emu_last_ip = 0x026D; emu_last_length = 0x00CA; emu_last_crc = 0x9CA5; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0277; emu_last_cs = 0x176C; emu_last_ip = 0x026F; emu_last_length = 0x00CA; emu_last_crc = 0x9CA5; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0290_0012_9B52(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x628A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6288), emu_dx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; f__0FE4_0243_003A_D5F2();
	f__176C_02A2_0006_558B();
}

/**
 * Decompiled function f__176C_01ED_00B5_53EB()
 *
 * @name f__176C_01ED_00B5_53EB
 * @implements 176C:01ED:00B5:53EB ()
 *
 * Called From: 176C:01E5:00CA:9CA5
 * Called From: 176C:01E5:00E3:C733
 */
void f__176C_01ED_00B5_53EB()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x14);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x627E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x627C), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6282));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6280));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0234; emu_last_cs = 0x176C; emu_last_ip = 0x0211; emu_last_length = 0x00B5; emu_last_crc = 0x53EB; emu_call(); return; }
	if (!emu_flags.zf) { f__176C_021B_0087_F6C5(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0234; emu_last_cs = 0x176C; emu_last_ip = 0x0219; emu_last_length = 0x00B5; emu_last_crc = 0x53EB; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6282), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6280), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6286));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6284));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0262; emu_last_cs = 0x176C; emu_last_ip = 0x023F; emu_last_length = 0x00B5; emu_last_crc = 0x53EB; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0249; emu_last_cs = 0x176C; emu_last_ip = 0x0241; emu_last_length = 0x00B5; emu_last_crc = 0x53EB; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0262; emu_last_cs = 0x176C; emu_last_ip = 0x0247; emu_last_length = 0x00B5; emu_last_crc = 0x53EB; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6286), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6284), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x628A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6288));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0290; emu_last_cs = 0x176C; emu_last_ip = 0x026D; emu_last_length = 0x00B5; emu_last_crc = 0x53EB; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0277; emu_last_cs = 0x176C; emu_last_ip = 0x026F; emu_last_length = 0x00B5; emu_last_crc = 0x53EB; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0290_0012_9B52(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x628A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6288), emu_dx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; emu_ip = 0x0243; emu_last_cs = 0x176C; emu_last_ip = 0x029D; emu_last_length = 0x00B5; emu_last_crc = 0x53EB; emu_call();
	f__176C_02A2_0006_558B();
}

/**
 * Decompiled function f__176C_0206_009C_C4F1()
 *
 * @name f__176C_0206_009C_C4F1
 * @implements 176C:0206:009C:C4F1 ()
 *
 * Called From: 176C:01E3:00CA:9CA5
 * Called From: 176C:01E3:0113:0405
 * Called From: 176C:01EB:00CA:9CA5
 * Called From: 176C:01EB:00F8:FA80
 * Called From: 176C:01EB:0113:0405
 */
void f__176C_0206_009C_C4F1()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6282));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6280));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0234_006E_13E8(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x021B; emu_last_cs = 0x176C; emu_last_ip = 0x0213; emu_last_length = 0x009C; emu_last_crc = 0xC4F1; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0234_006E_13E8(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6282), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6280), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6286));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6284));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0262; emu_last_cs = 0x176C; emu_last_ip = 0x023F; emu_last_length = 0x009C; emu_last_crc = 0xC4F1; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0249; emu_last_cs = 0x176C; emu_last_ip = 0x0241; emu_last_length = 0x009C; emu_last_crc = 0xC4F1; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0262_0040_5621(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6286), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6284), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x628A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6288));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0290_0012_9B52(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0277; emu_last_cs = 0x176C; emu_last_ip = 0x026F; emu_last_length = 0x009C; emu_last_crc = 0xC4F1; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0290_0012_9B52(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x628A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6288), emu_dx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; f__0FE4_0243_003A_D5F2();
	f__176C_02A2_0006_558B();
}

/**
 * Decompiled function f__176C_021B_0087_F6C5()
 *
 * @name f__176C_021B_0087_F6C5
 * @implements 176C:021B:0087:F6C5 ()
 *
 * Called From: 176C:0213:00B5:53EB
 * Called From: 176C:0213:00E3:C733
 */
void f__176C_021B_0087_F6C5()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6282), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6280), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6286));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6284));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0262; emu_last_cs = 0x176C; emu_last_ip = 0x023F; emu_last_length = 0x0087; emu_last_crc = 0xF6C5; emu_call(); return; }
	if (!emu_flags.zf) { f__176C_0249_0059_3F67(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0262; emu_last_cs = 0x176C; emu_last_ip = 0x0247; emu_last_length = 0x0087; emu_last_crc = 0xF6C5; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6286), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6284), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x628A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6288));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0290; emu_last_cs = 0x176C; emu_last_ip = 0x026D; emu_last_length = 0x0087; emu_last_crc = 0xF6C5; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0277; emu_last_cs = 0x176C; emu_last_ip = 0x026F; emu_last_length = 0x0087; emu_last_crc = 0xF6C5; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0290; emu_last_cs = 0x176C; emu_last_ip = 0x0275; emu_last_length = 0x0087; emu_last_crc = 0xF6C5; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x628A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6288), emu_dx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; emu_ip = 0x0243; emu_last_cs = 0x176C; emu_last_ip = 0x029D; emu_last_length = 0x0087; emu_last_crc = 0xF6C5; emu_call();
	f__176C_02A2_0006_558B();
}

/**
 * Decompiled function f__176C_0234_006E_13E8()
 *
 * @name f__176C_0234_006E_13E8
 * @implements 176C:0234:006E:13E8 ()
 *
 * Called From: 176C:0211:009C:C4F1
 * Called From: 176C:0219:009C:C4F1
 * Called From: 176C:0219:0113:0405
 * Called From: 176C:0219:00CA:9CA5
 * Called From: 176C:0219:00F8:FA80
 */
void f__176C_0234_006E_13E8()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6286));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6284));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0262_0040_5621(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0249; emu_last_cs = 0x176C; emu_last_ip = 0x0241; emu_last_length = 0x006E; emu_last_crc = 0x13E8; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0262_0040_5621(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6286), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6284), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x628A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6288));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0290_0012_9B52(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0277; emu_last_cs = 0x176C; emu_last_ip = 0x026F; emu_last_length = 0x006E; emu_last_crc = 0x13E8; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0290_0012_9B52(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x628A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6288), emu_dx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; f__0FE4_0243_003A_D5F2();
	f__176C_02A2_0006_558B();
}

/**
 * Decompiled function f__176C_0249_0059_3F67()
 *
 * @name f__176C_0249_0059_3F67
 * @implements 176C:0249:0059:3F67 ()
 *
 * Called From: 176C:0241:0087:F6C5
 */
void f__176C_0249_0059_3F67()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6286), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6284), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x628A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6288));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0290; emu_last_cs = 0x176C; emu_last_ip = 0x026D; emu_last_length = 0x0059; emu_last_crc = 0x3F67; emu_call(); return; }
	if (!emu_flags.zf) { f__176C_0277_002B_0503(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0290; emu_last_cs = 0x176C; emu_last_ip = 0x0275; emu_last_length = 0x0059; emu_last_crc = 0x3F67; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x628A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6288), emu_dx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; f__0FE4_0243_003A_D5F2();
	f__176C_02A2_0006_558B();
}

/**
 * Decompiled function f__176C_0262_0040_5621()
 *
 * @name f__176C_0262_0040_5621
 * @implements 176C:0262:0040:5621 ()
 *
 * Called From: 176C:023F:006E:13E8
 * Called From: 176C:0247:006E:13E8
 * Called From: 176C:0247:009C:C4F1
 * Called From: 176C:0247:00CA:9CA5
 * Called From: 176C:0247:00F8:FA80
 * Called From: 176C:0247:0113:0405
 */
void f__176C_0262_0040_5621()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x628A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6288));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0290_0012_9B52(); return; }
	if (!emu_flags.zf) { f__176C_0277_002B_0503(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0290_0012_9B52(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x628A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6288), emu_dx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; f__0FE4_0243_003A_D5F2();
	f__176C_02A2_0006_558B();
}

/**
 * Decompiled function f__176C_0277_002B_0503()
 *
 * @name f__176C_0277_002B_0503
 * @implements 176C:0277:002B:0503 ()
 *
 * Called From: 176C:026F:0040:5621
 * Called From: 176C:026F:0059:3F67
 */
void f__176C_0277_002B_0503()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x628A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6288), emu_dx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; f__0FE4_0243_003A_D5F2();
	f__176C_02A2_0006_558B();
}

/**
 * Decompiled function f__176C_0290_0012_9B52()
 *
 * @name f__176C_0290_0012_9B52
 * @implements 176C:0290:0012:9B52 ()
 *
 * Called From: 176C:026D:0040:5621
 * Called From: 176C:026D:006E:13E8
 * Called From: 176C:026D:009C:C4F1
 * Called From: 176C:0275:0040:5621
 * Called From: 176C:0275:006E:13E8
 * Called From: 176C:0275:009C:C4F1
 * Called From: 176C:0275:00B5:53EB
 * Called From: 176C:0275:00CA:9CA5
 * Called From: 176C:0275:00F8:FA80
 * Called From: 176C:0275:0113:0405
 */
void f__176C_0290_0012_9B52()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; f__0FE4_0243_003A_D5F2();
	f__176C_02A2_0006_558B();
}

/**
 * Decompiled function f__176C_02A2_0006_558B()
 *
 * @name f__176C_02A2_0006_558B
 * @implements 176C:02A2:0006:558B ()
 *
 * Called From: 176C:02A2:0113:0405
 * Called From: 176C:02A2:0012:9B52
 * Called From: 176C:02A2:009C:C4F1
 * Called From: 176C:02A2:0040:5621
 * Called From: 176C:02A2:00CA:9CA5
 * Called From: 176C:02A2:00F8:FA80
 * Called From: 176C:02A2:006E:13E8
 * Called From: 176C:02A2:002B:0503
 * Called From: 176C:02A2:0059:3F67
 */
void f__176C_02A2_0006_558B()
{
	emu_addws(&emu_sp, 0x8);
	f__176C_07CF_0013_3C19(); return;
}

/**
 * Decompiled function f__176C_02A8_000F_9BB6()
 *
 * @name f__176C_02A8_000F_9BB6
 * @implements 176C:02A8:000F:9BB6 ()
 *
 * Called From: 176C:07DF:0013:3C19
 * Called From: 176C:07DF:0015:AED4
 */
void f__176C_02A8_000F_9BB6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (emu_flags.zf) { f__176C_02B7_000A_2CB1(); return; }
	f__176C_07C3_000A_B112(); return;
}

/**
 * Decompiled function f__176C_02B7_000A_2CB1()
 *
 * @name f__176C_02B7_000A_2CB1
 * @implements 176C:02B7:000A:2CB1 ()
 *
 * Called From: 176C:02B2:000F:9BB6
 */
void f__176C_02B7_000A_2CB1()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__176C_02C1_0037_7973(); return; }
	f__176C_07C3_000A_B112(); return;
}

/**
 * Decompiled function f__176C_02C1_0037_7973()
 *
 * @name f__176C_02C1_0037_7973
 * @implements 176C:02C1:0037:7973 ()
 *
 * Called From: 176C:02BC:000A:2CB1
 */
void f__176C_02C1_0037_7973()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3950), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x394E), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x626E), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x626C), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02F8); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	f__176C_02F8_0039_0847();
}

/**
 * Decompiled function f__176C_02F8_0039_0847()
 *
 * @name f__176C_02F8_0039_0847
 * @implements 176C:02F8:0039:0847 ()
 *
 * Called From: 176C:02F8:0037:7973
 */
void f__176C_02F8_0039_0847()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x394C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x394A), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_flags.zf) { f__176C_0359_0007_36AE(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (emu_flags.zf) { f__176C_0359_0007_36AE(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x40);
	if (emu_flags.zf) { f__176C_0359_0007_36AE(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0331); emu_cs = 0x167E; emu_ip = 0x01BB; emu_last_cs = 0x176C; emu_last_ip = 0x032C; emu_last_length = 0x0039; emu_last_crc = 0x0847; emu_call();
	/* Unresolved jump */ emu_ip = 0x0331; emu_last_cs = 0x176C; emu_last_ip = 0x0331; emu_last_length = 0x0039; emu_last_crc = 0x0847; emu_call();
}

/**
 * Decompiled function f__176C_0359_0007_36AE()
 *
 * @name f__176C_0359_0007_36AE
 * @implements 176C:0359:0007:36AE ()
 *
 * Called From: 176C:0304:0039:0847
 * Called From: 176C:030F:0039:0847
 * Called From: 176C:031B:0039:0847
 */
void f__176C_0359_0007_36AE()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__176C_0360_000D_D0BA(); return; }
	f__176C_042F_0014_F073(); return;
}

/**
 * Decompiled function f__176C_0360_000D_D0BA()
 *
 * @name f__176C_0360_000D_D0BA
 * @implements 176C:0360:000D:D0BA ()
 *
 * Called From: 176C:035B:0007:36AE
 */
void f__176C_0360_000D_D0BA()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x036D); emu_cs = 0x1A34; f__1A34_2134_001E_3E9A();
	f__176C_036D_0010_DF03();
}

/**
 * Decompiled function f__176C_036D_0010_DF03()
 *
 * @name f__176C_036D_0010_DF03
 * @implements 176C:036D:0010:DF03 ()
 *
 * Called From: 176C:036D:000D:D0BA
 */
void f__176C_036D_0010_DF03()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x51), 0x0);
	if (!emu_flags.zf) { f__176C_037D_000E_7DC2(); return; }
	f__176C_042F_0014_F073(); return;
}

/**
 * Decompiled function f__176C_037D_000E_7DC2()
 *
 * @name f__176C_037D_000E_7DC2
 * @implements 176C:037D:000E:7DC2 ()
 *
 * Called From: 176C:0378:0010:DF03
 */
void f__176C_037D_000E_7DC2()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { f__176C_038B_000F_CB1C(); return; }
	f__176C_0427_001C_3F74(); return;
}

/**
 * Decompiled function f__176C_038B_000F_CB1C()
 *
 * @name f__176C_038B_000F_CB1C
 * @implements 176C:038B:000F:CB1C ()
 *
 * Called From: 176C:0386:000E:7DC2
 */
void f__176C_038B_000F_CB1C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), 0x8000);
	if (emu_flags.zf) { f__176C_039A_000D_9950(); return; }
	/* Unresolved jump */ emu_ip = 0x0427; emu_last_cs = 0x176C; emu_last_ip = 0x0397; emu_last_length = 0x000F; emu_last_crc = 0xCB1C; emu_call();
}

/**
 * Decompiled function f__176C_039A_000D_9950()
 *
 * @name f__176C_039A_000D_9950
 * @implements 176C:039A:000D:9950 ()
 *
 * Called From: 176C:0395:000F:CB1C
 */
void f__176C_039A_000D_9950()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_push(emu_cs); emu_push(0x03A7); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	f__176C_03A7_0013_F833();
}

/**
 * Decompiled function f__176C_03A7_0013_F833()
 *
 * @name f__176C_03A7_0013_F833
 * @implements 176C:03A7:0013:F833 ()
 *
 * Called From: 176C:03A7:000D:9950
 */
void f__176C_03A7_0013_F833()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (!emu_flags.zf) { f__176C_03F0_0023_D191(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_push(emu_cs); emu_push(0x03BA); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	f__176C_03BA_0031_621B();
}

/**
 * Decompiled function f__176C_03BA_0031_621B()
 *
 * @name f__176C_03BA_0031_621B
 * @implements 176C:03BA:0031:621B ()
 *
 * Called From: 176C:03BA:0013:F833
 */
void f__176C_03BA_0031_621B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (!emu_flags.zf) { f__176C_03F0_0023_D191(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x03EB); emu_cs = 0x167E; emu_ip = 0x01BB; emu_last_cs = 0x176C; emu_last_ip = 0x03E6; emu_last_length = 0x0031; emu_last_crc = 0x621B; emu_call();
	/* Unresolved jump */ emu_ip = 0x03EB; emu_last_cs = 0x176C; emu_last_ip = 0x03EB; emu_last_length = 0x0031; emu_last_crc = 0x621B; emu_call();
}

/**
 * Decompiled function f__176C_03F0_0023_D191()
 *
 * @name f__176C_03F0_0023_D191
 * @implements 176C:03F0:0023:D191 ()
 *
 * Called From: 176C:03AB:0013:F833
 * Called From: 176C:03D6:0031:621B
 */
void f__176C_03F0_0023_D191()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0413); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	f__176C_0413_0011_5754();
}

/**
 * Decompiled function f__176C_0413_0011_5754()
 *
 * @name f__176C_0413_0011_5754
 * @implements 176C:0413:0011:5754 ()
 *
 * Called From: 176C:0413:0023:D191
 */
void f__176C_0413_0011_5754()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x0424); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	f__176C_0424_001F_6A65();
}

/**
 * Decompiled function f__176C_0424_001F_6A65()
 *
 * @name f__176C_0424_001F_6A65
 * @implements 176C:0424:001F:6A65 ()
 *
 * Called From: 176C:0424:0011:5754
 */
void f__176C_0424_001F_6A65()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_decb(&emu_get_memory8(emu_es, emu_bx.x,  0x51));
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__176C_0466_0030_B284(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x0443); emu_cs = 0x1A34; f__1A34_1F55_0019_98DF();
	f__176C_0443_0020_60D4();
}

/**
 * Decompiled function f__176C_0427_001C_3F74()
 *
 * @name f__176C_0427_001C_3F74
 * @implements 176C:0427:001C:3F74 ()
 *
 * Called From: 176C:0388:000E:7DC2
 */
void f__176C_0427_001C_3F74()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_decb(&emu_get_memory8(emu_es, emu_bx.x,  0x51));
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__176C_0466_0030_B284(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x0443); emu_cs = 0x1A34; f__1A34_1F55_0019_98DF();
	f__176C_0443_0020_60D4();
}

/**
 * Decompiled function f__176C_042F_0014_F073()
 *
 * @name f__176C_042F_0014_F073
 * @implements 176C:042F:0014:F073 ()
 *
 * Called From: 176C:035D:0007:36AE
 * Called From: 176C:037A:0010:DF03
 */
void f__176C_042F_0014_F073()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__176C_0466_0030_B284(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x0443); emu_cs = 0x1A34; f__1A34_1F55_0019_98DF();
	f__176C_0443_0020_60D4();
}

/**
 * Decompiled function f__176C_0443_0020_60D4()
 *
 * @name f__176C_0443_0020_60D4
 * @implements 176C:0443:0020:60D4 ()
 *
 * Called From: 176C:0443:0014:F073
 * Called From: 176C:0443:001F:6A65
 * Called From: 176C:0443:001C:3F74
 */
void f__176C_0443_0020_60D4()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x40);
	if (emu_flags.zf) { f__176C_0466_0030_B284(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0463); emu_cs = 0x1A34; emu_ip = 0x1F55; emu_last_cs = 0x176C; emu_last_ip = 0x045E; emu_last_length = 0x0020; emu_last_crc = 0x60D4; emu_call();
	/* Unresolved jump */ emu_ip = 0x0463; emu_last_cs = 0x176C; emu_last_ip = 0x0463; emu_last_length = 0x0020; emu_last_crc = 0x60D4; emu_call();
}

/**
 * Decompiled function f__176C_0466_0030_B284()
 *
 * @name f__176C_0466_0030_B284
 * @implements 176C:0466:0030:B284 ()
 *
 * Called From: 176C:0431:0014:F073
 * Called From: 176C:0431:001C:3F74
 * Called From: 176C:0431:001F:6A65
 * Called From: 176C:0450:0020:60D4
 */
void f__176C_0466_0030_B284()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__176C_04B4_0017_CAF9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6E), 0x0);
	if (emu_flags.zf) { f__176C_04B4_0017_CAF9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_decb(&emu_get_memory8(emu_es, emu_bx.x,  0x6E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x6E), 0x1);
	if (emu_flags.zf) { f__176C_0496_001B_C865(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x800);
	f__176C_04A0_0011_B562(); return;
}

/**
 * Decompiled function f__176C_0496_001B_C865()
 *
 * @name f__176C_0496_001B_C865
 * @implements 176C:0496:001B:C865 ()
 *
 * Called From: 176C:0488:0030:B284
 */
void f__176C_0496_001B_C865()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xF7FF);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04B1); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_04B1_001A_EC5B();
}

/**
 * Decompiled function f__176C_04A0_0011_B562()
 *
 * @name f__176C_04A0_0011_B562
 * @implements 176C:04A0:0011:B562 ()
 *
 * Called From: 176C:0494:0030:B284
 */
void f__176C_04A0_0011_B562()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04B1); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_04B1_001A_EC5B();
}

/**
 * Decompiled function f__176C_04B1_001A_EC5B()
 *
 * @name f__176C_04B1_001A_EC5B
 * @implements 176C:04B1:001A:EC5B ()
 *
 * Called From: 176C:04B1:0011:B562
 * Called From: 176C:04B1:001B:C865
 */
void f__176C_04B1_001A_EC5B()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { f__176C_04CE_001C_D8DA(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x04CB); emu_cs = 0x1A34; f__1A34_193F_0013_FA4D();
	f__176C_04CB_001F_EDCB();
}

/**
 * Decompiled function f__176C_04B4_0017_CAF9()
 *
 * @name f__176C_04B4_0017_CAF9
 * @implements 176C:04B4:0017:CAF9 ()
 *
 * Called From: 176C:046A:0030:B284
 * Called From: 176C:0475:0030:B284
 */
void f__176C_04B4_0017_CAF9()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { f__176C_04CE_001C_D8DA(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x04CB); emu_cs = 0x1A34; f__1A34_193F_0013_FA4D();
	f__176C_04CB_001F_EDCB();
}

/**
 * Decompiled function f__176C_04CB_001F_EDCB()
 *
 * @name f__176C_04CB_001F_EDCB
 * @implements 176C:04CB:001F:EDCB ()
 *
 * Called From: 176C:04CB:0017:CAF9
 * Called From: 176C:04CB:001A:EC5B
 */
void f__176C_04CB_001F_EDCB()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { f__176C_050B_0009_D18E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x04EA); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__176C_04EA_0008_475C();
}

/**
 * Decompiled function f__176C_04CE_001C_D8DA()
 *
 * @name f__176C_04CE_001C_D8DA
 * @implements 176C:04CE:001C:D8DA ()
 *
 * Called From: 176C:04B8:0017:CAF9
 * Called From: 176C:04B8:001A:EC5B
 */
void f__176C_04CE_001C_D8DA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { f__176C_050B_0009_D18E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x04EA); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__176C_04EA_0008_475C();
}

/**
 * Decompiled function f__176C_04EA_0008_475C()
 *
 * @name f__176C_04EA_0008_475C
 * @implements 176C:04EA:0008:475C ()
 *
 * Called From: 176C:04EA:001F:EDCB
 * Called From: 176C:04EA:001C:D8DA
 */
void f__176C_04EA_0008_475C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04F2); emu_cs = 0x34CD; ovl__34CD(32);
	f__176C_04F2_0016_FC92();
}

/**
 * Decompiled function f__176C_04F2_0016_FC92()
 *
 * @name f__176C_04F2_0016_FC92
 * @implements 176C:04F2:0016:FC92 ()
 *
 * Called From: 176C:04F2:0008:475C
 */
void f__176C_04F2_0016_FC92()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__176C_050B_0009_D18E(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0508); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_0508_000C_5826();
}

/**
 * Decompiled function f__176C_0508_000C_5826()
 *
 * @name f__176C_0508_000C_5826
 * @implements 176C:0508:000C:5826 ()
 *
 * Called From: 176C:0508:0016:FC92
 */
void f__176C_0508_000C_5826()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (!emu_flags.zf) { f__176C_0514_000E_EDA0(); return; }
	f__176C_06A0_0009_1116(); return;
}

/**
 * Decompiled function f__176C_050B_0009_D18E()
 *
 * @name f__176C_050B_0009_D18E
 * @implements 176C:050B:0009:D18E ()
 *
 * Called From: 176C:04D7:001C:D8DA
 * Called From: 176C:04D7:001F:EDCB
 * Called From: 176C:04F5:0016:FC92
 */
void f__176C_050B_0009_D18E()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (!emu_flags.zf) { f__176C_0514_000E_EDA0(); return; }
	f__176C_06A0_0009_1116(); return;
}

/**
 * Decompiled function f__176C_0514_000E_EDA0()
 *
 * @name f__176C_0514_000E_EDA0
 * @implements 176C:0514:000E:EDA0 ()
 *
 * Called From: 176C:050F:0009:D18E
 * Called From: 176C:050F:000C:5826
 */
void f__176C_0514_000E_EDA0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x70), 0x0);
	if (emu_flags.zf) { f__176C_0522_004F_CC5C(); return; }
	f__176C_0698_0011_6178(); return;
}

/**
 * Decompiled function f__176C_0522_004F_CC5C()
 *
 * @name f__176C_0522_004F_CC5C
 * @implements 176C:0522:004F:CC5C ()
 *
 * Called From: 176C:051D:000E:EDA0
 */
void f__176C_0522_004F_CC5C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x0);
	if (!emu_flags.zf) { f__176C_0538_0039_2AA4(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6A), 0x0);
	if (!emu_flags.zf) { f__176C_0544_002D_282D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	if (emu_flags.zf) { f__176C_05BD_0044_F2CF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x05BD; emu_last_cs = 0x176C; emu_last_ip = 0x054D; emu_last_length = 0x004F; emu_last_crc = 0xCC5C; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x3F);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0571); emu_cs = 0x34CD; emu_ip = 0x008E; emu_last_cs = 0x176C; emu_last_ip = 0x056C; emu_last_length = 0x004F; emu_last_crc = 0xCC5C; emu_call();
	f__176C_0571_0090_E5FF();
}

/**
 * Decompiled function f__176C_0538_0039_2AA4()
 *
 * @name f__176C_0538_0039_2AA4
 * @implements 176C:0538:0039:2AA4 ()
 *
 * Called From: 176C:052B:004F:CC5C
 */
void f__176C_0538_0039_2AA4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	if (emu_flags.zf) { f__176C_05BD_0044_F2CF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x05BD; emu_last_cs = 0x176C; emu_last_ip = 0x054D; emu_last_length = 0x0039; emu_last_crc = 0x2AA4; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x3F);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0571); emu_cs = 0x34CD; emu_ip = 0x008E; emu_last_cs = 0x176C; emu_last_ip = 0x056C; emu_last_length = 0x0039; emu_last_crc = 0x2AA4; emu_call();
	f__176C_0571_0090_E5FF();
}

/**
 * Decompiled function f__176C_0544_002D_282D()
 *
 * @name f__176C_0544_002D_282D
 * @implements 176C:0544:002D:282D ()
 *
 * Called From: 176C:0536:004F:CC5C
 */
void f__176C_0544_002D_282D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x05BD; emu_last_cs = 0x176C; emu_last_ip = 0x054D; emu_last_length = 0x002D; emu_last_crc = 0x282D; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x3F);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0571); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_0571_0090_E5FF();
}

/**
 * Decompiled function f__176C_0571_0090_E5FF()
 *
 * @name f__176C_0571_0090_E5FF
 * @implements 176C:0571:0090:E5FF ()
 *
 * Called From: 176C:0571:002D:282D
 */
void f__176C_0571_0090_E5FF()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3E));
	emu_movw(&emu_bx.x, 0x5);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x70), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	if (emu_flags.zf) { f__176C_05BD_0044_F2CF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x70), 0x3);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x20);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x05BD; emu_last_cs = 0x176C; emu_last_ip = 0x05A9; emu_last_length = 0x0090; emu_last_crc = 0xE5FF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xF7);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x061B; emu_last_cs = 0x176C; emu_last_ip = 0x05C6; emu_last_length = 0x0090; emu_last_crc = 0xE5FF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x061B; emu_last_cs = 0x176C; emu_last_ip = 0x05D2; emu_last_length = 0x0090; emu_last_crc = 0xE5FF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x061B; emu_last_cs = 0x176C; emu_last_ip = 0x05DD; emu_last_length = 0x0090; emu_last_crc = 0xE5FF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x3F);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0601); emu_cs = 0x34CD; emu_ip = 0x008E; emu_last_cs = 0x176C; emu_last_ip = 0x05FC; emu_last_length = 0x0090; emu_last_crc = 0xE5FF; emu_call();
	/* Unresolved jump */ emu_ip = 0x0601; emu_last_cs = 0x176C; emu_last_ip = 0x0601; emu_last_length = 0x0090; emu_last_crc = 0xE5FF; emu_call();
}

/**
 * Decompiled function f__176C_05BD_0044_F2CF()
 *
 * @name f__176C_05BD_0044_F2CF
 * @implements 176C:05BD:0044:F2CF ()
 *
 * Called From: 176C:0542:004F:CC5C
 * Called From: 176C:0542:0039:2AA4
 * Called From: 176C:0594:0090:E5FF
 */
void f__176C_05BD_0044_F2CF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x1);
	if (!emu_flags.zf) { f__176C_061B_0044_69AA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x061B; emu_last_cs = 0x176C; emu_last_ip = 0x05D2; emu_last_length = 0x0044; emu_last_crc = 0xF2CF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x061B; emu_last_cs = 0x176C; emu_last_ip = 0x05DD; emu_last_length = 0x0044; emu_last_crc = 0xF2CF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x3F);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0601); emu_cs = 0x34CD; emu_ip = 0x008E; emu_last_cs = 0x176C; emu_last_ip = 0x05FC; emu_last_length = 0x0044; emu_last_crc = 0xF2CF; emu_call();
	/* Unresolved jump */ emu_ip = 0x0601; emu_last_cs = 0x176C; emu_last_ip = 0x0601; emu_last_length = 0x0044; emu_last_crc = 0xF2CF; emu_call();
}

/**
 * Decompiled function f__176C_061B_0044_69AA()
 *
 * @name f__176C_061B_0044_69AA
 * @implements 176C:061B:0044:69AA ()
 *
 * Called From: 176C:05C6:0044:F2CF
 */
void f__176C_061B_0044_69AA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { f__176C_0696_0002_C43A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x5);
	if (emu_flags.zf) { f__176C_063D_0022_E86D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	if (emu_flags.zf) { f__176C_066E_001C_F5FE(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x3F);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x065F); emu_cs = 0x34CD; emu_ip = 0x008E; emu_last_cs = 0x176C; emu_last_ip = 0x065A; emu_last_length = 0x0044; emu_last_crc = 0x69AA; emu_call();
	f__176C_065F_000F_4F56();
}

/**
 * Decompiled function f__176C_063D_0022_E86D()
 *
 * @name f__176C_063D_0022_E86D
 * @implements 176C:063D:0022:E86D ()
 *
 * Called From: 176C:062F:0044:69AA
 */
void f__176C_063D_0022_E86D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x3F);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x065F); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_065F_000F_4F56();
}

/**
 * Decompiled function f__176C_065F_000F_4F56()
 *
 * @name f__176C_065F_000F_4F56
 * @implements 176C:065F:000F:4F56 ()
 *
 * Called From: 176C:065F:0022:E86D
 */
void f__176C_065F_000F_4F56()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x70), 0x4);
	f__176C_0696_0002_C43A(); return;
}

/**
 * Decompiled function f__176C_066E_001C_F5FE()
 *
 * @name f__176C_066E_001C_F5FE
 * @implements 176C:066E:001C:F5FE ()
 *
 * Called From: 176C:063B:0044:69AA
 */
void f__176C_066E_001C_F5FE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	if (emu_flags.zf) { f__176C_0696_0002_C43A(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x068A); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_068A_000E_C98D();
}

/**
 * Decompiled function f__176C_068A_000E_C98D()
 *
 * @name f__176C_068A_000E_C98D
 * @implements 176C:068A:000E:C98D ()
 *
 * Called From: 176C:068A:001C:F5FE
 */
void f__176C_068A_000E_C98D()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	f__176C_06A0_0009_1116(); return;
}

/**
 * Decompiled function f__176C_0696_0002_C43A()
 *
 * @name f__176C_0696_0002_C43A
 * @implements 176C:0696:0002:C43A ()
 *
 * Called From: 176C:0624:0044:69AA
 * Called From: 176C:066C:000F:4F56
 * Called From: 176C:0677:001C:F5FE
 */
void f__176C_0696_0002_C43A()
{
	f__176C_06A0_0009_1116(); return;
}

/**
 * Decompiled function f__176C_0698_0011_6178()
 *
 * @name f__176C_0698_0011_6178
 * @implements 176C:0698:0011:6178 ()
 *
 * Called From: 176C:051F:000E:EDA0
 */
void f__176C_0698_0011_6178()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x70));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (!emu_flags.zf) { f__176C_06A9_000E_2DCF(); return; }
	f__176C_0788_002F_3687(); return;
}

/**
 * Decompiled function f__176C_06A0_0009_1116()
 *
 * @name f__176C_06A0_0009_1116
 * @implements 176C:06A0:0009:1116 ()
 *
 * Called From: 176C:0511:0009:D18E
 * Called From: 176C:0511:000C:5826
 * Called From: 176C:0696:0002:C43A
 * Called From: 176C:0696:000E:C98D
 */
void f__176C_06A0_0009_1116()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (!emu_flags.zf) { f__176C_06A9_000E_2DCF(); return; }
	f__176C_0788_002F_3687(); return;
}

/**
 * Decompiled function f__176C_06A9_000E_2DCF()
 *
 * @name f__176C_06A9_000E_2DCF
 * @implements 176C:06A9:000E:2DCF ()
 *
 * Called From: 176C:06A4:0009:1116
 * Called From: 176C:06A4:0011:6178
 */
void f__176C_06A9_000E_2DCF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x0);
	if (emu_flags.zf) { f__176C_06B7_0010_03D5(); return; }
	f__176C_0780_0037_8F26(); return;
}

/**
 * Decompiled function f__176C_06B7_0010_03D5()
 *
 * @name f__176C_06B7_0010_03D5
 * @implements 176C:06B7:0010:03D5 ()
 *
 * Called From: 176C:06B2:000E:2DCF
 */
void f__176C_06B7_0010_03D5()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06C7); emu_cs = 0x15C2; f__15C2_0526_000F_EA1E();
	f__176C_06C7_0009_779A();
}

/**
 * Decompiled function f__176C_06C7_0009_779A()
 *
 * @name f__176C_06C7_0009_779A
 * @implements 176C:06C7:0009:779A ()
 *
 * Called From: 176C:06C7:0010:03D5
 */
void f__176C_06C7_0009_779A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__176C_06D0_0029_3063(); return; }
	f__176C_077E_0002_C43A(); return;
}

/**
 * Decompiled function f__176C_06D0_0029_3063()
 *
 * @name f__176C_06D0_0029_3063
 * @implements 176C:06D0:0029:3063 ()
 *
 * Called From: 176C:06CB:0009:779A
 */
void f__176C_06D0_0029_3063()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x800);
	if (!emu_flags.zf) { f__176C_0700_000D_6A2B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x06F9); emu_cs = 0x07D4; f__07D4_196B_0073_56C1();
	f__176C_06F9_0014_AFD4();
}

/**
 * Decompiled function f__176C_06F9_0014_AFD4()
 *
 * @name f__176C_06F9_0014_AFD4
 * @implements 176C:06F9:0014:AFD4 ()
 *
 * Called From: 176C:06F9:0029:3063
 */
void f__176C_06F9_0014_AFD4()
{
	emu_addws(&emu_sp, 0xC);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__176C_070D_0013_3361(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3944));
	emu_movw(&emu_dx.x, 0x5);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3948), emu_ax.x);
	f__176C_0713_000D_8DB9(); return;
}

/**
 * Decompiled function f__176C_0700_000D_6A2B()
 *
 * @name f__176C_0700_000D_6A2B
 * @implements 176C:0700:000D:6A2B ()
 *
 * Called From: 176C:06DA:0029:3063
 */
void f__176C_0700_000D_6A2B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3944));
	emu_movw(&emu_dx.x, 0x5);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3948), emu_ax.x);
	f__176C_0713_000D_8DB9(); return;
}

/**
 * Decompiled function f__176C_070D_0013_3361()
 *
 * @name f__176C_070D_0013_3361
 * @implements 176C:070D:0013:3361 ()
 *
 * Called From: 176C:06FE:0014:AFD4
 */
void f__176C_070D_0013_3361()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3948), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x24), emu_ax.x);
	f__176C_0768_0018_7CF1(); return;
}

/**
 * Decompiled function f__176C_0713_000D_8DB9()
 *
 * @name f__176C_0713_000D_8DB9
 * @implements 176C:0713:000D:8DB9 ()
 *
 * Called From: 176C:070B:0014:AFD4
 * Called From: 176C:070B:000D:6A2B
 */
void f__176C_0713_000D_8DB9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x24), emu_ax.x);
	f__176C_0768_0018_7CF1(); return;
}

/**
 * Decompiled function f__176C_0720_0040_2E37()
 *
 * @name f__176C_0720_0040_2E37
 * @implements 176C:0720:0040:2E37 ()
 *
 * Called From: 176C:077C:0018:7CF1
 */
void f__176C_0720_0040_2E37()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37A4), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x37A2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1D));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0xF);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x37A8));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0750_0010_F3D2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1D));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0xF);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37A8), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0760); emu_cs = 0x15C2; f__15C2_0559_0015_E98A();
	f__176C_0760_0008_E8CF();
}

/**
 * Decompiled function f__176C_0750_0010_F3D2()
 *
 * @name f__176C_0750_0010_F3D2
 * @implements 176C:0750:0010:F3D2 ()
 *
 * Called From: 176C:073C:0040:2E37
 */
void f__176C_0750_0010_F3D2()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0760); emu_cs = 0x15C2; f__15C2_0559_0015_E98A();
	f__176C_0760_0008_E8CF();
}

/**
 * Decompiled function f__176C_0760_0008_E8CF()
 *
 * @name f__176C_0760_0008_E8CF
 * @implements 176C:0760:0008:E8CF ()
 *
 * Called From: 176C:0760:0010:F3D2
 * Called From: 176C:0760:0040:2E37
 */
void f__176C_0760_0008_E8CF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__176C_0768_0018_7CF1(); return; }
	f__176C_077E_0002_C43A(); return;
}

/**
 * Decompiled function f__176C_0768_0018_7CF1()
 *
 * @name f__176C_0768_0018_7CF1
 * @implements 176C:0768:0018:7CF1 ()
 *
 * Called From: 176C:071E:0013:3361
 * Called From: 176C:071E:000D:8DB9
 * Called From: 176C:0764:0008:E8CF
 */
void f__176C_0768_0018_7CF1()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3948));
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x3948));
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.sf != emu_flags.of)) { f__176C_077E_0002_C43A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x0);
	if (emu_flags.zf) { f__176C_0720_0040_2E37(); return; }
	f__176C_0788_002F_3687(); return;
}

/**
 * Decompiled function f__176C_077E_0002_C43A()
 *
 * @name f__176C_077E_0002_C43A
 * @implements 176C:077E:0002:C43A ()
 *
 * Called From: 176C:06CD:0009:779A
 * Called From: 176C:0766:0008:E8CF
 * Called From: 176C:0771:0018:7CF1
 */
void f__176C_077E_0002_C43A()
{
	f__176C_0788_002F_3687(); return;
}

/**
 * Decompiled function f__176C_0780_0037_8F26()
 *
 * @name f__176C_0780_0037_8F26
 * @implements 176C:0780:0037:8F26 ()
 *
 * Called From: 176C:06B4:000E:2DCF
 */
void f__176C_0780_0037_8F26()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x50), 0xFF);
	if (emu_flags.zf) { f__176C_07C3_000A_B112(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	if (!emu_flags.zf) { f__176C_07C3_000A_B112(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x50));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs);
	emu_push(0x07B7); f__176C_000E_000E_633D();
	f__176C_07B7_0016_E5D0();
}

/**
 * Decompiled function f__176C_0788_002F_3687()
 *
 * @name f__176C_0788_002F_3687
 * @implements 176C:0788:002F:3687 ()
 *
 * Called From: 176C:06A6:0009:1116
 * Called From: 176C:06A6:0011:6178
 * Called From: 176C:077E:0002:C43A
 * Called From: 176C:077E:0018:7CF1
 */
void f__176C_0788_002F_3687()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x50), 0xFF);
	if (emu_flags.zf) { f__176C_07C3_000A_B112(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	if (!emu_flags.zf) { f__176C_07C3_000A_B112(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x50));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs);
	emu_push(0x07B7); f__176C_000E_000E_633D();
	f__176C_07B7_0016_E5D0();
}

/**
 * Decompiled function f__176C_07B7_0016_E5D0()
 *
 * @name f__176C_07B7_0016_E5D0
 * @implements 176C:07B7:0016:E5D0 ()
 *
 * Called From: 176C:07B7:0037:8F26
 * Called From: 176C:07B7:002F:3687
 */
void f__176C_07B7_0016_E5D0()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x50), 0xFF);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07CD); emu_cs = 0x0FE4; f__0FE4_0283_0038_4950();
	f__176C_07CD_0015_AED4();
}

/**
 * Decompiled function f__176C_07C3_000A_B112()
 *
 * @name f__176C_07C3_000A_B112
 * @implements 176C:07C3:000A:B112 ()
 *
 * Called From: 176C:02B4:000F:9BB6
 * Called From: 176C:02BE:000A:2CB1
 * Called From: 176C:0791:002F:3687
 * Called From: 176C:0791:0037:8F26
 * Called From: 176C:079F:002F:3687
 * Called From: 176C:079F:0037:8F26
 */
void f__176C_07C3_000A_B112()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07CD); emu_cs = 0x0FE4; f__0FE4_0283_0038_4950();
	f__176C_07CD_0015_AED4();
}

/**
 * Decompiled function f__176C_07CD_0015_AED4()
 *
 * @name f__176C_07CD_0015_AED4
 * @implements 176C:07CD:0015:AED4 ()
 *
 * Called From: 176C:07CD:000A:B112
 * Called From: 176C:07CD:0016:E5D0
 */
void f__176C_07CD_0015_AED4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x626A), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6268), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x626A));
	if (emu_flags.zf) { f__176C_07E2_0006_F7CE(); return; }
	f__176C_02A8_000F_9BB6(); return;
}

/**
 * Decompiled function f__176C_07CF_0013_3C19()
 *
 * @name f__176C_07CF_0013_3C19
 * @implements 176C:07CF:0013:3C19 ()
 *
 * Called From: 176C:02A5:0006:558B
 */
void f__176C_07CF_0013_3C19()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x626A), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6268), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x626A));
	if (emu_flags.zf) { f__176C_07E2_0006_F7CE(); return; }
	f__176C_02A8_000F_9BB6(); return;
}

/**
 * Decompiled function f__176C_07E2_0006_F7CE()
 *
 * @name f__176C_07E2_0006_F7CE
 * @implements 176C:07E2:0006:F7CE ()
 *
 * Called From: 176C:0137:002F:7FAE
 * Called From: 176C:07DD:0015:AED4
 * Called From: 176C:07DD:0013:3C19
 */
void f__176C_07E2_0006_F7CE()
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
 * Decompiled function f__176C_0858_0023_E780()
 *
 * @name f__176C_0858_0023_E780
 * @implements 176C:0858:0023:E780 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_0858_0023_E780()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x087B); emu_cs = 0x1A34; f__1A34_350F_0021_9B04();
	f__176C_087B_0005_84EE();
}

/**
 * Decompiled function f__176C_087B_0005_84EE()
 *
 * @name f__176C_087B_0005_84EE
 * @implements 176C:087B:0005:84EE ()
 *
 * Called From: 176C:087B:0023:E780
 */
void f__176C_087B_0005_84EE()
{
	emu_addws(&emu_sp, 0x6);
	f__176C_0880_0002_2597(); return;
}

/**
 * Decompiled function f__176C_0880_0002_2597()
 *
 * @name f__176C_0880_0002_2597
 * @implements 176C:0880:0002:2597 ()
 *
 * Called From: 176C:087E:0005:84EE
 */
void f__176C_0880_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_0882_0014_0C6A()
 *
 * @name f__176C_0882_0014_0C6A
 * @implements 176C:0882:0014:0C6A ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_0882_0014_0C6A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (!emu_flags.zf) { f__176C_0896_000D_9150(); return; }
	/* Unresolved jump */ emu_ip = 0x0BBA; emu_last_cs = 0x176C; emu_last_ip = 0x0893; emu_last_length = 0x0014; emu_last_crc = 0x0C6A; emu_call();
}

/**
 * Decompiled function f__176C_0896_000D_9150()
 *
 * @name f__176C_0896_000D_9150
 * @implements 176C:0896:000D:9150 ()
 *
 * Called From: 176C:0891:0014:0C6A
 */
void f__176C_0896_000D_9150()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x56));
	emu_push(emu_cs); emu_push(0x08A3); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	f__176C_08A3_0009_5312();
}

/**
 * Decompiled function f__176C_08A3_0009_5312()
 *
 * @name f__176C_08A3_0009_5312
 * @implements 176C:08A3:0009:5312 ()
 *
 * Called From: 176C:08A3:000D:9150
 */
void f__176C_08A3_0009_5312()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { f__176C_08AC_0008_133E(); return; }
	/* Unresolved jump */ emu_ip = 0x0A7F; emu_last_cs = 0x176C; emu_last_ip = 0x08A9; emu_last_length = 0x0009; emu_last_crc = 0x5312; emu_call();
}

/**
 * Decompiled function f__176C_08AC_0008_133E()
 *
 * @name f__176C_08AC_0008_133E
 * @implements 176C:08AC:0008:133E ()
 *
 * Called From: 176C:08A7:0009:5312
 */
void f__176C_08AC_0008_133E()
{
	emu_cmpw(&emu_ax.x, 0x2);
	if (!emu_flags.zf) { f__176C_08B4_0008_D336(); return; }
	/* Unresolved jump */ emu_ip = 0x0A7C; emu_last_cs = 0x176C; emu_last_ip = 0x08B1; emu_last_length = 0x0008; emu_last_crc = 0x133E; emu_call();
}

/**
 * Decompiled function f__176C_08B4_0008_D336()
 *
 * @name f__176C_08B4_0008_D336
 * @implements 176C:08B4:0008:D336 ()
 *
 * Called From: 176C:08AF:0008:133E
 */
void f__176C_08B4_0008_D336()
{
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__176C_08BC_000D_F112(); return; }
	/* Unresolved jump */ emu_ip = 0x0A7F; emu_last_cs = 0x176C; emu_last_ip = 0x08B9; emu_last_length = 0x0008; emu_last_crc = 0xD336; emu_call();
}

/**
 * Decompiled function f__176C_08BC_000D_F112()
 *
 * @name f__176C_08BC_000D_F112
 * @implements 176C:08BC:000D:F112 ()
 *
 * Called From: 176C:08B7:0008:D336
 */
void f__176C_08BC_000D_F112()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x56));
	emu_push(emu_cs); emu_push(0x08C9); emu_cs = 0x167E; f__167E_02AE_000C_CC85();
	f__176C_08C9_002C_6C7F();
}

/**
 * Decompiled function f__176C_08C9_002C_6C7F()
 *
 * @name f__176C_08C9_002C_6C7F
 * @implements 176C:08C9:002C:6C7F ()
 *
 * Called From: 176C:08C9:000D:F112
 */
void f__176C_08C9_002C_6C7F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xB);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08F5; emu_last_cs = 0x176C; emu_last_ip = 0x08F0; emu_last_length = 0x002C; emu_last_crc = 0x6C7F; emu_call(); return; }
	f__176C_09A8_0018_9FF3(); return;
}

/**
 * Decompiled function f__176C_0984_0006_BC27()
 *
 * @name f__176C_0984_0006_BC27
 * @implements 176C:0984:0006:BC27 ()
 *
 * Called From: 176C:0A5B:0006:888B
 */
void f__176C_0984_0006_BC27()
{
	emu_movw(&emu_ax.x, 0x1);
	f__176C_0BBF_0004_893F(); return;
}

/**
 * Decompiled function f__176C_09A8_0018_9FF3()
 *
 * @name f__176C_09A8_0018_9FF3
 * @implements 176C:09A8:0018:9FF3 ()
 *
 * Called From: 176C:08F2:002C:6C7F
 */
void f__176C_09A8_0018_9FF3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09CD; emu_last_cs = 0x176C; emu_last_ip = 0x09B0; emu_last_length = 0x0018; emu_last_crc = 0x9FF3; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x10);
	if (!emu_flags.zf) { f__176C_09C0_000D_B934(); return; }
	/* Unresolved jump */ emu_ip = 0x0A60; emu_last_cs = 0x176C; emu_last_ip = 0x09BD; emu_last_length = 0x0018; emu_last_crc = 0x9FF3; emu_call();
}

/**
 * Decompiled function f__176C_09C0_000D_B934()
 *
 * @name f__176C_09C0_000D_B934
 * @implements 176C:09C0:000D:B934 ()
 *
 * Called From: 176C:09BB:0018:9FF3
 */
void f__176C_09C0_000D_B934()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x1);
	if (emu_flags.zf) { f__176C_09CD_000D_819D(); return; }
	/* Unresolved jump */ emu_ip = 0x0A60; emu_last_cs = 0x176C; emu_last_ip = 0x09CA; emu_last_length = 0x000D; emu_last_crc = 0xB934; emu_call();
}

/**
 * Decompiled function f__176C_09CD_000D_819D()
 *
 * @name f__176C_09CD_000D_819D
 * @implements 176C:09CD:000D:819D ()
 *
 * Called From: 176C:09C8:000D:B934
 */
void f__176C_09CD_000D_819D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (emu_flags.zf) { f__176C_09DA_0015_CD26(); return; }
	/* Unresolved jump */ emu_ip = 0x0A60; emu_last_cs = 0x176C; emu_last_ip = 0x09D7; emu_last_length = 0x000D; emu_last_crc = 0x819D; emu_call();
}

/**
 * Decompiled function f__176C_09DA_0015_CD26()
 *
 * @name f__176C_09DA_0015_CD26
 * @implements 176C:09DA:0015:CD26 ()
 *
 * Called From: 176C:09D5:000D:819D
 */
void f__176C_09DA_0015_CD26()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x09EF); emu_cs = 0x3483; ovl__3483(0);
	f__176C_09EF_0018_247E();
}

/**
 * Decompiled function f__176C_09EF_0018_247E()
 *
 * @name f__176C_09EF_0018_247E
 * @implements 176C:09EF:0018:247E ()
 *
 * Called From: 176C:09EF:0015:CD26
 */
void f__176C_09EF_0018_247E()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A07); emu_cs = 0x0FE4; f__0FE4_05FD_002C_15BA();
	f__176C_0A07_0008_45F1();
}

/**
 * Decompiled function f__176C_0A07_0008_45F1()
 *
 * @name f__176C_0A07_0008_45F1
 * @implements 176C:0A07:0008:45F1 ()
 *
 * Called From: 176C:0A07:0018:247E
 */
void f__176C_0A07_0008_45F1()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A0F); emu_cs = 0x1A34; f__1A34_2C95_001B_89A2();
	f__176C_0A0F_0010_0D90();
}

/**
 * Decompiled function f__176C_0A0F_0010_0D90()
 *
 * @name f__176C_0A0F_0010_0D90
 * @implements 176C:0A0F:0010:0D90 ()
 *
 * Called From: 176C:0A0F:0008:45F1
 */
void f__176C_0A0F_0010_0D90()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x0A1F); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	f__176C_0A1F_0039_07D4();
}

/**
 * Decompiled function f__176C_0A1F_0039_07D4()
 *
 * @name f__176C_0A1F_0039_07D4
 * @implements 176C:0A1F:0039:07D4 ()
 *
 * Called From: 176C:0A1F:0010:0D90
 */
void f__176C_0A1F_0039_07D4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFEFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), 0x0);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A58); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_0A58_0006_888B();
}

/**
 * Decompiled function f__176C_0A58_0006_888B()
 *
 * @name f__176C_0A58_0006_888B
 * @implements 176C:0A58:0006:888B ()
 *
 * Called From: 176C:0A58:0039:07D4
 */
void f__176C_0A58_0006_888B()
{
	emu_addws(&emu_sp, 0x6);
	f__176C_0984_0006_BC27(); return;
}

/**
 * Decompiled function f__176C_0BBF_0004_893F()
 *
 * @name f__176C_0BBF_0004_893F
 * @implements 176C:0BBF:0004:893F ()
 *
 * Called From: 176C:0987:0006:BC27
 */
void f__176C_0BBF_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_0BC3_002A_A6DE()
 *
 * @name f__176C_0BC3_002A_A6DE
 * @implements 176C:0BC3:002A:A6DE ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_0BC3_002A_A6DE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (emu_flags.zf) { f__176C_0BED_000D_9150(); return; }
	/* Unresolved jump */ emu_ip = 0x0F97; emu_last_cs = 0x176C; emu_last_ip = 0x0BEA; emu_last_length = 0x002A; emu_last_crc = 0xA6DE; emu_call();
}

/**
 * Decompiled function f__176C_0BED_000D_9150()
 *
 * @name f__176C_0BED_000D_9150
 * @implements 176C:0BED:000D:9150 ()
 *
 * Called From: 176C:0BE8:002A:A6DE
 */
void f__176C_0BED_000D_9150()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x56));
	emu_push(emu_cs); emu_push(0x0BFA); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	f__176C_0BFA_0009_D33D();
}

/**
 * Decompiled function f__176C_0BFA_0009_D33D()
 *
 * @name f__176C_0BFA_0009_D33D
 * @implements 176C:0BFA:0009:D33D ()
 *
 * Called From: 176C:0BFA:000D:9150
 */
void f__176C_0BFA_0009_D33D()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0C03; emu_last_cs = 0x176C; emu_last_ip = 0x0BFE; emu_last_length = 0x0009; emu_last_crc = 0xD33D; emu_call(); return; }
	f__176C_0D78_000D_5110(); return;
}

/**
 * Decompiled function f__176C_0D57_0003_9C30()
 *
 * @name f__176C_0D57_0003_9C30
 * @implements 176C:0D57:0003:9C30 ()
 *
 * Called From: 176C:0F99:0005:A21A
 */
void f__176C_0D57_0003_9C30()
{
	f__176C_0F9C_0006_F7CE(); return;
}

/**
 * Decompiled function f__176C_0D78_000D_5110()
 *
 * @name f__176C_0D78_000D_5110
 * @implements 176C:0D78:000D:5110 ()
 *
 * Called From: 176C:0C00:0009:D33D
 */
void f__176C_0D78_000D_5110()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x56));
	emu_push(emu_cs); emu_push(0x0D85); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	f__176C_0D85_0015_D31C();
}

/**
 * Decompiled function f__176C_0D85_0015_D31C()
 *
 * @name f__176C_0D85_0015_D31C
 * @implements 176C:0D85:0015:D31C ()
 *
 * Called From: 176C:0D85:000D:5110
 */
void f__176C_0D85_0015_D31C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (!emu_flags.zf) { f__176C_0D9A_001D_9C4C(); return; }
	/* Unresolved jump */ emu_ip = 0x0F97; emu_last_cs = 0x176C; emu_last_ip = 0x0D97; emu_last_length = 0x0015; emu_last_crc = 0xD31C; emu_call();
}

/**
 * Decompiled function f__176C_0D9A_001D_9C4C()
 *
 * @name f__176C_0D9A_001D_9C4C
 * @implements 176C:0D9A:001D:9C4C ()
 *
 * Called From: 176C:0D95:0015:D31C
 */
void f__176C_0D9A_001D_9C4C()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x0DB7); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__176C_0DB7_000E_DA27();
}

/**
 * Decompiled function f__176C_0DB7_000E_DA27()
 *
 * @name f__176C_0DB7_000E_DA27
 * @implements 176C:0DB7:000E:DA27 ()
 *
 * Called From: 176C:0DB7:001D:9C4C
 */
void f__176C_0DB7_000E_DA27()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0DC5); emu_cs = 0x1082; emu_Building_Find_First();
	f__176C_0DC5_0006_D728();
}

/**
 * Decompiled function f__176C_0DC5_0006_D728()
 *
 * @name f__176C_0DC5_0006_D728
 * @implements 176C:0DC5:0006:D728 ()
 *
 * Called From: 176C:0DC5:000E:DA27
 */
void f__176C_0DC5_0006_D728()
{
	emu_addws(&emu_sp, 0x8);
	f__176C_0E74_0011_D640(); return;
}

/**
 * Decompiled function f__176C_0DCB_001C_A05B()
 *
 * @name f__176C_0DCB_001C_A05B
 * @implements 176C:0DCB:001C:A05B ()
 *
 * Called From: 176C:0E82:0011:D640
 * Called From: 176C:0E82:0013:9D76
 */
void f__176C_0DCB_001C_A05B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0DE7); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
	f__176C_0DE7_0048_EED5();
}

/**
 * Decompiled function f__176C_0DE7_0048_EED5()
 *
 * @name f__176C_0DE7_0048_EED5
 * @implements 176C:0DE7:0048:EED5 ()
 *
 * Called From: 176C:0DE7:001C:A05B
 */
void f__176C_0DE7_0048_EED5()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E31; emu_last_cs = 0x176C; emu_last_ip = 0x0DF5; emu_last_length = 0x0048; emu_last_crc = 0xEED5; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xC);
	if (!emu_flags.zf) { f__176C_0E2F_0002_DB3A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E2F; emu_last_cs = 0x176C; emu_last_ip = 0x0E09; emu_last_length = 0x0048; emu_last_crc = 0xEED5; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x26), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E2F; emu_last_cs = 0x176C; emu_last_ip = 0x0E13; emu_last_length = 0x0048; emu_last_crc = 0xEED5; emu_call(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__176C_0E1E_0011_1026(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0E2D; emu_last_cs = 0x176C; emu_last_ip = 0x0E1C; emu_last_length = 0x0048; emu_last_crc = 0xEED5; emu_call(); return; }
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	/* Unresolved jump */ emu_ip = 0x0E85; emu_last_cs = 0x176C; emu_last_ip = 0x0E2D; emu_last_length = 0x0048; emu_last_crc = 0xEED5; emu_call();
}

/**
 * Decompiled function f__176C_0E1E_0011_1026()
 *
 * @name f__176C_0E1E_0011_1026
 * @implements 176C:0E1E:0011:1026 ()
 *
 * Called From: 176C:0E17:0048:EED5
 */
void f__176C_0E1E_0011_1026()
{
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	f__176C_0E85_000B_7C6A(); return;
}

/**
 * Decompiled function f__176C_0E2F_0002_DB3A()
 *
 * @name f__176C_0E2F_0002_DB3A
 * @implements 176C:0E2F:0002:DB3A ()
 *
 * Called From: 176C:0DFF:0048:EED5
 */
void f__176C_0E2F_0002_DB3A()
{
	f__176C_0E67_000B_166D(); return;
}

/**
 * Decompiled function f__176C_0E67_000B_166D()
 *
 * @name f__176C_0E67_000B_166D
 * @implements 176C:0E67:000B:166D ()
 *
 * Called From: 176C:0E2F:0002:DB3A
 */
void f__176C_0E67_000B_166D()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0E72); emu_cs = 0x1082; emu_Building_Find_Next();
	f__176C_0E72_0013_9D76();
}

/**
 * Decompiled function f__176C_0E72_0013_9D76()
 *
 * @name f__176C_0E72_0013_9D76
 * @implements 176C:0E72:0013:9D76 ()
 *
 * Called From: 176C:0E72:000B:166D
 */
void f__176C_0E72_0013_9D76()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E85; emu_last_cs = 0x176C; emu_last_ip = 0x0E80; emu_last_length = 0x0013; emu_last_crc = 0x9D76; emu_call(); return; }
	f__176C_0DCB_001C_A05B(); return;
}

/**
 * Decompiled function f__176C_0E74_0011_D640()
 *
 * @name f__176C_0E74_0011_D640
 * @implements 176C:0E74:0011:D640 ()
 *
 * Called From: 176C:0DC8:0006:D728
 */
void f__176C_0E74_0011_D640()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E85; emu_last_cs = 0x176C; emu_last_ip = 0x0E80; emu_last_length = 0x0011; emu_last_crc = 0xD640; emu_call(); return; }
	f__176C_0DCB_001C_A05B(); return;
}

/**
 * Decompiled function f__176C_0E85_000B_7C6A()
 *
 * @name f__176C_0E85_000B_7C6A
 * @implements 176C:0E85:000B:7C6A ()
 *
 * Called From: 176C:0E2D:0011:1026
 */
void f__176C_0E85_000B_7C6A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__176C_0E90_001D_190A(); return; }
	/* Unresolved jump */ emu_ip = 0x0F93; emu_last_cs = 0x176C; emu_last_ip = 0x0E8D; emu_last_length = 0x000B; emu_last_crc = 0x7C6A; emu_call();
}

/**
 * Decompiled function f__176C_0E90_001D_190A()
 *
 * @name f__176C_0E90_001D_190A
 * @implements 176C:0E90:001D:190A ()
 *
 * Called From: 176C:0E8B:000B:7C6A
 */
void f__176C_0E90_001D_190A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (!emu_flags.zf) { f__176C_0EAF_0028_0318(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EAF; emu_last_cs = 0x176C; emu_last_ip = 0x0EA0; emu_last_length = 0x001D; emu_last_crc = 0x190A; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0EAD); emu_cs = 0x1A34; emu_ip = 0x0F48; emu_last_cs = 0x176C; emu_last_ip = 0x0EA8; emu_last_length = 0x001D; emu_last_crc = 0x190A; emu_call();
	/* Unresolved jump */ emu_ip = 0x0EAD; emu_last_cs = 0x176C; emu_last_ip = 0x0EAD; emu_last_length = 0x001D; emu_last_crc = 0x190A; emu_call();
}

/**
 * Decompiled function f__176C_0EAF_0028_0318()
 *
 * @name f__176C_0EAF_0028_0318
 * @implements 176C:0EAF:0028:0318 ()
 *
 * Called From: 176C:0E9A:001D:190A
 */
void f__176C_0EAF_0028_0318()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_pop(&emu_es);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x100);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0ED7); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_0ED7_000E_44F7();
}

/**
 * Decompiled function f__176C_0ED7_000E_44F7()
 *
 * @name f__176C_0ED7_000E_44F7
 * @implements 176C:0ED7:000E:44F7 ()
 *
 * Called From: 176C:0ED7:0028:0318
 */
void f__176C_0ED7_000E_44F7()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0EE5); emu_cs = 0x1A34; f__1A34_2AAA_000D_A3E6();
	f__176C_0EE5_0011_8A0E();
}

/**
 * Decompiled function f__176C_0EE5_0011_8A0E()
 *
 * @name f__176C_0EE5_0011_8A0E
 * @implements 176C:0EE5:0011:8A0E ()
 *
 * Called From: 176C:0EE5:000E:44F7
 */
void f__176C_0EE5_0011_8A0E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x0EF6); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__176C_0EF6_0013_75C0();
}

/**
 * Decompiled function f__176C_0EF6_0013_75C0()
 *
 * @name f__176C_0EF6_0013_75C0
 * @implements 176C:0EF6:0013:75C0 ()
 *
 * Called From: 176C:0EF6:0011:8A0E
 */
void f__176C_0EF6_0013_75C0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x0F09); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__176C_0F09_0008_9B67();
}

/**
 * Decompiled function f__176C_0F09_0008_9B67()
 *
 * @name f__176C_0F09_0008_9B67
 * @implements 176C:0F09:0008:9B67 ()
 *
 * Called From: 176C:0F09:0013:75C0
 */
void f__176C_0F09_0008_9B67()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F11); emu_cs = 0x0C10; f__0C10_0008_0014_19CD();
	f__176C_0F11_000F_9658();
}

/**
 * Decompiled function f__176C_0F11_000F_9658()
 *
 * @name f__176C_0F11_000F_9658
 * @implements 176C:0F11:000F:9658 ()
 *
 * Called From: 176C:0F11:0008:9B67
 */
void f__176C_0F11_000F_9658()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x0F20); emu_cs = 0x0C10; f__0C10_0168_0014_CEB0();
	f__176C_0F20_001B_0C57();
}

/**
 * Decompiled function f__176C_0F20_001B_0C57()
 *
 * @name f__176C_0F20_001B_0C57
 * @implements 176C:0F20:001B:0C57 ()
 *
 * Called From: 176C:0F20:000F:9658
 */
void f__176C_0F20_001B_0C57()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F3B); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_0F3B_0018_FF7D();
}

/**
 * Decompiled function f__176C_0F3B_0018_FF7D()
 *
 * @name f__176C_0F3B_0018_FF7D
 * @implements 176C:0F3B:0018:FF7D ()
 *
 * Called From: 176C:0F3B:001B:0C57
 */
void f__176C_0F3B_0018_FF7D()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F93; emu_last_cs = 0x176C; emu_last_ip = 0x0F46; emu_last_length = 0x0018; emu_last_crc = 0xFF7D; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0F53); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__176C_0F53_0017_D921();
}

/**
 * Decompiled function f__176C_0F53_0017_D921()
 *
 * @name f__176C_0F53_0017_D921
 * @implements 176C:0F53:0017:D921 ()
 *
 * Called From: 176C:0F53:0018:FF7D
 */
void f__176C_0F53_0017_D921()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0F6A); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__176C_0F6A_0008_375A();
}

/**
 * Decompiled function f__176C_0F6A_0008_375A()
 *
 * @name f__176C_0F6A_0008_375A
 * @implements 176C:0F6A:0008:375A ()
 *
 * Called From: 176C:0F6A:0017:D921
 */
void f__176C_0F6A_0008_375A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F72); emu_cs = 0x34CD; ovl__34CD(27);
	f__176C_0F72_0023_12BA();
}

/**
 * Decompiled function f__176C_0F72_0023_12BA()
 *
 * @name f__176C_0F72_0023_12BA
 * @implements 176C:0F72:0023:12BA ()
 *
 * Called From: 176C:0F72:0008:375A
 */
void f__176C_0F72_0023_12BA()
{
	emu_addws(&emu_sp, 0x6);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__176C_0F93_0002_C13A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x60), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x5E), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x5C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x5A), emu_dx.x);
	/* Unresolved jump */ emu_ip = 0x0F97; emu_last_cs = 0x176C; emu_last_ip = 0x0F93; emu_last_length = 0x0023; emu_last_crc = 0x12BA; emu_call();
}

/**
 * Decompiled function f__176C_0F93_0002_C13A()
 *
 * @name f__176C_0F93_0002_C13A
 * @implements 176C:0F93:0002:C13A ()
 *
 * Called From: 176C:0F77:0023:12BA
 */
void f__176C_0F93_0002_C13A()
{
	f__176C_0F97_0005_A21A(); return;
}

/**
 * Decompiled function f__176C_0F97_0005_A21A()
 *
 * @name f__176C_0F97_0005_A21A
 * @implements 176C:0F97:0005:A21A ()
 *
 * Called From: 176C:0F93:0002:C13A
 */
void f__176C_0F97_0005_A21A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_0D57_0003_9C30(); return;
}

/**
 * Decompiled function f__176C_0F9C_0006_F7CE()
 *
 * @name f__176C_0F9C_0006_F7CE
 * @implements 176C:0F9C:0006:F7CE ()
 *
 * Called From: 176C:0D57:0003:9C30
 */
void f__176C_0F9C_0006_F7CE()
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
 * Decompiled function f__176C_0FA2_0013_6D6D()
 *
 * @name f__176C_0FA2_0013_6D6D
 * @implements 176C:0FA2:0013:6D6D ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_0FA2_0013_6D6D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x0FB5); emu_cs = 0x1A34; f__1A34_204C_0043_B1ED();
	f__176C_0FB5_0014_1DEB();
}

/**
 * Decompiled function f__176C_0FB5_0014_1DEB()
 *
 * @name f__176C_0FB5_0014_1DEB
 * @implements 176C:0FB5:0014:1DEB ()
 *
 * Called From: 176C:0FB5:0013:6D6D
 */
void f__176C_0FB5_0014_1DEB()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0FC9); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_0FC9_0007_F90C();
}

/**
 * Decompiled function f__176C_0FC9_0007_F90C()
 *
 * @name f__176C_0FC9_0007_F90C
 * @implements 176C:0FC9:0007:F90C ()
 *
 * Called From: 176C:0FC9:0014:1DEB
 */
void f__176C_0FC9_0007_F90C()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_0FD0_0002_2597(); return;
}

/**
 * Decompiled function f__176C_0FD0_0002_2597()
 *
 * @name f__176C_0FD0_0002_2597
 * @implements 176C:0FD0:0002:2597 ()
 *
 * Called From: 176C:0FCE:0007:F90C
 */
void f__176C_0FD0_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_0FD2_001F_B15D()
 *
 * @name f__176C_0FD2_001F_B15D
 * @implements 176C:0FD2:001F:B15D ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_0FD2_001F_B15D()
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
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0FF1; emu_last_cs = 0x176C; emu_last_ip = 0x0FEB; emu_last_length = 0x001F; emu_last_crc = 0xB15D; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__176C_0FF3_000C_4AC2(); return;
}

/**
 * Decompiled function f__176C_0FF3_000C_4AC2()
 *
 * @name f__176C_0FF3_000C_4AC2
 * @implements 176C:0FF3:000C:4AC2 ()
 *
 * Called From: 176C:0FEF:001F:B15D
 */
void f__176C_0FF3_000C_4AC2()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, 0xFF);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_0FFF_001B_252E(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__176C_1002_0018_1AF9(); return;
}

/**
 * Decompiled function f__176C_0FFF_001B_252E()
 *
 * @name f__176C_0FFF_001B_252E
 * @implements 176C:0FFF:001B:252E ()
 *
 * Called From: 176C:0FF9:000C:4AC2
 */
void f__176C_0FFF_001B_252E()
{
	emu_movw(&emu_ax.x, 0xFF);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x200);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x101E; emu_last_cs = 0x176C; emu_last_ip = 0x100E; emu_last_length = 0x001B; emu_last_crc = 0x252E; emu_call(); return; }
	emu_movw(&emu_ax.x, 0xC0);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x101A); emu_cs = 0x34C1; ovl__34C1(0);
	f__176C_101A_001F_713B();
}

/**
 * Decompiled function f__176C_1002_0018_1AF9()
 *
 * @name f__176C_1002_0018_1AF9
 * @implements 176C:1002:0018:1AF9 ()
 *
 * Called From: 176C:0FFD:000C:4AC2
 */
void f__176C_1002_0018_1AF9()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x200);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x101E; emu_last_cs = 0x176C; emu_last_ip = 0x100E; emu_last_length = 0x0018; emu_last_crc = 0x1AF9; emu_call(); return; }
	emu_movw(&emu_ax.x, 0xC0);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x101A); emu_cs = 0x34C1; ovl__34C1(0);
	f__176C_101A_001F_713B();
}

/**
 * Decompiled function f__176C_101A_001F_713B()
 *
 * @name f__176C_101A_001F_713B
 * @implements 176C:101A:001F:713B ()
 *
 * Called From: 176C:101A:001B:252E
 * Called From: 176C:101A:0018:1AF9
 */
void f__176C_101A_001F_713B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x103E; emu_last_cs = 0x176C; emu_last_ip = 0x1027; emu_last_length = 0x001F; emu_last_crc = 0x713B; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1039); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	f__176C_1039_0013_A51E();
}

/**
 * Decompiled function f__176C_1039_0013_A51E()
 *
 * @name f__176C_1039_0013_A51E
 * @implements 176C:1039:0013:A51E ()
 *
 * Called From: 176C:1039:001F:713B
 */
void f__176C_1039_0013_A51E()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x104C); emu_cs = 0x1A34; f__1A34_204C_0043_B1ED();
	f__176C_104C_000F_5B17();
}

/**
 * Decompiled function f__176C_104C_000F_5B17()
 *
 * @name f__176C_104C_000F_5B17
 * @implements 176C:104C:000F:5B17 ()
 *
 * Called From: 176C:104C:0013:A51E
 */
void f__176C_104C_000F_5B17()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6A));
	emu_movb(&emu_ax.h, 0x0);
	f__176C_105B_0003_2E57(); return;
}

/**
 * Decompiled function f__176C_105B_0003_2E57()
 *
 * @name f__176C_105B_0003_2E57
 * @implements 176C:105B:0003:2E57 ()
 *
 * Called From: 176C:1059:000F:5B17
 */
void f__176C_105B_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1098_0021_667D()
 *
 * @name f__176C_1098_0021_667D
 * @implements 176C:1098:0021:667D ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1098_0021_667D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x56));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (!emu_flags.zf) { f__176C_10B9_001A_65A9(); return; }
	/* Unresolved jump */ emu_ip = 0x12AC; emu_last_cs = 0x176C; emu_last_ip = 0x10B6; emu_last_length = 0x0021; emu_last_crc = 0x667D; emu_call();
}

/**
 * Decompiled function f__176C_10B9_001A_65A9()
 *
 * @name f__176C_10B9_001A_65A9
 * @implements 176C:10B9:001A:65A9 ()
 *
 * Called From: 176C:10B4:0021:667D
 */
void f__176C_10B9_001A_65A9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x10D3); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	f__176C_10D3_0018_D147();
}

/**
 * Decompiled function f__176C_10D3_0018_D147()
 *
 * @name f__176C_10D3_0018_D147
 * @implements 176C:10D3:0018:D147 ()
 *
 * Called From: 176C:10D3:001A:65A9
 */
void f__176C_10D3_0018_D147()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x10EB); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__176C_10EB_0010_E151();
}

/**
 * Decompiled function f__176C_10EB_0010_E151()
 *
 * @name f__176C_10EB_0010_E151
 * @implements 176C:10EB:0010:E151 ()
 *
 * Called From: 176C:10EB:0018:D147
 */
void f__176C_10EB_0010_E151()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x80);
	if ((emu_flags.sf != emu_flags.of)) { f__176C_10FB_0010_D1EF(); return; }
	f__176C_11D1_0011_5E38(); return;
}

/**
 * Decompiled function f__176C_10FB_0010_D1EF()
 *
 * @name f__176C_10FB_0010_D1EF
 * @implements 176C:10FB:0010:D1EF ()
 *
 * Called From: 176C:10F6:0010:E151
 */
void f__176C_10FB_0010_D1EF()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x110B); emu_cs = 0x1A34; f__1A34_204C_0043_B1ED();
	f__176C_110B_000E_633F();
}

/**
 * Decompiled function f__176C_110B_000E_633F()
 *
 * @name f__176C_110B_000E_633F
 * @implements 176C:110B:000E:633F ()
 *
 * Called From: 176C:110B:0010:D1EF
 */
void f__176C_110B_000E_633F()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1119); emu_cs = 0x0F3F; f__0F3F_0076_0008_A51E();
	f__176C_1119_0010_4ECA();
}

/**
 * Decompiled function f__176C_1119_0010_4ECA()
 *
 * @name f__176C_1119_0010_4ECA
 * @implements 176C:1119:0010:4ECA ()
 *
 * Called From: 176C:1119:000E:633F
 */
void f__176C_1119_0010_4ECA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1129); emu_cs = 0x0F3F; f__0F3F_007E_0008_A4DE();
	f__176C_1129_0010_FEEC();
}

/**
 * Decompiled function f__176C_1129_0010_FEEC()
 *
 * @name f__176C_1129_0010_FEEC
 * @implements 176C:1129:0010:FEEC ()
 *
 * Called From: 176C:1129:0010:4ECA
 */
void f__176C_1129_0010_FEEC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1139); emu_cs = 0x0F3F; f__0F3F_0076_0008_A51E();
	f__176C_1139_0012_4512();
}

/**
 * Decompiled function f__176C_1139_0012_4512()
 *
 * @name f__176C_1139_0012_4512
 * @implements 176C:1139:0012:4512 ()
 *
 * Called From: 176C:1139:0010:FEEC
 */
void f__176C_1139_0012_4512()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x114B); emu_cs = 0x0F3F; f__0F3F_007E_0008_A4DE();
	f__176C_114B_0011_73D1();
}

/**
 * Decompiled function f__176C_114B_0011_73D1()
 *
 * @name f__176C_114B_0011_73D1
 * @implements 176C:114B:0011:73D1 ()
 *
 * Called From: 176C:114B:0012:4512
 */
void f__176C_114B_0011_73D1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_115C_000E_25D4(); return; }
	emu_movw(&emu_ax.x, 0x10);
	f__176C_115E_000C_17FE(); return;
}

/**
 * Decompiled function f__176C_115C_000E_25D4()
 *
 * @name f__176C_115C_000E_25D4
 * @implements 176C:115C:000E:25D4 ()
 *
 * Called From: 176C:1155:0011:73D1
 */
void f__176C_115C_000E_25D4()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xF0);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_116A_000E_5A3C(); return; }
	emu_movw(&emu_ax.x, 0xFFF0);
	f__176C_116C_000C_6816(); return;
}

/**
 * Decompiled function f__176C_115E_000C_17FE()
 *
 * @name f__176C_115E_000C_17FE
 * @implements 176C:115E:000C:17FE ()
 *
 * Called From: 176C:115A:0011:73D1
 */
void f__176C_115E_000C_17FE()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xF0);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_116A_000E_5A3C(); return; }
	emu_movw(&emu_ax.x, 0xFFF0);
	/* Unresolved jump */ emu_ip = 0x116C; emu_last_cs = 0x176C; emu_last_ip = 0x1168; emu_last_length = 0x000C; emu_last_crc = 0x17FE; emu_call();
}

/**
 * Decompiled function f__176C_116A_000E_5A3C()
 *
 * @name f__176C_116A_000E_5A3C
 * @implements 176C:116A:000E:5A3C ()
 *
 * Called From: 176C:1163:000C:17FE
 * Called From: 176C:1163:000E:25D4
 */
void f__176C_116A_000E_5A3C()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_di, 0x10);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_1178_000E_ADD5(); return; }
	emu_movw(&emu_ax.x, 0x10);
	f__176C_117A_000C_97FF(); return;
}

/**
 * Decompiled function f__176C_116C_000C_6816()
 *
 * @name f__176C_116C_000C_6816
 * @implements 176C:116C:000C:6816 ()
 *
 * Called From: 176C:1168:000E:25D4
 */
void f__176C_116C_000C_6816()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_di, 0x10);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_1178_000E_ADD5(); return; }
	emu_movw(&emu_ax.x, 0x10);
	f__176C_117A_000C_97FF(); return;
}

/**
 * Decompiled function f__176C_1178_000E_ADD5()
 *
 * @name f__176C_1178_000E_ADD5
 * @implements 176C:1178:000E:ADD5 ()
 *
 * Called From: 176C:1171:000E:5A3C
 * Called From: 176C:1171:000C:6816
 */
void f__176C_1178_000E_ADD5()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_di, 0xF0);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_1186_0015_D5F9(); return; }
	emu_movw(&emu_ax.x, 0xFFF0);
	f__176C_1188_0013_A1AD(); return;
}

/**
 * Decompiled function f__176C_117A_000C_97FF()
 *
 * @name f__176C_117A_000C_97FF
 * @implements 176C:117A:000C:97FF ()
 *
 * Called From: 176C:1176:000C:6816
 * Called From: 176C:1176:000E:5A3C
 */
void f__176C_117A_000C_97FF()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_di, 0xF0);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_1186_0015_D5F9(); return; }
	emu_movw(&emu_ax.x, 0xFFF0);
	/* Unresolved jump */ emu_ip = 0x1188; emu_last_cs = 0x176C; emu_last_ip = 0x1184; emu_last_length = 0x000C; emu_last_crc = 0x97FF; emu_call();
}

/**
 * Decompiled function f__176C_1186_0015_D5F9()
 *
 * @name f__176C_1186_0015_D5F9
 * @implements 176C:1186:0015:D5F9 ()
 *
 * Called From: 176C:117F:000E:ADD5
 * Called From: 176C:117F:000C:97FF
 */
void f__176C_1186_0015_D5F9()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_di);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, emu_si);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x119B); emu_cs = 0x0F3F; f__0F3F_002C_000B_51FA();
	f__176C_119B_001F_9F0A();
}

/**
 * Decompiled function f__176C_1188_0013_A1AD()
 *
 * @name f__176C_1188_0013_A1AD
 * @implements 176C:1188:0013:A1AD ()
 *
 * Called From: 176C:1184:000E:ADD5
 */
void f__176C_1188_0013_A1AD()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_di);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, emu_si);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x119B); emu_cs = 0x0F3F; f__0F3F_002C_000B_51FA();
	f__176C_119B_001F_9F0A();
}

/**
 * Decompiled function f__176C_119B_001F_9F0A()
 *
 * @name f__176C_119B_001F_9F0A
 * @implements 176C:119B:001F:9F0A ()
 *
 * Called From: 176C:119B:0013:A1AD
 * Called From: 176C:119B:0015:D5F9
 */
void f__176C_119B_001F_9F0A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x11BA); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_11BA_000F_87A7();
}

/**
 * Decompiled function f__176C_11BA_000F_87A7()
 *
 * @name f__176C_11BA_000F_87A7
 * @implements 176C:11BA:000F:87A7 ()
 *
 * Called From: 176C:11BA:001F:9F0A
 */
void f__176C_11BA_000F_87A7()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_11C9_0008_DA89(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__176C_12C8_0006_F7CE(); return;
}

/**
 * Decompiled function f__176C_11C6_0003_DD1F()
 *
 * @name f__176C_11C6_0003_DD1F
 * @implements 176C:11C6:0003:DD1F ()
 *
 * Called From: 176C:12C5:001F:68BF
 * Called From: 176C:12C5:001C:5DAE
 */
void f__176C_11C6_0003_DD1F()
{
	f__176C_12C8_0006_F7CE(); return;
}

/**
 * Decompiled function f__176C_11C9_0008_DA89()
 *
 * @name f__176C_11C9_0008_DA89
 * @implements 176C:11C9:0008:DA89 ()
 *
 * Called From: 176C:11C1:000F:87A7
 */
void f__176C_11C9_0008_DA89()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2);
	f__176C_12AC_001C_5DAE(); return;
}

/**
 * Decompiled function f__176C_11D1_0011_5E38()
 *
 * @name f__176C_11D1_0011_5E38
 * @implements 176C:11D1:0011:5E38 ()
 *
 * Called From: 176C:10F8:0010:E151
 */
void f__176C_11D1_0011_5E38()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x11E2); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	f__176C_11E2_001C_41F2();
}

/**
 * Decompiled function f__176C_11E2_001C_41F2()
 *
 * @name f__176C_11E2_001C_41F2
 * @implements 176C:11E2:001C:41F2 ()
 *
 * Called From: 176C:11E2:0011:5E38
 */
void f__176C_11E2_001C_41F2()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x11FE); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	f__176C_11FE_0022_B914();
}

/**
 * Decompiled function f__176C_11FE_0022_B914()
 *
 * @name f__176C_11FE_0022_B914
 * @implements 176C:11FE:0022:B914 ()
 *
 * Called From: 176C:11FE:001C:41F2
 */
void f__176C_11FE_0022_B914()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_1220_001C_8822(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_negw(&emu_ax.x, emu_ax.x);
	f__176C_1223_0019_7B9A(); return;
}

/**
 * Decompiled function f__176C_1220_001C_8822()
 *
 * @name f__176C_1220_001C_8822
 * @implements 176C:1220:001C:8822 ()
 *
 * Called From: 176C:1217:0022:B914
 */
void f__176C_1220_001C_8822()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0xFF);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_123C_0019_CAAD(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	f__176C_123F_0016_35F1(); return;
}

/**
 * Decompiled function f__176C_1223_0019_7B9A()
 *
 * @name f__176C_1223_0019_7B9A
 * @implements 176C:1223:0019:7B9A ()
 *
 * Called From: 176C:121E:0022:B914
 */
void f__176C_1223_0019_7B9A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0xFF);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_123C_0019_CAAD(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	f__176C_123F_0016_35F1(); return;
}

/**
 * Decompiled function f__176C_123C_0019_CAAD()
 *
 * @name f__176C_123C_0019_CAAD
 * @implements 176C:123C:0019:CAAD ()
 *
 * Called From: 176C:1235:0019:7B9A
 * Called From: 176C:1235:001C:8822
 */
void f__176C_123C_0019_CAAD()
{
	emu_movw(&emu_ax.x, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x19);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x1255); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	f__176C_1255_0015_ADBE();
}

/**
 * Decompiled function f__176C_123F_0016_35F1()
 *
 * @name f__176C_123F_0016_35F1
 * @implements 176C:123F:0016:35F1 ()
 *
 * Called From: 176C:123A:001C:8822
 * Called From: 176C:123A:0019:7B9A
 */
void f__176C_123F_0016_35F1()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x19);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x1255); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	f__176C_1255_0015_ADBE();
}

/**
 * Decompiled function f__176C_1255_0015_ADBE()
 *
 * @name f__176C_1255_0015_ADBE
 * @implements 176C:1255:0015:ADBE ()
 *
 * Called From: 176C:1255:0019:CAAD
 * Called From: 176C:1255:0016:35F1
 */
void f__176C_1255_0015_ADBE()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, 0xFF);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x126A); emu_cs = 0x34C1; ovl__34C1(0);
	f__176C_126A_0010_E384();
}

/**
 * Decompiled function f__176C_126A_0010_E384()
 *
 * @name f__176C_126A_0010_E384
 * @implements 176C:126A:0010:E384 ()
 *
 * Called From: 176C:126A:0015:ADBE
 */
void f__176C_126A_0010_E384()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x127A); emu_cs = 0x1A34; f__1A34_204C_0043_B1ED();
	f__176C_127A_0018_BABE();
}

/**
 * Decompiled function f__176C_127A_0018_BABE()
 *
 * @name f__176C_127A_0018_BABE
 * @implements 176C:127A:0018:BABE ()
 *
 * Called From: 176C:127A:0010:E384
 */
void f__176C_127A_0018_BABE()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movb(&emu_cx.l, 0xA);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_1292_0017_28E6(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	f__176C_1295_0014_2D96(); return;
}

/**
 * Decompiled function f__176C_1292_0017_28E6()
 *
 * @name f__176C_1292_0017_28E6
 * @implements 176C:1292:0017:28E6 ()
 *
 * Called From: 176C:128B:0018:BABE
 */
void f__176C_1292_0017_28E6()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12A9); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_12A9_001F_68BF();
}

/**
 * Decompiled function f__176C_1295_0014_2D96()
 *
 * @name f__176C_1295_0014_2D96
 * @implements 176C:1295:0014:2D96 ()
 *
 * Called From: 176C:1290:0018:BABE
 */
void f__176C_1295_0014_2D96()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12A9); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_12A9_001F_68BF();
}

/**
 * Decompiled function f__176C_12A9_001F_68BF()
 *
 * @name f__176C_12A9_001F_68BF
 * @implements 176C:12A9:001F:68BF ()
 *
 * Called From: 176C:12A9:0014:2D96
 * Called From: 176C:12A9:0017:28E6
 */
void f__176C_12A9_001F_68BF()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x12C3; emu_last_cs = 0x176C; emu_last_ip = 0x12B0; emu_last_length = 0x001F; emu_last_crc = 0x68BF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xFFFE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x2);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_11C6_0003_DD1F(); return;
}

/**
 * Decompiled function f__176C_12AC_001C_5DAE()
 *
 * @name f__176C_12AC_001C_5DAE
 * @implements 176C:12AC:001C:5DAE ()
 *
 * Called From: 176C:11CE:0008:DA89
 */
void f__176C_12AC_001C_5DAE()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x12C3; emu_last_cs = 0x176C; emu_last_ip = 0x12B0; emu_last_length = 0x001C; emu_last_crc = 0x5DAE; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xFFFE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x2);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_11C6_0003_DD1F(); return;
}

/**
 * Decompiled function f__176C_12C8_0006_F7CE()
 *
 * @name f__176C_12C8_0006_F7CE
 * @implements 176C:12C8:0006:F7CE ()
 *
 * Called From: 176C:11C6:0003:DD1F
 * Called From: 176C:11C6:000F:87A7
 */
void f__176C_12C8_0006_F7CE()
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
 * Decompiled function f__176C_12CE_0011_A5C5()
 *
 * @name f__176C_12CE_0011_A5C5
 * @implements 176C:12CE:0011:A5C5 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_12CE_0011_A5C5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x12DF); emu_cs = 0x1A34; f__1A34_10EC_000E_A326();
	f__176C_12DF_0038_4D51();
}

/**
 * Decompiled function f__176C_12DF_0038_4D51()
 *
 * @name f__176C_12DF_0038_4D51
 * @implements 176C:12DF:0038:4D51 ()
 *
 * Called From: 176C:12DF:0011:A5C5
 */
void f__176C_12DF_0038_4D51()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x133D; emu_last_cs = 0x176C; emu_last_ip = 0x12EA; emu_last_length = 0x0038; emu_last_crc = 0x4D51; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_bx.x, 0x64);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_1317_001E_37CF(); return; }
	emu_movw(&emu_ax.x, emu_si);
	/* Unresolved jump */ emu_ip = 0x131A; emu_last_cs = 0x176C; emu_last_ip = 0x1315; emu_last_length = 0x0038; emu_last_crc = 0x4D51; emu_call();
}

/**
 * Decompiled function f__176C_1317_001E_37CF()
 *
 * @name f__176C_1317_001E_37CF
 * @implements 176C:1317:001E:37CF ()
 *
 * Called From: 176C:1311:0038:4D51
 */
void f__176C_1317_001E_37CF()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__176C_1335_0019_5069(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x8D37));
	emu_subw(&emu_get_memory16(emu_ds, 0x00,  0x8CFF), emu_si);
	f__176C_133D_0011_9DAE(); return;
}

/**
 * Decompiled function f__176C_1335_0019_5069()
 *
 * @name f__176C_1335_0019_5069
 * @implements 176C:1335:0019:5069 ()
 *
 * Called From: 176C:1329:001E:37CF
 */
void f__176C_1335_0019_5069()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x8D39));
	emu_addw(&emu_get_memory16(emu_ds, 0x00,  0x8CFF), emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x134E); emu_cs = 0x1423; f__1423_0BCC_0012_111A();
	f__176C_134E_002A_8194();
}

/**
 * Decompiled function f__176C_133D_0011_9DAE()
 *
 * @name f__176C_133D_0011_9DAE
 * @implements 176C:133D:0011:9DAE ()
 *
 * Called From: 176C:1333:001E:37CF
 */
void f__176C_133D_0011_9DAE()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x134E); emu_cs = 0x1423; f__1423_0BCC_0012_111A();
	f__176C_134E_002A_8194();
}

/**
 * Decompiled function f__176C_134E_002A_8194()
 *
 * @name f__176C_134E_002A_8194
 * @implements 176C:134E:002A:8194 ()
 *
 * Called From: 176C:134E:0019:5069
 * Called From: 176C:134E:0011:9DAE
 */
void f__176C_134E_002A_8194()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x6);
	if (!emu_flags.zf) { f__176C_137B_0004_E839(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x12C);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1378); emu_cs = 0x06F7; emu_ip = 0x0008; emu_last_cs = 0x176C; emu_last_ip = 0x1373; emu_last_length = 0x002A; emu_last_crc = 0x8194; emu_call();
	/* Unresolved jump */ emu_ip = 0x1378; emu_last_cs = 0x176C; emu_last_ip = 0x1378; emu_last_length = 0x002A; emu_last_crc = 0x8194; emu_call();
}

/**
 * Decompiled function f__176C_137B_0004_E839()
 *
 * @name f__176C_137B_0004_E839
 * @implements 176C:137B:0004:E839 ()
 *
 * Called From: 176C:135A:002A:8194
 */
void f__176C_137B_0004_E839()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_137F_0003_2E57(); return;
}

/**
 * Decompiled function f__176C_137F_0003_2E57()
 *
 * @name f__176C_137F_0003_2E57
 * @implements 176C:137F:0003:2E57 ()
 *
 * Called From: 176C:137D:0004:E839
 */
void f__176C_137F_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1458_0023_356A()
 *
 * @name f__176C_1458_0023_356A
 * @implements 176C:1458:0023:356A ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1458_0023_356A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x26);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__176C_147B_0006_83CE(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_191E_0006_F7CE(); return;
}

/**
 * Decompiled function f__176C_1476_0005_DE9C()
 *
 * @name f__176C_1476_0005_DE9C
 * @implements 176C:1476:0005:DE9C ()
 *
 * Called From: 176C:1486:0007:CDCF
 * Called From: 176C:14EF:0005:C66E
 * Called From: 176C:1543:0026:43BF
 * Called From: 176C:191B:0003:60B6
 */
void f__176C_1476_0005_DE9C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_191E_0006_F7CE(); return;
}

/**
 * Decompiled function f__176C_1478_0003_DF08()
 *
 * @name f__176C_1478_0003_DF08
 * @implements 176C:1478:0003:DF08 ()
 *
 * Called From: 176C:1918:0009:84F0
 */
void f__176C_1478_0003_DF08()
{
	f__176C_191E_0006_F7CE(); return;
}

/**
 * Decompiled function f__176C_147B_0006_83CE()
 *
 * @name f__176C_147B_0006_83CE
 * @implements 176C:147B:0006:83CE ()
 *
 * Called From: 176C:1474:0023:356A
 */
void f__176C_147B_0006_83CE()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1481); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	f__176C_1481_0007_CDCF();
}

/**
 * Decompiled function f__176C_1481_0007_CDCF()
 *
 * @name f__176C_1481_0007_CDCF
 * @implements 176C:1481:0007:CDCF ()
 *
 * Called From: 176C:1481:0006:83CE
 */
void f__176C_1481_0007_CDCF()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__176C_1488_0010_E9C6(); return; }
	f__176C_1476_0005_DE9C(); return;
}

/**
 * Decompiled function f__176C_1488_0010_E9C6()
 *
 * @name f__176C_1488_0010_E9C6
 * @implements 176C:1488:0010:E9C6 ()
 *
 * Called From: 176C:1484:0007:CDCF
 */
void f__176C_1488_0010_E9C6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (!emu_flags.zf) { f__176C_1498_0020_094B(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x149A; emu_last_cs = 0x176C; emu_last_ip = 0x1496; emu_last_length = 0x0010; emu_last_crc = 0xE9C6; emu_call();
}

/**
 * Decompiled function f__176C_1498_0020_094B()
 *
 * @name f__176C_1498_0020_094B
 * @implements 176C:1498:0020:094B ()
 *
 * Called From: 176C:1491:0010:E9C6
 */
void f__176C_1498_0020_094B()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x14D4; emu_last_cs = 0x176C; emu_last_ip = 0x14A1; emu_last_length = 0x0020; emu_last_crc = 0x094B; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x14B8); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__176C_14B8_0008_A673();
}

/**
 * Decompiled function f__176C_14B8_0008_A673()
 *
 * @name f__176C_14B8_0008_A673
 * @implements 176C:14B8:0008:A673 ()
 *
 * Called From: 176C:14B8:0020:094B
 */
void f__176C_14B8_0008_A673()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x14C0); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__176C_14C0_002C_0682();
}

/**
 * Decompiled function f__176C_14C0_002C_0682()
 *
 * @name f__176C_14C0_002C_0682
 * @implements 176C:14C0:002C:0682 ()
 *
 * Called From: 176C:14C0:0008:A673
 */
void f__176C_14C0_002C_0682()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	if (!emu_flags.zf) { f__176C_14D4_0018_3AE7(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x14F1; emu_last_cs = 0x176C; emu_last_ip = 0x14DC; emu_last_length = 0x002C; emu_last_crc = 0x0682; emu_call(); return; }
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x14EC); emu_cs = 0x1A34; f__1A34_1A66_0011_34D4();
	f__176C_14EC_0005_C66E();
}

/**
 * Decompiled function f__176C_14D4_0018_3AE7()
 *
 * @name f__176C_14D4_0018_3AE7
 * @implements 176C:14D4:0018:3AE7 ()
 *
 * Called From: 176C:14C8:002C:0682
 */
void f__176C_14D4_0018_3AE7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), emu_di);
	if (emu_flags.zf) { f__176C_14F1_002D_4995(); return; }
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x14EC); emu_cs = 0x1A34; emu_ip = 0x1A66; emu_last_cs = 0x176C; emu_last_ip = 0x14E7; emu_last_length = 0x0018; emu_last_crc = 0x3AE7; emu_call();
	f__176C_14EC_0005_C66E();
}

/**
 * Decompiled function f__176C_14EC_0005_C66E()
 *
 * @name f__176C_14EC_0005_C66E
 * @implements 176C:14EC:0005:C66E ()
 *
 * Called From: 176C:14EC:002C:0682
 */
void f__176C_14EC_0005_C66E()
{
	emu_addws(&emu_sp, 0x6);
	f__176C_1476_0005_DE9C(); return;
}

/**
 * Decompiled function f__176C_14F1_002D_4995()
 *
 * @name f__176C_14F1_002D_4995
 * @implements 176C:14F1:002D:4995 ()
 *
 * Called From: 176C:14DC:0018:3AE7
 */
void f__176C_14F1_002D_4995()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1548; emu_last_cs = 0x176C; emu_last_ip = 0x14F5; emu_last_length = 0x002D; emu_last_crc = 0x4995; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x40);
	if (emu_flags.zf) { f__176C_1520_0026_43BF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x67));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x65), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x151E; emu_last_cs = 0x176C; emu_last_ip = 0x1519; emu_last_length = 0x002D; emu_last_crc = 0x4995; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x1476; emu_last_cs = 0x176C; emu_last_ip = 0x151B; emu_last_length = 0x002D; emu_last_crc = 0x4995; emu_call();
}

/**
 * Decompiled function f__176C_1520_0026_43BF()
 *
 * @name f__176C_1520_0026_43BF
 * @implements 176C:1520:0026:43BF ()
 *
 * Called From: 176C:1501:002D:4995
 */
void f__176C_1520_0026_43BF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1546; emu_last_cs = 0x176C; emu_last_ip = 0x1536; emu_last_length = 0x0026; emu_last_crc = 0x43BF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x62), 0x0);
	if (emu_flags.zf) { f__176C_1546_0002_C6BA(); return; }
	f__176C_1476_0005_DE9C(); return;
}

/**
 * Decompiled function f__176C_1546_0002_C6BA()
 *
 * @name f__176C_1546_0002_C6BA
 * @implements 176C:1546:0002:C6BA ()
 *
 * Called From: 176C:1541:0026:43BF
 */
void f__176C_1546_0002_C6BA()
{
	f__176C_1555_0006_53C6(); return;
}

/**
 * Decompiled function f__176C_1555_0006_53C6()
 *
 * @name f__176C_1555_0006_53C6
 * @implements 176C:1555:0006:53C6 ()
 *
 * Called From: 176C:1546:0002:C6BA
 */
void f__176C_1555_0006_53C6()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x155B); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	f__176C_155B_000C_2379();
}

/**
 * Decompiled function f__176C_155B_000C_2379()
 *
 * @name f__176C_155B_000C_2379
 * @implements 176C:155B:000C:2379 ()
 *
 * Called From: 176C:155B:0006:53C6
 */
void f__176C_155B_000C_2379()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { f__176C_1584_0011_D011(); return; }
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1567); emu_cs = 0x167E; f__167E_0162_000D_A6D2();
	f__176C_1567_0007_1E5C();
}

/**
 * Decompiled function f__176C_1567_0007_1E5C()
 *
 * @name f__176C_1567_0007_1E5C
 * @implements 176C:1567:0007:1E5C ()
 *
 * Called From: 176C:1567:000C:2379
 */
void f__176C_1567_0007_1E5C()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x156E); emu_cs = 0x34CD; ovl__34CD(32);
	f__176C_156E_0013_7ED5();
}

/**
 * Decompiled function f__176C_156E_0013_7ED5()
 *
 * @name f__176C_156E_0013_7ED5
 * @implements 176C:156E:0013:7ED5 ()
 *
 * Called From: 176C:156E:0007:1E5C
 */
void f__176C_156E_0013_7ED5()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__176C_1584_0011_D011(); return; }
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1581); emu_cs = 0x1A34; emu_ip = 0x1A66; emu_last_cs = 0x176C; emu_last_ip = 0x157C; emu_last_length = 0x0013; emu_last_crc = 0x7ED5; emu_call();
	/* Unresolved jump */ emu_ip = 0x1581; emu_last_cs = 0x176C; emu_last_ip = 0x1581; emu_last_length = 0x0013; emu_last_crc = 0x7ED5; emu_call();
}

/**
 * Decompiled function f__176C_1584_0011_D011()
 *
 * @name f__176C_1584_0011_D011
 * @implements 176C:1584:0011:D011 ()
 *
 * Called From: 176C:155F:000C:2379
 * Called From: 176C:1571:0013:7ED5
 */
void f__176C_1584_0011_D011()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x51));
	emu_movb(&emu_ax.h, 0x0);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__176C_1595_0006_63E5(); return; }
	f__176C_191B_0003_60B6(); return;
}

/**
 * Decompiled function f__176C_1595_0006_63E5()
 *
 * @name f__176C_1595_0006_63E5
 * @implements 176C:1595:0006:63E5 ()
 *
 * Called From: 176C:1590:0011:D011
 */
void f__176C_1595_0006_63E5()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x159B); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	f__176C_159B_0015_35C1();
}

/**
 * Decompiled function f__176C_159B_0015_35C1()
 *
 * @name f__176C_159B_0015_35C1
 * @implements 176C:159B:0015:35C1 ()
 *
 * Called From: 176C:159B:0006:63E5
 */
void f__176C_159B_0015_35C1()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x15B0); emu_cs = 0x167E; f__167E_0319_0010_B56F();
	f__176C_15B0_001A_064D();
}

/**
 * Decompiled function f__176C_15B0_001A_064D()
 *
 * @name f__176C_15B0_001A_064D
 * @implements 176C:15B0:001A:064D ()
 *
 * Called From: 176C:15B0:0015:35C1
 */
void f__176C_15B0_001A_064D()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x50));
	emu_movb(&emu_cx.l, 0x8);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_15CA_0017_0BB3(); return; }
	f__176C_191B_0003_60B6(); return;
}

/**
 * Decompiled function f__176C_15CA_0017_0BB3()
 *
 * @name f__176C_15CA_0017_0BB3
 * @implements 176C:15CA:0017:0BB3 ()
 *
 * Called From: 176C:15C5:001A:064D
 */
void f__176C_15CA_0017_0BB3()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x15E1); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	f__176C_15E1_001C_DDE4();
}

/**
 * Decompiled function f__176C_15E1_001C_DDE4()
 *
 * @name f__176C_15E1_001C_DDE4
 * @implements 176C:15E1:001C:DDE4 ()
 *
 * Called From: 176C:15E1:0017:0BB3
 */
void f__176C_15E1_001C_DDE4()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_15FD_0027_EF5D(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_negw(&emu_ax.x, emu_ax.x);
	f__176C_1600_0024_F13A(); return;
}

/**
 * Decompiled function f__176C_15FD_0027_EF5D()
 *
 * @name f__176C_15FD_0027_EF5D
 * @implements 176C:15FD:0027:EF5D ()
 *
 * Called From: 176C:15F4:001C:DDE4
 */
void f__176C_15FD_0027_EF5D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (!emu_flags.zf) { f__176C_1613_0011_8B85(); return; }
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_cx.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x161E; emu_last_cs = 0x176C; emu_last_ip = 0x1617; emu_last_length = 0x0027; emu_last_crc = 0xEF5D; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_push(emu_di);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1624); emu_cs = 0x167E; emu_ip = 0x0088; emu_last_cs = 0x176C; emu_last_ip = 0x161F; emu_last_length = 0x0027; emu_last_crc = 0xEF5D; emu_call();
	f__176C_1624_000C_43CF();
}

/**
 * Decompiled function f__176C_1600_0024_F13A()
 *
 * @name f__176C_1600_0024_F13A
 * @implements 176C:1600:0024:F13A ()
 *
 * Called From: 176C:15FB:001C:DDE4
 */
void f__176C_1600_0024_F13A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (!emu_flags.zf) { f__176C_1613_0011_8B85(); return; }
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_cx.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x161E; emu_last_cs = 0x176C; emu_last_ip = 0x1617; emu_last_length = 0x0024; emu_last_crc = 0xF13A; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_push(emu_di);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1624); emu_cs = 0x167E; emu_ip = 0x0088; emu_last_cs = 0x176C; emu_last_ip = 0x161F; emu_last_length = 0x0024; emu_last_crc = 0xF13A; emu_call();
	f__176C_1624_000C_43CF();
}

/**
 * Decompiled function f__176C_1613_0011_8B85()
 *
 * @name f__176C_1613_0011_8B85
 * @implements 176C:1613:0011:8B85 ()
 *
 * Called From: 176C:160C:0027:EF5D
 * Called From: 176C:160C:0024:F13A
 */
void f__176C_1613_0011_8B85()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_flags.zf) { f__176C_161E_0006_53C6(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_push(emu_di);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1624); emu_cs = 0x167E; emu_ip = 0x0088; emu_last_cs = 0x176C; emu_last_ip = 0x161F; emu_last_length = 0x0011; emu_last_crc = 0x8B85; emu_call();
	f__176C_1624_000C_43CF();
}

/**
 * Decompiled function f__176C_161E_0006_53C6()
 *
 * @name f__176C_161E_0006_53C6
 * @implements 176C:161E:0006:53C6 ()
 *
 * Called From: 176C:1617:0011:8B85
 */
void f__176C_161E_0006_53C6()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1624); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	f__176C_1624_000C_43CF();
}

/**
 * Decompiled function f__176C_1624_000C_43CF()
 *
 * @name f__176C_1624_000C_43CF
 * @implements 176C:1624:000C:43CF ()
 *
 * Called From: 176C:1624:0006:53C6
 */
void f__176C_1624_000C_43CF()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (!emu_flags.zf) { f__176C_1659_0009_B073(); return; }
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1630); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	f__176C_1630_0032_F434();
}

/**
 * Decompiled function f__176C_1630_0032_F434()
 *
 * @name f__176C_1630_0032_F434
 * @implements 176C:1630:0032:F434 ()
 *
 * Called From: 176C:1630:000C:43CF
 */
void f__176C_1630_0032_F434()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (!emu_flags.zf) { f__176C_1659_0009_B073(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x8);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1662; emu_last_cs = 0x176C; emu_last_ip = 0x165D; emu_last_length = 0x0032; emu_last_crc = 0xF434; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x191B; emu_last_cs = 0x176C; emu_last_ip = 0x165F; emu_last_length = 0x0032; emu_last_crc = 0xF434; emu_call();
}

/**
 * Decompiled function f__176C_1659_0009_B073()
 *
 * @name f__176C_1659_0009_B073
 * @implements 176C:1659:0009:B073 ()
 *
 * Called From: 176C:1628:000C:43CF
 * Called From: 176C:1652:0032:F434
 */
void f__176C_1659_0009_B073()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x8);
	if ((emu_flags.sf != emu_flags.of)) { f__176C_1662_007D_0891(); return; }
	f__176C_191B_0003_60B6(); return;
}

/**
 * Decompiled function f__176C_1662_007D_0891()
 *
 * @name f__176C_1662_007D_0891
 * @implements 176C:1662:007D:0891 ()
 *
 * Called From: 176C:165D:0009:B073
 */
void f__176C_1662_007D_0891()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x52));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x58));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x56));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), 0x400);
	if (emu_flags.zf) { f__176C_16AF_0030_9605(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x10));
	emu_sarw(&emu_ax.x, 0x1);
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_16AF_0030_9605(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x3);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x16C5; emu_last_cs = 0x176C; emu_last_ip = 0x16B8; emu_last_length = 0x007D; emu_last_crc = 0x0891; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x5);
	if (!emu_flags.zf) { f__176C_16D1_000E_D3B3(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x200);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x16D1; emu_last_cs = 0x176C; emu_last_ip = 0x16CA; emu_last_length = 0x007D; emu_last_crc = 0x0891; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x16);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subws(&emu_bx.x, 0x13);
	emu_cmpws(&emu_bx.x, 0x6);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x16DF; emu_last_cs = 0x176C; emu_last_ip = 0x16DA; emu_last_length = 0x007D; emu_last_crc = 0x0891; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x1868; emu_last_cs = 0x176C; emu_last_ip = 0x16DC; emu_last_length = 0x007D; emu_last_crc = 0x0891; emu_call();
}

/**
 * Decompiled function f__176C_16AF_0030_9605()
 *
 * @name f__176C_16AF_0030_9605
 * @implements 176C:16AF:0030:9605 ()
 *
 * Called From: 176C:1692:007D:0891
 * Called From: 176C:16A8:007D:0891
 */
void f__176C_16AF_0030_9605()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x3);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x16C5; emu_last_cs = 0x176C; emu_last_ip = 0x16B8; emu_last_length = 0x0030; emu_last_crc = 0x9605; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x5);
	if (!emu_flags.zf) { f__176C_16D1_000E_D3B3(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x200);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_16D1_000E_D3B3(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x16);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subws(&emu_bx.x, 0x13);
	emu_cmpws(&emu_bx.x, 0x6);
	if ((emu_flags.cf || emu_flags.zf)) { f__176C_16DF_0007_64B7(); return; }
	/* Unresolved jump */ emu_ip = 0x1868; emu_last_cs = 0x176C; emu_last_ip = 0x16DC; emu_last_length = 0x0030; emu_last_crc = 0x9605; emu_call();
}

/**
 * Decompiled function f__176C_16D1_000E_D3B3()
 *
 * @name f__176C_16D1_000E_D3B3
 * @implements 176C:16D1:000E:D3B3 ()
 *
 * Called From: 176C:16C3:0030:9605
 * Called From: 176C:16C3:007D:0891
 * Called From: 176C:16CA:0030:9605
 */
void f__176C_16D1_000E_D3B3()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subws(&emu_bx.x, 0x13);
	emu_cmpws(&emu_bx.x, 0x6);
	if ((emu_flags.cf || emu_flags.zf)) { f__176C_16DF_0007_64B7(); return; }
	/* Unresolved jump */ emu_ip = 0x1868; emu_last_cs = 0x176C; emu_last_ip = 0x16DC; emu_last_length = 0x000E; emu_last_crc = 0xD3B3; emu_call();
}

/**
 * Decompiled function f__176C_16DF_0007_64B7()
 *
 * @name f__176C_16DF_0007_64B7
 * @implements 176C:16DF:0007:64B7 ()
 *
 * Called From: 176C:16DA:0030:9605
 * Called From: 176C:16DA:000E:D3B3
 */
void f__176C_16DF_0007_64B7()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x1924);
	switch (emu_ip) {
		case 0x17DF: f__176C_17DF_001B_7578(); return;
		case 0x17E9: f__176C_17E9_0011_66A4(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x176C; emu_last_ip = 0x16E1; emu_last_length = 0x0007; emu_last_crc = 0x64B7;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__176C_17DF_001B_7578()
 *
 * @name f__176C_17DF_001B_7578
 * @implements 176C:17DF:001B:7578 ()
 *
 * Called From: 176C:16E1:0007:64B7
 */
void f__176C_17DF_001B_7578()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_movb(&emu_cx.l, 0x2);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x17FA); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__176C_17FA_0017_CD04();
}

/**
 * Decompiled function f__176C_17E9_0011_66A4()
 *
 * @name f__176C_17E9_0011_66A4
 * @implements 176C:17E9:0011:66A4 ()
 *
 * Called From: 176C:16E1:0007:64B7
 */
void f__176C_17E9_0011_66A4()
{
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x17FA); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__176C_17FA_0017_CD04();
}

/**
 * Decompiled function f__176C_17FA_0017_CD04()
 *
 * @name f__176C_17FA_0017_CD04
 * @implements 176C:17FA:0017:CD04 ()
 *
 * Called From: 176C:17FA:001B:7578
 * Called From: 176C:17FA:0011:66A4
 */
void f__176C_17FA_0017_CD04()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1811); emu_cs = 0x1A34; f__1A34_24FE_002F_672A();
	f__176C_1811_0021_E595();
}

/**
 * Decompiled function f__176C_1811_0021_E595()
 *
 * @name f__176C_1811_0021_E595
 * @implements 176C:1811:0021:E595 ()
 *
 * Called From: 176C:1811:0017:CD04
 */
void f__176C_1811_0021_E595()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1866; emu_last_cs = 0x176C; emu_last_ip = 0x1820; emu_last_length = 0x0021; emu_last_crc = 0xE595; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x1832); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__176C_1832_001D_2885();
}

/**
 * Decompiled function f__176C_1832_001D_2885()
 *
 * @name f__176C_1832_001D_2885
 * @implements 176C:1832:001D:2885 ()
 *
 * Called From: 176C:1832:0021:E595
 */
void f__176C_1832_001D_2885()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4D), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_cs); emu_push(0x184F); emu_cs = 0x3483; ovl__3483(0);
	f__176C_184F_0014_9267();
}

/**
 * Decompiled function f__176C_184F_0014_9267()
 *
 * @name f__176C_184F_0014_9267
 * @implements 176C:184F:0014:9267 ()
 *
 * Called From: 176C:184F:001D:2885
 */
void f__176C_184F_0014_9267()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1863); emu_cs = 0x1A34; f__1A34_193F_0013_FA4D();
	f__176C_1863_0005_85EE();
}

/**
 * Decompiled function f__176C_1863_0005_85EE()
 *
 * @name f__176C_1863_0005_85EE
 * @implements 176C:1863:0005:85EE ()
 *
 * Called From: 176C:1863:0014:9267
 */
void f__176C_1863_0005_85EE()
{
	emu_addws(&emu_sp, 0x6);
	f__176C_186A_000B_2CC1(); return;
}

/**
 * Decompiled function f__176C_186A_000B_2CC1()
 *
 * @name f__176C_186A_000B_2CC1
 * @implements 176C:186A:000B:2CC1 ()
 *
 * Called From: 176C:1866:0005:85EE
 */
void f__176C_186A_000B_2CC1()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__176C_1875_0020_D3D2(); return; }
	/* Unresolved jump */ emu_ip = 0x191B; emu_last_cs = 0x176C; emu_last_ip = 0x1872; emu_last_length = 0x000B; emu_last_crc = 0x2CC1; emu_call();
}

/**
 * Decompiled function f__176C_1875_0020_D3D2()
 *
 * @name f__176C_1875_0020_D3D2
 * @implements 176C:1875:0020:D3D2 ()
 *
 * Called From: 176C:1870:000B:2CC1
 */
void f__176C_1875_0020_D3D2()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4E));
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x1895); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	f__176C_1895_003D_E794();
}

/**
 * Decompiled function f__176C_1895_003D_E794()
 *
 * @name f__176C_1895_003D_E794
 * @implements 176C:1895:003D:E794 ()
 *
 * Called From: 176C:1895:0020:D3D2
 */
void f__176C_1895_003D_E794()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x51), emu_ax.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__176C_18DF_000E_B62B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_xorws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x10);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x10);
	if (emu_flags.zf) { f__176C_18DD_0002_C4BA(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x18D2); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	f__176C_18D2_000D_6F50();
}

/**
 * Decompiled function f__176C_18D2_000D_6F50()
 *
 * @name f__176C_18D2_000D_6F50
 * @implements 176C:18D2:000D:6F50 ()
 *
 * Called From: 176C:18D2:003D:E794
 */
void f__176C_18D2_000D_6F50()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x51), emu_ax.l);
	f__176C_18E8_0005_517D(); return;
}

/**
 * Decompiled function f__176C_18DD_0002_C4BA()
 *
 * @name f__176C_18DD_0002_C4BA
 * @implements 176C:18DD:0002:C4BA ()
 *
 * Called From: 176C:18BC:003D:E794
 */
void f__176C_18DD_0002_C4BA()
{
	f__176C_18E8_0005_517D(); return;
}

/**
 * Decompiled function f__176C_18DF_000E_B62B()
 *
 * @name f__176C_18DF_000E_B62B
 * @implements 176C:18DF:000E:B62B ()
 *
 * Called From: 176C:18A7:003D:E794
 */
void f__176C_18DF_000E_B62B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xEF);
	emu_push(emu_cs); emu_push(0x18ED); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__176C_18ED_0025_D2E2();
}

/**
 * Decompiled function f__176C_18E8_0005_517D()
 *
 * @name f__176C_18E8_0005_517D
 * @implements 176C:18E8:0005:517D ()
 *
 * Called From: 176C:18DD:000D:6F50
 * Called From: 176C:18DD:0002:C4BA
 */
void f__176C_18E8_0005_517D()
{
	emu_push(emu_cs); emu_push(0x18ED); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__176C_18ED_0025_D2E2();
}

/**
 * Decompiled function f__176C_18ED_0025_D2E2()
 *
 * @name f__176C_18ED_0025_D2E2
 * @implements 176C:18ED:0025:D2E2 ()
 *
 * Called From: 176C:18ED:000E:B62B
 * Called From: 176C:18ED:0005:517D
 */
void f__176C_18ED_0025_D2E2()
{
	emu_andb(&emu_ax.l, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_dx.l, emu_get_memory8(emu_es, emu_bx.x,  0x51));
	emu_addb(&emu_dx.l, emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x51), emu_dx.l);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1912); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_1912_0009_84F0();
}

/**
 * Decompiled function f__176C_1912_0009_84F0()
 *
 * @name f__176C_1912_0009_84F0
 * @implements 176C:1912:0009:84F0 ()
 *
 * Called From: 176C:1912:0025:D2E2
 */
void f__176C_1912_0009_84F0()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__176C_1478_0003_DF08(); return;
}

/**
 * Decompiled function f__176C_191B_0003_60B6()
 *
 * @name f__176C_191B_0003_60B6
 * @implements 176C:191B:0003:60B6 ()
 *
 * Called From: 176C:1592:0011:D011
 * Called From: 176C:15C7:001A:064D
 * Called From: 176C:165F:0009:B073
 */
void f__176C_191B_0003_60B6()
{
	f__176C_1476_0005_DE9C(); return;
}

/**
 * Decompiled function f__176C_191E_0006_F7CE()
 *
 * @name f__176C_191E_0006_F7CE
 * @implements 176C:191E:0006:F7CE ()
 *
 * Called From: 176C:1478:0023:356A
 * Called From: 176C:1478:0005:DE9C
 * Called From: 176C:1478:0003:DF08
 */
void f__176C_191E_0006_F7CE()
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
 * Decompiled function f__176C_1932_0029_D0CC()
 *
 * @name f__176C_1932_0029_D0CC
 * @implements 176C:1932:0029:D0CC ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1932_0029_D0CC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x195B); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	f__176C_195B_000F_3B67();
}

/**
 * Decompiled function f__176C_195B_000F_3B67()
 *
 * @name f__176C_195B_000F_3B67
 * @implements 176C:195B:000F:3B67 ()
 *
 * Called From: 176C:195B:0029:D0CC
 */
void f__176C_195B_000F_3B67()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	f__176C_196A_0002_2597(); return;
}

/**
 * Decompiled function f__176C_196A_0002_2597()
 *
 * @name f__176C_196A_0002_2597
 * @implements 176C:196A:0002:2597 ()
 *
 * Called From: 176C:1968:000F:3B67
 */
void f__176C_196A_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_196C_0027_D87A()
 *
 * @name f__176C_196C_0027_D87A
 * @implements 176C:196C:0027:D87A ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_196C_0027_D87A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1993; emu_last_cs = 0x176C; emu_last_ip = 0x197D; emu_last_length = 0x0027; emu_last_crc = 0xD87A; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	if (emu_flags.zf) { f__176C_1993_0011_A7DD(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__176C_1A3A_0006_F7CE(); return;
}

/**
 * Decompiled function f__176C_198D_0006_3D03()
 *
 * @name f__176C_198D_0006_3D03
 * @implements 176C:198D:0006:3D03 ()
 *
 * Called From: 176C:19CE:000D:EF7A
 * Called From: 176C:1A32:0006:C894
 */
void f__176C_198D_0006_3D03()
{
	emu_movw(&emu_ax.x, 0x1);
	f__176C_1A3A_0006_F7CE(); return;
}

/**
 * Decompiled function f__176C_1990_0003_DD09()
 *
 * @name f__176C_1990_0003_DD09
 * @implements 176C:1990:0003:DD09 ()
 *
 * Called From: 176C:1A37:0005:E321
 */
void f__176C_1990_0003_DD09()
{
	f__176C_1A3A_0006_F7CE(); return;
}

/**
 * Decompiled function f__176C_1993_0011_A7DD()
 *
 * @name f__176C_1993_0011_A7DD
 * @implements 176C:1993:0011:A7DD ()
 *
 * Called From: 176C:198B:0027:D87A
 */
void f__176C_1993_0011_A7DD()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x40);
	if (emu_flags.zf) { f__176C_19A4_0015_3A13(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x19A6; emu_last_cs = 0x176C; emu_last_ip = 0x19A2; emu_last_length = 0x0011; emu_last_crc = 0xA7DD; emu_call();
}

/**
 * Decompiled function f__176C_19A4_0015_3A13()
 *
 * @name f__176C_19A4_0015_3A13
 * @implements 176C:19A4:0015:3A13 ()
 *
 * Called From: 176C:199D:0011:A7DD
 */
void f__176C_19A4_0015_3A13()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__176C_19C3_000D_EF7A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x65), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x19B9; emu_last_cs = 0x176C; emu_last_ip = 0x19B5; emu_last_length = 0x0015; emu_last_crc = 0x3A13; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x198D; emu_last_cs = 0x176C; emu_last_ip = 0x19B7; emu_last_length = 0x0015; emu_last_crc = 0x3A13; emu_call();
}

/**
 * Decompiled function f__176C_19C3_000D_EF7A()
 *
 * @name f__176C_19C3_000D_EF7A
 * @implements 176C:19C3:000D:EF7A ()
 *
 * Called From: 176C:19AA:0015:3A13
 */
void f__176C_19C3_000D_EF7A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x62), 0x0);
	if (emu_flags.zf) { f__176C_19D0_0020_1A9C(); return; }
	f__176C_198D_0006_3D03(); return;
}

/**
 * Decompiled function f__176C_19D0_0020_1A9C()
 *
 * @name f__176C_19D0_0020_1A9C
 * @implements 176C:19D0:0020:1A9C ()
 *
 * Called From: 176C:19CC:000D:EF7A
 */
void f__176C_19D0_0020_1A9C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x19F0); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	f__176C_19F0_0007_A5CF();
}

/**
 * Decompiled function f__176C_19F0_0007_A5CF()
 *
 * @name f__176C_19F0_0007_A5CF
 * @implements 176C:19F0:0007:A5CF ()
 *
 * Called From: 176C:19F0:0020:1A9C
 */
void f__176C_19F0_0007_A5CF()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__176C_19F7_0008_380B(); return; }
	f__176C_1A35_0005_E321(); return;
}

/**
 * Decompiled function f__176C_19F7_0008_380B()
 *
 * @name f__176C_19F7_0008_380B
 * @implements 176C:19F7:0008:380B ()
 *
 * Called From: 176C:19F3:0007:A5CF
 */
void f__176C_19F7_0008_380B()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x19FF); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	f__176C_19FF_0014_B1B8();
}

/**
 * Decompiled function f__176C_19FF_0014_B1B8()
 *
 * @name f__176C_19FF_0014_B1B8
 * @implements 176C:19FF:0014:B1B8 ()
 *
 * Called From: 176C:19FF:0008:380B
 */
void f__176C_19FF_0014_B1B8()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1A13); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	f__176C_1A13_001C_19A0();
}

/**
 * Decompiled function f__176C_1A13_001C_19A0()
 *
 * @name f__176C_1A13_001C_19A0
 * @implements 176C:1A13:001C:19A0 ()
 *
 * Called From: 176C:1A13:0014:B1B8
 */
void f__176C_1A13_001C_19A0()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.zf) { f__176C_1A35_0005_E321(); return; }
	emu_push(emu_di);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1A2F); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	f__176C_1A2F_0006_C894();
}

/**
 * Decompiled function f__176C_1A2F_0006_C894()
 *
 * @name f__176C_1A2F_0006_C894
 * @implements 176C:1A2F:0006:C894 ()
 *
 * Called From: 176C:1A2F:001C:19A0
 */
void f__176C_1A2F_0006_C894()
{
	emu_addws(&emu_sp, 0xA);
	f__176C_198D_0006_3D03(); return;
}

/**
 * Decompiled function f__176C_1A35_0005_E321()
 *
 * @name f__176C_1A35_0005_E321
 * @implements 176C:1A35:0005:E321 ()
 *
 * Called From: 176C:19F5:0007:A5CF
 * Called From: 176C:1A1B:001C:19A0
 */
void f__176C_1A35_0005_E321()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_1990_0003_DD09(); return;
}

/**
 * Decompiled function f__176C_1A3A_0006_F7CE()
 *
 * @name f__176C_1A3A_0006_F7CE
 * @implements 176C:1A3A:0006:F7CE ()
 *
 * Called From: 176C:1990:0003:DD09
 * Called From: 176C:1990:0006:3D03
 * Called From: 176C:1990:0027:D87A
 */
void f__176C_1A3A_0006_F7CE()
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
 * Decompiled function f__176C_1A40_0020_8DC9()
 *
 * @name f__176C_1A40_0020_8DC9
 * @implements 176C:1A40:0020:8DC9 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1A40_0020_8DC9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1A60); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	f__176C_1A60_000B_311C();
}

/**
 * Decompiled function f__176C_1A60_000B_311C()
 *
 * @name f__176C_1A60_000B_311C
 * @implements 176C:1A60:000B:311C ()
 *
 * Called From: 176C:1A60:0020:8DC9
 */
void f__176C_1A60_000B_311C()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1A8E; emu_last_cs = 0x176C; emu_last_ip = 0x1A63; emu_last_length = 0x000B; emu_last_crc = 0x311C; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1A6B); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	f__176C_1A6B_001E_596A();
}

/**
 * Decompiled function f__176C_1A6B_001E_596A()
 *
 * @name f__176C_1A6B_001E_596A
 * @implements 176C:1A6B:001E:596A ()
 *
 * Called From: 176C:1A6B:000B:311C
 */
void f__176C_1A6B_001E_596A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1A89); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	f__176C_1A89_0005_832E();
}

/**
 * Decompiled function f__176C_1A89_0005_832E()
 *
 * @name f__176C_1A89_0005_832E
 * @implements 176C:1A89:0005:832E ()
 *
 * Called From: 176C:1A89:001E:596A
 */
void f__176C_1A89_0005_832E()
{
	emu_addws(&emu_sp, 0x8);
	f__176C_1A9A_0005_8BCF(); return;
}

/**
 * Decompiled function f__176C_1A9A_0005_8BCF()
 *
 * @name f__176C_1A9A_0005_8BCF
 * @implements 176C:1A9A:0005:8BCF ()
 *
 * Called From: 176C:1A8C:0005:832E
 */
void f__176C_1A9A_0005_8BCF()
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
 * Decompiled function f__176C_1A9F_0024_813F()
 *
 * @name f__176C_1A9F_0024_813F
 * @implements 176C:1A9F:0024:813F ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1A9F_0024_813F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__176C_1B32_000E_93EA(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1AC3); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	f__176C_1AC3_0016_C3C3();
}

/**
 * Decompiled function f__176C_1AC3_0016_C3C3()
 *
 * @name f__176C_1AC3_0016_C3C3
 * @implements 176C:1AC3:0016:C3C3 ()
 *
 * Called From: 176C:1AC3:0024:813F
 */
void f__176C_1AC3_0016_C3C3()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1B32; emu_last_cs = 0x176C; emu_last_ip = 0x1AC6; emu_last_length = 0x0016; emu_last_crc = 0xC3C3; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { f__176C_1B1F_000E_16A7(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1AD9); emu_cs = 0x167E; f__167E_02AE_000C_CC85();
	f__176C_1AD9_0022_3A4A();
}

/**
 * Decompiled function f__176C_1AD9_0022_3A4A()
 *
 * @name f__176C_1AD9_0022_3A4A
 * @implements 176C:1AD9:0022:3A4A ()
 *
 * Called From: 176C:1AD9:0016:C3C3
 */
void f__176C_1AD9_0022_3A4A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1AFB; emu_last_cs = 0x176C; emu_last_ip = 0x1AE6; emu_last_length = 0x0022; emu_last_crc = 0x3A4A; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x72), 0xFF);
	f__176C_1B1D_0002_C8BA(); return;
}

/**
 * Decompiled function f__176C_1B1D_0002_C8BA()
 *
 * @name f__176C_1B1D_0002_C8BA
 * @implements 176C:1B1D:0002:C8BA ()
 *
 * Called From: 176C:1AF9:0022:3A4A
 */
void f__176C_1B1D_0002_C8BA()
{
	f__176C_1B30_0002_C53A(); return;
}

/**
 * Decompiled function f__176C_1B1F_000E_16A7()
 *
 * @name f__176C_1B1F_000E_16A7
 * @implements 176C:1B1F:000E:16A7 ()
 *
 * Called From: 176C:1AD1:0016:C3C3
 */
void f__176C_1B1F_000E_16A7()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1B2D); emu_cs = 0x1A34; f__1A34_1B68_0019_AAA0();
	f__176C_1B2D_0005_81EE();
}

/**
 * Decompiled function f__176C_1B2D_0005_81EE()
 *
 * @name f__176C_1B2D_0005_81EE
 * @implements 176C:1B2D:0005:81EE ()
 *
 * Called From: 176C:1B2D:000E:16A7
 */
void f__176C_1B2D_0005_81EE()
{
	emu_addws(&emu_sp, 0x6);
	f__176C_1B3C_0004_E839(); return;
}

/**
 * Decompiled function f__176C_1B30_0002_C53A()
 *
 * @name f__176C_1B30_0002_C53A
 * @implements 176C:1B30:0002:C53A ()
 *
 * Called From: 176C:1B1D:0002:C8BA
 */
void f__176C_1B30_0002_C53A()
{
	f__176C_1B3C_0004_E839(); return;
}

/**
 * Decompiled function f__176C_1B32_000E_93EA()
 *
 * @name f__176C_1B32_000E_93EA
 * @implements 176C:1B32:000E:93EA ()
 *
 * Called From: 176C:1ABB:0024:813F
 */
void f__176C_1B32_000E_93EA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_1B40_0005_8BCF(); return;
}

/**
 * Decompiled function f__176C_1B3C_0004_E839()
 *
 * @name f__176C_1B3C_0004_E839
 * @implements 176C:1B3C:0004:E839 ()
 *
 * Called From: 176C:1B30:0005:81EE
 * Called From: 176C:1B30:0002:C53A
 */
void f__176C_1B3C_0004_E839()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_1B40_0005_8BCF(); return;
}

/**
 * Decompiled function f__176C_1B40_0005_8BCF()
 *
 * @name f__176C_1B40_0005_8BCF
 * @implements 176C:1B40:0005:8BCF ()
 *
 * Called From: 176C:1B3E:000E:93EA
 * Called From: 176C:1B3E:0004:E839
 */
void f__176C_1B40_0005_8BCF()
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
 * Decompiled function f__176C_1B45_0022_208C()
 *
 * @name f__176C_1B45_0022_208C
 * @implements 176C:1B45:0022:208C ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1B45_0022_208C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__176C_1B6C_000F_B729(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1B67); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	f__176C_1B67_0014_1CF3();
}

/**
 * Decompiled function f__176C_1B67_0014_1CF3()
 *
 * @name f__176C_1B67_0014_1CF3
 * @implements 176C:1B67:0014:1CF3 ()
 *
 * Called From: 176C:1B67:0022:208C
 */
void f__176C_1B67_0014_1CF3()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__176C_1B7B_0006_67E5(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x1BFC; emu_last_cs = 0x176C; emu_last_ip = 0x1B78; emu_last_length = 0x0014; emu_last_crc = 0x1CF3; emu_call();
}

/**
 * Decompiled function f__176C_1B6C_000F_B729()
 *
 * @name f__176C_1B6C_000F_B729
 * @implements 176C:1B6C:000F:B729 ()
 *
 * Called From: 176C:1B5F:0022:208C
 */
void f__176C_1B6C_000F_B729()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_1BFC_0004_DE52(); return;
}

/**
 * Decompiled function f__176C_1B78_0003_5D00()
 *
 * @name f__176C_1B78_0003_5D00
 * @implements 176C:1B78:0003:5D00 ()
 *
 * Called From: 176C:1BF9:000E:CBCA
 */
void f__176C_1B78_0003_5D00()
{
	f__176C_1BFC_0004_DE52(); return;
}

/**
 * Decompiled function f__176C_1B7B_0006_67E5()
 *
 * @name f__176C_1B7B_0006_67E5
 * @implements 176C:1B7B:0006:67E5 ()
 *
 * Called From: 176C:1B6A:0014:1CF3
 */
void f__176C_1B7B_0006_67E5()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1B81); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	f__176C_1B81_0014_B1B8();
}

/**
 * Decompiled function f__176C_1B81_0014_B1B8()
 *
 * @name f__176C_1B81_0014_B1B8
 * @implements 176C:1B81:0014:B1B8 ()
 *
 * Called From: 176C:1B81:0006:67E5
 */
void f__176C_1B81_0014_B1B8()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1B95); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	f__176C_1B95_001B_C960();
}

/**
 * Decompiled function f__176C_1B95_001B_C960()
 *
 * @name f__176C_1B95_001B_C960
 * @implements 176C:1B95:001B:C960 ()
 *
 * Called From: 176C:1B95:0014:B1B8
 */
void f__176C_1B95_001B_C960()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x40);
	if (emu_flags.zf) { f__176C_1BB0_0026_E434(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), emu_si);
	/* Unresolved jump */ emu_ip = 0x1BD9; emu_last_cs = 0x176C; emu_last_ip = 0x1BAE; emu_last_length = 0x001B; emu_last_crc = 0xC960; emu_call();
}

/**
 * Decompiled function f__176C_1BB0_0026_E434()
 *
 * @name f__176C_1BB0_0026_E434
 * @implements 176C:1BB0:0026:E434 ()
 *
 * Called From: 176C:1BA4:001B:C960
 */
void f__176C_1BB0_0026_E434()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1BD6); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	f__176C_1BD6_0018_0010();
}

/**
 * Decompiled function f__176C_1BD6_0018_0010()
 *
 * @name f__176C_1BD6_0018_0010
 * @implements 176C:1BD6:0018:0010 ()
 *
 * Called From: 176C:1BD6:0026:E434
 */
void f__176C_1BD6_0018_0010()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1BEE); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	f__176C_1BEE_000E_CBCA();
}

/**
 * Decompiled function f__176C_1BEE_000E_CBCA()
 *
 * @name f__176C_1BEE_000E_CBCA
 * @implements 176C:1BEE:000E:CBCA ()
 *
 * Called From: 176C:1BEE:0018:0010
 */
void f__176C_1BEE_000E_CBCA()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x54));
	f__176C_1B78_0003_5D00(); return;
}

/**
 * Decompiled function f__176C_1BFC_0004_DE52()
 *
 * @name f__176C_1BFC_0004_DE52
 * @implements 176C:1BFC:0004:DE52 ()
 *
 * Called From: 176C:1B78:000F:B729
 * Called From: 176C:1B78:0003:5D00
 */
void f__176C_1BFC_0004_DE52()
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
 * Decompiled function f__176C_1C00_003A_E6C7()
 *
 * @name f__176C_1C00_003A_E6C7
 * @implements 176C:1C00:003A:E6C7 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1C00_003A_E6C7()
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__176C_1C3A_000D_7589(); return; }
	emu_cmpws(&emu_si, 0x5);
	if (!emu_flags.zf) { f__176C_1C3A_000D_7589(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x50), 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1C3A; emu_last_cs = 0x176C; emu_last_ip = 0x1C34; emu_last_length = 0x003A; emu_last_crc = 0xE6C7; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x1C4C; emu_last_cs = 0x176C; emu_last_ip = 0x1C38; emu_last_length = 0x003A; emu_last_crc = 0xE6C7; emu_call();
}

/**
 * Decompiled function f__176C_1C36_0004_E139()
 *
 * @name f__176C_1C36_0004_E139
 * @implements 176C:1C36:0004:E139 ()
 *
 * Called From: 176C:1C4A:0005:F1EE
 */
void f__176C_1C36_0004_E139()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_1C4C_0003_2E57(); return;
}

/**
 * Decompiled function f__176C_1C3A_000D_7589()
 *
 * @name f__176C_1C3A_000D_7589
 * @implements 176C:1C3A:000D:7589 ()
 *
 * Called From: 176C:1C24:003A:E6C7
 * Called From: 176C:1C29:003A:E6C7
 */
void f__176C_1C3A_000D_7589()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs);
	emu_push(0x1C47); f__176C_000E_000E_633D();
	f__176C_1C47_0005_F1EE();
}

/**
 * Decompiled function f__176C_1C47_0005_F1EE()
 *
 * @name f__176C_1C47_0005_F1EE
 * @implements 176C:1C47:0005:F1EE ()
 *
 * Called From: 176C:1C47:000D:7589
 */
void f__176C_1C47_0005_F1EE()
{
	emu_addws(&emu_sp, 0x6);
	f__176C_1C36_0004_E139(); return;
}

/**
 * Decompiled function f__176C_1C4C_0003_2E57()
 *
 * @name f__176C_1C4C_0003_2E57
 * @implements 176C:1C4C:0003:2E57 ()
 *
 * Called From: 176C:1C38:0004:E139
 */
void f__176C_1C4C_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1C4F_0017_E375()
 *
 * @name f__176C_1C4F_0017_E375
 * @implements 176C:1C4F:0017:E375 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1C4F_0017_E375()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x28));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs);
	emu_push(0x1C66); f__176C_000E_000E_633D();
	f__176C_1C66_0007_F90C();
}

/**
 * Decompiled function f__176C_1C66_0007_F90C()
 *
 * @name f__176C_1C66_0007_F90C
 * @implements 176C:1C66:0007:F90C ()
 *
 * Called From: 176C:1C66:0017:E375
 */
void f__176C_1C66_0007_F90C()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_1C6D_0002_2597(); return;
}

/**
 * Decompiled function f__176C_1C6D_0002_2597()
 *
 * @name f__176C_1C6D_0002_2597
 * @implements 176C:1C6D:0002:2597 ()
 *
 * Called From: 176C:1C6B:0007:F90C
 */
void f__176C_1C6D_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1C6F_001D_2E46()
 *
 * @name f__176C_1C6F_001D_2E46
 * @implements 176C:1C6F:001D:2E46 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1C6F_001D_2E46()
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
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1C8C); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	f__176C_1C8C_0025_9AD8();
}

/**
 * Decompiled function f__176C_1C8C_0025_9AD8()
 *
 * @name f__176C_1C8C_0025_9AD8
 * @implements 176C:1C8C:0025:9AD8 ()
 *
 * Called From: 176C:1C8C:001D:2E46
 */
void f__176C_1C8C_0025_9AD8()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1CF7; emu_last_cs = 0x176C; emu_last_ip = 0x1C8F; emu_last_length = 0x0025; emu_last_crc = 0x9AD8; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	if (emu_flags.zf) { f__176C_1CAB_0006_67E5(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), 0x8000);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1CBE; emu_last_cs = 0x176C; emu_last_ip = 0x1CA9; emu_last_length = 0x0025; emu_last_crc = 0x9AD8; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1CB1); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	f__176C_1CB1_0030_808F();
}

/**
 * Decompiled function f__176C_1CAB_0006_67E5()
 *
 * @name f__176C_1CAB_0006_67E5
 * @implements 176C:1CAB:0006:67E5 ()
 *
 * Called From: 176C:1C9D:0025:9AD8
 */
void f__176C_1CAB_0006_67E5()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1CB1); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	f__176C_1CB1_0030_808F();
}

/**
 * Decompiled function f__176C_1CB1_0030_808F()
 *
 * @name f__176C_1CB1_0030_808F
 * @implements 176C:1CB1:0030:808F ()
 *
 * Called From: 176C:1CB1:0006:67E5
 * Called From: 176C:1CB1:0025:9AD8
 */
void f__176C_1CB1_0030_808F()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4B), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x49), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1CE1); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	f__176C_1CE1_0011_5754();
}

/**
 * Decompiled function f__176C_1CE1_0011_5754()
 *
 * @name f__176C_1CE1_0011_5754
 * @implements 176C:1CE1:0011:5754 ()
 *
 * Called From: 176C:1CE1:0030:808F
 */
void f__176C_1CE1_0011_5754()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1CF2); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	f__176C_1CF2_0005_856E();
}

/**
 * Decompiled function f__176C_1CF2_0005_856E()
 *
 * @name f__176C_1CF2_0005_856E
 * @implements 176C:1CF2:0005:856E ()
 *
 * Called From: 176C:1CF2:0011:5754
 */
void f__176C_1CF2_0005_856E()
{
	emu_addws(&emu_sp, 0xA);
	f__176C_1CF7_0004_E839(); return;
}

/**
 * Decompiled function f__176C_1CF7_0004_E839()
 *
 * @name f__176C_1CF7_0004_E839
 * @implements 176C:1CF7:0004:E839 ()
 *
 * Called From: 176C:1CF5:0005:856E
 */
void f__176C_1CF7_0004_E839()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_1CFB_0003_2E57(); return;
}

/**
 * Decompiled function f__176C_1CFB_0003_2E57()
 *
 * @name f__176C_1CFB_0003_2E57
 * @implements 176C:1CFB:0003:2E57 ()
 *
 * Called From: 176C:1CF9:0004:E839
 */
void f__176C_1CFB_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1CFE_0021_29C8()
 *
 * @name f__176C_1CFE_0021_29C8
 * @implements 176C:1CFE:0021:29C8 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1CFE_0021_29C8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_cmpws(&emu_bx.x, 0x13);
	if ((emu_flags.cf || emu_flags.zf)) { f__176C_1D1F_0007_2700(); return; }
	/* Unresolved jump */ emu_ip = 0x1EF0; emu_last_cs = 0x176C; emu_last_ip = 0x1D1C; emu_last_length = 0x0021; emu_last_crc = 0x29C8; emu_call();
}

/**
 * Decompiled function f__176C_1D1F_0007_2700()
 *
 * @name f__176C_1D1F_0007_2700
 * @implements 176C:1D1F:0007:2700 ()
 *
 * Called From: 176C:1D1A:0021:29C8
 */
void f__176C_1D1F_0007_2700()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x1EF9);
	switch (emu_ip) {
		case 0x1D26: f__176C_1D26_001C_20D8(); return;
		case 0x1D49: f__176C_1D49_0011_A7DD(); return;
		case 0x1D5E: f__176C_1D5E_0015_6E8A(); return;
		case 0x1D76: f__176C_1D76_000D_4158(); return;
		case 0x1D97: f__176C_1D97_000E_1C4C(); return;
		case 0x1DA5: f__176C_1DA5_000D_A25B(); return;
		case 0x1DD5: f__176C_1DD5_000A_4B25(); return;
		case 0x1DDF: f__176C_1DDF_000B_97FD(); return;
		case 0x1DEA: f__176C_1DEA_0023_0DDB(); return;
		case 0x1E1A: f__176C_1E1A_000C_8FD9(); return;
		case 0x1E7B: f__176C_1E7B_0022_D1C1(); return;
		case 0x1EA2: f__176C_1EA2_0013_17AE(); return;
		case 0x1EDA: f__176C_1EDA_0011_AFFD(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x176C; emu_last_ip = 0x1D21; emu_last_length = 0x0007; emu_last_crc = 0x2700;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__176C_1D26_001C_20D8()
 *
 * @name f__176C_1D26_001C_20D8
 * @implements 176C:1D26:001C:20D8 ()
 *
 * Called From: 176C:1D21:0007:2700
 */
void f__176C_1D26_001C_20D8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ds, 0x00,  0x3A38));
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__176C_1D42_0007_59B8(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x1D44; emu_last_cs = 0x176C; emu_last_ip = 0x1D40; emu_last_length = 0x001C; emu_last_crc = 0x20D8; emu_call();
}

/**
 * Decompiled function f__176C_1D42_0007_59B8()
 *
 * @name f__176C_1D42_0007_59B8
 * @implements 176C:1D42:0007:59B8 ()
 *
 * Called From: 176C:1D3B:001C:20D8
 */
void f__176C_1D42_0007_59B8()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	f__176C_1EF2_0004_68F2(); return;
}

/**
 * Decompiled function f__176C_1D44_0005_59DD()
 *
 * @name f__176C_1D44_0005_59DD
 * @implements 176C:1D44:0005:59DD ()
 *
 * Called From: 176C:1D5C:0004:9B39
 * Called From: 176C:1DA3:000E:1C4C
 * Called From: 176C:1E23:000C:8FD9
 * Called From: 176C:1E38:0005:B06F
 * Called From: 176C:1E45:0005:67BF
 * Called From: 176C:1E9F:0005:865C
 * Called From: 176C:1E9F:0003:E208
 * Called From: 176C:1EB7:0005:E396
 * Called From: 176C:1EB7:0003:E202
 * Called From: 176C:1EC9:0008:FE8A
 * Called From: 176C:1EED:0003:6235
 */
void f__176C_1D44_0005_59DD()
{
	emu_movw(&emu_si, emu_ax.x);
	f__176C_1EF2_0004_68F2(); return;
}

/**
 * Decompiled function f__176C_1D49_0011_A7DD()
 *
 * @name f__176C_1D49_0011_A7DD
 * @implements 176C:1D49:0011:A7DD ()
 *
 * Called From: 176C:1D21:0007:2700
 */
void f__176C_1D49_0011_A7DD()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x40);
	if (emu_flags.zf) { f__176C_1D5A_0004_9B39(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x1D5C; emu_last_cs = 0x176C; emu_last_ip = 0x1D58; emu_last_length = 0x0011; emu_last_crc = 0xA7DD; emu_call();
}

/**
 * Decompiled function f__176C_1D5A_0004_9B39()
 *
 * @name f__176C_1D5A_0004_9B39
 * @implements 176C:1D5A:0004:9B39 ()
 *
 * Called From: 176C:1D53:0011:A7DD
 */
void f__176C_1D5A_0004_9B39()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_1D44_0005_59DD(); return;
}

/**
 * Decompiled function f__176C_1D5E_0015_6E8A()
 *
 * @name f__176C_1D5E_0015_6E8A
 * @implements 176C:1D5E:0015:6E8A ()
 *
 * Called From: 176C:1D21:0007:2700
 */
void f__176C_1D5E_0015_6E8A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x1D73); emu_cs = 0x34C1; ovl__34C1(2);
	f__176C_1D73_0003_1D10();
}

/**
 * Decompiled function f__176C_1D73_0003_1D10()
 *
 * @name f__176C_1D73_0003_1D10
 * @implements 176C:1D73:0003:1D10 ()
 *
 * Called From: 176C:1D73:0015:6E8A
 */
void f__176C_1D73_0003_1D10()
{
	f__176C_1E36_0005_B06F(); return;
}

/**
 * Decompiled function f__176C_1D76_000D_4158()
 *
 * @name f__176C_1D76_000D_4158
 * @implements 176C:1D76:000D:4158 ()
 *
 * Called From: 176C:1D21:0007:2700
 */
void f__176C_1D76_000D_4158()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x56));
	emu_push(emu_cs); emu_push(0x1D83); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	f__176C_1D83_000F_8B05();
}

/**
 * Decompiled function f__176C_1D83_000F_8B05()
 *
 * @name f__176C_1D83_000F_8B05
 * @implements 176C:1D83:000F:8B05 ()
 *
 * Called From: 176C:1D83:000D:4158
 */
void f__176C_1D83_000F_8B05()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__176C_1D92_0005_BC21(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x56));
	f__176C_1D94_0003_DDB6(); return;
}

/**
 * Decompiled function f__176C_1D92_0005_BC21()
 *
 * @name f__176C_1D92_0005_BC21
 * @implements 176C:1D92:0005:BC21 ()
 *
 * Called From: 176C:1D86:000F:8B05
 */
void f__176C_1D92_0005_BC21()
{
	emu_xorw(&emu_si, emu_si);
	f__176C_1EF2_0004_68F2(); return;
}

/**
 * Decompiled function f__176C_1D94_0003_DDB6()
 *
 * @name f__176C_1D94_0003_DDB6
 * @implements 176C:1D94:0003:DDB6 ()
 *
 * Called From: 176C:1D90:000F:8B05
 */
void f__176C_1D94_0003_DDB6()
{
	f__176C_1EF2_0004_68F2(); return;
}

/**
 * Decompiled function f__176C_1D97_000E_1C4C()
 *
 * @name f__176C_1D97_000E_1C4C
 * @implements 176C:1D97:000E:1C4C ()
 *
 * Called From: 176C:1D21:0007:2700
 */
void f__176C_1D97_000E_1C4C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x50));
	emu_movb(&emu_cx.l, 0x8);
	emu_shlw(&emu_ax.x, emu_cx.l);
	f__176C_1D44_0005_59DD(); return;
}

/**
 * Decompiled function f__176C_1DA5_000D_A25B()
 *
 * @name f__176C_1DA5_000D_A25B
 * @implements 176C:1DA5:000D:A25B ()
 *
 * Called From: 176C:1D21:0007:2700
 */
void f__176C_1DA5_000D_A25B()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1DB2); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__176C_1DB2_0003_5D00();
}

/**
 * Decompiled function f__176C_1DB2_0003_5D00()
 *
 * @name f__176C_1DB2_0003_5D00
 * @implements 176C:1DB2:0003:5D00 ()
 *
 * Called From: 176C:1DB2:000D:A25B
 */
void f__176C_1DB2_0003_5D00()
{
	f__176C_1E36_0005_B06F(); return;
}

/**
 * Decompiled function f__176C_1DD5_000A_4B25()
 *
 * @name f__176C_1DD5_000A_4B25
 * @implements 176C:1DD5:000A:4B25 ()
 *
 * Called From: 176C:1D21:0007:2700
 */
void f__176C_1DD5_000A_4B25()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	f__176C_1E43_0005_67BF(); return;
}

/**
 * Decompiled function f__176C_1DDF_000B_97FD()
 *
 * @name f__176C_1DDF_000B_97FD
 * @implements 176C:1DDF:000B:97FD ()
 *
 * Called From: 176C:1D21:0007:2700
 */
void f__176C_1DDF_000B_97FD()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x54));
	f__176C_1EF2_0004_68F2(); return;
}

/**
 * Decompiled function f__176C_1DEA_0023_0DDB()
 *
 * @name f__176C_1DEA_0023_0DDB
 * @implements 176C:1DEA:0023:0DDB ()
 *
 * Called From: 176C:1D21:0007:2700
 */
void f__176C_1DEA_0023_0DDB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4D), 0x0);
	if (emu_flags.zf) { f__176C_1E00_000D_B2F8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { f__176C_1E0F_000B_0748(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1E0D); emu_cs = 0x1A34; f__1A34_3312_0017_29E8();
	f__176C_1E0D_000D_CADA();
}

/**
 * Decompiled function f__176C_1E00_000D_B2F8()
 *
 * @name f__176C_1E00_000D_B2F8
 * @implements 176C:1E00:000D:B2F8 ()
 *
 * Called From: 176C:1DF3:0023:0DDB
 */
void f__176C_1E00_000D_B2F8()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1E0D); emu_cs = 0x1A34; f__1A34_3312_0017_29E8();
	f__176C_1E0D_000D_CADA();
}

/**
 * Decompiled function f__176C_1E0D_000D_CADA()
 *
 * @name f__176C_1E0D_000D_CADA
 * @implements 176C:1E0D:000D:CADA ()
 *
 * Called From: 176C:1E0D:000D:B2F8
 * Called From: 176C:1E0D:0023:0DDB
 */
void f__176C_1E0D_000D_CADA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4D));
	f__176C_1EF2_0004_68F2(); return;
}

/**
 * Decompiled function f__176C_1E0F_000B_0748()
 *
 * @name f__176C_1E0F_000B_0748
 * @implements 176C:1E0F:000B:0748 ()
 *
 * Called From: 176C:1DFE:0023:0DDB
 */
void f__176C_1E0F_000B_0748()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4D));
	f__176C_1EF2_0004_68F2(); return;
}

/**
 * Decompiled function f__176C_1E1A_000C_8FD9()
 *
 * @name f__176C_1E1A_000C_8FD9
 * @implements 176C:1E1A:000C:8FD9 ()
 *
 * Called From: 176C:1D21:0007:2700
 */
void f__176C_1E1A_000C_8FD9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	f__176C_1D44_0005_59DD(); return;
}

/**
 * Decompiled function f__176C_1E36_0005_B06F()
 *
 * @name f__176C_1E36_0005_B06F
 * @implements 176C:1E36:0005:B06F ()
 *
 * Called From: 176C:1D73:0003:1D10
 * Called From: 176C:1DB2:0003:5D00
 */
void f__176C_1E36_0005_B06F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__176C_1D44_0005_59DD(); return;
}

/**
 * Decompiled function f__176C_1E43_0005_67BF()
 *
 * @name f__176C_1E43_0005_67BF
 * @implements 176C:1E43:0005:67BF ()
 *
 * Called From: 176C:1DDD:000A:4B25
 */
void f__176C_1E43_0005_67BF()
{
	emu_movb(&emu_ax.h, 0x0);
	f__176C_1D44_0005_59DD(); return;
}

/**
 * Decompiled function f__176C_1E7B_0022_D1C1()
 *
 * @name f__176C_1E7B_0022_D1C1
 * @implements 176C:1E7B:0022:D1C1 ()
 *
 * Called From: 176C:1D21:0007:2700
 */
void f__176C_1E7B_0022_D1C1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x63));
	emu_movb(&emu_ax.h, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_dx.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_dx.h, 0x0);
	emu_subw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_1E9D_0005_865C(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__176C_1E9F_0003_E208(); return;
}

/**
 * Decompiled function f__176C_1E9D_0005_865C()
 *
 * @name f__176C_1E9D_0005_865C
 * @implements 176C:1E9D:0005:865C ()
 *
 * Called From: 176C:1E95:0022:D1C1
 */
void f__176C_1E9D_0005_865C()
{
	emu_movw(&emu_ax.x, emu_si);
	f__176C_1D44_0005_59DD(); return;
}

/**
 * Decompiled function f__176C_1E9F_0003_E208()
 *
 * @name f__176C_1E9F_0003_E208
 * @implements 176C:1E9F:0003:E208 ()
 *
 * Called From: 176C:1E9B:0022:D1C1
 */
void f__176C_1E9F_0003_E208()
{
	f__176C_1D44_0005_59DD(); return;
}

/**
 * Decompiled function f__176C_1EA2_0013_17AE()
 *
 * @name f__176C_1EA2_0013_17AE
 * @implements 176C:1EA2:0013:17AE ()
 *
 * Called From: 176C:1D21:0007:2700
 */
void f__176C_1EA2_0013_17AE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	if (emu_flags.zf) { f__176C_1EB5_0005_E396(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__176C_1EB7_0003_E202(); return;
}

/**
 * Decompiled function f__176C_1EB5_0005_E396()
 *
 * @name f__176C_1EB5_0005_E396
 * @implements 176C:1EB5:0005:E396 ()
 *
 * Called From: 176C:1EAE:0013:17AE
 */
void f__176C_1EB5_0005_E396()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_1D44_0005_59DD(); return;
}

/**
 * Decompiled function f__176C_1EB7_0003_E202()
 *
 * @name f__176C_1EB7_0003_E202
 * @implements 176C:1EB7:0003:E202 ()
 *
 * Called From: 176C:1EB3:0013:17AE
 */
void f__176C_1EB7_0003_E202()
{
	f__176C_1D44_0005_59DD(); return;
}

/**
 * Decompiled function f__176C_1EC4_0008_FE8A()
 *
 * @name f__176C_1EC4_0008_FE8A
 * @implements 176C:1EC4:0008:FE8A ()
 *
 * Called From: 0642:0330:0007:2A20
 */
void f__176C_1EC4_0008_FE8A()
{
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbw(&emu_ax.x, emu_ax.x);
	emu_incw(&emu_ax.x);
	f__176C_1D44_0005_59DD(); return;
}

/**
 * Decompiled function f__176C_1EDA_0011_AFFD()
 *
 * @name f__176C_1EDA_0011_AFFD
 * @implements 176C:1EDA:0011:AFFD ()
 *
 * Called From: 176C:1D21:0007:2700
 */
void f__176C_1EDA_0011_AFFD()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x200);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1EEB; emu_last_cs = 0x176C; emu_last_ip = 0x1EE4; emu_last_length = 0x0011; emu_last_crc = 0xAFFD; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__176C_1EED_0003_6235(); return;
}

/**
 * Decompiled function f__176C_1EED_0003_6235()
 *
 * @name f__176C_1EED_0003_6235
 * @implements 176C:1EED:0003:6235 ()
 *
 * Called From: 176C:1EE9:0011:AFFD
 */
void f__176C_1EED_0003_6235()
{
	f__176C_1D44_0005_59DD(); return;
}

/**
 * Decompiled function f__176C_1EF2_0004_68F2()
 *
 * @name f__176C_1EF2_0004_68F2
 * @implements 176C:1EF2:0004:68F2 ()
 *
 * Called From: 176C:1D46:0007:59B8
 * Called From: 176C:1D46:0005:59DD
 * Called From: 176C:1D94:0003:DDB6
 * Called From: 176C:1D94:0005:BC21
 * Called From: 176C:1DE7:000B:97FD
 * Called From: 176C:1E17:000B:0748
 * Called From: 176C:1E17:000D:CADA
 */
void f__176C_1EF2_0004_68F2()
{
	emu_movw(&emu_ax.x, emu_si);
	f__176C_1EF6_0003_2E57(); return;
}

/**
 * Decompiled function f__176C_1EF6_0003_2E57()
 *
 * @name f__176C_1EF6_0003_2E57
 * @implements 176C:1EF6:0003:2E57 ()
 *
 * Called From: 176C:1EF4:0004:68F2
 */
void f__176C_1EF6_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1F21_001C_8C6C()
 *
 * @name f__176C_1F21_001C_8C6C
 * @implements 176C:1F21:001C:8C6C ()
 *
 * Called From: 1319:00B3:000B:6FE3
 * Called From: 1319:0109:000B:6FD3
 * Called From: 1319:01BE:000B:6FD3
 * Called From: 1319:035B:000B:6FF3
 * Called From: 1319:0523:0006:FC3B
 * Called From: 1319:063A:0010:D054
 */
void f__176C_1F21_001C_8C6C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_cx.l, 0x5);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1F3D); emu_cs = 0x1A34; f__1A34_3146_0018_6887();
	f__176C_1F3D_0011_CE3C();
}

/**
 * Decompiled function f__176C_1F3D_0011_CE3C()
 *
 * @name f__176C_1F3D_0011_CE3C
 * @implements 176C:1F3D:0011:CE3C ()
 *
 * Called From: 176C:1F3D:001C:8C6C
 */
void f__176C_1F3D_0011_CE3C()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__176C_1F4A_0004_68F2(); return; }
	emu_movw(&emu_si, 0x100);
	emu_movw(&emu_ax.x, emu_si);
	f__176C_1F4E_0003_2E57(); return;
}

/**
 * Decompiled function f__176C_1F4A_0004_68F2()
 *
 * @name f__176C_1F4A_0004_68F2
 * @implements 176C:1F4A:0004:68F2 ()
 *
 * Called From: 176C:1F45:0011:CE3C
 */
void f__176C_1F4A_0004_68F2()
{
	emu_movw(&emu_ax.x, emu_si);
	f__176C_1F4E_0003_2E57(); return;
}

/**
 * Decompiled function f__176C_1F4E_0003_2E57()
 *
 * @name f__176C_1F4E_0003_2E57
 * @implements 176C:1F4E:0003:2E57 ()
 *
 * Called From: 176C:1F4C:0004:68F2
 * Called From: 176C:1F4C:0011:CE3C
 */
void f__176C_1F4E_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1F51_002F_CE9F()
 *
 * @name f__176C_1F51_002F_CE9F
 * @implements 176C:1F51:002F:CE9F ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1F51_002F_CE9F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	if (emu_flags.zf) { f__176C_1F80_0008_D020(); return; }
	f__176C_2122_0006_4202(); return;
}

/**
 * Decompiled function f__176C_1F80_0008_D020()
 *
 * @name f__176C_1F80_0008_D020
 * @implements 176C:1F80:0008:D020 ()
 *
 * Called From: 176C:1F7B:002F:CE9F
 */
void f__176C_1F80_0008_D020()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1F88); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	f__176C_1F88_0008_F739();
}

/**
 * Decompiled function f__176C_1F88_0008_F739()
 *
 * @name f__176C_1F88_0008_F739
 * @implements 176C:1F88:0008:F739 ()
 *
 * Called From: 176C:1F88:0008:D020
 */
void f__176C_1F88_0008_F739()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__176C_1F90_0011_1BC3(); return; }
	f__176C_2122_0006_4202(); return;
}

/**
 * Decompiled function f__176C_1F90_0011_1BC3()
 *
 * @name f__176C_1F90_0011_1BC3
 * @implements 176C:1F90:0011:1BC3 ()
 *
 * Called From: 176C:1F8B:0008:F739
 */
void f__176C_1F90_0011_1BC3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1FA1); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__176C_1FA1_000D_5C7A();
}

/**
 * Decompiled function f__176C_1FA1_000D_5C7A()
 *
 * @name f__176C_1FA1_000D_5C7A
 * @implements 176C:1FA1:000D:5C7A ()
 *
 * Called From: 176C:1FA1:0011:1BC3
 */
void f__176C_1FA1_000D_5C7A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1FAE); emu_cs = 0x167E; f__167E_0162_000D_A6D2();
	f__176C_1FAE_0020_8494();
}

/**
 * Decompiled function f__176C_1FAE_0020_8494()
 *
 * @name f__176C_1FAE_0020_8494
 * @implements 176C:1FAE:0020:8494 ()
 *
 * Called From: 176C:1FAE:000D:5C7A
 */
void f__176C_1FAE_0020_8494()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__176C_1FCE_0013_2F1E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x72), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x2128; emu_last_cs = 0x176C; emu_last_ip = 0x1FCB; emu_last_length = 0x0020; emu_last_crc = 0x8494; emu_call();
}

/**
 * Decompiled function f__176C_1FC9_0005_9C22()
 *
 * @name f__176C_1FC9_0005_9C22
 * @implements 176C:1FC9:0005:9C22 ()
 *
 * Called From: 176C:211F:000C:BC69
 */
void f__176C_1FC9_0005_9C22()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_2128_0006_F7CE(); return;
}

/**
 * Decompiled function f__176C_1FCB_0003_9DB6()
 *
 * @name f__176C_1FCB_0003_9DB6
 * @implements 176C:1FCB:0003:9DB6 ()
 *
 * Called From: 176C:2113:0012:A12E
 * Called From: 176C:2125:0006:4202
 */
void f__176C_1FCB_0003_9DB6()
{
	f__176C_2128_0006_F7CE(); return;
}

/**
 * Decompiled function f__176C_1FCE_0013_2F1E()
 *
 * @name f__176C_1FCE_0013_2F1E
 * @implements 176C:1FCE:0013:2F1E ()
 *
 * Called From: 176C:1FB4:0020:8494
 */
void f__176C_1FCE_0013_2F1E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x72));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__176C_1FE1_001E_A340(); return; }
	f__176C_2077_0009_68BB(); return;
}

/**
 * Decompiled function f__176C_1FE1_001E_A340()
 *
 * @name f__176C_1FE1_001E_A340
 * @implements 176C:1FE1:001E:A340 ()
 *
 * Called From: 176C:1FDC:0013:2F1E
 */
void f__176C_1FE1_001E_A340()
{
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x176C);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1F21);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x981E);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1FFF); emu_cs = 0x1319; f__1319_002D_0023_320C();
	f__176C_1FFF_001C_EEB2();
}

/**
 * Decompiled function f__176C_1FFF_001C_EEB2()
 *
 * @name f__176C_1FFF_001C_EEB2
 * @implements 176C:1FFF:001C:EEB2 ()
 *
 * Called From: 176C:1FFF:001E:A340
 */
void f__176C_1FFF_001C_EEB2()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xE);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_201B_001F_0FEC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	f__176C_201E_001C_7FD5(); return;
}

/**
 * Decompiled function f__176C_201B_001F_0FEC()
 *
 * @name f__176C_201B_001F_0FEC
 * @implements 176C:201B:001F:0FEC ()
 *
 * Called From: 176C:2010:001C:EEB2
 */
void f__176C_201B_001F_0FEC()
{
	emu_movw(&emu_ax.x, 0xE);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_addw(&emu_ax.x, 0x72);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x203A); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	f__176C_203A_003D_C682();
}

/**
 * Decompiled function f__176C_201E_001C_7FD5()
 *
 * @name f__176C_201E_001C_7FD5
 * @implements 176C:201E:001C:7FD5 ()
 *
 * Called From: 176C:2019:001C:EEB2
 */
void f__176C_201E_001C_7FD5()
{
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_addw(&emu_ax.x, 0x72);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x203A); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	f__176C_203A_003D_C682();
}

/**
 * Decompiled function f__176C_203A_003D_C682()
 *
 * @name f__176C_203A_003D_C682
 * @implements 176C:203A:003D:C682 ()
 *
 * Called From: 176C:203A:001C:7FD5
 * Called From: 176C:203A:001F:0FEC
 */
void f__176C_203A_003D_C682()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x72), 0xFF);
	if (!emu_flags.zf) { f__176C_2075_0002_D03A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (!emu_flags.zf) { f__176C_2075_0002_D03A(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x2D0);
	/* Unresolved jump */ emu_ip = 0x2097; emu_last_cs = 0x176C; emu_last_ip = 0x2075; emu_last_length = 0x003D; emu_last_crc = 0xC682; emu_call();
}

/**
 * Decompiled function f__176C_2075_0002_D03A()
 *
 * @name f__176C_2075_0002_D03A
 * @implements 176C:2075:0002:D03A ()
 *
 * Called From: 176C:2046:003D:C682
 * Called From: 176C:205B:003D:C682
 */
void f__176C_2075_0002_D03A()
{
	f__176C_2097_0036_E4C2(); return;
}

/**
 * Decompiled function f__176C_2077_0009_68BB()
 *
 * @name f__176C_2077_0009_68BB
 * @implements 176C:2077:0009:68BB ()
 *
 * Called From: 176C:1FDE:0013:2F1E
 */
void f__176C_2077_0009_68BB()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2080); emu_cs = 0x0F3F; f__0F3F_0360_0038_97C0();
	f__176C_2080_004D_941A();
}

/**
 * Decompiled function f__176C_2080_004D_941A()
 *
 * @name f__176C_2080_004D_941A
 * @implements 176C:2080:004D:941A ()
 *
 * Called From: 176C:2080:0009:68BB
 */
void f__176C_2080_004D_941A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xE);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_2097_0036_E4C2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x72), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x72));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2122; emu_last_cs = 0x176C; emu_last_ip = 0x20A5; emu_last_length = 0x004D; emu_last_crc = 0x941A; emu_call(); return; }
	emu_movb(&emu_cx.l, 0x5);
	emu_shlw(&emu_si, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_cmpw(&emu_ax.x, emu_si);
	if (emu_flags.zf) { f__176C_20D2_000D_565E(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x20CD); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	f__176C_20CD_0005_AD6E();
}

/**
 * Decompiled function f__176C_2097_0036_E4C2()
 *
 * @name f__176C_2097_0036_E4C2
 * @implements 176C:2097:0036:E4C2 ()
 *
 * Called From: 176C:2075:0002:D03A
 * Called From: 176C:2089:004D:941A
 */
void f__176C_2097_0036_E4C2()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x72));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__176C_2122_0006_4202(); return; }
	emu_movb(&emu_cx.l, 0x5);
	emu_shlw(&emu_si, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_cmpw(&emu_ax.x, emu_si);
	if (emu_flags.zf) { f__176C_20D2_000D_565E(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x20CD); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	f__176C_20CD_0005_AD6E();
}

/**
 * Decompiled function f__176C_20CD_0005_AD6E()
 *
 * @name f__176C_20CD_0005_AD6E
 * @implements 176C:20CD:0005:AD6E ()
 *
 * Called From: 176C:20CD:0036:E4C2
 * Called From: 176C:20CD:004D:941A
 */
void f__176C_20CD_0005_AD6E()
{
	emu_addws(&emu_sp, 0xA);
	f__176C_2122_0006_4202(); return;
}

/**
 * Decompiled function f__176C_20D2_000D_565E()
 *
 * @name f__176C_20D2_000D_565E
 * @implements 176C:20D2:000D:565E ()
 *
 * Called From: 176C:20B7:0036:E4C2
 * Called From: 176C:20B7:004D:941A
 */
void f__176C_20D2_000D_565E()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x20DF); emu_cs = 0x1A34; f__1A34_167C_0015_AA25();
	f__176C_20DF_0025_8BA8();
}

/**
 * Decompiled function f__176C_20DF_0025_8BA8()
 *
 * @name f__176C_20DF_0025_8BA8
 * @implements 176C:20DF:0025:8BA8 ()
 *
 * Called From: 176C:20DF:000D:565E
 */
void f__176C_20DF_0025_8BA8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__176C_2116_000C_BC69(); return; }
	emu_movw(&emu_ax.x, 0xD);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_addw(&emu_ax.x, 0x73);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_addw(&emu_ax.x, 0x72);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2104); emu_cs = 0x01F7; f__01F7_29B8_0016_B3E0();
	f__176C_2104_0012_A12E();
}

/**
 * Decompiled function f__176C_2104_0012_A12E()
 *
 * @name f__176C_2104_0012_A12E
 * @implements 176C:2104:0012:A12E ()
 *
 * Called From: 176C:2104:0025:8BA8
 */
void f__176C_2104_0012_A12E()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x7F), 0xFF);
	emu_movw(&emu_ax.x, 0x1);
	f__176C_1FCB_0003_9DB6(); return;
}

/**
 * Decompiled function f__176C_2116_000C_BC69()
 *
 * @name f__176C_2116_000C_BC69
 * @implements 176C:2116:000C:BC69 ()
 *
 * Called From: 176C:20E3:0025:8BA8
 */
void f__176C_2116_000C_BC69()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x72), 0xFF);
	f__176C_1FC9_0005_9C22(); return;
}

/**
 * Decompiled function f__176C_2122_0006_4202()
 *
 * @name f__176C_2122_0006_4202
 * @implements 176C:2122:0006:4202 ()
 *
 * Called From: 176C:1F7D:002F:CE9F
 * Called From: 176C:1F8D:0008:F739
 * Called From: 176C:20A5:0036:E4C2
 * Called From: 176C:20D0:0005:AD6E
 */
void f__176C_2122_0006_4202()
{
	emu_movw(&emu_ax.x, 0x1);
	f__176C_1FCB_0003_9DB6(); return;
}

/**
 * Decompiled function f__176C_2128_0006_F7CE()
 *
 * @name f__176C_2128_0006_F7CE
 * @implements 176C:2128:0006:F7CE ()
 *
 * Called From: 176C:1FCB:0003:9DB6
 * Called From: 176C:1FCB:0005:9C22
 */
void f__176C_2128_0006_F7CE()
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
 * Decompiled function f__176C_2275_001D_D22D()
 *
 * @name f__176C_2275_001D_D22D
 * @implements 176C:2275:001D:D22D ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_2275_001D_D22D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (emu_flags.zf) { f__176C_229E_000A_0725(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x2292); emu_cs = 0x0FE4; emu_ip = 0x05FD; emu_last_cs = 0x176C; emu_last_ip = 0x228D; emu_last_length = 0x001D; emu_last_crc = 0xD22D; emu_call();
	/* Unresolved jump */ emu_ip = 0x2292; emu_last_cs = 0x176C; emu_last_ip = 0x2292; emu_last_length = 0x001D; emu_last_crc = 0xD22D; emu_call();
}

/**
 * Decompiled function f__176C_229B_0003_D63A()
 *
 * @name f__176C_229B_0003_D63A
 * @implements 176C:229B:0003:D63A ()
 *
 * Called From: 176C:22A6:000A:0725
 */
void f__176C_229B_0003_D63A()
{
	emu_movws(&emu_ax.x, emu_ax.l);
	f__176C_22A8_0002_2597(); return;
}

/**
 * Decompiled function f__176C_229E_000A_0725()
 *
 * @name f__176C_229E_000A_0725
 * @implements 176C:229E:000A:0725 ()
 *
 * Called From: 176C:2281:001D:D22D
 */
void f__176C_229E_000A_0725()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x58));
	f__176C_229B_0003_D63A(); return;
}

/**
 * Decompiled function f__176C_22A8_0002_2597()
 *
 * @name f__176C_22A8_0002_2597
 * @implements 176C:22A8:0002:2597 ()
 *
 * Called From: 176C:229C:0003:D63A
 */
void f__176C_22A8_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_22C4_0019_80C9()
 *
 * @name f__176C_22C4_0019_80C9
 * @implements 176C:22C4:0019:80C9 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_22C4_0019_80C9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x22DD); emu_cs = 0x0F3F; f__0F3F_0275_0019_64C3();
	f__176C_22DD_0009_3ADE();
}

/**
 * Decompiled function f__176C_22DD_0009_3ADE()
 *
 * @name f__176C_22DD_0009_3ADE
 * @implements 176C:22DD:0009:3ADE ()
 *
 * Called From: 176C:22DD:0019:80C9
 */
void f__176C_22DD_0009_3ADE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x22E6); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__176C_22E6_000A_8EEA();
}

/**
 * Decompiled function f__176C_22E6_000A_8EEA()
 *
 * @name f__176C_22E6_000A_8EEA
 * @implements 176C:22E6:000A:8EEA ()
 *
 * Called From: 176C:22E6:0009:3ADE
 */
void f__176C_22E6_000A_8EEA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x22F0); emu_cs = 0x151A; f__151A_0114_0022_0B6C();
	f__176C_22F0_0012_5BD5();
}

/**
 * Decompiled function f__176C_22F0_0012_5BD5()
 *
 * @name f__176C_22F0_0012_5BD5
 * @implements 176C:22F0:0012:5BD5 ()
 *
 * Called From: 176C:22F0:000A:8EEA
 */
void f__176C_22F0_0012_5BD5()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x2302); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__176C_2302_0008_5756();
}

/**
 * Decompiled function f__176C_2302_0008_5756()
 *
 * @name f__176C_2302_0008_5756
 * @implements 176C:2302:0008:5756 ()
 *
 * Called From: 176C:2302:0012:5BD5
 */
void f__176C_2302_0008_5756()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x230A); emu_cs = 0x34CD; ovl__34CD(13);
	f__176C_230A_0013_714D();
}

/**
 * Decompiled function f__176C_230A_0013_714D()
 *
 * @name f__176C_230A_0013_714D
 * @implements 176C:230A:0013:714D ()
 *
 * Called From: 176C:230A:0008:5756
 */
void f__176C_230A_0013_714D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x3A4C), 0x0);
	if (emu_flags.zf) { f__176C_231D_0033_026B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_2320_0030_556B(); return;
}

/**
 * Decompiled function f__176C_231D_0033_026B()
 *
 * @name f__176C_231D_0033_026B
 * @implements 176C:231D:0033:026B ()
 *
 * Called From: 176C:2317:0013:714D
 */
void f__176C_231D_0033_026B()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x20), 0x1);
	if (!emu_flags.zf) { f__176C_2330_0020_5005(); return; }
	emu_addws(&emu_si, 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4A), 0x3);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2350; emu_last_cs = 0x176C; emu_last_ip = 0x233E; emu_last_length = 0x0033; emu_last_crc = 0x026B; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x80);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x33C8);
	f__176C_235E_0021_D67F(); return;
}

/**
 * Decompiled function f__176C_2320_0030_556B()
 *
 * @name f__176C_2320_0030_556B
 * @implements 176C:2320:0030:556B ()
 *
 * Called From: 176C:231B:0013:714D
 */
void f__176C_2320_0030_556B()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x20), 0x1);
	if (!emu_flags.zf) { f__176C_2330_0020_5005(); return; }
	emu_addws(&emu_si, 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4A), 0x3);
	if (!emu_flags.zf) { f__176C_2350_002F_540B(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x80);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x33C8);
	f__176C_235E_0021_D67F(); return;
}

/**
 * Decompiled function f__176C_2330_0020_5005()
 *
 * @name f__176C_2330_0020_5005
 * @implements 176C:2330:0020:5005 ()
 *
 * Called From: 176C:232B:0033:026B
 * Called From: 176C:232B:0030:556B
 */
void f__176C_2330_0020_5005()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4A), 0x3);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2350; emu_last_cs = 0x176C; emu_last_ip = 0x233E; emu_last_length = 0x0020; emu_last_crc = 0x5005; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x80);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x33C8);
	f__176C_235E_0021_D67F(); return;
}

/**
 * Decompiled function f__176C_2350_002F_540B()
 *
 * @name f__176C_2350_002F_540B
 * @implements 176C:2350:002F:540B ()
 *
 * Called From: 176C:233E:0030:556B
 */
void f__176C_2350_002F_540B()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0xC0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x33C8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xFC);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x237F); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__176C_237F_0022_A116();
}

/**
 * Decompiled function f__176C_235E_0021_D67F()
 *
 * @name f__176C_235E_0021_D67F
 * @implements 176C:235E:0021:D67F ()
 *
 * Called From: 176C:234E:0020:5005
 * Called From: 176C:234E:0030:556B
 * Called From: 176C:234E:0033:026B
 */
void f__176C_235E_0021_D67F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xFC);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x237F); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__176C_237F_0022_A116();
}

/**
 * Decompiled function f__176C_237F_0022_A116()
 *
 * @name f__176C_237F_0022_A116
 * @implements 176C:237F:0022:A116 ()
 *
 * Called From: 176C:237F:0021:D67F
 * Called From: 176C:237F:002F:540B
 */
void f__176C_237F_0022_A116()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), emu_ax.l);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x23A1); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__176C_23A1_001D_4782();
}

/**
 * Decompiled function f__176C_23A1_001D_4782()
 *
 * @name f__176C_23A1_001D_4782
 * @implements 176C:23A1:001D:4782 ()
 *
 * Called From: 176C:23A1:0022:A116
 */
void f__176C_23A1_001D_4782()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x23BE); emu_cs = 0x151A; f__151A_000E_0013_5840();
	f__176C_23BE_0008_6F72();
}

/**
 * Decompiled function f__176C_23BE_0008_6F72()
 *
 * @name f__176C_23BE_0008_6F72
 * @implements 176C:23BE:0008:6F72 ()
 *
 * Called From: 176C:23BE:001D:4782
 */
void f__176C_23BE_0008_6F72()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x1);
	f__176C_23C6_0006_F7CE(); return;
}

/**
 * Decompiled function f__176C_23C6_0006_F7CE()
 *
 * @name f__176C_23C6_0006_F7CE
 * @implements 176C:23C6:0006:F7CE ()
 *
 * Called From: 176C:23C4:0008:6F72
 */
void f__176C_23C6_0006_F7CE()
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
 * Decompiled function f__176C_246C_0015_C163()
 *
 * @name f__176C_246C_0015_C163
 * @implements 176C:246C:0015:C163 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_246C_0015_C163()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x2481); emu_cs = 0x0C10; f__0C10_013D_0016_8C5C();
	f__176C_2481_0013_8302();
}

/**
 * Decompiled function f__176C_2481_0013_8302()
 *
 * @name f__176C_2481_0013_8302
 * @implements 176C:2481:0013:8302 ()
 *
 * Called From: 176C:2481:0015:C163
 */
void f__176C_2481_0013_8302()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__176C_2499_000F_7512(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x2494); emu_cs = 0x0C10; emu_ip = 0x0168; emu_last_cs = 0x176C; emu_last_ip = 0x248F; emu_last_length = 0x0013; emu_last_crc = 0x8302; emu_call();
	/* Unresolved jump */ emu_ip = 0x2494; emu_last_cs = 0x176C; emu_last_ip = 0x2494; emu_last_length = 0x0013; emu_last_crc = 0x8302; emu_call();
}

/**
 * Decompiled function f__176C_2496_0003_DD0C()
 *
 * @name f__176C_2496_0003_DD0C
 * @implements 176C:2496:0003:DD0C ()
 *
 * Called From: 176C:2544:000E:3D36
 */
void f__176C_2496_0003_DD0C()
{
	f__176C_254C_0006_F7CE(); return;
}

/**
 * Decompiled function f__176C_2499_000F_7512()
 *
 * @name f__176C_2499_000F_7512
 * @implements 176C:2499:000F:7512 ()
 *
 * Called From: 176C:2485:0013:8302
 */
void f__176C_2499_000F_7512()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x100);
	if (!emu_flags.zf) { f__176C_24A8_000E_AD4A(); return; }
	/* Unresolved jump */ emu_ip = 0x2547; emu_last_cs = 0x176C; emu_last_ip = 0x24A5; emu_last_length = 0x000F; emu_last_crc = 0x7512; emu_call();
}

/**
 * Decompiled function f__176C_24A8_000E_AD4A()
 *
 * @name f__176C_24A8_000E_AD4A
 * @implements 176C:24A8:000E:AD4A ()
 *
 * Called From: 176C:24A3:000F:7512
 */
void f__176C_24A8_000E_AD4A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x59), 0x0);
	if (emu_flags.zf) { f__176C_24B6_0010_16F6(); return; }
	/* Unresolved jump */ emu_ip = 0x2547; emu_last_cs = 0x176C; emu_last_ip = 0x24B3; emu_last_length = 0x000E; emu_last_crc = 0xAD4A; emu_call();
}

/**
 * Decompiled function f__176C_24B6_0010_16F6()
 *
 * @name f__176C_24B6_0010_16F6
 * @implements 176C:24B6:0010:16F6 ()
 *
 * Called From: 176C:24B1:000E:AD4A
 */
void f__176C_24B6_0010_16F6()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x24C6); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__176C_24C6_002D_83BF();
}

/**
 * Decompiled function f__176C_24C6_002D_83BF()
 *
 * @name f__176C_24C6_002D_83BF
 * @implements 176C:24C6:002D:83BF ()
 *
 * Called From: 176C:24C6:0010:16F6
 */
void f__176C_24C6_002D_83BF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x24F3); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__176C_24F3_0010_1142();
}

/**
 * Decompiled function f__176C_24F3_0010_1142()
 *
 * @name f__176C_24F3_0010_1142
 * @implements 176C:24F3:0010:1142 ()
 *
 * Called From: 176C:24F3:002D:83BF
 */
void f__176C_24F3_0010_1142()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x2503); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__176C_2503_000B_7D3A();
}

/**
 * Decompiled function f__176C_2503_000B_7D3A()
 *
 * @name f__176C_2503_000B_7D3A
 * @implements 176C:2503:000B:7D3A ()
 *
 * Called From: 176C:2503:0010:1142
 */
void f__176C_2503_000B_7D3A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x250E); emu_cs = 0x1A34; f__1A34_2BB5_0025_30B8();
	f__176C_250E_0020_614B();
}

/**
 * Decompiled function f__176C_250E_0020_614B()
 *
 * @name f__176C_250E_0020_614B
 * @implements 176C:250E:0020:614B ()
 *
 * Called From: 176C:250E:000B:7D3A
 */
void f__176C_250E_0020_614B()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2547; emu_last_cs = 0x176C; emu_last_ip = 0x251D; emu_last_length = 0x0020; emu_last_crc = 0x614B; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x252E); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__176C_252E_000B_9475();
}

/**
 * Decompiled function f__176C_252E_000B_9475()
 *
 * @name f__176C_252E_000B_9475
 * @implements 176C:252E:000B:9475 ()
 *
 * Called From: 176C:252E:0020:614B
 */
void f__176C_252E_000B_9475()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2539); emu_cs = 0x0C10; f__0C10_0008_0014_19CD();
	f__176C_2539_000E_3D36();
}

/**
 * Decompiled function f__176C_2539_000E_3D36()
 *
 * @name f__176C_2539_000E_3D36
 * @implements 176C:2539:000E:3D36 ()
 *
 * Called From: 176C:2539:000B:9475
 */
void f__176C_2539_000E_3D36()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_si);
	emu_movw(&emu_ax.x, emu_di);
	f__176C_2496_0003_DD0C(); return;
}

/**
 * Decompiled function f__176C_254C_0006_F7CE()
 *
 * @name f__176C_254C_0006_F7CE
 * @implements 176C:254C:0006:F7CE ()
 *
 * Called From: 176C:2496:0003:DD0C
 */
void f__176C_254C_0006_F7CE()
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
 * Decompiled function f__176C_2552_0019_4894()
 *
 * @name f__176C_2552_0019_4894
 * @implements 176C:2552:0019:4894 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_2552_0019_4894()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x26));
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__176C_259C_0004_E839(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x256B); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	f__176C_256B_002F_8944();
}

/**
 * Decompiled function f__176C_256B_002F_8944()
 *
 * @name f__176C_256B_002F_8944
 * @implements 176C:256B:002F:8944 ()
 *
 * Called From: 176C:256B:0019:4894
 */
void f__176C_256B_002F_8944()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__176C_259C_0004_E839(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x259C; emu_last_cs = 0x176C; emu_last_ip = 0x2582; emu_last_length = 0x002F; emu_last_crc = 0x8944; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x259A); emu_cs = 0x0C10; emu_ip = 0x0182; emu_last_cs = 0x176C; emu_last_ip = 0x2595; emu_last_length = 0x002F; emu_last_crc = 0x8944; emu_call();
	/* Unresolved jump */ emu_ip = 0x259A; emu_last_cs = 0x176C; emu_last_ip = 0x259A; emu_last_length = 0x002F; emu_last_crc = 0x8944; emu_call();
}

/**
 * Decompiled function f__176C_259C_0004_E839()
 *
 * @name f__176C_259C_0004_E839
 * @implements 176C:259C:0004:E839 ()
 *
 * Called From: 176C:2563:0019:4894
 * Called From: 176C:2578:002F:8944
 */
void f__176C_259C_0004_E839()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_25A0_0005_8BCF(); return;
}

/**
 * Decompiled function f__176C_25A0_0005_8BCF()
 *
 * @name f__176C_25A0_0005_8BCF
 * @implements 176C:25A0:0005:8BCF ()
 *
 * Called From: 176C:259E:0004:E839
 */
void f__176C_25A0_0005_8BCF()
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
 * Decompiled function f__176C_25A5_002C_AC04()
 *
 * @name f__176C_25A5_002C_AC04
 * @implements 176C:25A5:002C:AC04 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_25A5_002C_AC04()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x25D1); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__176C_25D1_000E_DA27();
}

/**
 * Decompiled function f__176C_25D1_000E_DA27()
 *
 * @name f__176C_25D1_000E_DA27
 * @implements 176C:25D1:000E:DA27 ()
 *
 * Called From: 176C:25D1:002C:AC04
 */
void f__176C_25D1_000E_DA27()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x25DF); emu_cs = 0x1082; emu_Building_Find_First();
	f__176C_25DF_0005_9A2E();
}

/**
 * Decompiled function f__176C_25DF_0005_9A2E()
 *
 * @name f__176C_25DF_0005_9A2E
 * @implements 176C:25DF:0005:9A2E ()
 *
 * Called From: 176C:25DF:000E:DA27
 */
void f__176C_25DF_0005_9A2E()
{
	emu_addws(&emu_sp, 0x8);
	f__176C_2622_0012_CF1D(); return;
}

/**
 * Decompiled function f__176C_25E4_002D_1FC4()
 *
 * @name f__176C_25E4_002D_1FC4
 * @implements 176C:25E4:002D:1FC4 ()
 *
 * Called From: 176C:262E:0012:CF1D
 * Called From: 176C:262E:0014:5438
 */
void f__176C_25E4_002D_1FC4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (!emu_flags.zf) { f__176C_2615_000B_166D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2615; emu_last_cs = 0x176C; emu_last_ip = 0x25F6; emu_last_length = 0x002D; emu_last_crc = 0x1FC4; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x26), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2615; emu_last_cs = 0x176C; emu_last_ip = 0x2600; emu_last_length = 0x002D; emu_last_crc = 0x1FC4; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x2611); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__176C_2611_0004_549F();
}

/**
 * Decompiled function f__176C_2611_0004_549F()
 *
 * @name f__176C_2611_0004_549F
 * @implements 176C:2611:0004:549F ()
 *
 * Called From: 176C:2611:002D:1FC4
 */
void f__176C_2611_0004_549F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__176C_2634_0004_893F(); return;
}

/**
 * Decompiled function f__176C_2613_0002_CFBA()
 *
 * @name f__176C_2613_0002_CFBA
 * @implements 176C:2613:0002:CFBA ()
 *
 * Called From: 176C:2632:0012:CF1D
 */
void f__176C_2613_0002_CFBA()
{
	f__176C_2634_0004_893F(); return;
}

/**
 * Decompiled function f__176C_2615_000B_166D()
 *
 * @name f__176C_2615_000B_166D
 * @implements 176C:2615:000B:166D ()
 *
 * Called From: 176C:25EC:002D:1FC4
 */
void f__176C_2615_000B_166D()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2620); emu_cs = 0x1082; emu_Building_Find_Next();
	f__176C_2620_0014_5438();
}

/**
 * Decompiled function f__176C_2620_0014_5438()
 *
 * @name f__176C_2620_0014_5438
 * @implements 176C:2620:0014:5438 ()
 *
 * Called From: 176C:2620:000B:166D
 */
void f__176C_2620_0014_5438()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__176C_25E4_002D_1FC4(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x2613; emu_last_cs = 0x176C; emu_last_ip = 0x2632; emu_last_length = 0x0014; emu_last_crc = 0x5438; emu_call();
}

/**
 * Decompiled function f__176C_2622_0012_CF1D()
 *
 * @name f__176C_2622_0012_CF1D
 * @implements 176C:2622:0012:CF1D ()
 *
 * Called From: 176C:25E2:0005:9A2E
 */
void f__176C_2622_0012_CF1D()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__176C_25E4_002D_1FC4(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_2613_0002_CFBA(); return;
}

/**
 * Decompiled function f__176C_2634_0004_893F()
 *
 * @name f__176C_2634_0004_893F
 * @implements 176C:2634:0004:893F ()
 *
 * Called From: 176C:2613:0002:CFBA
 * Called From: 176C:2613:0004:549F
 */
void f__176C_2634_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_26CD_0010_041C()
 *
 * @name f__176C_26CD_0010_041C
 * @implements 176C:26CD:0010:041C ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_26CD_0010_041C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x26DD); emu_cs = 0x1A34; f__1A34_2B18_0011_E4D5();
	f__176C_26DD_0006_8EF0();
}

/**
 * Decompiled function f__176C_26DD_0006_8EF0()
 *
 * @name f__176C_26DD_0006_8EF0
 * @implements 176C:26DD:0006:8EF0 ()
 *
 * Called From: 176C:26DD:0010:041C
 */
void f__176C_26DD_0006_8EF0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_26E3_0002_2597(); return;
}

/**
 * Decompiled function f__176C_26E3_0002_2597()
 *
 * @name f__176C_26E3_0002_2597
 * @implements 176C:26E3:0002:2597 ()
 *
 * Called From: 176C:26E1:0006:8EF0
 */
void f__176C_26E3_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_26E5_0013_FF24()
 *
 * @name f__176C_26E5_0013_FF24
 * @implements 176C:26E5:0013:FF24 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_26E5_0013_FF24()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (emu_flags.zf) { f__176C_26F8_000E_BD09(); return; }
	/* Unresolved jump */ emu_ip = 0x2799; emu_last_cs = 0x176C; emu_last_ip = 0x26F5; emu_last_length = 0x0013; emu_last_crc = 0xFF24; emu_call();
}

/**
 * Decompiled function f__176C_26F8_000E_BD09()
 *
 * @name f__176C_26F8_000E_BD09
 * @implements 176C:26F8:000E:BD09 ()
 *
 * Called From: 176C:26F3:0013:FF24
 */
void f__176C_26F8_000E_BD09()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), 0x64);
	if ((emu_flags.sf != emu_flags.of)) { f__176C_2706_0011_1BC3(); return; }
	/* Unresolved jump */ emu_ip = 0x2799; emu_last_cs = 0x176C; emu_last_ip = 0x2703; emu_last_length = 0x000E; emu_last_crc = 0xBD09; emu_call();
}

/**
 * Decompiled function f__176C_2706_0011_1BC3()
 *
 * @name f__176C_2706_0011_1BC3
 * @implements 176C:2706:0011:1BC3 ()
 *
 * Called From: 176C:2701:000E:BD09
 */
void f__176C_2706_0011_1BC3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x2717); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__176C_2717_000A_0E78();
}

/**
 * Decompiled function f__176C_2717_000A_0E78()
 *
 * @name f__176C_2717_000A_0E78
 * @implements 176C:2717:000A:0E78 ()
 *
 * Called From: 176C:2717:0011:1BC3
 */
void f__176C_2717_000A_0E78()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2721); emu_cs = 0x34CD; ovl__34CD(13);
	f__176C_2721_0012_03F6();
}

/**
 * Decompiled function f__176C_2721_0012_03F6()
 *
 * @name f__176C_2721_0012_03F6
 * @implements 176C:2721:0012:03F6 ()
 *
 * Called From: 176C:2721:000A:0E78
 */
void f__176C_2721_0012_03F6()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0x8);
	if (emu_flags.zf) { f__176C_272E_0005_517D(); return; }
	emu_cmpws(&emu_si, 0x9);
	if (!emu_flags.zf) { f__176C_2795_0002_BC3A(); return; }
	emu_push(emu_cs); emu_push(0x2733); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__176C_2733_002F_9271();
}

/**
 * Decompiled function f__176C_272E_0005_517D()
 *
 * @name f__176C_272E_0005_517D
 * @implements 176C:272E:0005:517D ()
 *
 * Called From: 176C:2727:0012:03F6
 */
void f__176C_272E_0005_517D()
{
	emu_push(emu_cs); emu_push(0x2733); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__176C_2733_002F_9271();
}

/**
 * Decompiled function f__176C_2733_002F_9271()
 *
 * @name f__176C_2733_002F_9271
 * @implements 176C:2733:002F:9271 ()
 *
 * Called From: 176C:2733:0012:03F6
 * Called From: 176C:2733:0005:517D
 */
void f__176C_2733_002F_9271()
{
	emu_andb(&emu_ax.l, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_dx.l, emu_get_memory8(emu_es, emu_bx.x,  0x58));
	emu_addb(&emu_dx.l, emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), emu_dx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x100);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2762); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_2762_001C_0B18();
}

/**
 * Decompiled function f__176C_2762_001C_0B18()
 *
 * @name f__176C_2762_001C_0B18
 * @implements 176C:2762:001C:0B18 ()
 *
 * Called From: 176C:2762:002F:9271
 */
void f__176C_2762_001C_0B18()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), 0x64);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_2779_0005_517D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), 0x64);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x277E); emu_cs = 0x2BB4; emu_ip = 0x0004; emu_last_cs = 0x176C; emu_last_ip = 0x2779; emu_last_length = 0x001C; emu_last_crc = 0x0B18; emu_call();
	f__176C_277E_000F_C618();
}

/**
 * Decompiled function f__176C_2779_0005_517D()
 *
 * @name f__176C_2779_0005_517D
 * @implements 176C:2779:0005:517D ()
 *
 * Called From: 176C:276E:001C:0B18
 */
void f__176C_2779_0005_517D()
{
	emu_push(emu_cs); emu_push(0x277E); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__176C_277E_000F_C618();
}

/**
 * Decompiled function f__176C_277E_000F_C618()
 *
 * @name f__176C_277E_000F_C618
 * @implements 176C:277E:000F:C618 ()
 *
 * Called From: 176C:277E:0005:517D
 */
void f__176C_277E_000F_C618()
{
	emu_testw(&emu_ax.x, 0x1F);
	if (!emu_flags.zf) { f__176C_2793_0002_C13A(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x278D); emu_cs = 0x34CD; ovl__34CD(28);
	f__176C_278D_0006_8870();
}

/**
 * Decompiled function f__176C_278D_0006_8870()
 *
 * @name f__176C_278D_0006_8870
 * @implements 176C:278D:0006:8870 ()
 *
 * Called From: 176C:278D:000F:C618
 */
void f__176C_278D_0006_8870()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_27A0_0004_DE52(); return;
}

/**
 * Decompiled function f__176C_278F_0004_EEB9()
 *
 * @name f__176C_278F_0004_EEB9
 * @implements 176C:278F:0004:EEB9 ()
 *
 * Called From: 176C:2795:0002:BC3A
 */
void f__176C_278F_0004_EEB9()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_27A0_0004_DE52(); return;
}

/**
 * Decompiled function f__176C_2791_0002_C6BA()
 *
 * @name f__176C_2791_0002_C6BA
 * @implements 176C:2791:0002:C6BA ()
 *
 * Called From: 176C:279E:0005:AD7A
 */
void f__176C_2791_0002_C6BA()
{
	f__176C_27A0_0004_DE52(); return;
}

/**
 * Decompiled function f__176C_2793_0002_C13A()
 *
 * @name f__176C_2793_0002_C13A
 * @implements 176C:2793:0002:C13A ()
 *
 * Called From: 176C:2781:000F:C618
 */
void f__176C_2793_0002_C13A()
{
	f__176C_2797_0002_C13A(); return;
}

/**
 * Decompiled function f__176C_2795_0002_BC3A()
 *
 * @name f__176C_2795_0002_BC3A
 * @implements 176C:2795:0002:BC3A ()
 *
 * Called From: 176C:272C:0012:03F6
 */
void f__176C_2795_0002_BC3A()
{
	f__176C_278F_0004_EEB9(); return;
}

/**
 * Decompiled function f__176C_2797_0002_C13A()
 *
 * @name f__176C_2797_0002_C13A
 * @implements 176C:2797:0002:C13A ()
 *
 * Called From: 176C:2793:0002:C13A
 */
void f__176C_2797_0002_C13A()
{
	f__176C_279B_0005_AD7A(); return;
}

/**
 * Decompiled function f__176C_279B_0005_AD7A()
 *
 * @name f__176C_279B_0005_AD7A
 * @implements 176C:279B:0005:AD7A ()
 *
 * Called From: 176C:2797:0002:C13A
 */
void f__176C_279B_0005_AD7A()
{
	emu_movw(&emu_ax.x, 0x1);
	f__176C_2791_0002_C6BA(); return;
}

/**
 * Decompiled function f__176C_27A0_0004_DE52()
 *
 * @name f__176C_27A0_0004_DE52
 * @implements 176C:27A0:0004:DE52 ()
 *
 * Called From: 176C:2791:0004:EEB9
 * Called From: 176C:2791:0002:C6BA
 * Called From: 176C:2791:0006:8870
 */
void f__176C_27A0_0004_DE52()
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
 * Decompiled function f__176C_291A_0010_8A93()
 *
 * @name f__176C_291A_0010_8A93
 * @implements 176C:291A:0010:8A93 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_291A_0010_8A93()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0xA);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x292A); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	f__176C_292A_001C_964A();
}

/**
 * Decompiled function f__176C_292A_001C_964A()
 *
 * @name f__176C_292A_001C_964A
 * @implements 176C:292A:001C:964A ()
 *
 * Called From: 176C:292A:0010:8A93
 */
void f__176C_292A_001C_964A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3C));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__176C_2946_000A_F53E(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x296E; emu_last_cs = 0x176C; emu_last_ip = 0x293D; emu_last_length = 0x001C; emu_last_crc = 0x964A; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__176C_296E_000A_DF3C(); return; }
	/* Unresolved jump */ emu_ip = 0x29A0; emu_last_cs = 0x176C; emu_last_ip = 0x2944; emu_last_length = 0x001C; emu_last_crc = 0x964A; emu_call();
}

/**
 * Decompiled function f__176C_2946_000A_F53E()
 *
 * @name f__176C_2946_000A_F53E
 * @implements 176C:2946:000A:F53E ()
 *
 * Called From: 176C:2938:001C:964A
 */
void f__176C_2946_000A_F53E()
{
	emu_cmpws(&emu_si, 0x8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_296E_000A_DF3C(); return; }
	emu_push(emu_cs); emu_push(0x2950); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__176C_2950_001B_65D6();
}

/**
 * Decompiled function f__176C_2950_001B_65D6()
 *
 * @name f__176C_2950_001B_65D6
 * @implements 176C:2950:001B:65D6 ()
 *
 * Called From: 176C:2950:000A:F53E
 */
void f__176C_2950_001B_65D6()
{
	emu_andb(&emu_ax.l, 0x3F);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), emu_ax.l);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x296B); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_296B_000D_0B78();
}

/**
 * Decompiled function f__176C_296B_000D_0B78()
 *
 * @name f__176C_296B_000D_0B78
 * @implements 176C:296B:000D:0B78 ()
 *
 * Called From: 176C:296B:001B:65D6
 */
void f__176C_296B_000D_0B78()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_si, 0x2);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_299E_0002_C13A(); return; }
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x2978); emu_cs = 0x2BB4; emu_ip = 0x0004; emu_last_cs = 0x176C; emu_last_ip = 0x2973; emu_last_length = 0x000D; emu_last_crc = 0x0B78; emu_call();
	f__176C_2978_0009_B8CC();
}

/**
 * Decompiled function f__176C_296E_000A_DF3C()
 *
 * @name f__176C_296E_000A_DF3C
 * @implements 176C:296E:000A:DF3C ()
 *
 * Called From: 176C:2942:001C:964A
 * Called From: 176C:2949:000A:F53E
 */
void f__176C_296E_000A_DF3C()
{
	emu_cmpws(&emu_si, 0x2);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_299E_0002_C13A(); return; }
	emu_push(emu_cs); emu_push(0x2978); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__176C_2978_0009_B8CC();
}

/**
 * Decompiled function f__176C_2978_0009_B8CC()
 *
 * @name f__176C_2978_0009_B8CC
 * @implements 176C:2978:0009:B8CC ()
 *
 * Called From: 176C:2978:000A:DF3C
 */
void f__176C_2978_0009_B8CC()
{
	emu_testw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__176C_2981_000C_0854(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_2984_0009_23D4(); return;
}

/**
 * Decompiled function f__176C_2981_000C_0854()
 *
 * @name f__176C_2981_000C_0854
 * @implements 176C:2981:000C:0854 ()
 *
 * Called From: 176C:297B:0009:B8CC
 */
void f__176C_2981_000C_0854()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x298D); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__176C_298D_000E_0610();
}

/**
 * Decompiled function f__176C_2984_0009_23D4()
 *
 * @name f__176C_2984_0009_23D4
 * @implements 176C:2984:0009:23D4 ()
 *
 * Called From: 176C:297F:0009:B8CC
 */
void f__176C_2984_0009_23D4()
{
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x298D); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__176C_298D_000E_0610();
}

/**
 * Decompiled function f__176C_298D_000E_0610()
 *
 * @name f__176C_298D_000E_0610
 * @implements 176C:298D:000E:0610 ()
 *
 * Called From: 176C:298D:0009:23D4
 * Called From: 176C:298D:000C:0854
 */
void f__176C_298D_000E_0610()
{
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x299B); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	f__176C_299B_0005_846E();
}

/**
 * Decompiled function f__176C_299B_0005_846E()
 *
 * @name f__176C_299B_0005_846E
 * @implements 176C:299B:0005:846E ()
 *
 * Called From: 176C:299B:000E:0610
 */
void f__176C_299B_0005_846E()
{
	emu_addws(&emu_sp, 0xA);
	f__176C_29A2_0004_E839(); return;
}

/**
 * Decompiled function f__176C_299E_0002_C13A()
 *
 * @name f__176C_299E_0002_C13A
 * @implements 176C:299E:0002:C13A ()
 *
 * Called From: 176C:2971:000A:DF3C
 * Called From: 176C:2971:000D:0B78
 */
void f__176C_299E_0002_C13A()
{
	f__176C_29A2_0004_E839(); return;
}

/**
 * Decompiled function f__176C_29A2_0004_E839()
 *
 * @name f__176C_29A2_0004_E839
 * @implements 176C:29A2:0004:E839 ()
 *
 * Called From: 176C:299E:0002:C13A
 * Called From: 176C:299E:0005:846E
 */
void f__176C_29A2_0004_E839()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_29A6_0003_2E57(); return;
}

/**
 * Decompiled function f__176C_29A6_0003_2E57()
 *
 * @name f__176C_29A6_0003_2E57
 * @implements 176C:29A6:0003:2E57 ()
 *
 * Called From: 176C:29A4:0004:E839
 */
void f__176C_29A6_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_29A9_003A_8DEF()
 *
 * @name f__176C_29A9_003A_8DEF
 * @implements 176C:29A9:003A:8DEF ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_29A9_003A_8DEF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x29E3); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__176C_29E3_000E_DA27();
}

/**
 * Decompiled function f__176C_29E3_000E_DA27()
 *
 * @name f__176C_29E3_000E_DA27
 * @implements 176C:29E3:000E:DA27 ()
 *
 * Called From: 176C:29E3:003A:8DEF
 */
void f__176C_29E3_000E_DA27()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x29F1); emu_cs = 0x1082; emu_Building_Find_First();
	f__176C_29F1_0005_B42E();
}

/**
 * Decompiled function f__176C_29F1_0005_B42E()
 *
 * @name f__176C_29F1_0005_B42E
 * @implements 176C:29F1:0005:B42E ()
 *
 * Called From: 176C:29F1:000E:DA27
 */
void f__176C_29F1_0005_B42E()
{
	emu_addws(&emu_sp, 0x8);
	f__176C_2A58_0026_E972(); return;
}

/**
 * Decompiled function f__176C_29F6_003A_2332()
 *
 * @name f__176C_29F6_003A_2332
 * @implements 176C:29F6:003A:2332 ()
 *
 * Called From: 176C:2A64:0026:E972
 * Called From: 176C:2A64:0028:B0C0
 */
void f__176C_29F6_003A_2332()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (!emu_flags.zf) { f__176C_2A4B_000B_166D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2A4B; emu_last_cs = 0x176C; emu_last_ip = 0x2A08; emu_last_length = 0x003A; emu_last_crc = 0x2332; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x26), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2A4B; emu_last_cs = 0x176C; emu_last_ip = 0x2A12; emu_last_length = 0x003A; emu_last_crc = 0x2332; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x2A30); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
	f__176C_2A30_0026_C654();
}

/**
 * Decompiled function f__176C_2A30_0026_C654()
 *
 * @name f__176C_2A30_0026_C654
 * @implements 176C:2A30:0026:C654 ()
 *
 * Called From: 176C:2A30:003A:2332
 */
void f__176C_2A30_0026_C654()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { f__176C_2A3D_0019_4CA8(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__176C_2A4B_000B_166D(); return; }
	emu_movw(&emu_si, emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2A56); emu_cs = 0x1082; emu_Building_Find_Next();
	f__176C_2A56_0028_B0C0();
}

/**
 * Decompiled function f__176C_2A3D_0019_4CA8()
 *
 * @name f__176C_2A3D_0019_4CA8
 * @implements 176C:2A3D:0019:4CA8 ()
 *
 * Called From: 176C:2A37:0026:C654
 */
void f__176C_2A3D_0019_4CA8()
{
	emu_movw(&emu_si, emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2A56); emu_cs = 0x1082; emu_Building_Find_Next();
	f__176C_2A56_0028_B0C0();
}

/**
 * Decompiled function f__176C_2A4B_000B_166D()
 *
 * @name f__176C_2A4B_000B_166D
 * @implements 176C:2A4B:000B:166D ()
 *
 * Called From: 176C:29FE:003A:2332
 * Called From: 176C:2A3B:0026:C654
 */
void f__176C_2A4B_000B_166D()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2A56); emu_cs = 0x1082; emu_Building_Find_Next();
	f__176C_2A56_0028_B0C0();
}

/**
 * Decompiled function f__176C_2A56_0028_B0C0()
 *
 * @name f__176C_2A56_0028_B0C0
 * @implements 176C:2A56:0028:B0C0 ()
 *
 * Called From: 176C:2A56:0026:C654
 * Called From: 176C:2A56:0019:4CA8
 * Called From: 176C:2A56:000B:166D
 */
void f__176C_2A56_0028_B0C0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__176C_29F6_003A_2332(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2AA8; emu_last_cs = 0x176C; emu_last_ip = 0x2A6C; emu_last_length = 0x0028; emu_last_crc = 0xB0C0; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs);
	emu_push(0x2A7E); f__176C_000E_000E_633D();
	f__176C_2A7E_0012_04F6();
}

/**
 * Decompiled function f__176C_2A58_0026_E972()
 *
 * @name f__176C_2A58_0026_E972
 * @implements 176C:2A58:0026:E972 ()
 *
 * Called From: 176C:29F4:0005:B42E
 */
void f__176C_2A58_0026_E972()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__176C_29F6_003A_2332(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2AA8; emu_last_cs = 0x176C; emu_last_ip = 0x2A6C; emu_last_length = 0x0026; emu_last_crc = 0xE972; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x2A7E); emu_ip = 0x000E; emu_last_cs = 0x176C; emu_last_ip = 0x2A7B; emu_last_length = 0x0026; emu_last_crc = 0xE972; emu_call();
	f__176C_2A7E_0012_04F6();
}

/**
 * Decompiled function f__176C_2A7E_0012_04F6()
 *
 * @name f__176C_2A7E_0012_04F6
 * @implements 176C:2A7E:0012:04F6 ()
 *
 * Called From: 176C:2A7E:0028:B0C0
 */
void f__176C_2A7E_0012_04F6()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x2A90); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__176C_2A90_0010_A4E6();
}

/**
 * Decompiled function f__176C_2A90_0010_A4E6()
 *
 * @name f__176C_2A90_0010_A4E6
 * @implements 176C:2A90:0010:A4E6 ()
 *
 * Called From: 176C:2A90:0012:04F6
 */
void f__176C_2A90_0010_A4E6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x2AA0); emu_cs = 0x1A34; f__1A34_1B68_0019_AAA0();
	f__176C_2AA0_0008_4D72();
}

/**
 * Decompiled function f__176C_2AA0_0008_4D72()
 *
 * @name f__176C_2AA0_0008_4D72
 * @implements 176C:2AA0:0008:4D72 ()
 *
 * Called From: 176C:2AA0:0010:A4E6
 */
void f__176C_2AA0_0008_4D72()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__176C_2AAC_0006_F7CE(); return;
}

/**
 * Decompiled function f__176C_2AAC_0006_F7CE()
 *
 * @name f__176C_2AAC_0006_F7CE
 * @implements 176C:2AAC:0006:F7CE ()
 *
 * Called From: 176C:2AA6:0008:4D72
 */
void f__176C_2AAC_0006_F7CE()
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
 * Decompiled function f__176C_2BD5_0014_2C56()
 *
 * @name f__176C_2BD5_0014_2C56
 * @implements 176C:2BD5:0014:2C56 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_2BD5_0014_2C56()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x2BE9); emu_cs = 0x0C10; f__0C10_0168_0014_CEB0();
	f__176C_2BE9_000A_4B0F();
}

/**
 * Decompiled function f__176C_2BE9_000A_4B0F()
 *
 * @name f__176C_2BE9_000A_4B0F
 * @implements 176C:2BE9:000A:4B0F ()
 *
 * Called From: 176C:2BE9:0014:2C56
 */
void f__176C_2BE9_000A_4B0F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2BF3); emu_cs = 0x167E; f__167E_02D8_000C_4C9F();
	f__176C_2BF3_001F_0151();
}

/**
 * Decompiled function f__176C_2BF3_001F_0151()
 *
 * @name f__176C_2BF3_001F_0151
 * @implements 176C:2BF3:001F:0151 ()
 *
 * Called From: 176C:2BF3:000A:4B0F
 */
void f__176C_2BF3_001F_0151()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__176C_2C5D_000D_8532(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x2C12); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__176C_2C12_0022_0EC9();
}

/**
 * Decompiled function f__176C_2C12_0022_0EC9()
 *
 * @name f__176C_2C12_0022_0EC9
 * @implements 176C:2C12:0022:0EC9 ()
 *
 * Called From: 176C:2C12:001F:0151
 */
void f__176C_2C12_0022_0EC9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x26));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2C2E; emu_last_cs = 0x176C; emu_last_ip = 0x2C1B; emu_last_length = 0x0022; emu_last_crc = 0x0EC9; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	if (emu_flags.zf) { f__176C_2C56_0005_A97A(); return; }
	emu_push(emu_si);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x2C34); emu_cs = 0x167E; emu_ip = 0x0088; emu_last_cs = 0x176C; emu_last_ip = 0x2C2F; emu_last_length = 0x0022; emu_last_crc = 0x0EC9; emu_call();
	/* Unresolved jump */ emu_ip = 0x2C34; emu_last_cs = 0x176C; emu_last_ip = 0x2C34; emu_last_length = 0x0022; emu_last_crc = 0x0EC9; emu_call();
}

/**
 * Decompiled function f__176C_2C52_0004_E439()
 *
 * @name f__176C_2C52_0004_E439
 * @implements 176C:2C52:0004:E439 ()
 *
 * Called From: 176C:2C6C:0004:291F
 */
void f__176C_2C52_0004_E439()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_2C6E_0005_8BCF(); return;
}

/**
 * Decompiled function f__176C_2C54_0002_CC3A()
 *
 * @name f__176C_2C54_0002_CC3A
 * @implements 176C:2C54:0002:CC3A ()
 *
 * Called From: 176C:2C59:0005:A97A
 */
void f__176C_2C54_0002_CC3A()
{
	f__176C_2C6E_0005_8BCF(); return;
}

/**
 * Decompiled function f__176C_2C56_0005_A97A()
 *
 * @name f__176C_2C56_0005_A97A
 * @implements 176C:2C56:0005:A97A ()
 *
 * Called From: 176C:2C2C:0022:0EC9
 */
void f__176C_2C56_0005_A97A()
{
	emu_movw(&emu_ax.x, 0x1);
	f__176C_2C54_0002_CC3A(); return;
}

/**
 * Decompiled function f__176C_2C5D_000D_8532()
 *
 * @name f__176C_2C5D_000D_8532
 * @implements 176C:2C5D:000D:8532 ()
 *
 * Called From: 176C:2C00:001F:0151
 */
void f__176C_2C5D_000D_8532()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x2C6A); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	f__176C_2C6A_0004_291F();
}

/**
 * Decompiled function f__176C_2C6A_0004_291F()
 *
 * @name f__176C_2C6A_0004_291F
 * @implements 176C:2C6A:0004:291F ()
 *
 * Called From: 176C:2C6A:000D:8532
 */
void f__176C_2C6A_0004_291F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__176C_2C52_0004_E439(); return;
}

/**
 * Decompiled function f__176C_2C6E_0005_8BCF()
 *
 * @name f__176C_2C6E_0005_8BCF
 * @implements 176C:2C6E:0005:8BCF ()
 *
 * Called From: 176C:2C54:0002:CC3A
 * Called From: 176C:2C54:0004:E439
 */
void f__176C_2C6E_0005_8BCF()
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
 * Decompiled function f__176C_6E4F_0010_4C3C()
 *
 * @name f__176C_6E4F_0010_4C3C
 * @implements 176C:6E4F:0010:4C3C ()
 *
 * Called From: 0642:0330:0007:2A20
 */
void f__176C_6E4F_0010_4C3C()
{
	emu_arplw(&emu_get_memory16(emu_ds, 0x00,  0x44B8), emu_bx.x);
	emu_arplw(&emu_get_memory16(emu_ds, emu_bx.x + emu_si,  0xFFFF), emu_dx.x);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x6E60; emu_last_cs = 0x176C; emu_last_ip = 0x6E56; emu_last_length = 0x0010; emu_last_crc = 0x4C3C; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x6E5F); f__176C_7E2C_0030_42B8();
	f__176C_6E5F_000B_EB5E();
}

/**
 * Decompiled function f__176C_6E5F_000B_EB5E()
 *
 * @name f__176C_6E5F_000B_EB5E
 * @implements 176C:6E5F:000B:EB5E ()
 *
 * Called From: 176C:6E5F:0010:4C3C
 */
void f__176C_6E5F_000B_EB5E()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x6E6A); emu_cs = 0x01F7; f__01F7_3964_0041_7552();
	f__176C_6E6A_0009_DA0C();
}

/**
 * Decompiled function f__176C_6E6A_0009_DA0C()
 *
 * @name f__176C_6E6A_0009_DA0C
 * @implements 176C:6E6A:0009:DA0C ()
 *
 * Called From: 176C:6E6A:000B:EB5E
 */
void f__176C_6E6A_0009_DA0C()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x6E74; emu_last_cs = 0x176C; emu_last_ip = 0x6E6F; emu_last_length = 0x0009; emu_last_crc = 0xDA0C; emu_call(); return; }
	f__176C_6EDB_001B_24E3(); return;
}

/**
 * Decompiled function f__176C_6ED3_0008_F549()
 *
 * @name f__176C_6ED3_0008_F549
 * @implements 176C:6ED3:0008:F549 ()
 *
 * Called From: 176C:6F34:0040:E579
 */
void f__176C_6ED3_0008_F549()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__176C_6F36_0004_893F(); return;
}

/**
 * Decompiled function f__176C_6EDB_001B_24E3()
 *
 * @name f__176C_6EDB_001B_24E3
 * @implements 176C:6EDB:001B:24E3 ()
 *
 * Called From: 176C:6E71:0009:DA0C
 */
void f__176C_6EDB_001B_24E3()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x6344);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x6EF6); f__176C_7FF0_0021_1C0F();
	f__176C_6EF6_0040_E579();
}

/**
 * Decompiled function f__176C_6EF6_0040_E579()
 *
 * @name f__176C_6EF6_0040_E579
 * @implements 176C:6EF6:0040:E579 ()
 *
 * Called From: 176C:6EF6:001B:24E3
 */
void f__176C_6EF6_0040_E579()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x6F34; emu_last_cs = 0x176C; emu_last_ip = 0x6F12; emu_last_length = 0x0040; emu_last_crc = 0xE579; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cwd();
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_adcw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_dx.x);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp,  0x10), emu_ax.x);
	f__176C_6ED3_0008_F549(); return;
}

/**
 * Decompiled function f__176C_6F36_0004_893F()
 *
 * @name f__176C_6F36_0004_893F
 * @implements 176C:6F36:0004:893F ()
 *
 * Called From: 176C:6ED9:0008:F549
 */
void f__176C_6F36_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_7E2C_0030_42B8()
 *
 * @name f__176C_7E2C_0030_42B8
 * @implements 176C:7E2C:0030:42B8 ()
 *
 * Called From: 176C:6E5C:0010:4C3C
 * Called From: 176C:800E:0021:1C0F
 */
void f__176C_7E2C_0030_42B8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x7E55; emu_last_cs = 0x176C; emu_last_ip = 0x7E35; emu_last_length = 0x0030; emu_last_crc = 0x42B8; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x7E55; emu_last_cs = 0x176C; emu_last_ip = 0x7E3D; emu_last_length = 0x0030; emu_last_crc = 0x42B8; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFF);
	if (!emu_flags.zf) { f__176C_7E5C_0022_7E35(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x7E5C; emu_last_cs = 0x176C; emu_last_ip = 0x7E53; emu_last_length = 0x0030; emu_last_crc = 0x42B8; emu_call(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_7F1A_0002_2597(); return;
}

/**
 * Decompiled function f__176C_7E55_0007_D4FE()
 *
 * @name f__176C_7E55_0007_D4FE
 * @implements 176C:7E55:0007:D4FE ()
 *
 * Called From: 176C:7F0A:0009:8823
 */
void f__176C_7E55_0007_D4FE()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_7F1A_0002_2597(); return;
}

/**
 * Decompiled function f__176C_7E5C_0022_7E35()
 *
 * @name f__176C_7E5C_0022_7E35
 * @implements 176C:7E5C:0022:7E35 ()
 *
 * Called From: 176C:7E46:0030:42B8
 */
void f__176C_7E5C_0022_7E35()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x984A);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x7E7E); emu_cs = 0x01F7; f__01F7_2562_0026_6AD7();
	f__176C_7E7E_0012_C53A();
}

/**
 * Decompiled function f__176C_7E7E_0012_C53A()
 *
 * @name f__176C_7E7E_0012_C53A
 * @implements 176C:7E7E:0012:C53A ()
 *
 * Called From: 176C:7E7E:0022:7E35
 */
void f__176C_7E7E_0012_C53A()
{
	emu_addws(&emu_sp, 0x14);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x6606);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x984A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x7E90); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	f__176C_7E90_0017_F7B8();
}

/**
 * Decompiled function f__176C_7E90_0017_F7B8()
 *
 * @name f__176C_7E90_0017_F7B8
 * @implements 176C:7E90:0017:F7B8 ()
 *
 * Called From: 176C:7E90:0012:C53A
 */
void f__176C_7E90_0017_F7B8()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_ax.x, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x984A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x7EA7); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	f__176C_7EA7_000D_017E();
}

/**
 * Decompiled function f__176C_7EA7_000D_017E()
 *
 * @name f__176C_7EA7_000D_017E
 * @implements 176C:7EA7:000D:017E ()
 *
 * Called From: 176C:7EA7:0017:F7B8
 */
void f__176C_7EA7_000D_017E()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x984A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x7EB4); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	f__176C_7EB4_0031_E88B();
}

/**
 * Decompiled function f__176C_7EB4_0031_E88B()
 *
 * @name f__176C_7EB4_0031_E88B
 * @implements 176C:7EB4:0031:E88B ()
 *
 * Called From: 176C:7EB4:000D:017E
 */
void f__176C_7EB4_0031_E88B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x7F12; emu_last_cs = 0x176C; emu_last_ip = 0x7EB8; emu_last_length = 0x0031; emu_last_crc = 0xE88B; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x7F0F; emu_last_cs = 0x176C; emu_last_ip = 0x7EC1; emu_last_length = 0x0031; emu_last_crc = 0xE88B; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x984A);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x7EE5); emu_cs = 0x01F7; f__01F7_2562_0026_6AD7();
	f__176C_7EE5_0012_B53A();
}

/**
 * Decompiled function f__176C_7EE5_0012_B53A()
 *
 * @name f__176C_7EE5_0012_B53A
 * @implements 176C:7EE5:0012:B53A ()
 *
 * Called From: 176C:7EE5:0031:E88B
 */
void f__176C_7EE5_0012_B53A()
{
	emu_addws(&emu_sp, 0x14);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x6608);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x984A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x7EF7); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	f__176C_7EF7_000D_017E();
}

/**
 * Decompiled function f__176C_7EF7_000D_017E()
 *
 * @name f__176C_7EF7_000D_017E
 * @implements 176C:7EF7:000D:017E ()
 *
 * Called From: 176C:7EF7:0012:B53A
 */
void f__176C_7EF7_000D_017E()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x984A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x7F04); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	f__176C_7F04_0009_8823();
}

/**
 * Decompiled function f__176C_7F04_0009_8823()
 *
 * @name f__176C_7F04_0009_8823
 * @implements 176C:7F04:0009:8823 ()
 *
 * Called From: 176C:7F04:000D:017E
 */
void f__176C_7F04_0009_8823()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x7F0D; emu_last_cs = 0x176C; emu_last_ip = 0x7F08; emu_last_length = 0x0009; emu_last_crc = 0x8823; emu_call(); return; }
	f__176C_7E55_0007_D4FE(); return;
}

/**
 * Decompiled function f__176C_7F1A_0002_2597()
 *
 * @name f__176C_7F1A_0002_2597
 * @implements 176C:7F1A:0002:2597 ()
 *
 * Called From: 176C:7E59:0007:D4FE
 * Called From: 176C:7E59:0030:42B8
 */
void f__176C_7F1A_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_7FF0_0021_1C0F()
 *
 * @name f__176C_7FF0_0021_1C0F
 * @implements 176C:7FF0:0021:1C0F ()
 *
 * Called From: 176C:6EF3:001B:24E3
 */
void f__176C_7FF0_0021_1C0F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x14);
	emu_push(emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x8011); f__176C_7E2C_0030_42B8();
	f__176C_8011_0018_A313();
}

/**
 * Decompiled function f__176C_8011_0018_A313()
 *
 * @name f__176C_8011_0018_A313
 * @implements 176C:8011:0018:A313 ()
 *
 * Called From: 176C:8011:0021:1C0F
 */
void f__176C_8011_0018_A313()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x8029; emu_last_cs = 0x176C; emu_last_ip = 0x8020; emu_last_length = 0x0018; emu_last_crc = 0xA313; emu_call(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_825F_0005_8BCF(); return;
}

/**
 * Decompiled function f__176C_825F_0005_8BCF()
 *
 * @name f__176C_825F_0005_8BCF
 * @implements 176C:825F:0005:8BCF ()
 *
 * Called From: 176C:8026:0018:A313
 */
void f__176C_825F_0005_8BCF()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
