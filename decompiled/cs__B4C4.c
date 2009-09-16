/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4C4_0000_001C_764B()
 *
 * @name f__B4C4_0000_001C_764B
 * @implements B4C4:0000:001C:764B ()
 *
 * Called From: 34C4:0020:0005:1DB8
 * Called From: 34C4:0020:0005:1C70
 */
void f__B4C4_0000_001C_764B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0xE6);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8CFD);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x001C); f__B4C4_05F3_002C_303E();
	f__B4C4_001C_0012_A57B();
}

/**
 * Decompiled function f__B4C4_001C_0012_A57B()
 *
 * @name f__B4C4_001C_0012_A57B
 * @implements B4C4:001C:0012:A57B ()
 *
 * Called From: B4C4:001C:001C:764B
 */
void f__B4C4_001C_0012_A57B()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x002E); f__B4C4_054C_0031_8B2B();
	f__B4C4_002E_0015_B911();
}

/**
 * Decompiled function f__B4C4_002E_0015_B911()
 *
 * @name f__B4C4_002E_0015_B911
 * @implements B4C4:002E:0015:B911 ()
 *
 * Called From: B4C4:002E:0012:A57B
 */
void f__B4C4_002E_0015_B911()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B4), emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0043); f__B4C4_054C_0031_8B2B();
	f__B4C4_0043_0018_5F6E();
}

/**
 * Decompiled function f__B4C4_0043_0018_5F6E()
 *
 * @name f__B4C4_0043_0018_5F6E
 * @implements B4C4:0043:0018:5F6E ()
 *
 * Called From: B4C4:0043:0015:B911
 */
void f__B4C4_0043_0018_5F6E()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39FC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39FE), emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x005B); f__B4C4_054C_0031_8B2B();
	f__B4C4_005B_0018_53BF();
}

/**
 * Decompiled function f__B4C4_005B_0018_53BF()
 *
 * @name f__B4C4_005B_0018_53BF
 * @implements B4C4:005B:0018:53BF ()
 *
 * Called From: B4C4:005B:0018:5F6E
 */
void f__B4C4_005B_0018_53BF()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A00), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A02), emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0073); f__B4C4_05C0_002F_E1F6();
	f__B4C4_0073_0016_98C3();
}

/**
 * Decompiled function f__B4C4_0073_0016_98C3()
 *
 * @name f__B4C4_0073_0016_98C3
 * @implements B4C4:0073:0016:98C3 ()
 *
 * Called From: B4C4:0073:0018:53BF
 */
void f__B4C4_0073_0016_98C3()
{
	emu_addws(&emu_sp, 0x8);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A10), emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0089); f__B4C4_05C0_002F_E1F6();
	f__B4C4_0089_0016_9B4F();
}

/**
 * Decompiled function f__B4C4_0089_0016_9B4F()
 *
 * @name f__B4C4_0089_0016_9B4F
 * @implements B4C4:0089:0016:9B4F ()
 *
 * Called From: B4C4:0089:0016:98C3
 */
void f__B4C4_0089_0016_9B4F()
{
	emu_addws(&emu_sp, 0x8);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E2), emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x009F); f__B4C4_054C_0031_8B2B();
	f__B4C4_009F_0015_BBDF();
}

/**
 * Decompiled function f__B4C4_009F_0015_BBDF()
 *
 * @name f__B4C4_009F_0015_BBDF
 * @implements B4C4:009F:0015:BBDF ()
 *
 * Called From: B4C4:009F:0016:9B4F
 */
void f__B4C4_009F_0015_BBDF()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F0), emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00B4); f__B4C4_054C_0031_8B2B();
	f__B4C4_00B4_0015_BB83();
}

/**
 * Decompiled function f__B4C4_00B4_0015_BB83()
 *
 * @name f__B4C4_00B4_0015_BB83
 * @implements B4C4:00B4:0015:BB83 ()
 *
 * Called From: B4C4:00B4:0015:BBDF
 */
void f__B4C4_00B4_0015_BB83()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E8), emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00C9); f__B4C4_054C_0031_8B2B();
	f__B4C4_00C9_0010_074D();
}

/**
 * Decompiled function f__B4C4_00C9_0010_074D()
 *
 * @name f__B4C4_00C9_0010_074D
 * @implements B4C4:00C9:0010:074D ()
 *
 * Called From: B4C4:00C9:0015:BB83
 */
