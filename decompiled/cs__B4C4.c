/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4C4_0000_001C_B22A()
 *
 * @name f__B4C4_0000_001C_B22A
 * @implements B4C4:0000:001C:B22A ()
 *
 * Called From: 34C4:0020:0005:0000
 */
void f__B4C4_0000_001C_B22A()
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
	emu_push(0x001C); f__B4C4_05F3_002C_3269();
	f__B4C4_001C_0012_447E();
}

/**
 * Decompiled function f__B4C4_001C_0012_447E()
 *
 * @name f__B4C4_001C_0012_447E
 * @implements B4C4:001C:0012:447E ()
 *
 * Called From: B4C4:001C:001C:B22A
 */
void f__B4C4_001C_0012_447E()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x002E); f__B4C4_054C_0031_FE26();
	f__B4C4_002E_0015_F951();
}

/**
 * Decompiled function f__B4C4_002E_0015_F951()
 *
 * @name f__B4C4_002E_0015_F951
 * @implements B4C4:002E:0015:F951 ()
 *
 * Called From: B4C4:002E:0012:447E
 */
void f__B4C4_002E_0015_F951()
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
	emu_push(0x0043); f__B4C4_054C_0031_FE26();
	f__B4C4_0043_0018_F945();
}

/**
 * Decompiled function f__B4C4_0043_0018_F945()
 *
 * @name f__B4C4_0043_0018_F945
 * @implements B4C4:0043:0018:F945 ()
 *
 * Called From: B4C4:0043:0015:F951
 */
void f__B4C4_0043_0018_F945()
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
	emu_push(0x005B); f__B4C4_054C_0031_FE26();
	f__B4C4_005B_0018_4786();
}

/**
 * Decompiled function f__B4C4_005B_0018_4786()
 *
 * @name f__B4C4_005B_0018_4786
 * @implements B4C4:005B:0018:4786 ()
 *
 * Called From: B4C4:005B:0018:F945
 */
void f__B4C4_005B_0018_4786()
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
	emu_push(0x0073); f__B4C4_05C0_002F_C3F6();
	f__B4C4_0073_0016_F76A();
}

/**
 * Decompiled function f__B4C4_0073_0016_F76A()
 *
 * @name f__B4C4_0073_0016_F76A
 * @implements B4C4:0073:0016:F76A ()
 *
 * Called From: B4C4:0073:0018:4786
 */
void f__B4C4_0073_0016_F76A()
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
	emu_push(0x0089); f__B4C4_05C0_002F_C3F6();
	f__B4C4_0089_0016_0ECE();
}

/**
 * Decompiled function f__B4C4_0089_0016_0ECE()
 *
 * @name f__B4C4_0089_0016_0ECE
 * @implements B4C4:0089:0016:0ECE ()
 *
 * Called From: B4C4:0089:0016:F76A
 */
void f__B4C4_0089_0016_0ECE()
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
	emu_push(0x009F); f__B4C4_054C_0031_FE26();
	f__B4C4_009F_0015_9BF5();
}

/**
 * Decompiled function f__B4C4_009F_0015_9BF5()
 *
 * @name f__B4C4_009F_0015_9BF5
 * @implements B4C4:009F:0015:9BF5 ()
 *
 * Called From: B4C4:009F:0016:0ECE
 */
void f__B4C4_009F_0015_9BF5()
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
	emu_push(0x00B4); f__B4C4_054C_0031_FE26();
	f__B4C4_00B4_0015_57F3();
}

/**
 * Decompiled function f__B4C4_00B4_0015_57F3()
 *
 * @name f__B4C4_00B4_0015_57F3
 * @implements B4C4:00B4:0015:57F3 ()
 *
 * Called From: B4C4:00B4:0015:9BF5
 */
void f__B4C4_00B4_0015_57F3()
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
	emu_push(0x00C9); f__B4C4_054C_0031_FE26();
	f__B4C4_00C9_0010_FF92();
}

/**
 * Decompiled function f__B4C4_00C9_0010_FF92()
 *
 * @name f__B4C4_00C9_0010_FF92
 * @implements B4C4:00C9:0010:FF92 ()
 *
 * Called From: B4C4:00C9:0015:57F3
 */
void f__B4C4_00C9_0010_FF92()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__B4C4_00E1_000F_66C0(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00D9); emu_cs = 0x0FE4; f__0FE4_05FD_002C_15BA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_00D9_0017_4092();
}

