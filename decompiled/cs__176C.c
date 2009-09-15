/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__176C_000E_000E_8C63()
 *
 * @name f__176C_000E_000E_8C63
 * @implements 176C:000E:000E:8C63 ()
 *
 * Called From: 06F7:0275:0032:FEE5
 * Called From: 0AEC:03EA:0013:EFB0
 * Called From: 1423:0B8C:001F:9606
 * Called From: 176C:07B4:0037:627F
 * Called From: 176C:07B4:002F:0E9D
 * Called From: 176C:1C44:000D:1B3F
 * Called From: 176C:1C63:0017:82CC
 * Called From: 176C:2A7B:0028:0EA3
 * Called From: 1A34:0B48:0012:964D
 * Called From: 1A34:0B48:000B:3539
 * Called From: 1A34:0CB7:0010:67BA
 * Called From: 1A34:0DE4:0029:BAE4
 * Called From: 1A34:1DFC:002D:0483
 * Called From: 1A34:2A73:000B:E7B8
 * Called From: B4B5:05B0:001F:2647
 */
void f__176C_000E_000E_8C63()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__176C_001C_001D_EB22(); return; }
	emu_ip = 0x0109; emu_last_cs = 0x176C; emu_last_ip = 0x0019; emu_last_length = 0x000E; emu_last_crc = 0x8C63; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_001C_001D_EB22()
 *
 * @name f__176C_001C_001D_EB22
 * @implements 176C:001C:001D:EB22 ()
 *
 * Called From: 176C:0017:000E:8C63
 */
void f__176C_001C_001D_EB22()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0xD);
	if (emu_flags.zf) { emu_ip = 0x0036; emu_last_cs = 0x176C; emu_last_ip = 0x0024; emu_last_length = 0x001D; emu_last_crc = 0xEB22; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0xA);
	if (emu_flags.zf) { emu_ip = 0x0036; emu_last_cs = 0x176C; emu_last_ip = 0x002E; emu_last_length = 0x001D; emu_last_crc = 0xEB22; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFF);
	if (!emu_flags.zf) { f__176C_0039_0025_FAF2(); return; }
	f__176C_0109_0002_00E2(); return;
}

/**
 * Decompiled function f__176C_0039_0025_FAF2()
 *
 * @name f__176C_0039_0025_FAF2
 * @implements 176C:0039:0025:FAF2 ()
 *
 * Called From: 176C:0034:001D:EB22
 */
void f__176C_0039_0025_FAF2()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x74));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__176C_0061_001A_11DC(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__176C_007B_003E_74D9(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (!emu_flags.zf) { emu_ip = 0x005E; emu_last_cs = 0x176C; emu_last_ip = 0x0059; emu_last_length = 0x0025; emu_last_crc = 0xFAF2; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x00E0; emu_last_cs = 0x176C; emu_last_ip = 0x005B; emu_last_length = 0x0025; emu_last_crc = 0xFAF2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_0061_001A_11DC()
 *
 * @name f__176C_0061_001A_11DC
 * @implements 176C:0061:001A:11DC ()
 *
 * Called From: 176C:004F:0025:FAF2
 */
void f__176C_0061_001A_11DC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	if (emu_flags.zf) { f__176C_007B_003E_74D9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x50), emu_ax.l);
	f__176C_0109_0002_00E2(); return;
}

/**
 * Decompiled function f__176C_007B_003E_74D9()
 *
 * @name f__176C_007B_003E_74D9
 * @implements 176C:007B:003E:74D9 ()
 *
 * Called From: 176C:0054:0025:FAF2
 * Called From: 176C:006C:001A:11DC
 */
void f__176C_007B_003E_74D9()
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
	emu_push(emu_cs); emu_push(0x00B9); emu_cs = 0x15C2; f__15C2_0395_0044_6B4F();
	f__176C_00B9_0025_3797();
}

/**
 * Decompiled function f__176C_00B9_0025_3797()
 *
 * @name f__176C_00B9_0025_3797
 * @implements 176C:00B9:0025:3797 ()
 *
 * Called From: 176C:00B9:003E:74D9
 */
void f__176C_00B9_0025_3797()
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
	emu_push(emu_cs); emu_push(0x00DE); emu_cs = 0x15C2; f__15C2_03D9_0011_073C();
	f__176C_00DE_0002_03E8();
}

/**
 * Decompiled function f__176C_00DE_0002_03E8()
 *
 * @name f__176C_00DE_0002_03E8
 * @implements 176C:00DE:0002:03E8 ()
 *
 * Called From: 176C:00DE:0025:3797
 */
void f__176C_00DE_0002_03E8()
{
	f__176C_0102_0005_1FB8(); return;
}

/**
 * Decompiled function f__176C_0102_0005_1FB8()
 *
 * @name f__176C_0102_0005_1FB8
 * @implements 176C:0102:0005:1FB8 ()
 *
 * Called From: 176C:00DE:0002:03E8
 */
void f__176C_0102_0005_1FB8()
{
	emu_addws(&emu_sp, 0x6);
	f__176C_0109_0002_00E2(); return;
}

/**
 * Decompiled function f__176C_0109_0002_00E2()
 *
 * @name f__176C_0109_0002_00E2
 * @implements 176C:0109:0002:00E2 ()
 *
 * Called From: 176C:0036:001D:EB22
 * Called From: 176C:0078:001A:11DC
 * Called From: 176C:0105:0005:1FB8
 */
void f__176C_0109_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_010B_002F_175F()
 *
 * @name f__176C_010B_002F_175F
 * @implements 176C:010B:002F:175F ()
 *
 * Called From: 0642:03C2:0005:1266
 */
void f__176C_010B_002F_175F()
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
	if (emu_flags.zf) { f__176C_013A_0055_A03E(); return; }
	emu_ip = 0x07E2; emu_last_cs = 0x176C; emu_last_ip = 0x0137; emu_last_length = 0x002F; emu_last_crc = 0x175F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_013A_0055_A03E()
 *
 * @name f__176C_013A_0055_A03E
 * @implements 176C:013A:0055:A03E ()
 *
 * Called From: 176C:0135:002F:175F
 */
void f__176C_013A_0055_A03E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6272));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6270));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0166_0029_2797(); return; }
	if (!emu_flags.zf) { emu_ip = 0x014F; emu_last_cs = 0x176C; emu_last_ip = 0x0147; emu_last_length = 0x0055; emu_last_crc = 0xA03E; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0166_0029_2797(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_01AA_00F8_27AD(); return; }
	if (!emu_flags.zf) { emu_ip = 0x017B; emu_last_cs = 0x176C; emu_last_ip = 0x0173; emu_last_length = 0x0055; emu_last_crc = 0xA03E; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_01AA_00F8_27AD(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x018F); emu_cs = 0x07C9; f__07C9_000F_0050_0FEA();
	f__176C_018F_0113_12CE();
}

/**
 * Decompiled function f__176C_0166_0029_2797()
 *
 * @name f__176C_0166_0029_2797
 * @implements 176C:0166:0029:2797 ()
 *
 * Called From: 176C:0145:0055:A03E
 * Called From: 176C:014D:0055:A03E
 */
void f__176C_0166_0029_2797()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6276));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6274));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_01AA_00F8_27AD(); return; }
	if (!emu_flags.zf) { f__176C_017B_0014_1591(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_01AA_00F8_27AD(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x018F); emu_cs = 0x07C9; f__07C9_000F_0050_0FEA();
	f__176C_018F_0113_12CE();
}

/**
 * Decompiled function f__176C_017B_0014_1591()
 *
 * @name f__176C_017B_0014_1591
 * @implements 176C:017B:0014:1591 ()
 *
 * Called From: 176C:0173:0029:2797
 */
void f__176C_017B_0014_1591()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x018F); emu_cs = 0x07C9; f__07C9_000F_0050_0FEA();
	f__176C_018F_0113_12CE();
}

/**
 * Decompiled function f__176C_018F_0113_12CE()
 *
 * @name f__176C_018F_0113_12CE
 * @implements 176C:018F:0113:12CE ()
 *
 * Called From: 176C:018F:0055:A03E
 * Called From: 176C:018F:0029:2797
 * Called From: 176C:018F:0014:1591
 */
void f__176C_018F_0113_12CE()
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x01D8; emu_last_cs = 0x176C; emu_last_ip = 0x01B5; emu_last_length = 0x0113; emu_last_crc = 0x12CE; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x01BF; emu_last_cs = 0x176C; emu_last_ip = 0x01B7; emu_last_length = 0x0113; emu_last_crc = 0x12CE; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_01D8_00CA_4A5B(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0206_009C_FEE3(); return; }
	if (!emu_flags.zf) { emu_ip = 0x01ED; emu_last_cs = 0x176C; emu_last_ip = 0x01E5; emu_last_length = 0x0113; emu_last_crc = 0x12CE; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0206_009C_FEE3(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0234; emu_last_cs = 0x176C; emu_last_ip = 0x0211; emu_last_length = 0x0113; emu_last_crc = 0x12CE; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x021B; emu_last_cs = 0x176C; emu_last_ip = 0x0213; emu_last_length = 0x0113; emu_last_crc = 0x12CE; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0234_006E_9F7A(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0262; emu_last_cs = 0x176C; emu_last_ip = 0x023F; emu_last_length = 0x0113; emu_last_crc = 0x12CE; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x0249; emu_last_cs = 0x176C; emu_last_ip = 0x0241; emu_last_length = 0x0113; emu_last_crc = 0x12CE; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0262; emu_last_cs = 0x176C; emu_last_ip = 0x0247; emu_last_length = 0x0113; emu_last_crc = 0x12CE; emu_call(); return; } // Jump does not resolve
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0290; emu_last_cs = 0x176C; emu_last_ip = 0x026D; emu_last_length = 0x0113; emu_last_crc = 0x12CE; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x0277; emu_last_cs = 0x176C; emu_last_ip = 0x026F; emu_last_length = 0x0113; emu_last_crc = 0x12CE; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0290_0012_EA1A(); return; }
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
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	f__176C_02A2_0006_3F1E();
}

/**
 * Decompiled function f__176C_01AA_00F8_27AD()
 *
 * @name f__176C_01AA_00F8_27AD
 * @implements 176C:01AA:00F8:27AD ()
 *
 * Called From: 176C:0171:0029:2797
 * Called From: 176C:0171:0055:A03E
 * Called From: 176C:0179:0029:2797
 * Called From: 176C:0179:0055:A03E
 */
void f__176C_01AA_00F8_27AD()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x627A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6278));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_01D8_00CA_4A5B(); return; }
	if (!emu_flags.zf) { emu_ip = 0x01BF; emu_last_cs = 0x176C; emu_last_ip = 0x01B7; emu_last_length = 0x00F8; emu_last_crc = 0x27AD; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_01D8_00CA_4A5B(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0206_009C_FEE3(); return; }
	if (!emu_flags.zf) { emu_ip = 0x01ED; emu_last_cs = 0x176C; emu_last_ip = 0x01E5; emu_last_length = 0x00F8; emu_last_crc = 0x27AD; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0206_009C_FEE3(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0234_006E_9F7A(); return; }
	if (!emu_flags.zf) { emu_ip = 0x021B; emu_last_cs = 0x176C; emu_last_ip = 0x0213; emu_last_length = 0x00F8; emu_last_crc = 0x27AD; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0234_006E_9F7A(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0262; emu_last_cs = 0x176C; emu_last_ip = 0x023F; emu_last_length = 0x00F8; emu_last_crc = 0x27AD; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x0249; emu_last_cs = 0x176C; emu_last_ip = 0x0241; emu_last_length = 0x00F8; emu_last_crc = 0x27AD; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0262; emu_last_cs = 0x176C; emu_last_ip = 0x0247; emu_last_length = 0x00F8; emu_last_crc = 0x27AD; emu_call(); return; } // Jump does not resolve
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0290_0012_EA1A(); return; }
	if (!emu_flags.zf) { emu_ip = 0x0277; emu_last_cs = 0x176C; emu_last_ip = 0x026F; emu_last_length = 0x00F8; emu_last_crc = 0x27AD; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0290_0012_EA1A(); return; }
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
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	f__176C_02A2_0006_3F1E();
}

/**
 * Decompiled function f__176C_01D8_00CA_4A5B()
 *
 * @name f__176C_01D8_00CA_4A5B
 * @implements 176C:01D8:00CA:4A5B ()
 *
 * Called From: 176C:01B5:00F8:27AD
 * Called From: 176C:01BD:00F8:27AD
 * Called From: 176C:01BD:0113:12CE
 */
void f__176C_01D8_00CA_4A5B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x627E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x627C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0206_009C_FEE3(); return; }
	if (!emu_flags.zf) { emu_ip = 0x01ED; emu_last_cs = 0x176C; emu_last_ip = 0x01E5; emu_last_length = 0x00CA; emu_last_crc = 0x4A5B; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0206_009C_FEE3(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0234; emu_last_cs = 0x176C; emu_last_ip = 0x0211; emu_last_length = 0x00CA; emu_last_crc = 0x4A5B; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x021B; emu_last_cs = 0x176C; emu_last_ip = 0x0213; emu_last_length = 0x00CA; emu_last_crc = 0x4A5B; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0234_006E_9F7A(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0262; emu_last_cs = 0x176C; emu_last_ip = 0x023F; emu_last_length = 0x00CA; emu_last_crc = 0x4A5B; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x0249; emu_last_cs = 0x176C; emu_last_ip = 0x0241; emu_last_length = 0x00CA; emu_last_crc = 0x4A5B; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0262; emu_last_cs = 0x176C; emu_last_ip = 0x0247; emu_last_length = 0x00CA; emu_last_crc = 0x4A5B; emu_call(); return; } // Jump does not resolve
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0290; emu_last_cs = 0x176C; emu_last_ip = 0x026D; emu_last_length = 0x00CA; emu_last_crc = 0x4A5B; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x0277; emu_last_cs = 0x176C; emu_last_ip = 0x026F; emu_last_length = 0x00CA; emu_last_crc = 0x4A5B; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0290_0012_EA1A(); return; }
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
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	f__176C_02A2_0006_3F1E();
}

/**
 * Decompiled function f__176C_0206_009C_FEE3()
 *
 * @name f__176C_0206_009C_FEE3
 * @implements 176C:0206:009C:FEE3 ()
 *
 * Called From: 176C:01E3:00CA:4A5B
 * Called From: 176C:01E3:0113:12CE
 * Called From: 176C:01E3:00F8:27AD
 * Called From: 176C:01EB:00CA:4A5B
 * Called From: 176C:01EB:0113:12CE
 * Called From: 176C:01EB:00F8:27AD
 */
void f__176C_0206_009C_FEE3()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6282));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6280));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0234_006E_9F7A(); return; }
	if (!emu_flags.zf) { emu_ip = 0x021B; emu_last_cs = 0x176C; emu_last_ip = 0x0213; emu_last_length = 0x009C; emu_last_crc = 0xFEE3; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0234_006E_9F7A(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0262; emu_last_cs = 0x176C; emu_last_ip = 0x023F; emu_last_length = 0x009C; emu_last_crc = 0xFEE3; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x0249; emu_last_cs = 0x176C; emu_last_ip = 0x0241; emu_last_length = 0x009C; emu_last_crc = 0xFEE3; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0262_0040_930F(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0290_0012_EA1A(); return; }
	if (!emu_flags.zf) { emu_ip = 0x0277; emu_last_cs = 0x176C; emu_last_ip = 0x026F; emu_last_length = 0x009C; emu_last_crc = 0xFEE3; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0290_0012_EA1A(); return; }
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
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	f__176C_02A2_0006_3F1E();
}

/**
 * Decompiled function f__176C_0234_006E_9F7A()
 *
 * @name f__176C_0234_006E_9F7A
 * @implements 176C:0234:006E:9F7A ()
 *
 * Called From: 176C:0211:009C:FEE3
 * Called From: 176C:0211:00F8:27AD
 * Called From: 176C:0219:009C:FEE3
 * Called From: 176C:0219:00CA:4A5B
 * Called From: 176C:0219:0113:12CE
 * Called From: 176C:0219:00F8:27AD
 */
void f__176C_0234_006E_9F7A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6286));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6284));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0262_0040_930F(); return; }
	if (!emu_flags.zf) { emu_ip = 0x0249; emu_last_cs = 0x176C; emu_last_ip = 0x0241; emu_last_length = 0x006E; emu_last_crc = 0x9F7A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0262_0040_930F(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0290; emu_last_cs = 0x176C; emu_last_ip = 0x026D; emu_last_length = 0x006E; emu_last_crc = 0x9F7A; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { emu_ip = 0x0277; emu_last_cs = 0x176C; emu_last_ip = 0x026F; emu_last_length = 0x006E; emu_last_crc = 0x9F7A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0290_0012_EA1A(); return; }
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
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; emu_ip = 0x04E5; emu_last_cs = 0x176C; emu_last_ip = 0x029D; emu_last_length = 0x006E; emu_last_crc = 0x9F7A; emu_call(); // Jump does not resolve
	f__176C_02A2_0006_3F1E();
}

/**
 * Decompiled function f__176C_0262_0040_930F()
 *
 * @name f__176C_0262_0040_930F
 * @implements 176C:0262:0040:930F ()
 *
 * Called From: 176C:023F:006E:9F7A
 * Called From: 176C:0247:006E:9F7A
 * Called From: 176C:0247:009C:FEE3
 */
void f__176C_0262_0040_930F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x628A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6288));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0290_0012_EA1A(); return; }
	if (!emu_flags.zf) { emu_ip = 0x0277; emu_last_cs = 0x176C; emu_last_ip = 0x026F; emu_last_length = 0x0040; emu_last_crc = 0x930F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__176C_0290_0012_EA1A(); return; }
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
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	f__176C_02A2_0006_3F1E();
}

/**
 * Decompiled function f__176C_0290_0012_EA1A()
 *
 * @name f__176C_0290_0012_EA1A
 * @implements 176C:0290:0012:EA1A ()
 *
 * Called From: 176C:026D:0040:930F
 * Called From: 176C:026D:009C:FEE3
 * Called From: 176C:026D:00F8:27AD
 * Called From: 176C:0275:0113:12CE
 * Called From: 176C:0275:0040:930F
 * Called From: 176C:0275:009C:FEE3
 * Called From: 176C:0275:00CA:4A5B
 * Called From: 176C:0275:00F8:27AD
 * Called From: 176C:0275:006E:9F7A
 */
void f__176C_0290_0012_EA1A()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	f__176C_02A2_0006_3F1E();
}

/**
 * Decompiled function f__176C_02A2_0006_3F1E()
 *
 * @name f__176C_02A2_0006_3F1E
 * @implements 176C:02A2:0006:3F1E ()
 *
 * Called From: 176C:02A2:0113:12CE
 * Called From: 176C:02A2:0012:EA1A
 * Called From: 176C:02A2:009C:FEE3
 * Called From: 176C:02A2:0040:930F
 * Called From: 176C:02A2:00F8:27AD
 * Called From: 176C:02A2:00CA:4A5B
 */
void f__176C_02A2_0006_3F1E()
{
	emu_addws(&emu_sp, 0x8);
	f__176C_07CF_0013_2A7D(); return;
}

/**
 * Decompiled function f__176C_02A8_000F_CDAE()
 *
 * @name f__176C_02A8_000F_CDAE
 * @implements 176C:02A8:000F:CDAE ()
 *
 * Called From: 176C:07DF:0013:2A7D
 * Called From: 176C:07DF:0015:24CD
 */
void f__176C_02A8_000F_CDAE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (emu_flags.zf) { f__176C_02B7_000A_C278(); return; }
	emu_ip = 0x07C3; emu_last_cs = 0x176C; emu_last_ip = 0x02B4; emu_last_length = 0x000F; emu_last_crc = 0xCDAE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_02B7_000A_C278()
 *
 * @name f__176C_02B7_000A_C278
 * @implements 176C:02B7:000A:C278 ()
 *
 * Called From: 176C:02B2:000F:CDAE
 */
void f__176C_02B7_000A_C278()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__176C_02C1_0037_AB76(); return; }
	emu_ip = 0x07C3; emu_last_cs = 0x176C; emu_last_ip = 0x02BE; emu_last_length = 0x000A; emu_last_crc = 0xC278; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_02C1_0037_AB76()
 *
 * @name f__176C_02C1_0037_AB76
 * @implements 176C:02C1:0037:AB76 ()
 *
 * Called From: 176C:02BC:000A:C278
 */
void f__176C_02C1_0037_AB76()
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
	emu_push(emu_cs); emu_push(0x02F8); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__176C_02F8_0039_AE0A();
}

/**
 * Decompiled function f__176C_02F8_0039_AE0A()
 *
 * @name f__176C_02F8_0039_AE0A
 * @implements 176C:02F8:0039:AE0A ()
 *
 * Called From: 176C:02F8:0037:AB76
 */
void f__176C_02F8_0039_AE0A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x394C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x394A), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_flags.zf) { f__176C_0359_0007_32E4(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (emu_flags.zf) { f__176C_0359_0007_32E4(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x40);
	if (emu_flags.zf) { f__176C_0359_0007_32E4(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_push(emu_cs); emu_push(0x0331); emu_cs = 0x167E; emu_ip = 0x04EC; emu_last_cs = 0x176C; emu_last_ip = 0x032C; emu_last_length = 0x0039; emu_last_crc = 0xAE0A; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__176C_0359_0007_32E4()
 *
 * @name f__176C_0359_0007_32E4
 * @implements 176C:0359:0007:32E4 ()
 *
 * Called From: 176C:0304:0039:AE0A
 * Called From: 176C:030F:0039:AE0A
 * Called From: 176C:031B:0039:AE0A
 */
void f__176C_0359_0007_32E4()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__176C_0360_000D_AD73(); return; }
	f__176C_042F_0014_AC2A(); return;
}

/**
 * Decompiled function f__176C_0360_000D_AD73()
 *
 * @name f__176C_0360_000D_AD73
 * @implements 176C:0360:000D:AD73 ()
 *
 * Called From: 176C:035B:0007:32E4
 */
void f__176C_0360_000D_AD73()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x036D); emu_cs = 0x1A34; f__1A34_2134_001E_2B9E();
	f__176C_036D_0010_14D3();
}

/**
 * Decompiled function f__176C_036D_0010_14D3()
 *
 * @name f__176C_036D_0010_14D3
 * @implements 176C:036D:0010:14D3 ()
 *
 * Called From: 176C:036D:000D:AD73
 */
void f__176C_036D_0010_14D3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x51), 0x0);
	if (!emu_flags.zf) { f__176C_037D_000E_E5BE(); return; }
	f__176C_042F_0014_AC2A(); return;
}

/**
 * Decompiled function f__176C_037D_000E_E5BE()
 *
 * @name f__176C_037D_000E_E5BE
 * @implements 176C:037D:000E:E5BE ()
 *
 * Called From: 176C:0378:0010:14D3
 */
void f__176C_037D_000E_E5BE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { f__176C_038B_000F_5FA0(); return; }
	f__176C_0427_001C_38C7(); return;
}

/**
 * Decompiled function f__176C_038B_000F_5FA0()
 *
 * @name f__176C_038B_000F_5FA0
 * @implements 176C:038B:000F:5FA0 ()
 *
 * Called From: 176C:0386:000E:E5BE
 */
void f__176C_038B_000F_5FA0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), 0x8000);
	if (emu_flags.zf) { f__176C_039A_000D_2F8F(); return; }
	emu_ip = 0x0427; emu_last_cs = 0x176C; emu_last_ip = 0x0397; emu_last_length = 0x000F; emu_last_crc = 0x5FA0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_039A_000D_2F8F()
 *
 * @name f__176C_039A_000D_2F8F
 * @implements 176C:039A:000D:2F8F ()
 *
 * Called From: 176C:0395:000F:5FA0
 */
void f__176C_039A_000D_2F8F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_push(emu_cs); emu_push(0x03A7); emu_cs = 0x167E; f__167E_0088_001A_4DC5();
	f__176C_03A7_0013_6D4D();
}

/**
 * Decompiled function f__176C_03A7_0013_6D4D()
 *
 * @name f__176C_03A7_0013_6D4D
 * @implements 176C:03A7:0013:6D4D ()
 *
 * Called From: 176C:03A7:000D:2F8F
 */
void f__176C_03A7_0013_6D4D()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (!emu_flags.zf) { emu_ip = 0x03F0; emu_last_cs = 0x176C; emu_last_ip = 0x03AB; emu_last_length = 0x0013; emu_last_crc = 0x6D4D; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_push(emu_cs); emu_push(0x03BA); emu_cs = 0x167E; f__167E_0284_000C_AAF8();
	f__176C_03BA_0031_0F86();
}

/**
 * Decompiled function f__176C_03BA_0031_0F86()
 *
 * @name f__176C_03BA_0031_0F86
 * @implements 176C:03BA:0031:0F86 ()
 *
 * Called From: 176C:03BA:0013:6D4D
 */
