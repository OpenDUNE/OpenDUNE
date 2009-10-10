/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__29E8_0534_000E_6213()
 *
 * @name f__29E8_0534_000E_6213
 * @implements 29E8:0534:000E:6213 ()
 *
 * Called From: 29E8:0840:0003:233C
 * Called From: 29E8:08B1:0004:D32F
 */
void f__29E8_0534_000E_6213()
{
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_di);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0542; emu_last_cs = 0x29E8; emu_last_ip = 0x053D; emu_last_length = 0x000E; emu_last_crc = 0x6213; emu_call(); return; }
	f__29E8_0632_0005_F80B(); return;
}

/**
 * Decompiled function f__29E8_0632_0005_F80B()
 *
 * @name f__29E8_0632_0005_F80B
 * @implements 29E8:0632:0005:F80B ()
 *
 * Called From: 29E8:053F:000E:6213
 */
void f__29E8_0632_0005_F80B()
{
	emu_pop(&emu_di);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__29E8_072F_000F_651A()
 *
 * @name f__29E8_072F_000F_651A
 * @implements 29E8:072F:000F:651A ()
 *
 * Called From: B4A2:003F:000B:EC51
 * Called From: B4E6:028C:0091:FAEA
 */
void f__29E8_072F_000F_651A()
{
	emu_pushf();
	emu_cli();
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x1AF));
	emu_xorw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x1B1));
	emu_popf();
	emu_push(0x073E); emu_Input_Unknown_04FC();
	f__29E8_073E_0001_6580();
}

/**
 * Decompiled function f__29E8_073E_0001_6580()
 *
 * @name f__29E8_073E_0001_6580
 * @implements 29E8:073E:0001:6580 ()
 *
 */
void f__29E8_073E_0001_6580()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_074D_0066_6E9B()
 *
 * @name f__29E8_074D_0066_6E9B
 * @implements 29E8:074D:0066:6E9B ()
 *
 * Called From: 29E8:081A:0003:628C
 * Called From: 29E8:08AD:0003:2227
 */
void f__29E8_074D_0066_6E9B()
{
	emu_push(emu_ds);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_ds, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, emu_di, 0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (!emu_flags.zf) { f__29E8_0765_004E_D57F(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7013));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7013), emu_ax);
	emu_addw(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_cmpb(&emu_al, 0x41);
	if (emu_flags.cf) { f__29E8_07EB_000F_32F6(); return; }
	emu_cmpb(&emu_al, 0x42);
	if (!(emu_flags.cf || emu_flags.zf)) { f__29E8_07B3_0047_79F3(); return; }
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, emu_di, 0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (!emu_flags.zf) { f__29E8_0787_002C_CB98(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7017));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7017), emu_ax);
	emu_addw(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7064), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, emu_di, 0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (!emu_flags.zf) { f__29E8_07A3_0010_602B(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7019));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7019), emu_ax);
	emu_addw(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7066), emu_ax);
	emu_pop(&emu_ax);
	f__29E8_07EB_000F_32F6(); return;
}

/**
 * Decompiled function f__29E8_0765_004E_D57F()
 *
 * @name f__29E8_0765_004E_D57F
 * @implements 29E8:0765:004E:D57F ()
 *
 * Called From: 29E8:0760:0066:6E9B
 */
void f__29E8_0765_004E_D57F()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7013), emu_ax);
	emu_addw(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_cmpb(&emu_al, 0x41);
	if (emu_flags.cf) { f__29E8_07EB_000F_32F6(); return; }
	emu_cmpb(&emu_al, 0x42);
	if (!(emu_flags.cf || emu_flags.zf)) { f__29E8_07B3_0047_79F3(); return; }
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, emu_di, 0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (!emu_flags.zf) { f__29E8_0787_002C_CB98(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7017));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7017), emu_ax);
	emu_addw(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7064), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, emu_di, 0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (!emu_flags.zf) { f__29E8_07A3_0010_602B(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7019));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7019), emu_ax);
	emu_addw(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7066), emu_ax);
	emu_pop(&emu_ax);
	f__29E8_07EB_000F_32F6(); return;
}

/**
 * Decompiled function f__29E8_0787_002C_CB98()
 *
 * @name f__29E8_0787_002C_CB98
 * @implements 29E8:0787:002C:CB98 ()
 *
 * Called From: 29E8:0782:004E:D57F
 */
void f__29E8_0787_002C_CB98()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7017), emu_ax);
	emu_addw(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7064), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, emu_di, 0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (!emu_flags.zf) { f__29E8_07A3_0010_602B(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7019));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7019), emu_ax);
	emu_addw(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7066), emu_ax);
	emu_pop(&emu_ax);
	f__29E8_07EB_000F_32F6(); return;
}

/**
 * Decompiled function f__29E8_07A3_0010_602B()
 *
 * @name f__29E8_07A3_0010_602B
 * @implements 29E8:07A3:0010:602B ()
 *
 * Called From: 29E8:079E:002C:CB98
 */
void f__29E8_07A3_0010_602B()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7019), emu_ax);
	emu_addw(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7066), emu_ax);
	emu_pop(&emu_ax);
	f__29E8_07EB_000F_32F6(); return;
}

/**
 * Decompiled function f__29E8_07B3_0047_79F3()
 *
 * @name f__29E8_07B3_0047_79F3
 * @implements 29E8:07B3:0047:79F3 ()
 *
 * Called From: 29E8:0775:004E:D57F
 */
void f__29E8_07B3_0047_79F3()
{
	emu_cmpb(&emu_al, 0x44);
	if (!(emu_flags.cf || emu_flags.zf)) { f__29E8_07EB_000F_32F6(); return; }
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, emu_di, 0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07C7; emu_last_cs = 0x29E8; emu_last_ip = 0x07C2; emu_last_length = 0x0047; emu_last_crc = 0x79F3; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7017));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7017), emu_ax);
	emu_addw(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, emu_di, 0xAF));
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07E0; emu_last_cs = 0x29E8; emu_last_ip = 0x07DB; emu_last_length = 0x0047; emu_last_crc = 0x79F3; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7019));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7019), emu_ax);
	emu_addw(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_pop(&emu_ax);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07F7; emu_last_cs = 0x29E8; emu_last_ip = 0x07F0; emu_last_length = 0x0047; emu_last_crc = 0x79F3; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0x1AF), emu_di);
	emu_pop(&emu_di);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__29E8_07EB_000F_32F6()
 *
 * @name f__29E8_07EB_000F_32F6
 * @implements 29E8:07EB:000F:32F6 ()
 *
 * Called From: 29E8:0771:004E:D57F
 * Called From: 29E8:07B1:0010:602B
 * Called From: 29E8:07B5:0047:79F3
 */
