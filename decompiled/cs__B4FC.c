/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4FC_0000_0018_2772()
 *
 * @name f__B4FC_0000_0018_2772
 * @implements B4FC:0000:0018:2772 ()
 *
 * Called From: 34FC:0020:0005:1CEC
 * Called From: 34FC:0020:0005:1DC0
 */
void f__B4FC_0000_0018_2772()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x10);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2AD2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0018); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0018_0028_BDF7();
}

/**
 * Decompiled function f__B4FC_0018_0028_BDF7()
 *
 * @name f__B4FC_0018_0028_BDF7
 * @implements B4FC:0018:0028:BDF7 ()
 *
 * Called From: B4FC:0018:0018:2772
 */
void f__B4FC_0018_0028_BDF7()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0040); f__B4FC_03C8_002C_033A();
	f__B4FC_0040_000D_ECB3();
}

/**
 * Decompiled function f__B4FC_0040_000D_ECB3()
 *
 * @name f__B4FC_0040_000D_ECB3
 * @implements B4FC:0040:000D:ECB3 ()
 *
 * Called From: B4FC:0040:0028:BDF7
 */
void f__B4FC_0040_000D_ECB3()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x004D); emu_cs = 0x01F7; f__01F7_2252_0045_E30C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_004D_0004_04F4();
}

/**
 * Decompiled function f__B4FC_004D_0004_04F4()
 *
 * @name f__B4FC_004D_0004_04F4
 * @implements B4FC:004D:0004:04F4 ()
 *
 * Called From: B4FC:004D:000D:ECB3
 */
void f__B4FC_004D_0004_04F4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__B4FC_0051_0004_0F7A(); return;
}

/**
 * Decompiled function f__B4FC_0051_0004_0F7A()
 *
 * @name f__B4FC_0051_0004_0F7A
 * @implements B4FC:0051:0004:0F7A ()
 *
 * Called From: B4FC:004F:0004:04F4
 */
void f__B4FC_0051_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4FC_03C8_002C_033A()
 *
 * @name f__B4FC_03C8_002C_033A
 * @implements B4FC:03C8:002C:033A ()
 *
 * Called From: 34FC:0025:0005:1074
 * Called From: 34FC:0025:0005:1158
 * Called From: 34FC:0025:0005:1068
 * Called From: 34FC:0025:0005:13EE
 * Called From: B4FC:003D:0028:BDF7
 */
void f__B4FC_03C8_002C_033A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x46);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_flags.zf) { emu_ip = 0x0405; emu_last_cs = 0xB4FC; emu_last_ip = 0x03D6; emu_last_length = 0x002C; emu_last_crc = 0x033A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.zf) { f__B4FC_03F7_001D_A8BF(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs); emu_push(0x03F4); emu_cs = 0x01F7; f__01F7_39C4_0031_C789();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_03F4_0020_285C();
}

/**
 * Decompiled function f__B4FC_03F4_0020_285C()
 *
 * @name f__B4FC_03F4_0020_285C
 * @implements B4FC:03F4:0020:285C ()
 *
 * Called From: B4FC:03F4:002C:033A
 */
void f__B4FC_03F4_0020_285C()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x, -0x1), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x18));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x1A));
	if (!emu_flags.zf) { f__B4FC_0416_000B_C828(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x07DC; emu_last_cs = 0xB4FC; emu_last_ip = 0x0411; emu_last_length = 0x0020; emu_last_crc = 0x285C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4FC_03F7_001D_A8BF()
 *
 * @name f__B4FC_03F7_001D_A8BF
 * @implements B4FC:03F7:001D:A8BF ()
 *
 * Called From: B4FC:03DE:002C:033A
 */
void f__B4FC_03F7_001D_A8BF()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_movw(&emu_es, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x, -0x1), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x18));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x1A));
	if (!emu_flags.zf) { f__B4FC_0416_000B_C828(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x07DC; emu_last_cs = 0xB4FC; emu_last_ip = 0x0411; emu_last_length = 0x001D; emu_last_crc = 0xA8BF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4FC_040D_0007_230E()
 *
 * @name f__B4FC_040D_0007_230E
 * @implements B4FC:040D:0007:230E ()
 *
 * Called From: B4FC:0493:0014:E968
 * Called From: B4FC:05AB:001C:0752
 * Called From: B4FC:05AB:0003:07C8
 */
void f__B4FC_040D_0007_230E()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4FC_07DC_0006_137A(); return;
}

/**
 * Decompiled function f__B4FC_0411_0003_046E()
 *
 * @name f__B4FC_0411_0003_046E
 * @implements B4FC:0411:0003:046E ()
 *
 * Called From: B4FC:07D9:0009:1825
 */
void f__B4FC_0411_0003_046E()
{
	f__B4FC_07DC_0006_137A(); return;
}

/**
 * Decompiled function f__B4FC_0416_000B_C828()
 *
 * @name f__B4FC_0416_000B_C828
 * @implements B4FC:0416:000B:C828 ()
 *
 * Called From: B4FC:040B:0020:285C
 * Called From: B4FC:040B:001D:A8BF
 */
void f__B4FC_0416_000B_C828()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x18));
	emu_push(emu_cs); emu_push(0x0421); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0421_001D_9716();
}