void f__176C_03BA_0031_0F86()
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
	if (!emu_flags.zf) { f__176C_03F0_0023_9BC0(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_push(emu_cs); emu_push(0x03EB); emu_cs = 0x167E; emu_ip = 0x05A6; emu_last_cs = 0x176C; emu_last_ip = 0x03E6; emu_last_length = 0x0031; emu_last_crc = 0x0F86; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__176C_03F0_0023_9BC0()
 *
 * @name f__176C_03F0_0023_9BC0
 * @implements 176C:03F0:0023:9BC0 ()
 *
 * Called From: 176C:03D6:0031:0F86
 */
void f__176C_03F0_0023_9BC0()
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
	emu_push(emu_cs); emu_push(0x0413); emu_cs = 0x0F3F; f__0F3F_0125_000D_0828();
	f__176C_0413_0011_A789();
}

/**
 * Decompiled function f__176C_0413_0011_A789()
 *
 * @name f__176C_0413_0011_A789
 * @implements 176C:0413:0011:A789 ()
 *
 * Called From: 176C:0413:0023:9BC0
 */
void f__176C_0413_0011_A789()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x0424); emu_cs = 0x1A34; f__1A34_1E99_0012_0D98();
	f__176C_0424_001F_F8B6();
}

/**
 * Decompiled function f__176C_0424_001F_F8B6()
 *
 * @name f__176C_0424_001F_F8B6
 * @implements 176C:0424:001F:F8B6 ()
 *
 * Called From: 176C:0424:0011:A789
 */
void f__176C_0424_001F_F8B6()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_decb(&emu_get_memory8(emu_es, emu_bx.x,  0x51));
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__176C_0466_0030_3EBC(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x0443); emu_cs = 0x1A34; f__1A34_1F55_0019_9514();
	f__176C_0443_0020_337D();
}

/**
 * Decompiled function f__176C_0427_001C_38C7()
 *
 * @name f__176C_0427_001C_38C7
 * @implements 176C:0427:001C:38C7 ()
 *
 * Called From: 176C:0388:000E:E5BE
 */
void f__176C_0427_001C_38C7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_decb(&emu_get_memory8(emu_es, emu_bx.x,  0x51));
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__176C_0466_0030_3EBC(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x0443); emu_cs = 0x1A34; f__1A34_1F55_0019_9514();
	f__176C_0443_0020_337D();
}

/**
 * Decompiled function f__176C_042F_0014_AC2A()
 *
 * @name f__176C_042F_0014_AC2A
 * @implements 176C:042F:0014:AC2A ()
 *
 * Called From: 176C:035D:0007:32E4
 * Called From: 176C:037A:0010:14D3
 */
void f__176C_042F_0014_AC2A()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__176C_0466_0030_3EBC(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x0443); emu_cs = 0x1A34; f__1A34_1F55_0019_9514();
	f__176C_0443_0020_337D();
}

/**
 * Decompiled function f__176C_0443_0020_337D()
 *
 * @name f__176C_0443_0020_337D
 * @implements 176C:0443:0020:337D ()
 *
 * Called From: 176C:0443:0014:AC2A
 * Called From: 176C:0443:001C:38C7
 * Called From: 176C:0443:001F:F8B6
 */
void f__176C_0443_0020_337D()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x40);
	if (emu_flags.zf) { f__176C_0466_0030_3EBC(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x0463); emu_cs = 0x1A34; emu_ip = 0x23B8; emu_last_cs = 0x176C; emu_last_ip = 0x045E; emu_last_length = 0x0020; emu_last_crc = 0x337D; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__176C_0466_0030_3EBC()
 *
 * @name f__176C_0466_0030_3EBC
 * @implements 176C:0466:0030:3EBC ()
 *
 * Called From: 176C:0431:0014:AC2A
 * Called From: 176C:0431:001C:38C7
 * Called From: 176C:0431:001F:F8B6
 * Called From: 176C:0450:0020:337D
 */
void f__176C_0466_0030_3EBC()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__176C_04B4_0017_EE96(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6E), 0x0);
	if (emu_flags.zf) { f__176C_04B4_0017_EE96(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_decb(&emu_get_memory8(emu_es, emu_bx.x,  0x6E));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x6E), 0x1);
	if (emu_flags.zf) { f__176C_0496_001B_66C4(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x800);
	f__176C_04A0_0011_B706(); return;
}

/**
 * Decompiled function f__176C_0496_001B_66C4()
 *
 * @name f__176C_0496_001B_66C4
 * @implements 176C:0496:001B:66C4 ()
 *
 * Called From: 176C:0488:0030:3EBC
 */
void f__176C_0496_001B_66C4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xF7FF);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04B1); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_04B1_001A_6C95();
}

/**
 * Decompiled function f__176C_04A0_0011_B706()
 *
 * @name f__176C_04A0_0011_B706
 * @implements 176C:04A0:0011:B706 ()
 *
 * Called From: 176C:0494:0030:3EBC
 */
void f__176C_04A0_0011_B706()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04B1); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_04B1_001A_6C95();
}

/**
 * Decompiled function f__176C_04B1_001A_6C95()
 *
 * @name f__176C_04B1_001A_6C95
 * @implements 176C:04B1:001A:6C95 ()
 *
 * Called From: 176C:04B1:0011:B706
 * Called From: 176C:04B1:001B:66C4
 */
void f__176C_04B1_001A_6C95()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { f__176C_04CE_001C_1095(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x04CB); emu_cs = 0x1A34; f__1A34_193F_0013_AF17();
	f__176C_04CB_001F_50E5();
}

/**
 * Decompiled function f__176C_04B4_0017_EE96()
 *
 * @name f__176C_04B4_0017_EE96
 * @implements 176C:04B4:0017:EE96 ()
 *
 * Called From: 176C:046A:0030:3EBC
 * Called From: 176C:0475:0030:3EBC
 */
void f__176C_04B4_0017_EE96()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { f__176C_04CE_001C_1095(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x04CB); emu_cs = 0x1A34; f__1A34_193F_0013_AF17();
	f__176C_04CB_001F_50E5();
}

/**
 * Decompiled function f__176C_04CB_001F_50E5()
 *
 * @name f__176C_04CB_001F_50E5
 * @implements 176C:04CB:001F:50E5 ()
 *
 * Called From: 176C:04CB:0017:EE96
 * Called From: 176C:04CB:001A:6C95
 */
void f__176C_04CB_001F_50E5()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { f__176C_050B_0009_0AEB(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x04EA); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__176C_04EA_0008_7D9C();
}

/**
 * Decompiled function f__176C_04CE_001C_1095()
 *
 * @name f__176C_04CE_001C_1095
 * @implements 176C:04CE:001C:1095 ()
 *
 * Called From: 176C:04B8:0017:EE96
 * Called From: 176C:04B8:001A:6C95
 */
void f__176C_04CE_001C_1095()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { f__176C_050B_0009_0AEB(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x04EA); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__176C_04EA_0008_7D9C();
}

/**
 * Decompiled function f__176C_04EA_0008_7D9C()
 *
 * @name f__176C_04EA_0008_7D9C
 * @implements 176C:04EA:0008:7D9C ()
 *
 * Called From: 176C:04EA:001F:50E5
 * Called From: 176C:04EA:001C:1095
 */
void f__176C_04EA_0008_7D9C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04F2); emu_cs = 0x34CD; ovl__34CD(32);
	f__176C_04F2_0016_ACFE();
}

/**
 * Decompiled function f__176C_04F2_0016_ACFE()
 *
 * @name f__176C_04F2_0016_ACFE
 * @implements 176C:04F2:0016:ACFE ()
 *
 * Called From: 176C:04F2:0008:7D9C
 */
void f__176C_04F2_0016_ACFE()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__176C_050B_0009_0AEB(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0508); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_0508_000C_02E5();
}

/**
 * Decompiled function f__176C_0508_000C_02E5()
 *
 * @name f__176C_0508_000C_02E5
 * @implements 176C:0508:000C:02E5 ()
 *
 * Called From: 176C:0508:0016:ACFE
 */
void f__176C_0508_000C_02E5()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0514; emu_last_cs = 0x176C; emu_last_ip = 0x050F; emu_last_length = 0x000C; emu_last_crc = 0x02E5; emu_call(); return; } // Jump does not resolve
	f__176C_06A0_0009_08A5(); return;
}

/**
 * Decompiled function f__176C_050B_0009_0AEB()
 *
 * @name f__176C_050B_0009_0AEB
 * @implements 176C:050B:0009:0AEB ()
 *
 * Called From: 176C:04D7:001F:50E5
 * Called From: 176C:04D7:001C:1095
 * Called From: 176C:04F5:0016:ACFE
 */
void f__176C_050B_0009_0AEB()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (!emu_flags.zf) { f__176C_0514_000E_8114(); return; }
	f__176C_06A0_0009_08A5(); return;
}

/**
 * Decompiled function f__176C_0514_000E_8114()
 *
 * @name f__176C_0514_000E_8114
 * @implements 176C:0514:000E:8114 ()
 *
 * Called From: 176C:050F:0009:0AEB
 */
void f__176C_0514_000E_8114()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x70), 0x0);
	if (emu_flags.zf) { f__176C_0522_004F_02EA(); return; }
	f__176C_0698_0011_0117(); return;
}

/**
 * Decompiled function f__176C_0522_004F_02EA()
 *
 * @name f__176C_0522_004F_02EA
 * @implements 176C:0522:004F:02EA ()
 *
 * Called From: 176C:051D:000E:8114
 */
void f__176C_0522_004F_02EA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x0);
	if (!emu_flags.zf) { f__176C_0538_0039_D504(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6A), 0x0);
	if (!emu_flags.zf) { f__176C_0544_002D_2629(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	if (emu_flags.zf) { f__176C_05BD_0044_2E20(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x05BD; emu_last_cs = 0x176C; emu_last_ip = 0x054D; emu_last_length = 0x004F; emu_last_crc = 0x02EA; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x3F);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0571); emu_cs = 0x34CD; emu_ip = 0x05FF; emu_last_cs = 0x176C; emu_last_ip = 0x056C; emu_last_length = 0x004F; emu_last_crc = 0x02EA; emu_call(); // Jump does not resolve
	f__176C_0571_0090_1EFE();
}

/**
 * Decompiled function f__176C_0538_0039_D504()
 *
 * @name f__176C_0538_0039_D504
 * @implements 176C:0538:0039:D504 ()
 *
 * Called From: 176C:052B:004F:02EA
 */
void f__176C_0538_0039_D504()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	if (emu_flags.zf) { f__176C_05BD_0044_2E20(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x05BD; emu_last_cs = 0x176C; emu_last_ip = 0x054D; emu_last_length = 0x0039; emu_last_crc = 0xD504; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x3F);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0571); emu_cs = 0x34CD; emu_ip = 0x05FF; emu_last_cs = 0x176C; emu_last_ip = 0x056C; emu_last_length = 0x0039; emu_last_crc = 0xD504; emu_call(); // Jump does not resolve
	f__176C_0571_0090_1EFE();
}

/**
 * Decompiled function f__176C_0544_002D_2629()
 *
 * @name f__176C_0544_002D_2629
 * @implements 176C:0544:002D:2629 ()
 *
 * Called From: 176C:0536:004F:02EA
 */
void f__176C_0544_002D_2629()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x05BD; emu_last_cs = 0x176C; emu_last_ip = 0x054D; emu_last_length = 0x002D; emu_last_crc = 0x2629; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x3F);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0571); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_0571_0090_1EFE();
}

/**
 * Decompiled function f__176C_0571_0090_1EFE()
 *
 * @name f__176C_0571_0090_1EFE
 * @implements 176C:0571:0090:1EFE ()
 *
 * Called From: 176C:0571:002D:2629
 */
void f__176C_0571_0090_1EFE()
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
	if (emu_flags.zf) { f__176C_05BD_0044_2E20(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x70), 0x3);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x20);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x05BD; emu_last_cs = 0x176C; emu_last_ip = 0x05A9; emu_last_length = 0x0090; emu_last_crc = 0x1EFE; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xF7);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x061B; emu_last_cs = 0x176C; emu_last_ip = 0x05C6; emu_last_length = 0x0090; emu_last_crc = 0x1EFE; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (emu_flags.zf) { emu_ip = 0x061B; emu_last_cs = 0x176C; emu_last_ip = 0x05D2; emu_last_length = 0x0090; emu_last_crc = 0x1EFE; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x061B; emu_last_cs = 0x176C; emu_last_ip = 0x05DD; emu_last_length = 0x0090; emu_last_crc = 0x1EFE; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x3F);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0601); emu_cs = 0x34CD; emu_ip = 0x068F; emu_last_cs = 0x176C; emu_last_ip = 0x05FC; emu_last_length = 0x0090; emu_last_crc = 0x1EFE; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__176C_05BD_0044_2E20()
 *
 * @name f__176C_05BD_0044_2E20
 * @implements 176C:05BD:0044:2E20 ()
 *
 * Called From: 176C:0542:004F:02EA
 * Called From: 176C:0542:0039:D504
 * Called From: 176C:0594:0090:1EFE
 */
void f__176C_05BD_0044_2E20()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x1);
	if (!emu_flags.zf) { f__176C_061B_0044_54EF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (emu_flags.zf) { emu_ip = 0x061B; emu_last_cs = 0x176C; emu_last_ip = 0x05D2; emu_last_length = 0x0044; emu_last_crc = 0x2E20; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x061B; emu_last_cs = 0x176C; emu_last_ip = 0x05DD; emu_last_length = 0x0044; emu_last_crc = 0x2E20; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x3F);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0601); emu_cs = 0x34CD; emu_ip = 0x068F; emu_last_cs = 0x176C; emu_last_ip = 0x05FC; emu_last_length = 0x0044; emu_last_crc = 0x2E20; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__176C_061B_0044_54EF()
 *
 * @name f__176C_061B_0044_54EF
 * @implements 176C:061B:0044:54EF ()
 *
 * Called From: 176C:05C6:0044:2E20
 */
void f__176C_061B_0044_54EF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { f__176C_0696_0002_03BC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x5);
	if (emu_flags.zf) { f__176C_063D_0022_6242(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	if (emu_flags.zf) { f__176C_066E_001C_14BF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x3F);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x065F); emu_cs = 0x34CD; emu_ip = 0x06ED; emu_last_cs = 0x176C; emu_last_ip = 0x065A; emu_last_length = 0x0044; emu_last_crc = 0x54EF; emu_call(); // Jump does not resolve
	f__176C_065F_000F_CD81();
}

/**
 * Decompiled function f__176C_063D_0022_6242()
 *
 * @name f__176C_063D_0022_6242
 * @implements 176C:063D:0022:6242 ()
 *
 * Called From: 176C:062F:0044:54EF
 */
void f__176C_063D_0022_6242()
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
	f__176C_065F_000F_CD81();
}

/**
 * Decompiled function f__176C_065F_000F_CD81()
 *
 * @name f__176C_065F_000F_CD81
 * @implements 176C:065F:000F:CD81 ()
 *
 * Called From: 176C:065F:0022:6242
 */
void f__176C_065F_000F_CD81()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x70), 0x4);
	f__176C_0696_0002_03BC(); return;
}

/**
 * Decompiled function f__176C_066E_001C_14BF()
 *
 * @name f__176C_066E_001C_14BF
 * @implements 176C:066E:001C:14BF ()
 *
 * Called From: 176C:063B:0044:54EF
 */
void f__176C_066E_001C_14BF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	if (emu_flags.zf) { f__176C_0696_0002_03BC(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x068A); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_068A_000E_E532();
}

/**
 * Decompiled function f__176C_068A_000E_E532()
 *
 * @name f__176C_068A_000E_E532
 * @implements 176C:068A:000E:E532 ()
 *
 * Called From: 176C:068A:001C:14BF
 */
void f__176C_068A_000E_E532()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	f__176C_06A0_0009_08A5(); return;
}

/**
 * Decompiled function f__176C_0696_0002_03BC()
 *
 * @name f__176C_0696_0002_03BC
 * @implements 176C:0696:0002:03BC ()
 *
 * Called From: 176C:0624:0044:54EF
 * Called From: 176C:066C:000F:CD81
 * Called From: 176C:0677:001C:14BF
 */
void f__176C_0696_0002_03BC()
{
	f__176C_06A0_0009_08A5(); return;
}

/**
 * Decompiled function f__176C_0698_0011_0117()
 *
 * @name f__176C_0698_0011_0117
 * @implements 176C:0698:0011:0117 ()
 *
 * Called From: 176C:051F:000E:8114
 */
void f__176C_0698_0011_0117()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x70));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (!emu_flags.zf) { f__176C_06A9_000E_B3EA(); return; }
	f__176C_0788_002F_0E9D(); return;
}

/**
 * Decompiled function f__176C_06A0_0009_08A5()
 *
 * @name f__176C_06A0_0009_08A5
 * @implements 176C:06A0:0009:08A5 ()
 *
 * Called From: 176C:0511:0009:0AEB
 * Called From: 176C:0511:000C:02E5
 * Called From: 176C:0696:0002:03BC
 * Called From: 176C:0696:000E:E532
 */
void f__176C_06A0_0009_08A5()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (!emu_flags.zf) { f__176C_06A9_000E_B3EA(); return; }
	f__176C_0788_002F_0E9D(); return;
}

/**
 * Decompiled function f__176C_06A9_000E_B3EA()
 *
 * @name f__176C_06A9_000E_B3EA
 * @implements 176C:06A9:000E:B3EA ()
 *
 * Called From: 176C:06A4:0009:08A5
 * Called From: 176C:06A4:0011:0117
 */
void f__176C_06A9_000E_B3EA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x0);
	if (emu_flags.zf) { f__176C_06B7_0010_CDA5(); return; }
	f__176C_0780_0037_627F(); return;
}

/**
 * Decompiled function f__176C_06B7_0010_CDA5()
 *
 * @name f__176C_06B7_0010_CDA5
 * @implements 176C:06B7:0010:CDA5 ()
 *
 * Called From: 176C:06B2:000E:B3EA
 */
void f__176C_06B7_0010_CDA5()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06C7); emu_cs = 0x15C2; f__15C2_0526_000F_1707();
	f__176C_06C7_0009_D5E0();
}

/**
 * Decompiled function f__176C_06C7_0009_D5E0()
 *
 * @name f__176C_06C7_0009_D5E0
 * @implements 176C:06C7:0009:D5E0 ()
 *
 * Called From: 176C:06C7:0010:CDA5
 */
void f__176C_06C7_0009_D5E0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__176C_06D0_0029_F7D6(); return; }
	f__176C_077E_0002_03BC(); return;
}

/**
 * Decompiled function f__176C_06D0_0029_F7D6()
 *
 * @name f__176C_06D0_0029_F7D6
 * @implements 176C:06D0:0029:F7D6 ()
 *
 * Called From: 176C:06CB:0009:D5E0
 */
void f__176C_06D0_0029_F7D6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x800);
	if (!emu_flags.zf) { f__176C_0700_000D_199B(); return; }
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
	emu_push(emu_cs); emu_push(0x06F9); emu_cs = 0x07D4; f__07D4_196B_0073_7B75();
	f__176C_06F9_0014_5754();
}

/**
 * Decompiled function f__176C_06F9_0014_5754()
 *
 * @name f__176C_06F9_0014_5754
 * @implements 176C:06F9:0014:5754 ()
 *
 * Called From: 176C:06F9:0029:F7D6
 */
void f__176C_06F9_0014_5754()
{
	emu_addws(&emu_sp, 0xC);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__176C_070D_0013_575F(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3944));
	emu_movw(&emu_dx.x, 0x5);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3948), emu_ax.x);
	f__176C_0713_000D_D1D6(); return;
}

/**
 * Decompiled function f__176C_0700_000D_199B()
 *
 * @name f__176C_0700_000D_199B
 * @implements 176C:0700:000D:199B ()
 *
 * Called From: 176C:06DA:0029:F7D6
 */
void f__176C_0700_000D_199B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3944));
	emu_movw(&emu_dx.x, 0x5);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3948), emu_ax.x);
	f__176C_0713_000D_D1D6(); return;
}

/**
 * Decompiled function f__176C_070D_0013_575F()
 *
 * @name f__176C_070D_0013_575F
 * @implements 176C:070D:0013:575F ()
 *
 * Called From: 176C:06FE:0014:5754
 */
void f__176C_070D_0013_575F()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3948), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x24), emu_ax.x);
	f__176C_0768_0018_0B79(); return;
}

/**
 * Decompiled function f__176C_0713_000D_D1D6()
 *
 * @name f__176C_0713_000D_D1D6
 * @implements 176C:0713:000D:D1D6 ()
 *
 * Called From: 176C:070B:0014:5754
 * Called From: 176C:070B:000D:199B
 */
void f__176C_0713_000D_D1D6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x24), emu_ax.x);
	f__176C_0768_0018_0B79(); return;
}

/**
 * Decompiled function f__176C_0720_0040_284C()
 *
 * @name f__176C_0720_0040_284C
 * @implements 176C:0720:0040:284C ()
 *
 * Called From: 176C:077C:0018:0B79
 */
void f__176C_0720_0040_284C()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37A4), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x37A2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1D));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0xF);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x37A8));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_0750_0010_CA55(); return; }
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
	emu_push(emu_cs); emu_push(0x0760); emu_cs = 0x15C2; f__15C2_0559_0015_6879();
	f__176C_0760_0008_6B80();
}

/**
 * Decompiled function f__176C_0750_0010_CA55()
 *
 * @name f__176C_0750_0010_CA55
 * @implements 176C:0750:0010:CA55 ()
 *
 * Called From: 176C:073C:0040:284C
 */
void f__176C_0750_0010_CA55()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0760); emu_cs = 0x15C2; f__15C2_0559_0015_6879();
	f__176C_0760_0008_6B80();
}

/**
 * Decompiled function f__176C_0760_0008_6B80()
 *
 * @name f__176C_0760_0008_6B80
 * @implements 176C:0760:0008:6B80 ()
 *
 * Called From: 176C:0760:0010:CA55
 * Called From: 176C:0760:0040:284C
 */
void f__176C_0760_0008_6B80()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__176C_0768_0018_0B79(); return; }
	f__176C_077E_0002_03BC(); return;
}

/**
 * Decompiled function f__176C_0768_0018_0B79()
 *
 * @name f__176C_0768_0018_0B79
 * @implements 176C:0768:0018:0B79 ()
 *
 * Called From: 176C:071E:0013:575F
 * Called From: 176C:071E:000D:D1D6
 * Called From: 176C:0764:0008:6B80
 */
void f__176C_0768_0018_0B79()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3948));
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x3948));
	emu_orw(&emu_ax.x, emu_ax.x);
	if ((emu_flags.sf != emu_flags.of)) { f__176C_077E_0002_03BC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x0);
	if (emu_flags.zf) { f__176C_0720_0040_284C(); return; }
	f__176C_0788_002F_0E9D(); return;
}

/**
 * Decompiled function f__176C_077E_0002_03BC()
 *
 * @name f__176C_077E_0002_03BC
 * @implements 176C:077E:0002:03BC ()
 *
 * Called From: 176C:06CD:0009:D5E0
 * Called From: 176C:0766:0008:6B80
 * Called From: 176C:0771:0018:0B79
 */
void f__176C_077E_0002_03BC()
{
	f__176C_0788_002F_0E9D(); return;
}

/**
 * Decompiled function f__176C_0780_0037_627F()
 *
 * @name f__176C_0780_0037_627F
 * @implements 176C:0780:0037:627F ()
 *
 * Called From: 176C:06B4:000E:B3EA
 */
void f__176C_0780_0037_627F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x50), 0xFF);
	if (emu_flags.zf) { f__176C_07C3_000A_75EF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	if (!emu_flags.zf) { f__176C_07C3_000A_75EF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x50));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs);
	emu_push(0x07B7); f__176C_000E_000E_8C63();
	f__176C_07B7_0016_D30D();
}

/**
 * Decompiled function f__176C_0788_002F_0E9D()
 *
 * @name f__176C_0788_002F_0E9D
 * @implements 176C:0788:002F:0E9D ()
 *
 * Called From: 176C:06A6:0009:08A5
 * Called From: 176C:06A6:0011:0117
 * Called From: 176C:077E:0002:03BC
 * Called From: 176C:077E:0018:0B79
 */
void f__176C_0788_002F_0E9D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x50), 0xFF);
	if (emu_flags.zf) { f__176C_07C3_000A_75EF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	if (!emu_flags.zf) { f__176C_07C3_000A_75EF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x50));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs);
	emu_push(0x07B7); f__176C_000E_000E_8C63();
	f__176C_07B7_0016_D30D();
}

/**
 * Decompiled function f__176C_07B7_0016_D30D()
 *
 * @name f__176C_07B7_0016_D30D
 * @implements 176C:07B7:0016:D30D ()
 *
 * Called From: 176C:07B7:0037:627F
 * Called From: 176C:07B7:002F:0E9D
 */
void f__176C_07B7_0016_D30D()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x50), 0xFF);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07CD); emu_cs = 0x0FE4; f__0FE4_0283_0038_0940();
	f__176C_07CD_0015_24CD();
}

