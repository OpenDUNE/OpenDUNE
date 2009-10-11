/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4B1_0000_0016_067A()
 *
 * @name f__B4B1_0000_0016_067A
 * @implements B4B1:0000:0016:067A ()
 *
 * Called From: 34B1:0020:0005:0000
 */
void f__B4B1_0000_0016_067A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0016); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0016_000B_B9A3(); return;
}

/**
 * Decompiled function f__B4B1_0016_000B_B9A3()
 *
 * @name f__B4B1_0016_000B_B9A3
 * @implements B4B1:0016:000B:B9A3 ()
 *
 */
void f__B4B1_0016_000B_B9A3()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0021); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0021_0010_8479(); return;
}

/**
 * Decompiled function f__B4B1_0021_0010_8479()
 *
 * @name f__B4B1_0021_0010_8479
 * @implements B4B1:0021:0010:8479 ()
 *
 */
void f__B4B1_0021_0010_8479()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0031); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0031_0017_5F5A(); return;
}

/**
 * Decompiled function f__B4B1_0031_0017_5F5A()
 *
 * @name f__B4B1_0031_0017_5F5A
 * @implements B4B1:0031:0017:5F5A ()
 *
 */
void f__B4B1_0031_0017_5F5A()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0048); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0048_0022_DD12(); return;
}

/**
 * Decompiled function f__B4B1_0048_0022_DD12()
 *
 * @name f__B4B1_0048_0022_DD12
 * @implements B4B1:0048:0022:DD12 ()
 *
 */
void f__B4B1_0048_0022_DD12()
{
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4D52);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x006F; emu_last_cs = 0xB4B1; emu_last_ip = 0x0050; emu_last_length = 0x0022; emu_last_crc = 0xDD12; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x4F46);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x006F; emu_last_cs = 0xB4B1; emu_last_ip = 0x0057; emu_last_length = 0x0022; emu_last_crc = 0xDD12; emu_call(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x006A); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_006A_0005_802E(); return;
}

/**
 * Decompiled function f__B4B1_006A_0005_802E()
 *
 * @name f__B4B1_006A_0005_802E
 * @implements B4B1:006A:0005:802E ()
 *
 */
void f__B4B1_006A_0005_802E()
{
	emu_addw(&emu_sp, 0x8);
	f__B4B1_0079_0004_68F2(); return;
}

/**
 * Decompiled function f__B4B1_0079_0004_68F2()
 *
 * @name f__B4B1_0079_0004_68F2
 * @implements B4B1:0079:0004:68F2 ()
 *
 * Called From: B4B1:006D:0005:802E
 */
void f__B4B1_0079_0004_68F2()
{
	emu_movw(&emu_ax, emu_si);
	f__B4B1_007D_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4B1_007D_0005_8BCF()
 *
 * @name f__B4B1_007D_0005_8BCF
 * @implements B4B1:007D:0005:8BCF ()
 *
 * Called From: B4B1:007B:0004:68F2
 */
void f__B4B1_007D_0005_8BCF()
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
 * Decompiled function f__B4B1_0082_0012_D287()
 *
 * @name f__B4B1_0082_0012_D287
 * @implements B4B1:0082:0012:D287 ()
 *
 * Called From: 34B1:0034:0005:0000
 */
void f__B4B1_0082_0012_D287()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0095; emu_last_cs = 0xB4B1; emu_last_ip = 0x008C; emu_last_length = 0x0012; emu_last_crc = 0xD287; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0094); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0094_0004_BE52(); return;
}

/**
 * Decompiled function f__B4B1_0094_0004_BE52()
 *
 * @name f__B4B1_0094_0004_BE52
 * @implements B4B1:0094:0004:BE52 ()
 *
 */
void f__B4B1_0094_0004_BE52()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B1_0098_002A_CE8A()
 *
 * @name f__B4B1_0098_002A_CE8A
 * @implements B4B1:0098:002A:CE8A ()
 *
 * Called From: 34B1:002F:0005:0000
 */
void f__B4B1_0098_002A_CE8A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x1);
	f__B4B1_00B0_0012_E067(); return;
}