/**
 * Decompiled function f__B4C4_00D9_0017_4092()
 *
 * @name f__B4C4_00D9_0017_4092
 * @implements B4C4:00D9:0017:4092 ()
 *
 * Called From: B4C4:00D9:0010:FF92
 */
void f__B4C4_00D9_0017_4092()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0A), emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00F0); f__B4C4_054C_0031_FE26();
	f__B4C4_00F0_0010_FF92();
}

/**
 * Decompiled function f__B4C4_00E1_000F_66C0()
 *
 * @name f__B4C4_00E1_000F_66C0
 * @implements B4C4:00E1:000F:66C0 ()
 *
 * Called From: B4C4:00D1:0010:FF92
 */
void f__B4C4_00E1_000F_66C0()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00F0); f__B4C4_054C_0031_FE26();
	f__B4C4_00F0_0010_FF92();
}

/**
 * Decompiled function f__B4C4_00F0_0010_FF92()
 *
 * @name f__B4C4_00F0_0010_FF92
 * @implements B4C4:00F0:0010:FF92 ()
 *
 * Called From: B4C4:00F0:000F:66C0
 * Called From: B4C4:00F0:0017:4092
 */
void f__B4C4_00F0_0010_FF92()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__B4C4_0108_000F_26DA(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0100); emu_cs = 0x0FE4; emu_ip = 0x05FD; emu_last_cs = 0xB4C4; emu_last_ip = 0x00FB; emu_last_length = 0x0010; emu_last_crc = 0xFF92; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4C4_0108_000F_26DA()
 *
 * @name f__B4C4_0108_000F_26DA
 * @implements B4C4:0108:000F:26DA ()
 *
 * Called From: B4C4:00F8:0010:FF92
 */
void f__B4C4_0108_000F_26DA()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0117); f__B4C4_054C_0031_FE26();
	f__B4C4_0117_0015_D8C6();
}

/**
 * Decompiled function f__B4C4_0117_0015_D8C6()
 *
 * @name f__B4C4_0117_0015_D8C6
 * @implements B4C4:0117:0015:D8C6 ()
 *
 * Called From: B4C4:0117:000F:26DA
 */
void f__B4C4_0117_0015_D8C6()
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
	emu_push(0x012C); f__B4C4_0581_003B_B6D9();
	f__B4C4_012C_0019_1978();
}

/**
 * Decompiled function f__B4C4_012C_0019_1978()
 *
 * @name f__B4C4_012C_0019_1978
 * @implements B4C4:012C:0019:1978 ()
 *
 * Called From: B4C4:012C:0015:D8C6
 */
void f__B4C4_012C_0019_1978()
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
	emu_push(0x0145); f__B4C4_054C_0031_FE26();
	f__B4C4_0145_0015_386F();
}

/**
 * Decompiled function f__B4C4_0145_0015_386F()
 *
 * @name f__B4C4_0145_0015_386F
 * @implements B4C4:0145:0015:386F ()
 *
 * Called From: B4C4:0145:0019:1978
 */
void f__B4C4_0145_0015_386F()
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
	emu_push(0x015A); f__B4C4_054C_0031_FE26();
	f__B4C4_015A_0015_3AD7();
}

/**
 * Decompiled function f__B4C4_015A_0015_3AD7()
 *
 * @name f__B4C4_015A_0015_3AD7
 * @implements B4C4:015A:0015:3AD7 ()
 *
 * Called From: B4C4:015A:0015:386F
 */
void f__B4C4_015A_0015_3AD7()
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
	emu_push(0x016F); f__B4C4_0581_003B_B6D9();
	f__B4C4_016F_0019_DB7A();
}

/**
 * Decompiled function f__B4C4_016F_0019_DB7A()
 *
 * @name f__B4C4_016F_0019_DB7A
 * @implements B4C4:016F:0019:DB7A ()
 *
 * Called From: B4C4:016F:0015:3AD7
 */
void f__B4C4_016F_0019_DB7A()
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
	emu_push(0x0188); f__B4C4_0581_003B_B6D9();
	f__B4C4_0188_0019_D97C();
}

/**
 * Decompiled function f__B4C4_0188_0019_D97C()
 *
 * @name f__B4C4_0188_0019_D97C
 * @implements B4C4:0188:0019:D97C ()
 *
 * Called From: B4C4:0188:0019:DB7A
 */