/**
 * Decompiled function f__B4FC_0421_001D_9716()
 *
 * @name f__B4FC_0421_001D_9716
 * @implements B4FC:0421:001D:9716 ()
 *
 * Called From: B4FC:0421:000B:C828
 */
void f__B4FC_0421_001D_9716()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x1A), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x18), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2AEE);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x46);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x043E); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_043E_000D_1133();
}

/**
 * Decompiled function f__B4FC_043E_000D_1133()
 *
 * @name f__B4FC_043E_000D_1133
 * @implements B4FC:043E:000D:1133 ()
 *
 * Called From: B4FC:043E:001D:9716
 */
void f__B4FC_043E_000D_1133()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x46);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x044B); emu_cs = 0x01F7; f__01F7_3CD5_000D_BC7F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_044B_000C_0E00();
}

/**
 * Decompiled function f__B4FC_044B_000C_0E00()
 *
 * @name f__B4FC_044B_000C_0E00
 * @implements B4FC:044B:000C:0E00 ()
 *
 * Called From: B4FC:044B:000D:1133
 */
void f__B4FC_044B_000C_0E00()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x46);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0457); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0457_002B_EA6D();
}

/**
 * Decompiled function f__B4FC_0457_002B_EA6D()
 *
 * @name f__B4FC_0457_002B_EA6D
 * @implements B4FC:0457:002B:EA6D ()
 *
 * Called From: B4FC:0457:000C:0E00
 */
void f__B4FC_0457_002B_EA6D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x1A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x1A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, 0x5B);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0482); emu_cs = 0x01F7; f__01F7_3889_0033_9299();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0482_0014_E968();
}

/**
 * Decompiled function f__B4FC_0473_000F_FE86()
 *
 * @name f__B4FC_0473_000F_FE86
 * @implements B4FC:0473:000F:FE86 ()
 *
 * Called From: B4FC:07D0:0006:3CF0
 */
void f__B4FC_0473_000F_FE86()
{
	emu_movw(&emu_ax.x, 0x5B);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0482); emu_cs = 0x01F7; f__01F7_3889_0033_9299();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0482_0014_E968();
}

/**
 * Decompiled function f__B4FC_0482_0014_E968()
 *
 * @name f__B4FC_0482_0014_E968
 * @implements B4FC:0482:0014:E968 ()
 *
 * Called From: B4FC:0482:002B:EA6D
 * Called From: B4FC:0482:000F:FE86
 */
void f__B4FC_0482_0014_E968()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B4FC_0496_001B_BFCC(); return; }
	f__B4FC_040D_0007_230E(); return;
}

/**
 * Decompiled function f__B4FC_0496_001B_BFCC()
 *
 * @name f__B4FC_0496_001B_BFCC
 * @implements B4FC:0496:001B:BFCC ()
 *
 * Called From: B4FC:0491:0014:E968
 */
void f__B4FC_0496_001B_BFCC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x, -0x1));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x11), emu_ax.l);
	emu_push(emu_si);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x46);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x04B1); emu_cs = 0x01F7; f__01F7_28DC_0009_5738();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_04B1_000A_B235();
}

/**
 * Decompiled function f__B4FC_04B1_000A_B235()
 *
 * @name f__B4FC_04B1_000A_B235
 * @implements B4FC:04B1:000A:B235 ()
 *
 * Called From: B4FC:04B1:001B:BFCC
 */
void f__B4FC_04B1_000A_B235()
{
	emu_addws(&emu_sp, 0xA);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4FC_04BB_000F_4772(); return; }
	f__B4FC_07CD_0006_3CF0(); return;
}

/**
 * Decompiled function f__B4FC_04BB_000F_4772()
 *
 * @name f__B4FC_04BB_000F_4772
 * @implements B4FC:04BB:000F:4772 ()
 *
 * Called From: B4FC:04B6:000A:B235
 */