/**
 * Decompiled function f__B4B1_00B0_0012_E067()
 *
 * @name f__B4B1_00B0_0012_E067
 * @implements B4B1:00B0:0012:E067 ()
 *
 * Called From: B4B1:01BF:0003:E21B
 * Called From: B4B1:01BF:0006:6839
 */
void f__B4B1_00B0_0012_E067()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00C2); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_00C2_0017_764B(); return;
}

/**
 * Decompiled function f__B4B1_00C2_0017_764B()
 *
 * @name f__B4B1_00C2_0017_764B
 * @implements B4B1:00C2:0017:764B ()
 *
 */
void f__B4B1_00C2_0017_764B()
{
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_dx, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00CE; emu_last_cs = 0xB4B1; emu_last_ip = 0x00C7; emu_last_length = 0x0017; emu_last_crc = 0x764B; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x4);
	if (emu_flags.zf) { f__B4B1_00D9_001A_7444(); return; }
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4B1_00D9_001A_7444(); return; }
	f__B4B1_01C2_0006_7629(); return;
}

/**
 * Decompiled function f__B4B1_00D9_001A_7444()
 *
 * @name f__B4B1_00D9_001A_7444
 * @implements B4B1:00D9:001A:7444 ()
 *
 * Called From: B4B1:00CC:0017:764B
 * Called From: B4B1:00D4:0017:764B
 */
void f__B4B1_00D9_001A_7444()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B4B1_010A_0012_E467(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00F3); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_00F3_0017_365F(); return;
}

/**
 * Decompiled function f__B4B1_00F3_0017_365F()
 *
 * @name f__B4B1_00F3_0017_365F
 * @implements B4B1:00F3:0017:365F ()
 *
 */
void f__B4B1_00F3_0017_365F()
{
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_dx, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00FF; emu_last_cs = 0xB4B1; emu_last_ip = 0x00F8; emu_last_length = 0x0017; emu_last_crc = 0x365F; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x4);
	if (emu_flags.zf) { f__B4B1_010A_0012_E467(); return; }
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4B1_010A_0012_E467(); return; }
	f__B4B1_01C2_0006_7629(); return;
}

/**
 * Decompiled function f__B4B1_010A_0012_E467()
 *
 * @name f__B4B1_010A_0012_E467
 * @implements B4B1:010A:0012:E467 ()
 *
 * Called From: B4B1:00DF:001A:7444
 * Called From: B4B1:0105:0017:365F
 */
void f__B4B1_010A_0012_E467()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x011C); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_011C_0017_F652(); return;
}

/**
 * Decompiled function f__B4B1_011C_0017_F652()
 *
 * @name f__B4B1_011C_0017_F652
 * @implements B4B1:011C:0017:F652 ()
 *
 */
void f__B4B1_011C_0017_F652()
{
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_dx, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0128; emu_last_cs = 0xB4B1; emu_last_ip = 0x0121; emu_last_length = 0x0017; emu_last_crc = 0xF652; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x4);
	if (emu_flags.zf) { f__B4B1_0133_000B_B36D(); return; }
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4B1_0133_000B_B36D(); return; }
	f__B4B1_01C2_0006_7629(); return;
}

/**
 * Decompiled function f__B4B1_0133_000B_B36D()
 *
 * @name f__B4B1_0133_000B_B36D
 * @implements B4B1:0133:000B:B36D ()
 *
 * Called From: B4B1:0126:0017:F652
 * Called From: B4B1:012E:0017:F652
 */
void f__B4B1_0133_000B_B36D()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x013E); emu_cs = 0x2BC0; f__2BC0_0004_000F_950B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_013E_002A_F6C5(); return;
}

/**
 * Decompiled function f__B4B1_013E_002A_F6C5()
 *
 * @name f__B4B1_013E_002A_F6C5
 * @implements B4B1:013E:002A:F6C5 ()
 *
 */
void f__B4B1_013E_002A_F6C5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B4B1_0175_0016_189C(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B4B1_0175_0016_189C(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_movw(&emu_dx, 0xFFF8);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0168); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0168_000B_A35D(); return;
}

