/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4B1_0000_0016_A6CB()
 *
 * @name f__B4B1_0000_0016_A6CB
 * @implements B4B1:0000:0016:A6CB ()
 *
 * Called From: 34B1:0020:0005:1C06
 * Called From: 34B1:0020:0005:1C40
 * Called From: 34B1:0020:0005:1C8A
 * Called From: 34B1:0020:0005:1DB8
 * Called From: 34B1:0020:0005:1DEE
 * Called From: 34B1:0020:0005:1E04
 * Called From: 34B1:0020:0005:1EC8
 * Called From: 34B1:0020:0005:1EDA
 * Called From: 34B1:0020:0005:1EFA
 * Called From: 34B1:0020:0005:1E9E
 * Called From: 34B1:0020:0005:1D56
 * Called From: 34B1:0020:0005:1E70
 * Called From: 34B1:0020:0005:1C5A
 * Called From: 34B1:0020:0005:1E1A
 */
void f__B4B1_0000_0016_A6CB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0016); emu_cs = 0x1FB5; f__1FB5_01FA_0010_D47C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0016_000B_FF15();
}

/**
 * Decompiled function f__B4B1_0016_000B_FF15()
 *
 * @name f__B4B1_0016_000B_FF15
 * @implements B4B1:0016:000B:FF15 ()
 *
 * Called From: B4B1:0016:0016:A6CB
 */
void f__B4B1_0016_000B_FF15()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0021); emu_cs = 0x1FB5; f__1FB5_09C7_0018_F3A8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0021_0010_AB84();
}

/**
 * Decompiled function f__B4B1_0021_0010_AB84()
 *
 * @name f__B4B1_0021_0010_AB84
 * @implements B4B1:0021:0010:AB84 ()
 *
 * Called From: B4B1:0021:000B:FF15
 */
void f__B4B1_0021_0010_AB84()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0031); emu_cs = 0x1FB5; f__1FB5_01FA_0010_D47C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0031_0017_8833();
}

/**
 * Decompiled function f__B4B1_0031_0017_8833()
 *
 * @name f__B4B1_0031_0017_8833
 * @implements B4B1:0031:0017:8833 ()
 *
 * Called From: B4B1:0031:0010:AB84
 */
void f__B4B1_0031_0017_8833()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0048); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0048_0022_37A8();
}

/**
 * Decompiled function f__B4B1_0048_0022_37A8()
 *
 * @name f__B4B1_0048_0022_37A8
 * @implements B4B1:0048:0022:37A8 ()
 *
 * Called From: B4B1:0048:0017:8833
 */
void f__B4B1_0048_0022_37A8()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4D52);
	if (!emu_flags.zf) { emu_ip = 0x006F; emu_last_cs = 0xB4B1; emu_last_ip = 0x0050; emu_last_length = 0x0022; emu_last_crc = 0x37A8; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x4F46);
	if (!emu_flags.zf) { emu_ip = 0x006F; emu_last_cs = 0xB4B1; emu_last_ip = 0x0057; emu_last_length = 0x0022; emu_last_crc = 0x37A8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x006A); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_006A_0005_1FD8();
}

/**
 * Decompiled function f__B4B1_006A_0005_1FD8()
 *
 * @name f__B4B1_006A_0005_1FD8
 * @implements B4B1:006A:0005:1FD8 ()
 *
 * Called From: B4B1:006A:0022:37A8
 */
void f__B4B1_006A_0005_1FD8()
{
	emu_addws(&emu_sp, 0x8);
	f__B4B1_0079_0004_0D2C(); return;
}

/**
 * Decompiled function f__B4B1_0079_0004_0D2C()
 *
 * @name f__B4B1_0079_0004_0D2C
 * @implements B4B1:0079:0004:0D2C ()
 *
 * Called From: B4B1:006D:0005:1FD8
 */
void f__B4B1_0079_0004_0D2C()
{
	emu_movw(&emu_ax.x, emu_si);
	f__B4B1_007D_0005_04BA(); return;
}

/**
 * Decompiled function f__B4B1_007D_0005_04BA()
 *
 * @name f__B4B1_007D_0005_04BA
 * @implements B4B1:007D:0005:04BA ()
 *
 * Called From: B4B1:007B:0004:0D2C
 */