void f__B4C4_00C9_0010_074D()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__B4C4_00E1_000F_A7FB(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00D9); emu_cs = 0x0FE4; emu_ip = 0x06D6; emu_last_cs = 0xB4C4; emu_last_ip = 0x00D4; emu_last_length = 0x0010; emu_last_crc = 0x074D; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4C4_00E1_000F_A7FB()
 *
 * @name f__B4C4_00E1_000F_A7FB
 * @implements B4C4:00E1:000F:A7FB ()
 *
 * Called From: B4C4:00D1:0010:074D
 */
void f__B4C4_00E1_000F_A7FB()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00F0); f__B4C4_054C_0031_8B2B();
	f__B4C4_00F0_0010_074D();
}

/**
 * Decompiled function f__B4C4_00F0_0010_074D()
 *
 * @name f__B4C4_00F0_0010_074D
 * @implements B4C4:00F0:0010:074D ()
 *
 * Called From: B4C4:00F0:000F:A7FB
 */
void f__B4C4_00F0_0010_074D()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__B4C4_0108_000F_A65F(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0100); emu_cs = 0x0FE4; emu_ip = 0x06FD; emu_last_cs = 0xB4C4; emu_last_ip = 0x00FB; emu_last_length = 0x0010; emu_last_crc = 0x074D; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4C4_0108_000F_A65F()
 *
 * @name f__B4C4_0108_000F_A65F
 * @implements B4C4:0108:000F:A65F ()
 *
 * Called From: B4C4:00F8:0010:074D
 */
void f__B4C4_0108_000F_A65F()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0117); f__B4C4_054C_0031_8B2B();
	f__B4C4_0117_0015_B8E7();
}

/**
 * Decompiled function f__B4C4_0117_0015_B8E7()
 *
 * @name f__B4C4_0117_0015_B8E7
 * @implements B4C4:0117:0015:B8E7 ()
 *
 * Called From: B4C4:0117:000F:A65F
 */
void f__B4C4_0117_0015_B8E7()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F6), emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x012C); f__B4C4_0581_003B_7316();
	f__B4C4_012C_0019_4D68();
}

/**
 * Decompiled function f__B4C4_012C_0019_4D68()
 *
 * @name f__B4C4_012C_0019_4D68
 * @implements B4C4:012C:0019:4D68 ()
 *
 * Called From: B4C4:012C:0015:B8E7
 */
void f__B4C4_012C_0019_4D68()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2AF6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2AF4), emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0145); f__B4C4_054C_0031_8B2B();
	f__B4C4_0145_0015_BAF9();
}

/**
 * Decompiled function f__B4C4_0145_0015_BAF9()
 *
 * @name f__B4C4_0145_0015_BAF9
 * @implements B4C4:0145:0015:BAF9 ()
 *
 * Called From: B4C4:0145:0019:4D68
 */
void f__B4C4_0145_0015_BAF9()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B0), emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x015A); f__B4C4_054C_0031_8B2B();
	f__B4C4_015A_0015_B973();
}

/**
 * Decompiled function f__B4C4_015A_0015_B973()
 *
 * @name f__B4C4_015A_0015_B973
 * @implements B4C4:015A:0015:B973 ()
 *
 * Called From: B4C4:015A:0015:BAF9
 */
void f__B4C4_015A_0015_B973()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B2), emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x016F); f__B4C4_0581_003B_7316();
	f__B4C4_016F_0019_4E23();
}

/**
 * Decompiled function f__B4C4_016F_0019_4E23()
 *
 * @name f__B4C4_016F_0019_4E23
 * @implements B4C4:016F:0019:4E23 ()
 *
 * Called From: B4C4:016F:0015:B973
 */
void f__B4C4_016F_0019_4E23()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37F2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37F0), emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0188); f__B4C4_0581_003B_7316();
	f__B4C4_0188_0019_4E0F();
}

/**
 * Decompiled function f__B4C4_0188_0019_4E0F()
 *
 * @name f__B4C4_0188_0019_4E0F
 * @implements B4C4:0188:0019:4E0F ()
 *
 * Called From: B4C4:0188:0019:4E23
 */
void f__B4C4_0188_0019_4E0F()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37F6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37F4), emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x01A1); f__B4C4_0581_003B_7316();
	f__B4C4_01A1_0026_3D66();
}

/**
 * Decompiled function f__B4C4_01A1_0026_3D66()
 *
 * @name f__B4C4_01A1_0026_3D66
 * @implements B4C4:01A1:0026:3D66 ()
 *
 * Called From: B4C4:01A1:0019:4E0F
 */