void f__29E8_07EB_000F_32F6()
{
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07F7; emu_last_cs = 0x29E8; emu_last_ip = 0x07F0; emu_last_length = 0x000F; emu_last_crc = 0x32F6; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0x1AF), emu_di);
	emu_pop(&emu_di);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__29E8_07FA_0020_177A()
 *
 * @name f__29E8_07FA_0020_177A
 * @implements 29E8:07FA:0020:177A ()
 *
 * Called From: 10E4:049B:0005:B085
 * Called From: B503:08A3:0005:B085
 * Called From: B503:13CE:0009:9868
 * Called From: B53B:01D1:0005:B085
 */
void f__29E8_07FA_0020_177A()
{
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_cld();
	emu_movw(&emu_ax, emu_cs);
	emu_movw(&emu_es, emu_ax);
	f__29E8_0804_0016_2028(); return;
}

/**
 * Decompiled function f__29E8_0804_0016_2028()
 *
 * @name f__29E8_0804_0016_2028
 * @implements 29E8:0804:0016:2028 ()
 *
 * Called From: 29E8:0818:0020:177A
 * Called From: 29E8:0818:0016:2028
 * Called From: 29E8:0837:0023:1368
 * Called From: 29E8:083B:0023:1368
 */
void f__29E8_0804_0016_2028()
{
	emu_cli();
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (emu_flags.zf) { f__29E8_081A_0003_628C(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x1AF));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x1B1));
	if (!emu_flags.zf) { f__29E8_081A_0003_628C(); return; }
	emu_sti();
	f__29E8_0804_0016_2028(); return;
}

/**
 * Decompiled function f__29E8_081A_0003_628C()
 *
 * @name f__29E8_081A_0003_628C
 * @implements 29E8:081A:0003:628C ()
 *
 * Called From: 29E8:080A:0016:2028
 * Called From: 29E8:0815:0016:2028
 * Called From: 29E8:0815:0020:177A
 */
void f__29E8_081A_0003_628C()
{
	emu_push(0x081D); f__29E8_074D_0066_6E9B();
	f__29E8_081D_0023_1368();
}

/**
 * Decompiled function f__29E8_081D_0023_1368()
 *
 * @name f__29E8_081D_0023_1368
 * @implements 29E8:081D:0023:1368 ()
 *
 */
void f__29E8_081D_0023_1368()
{
	emu_movw(&emu_cx, emu_get_memory16(emu_cs, 0x00, 0x1B5));
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0x1B7), emu_cx);
	emu_sti();
	emu_movw(&emu_di, 0x260);
	emu_movw(&emu_cx, 0xB);
	emu_repne_scasb();
	emu_orw(&emu_cx, emu_cx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0804; emu_last_cs = 0x29E8; emu_last_ip = 0x0832; emu_last_length = 0x0023; emu_last_crc = 0x1368; emu_call(); return; }
	emu_testb(&emu_ah, 0x8);
	if (!emu_flags.zf) { f__29E8_0804_0016_2028(); return; }
	emu_cmpb(&emu_al, 0x7A);
	if (!emu_flags.cf) { f__29E8_0804_0016_2028(); return; }
	emu_push(0x0840); emu_Input_Keyboard_HandleKeys(emu_al, emu_ah);
	f__29E8_0840_0003_233C();
}

/**
 * Decompiled function f__29E8_0840_0003_233C()
 *
 * @name f__29E8_0840_0003_233C
 * @implements 29E8:0840:0003:233C ()
 *
 */
void f__29E8_0840_0003_233C()
{
	emu_push(0x0843); f__29E8_0534_000E_6213();
	f__29E8_0843_0008_9386();
}

/**
 * Decompiled function f__29E8_0843_0008_9386()
 *
 * @name f__29E8_0843_0008_9386
 * @implements 29E8:0843:0008:9386 ()
 *
 */
void f__29E8_0843_0008_9386()
{
	emu_xorb(&emu_ah, emu_ah);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_0897_0016_2028()
 *
 * @name f__29E8_0897_0016_2028
 * @implements 29E8:0897:0016:2028 ()
 *
 * Called From: 29E8:08AB:0016:2028
 * Called From: B4A2:0048:0009:3D8E
 * Called From: B4E6:0295:0009:0D8E
 */
void f__29E8_0897_0016_2028()
{
	emu_cli();
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (emu_flags.zf) { f__29E8_08AD_0003_2227(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x1AF));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x1B1));
	if (!emu_flags.zf) { f__29E8_08AD_0003_2227(); return; }
	emu_sti();
	f__29E8_0897_0016_2028(); return;
}

/**
 * Decompiled function f__29E8_08AD_0003_2227()
 *
 * @name f__29E8_08AD_0003_2227
 * @implements 29E8:08AD:0003:2227 ()
 *
 * Called From: 29E8:089D:0016:2028
 * Called From: 29E8:08A8:0016:2028
 */
void f__29E8_08AD_0003_2227()
{
	emu_push(0x08B0); f__29E8_074D_0066_6E9B();
	f__29E8_08B0_0004_D32F();
}

/**
 * Decompiled function f__29E8_08B0_0004_D32F()
 *
 * @name f__29E8_08B0_0004_D32F
 * @implements 29E8:08B0:0004:D32F ()
 *
 */
void f__29E8_08B0_0004_D32F()
{
	emu_sti();
	emu_push(0x08B4); f__29E8_0534_000E_6213();
	f__29E8_08B4_0001_6580();
}

/**
 * Decompiled function f__29E8_08B4_0001_6580()
 *
 * @name f__29E8_08B4_0001_6580
 * @implements 29E8:08B4:0001:6580 ()
 *
 */
void f__29E8_08B4_0001_6580()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_08B5_000A_FC14()
 *
 * @name f__29E8_08B5_000A_FC14
 * @implements 29E8:08B5:000A:FC14 ()
 *
 * Called From: B4A2:00B0:001B:68B5
 * Called From: B4A2:00B0:0034:D555
 * Called From: B4A2:00C4:0009:433C
 * Called From: B4A2:00C4:0014:CD20
 * Called From: B4DA:05A7:000E:7C82
 * Called From: B4DA:05B5:000E:B5D6
 * Called From: B4DA:06C6:000E:7C82
 * Called From: B4DA:06D4:000E:B5D6
 */
void f__29E8_08B5_000A_FC14()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(0x08BF); emu_Input_Unknown_04FC();
	f__29E8_08BF_0007_D960();
}

/**
 * Decompiled function f__29E8_08BF_0007_D960()
 *
 * @name f__29E8_08BF_0007_D960
 * @implements 29E8:08BF:0007:D960 ()
 *
 */
void f__29E8_08BF_0007_D960()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x08C6); emu_Input_Keyboard_Translate();
	f__29E8_08C6_001F_C389();
}

/**
 * Decompiled function f__29E8_08C6_001F_C389()
 *
 * @name f__29E8_08C6_001F_C389
 * @implements 29E8:08C6:001F:C389 ()
 *
 */