void f__B4B1_007D_0005_04BA()
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
 * Decompiled function f__B4B1_0082_0012_013D()
 *
 * @name f__B4B1_0082_0012_013D
 * @implements B4B1:0082:0012:013D ()
 *
 * Called From: 34B1:0034:0005:1426
 * Called From: 34B1:0034:0005:1460
 * Called From: 34B1:0034:0005:14AA
 * Called From: 34B1:0034:0005:1598
 * Called From: 34B1:0034:0005:15CE
 * Called From: 34B1:0034:0005:1624
 * Called From: 34B1:0034:0005:16DA
 * Called From: 34B1:0034:0005:16E8
 * Called From: 34B1:0034:0005:16FA
 * Called From: 34B1:0034:0005:16BE
 * Called From: 34B1:0034:0005:1576
 * Called From: 34B1:0034:0005:1650
 * Called From: 34B1:0034:0005:147A
 * Called From: 34B1:0034:0005:163A
 */
void f__B4B1_0082_0012_013D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0095; emu_last_cs = 0xB4B1; emu_last_ip = 0x008C; emu_last_length = 0x0012; emu_last_crc = 0x013D; emu_call(); return; } // Jump does not resolve
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0094); emu_cs = 0x1FB5; f__1FB5_09C7_0018_F3A8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0094_0004_0782();
}

/**
 * Decompiled function f__B4B1_0094_0004_0782()
 *
 * @name f__B4B1_0094_0004_0782
 * @implements B4B1:0094:0004:0782 ()
 *
 * Called From: B4B1:0094:0012:013D
 */
void f__B4B1_0094_0004_0782()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B1_0098_002A_4C8A()
 *
 * @name f__B4B1_0098_002A_4C8A
 * @implements B4B1:0098:002A:4C8A ()
 *
 * Called From: 34B1:002F:0005:1438
 * Called From: 34B1:002F:0005:146E
 * Called From: 34B1:002F:0005:150A
 * Called From: 34B1:002F:0005:1586
 * Called From: 34B1:002F:0005:1748
 * Called From: 34B1:002F:0005:175A
 * Called From: 34B1:002F:0005:177A
 * Called From: 34B1:002F:0005:1784
 * Called From: 34B1:002F:0005:17F0
 */
void f__B4B1_0098_002A_4C8A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00C2); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_00C2_0017_47F7();
}

/**
 * Decompiled function f__B4B1_00B0_0012_F743()
 *
 * @name f__B4B1_00B0_0012_F743
 * @implements B4B1:00B0:0012:F743 ()
 *
 * Called From: B4B1:01BF:0003:050C
 * Called From: B4B1:01BF:0006:3DCC
 */
void f__B4B1_00B0_0012_F743()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00C2); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_00C2_0017_47F7();
}

/**
 * Decompiled function f__B4B1_00C2_0017_47F7()
 *
 * @name f__B4B1_00C2_0017_47F7
 * @implements B4B1:00C2:0017:47F7 ()
 *
 * Called From: B4B1:00C2:0012:F743
 * Called From: B4B1:00C2:002A:4C8A
 */
void f__B4B1_00C2_0017_47F7()
{
	emu_addws(&emu_sp, 0xA);
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x00CE; emu_last_cs = 0xB4B1; emu_last_ip = 0x00C7; emu_last_length = 0x0017; emu_last_crc = 0x47F7; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x4);
	if (emu_flags.zf) { f__B4B1_00D9_001A_A699(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4B1_00D9_001A_A699(); return; }
	f__B4B1_01C2_0006_114E(); return;
}

/**
 * Decompiled function f__B4B1_00D9_001A_A699()
 *
 * @name f__B4B1_00D9_001A_A699
 * @implements B4B1:00D9:001A:A699 ()
 *
 * Called From: B4B1:00CC:0017:47F7
 * Called From: B4B1:00D4:0017:47F7
 */
void f__B4B1_00D9_001A_A699()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B4B1_010A_0012_F343(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00F3); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_00F3_0017_46B3();
}

/**
 * Decompiled function f__B4B1_00F3_0017_46B3()
 *
 * @name f__B4B1_00F3_0017_46B3
 * @implements B4B1:00F3:0017:46B3 ()
 *
 * Called From: B4B1:00F3:001A:A699
 */
