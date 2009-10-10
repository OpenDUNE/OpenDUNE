/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B50B_0000_0029_BDBF()
 *
 * @name f__B50B_0000_0029_BDBF
 * @implements B50B:0000:0029:BDBF ()
 *
 * Called From: 350B:0020:0005:0000
 */
void f__B50B_0000_0029_BDBF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8CFD), 0x290);
	emu_movw(&emu_ax, 0xE6);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x8CFD);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0029); f__B50B_0608_002C_0256();
	f__B50B_0029_0016_86FA();
}

/**
 * Decompiled function f__B50B_0029_0016_86FA()
 *
 * @name f__B50B_0029_0016_86FA
 * @implements B50B:0029:0016:86FA ()
 *
 */
void f__B50B_0029_0016_86FA()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B4));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x003F); f__B50B_05AA_0030_871C();
	f__B50B_003F_0016_62F4();
}

/**
 * Decompiled function f__B50B_003F_0016_62F4()
 *
 * @name f__B50B_003F_0016_62F4
 * @implements B50B:003F:0016:62F4 ()
 *
 */
void f__B50B_003F_0016_62F4()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0055); f__B50B_05AA_0030_871C();
	f__B50B_0055_0016_9CED();
}

/**
 * Decompiled function f__B50B_0055_0016_9CED()
 *
 * @name f__B50B_0055_0016_9CED
 * @implements B50B:0055:0016:9CED ()
 *
 */
void f__B50B_0055_0016_9CED()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A00));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x006B); f__B50B_05AA_0030_871C();
	f__B50B_006B_0017_B5C0();
}

/**
 * Decompiled function f__B50B_006B_0017_B5C0()
 *
 * @name f__B50B_006B_0017_B5C0
 * @implements B50B:006B:0017:B5C0 ()
 *
 */
void f__B50B_006B_0017_B5C0()
{
	emu_addw(&emu_sp, 0xA);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x3A0E));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0082); f__B50B_05DA_002E_8785();
	f__B50B_0082_0016_ADF0();
}

/**
 * Decompiled function f__B50B_0082_0016_ADF0()
 *
 * @name f__B50B_0082_0016_ADF0
 * @implements B50B:0082:0016:ADF0 ()
 *
 */
void f__B50B_0082_0016_ADF0()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E2));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0098); f__B50B_05DA_002E_8785();
	f__B50B_0098_0016_245F();
}

/**
 * Decompiled function f__B50B_0098_0016_245F()
 *
 * @name f__B50B_0098_0016_245F
 * @implements B50B:0098:0016:245F ()
 *
 */
void f__B50B_0098_0016_245F()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38F0));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x00AE); f__B50B_05AA_0030_871C();
	f__B50B_00AE_0013_EDAA();
}

/**
 * Decompiled function f__B50B_00AE_0013_EDAA()
 *
 * @name f__B50B_00AE_0013_EDAA
 * @implements B50B:00AE:0013:EDAA ()
 *
 */
void f__B50B_00AE_0013_EDAA()
{
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38E2), 0xFFFF);
	if (emu_flags.zf) { f__B50B_00C1_0013_414D(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38E4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	/* Unresolved jump */ emu_ip = 0x00C5; emu_last_cs = 0xB50B; emu_last_ip = 0x00BF; emu_last_length = 0x0013; emu_last_crc = 0xEDAA; emu_call();
}

/**
 * Decompiled function f__B50B_00C1_0013_414D()
 *
 * @name f__B50B_00C1_0013_414D
 * @implements B50B:00C1:0013:414D ()
 *
 * Called From: B50B:00B6:0013:EDAA
 */
void f__B50B_00C1_0013_414D()
{
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x00D4); f__B50B_05AA_0030_871C();
	f__B50B_00D4_0015_3423();
}

/**
 * Decompiled function f__B50B_00D4_0015_3423()
 *
 * @name f__B50B_00D4_0015_3423
 * @implements B50B:00D4:0015:3423 ()
 *
 */