void f__B4C4_0188_0019_D97C()
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
	emu_push(0x01A1); f__B4C4_0581_003B_B6D9();
	f__B4C4_01A1_0026_C56B();
}

/**
 * Decompiled function f__B4C4_01A1_0026_C56B()
 *
 * @name f__B4C4_01A1_0026_C56B
 * @implements B4C4:01A1:0026:C56B ()
 *
 * Called From: B4C4:01A1:0019:D97C
 */
void f__B4C4_01A1_0026_C56B()
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
	emu_push(0x01C7); f__B4C4_054C_0031_FE26();
	f__B4C4_01C7_001E_4F52();
}

/**
 * Decompiled function f__B4C4_01C7_001E_4F52()
 *
 * @name f__B4C4_01C7_001E_4F52
 * @implements B4C4:01C7:001E:4F52 ()
 *
 * Called From: B4C4:01C7:0026:C56B
 */
void f__B4C4_01C7_001E_4F52()
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
	emu_push(0x01E5); f__B4C4_05F3_002C_3269();
	f__B4C4_01E5_0012_876C();
}

/**
 * Decompiled function f__B4C4_01E5_0012_876C()
 *
 * @name f__B4C4_01E5_0012_876C
 * @implements B4C4:01E5:0012:876C ()
 *
 * Called From: B4C4:01E5:001E:4F52
 */
void f__B4C4_01E5_0012_876C()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x01F7); f__B4C4_054C_0031_FE26();
	f__B4C4_01F7_0015_9F43();
}

/**
 * Decompiled function f__B4C4_01F7_0015_9F43()
 *
 * @name f__B4C4_01F7_0015_9F43
 * @implements B4C4:01F7:0015:9F43 ()
 *
 * Called From: B4C4:01F7:0012:876C
 */
void f__B4C4_01F7_0015_9F43()
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
	emu_push(0x020C); f__B4C4_054C_0031_FE26();
	f__B4C4_020C_0010_FF92();
}

/**
 * Decompiled function f__B4C4_020C_0010_FF92()
 *
 * @name f__B4C4_020C_0010_FF92
 * @implements B4C4:020C:0010:FF92 ()
 *
 * Called From: B4C4:020C:0015:9F43
 */
void f__B4C4_020C_0010_FF92()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__B4C4_0224_000F_2551(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x021C); emu_cs = 0x0FE4; emu_ip = 0x05FD; emu_last_cs = 0xB4C4; emu_last_ip = 0x0217; emu_last_length = 0x0010; emu_last_crc = 0xFF92; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4C4_0224_000F_2551()
 *
 * @name f__B4C4_0224_000F_2551
 * @implements B4C4:0224:000F:2551 ()
 *
 * Called From: B4C4:0214:0010:FF92
 */
void f__B4C4_0224_000F_2551()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0233); f__B4C4_054C_0031_FE26();
	f__B4C4_0233_000B_9D3D();
}

/**
 * Decompiled function f__B4C4_0233_000B_9D3D()
 *
 * @name f__B4C4_0233_000B_9D3D
 * @implements B4C4:0233:000B:9D3D ()
 *
 * Called From: B4C4:0233:000F:2551
 */
void f__B4C4_0233_000B_9D3D()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38EA), emu_ax.x);
	emu_push(emu_cs); emu_push(0x023E); emu_cs = 0x34B8; ovl__34B8(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_023E_000D_44AD();
}

/**
 * Decompiled function f__B4C4_023E_000D_44AD()
 *
 * @name f__B4C4_023E_000D_44AD
 * @implements B4C4:023E:000D:44AD ()
 *
 * Called From: B4C4:023E:000B:9D3D
 */
void f__B4C4_023E_000D_44AD()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x72F9));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x72FB));
	emu_push(emu_cs); emu_push(0x024B); emu_cs = 0x34B8; ovl__34B8(6);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_024B_0007_B149();
}

/**
 * Decompiled function f__B4C4_024B_0007_B149()
 *
 * @name f__B4C4_024B_0007_B149
 * @implements B4C4:024B:0007:B149 ()
 *
 * Called From: B4C4:024B:000D:44AD
 */
void f__B4C4_024B_0007_B149()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__B4C4_0252_0003_2E57(); return;
}

/**
 * Decompiled function f__B4C4_0252_0003_2E57()
 *
 * @name f__B4C4_0252_0003_2E57
 * @implements B4C4:0252:0003:2E57 ()
 *
 * Called From: B4C4:0250:0007:B149
 */