/**
 * Decompiled function f__176C_07C3_000A_75EF()
 *
 * @name f__176C_07C3_000A_75EF
 * @implements 176C:07C3:000A:75EF ()
 *
 * Called From: 176C:0791:002F:0E9D
 * Called From: 176C:0791:0037:627F
 * Called From: 176C:079F:0037:627F
 * Called From: 176C:079F:002F:0E9D
 */
void f__176C_07C3_000A_75EF()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07CD); emu_cs = 0x0FE4; f__0FE4_0283_0038_0940();
	f__176C_07CD_0015_24CD();
}

/**
 * Decompiled function f__176C_07CD_0015_24CD()
 *
 * @name f__176C_07CD_0015_24CD
 * @implements 176C:07CD:0015:24CD ()
 *
 * Called From: 176C:07CD:000A:75EF
 * Called From: 176C:07CD:0016:D30D
 */
void f__176C_07CD_0015_24CD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x626A), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6268), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x626A));
	if (emu_flags.zf) { f__176C_07E2_0006_137A(); return; }
	f__176C_02A8_000F_CDAE(); return;
}

/**
 * Decompiled function f__176C_07CF_0013_2A7D()
 *
 * @name f__176C_07CF_0013_2A7D
 * @implements 176C:07CF:0013:2A7D ()
 *
 * Called From: 176C:02A5:0006:3F1E
 */
void f__176C_07CF_0013_2A7D()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x626A), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6268), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x626A));
	if (emu_flags.zf) { emu_ip = 0x07E2; emu_last_cs = 0x176C; emu_last_ip = 0x07DD; emu_last_length = 0x0013; emu_last_crc = 0x2A7D; emu_call(); return; } // Jump does not resolve
	f__176C_02A8_000F_CDAE(); return;
}

/**
 * Decompiled function f__176C_07E2_0006_137A()
 *
 * @name f__176C_07E2_0006_137A
 * @implements 176C:07E2:0006:137A ()
 *
 * Called From: 176C:07DD:0015:24CD
 */
void f__176C_07E2_0006_137A()
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
 * Decompiled function f__176C_0858_0023_F38F()
 *
 * @name f__176C_0858_0023_F38F
 * @implements 176C:0858:0023:F38F ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_0858_0023_F38F()
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
	emu_push(emu_cs); emu_push(0x087B); emu_cs = 0x1A34; f__1A34_350F_0021_7907();
	f__176C_087B_0005_1FBC();
}

/**
 * Decompiled function f__176C_087B_0005_1FBC()
 *
 * @name f__176C_087B_0005_1FBC
 * @implements 176C:087B:0005:1FBC ()
 *
 * Called From: 176C:087B:0023:F38F
 */
void f__176C_087B_0005_1FBC()
{
	emu_addws(&emu_sp, 0x6);
	f__176C_0880_0002_00E2(); return;
}

/**
 * Decompiled function f__176C_0880_0002_00E2()
 *
 * @name f__176C_0880_0002_00E2
 * @implements 176C:0880:0002:00E2 ()
 *
 * Called From: 176C:087E:0005:1FBC
 */
void f__176C_0880_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_0882_0014_836D()
 *
 * @name f__176C_0882_0014_836D
 * @implements 176C:0882:0014:836D ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_0882_0014_836D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (!emu_flags.zf) { f__176C_0896_000D_2F0F(); return; }
	emu_ip = 0x0BBA; emu_last_cs = 0x176C; emu_last_ip = 0x0893; emu_last_length = 0x0014; emu_last_crc = 0x836D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_0896_000D_2F0F()
 *
 * @name f__176C_0896_000D_2F0F
 * @implements 176C:0896:000D:2F0F ()
 *
 * Called From: 176C:0891:0014:836D
 */
void f__176C_0896_000D_2F0F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x56));
	emu_push(emu_cs); emu_push(0x08A3); emu_cs = 0x167E; f__167E_0088_001A_4DC5();
	f__176C_08A3_0009_8516();
}

/**
 * Decompiled function f__176C_08A3_0009_8516()
 *
 * @name f__176C_08A3_0009_8516
 * @implements 176C:08A3:0009:8516 ()
 *
 * Called From: 176C:08A3:000D:2F0F
 */
void f__176C_08A3_0009_8516()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { f__176C_08AC_0008_36FA(); return; }
	emu_ip = 0x0A7F; emu_last_cs = 0x176C; emu_last_ip = 0x08A9; emu_last_length = 0x0009; emu_last_crc = 0x8516; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_08AC_0008_36FA()
 *
 * @name f__176C_08AC_0008_36FA
 * @implements 176C:08AC:0008:36FA ()
 *
 * Called From: 176C:08A7:0009:8516
 */
void f__176C_08AC_0008_36FA()
{
	emu_cmpw(&emu_ax.x, 0x2);
	if (!emu_flags.zf) { f__176C_08B4_0008_3676(); return; }
	emu_ip = 0x0A7C; emu_last_cs = 0x176C; emu_last_ip = 0x08B1; emu_last_length = 0x0008; emu_last_crc = 0x36FA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_08B4_0008_3676()
 *
 * @name f__176C_08B4_0008_3676
 * @implements 176C:08B4:0008:3676 ()
 *
 * Called From: 176C:08AF:0008:36FA
 */
void f__176C_08B4_0008_3676()
{
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__176C_08BC_000D_2D7F(); return; }
	emu_ip = 0x0A7F; emu_last_cs = 0x176C; emu_last_ip = 0x08B9; emu_last_length = 0x0008; emu_last_crc = 0x3676; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_08BC_000D_2D7F()
 *
 * @name f__176C_08BC_000D_2D7F
 * @implements 176C:08BC:000D:2D7F ()
 *
 * Called From: 176C:08B7:0008:3676
 */
void f__176C_08BC_000D_2D7F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x56));
	emu_push(emu_cs); emu_push(0x08C9); emu_cs = 0x167E; f__167E_02AE_000C_AA20();
	f__176C_08C9_002C_CC5D();
}

/**
 * Decompiled function f__176C_08C9_002C_CC5D()
 *
 * @name f__176C_08C9_002C_CC5D
 * @implements 176C:08C9:002C:CC5D ()
 *
 * Called From: 176C:08C9:000D:2D7F
 */
void f__176C_08C9_002C_CC5D()
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
	if (emu_flags.zf) { emu_ip = 0x08F5; emu_last_cs = 0x176C; emu_last_ip = 0x08F0; emu_last_length = 0x002C; emu_last_crc = 0xCC5D; emu_call(); return; } // Jump does not resolve
	f__176C_09A8_0018_774E(); return;
}

/**
 * Decompiled function f__176C_0984_0006_29B8()
 *
 * @name f__176C_0984_0006_29B8
 * @implements 176C:0984:0006:29B8 ()
 *
 * Called From: 176C:0A5B:0006:3E0E
 */
void f__176C_0984_0006_29B8()
{
	emu_movw(&emu_ax.x, 0x1);
	f__176C_0BBF_0004_0F7A(); return;
}

/**
 * Decompiled function f__176C_09A8_0018_774E()
 *
 * @name f__176C_09A8_0018_774E
 * @implements 176C:09A8:0018:774E ()
 *
 * Called From: 176C:08F2:002C:CC5D
 */
void f__176C_09A8_0018_774E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (emu_flags.zf) { emu_ip = 0x09CD; emu_last_cs = 0x176C; emu_last_ip = 0x09B0; emu_last_length = 0x0018; emu_last_crc = 0x774E; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x10);
	if (!emu_flags.zf) { f__176C_09C0_000D_40EF(); return; }
	emu_ip = 0x0A60; emu_last_cs = 0x176C; emu_last_ip = 0x09BD; emu_last_length = 0x0018; emu_last_crc = 0x774E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_09C0_000D_40EF()
 *
 * @name f__176C_09C0_000D_40EF
 * @implements 176C:09C0:000D:40EF ()
 *
 * Called From: 176C:09BB:0018:774E
 */
void f__176C_09C0_000D_40EF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x1);
	if (emu_flags.zf) { f__176C_09CD_000D_52BB(); return; }
	emu_ip = 0x0A60; emu_last_cs = 0x176C; emu_last_ip = 0x09CA; emu_last_length = 0x000D; emu_last_crc = 0x40EF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_09CD_000D_52BB()
 *
 * @name f__176C_09CD_000D_52BB
 * @implements 176C:09CD:000D:52BB ()
 *
 * Called From: 176C:09C8:000D:40EF
 */
void f__176C_09CD_000D_52BB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (emu_flags.zf) { f__176C_09DA_0015_540E(); return; }
	emu_ip = 0x0A60; emu_last_cs = 0x176C; emu_last_ip = 0x09D7; emu_last_length = 0x000D; emu_last_crc = 0x52BB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_09DA_0015_540E()
 *
 * @name f__176C_09DA_0015_540E
 * @implements 176C:09DA:0015:540E ()
 *
 * Called From: 176C:09D5:000D:52BB
 */
void f__176C_09DA_0015_540E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_ax.x, 0x18);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x09EF); emu_cs = 0x3483; ovl__3483(0);
	f__176C_09EF_0018_8E47();
}

/**
 * Decompiled function f__176C_09EF_0018_8E47()
 *
 * @name f__176C_09EF_0018_8E47
 * @implements 176C:09EF:0018:8E47 ()
 *
 * Called From: 176C:09EF:0015:540E
 */
void f__176C_09EF_0018_8E47()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A07); emu_cs = 0x0FE4; f__0FE4_05FD_002C_E199();
	f__176C_0A07_0008_7F94();
}

/**
 * Decompiled function f__176C_0A07_0008_7F94()
 *
 * @name f__176C_0A07_0008_7F94
 * @implements 176C:0A07:0008:7F94 ()
 *
 * Called From: 176C:0A07:0018:8E47
 */
void f__176C_0A07_0008_7F94()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A0F); emu_cs = 0x1A34; f__1A34_2C95_001B_D4A0();
	f__176C_0A0F_0010_1E8C();
}

/**
 * Decompiled function f__176C_0A0F_0010_1E8C()
 *
 * @name f__176C_0A0F_0010_1E8C
 * @implements 176C:0A0F:0010:1E8C ()
 *
 * Called From: 176C:0A0F:0008:7F94
 */
void f__176C_0A0F_0010_1E8C()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x0A1F); emu_cs = 0x0C10; f__0C10_0182_0012_8DA5();
	f__176C_0A1F_0039_81B9();
}

/**
 * Decompiled function f__176C_0A1F_0039_81B9()
 *
 * @name f__176C_0A1F_0039_81B9
 * @implements 176C:0A1F:0039:81B9 ()
 *
 * Called From: 176C:0A1F:0010:1E8C
 */
void f__176C_0A1F_0039_81B9()
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
	f__176C_0A58_0006_3E0E();
}

/**
 * Decompiled function f__176C_0A58_0006_3E0E()
 *
 * @name f__176C_0A58_0006_3E0E
 * @implements 176C:0A58:0006:3E0E ()
 *
 * Called From: 176C:0A58:0039:81B9
 */
void f__176C_0A58_0006_3E0E()
{
	emu_addws(&emu_sp, 0x6);
	f__176C_0984_0006_29B8(); return;
}

/**
 * Decompiled function f__176C_0BBF_0004_0F7A()
 *
 * @name f__176C_0BBF_0004_0F7A
 * @implements 176C:0BBF:0004:0F7A ()
 *
 * Called From: 176C:0987:0006:29B8
 */
void f__176C_0BBF_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_0FA2_0013_ABE0()
 *
 * @name f__176C_0FA2_0013_ABE0
 * @implements 176C:0FA2:0013:ABE0 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_0FA2_0013_ABE0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x0FB5); emu_cs = 0x1A34; f__1A34_204C_0043_9483();
	f__176C_0FB5_0014_B90E();
}

/**
 * Decompiled function f__176C_0FB5_0014_B90E()
 *
 * @name f__176C_0FB5_0014_B90E
 * @implements 176C:0FB5:0014:B90E ()
 *
 * Called From: 176C:0FB5:0013:ABE0
 */
void f__176C_0FB5_0014_B90E()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0FC9); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_0FC9_0007_76DC();
}

/**
 * Decompiled function f__176C_0FC9_0007_76DC()
 *
 * @name f__176C_0FC9_0007_76DC
 * @implements 176C:0FC9:0007:76DC ()
 *
 * Called From: 176C:0FC9:0014:B90E
 */
void f__176C_0FC9_0007_76DC()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_0FD0_0002_00E2(); return;
}

/**
 * Decompiled function f__176C_0FD0_0002_00E2()
 *
 * @name f__176C_0FD0_0002_00E2
 * @implements 176C:0FD0:0002:00E2 ()
 *
 * Called From: 176C:0FCE:0007:76DC
 */
void f__176C_0FD0_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_0FD2_001F_E0DE()
 *
 * @name f__176C_0FD2_001F_E0DE
 * @implements 176C:0FD2:001F:E0DE ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_0FD2_001F_E0DE()
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
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0FF1; emu_last_cs = 0x176C; emu_last_ip = 0x0FEB; emu_last_length = 0x001F; emu_last_crc = 0xE0DE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	f__176C_0FF3_000C_25E6(); return;
}

/**
 * Decompiled function f__176C_0FF3_000C_25E6()
 *
 * @name f__176C_0FF3_000C_25E6
 * @implements 176C:0FF3:000C:25E6 ()
 *
 * Called From: 176C:0FEF:001F:E0DE
 */
void f__176C_0FF3_000C_25E6()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, 0xFF);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_0FFF_001B_C6CD(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__176C_1002_0018_FACB(); return;
}

/**
 * Decompiled function f__176C_0FFF_001B_C6CD()
 *
 * @name f__176C_0FFF_001B_C6CD
 * @implements 176C:0FFF:001B:C6CD ()
 *
 * Called From: 176C:0FF9:000C:25E6
 */
void f__176C_0FFF_001B_C6CD()
{
	emu_movw(&emu_ax.x, 0xFF);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x200);
	if (emu_flags.zf) { emu_ip = 0x101E; emu_last_cs = 0x176C; emu_last_ip = 0x100E; emu_last_length = 0x001B; emu_last_crc = 0xC6CD; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xC0);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x101A); emu_cs = 0x34C1; ovl__34C1(0);
	f__176C_101A_001F_4758();
}

/**
 * Decompiled function f__176C_1002_0018_FACB()
 *
 * @name f__176C_1002_0018_FACB
 * @implements 176C:1002:0018:FACB ()
 *
 * Called From: 176C:0FFD:000C:25E6
 */
void f__176C_1002_0018_FACB()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x200);
	if (emu_flags.zf) { emu_ip = 0x101E; emu_last_cs = 0x176C; emu_last_ip = 0x100E; emu_last_length = 0x0018; emu_last_crc = 0xFACB; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xC0);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x101A); emu_cs = 0x34C1; ovl__34C1(0);
	f__176C_101A_001F_4758();
}

/**
 * Decompiled function f__176C_101A_001F_4758()
 *
 * @name f__176C_101A_001F_4758
 * @implements 176C:101A:001F:4758 ()
 *
 * Called From: 176C:101A:001B:C6CD
 * Called From: 176C:101A:0018:FACB
 */
void f__176C_101A_001F_4758()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x103E; emu_last_cs = 0x176C; emu_last_ip = 0x1027; emu_last_length = 0x001F; emu_last_crc = 0x4758; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1039); emu_cs = 0x07C9; f__07C9_000F_0050_0FEA();
	f__176C_1039_0013_2D05();
}

/**
 * Decompiled function f__176C_1039_0013_2D05()
 *
 * @name f__176C_1039_0013_2D05
 * @implements 176C:1039:0013:2D05 ()
 *
 * Called From: 176C:1039:001F:4758
 */
void f__176C_1039_0013_2D05()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x104C); emu_cs = 0x1A34; f__1A34_204C_0043_9483();
	f__176C_104C_000F_E311();
}

/**
 * Decompiled function f__176C_104C_000F_E311()
 *
 * @name f__176C_104C_000F_E311
 * @implements 176C:104C:000F:E311 ()
 *
 * Called From: 176C:104C:0013:2D05
 */
void f__176C_104C_000F_E311()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6A));
	emu_movb(&emu_ax.h, 0x0);
	f__176C_105B_0003_0212(); return;
}

/**
 * Decompiled function f__176C_105B_0003_0212()
 *
 * @name f__176C_105B_0003_0212
 * @implements 176C:105B:0003:0212 ()
 *
 * Called From: 176C:1059:000F:E311
 */
void f__176C_105B_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1098_0021_93F5()
 *
 * @name f__176C_1098_0021_93F5
 * @implements 176C:1098:0021:93F5 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_1098_0021_93F5()
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
	if (!emu_flags.zf) { f__176C_10B9_001A_49A2(); return; }
	emu_ip = 0x12AC; emu_last_cs = 0x176C; emu_last_ip = 0x10B6; emu_last_length = 0x0021; emu_last_crc = 0x93F5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_10B9_001A_49A2()
 *
 * @name f__176C_10B9_001A_49A2
 * @implements 176C:10B9:001A:49A2 ()
 *
 * Called From: 176C:10B4:0021:93F5
 */
void f__176C_10B9_001A_49A2()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x10D3); emu_cs = 0x167E; f__167E_01BB_0010_ECB8();
	f__176C_10D3_0018_6898();
}

/**
 * Decompiled function f__176C_10D3_0018_6898()
 *
 * @name f__176C_10D3_0018_6898
 * @implements 176C:10D3:0018:6898 ()
 *
 * Called From: 176C:10D3:001A:49A2
 */
void f__176C_10D3_0018_6898()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x10EB); emu_cs = 0x0F3F; f__0F3F_00B4_002A_0887();
	f__176C_10EB_0010_4953();
}

/**
 * Decompiled function f__176C_10EB_0010_4953()
 *
 * @name f__176C_10EB_0010_4953
 * @implements 176C:10EB:0010:4953 ()
 *
 * Called From: 176C:10EB:0018:6898
 */
void f__176C_10EB_0010_4953()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x80);
	if ((emu_flags.sf != emu_flags.of)) { f__176C_10FB_0010_AABC(); return; }
	f__176C_11D1_0011_7E30(); return;
}

/**
 * Decompiled function f__176C_10FB_0010_AABC()
 *
 * @name f__176C_10FB_0010_AABC
 * @implements 176C:10FB:0010:AABC ()
 *
 * Called From: 176C:10F6:0010:4953
 */
void f__176C_10FB_0010_AABC()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x110B); emu_cs = 0x1A34; f__1A34_204C_0043_9483();
	f__176C_110B_000E_1AFD();
}

/**
 * Decompiled function f__176C_110B_000E_1AFD()
 *
 * @name f__176C_110B_000E_1AFD
 * @implements 176C:110B:000E:1AFD ()
 *
 * Called From: 176C:110B:0010:AABC
 */
void f__176C_110B_000E_1AFD()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1119); emu_cs = 0x0F3F; f__0F3F_0076_0008_3E52();
	f__176C_1119_0010_DA15();
}

/**
 * Decompiled function f__176C_1119_0010_DA15()
 *
 * @name f__176C_1119_0010_DA15
 * @implements 176C:1119:0010:DA15 ()
 *
 * Called From: 176C:1119:000E:1AFD
 */
void f__176C_1119_0010_DA15()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1129); emu_cs = 0x0F3F; f__0F3F_007E_0008_3E22();
	f__176C_1129_0010_E195();
}

/**
 * Decompiled function f__176C_1129_0010_E195()
 *
 * @name f__176C_1129_0010_E195
 * @implements 176C:1129:0010:E195 ()
 *
 * Called From: 176C:1129:0010:DA15
 */
void f__176C_1129_0010_E195()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1139); emu_cs = 0x0F3F; f__0F3F_0076_0008_3E52();
	f__176C_1139_0012_C0BA();
}

/**
 * Decompiled function f__176C_1139_0012_C0BA()
 *
 * @name f__176C_1139_0012_C0BA
 * @implements 176C:1139:0012:C0BA ()
 *
 * Called From: 176C:1139:0010:E195
 */
void f__176C_1139_0012_C0BA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x114B); emu_cs = 0x0F3F; f__0F3F_007E_0008_3E22();
	f__176C_114B_0011_3B14();
}

/**
 * Decompiled function f__176C_114B_0011_3B14()
 *
 * @name f__176C_114B_0011_3B14
 * @implements 176C:114B:0011:3B14 ()
 *
 * Called From: 176C:114B:0012:C0BA
 */
void f__176C_114B_0011_3B14()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_115C_000E_13A6(); return; }
	emu_movw(&emu_ax.x, 0x10);
	emu_ip = 0x115E; emu_last_cs = 0x176C; emu_last_ip = 0x115A; emu_last_length = 0x0011; emu_last_crc = 0x3B14; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_115C_000E_13A6()
 *
 * @name f__176C_115C_000E_13A6
 * @implements 176C:115C:000E:13A6 ()
 *
 * Called From: 176C:1155:0011:3B14
 */
void f__176C_115C_000E_13A6()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xF0);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_116A_000E_F9DE(); return; }
	emu_movw(&emu_ax.x, 0xFFF0);
	f__176C_116C_000C_F9E4(); return;
}

/**
 * Decompiled function f__176C_116A_000E_F9DE()
 *
 * @name f__176C_116A_000E_F9DE
 * @implements 176C:116A:000E:F9DE ()
 *
 * Called From: 176C:1163:000E:13A6
 */
void f__176C_116A_000E_F9DE()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_di, 0x10);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1178; emu_last_cs = 0x176C; emu_last_ip = 0x1171; emu_last_length = 0x000E; emu_last_crc = 0xF9DE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x10);
	f__176C_117A_000C_519C(); return;
}

/**
 * Decompiled function f__176C_116C_000C_F9E4()
 *
 * @name f__176C_116C_000C_F9E4
 * @implements 176C:116C:000C:F9E4 ()
 *
 * Called From: 176C:1168:000E:13A6
 */
void f__176C_116C_000C_F9E4()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_di, 0x10);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_1178_000E_71A6(); return; }
	emu_movw(&emu_ax.x, 0x10);
	f__176C_117A_000C_519C(); return;
}

/**
 * Decompiled function f__176C_1178_000E_71A6()
 *
 * @name f__176C_1178_000E_71A6
 * @implements 176C:1178:000E:71A6 ()
 *
 * Called From: 176C:1171:000C:F9E4
 */
void f__176C_1178_000E_71A6()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_di, 0xF0);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_1186_0015_E2FD(); return; }
	emu_movw(&emu_ax.x, 0xFFF0);
	emu_ip = 0x1188; emu_last_cs = 0x176C; emu_last_ip = 0x1184; emu_last_length = 0x000E; emu_last_crc = 0x71A6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_117A_000C_519C()
 *
 * @name f__176C_117A_000C_519C
 * @implements 176C:117A:000C:519C ()
 *
 * Called From: 176C:1176:000E:F9DE
 * Called From: 176C:1176:000C:F9E4
 */
void f__176C_117A_000C_519C()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_di, 0xF0);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_1186_0015_E2FD(); return; }
	emu_movw(&emu_ax.x, 0xFFF0);
	emu_ip = 0x1188; emu_last_cs = 0x176C; emu_last_ip = 0x1184; emu_last_length = 0x000C; emu_last_crc = 0x519C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_1186_0015_E2FD()
 *
 * @name f__176C_1186_0015_E2FD
 * @implements 176C:1186:0015:E2FD ()
 *
 * Called From: 176C:117F:000C:519C
 * Called From: 176C:117F:000E:71A6
 */
void f__176C_1186_0015_E2FD()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_di);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, emu_si);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x119B); emu_cs = 0x0F3F; f__0F3F_002C_000B_E123();
	f__176C_119B_001F_3CE7();
}

/**
 * Decompiled function f__176C_119B_001F_3CE7()
 *
 * @name f__176C_119B_001F_3CE7
 * @implements 176C:119B:001F:3CE7 ()
 *
 * Called From: 176C:119B:0015:E2FD
 */
void f__176C_119B_001F_3CE7()
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
	f__176C_11BA_000F_3CEC();
}

/**
 * Decompiled function f__176C_11BA_000F_3CEC()
 *
 * @name f__176C_11BA_000F_3CEC
 * @implements 176C:11BA:000F:3CEC ()
 *
 * Called From: 176C:11BA:001F:3CE7
 */
void f__176C_11BA_000F_3CEC()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_11C9_0008_DC64(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__176C_12C8_0006_137A(); return;
}

/**
 * Decompiled function f__176C_11C6_0003_04B4()
 *
 * @name f__176C_11C6_0003_04B4
 * @implements 176C:11C6:0003:04B4 ()
 *
 * Called From: 176C:12C5:001F:FDB6
 * Called From: 176C:12C5:001C:BDC6
 */
void f__176C_11C6_0003_04B4()
{
	f__176C_12C8_0006_137A(); return;
}