void f__B4B1_00F3_0017_46B3()
{
	emu_addws(&emu_sp, 0xA);
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x00FF; emu_last_cs = 0xB4B1; emu_last_ip = 0x00F8; emu_last_length = 0x0017; emu_last_crc = 0x46B3; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x4);
	if (emu_flags.zf) { emu_ip = 0x010A; emu_last_cs = 0xB4B1; emu_last_ip = 0x00FD; emu_last_length = 0x0017; emu_last_crc = 0x46B3; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4B1_010A_0012_F343(); return; }
	emu_ip = 0x01C2; emu_last_cs = 0xB4B1; emu_last_ip = 0x0107; emu_last_length = 0x0017; emu_last_crc = 0x46B3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B1_010A_0012_F343()
 *
 * @name f__B4B1_010A_0012_F343
 * @implements B4B1:010A:0012:F343 ()
 *
 * Called From: B4B1:00DF:001A:A699
 * Called From: B4B1:0105:0017:46B3
 */
void f__B4B1_010A_0012_F343()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x011C); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_011C_0017_466F();
}

/**
 * Decompiled function f__B4B1_011C_0017_466F()
 *
 * @name f__B4B1_011C_0017_466F
 * @implements B4B1:011C:0017:466F ()
 *
 * Called From: B4B1:011C:0012:F343
 */
void f__B4B1_011C_0017_466F()
{
	emu_addws(&emu_sp, 0xA);
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x0128; emu_last_cs = 0xB4B1; emu_last_ip = 0x0121; emu_last_length = 0x0017; emu_last_crc = 0x466F; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x4);
	if (emu_flags.zf) { f__B4B1_0133_000B_3E51(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4B1_0133_000B_3E51(); return; }
	emu_ip = 0x01C2; emu_last_cs = 0xB4B1; emu_last_ip = 0x0130; emu_last_length = 0x0017; emu_last_crc = 0x466F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B1_0133_000B_3E51()
 *
 * @name f__B4B1_0133_000B_3E51
 * @implements B4B1:0133:000B:3E51 ()
 *
 * Called From: B4B1:0126:0017:466F
 * Called From: B4B1:012E:0017:466F
 */
void f__B4B1_0133_000B_3E51()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x013E); emu_cs = 0x2BC0; f__2BC0_0004_000F_2F6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_013E_002A_5DE9();
}

/**
 * Decompiled function f__B4B1_013E_002A_5DE9()
 *
 * @name f__B4B1_013E_002A_5DE9
 * @implements B4B1:013E:002A:5DE9 ()
 *
 * Called From: B4B1:013E:000B:3E51
 */
void f__B4B1_013E_002A_5DE9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B4B1_0175_0016_DCD0(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { emu_ip = 0x0175; emu_last_cs = 0xB4B1; emu_last_ip = 0x0154; emu_last_length = 0x002A; emu_last_crc = 0x5DE9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_movw(&emu_dx.x, 0xFFF8);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0168); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0168_000B_9741();
}

/**
 * Decompiled function f__B4B1_0168_000B_9741()
 *
 * @name f__B4B1_0168_000B_9741
 * @implements B4B1:0168:000B:9741 ()
 *
 * Called From: B4B1:0168:002A:5DE9
 */
void f__B4B1_0168_000B_9741()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__B4B1_01C8_0005_04BA(); return;
}

/**
 * Decompiled function f__B4B1_0171_0002_0306()
 *
 * @name f__B4B1_0171_0002_0306
 * @implements B4B1:0171:0002:0306 ()
 *
 * Called From: B4B1:01C6:0006:114E
 */
void f__B4B1_0171_0002_0306()
{
	f__B4B1_01C8_0005_04BA(); return;
}

/**
 * Decompiled function f__B4B1_0175_0016_DCD0()
 *
 * @name f__B4B1_0175_0016_DCD0
 * @implements B4B1:0175:0016:DCD0 ()
 *
 * Called From: B4B1:014F:002A:5DE9
 */
void f__B4B1_0175_0016_DCD0()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	if (emu_flags.zf) { f__B4B1_0194_0028_EDF9(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x018B); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_018B_0009_F3CB();
}

/**
 * Decompiled function f__B4B1_018B_0009_F3CB()
 *
 * @name f__B4B1_018B_0009_F3CB
 * @implements B4B1:018B:0009:F3CB ()
 *
 * Called From: B4B1:018B:0016:DCD0
 */