void f__B4C4_0252_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_0255_0009_A812()
 *
 * @name f__B4C4_0255_0009_A812
 * @implements B4C4:0255:0009:A812 ()
 *
 * Called From: 34C4:0025:0005:0000
 */
void f__B4C4_0255_0009_A812()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	f__B4C4_028D_0008_A023(); return;
}

/**
 * Decompiled function f__B4C4_025E_0037_F654()
 *
 * @name f__B4C4_025E_0037_F654
 * @implements B4C4:025E:0037:F654 ()
 *
 * Called From: B4C4:0291:0008:A023
 * Called From: B4C4:0291:0037:F654
 */
void f__B4C4_025E_0037_F654()
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
	if ((emu_flags.sf != emu_flags.of)) { f__B4C4_025E_0037_F654(); return; }
	f__B4C4_0307_000A_24EC(); return;
}

/**
 * Decompiled function f__B4C4_028D_0008_A023()
 *
 * @name f__B4C4_028D_0008_A023
 * @implements B4C4:028D:0008:A023 ()
 *
 * Called From: B4C4:025C:0009:A812
 */
void f__B4C4_028D_0008_A023()
{
	emu_cmpw(&emu_di, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__B4C4_025E_0037_F654(); return; }
	emu_ip = 0x0307; emu_last_cs = 0xB4C4; emu_last_ip = 0x0293; emu_last_length = 0x0008; emu_last_crc = 0xA023; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4C4_0295_000F_65FD()
 *
 * @name f__B4C4_0295_000F_65FD
 * @implements B4C4:0295:000F:65FD ()
 *
 * Called From: B4C4:030B:000A:24EC
 * Called From: B4C4:030B:0040:53A1
 */
void f__B4C4_0295_000F_65FD()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x02A4); f__B4C4_054C_0031_FE26();
	f__B4C4_02A4_002D_BE65();
}

/**
 * Decompiled function f__B4C4_02A4_002D_BE65()
 *
 * @name f__B4C4_02A4_002D_BE65
 * @implements B4C4:02A4:002D:BE65 ()
 *
 * Called From: B4C4:02A4:000F:65FD
 */
void f__B4C4_02A4_002D_BE65()
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
	emu_push(0x02D1); f__B4C4_05F3_002C_3269();
	f__B4C4_02D1_0040_53A1();
}

/**
 * Decompiled function f__B4C4_02D1_0040_53A1()
 *
 * @name f__B4C4_02D1_0040_53A1
 * @implements B4C4:02D1:0040:53A1 ()
 *
 * Called From: B4C4:02D1:002D:BE65
 */
void f__B4C4_02D1_0040_53A1()
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
	if (emu_flags.zf) { f__B4C4_0307_000A_24EC(); return; }
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), 0x8000);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__B4C4_0295_000F_65FD(); return; }
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_0307_000A_24EC()
 *
 * @name f__B4C4_0307_000A_24EC
 * @implements B4C4:0307:000A:24EC ()
 *
 * Called From: B4C4:0293:0037:F654
 * Called From: B4C4:02F5:0040:53A1
 */
void f__B4C4_0307_000A_24EC()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__B4C4_0295_000F_65FD(); return; }
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_0311_0009_BC94()
 *
 * @name f__B4C4_0311_0009_BC94
 * @implements B4C4:0311:0009:BC94 ()
 *
 * Called From: 34C4:002A:0005:0000
 */
void f__B4C4_0311_0009_BC94()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x46);
	f__B4C4_039D_0009_AF48(); return;
}

/**
 * Decompiled function f__B4C4_031A_0018_3303()
 *
 * @name f__B4C4_031A_0018_3303
 * @implements B4C4:031A:0018:3303 ()
 *
 * Called From: B4C4:03A3:0009:AF48
 */
void f__B4C4_031A_0018_3303()
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
	emu_push(0x0332); f__B4C4_05F3_002C_3269();
	f__B4C4_0332_000B_CA0C();
}

/**
 * Decompiled function f__B4C4_0332_000B_CA0C()
 *
 * @name f__B4C4_0332_000B_CA0C
 * @implements B4C4:0332:000B:CA0C ()
 *
 * Called From: B4C4:0332:0018:3303
 */
void f__B4C4_0332_000B_CA0C()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x46));
	emu_push(emu_cs); emu_push(0x033D); emu_cs = 0x10BE; f__10BE_00A0_0064_DF2A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_033D_0023_AC02();
}