/**
 * Decompiled function f__176C_11C9_0008_DC64()
 *
 * @name f__176C_11C9_0008_DC64
 * @implements 176C:11C9:0008:DC64 ()
 *
 * Called From: 176C:11C1:000F:3CEC
 */
void f__176C_11C9_0008_DC64()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2);
	f__176C_12AC_001C_BDC6(); return;
}

/**
 * Decompiled function f__176C_11D1_0011_7E30()
 *
 * @name f__176C_11D1_0011_7E30
 * @implements 176C:11D1:0011:7E30 ()
 *
 * Called From: 176C:10F8:0010:4953
 */
void f__176C_11D1_0011_7E30()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x11E2); emu_cs = 0x0F3F; f__0F3F_0125_000D_0828();
	f__176C_11E2_001C_2653();
}

/**
 * Decompiled function f__176C_11E2_001C_2653()
 *
 * @name f__176C_11E2_001C_2653
 * @implements 176C:11E2:001C:2653 ()
 *
 * Called From: 176C:11E2:0011:7E30
 */
void f__176C_11E2_001C_2653()
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
	emu_push(emu_cs); emu_push(0x11FE); emu_cs = 0x1A34; f__1A34_1E99_0012_0D98();
	f__176C_11FE_0022_478C();
}

/**
 * Decompiled function f__176C_11FE_0022_478C()
 *
 * @name f__176C_11FE_0022_478C
 * @implements 176C:11FE:0022:478C ()
 *
 * Called From: 176C:11FE:001C:2653
 */
void f__176C_11FE_0022_478C()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_1220_001C_A219(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_negw(&emu_ax.x, emu_ax.x);
	f__176C_1223_0019_9210(); return;
}

/**
 * Decompiled function f__176C_1220_001C_A219()
 *
 * @name f__176C_1220_001C_A219
 * @implements 176C:1220:001C:A219 ()
 *
 * Called From: 176C:1217:0022:478C
 */
void f__176C_1220_001C_A219()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0xFF);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_123C_0019_2F65(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	f__176C_123F_0016_A064(); return;
}

/**
 * Decompiled function f__176C_1223_0019_9210()
 *
 * @name f__176C_1223_0019_9210
 * @implements 176C:1223:0019:9210 ()
 *
 * Called From: 176C:121E:0022:478C
 */
void f__176C_1223_0019_9210()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0xFF);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_123C_0019_2F65(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_ip = 0x123F; emu_last_cs = 0x176C; emu_last_ip = 0x123A; emu_last_length = 0x0019; emu_last_crc = 0x9210; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_123C_0019_2F65()
 *
 * @name f__176C_123C_0019_2F65
 * @implements 176C:123C:0019:2F65 ()
 *
 * Called From: 176C:1235:0019:9210
 * Called From: 176C:1235:001C:A219
 */
void f__176C_123C_0019_2F65()
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
	emu_push(emu_cs); emu_push(0x1255); emu_cs = 0x07C9; f__07C9_000F_0050_0FEA();
	f__176C_1255_0015_A26C();
}

/**
 * Decompiled function f__176C_123F_0016_A064()
 *
 * @name f__176C_123F_0016_A064
 * @implements 176C:123F:0016:A064 ()
 *
 * Called From: 176C:123A:001C:A219
 */
void f__176C_123F_0016_A064()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x19);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x1255); emu_cs = 0x07C9; f__07C9_000F_0050_0FEA();
	f__176C_1255_0015_A26C();
}

/**
 * Decompiled function f__176C_1255_0015_A26C()
 *
 * @name f__176C_1255_0015_A26C
 * @implements 176C:1255:0015:A26C ()
 *
 * Called From: 176C:1255:0019:2F65
 * Called From: 176C:1255:0016:A064
 */
void f__176C_1255_0015_A26C()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, 0xFF);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x126A); emu_cs = 0x34C1; ovl__34C1(0);
	f__176C_126A_0010_2A9A();
}

/**
 * Decompiled function f__176C_126A_0010_2A9A()
 *
 * @name f__176C_126A_0010_2A9A
 * @implements 176C:126A:0010:2A9A ()
 *
 * Called From: 176C:126A:0015:A26C
 */
void f__176C_126A_0010_2A9A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x127A); emu_cs = 0x1A34; f__1A34_204C_0043_9483();
	f__176C_127A_0018_5EE4();
}

/**
 * Decompiled function f__176C_127A_0018_5EE4()
 *
 * @name f__176C_127A_0018_5EE4
 * @implements 176C:127A:0018:5EE4 ()
 *
 * Called From: 176C:127A:0010:2A9A
 */
void f__176C_127A_0018_5EE4()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movb(&emu_cx.l, 0xA);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_1292_0017_E226(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	f__176C_1295_0014_BE66(); return;
}

/**
 * Decompiled function f__176C_1292_0017_E226()
 *
 * @name f__176C_1292_0017_E226
 * @implements 176C:1292:0017:E226 ()
 *
 * Called From: 176C:128B:0018:5EE4
 */
void f__176C_1292_0017_E226()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12A9); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_12A9_001F_FDB6();
}

/**
 * Decompiled function f__176C_1295_0014_BE66()
 *
 * @name f__176C_1295_0014_BE66
 * @implements 176C:1295:0014:BE66 ()
 *
 * Called From: 176C:1290:0018:5EE4
 */
void f__176C_1295_0014_BE66()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12A9); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_12A9_001F_FDB6();
}

/**
 * Decompiled function f__176C_12A9_001F_FDB6()
 *
 * @name f__176C_12A9_001F_FDB6
 * @implements 176C:12A9:001F:FDB6 ()
 *
 * Called From: 176C:12A9:0014:BE66
 * Called From: 176C:12A9:0017:E226
 */
void f__176C_12A9_001F_FDB6()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { emu_ip = 0x12C3; emu_last_cs = 0x176C; emu_last_ip = 0x12B0; emu_last_length = 0x001F; emu_last_crc = 0xFDB6; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x, -0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x2);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_11C6_0003_04B4(); return;
}

/**
 * Decompiled function f__176C_12AC_001C_BDC6()
 *
 * @name f__176C_12AC_001C_BDC6
 * @implements 176C:12AC:001C:BDC6 ()
 *
 * Called From: 176C:11CE:0008:DC64
 */
void f__176C_12AC_001C_BDC6()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { emu_ip = 0x12C3; emu_last_cs = 0x176C; emu_last_ip = 0x12B0; emu_last_length = 0x001C; emu_last_crc = 0xBDC6; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x, -0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x2);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_11C6_0003_04B4(); return;
}

/**
 * Decompiled function f__176C_12C8_0006_137A()
 *
 * @name f__176C_12C8_0006_137A
 * @implements 176C:12C8:0006:137A ()
 *
 * Called From: 176C:11C6:0003:04B4
 * Called From: 176C:11C6:000F:3CEC
 */
void f__176C_12C8_0006_137A()
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
 * Decompiled function f__176C_12CE_0011_2139()
 *
 * @name f__176C_12CE_0011_2139
 * @implements 176C:12CE:0011:2139 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_12CE_0011_2139()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x12DF); emu_cs = 0x1A34; f__1A34_10EC_000E_8DDF();
	f__176C_12DF_0038_5E42();
}

/**
 * Decompiled function f__176C_12DF_0038_5E42()
 *
 * @name f__176C_12DF_0038_5E42
 * @implements 176C:12DF:0038:5E42 ()
 *
 * Called From: 176C:12DF:0011:2139
 */
void f__176C_12DF_0038_5E42()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { emu_ip = 0x133D; emu_last_cs = 0x176C; emu_last_ip = 0x12EA; emu_last_length = 0x0038; emu_last_crc = 0x5E42; emu_call(); return; } // Jump does not resolve
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
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_1317_001E_C8F9(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_ip = 0x131A; emu_last_cs = 0x176C; emu_last_ip = 0x1315; emu_last_length = 0x0038; emu_last_crc = 0x5E42; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_1317_001E_C8F9()
 *
 * @name f__176C_1317_001E_C8F9
 * @implements 176C:1317:001E:C8F9 ()
 *
 * Called From: 176C:1311:0038:5E42
 */
void f__176C_1317_001E_C8F9()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__176C_1335_0019_E370(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x72C9));
	emu_subw(&emu_get_memory16(emu_ds, 0x00, -0x7301), emu_si);
	f__176C_133D_0011_2239(); return;
}

/**
 * Decompiled function f__176C_1335_0019_E370()
 *
 * @name f__176C_1335_0019_E370
 * @implements 176C:1335:0019:E370 ()
 *
 * Called From: 176C:1329:001E:C8F9
 */
void f__176C_1335_0019_E370()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00, -0x72C7));
	emu_addw(&emu_get_memory16(emu_ds, 0x00, -0x7301), emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x134E); emu_cs = 0x1423; f__1423_0BCC_0012_0D48();
	f__176C_134E_002A_3CCD();
}

/**
 * Decompiled function f__176C_133D_0011_2239()
 *
 * @name f__176C_133D_0011_2239
 * @implements 176C:133D:0011:2239 ()
 *
 * Called From: 176C:1333:001E:C8F9
 */
void f__176C_133D_0011_2239()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x134E); emu_cs = 0x1423; f__1423_0BCC_0012_0D48();
	f__176C_134E_002A_3CCD();
}

/**
 * Decompiled function f__176C_134E_002A_3CCD()
 *
 * @name f__176C_134E_002A_3CCD
 * @implements 176C:134E:002A:3CCD ()
 *
 * Called From: 176C:134E:0019:E370
 * Called From: 176C:134E:0011:2239
 */
void f__176C_134E_002A_3CCD()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x6);
	if (!emu_flags.zf) { f__176C_137B_0004_069C(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x12C);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1378); emu_cs = 0x06F7; emu_ip = 0x1380; emu_last_cs = 0x176C; emu_last_ip = 0x1373; emu_last_length = 0x002A; emu_last_crc = 0x3CCD; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__176C_137B_0004_069C()
 *
 * @name f__176C_137B_0004_069C
 * @implements 176C:137B:0004:069C ()
 *
 * Called From: 176C:135A:002A:3CCD
 */
void f__176C_137B_0004_069C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_137F_0003_0212(); return;
}

/**
 * Decompiled function f__176C_137F_0003_0212()
 *
 * @name f__176C_137F_0003_0212
 * @implements 176C:137F:0003:0212 ()
 *
 * Called From: 176C:137D:0004:069C
 */
void f__176C_137F_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1458_0023_5FB1()
 *
 * @name f__176C_1458_0023_5FB1
 * @implements 176C:1458:0023:5FB1 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_1458_0023_5FB1()
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
	if (!emu_flags.zf) { f__176C_147B_0006_0704(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_191E_0006_137A(); return;
}

/**
 * Decompiled function f__176C_1476_0005_0FAC()
 *
 * @name f__176C_1476_0005_0FAC
 * @implements 176C:1476:0005:0FAC ()
 *
 * Called From: 176C:14EF:0005:1EB6
 * Called From: 176C:1543:0026:677F
 * Called From: 176C:191B:0003:07DE
 */
void f__176C_1476_0005_0FAC()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_191E_0006_137A(); return;
}

/**
 * Decompiled function f__176C_1478_0003_05CC()
 *
 * @name f__176C_1478_0003_05CC
 * @implements 176C:1478:0003:05CC ()
 *
 * Called From: 176C:1918:0009:E8EB
 */
void f__176C_1478_0003_05CC()
{
	f__176C_191E_0006_137A(); return;
}

/**
 * Decompiled function f__176C_147B_0006_0704()
 *
 * @name f__176C_147B_0006_0704
 * @implements 176C:147B:0006:0704 ()
 *
 * Called From: 176C:1474:0023:5FB1
 */
void f__176C_147B_0006_0704()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1481); emu_cs = 0x167E; f__167E_0005_0013_D62A();
	f__176C_1481_0007_3370();
}

/**
 * Decompiled function f__176C_1481_0007_3370()
 *
 * @name f__176C_1481_0007_3370
 * @implements 176C:1481:0007:3370 ()
 *
 * Called From: 176C:1481:0006:0704
 */
void f__176C_1481_0007_3370()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__176C_1488_0010_EEA2(); return; }
	emu_ip = 0x1476; emu_last_cs = 0x176C; emu_last_ip = 0x1486; emu_last_length = 0x0007; emu_last_crc = 0x3370; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_1488_0010_EEA2()
 *
 * @name f__176C_1488_0010_EEA2
 * @implements 176C:1488:0010:EEA2 ()
 *
 * Called From: 176C:1484:0007:3370
 */
void f__176C_1488_0010_EEA2()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (!emu_flags.zf) { f__176C_1498_0020_6093(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x149A; emu_last_cs = 0x176C; emu_last_ip = 0x1496; emu_last_length = 0x0010; emu_last_crc = 0xEEA2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_1498_0020_6093()
 *
 * @name f__176C_1498_0020_6093
 * @implements 176C:1498:0020:6093 ()
 *
 * Called From: 176C:1491:0010:EEA2
 */
void f__176C_1498_0020_6093()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x14D4; emu_last_cs = 0x176C; emu_last_ip = 0x14A1; emu_last_length = 0x0020; emu_last_crc = 0x6093; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x14B8); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__176C_14B8_0008_7C24();
}

/**
 * Decompiled function f__176C_14B8_0008_7C24()
 *
 * @name f__176C_14B8_0008_7C24
 * @implements 176C:14B8:0008:7C24 ()
 *
 * Called From: 176C:14B8:0020:6093
 */
void f__176C_14B8_0008_7C24()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x14C0); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__176C_14C0_002C_8E78();
}

/**
 * Decompiled function f__176C_14C0_002C_8E78()
 *
 * @name f__176C_14C0_002C_8E78
 * @implements 176C:14C0:002C:8E78 ()
 *
 * Called From: 176C:14C0:0008:7C24
 */
void f__176C_14C0_002C_8E78()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	if (!emu_flags.zf) { f__176C_14D4_0018_365F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), emu_di);
	if (emu_flags.zf) { emu_ip = 0x14F1; emu_last_cs = 0x176C; emu_last_ip = 0x14DC; emu_last_length = 0x002C; emu_last_crc = 0x8E78; emu_call(); return; } // Jump does not resolve
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x14EC); emu_cs = 0x1A34; f__1A34_1A66_0011_4E2C();
	f__176C_14EC_0005_1EB6();
}

/**
 * Decompiled function f__176C_14D4_0018_365F()
 *
 * @name f__176C_14D4_0018_365F
 * @implements 176C:14D4:0018:365F ()
 *
 * Called From: 176C:14C8:002C:8E78
 */
void f__176C_14D4_0018_365F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), emu_di);
	if (emu_flags.zf) { f__176C_14F1_002D_7A3A(); return; }
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x14EC); emu_cs = 0x1A34; emu_ip = 0x2F52; emu_last_cs = 0x176C; emu_last_ip = 0x14E7; emu_last_length = 0x0018; emu_last_crc = 0x365F; emu_call(); // Jump does not resolve
	f__176C_14EC_0005_1EB6();
}

/**
 * Decompiled function f__176C_14EC_0005_1EB6()
 *
 * @name f__176C_14EC_0005_1EB6
 * @implements 176C:14EC:0005:1EB6 ()
 *
 * Called From: 176C:14EC:002C:8E78
 */
void f__176C_14EC_0005_1EB6()
{
	emu_addws(&emu_sp, 0x6);
	f__176C_1476_0005_0FAC(); return;
}

/**
 * Decompiled function f__176C_14F1_002D_7A3A()
 *
 * @name f__176C_14F1_002D_7A3A
 * @implements 176C:14F1:002D:7A3A ()
 *
 * Called From: 176C:14DC:0018:365F
 */
void f__176C_14F1_002D_7A3A()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1548; emu_last_cs = 0x176C; emu_last_ip = 0x14F5; emu_last_length = 0x002D; emu_last_crc = 0x7A3A; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x40);
	if (emu_flags.zf) { f__176C_1520_0026_677F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x67));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x65), 0x0);
	if (emu_flags.zf) { emu_ip = 0x151E; emu_last_cs = 0x176C; emu_last_ip = 0x1519; emu_last_length = 0x002D; emu_last_crc = 0x7A3A; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x1476; emu_last_cs = 0x176C; emu_last_ip = 0x151B; emu_last_length = 0x002D; emu_last_crc = 0x7A3A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_1520_0026_677F()
 *
 * @name f__176C_1520_0026_677F
 * @implements 176C:1520:0026:677F ()
 *
 * Called From: 176C:1501:002D:7A3A
 */
void f__176C_1520_0026_677F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { emu_ip = 0x1546; emu_last_cs = 0x176C; emu_last_ip = 0x1536; emu_last_length = 0x0026; emu_last_crc = 0x677F; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x62), 0x0);
	if (emu_flags.zf) { f__176C_1546_0002_03B6(); return; }
	f__176C_1476_0005_0FAC(); return;
}

/**
 * Decompiled function f__176C_1546_0002_03B6()
 *
 * @name f__176C_1546_0002_03B6
 * @implements 176C:1546:0002:03B6 ()
 *
 * Called From: 176C:1541:0026:677F
 */
void f__176C_1546_0002_03B6()
{
	f__176C_1555_0006_0FD4(); return;
}

/**
 * Decompiled function f__176C_1555_0006_0FD4()
 *
 * @name f__176C_1555_0006_0FD4
 * @implements 176C:1555:0006:0FD4 ()
 *
 * Called From: 176C:1546:0002:03B6
 */
void f__176C_1555_0006_0FD4()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x155B); emu_cs = 0x167E; f__167E_0088_001A_4DC5();
	f__176C_155B_000C_19F8();
}

/**
 * Decompiled function f__176C_155B_000C_19F8()
 *
 * @name f__176C_155B_000C_19F8
 * @implements 176C:155B:000C:19F8 ()
 *
 * Called From: 176C:155B:0006:0FD4
 */
void f__176C_155B_000C_19F8()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { f__176C_1584_0011_CBD2(); return; }
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1567); emu_cs = 0x167E; f__167E_0162_000D_3E1A();
	f__176C_1567_0007_249C();
}

/**
 * Decompiled function f__176C_1567_0007_249C()
 *
 * @name f__176C_1567_0007_249C
 * @implements 176C:1567:0007:249C ()
 *
 * Called From: 176C:1567:000C:19F8
 */
void f__176C_1567_0007_249C()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x156E); emu_cs = 0x34CD; ovl__34CD(32);
	f__176C_156E_0013_EA82();
}

/**
 * Decompiled function f__176C_156E_0013_EA82()
 *
 * @name f__176C_156E_0013_EA82
 * @implements 176C:156E:0013:EA82 ()
 *
 * Called From: 176C:156E:0007:249C
 */
void f__176C_156E_0013_EA82()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__176C_1584_0011_CBD2(); return; }
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1581); emu_cs = 0x1A34; emu_ip = 0x2FE7; emu_last_cs = 0x176C; emu_last_ip = 0x157C; emu_last_length = 0x0013; emu_last_crc = 0xEA82; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__176C_1584_0011_CBD2()
 *
 * @name f__176C_1584_0011_CBD2
 * @implements 176C:1584:0011:CBD2 ()
 *
 * Called From: 176C:155F:000C:19F8
 * Called From: 176C:1571:0013:EA82
 */
void f__176C_1584_0011_CBD2()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x51));
	emu_movb(&emu_ax.h, 0x0);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__176C_1595_0006_0CEC(); return; }
	f__176C_191B_0003_07DE(); return;
}

/**
 * Decompiled function f__176C_1595_0006_0CEC()
 *
 * @name f__176C_1595_0006_0CEC
 * @implements 176C:1595:0006:0CEC ()
 *
 * Called From: 176C:1590:0011:CBD2
 */
void f__176C_1595_0006_0CEC()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x159B); emu_cs = 0x167E; f__167E_01BB_0010_ECB8();
	f__176C_159B_0015_D5DE();
}

/**
 * Decompiled function f__176C_159B_0015_D5DE()
 *
 * @name f__176C_159B_0015_D5DE
 * @implements 176C:159B:0015:D5DE ()
 *
 * Called From: 176C:159B:0006:0CEC
 */
void f__176C_159B_0015_D5DE()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x15B0); emu_cs = 0x167E; f__167E_0319_0010_3E1E();
	f__176C_15B0_001A_71AC();
}

/**
 * Decompiled function f__176C_15B0_001A_71AC()
 *
 * @name f__176C_15B0_001A_71AC
 * @implements 176C:15B0:001A:71AC ()
 *
 * Called From: 176C:15B0:0015:D5DE
 */
void f__176C_15B0_001A_71AC()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x50));
	emu_movb(&emu_cx.l, 0x8);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_15CA_0017_D2E8(); return; }
	f__176C_191B_0003_07DE(); return;
}

/**
 * Decompiled function f__176C_15CA_0017_D2E8()
 *
 * @name f__176C_15CA_0017_D2E8
 * @implements 176C:15CA:0017:D2E8 ()
 *
 * Called From: 176C:15C5:001A:71AC
 */
void f__176C_15CA_0017_D2E8()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x15E1); emu_cs = 0x0F3F; f__0F3F_0125_000D_0828();
	f__176C_15E1_001C_F6D4();
}

/**
 * Decompiled function f__176C_15E1_001C_F6D4()
 *
 * @name f__176C_15E1_001C_F6D4
 * @implements 176C:15E1:001C:F6D4 ()
 *
 * Called From: 176C:15E1:0017:D2E8
 */
void f__176C_15E1_001C_F6D4()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_15FD_0027_4561(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_negw(&emu_ax.x, emu_ax.x);
	f__176C_1600_0024_0CA1(); return;
}

/**
 * Decompiled function f__176C_15FD_0027_4561()
 *
 * @name f__176C_15FD_0027_4561
 * @implements 176C:15FD:0027:4561 ()
 *
 * Called From: 176C:15F4:001C:F6D4
 */
void f__176C_15FD_0027_4561()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (!emu_flags.zf) { f__176C_1613_0011_22D6(); return; }
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_cx.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x161E; emu_last_cs = 0x176C; emu_last_ip = 0x1617; emu_last_length = 0x0027; emu_last_crc = 0x4561; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1624); emu_cs = 0x167E; emu_ip = 0x16AC; emu_last_cs = 0x176C; emu_last_ip = 0x161F; emu_last_length = 0x0027; emu_last_crc = 0x4561; emu_call(); // Jump does not resolve
	f__176C_1624_000C_1D80();
}

/**
 * Decompiled function f__176C_1600_0024_0CA1()
 *
 * @name f__176C_1600_0024_0CA1
 * @implements 176C:1600:0024:0CA1 ()
 *
 * Called From: 176C:15FB:001C:F6D4
 */
void f__176C_1600_0024_0CA1()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (!emu_flags.zf) { f__176C_1613_0011_22D6(); return; }
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_cx.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x161E; emu_last_cs = 0x176C; emu_last_ip = 0x1617; emu_last_length = 0x0024; emu_last_crc = 0x0CA1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1624); emu_cs = 0x167E; emu_ip = 0x16AC; emu_last_cs = 0x176C; emu_last_ip = 0x161F; emu_last_length = 0x0024; emu_last_crc = 0x0CA1; emu_call(); // Jump does not resolve
	f__176C_1624_000C_1D80();
}

/**
 * Decompiled function f__176C_1613_0011_22D6()
 *
 * @name f__176C_1613_0011_22D6
 * @implements 176C:1613:0011:22D6 ()
 *
 * Called From: 176C:160C:0027:4561
 * Called From: 176C:160C:0024:0CA1
 */
void f__176C_1613_0011_22D6()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_flags.zf) { f__176C_161E_0006_0FD4(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1624); emu_cs = 0x167E; emu_ip = 0x16AC; emu_last_cs = 0x176C; emu_last_ip = 0x161F; emu_last_length = 0x0011; emu_last_crc = 0x22D6; emu_call(); // Jump does not resolve
	f__176C_1624_000C_1D80();
}

/**
 * Decompiled function f__176C_161E_0006_0FD4()
 *
 * @name f__176C_161E_0006_0FD4
 * @implements 176C:161E:0006:0FD4 ()
 *
 * Called From: 176C:1617:0011:22D6
 */
void f__176C_161E_0006_0FD4()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1624); emu_cs = 0x167E; f__167E_0088_001A_4DC5();
	f__176C_1624_000C_1D80();
}

/**
 * Decompiled function f__176C_1624_000C_1D80()
 *
 * @name f__176C_1624_000C_1D80
 * @implements 176C:1624:000C:1D80 ()
 *
 * Called From: 176C:1624:0006:0FD4
 */
void f__176C_1624_000C_1D80()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (!emu_flags.zf) { f__176C_1659_0009_0719(); return; }
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1630); emu_cs = 0x167E; f__167E_0284_000C_AAF8();
	f__176C_1630_0032_D1CC();
}

/**
 * Decompiled function f__176C_1630_0032_D1CC()
 *
 * @name f__176C_1630_0032_D1CC
 * @implements 176C:1630:0032:D1CC ()
 *
 * Called From: 176C:1630:000C:1D80
 */