void f__B4B1_018B_0009_F3CB()
{
	emu_addws(&emu_sp, 0x8);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	f__B4B1_01BF_0003_050C(); return;
}

/**
 * Decompiled function f__B4B1_0194_0028_EDF9()
 *
 * @name f__B4B1_0194_0028_EDF9
 * @implements B4B1:0194:0028:EDF9 ()
 *
 * Called From: B4B1:0179:0016:DCD0
 */
void f__B4B1_0194_0028_EDF9()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addws(&emu_dx.x, 0x1);
	emu_adcw(&emu_ax.x, 0x0);
	emu_andws(&emu_dx.x, 0xFE);
	emu_andw(&emu_ax.x, 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01BC); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_01BC_0006_3DCC();
}

/**
 * Decompiled function f__B4B1_01BC_0006_3DCC()
 *
 * @name f__B4B1_01BC_0006_3DCC
 * @implements B4B1:01BC:0006:3DCC ()
 *
 * Called From: B4B1:01BC:0028:EDF9
 */
void f__B4B1_01BC_0006_3DCC()
{
	emu_addws(&emu_sp, 0x8);
	f__B4B1_00B0_0012_F743(); return;
}

/**
 * Decompiled function f__B4B1_01BF_0003_050C()
 *
 * @name f__B4B1_01BF_0003_050C
 * @implements B4B1:01BF:0003:050C ()
 *
 * Called From: B4B1:0192:0009:F3CB
 */
void f__B4B1_01BF_0003_050C()
{
	f__B4B1_00B0_0012_F743(); return;
}

/**
 * Decompiled function f__B4B1_01C2_0006_114E()
 *
 * @name f__B4B1_01C2_0006_114E
 * @implements B4B1:01C2:0006:114E ()
 *
 * Called From: B4B1:00D6:0017:47F7
 */
void f__B4B1_01C2_0006_114E()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4B1_0171_0002_0306(); return;
}

/**
 * Decompiled function f__B4B1_01C8_0005_04BA()
 *
 * @name f__B4B1_01C8_0005_04BA
 * @implements B4B1:01C8:0005:04BA ()
 *
 * Called From: B4B1:0171:0002:0306
 * Called From: B4B1:0171:000B:9741
 */
void f__B4B1_01C8_0005_04BA()
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
 * Decompiled function f__B4B1_01CD_002A_4C8A()
 *
 * @name f__B4B1_01CD_002A_4C8A
 * @implements B4B1:01CD:002A:4C8A ()
 *
 * Called From: 34B1:0025:0005:1052
 * Called From: 34B1:0025:0005:1098
 * Called From: 34B1:0025:0005:10DE
 * Called From: 34B1:0025:0005:1136
 * Called From: 34B1:0025:0005:1160
 * Called From: 34B1:0025:0005:1202
 * Called From: 34B1:0025:0005:1210
 * Called From: 34B1:0025:0005:1222
 * Called From: 34B1:0025:0005:12DC
 * Called From: 34B1:0025:0005:1246
 * Called From: 34B1:0025:0005:118E
 * Called From: 34B1:0025:0005:12A8
 * Called From: 34B1:0025:0005:1082
 * Called From: 34B1:0025:0005:12C2
 */
void f__B4B1_01CD_002A_4C8A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01F7); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_01F7_0017_4539();
}

/**
 * Decompiled function f__B4B1_01E5_0012_F743()
 *
 * @name f__B4B1_01E5_0012_F743
 * @implements B4B1:01E5:0012:F743 ()
 *
 * Called From: B4B1:0365:0003:0740
 * Called From: B4B1:0365:0006:3F80
 */
void f__B4B1_01E5_0012_F743()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01F7); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_01F7_0017_4539();
}

/**
 * Decompiled function f__B4B1_01F7_0017_4539()
 *
 * @name f__B4B1_01F7_0017_4539
 * @implements B4B1:01F7:0017:4539 ()
 *
 * Called From: B4B1:01F7:0012:F743
 * Called From: B4B1:01F7:002A:4C8A
 */
void f__B4B1_01F7_0017_4539()
{
	emu_addws(&emu_sp, 0xA);
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x0203; emu_last_cs = 0xB4B1; emu_last_ip = 0x01FC; emu_last_length = 0x0017; emu_last_crc = 0x4539; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x4);
	if (emu_flags.zf) { f__B4B1_020E_001A_A699(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4B1_020E_001A_A699(); return; }
	f__B4B1_0368_0006_114E(); return;
}

