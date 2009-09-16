/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__22A6_0004_0003_05A8()
 *
 * @name f__22A6_0004_0003_05A8
 * @implements 22A6:0004:0003:05A8 ()
 *
 * Called From: 22A3:0018:0010:0CEE
 */
void f__22A6_0004_0003_05A8()
{
	f__22A6_0EC6_0014_D306(); return;
}

/**
 * Decompiled function f__22A6_034F_000C_6447()
 *
 * @name f__22A6_034F_000C_6447
 * @implements 22A6:034F:000C:6447 ()
 *
 * Called From: 0AEC:0C61:0032:8DAE
 * Called From: 0AEC:0E22:0032:8DAE
 * Called From: 0AEC:0FBC:0032:8C2F
 * Called From: B495:0D24:002B:AA4F
 * Called From: B495:0F6B:0038:C532
 * Called From: B495:11DA:0029:F106
 * Called From: B495:1210:0029:A106
 * Called From: B503:069C:0039:68DC
 * Called From: B503:06CD:0031:00AA
 * Called From: B503:07D2:0037:0CE6
 * Called From: B503:0948:002D:4FDE
 * Called From: B503:0A1F:0025:AC0C
 * Called From: B503:0A4F:0028:0F0C
 * Called From: B503:0B33:000E:57B0
 * Called From: B503:0B33:000B:579C
 * Called From: B518:0438:0024:F53C
 * Called From: B518:04C7:0024:F554
 * Called From: B518:0C53:002A:2A31
 */
void f__22A6_034F_000C_6447()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x0);
	f__22A6_0367_005C_F908(); return;
}

/**
 * Decompiled function f__22A6_0367_005C_F908()
 *
 * @name f__22A6_0367_005C_F908
 * @implements 22A6:0367:005C:F908 ()
 *
 * Called From: 22A6:0359:000C:6447
 */
void f__22A6_0367_005C_F908()
{
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_cld();
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0385; emu_last_length = 0x005C; emu_last_crc = 0xF908; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { f__22A6_0391_0032_E225(); return; }
	emu_addw(&emu_di, emu_ax.x);
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0395; emu_last_length = 0x005C; emu_last_crc = 0xF908; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.sf) { emu_ip = 0x03A1; emu_last_cs = 0x22A6; emu_last_ip = 0x0399; emu_last_length = 0x005C; emu_last_crc = 0xF908; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_si, emu_bx.x);
	emu_addw(&emu_dx.x, emu_bx.x);
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_cmpw(&emu_di, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03A5; emu_last_length = 0x005C; emu_last_crc = 0xF908; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.sf) { emu_ip = 0x03B1; emu_last_cs = 0x22A6; emu_last_ip = 0x03A9; emu_last_length = 0x005C; emu_last_crc = 0xF908; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_ax.x, emu_di);
	emu_addw(&emu_cx.x, emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_cmpw(&emu_si, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03B5; emu_last_length = 0x005C; emu_last_crc = 0xF908; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.sf) { emu_ip = 0x03C1; emu_last_cs = 0x22A6; emu_last_ip = 0x03B9; emu_last_length = 0x005C; emu_last_crc = 0xF908; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_bx.x, emu_si);
	emu_addw(&emu_dx.x, emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x03C6; emu_last_cs = 0x22A6; emu_last_ip = 0x03C1; emu_last_length = 0x005C; emu_last_crc = 0xF908; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_0391_0032_E225()
 *
 * @name f__22A6_0391_0032_E225
 * @implements 22A6:0391:0032:E225 ()
 *
 * Called From: 22A6:0389:005C:F908
 */
void f__22A6_0391_0032_E225()
{
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0395; emu_last_length = 0x0032; emu_last_crc = 0xE225; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.sf) { f__22A6_03A1_0022_C4CA(); return; }
	emu_addw(&emu_si, emu_bx.x);
	emu_addw(&emu_dx.x, emu_bx.x);
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_cmpw(&emu_di, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03A5; emu_last_length = 0x0032; emu_last_crc = 0xE225; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.sf) { emu_ip = 0x03B1; emu_last_cs = 0x22A6; emu_last_ip = 0x03A9; emu_last_length = 0x0032; emu_last_crc = 0xE225; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_ax.x, emu_di);
	emu_addw(&emu_cx.x, emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_cmpw(&emu_si, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03B5; emu_last_length = 0x0032; emu_last_crc = 0xE225; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.sf) { emu_ip = 0x03C1; emu_last_cs = 0x22A6; emu_last_ip = 0x03B9; emu_last_length = 0x0032; emu_last_crc = 0xE225; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_bx.x, emu_si);
	emu_addw(&emu_dx.x, emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x03C6; emu_last_cs = 0x22A6; emu_last_ip = 0x03C1; emu_last_length = 0x0032; emu_last_crc = 0xE225; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_03A1_0022_C4CA()
 *
 * @name f__22A6_03A1_0022_C4CA
 * @implements 22A6:03A1:0022:C4CA ()
 *
 * Called From: 22A6:0399:0032:E225
 */
void f__22A6_03A1_0022_C4CA()
{
	emu_cmpw(&emu_di, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03A5; emu_last_length = 0x0022; emu_last_crc = 0xC4CA; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.sf) { f__22A6_03B1_0012_5A02(); return; }
	emu_addw(&emu_ax.x, emu_di);
	emu_addw(&emu_cx.x, emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_cmpw(&emu_si, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03B5; emu_last_length = 0x0022; emu_last_crc = 0xC4CA; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.sf) { emu_ip = 0x03C1; emu_last_cs = 0x22A6; emu_last_ip = 0x03B9; emu_last_length = 0x0022; emu_last_crc = 0xC4CA; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_bx.x, emu_si);
	emu_addw(&emu_dx.x, emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x03C6; emu_last_cs = 0x22A6; emu_last_ip = 0x03C1; emu_last_length = 0x0022; emu_last_crc = 0xC4CA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_03B1_0012_5A02()
 *
 * @name f__22A6_03B1_0012_5A02
 * @implements 22A6:03B1:0012:5A02 ()
 *
 * Called From: 22A6:03A9:0022:C4CA
 */
void f__22A6_03B1_0012_5A02()
{
	emu_cmpw(&emu_si, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03B5; emu_last_length = 0x0012; emu_last_crc = 0x5A02; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.sf) { f__22A6_03C1_0002_03AA(); return; }
	emu_addw(&emu_bx.x, emu_si);
	emu_addw(&emu_dx.x, emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x03C6; emu_last_cs = 0x22A6; emu_last_ip = 0x03C1; emu_last_length = 0x0012; emu_last_crc = 0x5A02; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_03C1_0002_03AA()
 *
 * @name f__22A6_03C1_0002_03AA
 * @implements 22A6:03C1:0002:03AA ()
 *
 * Called From: 22A6:03B9:0012:5A02
 */
void f__22A6_03C1_0002_03AA()
{
	f__22A6_03C6_0099_1B80(); return;
}

/**
 * Decompiled function f__22A6_03C6_0099_1B80()
 *
 * @name f__22A6_03C6_0099_1B80
 * @implements 22A6:03C6:0099:1B80 ()
 *
 * Called From: 22A6:03C1:0002:03AA
 */
void f__22A6_03C6_0099_1B80()
{
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, 0x140);
	emu_subw(&emu_bx.x, emu_ax.x);
	emu_subw(&emu_bx.x, emu_cx.x);
	if (!emu_flags.sf) { f__22A6_03D2_008D_6CDF(); return; }
	emu_addw(&emu_cx.x, emu_bx.x);
	emu_pop(&emu_bx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_subw(&emu_ax.x, emu_bx.x);
	emu_subw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.sf) { f__22A6_03DF_0080_B2FB(); return; }
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_subw(&emu_ax.x, emu_di);
	emu_subw(&emu_ax.x, emu_cx.x);
	if (!emu_flags.sf) { emu_ip = 0x03EC; emu_last_cs = 0x22A6; emu_last_ip = 0x03E8; emu_last_length = 0x0099; emu_last_crc = 0x1B80; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_subw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.sf) { emu_ip = 0x03F9; emu_last_cs = 0x22A6; emu_last_ip = 0x03F5; emu_last_length = 0x0099; emu_last_crc = 0x1B80; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03FC; emu_last_length = 0x0099; emu_last_crc = 0x1B80; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0401; emu_last_length = 0x0099; emu_last_crc = 0x1B80; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_di, emu_di);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0405; emu_last_length = 0x0099; emu_last_crc = 0x1B80; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_di, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040B; emu_last_length = 0x0099; emu_last_crc = 0x1B80; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040F; emu_last_length = 0x0099; emu_last_crc = 0x1B80; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0415; emu_last_length = 0x0099; emu_last_crc = 0x1B80; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0419; emu_last_length = 0x0099; emu_last_crc = 0x1B80; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x041F; emu_last_length = 0x0099; emu_last_crc = 0x1B80; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0423; emu_last_length = 0x0099; emu_last_crc = 0x1B80; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0x140);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0429; emu_last_length = 0x0099; emu_last_crc = 0x1B80; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x042D; emu_last_length = 0x0099; emu_last_crc = 0x1B80; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0433; emu_last_length = 0x0099; emu_last_crc = 0x1B80; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_bx.x, emu_di);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_cx.x);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_addw(&emu_cx.x, 0x140);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(0x045F); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x045C; emu_last_length = 0x0099; emu_last_crc = 0x1B80; emu_call(); // Jump does not resolve
	f__22A6_045F_0008_CCFE();
}

/**
 * Decompiled function f__22A6_03D2_008D_6CDF()
 *
 * @name f__22A6_03D2_008D_6CDF
 * @implements 22A6:03D2:008D:6CDF ()
 *
 * Called From: 22A6:03CE:0099:1B80
 */
void f__22A6_03D2_008D_6CDF()
{
	emu_pop(&emu_bx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_subw(&emu_ax.x, emu_bx.x);
	emu_subw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.sf) { f__22A6_03DF_0080_B2FB(); return; }
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_subw(&emu_ax.x, emu_di);
	emu_subw(&emu_ax.x, emu_cx.x);
	if (!emu_flags.sf) { emu_ip = 0x03EC; emu_last_cs = 0x22A6; emu_last_ip = 0x03E8; emu_last_length = 0x008D; emu_last_crc = 0x6CDF; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_subw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.sf) { emu_ip = 0x03F9; emu_last_cs = 0x22A6; emu_last_ip = 0x03F5; emu_last_length = 0x008D; emu_last_crc = 0x6CDF; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03FC; emu_last_length = 0x008D; emu_last_crc = 0x6CDF; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0401; emu_last_length = 0x008D; emu_last_crc = 0x6CDF; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_di, emu_di);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0405; emu_last_length = 0x008D; emu_last_crc = 0x6CDF; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_di, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040B; emu_last_length = 0x008D; emu_last_crc = 0x6CDF; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040F; emu_last_length = 0x008D; emu_last_crc = 0x6CDF; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0415; emu_last_length = 0x008D; emu_last_crc = 0x6CDF; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0419; emu_last_length = 0x008D; emu_last_crc = 0x6CDF; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x041F; emu_last_length = 0x008D; emu_last_crc = 0x6CDF; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0423; emu_last_length = 0x008D; emu_last_crc = 0x6CDF; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0x140);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0429; emu_last_length = 0x008D; emu_last_crc = 0x6CDF; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x042D; emu_last_length = 0x008D; emu_last_crc = 0x6CDF; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0433; emu_last_length = 0x008D; emu_last_crc = 0x6CDF; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_bx.x, emu_di);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_cx.x);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_addw(&emu_cx.x, 0x140);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(0x045F); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x045C; emu_last_length = 0x008D; emu_last_crc = 0x6CDF; emu_call(); // Jump does not resolve
	f__22A6_045F_0008_CCFE();
}

/**
 * Decompiled function f__22A6_03DF_0080_B2FB()
 *
 * @name f__22A6_03DF_0080_B2FB
 * @implements 22A6:03DF:0080:B2FB ()
 *
 * Called From: 22A6:03DB:008D:6CDF
 * Called From: 22A6:03DB:0099:1B80
 */
void f__22A6_03DF_0080_B2FB()
{
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_subw(&emu_ax.x, emu_di);
	emu_subw(&emu_ax.x, emu_cx.x);
	if (!emu_flags.sf) { f__22A6_03EC_0073_414F(); return; }
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_subw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.sf) { emu_ip = 0x03F9; emu_last_cs = 0x22A6; emu_last_ip = 0x03F5; emu_last_length = 0x0080; emu_last_crc = 0xB2FB; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03FC; emu_last_length = 0x0080; emu_last_crc = 0xB2FB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0401; emu_last_length = 0x0080; emu_last_crc = 0xB2FB; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_di, emu_di);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0405; emu_last_length = 0x0080; emu_last_crc = 0xB2FB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_di, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040B; emu_last_length = 0x0080; emu_last_crc = 0xB2FB; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040F; emu_last_length = 0x0080; emu_last_crc = 0xB2FB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0415; emu_last_length = 0x0080; emu_last_crc = 0xB2FB; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0419; emu_last_length = 0x0080; emu_last_crc = 0xB2FB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x041F; emu_last_length = 0x0080; emu_last_crc = 0xB2FB; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0423; emu_last_length = 0x0080; emu_last_crc = 0xB2FB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0x140);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0429; emu_last_length = 0x0080; emu_last_crc = 0xB2FB; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x042D; emu_last_length = 0x0080; emu_last_crc = 0xB2FB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0433; emu_last_length = 0x0080; emu_last_crc = 0xB2FB; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_bx.x, emu_di);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_cx.x);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_addw(&emu_cx.x, 0x140);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(0x045F); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x045C; emu_last_length = 0x0080; emu_last_crc = 0xB2FB; emu_call(); // Jump does not resolve
	f__22A6_045F_0008_CCFE();
}

/**
 * Decompiled function f__22A6_03EC_0073_414F()
 *
 * @name f__22A6_03EC_0073_414F
 * @implements 22A6:03EC:0073:414F ()
 *
 * Called From: 22A6:03E8:0080:B2FB
 */
void f__22A6_03EC_0073_414F()
{
	emu_pop(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_subw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.sf) { f__22A6_03F9_0066_6860(); return; }
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03FC; emu_last_length = 0x0073; emu_last_crc = 0x414F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0401; emu_last_length = 0x0073; emu_last_crc = 0x414F; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_di, emu_di);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0405; emu_last_length = 0x0073; emu_last_crc = 0x414F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_di, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040B; emu_last_length = 0x0073; emu_last_crc = 0x414F; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040F; emu_last_length = 0x0073; emu_last_crc = 0x414F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0415; emu_last_length = 0x0073; emu_last_crc = 0x414F; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0419; emu_last_length = 0x0073; emu_last_crc = 0x414F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x041F; emu_last_length = 0x0073; emu_last_crc = 0x414F; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0423; emu_last_length = 0x0073; emu_last_crc = 0x414F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0x140);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0429; emu_last_length = 0x0073; emu_last_crc = 0x414F; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x042D; emu_last_length = 0x0073; emu_last_crc = 0x414F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0433; emu_last_length = 0x0073; emu_last_crc = 0x414F; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_bx.x, emu_di);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_cx.x);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_addw(&emu_cx.x, 0x140);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(0x045F); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x045C; emu_last_length = 0x0073; emu_last_crc = 0x414F; emu_call(); // Jump does not resolve
	f__22A6_045F_0008_CCFE();
}

/**
 * Decompiled function f__22A6_03F9_0066_6860()
 *
 * @name f__22A6_03F9_0066_6860
 * @implements 22A6:03F9:0066:6860 ()
 *
 * Called From: 22A6:03F5:0073:414F
 */
void f__22A6_03F9_0066_6860()
{
	emu_pop(&emu_ax.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x03FC; emu_last_length = 0x0066; emu_last_crc = 0x6860; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0401; emu_last_length = 0x0066; emu_last_crc = 0x6860; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_di, emu_di);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0405; emu_last_length = 0x0066; emu_last_crc = 0x6860; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_di, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040B; emu_last_length = 0x0066; emu_last_crc = 0x6860; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x040F; emu_last_length = 0x0066; emu_last_crc = 0x6860; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0415; emu_last_length = 0x0066; emu_last_crc = 0x6860; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_si, emu_si);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0419; emu_last_length = 0x0066; emu_last_crc = 0x6860; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_si, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x041F; emu_last_length = 0x0066; emu_last_crc = 0x6860; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0423; emu_last_length = 0x0066; emu_last_crc = 0x6860; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0x140);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0429; emu_last_length = 0x0066; emu_last_crc = 0x6860; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.sf) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x042D; emu_last_length = 0x0066; emu_last_crc = 0x6860; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x03C3; emu_last_cs = 0x22A6; emu_last_ip = 0x0433; emu_last_length = 0x0066; emu_last_crc = 0x6860; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_bx.x, emu_di);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_cx.x);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_addw(&emu_cx.x, 0x140);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(0x045F); f__22A6_0E22_0012_B4BE();
	f__22A6_045F_0008_CCFE();
}

/**
 * Decompiled function f__22A6_045F_0008_CCFE()
 *
 * @name f__22A6_045F_0008_CCFE
 * @implements 22A6:045F:0008:CCFE ()
 *
 * Called From: 22A6:045F:0066:6860
 */
void f__22A6_045F_0008_CCFE()
{
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(0x0467); f__22A6_0E22_0012_B4BE();
	f__22A6_0467_001B_05B2();
}

/**
 * Decompiled function f__22A6_0467_001B_05B2()
 *
 * @name f__22A6_0467_001B_05B2
 * @implements 22A6:0467:001B:05B2 ()
 *
 * Called From: 22A6:0467:0008:CCFE
 */
void f__22A6_0467_001B_05B2()
{
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x1);
	if (emu_flags.zf) { emu_ip = 0x0482; emu_last_cs = 0x22A6; emu_last_ip = 0x0473; emu_last_length = 0x001B; emu_last_crc = 0x05B2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_rep_movsb(emu_ds);
	emu_addw(&emu_di, emu_bx.x);
	emu_addw(&emu_si, emu_bx.x);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_0475_000D_2262(); return; }
	emu_ip = 0x0499; emu_last_cs = 0x22A6; emu_last_ip = 0x0480; emu_last_length = 0x001B; emu_last_crc = 0x05B2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_0475_000D_2262()
 *
 * @name f__22A6_0475_000D_2262
 * @implements 22A6:0475:000D:2262 ()
 *
 * Called From: 22A6:047E:001B:05B2
 * Called From: 22A6:047E:000D:2262
 */