/**
 * Decompiled function f__B4C4_033D_0023_AC02()
 *
 * @name f__B4C4_033D_0023_AC02
 * @implements B4C4:033D:0023:AC02 ()
 *
 * Called From: B4C4:033D:000B:CA0C
 */
void f__B4C4_033D_0023_AC02()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x039D; emu_last_cs = 0xB4C4; emu_last_ip = 0x034A; emu_last_length = 0x0023; emu_last_crc = 0xAC02; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x42);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x46);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0360); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_0360_0046_F14D();
}

/**
 * Decompiled function f__B4C4_0360_0046_F14D()
 *
 * @name f__B4C4_0360_0046_F14D
 * @implements B4C4:0360:0046:F14D ()
 *
 * Called From: B4C4:0360:0023:AC02
 */
void f__B4C4_0360_0046_F14D()
{
	emu_addws(&emu_sp, 0xA);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x42), 0x2);
	if (emu_flags.zf) { f__B4C4_039D_0009_AF48(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x46));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A38), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A3C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A3A), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2C), 0xFF);
	if (emu_flags.zf) { f__B4C4_039D_0009_AF48(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2A), 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x039D; emu_last_cs = 0xB4C4; emu_last_ip = 0x0391; emu_last_length = 0x0046; emu_last_crc = 0xF14D; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2A), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { emu_ip = 0x03A6; emu_last_cs = 0xB4C4; emu_last_ip = 0x03A1; emu_last_length = 0x0046; emu_last_crc = 0xF14D; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x031A; emu_last_cs = 0xB4C4; emu_last_ip = 0x03A3; emu_last_length = 0x0046; emu_last_crc = 0xF14D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4C4_039D_0009_AF48()
 *
 * @name f__B4C4_039D_0009_AF48
 * @implements B4C4:039D:0009:AF48 ()
 *
 * Called From: B4C4:0317:0009:BC94
 * Called From: B4C4:0368:0046:F14D
 * Called From: B4C4:0386:0046:F14D
 */
void f__B4C4_039D_0009_AF48()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__B4C4_03A6_0004_893F(); return; }
	f__B4C4_031A_0018_3303(); return;
}

/**
 * Decompiled function f__B4C4_03A6_0004_893F()
 *
 * @name f__B4C4_03A6_0004_893F
 * @implements B4C4:03A6:0004:893F ()
 *
 * Called From: B4C4:03A1:0009:AF48
 */
void f__B4C4_03A6_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_03AA_0009_B4A2()
 *
 * @name f__B4C4_03AA_0009_B4A2
 * @implements B4C4:03AA:0009:B4A2 ()
 *
 * Called From: 34C4:002F:0005:0000
 */
void f__B4C4_03AA_0009_B4A2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x84);
	f__B4C4_042D_000B_AC3C(); return;
}

/**
 * Decompiled function f__B4C4_03B3_0019_DA34()
 *
 * @name f__B4C4_03B3_0019_DA34
 * @implements B4C4:03B3:0019:DA34 ()
 *
 * Called From: B4C4:0431:000B:AC3C
 * Called From: B4C4:0431:0020:60C2
 */
void f__B4C4_03B3_0019_DA34()
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
	emu_push(0x03CC); f__B4C4_05F3_002C_3269();
	f__B4C4_03CC_0012_B51A();
}

/**
 * Decompiled function f__B4C4_03CC_0012_B51A()
 *
 * @name f__B4C4_03CC_0012_B51A
 * @implements B4C4:03CC:0012:B51A ()
 *
 * Called From: B4C4:03CC:0019:DA34
 */
void f__B4C4_03CC_0012_B51A()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3902);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x72);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03DE); f__B4C4_0633_0041_F5FE();
	f__B4C4_03DE_0016_704F();
}

/**
 * Decompiled function f__B4C4_03DE_0016_704F()
 *
 * @name f__B4C4_03DE_0016_704F
 * @implements B4C4:03DE:0016:704F ()
 *
 * Called From: B4C4:03DE:0012:B51A
 */
void f__B4C4_03DE_0016_704F()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x74), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x84));
	emu_push(emu_cs); emu_push(0x03F4); emu_cs = 0x0FE4; f__0FE4_05FD_002C_15BA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_03F4_0024_34F7();
}