void f__176C_1630_0032_D1CC()
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
	if (!emu_flags.zf) { f__176C_1659_0009_0719(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x8);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x1662; emu_last_cs = 0x176C; emu_last_ip = 0x165D; emu_last_length = 0x0032; emu_last_crc = 0xD1CC; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x191B; emu_last_cs = 0x176C; emu_last_ip = 0x165F; emu_last_length = 0x0032; emu_last_crc = 0xD1CC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_1659_0009_0719()
 *
 * @name f__176C_1659_0009_0719
 * @implements 176C:1659:0009:0719 ()
 *
 * Called From: 176C:1628:000C:1D80
 * Called From: 176C:1652:0032:D1CC
 */
void f__176C_1659_0009_0719()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x8);
	if ((emu_flags.sf != emu_flags.of)) { f__176C_1662_007D_AEC8(); return; }
	f__176C_191B_0003_07DE(); return;
}

/**
 * Decompiled function f__176C_1662_007D_AEC8()
 *
 * @name f__176C_1662_007D_AEC8
 * @implements 176C:1662:007D:AEC8 ()
 *
 * Called From: 176C:165D:0009:0719
 */
void f__176C_1662_007D_AEC8()
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
	if (emu_flags.zf) { f__176C_16AF_0030_932D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x10));
	emu_sarw(&emu_ax.x, 0x1);
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x16AF; emu_last_cs = 0x176C; emu_last_ip = 0x16A8; emu_last_length = 0x007D; emu_last_crc = 0xAEC8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x3);
	if (emu_flags.zf) { emu_ip = 0x16C5; emu_last_cs = 0x176C; emu_last_ip = 0x16B8; emu_last_length = 0x007D; emu_last_crc = 0xAEC8; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x5);
	if (!emu_flags.zf) { f__176C_16D1_000E_E6BF(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x200);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x16D1; emu_last_cs = 0x176C; emu_last_ip = 0x16CA; emu_last_length = 0x007D; emu_last_crc = 0xAEC8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x16);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subws(&emu_bx.x, 0x13);
	emu_cmpws(&emu_bx.x, 0x6);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x16DF; emu_last_cs = 0x176C; emu_last_ip = 0x16DA; emu_last_length = 0x007D; emu_last_crc = 0xAEC8; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x1868; emu_last_cs = 0x176C; emu_last_ip = 0x16DC; emu_last_length = 0x007D; emu_last_crc = 0xAEC8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_16AF_0030_932D()
 *
 * @name f__176C_16AF_0030_932D
 * @implements 176C:16AF:0030:932D ()
 *
 * Called From: 176C:1692:007D:AEC8
 */
void f__176C_16AF_0030_932D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x3);
	if (emu_flags.zf) { emu_ip = 0x16C5; emu_last_cs = 0x176C; emu_last_ip = 0x16B8; emu_last_length = 0x0030; emu_last_crc = 0x932D; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x5);
	if (!emu_flags.zf) { f__176C_16D1_000E_E6BF(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x200);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_16D1_000E_E6BF(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x16);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subws(&emu_bx.x, 0x13);
	emu_cmpws(&emu_bx.x, 0x6);
	if ((emu_flags.cf || emu_flags.zf)) { f__176C_16DF_0007_5FEA(); return; }
	emu_ip = 0x1868; emu_last_cs = 0x176C; emu_last_ip = 0x16DC; emu_last_length = 0x0030; emu_last_crc = 0x932D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_16D1_000E_E6BF()
 *
 * @name f__176C_16D1_000E_E6BF
 * @implements 176C:16D1:000E:E6BF ()
 *
 * Called From: 176C:16C3:007D:AEC8
 * Called From: 176C:16C3:0030:932D
 * Called From: 176C:16CA:0030:932D
 */
void f__176C_16D1_000E_E6BF()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subws(&emu_bx.x, 0x13);
	emu_cmpws(&emu_bx.x, 0x6);
	if ((emu_flags.cf || emu_flags.zf)) { f__176C_16DF_0007_5FEA(); return; }
	emu_ip = 0x1868; emu_last_cs = 0x176C; emu_last_ip = 0x16DC; emu_last_length = 0x000E; emu_last_crc = 0xE6BF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_16DF_0007_5FEA()
 *
 * @name f__176C_16DF_0007_5FEA
 * @implements 176C:16DF:0007:5FEA ()
 *
 * Called From: 176C:16DA:000E:E6BF
 * Called From: 176C:16DA:0030:932D
 */
void f__176C_16DF_0007_5FEA()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x1924);
	switch (emu_ip) {
		case 0x17DF: f__176C_17DF_001B_B40D(); return;
		case 0x17E9: f__176C_17E9_0011_ACE9(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x176C; emu_last_ip = 0x16E1; emu_last_length = 0x0007; emu_last_crc = 0x5FEA;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__176C_17DF_001B_B40D()
 *
 * @name f__176C_17DF_001B_B40D
 * @implements 176C:17DF:001B:B40D ()
 *
 * Called From: 176C:16E1:0007:5FEA
 */
void f__176C_17DF_001B_B40D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_movb(&emu_cx.l, 0x2);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x17FA); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__176C_17FA_0017_91B6();
}

/**
 * Decompiled function f__176C_17E9_0011_ACE9()
 *
 * @name f__176C_17E9_0011_ACE9
 * @implements 176C:17E9:0011:ACE9 ()
 *
 * Called From: 176C:16E1:0007:5FEA
 */
void f__176C_17E9_0011_ACE9()
{
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x17FA); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__176C_17FA_0017_91B6();
}

/**
 * Decompiled function f__176C_17FA_0017_91B6()
 *
 * @name f__176C_17FA_0017_91B6
 * @implements 176C:17FA:0017:91B6 ()
 *
 * Called From: 176C:17FA:0011:ACE9
 * Called From: 176C:17FA:001B:B40D
 */
void f__176C_17FA_0017_91B6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1811); emu_cs = 0x1A34; f__1A34_24FE_002F_1117();
	f__176C_1811_0021_C015();
}

/**
 * Decompiled function f__176C_1811_0021_C015()
 *
 * @name f__176C_1811_0021_C015
 * @implements 176C:1811:0021:C015 ()
 *
 * Called From: 176C:1811:0017:91B6
 */
void f__176C_1811_0021_C015()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x1866; emu_last_cs = 0x176C; emu_last_ip = 0x1820; emu_last_length = 0x0021; emu_last_crc = 0xC015; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x1832); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__176C_1832_001D_17D9();
}

/**
 * Decompiled function f__176C_1832_001D_17D9()
 *
 * @name f__176C_1832_001D_17D9
 * @implements 176C:1832:001D:17D9 ()
 *
 * Called From: 176C:1832:0021:C015
 */
void f__176C_1832_001D_17D9()
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
	f__176C_184F_0014_A37B();
}

/**
 * Decompiled function f__176C_184F_0014_A37B()
 *
 * @name f__176C_184F_0014_A37B
 * @implements 176C:184F:0014:A37B ()
 *
 * Called From: 176C:184F:001D:17D9
 */
void f__176C_184F_0014_A37B()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1863); emu_cs = 0x1A34; f__1A34_193F_0013_AF17();
	f__176C_1863_0005_1FB8();
}

/**
 * Decompiled function f__176C_1863_0005_1FB8()
 *
 * @name f__176C_1863_0005_1FB8
 * @implements 176C:1863:0005:1FB8 ()
 *
 * Called From: 176C:1863:0014:A37B
 */
void f__176C_1863_0005_1FB8()
{
	emu_addws(&emu_sp, 0x6);
	f__176C_186A_000B_A4C4(); return;
}

/**
 * Decompiled function f__176C_186A_000B_A4C4()
 *
 * @name f__176C_186A_000B_A4C4
 * @implements 176C:186A:000B:A4C4 ()
 *
 * Called From: 176C:1866:0005:1FB8
 */
void f__176C_186A_000B_A4C4()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__176C_1875_0020_3C1F(); return; }
	emu_ip = 0x191B; emu_last_cs = 0x176C; emu_last_ip = 0x1872; emu_last_length = 0x000B; emu_last_crc = 0xA4C4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_1875_0020_3C1F()
 *
 * @name f__176C_1875_0020_3C1F
 * @implements 176C:1875:0020:3C1F ()
 *
 * Called From: 176C:1870:000B:A4C4
 */
void f__176C_1875_0020_3C1F()
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
	emu_push(emu_cs); emu_push(0x1895); emu_cs = 0x07C9; f__07C9_000F_0050_0FEA();
	f__176C_1895_003D_F463();
}

/**
 * Decompiled function f__176C_1895_003D_F463()
 *
 * @name f__176C_1895_003D_F463
 * @implements 176C:1895:003D:F463 ()
 *
 * Called From: 176C:1895:0020:3C1F
 */
void f__176C_1895_003D_F463()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x51), emu_ax.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_flags.zf) { f__176C_18DF_000E_8170(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_xorws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x10);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x10);
	if (emu_flags.zf) { f__176C_18DD_0002_03BE(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x18D2); emu_cs = 0x07C9; f__07C9_000F_0050_0FEA();
	f__176C_18D2_000D_08D9();
}

/**
 * Decompiled function f__176C_18D2_000D_08D9()
 *
 * @name f__176C_18D2_000D_08D9
 * @implements 176C:18D2:000D:08D9 ()
 *
 * Called From: 176C:18D2:003D:F463
 */
void f__176C_18D2_000D_08D9()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x51), emu_ax.l);
	f__176C_18E8_0005_1186(); return;
}

/**
 * Decompiled function f__176C_18DD_0002_03BE()
 *
 * @name f__176C_18DD_0002_03BE
 * @implements 176C:18DD:0002:03BE ()
 *
 * Called From: 176C:18BC:003D:F463
 */
void f__176C_18DD_0002_03BE()
{
	f__176C_18E8_0005_1186(); return;
}

/**
 * Decompiled function f__176C_18DF_000E_8170()
 *
 * @name f__176C_18DF_000E_8170
 * @implements 176C:18DF:000E:8170 ()
 *
 * Called From: 176C:18A7:003D:F463
 */
void f__176C_18DF_000E_8170()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xEF);
	emu_push(emu_cs); emu_push(0x18ED); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__176C_18ED_0025_207C();
}

/**
 * Decompiled function f__176C_18E8_0005_1186()
 *
 * @name f__176C_18E8_0005_1186
 * @implements 176C:18E8:0005:1186 ()
 *
 * Called From: 176C:18DD:000D:08D9
 * Called From: 176C:18DD:0002:03BE
 */
void f__176C_18E8_0005_1186()
{
	emu_push(emu_cs); emu_push(0x18ED); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__176C_18ED_0025_207C();
}

/**
 * Decompiled function f__176C_18ED_0025_207C()
 *
 * @name f__176C_18ED_0025_207C
 * @implements 176C:18ED:0025:207C ()
 *
 * Called From: 176C:18ED:000E:8170
 * Called From: 176C:18ED:0005:1186
 */
void f__176C_18ED_0025_207C()
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
	f__176C_1912_0009_E8EB();
}

/**
 * Decompiled function f__176C_1912_0009_E8EB()
 *
 * @name f__176C_1912_0009_E8EB
 * @implements 176C:1912:0009:E8EB ()
 *
 * Called From: 176C:1912:0025:207C
 */
void f__176C_1912_0009_E8EB()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__176C_1478_0003_05CC(); return;
}

/**
 * Decompiled function f__176C_191B_0003_07DE()
 *
 * @name f__176C_191B_0003_07DE
 * @implements 176C:191B:0003:07DE ()
 *
 * Called From: 176C:1592:0011:CBD2
 * Called From: 176C:15C7:001A:71AC
 * Called From: 176C:165F:0009:0719
 */
void f__176C_191B_0003_07DE()
{
	f__176C_1476_0005_0FAC(); return;
}

/**
 * Decompiled function f__176C_191E_0006_137A()
 *
 * @name f__176C_191E_0006_137A
 * @implements 176C:191E:0006:137A ()
 *
 * Called From: 176C:1478:0023:5FB1
 * Called From: 176C:1478:0005:0FAC
 * Called From: 176C:1478:0003:05CC
 */
void f__176C_191E_0006_137A()
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
 * Decompiled function f__176C_1932_0029_BE13()
 *
 * @name f__176C_1932_0029_BE13
 * @implements 176C:1932:0029:BE13 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_1932_0029_BE13()
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
	emu_push(emu_cs); emu_push(0x195B); emu_cs = 0x1A34; f__1A34_1E99_0012_0D98();
	f__176C_195B_000F_62D0();
}

/**
 * Decompiled function f__176C_195B_000F_62D0()
 *
 * @name f__176C_195B_000F_62D0
 * @implements 176C:195B:000F:62D0 ()
 *
 * Called From: 176C:195B:0029:BE13
 */
void f__176C_195B_000F_62D0()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	f__176C_196A_0002_00E2(); return;
}

/**
 * Decompiled function f__176C_196A_0002_00E2()
 *
 * @name f__176C_196A_0002_00E2
 * @implements 176C:196A:0002:00E2 ()
 *
 * Called From: 176C:1968:000F:62D0
 */
void f__176C_196A_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_196C_0027_5ACE()
 *
 * @name f__176C_196C_0027_5ACE
 * @implements 176C:196C:0027:5ACE ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_196C_0027_5ACE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { emu_ip = 0x1993; emu_last_cs = 0x176C; emu_last_ip = 0x197D; emu_last_length = 0x0027; emu_last_crc = 0x5ACE; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	if (emu_flags.zf) { f__176C_1993_0011_9649(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__176C_1A3A_0006_137A(); return;
}

/**
 * Decompiled function f__176C_198D_0006_2BF4()
 *
 * @name f__176C_198D_0006_2BF4
 * @implements 176C:198D:0006:2BF4 ()
 *
 * Called From: 176C:19CE:000D:469D
 * Called From: 176C:1A32:0006:3F36
 */
void f__176C_198D_0006_2BF4()
{
	emu_movw(&emu_ax.x, 0x1);
	f__176C_1A3A_0006_137A(); return;
}

/**
 * Decompiled function f__176C_1990_0003_05D4()
 *
 * @name f__176C_1990_0003_05D4
 * @implements 176C:1990:0003:05D4 ()
 *
 * Called From: 176C:1A37:0005:0D8E
 */
void f__176C_1990_0003_05D4()
{
	f__176C_1A3A_0006_137A(); return;
}

/**
 * Decompiled function f__176C_1993_0011_9649()
 *
 * @name f__176C_1993_0011_9649
 * @implements 176C:1993:0011:9649 ()
 *
 * Called From: 176C:198B:0027:5ACE
 */
void f__176C_1993_0011_9649()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x40);
	if (emu_flags.zf) { f__176C_19A4_0015_8A81(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x19A6; emu_last_cs = 0x176C; emu_last_ip = 0x19A2; emu_last_length = 0x0011; emu_last_crc = 0x9649; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_19A4_0015_8A81()
 *
 * @name f__176C_19A4_0015_8A81
 * @implements 176C:19A4:0015:8A81 ()
 *
 * Called From: 176C:199D:0011:9649
 */
void f__176C_19A4_0015_8A81()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__176C_19C3_000D_469D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x65), 0x0);
	if (emu_flags.zf) { emu_ip = 0x19B9; emu_last_cs = 0x176C; emu_last_ip = 0x19B5; emu_last_length = 0x0015; emu_last_crc = 0x8A81; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x198D; emu_last_cs = 0x176C; emu_last_ip = 0x19B7; emu_last_length = 0x0015; emu_last_crc = 0x8A81; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_19C3_000D_469D()
 *
 * @name f__176C_19C3_000D_469D
 * @implements 176C:19C3:000D:469D ()
 *
 * Called From: 176C:19AA:0015:8A81
 */
void f__176C_19C3_000D_469D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x62), 0x0);
	if (emu_flags.zf) { f__176C_19D0_0020_160C(); return; }
	f__176C_198D_0006_2BF4(); return;
}

/**
 * Decompiled function f__176C_19D0_0020_160C()
 *
 * @name f__176C_19D0_0020_160C
 * @implements 176C:19D0:0020:160C ()
 *
 * Called From: 176C:19CC:000D:469D
 */
void f__176C_19D0_0020_160C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x19F0); emu_cs = 0x167E; f__167E_0005_0013_D62A();
	f__176C_19F0_0007_32D0();
}

/**
 * Decompiled function f__176C_19F0_0007_32D0()
 *
 * @name f__176C_19F0_0007_32D0
 * @implements 176C:19F0:0007:32D0 ()
 *
 * Called From: 176C:19F0:0020:160C
 */
void f__176C_19F0_0007_32D0()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__176C_19F7_0008_E2AC(); return; }
	f__176C_1A35_0005_0D8E(); return;
}

/**
 * Decompiled function f__176C_19F7_0008_E2AC()
 *
 * @name f__176C_19F7_0008_E2AC
 * @implements 176C:19F7:0008:E2AC ()
 *
 * Called From: 176C:19F3:0007:32D0
 */
void f__176C_19F7_0008_E2AC()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x19FF); emu_cs = 0x167E; f__167E_01BB_0010_ECB8();
	f__176C_19FF_0014_A408();
}

/**
 * Decompiled function f__176C_19FF_0014_A408()
 *
 * @name f__176C_19FF_0014_A408
 * @implements 176C:19FF:0014:A408 ()
 *
 * Called From: 176C:19FF:0008:E2AC
 */
void f__176C_19FF_0014_A408()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1A13); emu_cs = 0x0F3F; f__0F3F_0125_000D_0828();
	f__176C_1A13_001C_E993();
}

/**
 * Decompiled function f__176C_1A13_001C_E993()
 *
 * @name f__176C_1A13_001C_E993
 * @implements 176C:1A13:001C:E993 ()
 *
 * Called From: 176C:1A13:0014:A408
 */
void f__176C_1A13_001C_E993()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.zf) { f__176C_1A35_0005_0D8E(); return; }
	emu_push(emu_di);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1A2F); emu_cs = 0x1A34; f__1A34_1E99_0012_0D98();
	f__176C_1A2F_0006_3F36();
}

/**
 * Decompiled function f__176C_1A2F_0006_3F36()
 *
 * @name f__176C_1A2F_0006_3F36
 * @implements 176C:1A2F:0006:3F36 ()
 *
 * Called From: 176C:1A2F:001C:E993
 */
void f__176C_1A2F_0006_3F36()
{
	emu_addws(&emu_sp, 0xA);
	f__176C_198D_0006_2BF4(); return;
}

/**
 * Decompiled function f__176C_1A35_0005_0D8E()
 *
 * @name f__176C_1A35_0005_0D8E
 * @implements 176C:1A35:0005:0D8E ()
 *
 * Called From: 176C:19F5:0007:32D0
 * Called From: 176C:1A1B:001C:E993
 */
void f__176C_1A35_0005_0D8E()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_1990_0003_05D4(); return;
}

/**
 * Decompiled function f__176C_1A3A_0006_137A()
 *
 * @name f__176C_1A3A_0006_137A
 * @implements 176C:1A3A:0006:137A ()
 *
 * Called From: 176C:1990:0003:05D4
 * Called From: 176C:1990:0006:2BF4
 * Called From: 176C:1990:0027:5ACE
 */
void f__176C_1A3A_0006_137A()
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
 * Decompiled function f__176C_1A9F_0024_8118()
 *
 * @name f__176C_1A9F_0024_8118
 * @implements 176C:1A9F:0024:8118 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_1A9F_0024_8118()
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
	if (emu_flags.zf) { f__176C_1B32_000E_2CAA(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1AC3); emu_cs = 0x167E; f__167E_0005_0013_D62A();
	f__176C_1AC3_0016_D679();
}

/**
 * Decompiled function f__176C_1AC3_0016_D679()
 *
 * @name f__176C_1AC3_0016_D679
 * @implements 176C:1AC3:0016:D679 ()
 *
 * Called From: 176C:1AC3:0024:8118
 */
void f__176C_1AC3_0016_D679()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x1B32; emu_last_cs = 0x176C; emu_last_ip = 0x1AC6; emu_last_length = 0x0016; emu_last_crc = 0xD679; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { f__176C_1B1F_000E_2976(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1AD9); emu_cs = 0x167E; f__167E_02AE_000C_AA20();
	f__176C_1AD9_0022_E5E8();
}

/**
 * Decompiled function f__176C_1AD9_0022_E5E8()
 *
 * @name f__176C_1AD9_0022_E5E8
 * @implements 176C:1AD9:0022:E5E8 ()
 *
 * Called From: 176C:1AD9:0016:D679
 */
void f__176C_1AD9_0022_E5E8()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { emu_ip = 0x1AFB; emu_last_cs = 0x176C; emu_last_ip = 0x1AE6; emu_last_length = 0x0022; emu_last_crc = 0xE5E8; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x72), 0xFF);
	f__176C_1B1D_0002_038E(); return;
}

/**
 * Decompiled function f__176C_1B1D_0002_038E()
 *
 * @name f__176C_1B1D_0002_038E
 * @implements 176C:1B1D:0002:038E ()
 *
 * Called From: 176C:1AF9:0022:E5E8
 */
void f__176C_1B1D_0002_038E()
{
	f__176C_1B30_0002_03B8(); return;
}

/**
 * Decompiled function f__176C_1B1F_000E_2976()
 *
 * @name f__176C_1B1F_000E_2976
 * @implements 176C:1B1F:000E:2976 ()
 *
 * Called From: 176C:1AD1:0016:D679
 */
void f__176C_1B1F_000E_2976()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1B2D); emu_cs = 0x1A34; f__1A34_1B68_0019_2EA6();
	f__176C_1B2D_0005_1FA8();
}

/**
 * Decompiled function f__176C_1B2D_0005_1FA8()
 *
 * @name f__176C_1B2D_0005_1FA8
 * @implements 176C:1B2D:0005:1FA8 ()
 *
 * Called From: 176C:1B2D:000E:2976
 */
void f__176C_1B2D_0005_1FA8()
{
	emu_addws(&emu_sp, 0x6);
	f__176C_1B3C_0004_069C(); return;
}

/**
 * Decompiled function f__176C_1B30_0002_03B8()
 *
 * @name f__176C_1B30_0002_03B8
 * @implements 176C:1B30:0002:03B8 ()
 *
 * Called From: 176C:1B1D:0002:038E
 */
void f__176C_1B30_0002_03B8()
{
	f__176C_1B3C_0004_069C(); return;
}

/**
 * Decompiled function f__176C_1B32_000E_2CAA()
 *
 * @name f__176C_1B32_000E_2CAA
 * @implements 176C:1B32:000E:2CAA ()
 *
 * Called From: 176C:1ABB:0024:8118
 */
void f__176C_1B32_000E_2CAA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_1B40_0005_04BA(); return;
}

/**
 * Decompiled function f__176C_1B3C_0004_069C()
 *
 * @name f__176C_1B3C_0004_069C
 * @implements 176C:1B3C:0004:069C ()
 *
 * Called From: 176C:1B30:0005:1FA8
 * Called From: 176C:1B30:0002:03B8
 */
void f__176C_1B3C_0004_069C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_1B40_0005_04BA(); return;
}

/**
 * Decompiled function f__176C_1B40_0005_04BA()
 *
 * @name f__176C_1B40_0005_04BA
 * @implements 176C:1B40:0005:04BA ()
 *
 * Called From: 176C:1B3E:000E:2CAA
 * Called From: 176C:1B3E:0004:069C
 */
void f__176C_1B40_0005_04BA()
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
 * Decompiled function f__176C_1B45_0022_FDCD()
 *
 * @name f__176C_1B45_0022_FDCD
 * @implements 176C:1B45:0022:FDCD ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_1B45_0022_FDCD()
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
	if (emu_flags.zf) { f__176C_1B6C_000F_5940(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1B67); emu_cs = 0x167E; f__167E_0005_0013_D62A();
	f__176C_1B67_0014_5F6D();
}

/**
 * Decompiled function f__176C_1B67_0014_5F6D()
 *
 * @name f__176C_1B67_0014_5F6D
 * @implements 176C:1B67:0014:5F6D ()
 *
 * Called From: 176C:1B67:0022:FDCD
 */
void f__176C_1B67_0014_5F6D()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__176C_1B7B_0006_0CAC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x1BFC; emu_last_cs = 0x176C; emu_last_ip = 0x1B78; emu_last_length = 0x0014; emu_last_crc = 0x5F6D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_1B6C_000F_5940()
 *
 * @name f__176C_1B6C_000F_5940
 * @implements 176C:1B6C:000F:5940 ()
 *
 * Called From: 176C:1B5F:0022:FDCD
 */
void f__176C_1B6C_000F_5940()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_1BFC_0004_07E2(); return;
}

/**
 * Decompiled function f__176C_1B78_0003_054C()
 *
 * @name f__176C_1B78_0003_054C
 * @implements 176C:1B78:0003:054C ()
 *
 * Called From: 176C:1BF9:000E:3118
 */
void f__176C_1B78_0003_054C()
{
	f__176C_1BFC_0004_07E2(); return;
}