/**
 * Decompiled function f__B4B1_0168_000B_A35D()
 *
 * @name f__B4B1_0168_000B_A35D
 * @implements B4B1:0168:000B:A35D ()
 *
 */
void f__B4B1_0168_000B_A35D()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__B4B1_0171_0002_EABA(); return;
}

/**
 * Decompiled function f__B4B1_0171_0002_EABA()
 *
 * @name f__B4B1_0171_0002_EABA
 * @implements B4B1:0171:0002:EABA ()
 *
 * Called From: B4B1:01C6:0006:7629
 */
void f__B4B1_0171_0002_EABA()
{
	f__B4B1_01C8_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4B1_0175_0016_189C()
 *
 * @name f__B4B1_0175_0016_189C
 * @implements B4B1:0175:0016:189C ()
 *
 * Called From: B4B1:014F:002A:F6C5
 */
void f__B4B1_0175_0016_189C()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	if (emu_flags.zf) { f__B4B1_0194_0028_14CC(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0xC);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x018B); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_018B_0009_FBD7(); return;
}

/**
 * Decompiled function f__B4B1_018B_0009_FBD7()
 *
 * @name f__B4B1_018B_0009_FBD7
 * @implements B4B1:018B:0009:FBD7 ()
 *
 */
void f__B4B1_018B_0009_FBD7()
{
	emu_addw(&emu_sp, 0x8);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	f__B4B1_01BF_0003_E21B(); return;
}

/**
 * Decompiled function f__B4B1_0194_0028_14CC()
 *
 * @name f__B4B1_0194_0028_14CC
 * @implements B4B1:0194:0028:14CC ()
 *
 * Called From: B4B1:0179:0016:189C
 */
void f__B4B1_0194_0028_14CC()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_dx, 0x1);
	emu_adcw(&emu_ax, 0x0);
	emu_andw(&emu_dx, 0xFFFE);
	emu_andw(&emu_ax, 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01BC); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_01BC_0006_6839(); return;
}

/**
 * Decompiled function f__B4B1_01BC_0006_6839()
 *
 * @name f__B4B1_01BC_0006_6839
 * @implements B4B1:01BC:0006:6839 ()
 *
 */
void f__B4B1_01BC_0006_6839()
{
	emu_addw(&emu_sp, 0x8);
	f__B4B1_01BF_0003_E21B(); return;
}

/**
 * Decompiled function f__B4B1_01BF_0003_E21B()
 *
 * @name f__B4B1_01BF_0003_E21B
 * @implements B4B1:01BF:0003:E21B ()
 *
 * Called From: B4B1:0192:0009:FBD7
 */
void f__B4B1_01BF_0003_E21B()
{
	f__B4B1_00B0_0012_E067(); return;
}

/**
 * Decompiled function f__B4B1_01C2_0006_7629()
 *
 * @name f__B4B1_01C2_0006_7629
 * @implements B4B1:01C2:0006:7629 ()
 *
 * Called From: B4B1:00D6:0017:764B
 */
void f__B4B1_01C2_0006_7629()
{
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	f__B4B1_0171_0002_EABA(); return;
}

/**
 * Decompiled function f__B4B1_01C8_0005_8BCF()
 *
 * @name f__B4B1_01C8_0005_8BCF
 * @implements B4B1:01C8:0005:8BCF ()
 *
 * Called From: B4B1:0171:0002:EABA
 * Called From: B4B1:0171:000B:A35D
 */
void f__B4B1_01C8_0005_8BCF()
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
 * Decompiled function f__B4B1_01CD_002A_CE8A()
 *
 * @name f__B4B1_01CD_002A_CE8A
 * @implements B4B1:01CD:002A:CE8A ()
 *
 * Called From: 34B1:0025:0005:0000
 */
void f__B4B1_01CD_002A_CE8A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x1);
	f__B4B1_01E5_0012_E067(); return;
}

/**
 * Decompiled function f__B4B1_01E5_0012_E067()
 *
 * @name f__B4B1_01E5_0012_E067
 * @implements B4B1:01E5:0012:E067 ()
 *
 * Called From: B4B1:0365:0003:223F
 * Called From: B4B1:0365:0006:A81D
 */
