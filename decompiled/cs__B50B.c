/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B50B_0000_0029_BAE2()
 *
 * @name f__B50B_0000_0029_BAE2
 * @implements B50B:0000:0029:BAE2 ()
 *
 * Called From: 350B:0020:0005:1E16
 */
void f__B50B_0000_0029_BAE2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7303), 0x290);
	emu_movw(&emu_ax.x, 0xE6);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8CFD);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0029); f__B50B_0608_002C_F30D();
	f__B50B_0029_0016_D9FA();
}

/**
 * Decompiled function f__B50B_0029_0016_D9FA()
 *
 * @name f__B50B_0029_0016_D9FA
 * @implements B50B:0029:0016:D9FA ()
 *
 * Called From: B50B:0029:0029:BAE2
 */
void f__B50B_0029_0016_D9FA()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38B4));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x003F); f__B50B_05AA_0030_6F54();
	f__B50B_003F_0016_D9D3();
}

/**
 * Decompiled function f__B50B_003F_0016_D9D3()
 *
 * @name f__B50B_003F_0016_D9D3
 * @implements B50B:003F:0016:D9D3 ()
 *
 * Called From: B50B:003F:0016:D9FA
 */
void f__B50B_003F_0016_D9D3()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0055); f__B50B_05AA_0030_6F54();
	f__B50B_0055_0016_D980();
}

/**
 * Decompiled function f__B50B_0055_0016_D980()
 *
 * @name f__B50B_0055_0016_D980
 * @implements B50B:0055:0016:D980 ()
 *
 * Called From: B50B:0055:0016:D9D3
 */
void f__B50B_0055_0016_D980()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A00));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x006B); f__B50B_05AA_0030_6F54();
	f__B50B_006B_0017_9DDE();
}

/**
 * Decompiled function f__B50B_006B_0017_9DDE()
 *
 * @name f__B50B_006B_0017_9DDE
 * @implements B50B:006B:0017:9DDE ()
 *
 * Called From: B50B:006B:0016:D980
 */
void f__B50B_006B_0017_9DDE()
{
	emu_addws(&emu_sp, 0xA);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x3A0E));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0082); f__B50B_05DA_002E_1F90();
	f__B50B_0082_0016_D9B2();
}

/**
 * Decompiled function f__B50B_0082_0016_D9B2()
 *
 * @name f__B50B_0082_0016_D9B2
 * @implements B50B:0082:0016:D9B2 ()
 *
 * Called From: B50B:0082:0017:9DDE
 */
void f__B50B_0082_0016_D9B2()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38E2));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0098); f__B50B_05DA_002E_1F90();
	f__B50B_0098_0016_DB6C();
}

/**
 * Decompiled function f__B50B_0098_0016_DB6C()
 *
 * @name f__B50B_0098_0016_DB6C
 * @implements B50B:0098:0016:DB6C ()
 *
 * Called From: B50B:0098:0016:D9B2
 */
void f__B50B_0098_0016_DB6C()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F0));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00AE); f__B50B_05AA_0030_6F54();
	f__B50B_00AE_0013_109E();
}

/**
 * Decompiled function f__B50B_00AE_0013_109E()
 *
 * @name f__B50B_00AE_0013_109E
 * @implements B50B:00AE:0013:109E ()
 *
 * Called From: B50B:00AE:0016:DB6C
 */
void f__B50B_00AE_0013_109E()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38E2), 0xFF);
	if (emu_flags.zf) { f__B50B_00C1_0013_E24E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x38E4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_ip = 0x00C5; emu_last_cs = 0xB50B; emu_last_ip = 0x00BF; emu_last_length = 0x0013; emu_last_crc = 0x109E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B50B_00C1_0013_E24E()
 *
 * @name f__B50B_00C1_0013_E24E
 * @implements B50B:00C1:0013:E24E ()
 *
 * Called From: B50B:00B6:0013:109E
 */
void f__B50B_00C1_0013_E24E()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00D4); f__B50B_05AA_0030_6F54();
	f__B50B_00D4_0015_2E72();
}

/**
 * Decompiled function f__B50B_00D4_0015_2E72()
 *
 * @name f__B50B_00D4_0015_2E72
 * @implements B50B:00D4:0015:2E72 ()
 *
 * Called From: B50B:00D4:0013:E24E
 */