void f__B4FC_04BB_000F_4772()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x11), 0xA);
	if (emu_flags.zf) { f__B4FC_04CA_0005_030A(); return; }
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x11), 0xD);
	if (emu_flags.zf) { emu_ip = 0x04CA; emu_last_cs = 0xB4FC; emu_last_ip = 0x04C5; emu_last_length = 0x000F; emu_last_crc = 0x4772; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x07CD; emu_last_cs = 0xB4FC; emu_last_ip = 0x04C7; emu_last_length = 0x000F; emu_last_crc = 0x4772; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4FC_04CA_0005_030A()
 *
 * @name f__B4FC_04CA_0005_030A
 * @implements B4FC:04CA:0005:030A ()
 *
 * Called From: B4FC:04BF:000F:4772
 */
void f__B4FC_04CA_0005_030A()
{
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	f__B4FC_04D2_0022_EC70(); return;
}

/**
 * Decompiled function f__B4FC_04CF_0025_F010()
 *
 * @name f__B4FC_04CF_0025_F010
 * @implements B4FC:04CF:0025:F010 ()
 *
 * Called From: B4FC:04E3:0022:EC70
 * Called From: B4FC:04E3:0025:F010
 */
void f__B4FC_04CF_0025_F010()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x76BD));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_testw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { f__B4FC_04CF_0025_F010(); return; }
	emu_movw(&emu_ax.x, 0x5B);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x04F4); emu_cs = 0x01F7; f__01F7_3889_0033_9299();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_04F4_0029_ACD7();
}

/**
 * Decompiled function f__B4FC_04D2_0022_EC70()
 *
 * @name f__B4FC_04D2_0022_EC70
 * @implements B4FC:04D2:0022:EC70 ()
 *
 * Called From: B4FC:04CD:0005:030A
 */
void f__B4FC_04D2_0022_EC70()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x76BD));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_testw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { f__B4FC_04CF_0025_F010(); return; }
	emu_movw(&emu_ax.x, 0x5B);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x04F4); emu_cs = 0x01F7; emu_ip = 0x3D7D; emu_last_cs = 0xB4FC; emu_last_ip = 0x04EF; emu_last_length = 0x0022; emu_last_crc = 0xEC70; emu_call(); // Jump does not resolve
	f__B4FC_04F4_0029_ACD7();
}

/**
 * Decompiled function f__B4FC_04F4_0029_ACD7()
 *
 * @name f__B4FC_04F4_0029_ACD7
 * @implements B4FC:04F4:0029:ACD7 ()
 *
 * Called From: B4FC:04F4:0025:F010
 */
void f__B4FC_04F4_0029_ACD7()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) { f__B4FC_0539_000B_3C01(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x, -0x1));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x11), emu_ax.l);
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x11), 0xA);
	if (emu_flags.zf) { f__B4FC_051B_0002_03D4(); return; }
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x11), 0xD);
	if (!emu_flags.zf) { emu_ip = 0x051D; emu_last_cs = 0xB4FC; emu_last_ip = 0x0519; emu_last_length = 0x0029; emu_last_crc = 0xACD7; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0559; emu_last_cs = 0xB4FC; emu_last_ip = 0x051B; emu_last_length = 0x0029; emu_last_crc = 0xACD7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4FC_051B_0002_03D4()
 *
 * @name f__B4FC_051B_0002_03D4
 * @implements B4FC:051B:0002:03D4 ()
 *
 * Called From: B4FC:0513:0029:ACD7
 */
void f__B4FC_051B_0002_03D4()
{
	f__B4FC_0559_000B_770F(); return;
}

/**
 * Decompiled function f__B4FC_0539_000B_3C01()
 *
 * @name f__B4FC_0539_000B_3C01
 * @implements B4FC:0539:000B:3C01 ()
 *
 * Called From: B4FC:0503:0029:ACD7
 */
void f__B4FC_0539_000B_3C01()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0544); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0544_0013_A2DE();
}

/**
 * Decompiled function f__B4FC_0544_0013_A2DE()
 *
 * @name f__B4FC_0544_0013_A2DE
 * @implements B4FC:0544:0013:A2DE ()
 *
 * Called From: B4FC:0544:000B:3C01
 */
void f__B4FC_0544_0013_A2DE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_decw(&emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_bx.x);
	f__B4FC_0559_000B_770F(); return;
}