/**
 * Decompiled function f__176C_1B7B_0006_0CAC()
 *
 * @name f__176C_1B7B_0006_0CAC
 * @implements 176C:1B7B:0006:0CAC ()
 *
 * Called From: 176C:1B6A:0014:5F6D
 */
void f__176C_1B7B_0006_0CAC()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1B81); emu_cs = 0x167E; f__167E_01BB_0010_ECB8();
	f__176C_1B81_0014_A408();
}

/**
 * Decompiled function f__176C_1B81_0014_A408()
 *
 * @name f__176C_1B81_0014_A408
 * @implements 176C:1B81:0014:A408 ()
 *
 * Called From: 176C:1B81:0006:0CAC
 */
void f__176C_1B81_0014_A408()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1B95); emu_cs = 0x0F3F; f__0F3F_0125_000D_0828();
	f__176C_1B95_001B_A2BA();
}

/**
 * Decompiled function f__176C_1B95_001B_A2BA()
 *
 * @name f__176C_1B95_001B_A2BA
 * @implements 176C:1B95:001B:A2BA ()
 *
 * Called From: 176C:1B95:0014:A408
 */
void f__176C_1B95_001B_A2BA()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x40);
	if (emu_flags.zf) { f__176C_1BB0_0026_7BF4(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), emu_si);
	emu_ip = 0x1BD9; emu_last_cs = 0x176C; emu_last_ip = 0x1BAE; emu_last_length = 0x001B; emu_last_crc = 0xA2BA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_1BB0_0026_7BF4()
 *
 * @name f__176C_1BB0_0026_7BF4
 * @implements 176C:1BB0:0026:7BF4 ()
 *
 * Called From: 176C:1BA4:001B:A2BA
 */
void f__176C_1BB0_0026_7BF4()
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
	emu_push(emu_cs); emu_push(0x1BD6); emu_cs = 0x1A34; f__1A34_1E99_0012_0D98();
	f__176C_1BD6_0018_9310();
}

/**
 * Decompiled function f__176C_1BD6_0018_9310()
 *
 * @name f__176C_1BD6_0018_9310
 * @implements 176C:1BD6:0018:9310 ()
 *
 * Called From: 176C:1BD6:0026:7BF4
 */
void f__176C_1BD6_0018_9310()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1BEE); emu_cs = 0x1A34; f__1A34_1E99_0012_0D98();
	f__176C_1BEE_000E_3118();
}

/**
 * Decompiled function f__176C_1BEE_000E_3118()
 *
 * @name f__176C_1BEE_000E_3118
 * @implements 176C:1BEE:000E:3118 ()
 *
 * Called From: 176C:1BEE:0018:9310
 */
void f__176C_1BEE_000E_3118()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x54));
	f__176C_1B78_0003_054C(); return;
}

/**
 * Decompiled function f__176C_1BFC_0004_07E2()
 *
 * @name f__176C_1BFC_0004_07E2
 * @implements 176C:1BFC:0004:07E2 ()
 *
 * Called From: 176C:1B78:000F:5940
 * Called From: 176C:1B78:0003:054C
 */
void f__176C_1BFC_0004_07E2()
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
 * Decompiled function f__176C_1C00_003A_1DE4()
 *
 * @name f__176C_1C00_003A_1DE4
 * @implements 176C:1C00:003A:1DE4 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_1C00_003A_1DE4()
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
	if (!emu_flags.zf) { emu_ip = 0x1C3A; emu_last_cs = 0x176C; emu_last_ip = 0x1C24; emu_last_length = 0x003A; emu_last_crc = 0x1DE4; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x5);
	if (!emu_flags.zf) { f__176C_1C3A_000D_1B3F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x50), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x1C3A; emu_last_cs = 0x176C; emu_last_ip = 0x1C34; emu_last_length = 0x003A; emu_last_crc = 0x1DE4; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x1C4C; emu_last_cs = 0x176C; emu_last_ip = 0x1C38; emu_last_length = 0x003A; emu_last_crc = 0x1DE4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_1C36_0004_06B8()
 *
 * @name f__176C_1C36_0004_06B8
 * @implements 176C:1C36:0004:06B8 ()
 *
 * Called From: 176C:1C4A:0005:1E68
 */
void f__176C_1C36_0004_06B8()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_1C4C_0003_0212(); return;
}

/**
 * Decompiled function f__176C_1C3A_000D_1B3F()
 *
 * @name f__176C_1C3A_000D_1B3F
 * @implements 176C:1C3A:000D:1B3F ()
 *
 * Called From: 176C:1C29:003A:1DE4
 */
void f__176C_1C3A_000D_1B3F()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs);
	emu_push(0x1C47); f__176C_000E_000E_8C63();
	f__176C_1C47_0005_1E68();
}

/**
 * Decompiled function f__176C_1C47_0005_1E68()
 *
 * @name f__176C_1C47_0005_1E68
 * @implements 176C:1C47:0005:1E68 ()
 *
 * Called From: 176C:1C47:000D:1B3F
 */
void f__176C_1C47_0005_1E68()
{
	emu_addws(&emu_sp, 0x6);
	f__176C_1C36_0004_06B8(); return;
}

/**
 * Decompiled function f__176C_1C4C_0003_0212()
 *
 * @name f__176C_1C4C_0003_0212
 * @implements 176C:1C4C:0003:0212 ()
 *
 * Called From: 176C:1C38:0004:06B8
 */
void f__176C_1C4C_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1C4F_0017_82CC()
 *
 * @name f__176C_1C4F_0017_82CC
 * @implements 176C:1C4F:0017:82CC ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_1C4F_0017_82CC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x28));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs);
	emu_push(0x1C66); f__176C_000E_000E_8C63();
	f__176C_1C66_0007_76DC();
}

/**
 * Decompiled function f__176C_1C66_0007_76DC()
 *
 * @name f__176C_1C66_0007_76DC
 * @implements 176C:1C66:0007:76DC ()
 *
 * Called From: 176C:1C66:0017:82CC
 */
void f__176C_1C66_0007_76DC()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_1C6D_0002_00E2(); return;
}

/**
 * Decompiled function f__176C_1C6D_0002_00E2()
 *
 * @name f__176C_1C6D_0002_00E2
 * @implements 176C:1C6D:0002:00E2 ()
 *
 * Called From: 176C:1C6B:0007:76DC
 */
void f__176C_1C6D_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1C6F_001D_A7F9()
 *
 * @name f__176C_1C6F_001D_A7F9
 * @implements 176C:1C6F:001D:A7F9 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_1C6F_001D_A7F9()
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
	emu_push(emu_cs); emu_push(0x1C8C); emu_cs = 0x167E; f__167E_0005_0013_D62A();
	f__176C_1C8C_0025_1418();
}

/**
 * Decompiled function f__176C_1C8C_0025_1418()
 *
 * @name f__176C_1C8C_0025_1418
 * @implements 176C:1C8C:0025:1418 ()
 *
 * Called From: 176C:1C8C:001D:A7F9
 */
void f__176C_1C8C_0025_1418()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x1CF7; emu_last_cs = 0x176C; emu_last_ip = 0x1C8F; emu_last_length = 0x0025; emu_last_crc = 0x1418; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	if (emu_flags.zf) { f__176C_1CAB_0006_0CAC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), 0x8000);
	if (emu_flags.zf) { emu_ip = 0x1CBE; emu_last_cs = 0x176C; emu_last_ip = 0x1CA9; emu_last_length = 0x0025; emu_last_crc = 0x1418; emu_call(); return; } // Jump does not resolve
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1CB1); emu_cs = 0x167E; f__167E_01BB_0010_ECB8();
	f__176C_1CB1_0030_F7C4();
}

/**
 * Decompiled function f__176C_1CAB_0006_0CAC()
 *
 * @name f__176C_1CAB_0006_0CAC
 * @implements 176C:1CAB:0006:0CAC ()
 *
 * Called From: 176C:1C9D:0025:1418
 */
void f__176C_1CAB_0006_0CAC()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1CB1); emu_cs = 0x167E; f__167E_01BB_0010_ECB8();
	f__176C_1CB1_0030_F7C4();
}

/**
 * Decompiled function f__176C_1CB1_0030_F7C4()
 *
 * @name f__176C_1CB1_0030_F7C4
 * @implements 176C:1CB1:0030:F7C4 ()
 *
 * Called From: 176C:1CB1:0006:0CAC
 * Called From: 176C:1CB1:0025:1418
 */
void f__176C_1CB1_0030_F7C4()
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
	emu_push(emu_cs); emu_push(0x1CE1); emu_cs = 0x0F3F; f__0F3F_0125_000D_0828();
	f__176C_1CE1_0011_A789();
}

/**
 * Decompiled function f__176C_1CE1_0011_A789()
 *
 * @name f__176C_1CE1_0011_A789
 * @implements 176C:1CE1:0011:A789 ()
 *
 * Called From: 176C:1CE1:0030:F7C4
 */
void f__176C_1CE1_0011_A789()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1CF2); emu_cs = 0x1A34; f__1A34_1E99_0012_0D98();
	f__176C_1CF2_0005_1FDC();
}

/**
 * Decompiled function f__176C_1CF2_0005_1FDC()
 *
 * @name f__176C_1CF2_0005_1FDC
 * @implements 176C:1CF2:0005:1FDC ()
 *
 * Called From: 176C:1CF2:0011:A789
 */
void f__176C_1CF2_0005_1FDC()
{
	emu_addws(&emu_sp, 0xA);
	f__176C_1CF7_0004_069C(); return;
}

/**
 * Decompiled function f__176C_1CF7_0004_069C()
 *
 * @name f__176C_1CF7_0004_069C
 * @implements 176C:1CF7:0004:069C ()
 *
 * Called From: 176C:1CF5:0005:1FDC
 */
void f__176C_1CF7_0004_069C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_1CFB_0003_0212(); return;
}

/**
 * Decompiled function f__176C_1CFB_0003_0212()
 *
 * @name f__176C_1CFB_0003_0212
 * @implements 176C:1CFB:0003:0212 ()
 *
 * Called From: 176C:1CF9:0004:069C
 */
void f__176C_1CFB_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1CFE_0021_F213()
 *
 * @name f__176C_1CFE_0021_F213
 * @implements 176C:1CFE:0021:F213 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_1CFE_0021_F213()
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
	if ((emu_flags.cf || emu_flags.zf)) { f__176C_1D1F_0007_5C90(); return; }
	emu_ip = 0x1EF0; emu_last_cs = 0x176C; emu_last_ip = 0x1D1C; emu_last_length = 0x0021; emu_last_crc = 0xF213; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_1D1F_0007_5C90()
 *
 * @name f__176C_1D1F_0007_5C90
 * @implements 176C:1D1F:0007:5C90 ()
 *
 * Called From: 176C:1D1A:0021:F213
 */
void f__176C_1D1F_0007_5C90()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x1EF9);
	switch (emu_ip) {
		case 0x1D26: f__176C_1D26_001C_79F9(); return;
		case 0x1D49: f__176C_1D49_0011_9649(); return;
		case 0x1D5E: f__176C_1D5E_0015_0D34(); return;
		case 0x1D76: f__176C_1D76_000D_27DF(); return;
		case 0x1D97: f__176C_1D97_000E_D4D4(); return;
		case 0x1DA5: f__176C_1DA5_000D_ACBB(); return;
		case 0x1DD5: f__176C_1DD5_000A_69F7(); return;
		case 0x1DDF: f__176C_1DDF_000B_D70C(); return;
		case 0x1DEA: f__176C_1DEA_0023_05A1(); return;
		case 0x1E1A: f__176C_1E1A_000C_A9C3(); return;
		case 0x1E7B: f__176C_1E7B_0022_9F3E(); return;
		case 0x1EA2: f__176C_1EA2_0013_402E(); return;
		case 0x1EDA: f__176C_1EDA_0011_344B(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x176C; emu_last_ip = 0x1D21; emu_last_length = 0x0007; emu_last_crc = 0x5C90;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__176C_1D26_001C_79F9()
 *
 * @name f__176C_1D26_001C_79F9
 * @implements 176C:1D26:001C:79F9 ()
 *
 * Called From: 176C:1D21:0007:5C90
 */
void f__176C_1D26_001C_79F9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ds, 0x00,  0x3A38));
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__176C_1D42_0007_320E(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x1D44; emu_last_cs = 0x176C; emu_last_ip = 0x1D40; emu_last_length = 0x001C; emu_last_crc = 0x79F9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_1D42_0007_320E()
 *
 * @name f__176C_1D42_0007_320E
 * @implements 176C:1D42:0007:320E ()
 *
 * Called From: 176C:1D3B:001C:79F9
 */
void f__176C_1D42_0007_320E()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	f__176C_1EF2_0004_0D2C(); return;
}

/**
 * Decompiled function f__176C_1D44_0005_1B8E()
 *
 * @name f__176C_1D44_0005_1B8E
 * @implements 176C:1D44:0005:1B8E ()
 *
 * Called From: 176C:1D5C:0004:0750
 * Called From: 176C:1DA3:000E:D4D4
 * Called From: 176C:1E23:000C:A9C3
 * Called From: 176C:1E38:0005:0822
 * Called From: 176C:1E45:0005:13C4
 * Called From: 176C:1E9F:0005:193C
 * Called From: 176C:1E9F:0003:043C
 * Called From: 176C:1EB7:0005:0EFC
 * Called From: 176C:1EB7:0003:049C
 * Called From: 176C:1EED:0003:07E4
 */
void f__176C_1D44_0005_1B8E()
{
	emu_movw(&emu_si, emu_ax.x);
	f__176C_1EF2_0004_0D2C(); return;
}

/**
 * Decompiled function f__176C_1D49_0011_9649()
 *
 * @name f__176C_1D49_0011_9649
 * @implements 176C:1D49:0011:9649 ()
 *
 * Called From: 176C:1D21:0007:5C90
 */
void f__176C_1D49_0011_9649()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x40);
	if (emu_flags.zf) { f__176C_1D5A_0004_0750(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x1D5C; emu_last_cs = 0x176C; emu_last_ip = 0x1D58; emu_last_length = 0x0011; emu_last_crc = 0x9649; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_1D5A_0004_0750()
 *
 * @name f__176C_1D5A_0004_0750
 * @implements 176C:1D5A:0004:0750 ()
 *
 * Called From: 176C:1D53:0011:9649
 */
void f__176C_1D5A_0004_0750()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_1D44_0005_1B8E(); return;
}

/**
 * Decompiled function f__176C_1D5E_0015_0D34()
 *
 * @name f__176C_1D5E_0015_0D34
 * @implements 176C:1D5E:0015:0D34 ()
 *
 * Called From: 176C:1D21:0007:5C90
 */
void f__176C_1D5E_0015_0D34()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x1D73); emu_cs = 0x34C1; ovl__34C1(2);
	f__176C_1D73_0003_0448();
}

/**
 * Decompiled function f__176C_1D73_0003_0448()
 *
 * @name f__176C_1D73_0003_0448
 * @implements 176C:1D73:0003:0448 ()
 *
 * Called From: 176C:1D73:0015:0D34
 */
void f__176C_1D73_0003_0448()
{
	f__176C_1E36_0005_0822(); return;
}

/**
 * Decompiled function f__176C_1D76_000D_27DF()
 *
 * @name f__176C_1D76_000D_27DF
 * @implements 176C:1D76:000D:27DF ()
 *
 * Called From: 176C:1D21:0007:5C90
 */
void f__176C_1D76_000D_27DF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x56));
	emu_push(emu_cs); emu_push(0x1D83); emu_cs = 0x167E; f__167E_0005_0013_D62A();
	f__176C_1D83_000F_3BBA();
}

/**
 * Decompiled function f__176C_1D83_000F_3BBA()
 *
 * @name f__176C_1D83_000F_3BBA
 * @implements 176C:1D83:000F:3BBA ()
 *
 * Called From: 176C:1D83:000D:27DF
 */
void f__176C_1D83_000F_3BBA()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__176C_1D92_0005_0F26(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x56));
	f__176C_1D94_0003_0626(); return;
}

/**
 * Decompiled function f__176C_1D92_0005_0F26()
 *
 * @name f__176C_1D92_0005_0F26
 * @implements 176C:1D92:0005:0F26 ()
 *
 * Called From: 176C:1D86:000F:3BBA
 */
void f__176C_1D92_0005_0F26()
{
	emu_xorw(&emu_si, emu_si);
	f__176C_1EF2_0004_0D2C(); return;
}

/**
 * Decompiled function f__176C_1D94_0003_0626()
 *
 * @name f__176C_1D94_0003_0626
 * @implements 176C:1D94:0003:0626 ()
 *
 * Called From: 176C:1D90:000F:3BBA
 */
void f__176C_1D94_0003_0626()
{
	f__176C_1EF2_0004_0D2C(); return;
}

/**
 * Decompiled function f__176C_1D97_000E_D4D4()
 *
 * @name f__176C_1D97_000E_D4D4
 * @implements 176C:1D97:000E:D4D4 ()
 *
 * Called From: 176C:1D21:0007:5C90
 */
void f__176C_1D97_000E_D4D4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x50));
	emu_movb(&emu_cx.l, 0x8);
	emu_shlw(&emu_ax.x, emu_cx.l);
	f__176C_1D44_0005_1B8E(); return;
}

/**
 * Decompiled function f__176C_1DA5_000D_ACBB()
 *
 * @name f__176C_1DA5_000D_ACBB
 * @implements 176C:1DA5:000D:ACBB ()
 *
 * Called From: 176C:1D21:0007:5C90
 */
void f__176C_1DA5_000D_ACBB()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1DB2); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__176C_1DB2_0003_054C();
}

/**
 * Decompiled function f__176C_1DB2_0003_054C()
 *
 * @name f__176C_1DB2_0003_054C
 * @implements 176C:1DB2:0003:054C ()
 *
 * Called From: 176C:1DB2:000D:ACBB
 */
void f__176C_1DB2_0003_054C()
{
	f__176C_1E36_0005_0822(); return;
}

/**
 * Decompiled function f__176C_1DD5_000A_69F7()
 *
 * @name f__176C_1DD5_000A_69F7
 * @implements 176C:1DD5:000A:69F7 ()
 *
 * Called From: 176C:1D21:0007:5C90
 */
void f__176C_1DD5_000A_69F7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	f__176C_1E43_0005_13C4(); return;
}

/**
 * Decompiled function f__176C_1DDF_000B_D70C()
 *
 * @name f__176C_1DDF_000B_D70C
 * @implements 176C:1DDF:000B:D70C ()
 *
 * Called From: 176C:1D21:0007:5C90
 */
void f__176C_1DDF_000B_D70C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x54));
	f__176C_1EF2_0004_0D2C(); return;
}

/**
 * Decompiled function f__176C_1DEA_0023_05A1()
 *
 * @name f__176C_1DEA_0023_05A1
 * @implements 176C:1DEA:0023:05A1 ()
 *
 * Called From: 176C:1D21:0007:5C90
 */
void f__176C_1DEA_0023_05A1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4D), 0x0);
	if (emu_flags.zf) { f__176C_1E00_000D_AF83(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { f__176C_1E0F_000B_D5DE(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1E0D); emu_cs = 0x1A34; f__1A34_3312_0017_6BC9();
	f__176C_1E0D_000D_65D0();
}

/**
 * Decompiled function f__176C_1E00_000D_AF83()
 *
 * @name f__176C_1E00_000D_AF83
 * @implements 176C:1E00:000D:AF83 ()
 *
 * Called From: 176C:1DF3:0023:05A1
 */
void f__176C_1E00_000D_AF83()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x1E0D); emu_cs = 0x1A34; f__1A34_3312_0017_6BC9();
	f__176C_1E0D_000D_65D0();
}

/**
 * Decompiled function f__176C_1E0D_000D_65D0()
 *
 * @name f__176C_1E0D_000D_65D0
 * @implements 176C:1E0D:000D:65D0 ()
 *
 * Called From: 176C:1E0D:000D:AF83
 * Called From: 176C:1E0D:0023:05A1
 */
void f__176C_1E0D_000D_65D0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4D));
	f__176C_1EF2_0004_0D2C(); return;
}

/**
 * Decompiled function f__176C_1E0F_000B_D5DE()
 *
 * @name f__176C_1E0F_000B_D5DE
 * @implements 176C:1E0F:000B:D5DE ()
 *
 * Called From: 176C:1DFE:0023:05A1
 */
void f__176C_1E0F_000B_D5DE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x4D));
	f__176C_1EF2_0004_0D2C(); return;
}

/**
 * Decompiled function f__176C_1E1A_000C_A9C3()
 *
 * @name f__176C_1E1A_000C_A9C3
 * @implements 176C:1E1A:000C:A9C3 ()
 *
 * Called From: 176C:1D21:0007:5C90
 */
void f__176C_1E1A_000C_A9C3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	f__176C_1D44_0005_1B8E(); return;
}

/**
 * Decompiled function f__176C_1E36_0005_0822()
 *
 * @name f__176C_1E36_0005_0822
 * @implements 176C:1E36:0005:0822 ()
 *
 * Called From: 176C:1D73:0003:0448
 * Called From: 176C:1DB2:0003:054C
 */
void f__176C_1E36_0005_0822()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__176C_1D44_0005_1B8E(); return;
}

/**
 * Decompiled function f__176C_1E43_0005_13C4()
 *
 * @name f__176C_1E43_0005_13C4
 * @implements 176C:1E43:0005:13C4 ()
 *
 * Called From: 176C:1DDD:000A:69F7
 */
void f__176C_1E43_0005_13C4()
{
	emu_movb(&emu_ax.h, 0x0);
	f__176C_1D44_0005_1B8E(); return;
}

/**
 * Decompiled function f__176C_1E7B_0022_9F3E()
 *
 * @name f__176C_1E7B_0022_9F3E
 * @implements 176C:1E7B:0022:9F3E ()
 *
 * Called From: 176C:1D21:0007:5C90
 */
void f__176C_1E7B_0022_9F3E()
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
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_1E9D_0005_193C(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__176C_1E9F_0003_043C(); return;
}

/**
 * Decompiled function f__176C_1E9D_0005_193C()
 *
 * @name f__176C_1E9D_0005_193C
 * @implements 176C:1E9D:0005:193C ()
 *
 * Called From: 176C:1E95:0022:9F3E
 */
void f__176C_1E9D_0005_193C()
{
	emu_movw(&emu_ax.x, emu_si);
	f__176C_1D44_0005_1B8E(); return;
}

/**
 * Decompiled function f__176C_1E9F_0003_043C()
 *
 * @name f__176C_1E9F_0003_043C
 * @implements 176C:1E9F:0003:043C ()
 *
 * Called From: 176C:1E9B:0022:9F3E
 */
void f__176C_1E9F_0003_043C()
{
	f__176C_1D44_0005_1B8E(); return;
}

/**
 * Decompiled function f__176C_1EA2_0013_402E()
 *
 * @name f__176C_1EA2_0013_402E
 * @implements 176C:1EA2:0013:402E ()
 *
 * Called From: 176C:1D21:0007:5C90
 */
void f__176C_1EA2_0013_402E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	if (emu_flags.zf) { f__176C_1EB5_0005_0EFC(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__176C_1EB7_0003_049C(); return;
}

/**
 * Decompiled function f__176C_1EB5_0005_0EFC()
 *
 * @name f__176C_1EB5_0005_0EFC
 * @implements 176C:1EB5:0005:0EFC ()
 *
 * Called From: 176C:1EAE:0013:402E
 */
void f__176C_1EB5_0005_0EFC()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_1D44_0005_1B8E(); return;
}

/**
 * Decompiled function f__176C_1EB7_0003_049C()
 *
 * @name f__176C_1EB7_0003_049C
 * @implements 176C:1EB7:0003:049C ()
 *
 * Called From: 176C:1EB3:0013:402E
 */
void f__176C_1EB7_0003_049C()
{
	f__176C_1D44_0005_1B8E(); return;
}

/**
 * Decompiled function f__176C_1EDA_0011_344B()
 *
 * @name f__176C_1EDA_0011_344B
 * @implements 176C:1EDA:0011:344B ()
 *
 * Called From: 176C:1D21:0007:5C90
 */
void f__176C_1EDA_0011_344B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x200);
	if (emu_flags.zf) { emu_ip = 0x1EEB; emu_last_cs = 0x176C; emu_last_ip = 0x1EE4; emu_last_length = 0x0011; emu_last_crc = 0x344B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__176C_1EED_0003_07E4(); return;
}

/**
 * Decompiled function f__176C_1EED_0003_07E4()
 *
 * @name f__176C_1EED_0003_07E4
 * @implements 176C:1EED:0003:07E4 ()
 *
 * Called From: 176C:1EE9:0011:344B
 */
void f__176C_1EED_0003_07E4()
{
	f__176C_1D44_0005_1B8E(); return;
}