/**
 * Decompiled function f__B4C4_03F4_0024_34F7()
 *
 * @name f__B4C4_03F4_0024_34F7
 * @implements B4C4:03F4:0024:34F7 ()
 *
 * Called From: B4C4:03F4:0016:704F
 */
void f__B4C4_03F4_0024_34F7()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x042D; emu_last_cs = 0xB4C4; emu_last_ip = 0x0401; emu_last_length = 0x0024; emu_last_crc = 0x34F7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x84);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0418); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_0418_0020_60C2();
}

/**
 * Decompiled function f__B4C4_0418_0020_60C2()
 *
 * @name f__B4C4_0418_0020_60C2
 * @implements B4C4:0418:0020:60C2 ()
 *
 * Called From: B4C4:0418:0024:34F7
 */
void f__B4C4_0418_0020_60C2()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), emu_ax.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__B4C4_03B3_0019_DA34(); return; }
	emu_push(emu_cs); emu_push(0x0438); emu_cs = 0x0FE4; f__0FE4_018D_0012_A3C7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_0438_0004_893F();
}

/**
 * Decompiled function f__B4C4_042D_000B_AC3C()
 *
 * @name f__B4C4_042D_000B_AC3C
 * @implements B4C4:042D:000B:AC3C ()
 *
 * Called From: B4C4:03B1:0009:B4A2
 */
void f__B4C4_042D_000B_AC3C()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__B4C4_03B3_0019_DA34(); return; }
	emu_push(emu_cs); emu_push(0x0438); emu_cs = 0x0FE4; emu_ip = 0x018D; emu_last_cs = 0xB4C4; emu_last_ip = 0x0433; emu_last_length = 0x000B; emu_last_crc = 0xAC3C; emu_call(); // Jump does not resolve
	f__B4C4_0438_0004_893F();
}

/**
 * Decompiled function f__B4C4_0438_0004_893F()
 *
 * @name f__B4C4_0438_0004_893F
 * @implements B4C4:0438:0004:893F ()
 *
 * Called From: B4C4:0438:0020:60C2
 */
void f__B4C4_0438_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_043C_0009_1C95()
 *
 * @name f__B4C4_043C_0009_1C95
 * @implements B4C4:043C:0009:1C95 ()
 *
 * Called From: 34C4:0034:0005:0000
 */
void f__B4C4_043C_0009_1C95()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x5C);
	f__B4C4_04C8_0009_AF48(); return;
}

/**
 * Decompiled function f__B4C4_0445_0018_FDA2()
 *
 * @name f__B4C4_0445_0018_FDA2
 * @implements B4C4:0445:0018:FDA2 ()
 *
 * Called From: B4C4:04CE:0009:AF48
 * Called From: B4C4:04CE:0012:DB19
 */
void f__B4C4_0445_0018_FDA2()
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
	emu_push(0x045D); f__B4C4_05F3_002C_3269();
	f__B4C4_045D_0012_24CE();
}

/**
 * Decompiled function f__B4C4_045D_0012_24CE()
 *
 * @name f__B4C4_045D_0012_24CE
 * @implements B4C4:045D:0012:24CE ()
 *
 * Called From: B4C4:045D:0018:FDA2
 */
void f__B4C4_045D_0012_24CE()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3918);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4A);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x046F); f__B4C4_0633_0041_F5FE();
	f__B4C4_046F_000B_A260();
}

/**
 * Decompiled function f__B4C4_046F_000B_A260()
 *
 * @name f__B4C4_046F_000B_A260
 * @implements B4C4:046F:000B:A260 ()
 *
 * Called From: B4C4:046F:0012:24CE
 */
void f__B4C4_046F_000B_A260()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x5C));
	emu_push(emu_cs); emu_push(0x047A); emu_cs = 0x1082; f__1082_03A1_0023_9F5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_047A_0023_5C32();
}

/**
 * Decompiled function f__B4C4_047A_0023_5C32()
 *
 * @name f__B4C4_047A_0023_5C32
 * @implements B4C4:047A:0023:5C32 ()
 *
 * Called From: B4C4:047A:000B:A260
 */
void f__B4C4_047A_0023_5C32()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x04C8; emu_last_cs = 0xB4C4; emu_last_ip = 0x0487; emu_last_length = 0x0023; emu_last_crc = 0x5C32; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x58);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x5C);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x049D); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_049D_0018_10C7();
}

/**
 * Decompiled function f__B4C4_049D_0018_10C7()
 *
 * @name f__B4C4_049D_0018_10C7
 * @implements B4C4:049D:0018:10C7 ()
 *
 * Called From: B4C4:049D:0023:5C32
 */