void f__29E8_08C6_001F_C389()
{
	emu_addw(&emu_sp, 0x2);
	emu_xorb(&emu_ah, emu_ah);
	emu_movw(&emu_di, emu_ax);
	emu_movb(&emu_cl, 0x3);
	emu_shrw(&emu_di, emu_cl);
	emu_movb(&emu_cl, emu_al);
	emu_andb(&emu_cl, 0x7);
	emu_movb(&emu_al, 0x1);
	emu_shlb(&emu_al, emu_cl);
	emu_andb(&emu_al, emu_get_memory8(emu_cs, emu_di, 0x232));
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_0971_0071_E515()
 *
 * @name f__29E8_0971_0071_E515
 * @implements 29E8:0971:0071:E515 ()
 *
 * Called From: 1DB6:01AB:0007:65FE
 */
void f__29E8_0971_0071_E515()
{
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_movw(&emu_ax, 0x40);
	emu_movw(&emu_es, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, 0x00, 0x17));
	emu_testb(&emu_al, 0x40);
	if (emu_flags.zf) { f__29E8_0989_0059_380D(); return; }
	emu_orw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x1);
	emu_testb(&emu_al, 0x20);
	if (emu_flags.zf) { f__29E8_0993_004F_70A6(); return; }
	emu_orw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x2);
	emu_testb(&emu_al, 0x2);
	if (emu_flags.zf) { f__29E8_099D_0045_17CA(); return; }
	emu_orb(&emu_get_memory8(emu_cs, 0x00, 0x237), 0x10);
	emu_andb(&emu_al, 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_movb(&emu_ah, emu_al);
	emu_movb(&emu_al, emu_get_memory8(emu_es, 0x00, 0x18));
	emu_shlb(&emu_al, 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_andb(&emu_al, 0xC);
	emu_orb(&emu_ah, emu_al);
	emu_movb(&emu_al, emu_get_memory8(emu_es, 0x00, 0x96));
	emu_testb(&emu_al, 0x8);
	if (emu_flags.zf) { f__29E8_09BA_0028_B31C(); return; }
	emu_orb(&emu_ah, 0x40);
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x239), emu_ah);
	emu_testb(&emu_al, 0x4);
	if (emu_flags.zf) { f__29E8_09C9_0019_6723(); return; }
	emu_orb(&emu_get_memory8(emu_cs, 0x00, 0x23A), 0x1);
	emu_testb(&emu_al, 0x2);
	if (emu_flags.zf) { f__29E8_09D3_000F_9D37(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x256), 0x1);
	emu_testb(&emu_al, 0x1);
	if (emu_flags.zf) { f__29E8_09DD_0005_C3D3(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x257), 0x2);
	emu_movw(&emu_ax, 0x3509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09E2); Interrupt_DOS();
	f__29E8_09E2_0016_59C4();
}

/**
 * Decompiled function f__29E8_0989_0059_380D()
 *
 * @name f__29E8_0989_0059_380D
 * @implements 29E8:0989:0059:380D ()
 *
 * Called From: 29E8:0981:0071:E515
 */
void f__29E8_0989_0059_380D()
{
	emu_testb(&emu_al, 0x20);
	if (emu_flags.zf) { f__29E8_0993_004F_70A6(); return; }
	emu_orw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x2);
	emu_testb(&emu_al, 0x2);
	if (emu_flags.zf) { f__29E8_099D_0045_17CA(); return; }
	emu_orb(&emu_get_memory8(emu_cs, 0x00, 0x237), 0x10);
	emu_andb(&emu_al, 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_movb(&emu_ah, emu_al);
	emu_movb(&emu_al, emu_get_memory8(emu_es, 0x00, 0x18));
	emu_shlb(&emu_al, 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_andb(&emu_al, 0xC);
	emu_orb(&emu_ah, emu_al);
	emu_movb(&emu_al, emu_get_memory8(emu_es, 0x00, 0x96));
	emu_testb(&emu_al, 0x8);
	if (emu_flags.zf) { f__29E8_09BA_0028_B31C(); return; }
	emu_orb(&emu_ah, 0x40);
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x239), emu_ah);
	emu_testb(&emu_al, 0x4);
	if (emu_flags.zf) { f__29E8_09C9_0019_6723(); return; }
	emu_orb(&emu_get_memory8(emu_cs, 0x00, 0x23A), 0x1);
	emu_testb(&emu_al, 0x2);
	if (emu_flags.zf) { f__29E8_09D3_000F_9D37(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x256), 0x1);
	emu_testb(&emu_al, 0x1);
	if (emu_flags.zf) { f__29E8_09DD_0005_C3D3(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x257), 0x2);
	emu_movw(&emu_ax, 0x3509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09E2); Interrupt_DOS();
	f__29E8_09E2_0016_59C4();
}

/**
 * Decompiled function f__29E8_0993_004F_70A6()
 *
 * @name f__29E8_0993_004F_70A6
 * @implements 29E8:0993:004F:70A6 ()
 *
 * Called From: 29E8:098B:0059:380D
 */
void f__29E8_0993_004F_70A6()
{
	emu_testb(&emu_al, 0x2);
	if (emu_flags.zf) { f__29E8_099D_0045_17CA(); return; }
	emu_orb(&emu_get_memory8(emu_cs, 0x00, 0x237), 0x10);
	emu_andb(&emu_al, 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_movb(&emu_ah, emu_al);
	emu_movb(&emu_al, emu_get_memory8(emu_es, 0x00, 0x18));
	emu_shlb(&emu_al, 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_andb(&emu_al, 0xC);
	emu_orb(&emu_ah, emu_al);
	emu_movb(&emu_al, emu_get_memory8(emu_es, 0x00, 0x96));
	emu_testb(&emu_al, 0x8);
	if (emu_flags.zf) { f__29E8_09BA_0028_B31C(); return; }
	emu_orb(&emu_ah, 0x40);
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x239), emu_ah);
	emu_testb(&emu_al, 0x4);
	if (emu_flags.zf) { f__29E8_09C9_0019_6723(); return; }
	emu_orb(&emu_get_memory8(emu_cs, 0x00, 0x23A), 0x1);
	emu_testb(&emu_al, 0x2);
	if (emu_flags.zf) { f__29E8_09D3_000F_9D37(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x256), 0x1);
	emu_testb(&emu_al, 0x1);
	if (emu_flags.zf) { f__29E8_09DD_0005_C3D3(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x257), 0x2);
	emu_movw(&emu_ax, 0x3509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09E2); Interrupt_DOS();
	f__29E8_09E2_0016_59C4();
}

/**
 * Decompiled function f__29E8_099D_0045_17CA()
 *
 * @name f__29E8_099D_0045_17CA
 * @implements 29E8:099D:0045:17CA ()
 *
 * Called From: 29E8:0995:004F:70A6
 */