/**
 * Decompiled function f__B4B1_020E_001A_A699()
 *
 * @name f__B4B1_020E_001A_A699
 * @implements B4B1:020E:001A:A699 ()
 *
 * Called From: B4B1:0201:0017:4539
 * Called From: B4B1:0209:0017:4539
 */
void f__B4B1_020E_001A_A699()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B4B1_023F_0012_F343(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0228); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0228_0017_44F5();
}

/**
 * Decompiled function f__B4B1_0228_0017_44F5()
 *
 * @name f__B4B1_0228_0017_44F5
 * @implements B4B1:0228:0017:44F5 ()
 *
 * Called From: B4B1:0228:001A:A699
 */
void f__B4B1_0228_0017_44F5()
{
	emu_addws(&emu_sp, 0xA);
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x0234; emu_last_cs = 0xB4B1; emu_last_ip = 0x022D; emu_last_length = 0x0017; emu_last_crc = 0x44F5; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x4);
	if (emu_flags.zf) { emu_ip = 0x023F; emu_last_cs = 0xB4B1; emu_last_ip = 0x0232; emu_last_length = 0x0017; emu_last_crc = 0x44F5; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4B1_023F_0012_F343(); return; }
	emu_ip = 0x0368; emu_last_cs = 0xB4B1; emu_last_ip = 0x023C; emu_last_length = 0x0017; emu_last_crc = 0x44F5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B1_023F_0012_F343()
 *
 * @name f__B4B1_023F_0012_F343
 * @implements B4B1:023F:0012:F343 ()
 *
 * Called From: B4B1:0214:001A:A699
 * Called From: B4B1:023A:0017:44F5
 */
void f__B4B1_023F_0012_F343()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0251); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0251_0017_4451();
}

/**
 * Decompiled function f__B4B1_0251_0017_4451()
 *
 * @name f__B4B1_0251_0017_4451
 * @implements B4B1:0251:0017:4451 ()
 *
 * Called From: B4B1:0251:0012:F343
 */
void f__B4B1_0251_0017_4451()
{
	emu_addws(&emu_sp, 0xA);
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x025D; emu_last_cs = 0xB4B1; emu_last_ip = 0x0256; emu_last_length = 0x0017; emu_last_crc = 0x4451; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x4);
	if (emu_flags.zf) { f__B4B1_0268_000B_3E51(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4B1_0268_000B_3E51(); return; }
	emu_ip = 0x0368; emu_last_cs = 0xB4B1; emu_last_ip = 0x0265; emu_last_length = 0x0017; emu_last_crc = 0x4451; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B1_0268_000B_3E51()
 *
 * @name f__B4B1_0268_000B_3E51
 * @implements B4B1:0268:000B:3E51 ()
 *
 * Called From: B4B1:025B:0017:4451
 * Called From: B4B1:0263:0017:4451
 */
void f__B4B1_0268_000B_3E51()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0273); emu_cs = 0x2BC0; f__2BC0_0004_000F_2F6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0273_0016_899F();
}

/**
 * Decompiled function f__B4B1_0273_0016_899F()
 *
 * @name f__B4B1_0273_0016_899F
 * @implements B4B1:0273:0016:899F ()
 *
 * Called From: B4B1:0273:000B:3E51
 */
void f__B4B1_0273_0016_899F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__B4B1_0289_0008_24D0(); return; }
	f__B4B1_031B_0016_DCD0(); return;
}

/**
 * Decompiled function f__B4B1_0289_0008_24D0()
 *
 * @name f__B4B1_0289_0008_24D0
 * @implements B4B1:0289:0008:24D0 ()
 *
 * Called From: B4B1:0284:0016:899F
 */
void f__B4B1_0289_0008_24D0()
{
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.zf) { f__B4B1_0291_001A_0C17(); return; }
	emu_ip = 0x031B; emu_last_cs = 0xB4B1; emu_last_ip = 0x028E; emu_last_length = 0x0008; emu_last_crc = 0x24D0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B1_0291_001A_0C17()
 *
 * @name f__B4B1_0291_001A_0C17
 * @implements B4B1:0291:001A:0C17 ()
 *
 * Called From: B4B1:028C:0008:24D0
 */