void f__B4C4_01A1_0026_3D66()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_subw(&emu_cx.x, emu_ax.x);
	emu_sbbw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38AE), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38AC), emu_cx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x01C7); f__B4C4_054C_0031_8B2B();
	f__B4C4_01C7_001E_714E();
}

/**
 * Decompiled function f__B4C4_01C7_001E_714E()
 *
 * @name f__B4C4_01C7_001E_714E
 * @implements B4C4:01C7:001E:714E ()
 *
 * Called From: B4C4:01C7:0026:3D66
 */
void f__B4C4_01C7_001E_714E()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B4), emu_ax.x);
	emu_movw(&emu_ax.x, 0x36);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x97E7);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x01E5); f__B4C4_05F3_002C_303E();
	f__B4C4_01E5_0012_A45B();
}

/**
 * Decompiled function f__B4C4_01E5_0012_A45B()
 *
 * @name f__B4C4_01E5_0012_A45B
 * @implements B4C4:01E5:0012:A45B ()
 *
 * Called From: B4C4:01E5:001E:714E
 */
void f__B4C4_01E5_0012_A45B()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x01F7); f__B4C4_054C_0031_8B2B();
	f__B4C4_01F7_0015_B8AD();
}

/**
 * Decompiled function f__B4C4_01F7_0015_B8AD()
 *
 * @name f__B4C4_01F7_0015_B8AD
 * @implements B4C4:01F7:0015:B8AD ()
 *
 * Called From: B4C4:01F7:0012:A45B
 */
void f__B4C4_01F7_0015_B8AD()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38FE), emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x020C); f__B4C4_054C_0031_8B2B();
	f__B4C4_020C_0010_074D();
}

/**
 * Decompiled function f__B4C4_020C_0010_074D()
 *
 * @name f__B4C4_020C_0010_074D
 * @implements B4C4:020C:0010:074D ()
 *
 * Called From: B4C4:020C:0015:B8AD
 */
void f__B4C4_020C_0010_074D()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__B4C4_0224_000F_A6E1(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x021C); emu_cs = 0x0FE4; emu_ip = 0x0819; emu_last_cs = 0xB4C4; emu_last_ip = 0x0217; emu_last_length = 0x0010; emu_last_crc = 0x074D; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4C4_0224_000F_A6E1()
 *
 * @name f__B4C4_0224_000F_A6E1
 * @implements B4C4:0224:000F:A6E1 ()
 *
 * Called From: B4C4:0214:0010:074D
 */
void f__B4C4_0224_000F_A6E1()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0233); f__B4C4_054C_0031_8B2B();
	f__B4C4_0233_000B_D25F();
}

/**
 * Decompiled function f__B4C4_0233_000B_D25F()
 *
 * @name f__B4C4_0233_000B_D25F
 * @implements B4C4:0233:000B:D25F ()
 *
 * Called From: B4C4:0233:000F:A6E1
 */
void f__B4C4_0233_000B_D25F()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38EA), emu_ax.x);
	emu_push(emu_cs); emu_push(0x023E); emu_cs = 0x34B8; ovl__34B8(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_023E_000D_77F7();
}

/**
 * Decompiled function f__B4C4_023E_000D_77F7()
 *
 * @name f__B4C4_023E_000D_77F7
 * @implements B4C4:023E:000D:77F7 ()
 *
 * Called From: B4C4:023E:000B:D25F
 */
void f__B4C4_023E_000D_77F7()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x72F9));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x72FB));
	emu_push(emu_cs); emu_push(0x024B); emu_cs = 0x34B8; ovl__34B8(6);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_024B_0007_2E7C();
}

/**
 * Decompiled function f__B4C4_024B_0007_2E7C()
 *
 * @name f__B4C4_024B_0007_2E7C
 * @implements B4C4:024B:0007:2E7C ()
 *
 * Called From: B4C4:024B:000D:77F7
 */
void f__B4C4_024B_0007_2E7C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__B4C4_0252_0003_0212(); return;
}

/**
 * Decompiled function f__B4C4_0252_0003_0212()
 *
 * @name f__B4C4_0252_0003_0212
 * @implements B4C4:0252:0003:0212 ()
 *
 * Called From: B4C4:0250:0007:2E7C
 */
void f__B4C4_0252_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_0255_0009_4F5A()
 *
 * @name f__B4C4_0255_0009_4F5A
 * @implements B4C4:0255:0009:4F5A ()
 *
 * Called From: 34C4:0025:0005:18F8
 * Called From: 34C4:0025:0005:1930
 */