void f__29E8_099D_0045_17CA()
{
	emu_andb(&emu_al, 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_movb(&emu_ah, emu_al);
	emu_movb(&emu_al, emu_get_memory8(emu_es, 0x00, 0x18));
	emu_shlb(&emu_al, 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_andb(&emu_al, 0xC);
	emu_orb(&emu_ah, emu_al);
	emu_movb(&emu_al, emu_get_memory8(emu_es, 0x00, 0x96));
	emu_testb(&emu_al, 0x8);
	if (emu_flags.zf) { f__29E8_09BA_0028_B31C(); return; }
	emu_orb(&emu_ah, 0x40);
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x239), emu_ah);
	emu_testb(&emu_al, 0x4);
	if (emu_flags.zf) { f__29E8_09C9_0019_6723(); return; }
	emu_orb(&emu_get_memory8(emu_cs, 0x00, 0x23A), 0x1);
	emu_testb(&emu_al, 0x2);
	if (emu_flags.zf) { f__29E8_09D3_000F_9D37(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x256), 0x1);
	emu_testb(&emu_al, 0x1);
	if (emu_flags.zf) { f__29E8_09DD_0005_C3D3(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x257), 0x2);
	emu_movw(&emu_ax, 0x3509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09E2); Interrupt_DOS();
	f__29E8_09E2_0016_59C4();
}

/**
 * Decompiled function f__29E8_09BA_0028_B31C()
 *
 * @name f__29E8_09BA_0028_B31C
 * @implements 29E8:09BA:0028:B31C ()
 *
 * Called From: 29E8:09B5:0045:17CA
 */
void f__29E8_09BA_0028_B31C()
{
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x239), emu_ah);
	emu_testb(&emu_al, 0x4);
	if (emu_flags.zf) { f__29E8_09C9_0019_6723(); return; }
	emu_orb(&emu_get_memory8(emu_cs, 0x00, 0x23A), 0x1);
	emu_testb(&emu_al, 0x2);
	if (emu_flags.zf) { f__29E8_09D3_000F_9D37(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x256), 0x1);
	emu_testb(&emu_al, 0x1);
	if (emu_flags.zf) { f__29E8_09DD_0005_C3D3(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x257), 0x2);
	emu_movw(&emu_ax, 0x3509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09E2); Interrupt_DOS();
	f__29E8_09E2_0016_59C4();
}

/**
 * Decompiled function f__29E8_09C9_0019_6723()
 *
 * @name f__29E8_09C9_0019_6723
 * @implements 29E8:09C9:0019:6723 ()
 *
 * Called From: 29E8:09C1:0028:B31C
 */
void f__29E8_09C9_0019_6723()
{
	emu_testb(&emu_al, 0x2);
	if (emu_flags.zf) { f__29E8_09D3_000F_9D37(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x256), 0x1);
	emu_testb(&emu_al, 0x1);
	if (emu_flags.zf) { f__29E8_09DD_0005_C3D3(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x257), 0x2);
	emu_movw(&emu_ax, 0x3509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09E2); Interrupt_DOS();
	f__29E8_09E2_0016_59C4();
}

/**
 * Decompiled function f__29E8_09D3_000F_9D37()
 *
 * @name f__29E8_09D3_000F_9D37
 * @implements 29E8:09D3:000F:9D37 ()
 *
 * Called From: 29E8:09CB:0019:6723
 */
void f__29E8_09D3_000F_9D37()
{
	emu_testb(&emu_al, 0x1);
	if (emu_flags.zf) { f__29E8_09DD_0005_C3D3(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x257), 0x2);
	emu_movw(&emu_ax, 0x3509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09E2); Interrupt_DOS();
	f__29E8_09E2_0016_59C4();
}

/**
 * Decompiled function f__29E8_09DD_0005_C3D3()
 *
 * @name f__29E8_09DD_0005_C3D3
 * @implements 29E8:09DD:0005:C3D3 ()
 *
 * Called From: 29E8:09D5:000F:9D37
 */
void f__29E8_09DD_0005_C3D3()
{
	emu_movw(&emu_ax, 0x3509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09E2); Interrupt_DOS();
	f__29E8_09E2_0016_59C4();
}

/**
 * Decompiled function f__29E8_09E2_0016_59C4()
 *
 * @name f__29E8_09E2_0016_59C4
 * @implements 29E8:09E2:0016:59C4 ()
 *
 */
void f__29E8_09E2_0016_59C4()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0x258), emu_bx);
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0x25A), emu_es);
	emu_movw(&emu_bx, emu_cs);
	emu_movw(&emu_ds, emu_bx);
	emu_movw(&emu_dx, 0xD47);
	emu_movw(&emu_ax, 0x2509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09F8); Interrupt_DOS();
	f__29E8_09F8_0005_63D1();
}

/**
 * Decompiled function f__29E8_09F8_0005_63D1()
 *
 * @name f__29E8_09F8_0005_63D1
 * @implements 29E8:09F8:0005:63D1 ()
 *
 */
void f__29E8_09F8_0005_63D1()
{
	emu_movw(&emu_ax, 0x3523);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09FD); Interrupt_DOS();
	f__29E8_09FD_0016_F12A();
}

/**
 * Decompiled function f__29E8_09FD_0016_F12A()
 *
 * @name f__29E8_09FD_0016_F12A
 * @implements 29E8:09FD:0016:F12A ()
 *
 */
void f__29E8_09FD_0016_F12A()
{
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0x25C), emu_bx);
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0x25E), emu_es);
	emu_movw(&emu_bx, emu_cs);
	emu_movw(&emu_ds, emu_bx);
	emu_movw(&emu_dx, 0xF79);
	emu_movw(&emu_ax, 0x2523);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0A13); Interrupt_DOS();
	f__29E8_0A13_0006_D20B();
}

/**
 * Decompiled function f__29E8_0A13_0006_D20B()
 *
 * @name f__29E8_0A13_0006_D20B
 * @implements 29E8:0A13:0006:D20B ()
 *
 */
void f__29E8_0A13_0006_D20B()
{
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_0D47_0096_3777()
 *
 * @name f__29E8_0D47_0096_3777
 * @implements 29E8:0D47:0096:3777 ()
 *
 * Called From: 0000:0000:0000:0000
 */
void f__29E8_0D47_0096_3777()
{
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_push(emu_si);
	emu_cld();
	emu_andw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0xFFFC);
	emu_movw(&emu_ax, 0x40);
	emu_movw(&emu_es, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, 0x00, 0x17), 0x40);
	if (emu_flags.zf) { f__29E8_0D69_0074_EB18(); return; }
	emu_orw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x1);
	emu_testb(&emu_get_memory8(emu_es, 0x00, 0x17), 0x20);
	if (emu_flags.zf) { f__29E8_0D77_0066_8FA5(); return; }
	emu_orw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x2);
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0xAE), 0x1);
	emu_testb(&emu_get_memory8(emu_es, 0x00, 0x96), 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D8B; emu_last_cs = 0x29E8; emu_last_ip = 0x0D83; emu_last_length = 0x0096; emu_last_crc = 0x3777; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0xAE), 0x0);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_ds, emu_ax);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x700E));
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0x1B3), emu_dx);
	emu_movw(&emu_ax, emu_cs);
	emu_movw(&emu_ds, emu_ax);
	emu_movw(&emu_es, emu_ax);
	emu_cld();
	emu_xorb(&emu_ah, emu_ah);
	emu_movw(&emu_bx, 0x101);
	emu_inb(&emu_al, 0x60);
	emu_movw(&emu_bx, emu_get_memory16(emu_cs, 0x00, 0x254));
	emu_movb(&emu_get_memory8(emu_cs, emu_bx, 0x242), emu_al);
	emu_incw(&emu_bx);
	emu_andw(&emu_bx, 0xF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0x254), emu_bx);
	emu_movw(&emu_bx, 0x101);
	emu_cmpb(&emu_al, 0xE1);
	if (!emu_flags.zf) { f__29E8_0DC7_0016_492E(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x257), 0x3);
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00, 0x257), 0x0);
	if (emu_flags.zf) { f__29E8_0DE0_000D_1FF6(); return; }
	emu_decb(&emu_get_memory8(emu_cs, 0x00, 0x257));
	emu_testw(&emu_dx, 0x80);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0DDD; emu_last_cs = 0x29E8; emu_last_ip = 0x0DD8; emu_last_length = 0x0096; emu_last_crc = 0x3777; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0DDA; emu_last_length = 0x0096; emu_last_crc = 0x3777; emu_call();
}