/**
 * Decompiled function f__B4FC_0559_000B_770F()
 *
 * @name f__B4FC_0559_000B_770F
 * @implements B4FC:0559:000B:770F ()
 *
 * Called From: B4FC:051B:0002:03D4
 * Called From: B4FC:0555:0013:A2DE
 */
void f__B4FC_0559_000B_770F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__B4FC_0564_0017_66B8(); return; }
	f__B4FC_06D8_0017_C08D(); return;
}

/**
 * Decompiled function f__B4FC_0564_0017_66B8()
 *
 * @name f__B4FC_0564_0017_66B8
 * @implements B4FC:0564:0017:66B8 ()
 *
 * Called From: B4FC:055F:000B:770F
 */
void f__B4FC_0564_0017_66B8()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x057B); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_057B_0017_DDD1();
}

/**
 * Decompiled function f__B4FC_057B_0017_DDD1()
 *
 * @name f__B4FC_057B_0017_DDD1
 * @implements B4FC:057B:0017:DDD1 ()
 *
 * Called From: B4FC:057B:0017:66B8
 */
void f__B4FC_057B_0017_DDD1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0592); emu_cs = 0x01F7; f__01F7_3889_0033_9299();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0592_001C_0752();
}

/**
 * Decompiled function f__B4FC_057F_0013_F9F1()
 *
 * @name f__B4FC_057F_0013_F9F1
 * @implements B4FC:057F:0013:F9F1 ()
 *
 * Called From: B4FC:06D2:0006:3CDC
 */
void f__B4FC_057F_0013_F9F1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0592); emu_cs = 0x01F7; f__01F7_3889_0033_9299();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0592_001C_0752();
}

/**
 * Decompiled function f__B4FC_0592_001C_0752()
 *
 * @name f__B4FC_0592_001C_0752
 * @implements B4FC:0592:001C:0752 ()
 *
 * Called From: B4FC:0592:0017:DDD1
 * Called From: B4FC:0592:0013:F9F1
 */
void f__B4FC_0592_001C_0752()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__B4FC_05AB_0003_07C8(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_flags.cf) { f__B4FC_05AE_0027_7573(); return; }
	f__B4FC_040D_0007_230E(); return;
}

/**
 * Decompiled function f__B4FC_05AB_0003_07C8()
 *
 * @name f__B4FC_05AB_0003_07C8
 * @implements B4FC:05AB:0003:07C8 ()
 *
 * Called From: B4FC:05A1:001C:0752
 */
void f__B4FC_05AB_0003_07C8()
{
	f__B4FC_040D_0007_230E(); return;
}

/**
 * Decompiled function f__B4FC_05AE_0027_7573()
 *
 * @name f__B4FC_05AE_0027_7573
 * @implements B4FC:05AE:0027:7573 ()
 *
 * Called From: B4FC:05A9:001C:0752
 */
void f__B4FC_05AE_0027_7573()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x, -0x1));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x11), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_di);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x12), emu_ax.l);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x05D5); emu_cs = 0x01F7; f__01F7_28DC_0009_5738();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_05D5_000A_B1BB();
}

/**
 * Decompiled function f__B4FC_05D5_000A_B1BB()
 *
 * @name f__B4FC_05D5_000A_B1BB
 * @implements B4FC:05D5:000A:B1BB ()
 *
 * Called From: B4FC:05D5:0027:7573
 */
void f__B4FC_05D5_000A_B1BB()
{
	emu_addws(&emu_sp, 0xA);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4FC_05DF_000F_44FC(); return; }
	f__B4FC_06CF_0006_3CDC(); return;
}

/**
 * Decompiled function f__B4FC_05DF_000F_44FC()
 *
 * @name f__B4FC_05DF_000F_44FC
 * @implements B4FC:05DF:000F:44FC ()
 *
 * Called From: B4FC:05DA:000A:B1BB
 */
void f__B4FC_05DF_000F_44FC()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x11), 0xA);
	if (emu_flags.zf) { f__B4FC_05EE_0016_8B01(); return; }
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x11), 0xD);
	if (emu_flags.zf) { emu_ip = 0x05EE; emu_last_cs = 0xB4FC; emu_last_ip = 0x05E9; emu_last_length = 0x000F; emu_last_crc = 0x44FC; emu_call(); return; } // Jump does not resolve
	f__B4FC_06CF_0006_3CDC(); return;
}

/**
 * Decompiled function f__B4FC_05EE_0016_8B01()
 *
 * @name f__B4FC_05EE_0016_8B01
 * @implements B4FC:05EE:0016:8B01 ()
 *
 * Called From: B4FC:05E3:000F:44FC
 */