void f__B4C4_0255_0009_4F5A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	f__B4C4_028D_0008_FE50(); return;
}

/**
 * Decompiled function f__B4C4_025E_0037_1E43()
 *
 * @name f__B4C4_025E_0037_1E43
 * @implements B4C4:025E:0037:1E43 ()
 *
 * Called From: B4C4:0291:0008:FE50
 * Called From: B4C4:0291:0037:1E43
 */
void f__B4C4_025E_0037_1E43()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xF7);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_dx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), 0x1);
	emu_shlb(&emu_ax.l, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), emu_ax.l);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__B4C4_025E_0037_1E43(); return; }
	f__B4C4_0307_000A_F1A0(); return;
}

/**
 * Decompiled function f__B4C4_028D_0008_FE50()
 *
 * @name f__B4C4_028D_0008_FE50
 * @implements B4C4:028D:0008:FE50 ()
 *
 * Called From: B4C4:025C:0009:4F5A
 */
void f__B4C4_028D_0008_FE50()
{
	emu_cmpw(&emu_di, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__B4C4_025E_0037_1E43(); return; }
	emu_ip = 0x0307; emu_last_cs = 0xB4C4; emu_last_ip = 0x0293; emu_last_length = 0x0008; emu_last_crc = 0xFE50; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4C4_0295_000F_A427()
 *
 * @name f__B4C4_0295_000F_A427
 * @implements B4C4:0295:000F:A427 ()
 *
 * Called From: B4C4:030B:000A:F1A0
 * Called From: B4C4:030B:0040:1FB2
 */
void f__B4C4_0295_000F_A427()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x02A4); f__B4C4_054C_0031_8B2B();
	f__B4C4_02A4_002D_8EEE();
}

/**
 * Decompiled function f__B4C4_02A4_002D_8EEE()
 *
 * @name f__B4C4_02A4_002D_8EEE
 * @implements B4C4:02A4:002D:8EEE ()
 *
 * Called From: B4C4:02A4:000F:A427
 */
void f__B4C4_02A4_002D_8EEE()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax.x);
	emu_andw(&emu_di, 0x1FFF);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39EC));
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x02D1); f__B4C4_05F3_002C_303E();
	f__B4C4_02D1_0040_1FB2();
}

/**
 * Decompiled function f__B4C4_02D1_0040_1FB2()
 *
 * @name f__B4C4_02D1_0040_1FB2
 * @implements B4C4:02D1:0040:1FB2 ()
 *
 * Called From: B4C4:02D1:002D:8EEE
 */
void f__B4C4_02D1_0040_1FB2()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_dx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_si, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_si,  0x0));
	emu_andw(&emu_dx.x, 0x1FF);
	emu_movw(&emu_es, emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), emu_dx.x);
	if (emu_flags.zf) { f__B4C4_0307_000A_F1A0(); return; }
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), 0x8000);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__B4C4_0295_000F_A427(); return; }
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_0307_000A_F1A0()
 *
 * @name f__B4C4_0307_000A_F1A0
 * @implements B4C4:0307:000A:F1A0 ()
 *
 * Called From: B4C4:0293:0037:1E43
 * Called From: B4C4:02F5:0040:1FB2
 */
void f__B4C4_0307_000A_F1A0()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__B4C4_0295_000F_A427(); return; }
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_0311_0009_6B64()
 *
 * @name f__B4C4_0311_0009_6B64
 * @implements B4C4:0311:0009:6B64 ()
 *
 * Called From: 34C4:002A:0005:1CB0
 * Called From: 34C4:002A:0005:1D78
 */
void f__B4C4_0311_0009_6B64()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x46);
	f__B4C4_039D_0009_74D7(); return;
}

/**
 * Decompiled function f__B4C4_031A_0018_33B7()
 *
 * @name f__B4C4_031A_0018_33B7
 * @implements B4C4:031A:0018:33B7 ()
 *
 * Called From: B4C4:03A3:0009:74D7
 */
void f__B4C4_031A_0018_33B7()
{
	emu_movw(&emu_ax.x, 0x42);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x46);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0332); f__B4C4_05F3_002C_303E();
	f__B4C4_0332_000B_E51F();
}

/**
 * Decompiled function f__B4C4_0332_000B_E51F()
 *
 * @name f__B4C4_0332_000B_E51F
 * @implements B4C4:0332:000B:E51F ()
 *
 * Called From: B4C4:0332:0018:33B7
 */