void f__B50B_00D4_0015_3423()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_flags.zf) { f__B50B_00E9_0013_4153(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	f__B50B_00ED_000F_E9BC(); return;
}

/**
 * Decompiled function f__B50B_00E9_0013_4153()
 *
 * @name f__B50B_00E9_0013_4153
 * @implements B50B:00E9:0013:4153 ()
 *
 * Called From: B50B:00DE:0015:3423
 */
void f__B50B_00E9_0013_4153()
{
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	f__B50B_00ED_000F_E9BC(); return;
}

/**
 * Decompiled function f__B50B_00ED_000F_E9BC()
 *
 * @name f__B50B_00ED_000F_E9BC
 * @implements B50B:00ED:000F:E9BC ()
 *
 * Called From: B50B:00E7:0015:3423
 */
void f__B50B_00ED_000F_E9BC()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x00FC); f__B50B_05AA_0030_871C();
	f__B50B_00FC_0015_81F6();
}

/**
 * Decompiled function f__B50B_00FC_0015_81F6()
 *
 * @name f__B50B_00FC_0015_81F6
 * @implements B50B:00FC:0015:81F6 ()
 *
 */
void f__B50B_00FC_0015_81F6()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38F2));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38F4));
	if (emu_flags.zf) { f__B50B_0111_0013_4159(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38F2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	f__B50B_0115_000F_E9B6(); return;
}

/**
 * Decompiled function f__B50B_0111_0013_4159()
 *
 * @name f__B50B_0111_0013_4159
 * @implements B50B:0111:0013:4159 ()
 *
 * Called From: B50B:0106:0015:81F6
 */
void f__B50B_0111_0013_4159()
{
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	f__B50B_0115_000F_E9B6(); return;
}

/**
 * Decompiled function f__B50B_0115_000F_E9B6()
 *
 * @name f__B50B_0115_000F_E9B6
 * @implements B50B:0115:000F:E9B6 ()
 *
 * Called From: B50B:010F:0015:81F6
 */
void f__B50B_0115_000F_E9B6()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0124); f__B50B_05AA_0030_871C();
	f__B50B_0124_0016_277C();
}

/**
 * Decompiled function f__B50B_0124_0016_277C()
 *
 * @name f__B50B_0124_0016_277C
 * @implements B50B:0124:0016:277C ()
 *
 */
void f__B50B_0124_0016_277C()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38F6));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x013A); f__B50B_05AA_0030_871C();
	f__B50B_013A_001A_18B9();
}

/**
 * Decompiled function f__B50B_013A_001A_18B9()
 *
 * @name f__B50B_013A_001A_18B9
 * @implements B50B:013A:001A:18B9 ()
 *
 */
void f__B50B_013A_001A_18B9()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2AF6));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2AF4));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0154); f__B50B_0573_0037_8058();
	f__B50B_0154_0016_6470();
}

/**
 * Decompiled function f__B50B_0154_0016_6470()
 *
 * @name f__B50B_0154_0016_6470
 * @implements B50B:0154:0016:6470 ()
 *
 */
void f__B50B_0154_0016_6470()
{
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B0));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x016A); f__B50B_05AA_0030_871C();
	f__B50B_016A_0016_856A();
}

/**
 * Decompiled function f__B50B_016A_0016_856A()
 *
 * @name f__B50B_016A_0016_856A
 * @implements B50B:016A:0016:856A ()
 *
 */
void f__B50B_016A_0016_856A()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B2));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0180); f__B50B_05AA_0030_871C();
	f__B50B_0180_001A_4934();
}

/**
 * Decompiled function f__B50B_0180_001A_4934()
 *
 * @name f__B50B_0180_001A_4934
 * @implements B50B:0180:001A:4934 ()
 *
 */
void f__B50B_0180_001A_4934()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x37F2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x37F0));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x019A); f__B50B_0573_0037_8058();
	f__B50B_019A_001A_CD0D();
}

/**
 * Decompiled function f__B50B_019A_001A_CD0D()
 *
 * @name f__B50B_019A_001A_CD0D
 * @implements B50B:019A:001A:CD0D ()
 *
 */
void f__B50B_019A_001A_CD0D()
{
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x37F6));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x37F4));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x01B4); f__B50B_0573_0037_8058();
	f__B50B_01B4_0023_77E2();
}

/**
 * Decompiled function f__B50B_01B4_0023_77E2()
 *
 * @name f__B50B_01B4_0023_77E2
 * @implements B50B:01B4:0023:77E2 ()
 *
 */