/**
 * Decompiled function f__29E8_0D69_0074_EB18()
 *
 * @name f__29E8_0D69_0074_EB18
 * @implements 29E8:0D69:0074:EB18 ()
 *
 * Called From: 29E8:0D61:0096:3777
 */
void f__29E8_0D69_0074_EB18()
{
	emu_testb(&emu_get_memory8(emu_es, 0x00, 0x17), 0x20);
	if (emu_flags.zf) { f__29E8_0D77_0066_8FA5(); return; }
	emu_orw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x2);
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0xAE), 0x1);
	emu_testb(&emu_get_memory8(emu_es, 0x00, 0x96), 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D8B; emu_last_cs = 0x29E8; emu_last_ip = 0x0D83; emu_last_length = 0x0074; emu_last_crc = 0xEB18; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0xAE), 0x0);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_ds, emu_ax);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x700E));
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0x1B3), emu_dx);
	emu_movw(&emu_ax, emu_cs);
	emu_movw(&emu_ds, emu_ax);
	emu_movw(&emu_es, emu_ax);
	emu_cld();
	emu_xorb(&emu_ah, emu_ah);
	emu_movw(&emu_bx, 0x101);
	emu_inb(&emu_al, 0x60);
	emu_movw(&emu_bx, emu_get_memory16(emu_cs, 0x00, 0x254));
	emu_movb(&emu_get_memory8(emu_cs, emu_bx, 0x242), emu_al);
	emu_incw(&emu_bx);
	emu_andw(&emu_bx, 0xF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0x254), emu_bx);
	emu_movw(&emu_bx, 0x101);
	emu_cmpb(&emu_al, 0xE1);
	if (!emu_flags.zf) { f__29E8_0DC7_0016_492E(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x257), 0x3);
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00, 0x257), 0x0);
	if (emu_flags.zf) { f__29E8_0DE0_000D_1FF6(); return; }
	emu_decb(&emu_get_memory8(emu_cs, 0x00, 0x257));
	emu_testw(&emu_dx, 0x80);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0DDD; emu_last_cs = 0x29E8; emu_last_ip = 0x0DD8; emu_last_length = 0x0074; emu_last_crc = 0xEB18; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0DDA; emu_last_length = 0x0074; emu_last_crc = 0xEB18; emu_call();
}

/**
 * Decompiled function f__29E8_0D77_0066_8FA5()
 *
 * @name f__29E8_0D77_0066_8FA5
 * @implements 29E8:0D77:0066:8FA5 ()
 *
 * Called From: 29E8:0D6F:0074:EB18
 */
void f__29E8_0D77_0066_8FA5()
{
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0xAE), 0x1);
	emu_testb(&emu_get_memory8(emu_es, 0x00, 0x96), 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D8B; emu_last_cs = 0x29E8; emu_last_ip = 0x0D83; emu_last_length = 0x0066; emu_last_crc = 0x8FA5; emu_call(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0xAE), 0x0);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_ds, emu_ax);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x700E));
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0x1B3), emu_dx);
	emu_movw(&emu_ax, emu_cs);
	emu_movw(&emu_ds, emu_ax);
	emu_movw(&emu_es, emu_ax);
	emu_cld();
	emu_xorb(&emu_ah, emu_ah);
	emu_movw(&emu_bx, 0x101);
	emu_inb(&emu_al, 0x60);
	emu_movw(&emu_bx, emu_get_memory16(emu_cs, 0x00, 0x254));
	emu_movb(&emu_get_memory8(emu_cs, emu_bx, 0x242), emu_al);
	emu_incw(&emu_bx);
	emu_andw(&emu_bx, 0xF);
	emu_movw(&emu_get_memory16(emu_cs, 0x00, 0x254), emu_bx);
	emu_movw(&emu_bx, 0x101);
	emu_cmpb(&emu_al, 0xE1);
	if (!emu_flags.zf) { f__29E8_0DC7_0016_492E(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x257), 0x3);
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00, 0x257), 0x0);
	if (emu_flags.zf) { f__29E8_0DE0_000D_1FF6(); return; }
	emu_decb(&emu_get_memory8(emu_cs, 0x00, 0x257));
	emu_testw(&emu_dx, 0x80);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0DDD; emu_last_cs = 0x29E8; emu_last_ip = 0x0DD8; emu_last_length = 0x0066; emu_last_crc = 0x8FA5; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0DDA; emu_last_length = 0x0066; emu_last_crc = 0x8FA5; emu_call();
}

/**
 * Decompiled function f__29E8_0DC7_0016_492E()
 *
 * @name f__29E8_0DC7_0016_492E
 * @implements 29E8:0DC7:0016:492E ()
 *
 * Called From: 29E8:0DBF:0066:8FA5
 */
void f__29E8_0DC7_0016_492E()
{
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00, 0x257), 0x0);
	if (emu_flags.zf) { f__29E8_0DE0_000D_1FF6(); return; }
	emu_decb(&emu_get_memory8(emu_cs, 0x00, 0x257));
	emu_testw(&emu_dx, 0x80);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0DDD; emu_last_cs = 0x29E8; emu_last_ip = 0x0DD8; emu_last_length = 0x0016; emu_last_crc = 0x492E; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0DDA; emu_last_length = 0x0016; emu_last_crc = 0x492E; emu_call();
}

/**
 * Decompiled function f__29E8_0DE0_000D_1FF6()
 *
 * @name f__29E8_0DE0_000D_1FF6
 * @implements 29E8:0DE0:000D:1FF6 ()
 *
 * Called From: 29E8:0DCD:0016:492E
 */
void f__29E8_0DE0_000D_1FF6()
{
	emu_cmpb(&emu_al, 0xE0);
	if (!emu_flags.zf) { f__29E8_0DED_002B_7693(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x256), 0x1);
	f__29E8_0F3C_0012_01FA(); return;
}