void f__B4C4_0332_000B_E51F()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x46));
	emu_push(emu_cs); emu_push(0x033D); emu_cs = 0x10BE; f__10BE_00A0_0064_F23B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_033D_0023_BCE7();
}

/**
 * Decompiled function f__B4C4_033D_0023_BCE7()
 *
 * @name f__B4C4_033D_0023_BCE7
 * @implements B4C4:033D:0023:BCE7 ()
 *
 * Called From: B4C4:033D:000B:E51F
 */
void f__B4C4_033D_0023_BCE7()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x039D; emu_last_cs = 0xB4C4; emu_last_ip = 0x034A; emu_last_length = 0x0023; emu_last_crc = 0xBCE7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x42);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x46);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0360); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_0360_0046_37B7();
}

/**
 * Decompiled function f__B4C4_0360_0046_37B7()
 *
 * @name f__B4C4_0360_0046_37B7
 * @implements B4C4:0360:0046:37B7 ()
 *
 * Called From: B4C4:0360:0023:BCE7
 */
void f__B4C4_0360_0046_37B7()
{
	emu_addws(&emu_sp, 0xA);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x42), 0x2);
	if (emu_flags.zf) { f__B4C4_039D_0009_74D7(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x46));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A38), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A3C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A3A), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2C), 0xFF);
	if (emu_flags.zf) { f__B4C4_039D_0009_74D7(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2A), 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x039D; emu_last_cs = 0xB4C4; emu_last_ip = 0x0391; emu_last_length = 0x0046; emu_last_crc = 0x37B7; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2A), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { emu_ip = 0x03A6; emu_last_cs = 0xB4C4; emu_last_ip = 0x03A1; emu_last_length = 0x0046; emu_last_crc = 0x37B7; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x031A; emu_last_cs = 0xB4C4; emu_last_ip = 0x03A3; emu_last_length = 0x0046; emu_last_crc = 0x37B7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4C4_039D_0009_74D7()
 *
 * @name f__B4C4_039D_0009_74D7
 * @implements B4C4:039D:0009:74D7 ()
 *
 * Called From: B4C4:0317:0009:6B64
 * Called From: B4C4:0368:0046:37B7
 * Called From: B4C4:0386:0046:37B7
 */
void f__B4C4_039D_0009_74D7()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__B4C4_03A6_0004_0F7A(); return; }
	f__B4C4_031A_0018_33B7(); return;
}

/**
 * Decompiled function f__B4C4_03A6_0004_0F7A()
 *
 * @name f__B4C4_03A6_0004_0F7A
 * @implements B4C4:03A6:0004:0F7A ()
 *
 * Called From: B4C4:03A1:0009:74D7
 */
void f__B4C4_03A6_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_03AA_0009_61D8()
 *
 * @name f__B4C4_03AA_0009_61D8
 * @implements B4C4:03AA:0009:61D8 ()
 *
 * Called From: 34C4:002F:0005:1700
 * Called From: 34C4:002F:0005:16C8
 */
void f__B4C4_03AA_0009_61D8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x84);
	f__B4C4_042D_000B_F693(); return;
}

/**
 * Decompiled function f__B4C4_03B3_0019_4C64()
 *
 * @name f__B4C4_03B3_0019_4C64
 * @implements B4C4:03B3:0019:4C64 ()
 *
 * Called From: B4C4:0431:000B:F693
 * Called From: B4C4:0431:0020:6422
 */
void f__B4C4_03B3_0019_4C64()
{
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x84);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03CC); f__B4C4_05F3_002C_303E();
	f__B4C4_03CC_0012_105B();
}

/**
 * Decompiled function f__B4C4_03CC_0012_105B()
 *
 * @name f__B4C4_03CC_0012_105B
 * @implements B4C4:03CC:0012:105B ()
 *
 * Called From: B4C4:03CC:0019:4C64
 */
void f__B4C4_03CC_0012_105B()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3902);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x72);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03DE); f__B4C4_0633_0041_3645();
	f__B4C4_03DE_0016_A838();
}

/**
 * Decompiled function f__B4C4_03DE_0016_A838()
 *
 * @name f__B4C4_03DE_0016_A838
 * @implements B4C4:03DE:0016:A838 ()
 *
 * Called From: B4C4:03DE:0012:105B
 */
void f__B4C4_03DE_0016_A838()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x74), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x84));
	emu_push(emu_cs); emu_push(0x03F4); emu_cs = 0x0FE4; f__0FE4_05FD_002C_E199();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_03F4_0024_4C85();
}