/**
 * Decompiled function f__176C_1EF2_0004_0D2C()
 *
 * @name f__176C_1EF2_0004_0D2C
 * @implements 176C:1EF2:0004:0D2C ()
 *
 * Called From: 176C:1D46:0007:320E
 * Called From: 176C:1D46:0005:1B8E
 * Called From: 176C:1D94:0003:0626
 * Called From: 176C:1D94:0005:0F26
 * Called From: 176C:1DE7:000B:D70C
 * Called From: 176C:1E17:000B:D5DE
 * Called From: 176C:1E17:000D:65D0
 */
void f__176C_1EF2_0004_0D2C()
{
	emu_movw(&emu_ax.x, emu_si);
	f__176C_1EF6_0003_0212(); return;
}

/**
 * Decompiled function f__176C_1EF6_0003_0212()
 *
 * @name f__176C_1EF6_0003_0212
 * @implements 176C:1EF6:0003:0212 ()
 *
 * Called From: 176C:1EF4:0004:0D2C
 */
void f__176C_1EF6_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1F21_001C_87DC()
 *
 * @name f__176C_1F21_001C_87DC
 * @implements 176C:1F21:001C:87DC ()
 *
 * Called From: 1319:00B3:000B:3442
 * Called From: 1319:0109:000B:3482
 * Called From: 1319:01BE:000B:3482
 * Called From: 1319:035B:000B:3402
 * Called From: 1319:0523:0006:1EF4
 * Called From: 1319:063A:0010:FA30
 */
void f__176C_1F21_001C_87DC()
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
	emu_push(emu_cs); emu_push(0x1F3D); emu_cs = 0x1A34; f__1A34_3146_0018_1857();
	f__176C_1F3D_0011_46FA();
}

/**
 * Decompiled function f__176C_1F3D_0011_46FA()
 *
 * @name f__176C_1F3D_0011_46FA
 * @implements 176C:1F3D:0011:46FA ()
 *
 * Called From: 176C:1F3D:001C:87DC
 */
void f__176C_1F3D_0011_46FA()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__176C_1F4A_0004_0D2C(); return; }
	emu_movw(&emu_si, 0x100);
	emu_movw(&emu_ax.x, emu_si);
	f__176C_1F4E_0003_0212(); return;
}

/**
 * Decompiled function f__176C_1F4A_0004_0D2C()
 *
 * @name f__176C_1F4A_0004_0D2C
 * @implements 176C:1F4A:0004:0D2C ()
 *
 * Called From: 176C:1F45:0011:46FA
 */
void f__176C_1F4A_0004_0D2C()
{
	emu_movw(&emu_ax.x, emu_si);
	f__176C_1F4E_0003_0212(); return;
}

/**
 * Decompiled function f__176C_1F4E_0003_0212()
 *
 * @name f__176C_1F4E_0003_0212
 * @implements 176C:1F4E:0003:0212 ()
 *
 * Called From: 176C:1F4C:0004:0D2C
 * Called From: 176C:1F4C:0011:46FA
 */
void f__176C_1F4E_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1F51_002F_ACE3()
 *
 * @name f__176C_1F51_002F_ACE3
 * @implements 176C:1F51:002F:ACE3 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_1F51_002F_ACE3()
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
	if (emu_flags.zf) { f__176C_1F80_0008_E9C4(); return; }
	f__176C_2122_0006_2A18(); return;
}

/**
 * Decompiled function f__176C_1F80_0008_E9C4()
 *
 * @name f__176C_1F80_0008_E9C4
 * @implements 176C:1F80:0008:E9C4 ()
 *
 * Called From: 176C:1F7B:002F:ACE3
 */
void f__176C_1F80_0008_E9C4()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1F88); emu_cs = 0x167E; f__167E_0005_0013_D62A();
	f__176C_1F88_0008_6712();
}

/**
 * Decompiled function f__176C_1F88_0008_6712()
 *
 * @name f__176C_1F88_0008_6712
 * @implements 176C:1F88:0008:6712 ()
 *
 * Called From: 176C:1F88:0008:E9C4
 */
void f__176C_1F88_0008_6712()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__176C_1F90_0011_A870(); return; }
	f__176C_2122_0006_2A18(); return;
}

/**
 * Decompiled function f__176C_1F90_0011_A870()
 *
 * @name f__176C_1F90_0011_A870
 * @implements 176C:1F90:0011:A870 ()
 *
 * Called From: 176C:1F8B:0008:6712
 */
void f__176C_1F90_0011_A870()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1FA1); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__176C_1FA1_000D_F3B6();
}

/**
 * Decompiled function f__176C_1FA1_000D_F3B6()
 *
 * @name f__176C_1FA1_000D_F3B6
 * @implements 176C:1FA1:000D:F3B6 ()
 *
 * Called From: 176C:1FA1:0011:A870
 */
void f__176C_1FA1_000D_F3B6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1FAE); emu_cs = 0x167E; f__167E_0162_000D_3E1A();
	f__176C_1FAE_0020_941D();
}

/**
 * Decompiled function f__176C_1FAE_0020_941D()
 *
 * @name f__176C_1FAE_0020_941D
 * @implements 176C:1FAE:0020:941D ()
 *
 * Called From: 176C:1FAE:000D:F3B6
 */
void f__176C_1FAE_0020_941D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__176C_1FCE_0013_82B3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x72), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x2128; emu_last_cs = 0x176C; emu_last_ip = 0x1FCB; emu_last_length = 0x0020; emu_last_crc = 0x941D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_1FCB_0003_0622()
 *
 * @name f__176C_1FCB_0003_0622
 * @implements 176C:1FCB:0003:0622 ()
 *
 * Called From: 176C:2113:0012:2F22
 * Called From: 176C:2125:0006:2A18
 */
void f__176C_1FCB_0003_0622()
{
	f__176C_2128_0006_137A(); return;
}

/**
 * Decompiled function f__176C_1FCE_0013_82B3()
 *
 * @name f__176C_1FCE_0013_82B3
 * @implements 176C:1FCE:0013:82B3 ()
 *
 * Called From: 176C:1FB4:0020:941D
 */
void f__176C_1FCE_0013_82B3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x72));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__176C_1FE1_001E_E8BF(); return; }
	f__176C_2077_0009_F77B(); return;
}

/**
 * Decompiled function f__176C_1FE1_001E_E8BF()
 *
 * @name f__176C_1FE1_001E_E8BF
 * @implements 176C:1FE1:001E:E8BF ()
 *
 * Called From: 176C:1FDC:0013:82B3
 */
void f__176C_1FE1_001E_E8BF()
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
	emu_push(emu_cs); emu_push(0x1FFF); emu_cs = 0x1319; f__1319_002D_0023_D2A2();
	f__176C_1FFF_001C_13C7();
}

/**
 * Decompiled function f__176C_1FFF_001C_13C7()
 *
 * @name f__176C_1FFF_001C_13C7
 * @implements 176C:1FFF:001C:13C7 ()
 *
 * Called From: 176C:1FFF:001E:E8BF
 */
void f__176C_1FFF_001C_13C7()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xE);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_201B_001F_AC83(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	f__176C_201E_001C_2CDC(); return;
}

/**
 * Decompiled function f__176C_201B_001F_AC83()
 *
 * @name f__176C_201B_001F_AC83
 * @implements 176C:201B:001F:AC83 ()
 *
 * Called From: 176C:2010:001C:13C7
 */
void f__176C_201B_001F_AC83()
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
	emu_push(emu_cs); emu_push(0x203A); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	f__176C_203A_003D_308E();
}

/**
 * Decompiled function f__176C_201E_001C_2CDC()
 *
 * @name f__176C_201E_001C_2CDC
 * @implements 176C:201E:001C:2CDC ()
 *
 * Called From: 176C:2019:001C:13C7
 */
void f__176C_201E_001C_2CDC()
{
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_addw(&emu_ax.x, 0x72);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x203A); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	f__176C_203A_003D_308E();
}

/**
 * Decompiled function f__176C_203A_003D_308E()
 *
 * @name f__176C_203A_003D_308E
 * @implements 176C:203A:003D:308E ()
 *
 * Called From: 176C:203A:001C:2CDC
 * Called From: 176C:203A:001F:AC83
 */
void f__176C_203A_003D_308E()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x72), 0xFF);
	if (!emu_flags.zf) { f__176C_2075_0002_03EC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (!emu_flags.zf) { f__176C_2075_0002_03EC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x2D0);
	emu_ip = 0x2097; emu_last_cs = 0x176C; emu_last_ip = 0x2075; emu_last_length = 0x003D; emu_last_crc = 0x308E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_2075_0002_03EC()
 *
 * @name f__176C_2075_0002_03EC
 * @implements 176C:2075:0002:03EC ()
 *
 * Called From: 176C:2046:003D:308E
 * Called From: 176C:205B:003D:308E
 */
void f__176C_2075_0002_03EC()
{
	f__176C_2097_0036_0004(); return;
}

/**
 * Decompiled function f__176C_2077_0009_F77B()
 *
 * @name f__176C_2077_0009_F77B
 * @implements 176C:2077:0009:F77B ()
 *
 * Called From: 176C:1FDE:0013:82B3
 */
void f__176C_2077_0009_F77B()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2080); emu_cs = 0x0F3F; f__0F3F_0360_0038_031A();
	f__176C_2080_004D_980D();
}

/**
 * Decompiled function f__176C_2080_004D_980D()
 *
 * @name f__176C_2080_004D_980D
 * @implements 176C:2080:004D:980D ()
 *
 * Called From: 176C:2080:0009:F77B
 */
void f__176C_2080_004D_980D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xE);
	if (!(emu_flags.sf != emu_flags.of)) { f__176C_2097_0036_0004(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x72), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x72));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { emu_ip = 0x2122; emu_last_cs = 0x176C; emu_last_ip = 0x20A5; emu_last_length = 0x004D; emu_last_crc = 0x980D; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_cx.l, 0x5);
	emu_shlw(&emu_si, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_cmpw(&emu_ax.x, emu_si);
	if (emu_flags.zf) { f__176C_20D2_000D_A84B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x20CD); emu_cs = 0x1A34; f__1A34_1E99_0012_0D98();
	f__176C_20CD_0005_1F7C();
}

/**
 * Decompiled function f__176C_2097_0036_0004()
 *
 * @name f__176C_2097_0036_0004
 * @implements 176C:2097:0036:0004 ()
 *
 * Called From: 176C:2075:0002:03EC
 * Called From: 176C:2089:004D:980D
 */
void f__176C_2097_0036_0004()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x72));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__176C_2122_0006_2A18(); return; }
	emu_movb(&emu_cx.l, 0x5);
	emu_shlw(&emu_si, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_cmpw(&emu_ax.x, emu_si);
	if (emu_flags.zf) { f__176C_20D2_000D_A84B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x20CD); emu_cs = 0x1A34; f__1A34_1E99_0012_0D98();
	f__176C_20CD_0005_1F7C();
}

/**
 * Decompiled function f__176C_20CD_0005_1F7C()
 *
 * @name f__176C_20CD_0005_1F7C
 * @implements 176C:20CD:0005:1F7C ()
 *
 * Called From: 176C:20CD:0036:0004
 * Called From: 176C:20CD:004D:980D
 */
void f__176C_20CD_0005_1F7C()
{
	emu_addws(&emu_sp, 0xA);
	f__176C_2122_0006_2A18(); return;
}

/**
 * Decompiled function f__176C_20D2_000D_A84B()
 *
 * @name f__176C_20D2_000D_A84B
 * @implements 176C:20D2:000D:A84B ()
 *
 * Called From: 176C:20B7:0036:0004
 * Called From: 176C:20B7:004D:980D
 */
void f__176C_20D2_000D_A84B()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x20DF); emu_cs = 0x1A34; f__1A34_167C_0015_6B7D();
	f__176C_20DF_0025_C6C8();
}

/**
 * Decompiled function f__176C_20DF_0025_C6C8()
 *
 * @name f__176C_20DF_0025_C6C8
 * @implements 176C:20DF:0025:C6C8 ()
 *
 * Called From: 176C:20DF:000D:A84B
 */
void f__176C_20DF_0025_C6C8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x2116; emu_last_cs = 0x176C; emu_last_ip = 0x20E3; emu_last_length = 0x0025; emu_last_crc = 0xC6C8; emu_call(); return; } // Jump does not resolve
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
	emu_push(emu_cs); emu_push(0x2104); emu_cs = 0x01F7; f__01F7_29B8_0016_C77F();
	f__176C_2104_0012_2F22();
}

/**
 * Decompiled function f__176C_2104_0012_2F22()
 *
 * @name f__176C_2104_0012_2F22
 * @implements 176C:2104:0012:2F22 ()
 *
 * Called From: 176C:2104:0025:C6C8
 */
void f__176C_2104_0012_2F22()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x7F), 0xFF);
	emu_movw(&emu_ax.x, 0x1);
	f__176C_1FCB_0003_0622(); return;
}

/**
 * Decompiled function f__176C_2122_0006_2A18()
 *
 * @name f__176C_2122_0006_2A18
 * @implements 176C:2122:0006:2A18 ()
 *
 * Called From: 176C:1F7D:002F:ACE3
 * Called From: 176C:1F8D:0008:6712
 * Called From: 176C:20A5:0036:0004
 * Called From: 176C:20D0:0005:1F7C
 */
void f__176C_2122_0006_2A18()
{
	emu_movw(&emu_ax.x, 0x1);
	f__176C_1FCB_0003_0622(); return;
}

/**
 * Decompiled function f__176C_2128_0006_137A()
 *
 * @name f__176C_2128_0006_137A
 * @implements 176C:2128:0006:137A ()
 *
 * Called From: 176C:1FCB:0003:0622
 */
void f__176C_2128_0006_137A()
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
 * Decompiled function f__176C_2275_001D_6A3A()
 *
 * @name f__176C_2275_001D_6A3A
 * @implements 176C:2275:001D:6A3A ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_2275_001D_6A3A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (emu_flags.zf) { f__176C_229E_000A_6939(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2292); emu_cs = 0x0FE4; emu_ip = 0x288F; emu_last_cs = 0x176C; emu_last_ip = 0x228D; emu_last_length = 0x001D; emu_last_crc = 0x6A3A; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__176C_229B_0003_0778()
 *
 * @name f__176C_229B_0003_0778
 * @implements 176C:229B:0003:0778 ()
 *
 * Called From: 176C:22A6:000A:6939
 */
void f__176C_229B_0003_0778()
{
	emu_movws(&emu_ax.x, emu_ax.l);
	f__176C_22A8_0002_00E2(); return;
}

/**
 * Decompiled function f__176C_229E_000A_6939()
 *
 * @name f__176C_229E_000A_6939
 * @implements 176C:229E:000A:6939 ()
 *
 * Called From: 176C:2281:001D:6A3A
 */
void f__176C_229E_000A_6939()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x58));
	f__176C_229B_0003_0778(); return;
}

/**
 * Decompiled function f__176C_22A8_0002_00E2()
 *
 * @name f__176C_22A8_0002_00E2
 * @implements 176C:22A8:0002:00E2 ()
 *
 * Called From: 176C:229C:0003:0778
 */
void f__176C_22A8_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_22C4_0019_CE9C()
 *
 * @name f__176C_22C4_0019_CE9C
 * @implements 176C:22C4:0019:CE9C ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_22C4_0019_CE9C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x22DD); emu_cs = 0x0F3F; f__0F3F_0275_0019_B286();
	f__176C_22DD_0009_CDC2();
}

/**
 * Decompiled function f__176C_22DD_0009_CDC2()
 *
 * @name f__176C_22DD_0009_CDC2
 * @implements 176C:22DD:0009:CDC2 ()
 *
 * Called From: 176C:22DD:0019:CE9C
 */
void f__176C_22DD_0009_CDC2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x22E6); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__176C_22E6_000A_268B();
}

/**
 * Decompiled function f__176C_22E6_000A_268B()
 *
 * @name f__176C_22E6_000A_268B
 * @implements 176C:22E6:000A:268B ()
 *
 * Called From: 176C:22E6:0009:CDC2
 */
void f__176C_22E6_000A_268B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x22F0); emu_cs = 0x151A; f__151A_0114_0022_9DA5();
	f__176C_22F0_0012_A914();
}

/**
 * Decompiled function f__176C_22F0_0012_A914()
 *
 * @name f__176C_22F0_0012_A914
 * @implements 176C:22F0:0012:A914 ()
 *
 * Called From: 176C:22F0:000A:268B
 */
void f__176C_22F0_0012_A914()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x2302); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__176C_2302_0008_778C();
}

/**
 * Decompiled function f__176C_2302_0008_778C()
 *
 * @name f__176C_2302_0008_778C
 * @implements 176C:2302:0008:778C ()
 *
 * Called From: 176C:2302:0012:A914
 */
void f__176C_2302_0008_778C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x230A); emu_cs = 0x34CD; ovl__34CD(13);
	f__176C_230A_0013_BD59();
}

/**
 * Decompiled function f__176C_230A_0013_BD59()
 *
 * @name f__176C_230A_0013_BD59
 * @implements 176C:230A:0013:BD59 ()
 *
 * Called From: 176C:230A:0008:778C
 */
void f__176C_230A_0013_BD59()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x3A4C), 0x0);
	if (emu_flags.zf) { f__176C_231D_0033_F183(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_2320_0030_F447(); return;
}

/**
 * Decompiled function f__176C_231D_0033_F183()
 *
 * @name f__176C_231D_0033_F183
 * @implements 176C:231D:0033:F183 ()
 *
 * Called From: 176C:2317:0013:BD59
 */
void f__176C_231D_0033_F183()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x20), 0x1);
	if (!emu_flags.zf) { f__176C_2330_0020_5C56(); return; }
	emu_addws(&emu_si, 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4A), 0x3);
	if (!emu_flags.zf) { emu_ip = 0x2350; emu_last_cs = 0x176C; emu_last_ip = 0x233E; emu_last_length = 0x0033; emu_last_crc = 0xF183; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x80);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x33C8);
	emu_ip = 0x235E; emu_last_cs = 0x176C; emu_last_ip = 0x234E; emu_last_length = 0x0033; emu_last_crc = 0xF183; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_2320_0030_F447()
 *
 * @name f__176C_2320_0030_F447
 * @implements 176C:2320:0030:F447 ()
 *
 * Called From: 176C:231B:0013:BD59
 */
void f__176C_2320_0030_F447()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x20), 0x1);
	if (!emu_flags.zf) { f__176C_2330_0020_5C56(); return; }
	emu_addws(&emu_si, 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4A), 0x3);
	if (!emu_flags.zf) { emu_ip = 0x2350; emu_last_cs = 0x176C; emu_last_ip = 0x233E; emu_last_length = 0x0030; emu_last_crc = 0xF447; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x80);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x33C8);
	emu_ip = 0x235E; emu_last_cs = 0x176C; emu_last_ip = 0x234E; emu_last_length = 0x0030; emu_last_crc = 0xF447; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_2330_0020_5C56()
 *
 * @name f__176C_2330_0020_5C56
 * @implements 176C:2330:0020:5C56 ()
 *
 * Called From: 176C:232B:0030:F447
 * Called From: 176C:232B:0033:F183
 */
void f__176C_2330_0020_5C56()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4A), 0x3);
	if (!emu_flags.zf) { emu_ip = 0x2350; emu_last_cs = 0x176C; emu_last_ip = 0x233E; emu_last_length = 0x0020; emu_last_crc = 0x5C56; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x80);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x33C8);
	f__176C_235E_0021_F030(); return;
}

/**
 * Decompiled function f__176C_235E_0021_F030()
 *
 * @name f__176C_235E_0021_F030
 * @implements 176C:235E:0021:F030 ()
 *
 * Called From: 176C:234E:0020:5C56
 */
void f__176C_235E_0021_F030()
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
	emu_push(emu_cs); emu_push(0x237F); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__176C_237F_0022_4F6B();
}

/**
 * Decompiled function f__176C_237F_0022_4F6B()
 *
 * @name f__176C_237F_0022_4F6B
 * @implements 176C:237F:0022:4F6B ()
 *
 * Called From: 176C:237F:0021:F030
 */
void f__176C_237F_0022_4F6B()
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
	emu_push(emu_cs); emu_push(0x23A1); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__176C_23A1_001D_F1C4();
}

/**
 * Decompiled function f__176C_23A1_001D_F1C4()
 *
 * @name f__176C_23A1_001D_F1C4
 * @implements 176C:23A1:001D:F1C4 ()
 *
 * Called From: 176C:23A1:0022:4F6B
 */
void f__176C_23A1_001D_F1C4()
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
	emu_push(emu_cs); emu_push(0x23BE); emu_cs = 0x151A; f__151A_000E_0013_54E3();
	f__176C_23BE_0008_F63C();
}

/**
 * Decompiled function f__176C_23BE_0008_F63C()
 *
 * @name f__176C_23BE_0008_F63C
 * @implements 176C:23BE:0008:F63C ()
 *
 * Called From: 176C:23BE:001D:F1C4
 */
void f__176C_23BE_0008_F63C()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x1);
	f__176C_23C6_0006_137A(); return;
}

/**
 * Decompiled function f__176C_23C6_0006_137A()
 *
 * @name f__176C_23C6_0006_137A
 * @implements 176C:23C6:0006:137A ()
 *
 * Called From: 176C:23C4:0008:F63C
 */
void f__176C_23C6_0006_137A()
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
 * Decompiled function f__176C_2552_0019_EB15()
 *
 * @name f__176C_2552_0019_EB15
 * @implements 176C:2552:0019:EB15 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_2552_0019_EB15()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x26));
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__176C_259C_0004_069C(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x256B); emu_cs = 0x167E; f__167E_0284_000C_AAF8();
	f__176C_256B_002F_BC2B();
}

/**
 * Decompiled function f__176C_256B_002F_BC2B()
 *
 * @name f__176C_256B_002F_BC2B
 * @implements 176C:256B:002F:BC2B ()
 *
 * Called From: 176C:256B:0019:EB15
 */
void f__176C_256B_002F_BC2B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__176C_259C_0004_069C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x259C; emu_last_cs = 0x176C; emu_last_ip = 0x2582; emu_last_length = 0x002F; emu_last_crc = 0xBC2B; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x259A); emu_cs = 0x0C10; emu_ip = 0x271C; emu_last_cs = 0x176C; emu_last_ip = 0x2595; emu_last_length = 0x002F; emu_last_crc = 0xBC2B; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__176C_259C_0004_069C()
 *
 * @name f__176C_259C_0004_069C
 * @implements 176C:259C:0004:069C ()
 *
 * Called From: 176C:2563:0019:EB15
 * Called From: 176C:2578:002F:BC2B
 */
void f__176C_259C_0004_069C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_25A0_0005_04BA(); return;
}

/**
 * Decompiled function f__176C_25A0_0005_04BA()
 *
 * @name f__176C_25A0_0005_04BA
 * @implements 176C:25A0:0005:04BA ()
 *
 * Called From: 176C:259E:0004:069C
 */
void f__176C_25A0_0005_04BA()
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
 * Decompiled function f__176C_25A5_002C_4EF8()
 *
 * @name f__176C_25A5_002C_4EF8
 * @implements 176C:25A5:002C:4EF8 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_25A5_002C_4EF8()
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
	emu_push(emu_cs); emu_push(0x25D1); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__176C_25D1_000E_6E22();
}

/**
 * Decompiled function f__176C_25D1_000E_6E22()
 *
 * @name f__176C_25D1_000E_6E22
 * @implements 176C:25D1:000E:6E22 ()
 *
 * Called From: 176C:25D1:002C:4EF8
 */
void f__176C_25D1_000E_6E22()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x25DF); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	f__176C_25DF_0005_1FB0();
}

/**
 * Decompiled function f__176C_25DF_0005_1FB0()
 *
 * @name f__176C_25DF_0005_1FB0
 * @implements 176C:25DF:0005:1FB0 ()
 *
 * Called From: 176C:25DF:000E:6E22
 */
void f__176C_25DF_0005_1FB0()
{
	emu_addws(&emu_sp, 0x8);
	f__176C_2622_0012_08D5(); return;
}

/**
 * Decompiled function f__176C_25E4_002D_6C71()
 *
 * @name f__176C_25E4_002D_6C71
 * @implements 176C:25E4:002D:6C71 ()
 *
 * Called From: 176C:262E:0012:08D5
 */
void f__176C_25E4_002D_6C71()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x2615; emu_last_cs = 0x176C; emu_last_ip = 0x25EC; emu_last_length = 0x002D; emu_last_crc = 0x6C71; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x2615; emu_last_cs = 0x176C; emu_last_ip = 0x25F6; emu_last_length = 0x002D; emu_last_crc = 0x6C71; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x26), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x2615; emu_last_cs = 0x176C; emu_last_ip = 0x2600; emu_last_length = 0x002D; emu_last_crc = 0x6C71; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x2611); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__176C_2611_0004_04CA();
}

/**
 * Decompiled function f__176C_2611_0004_04CA()
 *
 * @name f__176C_2611_0004_04CA
 * @implements 176C:2611:0004:04CA ()
 *
 * Called From: 176C:2611:002D:6C71
 */
void f__176C_2611_0004_04CA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__176C_2634_0004_0F7A(); return;
}