/**
 * Decompiled function f__29E8_0DED_002B_7693()
 *
 * @name f__29E8_0DED_002B_7693
 * @implements 29E8:0DED:002B:7693 ()
 *
 * Called From: 29E8:0DE2:000D:1FF6
 */
void f__29E8_0DED_002B_7693()
{
	emu_testb(&emu_al, 0x80);
	if (emu_flags.zf) { f__29E8_0DF8_0020_D8CF(); return; }
	emu_xorb(&emu_bl, emu_bl);
	emu_andb(&emu_al, 0x7F);
	emu_orb(&emu_ah, 0x8);
	f__29E8_0DF8_0020_D8CF(); return;
}

/**
 * Decompiled function f__29E8_0DF8_0020_D8CF()
 *
 * @name f__29E8_0DF8_0020_D8CF
 * @implements 29E8:0DF8:0020:D8CF ()
 *
 * Called From: 29E8:0DEF:002B:7693
 */
void f__29E8_0DF8_0020_D8CF()
{
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00, 0x256), 0x0);
	if (emu_flags.zf) { f__29E8_0E26_0008_3DE4(); return; }
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x256), 0x0);
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0xF76), 0x1);
	emu_movw(&emu_di, 0x7E);
	emu_movw(&emu_cx, 0x10);
	emu_repne_scasb();
	if (emu_cx == 0) { f__29E8_0E18_0003_DDAC(); return; }
	/* Unresolved jump */ emu_ip = 0x0E1B; emu_last_cs = 0x29E8; emu_last_ip = 0x0E16; emu_last_length = 0x0020; emu_last_crc = 0xD8CF; emu_call();
}

/**
 * Decompiled function f__29E8_0E18_0003_DDAC()
 *
 * @name f__29E8_0E18_0003_DDAC
 * @implements 29E8:0E18:0003:DDAC ()
 *
 * Called From: 29E8:0E14:002B:7693
 */
void f__29E8_0E18_0003_DDAC()
{
	f__29E8_0F4E_0028_9BC1(); return;
}

/**
 * Decompiled function f__29E8_0E26_0008_3DE4()
 *
 * @name f__29E8_0E26_0008_3DE4
 * @implements 29E8:0E26:0008:3DE4 ()
 *
 * Called From: 29E8:0DFE:0020:D8CF
 * Called From: 29E8:0DFE:002B:7693
 */
void f__29E8_0E26_0008_3DE4()
{
	emu_cmpb(&emu_al, 0x7A);
	if (!emu_flags.zf) { f__29E8_0E2E_002F_9EC9(); return; }
	emu_movb(&emu_al, 0x80);
	/* Unresolved jump */ emu_ip = 0x0E38; emu_last_cs = 0x29E8; emu_last_ip = 0x0E2C; emu_last_length = 0x0008; emu_last_crc = 0x3DE4; emu_call();
}

/**
 * Decompiled function f__29E8_0E2E_002F_9EC9()
 *
 * @name f__29E8_0E2E_002F_9EC9
 * @implements 29E8:0E2E:002F:9EC9 ()
 *
 * Called From: 29E8:0E28:0008:3DE4
 */
void f__29E8_0E2E_002F_9EC9()
{
	emu_movw(&emu_di, emu_ax);
	emu_andw(&emu_di, 0x7F);
	emu_movb(&emu_al, emu_get_memory8(emu_cs, emu_di, 0x1B9));
	emu_testb(&emu_get_memory8(emu_cs, 0x00, 0x23A), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E3E; emu_last_length = 0x002F; emu_last_crc = 0x9EC9; emu_call(); return; }
	emu_testb(&emu_get_memory8(emu_cs, 0x00, 0x239), 0x4);
	if (emu_flags.zf) { f__29E8_0E60_0015_17DE(); return; }
	emu_cmpb(&emu_al, 0x5A);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E4A; emu_last_length = 0x002F; emu_last_crc = 0x9EC9; emu_call(); return; }
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00, 0xAE), 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E52; emu_last_length = 0x002F; emu_last_crc = 0x9EC9; emu_call(); return; }
	emu_testw(&emu_dx, 0x80);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E58; emu_last_length = 0x002F; emu_last_crc = 0x9EC9; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0F4E; emu_last_cs = 0x29E8; emu_last_ip = 0x0E5A; emu_last_length = 0x002F; emu_last_crc = 0x9EC9; emu_call();
}

/**
 * Decompiled function f__29E8_0E60_0015_17DE()
 *
 * @name f__29E8_0E60_0015_17DE
 * @implements 29E8:0E60:0015:17DE ()
 *
 * Called From: 29E8:0E46:002F:9EC9
 */
void f__29E8_0E60_0015_17DE()
{
	emu_testb(&emu_get_memory8(emu_cs, 0x00, 0x239), 0x50);
	if (emu_flags.zf) { f__29E8_0E6B_000A_53F7(); return; }
	emu_orb(&emu_ah, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_ds, emu_ax);
	emu_push(emu_cs);
	emu_push(0x0E75); emu_Input_Keyboard_Translate();
	f__29E8_0E75_008C_16C3();
}

/**
 * Decompiled function f__29E8_0E6B_000A_53F7()
 *
 * @name f__29E8_0E6B_000A_53F7
 * @implements 29E8:0E6B:000A:53F7 ()
 *
 * Called From: 29E8:0E66:0015:17DE
 */
void f__29E8_0E6B_000A_53F7()
{
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_ds, emu_ax);
	emu_push(emu_cs);
	emu_push(0x0E75); emu_Input_Keyboard_Translate();
	f__29E8_0E75_008C_16C3();
}

/**
 * Decompiled function f__29E8_0E75_008C_16C3()
 *
 * @name f__29E8_0E75_008C_16C3
 * @implements 29E8:0E75:008C:16C3 ()
 *
 */