void f__B4B1_0291_001A_0C17()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x02AB; emu_last_cs = 0xB4B1; emu_last_ip = 0x029A; emu_last_length = 0x001A; emu_last_crc = 0x0C17; emu_call(); return; } // Jump does not resolve
	if (emu_flags.cf) { emu_ip = 0x02A3; emu_last_cs = 0xB4B1; emu_last_ip = 0x029C; emu_last_length = 0x001A; emu_last_crc = 0x0C17; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!emu_flags.cf) { f__B4B1_02AB_001E_5CB6(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_ip = 0x02B1; emu_last_cs = 0xB4B1; emu_last_ip = 0x02A9; emu_last_length = 0x001A; emu_last_crc = 0x0C17; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B1_02AB_001E_5CB6()
 *
 * @name f__B4B1_02AB_001E_5CB6
 * @implements B4B1:02AB:001E:5CB6 ()
 *
 * Called From: B4B1:02A1:001A:0C17
 */
void f__B4B1_02AB_001E_5CB6()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x12), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x10), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02C9); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_02C9_0045_9B22();
}

/**
 * Decompiled function f__B4B1_02C9_0045_9B22()
 *
 * @name f__B4B1_02C9_0045_9B22
 * @implements B4B1:02C9:0045:9B22 ()
 *
 * Called From: B4B1:02C9:001E:5CB6
 */
void f__B4B1_02C9_0045_9B22()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addws(&emu_dx.x, 0x1);
	emu_adcw(&emu_ax.x, 0x0);
	emu_andws(&emu_dx.x, 0xFE);
	emu_andw(&emu_ax.x, 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0311; emu_last_cs = 0xB4B1; emu_last_ip = 0x02ED; emu_last_length = 0x0045; emu_last_crc = 0x9B22; emu_call(); return; } // Jump does not resolve
	if (emu_flags.cf) { emu_ip = 0x02F6; emu_last_cs = 0xB4B1; emu_last_ip = 0x02EF; emu_last_length = 0x0045; emu_last_crc = 0x9B22; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!emu_flags.cf) { f__B4B1_0311_0008_B206(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x030E); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_030E_000B_AA01();
}

/**
 * Decompiled function f__B4B1_030E_000B_AA01()
 *
 * @name f__B4B1_030E_000B_AA01
 * @implements B4B1:030E:000B:AA01 ()
 *
 * Called From: B4B1:030E:0045:9B22
 */
void f__B4B1_030E_000B_AA01()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	f__B4B1_036E_0005_04BA(); return;
}

/**
 * Decompiled function f__B4B1_0311_0008_B206()
 *
 * @name f__B4B1_0311_0008_B206
 * @implements B4B1:0311:0008:B206 ()
 *
 * Called From: B4B1:02F4:0045:9B22
 */
void f__B4B1_0311_0008_B206()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	f__B4B1_036E_0005_04BA(); return;
}

/**
 * Decompiled function f__B4B1_0317_0002_0306()
 *
 * @name f__B4B1_0317_0002_0306
 * @implements B4B1:0317:0002:0306 ()
 *
 * Called From: B4B1:036C:0006:114E
 */
void f__B4B1_0317_0002_0306()
{
	f__B4B1_036E_0005_04BA(); return;
}

/**
 * Decompiled function f__B4B1_031B_0016_DCD0()
 *
 * @name f__B4B1_031B_0016_DCD0
 * @implements B4B1:031B:0016:DCD0 ()
 *
 * Called From: B4B1:0286:0016:899F
 */
void f__B4B1_031B_0016_DCD0()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	if (emu_flags.zf) { f__B4B1_033A_0028_EDF9(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0331); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0331_0009_F3CB();
}

/**
 * Decompiled function f__B4B1_0331_0009_F3CB()
 *
 * @name f__B4B1_0331_0009_F3CB
 * @implements B4B1:0331:0009:F3CB ()
 *
 * Called From: B4B1:0331:0016:DCD0
 */
void f__B4B1_0331_0009_F3CB()
{
	emu_addws(&emu_sp, 0x8);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	f__B4B1_0365_0003_0740(); return;
}