void f__B4B1_01E5_0012_E067()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01F7); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_01F7_0017_B6E7(); return;
}

/**
 * Decompiled function f__B4B1_01F7_0017_B6E7()
 *
 * @name f__B4B1_01F7_0017_B6E7
 * @implements B4B1:01F7:0017:B6E7 ()
 *
 */
void f__B4B1_01F7_0017_B6E7()
{
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_dx, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0203; emu_last_cs = 0xB4B1; emu_last_ip = 0x01FC; emu_last_length = 0x0017; emu_last_crc = 0xB6E7; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x4);
	if (emu_flags.zf) { f__B4B1_020E_001A_7444(); return; }
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4B1_020E_001A_7444(); return; }
	f__B4B1_0368_0006_7629(); return;
}

/**
 * Decompiled function f__B4B1_020E_001A_7444()
 *
 * @name f__B4B1_020E_001A_7444
 * @implements B4B1:020E:001A:7444 ()
 *
 * Called From: B4B1:0201:0017:B6E7
 * Called From: B4B1:0209:0017:B6E7
 */
void f__B4B1_020E_001A_7444()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B4B1_023F_0012_E467(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0228); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0228_0017_76FB(); return;
}

/**
 * Decompiled function f__B4B1_0228_0017_76FB()
 *
 * @name f__B4B1_0228_0017_76FB
 * @implements B4B1:0228:0017:76FB ()
 *
 */
void f__B4B1_0228_0017_76FB()
{
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_dx, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0234; emu_last_cs = 0xB4B1; emu_last_ip = 0x022D; emu_last_length = 0x0017; emu_last_crc = 0x76FB; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x4);
	if (emu_flags.zf) { f__B4B1_023F_0012_E467(); return; }
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4B1_023F_0012_E467(); return; }
	f__B4B1_0368_0006_7629(); return;
}

/**
 * Decompiled function f__B4B1_023F_0012_E467()
 *
 * @name f__B4B1_023F_0012_E467
 * @implements B4B1:023F:0012:E467 ()
 *
 * Called From: B4B1:0214:001A:7444
 * Called From: B4B1:023A:0017:76FB
 */
void f__B4B1_023F_0012_E467()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0251); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0251_0017_36F1(); return;
}

/**
 * Decompiled function f__B4B1_0251_0017_36F1()
 *
 * @name f__B4B1_0251_0017_36F1
 * @implements B4B1:0251:0017:36F1 ()
 *
 */
void f__B4B1_0251_0017_36F1()
{
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_dx, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x025D; emu_last_cs = 0xB4B1; emu_last_ip = 0x0256; emu_last_length = 0x0017; emu_last_crc = 0x36F1; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x4);
	if (emu_flags.zf) { f__B4B1_0268_000B_B36D(); return; }
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x9));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4B1_0268_000B_B36D(); return; }
	f__B4B1_0368_0006_7629(); return;
}

/**
 * Decompiled function f__B4B1_0268_000B_B36D()
 *
 * @name f__B4B1_0268_000B_B36D
 * @implements B4B1:0268:000B:B36D ()
 *
 * Called From: B4B1:025B:0017:36F1
 * Called From: B4B1:0263:0017:36F1
 */
void f__B4B1_0268_000B_B36D()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0273); emu_cs = 0x2BC0; f__2BC0_0004_000F_950B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0273_0016_E2C8(); return;
}

/**
 * Decompiled function f__B4B1_0273_0016_E2C8()
 *
 * @name f__B4B1_0273_0016_E2C8
 * @implements B4B1:0273:0016:E2C8 ()
 *
 */
void f__B4B1_0273_0016_E2C8()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__B4B1_0289_0008_650D(); return; }
	f__B4B1_031B_0016_189C(); return;
}

/**
 * Decompiled function f__B4B1_0289_0008_650D()
 *
 * @name f__B4B1_0289_0008_650D
 * @implements B4B1:0289:0008:650D ()
 *
 * Called From: B4B1:0284:0016:E2C8
 */
void f__B4B1_0289_0008_650D()
{
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.zf) { f__B4B1_0291_001A_2962(); return; }
	f__B4B1_031B_0016_189C(); return;
}