/**
 * Decompiled function f__B4C4_03F4_0024_4C85()
 *
 * @name f__B4C4_03F4_0024_4C85
 * @implements B4C4:03F4:0024:4C85 ()
 *
 * Called From: B4C4:03F4:0016:A838
 */
void f__B4C4_03F4_0024_4C85()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x042D; emu_last_cs = 0xB4C4; emu_last_ip = 0x0401; emu_last_length = 0x0024; emu_last_crc = 0x4C85; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x84);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0418); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_0418_0020_6422();
}

/**
 * Decompiled function f__B4C4_0418_0020_6422()
 *
 * @name f__B4C4_0418_0020_6422
 * @implements B4C4:0418:0020:6422 ()
 *
 * Called From: B4C4:0418:0024:4C85
 */
void f__B4C4_0418_0020_6422()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), emu_ax.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__B4C4_03B3_0019_4C64(); return; }
	emu_push(emu_cs); emu_push(0x0438); emu_cs = 0x0FE4; f__0FE4_018D_0012_EFE2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_0438_0004_0F7A();
}

/**
 * Decompiled function f__B4C4_042D_000B_F693()
 *
 * @name f__B4C4_042D_000B_F693
 * @implements B4C4:042D:000B:F693 ()
 *
 * Called From: B4C4:03B1:0009:61D8
 */
void f__B4C4_042D_000B_F693()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__B4C4_03B3_0019_4C64(); return; }
	emu_push(emu_cs); emu_push(0x0438); emu_cs = 0x0FE4; emu_ip = 0x05C5; emu_last_cs = 0xB4C4; emu_last_ip = 0x0433; emu_last_length = 0x000B; emu_last_crc = 0xF693; emu_call(); // Jump does not resolve
	f__B4C4_0438_0004_0F7A();
}

/**
 * Decompiled function f__B4C4_0438_0004_0F7A()
 *
 * @name f__B4C4_0438_0004_0F7A
 * @implements B4C4:0438:0004:0F7A ()
 *
 * Called From: B4C4:0438:0020:6422
 */
void f__B4C4_0438_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_043C_0009_6AC4()
 *
 * @name f__B4C4_043C_0009_6AC4
 * @implements B4C4:043C:0009:6AC4 ()
 *
 * Called From: 34C4:0034:0005:1E58
 * Called From: 34C4:0034:0005:1F90
 */
void f__B4C4_043C_0009_6AC4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x5C);
	f__B4C4_04C8_0009_74D7(); return;
}

/**
 * Decompiled function f__B4C4_0445_0018_3FD1()
 *
 * @name f__B4C4_0445_0018_3FD1
 * @implements B4C4:0445:0018:3FD1 ()
 *
 * Called From: B4C4:04CE:0009:74D7
 */
void f__B4C4_0445_0018_3FD1()
{
	emu_movw(&emu_ax.x, 0x58);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x5C);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x045D); f__B4C4_05F3_002C_303E();
	f__B4C4_045D_0012_4E1A();
}

/**
 * Decompiled function f__B4C4_045D_0012_4E1A()
 *
 * @name f__B4C4_045D_0012_4E1A
 * @implements B4C4:045D:0012:4E1A ()
 *
 * Called From: B4C4:045D:0018:3FD1
 */
void f__B4C4_045D_0012_4E1A()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3918);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4A);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x046F); f__B4C4_0633_0041_3645();
	f__B4C4_046F_000B_EE67();
}

/**
 * Decompiled function f__B4C4_046F_000B_EE67()
 *
 * @name f__B4C4_046F_000B_EE67
 * @implements B4C4:046F:000B:EE67 ()
 *
 * Called From: B4C4:046F:0012:4E1A
 */
void f__B4C4_046F_000B_EE67()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x5C));
	emu_push(emu_cs); emu_push(0x047A); emu_cs = 0x1082; f__1082_03A1_0023_2E20();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_047A_0023_71F4();
}

/**
 * Decompiled function f__B4C4_047A_0023_71F4()
 *
 * @name f__B4C4_047A_0023_71F4
 * @implements B4C4:047A:0023:71F4 ()
 *
 * Called From: B4C4:047A:000B:EE67
 */
void f__B4C4_047A_0023_71F4()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x04C8; emu_last_cs = 0xB4C4; emu_last_ip = 0x0487; emu_last_length = 0x0023; emu_last_crc = 0x71F4; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x58);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x5C);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x049D); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_049D_0018_0390();
}