/**
 * Decompiled function f__B4B1_033A_0028_EDF9()
 *
 * @name f__B4B1_033A_0028_EDF9
 * @implements B4B1:033A:0028:EDF9 ()
 *
 * Called From: B4B1:031F:0016:DCD0
 */
void f__B4B1_033A_0028_EDF9()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addws(&emu_dx.x, 0x1);
	emu_adcw(&emu_ax.x, 0x0);
	emu_andws(&emu_dx.x, 0xFE);
	emu_andw(&emu_ax.x, 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0362); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0362_0006_3F80();
}

/**
 * Decompiled function f__B4B1_0362_0006_3F80()
 *
 * @name f__B4B1_0362_0006_3F80
 * @implements B4B1:0362:0006:3F80 ()
 *
 * Called From: B4B1:0362:0028:EDF9
 */
void f__B4B1_0362_0006_3F80()
{
	emu_addws(&emu_sp, 0x8);
	f__B4B1_01E5_0012_F743(); return;
}

/**
 * Decompiled function f__B4B1_0365_0003_0740()
 *
 * @name f__B4B1_0365_0003_0740
 * @implements B4B1:0365:0003:0740 ()
 *
 * Called From: B4B1:0338:0009:F3CB
 */
void f__B4B1_0365_0003_0740()
{
	f__B4B1_01E5_0012_F743(); return;
}

/**
 * Decompiled function f__B4B1_0368_0006_114E()
 *
 * @name f__B4B1_0368_0006_114E
 * @implements B4B1:0368:0006:114E ()
 *
 * Called From: B4B1:020B:0017:4539
 */
void f__B4B1_0368_0006_114E()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4B1_0317_0002_0306(); return;
}

/**
 * Decompiled function f__B4B1_036E_0005_04BA()
 *
 * @name f__B4B1_036E_0005_04BA
 * @implements B4B1:036E:0005:04BA ()
 *
 * Called From: B4B1:0317:0008:B206
 * Called From: B4B1:0317:000B:AA01
 * Called From: B4B1:0317:0002:0306
 */
void f__B4B1_036E_0005_04BA()
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
 * Decompiled function f__B4B1_0373_001A_7461()
 *
 * @name f__B4B1_0373_001A_7461
 * @implements B4B1:0373:001A:7461 ()
 *
 * Called From: 34B1:002A:0005:19D2
 */
void f__B4B1_0373_001A_7461()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0xD), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	if (!emu_flags.zf) { f__B4B1_038D_0026_1AE5(); return; }
	f__B4B1_04D0_0006_137A(); return;
}

/**
 * Decompiled function f__B4B1_038D_0026_1AE5()
 *
 * @name f__B4B1_038D_0026_1AE5
 * @implements B4B1:038D:0026:1AE5 ()
 *
 * Called From: B4B1:0388:001A:7461
 */
void f__B4B1_038D_0026_1AE5()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_andw(&emu_ax.x, 0x1);
	emu_movw(&emu_di, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03B3); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_711F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_03B3_0013_A260();
}

/**
 * Decompiled function f__B4B1_03B3_0013_A260()
 *
 * @name f__B4B1_03B3_0013_A260
 * @implements B4B1:03B3:0013:A260 ()
 *
 * Called From: B4B1:03B3:0026:1AE5
 */
void f__B4B1_03B3_0013_A260()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03C6); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_03C6_001B_6E64();
}

/**
 * Decompiled function f__B4B1_03C6_001B_6E64()
 *
 * @name f__B4B1_03C6_001B_6E64
 * @implements B4B1:03C6:001B:6E64 ()
 *
 * Called From: B4B1:03C6:0013:A260
 */
void f__B4B1_03C6_001B_6E64()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03E1); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_711F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_03E1_0015_E485();
}

/**
 * Decompiled function f__B4B1_03E1_0015_E485()
 *
 * @name f__B4B1_03E1_0015_E485
 * @implements B4B1:03E1:0015:E485 ()
 *
 * Called From: B4B1:03E1:001B:6E64
 */
void f__B4B1_03E1_0015_E485()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03F6); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_711F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_03F6_0013_A260();
}

/**
 * Decompiled function f__B4B1_03F6_0013_A260()
 *
 * @name f__B4B1_03F6_0013_A260
 * @implements B4B1:03F6:0013:A260 ()
 *
 * Called From: B4B1:03F6:0015:E485
 */