/**
 * Decompiled function f__176C_2613_0002_0392()
 *
 * @name f__176C_2613_0002_0392
 * @implements 176C:2613:0002:0392 ()
 *
 * Called From: 176C:2632:0012:08D5
 */
void f__176C_2613_0002_0392()
{
	f__176C_2634_0004_0F7A(); return;
}

/**
 * Decompiled function f__176C_2622_0012_08D5()
 *
 * @name f__176C_2622_0012_08D5
 * @implements 176C:2622:0012:08D5 ()
 *
 * Called From: 176C:25E2:0005:1FB0
 */
void f__176C_2622_0012_08D5()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__176C_25E4_002D_6C71(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_2613_0002_0392(); return;
}

/**
 * Decompiled function f__176C_2634_0004_0F7A()
 *
 * @name f__176C_2634_0004_0F7A
 * @implements 176C:2634:0004:0F7A ()
 *
 * Called From: 176C:2613:0002:0392
 * Called From: 176C:2613:0004:04CA
 */
void f__176C_2634_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_26CD_0010_2FC8()
 *
 * @name f__176C_26CD_0010_2FC8
 * @implements 176C:26CD:0010:2FC8 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_26CD_0010_2FC8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x26DD); emu_cs = 0x1A34; f__1A34_2B18_0011_4D97();
	f__176C_26DD_0006_1BFC();
}

/**
 * Decompiled function f__176C_26DD_0006_1BFC()
 *
 * @name f__176C_26DD_0006_1BFC
 * @implements 176C:26DD:0006:1BFC ()
 *
 * Called From: 176C:26DD:0010:2FC8
 */
void f__176C_26DD_0006_1BFC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_26E3_0002_00E2(); return;
}

/**
 * Decompiled function f__176C_26E3_0002_00E2()
 *
 * @name f__176C_26E3_0002_00E2
 * @implements 176C:26E3:0002:00E2 ()
 *
 * Called From: 176C:26E1:0006:1BFC
 */
void f__176C_26E3_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_26E5_0013_386B()
 *
 * @name f__176C_26E5_0013_386B
 * @implements 176C:26E5:0013:386B ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_26E5_0013_386B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (emu_flags.zf) { f__176C_26F8_000E_8882(); return; }
	emu_ip = 0x2799; emu_last_cs = 0x176C; emu_last_ip = 0x26F5; emu_last_length = 0x0013; emu_last_crc = 0x386B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_26F8_000E_8882()
 *
 * @name f__176C_26F8_000E_8882
 * @implements 176C:26F8:000E:8882 ()
 *
 * Called From: 176C:26F3:0013:386B
 */
void f__176C_26F8_000E_8882()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), 0x64);
	if ((emu_flags.sf != emu_flags.of)) { f__176C_2706_0011_A870(); return; }
	emu_ip = 0x2799; emu_last_cs = 0x176C; emu_last_ip = 0x2703; emu_last_length = 0x000E; emu_last_crc = 0x8882; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_2706_0011_A870()
 *
 * @name f__176C_2706_0011_A870
 * @implements 176C:2706:0011:A870 ()
 *
 * Called From: 176C:2701:000E:8882
 */
void f__176C_2706_0011_A870()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x2717); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__176C_2717_000A_22CD();
}

/**
 * Decompiled function f__176C_2717_000A_22CD()
 *
 * @name f__176C_2717_000A_22CD
 * @implements 176C:2717:000A:22CD ()
 *
 * Called From: 176C:2717:0011:A870
 */
void f__176C_2717_000A_22CD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2721); emu_cs = 0x34CD; ovl__34CD(13);
	f__176C_2721_0012_A33F();
}

/**
 * Decompiled function f__176C_2721_0012_A33F()
 *
 * @name f__176C_2721_0012_A33F
 * @implements 176C:2721:0012:A33F ()
 *
 * Called From: 176C:2721:000A:22CD
 */
void f__176C_2721_0012_A33F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0x8);
	if (emu_flags.zf) { f__176C_272E_0005_1186(); return; }
	emu_cmpws(&emu_si, 0x9);
	if (!emu_flags.zf) { f__176C_2795_0002_025C(); return; }
	emu_push(emu_cs); emu_push(0x2733); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__176C_2733_002F_1FF9();
}

/**
 * Decompiled function f__176C_272E_0005_1186()
 *
 * @name f__176C_272E_0005_1186
 * @implements 176C:272E:0005:1186 ()
 *
 * Called From: 176C:2727:0012:A33F
 */
void f__176C_272E_0005_1186()
{
	emu_push(emu_cs); emu_push(0x2733); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__176C_2733_002F_1FF9();
}

/**
 * Decompiled function f__176C_2733_002F_1FF9()
 *
 * @name f__176C_2733_002F_1FF9
 * @implements 176C:2733:002F:1FF9 ()
 *
 * Called From: 176C:2733:0012:A33F
 * Called From: 176C:2733:0005:1186
 */
void f__176C_2733_002F_1FF9()
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
	f__176C_2762_001C_1BD5();
}

/**
 * Decompiled function f__176C_2762_001C_1BD5()
 *
 * @name f__176C_2762_001C_1BD5
 * @implements 176C:2762:001C:1BD5 ()
 *
 * Called From: 176C:2762:002F:1FF9
 */
void f__176C_2762_001C_1BD5()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), 0x64);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_2779_0005_1186(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), 0x64);
	emu_push(emu_cs); emu_push(0x277E); emu_cs = 0x2BB4; emu_ip = 0x2782; emu_last_cs = 0x176C; emu_last_ip = 0x2779; emu_last_length = 0x001C; emu_last_crc = 0x1BD5; emu_call(); // Jump does not resolve
	f__176C_277E_000F_564B();
}

/**
 * Decompiled function f__176C_2779_0005_1186()
 *
 * @name f__176C_2779_0005_1186
 * @implements 176C:2779:0005:1186 ()
 *
 * Called From: 176C:276E:001C:1BD5
 */
void f__176C_2779_0005_1186()
{
	emu_push(emu_cs); emu_push(0x277E); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__176C_277E_000F_564B();
}

/**
 * Decompiled function f__176C_277E_000F_564B()
 *
 * @name f__176C_277E_000F_564B
 * @implements 176C:277E:000F:564B ()
 *
 * Called From: 176C:277E:0005:1186
 */
void f__176C_277E_000F_564B()
{
	emu_testw(&emu_ax.x, 0x1F);
	if (!emu_flags.zf) { f__176C_2793_0002_03A8(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x278D); emu_cs = 0x34CD; ovl__34CD(28);
	f__176C_278D_0006_1BE6();
}

/**
 * Decompiled function f__176C_278D_0006_1BE6()
 *
 * @name f__176C_278D_0006_1BE6
 * @implements 176C:278D:0006:1BE6 ()
 *
 * Called From: 176C:278D:000F:564B
 */
void f__176C_278D_0006_1BE6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_27A0_0004_07E2(); return;
}

/**
 * Decompiled function f__176C_278F_0004_0686()
 *
 * @name f__176C_278F_0004_0686
 * @implements 176C:278F:0004:0686 ()
 *
 * Called From: 176C:2795:0002:025C
 */
void f__176C_278F_0004_0686()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_27A0_0004_07E2(); return;
}

/**
 * Decompiled function f__176C_2791_0002_03B6()
 *
 * @name f__176C_2791_0002_03B6
 * @implements 176C:2791:0002:03B6 ()
 *
 * Called From: 176C:279E:0005:155E
 */
void f__176C_2791_0002_03B6()
{
	f__176C_27A0_0004_07E2(); return;
}

/**
 * Decompiled function f__176C_2793_0002_03A8()
 *
 * @name f__176C_2793_0002_03A8
 * @implements 176C:2793:0002:03A8 ()
 *
 * Called From: 176C:2781:000F:564B
 */
void f__176C_2793_0002_03A8()
{
	f__176C_2797_0002_03A8(); return;
}

/**
 * Decompiled function f__176C_2795_0002_025C()
 *
 * @name f__176C_2795_0002_025C
 * @implements 176C:2795:0002:025C ()
 *
 * Called From: 176C:272C:0012:A33F
 */
void f__176C_2795_0002_025C()
{
	f__176C_278F_0004_0686(); return;
}

/**
 * Decompiled function f__176C_2797_0002_03A8()
 *
 * @name f__176C_2797_0002_03A8
 * @implements 176C:2797:0002:03A8 ()
 *
 * Called From: 176C:2793:0002:03A8
 */
void f__176C_2797_0002_03A8()
{
	f__176C_279B_0005_155E(); return;
}

/**
 * Decompiled function f__176C_279B_0005_155E()
 *
 * @name f__176C_279B_0005_155E
 * @implements 176C:279B:0005:155E ()
 *
 * Called From: 176C:2797:0002:03A8
 */
void f__176C_279B_0005_155E()
{
	emu_movw(&emu_ax.x, 0x1);
	f__176C_2791_0002_03B6(); return;
}

/**
 * Decompiled function f__176C_27A0_0004_07E2()
 *
 * @name f__176C_27A0_0004_07E2
 * @implements 176C:27A0:0004:07E2 ()
 *
 * Called From: 176C:2791:0004:0686
 * Called From: 176C:2791:0002:03B6
 * Called From: 176C:2791:0006:1BE6
 */
void f__176C_27A0_0004_07E2()
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
 * Decompiled function f__176C_291A_0010_643C()
 *
 * @name f__176C_291A_0010_643C
 * @implements 176C:291A:0010:643C ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_291A_0010_643C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0xA);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x292A); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	f__176C_292A_001C_CB24();
}

/**
 * Decompiled function f__176C_292A_001C_CB24()
 *
 * @name f__176C_292A_001C_CB24
 * @implements 176C:292A:001C:CB24 ()
 *
 * Called From: 176C:292A:0010:643C
 */
void f__176C_292A_001C_CB24()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x626C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3C));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__176C_2946_000A_DE45(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x296E; emu_last_cs = 0x176C; emu_last_ip = 0x293D; emu_last_length = 0x001C; emu_last_crc = 0xCB24; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { f__176C_296E_000A_D6C5(); return; }
	emu_ip = 0x29A0; emu_last_cs = 0x176C; emu_last_ip = 0x2944; emu_last_length = 0x001C; emu_last_crc = 0xCB24; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__176C_2946_000A_DE45()
 *
 * @name f__176C_2946_000A_DE45
 * @implements 176C:2946:000A:DE45 ()
 *
 * Called From: 176C:2938:001C:CB24
 */
void f__176C_2946_000A_DE45()
{
	emu_cmpws(&emu_si, 0x8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_296E_000A_D6C5(); return; }
	emu_push(emu_cs); emu_push(0x2950); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__176C_2950_001B_DE4A();
}

/**
 * Decompiled function f__176C_2950_001B_DE4A()
 *
 * @name f__176C_2950_001B_DE4A
 * @implements 176C:2950:001B:DE4A ()
 *
 * Called From: 176C:2950:000A:DE45
 */
void f__176C_2950_001B_DE4A()
{
	emu_andb(&emu_ax.l, 0x3F);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), emu_ax.l);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x296B); emu_cs = 0x34CD; ovl__34CD(22);
	f__176C_296B_000D_C6D9();
}

/**
 * Decompiled function f__176C_296B_000D_C6D9()
 *
 * @name f__176C_296B_000D_C6D9
 * @implements 176C:296B:000D:C6D9 ()
 *
 * Called From: 176C:296B:001B:DE4A
 */
void f__176C_296B_000D_C6D9()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_si, 0x2);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_299E_0002_03A8(); return; }
	emu_push(emu_cs); emu_push(0x2978); emu_cs = 0x2BB4; emu_ip = 0x297C; emu_last_cs = 0x176C; emu_last_ip = 0x2973; emu_last_length = 0x000D; emu_last_crc = 0xC6D9; emu_call(); // Jump does not resolve
	f__176C_2978_0009_481B();
}

/**
 * Decompiled function f__176C_296E_000A_D6C5()
 *
 * @name f__176C_296E_000A_D6C5
 * @implements 176C:296E:000A:D6C5 ()
 *
 * Called From: 176C:2942:001C:CB24
 * Called From: 176C:2949:000A:DE45
 */
void f__176C_296E_000A_D6C5()
{
	emu_cmpws(&emu_si, 0x2);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__176C_299E_0002_03A8(); return; }
	emu_push(emu_cs); emu_push(0x2978); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__176C_2978_0009_481B();
}

/**
 * Decompiled function f__176C_2978_0009_481B()
 *
 * @name f__176C_2978_0009_481B
 * @implements 176C:2978:0009:481B ()
 *
 * Called From: 176C:2978:000A:D6C5
 */
void f__176C_2978_0009_481B()
{
	emu_testw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__176C_2981_000C_7E8D(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_2984_0009_F686(); return;
}

/**
 * Decompiled function f__176C_2981_000C_7E8D()
 *
 * @name f__176C_2981_000C_7E8D
 * @implements 176C:2981:000C:7E8D ()
 *
 * Called From: 176C:297B:0009:481B
 */
void f__176C_2981_000C_7E8D()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x298D); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__176C_298D_000E_A64F();
}

/**
 * Decompiled function f__176C_2984_0009_F686()
 *
 * @name f__176C_2984_0009_F686
 * @implements 176C:2984:0009:F686 ()
 *
 * Called From: 176C:297F:0009:481B
 */
void f__176C_2984_0009_F686()
{
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x298D); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__176C_298D_000E_A64F();
}

/**
 * Decompiled function f__176C_298D_000E_A64F()
 *
 * @name f__176C_298D_000E_A64F
 * @implements 176C:298D:000E:A64F ()
 *
 * Called From: 176C:298D:0009:F686
 * Called From: 176C:298D:000C:7E8D
 */
void f__176C_298D_000E_A64F()
{
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x299B); emu_cs = 0x1A34; f__1A34_1E99_0012_0D98();
	f__176C_299B_0005_1FD8();
}

/**
 * Decompiled function f__176C_299B_0005_1FD8()
 *
 * @name f__176C_299B_0005_1FD8
 * @implements 176C:299B:0005:1FD8 ()
 *
 * Called From: 176C:299B:000E:A64F
 */
void f__176C_299B_0005_1FD8()
{
	emu_addws(&emu_sp, 0xA);
	f__176C_29A2_0004_069C(); return;
}

/**
 * Decompiled function f__176C_299E_0002_03A8()
 *
 * @name f__176C_299E_0002_03A8
 * @implements 176C:299E:0002:03A8 ()
 *
 * Called From: 176C:2971:000A:D6C5
 * Called From: 176C:2971:000D:C6D9
 */
void f__176C_299E_0002_03A8()
{
	f__176C_29A2_0004_069C(); return;
}

/**
 * Decompiled function f__176C_29A2_0004_069C()
 *
 * @name f__176C_29A2_0004_069C
 * @implements 176C:29A2:0004:069C ()
 *
 * Called From: 176C:299E:0002:03A8
 * Called From: 176C:299E:0005:1FD8
 */
void f__176C_29A2_0004_069C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_29A6_0003_0212(); return;
}

/**
 * Decompiled function f__176C_29A6_0003_0212()
 *
 * @name f__176C_29A6_0003_0212
 * @implements 176C:29A6:0003:0212 ()
 *
 * Called From: 176C:29A4:0004:069C
 */
void f__176C_29A6_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_29A9_003A_808E()
 *
 * @name f__176C_29A9_003A_808E
 * @implements 176C:29A9:003A:808E ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_29A9_003A_808E()
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
	emu_push(emu_cs); emu_push(0x29E3); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__176C_29E3_000E_6E22();
}

/**
 * Decompiled function f__176C_29E3_000E_6E22()
 *
 * @name f__176C_29E3_000E_6E22
 * @implements 176C:29E3:000E:6E22 ()
 *
 * Called From: 176C:29E3:003A:808E
 */
void f__176C_29E3_000E_6E22()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x29F1); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	f__176C_29F1_0005_1F08();
}

/**
 * Decompiled function f__176C_29F1_0005_1F08()
 *
 * @name f__176C_29F1_0005_1F08
 * @implements 176C:29F1:0005:1F08 ()
 *
 * Called From: 176C:29F1:000E:6E22
 */
void f__176C_29F1_0005_1F08()
{
	emu_addws(&emu_sp, 0x8);
	f__176C_2A58_0026_7B23(); return;
}

/**
 * Decompiled function f__176C_29F6_003A_D34F()
 *
 * @name f__176C_29F6_003A_D34F
 * @implements 176C:29F6:003A:D34F ()
 *
 * Called From: 176C:2A64:0026:7B23
 */
void f__176C_29F6_003A_D34F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x2A4B; emu_last_cs = 0x176C; emu_last_ip = 0x29FE; emu_last_length = 0x003A; emu_last_crc = 0xD34F; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x2A4B; emu_last_cs = 0x176C; emu_last_ip = 0x2A08; emu_last_length = 0x003A; emu_last_crc = 0xD34F; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x26), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x2A4B; emu_last_cs = 0x176C; emu_last_ip = 0x2A12; emu_last_length = 0x003A; emu_last_crc = 0xD34F; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x2A30); emu_cs = 0x0F3F; f__0F3F_0104_0013_AF6A();
	f__176C_2A30_0026_EF96();
}

/**
 * Decompiled function f__176C_2A30_0026_EF96()
 *
 * @name f__176C_2A30_0026_EF96
 * @implements 176C:2A30:0026:EF96 ()
 *
 * Called From: 176C:2A30:003A:D34F
 */
void f__176C_2A30_0026_EF96()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x2A3D; emu_last_cs = 0x176C; emu_last_ip = 0x2A37; emu_last_length = 0x0026; emu_last_crc = 0xEF96; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { emu_ip = 0x2A4B; emu_last_cs = 0x176C; emu_last_ip = 0x2A3B; emu_last_length = 0x0026; emu_last_crc = 0xEF96; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2A56); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	f__176C_2A56_0028_0EA3();
}

/**
 * Decompiled function f__176C_2A56_0028_0EA3()
 *
 * @name f__176C_2A56_0028_0EA3
 * @implements 176C:2A56:0028:0EA3 ()
 *
 * Called From: 176C:2A56:0026:EF96
 */
void f__176C_2A56_0028_0EA3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { emu_ip = 0x29F6; emu_last_cs = 0x176C; emu_last_ip = 0x2A64; emu_last_length = 0x0028; emu_last_crc = 0x0EA3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { emu_ip = 0x2AA8; emu_last_cs = 0x176C; emu_last_ip = 0x2A6C; emu_last_length = 0x0028; emu_last_crc = 0x0EA3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs);
	emu_push(0x2A7E); f__176C_000E_000E_8C63();
	f__176C_2A7E_0012_3E39();
}

/**
 * Decompiled function f__176C_2A58_0026_7B23()
 *
 * @name f__176C_2A58_0026_7B23
 * @implements 176C:2A58:0026:7B23 ()
 *
 * Called From: 176C:29F4:0005:1F08
 */
void f__176C_2A58_0026_7B23()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__176C_29F6_003A_D34F(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { emu_ip = 0x2AA8; emu_last_cs = 0x176C; emu_last_ip = 0x2A6C; emu_last_length = 0x0026; emu_last_crc = 0x7B23; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs);
	emu_push(0x2A7E); emu_ip = 0x000E; emu_last_cs = 0x176C; emu_last_ip = 0x2A7B; emu_last_length = 0x0026; emu_last_crc = 0x7B23; emu_call(); // Jump does not resolve
	f__176C_2A7E_0012_3E39();
}

/**
 * Decompiled function f__176C_2A7E_0012_3E39()
 *
 * @name f__176C_2A7E_0012_3E39
 * @implements 176C:2A7E:0012:3E39 ()
 *
 * Called From: 176C:2A7E:0028:0EA3
 */
void f__176C_2A7E_0012_3E39()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x2A90); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__176C_2A90_0010_2902();
}

/**
 * Decompiled function f__176C_2A90_0010_2902()
 *
 * @name f__176C_2A90_0010_2902
 * @implements 176C:2A90:0010:2902 ()
 *
 * Called From: 176C:2A90:0012:3E39
 */
void f__176C_2A90_0010_2902()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_cs); emu_push(0x2AA0); emu_cs = 0x1A34; f__1A34_1B68_0019_2EA6();
	f__176C_2AA0_0008_F434();
}

/**
 * Decompiled function f__176C_2AA0_0008_F434()
 *
 * @name f__176C_2AA0_0008_F434
 * @implements 176C:2AA0:0008:F434 ()
 *
 * Called From: 176C:2AA0:0010:2902
 */
void f__176C_2AA0_0008_F434()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__176C_2AAC_0006_137A(); return;
}

/**
 * Decompiled function f__176C_2AAC_0006_137A()
 *
 * @name f__176C_2AAC_0006_137A
 * @implements 176C:2AAC:0006:137A ()
 *
 * Called From: 176C:2AA6:0008:F434
 */
void f__176C_2AAC_0006_137A()
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
 * Decompiled function f__176C_2BD5_0014_938A()
 *
 * @name f__176C_2BD5_0014_938A
 * @implements 176C:2BD5:0014:938A ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__176C_2BD5_0014_938A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x2BE9); emu_cs = 0x0C10; f__0C10_0168_0014_CCE7();
	f__176C_2BE9_000A_2F85();
}

/**
 * Decompiled function f__176C_2BE9_000A_2F85()
 *
 * @name f__176C_2BE9_000A_2F85
 * @implements 176C:2BE9:000A:2F85 ()
 *
 * Called From: 176C:2BE9:0014:938A
 */
void f__176C_2BE9_000A_2F85()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2BF3); emu_cs = 0x167E; f__167E_02D8_000C_AB88();
	f__176C_2BF3_001F_41C3();
}

/**
 * Decompiled function f__176C_2BF3_001F_41C3()
 *
 * @name f__176C_2BF3_001F_41C3
 * @implements 176C:2BF3:001F:41C3 ()
 *
 * Called From: 176C:2BF3:000A:2F85
 */
void f__176C_2BF3_001F_41C3()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__176C_2C5D_000D_1E6F(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x2C12); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__176C_2C12_0022_D470();
}

/**
 * Decompiled function f__176C_2C12_0022_D470()
 *
 * @name f__176C_2C12_0022_D470
 * @implements 176C:2C12:0022:D470 ()
 *
 * Called From: 176C:2C12:001F:41C3
 */
void f__176C_2C12_0022_D470()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x26));
	if (!emu_flags.zf) { emu_ip = 0x2C2E; emu_last_cs = 0x176C; emu_last_ip = 0x2C1B; emu_last_length = 0x0022; emu_last_crc = 0xD470; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x6268));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	if (emu_flags.zf) { f__176C_2C56_0005_154E(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2C34); emu_cs = 0x167E; emu_ip = 0x2CBC; emu_last_cs = 0x176C; emu_last_ip = 0x2C2F; emu_last_length = 0x0022; emu_last_crc = 0xD470; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__176C_2C52_0004_06AC()
 *
 * @name f__176C_2C52_0004_06AC
 * @implements 176C:2C52:0004:06AC ()
 *
 * Called From: 176C:2C6C:0004:053C
 */
void f__176C_2C52_0004_06AC()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__176C_2C6E_0005_04BA(); return;
}

/**
 * Decompiled function f__176C_2C54_0002_039C()
 *
 * @name f__176C_2C54_0002_039C
 * @implements 176C:2C54:0002:039C ()
 *
 * Called From: 176C:2C59:0005:154E
 */
void f__176C_2C54_0002_039C()
{
	f__176C_2C6E_0005_04BA(); return;
}

/**
 * Decompiled function f__176C_2C56_0005_154E()
 *
 * @name f__176C_2C56_0005_154E
 * @implements 176C:2C56:0005:154E ()
 *
 * Called From: 176C:2C2C:0022:D470
 */
void f__176C_2C56_0005_154E()
{
	emu_movw(&emu_ax.x, 0x1);
	f__176C_2C54_0002_039C(); return;
}

/**
 * Decompiled function f__176C_2C5D_000D_1E6F()
 *
 * @name f__176C_2C5D_000D_1E6F
 * @implements 176C:2C5D:000D:1E6F ()
 *
 * Called From: 176C:2C00:001F:41C3
 */
void f__176C_2C5D_000D_1E6F()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x2C6A); emu_cs = 0x0C10; f__0C10_0182_0012_8DA5();
	f__176C_2C6A_0004_053C();
}

/**
 * Decompiled function f__176C_2C6A_0004_053C()
 *
 * @name f__176C_2C6A_0004_053C
 * @implements 176C:2C6A:0004:053C ()
 *
 * Called From: 176C:2C6A:000D:1E6F
 */
void f__176C_2C6A_0004_053C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__176C_2C52_0004_06AC(); return;
}

/**
 * Decompiled function f__176C_2C6E_0005_04BA()
 *
 * @name f__176C_2C6E_0005_04BA
 * @implements 176C:2C6E:0005:04BA ()
 *
 * Called From: 176C:2C54:0002:039C
 * Called From: 176C:2C54:0004:06AC
 */
void f__176C_2C6E_0005_04BA()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