void f__B50B_00D4_0015_2E72()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { f__B50B_00E9_0013_E3AE(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_ip = 0x00ED; emu_last_cs = 0xB50B; emu_last_ip = 0x00E7; emu_last_length = 0x0015; emu_last_crc = 0x2E72; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B50B_00E9_0013_E3AE()
 *
 * @name f__B50B_00E9_0013_E3AE
 * @implements B50B:00E9:0013:E3AE ()
 *
 * Called From: B50B:00DE:0015:2E72
 */
void f__B50B_00E9_0013_E3AE()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x00FC); f__B50B_05AA_0030_6F54();
	f__B50B_00FC_0015_731F();
}

/**
 * Decompiled function f__B50B_00FC_0015_731F()
 *
 * @name f__B50B_00FC_0015_731F
 * @implements B50B:00FC:0015:731F ()
 *
 * Called From: B50B:00FC:0013:E3AE
 */
void f__B50B_00FC_0015_731F()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38F4));
	if (emu_flags.zf) { f__B50B_0111_0013_E30E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x38F2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_ip = 0x0115; emu_last_cs = 0xB50B; emu_last_ip = 0x010F; emu_last_length = 0x0015; emu_last_crc = 0x731F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B50B_0111_0013_E30E()
 *
 * @name f__B50B_0111_0013_E30E
 * @implements B50B:0111:0013:E30E ()
 *
 * Called From: B50B:0106:0015:731F
 */
void f__B50B_0111_0013_E30E()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0124); f__B50B_05AA_0030_6F54();
	f__B50B_0124_0016_D950();
}

/**
 * Decompiled function f__B50B_0124_0016_D950()
 *
 * @name f__B50B_0124_0016_D950
 * @implements B50B:0124:0016:D950 ()
 *
 * Called From: B50B:0124:0013:E30E
 */
void f__B50B_0124_0016_D950()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38F6));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x013A); f__B50B_05AA_0030_6F54();
	f__B50B_013A_001A_0079();
}

/**
 * Decompiled function f__B50B_013A_001A_0079()
 *
 * @name f__B50B_013A_001A_0079
 * @implements B50B:013A:001A:0079 ()
 *
 * Called From: B50B:013A:0016:D950
 */
void f__B50B_013A_001A_0079()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2AF6));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x2AF4));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0154); f__B50B_0573_0037_C51D();
	f__B50B_0154_0016_D97C();
}

/**
 * Decompiled function f__B50B_0154_0016_D97C()
 *
 * @name f__B50B_0154_0016_D97C
 * @implements B50B:0154:0016:D97C ()
 *
 * Called From: B50B:0154:001A:0079
 */
void f__B50B_0154_0016_D97C()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38B0));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x016A); f__B50B_05AA_0030_6F54();
	f__B50B_016A_0016_D8B0();
}

/**
 * Decompiled function f__B50B_016A_0016_D8B0()
 *
 * @name f__B50B_016A_0016_D8B0
 * @implements B50B:016A:0016:D8B0 ()
 *
 * Called From: B50B:016A:0016:D97C
 */
void f__B50B_016A_0016_D8B0()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0180); f__B50B_05AA_0030_6F54();
	f__B50B_0180_001A_022A();
}

/**
 * Decompiled function f__B50B_0180_001A_022A()
 *
 * @name f__B50B_0180_001A_022A
 * @implements B50B:0180:001A:022A ()
 *
 * Called From: B50B:0180:0016:D8B0
 */
void f__B50B_0180_001A_022A()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x37F2));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x37F0));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x019A); f__B50B_0573_0037_C51D();
	f__B50B_019A_001A_053A();
}

/**
 * Decompiled function f__B50B_019A_001A_053A()
 *
 * @name f__B50B_019A_001A_053A
 * @implements B50B:019A:001A:053A ()
 *
 * Called From: B50B:019A:001A:022A
 */
void f__B50B_019A_001A_053A()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x37F6));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x37F4));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x01B4); f__B50B_0573_0037_C51D();
	f__B50B_01B4_0023_2579();
}