void f__B4B1_03F6_0013_A260()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0409); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0409_001F_17D0();
}

/**
 * Decompiled function f__B4B1_0409_001F_17D0()
 *
 * @name f__B4B1_0409_001F_17D0
 * @implements B4B1:0409:001F:17D0 ()
 *
 * Called From: B4B1:0409:0013:A260
 */
void f__B4B1_0409_001F_17D0()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4B1_042B_000F_D8E7(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xD);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0428); emu_cs = 0x1FB5; emu_ip = 0x12C4; emu_last_cs = 0xB4B1; emu_last_ip = 0x0423; emu_last_length = 0x001F; emu_last_crc = 0x17D0; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4B1_042B_000F_D8E7()
 *
 * @name f__B4B1_042B_000F_D8E7
 * @implements B4B1:042B:000F:D8E7 ()
 *
 * Called From: B4B1:0414:001F:17D0
 */
void f__B4B1_042B_000F_D8E7()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x043A); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_043A_001C_60F5();
}

/**
 * Decompiled function f__B4B1_043A_001C_60F5()
 *
 * @name f__B4B1_043A_001C_60F5
 * @implements B4B1:043A:001C:60F5 ()
 *
 * Called From: B4B1:043A:000F:D8E7
 */
void f__B4B1_043A_001C_60F5()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addws(&emu_dx.x, 0xFC);
	emu_adcw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0456); emu_cs = 0x2BC0; f__2BC0_0004_000F_2F6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0456_001A_A302();
}

/**
 * Decompiled function f__B4B1_0456_001A_A302()
 *
 * @name f__B4B1_0456_001A_A302
 * @implements B4B1:0456:001A:A302 ()
 *
 * Called From: B4B1:0456:001C:60F5
 */
void f__B4B1_0456_001A_A302()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0470); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_711F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0470_0013_DA9E();
}

/**
 * Decompiled function f__B4B1_0470_0013_DA9E()
 *
 * @name f__B4B1_0470_0013_DA9E
 * @implements B4B1:0470:0013:DA9E ()
 *
 * Called From: B4B1:0470:001A:A302
 */
void f__B4B1_0470_0013_DA9E()
{
	emu_addws(&emu_sp, 0xA);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0483); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0483_001D_D790();
}

/**
 * Decompiled function f__B4B1_0483_001D_D790()
 *
 * @name f__B4B1_0483_001D_D790
 * @implements B4B1:0483:001D:D790 ()
 *
 * Called From: B4B1:0483:0013:DA9E
 */
void f__B4B1_0483_001D_D790()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_di);
	emu_cwd();
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_adcw(&emu_bx.x, emu_dx.x);
	emu_addws(&emu_cx.x, 0xF8);
	emu_adcws(&emu_bx.x, 0xFF);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_cs); emu_push(0x04A0); emu_cs = 0x2BC0; f__2BC0_0004_000F_2F6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_04A0_001A_A302();
}

/**
 * Decompiled function f__B4B1_04A0_001A_A302()
 *
 * @name f__B4B1_04A0_001A_A302
 * @implements B4B1:04A0:001A:A302 ()
 *
 * Called From: B4B1:04A0:001D:D790
 */
void f__B4B1_04A0_001A_A302()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x04BA); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_711F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_04BA_0013_2261();
}

/**
 * Decompiled function f__B4B1_04BA_0013_2261()
 *
 * @name f__B4B1_04BA_0013_2261
 * @implements B4B1:04BA:0013:2261 ()
 *
 * Called From: B4B1:04BA:001A:A302
 */
void f__B4B1_04BA_0013_2261()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x04CD); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_04CD_0009_D57B();
}

/**
 * Decompiled function f__B4B1_04CD_0009_D57B()
 *
 * @name f__B4B1_04CD_0009_D57B
 * @implements B4B1:04CD:0009:D57B ()
 *
 * Called From: B4B1:04CD:0013:2261
 */
void f__B4B1_04CD_0009_D57B()
{
	emu_addws(&emu_sp, 0x8);
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
 * Decompiled function f__B4B1_04D0_0006_137A()
 *
 * @name f__B4B1_04D0_0006_137A
 * @implements B4B1:04D0:0006:137A ()
 *
 * Called From: B4B1:038A:001A:7461
 */
void f__B4B1_04D0_0006_137A()
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