/**
 * Decompiled function f__B4B1_0291_001A_2962()
 *
 * @name f__B4B1_0291_001A_2962
 * @implements B4B1:0291:001A:2962 ()
 *
 * Called From: B4B1:028C:0008:650D
 */
void f__B4B1_0291_001A_2962()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!(emu_flags.cf || emu_flags.zf)) { f__B4B1_02AB_001E_075C(); return; }
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x02A3; emu_last_cs = 0xB4B1; emu_last_ip = 0x029C; emu_last_length = 0x001A; emu_last_crc = 0x2962; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!emu_flags.cf) { f__B4B1_02AB_001E_075C(); return; }
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	/* Unresolved jump */ emu_ip = 0x02B1; emu_last_cs = 0xB4B1; emu_last_ip = 0x02A9; emu_last_length = 0x001A; emu_last_crc = 0x2962; emu_call();
}

/**
 * Decompiled function f__B4B1_02AB_001E_075C()
 *
 * @name f__B4B1_02AB_001E_075C
 * @implements B4B1:02AB:001E:075C ()
 *
 * Called From: B4B1:02A1:001A:2962
 */
void f__B4B1_02AB_001E_075C()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x12), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x10), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02C9); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_02C9_0045_223B(); return;
}

/**
 * Decompiled function f__B4B1_02C9_0045_223B()
 *
 * @name f__B4B1_02C9_0045_223B
 * @implements B4B1:02C9:0045:223B ()
 *
 */
void f__B4B1_02C9_0045_223B()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_dx, 0x1);
	emu_adcw(&emu_ax, 0x0);
	emu_andw(&emu_dx, 0xFFFE);
	emu_andw(&emu_ax, 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!(emu_flags.cf || emu_flags.zf)) { f__B4B1_0311_0008_4F4A(); return; }
	if (emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x02F6; emu_last_cs = 0xB4B1; emu_last_ip = 0x02EF; emu_last_length = 0x0045; emu_last_crc = 0x223B; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!emu_flags.cf) { f__B4B1_0311_0008_4F4A(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x030E); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_030E_000B_1E5E(); return;
}

/**
 * Decompiled function f__B4B1_030E_000B_1E5E()
 *
 * @name f__B4B1_030E_000B_1E5E
 * @implements B4B1:030E:000B:1E5E ()
 *
 */
void f__B4B1_030E_000B_1E5E()
{
	emu_addw(&emu_sp, 0x8);
	f__B4B1_0311_0008_4F4A(); return;
}

/**
 * Decompiled function f__B4B1_0311_0008_4F4A()
 *
 * @name f__B4B1_0311_0008_4F4A
 * @implements B4B1:0311:0008:4F4A ()
 *
 * Called From: B4B1:02F4:0045:223B
 */
void f__B4B1_0311_0008_4F4A()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	f__B4B1_0317_0002_EABA(); return;
}

/**
 * Decompiled function f__B4B1_0317_0002_EABA()
 *
 * @name f__B4B1_0317_0002_EABA
 * @implements B4B1:0317:0002:EABA ()
 *
 * Called From: B4B1:036C:0006:7629
 */
void f__B4B1_0317_0002_EABA()
{
	f__B4B1_036E_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4B1_031B_0016_189C()
 *
 * @name f__B4B1_031B_0016_189C
 * @implements B4B1:031B:0016:189C ()
 *
 * Called From: B4B1:0286:0016:E2C8
 */
void f__B4B1_031B_0016_189C()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	if (emu_flags.zf) { f__B4B1_033A_0028_14CC(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0xC);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0331); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0331_0009_FBD7(); return;
}

/**
 * Decompiled function f__B4B1_0331_0009_FBD7()
 *
 * @name f__B4B1_0331_0009_FBD7
 * @implements B4B1:0331:0009:FBD7 ()
 *
 */
void f__B4B1_0331_0009_FBD7()
{
	emu_addw(&emu_sp, 0x8);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x9), 0x0);
	f__B4B1_0365_0003_223F(); return;
}