/**
 * Decompiled function f__B50B_01B4_0023_2579()
 *
 * @name f__B50B_01B4_0023_2579
 * @implements B50B:01B4:0023:2579 ()
 *
 * Called From: B50B:01B4:001A:053A
 */
void f__B50B_01B4_0023_2579()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38AC));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38AE));
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x01D7); f__B50B_0573_0037_C51D();
	f__B50B_01D7_0016_DA8E();
}

/**
 * Decompiled function f__B50B_01D7_0016_DA8E()
 *
 * @name f__B50B_01D7_0016_DA8E
 * @implements B50B:01D7:0016:DA8E ()
 *
 * Called From: B50B:01D7:0023:2579
 */
void f__B50B_01D7_0016_DA8E()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38B4));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x01ED); f__B50B_05AA_0030_6F54();
	f__B50B_01ED_001B_5541();
}

/**
 * Decompiled function f__B50B_01ED_001B_5541()
 *
 * @name f__B50B_01ED_001B_5541
 * @implements B50B:01ED:001B:5541 ()
 *
 * Called From: B50B:01ED:0016:DA8E
 */
void f__B50B_01ED_001B_5541()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x36);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x97E7);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0208); f__B50B_0608_002C_F30D();
	f__B50B_0208_0016_DAFE();
}

/**
 * Decompiled function f__B50B_0208_0016_DAFE()
 *
 * @name f__B50B_0208_0016_DAFE
 * @implements B50B:0208:0016:DAFE ()
 *
 * Called From: B50B:0208:001B:5541
 */
void f__B50B_0208_0016_DAFE()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38FE));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x021E); f__B50B_05AA_0030_6F54();
	f__B50B_021E_0015_770E();
}

/**
 * Decompiled function f__B50B_021E_0015_770E()
 *
 * @name f__B50B_021E_0015_770E
 * @implements B50B:021E:0015:770E ()
 *
 * Called From: B50B:021E:0016:DAFE
 */
void f__B50B_021E_0015_770E()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38FC));
	if (emu_flags.zf) { f__B50B_0233_0013_E088(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x38FA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_ip = 0x0237; emu_last_cs = 0xB50B; emu_last_ip = 0x0231; emu_last_length = 0x0015; emu_last_crc = 0x770E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B50B_0233_0013_E088()
 *
 * @name f__B50B_0233_0013_E088
 * @implements B50B:0233:0013:E088 ()
 *
 * Called From: B50B:0228:0015:770E
 */
void f__B50B_0233_0013_E088()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0246); f__B50B_05AA_0030_6F54();
	f__B50B_0246_0016_D99E();
}

/**
 * Decompiled function f__B50B_0246_0016_D99E()
 *
 * @name f__B50B_0246_0016_D99E
 * @implements B50B:0246:0016:D99E ()
 *
 * Called From: B50B:0246:0013:E088
 */
void f__B50B_0246_0016_D99E()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38EA));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x025C); f__B50B_05AA_0030_6F54();
	f__B50B_025C_0008_F2DC();
}

/**
 * Decompiled function f__B50B_025C_0008_F2DC()
 *
 * @name f__B50B_025C_0008_F2DC
 * @implements B50B:025C:0008:F2DC ()
 *
 * Called From: B50B:025C:0016:D99E
 */
void f__B50B_025C_0008_F2DC()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B50B_0264_0004_0F7A(); return;
}

/**
 * Decompiled function f__B50B_0264_0004_0F7A()
 *
 * @name f__B50B_0264_0004_0F7A
 * @implements B50B:0264:0004:0F7A ()
 *
 * Called From: B50B:0262:0008:F2DC
 */
void f__B50B_0264_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_0268_0012_BA68()
 *
 * @name f__B50B_0268_0012_BA68
 * @implements B50B:0268:0012:BA68 ()
 *
 * Called From: 350B:0025:0005:1BC0
 */
void f__B50B_0268_0012_BA68()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_xorw(&emu_di, emu_di);
	f__B50B_0312_0009_F15B(); return;
}

/**
 * Decompiled function f__B50B_027A_0018_128D()
 *
 * @name f__B50B_027A_0018_128D
 * @implements B50B:027A:0018:128D ()
 *
 * Called From: B50B:0318:0009:F15B
 * Called From: B50B:0318:000A:ED5A
 * Called From: B50B:0318:000D:BD46
 */