/**
 * Decompiled function f__B4C4_049D_0018_0390()
 *
 * @name f__B4C4_049D_0018_0390
 * @implements B4C4:049D:0018:0390 ()
 *
 * Called From: B4C4:049D:0023:71F4
 */
void f__B4C4_049D_0018_0390()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x04C8; emu_last_cs = 0xB4C4; emu_last_ip = 0x04A8; emu_last_length = 0x0018; emu_last_crc = 0x0390; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x04B5); emu_cs = 0x0C3A; f__0C3A_25EC_0011_6FF5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_04B5_000A_AB09();
}

/**
 * Decompiled function f__B4C4_04B5_000A_AB09()
 *
 * @name f__B4C4_04B5_000A_AB09
 * @implements B4C4:04B5:000A:AB09 ()
 *
 * Called From: B4C4:04B5:0018:0390
 */
void f__B4C4_04B5_000A_AB09()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4C4_04BF_0012_32CC(); return; }
	emu_movb(&emu_ax.l, 0x64);
	emu_ip = 0x04C1; emu_last_cs = 0xB4C4; emu_last_ip = 0x04BD; emu_last_length = 0x000A; emu_last_crc = 0xAB09; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4C4_04BF_0012_32CC()
 *
 * @name f__B4C4_04BF_0012_32CC
 * @implements B4C4:04BF:0012:32CC ()
 *
 * Called From: B4C4:04B9:000A:AB09
 */
void f__B4C4_04BF_0012_32CC()
{
	emu_movb(&emu_ax.l, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), emu_ax.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__B4C4_04D1_0005_1198(); return; }
	emu_ip = 0x0445; emu_last_cs = 0xB4C4; emu_last_ip = 0x04CE; emu_last_length = 0x0012; emu_last_crc = 0x32CC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4C4_04C8_0009_74D7()
 *
 * @name f__B4C4_04C8_0009_74D7
 * @implements B4C4:04C8:0009:74D7 ()
 *
 * Called From: B4C4:0442:0009:6AC4
 */
void f__B4C4_04C8_0009_74D7()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { emu_ip = 0x04D1; emu_last_cs = 0xB4C4; emu_last_ip = 0x04CC; emu_last_length = 0x0009; emu_last_crc = 0x74D7; emu_call(); return; } // Jump does not resolve
	f__B4C4_0445_0018_3FD1(); return;
}

/**
 * Decompiled function f__B4C4_04D1_0005_1198()
 *
 * @name f__B4C4_04D1_0005_1198
 * @implements B4C4:04D1:0005:1198 ()
 *
 * Called From: B4C4:04CC:0012:32CC
 */
void f__B4C4_04D1_0005_1198()
{
	emu_push(emu_cs); emu_push(0x04D6); emu_cs = 0x1082; f__1082_000F_0012_EFE2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_04D6_0004_0F7A();
}

/**
 * Decompiled function f__B4C4_04D6_0004_0F7A()
 *
 * @name f__B4C4_04D6_0004_0F7A
 * @implements B4C4:04D6:0004:0F7A ()
 *
 * Called From: B4C4:04D6:0005:1198
 */
void f__B4C4_04D6_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_04DA_0008_34FA()
 *
 * @name f__B4C4_04DA_0008_34FA
 * @implements B4C4:04DA:0008:34FA ()
 *
 * Called From: 34C4:0039:0005:1038
 * Called From: 34C4:0039:0005:11F0
 */
void f__B4C4_04DA_0008_34FA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x58);
	f__B4C4_053D_000B_FB69(); return;
}

/**
 * Decompiled function f__B4C4_053D_000B_FB69()
 *
 * @name f__B4C4_053D_000B_FB69
 * @implements B4C4:053D:000B:FB69 ()
 *
 * Called From: B4C4:04E0:0008:34FA
 */
void f__B4C4_053D_000B_FB69()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x04E2; emu_last_cs = 0xB4C4; emu_last_ip = 0x0541; emu_last_length = 0x000B; emu_last_crc = 0xFB69; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x0548); emu_cs = 0x104B; f__104B_0006_0011_4FBF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_0548_0004_0F7A();
}

/**
 * Decompiled function f__B4C4_0548_0004_0F7A()
 *
 * @name f__B4C4_0548_0004_0F7A
 * @implements B4C4:0548:0004:0F7A ()
 *
 * Called From: B4C4:0548:000B:FB69
 */