void f__B50B_01B4_0023_77E2()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	emu_subw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x38AC));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38AE));
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x01D7); f__B50B_0573_0037_8058();
	f__B50B_01D7_0016_25CF();
}

/**
 * Decompiled function f__B50B_01D7_0016_25CF()
 *
 * @name f__B50B_01D7_0016_25CF
 * @implements B50B:01D7:0016:25CF ()
 *
 */
void f__B50B_01D7_0016_25CF()
{
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B4));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x01ED); f__B50B_05AA_0030_871C();
	f__B50B_01ED_001B_FE86();
}

/**
 * Decompiled function f__B50B_01ED_001B_FE86()
 *
 * @name f__B50B_01ED_001B_FE86
 * @implements B50B:01ED:001B:FE86 ()
 *
 */
void f__B50B_01ED_001B_FE86()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, 0x36);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x97E7);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0208); f__B50B_0608_002C_0256();
	f__B50B_0208_0016_60C3();
}

/**
 * Decompiled function f__B50B_0208_0016_60C3()
 *
 * @name f__B50B_0208_0016_60C3
 * @implements B50B:0208:0016:60C3 ()
 *
 */
void f__B50B_0208_0016_60C3()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38FE));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x021E); f__B50B_05AA_0030_871C();
	f__B50B_021E_0015_C5E6();
}

/**
 * Decompiled function f__B50B_021E_0015_C5E6()
 *
 * @name f__B50B_021E_0015_C5E6
 * @implements B50B:021E:0015:C5E6 ()
 *
 */
void f__B50B_021E_0015_C5E6()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38FC));
	if (emu_flags.zf) { f__B50B_0233_0013_C2E1(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	/* Unresolved jump */ emu_ip = 0x0237; emu_last_cs = 0xB50B; emu_last_ip = 0x0231; emu_last_length = 0x0015; emu_last_crc = 0xC5E6; emu_call();
}

/**
 * Decompiled function f__B50B_0233_0013_C2E1()
 *
 * @name f__B50B_0233_0013_C2E1
 * @implements B50B:0233:0013:C2E1 ()
 *
 * Called From: B50B:0228:0015:C5E6
 */
void f__B50B_0233_0013_C2E1()
{
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0246); f__B50B_05AA_0030_871C();
	f__B50B_0246_0016_AAF3();
}

/**
 * Decompiled function f__B50B_0246_0016_AAF3()
 *
 * @name f__B50B_0246_0016_AAF3
 * @implements B50B:0246:0016:AAF3 ()
 *
 */
void f__B50B_0246_0016_AAF3()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38EA));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x025C); f__B50B_05AA_0030_871C();
	f__B50B_025C_0008_112E();
}

/**
 * Decompiled function f__B50B_025C_0008_112E()
 *
 * @name f__B50B_025C_0008_112E
 * @implements B50B:025C:0008:112E ()
 *
 */
void f__B50B_025C_0008_112E()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B50B_0264_0004_893F(); return;
}

/**
 * Decompiled function f__B50B_0264_0004_893F()
 *
 * @name f__B50B_0264_0004_893F
 * @implements B50B:0264:0004:893F ()
 *
 * Called From: B50B:0262:0008:112E
 */
void f__B50B_0264_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_0268_0012_E6D0()
 *
 * @name f__B50B_0268_0012_E6D0
 * @implements B50B:0268:0012:E6D0 ()
 *
 * Called From: 350B:0025:0005:0000
 */
void f__B50B_0268_0012_E6D0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_xorw(&emu_di, emu_di);
	f__B50B_0312_0009_AE1F(); return;
}

/**
 * Decompiled function f__B50B_027A_0018_B4ED()
 *
 * @name f__B50B_027A_0018_B4ED
 * @implements B50B:027A:0018:B4ED ()
 *
 * Called From: B50B:0318:0009:AE1F
 * Called From: B50B:0318:000A:BFDF
 * Called From: B50B:0318:000D:6B9A
 */
void f__B50B_027A_0018_B4ED()
{
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x78);
	if (emu_flags.zf) { f__B50B_0292_0055_5B5D(); return; }
	emu_movw(&emu_ax, 0x1);
	f__B50B_0294_0053_5AC9(); return;
}