void f__B50B_027A_0018_128D()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x78);
	if (emu_flags.zf) { f__B50B_0292_0055_9356(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__B50B_0294_0053_9936(); return;
}

/**
 * Decompiled function f__B50B_0292_0055_9356()
 *
 * @name f__B50B_0292_0055_9356
 * @implements B50B:0292:0055:9356 ()
 *
 * Called From: B50B:028B:0018:128D
 */
void f__B50B_0292_0055_9356()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), 0x8000);
	if (!emu_flags.zf) { emu_ip = 0x02CC; emu_last_cs = 0xB50B; emu_last_ip = 0x02A7; emu_last_length = 0x0055; emu_last_crc = 0x9356; emu_call(); return; } // Jump does not resolve
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
	if (emu_flags.zf) { f__B50B_02D1_0016_C4B7(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0311; emu_last_cs = 0xB50B; emu_last_ip = 0x02D5; emu_last_length = 0x0055; emu_last_crc = 0x9356; emu_call(); return; } // Jump does not resolve
	emu_push(emu_di);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x02E7); emu_ip = 0x05AA; emu_last_cs = 0xB50B; emu_last_ip = 0x02E4; emu_last_length = 0x0055; emu_last_crc = 0x9356; emu_call(); // Jump does not resolve
	f__B50B_02E7_0027_CEFC();
}

/**
 * Decompiled function f__B50B_0294_0053_9936()
 *
 * @name f__B50B_0294_0053_9936
 * @implements B50B:0294:0053:9936 ()
 *
 * Called From: B50B:0290:0018:128D
 */
void f__B50B_0294_0053_9936()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), 0x8000);
	if (!emu_flags.zf) { emu_ip = 0x02CC; emu_last_cs = 0xB50B; emu_last_ip = 0x02A7; emu_last_length = 0x0053; emu_last_crc = 0x9936; emu_call(); return; } // Jump does not resolve
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
	if (emu_flags.zf) { f__B50B_02D1_0016_C4B7(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0311; emu_last_cs = 0xB50B; emu_last_ip = 0x02D5; emu_last_length = 0x0053; emu_last_crc = 0x9936; emu_call(); return; } // Jump does not resolve
	emu_push(emu_di);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x02E7); f__B50B_05AA_0030_6F54();
	f__B50B_02E7_0027_CEFC();
}

/**
 * Decompiled function f__B50B_02D1_0016_C4B7()
 *
 * @name f__B50B_02D1_0016_C4B7
 * @implements B50B:02D1:0016:C4B7 ()
 *
 * Called From: B50B:02CA:0055:9356
 * Called From: B50B:02CA:0053:9936
 */
void f__B50B_02D1_0016_C4B7()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) { f__B50B_0311_000A_ED5A(); return; }
	emu_push(emu_di);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x02E7); f__B50B_05AA_0030_6F54();
	f__B50B_02E7_0027_CEFC();
}

/**
 * Decompiled function f__B50B_02E7_0027_CEFC()
 *
 * @name f__B50B_02E7_0027_CEFC
 * @implements B50B:02E7:0027:CEFC ()
 *
 * Called From: B50B:02E7:0016:C4B7
 * Called From: B50B:02E7:0053:9936
 */
void f__B50B_02E7_0027_CEFC()
{
	emu_addws(&emu_sp, 0xA);
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
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x030E); f__B50B_0608_002C_F30D();
	f__B50B_030E_000D_BD46();
}

/**
 * Decompiled function f__B50B_030E_000D_BD46()
 *
 * @name f__B50B_030E_000D_BD46
 * @implements B50B:030E:000D:BD46 ()
 *
 * Called From: B50B:030E:0027:CEFC
 */
void f__B50B_030E_000D_BD46()
{
	emu_addws(&emu_sp, 0xE);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x1000);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x031B; emu_last_cs = 0xB50B; emu_last_ip = 0x0316; emu_last_length = 0x000D; emu_last_crc = 0xBD46; emu_call(); return; } // Jump does not resolve
	f__B50B_027A_0018_128D(); return;
}