void f__29E8_0E75_008C_16C3()
{
	emu_addw(&emu_sp, 0x2);
	emu_push(emu_cs);
	emu_pop(&emu_ds);
	emu_testb(&emu_get_memory8(emu_cs, 0x00, 0x237), 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E8A; emu_last_cs = 0x29E8; emu_last_ip = 0x0E80; emu_last_length = 0x008C; emu_last_crc = 0x16C3; emu_call(); return; }
	emu_testb(&emu_get_memory8(emu_cs, 0x00, 0x239), 0x2);
	if (emu_flags.zf) { f__29E8_0E8D_0074_0D35(); return; }
	emu_orb(&emu_ah, 0x1);
	emu_movw(&emu_di, emu_ax);
	emu_andw(&emu_di, 0x7F);
	emu_shrw(&emu_di, 0x1);
	emu_shrw(&emu_di, 0x1);
	emu_shrw(&emu_di, 0x1);
	emu_movw(&emu_bx, emu_ax);
	emu_andw(&emu_bx, 0x7F);
	emu_andb(&emu_bl, 0x7);
	emu_movb(&emu_ch, emu_get_memory8(emu_cs, emu_bx, 0x2E));
	emu_testw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x1);
	if (emu_flags.zf) { f__29E8_0EB8_0049_69EA(); return; }
	emu_testb(&emu_ch, emu_get_memory8(emu_cs, emu_di, 0x212));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EB8; emu_last_cs = 0x29E8; emu_last_ip = 0x0EB3; emu_last_length = 0x008C; emu_last_crc = 0x16C3; emu_call(); return; }
	emu_xorb(&emu_ah, 0x1);
	emu_testw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x2);
	if (emu_flags.zf) { f__29E8_0ECB_0036_01D0(); return; }
	emu_testb(&emu_ch, emu_get_memory8(emu_cs, emu_di, 0x222));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0ECB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EC6; emu_last_length = 0x008C; emu_last_crc = 0x16C3; emu_call(); return; }
	emu_xorb(&emu_ah, 0x1);
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x26B), emu_ah);
	emu_cmpw(&emu_ax, 0x668);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED3; emu_last_length = 0x008C; emu_last_crc = 0x16C3; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x64C);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED8; emu_last_length = 0x008C; emu_last_crc = 0x16C3; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x420);
	if (!emu_flags.zf) { f__29E8_0EEB_0016_D025(); return; }
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x700A));
	emu_xorw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_addw(&emu_sp, 0x2);
	emu_pop(&emu_ax);
	emu_cmpw(&emu_ax, 0x434);
	if (!emu_flags.zf) { f__29E8_0EFC_0005_C212(); return; }
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x700C));
	emu_xorw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_addw(&emu_sp, 0x2);
	emu_pop(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0F01); emu_Input_HandleInputSafe();
	f__29E8_0F01_0013_FF87();
}

/**
 * Decompiled function f__29E8_0E8D_0074_0D35()
 *
 * @name f__29E8_0E8D_0074_0D35
 * @implements 29E8:0E8D:0074:0D35 ()
 *
 * Called From: 29E8:0E88:008C:16C3
 */
void f__29E8_0E8D_0074_0D35()
{
	emu_movw(&emu_di, emu_ax);
	emu_andw(&emu_di, 0x7F);
	emu_shrw(&emu_di, 0x1);
	emu_shrw(&emu_di, 0x1);
	emu_shrw(&emu_di, 0x1);
	emu_movw(&emu_bx, emu_ax);
	emu_andw(&emu_bx, 0x7F);
	emu_andb(&emu_bl, 0x7);
	emu_movb(&emu_ch, emu_get_memory8(emu_cs, emu_bx, 0x2E));
	emu_testw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x1);
	if (emu_flags.zf) { f__29E8_0EB8_0049_69EA(); return; }
	emu_testb(&emu_ch, emu_get_memory8(emu_cs, emu_di, 0x212));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EB8; emu_last_cs = 0x29E8; emu_last_ip = 0x0EB3; emu_last_length = 0x0074; emu_last_crc = 0x0D35; emu_call(); return; }
	emu_xorb(&emu_ah, 0x1);
	emu_testw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x2);
	if (emu_flags.zf) { f__29E8_0ECB_0036_01D0(); return; }
	emu_testb(&emu_ch, emu_get_memory8(emu_cs, emu_di, 0x222));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0ECB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EC6; emu_last_length = 0x0074; emu_last_crc = 0x0D35; emu_call(); return; }
	emu_xorb(&emu_ah, 0x1);
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x26B), emu_ah);
	emu_cmpw(&emu_ax, 0x668);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED3; emu_last_length = 0x0074; emu_last_crc = 0x0D35; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x64C);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED8; emu_last_length = 0x0074; emu_last_crc = 0x0D35; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x420);
	if (!emu_flags.zf) { f__29E8_0EEB_0016_D025(); return; }
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x700A));
	emu_xorw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_addw(&emu_sp, 0x2);
	emu_pop(&emu_ax);
	emu_cmpw(&emu_ax, 0x434);
	if (!emu_flags.zf) { f__29E8_0EFC_0005_C212(); return; }
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x700C));
	emu_xorw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_addw(&emu_sp, 0x2);
	emu_pop(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0F01); emu_Input_HandleInputSafe();
	f__29E8_0F01_0013_FF87();
}

/**
 * Decompiled function f__29E8_0EB8_0049_69EA()
 *
 * @name f__29E8_0EB8_0049_69EA
 * @implements 29E8:0EB8:0049:69EA ()
 *
 * Called From: 29E8:0EAC:0074:0D35
 */
void f__29E8_0EB8_0049_69EA()
{
	emu_testw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x2);
	if (emu_flags.zf) { f__29E8_0ECB_0036_01D0(); return; }
	emu_testb(&emu_ch, emu_get_memory8(emu_cs, emu_di, 0x222));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0ECB; emu_last_cs = 0x29E8; emu_last_ip = 0x0EC6; emu_last_length = 0x0049; emu_last_crc = 0x69EA; emu_call(); return; }
	emu_xorb(&emu_ah, 0x1);
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x26B), emu_ah);
	emu_cmpw(&emu_ax, 0x668);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED3; emu_last_length = 0x0049; emu_last_crc = 0x69EA; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x64C);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED8; emu_last_length = 0x0049; emu_last_crc = 0x69EA; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x420);
	if (!emu_flags.zf) { f__29E8_0EEB_0016_D025(); return; }
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x700A));
	emu_xorw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_addw(&emu_sp, 0x2);
	emu_pop(&emu_ax);
	emu_cmpw(&emu_ax, 0x434);
	if (!emu_flags.zf) { f__29E8_0EFC_0005_C212(); return; }
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x700C));
	emu_xorw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_addw(&emu_sp, 0x2);
	emu_pop(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0F01); emu_Input_HandleInputSafe();
	f__29E8_0F01_0013_FF87();
}

/**
 * Decompiled function f__29E8_0ECB_0036_01D0()
 *
 * @name f__29E8_0ECB_0036_01D0
 * @implements 29E8:0ECB:0036:01D0 ()
 *
 * Called From: 29E8:0EBF:0049:69EA
 */
void f__29E8_0ECB_0036_01D0()
{
	emu_movb(&emu_get_memory8(emu_cs, 0x00, 0x26B), emu_ah);
	emu_cmpw(&emu_ax, 0x668);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED3; emu_last_length = 0x0036; emu_last_crc = 0x01D0; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x64C);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0ED8; emu_last_length = 0x0036; emu_last_crc = 0x01D0; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x420);
	if (!emu_flags.zf) { f__29E8_0EEB_0016_D025(); return; }
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x700A));
	emu_xorw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_addw(&emu_sp, 0x2);
	emu_pop(&emu_ax);
	emu_cmpw(&emu_ax, 0x434);
	if (!emu_flags.zf) { f__29E8_0EFC_0005_C212(); return; }
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x700C));
	emu_xorw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_addw(&emu_sp, 0x2);
	emu_pop(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0F01); emu_Input_HandleInputSafe();
	f__29E8_0F01_0013_FF87();
}