/**
 * Decompiled function f__B50B_0292_0055_5B5D()
 *
 * @name f__B50B_0292_0055_5B5D
 * @implements B50B:0292:0055:5B5D ()
 *
 * Called From: B50B:028B:0018:B4ED
 */
void f__B50B_0292_0055_5B5D()
{
	emu_xorw(&emu_ax, emu_ax);
	f__B50B_0294_0053_5AC9(); return;
}

/**
 * Decompiled function f__B50B_0294_0053_5AC9()
 *
 * @name f__B50B_0294_0053_5AC9
 * @implements B50B:0294:0053:5AC9 ()
 *
 * Called From: B50B:0290:0018:B4ED
 */
void f__B50B_0294_0053_5AC9()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_bx, emu_di);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_es, emu_ax);
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x323F), 0x8000);
	if (!emu_flags.zf) { f__B50B_02CC_001B_88F6(); return; }
	emu_movw(&emu_bx, emu_di);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_dx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_si, emu_dx);
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_si, 0x0));
	emu_andw(&emu_dx, 0x1FF);
	emu_movw(&emu_es, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x323F), emu_dx);
	if (emu_flags.zf) { f__B50B_02D1_0016_7810(); return; }
	f__B50B_02CC_001B_88F6(); return;
}

/**
 * Decompiled function f__B50B_02CC_001B_88F6()
 *
 * @name f__B50B_02CC_001B_88F6
 * @implements B50B:02CC:001B:88F6 ()
 *
 * Called From: B50B:02A7:0053:5AC9
 * Called From: B50B:02A7:0055:5B5D
 */
void f__B50B_02CC_001B_88F6()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	f__B50B_02D1_0016_7810(); return;
}

/**
 * Decompiled function f__B50B_02D1_0016_7810()
 *
 * @name f__B50B_02D1_0016_7810
 * @implements B50B:02D1:0016:7810 ()
 *
 * Called From: B50B:02CA:0055:5B5D
 * Called From: B50B:02CA:0053:5AC9
 */
void f__B50B_02D1_0016_7810()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) { f__B50B_0311_000A_BFDF(); return; }
	emu_push(emu_di);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x02E7); f__B50B_05AA_0030_871C();
	f__B50B_02E7_0027_EA0A();
}

/**
 * Decompiled function f__B50B_02E7_0027_EA0A()
 *
 * @name f__B50B_02E7_0027_EA0A
 * @implements B50B:02E7:0027:EA0A ()
 *
 */
void f__B50B_02E7_0027_EA0A()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39EC));
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x030E); f__B50B_0608_002C_0256();
	f__B50B_030E_000D_6B9A();
}

/**
 * Decompiled function f__B50B_030E_000D_6B9A()
 *
 * @name f__B50B_030E_000D_6B9A
 * @implements B50B:030E:000D:6B9A ()
 *
 */
void f__B50B_030E_000D_6B9A()
{
	emu_addw(&emu_sp, 0xE);
	f__B50B_0311_000A_BFDF(); return;
}

/**
 * Decompiled function f__B50B_0311_000A_BFDF()
 *
 * @name f__B50B_0311_000A_BFDF
 * @implements B50B:0311:000A:BFDF ()
 *
 * Called From: B50B:02D5:0016:7810
 */
void f__B50B_0311_000A_BFDF()
{
	emu_incw(&emu_di);
	f__B50B_0312_0009_AE1F(); return;
}

/**
 * Decompiled function f__B50B_0312_0009_AE1F()
 *
 * @name f__B50B_0312_0009_AE1F
 * @implements B50B:0312:0009:AE1F ()
 *
 * Called From: B50B:0277:0012:E6D0
 */
void f__B50B_0312_0009_AE1F()
{
	emu_cmpw(&emu_di, 0x1000);
	if (!(emu_flags.sf != emu_flags.of)) { f__B50B_031B_0005_BBA6(); return; }
	f__B50B_027A_0018_B4ED(); return;
}