/**
 * Decompiled function f__B50B_0311_000A_ED5A()
 *
 * @name f__B50B_0311_000A_ED5A
 * @implements B50B:0311:000A:ED5A ()
 *
 * Called From: B50B:02D5:0016:C4B7
 */
void f__B50B_0311_000A_ED5A()
{
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x1000);
	if (!(emu_flags.sf != emu_flags.of)) { f__B50B_031B_0005_115C(); return; }
	f__B50B_027A_0018_128D(); return;
}

/**
 * Decompiled function f__B50B_0312_0009_F15B()
 *
 * @name f__B50B_0312_0009_F15B
 * @implements B50B:0312:0009:F15B ()
 *
 * Called From: B50B:0277:0012:BA68
 */
void f__B50B_0312_0009_F15B()
{
	emu_cmpw(&emu_di, 0x1000);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x031B; emu_last_cs = 0xB50B; emu_last_ip = 0x0316; emu_last_length = 0x0009; emu_last_crc = 0xF15B; emu_call(); return; } // Jump does not resolve
	f__B50B_027A_0018_128D(); return;
}

/**
 * Decompiled function f__B50B_031B_0005_115C()
 *
 * @name f__B50B_031B_0005_115C
 * @implements B50B:031B:0005:115C ()
 *
 * Called From: B50B:0316:000A:ED5A
 */
void f__B50B_031B_0005_115C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B50B_0320_0006_137A(); return;
}

/**
 * Decompiled function f__B50B_0320_0006_137A()
 *
 * @name f__B50B_0320_0006_137A
 * @implements B50B:0320:0006:137A ()
 *
 * Called From: B50B:031E:0005:115C
 */
void f__B50B_0320_0006_137A()
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
 * Decompiled function f__B50B_0326_0016_8231()
 *
 * @name f__B50B_0326_0016_8231
 * @implements B50B:0326:0016:8231 ()
 *
 * Called From: 350B:002A:0005:1F28
 */
void f__B50B_0326_0016_8231()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x48);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x033C); emu_cs = 0x10BE; f__10BE_01E2_0027_C454();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_033C_0002_03D6();
}

/**
 * Decompiled function f__B50B_033C_0002_03D6()
 *
 * @name f__B50B_033C_0002_03D6
 * @implements B50B:033C:0002:03D6 ()
 *
 * Called From: B50B:033C:0016:8231
 */
void f__B50B_033C_0002_03D6()
{
	f__B50B_037B_0015_01C2(); return;
}

/**
 * Decompiled function f__B50B_033E_0014_0F8B()
 *
 * @name f__B50B_033E_0014_0F8B
 * @implements B50B:033E:0014:0F8B ()
 *
 * Called From: B50B:0389:0015:01C2
 */
void f__B50B_033E_0014_0F8B()
{
	emu_movw(&emu_ax.x, 0x42);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x48);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0352); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_0352_001B_6ED3();
}

/**
 * Decompiled function f__B50B_0352_001B_6ED3()
 *
 * @name f__B50B_0352_001B_6ED3
 * @implements B50B:0352:001B:6ED3 ()
 *
 * Called From: B50B:0352:0014:0F8B
 */
void f__B50B_0352_001B_6ED3()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x42);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x48);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x036D); f__B50B_0608_002C_F30D();
	f__B50B_036D_000E_A1C2();
}

/**
 * Decompiled function f__B50B_036D_000E_A1C2()
 *
 * @name f__B50B_036D_000E_A1C2
 * @implements B50B:036D:000E:A1C2 ()
 *
 * Called From: B50B:036D:001B:6ED3
 */
void f__B50B_036D_000E_A1C2()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x037B); emu_cs = 0x10BE; f__10BE_020F_004E_EE3E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_037B_0015_01C2();
}

/**
 * Decompiled function f__B50B_037B_0015_01C2()
 *
 * @name f__B50B_037B_0015_01C2
 * @implements B50B:037B:0015:01C2 ()
 *
 * Called From: B50B:033C:0002:03D6
 * Called From: B50B:037B:000E:A1C2
 */
void f__B50B_037B_0015_01C2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B50B_033E_0014_0F8B(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B50B_0390_0004_0F7A(); return;
}