void f__22A6_0475_000D_2262()
{
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_rep_movsb(emu_ds);
	emu_addw(&emu_di, emu_bx.x);
	emu_addw(&emu_si, emu_bx.x);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_0475_000D_2262(); return; }
	f__22A6_0499_000C_7E3F(); return;
}

/**
 * Decompiled function f__22A6_0499_000C_7E3F()
 *
 * @name f__22A6_0499_000C_7E3F
 * @implements 22A6:0499:000C:7E3F ()
 *
 * Called From: 22A6:0480:000D:2262
 */
void f__22A6_0499_000C_7E3F()
{
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_04A5_000F_9D38()
 *
 * @name f__22A6_04A5_000F_9D38
 * @implements 22A6:04A5:000F:9D38 ()
 *
 * Called From: B4DA:0063:001B:6339
 * Called From: B503:00EF:001B:A335
 * Called From: B503:02D1:001B:6339
 * Called From: B503:036F:001B:6339
 * Called From: B503:042B:001B:6339
 * Called From: B511:10E4:001B:6339
 */
void f__22A6_04A5_000F_9D38()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_cx.x);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(0x04B4); f__22A6_0E1A_0008_291A();
	f__22A6_04B4_0008_C34A();
}

/**
 * Decompiled function f__22A6_04B4_0008_C34A()
 *
 * @name f__22A6_04B4_0008_C34A
 * @implements 22A6:04B4:0008:C34A ()
 *
 * Called From: 22A6:04B4:000F:9D38
 */
void f__22A6_04B4_0008_C34A()
{
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(0x04BC); f__22A6_0E22_0012_B4BE();
	f__22A6_04BC_0021_197C();
}

/**
 * Decompiled function f__22A6_04BC_0021_197C()
 *
 * @name f__22A6_04BC_0021_197C
 * @implements 22A6:04BC:0021:197C ()
 *
 * Called From: 22A6:04BC:0008:C34A
 */
void f__22A6_04BC_0021_197C()
{
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { emu_ip = 0x04D5; emu_last_cs = 0x22A6; emu_last_ip = 0x04BE; emu_last_length = 0x0021; emu_last_crc = 0x197C; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x04D5; emu_last_cs = 0x22A6; emu_last_ip = 0x04C2; emu_last_length = 0x0021; emu_last_crc = 0x197C; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, emu_ax.x);
	if (emu_flags.zf) { f__22A6_04D5_0008_4F52(); return; }
	emu_movw(&emu_ds, emu_cx.x);
	emu_movw(&emu_es, emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_cx.x, 0x7D00);
	emu_rep_movsw(emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_04D5_0008_4F52()
 *
 * @name f__22A6_04D5_0008_4F52
 * @implements 22A6:04D5:0008:4F52 ()
 *
 * Called From: 22A6:04C6:0021:197C
 */
void f__22A6_04D5_0008_4F52()
{
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_04F8_007A_D667()
 *
 * @name f__22A6_04F8_007A_D667
 * @implements 22A6:04F8:007A:D667 ()
 *
 * Called From: 10E4:052E:002E:A169
 * Called From: 2B6C:004F:0045:8F26
 * Called From: B4F2:0F59:001D:1EC1
 * Called From: B53B:0233:0029:FF41
 */
void f__22A6_04F8_007A_D667()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_cld();
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_di, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0517_005B_D08A(); return; }
	emu_xorw(&emu_di, emu_di);
	emu_cmpws(&emu_di, 0x28);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x051F; emu_last_cs = 0x22A6; emu_last_ip = 0x051A; emu_last_length = 0x007A; emu_last_crc = 0xD667; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_di, 0x27);
	emu_shlw(&emu_di, 0x1);
	emu_shlw(&emu_di, 0x1);
	emu_shlw(&emu_di, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x052F; emu_last_cs = 0x22A6; emu_last_ip = 0x052B; emu_last_length = 0x007A; emu_last_crc = 0xD667; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0538; emu_last_cs = 0x22A6; emu_last_ip = 0x0533; emu_last_length = 0x007A; emu_last_crc = 0xD667; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_bx.x, 0x28);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0546; emu_last_cs = 0x22A6; emu_last_ip = 0x0541; emu_last_length = 0x007A; emu_last_crc = 0xD667; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, 0x28);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0548; emu_last_length = 0x007A; emu_last_crc = 0xD667; emu_call(); return; } // Jump does not resolve
	if (emu_flags.sf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x054A; emu_last_length = 0x007A; emu_last_crc = 0xD667; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0555; emu_last_cs = 0x22A6; emu_last_ip = 0x0550; emu_last_length = 0x007A; emu_last_crc = 0xD667; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, 0xC8);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0557; emu_last_length = 0x007A; emu_last_crc = 0xD667; emu_call(); return; } // Jump does not resolve
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(0x0572); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x056F; emu_last_length = 0x007A; emu_last_crc = 0xD667; emu_call(); // Jump does not resolve
	f__22A6_0572_0024_2FCB();
}

/**
 * Decompiled function f__22A6_0517_005B_D08A()
 *
 * @name f__22A6_0517_005B_D08A
 * @implements 22A6:0517:005B:D08A ()
 *
 * Called From: 22A6:0513:007A:D667
 */
void f__22A6_0517_005B_D08A()
{
	emu_cmpws(&emu_di, 0x28);
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_051F_0053_322D(); return; }
	emu_movw(&emu_di, 0x27);
	emu_shlw(&emu_di, 0x1);
	emu_shlw(&emu_di, 0x1);
	emu_shlw(&emu_di, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x052F; emu_last_cs = 0x22A6; emu_last_ip = 0x052B; emu_last_length = 0x005B; emu_last_crc = 0xD08A; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0538; emu_last_cs = 0x22A6; emu_last_ip = 0x0533; emu_last_length = 0x005B; emu_last_crc = 0xD08A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_bx.x, 0x28);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0546; emu_last_cs = 0x22A6; emu_last_ip = 0x0541; emu_last_length = 0x005B; emu_last_crc = 0xD08A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, 0x28);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0548; emu_last_length = 0x005B; emu_last_crc = 0xD08A; emu_call(); return; } // Jump does not resolve
	if (emu_flags.sf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x054A; emu_last_length = 0x005B; emu_last_crc = 0xD08A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0555; emu_last_cs = 0x22A6; emu_last_ip = 0x0550; emu_last_length = 0x005B; emu_last_crc = 0xD08A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, 0xC8);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0557; emu_last_length = 0x005B; emu_last_crc = 0xD08A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(0x0572); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x056F; emu_last_length = 0x005B; emu_last_crc = 0xD08A; emu_call(); // Jump does not resolve
	f__22A6_0572_0024_2FCB();
}

/**
 * Decompiled function f__22A6_051F_0053_322D()
 *
 * @name f__22A6_051F_0053_322D
 * @implements 22A6:051F:0053:322D ()
 *
 * Called From: 22A6:051A:005B:D08A
 */
void f__22A6_051F_0053_322D()
{
	emu_shlw(&emu_di, 0x1);
	emu_shlw(&emu_di, 0x1);
	emu_shlw(&emu_di, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_052F_0043_FB7A(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0538; emu_last_cs = 0x22A6; emu_last_ip = 0x0533; emu_last_length = 0x0053; emu_last_crc = 0x322D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_bx.x, 0x28);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0546; emu_last_cs = 0x22A6; emu_last_ip = 0x0541; emu_last_length = 0x0053; emu_last_crc = 0x322D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, 0x28);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0548; emu_last_length = 0x0053; emu_last_crc = 0x322D; emu_call(); return; } // Jump does not resolve
	if (emu_flags.sf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x054A; emu_last_length = 0x0053; emu_last_crc = 0x322D; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0555; emu_last_cs = 0x22A6; emu_last_ip = 0x0550; emu_last_length = 0x0053; emu_last_crc = 0x322D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, 0xC8);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0557; emu_last_length = 0x0053; emu_last_crc = 0x322D; emu_call(); return; } // Jump does not resolve
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(0x0572); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x056F; emu_last_length = 0x0053; emu_last_crc = 0x322D; emu_call(); // Jump does not resolve
	f__22A6_0572_0024_2FCB();
}

/**
 * Decompiled function f__22A6_052F_0043_FB7A()
 *
 * @name f__22A6_052F_0043_FB7A
 * @implements 22A6:052F:0043:FB7A ()
 *
 * Called From: 22A6:052B:0053:322D
 */
void f__22A6_052F_0043_FB7A()
{
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_0538_003A_0D2F(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_bx.x, 0x28);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0546; emu_last_cs = 0x22A6; emu_last_ip = 0x0541; emu_last_length = 0x0043; emu_last_crc = 0xFB7A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, 0x28);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0548; emu_last_length = 0x0043; emu_last_crc = 0xFB7A; emu_call(); return; } // Jump does not resolve
	if (emu_flags.sf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x054A; emu_last_length = 0x0043; emu_last_crc = 0xFB7A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0555; emu_last_cs = 0x22A6; emu_last_ip = 0x0550; emu_last_length = 0x0043; emu_last_crc = 0xFB7A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, 0xC8);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0557; emu_last_length = 0x0043; emu_last_crc = 0xFB7A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(0x0572); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x056F; emu_last_length = 0x0043; emu_last_crc = 0xFB7A; emu_call(); // Jump does not resolve
	f__22A6_0572_0024_2FCB();
}

/**
 * Decompiled function f__22A6_0538_003A_0D2F()
 *
 * @name f__22A6_0538_003A_0D2F
 * @implements 22A6:0538:003A:0D2F ()
 *
 * Called From: 22A6:0533:0043:FB7A
 */
void f__22A6_0538_003A_0D2F()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_bx.x, 0x28);
	if ((emu_flags.cf || emu_flags.zf)) { f__22A6_0546_002C_4F5D(); return; }
	emu_movw(&emu_bx.x, 0x28);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0548; emu_last_length = 0x003A; emu_last_crc = 0x0D2F; emu_call(); return; } // Jump does not resolve
	if (emu_flags.sf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x054A; emu_last_length = 0x003A; emu_last_crc = 0x0D2F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0555; emu_last_cs = 0x22A6; emu_last_ip = 0x0550; emu_last_length = 0x003A; emu_last_crc = 0x0D2F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, 0xC8);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0557; emu_last_length = 0x003A; emu_last_crc = 0x0D2F; emu_call(); return; } // Jump does not resolve
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(0x0572); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x056F; emu_last_length = 0x003A; emu_last_crc = 0x0D2F; emu_call(); // Jump does not resolve
	f__22A6_0572_0024_2FCB();
}

/**
 * Decompiled function f__22A6_0546_002C_4F5D()
 *
 * @name f__22A6_0546_002C_4F5D
 * @implements 22A6:0546:002C:4F5D ()
 *
 * Called From: 22A6:0541:003A:0D2F
 */
void f__22A6_0546_002C_4F5D()
{
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0548; emu_last_length = 0x002C; emu_last_crc = 0x4F5D; emu_call(); return; } // Jump does not resolve
	if (emu_flags.sf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x054A; emu_last_length = 0x002C; emu_last_crc = 0x4F5D; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.cf || emu_flags.zf)) { f__22A6_0555_001D_22B9(); return; }
	emu_movw(&emu_cx.x, 0xC8);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0557; emu_last_length = 0x002C; emu_last_crc = 0x4F5D; emu_call(); return; } // Jump does not resolve
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(0x0572); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x056F; emu_last_length = 0x002C; emu_last_crc = 0x4F5D; emu_call(); // Jump does not resolve
	f__22A6_0572_0024_2FCB();
}

/**
 * Decompiled function f__22A6_0555_001D_22B9()
 *
 * @name f__22A6_0555_001D_22B9
 * @implements 22A6:0555:001D:22B9 ()
 *
 * Called From: 22A6:0550:002C:4F5D
 */
void f__22A6_0555_001D_22B9()
{
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { emu_ip = 0x058A; emu_last_cs = 0x22A6; emu_last_ip = 0x0557; emu_last_length = 0x001D; emu_last_crc = 0x22B9; emu_call(); return; } // Jump does not resolve
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(0x0572); f__22A6_0E22_0012_B4BE();
	f__22A6_0572_0024_2FCB();
}

/**
 * Decompiled function f__22A6_0572_0024_2FCB()
 *
 * @name f__22A6_0572_0024_2FCB
 * @implements 22A6:0572:0024:2FCB ()
 *
 * Called From: 22A6:0572:001D:22B9
 */
void f__22A6_0572_0024_2FCB()
{
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_ax.x, 0xA0);
	emu_subw(&emu_ax.x, emu_bx.x);
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_cx.x, emu_bx.x);
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_di, emu_ax.x);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_0581_0015_E639(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0581_0015_E639()
 *
 * @name f__22A6_0581_0015_E639
 * @implements 22A6:0581:0015:E639 ()
 *
 * Called From: 22A6:0588:0015:E639
 * Called From: 22A6:0588:0024:2FCB
 */
void f__22A6_0581_0015_E639()
{
	emu_movw(&emu_cx.x, emu_bx.x);
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_di, emu_ax.x);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_0581_0015_E639(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0597_0019_4741()
 *
 * @name f__22A6_0597_0019_4741
 * @implements 22A6:0597:0019:4741 ()
 *
 * Called From: B4B8:18C0:002C:AA0C
 * Called From: B4B8:18E5:0025:9F63
 */
void f__22A6_0597_0019_4741()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_cld();
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_ds);
	emu_orw(&emu_ax.x, emu_si);
	if (!emu_flags.zf) { f__22A6_05B0_00F6_744D(); return; }
	emu_ip = 0x06C9; emu_last_cs = 0x22A6; emu_last_ip = 0x05AD; emu_last_length = 0x0019; emu_last_crc = 0x4741; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_05B0_00F6_744D()
 *
 * @name f__22A6_05B0_00F6_744D
 * @implements 22A6:05B0:00F6:744D ()
 *
 * Called From: 22A6:05AB:0019:4741
 */
void f__22A6_05B0_00F6_744D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6BE), emu_ax.l);
	emu_push(emu_si);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C5), emu_bx.l);
	emu_addw(&emu_si, emu_bx.x);
	emu_addw(&emu_si, emu_bx.x);
	emu_addw(&emu_si, emu_bx.x);
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C2), emu_ax.l);
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C3), emu_ax.l);
	emu_lodsb(emu_ds);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C4), emu_ax.l);
	emu_pop(&emu_si);
	emu_addws(&emu_si, 0x3);
	emu_push(emu_ds);
	emu_pop(&emu_es);
	emu_movw(&emu_di, emu_si);
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_movb(&emu_get_memory8(emu_cs, emu_bx.x,  0x12B3), 0x0);
	emu_incw(&emu_bx.x);
	emu_movb(&emu_dx.l, emu_get_memory8(emu_cs, 0x00,  0x6BE));
	emu_shrb(&emu_dx.l, 0x1);
	emu_lodsb(emu_ds);
	emu_movb(&emu_dx.h, emu_ax.l);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C2));
	emu_imulub(&emu_ax.l, emu_dx.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_subb(&emu_dx.h, emu_ax.h);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6BF), emu_dx.h);
	emu_lodsb(emu_ds);
	emu_movb(&emu_dx.h, emu_ax.l);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C3));
	emu_imulub(&emu_ax.l, emu_dx.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_subb(&emu_dx.h, emu_ax.h);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C0), emu_dx.h);
	emu_lodsb(emu_ds);
	emu_movb(&emu_dx.h, emu_ax.l);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C4));
	emu_imulub(&emu_ax.l, emu_dx.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_subb(&emu_dx.h, emu_ax.h);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C1), emu_dx.h);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addws(&emu_di, 0x3);
	emu_movb(&emu_bx.h, emu_get_memory8(emu_cs, 0x00,  0x6C5));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C6), emu_bx.h);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6C7), 0xFFFF);
	emu_movw(&emu_cx.x, 0xFF);
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_incb(&emu_bx.h);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6BF));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C0));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C1));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x6C7));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0692; emu_last_cs = 0x22A6; emu_last_ip = 0x067B; emu_last_length = 0x00F6; emu_last_crc = 0x744D; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_bx.h, emu_get_memory8(emu_cs, 0x00,  0x6C5));
	if (emu_flags.zf) { emu_ip = 0x0688; emu_last_cs = 0x22A6; emu_last_ip = 0x0682; emu_last_length = 0x00F6; emu_last_crc = 0x744D; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_bx.l, emu_bx.h);
	if (emu_flags.zf) { f__22A6_0692_0014_E445(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6C7), emu_dx.x);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C6), emu_bx.h);
	if (--emu_cx.x != 0) { emu_ip = 0x0645; emu_last_cs = 0x22A6; emu_last_ip = 0x0692; emu_last_length = 0x00F6; emu_last_crc = 0x744D; emu_call(); } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C6));
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_movb(&emu_get_memory8(emu_cs, emu_bx.x,  0x12B3), emu_ax.l);
	emu_incb(&emu_bx.l);
	if (emu_flags.zf) { emu_ip = 0x06A6; emu_last_cs = 0x22A6; emu_last_ip = 0x06A1; emu_last_length = 0x00F6; emu_last_crc = 0x744D; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x05E6; emu_last_cs = 0x22A6; emu_last_ip = 0x06A3; emu_last_length = 0x00F6; emu_last_crc = 0x744D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_05E6_00C0_8165()
 *
 * @name f__22A6_05E6_00C0_8165
 * @implements 22A6:05E6:00C0:8165 ()
 *
 * Called From: 22A6:06A3:0014:E445
 * Called From: 22A6:06A3:0061:9736
 */
void f__22A6_05E6_00C0_8165()
{
	emu_movb(&emu_dx.l, emu_get_memory8(emu_cs, 0x00,  0x6BE));
	emu_shrb(&emu_dx.l, 0x1);
	emu_lodsb(emu_ds);
	emu_movb(&emu_dx.h, emu_ax.l);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C2));
	emu_imulub(&emu_ax.l, emu_dx.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_subb(&emu_dx.h, emu_ax.h);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6BF), emu_dx.h);
	emu_lodsb(emu_ds);
	emu_movb(&emu_dx.h, emu_ax.l);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C3));
	emu_imulub(&emu_ax.l, emu_dx.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_subb(&emu_dx.h, emu_ax.h);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C0), emu_dx.h);
	emu_lodsb(emu_ds);
	emu_movb(&emu_dx.h, emu_ax.l);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C4));
	emu_imulub(&emu_ax.l, emu_dx.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_subb(&emu_dx.h, emu_ax.h);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C1), emu_dx.h);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addws(&emu_di, 0x3);
	emu_movb(&emu_bx.h, emu_get_memory8(emu_cs, 0x00,  0x6C5));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C6), emu_bx.h);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6C7), 0xFFFF);
	emu_movw(&emu_cx.x, 0xFF);
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_incb(&emu_bx.h);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6BF));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C0));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C1));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x6C7));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0692; emu_last_cs = 0x22A6; emu_last_ip = 0x067B; emu_last_length = 0x00C0; emu_last_crc = 0x8165; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_bx.h, emu_get_memory8(emu_cs, 0x00,  0x6C5));
	if (emu_flags.zf) { emu_ip = 0x0688; emu_last_cs = 0x22A6; emu_last_ip = 0x0682; emu_last_length = 0x00C0; emu_last_crc = 0x8165; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_bx.l, emu_bx.h);
	if (emu_flags.zf) { emu_ip = 0x0692; emu_last_cs = 0x22A6; emu_last_ip = 0x0686; emu_last_length = 0x00C0; emu_last_crc = 0x8165; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6C7), emu_dx.x);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C6), emu_bx.h);
	if (--emu_cx.x != 0) { f__22A6_0645_0061_9736(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C6));
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_movb(&emu_get_memory8(emu_cs, emu_bx.x,  0x12B3), emu_ax.l);
	emu_incb(&emu_bx.l);
	if (emu_flags.zf) { emu_ip = 0x06A6; emu_last_cs = 0x22A6; emu_last_ip = 0x06A1; emu_last_length = 0x00C0; emu_last_crc = 0x8165; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x05E6; emu_last_cs = 0x22A6; emu_last_ip = 0x06A3; emu_last_length = 0x00C0; emu_last_crc = 0x8165; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_0645_0061_9736()
 *
 * @name f__22A6_0645_0061_9736
 * @implements 22A6:0645:0061:9736 ()
 *
 * Called From: 22A6:0692:0014:E445
 * Called From: 22A6:0692:001E:FE18
 * Called From: 22A6:0692:0061:9736
 * Called From: 22A6:0692:00C0:8165
 */
void f__22A6_0645_0061_9736()
{
	emu_incb(&emu_bx.h);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6BF));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C0));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C1));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_imulub(&emu_ax.l, emu_ax.h);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x6C7));
	if (!(emu_flags.cf || emu_flags.zf)) { f__22A6_0692_0014_E445(); return; }
	emu_cmpb(&emu_bx.h, emu_get_memory8(emu_cs, 0x00,  0x6C5));
	if (emu_flags.zf) { f__22A6_0688_001E_FE18(); return; }
	emu_cmpb(&emu_bx.l, emu_bx.h);
	if (emu_flags.zf) { f__22A6_0692_0014_E445(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6C7), emu_dx.x);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C6), emu_bx.h);
	if (--emu_cx.x != 0) { f__22A6_0645_0061_9736(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C6));
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_movb(&emu_get_memory8(emu_cs, emu_bx.x,  0x12B3), emu_ax.l);
	emu_incb(&emu_bx.l);
	if (emu_flags.zf) { emu_ip = 0x06A6; emu_last_cs = 0x22A6; emu_last_ip = 0x06A1; emu_last_length = 0x0061; emu_last_crc = 0x9736; emu_call(); return; } // Jump does not resolve
	f__22A6_05E6_00C0_8165(); return;
}