void f__B4FC_05EE_0016_8B01()
{
	emu_cmpb(&emu_get_memory8(emu_ss, emu_bp, -0x12), 0x3D);
	if (emu_flags.zf) { f__B4FC_0604_001E_E2DA(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x12));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_ds, emu_bx.x,  0x76BD), 0x1);
	if (!emu_flags.zf) { f__B4FC_0604_001E_E2DA(); return; }
	f__B4FC_06CF_0006_3CDC(); return;
}

/**
 * Decompiled function f__B4FC_0604_001E_E2DA()
 *
 * @name f__B4FC_0604_001E_E2DA
 * @implements B4FC:0604:001E:E2DA ()
 *
 * Called From: B4FC:05F2:0016:8B01
 * Called From: B4FC:05FF:0016:8B01
 */
void f__B4FC_0604_001E_E2DA()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_di);
	emu_movw(&emu_ax.x, 0x3D);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0622); emu_cs = 0x01F7; f__01F7_3889_0033_9299();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0622_0018_8FF7();
}

/**
 * Decompiled function f__B4FC_0622_0018_8FF7()
 *
 * @name f__B4FC_0622_0018_8FF7
 * @implements B4FC:0622:0018:8FF7 ()
 *
 * Called From: B4FC:0622:001E:E2DA
 */
void f__B4FC_0622_0018_8FF7()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, 0xD);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x063A); emu_cs = 0x01F7; f__01F7_3889_0033_9299();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_063A_0014_931E();
}

/**
 * Decompiled function f__B4FC_063A_0014_931E()
 *
 * @name f__B4FC_063A_0014_931E
 * @implements B4FC:063A:0014:931E ()
 *
 * Called From: B4FC:063A:0018:8FF7
 */
void f__B4FC_063A_0014_931E()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.cf) { f__B4FC_064E_0012_7D1F(); return; }
	emu_ip = 0x07D3; emu_last_cs = 0xB4FC; emu_last_ip = 0x064B; emu_last_length = 0x0014; emu_last_crc = 0x931E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4FC_064E_0012_7D1F()
 *
 * @name f__B4FC_064E_0012_7D1F
 * @implements B4FC:064E:0012:7D1F ()
 *
 * Called From: B4FC:0649:0014:931E
 */
void f__B4FC_064E_0012_7D1F()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0xD);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0660); emu_cs = 0x01F7; f__01F7_3889_0033_9299();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0660_000B_89B7();
}

/**
 * Decompiled function f__B4FC_0660_000B_89B7()
 *
 * @name f__B4FC_0660_000B_89B7
 * @implements B4FC:0660:000B:89B7 ()
 *
 * Called From: B4FC:0660:0012:7D1F
 */
void f__B4FC_0660_000B_89B7()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	f__B4FC_0679_003A_0DC5(); return;
}

/**
 * Decompiled function f__B4FC_066B_000B_964A()
 *
 * @name f__B4FC_066B_000B_964A
 * @implements B4FC:066B:000B:964A ()
 *
 * Called From: B4FC:068A:003A:0DC5
 * Called From: B4FC:068A:003D:6DD9
 */
void f__B4FC_066B_000B_964A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.cf) { f__B4FC_0676_003D_6DD9(); return; }
	emu_ip = 0x07D3; emu_last_cs = 0xB4FC; emu_last_ip = 0x0673; emu_last_length = 0x000B; emu_last_crc = 0x964A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4FC_0676_003D_6DD9()
 *
 * @name f__B4FC_0676_003D_6DD9
 * @implements B4FC:0676:003D:6DD9 ()
 *
 * Called From: B4FC:0671:000B:964A
 */
void f__B4FC_0676_003D_6DD9()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x76BD));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_testw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { f__B4FC_066B_000B_964A(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_sbbws(&emu_dx.x, 0x0);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_flags.zf) { emu_ip = 0x06CC; emu_last_cs = 0xB4FC; emu_last_ip = 0x069F; emu_last_length = 0x003D; emu_last_crc = 0x6DD9; emu_call(); return; } // Jump does not resolve
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs); emu_push(0x06B3); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_06B3_0017_C286();
}

/**
 * Decompiled function f__B4FC_0679_003A_0DC5()
 *
 * @name f__B4FC_0679_003A_0DC5
 * @implements B4FC:0679:003A:0DC5 ()
 *
 * Called From: B4FC:0669:000B:89B7
 */