/**
 * Decompiled function f__B50B_031B_0005_BBA6()
 *
 * @name f__B50B_031B_0005_BBA6
 * @implements B50B:031B:0005:BBA6 ()
 *
 * Called From: B50B:0316:000A:BFDF
 * Called From: B50B:0316:000D:6B9A
 */
void f__B50B_031B_0005_BBA6()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B50B_0320_0006_F7CE(); return;
}

/**
 * Decompiled function f__B50B_0320_0006_F7CE()
 *
 * @name f__B50B_0320_0006_F7CE
 * @implements B50B:0320:0006:F7CE ()
 *
 * Called From: B50B:031E:0005:BBA6
 */
void f__B50B_0320_0006_F7CE()
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
 * Decompiled function f__B50B_0326_0016_CD5C()
 *
 * @name f__B50B_0326_0016_CD5C
 * @implements B50B:0326:0016:CD5C ()
 *
 * Called From: 350B:002A:0005:0000
 */
void f__B50B_0326_0016_CD5C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x48);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x033C); emu_cs = 0x10BE; emu_House_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_033C_0002_DEBA();
}

/**
 * Decompiled function f__B50B_033C_0002_DEBA()
 *
 * @name f__B50B_033C_0002_DEBA
 * @implements B50B:033C:0002:DEBA ()
 *
 */
void f__B50B_033C_0002_DEBA()
{
	f__B50B_037B_0015_674F(); return;
}

/**
 * Decompiled function f__B50B_033E_0014_33ED()
 *
 * @name f__B50B_033E_0014_33ED
 * @implements B50B:033E:0014:33ED ()
 *
 * Called From: B50B:0389:0015:674F
 */
void f__B50B_033E_0014_33ED()
{
	emu_movw(&emu_ax, 0x42);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x48);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0352); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_0352_001B_EC40();
}

/**
 * Decompiled function f__B50B_0352_001B_EC40()
 *
 * @name f__B50B_0352_001B_EC40
 * @implements B50B:0352:001B:EC40 ()
 *
 */
void f__B50B_0352_001B_EC40()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, 0x42);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x48);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x036D); f__B50B_0608_002C_0256();
	f__B50B_036D_000E_14EB();
}

/**
 * Decompiled function f__B50B_036D_000E_14EB()
 *
 * @name f__B50B_036D_000E_14EB
 * @implements B50B:036D:000E:14EB ()
 *
 */
void f__B50B_036D_000E_14EB()
{
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x037B); emu_cs = 0x10BE; emu_House_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_037B_0015_674F();
}

/**
 * Decompiled function f__B50B_037B_0015_674F()
 *
 * @name f__B50B_037B_0015_674F
 * @implements B50B:037B:0015:674F ()
 *
 * Called From: B50B:033C:0002:DEBA
 */
void f__B50B_037B_0015_674F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B50B_033E_0014_33ED(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B50B_0390_0004_893F(); return;
}

/**
 * Decompiled function f__B50B_0390_0004_893F()
 *
 * @name f__B50B_0390_0004_893F
 * @implements B50B:0390:0004:893F ()
 *
 * Called From: B50B:038E:0015:674F
 */
void f__B50B_0390_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_0394_001F_01AF()
 *
 * @name f__B50B_0394_001F_01AF
 * @implements B50B:0394:001F:01AF ()
 *
 * Called From: 350B:002F:0005:0000
 */
void f__B50B_0394_001F_01AF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x86);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x03B3); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_03B3_0005_A3AE();
}

/**
 * Decompiled function f__B50B_03B3_0005_A3AE()
 *
 * @name f__B50B_03B3_0005_A3AE
 * @implements B50B:03B3:0005:A3AE ()
 *
 */
void f__B50B_03B3_0005_A3AE()
{
	emu_addw(&emu_sp, 0x8);
	f__B50B_0405_0013_AD82(); return;
}

/**
 * Decompiled function f__B50B_03B8_0015_A7EC()
 *
 * @name f__B50B_03B8_0015_A7EC
 * @implements B50B:03B8:0015:A7EC ()
 *
 * Called From: B50B:0411:0013:AD82
 * Called From: B50B:0411:0015:3F4F
 */
void f__B50B_03B8_0015_A7EC()
{
	emu_movw(&emu_ax, 0x80);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x86);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03CD); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_03CD_000D_2F88();
}