/**
 * Decompiled function f__22A6_0688_001E_FE18()
 *
 * @name f__22A6_0688_001E_FE18
 * @implements 22A6:0688:001E:FE18 ()
 *
 * Called From: 22A6:0682:0061:9736
 */
void f__22A6_0688_001E_FE18()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6C7), emu_dx.x);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x6C6), emu_bx.h);
	if (--emu_cx.x != 0) { f__22A6_0645_0061_9736(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C6));
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_movb(&emu_get_memory8(emu_cs, emu_bx.x,  0x12B3), emu_ax.l);
	emu_incb(&emu_bx.l);
	if (emu_flags.zf) { emu_ip = 0x06A6; emu_last_cs = 0x22A6; emu_last_ip = 0x06A1; emu_last_length = 0x001E; emu_last_crc = 0xFE18; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x05E6; emu_last_cs = 0x22A6; emu_last_ip = 0x06A3; emu_last_length = 0x001E; emu_last_crc = 0xFE18; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_0692_0014_E445()
 *
 * @name f__22A6_0692_0014_E445
 * @implements 22A6:0692:0014:E445 ()
 *
 * Called From: 22A6:067B:0061:9736
 * Called From: 22A6:0686:0061:9736
 * Called From: 22A6:0686:00F6:744D
 */
void f__22A6_0692_0014_E445()
{
	if (--emu_cx.x != 0) { f__22A6_0645_0061_9736(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x6C6));
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_movb(&emu_get_memory8(emu_cs, emu_bx.x,  0x12B3), emu_ax.l);
	emu_incb(&emu_bx.l);
	if (emu_flags.zf) { f__22A6_06A6_0018_210E(); return; }
	f__22A6_05E6_00C0_8165(); return;
}

/**
 * Decompiled function f__22A6_06A6_0018_210E()
 *
 * @name f__22A6_06A6_0018_210E
 * @implements 22A6:06A6:0018:210E ()
 *
 * Called From: 22A6:06A1:0014:E445
 */
void f__22A6_06A6_0018_210E()
{
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_es, emu_ax.x);
	emu_orw(&emu_ax.x, emu_di);
	if (emu_flags.zf) { emu_ip = 0x06C9; emu_last_cs = 0x22A6; emu_last_ip = 0x06B0; emu_last_length = 0x0018; emu_last_crc = 0x210E; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs);
	emu_pop(&emu_ds);
	emu_movw(&emu_si, 0x12B3);
	emu_movw(&emu_cx.x, 0x80);
	emu_rep_movsw(emu_ds);
	f__22A6_06C9_000E_D3DA(); return;
}

/**
 * Decompiled function f__22A6_06C9_000E_D3DA()
 *
 * @name f__22A6_06C9_000E_D3DA
 * @implements 22A6:06C9:000E:D3DA ()
 *
 * Called From: 22A6:06BC:0018:210E
 */
void f__22A6_06C9_000E_D3DA()
{
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_ax.x, 0x12B3);
	emu_movw(&emu_dx.x, 0x22A6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_06D7_006B_47D9()
 *
 * @name f__22A6_06D7_006B_47D9
 * @implements 22A6:06D7:006B:47D9 ()
 *
 * Called From: 24D0:0098:001E:F83C
 */
void f__22A6_06D7_006B_47D9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_cld();
	emu_movb(&emu_cx.l, 0x3);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, 0x28);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0742; emu_last_cs = 0x22A6; emu_last_ip = 0x06EB; emu_last_length = 0x006B; emu_last_crc = 0x47D9; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { f__22A6_06F3_004F_8E4B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0742; emu_last_cs = 0x22A6; emu_last_ip = 0x06FD; emu_last_length = 0x006B; emu_last_crc = 0x47D9; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { emu_ip = 0x0705; emu_last_cs = 0x22A6; emu_last_ip = 0x0701; emu_last_length = 0x006B; emu_last_crc = 0x47D9; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, 0x140);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, 0x28);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x0719; emu_last_length = 0x006B; emu_last_crc = 0x47D9; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { emu_ip = 0x0721; emu_last_cs = 0x22A6; emu_last_ip = 0x071D; emu_last_length = 0x006B; emu_last_crc = 0x47D9; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_cmpw(&emu_ax.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x072D; emu_last_length = 0x006B; emu_last_crc = 0x47D9; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { emu_ip = 0x0735; emu_last_cs = 0x22A6; emu_last_ip = 0x0731; emu_last_length = 0x006B; emu_last_crc = 0x47D9; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_ip = 0x0744; emu_last_cs = 0x22A6; emu_last_ip = 0x0740; emu_last_length = 0x006B; emu_last_crc = 0x47D9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_06F3_004F_8E4B()
 *
 * @name f__22A6_06F3_004F_8E4B
 * @implements 22A6:06F3:004F:8E4B ()
 *
 * Called From: 22A6:06EF:006B:47D9
 */
void f__22A6_06F3_004F_8E4B()
{
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0742; emu_last_cs = 0x22A6; emu_last_ip = 0x06FD; emu_last_length = 0x004F; emu_last_crc = 0x8E4B; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { f__22A6_0705_003D_EF10(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, 0x140);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, 0x28);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x0719; emu_last_length = 0x004F; emu_last_crc = 0x8E4B; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { emu_ip = 0x0721; emu_last_cs = 0x22A6; emu_last_ip = 0x071D; emu_last_length = 0x004F; emu_last_crc = 0x8E4B; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_cmpw(&emu_ax.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x072D; emu_last_length = 0x004F; emu_last_crc = 0x8E4B; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { emu_ip = 0x0735; emu_last_cs = 0x22A6; emu_last_ip = 0x0731; emu_last_length = 0x004F; emu_last_crc = 0x8E4B; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_ip = 0x0744; emu_last_cs = 0x22A6; emu_last_ip = 0x0740; emu_last_length = 0x004F; emu_last_crc = 0x8E4B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_0705_003D_EF10()
 *
 * @name f__22A6_0705_003D_EF10
 * @implements 22A6:0705:003D:EF10 ()
 *
 * Called From: 22A6:0701:004F:8E4B
 */
void f__22A6_0705_003D_EF10()
{
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, 0x140);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, 0x28);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x0719; emu_last_length = 0x003D; emu_last_crc = 0xEF10; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { f__22A6_0721_0021_E67B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_cmpw(&emu_ax.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x072D; emu_last_length = 0x003D; emu_last_crc = 0xEF10; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { emu_ip = 0x0735; emu_last_cs = 0x22A6; emu_last_ip = 0x0731; emu_last_length = 0x003D; emu_last_crc = 0xEF10; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_ip = 0x0744; emu_last_cs = 0x22A6; emu_last_ip = 0x0740; emu_last_length = 0x003D; emu_last_crc = 0xEF10; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_0721_0021_E67B()
 *
 * @name f__22A6_0721_0021_E67B
 * @implements 22A6:0721:0021:E67B ()
 *
 * Called From: 22A6:071D:003D:EF10
 */
void f__22A6_0721_0021_E67B()
{
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_cmpw(&emu_ax.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x072D; emu_last_length = 0x0021; emu_last_crc = 0xE67B; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { f__22A6_0735_000D_6BA1(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_ip = 0x0744; emu_last_cs = 0x22A6; emu_last_ip = 0x0740; emu_last_length = 0x0021; emu_last_crc = 0xE67B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_0735_000D_6BA1()
 *
 * @name f__22A6_0735_000D_6BA1
 * @implements 22A6:0735:000D:6BA1 ()
 *
 * Called From: 22A6:0731:0021:E67B
 */
void f__22A6_0735_000D_6BA1()
{
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	f__22A6_0744_0006_2F0C(); return;
}

/**
 * Decompiled function f__22A6_0744_0006_2F0C()
 *
 * @name f__22A6_0744_0006_2F0C
 * @implements 22A6:0744:0006:2F0C ()
 *
 * Called From: 22A6:0740:000D:6BA1
 */
void f__22A6_0744_0006_2F0C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(0x074A); f__22A6_0E22_0012_B4BE();
	f__22A6_074A_0008_CD4C();
}

/**
 * Decompiled function f__22A6_074A_0008_CD4C()
 *
 * @name f__22A6_074A_0008_CD4C
 * @implements 22A6:074A:0008:CD4C ()
 *
 * Called From: 22A6:074A:0006:2F0C
 */
void f__22A6_074A_0008_CD4C()
{
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(0x0752); f__22A6_0E22_0012_B4BE();
	f__22A6_0752_0044_E867();
}

/**
 * Decompiled function f__22A6_0752_0044_E867()
 *
 * @name f__22A6_0752_0044_E867
 * @implements 22A6:0752:0044:E867 ()
 *
 * Called From: 22A6:0752:0008:CD4C
 */
void f__22A6_0752_0044_E867()
{
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cmpws(&emu_dx.x, 0x28);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x075A; emu_last_length = 0x0044; emu_last_crc = 0xE867; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_dx.x, 0x1);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x075F; emu_last_length = 0x0044; emu_last_crc = 0xE867; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.cf || emu_flags.zf)) { f__22A6_0776_0020_B4C5(); return; }
	emu_subw(&emu_cx.x, 0xC7);
	emu_subw(&emu_ax.x, emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.sf) { emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x0778; emu_last_length = 0x0044; emu_last_crc = 0xE867; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, 0xA0);
	emu_subw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_si, emu_bx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x0781; emu_last_cs = 0x22A6; emu_last_ip = 0x078A; emu_last_length = 0x0044; emu_last_crc = 0xE867; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0776_0020_B4C5()
 *
 * @name f__22A6_0776_0020_B4C5
 * @implements 22A6:0776:0020:B4C5 ()
 *
 * Called From: 22A6:076E:0044:E867
 */
void f__22A6_0776_0020_B4C5()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.sf) { emu_ip = 0x078C; emu_last_cs = 0x22A6; emu_last_ip = 0x0778; emu_last_length = 0x0020; emu_last_crc = 0xB4C5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, 0xA0);
	emu_subw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_si, emu_bx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_ax.x);
	if (!emu_flags.zf) { f__22A6_0781_0015_98FC(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0781_0015_98FC()
 *
 * @name f__22A6_0781_0015_98FC
 * @implements 22A6:0781:0015:98FC ()
 *
 * Called From: 22A6:078A:0015:98FC
 * Called From: 22A6:078A:0020:B4C5
 */
void f__22A6_0781_0015_98FC()
{
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_si, emu_bx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_ax.x);
	if (!emu_flags.zf) { f__22A6_0781_0015_98FC(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0796_000B_3851()
 *
 * @name f__22A6_0796_000B_3851
 * @implements 22A6:0796:000B:3851 ()
 *
 * Called From: 0642:0448:000B:1E0C
 * Called From: 24DA:001B:000E:260A
 * Called From: 25C4:02C8:000F:4675
 * Called From: B4BE:00B5:000C:8E09
 * Called From: B4BE:0256:000D:C612
 * Called From: B4ED:0074:0079:1F8D
 */
void f__22A6_0796_000B_3851()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_es);
	emu_cld();
	emu_push(0x07A1); f__22A6_0DF8_0022_BF09();
	f__22A6_07A1_0011_6EFD();
}

/**
 * Decompiled function f__22A6_07A1_0011_6EFD()
 *
 * @name f__22A6_07A1_0011_6EFD
 * @implements 22A6:07A1:0011:6EFD ()
 *
 * Called From: 22A6:07A1:000B:3851
 */
void f__22A6_07A1_0011_6EFD()
{
	emu_movw(&emu_es, emu_ax.x);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_cx.x, 0x7D00);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_rep_stosw();
	emu_pop(&emu_es);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_07B3_0037_78C1()
 *
 * @name f__22A6_07B3_0037_78C1
 * @implements 22A6:07B3:0037:78C1 ()
 *
 * Called From: 2BC2:00DA:0012:07DA
 */
void f__22A6_07B3_0037_78C1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_cs, 0x00,  0x80));
	emu_movw(&emu_ax.x, emu_es);
	emu_orw(&emu_ax.x, emu_si);
	if (emu_flags.zf) { emu_ip = 0x07E7; emu_last_cs = 0x22A6; emu_last_ip = 0x07C6; emu_last_length = 0x0037; emu_last_crc = 0x78C1; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_bx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x7C), emu_bx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x74));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_es, emu_bx.x + emu_si,  0x0));
	if (emu_cx.x == 0) { emu_ip = 0x07E7; emu_last_cs = 0x22A6; emu_last_ip = 0x07DC; emu_last_length = 0x0037; emu_last_crc = 0x78C1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_dx.x, 0x140);
	if (emu_flags.cf) { f__22A6_07EA_007A_041F(); return; }
	emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x07E7; emu_last_length = 0x0037; emu_last_crc = 0x78C1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_07EA_007A_041F()
 *
 * @name f__22A6_07EA_007A_041F
 * @implements 22A6:07EA:007A:041F ()
 *
 * Called From: 22A6:07E5:0037:78C1
 */
void f__22A6_07EA_007A_041F()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x7C));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x76));
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x + emu_si,  0x0));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x7E), emu_ax.x);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x07E7; emu_last_cs = 0x22A6; emu_last_ip = 0x0802; emu_last_length = 0x007A; emu_last_crc = 0x041F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_di, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!emu_flags.cf) { emu_ip = 0x07E7; emu_last_cs = 0x22A6; emu_last_ip = 0x080D; emu_last_length = 0x007A; emu_last_crc = 0x041F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x72));
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x + emu_si,  0x4));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x84), emu_ax.l);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_cmpw(&emu_ax.x, 0xC8);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x07E7; emu_last_cs = 0x22A6; emu_last_ip = 0x0823; emu_last_length = 0x007A; emu_last_crc = 0x041F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x7C));
	emu_shlw(&emu_bx.x, 0x1);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x7A));
	emu_movb(&emu_ax.h, emu_get_memory8(emu_es, emu_bx.x + emu_si,  0x0));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x85), emu_ax.h);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x + emu_si,  0x1));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x86), emu_ax.l);
	emu_addb(&emu_ax.h, emu_ax.l);
	emu_subb(&emu_get_memory8(emu_cs, 0x00,  0x84), emu_ax.h);
	emu_addw(&emu_si, emu_cx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, 0x140);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x70), emu_ax.x);
	emu_push(0x0864); f__22A6_0DF8_0022_BF09();
	f__22A6_0864_002C_F51D();
}

/**
 * Decompiled function f__22A6_0864_002C_F51D()
 *
 * @name f__22A6_0864_002C_F51D
 * @implements 22A6:0864:002C:F51D ()
 *
 * Called From: 22A6:0864:007A:041F
 */
void f__22A6_0864_002C_F51D()
{
	emu_movw(&emu_dx.x, emu_es);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ds, emu_dx.x);
	emu_movw(&emu_bx.x, 0x87);
	emu_xorb(&emu_cx.h, emu_cx.h);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x85));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { f__22A6_08A0_0062_F16E(); return; }
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { f__22A6_0890_0072_1D58(); return; }
	emu_movw(&emu_bx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_movw(&emu_bx.x, 0x87);
	f__22A6_08A0_0062_F16E(); return;
}