/**
 * Decompiled function f__B50B_0390_0004_0F7A()
 *
 * @name f__B50B_0390_0004_0F7A
 * @implements B50B:0390:0004:0F7A ()
 *
 * Called From: B50B:038E:0015:01C2
 */
void f__B50B_0390_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_0394_001F_501F()
 *
 * @name f__B50B_0394_001F_501F
 * @implements B50B:0394:001F:501F ()
 *
 * Called From: 350B:002F:0005:1408
 */
void f__B50B_0394_001F_501F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x86);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x03B3); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_03B3_0005_1F56();
}

/**
 * Decompiled function f__B50B_03B3_0005_1F56()
 *
 * @name f__B50B_03B3_0005_1F56
 * @implements B50B:03B3:0005:1F56 ()
 *
 * Called From: B50B:03B3:001F:501F
 */
void f__B50B_03B3_0005_1F56()
{
	emu_addws(&emu_sp, 0x8);
	f__B50B_0405_0013_0AF2(); return;
}

/**
 * Decompiled function f__B50B_03B8_0015_3C55()
 *
 * @name f__B50B_03B8_0015_3C55
 * @implements B50B:03B8:0015:3C55 ()
 *
 * Called From: B50B:0411:0013:0AF2
 * Called From: B50B:0411:0015:0442
 */
void f__B50B_03B8_0015_3C55()
{
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x86);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03CD); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_03CD_000D_329F();
}

/**
 * Decompiled function f__B50B_03CD_000D_329F()
 *
 * @name f__B50B_03CD_000D_329F
 * @implements B50B:03CD:000D:329F ()
 *
 * Called From: B50B:03CD:0015:3C55
 */
void f__B50B_03CD_000D_329F()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x74);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03DA); f__B50B_0522_0036_49A6();
	f__B50B_03DA_001B_A0A0();
}

/**
 * Decompiled function f__B50B_03DA_001B_A0A0()
 *
 * @name f__B50B_03DA_001B_A0A0
 * @implements B50B:03DA:001B:A0A0 ()
 *
 * Called From: B50B:03DA:000D:329F
 */
void f__B50B_03DA_001B_A0A0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x86);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x03F5); f__B50B_0608_002C_F30D();
	f__B50B_03F5_000E_A854();
}

/**
 * Decompiled function f__B50B_03F5_000E_A854()
 *
 * @name f__B50B_03F5_000E_A854
 * @implements B50B:03F5:000E:A854 ()
 *
 * Called From: B50B:03F5:001B:A0A0
 */
void f__B50B_03F5_000E_A854()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0403); emu_cs = 0x0FE4; f__0FE4_0283_0038_0940();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_0403_0015_0442();
}

/**
 * Decompiled function f__B50B_0403_0015_0442()
 *
 * @name f__B50B_0403_0015_0442
 * @implements B50B:0403:0015:0442 ()
 *
 * Called From: B50B:0403:000E:A854
 */
void f__B50B_0403_0015_0442()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B50B_03B8_0015_3C55(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B50B_0418_0004_0F7A(); return;
}

/**
 * Decompiled function f__B50B_0405_0013_0AF2()
 *
 * @name f__B50B_0405_0013_0AF2
 * @implements B50B:0405:0013:0AF2 ()
 *
 * Called From: B50B:03B6:0005:1F56
 */
void f__B50B_0405_0013_0AF2()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B50B_03B8_0015_3C55(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_ip = 0x0418; emu_last_cs = 0xB50B; emu_last_ip = 0x0416; emu_last_length = 0x0013; emu_last_crc = 0x0AF2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B50B_0418_0004_0F7A()
 *
 * @name f__B50B_0418_0004_0F7A
 * @implements B50B:0418:0004:0F7A ()
 *
 * Called From: B50B:0416:0015:0442
 */
void f__B50B_0418_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_041C_001E_065C()
 *
 * @name f__B50B_041C_001E_065C
 * @implements B50B:041C:001E:065C ()
 *
 * Called From: 350B:0034:0005:1CB0
 */
void f__B50B_041C_001E_065C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x5E);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x043A); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_043A_0005_1F5A();
}