/**
 * Decompiled function f__B4B1_033A_0028_14CC()
 *
 * @name f__B4B1_033A_0028_14CC
 * @implements B4B1:033A:0028:14CC ()
 *
 * Called From: B4B1:031F:0016:189C
 */
void f__B4B1_033A_0028_14CC()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_dx, 0x1);
	emu_adcw(&emu_ax, 0x0);
	emu_andw(&emu_dx, 0xFFFE);
	emu_andw(&emu_ax, 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0362); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0362_0006_A81D(); return;
}

/**
 * Decompiled function f__B4B1_0362_0006_A81D()
 *
 * @name f__B4B1_0362_0006_A81D
 * @implements B4B1:0362:0006:A81D ()
 *
 */
void f__B4B1_0362_0006_A81D()
{
	emu_addw(&emu_sp, 0x8);
	f__B4B1_0365_0003_223F(); return;
}

/**
 * Decompiled function f__B4B1_0365_0003_223F()
 *
 * @name f__B4B1_0365_0003_223F
 * @implements B4B1:0365:0003:223F ()
 *
 * Called From: B4B1:0338:0009:FBD7
 */
void f__B4B1_0365_0003_223F()
{
	f__B4B1_01E5_0012_E067(); return;
}

/**
 * Decompiled function f__B4B1_0368_0006_7629()
 *
 * @name f__B4B1_0368_0006_7629
 * @implements B4B1:0368:0006:7629 ()
 *
 * Called From: B4B1:020B:0017:B6E7
 */
void f__B4B1_0368_0006_7629()
{
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	f__B4B1_0317_0002_EABA(); return;
}

/**
 * Decompiled function f__B4B1_036E_0005_8BCF()
 *
 * @name f__B4B1_036E_0005_8BCF
 * @implements B4B1:036E:0005:8BCF ()
 *
 * Called From: B4B1:0317:0008:4F4A
 * Called From: B4B1:0317:000B:1E5E
 * Called From: B4B1:0317:0002:EABA
 */
void f__B4B1_036E_0005_8BCF()
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
 * Decompiled function f__B4B1_0373_001A_90A2()
 *
 * @name f__B4B1_0373_001A_90A2
 * @implements B4B1:0373:001A:90A2 ()
 *
 * Called From: 34B1:002A:0005:0000
 */
void f__B4B1_0373_001A_90A2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0xD), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	if (!emu_flags.zf) { f__B4B1_038D_0026_282D(); return; }
	f__B4B1_04D0_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4B1_038D_0026_282D()
 *
 * @name f__B4B1_038D_0026_282D
 * @implements B4B1:038D:0026:282D ()
 *
 * Called From: B4B1:0388:001A:90A2
 */
void f__B4B1_038D_0026_282D()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_andw(&emu_ax, 0x1);
	emu_movw(&emu_di, emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xC);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03B3); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_03B3_0013_A9F2(); return;
}

/**
 * Decompiled function f__B4B1_03B3_0013_A9F2()
 *
 * @name f__B4B1_03B3_0013_A9F2
 * @implements B4B1:03B3:0013:A9F2 ()
 *
 */
void f__B4B1_03B3_0013_A9F2()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03C6); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_03C6_001B_A317(); return;
}

/**
 * Decompiled function f__B4B1_03C6_001B_A317()
 *
 * @name f__B4B1_03C6_001B_A317
 * @implements B4B1:03C6:001B:A317 ()
 *
 */
void f__B4B1_03C6_001B_A317()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xC);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03E1); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_03E1_0015_290C(); return;
}

/**
 * Decompiled function f__B4B1_03E1_0015_290C()
 *
 * @name f__B4B1_03E1_0015_290C
 * @implements B4B1:03E1:0015:290C ()
 *
 */
void f__B4B1_03E1_0015_290C()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03F6); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_03F6_0013_A9F2(); return;
}

/**
 * Decompiled function f__B4B1_03F6_0013_A9F2()
 *
 * @name f__B4B1_03F6_0013_A9F2
 * @implements B4B1:03F6:0013:A9F2 ()
 *
 */
void f__B4B1_03F6_0013_A9F2()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0409); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0409_001F_F908(); return;
}