void f__B4FC_0679_003A_0DC5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x76BD));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_testw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { f__B4FC_066B_000B_964A(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_sbbws(&emu_dx.x, 0x0);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_flags.zf) { emu_ip = 0x06CC; emu_last_cs = 0xB4FC; emu_last_ip = 0x069F; emu_last_length = 0x003A; emu_last_crc = 0x0DC5; emu_call(); return; } // Jump does not resolve
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs); emu_push(0x06B3); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_06B3_0017_C286();
}

/**
 * Decompiled function f__B4FC_06B3_0017_C286()
 *
 * @name f__B4FC_06B3_0017_C286
 * @implements B4FC:06B3:0017:C286 ()
 *
 * Called From: B4FC:06B3:003A:0DC5
 * Called From: B4FC:06B3:003D:6DD9
 */
void f__B4FC_06B3_0017_C286()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_addw(&emu_bx.x, emu_si);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs);
	emu_push(0x06CA); f__B4FC_07E2_0012_0D10();
	f__B4FC_06CA_0005_09EA();
}

/**
 * Decompiled function f__B4FC_06CA_0005_09EA()
 *
 * @name f__B4FC_06CA_0005_09EA
 * @implements B4FC:06CA:0005:09EA ()
 *
 * Called From: B4FC:06CA:0017:C286
 */
void f__B4FC_06CA_0005_09EA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__B4FC_07D3_0009_1825(); return;
}

/**
 * Decompiled function f__B4FC_06CF_0006_3CDC()
 *
 * @name f__B4FC_06CF_0006_3CDC
 * @implements B4FC:06CF:0006:3CDC ()
 *
 * Called From: B4FC:05DC:000A:B1BB
 * Called From: B4FC:05EB:000F:44FC
 * Called From: B4FC:0601:0016:8B01
 */
void f__B4FC_06CF_0006_3CDC()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4FC_057F_0013_F9F1(); return;
}

/**
 * Decompiled function f__B4FC_06D8_0017_C08D()
 *
 * @name f__B4FC_06D8_0017_C08D
 * @implements B4FC:06D8:0017:C08D ()
 *
 * Called From: B4FC:0561:000B:770F
 */
void f__B4FC_06D8_0017_C08D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (!emu_flags.zf) { f__B4FC_06EF_0003_0588(); return; }
	emu_ip = 0x07C9; emu_last_cs = 0xB4FC; emu_last_ip = 0x06EC; emu_last_length = 0x0017; emu_last_crc = 0xC08D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4FC_06EF_0003_0588()
 *
 * @name f__B4FC_06EF_0003_0588
 * @implements B4FC:06EF:0003:0588 ()
 *
 * Called From: B4FC:06EA:0017:C08D
 */
void f__B4FC_06EF_0003_0588()
{
	f__B4FC_07A2_0013_20B7(); return;
}

/**
 * Decompiled function f__B4FC_06F2_000F_7E9F()
 *
 * @name f__B4FC_06F2_000F_7E9F
 * @implements B4FC:06F2:000F:7E9F ()
 *
 * Called From: B4FC:07B2:0013:20B7
 */
void f__B4FC_06F2_000F_7E9F()
{
	emu_movw(&emu_ax.x, 0x3D);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0701); emu_cs = 0x01F7; f__01F7_3889_0033_9299();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0701_0014_A264();
}

/**
 * Decompiled function f__B4FC_0701_0014_A264()
 *
 * @name f__B4FC_0701_0014_A264
 * @implements B4FC:0701:0014:A264 ()
 *
 * Called From: B4FC:0701:000F:7E9F
 */
void f__B4FC_0701_0014_A264()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B4FC_0715_000B_9F3C(); return; }
	f__B4FC_07A0_0002_038A(); return;
}

/**
 * Decompiled function f__B4FC_0715_000B_9F3C()
 *
 * @name f__B4FC_0715_000B_9F3C
 * @implements B4FC:0715:000B:9F3C ()
 *
 * Called From: B4FC:0710:0014:A264
 */
void f__B4FC_0715_000B_9F3C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_flags.cf) { f__B4FC_0720_0022_0E11(); return; }
	f__B4FC_07A0_0002_038A(); return;
}

/**
 * Decompiled function f__B4FC_0720_0022_0E11()
 *
 * @name f__B4FC_0720_0022_0E11
 * @implements B4FC:0720:0022:0E11 ()
 *
 * Called From: B4FC:071B:000B:9F3C
 */
void f__B4FC_0720_0022_0E11()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_sbbws(&emu_dx.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs); emu_push(0x0742); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0742_0018_4108();
}