/**
 * Decompiled function f__B50B_043A_0005_1F5A()
 *
 * @name f__B50B_043A_0005_1F5A
 * @implements B50B:043A:0005:1F5A ()
 *
 * Called From: B50B:043A:001E:065C
 */
void f__B50B_043A_0005_1F5A()
{
	emu_addws(&emu_sp, 0x8);
	f__B50B_048A_0013_0A72(); return;
}

/**
 * Decompiled function f__B50B_043F_0014_025B()
 *
 * @name f__B50B_043F_0014_025B
 * @implements B50B:043F:0014:025B ()
 *
 * Called From: B50B:0496:0013:0A72
 */
void f__B50B_043F_0014_025B()
{
	emu_movw(&emu_ax.x, 0x58);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x5E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0453); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_0453_000D_2CB5();
}

/**
 * Decompiled function f__B50B_0453_000D_2CB5()
 *
 * @name f__B50B_0453_000D_2CB5
 * @implements B50B:0453:000D:2CB5 ()
 *
 * Called From: B50B:0453:0014:025B
 */
void f__B50B_0453_000D_2CB5()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4C);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0460); f__B50B_0522_0036_49A6();
	f__B50B_0460_001A_A9B3();
}

/**
 * Decompiled function f__B50B_0460_001A_A9B3()
 *
 * @name f__B50B_0460_001A_A9B3
 * @implements B50B:0460:001A:A9B3 ()
 *
 * Called From: B50B:0460:000D:2CB5
 */
void f__B50B_0460_001A_A9B3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x58);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x5E);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp + 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x047A); f__B50B_0608_002C_F30D();
	f__B50B_047A_000E_A20A();
}

/**
 * Decompiled function f__B50B_047A_000E_A20A()
 *
 * @name f__B50B_047A_000E_A20A
 * @implements B50B:047A:000E:A20A ()
 *
 * Called From: B50B:047A:001A:A9B3
 */
void f__B50B_047A_000E_A20A()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0488); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_0488_0015_04C2();
}

/**
 * Decompiled function f__B50B_0488_0015_04C2()
 *
 * @name f__B50B_0488_0015_04C2
 * @implements B50B:0488:0015:04C2 ()
 *
 * Called From: B50B:0488:000E:A20A
 */
void f__B50B_0488_0015_04C2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { emu_ip = 0x043F; emu_last_cs = 0xB50B; emu_last_ip = 0x0496; emu_last_length = 0x0015; emu_last_crc = 0x04C2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B50B_049D_0004_0F7A(); return;
}

/**
 * Decompiled function f__B50B_048A_0013_0A72()
 *
 * @name f__B50B_048A_0013_0A72
 * @implements B50B:048A:0013:0A72 ()
 *
 * Called From: B50B:043D:0005:1F5A
 */
void f__B50B_048A_0013_0A72()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B50B_043F_0014_025B(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_ip = 0x049D; emu_last_cs = 0xB50B; emu_last_ip = 0x049B; emu_last_length = 0x0013; emu_last_crc = 0x0A72; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B50B_049D_0004_0F7A()
 *
 * @name f__B50B_049D_0004_0F7A
 * @implements B50B:049D:0004:0F7A ()
 *
 * Called From: B50B:049B:0015:04C2
 */
void f__B50B_049D_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_04A1_001A_FCEF()
 *
 * @name f__B50B_04A1_001A_FCEF
 * @implements B50B:04A1:001A:FCEF ()
 *
 * Called From: 350B:0039:0005:1760
 */
void f__B50B_04A1_001A_FCEF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x5A);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x04BB); emu_cs = 0x104B; f__104B_00C2_0030_C2D2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_04BB_0005_1F2A();
}

/**
 * Decompiled function f__B50B_04BB_0005_1F2A()
 *
 * @name f__B50B_04BB_0005_1F2A
 * @implements B50B:04BB:0005:1F2A ()
 *
 * Called From: B50B:04BB:001A:FCEF
 */
void f__B50B_04BB_0005_1F2A()
{
	emu_addws(&emu_sp, 0x6);
	f__B50B_050B_0013_0A72(); return;
}

/**
 * Decompiled function f__B50B_050B_0013_0A72()
 *
 * @name f__B50B_050B_0013_0A72
 * @implements B50B:050B:0013:0A72 ()
 *
 * Called From: B50B:04BE:0005:1F2A
 */