void f__B4C4_049D_0018_10C7()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x04C8; emu_last_cs = 0xB4C4; emu_last_ip = 0x04A8; emu_last_length = 0x0018; emu_last_crc = 0x10C7; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x04B5); emu_cs = 0x0C3A; f__0C3A_25EC_0011_E453();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_04B5_000A_817C();
}

/**
 * Decompiled function f__B4C4_04B5_000A_817C()
 *
 * @name f__B4C4_04B5_000A_817C
 * @implements B4C4:04B5:000A:817C ()
 *
 * Called From: B4C4:04B5:0018:10C7
 */
void f__B4C4_04B5_000A_817C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4C4_04BF_0012_DB19(); return; }
	emu_movb(&emu_ax.l, 0x64);
	emu_ip = 0x04C1; emu_last_cs = 0xB4C4; emu_last_ip = 0x04BD; emu_last_length = 0x000A; emu_last_crc = 0x817C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4C4_04BF_0012_DB19()
 *
 * @name f__B4C4_04BF_0012_DB19
 * @implements B4C4:04BF:0012:DB19 ()
 *
 * Called From: B4C4:04B9:000A:817C
 */
void f__B4C4_04BF_0012_DB19()
{
	emu_movb(&emu_ax.l, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), emu_ax.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__B4C4_04D1_0005_7CF0(); return; }
	f__B4C4_0445_0018_FDA2(); return;
}

/**
 * Decompiled function f__B4C4_04C8_0009_AF48()
 *
 * @name f__B4C4_04C8_0009_AF48
 * @implements B4C4:04C8:0009:AF48 ()
 *
 * Called From: B4C4:0442:0009:1C95
 */
void f__B4C4_04C8_0009_AF48()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { emu_ip = 0x04D1; emu_last_cs = 0xB4C4; emu_last_ip = 0x04CC; emu_last_length = 0x0009; emu_last_crc = 0xAF48; emu_call(); return; } // Jump does not resolve
	f__B4C4_0445_0018_FDA2(); return;
}

/**
 * Decompiled function f__B4C4_04D1_0005_7CF0()
 *
 * @name f__B4C4_04D1_0005_7CF0
 * @implements B4C4:04D1:0005:7CF0 ()
 *
 * Called From: B4C4:04CC:0012:DB19
 */
void f__B4C4_04D1_0005_7CF0()
{
	emu_push(emu_cs); emu_push(0x04D6); emu_cs = 0x1082; f__1082_000F_0012_A3C7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_04D6_0004_893F();
}

/**
 * Decompiled function f__B4C4_04D6_0004_893F()
 *
 * @name f__B4C4_04D6_0004_893F
 * @implements B4C4:04D6:0004:893F ()
 *
 * Called From: B4C4:04D6:0005:7CF0
 */
void f__B4C4_04D6_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_04DA_0008_C6B9()
 *
 * @name f__B4C4_04DA_0008_C6B9
 * @implements B4C4:04DA:0008:C6B9 ()
 *
 * Called From: 34C4:0039:0005:0000
 */
void f__B4C4_04DA_0008_C6B9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x58);
	f__B4C4_053D_000B_AFBF(); return;
}

/**
 * Decompiled function f__B4C4_053D_000B_AFBF()
 *
 * @name f__B4C4_053D_000B_AFBF
 * @implements B4C4:053D:000B:AFBF ()
 *
 * Called From: B4C4:04E0:0008:C6B9
 */
void f__B4C4_053D_000B_AFBF()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x04E2; emu_last_cs = 0xB4C4; emu_last_ip = 0x0541; emu_last_length = 0x000B; emu_last_crc = 0xAFBF; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x0548); emu_cs = 0x104B; f__104B_0006_0011_631B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_0548_0004_893F();
}

/**
 * Decompiled function f__B4C4_0548_0004_893F()
 *
 * @name f__B4C4_0548_0004_893F
 * @implements B4C4:0548:0004:893F ()
 *
 * Called From: B4C4:0548:000B:AFBF
 */