/**
 * Decompiled function f__B50B_03CD_000D_2F88()
 *
 * @name f__B50B_03CD_000D_2F88
 * @implements B50B:03CD:000D:2F88 ()
 *
 */
void f__B50B_03CD_000D_2F88()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x74);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03DA); f__B50B_0522_0036_7E4C();
	f__B50B_03DA_001B_6333();
}

/**
 * Decompiled function f__B50B_03DA_001B_6333()
 *
 * @name f__B50B_03DA_001B_6333
 * @implements B50B:03DA:001B:6333 ()
 *
 */
void f__B50B_03DA_001B_6333()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x80);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x86);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03F5); f__B50B_0608_002C_0256();
	f__B50B_03F5_000E_5B75();
}

/**
 * Decompiled function f__B50B_03F5_000E_5B75()
 *
 * @name f__B50B_03F5_000E_5B75
 * @implements B50B:03F5:000E:5B75 ()
 *
 */
void f__B50B_03F5_000E_5B75()
{
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0403); emu_cs = 0x0FE4; emu_Unit_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_0403_0015_3F4F();
}

/**
 * Decompiled function f__B50B_0403_0015_3F4F()
 *
 * @name f__B50B_0403_0015_3F4F
 * @implements B50B:0403:0015:3F4F ()
 *
 */
void f__B50B_0403_0015_3F4F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B50B_0405_0013_AD82(); return;
}

/**
 * Decompiled function f__B50B_0405_0013_AD82()
 *
 * @name f__B50B_0405_0013_AD82
 * @implements B50B:0405:0013:AD82 ()
 *
 * Called From: B50B:03B6:0005:A3AE
 */
void f__B50B_0405_0013_AD82()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B50B_03B8_0015_A7EC(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B50B_0418_0004_893F(); return;
}

/**
 * Decompiled function f__B50B_0418_0004_893F()
 *
 * @name f__B50B_0418_0004_893F
 * @implements B50B:0418:0004:893F ()
 *
 * Called From: B50B:0416:0015:3F4F
 */
void f__B50B_0418_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_041C_001E_0374()
 *
 * @name f__B50B_041C_001E_0374
 * @implements B50B:041C:001E:0374 ()
 *
 * Called From: 350B:0034:0005:0000
 */
void f__B50B_041C_001E_0374()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x5E);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x043A); emu_cs = 0x1082; emu_Building_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_043A_0005_A0AE();
}

/**
 * Decompiled function f__B50B_043A_0005_A0AE()
 *
 * @name f__B50B_043A_0005_A0AE
 * @implements B50B:043A:0005:A0AE ()
 *
 */
void f__B50B_043A_0005_A0AE()
{
	emu_addw(&emu_sp, 0x8);
	f__B50B_048A_0013_A582(); return;
}

/**
 * Decompiled function f__B50B_043F_0014_3099()
 *
 * @name f__B50B_043F_0014_3099
 * @implements B50B:043F:0014:3099 ()
 *
 * Called From: B50B:0496:0013:A582
 * Called From: B50B:0496:0015:374F
 */
void f__B50B_043F_0014_3099()
{
	emu_movw(&emu_ax, 0x58);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5E);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0453); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_0453_000D_AF5A();
}

/**
 * Decompiled function f__B50B_0453_000D_AF5A()
 *
 * @name f__B50B_0453_000D_AF5A
 * @implements B50B:0453:000D:AF5A ()
 *
 */
void f__B50B_0453_000D_AF5A()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4C);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0460); f__B50B_0522_0036_7E4C();
	f__B50B_0460_001A_6788();
}

/**
 * Decompiled function f__B50B_0460_001A_6788()
 *
 * @name f__B50B_0460_001A_6788
 * @implements B50B:0460:001A:6788 ()
 *
 */
void f__B50B_0460_001A_6788()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x58);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5E);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x047A); f__B50B_0608_002C_0256();
	f__B50B_047A_000E_3487();
}

/**
 * Decompiled function f__B50B_047A_000E_3487()
 *
 * @name f__B50B_047A_000E_3487
 * @implements B50B:047A:000E:3487 ()
 *
 */