/**
 * Decompiled function f__22A6_0890_0072_1D58()
 *
 * @name f__22A6_0890_0072_1D58
 * @implements 22A6:0890:0072:1D58 ()
 *
 * Called From: 22A6:087E:002C:F51D
 * Called From: 22A6:089E:006D:1CDF
 */
void f__22A6_0890_0072_1D58()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_0895_006D_1CDF(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { emu_ip = 0x0890; emu_last_cs = 0x22A6; emu_last_ip = 0x089E; emu_last_length = 0x0072; emu_last_crc = 0x1D58; emu_call(); } // Jump does not resolve
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x86));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08A7; emu_last_length = 0x0072; emu_last_crc = 0x1D58; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_lodsb(emu_ds);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_andb(&emu_ax.l, 0xF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x08BC; emu_last_cs = 0x22A6; emu_last_ip = 0x08B7; emu_last_length = 0x0072; emu_last_crc = 0x1D58; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x08D1; emu_last_cs = 0x22A6; emu_last_ip = 0x08BE; emu_last_length = 0x0072; emu_last_crc = 0x1D58; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_andb(&emu_ax.l, 0xF0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x08CD; emu_last_cs = 0x22A6; emu_last_ip = 0x08C8; emu_last_length = 0x0072; emu_last_crc = 0x1D58; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x08AE; emu_last_cs = 0x22A6; emu_last_ip = 0x08CF; emu_last_length = 0x0072; emu_last_crc = 0x1D58; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { emu_ip = 0x08A9; emu_last_cs = 0x22A6; emu_last_ip = 0x08D6; emu_last_length = 0x0072; emu_last_crc = 0x1D58; emu_call(); } // Jump does not resolve
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x84));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08DF; emu_last_length = 0x0072; emu_last_crc = 0x1D58; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08E7; emu_last_length = 0x0072; emu_last_crc = 0x1D58; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x08EE; emu_last_cs = 0x22A6; emu_last_ip = 0x08F0; emu_last_length = 0x0072; emu_last_crc = 0x1D58; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { emu_ip = 0x08E9; emu_last_cs = 0x22A6; emu_last_ip = 0x08F7; emu_last_length = 0x0072; emu_last_crc = 0x1D58; emu_call(); } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0895_006D_1CDF()
 *
 * @name f__22A6_0895_006D_1CDF
 * @implements 22A6:0895:006D:1CDF ()
 *
 * Called From: 22A6:0897:0072:1D58
 * Called From: 22A6:0897:006D:1CDF
 */
void f__22A6_0895_006D_1CDF()
{
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_0895_006D_1CDF(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { f__22A6_0890_0072_1D58(); return; }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x86));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { f__22A6_08F9_0009_9D8A(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_lodsb(emu_ds);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_andb(&emu_ax.l, 0xF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08BC_0046_C4FB(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x08D1; emu_last_cs = 0x22A6; emu_last_ip = 0x08BE; emu_last_length = 0x006D; emu_last_crc = 0x1CDF; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_andb(&emu_ax.l, 0xF0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08CD_0035_AD19(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x08AE; emu_last_cs = 0x22A6; emu_last_ip = 0x08CF; emu_last_length = 0x006D; emu_last_crc = 0x1CDF; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { emu_ip = 0x08A9; emu_last_cs = 0x22A6; emu_last_ip = 0x08D6; emu_last_length = 0x006D; emu_last_crc = 0x1CDF; emu_call(); } // Jump does not resolve
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x84));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08DF; emu_last_length = 0x006D; emu_last_crc = 0x1CDF; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08E7; emu_last_length = 0x006D; emu_last_crc = 0x1CDF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x08EE; emu_last_cs = 0x22A6; emu_last_ip = 0x08F0; emu_last_length = 0x006D; emu_last_crc = 0x1CDF; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { emu_ip = 0x08E9; emu_last_cs = 0x22A6; emu_last_ip = 0x08F7; emu_last_length = 0x006D; emu_last_crc = 0x1CDF; emu_call(); } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_08A0_0062_F16E()
 *
 * @name f__22A6_08A0_0062_F16E
 * @implements 22A6:08A0:0062:F16E ()
 *
 * Called From: 22A6:0876:002C:F51D
 * Called From: 22A6:088E:002C:F51D
 */
void f__22A6_08A0_0062_F16E()
{
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x86));
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { f__22A6_08F9_0009_9D8A(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_lodsb(emu_ds);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_andb(&emu_ax.l, 0xF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08BC_0046_C4FB(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x08D1; emu_last_cs = 0x22A6; emu_last_ip = 0x08BE; emu_last_length = 0x0062; emu_last_crc = 0xF16E; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_andb(&emu_ax.l, 0xF0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08CD_0035_AD19(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08AE_0054_2300(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { emu_ip = 0x08A9; emu_last_cs = 0x22A6; emu_last_ip = 0x08D6; emu_last_length = 0x0062; emu_last_crc = 0xF16E; emu_call(); } // Jump does not resolve
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x84));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08DF; emu_last_length = 0x0062; emu_last_crc = 0xF16E; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08E7; emu_last_length = 0x0062; emu_last_crc = 0xF16E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x08EE; emu_last_cs = 0x22A6; emu_last_ip = 0x08F0; emu_last_length = 0x0062; emu_last_crc = 0xF16E; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { emu_ip = 0x08E9; emu_last_cs = 0x22A6; emu_last_ip = 0x08F7; emu_last_length = 0x0062; emu_last_crc = 0xF16E; emu_call(); } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_08A9_0059_E080()
 *
 * @name f__22A6_08A9_0059_E080
 * @implements 22A6:08A9:0059:E080 ()
 *
 * Called From: 22A6:08D6:0031:A185
 * Called From: 22A6:08D6:0035:AD19
 * Called From: 22A6:08D6:0046:C4FB
 * Called From: 22A6:08D6:0054:2300
 */
void f__22A6_08A9_0059_E080()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_lodsb(emu_ds);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_andb(&emu_ax.l, 0xF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08BC_0046_C4FB(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x08D1; emu_last_cs = 0x22A6; emu_last_ip = 0x08BE; emu_last_length = 0x0059; emu_last_crc = 0xE080; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_andb(&emu_ax.l, 0xF0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08CD_0035_AD19(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08AE_0054_2300(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { emu_ip = 0x08A9; emu_last_cs = 0x22A6; emu_last_ip = 0x08D6; emu_last_length = 0x0059; emu_last_crc = 0xE080; emu_call(); } // Jump does not resolve
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x84));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08DF; emu_last_length = 0x0059; emu_last_crc = 0xE080; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08E7; emu_last_length = 0x0059; emu_last_crc = 0xE080; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x08EE; emu_last_cs = 0x22A6; emu_last_ip = 0x08F0; emu_last_length = 0x0059; emu_last_crc = 0xE080; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { emu_ip = 0x08E9; emu_last_cs = 0x22A6; emu_last_ip = 0x08F7; emu_last_length = 0x0059; emu_last_crc = 0xE080; emu_call(); } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_08AE_0054_2300()
 *
 * @name f__22A6_08AE_0054_2300
 * @implements 22A6:08AE:0054:2300 ()
 *
 * Called From: 22A6:08CF:0035:AD19
 * Called From: 22A6:08CF:0046:C4FB
 * Called From: 22A6:08CF:0054:2300
 * Called From: 22A6:08CF:0059:E080
 * Called From: 22A6:08CF:0062:F16E
 */
void f__22A6_08AE_0054_2300()
{
	emu_lodsb(emu_ds);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_andb(&emu_ax.l, 0xF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08BC_0046_C4FB(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (emu_flags.zf) { f__22A6_08D1_0031_A185(); return; }
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_andb(&emu_ax.l, 0xF0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08CD_0035_AD19(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08AE_0054_2300(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { f__22A6_08A9_0059_E080(); return; }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x84));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_08F9_0009_9D8A(); return; }
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08E7; emu_last_length = 0x0054; emu_last_crc = 0x2300; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08EE_0014_457C(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { emu_ip = 0x08E9; emu_last_cs = 0x22A6; emu_last_ip = 0x08F7; emu_last_length = 0x0054; emu_last_crc = 0x2300; emu_call(); } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_08BC_0046_C4FB()
 *
 * @name f__22A6_08BC_0046_C4FB
 * @implements 22A6:08BC:0046:C4FB ()
 *
 * Called From: 22A6:08B7:0054:2300
 * Called From: 22A6:08B7:0059:E080
 * Called From: 22A6:08B7:0062:F16E
 * Called From: 22A6:08B7:006D:1CDF
 */
void f__22A6_08BC_0046_C4FB()
{
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (emu_flags.zf) { f__22A6_08D1_0031_A185(); return; }
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_andb(&emu_ax.l, 0xF0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08CD_0035_AD19(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08AE_0054_2300(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { f__22A6_08A9_0059_E080(); return; }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x84));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x08F9; emu_last_cs = 0x22A6; emu_last_ip = 0x08DF; emu_last_length = 0x0046; emu_last_crc = 0xC4FB; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08F9_0009_9D8A(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08EE_0014_457C(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { emu_ip = 0x08E9; emu_last_cs = 0x22A6; emu_last_ip = 0x08F7; emu_last_length = 0x0046; emu_last_crc = 0xC4FB; emu_call(); } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_08CD_0035_AD19()
 *
 * @name f__22A6_08CD_0035_AD19
 * @implements 22A6:08CD:0035:AD19 ()
 *
 * Called From: 22A6:08C8:0046:C4FB
 * Called From: 22A6:08C8:0054:2300
 * Called From: 22A6:08C8:0059:E080
 * Called From: 22A6:08C8:0062:F16E
 * Called From: 22A6:08C8:006D:1CDF
 */
void f__22A6_08CD_0035_AD19()
{
	emu_incw(&emu_di);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08AE_0054_2300(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { f__22A6_08A9_0059_E080(); return; }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x84));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_08F9_0009_9D8A(); return; }
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08F9_0009_9D8A(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x08EE; emu_last_cs = 0x22A6; emu_last_ip = 0x08F0; emu_last_length = 0x0035; emu_last_crc = 0xAD19; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { emu_ip = 0x08E9; emu_last_cs = 0x22A6; emu_last_ip = 0x08F7; emu_last_length = 0x0035; emu_last_crc = 0xAD19; emu_call(); } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_08D1_0031_A185()
 *
 * @name f__22A6_08D1_0031_A185
 * @implements 22A6:08D1:0031:A185 ()
 *
 * Called From: 22A6:08BE:0046:C4FB
 * Called From: 22A6:08BE:0054:2300
 */
void f__22A6_08D1_0031_A185()
{
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { f__22A6_08A9_0059_E080(); return; }
	emu_movb(&emu_cx.l, emu_get_memory8(emu_cs, 0x00,  0x84));
	emu_orw(&emu_cx.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_08F9_0009_9D8A(); return; }
	emu_movb(&emu_ax.l, 0x0);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__22A6_08F9_0009_9D8A(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08EE_0014_457C(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { emu_ip = 0x08E9; emu_last_cs = 0x22A6; emu_last_ip = 0x08F7; emu_last_length = 0x0031; emu_last_crc = 0xA185; emu_call(); } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_08E9_0019_86FC()
 *
 * @name f__22A6_08E9_0019_86FC
 * @implements 22A6:08E9:0019:86FC ()
 *
 * Called From: 22A6:08F7:0014:457C
 */
void f__22A6_08E9_0019_86FC()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x7E));
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08EE_0014_457C(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { emu_ip = 0x08E9; emu_last_cs = 0x22A6; emu_last_ip = 0x08F7; emu_last_length = 0x0019; emu_last_crc = 0x86FC; emu_call(); } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_08EE_0014_457C()
 *
 * @name f__22A6_08EE_0014_457C
 * @implements 22A6:08EE:0014:457C ()
 *
 * Called From: 22A6:08F0:0031:A185
 * Called From: 22A6:08F0:0014:457C
 * Called From: 22A6:08F0:0019:86FC
 * Called From: 22A6:08F0:0054:2300
 * Called From: 22A6:08F0:0046:C4FB
 */
void f__22A6_08EE_0014_457C()
{
	emu_stosb();
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_08EE_0014_457C(); return; }
	emu_addw(&emu_di, emu_get_memory16(emu_cs, 0x00,  0x70));
	if (--emu_cx.x != 0) { f__22A6_08E9_0019_86FC(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_08F9_0009_9D8A()
 *
 * @name f__22A6_08F9_0009_9D8A
 * @implements 22A6:08F9:0009:9D8A ()
 *
 * Called From: 22A6:08A7:0062:F16E
 * Called From: 22A6:08A7:006D:1CDF
 * Called From: 22A6:08DF:0031:A185
 * Called From: 22A6:08DF:0035:AD19
 * Called From: 22A6:08DF:0054:2300
 * Called From: 22A6:08E7:0031:A185
 * Called From: 22A6:08E7:0035:AD19
 * Called From: 22A6:08E7:0046:C4FB
 */
void f__22A6_08F9_0009_9D8A()
{
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0902_004B_AC6C()
 *
 * @name f__22A6_0902_004B_AC6C
 * @implements 22A6:0902:004B:AC6C ()
 *
 * Called From: 2605:0074:006D:4FAF
 */
void f__22A6_0902_004B_AC6C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_cs, 0x00,  0x7));
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_es, emu_si,  0x0));
	emu_movw(&emu_ax.x, emu_es);
	emu_orw(&emu_ax.x, emu_si);
	if (emu_flags.zf) { emu_ip = 0x0948; emu_last_cs = 0x22A6; emu_last_ip = 0x0914; emu_last_length = 0x004B; emu_last_crc = 0xAC6C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x82), emu_es);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x80), emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x4));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x6));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x74), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x8));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x76), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0xA));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x78), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0xC));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x7A), emu_ax.x);
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_094D_000C_7956()
 *
 * @name f__22A6_094D_000C_7956
 * @implements 22A6:094D:000C:7956 ()
 *
 * Called From: 07D4:08BB:0027:2D54
 * Called From: 07D4:08D4:0019:51EA
 * Called From: 10E4:0072:0024:C35D
 * Called From: 10E4:0072:0027:B29D
 * Called From: 10E4:0099:0027:A316
 * Called From: 10E4:00B6:001D:9516
 * Called From: 10E4:00D3:001D:D33A
 * Called From: 10E4:195F:001E:39B8
 * Called From: 10E4:1AEA:0022:3899
 * Called From: 251B:0019:001E:12D9
 * Called From: 251B:0033:001A:4653
 * Called From: 251B:0049:0016:E848
 * Called From: 251B:0063:001A:266D
 * Called From: B518:03F0:0026:1566
 * Called From: B518:0414:0024:19C4
 */
void f__22A6_094D_000C_7956()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(0x0959); f__22A6_0DF8_0022_BF09();
	f__22A6_0959_0014_889E();
}

/**
 * Decompiled function f__22A6_0959_0014_889E()
 *
 * @name f__22A6_0959_0014_889E
 * @implements 22A6:0959:0014:889E ()
 *
 * Called From: 22A6:0959:000C:7956
 */
void f__22A6_0959_0014_889E()
{
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(0x096D); f__22A6_0975_004B_BD49();
	f__22A6_096D_0008_3172();
}

/**
 * Decompiled function f__22A6_096D_0008_3172()
 *
 * @name f__22A6_096D_0008_3172
 * @implements 22A6:096D:0008:3172 ()
 *
 * Called From: 22A6:096D:0014:889E
 */
void f__22A6_096D_0008_3172()
{
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0975_004B_BD49()
 *
 * @name f__22A6_0975_004B_BD49
 * @implements 22A6:0975:004B:BD49 ()
 *
 * Called From: 22A6:096A:0014:889E
 */
void f__22A6_0975_004B_BD49()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bp);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0xB53), emu_di);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x68));
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_09BD_0003_05A4(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x6C));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_09BD_0003_05A4(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x6A));
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_09BD_0003_05A4(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x6E));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_09BD_0003_05A4(); return; }
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0x68));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x09BD; emu_last_cs = 0x22A6; emu_last_ip = 0x09A6; emu_last_length = 0x004B; emu_last_crc = 0xBD49; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0x6C));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_09BD_0003_05A4(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x6A));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x09BD; emu_last_cs = 0x22A6; emu_last_ip = 0x09B4; emu_last_length = 0x004B; emu_last_crc = 0xBD49; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x6E));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_09E7_0003_05A0(); return; }
	emu_push(0x09C0); f__22A6_0A79_002B_E7E4();
	f__22A6_09C0_0008_FF04();
}

/**
 * Decompiled function f__22A6_09BD_0003_05A4()
 *
 * @name f__22A6_09BD_0003_05A4
 * @implements 22A6:09BD:0003:05A4 ()
 *
 * Called From: 22A6:098A:004B:BD49
 * Called From: 22A6:0991:004B:BD49
 * Called From: 22A6:0998:004B:BD49
 * Called From: 22A6:099F:004B:BD49
 * Called From: 22A6:09AD:004B:BD49
 * Called From: 22A6:09D9:000C:FC7D
 * Called From: 22A6:09E5:0002:0200
 */
void f__22A6_09BD_0003_05A4()
{
	emu_push(0x09C0); f__22A6_0A79_002B_E7E4();
	f__22A6_09C0_0008_FF04();
}

/**
 * Decompiled function f__22A6_09C0_0008_FF04()
 *
 * @name f__22A6_09C0_0008_FF04
 * @implements 22A6:09C0:0008:FF04 ()
 *
 * Called From: 22A6:09C0:0003:05A4
 * Called From: 22A6:09C0:004B:BD49
 */
void f__22A6_09C0_0008_FF04()
{
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_xchgw(&emu_dx.x, &emu_bx.x);
	emu_movw(&emu_di, emu_si);
	emu_push(0x09C8); f__22A6_0A79_002B_E7E4();
	f__22A6_09C8_0011_6FF9();
}

/**
 * Decompiled function f__22A6_09C8_0011_6FF9()
 *
 * @name f__22A6_09C8_0011_6FF9
 * @implements 22A6:09C8:0011:6FF9 ()
 *
 * Called From: 22A6:09C8:0008:FF04
 */