/**
 * Decompiled function f__B4FC_0742_0018_4108()
 *
 * @name f__B4FC_0742_0018_4108
 * @implements B4FC:0742:0018:4108 ()
 *
 * Called From: B4FC:0742:0022:0E11
 */
void f__B4FC_0742_0018_4108()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs);
	emu_push(0x075A); f__B4FC_07E2_0012_0D10();
	f__B4FC_075A_000D_638E();
}

/**
 * Decompiled function f__B4FC_075A_000D_638E()
 *
 * @name f__B4FC_075A_000D_638E
 * @implements B4FC:075A:000D:638E ()
 *
 * Called From: B4FC:075A:0018:4108
 */
void f__B4FC_075A_000D_638E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_cs); emu_push(0x0767); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_0767_0015_7BB9();
}

/**
 * Decompiled function f__B4FC_0767_0015_7BB9()
 *
 * @name f__B4FC_0767_0015_7BB9
 * @implements B4FC:0767:0015:7BB9 ()
 *
 * Called From: B4FC:0767:000D:638E
 */
void f__B4FC_0767_0015_7BB9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x12), emu_ax.x);
	emu_movw(&emu_ax.x, 0xD);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x077C); emu_cs = 0x01F7; f__01F7_3889_0033_9299();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_077C_0013_74E9();
}

/**
 * Decompiled function f__B4FC_077C_0013_74E9()
 *
 * @name f__B4FC_077C_0013_74E9
 * @implements B4FC:077C:0013:74E9 ()
 *
 * Called From: B4FC:077C:0015:7BB9
 */
void f__B4FC_077C_0013_74E9()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B4FC_078F_0011_6078(); return; }
	emu_ip = 0x07B5; emu_last_cs = 0xB4FC; emu_last_ip = 0x078D; emu_last_length = 0x0013; emu_last_crc = 0x74E9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4FC_078F_0011_6078()
 *
 * @name f__B4FC_078F_0011_6078
 * @implements B4FC:078F:0011:6078 ()
 *
 * Called From: B4FC:078B:0013:74E9
 */
void f__B4FC_078F_0011_6078()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xA);
	if (!emu_flags.zf) { emu_ip = 0x079E; emu_last_cs = 0xB4FC; emu_last_ip = 0x0799; emu_last_length = 0x0011; emu_last_crc = 0x6078; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4FC_07A2_0013_20B7(); return;
}

/**
 * Decompiled function f__B4FC_07A0_0002_038A()
 *
 * @name f__B4FC_07A0_0002_038A
 * @implements B4FC:07A0:0002:038A ()
 *
 * Called From: B4FC:0712:0014:A264
 * Called From: B4FC:071D:000B:9F3C
 */
void f__B4FC_07A0_0002_038A()
{
	f__B4FC_07B5_0016_1088(); return;
}

/**
 * Decompiled function f__B4FC_07A2_0013_20B7()
 *
 * @name f__B4FC_07A2_0013_20B7
 * @implements B4FC:07A2:0013:20B7 ()
 *
 * Called From: B4FC:06EF:0003:0588
 * Called From: B4FC:079E:0011:6078
 */
void f__B4FC_07A2_0013_20B7()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x07B5; emu_last_cs = 0xB4FC; emu_last_ip = 0x07A8; emu_last_length = 0x0013; emu_last_crc = 0x20B7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!emu_flags.cf) { emu_ip = 0x07B5; emu_last_cs = 0xB4FC; emu_last_ip = 0x07B0; emu_last_length = 0x0013; emu_last_crc = 0x20B7; emu_call(); return; } // Jump does not resolve
	f__B4FC_06F2_000F_7E9F(); return;
}

/**
 * Decompiled function f__B4FC_07B5_0016_1088()
 *
 * @name f__B4FC_07B5_0016_1088
 * @implements B4FC:07B5:0016:1088 ()
 *
 * Called From: B4FC:07A0:0002:038A
 */
void f__B4FC_07B5_0016_1088()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x12));
	f__B4FC_07D3_0009_1825(); return;
}

/**
 * Decompiled function f__B4FC_07CD_0006_3CF0()
 *
 * @name f__B4FC_07CD_0006_3CF0
 * @implements B4FC:07CD:0006:3CF0 ()
 *
 * Called From: B4FC:04B8:000A:B235
 */
void f__B4FC_07CD_0006_3CF0()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4FC_0473_000F_FE86(); return;
}

/**
 * Decompiled function f__B4FC_07D3_0009_1825()
 *
 * @name f__B4FC_07D3_0009_1825
 * @implements B4FC:07D3:0009:1825 ()
 *
 * Called From: B4FC:06CC:0005:09EA
 * Called From: B4FC:07C9:0016:1088
 */