void f__B50B_047A_000E_3487()
{
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0488); emu_cs = 0x1082; emu_Building_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_0488_0015_374F();
}

/**
 * Decompiled function f__B50B_0488_0015_374F()
 *
 * @name f__B50B_0488_0015_374F
 * @implements B50B:0488:0015:374F ()
 *
 */
void f__B50B_0488_0015_374F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B50B_048A_0013_A582(); return;
}

/**
 * Decompiled function f__B50B_048A_0013_A582()
 *
 * @name f__B50B_048A_0013_A582
 * @implements B50B:048A:0013:A582 ()
 *
 * Called From: B50B:043D:0005:A0AE
 */
void f__B50B_048A_0013_A582()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B50B_043F_0014_3099(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B50B_049D_0004_893F(); return;
}

/**
 * Decompiled function f__B50B_049D_0004_893F()
 *
 * @name f__B50B_049D_0004_893F
 * @implements B50B:049D:0004:893F ()
 *
 * Called From: B50B:049B:0015:374F
 */
void f__B50B_049D_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_04A1_001A_1AA9()
 *
 * @name f__B50B_04A1_001A_1AA9
 * @implements B50B:04A1:001A:1AA9 ()
 *
 * Called From: 350B:0039:0005:0000
 */
void f__B50B_04A1_001A_1AA9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x5A);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x04BB); emu_cs = 0x104B; emu_AirUnit_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_04BB_0005_A16E();
}

/**
 * Decompiled function f__B50B_04BB_0005_A16E()
 *
 * @name f__B50B_04BB_0005_A16E
 * @implements B50B:04BB:0005:A16E ()
 *
 */
void f__B50B_04BB_0005_A16E()
{
	emu_addw(&emu_sp, 0x6);
	f__B50B_050B_0013_A582(); return;
}

/**
 * Decompiled function f__B50B_04C0_0014_31F1()
 *
 * @name f__B50B_04C0_0014_31F1
 * @implements B50B:04C0:0014:31F1 ()
 *
 * Called From: B50B:0517:0013:A582
 * Called From: B50B:0517:0015:374F
 */
void f__B50B_04C0_0014_31F1()
{
	emu_movw(&emu_ax, 0x53);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04D4); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_04D4_000D_6F9A();
}

/**
 * Decompiled function f__B50B_04D4_000D_6F9A()
 *
 * @name f__B50B_04D4_000D_6F9A
 * @implements B50B:04D4:000D:6F9A ()
 *
 */
void f__B50B_04D4_000D_6F9A()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x3C);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x04E1); f__B50B_0522_0036_7E4C();
	f__B50B_04E1_001A_A5BE();
}

/**
 * Decompiled function f__B50B_04E1_001A_A5BE()
 *
 * @name f__B50B_04E1_001A_A5BE
 * @implements B50B:04E1:001A:A5BE ()
 *
 */
void f__B50B_04E1_001A_A5BE()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x53);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x5A);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp + 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x04FB); f__B50B_0608_002C_0256();
	f__B50B_04FB_000E_2499();
}

/**
 * Decompiled function f__B50B_04FB_000E_2499()
 *
 * @name f__B50B_04FB_000E_2499
 * @implements B50B:04FB:000E:2499 ()
 *
 */
void f__B50B_04FB_000E_2499()
{
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0509); emu_cs = 0x104B; emu_AirUnit_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_0509_0015_374F();
}

/**
 * Decompiled function f__B50B_0509_0015_374F()
 *
 * @name f__B50B_0509_0015_374F
 * @implements B50B:0509:0015:374F ()
 *
 */
void f__B50B_0509_0015_374F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B50B_050B_0013_A582(); return;
}

/**
 * Decompiled function f__B50B_050B_0013_A582()
 *
 * @name f__B50B_050B_0013_A582
 * @implements B50B:050B:0013:A582 ()
 *
 * Called From: B50B:04BE:0005:A16E
 */
void f__B50B_050B_0013_A582()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B50B_04C0_0014_31F1(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B50B_051E_0004_893F(); return;
}

/**
 * Decompiled function f__B50B_051E_0004_893F()
 *
 * @name f__B50B_051E_0004_893F
 * @implements B50B:051E:0004:893F ()
 *
 * Called From: B50B:051C:0013:A582
 * Called From: B50B:051C:0015:374F
 */