void f__22A6_09C8_0011_6FF9()
{
	emu_movw(&emu_bp, emu_di);
	emu_orw(&emu_bp, emu_si);
	if (emu_flags.zf) { f__22A6_09E7_0003_05A0(); return; }
	emu_testw(&emu_di, emu_si);
	if (!emu_flags.zf) { f__22A6_09EA_0003_06EA(); return; }
	emu_shlw(&emu_si, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_si,  0x9ED);
	emu_push(0x09D9);
	switch (emu_ip) {
		case 0x0A0D: f__22A6_0A0D_0002_0266(); break;
		case 0x0A19: f__22A6_0A19_000E_9943(); break;
		case 0x0A50: f__22A6_0A50_000E_8F83(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x22A6; emu_last_ip = 0x09D4; emu_last_length = 0x0011; emu_last_crc = 0x6FF9;
			emu_call();
			return;
	}
	f__22A6_09D9_000C_FC7D();
}

/**
 * Decompiled function f__22A6_09D9_000C_FC7D()
 *
 * @name f__22A6_09D9_000C_FC7D
 * @implements 22A6:09D9:000C:FC7D ()
 *
 * Called From: 22A6:09D9:0011:6FF9
 */
void f__22A6_09D9_000C_FC7D()
{
	if (emu_flags.cf) { f__22A6_09BD_0003_05A4(); return; }
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_xchgw(&emu_dx.x, &emu_bx.x);
	emu_shlw(&emu_di, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_di,  0x9ED);
	emu_push(0x09E5);
	switch (emu_ip) {
		case 0x0A0F: f__22A6_0A0F_0008_6C58(); break;
		case 0x0A46: f__22A6_0A46_0008_6C18(); break;
		case 0x0A50: f__22A6_0A50_000E_8F83(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x22A6; emu_last_ip = 0x09E0; emu_last_length = 0x000C; emu_last_crc = 0xFC7D;
			emu_call();
			return;
	}
	f__22A6_09E5_0002_0200();
}

/**
 * Decompiled function f__22A6_09E5_0002_0200()
 *
 * @name f__22A6_09E5_0002_0200
 * @implements 22A6:09E5:0002:0200 ()
 *
 * Called From: 22A6:09E5:000C:FC7D
 */
void f__22A6_09E5_0002_0200()
{
	f__22A6_09BD_0003_05A4(); return;
}

/**
 * Decompiled function f__22A6_09E7_0003_05A0()
 *
 * @name f__22A6_09E7_0003_05A0
 * @implements 22A6:09E7:0003:05A0 ()
 *
 * Called From: 22A6:09BB:004B:BD49
 * Called From: 22A6:09CC:0011:6FF9
 */
void f__22A6_09E7_0003_05A0()
{
	f__22A6_0AA4_0006_148A(); return;
}

/**
 * Decompiled function f__22A6_09EA_0003_06EA()
 *
 * @name f__22A6_09EA_0003_06EA
 * @implements 22A6:09EA:0003:06EA ()
 *
 * Called From: 22A6:09D0:0011:6FF9
 */
void f__22A6_09EA_0003_06EA()
{
	f__22A6_0B55_000A_1943(); return;
}

/**
 * Decompiled function f__22A6_0A0D_0002_0266()
 *
 * @name f__22A6_0A0D_0002_0266
 * @implements 22A6:0A0D:0002:0266 ()
 *
 * Called From: 22A6:09D4:0011:6FF9
 */
void f__22A6_0A0D_0002_0266()
{
	emu_clc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A0F_0008_6C58()
 *
 * @name f__22A6_0A0F_0008_6C58
 * @implements 22A6:0A0F:0008:6C58 ()
 *
 * Called From: 22A6:09E0:000C:FC7D
 */
void f__22A6_0A0F_0008_6C58()
{
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x6A));
	emu_push(0x0A17); f__22A6_0A2D_0019_E134();
	f__22A6_0A17_0002_0262();
}

/**
 * Decompiled function f__22A6_0A17_0002_0262()
 *
 * @name f__22A6_0A17_0002_0262
 * @implements 22A6:0A17:0002:0262 ()
 *
 * Called From: 22A6:0A17:0008:6C58
 */
void f__22A6_0A17_0002_0262()
{
	emu_stc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A19_000E_9943()
 *
 * @name f__22A6_0A19_000E_9943
 * @implements 22A6:0A19:000E:9943 ()
 *
 * Called From: 22A6:09D4:0011:6FF9
 */
void f__22A6_0A19_000E_9943()
{
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x6E));
	emu_negw(&emu_si, emu_si);
	emu_negw(&emu_bx.x, emu_bx.x);
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_push(0x0A27); f__22A6_0A2D_0019_E134();
	f__22A6_0A27_0006_2D62();
}

/**
 * Decompiled function f__22A6_0A27_0006_2D62()
 *
 * @name f__22A6_0A27_0006_2D62
 * @implements 22A6:0A27:0006:2D62 ()
 *
 * Called From: 22A6:0A27:000E:9943
 */
void f__22A6_0A27_0006_2D62()
{
	emu_negw(&emu_bx.x, emu_bx.x);
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_stc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A2D_0019_E134()
 *
 * @name f__22A6_0A2D_0019_E134
 * @implements 22A6:0A2D:0019:E134 ()
 *
 * Called From: 22A6:0A14:0008:6C58
 * Called From: 22A6:0A24:000E:9943
 */
void f__22A6_0A2D_0019_E134()
{
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_bp, emu_dx.x);
	emu_subw(&emu_bp, emu_bx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_ax.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_si);
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_idivw(&emu_ax.x, emu_bp);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_pop(&emu_dx.x);
	emu_movw(&emu_bx.x, emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A46_0008_6C18()
 *
 * @name f__22A6_0A46_0008_6C18
 * @implements 22A6:0A46:0008:6C18 ()
 *
 * Called From: 22A6:09E0:000C:FC7D
 */
void f__22A6_0A46_0008_6C18()
{
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x68));
	emu_push(0x0A4E); f__22A6_0A64_0015_DD82();
	f__22A6_0A4E_0002_0262();
}

/**
 * Decompiled function f__22A6_0A4E_0002_0262()
 *
 * @name f__22A6_0A4E_0002_0262
 * @implements 22A6:0A4E:0002:0262 ()
 *
 * Called From: 22A6:0A4E:0008:6C18
 */
void f__22A6_0A4E_0002_0262()
{
	emu_stc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A50_000E_8F83()
 *
 * @name f__22A6_0A50_000E_8F83
 * @implements 22A6:0A50:000E:8F83 ()
 *
 * Called From: 22A6:09D4:0011:6FF9
 * Called From: 22A6:09E0:000C:FC7D
 */
void f__22A6_0A50_000E_8F83()
{
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x6C));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_negw(&emu_si, emu_si);
	emu_push(0x0A5E); f__22A6_0A64_0015_DD82();
	f__22A6_0A5E_0006_2D1A();
}

/**
 * Decompiled function f__22A6_0A5E_0006_2D1A()
 *
 * @name f__22A6_0A5E_0006_2D1A
 * @implements 22A6:0A5E:0006:2D1A ()
 *
 * Called From: 22A6:0A5E:000E:8F83
 */
void f__22A6_0A5E_0006_2D1A()
{
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_stc();

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A64_0015_DD82()
 *
 * @name f__22A6_0A64_0015_DD82
 * @implements 22A6:0A64:0015:DD82 ()
 *
 * Called From: 22A6:0A4B:0008:6C18
 * Called From: 22A6:0A5B:000E:8F83
 */
void f__22A6_0A64_0015_DD82()
{
	emu_push(emu_dx.x);
	emu_movw(&emu_bp, emu_cx.x);
	emu_subw(&emu_bp, emu_ax.x);
	emu_subw(&emu_dx.x, emu_bx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_ax.x, emu_si);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_idivw(&emu_ax.x, emu_bp);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_pop(&emu_dx.x);
	emu_movw(&emu_ax.x, emu_si);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A79_002B_E7E4()
 *
 * @name f__22A6_0A79_002B_E7E4
 * @implements 22A6:0A79:002B:E7E4 ()
 *
 * Called From: 22A6:09BD:0003:05A4
 * Called From: 22A6:09BD:004B:BD49
 * Called From: 22A6:09C5:0008:FF04
 */
void f__22A6_0A79_002B_E7E4()
{
	emu_xorw(&emu_si, emu_si);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x6A));
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0A85_001F_D13F(); return; }
	emu_orws(&emu_si, 0x1);
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x6E));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0A8F_0015_2BA2(); return; }
	emu_orws(&emu_si, 0x2);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x68));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0A99; emu_last_cs = 0x22A6; emu_last_ip = 0x0A94; emu_last_length = 0x002B; emu_last_crc = 0xE7E4; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_si, 0x4);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x6C));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0AA3; emu_last_cs = 0x22A6; emu_last_ip = 0x0A9E; emu_last_length = 0x002B; emu_last_crc = 0xE7E4; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_si, 0x8);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A85_001F_D13F()
 *
 * @name f__22A6_0A85_001F_D13F
 * @implements 22A6:0A85:001F:D13F ()
 *
 * Called From: 22A6:0A80:002B:E7E4
 */
void f__22A6_0A85_001F_D13F()
{
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x6E));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0A8F_0015_2BA2(); return; }
	emu_orws(&emu_si, 0x2);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x68));
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0A99_000B_EC07(); return; }
	emu_orws(&emu_si, 0x4);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x6C));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0AA3; emu_last_cs = 0x22A6; emu_last_ip = 0x0A9E; emu_last_length = 0x001F; emu_last_crc = 0xD13F; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_si, 0x8);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A8F_0015_2BA2()
 *
 * @name f__22A6_0A8F_0015_2BA2
 * @implements 22A6:0A8F:0015:2BA2 ()
 *
 * Called From: 22A6:0A8A:002B:E7E4
 * Called From: 22A6:0A8A:001F:D13F
 */
void f__22A6_0A8F_0015_2BA2()
{
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x68));
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0A99_000B_EC07(); return; }
	emu_orws(&emu_si, 0x4);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x6C));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0AA3_0001_0186(); return; }
	emu_orws(&emu_si, 0x8);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0A99_000B_EC07()
 *
 * @name f__22A6_0A99_000B_EC07
 * @implements 22A6:0A99:000B:EC07 ()
 *
 * Called From: 22A6:0A94:0015:2BA2
 * Called From: 22A6:0A94:001F:D13F
 */
void f__22A6_0A99_000B_EC07()
{
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x6C));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0AA3_0001_0186(); return; }
	emu_orws(&emu_si, 0x8);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0AA3_0001_0186()
 *
 * @name f__22A6_0AA3_0001_0186
 * @implements 22A6:0AA3:0001:0186 ()
 *
 * Called From: 22A6:0A9E:000B:EC07
 * Called From: 22A6:0A9E:0015:2BA2
 */
void f__22A6_0AA3_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0AA4_0006_148A()
 *
 * @name f__22A6_0AA4_0006_148A
 * @implements 22A6:0AA4:0006:148A ()
 *
 * Called From: 22A6:09E7:0003:05A0
 */
void f__22A6_0AA4_0006_148A()
{
	emu_subw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__22A6_0AAA_0017_3E71(); return; }
	f__22A6_0B0D_0032_F862(); return;
}

/**
 * Decompiled function f__22A6_0AAA_0017_3E71()
 *
 * @name f__22A6_0AAA_0017_3E71
 * @implements 22A6:0AAA:0017:3E71 ()
 *
 * Called From: 22A6:0AA6:0006:148A
 */
void f__22A6_0AAA_0017_3E71()
{
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0AB1_0010_1661(); return; }
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_subw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_movw(&emu_si, 0x1);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!emu_flags.zf) { f__22A6_0AC1_002C_B06E(); return; }
	f__22A6_0B3F_0014_7B9C(); return;
}

/**
 * Decompiled function f__22A6_0AB1_0010_1661()
 *
 * @name f__22A6_0AB1_0010_1661
 * @implements 22A6:0AB1:0010:1661 ()
 *
 * Called From: 22A6:0AAA:0017:3E71
 */
void f__22A6_0AB1_0010_1661()
{
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_movw(&emu_si, 0x1);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!emu_flags.zf) { f__22A6_0AC1_002C_B06E(); return; }
	f__22A6_0B3F_0014_7B9C(); return;
}

/**
 * Decompiled function f__22A6_0AC1_002C_B06E()
 *
 * @name f__22A6_0AC1_002C_B06E
 * @implements 22A6:0AC1:002C:B06E ()
 *
 * Called From: 22A6:0ABD:0010:1661
 * Called From: 22A6:0ABD:0017:3E71
 */
void f__22A6_0AC1_002C_B06E()
{
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0AC7_0026_966B(); return; }
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_negw(&emu_si, emu_si);
	emu_cmpw(&emu_cx.x, emu_dx.x);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0AED_0020_7FD8(); return; }
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	emu_movw(&emu_di, emu_cx.x);
	emu_movw(&emu_bp, emu_cx.x);
	emu_shrw(&emu_bp, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xB53));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_decw(&emu_cx.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0B55; emu_last_cs = 0x22A6; emu_last_ip = 0x0ADD; emu_last_length = 0x002C; emu_last_crc = 0xB06E; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_bx.x, 0x140);
	emu_subw(&emu_bp, emu_dx.x);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0AD9; emu_last_cs = 0x22A6; emu_last_ip = 0x0AE5; emu_last_length = 0x002C; emu_last_crc = 0xB06E; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_bp, emu_di);
	emu_addw(&emu_bx.x, emu_si);
	emu_ip = 0x0AD9; emu_last_cs = 0x22A6; emu_last_ip = 0x0AEB; emu_last_length = 0x002C; emu_last_crc = 0xB06E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_0AC7_0026_966B()
 *
 * @name f__22A6_0AC7_0026_966B
 * @implements 22A6:0AC7:0026:966B ()
 *
 * Called From: 22A6:0AC1:002C:B06E
 */
void f__22A6_0AC7_0026_966B()
{
	emu_cmpw(&emu_cx.x, emu_dx.x);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0AED_0020_7FD8(); return; }
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	emu_movw(&emu_di, emu_cx.x);
	emu_movw(&emu_bp, emu_cx.x);
	emu_shrw(&emu_bp, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xB53));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_decw(&emu_cx.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0B55; emu_last_cs = 0x22A6; emu_last_ip = 0x0ADD; emu_last_length = 0x0026; emu_last_crc = 0x966B; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_bx.x, 0x140);
	emu_subw(&emu_bp, emu_dx.x);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0AD9; emu_last_cs = 0x22A6; emu_last_ip = 0x0AE5; emu_last_length = 0x0026; emu_last_crc = 0x966B; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_bp, emu_di);
	emu_addw(&emu_bx.x, emu_si);
	emu_ip = 0x0AD9; emu_last_cs = 0x22A6; emu_last_ip = 0x0AEB; emu_last_length = 0x0026; emu_last_crc = 0x966B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_0AED_0020_7FD8()
 *
 * @name f__22A6_0AED_0020_7FD8
 * @implements 22A6:0AED:0020:7FD8 ()
 *
 * Called From: 22A6:0AC9:0026:966B
 * Called From: 22A6:0AC9:002C:B06E
 */
void f__22A6_0AED_0020_7FD8()
{
	emu_movw(&emu_di, emu_cx.x);
	emu_movw(&emu_bp, emu_cx.x);
	emu_shrw(&emu_bp, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xB53));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_decw(&emu_cx.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0B55; emu_last_cs = 0x22A6; emu_last_ip = 0x0AFD; emu_last_length = 0x0020; emu_last_crc = 0x7FD8; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_bx.x, emu_si);
	emu_subw(&emu_bp, emu_dx.x);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0AF9; emu_last_cs = 0x22A6; emu_last_ip = 0x0B03; emu_last_length = 0x0020; emu_last_crc = 0x7FD8; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_bp, emu_di);
	emu_addw(&emu_bx.x, 0x140);
	f__22A6_0AF9_0014_B03B(); return;
}

/**
 * Decompiled function f__22A6_0AF9_0014_B03B()
 *
 * @name f__22A6_0AF9_0014_B03B
 * @implements 22A6:0AF9:0014:B03B ()
 *
 * Called From: 22A6:0B03:0014:B03B
 * Called From: 22A6:0B0B:0020:7FD8
 * Called From: 22A6:0B0B:0014:B03B
 */
void f__22A6_0AF9_0014_B03B()
{
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_decw(&emu_cx.x);
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_0B55_000A_1943(); return; }
	emu_addw(&emu_bx.x, emu_si);
	emu_subw(&emu_bp, emu_dx.x);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0AF9_0014_B03B(); return; }
	emu_addw(&emu_bp, emu_di);
	emu_addw(&emu_bx.x, 0x140);
	f__22A6_0AF9_0014_B03B(); return;
}

/**
 * Decompiled function f__22A6_0B0D_0032_F862()
 *
 * @name f__22A6_0B0D_0032_F862
 * @implements 22A6:0B0D:0032:F862 ()
 *
 * Called From: 22A6:0AA8:0006:148A
 */