void f__B4FC_07D3_0009_1825()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	f__B4FC_0411_0003_046E(); return;
}

/**
 * Decompiled function f__B4FC_07DC_0006_137A()
 *
 * @name f__B4FC_07DC_0006_137A
 * @implements B4FC:07DC:0006:137A ()
 *
 * Called From: B4FC:0411:0003:046E
 * Called From: B4FC:0411:0007:230E
 */
void f__B4FC_07DC_0006_137A()
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
 * Decompiled function f__B4FC_07E2_0012_0D10()
 *
 * @name f__B4FC_07E2_0012_0D10
 * @implements B4FC:07E2:0012:0D10 ()
 *
 * Called From: B4FC:06C7:0017:C286
 * Called From: B4FC:0757:0018:4108
 */
void f__B4FC_07E2_0012_0D10()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4FC_07F4_000B_EBA8(); return; }
	emu_ip = 0x087B; emu_last_cs = 0xB4FC; emu_last_ip = 0x07F1; emu_last_length = 0x0012; emu_last_crc = 0x0D10; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4FC_07F4_000B_EBA8()
 *
 * @name f__B4FC_07F4_000B_EBA8
 * @implements B4FC:07F4:000B:EBA8 ()
 *
 * Called From: B4FC:07EF:0012:0D10
 */
void f__B4FC_07F4_000B_EBA8()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x07FF); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_07FF_000A_60F1();
}

/**
 * Decompiled function f__B4FC_07FF_000A_60F1()
 *
 * @name f__B4FC_07FF_000A_60F1
 * @implements B4FC:07FF:000A:60F1 ()
 *
 * Called From: B4FC:07FF:000B:EBA8
 */
void f__B4FC_07FF_000A_60F1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax.x);
	f__B4FC_081F_001E_FFA3(); return;
}

/**
 * Decompiled function f__B4FC_081F_001E_FFA3()
 *
 * @name f__B4FC_081F_001E_FFA3
 * @implements B4FC:081F:001E:FFA3 ()
 *
 * Called From: B4FC:0807:000A:60F1
 */
void f__B4FC_081F_001E_FFA3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x76BD));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_testw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0809; emu_last_cs = 0xB4FC; emu_last_ip = 0x0830; emu_last_length = 0x001E; emu_last_crc = 0xFFA3; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x083D); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34FC) { ovl__34FC(0xFF); }
	f__B4FC_083D_002C_F645();
}

/**
 * Decompiled function f__B4FC_083D_002C_F645()
 *
 * @name f__B4FC_083D_002C_F645
 * @implements B4FC:083D:002C:F645 ()
 *
 * Called From: B4FC:083D:001E:FFA3
 */
void f__B4FC_083D_002C_F645()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x087B; emu_last_cs = 0xB4FC; emu_last_ip = 0x0843; emu_last_length = 0x002C; emu_last_crc = 0xF645; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_dx.x, emu_si);
	emu_decw(&emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x76BD));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_testw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { f__B4FC_0869_0017_E1C3(); return; }
	f__B4FC_087B_0005_04BA(); return;
}

/**
 * Decompiled function f__B4FC_0854_0015_9378()
 *
 * @name f__B4FC_0854_0015_9378
 * @implements B4FC:0854:0015:9378 ()
 *
 * Called From: B4FC:0879:0017:E1C3
 */
void f__B4FC_0854_0015_9378()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x76BD));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_testw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0869; emu_last_cs = 0xB4FC; emu_last_ip = 0x0865; emu_last_length = 0x0015; emu_last_crc = 0x9378; emu_call(); return; } // Jump does not resolve
	f__B4FC_087B_0005_04BA(); return;
}

/**
 * Decompiled function f__B4FC_0869_0017_E1C3()
 *
 * @name f__B4FC_0869_0017_E1C3
 * @implements B4FC:0869:0017:E1C3 ()
 *
 * Called From: B4FC:0865:002C:F645
 */
void f__B4FC_0869_0017_E1C3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!(emu_flags.cf || emu_flags.zf)) { f__B4FC_0854_0015_9378(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4FC_087B_0005_04BA()
 *
 * @name f__B4FC_087B_0005_04BA
 * @implements B4FC:087B:0005:04BA ()
 *
 * Called From: B4FC:0867:002C:F645
 * Called From: B4FC:0867:0015:9378
 */
void f__B4FC_087B_0005_04BA()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