/**
 * Decompiled function f__B4B1_0409_001F_F908()
 *
 * @name f__B4B1_0409_001F_F908
 * @implements B4B1:0409:001F:F908 ()
 *
 */
void f__B4B1_0409_001F_F908()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4B1_042B_000F_82CF(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x1);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xD);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0428); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0428_0012_20E5(); return;
}

/**
 * Decompiled function f__B4B1_0428_0012_20E5()
 *
 * @name f__B4B1_0428_0012_20E5
 * @implements B4B1:0428:0012:20E5 ()
 *
 */
void f__B4B1_0428_0012_20E5()
{
	emu_addw(&emu_sp, 0xA);
	f__B4B1_042B_000F_82CF(); return;
}

/**
 * Decompiled function f__B4B1_042B_000F_82CF()
 *
 * @name f__B4B1_042B_000F_82CF
 * @implements B4B1:042B:000F:82CF ()
 *
 * Called From: B4B1:0414:001F:F908
 */
void f__B4B1_042B_000F_82CF()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x043A); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_043A_001C_226F(); return;
}

/**
 * Decompiled function f__B4B1_043A_001C_226F()
 *
 * @name f__B4B1_043A_001C_226F
 * @implements B4B1:043A:001C:226F ()
 *
 */
void f__B4B1_043A_001C_226F()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_dx, 0xFFFC);
	emu_adcw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0456); emu_cs = 0x2BC0; f__2BC0_0004_000F_950B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0456_001A_55EF(); return;
}

/**
 * Decompiled function f__B4B1_0456_001A_55EF()
 *
 * @name f__B4B1_0456_001A_55EF
 * @implements B4B1:0456:001A:55EF ()
 *
 */
void f__B4B1_0456_001A_55EF()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xC);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0470); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0470_0013_70AD(); return;
}

/**
 * Decompiled function f__B4B1_0470_0013_70AD()
 *
 * @name f__B4B1_0470_0013_70AD
 * @implements B4B1:0470:0013:70AD ()
 *
 */
void f__B4B1_0470_0013_70AD()
{
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0483); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_0483_001D_92B3(); return;
}

/**
 * Decompiled function f__B4B1_0483_001D_92B3()
 *
 * @name f__B4B1_0483_001D_92B3
 * @implements B4B1:0483:001D:92B3 ()
 *
 */
void f__B4B1_0483_001D_92B3()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, emu_di);
	emu_cwd();
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_cx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_cx, emu_ax);
	emu_adcw(&emu_bx, emu_dx);
	emu_addw(&emu_cx, 0xFFF8);
	emu_adcw(&emu_bx, 0xFFFF);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_cs); emu_push(0x04A0); emu_cs = 0x2BC0; f__2BC0_0004_000F_950B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_04A0_001A_55EF(); return;
}

/**
 * Decompiled function f__B4B1_04A0_001A_55EF()
 *
 * @name f__B4B1_04A0_001A_55EF
 * @implements B4B1:04A0:001A:55EF ()
 *
 */
void f__B4B1_04A0_001A_55EF()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xC);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x04BA); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_04BA_0013_AFF2(); return;
}

/**
 * Decompiled function f__B4B1_04BA_0013_AFF2()
 *
 * @name f__B4B1_04BA_0013_AFF2
 * @implements B4B1:04BA:0013:AFF2 ()
 *
 */
void f__B4B1_04BA_0013_AFF2()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x04CD); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B1) { ovl__34B1(0xFF); }
	f__B4B1_04CD_0009_B39F(); return;
}

/**
 * Decompiled function f__B4B1_04CD_0009_B39F()
 *
 * @name f__B4B1_04CD_0009_B39F
 * @implements B4B1:04CD:0009:B39F ()
 *
 */
void f__B4B1_04CD_0009_B39F()
{
	emu_addw(&emu_sp, 0x8);
	f__B4B1_04D0_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4B1_04D0_0006_F7CE()
 *
 * @name f__B4B1_04D0_0006_F7CE
 * @implements B4B1:04D0:0006:F7CE ()
 *
 * Called From: B4B1:038A:001A:90A2
 */
void f__B4B1_04D0_0006_F7CE()
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