void f__22A6_0B0D_0032_F862()
{
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_0B12_002D_3954(); return; }
	emu_xchgw(&emu_ax.x, &emu_cx.x);
	emu_subw(&emu_cx.x, emu_ax.x);
	emu_incw(&emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_di, emu_bx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xB53));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_testw(&emu_di, 0x1);
	if (emu_flags.zf) { f__22A6_0B2E_0011_715F(); return; }
	emu_stosb();
	emu_decw(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shrw(&emu_cx.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x0B36; emu_last_cs = 0x22A6; emu_last_ip = 0x0B32; emu_last_length = 0x0032; emu_last_crc = 0xF862; emu_call(); return; } // Jump does not resolve
	emu_rep_stosw();
	emu_testw(&emu_dx.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x0B3D; emu_last_cs = 0x22A6; emu_last_ip = 0x0B3A; emu_last_length = 0x0032; emu_last_crc = 0xF862; emu_call(); return; } // Jump does not resolve
	emu_stosb();
	emu_ip = 0x0B55; emu_last_cs = 0x22A6; emu_last_ip = 0x0B3D; emu_last_length = 0x0032; emu_last_crc = 0xF862; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_0B12_002D_3954()
 *
 * @name f__22A6_0B12_002D_3954
 * @implements 22A6:0B12:002D:3954 ()
 *
 * Called From: 22A6:0B0F:0032:F862
 */
void f__22A6_0B12_002D_3954()
{
	emu_subw(&emu_cx.x, emu_ax.x);
	emu_incw(&emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_di, emu_bx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xB53));
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_testw(&emu_di, 0x1);
	if (emu_flags.zf) { f__22A6_0B2E_0011_715F(); return; }
	emu_stosb();
	emu_decw(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shrw(&emu_cx.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x0B36; emu_last_cs = 0x22A6; emu_last_ip = 0x0B32; emu_last_length = 0x002D; emu_last_crc = 0x3954; emu_call(); return; } // Jump does not resolve
	emu_rep_stosw();
	emu_testw(&emu_dx.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x0B3D; emu_last_cs = 0x22A6; emu_last_ip = 0x0B3A; emu_last_length = 0x002D; emu_last_crc = 0x3954; emu_call(); return; } // Jump does not resolve
	emu_stosb();
	f__22A6_0B55_000A_1943(); return;
}

/**
 * Decompiled function f__22A6_0B2E_0011_715F()
 *
 * @name f__22A6_0B2E_0011_715F
 * @implements 22A6:0B2E:0011:715F ()
 *
 * Called From: 22A6:0B2A:002D:3954
 * Called From: 22A6:0B2A:0032:F862
 */
void f__22A6_0B2E_0011_715F()
{
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shrw(&emu_cx.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x0B36; emu_last_cs = 0x22A6; emu_last_ip = 0x0B32; emu_last_length = 0x0011; emu_last_crc = 0x715F; emu_call(); return; } // Jump does not resolve
	emu_rep_stosw();
	emu_testw(&emu_dx.x, 0x1);
	if (emu_flags.zf) { f__22A6_0B3D_0002_0380(); return; }
	emu_stosb();
	emu_ip = 0x0B55; emu_last_cs = 0x22A6; emu_last_ip = 0x0B3D; emu_last_length = 0x0011; emu_last_crc = 0x715F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_0B3D_0002_0380()
 *
 * @name f__22A6_0B3D_0002_0380
 * @implements 22A6:0B3D:0002:0380 ()
 *
 * Called From: 22A6:0B3A:0011:715F
 */
void f__22A6_0B3D_0002_0380()
{
	f__22A6_0B55_000A_1943(); return;
}

/**
 * Decompiled function f__22A6_0B3F_0014_7B9C()
 *
 * @name f__22A6_0B3F_0014_7B9C
 * @implements 22A6:0B3F:0014:7B9C ()
 *
 * Called From: 22A6:0ABF:0010:1661
 * Called From: 22A6:0ABF:0017:3E71
 */
void f__22A6_0B3F_0014_7B9C()
{
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_incw(&emu_cx.x);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0xB53));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_addw(&emu_bx.x, 0x140);
	if (--emu_cx.x != 0) { f__22A6_0B48_000B_E493(); return; }
	emu_ip = 0x0B55; emu_last_cs = 0x22A6; emu_last_ip = 0x0B51; emu_last_length = 0x0014; emu_last_crc = 0x7B9C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_0B48_000B_E493()
 *
 * @name f__22A6_0B48_000B_E493
 * @implements 22A6:0B48:000B:E493 ()
 *
 * Called From: 22A6:0B4F:000B:E493
 * Called From: 22A6:0B4F:0014:7B9C
 */
void f__22A6_0B48_000B_E493()
{
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_addw(&emu_bx.x, 0x140);
	if (--emu_cx.x != 0) { f__22A6_0B48_000B_E493(); return; }
	f__22A6_0B55_000A_1943(); return;
}

/**
 * Decompiled function f__22A6_0B55_000A_1943()
 *
 * @name f__22A6_0B55_000A_1943
 * @implements 22A6:0B55:000A:1943 ()
 *
 * Called From: 22A6:09EA:0003:06EA
 * Called From: 22A6:0AFD:0014:B03B
 * Called From: 22A6:0B3D:0002:0380
 * Called From: 22A6:0B3D:002D:3954
 * Called From: 22A6:0B51:000B:E493
 */
void f__22A6_0B55_000A_1943()
{
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0B60_006A_F46D()
 *
 * @name f__22A6_0B60_006A_F46D
 * @implements 22A6:0B60:006A:F46D ()
 *
 * Called From: 07D4:0575:0031:CE7F
 * Called From: 07D4:059A:0025:E264
 */
void f__22A6_0B60_006A_F46D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_cld();
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_andw(&emu_ax.x, 0xF);
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0xC68), emu_ax.l);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00,  0x31F));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_si, emu_ax.x);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_movw(&emu_cx.x, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00,  0x31B));
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_cs);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_di, 0x329);
	emu_movw(&emu_cx.x, 0x10);
	emu_lodsb(emu_ds);
	emu_cmpb(&emu_ax.l, 0x90);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0BAF; emu_last_cs = 0x22A6; emu_last_ip = 0x0BA4; emu_last_length = 0x006A; emu_last_crc = 0xF46D; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0xA0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0BAF_001B_B43E(); return; }
	emu_addb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0xC68));
	emu_stosb();
	if (--emu_cx.x != 0) { emu_ip = 0x0BA1; emu_last_cs = 0x22A6; emu_last_ip = 0x0BB0; emu_last_length = 0x006A; emu_last_crc = 0xF46D; emu_call(); } // Jump does not resolve
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_di, 0x1);
	emu_movw(&emu_di, emu_get_memory16(emu_cs, emu_di,  0x17D));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_di, emu_ax.x);
	emu_push(0x0BCA); emu_ip = 0x0DF8; emu_last_cs = 0x22A6; emu_last_ip = 0x0BC7; emu_last_length = 0x006A; emu_last_crc = 0xF46D; emu_call(); // Jump does not resolve
	f__22A6_0BCA_000C_6B11();
}

/**
 * Decompiled function f__22A6_0BA1_0029_C10A()
 *
 * @name f__22A6_0BA1_0029_C10A
 * @implements 22A6:0BA1:0029:C10A ()
 *
 * Called From: 22A6:0BB0:001B:B43E
 * Called From: 22A6:0BB0:0029:C10A
 */
void f__22A6_0BA1_0029_C10A()
{
	emu_lodsb(emu_ds);
	emu_cmpb(&emu_ax.l, 0x90);
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_0BAF_001B_B43E(); return; }
	emu_cmpb(&emu_ax.l, 0xA0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0BAF_001B_B43E(); return; }
	emu_addb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0xC68));
	emu_stosb();
	if (--emu_cx.x != 0) { f__22A6_0BA1_0029_C10A(); return; }
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_di, 0x1);
	emu_movw(&emu_di, emu_get_memory16(emu_cs, emu_di,  0x17D));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_di, emu_ax.x);
	emu_push(0x0BCA); f__22A6_0DF8_0022_BF09();
	f__22A6_0BCA_000C_6B11();
}

/**
 * Decompiled function f__22A6_0BAF_001B_B43E()
 *
 * @name f__22A6_0BAF_001B_B43E
 * @implements 22A6:0BAF:001B:B43E ()
 *
 * Called From: 22A6:0BA4:0029:C10A
 * Called From: 22A6:0BA8:006A:F46D
 * Called From: 22A6:0BA8:0029:C10A
 */
void f__22A6_0BAF_001B_B43E()
{
	emu_stosb();
	if (--emu_cx.x != 0) { f__22A6_0BA1_0029_C10A(); return; }
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_di, 0x1);
	emu_movw(&emu_di, emu_get_memory16(emu_cs, emu_di,  0x17D));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_di, emu_ax.x);
	emu_push(0x0BCA); f__22A6_0DF8_0022_BF09();
	f__22A6_0BCA_000C_6B11();
}

/**
 * Decompiled function f__22A6_0BCA_000C_6B11()
 *
 * @name f__22A6_0BCA_000C_6B11
 * @implements 22A6:0BCA:000C:6B11 ()
 *
 * Called From: 22A6:0BCA:001B:B43E
 * Called From: 22A6:0BCA:0029:C10A
 */
void f__22A6_0BCA_000C_6B11()
{
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x33F));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_si,  0xBD6);
	switch (emu_ip) {
		case 0x0BDC: f__22A6_0BDC_0006_2D30(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x22A6; emu_last_ip = 0x0BD1; emu_last_length = 0x000C; emu_last_crc = 0x6B11;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__22A6_0BDC_0006_2D30()
 *
 * @name f__22A6_0BDC_0006_2D30
 * @implements 22A6:0BDC:0006:2D30 ()
 *
 * Called From: 22A6:0BD1:000C:6B11
 */
void f__22A6_0BDC_0006_2D30()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(0x0BE2); f__22A6_0BE6_0054_2683();
	f__22A6_0BE2_0002_0358();
}

/**
 * Decompiled function f__22A6_0BE2_0002_0358()
 *
 * @name f__22A6_0BE2_0002_0358
 * @implements 22A6:0BE2:0002:0358 ()
 *
 * Called From: 22A6:0BE2:0006:2D30
 */
void f__22A6_0BE2_0002_0358()
{
	f__22A6_0C5E_000A_38F3(); return;
}

/**
 * Decompiled function f__22A6_0BE6_0054_2683()
 *
 * @name f__22A6_0BE6_0054_2683
 * @implements 22A6:0BE6:0054:2683 ()
 *
 * Called From: 22A6:0BDF:0006:2D30
 */
void f__22A6_0BE6_0054_2683()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x341));
	emu_mulw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0x323));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x325));
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_cs, 0x00,  0x33B));
	emu_movb(&emu_dx.h, emu_dx.l);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_cs, 0x00,  0x33D));
	emu_movb(&emu_cx.h, emu_cx.l);
	emu_movw(&emu_bx.x, 0x329);
	emu_movw(&emu_bp, emu_get_memory16(emu_cs, 0x00,  0x339));
	emu_movb(&emu_cx.l, 0x4);
	emu_push(emu_cx.x);
	emu_movb(&emu_dx.l, emu_cx.h);
	emu_xorb(&emu_cx.h, emu_cx.h);
	emu_lodsb(emu_ds);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_shrb(&emu_ax.h, emu_cx.l);
	emu_andb(&emu_ax.l, 0xF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_addb(&emu_ax.l, 0xFF);
	emu_rclb(&emu_cx.h, 0x1);
	emu_incb(&emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_subb(&emu_ax.l, 0x1);
	emu_rclb(&emu_cx.h, 0x1);
	emu_incb(&emu_ax.l);
	emu_shrb(&emu_cx.h, 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { f__22A6_0C3A_000A_7509(); return; }
	emu_stosw();
	emu_decb(&emu_dx.l);
	if (!emu_flags.zf) { f__22A6_0C14_0026_B9F9(); return; }
	emu_ip = 0x0C56; emu_last_cs = 0x22A6; emu_last_ip = 0x0C38; emu_last_length = 0x0054; emu_last_crc = 0x2683; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_0C11_0029_FB79()
 *
 * @name f__22A6_0C11_0029_FB79
 * @implements 22A6:0C11:0029:FB79 ()
 *
 * Called From: 22A6:0C5B:0008:741E
 * Called From: 22A6:0C5B:000E:4C0E
 */
void f__22A6_0C11_0029_FB79()
{
	emu_push(emu_cx.x);
	emu_movb(&emu_dx.l, emu_cx.h);
	emu_xorb(&emu_cx.h, emu_cx.h);
	emu_lodsb(emu_ds);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_shrb(&emu_ax.h, emu_cx.l);
	emu_andb(&emu_ax.l, 0xF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_addb(&emu_ax.l, 0xFF);
	emu_rclb(&emu_cx.h, 0x1);
	emu_incb(&emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_subb(&emu_ax.l, 0x1);
	emu_rclb(&emu_cx.h, 0x1);
	emu_incb(&emu_ax.l);
	emu_shrb(&emu_cx.h, 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { f__22A6_0C3A_000A_7509(); return; }
	emu_stosw();
	emu_decb(&emu_dx.l);
	if (!emu_flags.zf) { f__22A6_0C14_0026_B9F9(); return; }
	emu_ip = 0x0C56; emu_last_cs = 0x22A6; emu_last_ip = 0x0C38; emu_last_length = 0x0029; emu_last_crc = 0xFB79; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_0C14_0026_B9F9()
 *
 * @name f__22A6_0C14_0026_B9F9
 * @implements 22A6:0C14:0026:B9F9 ()
 *
 * Called From: 22A6:0C36:0054:2683
 * Called From: 22A6:0C36:0026:B9F9
 * Called From: 22A6:0C36:0029:FB79
 * Called From: 22A6:0C40:000A:7509
 * Called From: 22A6:0C4C:000C:9107
 * Called From: 22A6:0C54:000E:4C0E
 */
void f__22A6_0C14_0026_B9F9()
{
	emu_xorb(&emu_cx.h, emu_cx.h);
	emu_lodsb(emu_ds);
	emu_movb(&emu_ax.h, emu_ax.l);
	emu_shrb(&emu_ax.h, emu_cx.l);
	emu_andb(&emu_ax.l, 0xF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_addb(&emu_ax.l, 0xFF);
	emu_rclb(&emu_cx.h, 0x1);
	emu_incb(&emu_ax.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x + emu_ax.l,  0x0));
	emu_subb(&emu_ax.l, 0x1);
	emu_rclb(&emu_cx.h, 0x1);
	emu_incb(&emu_ax.l);
	emu_shrb(&emu_cx.h, 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { f__22A6_0C3A_000A_7509(); return; }
	emu_stosw();
	emu_decb(&emu_dx.l);
	if (!emu_flags.zf) { f__22A6_0C14_0026_B9F9(); return; }
	f__22A6_0C56_0008_741E(); return;
}

/**
 * Decompiled function f__22A6_0C3A_000A_7509()
 *
 * @name f__22A6_0C3A_000A_7509
 * @implements 22A6:0C3A:000A:7509 ()
 *
 * Called From: 22A6:0C31:0026:B9F9
 * Called From: 22A6:0C31:0029:FB79
 * Called From: 22A6:0C31:0054:2683
 */
void f__22A6_0C3A_000A_7509()
{
	if (emu_flags.cf) { f__22A6_0C44_000C_9107(); return; }
	emu_stosb();
	emu_incw(&emu_di);
	emu_decb(&emu_dx.l);
	if (!emu_flags.zf) { f__22A6_0C14_0026_B9F9(); return; }
	f__22A6_0C56_0008_741E(); return;
}

/**
 * Decompiled function f__22A6_0C44_000C_9107()
 *
 * @name f__22A6_0C44_000C_9107
 * @implements 22A6:0C44:000C:9107 ()
 *
 * Called From: 22A6:0C3A:000A:7509
 */
void f__22A6_0C44_000C_9107()
{
	if (emu_flags.zf) { f__22A6_0C50_000E_4C0E(); return; }
	emu_incw(&emu_di);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_stosb();
	emu_decb(&emu_dx.l);
	if (!emu_flags.zf) { f__22A6_0C14_0026_B9F9(); return; }
	f__22A6_0C56_0008_741E(); return;
}

/**
 * Decompiled function f__22A6_0C50_000E_4C0E()
 *
 * @name f__22A6_0C50_000E_4C0E
 * @implements 22A6:0C50:000E:4C0E ()
 *
 * Called From: 22A6:0C44:000C:9107
 */
void f__22A6_0C50_000E_4C0E()
{
	emu_incw(&emu_di);
	emu_incw(&emu_di);
	emu_decb(&emu_dx.l);
	if (!emu_flags.zf) { f__22A6_0C14_0026_B9F9(); return; }
	emu_pop(&emu_cx.x);
	emu_addw(&emu_di, emu_bp);
	emu_decb(&emu_dx.h);
	if (!emu_flags.zf) { f__22A6_0C11_0029_FB79(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0C56_0008_741E()
 *
 * @name f__22A6_0C56_0008_741E
 * @implements 22A6:0C56:0008:741E ()
 *
 * Called From: 22A6:0C38:0026:B9F9
 * Called From: 22A6:0C42:000A:7509
 * Called From: 22A6:0C4E:000C:9107
 */
void f__22A6_0C56_0008_741E()
{
	emu_pop(&emu_cx.x);
	emu_addw(&emu_di, emu_bp);
	emu_decb(&emu_dx.h);
	if (!emu_flags.zf) { f__22A6_0C11_0029_FB79(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0C5E_000A_38F3()
 *
 * @name f__22A6_0C5E_000A_38F3
 * @implements 22A6:0C5E:000A:38F3 ()
 *
 * Called From: 22A6:0BE2:0002:0358
 */
void f__22A6_0C5E_000A_38F3()
{
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0D31_0015_D6F0()
 *
 * @name f__22A6_0D31_0015_D6F0
 * @implements 22A6:0D31:0015:D6F0 ()
 *
 * Called From: 07AE:014A:004C:A52F
 * Called From: 07D4:053F:0067:9AFB
 * Called From: 07D4:053F:0089:C08D
 * Called From: 10E4:004B:0048:CEEB
 * Called From: 10E4:0AD6:0020:BBA1
 * Called From: 10E4:0F0C:0049:D195
 * Called From: B495:0BE6:0021:F045
 * Called From: B495:1566:0021:44EB
 * Called From: B4B8:215E:0034:9B71
 * Called From: B4ED:0916:000E:36B2
 * Called From: B4ED:0916:0022:F451
 * Called From: B503:023D:001E:A825
 * Called From: B503:0F71:001D:EC75
 * Called From: B518:039F:001D:945F
 * Called From: B518:0480:001D:945F
 * Called From: B518:0BED:0021:DBD0
 * Called From: B518:0C14:0027:32F4
 * Called From: B518:0E87:002E:0347
 * Called From: B518:11F4:0022:D2F6
 * Called From: B520:07DF:0024:EF1C
 * Called From: B520:07DF:0027:9E9C
 * Called From: B520:0821:002C:E2AF
 * Called From: B520:0821:0025:A6A1
 * Called From: B527:035A:0015:920C
 */
void f__22A6_0D31_0015_D6F0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_di);
	emu_push(emu_dx.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_cld();
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_get_memory8(emu_cs, 0x00,  0x30), emu_ax.l);
	emu_push(0x0D46); f__22A6_0DF8_0022_BF09();
	f__22A6_0D46_008D_1420();
}

/**
 * Decompiled function f__22A6_0D46_008D_1420()
 *
 * @name f__22A6_0D46_008D_1420
 * @implements 22A6:0D46:008D:1420 ()
 *
 * Called From: 22A6:0D46:0015:D6F0
 */
void f__22A6_0D46_008D_1420()
{
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D4E; emu_last_length = 0x008D; emu_last_crc = 0x1420; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { f__22A6_0D56_007D_0EF9(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D5D; emu_last_length = 0x008D; emu_last_crc = 0x1420; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.sf) { emu_ip = 0x0D65; emu_last_cs = 0x22A6; emu_last_ip = 0x0D61; emu_last_length = 0x008D; emu_last_crc = 0x1420; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_cx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D6F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D6B; emu_last_length = 0x008D; emu_last_crc = 0x1420; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_cmpw(&emu_cx.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D73; emu_last_length = 0x008D; emu_last_crc = 0x1420; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D7F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D7B; emu_last_length = 0x008D; emu_last_crc = 0x1420; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D83; emu_last_length = 0x008D; emu_last_crc = 0x1420; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D87; emu_last_length = 0x008D; emu_last_crc = 0x1420; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_dx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D8B; emu_last_length = 0x008D; emu_last_crc = 0x1420; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0x140);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D96; emu_last_cs = 0x22A6; emu_last_ip = 0x0D91; emu_last_length = 0x008D; emu_last_crc = 0x1420; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, 0x13F);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D9F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D9A; emu_last_length = 0x008D; emu_last_crc = 0x1420; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bp, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_subw(&emu_bp, emu_bx.x);
	emu_incw(&emu_bp);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_si);
	emu_movw(&emu_bx.x, 0x140);
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x30));
	emu_rep_stosb();
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_bp);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DC1; emu_last_cs = 0x22A6; emu_last_ip = 0x0DC8; emu_last_length = 0x008D; emu_last_crc = 0x1420; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0D56_007D_0EF9()
 *
 * @name f__22A6_0D56_007D_0EF9
 * @implements 22A6:0D56:007D:0EF9 ()
 *
 * Called From: 22A6:0D52:008D:1420
 */
void f__22A6_0D56_007D_0EF9()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D5D; emu_last_length = 0x007D; emu_last_crc = 0x0EF9; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.sf) { f__22A6_0D65_006E_6118(); return; }
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_cx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D6F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D6B; emu_last_length = 0x007D; emu_last_crc = 0x0EF9; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_cmpw(&emu_cx.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D73; emu_last_length = 0x007D; emu_last_crc = 0x0EF9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D7F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D7B; emu_last_length = 0x007D; emu_last_crc = 0x0EF9; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D83; emu_last_length = 0x007D; emu_last_crc = 0x0EF9; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D87; emu_last_length = 0x007D; emu_last_crc = 0x0EF9; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_dx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D8B; emu_last_length = 0x007D; emu_last_crc = 0x0EF9; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0x140);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D96; emu_last_cs = 0x22A6; emu_last_ip = 0x0D91; emu_last_length = 0x007D; emu_last_crc = 0x0EF9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, 0x13F);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D9F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D9A; emu_last_length = 0x007D; emu_last_crc = 0x0EF9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bp, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_subw(&emu_bp, emu_bx.x);
	emu_incw(&emu_bp);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_si);
	emu_movw(&emu_bx.x, 0x140);
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x30));
	emu_rep_stosb();
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_bp);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DC1; emu_last_cs = 0x22A6; emu_last_ip = 0x0DC8; emu_last_length = 0x007D; emu_last_crc = 0x0EF9; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0D65_006E_6118()
 *
 * @name f__22A6_0D65_006E_6118
 * @implements 22A6:0D65:006E:6118 ()
 *
 * Called From: 22A6:0D61:007D:0EF9
 */
void f__22A6_0D65_006E_6118()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_cx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0D6F_0064_54D4(); return; }
	emu_xorw(&emu_cx.x, emu_cx.x);
	emu_cmpw(&emu_cx.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D73; emu_last_length = 0x006E; emu_last_crc = 0x6118; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D7F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D7B; emu_last_length = 0x006E; emu_last_crc = 0x6118; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D83; emu_last_length = 0x006E; emu_last_crc = 0x6118; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D87; emu_last_length = 0x006E; emu_last_crc = 0x6118; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_dx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D8B; emu_last_length = 0x006E; emu_last_crc = 0x6118; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0x140);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D96; emu_last_cs = 0x22A6; emu_last_ip = 0x0D91; emu_last_length = 0x006E; emu_last_crc = 0x6118; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, 0x13F);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D9F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D9A; emu_last_length = 0x006E; emu_last_crc = 0x6118; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bp, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_subw(&emu_bp, emu_bx.x);
	emu_incw(&emu_bp);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_si);
	emu_movw(&emu_bx.x, 0x140);
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x30));
	emu_rep_stosb();
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_bp);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DC1; emu_last_cs = 0x22A6; emu_last_ip = 0x0DC8; emu_last_length = 0x006E; emu_last_crc = 0x6118; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0D6F_0064_54D4()
 *
 * @name f__22A6_0D6F_0064_54D4
 * @implements 22A6:0D6F:0064:54D4 ()
 *
 * Called From: 22A6:0D6B:006E:6118
 */