void f__B50B_051E_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_0522_0036_7E4C()
 *
 * @name f__B50B_0522_0036_7E4C
 * @implements B50B:0522:0036:7E4C ()
 *
 * Called From: B50B:03D7:000D:2F88
 * Called From: B50B:045D:000D:AF5A
 * Called From: B50B:04DE:000D:6F9A
 */
void f__B50B_0522_0036_7E4C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	if (emu_flags.zf) { f__B50B_0562_0011_8C88(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x2);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_subw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0558); emu_cs = 0x01F7; f__01F7_04E0_0004_E219();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_0558_001B_D133();
}

/**
 * Decompiled function f__B50B_0558_001B_D133()
 *
 * @name f__B50B_0558_001B_D133
 * @implements B50B:0558:001B:D133 ()
 *
 */
void f__B50B_0558_001B_D133()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	f__B50B_0562_0011_8C88(); return;
}

/**
 * Decompiled function f__B50B_0562_0011_8C88()
 *
 * @name f__B50B_0562_0011_8C88
 * @implements B50B:0562:0011:8C88 ()
 *
 * Called From: B50B:052F:0036:7E4C
 */
void f__B50B_0562_0011_8C88()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_0573_0037_8058()
 *
 * @name f__B50B_0573_0037_8058
 * @implements B50B:0573:0037:8058 ()
 *
 * Called From: B50B:0151:001A:18B9
 * Called From: B50B:0197:001A:4934
 * Called From: B50B:01B1:001A:CD0D
 * Called From: B50B:01D4:0023:77E2
 */
void f__B50B_0573_0037_8058()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x4);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_05AA_0030_871C()
 *
 * @name f__B50B_05AA_0030_871C
 * @implements B50B:05AA:0030:871C ()
 *
 * Called From: B50B:003C:0016:86FA
 * Called From: B50B:0052:0016:62F4
 * Called From: B50B:0068:0016:9CED
 * Called From: B50B:00AB:0016:245F
 * Called From: B50B:00D1:0013:414D
 * Called From: B50B:00F9:000F:E9BC
 * Called From: B50B:00F9:0013:4153
 * Called From: B50B:0121:0013:4159
 * Called From: B50B:0121:000F:E9B6
 * Called From: B50B:0137:0016:277C
 * Called From: B50B:0167:0016:6470
 * Called From: B50B:017D:0016:856A
 * Called From: B50B:01EA:0016:25CF
 * Called From: B50B:021B:0016:60C3
 * Called From: B50B:0243:0013:C2E1
 * Called From: B50B:0259:0016:AAF3
 * Called From: B50B:02E4:0016:7810
 * Called From: B50B:02E4:001B:88F6
 * Called From: B50B:02E4:0053:5AC9
 */
void f__B50B_05AA_0030_871C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x2);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_05DA_002E_8785()
 *
 * @name f__B50B_05DA_002E_8785
 * @implements B50B:05DA:002E:8785 ()
 *
 * Called From: B50B:007F:0017:B5C0
 * Called From: B50B:0095:0016:ADF0
 */
void f__B50B_05DA_002E_8785()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_incw(&emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_incw(&emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B50B_0608_002C_0256()
 *
 * @name f__B50B_0608_002C_0256
 * @implements B50B:0608:002C:0256 ()
 *
 * Called From: B50B:0026:0029:BDBF
 * Called From: B50B:0205:001B:FE86
 * Called From: B50B:030B:0027:EA0A
 * Called From: B50B:036A:001B:EC40
 * Called From: B50B:03F2:001B:6333
 * Called From: B50B:0477:001A:6788
 * Called From: B50B:04F8:001A:A5BE
 */
void f__B50B_0608_002C_0256()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0634); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x350B) { ovl__350B(0xFF); }
	f__B50B_0634_0014_DF6D();
}

/**
 * Decompiled function f__B50B_0634_0014_DF6D()
 *
 * @name f__B50B_0634_0014_DF6D
 * @implements B50B:0634:0014:DF6D ()
 *
 */
void f__B50B_0634_0014_DF6D()
{
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_si);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