void f__B4C4_0548_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_054C_0031_8B2B()
 *
 * @name f__B4C4_054C_0031_8B2B
 * @implements B4C4:054C:0031:8B2B ()
 *
 * Called From: B4C4:002B:0012:A57B
 * Called From: B4C4:0040:0015:B911
 * Called From: B4C4:0058:0018:5F6E
 * Called From: B4C4:009C:0016:9B4F
 * Called From: B4C4:00B1:0015:BBDF
 * Called From: B4C4:00C6:0015:BB83
 * Called From: B4C4:00ED:000F:A7FB
 * Called From: B4C4:0114:000F:A65F
 * Called From: B4C4:0142:0019:4D68
 * Called From: B4C4:0157:0015:BAF9
 * Called From: B4C4:01C4:0026:3D66
 * Called From: B4C4:01F4:0012:A45B
 * Called From: B4C4:0209:0015:B8AD
 * Called From: B4C4:0230:000F:A6E1
 * Called From: B4C4:02A1:000F:A427
 */
void f__B4C4_054C_0031_8B2B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_subws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4C4_057D_0004_0F7A(); return;
}

/**
 * Decompiled function f__B4C4_057D_0004_0F7A()
 *
 * @name f__B4C4_057D_0004_0F7A
 * @implements B4C4:057D:0004:0F7A ()
 *
 * Called From: B4C4:057B:0031:8B2B
 */
void f__B4C4_057D_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_0581_003B_7316()
 *
 * @name f__B4C4_0581_003B_7316
 * @implements B4C4:0581:003B:7316 ()
 *
 * Called From: B4C4:0129:0015:B8E7
 * Called From: B4C4:016C:0015:B973
 * Called From: B4C4:0185:0019:4E23
 * Called From: B4C4:019E:0019:4E0F
 */
void f__B4C4_0581_003B_7316()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_subws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x4);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4C4_05BC_0004_0F7A(); return;
}

/**
 * Decompiled function f__B4C4_05BC_0004_0F7A()
 *
 * @name f__B4C4_05BC_0004_0F7A
 * @implements B4C4:05BC:0004:0F7A ()
 *
 * Called From: B4C4:05BA:003B:7316
 */
void f__B4C4_05BC_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_05C0_002F_E1F6()
 *
 * @name f__B4C4_05C0_002F_E1F6
 * @implements B4C4:05C0:002F:E1F6 ()
 *
 * Called From: B4C4:0070:0018:53BF
 * Called From: B4C4:0086:0016:98C3
 */
void f__B4C4_05C0_002F_E1F6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x1), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x1));
	f__B4C4_05EF_0004_0F7A(); return;
}

/**
 * Decompiled function f__B4C4_05EF_0004_0F7A()
 *
 * @name f__B4C4_05EF_0004_0F7A
 * @implements B4C4:05EF:0004:0F7A ()
 *
 * Called From: B4C4:05ED:002F:E1F6
 */
void f__B4C4_05EF_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_05F3_002C_303E()
 *
 * @name f__B4C4_05F3_002C_303E
 * @implements B4C4:05F3:002C:303E ()
 *
 * Called From: B4C4:0019:001C:764B
 * Called From: B4C4:01E2:001E:714E
 * Called From: B4C4:02CE:002D:8EEE
 * Called From: B4C4:032F:0018:33B7
 * Called From: B4C4:03C9:0019:4C64
 * Called From: B4C4:045A:0018:3FD1
 */
void f__B4C4_05F3_002C_303E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x061F); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_061F_0014_A867();
}

/**
 * Decompiled function f__B4C4_061F_0014_A867()
 *
 * @name f__B4C4_061F_0014_A867
 * @implements B4C4:061F:0014:A867 ()
 *
 * Called From: B4C4:061F:002C:303E
 */
void f__B4C4_061F_0014_A867()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_0633_0041_3645()
 *
 * @name f__B4C4_0633_0041_3645
 * @implements B4C4:0633:0041:3645 ()
 *
 * Called From: B4C4:03DB:0012:105B
 * Called From: B4C4:046C:0012:4E1A
 */
void f__B4C4_0633_0041_3645()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	if (emu_flags.zf) { emu_ip = 0x0672; emu_last_cs = 0xB4C4; emu_last_ip = 0x0651; emu_last_length = 0x0041; emu_last_crc = 0x3645; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_shlw(&emu_bx.x, 0x1);
	emu_addw(&emu_dx.x, emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