void f__22A6_0D6F_0064_54D4()
{
	emu_cmpw(&emu_cx.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D73; emu_last_length = 0x0064; emu_last_crc = 0x54D4; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_0D7F_0054_80F6(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D83; emu_last_length = 0x0064; emu_last_crc = 0x54D4; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D87; emu_last_length = 0x0064; emu_last_crc = 0x54D4; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_dx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D8B; emu_last_length = 0x0064; emu_last_crc = 0x54D4; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0x140);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D96; emu_last_cs = 0x22A6; emu_last_ip = 0x0D91; emu_last_length = 0x0064; emu_last_crc = 0x54D4; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, 0x13F);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D9F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D9A; emu_last_length = 0x0064; emu_last_crc = 0x54D4; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bp, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_subw(&emu_bp, emu_bx.x);
	emu_incw(&emu_bp);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_si);
	emu_movw(&emu_bx.x, 0x140);
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x30));
	emu_rep_stosb();
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_bp);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DC1; emu_last_cs = 0x22A6; emu_last_ip = 0x0DC8; emu_last_length = 0x0064; emu_last_crc = 0x54D4; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0D7F_0054_80F6()
 *
 * @name f__22A6_0D7F_0054_80F6
 * @implements 22A6:0D7F:0054:80F6 ()
 *
 * Called From: 22A6:0D7B:0064:54D4
 */
void f__22A6_0D7F_0054_80F6()
{
	emu_cmpw(&emu_dx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D83; emu_last_length = 0x0054; emu_last_crc = 0x80F6; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D87; emu_last_length = 0x0054; emu_last_crc = 0x80F6; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, emu_dx.x);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0DCA; emu_last_cs = 0x22A6; emu_last_ip = 0x0D8B; emu_last_length = 0x0054; emu_last_crc = 0x80F6; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0x140);
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_0D96_003D_5FE3(); return; }
	emu_movw(&emu_cx.x, 0x13F);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D9F; emu_last_cs = 0x22A6; emu_last_ip = 0x0D9A; emu_last_length = 0x0054; emu_last_crc = 0x80F6; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bp, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_subw(&emu_bp, emu_bx.x);
	emu_incw(&emu_bp);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_si);
	emu_movw(&emu_bx.x, 0x140);
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x30));
	emu_rep_stosb();
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_bp);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DC1; emu_last_cs = 0x22A6; emu_last_ip = 0x0DC8; emu_last_length = 0x0054; emu_last_crc = 0x80F6; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0D96_003D_5FE3()
 *
 * @name f__22A6_0D96_003D_5FE3
 * @implements 22A6:0D96:003D:5FE3 ()
 *
 * Called From: 22A6:0D91:0054:80F6
 */
void f__22A6_0D96_003D_5FE3()
{
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_0D9F_0034_083A(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bp, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_subw(&emu_bp, emu_bx.x);
	emu_incw(&emu_bp);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_si);
	emu_movw(&emu_bx.x, 0x140);
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x30));
	emu_rep_stosb();
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_bp);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0DC1; emu_last_cs = 0x22A6; emu_last_ip = 0x0DC8; emu_last_length = 0x003D; emu_last_crc = 0x5FE3; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0D9F_0034_083A()
 *
 * @name f__22A6_0D9F_0034_083A
 * @implements 22A6:0D9F:0034:083A ()
 *
 * Called From: 22A6:0D9A:003D:5FE3
 */
void f__22A6_0D9F_0034_083A()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bp, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_di, emu_ax.x);
	emu_shrw(&emu_bx.x, 0x1);
	emu_subw(&emu_bp, emu_bx.x);
	emu_incw(&emu_bp);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_si);
	emu_movw(&emu_bx.x, 0x140);
	emu_subw(&emu_bx.x, emu_cx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, 0x00,  0x30));
	emu_rep_stosb();
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_bp);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0DC1_0012_DB1F(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0DC1_0012_DB1F()
 *
 * @name f__22A6_0DC1_0012_DB1F
 * @implements 22A6:0DC1:0012:DB1F ()
 *
 * Called From: 22A6:0DC8:0012:DB1F
 * Called From: 22A6:0DC8:0034:083A
 */
void f__22A6_0DC1_0012_DB1F()
{
	emu_rep_stosb();
	emu_movw(&emu_cx.x, emu_dx.x);
	emu_addw(&emu_di, emu_bx.x);
	emu_decw(&emu_bp);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_0DC1_0012_DB1F(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_di);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0DF8_0022_BF09()
 *
 * @name f__22A6_0DF8_0022_BF09
 * @implements 22A6:0DF8:0022:BF09 ()
 *
 * Called From: 22A6:079E:000B:3851
 * Called From: 22A6:0861:007A:041F
 * Called From: 22A6:0956:000C:7956
 * Called From: 22A6:0BC7:001B:B43E
 * Called From: 22A6:0BC7:0029:C10A
 * Called From: 22A6:0D43:0015:D6F0
 * Called From: 22A6:0E5C:002B:D20B
 * Called From: 22A6:0F9F:002C:12B6
 */
void f__22A6_0DF8_0022_BF09()
{
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0x11));
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0xF));
	emu_lodsb(emu_ds);
	emu_andw(&emu_ax.x, 0x1E);
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_ds, emu_get_memory16(emu_cs, 0x00,  0xD));
	emu_movw(&emu_si, emu_get_memory16(emu_cs, 0x00,  0xB));
	emu_addw(&emu_si, emu_ax.x);
	emu_lodsw(emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0E1A_0008_291A()
 *
 * @name f__22A6_0E1A_0008_291A
 * @implements 22A6:0E1A:0008:291A ()
 *
 * Called From: 22A6:04B1:000F:9D38
 * Called From: 22A6:0EE2:000A:AA0A
 */
void f__22A6_0E1A_0008_291A()
{
	emu_andw(&emu_ax.x, 0x1E);
	emu_addw(&emu_ax.x, 0x1);
	f__22A6_0E25_000F_B416(); return;
}

/**
 * Decompiled function f__22A6_0E22_0012_B4BE()
 *
 * @name f__22A6_0E22_0012_B4BE
 * @implements 22A6:0E22:0012:B4BE ()
 *
 * Called From: 22A6:045C:0066:6860
 * Called From: 22A6:0464:0008:CCFE
 * Called From: 22A6:04B9:0008:C34A
 * Called From: 22A6:056F:001D:22B9
 * Called From: 22A6:0747:0006:2F0C
 * Called From: 22A6:074F:0008:CD4C
 * Called From: 22A6:10B8:001D:200E
 */
void f__22A6_0E22_0012_B4BE()
{
	emu_andw(&emu_ax.x, 0x1E);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00,  0xB));
	emu_addw(&emu_si, emu_ax.x);
	emu_lodsw(emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0E25_000F_B416()
 *
 * @name f__22A6_0E25_000F_B416
 * @implements 22A6:0E25:000F:B416 ()
 *
 * Called From: 22A6:0E20:0008:291A
 */
void f__22A6_0E25_000F_B416()
{
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, 0x00,  0xB));
	emu_addw(&emu_si, emu_ax.x);
	emu_lodsw(emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__22A6_0E34_002B_D20B()
 *
 * @name f__22A6_0E34_002B_D20B
 * @implements 22A6:0E34:002B:D20B ()
 *
 * Called From: B488:017F:000F:CEAE
 * Called From: B495:1545:0012:547D
 * Called From: B503:0F54:0015:4986
 */
void f__22A6_0E34_002B_D20B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.sf) { emu_ip = 0x0E66; emu_last_cs = 0x22A6; emu_last_ip = 0x0E3F; emu_last_length = 0x002B; emu_last_crc = 0xD20B; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0E66; emu_last_cs = 0x22A6; emu_last_ip = 0x0E45; emu_last_length = 0x002B; emu_last_crc = 0xD20B; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_si, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.sf) { emu_ip = 0x0E66; emu_last_cs = 0x22A6; emu_last_ip = 0x0E53; emu_last_length = 0x002B; emu_last_crc = 0xD20B; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0E66; emu_last_cs = 0x22A6; emu_last_ip = 0x0E58; emu_last_length = 0x002B; emu_last_crc = 0xD20B; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_si, emu_ax.x);
	emu_push(0x0E5F); f__22A6_0DF8_0022_BF09();
	f__22A6_0E5F_0007_6328();
}

/**
 * Decompiled function f__22A6_0E5F_0007_6328()
 *
 * @name f__22A6_0E5F_0007_6328
 * @implements 22A6:0E5F:0007:6328 ()
 *
 * Called From: 22A6:0E5F:002B:D20B
 */
void f__22A6_0E5F_0007_6328()
{
	emu_movw(&emu_ds, emu_ax.x);
	emu_lodsb(emu_ds);
	emu_xorb(&emu_ax.h, emu_ax.h);
	f__22A6_0E68_0005_080A(); return;
}

/**
 * Decompiled function f__22A6_0E68_0005_080A()
 *
 * @name f__22A6_0E68_0005_080A
 * @implements 22A6:0E68:0005:080A ()
 *
 * Called From: 22A6:0E64:0007:6328
 */
void f__22A6_0E68_0005_080A()
{
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0EC6_0014_D306()
 *
 * @name f__22A6_0EC6_0014_D306
 * @implements 22A6:0EC6:0014:D306 ()
 *
 * Called From: 22A6:0004:0003:05A8
 */
void f__22A6_0EC6_0014_D306()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cx.x);
	emu_movw(&emu_bx.x, 0x13B4);
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_bx.x, emu_cx.l);
	emu_incw(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_bx.x);
	emu_movw(&emu_ax.x, 0xE6D);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0EDB_000A_AA0A()
 *
 * @name f__22A6_0EDB_000A_AA0A
 * @implements 22A6:0EDB:000A:AA0A ()
 *
 * Called From: 1587:0353:0021:3043
 */
void f__22A6_0EDB_000A_AA0A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(0x0EE5); f__22A6_0E1A_0008_291A();
	f__22A6_0EE5_0031_3C80();
}

/**
 * Decompiled function f__22A6_0EE5_0031_3C80()
 *
 * @name f__22A6_0EE5_0031_3C80
 * @implements 22A6:0EE5:0031:3C80 ()
 *
 * Called From: 22A6:0EE5:000A:AA0A
 */
void f__22A6_0EE5_0031_3C80()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x325), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x323), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x31B), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x31D), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x31F), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x321), emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x327), emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0F76_002C_12B6()
 *
 * @name f__22A6_0F76_002C_12B6
 * @implements 22A6:0F76:002C:12B6 ()
 *
 * Called From: 10E4:00EE:001B:24DE
 * Called From: 10E4:0109:001B:2D55
 * Called From: B488:01B0:0011:4C41
 */
void f__22A6_0F76_002C_12B6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_orw(&emu_bx.x, emu_bx.x);
	if (emu_flags.sf) { emu_ip = 0x0FA8; emu_last_cs = 0x22A6; emu_last_ip = 0x0F82; emu_last_length = 0x002C; emu_last_crc = 0x12B6; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_bx.x, 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0FA8; emu_last_cs = 0x22A6; emu_last_ip = 0x0F88; emu_last_length = 0x002C; emu_last_crc = 0x12B6; emu_call(); return; } // Jump does not resolve
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_di, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.sf) { emu_ip = 0x0FA8; emu_last_cs = 0x22A6; emu_last_ip = 0x0F96; emu_last_length = 0x002C; emu_last_crc = 0x12B6; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x140);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0FA8; emu_last_cs = 0x22A6; emu_last_ip = 0x0F9B; emu_last_length = 0x002C; emu_last_crc = 0x12B6; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_di, emu_ax.x);
	emu_push(0x0FA2); f__22A6_0DF8_0022_BF09();
	f__22A6_0FA2_000C_0FBE();
}

/**
 * Decompiled function f__22A6_0FA2_000C_0FBE()
 *
 * @name f__22A6_0FA2_000C_0FBE
 * @implements 22A6:0FA2:000C:0FBE ()
 *
 * Called From: 22A6:0FA2:002C:12B6
 */
void f__22A6_0FA2_000C_0FBE()
{
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_stosb();
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0FAE_0027_9A7A()
 *
 * @name f__22A6_0FAE_0027_9A7A
 * @implements 22A6:0FAE:0027:9A7A ()
 *
 * Called From: 29A3:0171:0004:0D5C
 * Called From: 29A3:01B1:0004:0D5C
 * Called From: 2B4C:004A:0004:0D5C
 * Called From: 2B4C:01ED:0004:0D5C
 * Called From: 2B6C:015E:0004:0D5C
 * Called From: 2B6C:018E:0004:0D5C
 * Called From: 2B6C:026C:0004:0D5C
 * Called From: 2B6C:02C1:0004:0D5C
 * Called From: 2B99:0076:0004:0D5C
 */
void f__22A6_0FAE_0027_9A7A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x26));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x31), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x28));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x33), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x2A));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x35), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x2C));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x37), emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_0FD7_0043_03A9()
 *
 * @name f__22A6_0FD7_0043_03A9
 * @implements 22A6:0FD7:0043:03A9 ()
 *
 * Called From: 29A3:0165:0017:4C43
 * Called From: 29A3:0165:002A:9C56
 * Called From: 29A3:01A5:000C:3390
 * Called From: 2B4C:003E:0017:F193
 * Called From: 2B4C:01E1:0047:98DA
 * Called From: 2B6C:0153:0020:17E5
 * Called From: 2B6C:0183:001E:97C8
 * Called From: 2B6C:0261:007B:EAE2
 * Called From: 2B6C:0261:008B:06FE
 * Called From: 2B6C:0261:009B:5987
 * Called From: 2B6C:0261:00CE:7027
 * Called From: 2B6C:02B6:0028:CAA5
 * Called From: 2B99:0065:000C:3390
 */