void f__B50B_050B_0013_0A72()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { emu_ip = 0x04C0; emu_last_cs = 0xB50B; emu_last_ip = 0x0517; emu_last_length = 0x0013; emu_last_crc = 0x0A72; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B50B_051E_0004_0F7A(); return;
}

/**
 * Decompiled function f__B50B_051E_0004_0F7A()
 *
 * @name f__B50B_051E_0004_0F7A
 * @implements B50B:051E:0004:0F7A ()
 *
 * Called From: B50B:051C:0013:0A72
 */
void f__B50B_051E_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_0522_0036_49A6()
 *
 * @name f__B50B_0522_0036_49A6
 * @implements B50B:0522:0036:49A6 ()
 *
 * Called From: B50B:03D7:000D:329F
 * Called From: B50B:045D:000D:2CB5
 */
void f__B50B_0522_0036_49A6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	if (emu_flags.zf) { emu_ip = 0x0562; emu_last_cs = 0xB50B; emu_last_ip = 0x052F; emu_last_length = 0x0036; emu_last_crc = 0x49A6; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0558); emu_cs = 0x01F7; f__01F7_04E0_0004_06F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_0558_001B_50D1();
}

/**
 * Decompiled function f__B50B_0558_001B_50D1()
 *
 * @name f__B50B_0558_001B_50D1
 * @implements B50B:0558:001B:50D1 ()
 *
 * Called From: B50B:0558:0036:49A6
 */
void f__B50B_0558_001B_50D1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_0573_0037_C51D()
 *
 * @name f__B50B_0573_0037_C51D
 * @implements B50B:0573:0037:C51D ()
 *
 * Called From: B50B:0151:001A:0079
 * Called From: B50B:0197:001A:022A
 * Called From: B50B:01B1:001A:053A
 * Called From: B50B:01D4:0023:2579
 */
void f__B50B_0573_0037_C51D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x4);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_05AA_0030_6F54()
 *
 * @name f__B50B_05AA_0030_6F54
 * @implements B50B:05AA:0030:6F54 ()
 *
 * Called From: B50B:003C:0016:D9FA
 * Called From: B50B:0052:0016:D9D3
 * Called From: B50B:0068:0016:D980
 * Called From: B50B:00AB:0016:DB6C
 * Called From: B50B:00D1:0013:E24E
 * Called From: B50B:00F9:0013:E3AE
 * Called From: B50B:0121:0013:E30E
 * Called From: B50B:0137:0016:D950
 * Called From: B50B:0167:0016:D97C
 * Called From: B50B:017D:0016:D8B0
 * Called From: B50B:01EA:0016:DA8E
 * Called From: B50B:021B:0016:DAFE
 * Called From: B50B:0243:0013:E088
 * Called From: B50B:0259:0016:D99E
 * Called From: B50B:02E4:0016:C4B7
 * Called From: B50B:02E4:0053:9936
 */
void f__B50B_05AA_0030_6F54()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x2);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_05DA_002E_1F90()
 *
 * @name f__B50B_05DA_002E_1F90
 * @implements B50B:05DA:002E:1F90 ()
 *
 * Called From: B50B:007F:0017:9DDE
 * Called From: B50B:0095:0016:D9B2
 */
void f__B50B_05DA_002E_1F90()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_0608_002C_F30D()
 *
 * @name f__B50B_0608_002C_F30D
 * @implements B50B:0608:002C:F30D ()
 *
 * Called From: B50B:0026:0029:BAE2
 * Called From: B50B:0205:001B:5541
 * Called From: B50B:030B:0027:CEFC
 * Called From: B50B:036A:001B:6ED3
 * Called From: B50B:03F2:001B:A0A0
 * Called From: B50B:0477:001A:A9B3
 */
void f__B50B_0608_002C_F30D()
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
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x0634); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_0634_0014_BC67();
}

/**
 * Decompiled function f__B50B_0634_0014_BC67()
 *
 * @name f__B50B_0634_0014_BC67
 * @implements B50B:0634:0014:BC67 ()
 *
 * Called From: B50B:0634:002C:F30D
 */
void f__B50B_0634_0014_BC67()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_si);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