/**
 * Decompiled function f__29E8_0EEB_0016_D025()
 *
 * @name f__29E8_0EEB_0016_D025
 * @implements 29E8:0EEB:0016:D025 ()
 *
 * Called From: 29E8:0EDD:0036:01D0
 */
void f__29E8_0EEB_0016_D025()
{
	emu_cmpw(&emu_ax, 0x434);
	if (!emu_flags.zf) { f__29E8_0EFC_0005_C212(); return; }
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x700C));
	emu_xorw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_addw(&emu_sp, 0x2);
	emu_pop(&emu_ax);
	f__29E8_0EFC_0005_C212(); return;
}

/**
 * Decompiled function f__29E8_0EFC_0005_C212()
 *
 * @name f__29E8_0EFC_0005_C212
 * @implements 29E8:0EFC:0005:C212 ()
 *
 * Called From: 29E8:0EEE:0016:D025
 */
void f__29E8_0EFC_0005_C212()
{
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0F01); emu_Input_HandleInputSafe();
	f__29E8_0F01_0013_FF87();
}

/**
 * Decompiled function f__29E8_0F01_0013_FF87()
 *
 * @name f__29E8_0F01_0013_FF87
 * @implements 29E8:0F01:0013:FF87 ()
 *
 */
void f__29E8_0F01_0013_FF87()
{
	emu_pop(&emu_ax);
	emu_cmpb(&emu_al, 0x6E);
	if (!emu_flags.zf) { f__29E8_0F15_0021_FE06(); return; }
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x7C), 0x0);
	if (emu_flags.zf) { f__29E8_0F15_0021_FE06(); return; }
	emu_push(emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, 0x00, 0x7A);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_cs, 0x00, 0x7C);
	emu_push(0x0F14);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29E8; emu_last_ip = 0x0F0F; emu_last_length = 0x0013; emu_last_crc = 0xFF87;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x0F14; emu_last_cs = 0x29E8; emu_last_ip = 0x0F14; emu_last_length = 0x0013; emu_last_crc = 0xFF87; emu_call();
}

/**
 * Decompiled function f__29E8_0F15_0021_FE06()
 *
 * @name f__29E8_0F15_0021_FE06
 * @implements 29E8:0F15:0021:FE06 ()
 *
 * Called From: 29E8:0F04:0013:FF87
 * Called From: 29E8:0F0C:0013:FF87
 */
void f__29E8_0F15_0021_FE06()
{
	emu_movw(&emu_di, 0x260);
	emu_movw(&emu_cx, 0xA);
	emu_repne_scasb();
	emu_orw(&emu_cx, emu_cx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0F1F; emu_last_length = 0x0021; emu_last_crc = 0xFE06; emu_call(); return; }
	emu_movw(&emu_di, 0x36);
	emu_movw(&emu_cx, 0x22);
	emu_shrw(&emu_cx, 0x1);
	emu_repne_scasw();
	if (emu_cx == 0) { f__29E8_0F36_0018_A539(); return; }
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, emu_di, 0x20));
	emu_andw(&emu_bx, emu_dx);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F36; emu_last_cs = 0x29E8; emu_last_ip = 0x0F32; emu_last_length = 0x0021; emu_last_crc = 0xFE06; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0F3C; emu_last_cs = 0x29E8; emu_last_ip = 0x0F34; emu_last_length = 0x0021; emu_last_crc = 0xFE06; emu_call();
}

/**
 * Decompiled function f__29E8_0F36_0018_A539()
 *
 * @name f__29E8_0F36_0018_A539
 * @implements 29E8:0F36:0018:A539 ()
 *
 * Called From: 29E8:0F2B:0021:FE06
 */
void f__29E8_0F36_0018_A539()
{
	emu_testw(&emu_dx, 0x4);
	if (emu_flags.zf) { f__29E8_0F4E_0028_9BC1(); return; }
	f__29E8_0F3C_0012_01FA(); return;
}

/**
 * Decompiled function f__29E8_0F3C_0012_01FA()
 *
 * @name f__29E8_0F3C_0012_01FA
 * @implements 29E8:0F3C:0012:01FA ()
 *
 * Called From: 29E8:0DEA:000D:1FF6
 */
void f__29E8_0F3C_0012_01FA()
{
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_incw(&emu_get_memory16(emu_cs, 0x00, 0x252));

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, 0x00, 0x258);
	emu_cs = emu_get_memory16(emu_cs, 0x00, 0x25A);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x00700048: Interrupt_Keyboard(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29E8; emu_last_ip = 0x0F49; emu_last_length = 0x0012; emu_last_crc = 0x01FA;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__29E8_0F4E_0028_9BC1()
 *
 * @name f__29E8_0F4E_0028_9BC1
 * @implements 29E8:0F4E:0028:9BC1 ()
 *
 * Called From: 29E8:0E18:0003:DDAC
 * Called From: 29E8:0F3A:0018:A539
 */
void f__29E8_0F4E_0028_9BC1()
{
	emu_inb(&emu_al, 0x61);
	emu_movb(&emu_ah, emu_al);
	emu_orb(&emu_al, 0x80);
	emu_outb(0x61, emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_outb(0x61, emu_al);
	emu_movw(&emu_ax, 0x40);
	emu_movw(&emu_es, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, 0x00, 0x96));
	emu_andb(&emu_al, 0xFD);
	emu_movb(&emu_get_memory8(emu_es, 0x00, 0x96), emu_al);
	emu_movb(&emu_al, 0x20);
	emu_outb(0x20, emu_al);
	emu_pop(&emu_si);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Decompiled function f__29E8_0F7A_000D_B1AA()
 *
 * @name f__29E8_0F7A_000D_B1AA
 * @implements 29E8:0F7A:000D:B1AA ()
 *
 * Called From: B500:003D:0005:B18D
 */
void f__29E8_0F7A_000D_B1AA()
{
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_dx, &emu_get_memory16(emu_cs, 0x00, 0x25C));
	emu_movw(&emu_ax, 0x2523);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0F87); Interrupt_DOS();
	f__29E8_0F87_000A_5481();
}

/**
 * Decompiled function f__29E8_0F87_000A_5481()
 *
 * @name f__29E8_0F87_000A_5481
 * @implements 29E8:0F87:000A:5481 ()
 *
 */
void f__29E8_0F87_000A_5481()
{
	emu_lfp(&emu_ds, &emu_dx, &emu_get_memory16(emu_cs, 0x00, 0x258));
	emu_movw(&emu_ax, 0x2509);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0F91); Interrupt_DOS();
	f__29E8_0F91_0004_9ED7();
}

/**
 * Decompiled function f__29E8_0F91_0004_9ED7()
 *
 * @name f__29E8_0F91_0004_9ED7
 * @implements 29E8:0F91:0004:9ED7 ()
 *
 */
void f__29E8_0F91_0004_9ED7()
{
	emu_pop(&emu_ds);
	emu_pop(&emu_dx);
	emu_pop(&emu_ax);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