void f__22A6_0FD7_0043_03A9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x31));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x26), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x31), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x33));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x28), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x33), 0x28);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x35));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x2A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x35), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, 0x00,  0x37));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x2C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x37), 0xC8);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_101C_004B_C8B8()
 *
 * @name f__22A6_101C_004B_C8B8
 * @implements 22A6:101C:004B:C8B8 ()
 *
 * Called From: 10E4:039B:002B:42E1
 * Called From: 2B6C:0106:0025:CC12
 * Called From: 2B6C:0106:002F:CF7D
 * Called From: 2B6C:0106:0045:415A
 * Called From: B4F2:0F15:001D:1D71
 * Called From: B53B:0147:0028:4EF1
 */
void f__22A6_101C_004B_C8B8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_cld();
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_si, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_103A_002D_EB83(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_cmpws(&emu_si, 0x28);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x1042; emu_last_cs = 0x22A6; emu_last_ip = 0x103D; emu_last_length = 0x004B; emu_last_crc = 0xC8B8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, 0x27);
	emu_shlw(&emu_si, 0x1);
	emu_shlw(&emu_si, 0x1);
	emu_shlw(&emu_si, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x1052; emu_last_cs = 0x22A6; emu_last_ip = 0x104E; emu_last_length = 0x004B; emu_last_crc = 0xC8B8; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x105B; emu_last_cs = 0x22A6; emu_last_ip = 0x1056; emu_last_length = 0x004B; emu_last_crc = 0xC8B8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_bx.x, 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1067; emu_last_cs = 0x22A6; emu_last_ip = 0x1061; emu_last_length = 0x004B; emu_last_crc = 0xC8B8; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x10D2; emu_last_cs = 0x22A6; emu_last_ip = 0x1065; emu_last_length = 0x004B; emu_last_crc = 0xC8B8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_103A_002D_EB83()
 *
 * @name f__22A6_103A_002D_EB83
 * @implements 22A6:103A:002D:EB83 ()
 *
 * Called From: 22A6:1036:004B:C8B8
 */
void f__22A6_103A_002D_EB83()
{
	emu_cmpws(&emu_si, 0x28);
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_1042_0025_701C(); return; }
	emu_movw(&emu_si, 0x27);
	emu_shlw(&emu_si, 0x1);
	emu_shlw(&emu_si, 0x1);
	emu_shlw(&emu_si, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x1052; emu_last_cs = 0x22A6; emu_last_ip = 0x104E; emu_last_length = 0x002D; emu_last_crc = 0xEB83; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x105B; emu_last_cs = 0x22A6; emu_last_ip = 0x1056; emu_last_length = 0x002D; emu_last_crc = 0xEB83; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_bx.x, 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1067; emu_last_cs = 0x22A6; emu_last_ip = 0x1061; emu_last_length = 0x002D; emu_last_crc = 0xEB83; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x10D2; emu_last_cs = 0x22A6; emu_last_ip = 0x1065; emu_last_length = 0x002D; emu_last_crc = 0xEB83; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_1042_0025_701C()
 *
 * @name f__22A6_1042_0025_701C
 * @implements 22A6:1042:0025:701C ()
 *
 * Called From: 22A6:103D:002D:EB83
 */
void f__22A6_1042_0025_701C()
{
	emu_shlw(&emu_si, 0x1);
	emu_shlw(&emu_si, 0x1);
	emu_shlw(&emu_si, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_1052_0015_5556(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x105B; emu_last_cs = 0x22A6; emu_last_ip = 0x1056; emu_last_length = 0x0025; emu_last_crc = 0x701C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_bx.x, 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1067; emu_last_cs = 0x22A6; emu_last_ip = 0x1061; emu_last_length = 0x0025; emu_last_crc = 0x701C; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x10D2; emu_last_cs = 0x22A6; emu_last_ip = 0x1065; emu_last_length = 0x0025; emu_last_crc = 0x701C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_1052_0015_5556()
 *
 * @name f__22A6_1052_0015_5556
 * @implements 22A6:1052:0015:5556 ()
 *
 * Called From: 22A6:104E:0025:701C
 */
void f__22A6_1052_0015_5556()
{
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.sf != emu_flags.of)) { f__22A6_105B_000C_8C01(); return; }
	emu_movw(&emu_dx.x, 0xC7);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_bx.x, 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1067; emu_last_cs = 0x22A6; emu_last_ip = 0x1061; emu_last_length = 0x0015; emu_last_crc = 0x5556; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x10D2; emu_last_cs = 0x22A6; emu_last_ip = 0x1065; emu_last_length = 0x0015; emu_last_crc = 0x5556; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_105B_000C_8C01()
 *
 * @name f__22A6_105B_000C_8C01
 * @implements 22A6:105B:000C:8C01 ()
 *
 * Called From: 22A6:1056:0015:5556
 */
void f__22A6_105B_000C_8C01()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_bx.x, 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_1067_002E_A4C4(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x10D2; emu_last_cs = 0x22A6; emu_last_ip = 0x1065; emu_last_length = 0x000C; emu_last_crc = 0x8C01; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_1067_002E_A4C4()
 *
 * @name f__22A6_1067_002E_A4C4
 * @implements 22A6:1067:002E:A4C4 ()
 *
 * Called From: 22A6:1061:000C:8C01
 */
void f__22A6_1067_002E_A4C4()
{
	emu_cmpws(&emu_bx.x, 0x28);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_106F_0026_26FB(); return; }
	emu_movw(&emu_bx.x, 0x28);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_cx.x, 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1063; emu_last_cs = 0x22A6; emu_last_ip = 0x1075; emu_last_length = 0x002E; emu_last_crc = 0xA4C4; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1080; emu_last_cs = 0x22A6; emu_last_ip = 0x107B; emu_last_length = 0x002E; emu_last_crc = 0xA4C4; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_cx.x, 0xC8);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_di);
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_cmpws(&emu_bx.x, 0x28);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x108F; emu_last_cs = 0x22A6; emu_last_ip = 0x108A; emu_last_length = 0x002E; emu_last_crc = 0xA4C4; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, 0x28);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.zf) { emu_ip = 0x1095; emu_last_cs = 0x22A6; emu_last_ip = 0x1091; emu_last_length = 0x002E; emu_last_crc = 0xA4C4; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x10CD; emu_last_cs = 0x22A6; emu_last_ip = 0x1093; emu_last_length = 0x002E; emu_last_crc = 0xA4C4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_106F_0026_26FB()
 *
 * @name f__22A6_106F_0026_26FB
 * @implements 22A6:106F:0026:26FB ()
 *
 * Called From: 22A6:106A:002E:A4C4
 */
void f__22A6_106F_0026_26FB()
{
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpws(&emu_cx.x, 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1063; emu_last_cs = 0x22A6; emu_last_ip = 0x1075; emu_last_length = 0x0026; emu_last_crc = 0x26FB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_1080_0015_C9FD(); return; }
	emu_movw(&emu_cx.x, 0xC8);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_di);
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_cmpws(&emu_bx.x, 0x28);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x108F; emu_last_cs = 0x22A6; emu_last_ip = 0x108A; emu_last_length = 0x0026; emu_last_crc = 0x26FB; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, 0x28);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.zf) { emu_ip = 0x1095; emu_last_cs = 0x22A6; emu_last_ip = 0x1091; emu_last_length = 0x0026; emu_last_crc = 0x26FB; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x10CD; emu_last_cs = 0x22A6; emu_last_ip = 0x1093; emu_last_length = 0x0026; emu_last_crc = 0x26FB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_1080_0015_C9FD()
 *
 * @name f__22A6_1080_0015_C9FD
 * @implements 22A6:1080:0015:C9FD ()
 *
 * Called From: 22A6:107B:0026:26FB
 */
void f__22A6_1080_0015_C9FD()
{
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_di);
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_cmpws(&emu_bx.x, 0x28);
	if ((emu_flags.cf || emu_flags.zf)) { f__22A6_108F_0006_1D3C(); return; }
	emu_movw(&emu_bx.x, 0x28);
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.zf) { emu_ip = 0x1095; emu_last_cs = 0x22A6; emu_last_ip = 0x1091; emu_last_length = 0x0015; emu_last_crc = 0xC9FD; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x10CD; emu_last_cs = 0x22A6; emu_last_ip = 0x1093; emu_last_length = 0x0015; emu_last_crc = 0xC9FD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_108F_0006_1D3C()
 *
 * @name f__22A6_108F_0006_1D3C
 * @implements 22A6:108F:0006:1D3C ()
 *
 * Called From: 22A6:108A:0015:C9FD
 */
void f__22A6_108F_0006_1D3C()
{
	emu_orw(&emu_bx.x, emu_bx.x);
	if (!emu_flags.zf) { f__22A6_1095_0026_12ED(); return; }
	emu_ip = 0x10CD; emu_last_cs = 0x22A6; emu_last_ip = 0x1093; emu_last_length = 0x0006; emu_last_crc = 0x1D3C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__22A6_1095_0026_12ED()
 *
 * @name f__22A6_1095_0026_12ED
 * @implements 22A6:1095:0026:12ED ()
 *
 * Called From: 22A6:1091:0006:1D3C
 */
void f__22A6_1095_0026_12ED()
{
	emu_cmpw(&emu_cx.x, 0xC8);
	if ((emu_flags.cf || emu_flags.zf)) { f__22A6_109E_001D_200E(); return; }
	emu_movw(&emu_cx.x, 0xC8);
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { emu_ip = 0x1093; emu_last_cs = 0x22A6; emu_last_ip = 0x10A0; emu_last_length = 0x0026; emu_last_crc = 0x12ED; emu_call(); return; } // Jump does not resolve
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_si, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(0x10BB); emu_ip = 0x0E22; emu_last_cs = 0x22A6; emu_last_ip = 0x10B8; emu_last_length = 0x0026; emu_last_crc = 0x12ED; emu_call(); // Jump does not resolve
	f__22A6_10BB_0022_130B();
}

/**
 * Decompiled function f__22A6_109E_001D_200E()
 *
 * @name f__22A6_109E_001D_200E
 * @implements 22A6:109E:001D:200E ()
 *
 * Called From: 22A6:1099:0026:12ED
 */
void f__22A6_109E_001D_200E()
{
	emu_orw(&emu_cx.x, emu_cx.x);
	if (emu_flags.zf) { emu_ip = 0x1093; emu_last_cs = 0x22A6; emu_last_ip = 0x10A0; emu_last_length = 0x001D; emu_last_crc = 0x200E; emu_call(); return; } // Jump does not resolve
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x17D));
	emu_addw(&emu_si, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_dx.x, emu_cx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(0x10BB); f__22A6_0E22_0012_B4BE();
	f__22A6_10BB_0022_130B();
}

/**
 * Decompiled function f__22A6_10BB_0022_130B()
 *
 * @name f__22A6_10BB_0022_130B
 * @implements 22A6:10BB:0022:130B ()
 *
 * Called From: 22A6:10BB:001D:200E
 */
void f__22A6_10BB_0022_130B()
{
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_ax.x, 0xA0);
	emu_subw(&emu_ax.x, emu_bx.x);
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_cx.x, emu_bx.x);
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_si, emu_ax.x);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_10C4_0019_4867(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_pop(&emu_di);
	emu_subw(&emu_ax.x, emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_10C4_0019_4867()
 *
 * @name f__22A6_10C4_0019_4867
 * @implements 22A6:10C4:0019:4867 ()
 *
 * Called From: 22A6:10CB:0019:4867
 * Called From: 22A6:10CB:0022:130B
 */
void f__22A6_10C4_0019_4867()
{
	emu_movw(&emu_cx.x, emu_bx.x);
	emu_rep_movsw(emu_ds);
	emu_addw(&emu_si, emu_ax.x);
	emu_decw(&emu_dx.x);
	if (!emu_flags.zf) { f__22A6_10C4_0019_4867(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_pop(&emu_di);
	emu_subw(&emu_ax.x, emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_10DD_0023_8292()
 *
 * @name f__22A6_10DD_0023_8292
 * @implements 22A6:10DD:0023:8292 ()
 *
 * Called From: 07D4:0880:0044:49B9
 * Called From: 07D4:08EF:0018:EF0D
 * Called From: 07D4:08EF:001B:F30A
 */
void f__22A6_10DD_0023_8292()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x68), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6A), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6C), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x6E), emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_1102_004C_6FA8()
 *
 * @name f__22A6_1102_004C_6FA8
 * @implements 22A6:1102:004C:6FA8 ()
 *
 * Called From: 259E:0036:001A:9268
 * Called From: 2BC2:007B:0024:0133
 */
void f__22A6_1102_004C_6FA8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_cld();
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andws(&emu_bx.x, 0xF);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_andws(&emu_cx.x, 0xF);
	emu_cmpw(&emu_cx.x, emu_bx.x);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x1145; emu_last_cs = 0x22A6; emu_last_ip = 0x1121; emu_last_length = 0x004C; emu_last_crc = 0x6FA8; emu_call(); return; } // Jump does not resolve
	emu_subw(&emu_cx.x, emu_bx.x);
	emu_incw(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_cs);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_di, 0x87);
	emu_addw(&emu_di, emu_bx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_shlw(&emu_bx.x, 0x1);
	emu_addw(&emu_bx.x, 0x87);
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_addws(&emu_bx.x, 0x10);
	if (--emu_cx.x != 0) { f__22A6_113B_0013_AC40(); return; }
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_113B_0013_AC40()
 *
 * @name f__22A6_113B_0013_AC40
 * @implements 22A6:113B:0013:AC40 ()
 *
 * Called From: 22A6:1143:0013:AC40
 * Called From: 22A6:1143:004C:6FA8
 */
void f__22A6_113B_0013_AC40()
{
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_addws(&emu_bx.x, 0x10);
	if (--emu_cx.x != 0) { f__22A6_113B_0013_AC40(); return; }
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_1158_0069_98BA()
 *
 * @name f__22A6_1158_0069_98BA
 * @implements 22A6:1158:0069:98BA ()
 *
 * Called From: 1587:0071:001D:C42D
 */
void f__22A6_1158_0069_98BA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x347), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x349), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax.x, emu_bx.x);
	if (!emu_flags.zf) { emu_ip = 0x11C1; emu_last_cs = 0x22A6; emu_last_ip = 0x1174; emu_last_length = 0x0069; emu_last_crc = 0x98BA; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x3);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x11C1; emu_last_cs = 0x22A6; emu_last_ip = 0x1179; emu_last_length = 0x0069; emu_last_crc = 0x98BA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x34B), 0x1);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x34D), 0x1);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_andws(&emu_cx.x, 0x2);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x33F), emu_cx.x);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_rcrw(&emu_cx.x, 0x1);
	emu_shlw(&emu_cx.x, 0x1);
	emu_rclw(&emu_cx.x, 0x1);
	emu_shlw(&emu_cx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x341), emu_cx.x);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_shlw(&emu_cx.x, 0x1);
	emu_shlw(&emu_cx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x33D), emu_cx.x);
	emu_shlw(&emu_cx.x, 0x1);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x33B), emu_cx.x);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_addw(&emu_cx.x, 0x140);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x339), emu_cx.x);
	f__22A6_11F2_000E_31E8(); return;
}

/**
 * Decompiled function f__22A6_11F2_000E_31E8()
 *
 * @name f__22A6_11F2_000E_31E8
 * @implements 22A6:11F2:000E:31E8 ()
 *
 * Called From: 22A6:11BF:0069:98BA
 */
void f__22A6_11F2_000E_31E8()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x345), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x343), emu_bx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_127B_0036_5409()
 *
 * @name f__22A6_127B_0036_5409
 * @implements 22A6:127B:0036:5409 ()
 *
 * Called From: 10E4:0343:001C:93A4
 * Called From: 2B4C:0064:001A:AED0
 * Called From: B53B:00F2:0051:3A1F
 */
void f__22A6_127B_0036_5409()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_128B_0026_A977(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_cmpw(&emu_ax.x, 0x28);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1293; emu_last_cs = 0x22A6; emu_last_ip = 0x128E; emu_last_length = 0x0036; emu_last_crc = 0x5409; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x28);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x129E; emu_last_cs = 0x22A6; emu_last_ip = 0x1299; emu_last_length = 0x0036; emu_last_crc = 0x5409; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0x1);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x12A7; emu_last_cs = 0x22A6; emu_last_ip = 0x12A2; emu_last_length = 0x0036; emu_last_crc = 0x5409; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0xC8);
	emu_mulw(&emu_ax.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_128B_0026_A977()
 *
 * @name f__22A6_128B_0026_A977
 * @implements 22A6:128B:0026:A977 ()
 *
 * Called From: 22A6:1286:0036:5409
 */
void f__22A6_128B_0026_A977()
{
	emu_cmpw(&emu_ax.x, 0x28);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_1293_001E_A193(); return; }
	emu_movw(&emu_ax.x, 0x28);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x129E; emu_last_cs = 0x22A6; emu_last_ip = 0x1299; emu_last_length = 0x0026; emu_last_crc = 0xA977; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0x1);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x12A7; emu_last_cs = 0x22A6; emu_last_ip = 0x12A2; emu_last_length = 0x0026; emu_last_crc = 0xA977; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0xC8);
	emu_mulw(&emu_ax.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_1293_001E_A193()
 *
 * @name f__22A6_1293_001E_A193
 * @implements 22A6:1293:001E:A193 ()
 *
 * Called From: 22A6:128E:0026:A977
 */
void f__22A6_1293_001E_A193()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { f__22A6_129E_0013_819C(); return; }
	emu_movw(&emu_dx.x, 0x1);
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x12A7; emu_last_cs = 0x22A6; emu_last_ip = 0x12A2; emu_last_length = 0x001E; emu_last_crc = 0xA193; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0xC8);
	emu_mulw(&emu_ax.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_129E_0013_819C()
 *
 * @name f__22A6_129E_0013_819C
 * @implements 22A6:129E:0013:819C ()
 *
 * Called From: 22A6:1299:001E:A193
 */
void f__22A6_129E_0013_819C()
{
	emu_cmpw(&emu_dx.x, 0xC8);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__22A6_12A7_000A_87C8(); return; }
	emu_movw(&emu_dx.x, 0xC8);
	emu_mulw(&emu_ax.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__22A6_12A7_000A_87C8()
 *
 * @name f__22A6_12A7_000A_87C8
 * @implements 22A6:12A7:000A:87C8 ()
 *
 * Called From: 22A6:12A2:0013:819C
 */
void f__22A6_12A7_000A_87C8()
{
	emu_mulw(&emu_ax.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