void f__B4C4_0548_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_054C_0031_FE26()
 *
 * @name f__B4C4_054C_0031_FE26
 * @implements B4C4:054C:0031:FE26 ()
 *
 * Called From: B4C4:002B:0012:447E
 * Called From: B4C4:0040:0015:F951
 * Called From: B4C4:0058:0018:F945
 * Called From: B4C4:009C:0016:0ECE
 * Called From: B4C4:00B1:0015:9BF5
 * Called From: B4C4:00C6:0015:57F3
 * Called From: B4C4:00ED:000F:66C0
 * Called From: B4C4:00ED:0017:4092
 * Called From: B4C4:0114:000F:26DA
 * Called From: B4C4:0142:0019:1978
 * Called From: B4C4:0157:0015:386F
 * Called From: B4C4:01C4:0026:C56B
 * Called From: B4C4:01F4:0012:876C
 * Called From: B4C4:0209:0015:9F43
 * Called From: B4C4:0230:000F:2551
 * Called From: B4C4:02A1:000F:65FD
 */
void f__B4C4_054C_0031_FE26()
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
	f__B4C4_057D_0004_893F(); return;
}

/**
 * Decompiled function f__B4C4_057D_0004_893F()
 *
 * @name f__B4C4_057D_0004_893F
 * @implements B4C4:057D:0004:893F ()
 *
 * Called From: B4C4:057B:0031:FE26
 */
void f__B4C4_057D_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_0581_003B_B6D9()
 *
 * @name f__B4C4_0581_003B_B6D9
 * @implements B4C4:0581:003B:B6D9 ()
 *
 * Called From: B4C4:0129:0015:D8C6
 * Called From: B4C4:016C:0015:3AD7
 * Called From: B4C4:0185:0019:DB7A
 * Called From: B4C4:019E:0019:D97C
 */
void f__B4C4_0581_003B_B6D9()
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
	f__B4C4_05BC_0004_893F(); return;
}

/**
 * Decompiled function f__B4C4_05BC_0004_893F()
 *
 * @name f__B4C4_05BC_0004_893F
 * @implements B4C4:05BC:0004:893F ()
 *
 * Called From: B4C4:05BA:003B:B6D9
 */
void f__B4C4_05BC_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_05C0_002F_C3F6()
 *
 * @name f__B4C4_05C0_002F_C3F6
 * @implements B4C4:05C0:002F:C3F6 ()
 *
 * Called From: B4C4:0070:0018:4786
 * Called From: B4C4:0086:0016:F76A
 */
void f__B4C4_05C0_002F_C3F6()
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
	f__B4C4_05EF_0004_893F(); return;
}

/**
 * Decompiled function f__B4C4_05EF_0004_893F()
 *
 * @name f__B4C4_05EF_0004_893F
 * @implements B4C4:05EF:0004:893F ()
 *
 * Called From: B4C4:05ED:002F:C3F6
 */
void f__B4C4_05EF_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4C4_05F3_002C_3269()
 *
 * @name f__B4C4_05F3_002C_3269
 * @implements B4C4:05F3:002C:3269 ()
 *
 * Called From: B4C4:0019:001C:B22A
 * Called From: B4C4:01E2:001E:4F52
 * Called From: B4C4:02CE:002D:BE65
 * Called From: B4C4:032F:0018:3303
 * Called From: B4C4:03C9:0019:DA34
 * Called From: B4C4:045A:0018:FDA2
 */
void f__B4C4_05F3_002C_3269()
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
	emu_push(emu_cs); emu_push(0x061F); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { ovl__34C4(0xFF); }
	f__B4C4_061F_0014_DF3D();
}

/**
 * Decompiled function f__B4C4_061F_0014_DF3D()
 *
 * @name f__B4C4_061F_0014_DF3D
 * @implements B4C4:061F:0014:DF3D ()
 *
 * Called From: B4C4:061F:002C:3269
 */
void f__B4C4_061F_0014_DF3D()
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
 * Decompiled function f__B4C4_0633_0041_F5FE()
 *
 * @name f__B4C4_0633_0041_F5FE
 * @implements B4C4:0633:0041:F5FE ()
 *
 * Called From: B4C4:03DB:0012:B51A
 * Called From: B4C4:046C:0012:24CE
 */
void f__B4C4_0633_0041_F5FE()
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
	if (emu_flags.zf) { f__B4C4_0672_0002_2597(); return; }
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

/**
 * Decompiled function f__B4C4_0672_0002_2597()
 *
 * @name f__B4C4_0672_0002_2597
 * @implements B4C4:0672:0002:2597 ()
 *
 * Called From: B4C4:0651:0041:F5FE
 */
void f__B4C4_0672_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
