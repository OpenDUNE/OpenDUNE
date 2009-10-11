/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__29E8_0534_000E_6213()
 *
 * @name f__29E8_0534_000E_6213
 * @implements 29E8:0534:000E:6213 ()
 * @implements 29E8:0632:0005:F80B
 *
 * Called From: 29E8:0840:0003:233C
 * Called From: 29E8:08B1:0004:D32F
 */
void f__29E8_0534_000E_6213()
{
l__0534:
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_di);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0542; emu_last_cs = 0x29E8; emu_last_ip = 0x053D; emu_last_length = 0x000E; emu_last_crc = 0x6213; emu_call(); return; }
	goto l__0632;
l__0632:
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
 * @implements 29E8:073E:0001:6580
 *
 * Called From: B4A2:003F:000B:EC51
 * Called From: B4E6:028C:0091:FAEA
 */
void f__29E8_072F_000F_651A()
{
l__072F:
	emu_pushf();
	emu_cli();
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x1AF);
	emu_xorw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x1B1));
	emu_popf();
	emu_push(0x073E); emu_Input_Unknown_04FC();
	goto l__073E;
l__073E:

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
 * @implements 29E8:0765:004E:D57F
 * @implements 29E8:0787:002C:CB98
 * @implements 29E8:07A3:0010:602B
 * @implements 29E8:07B3:0047:79F3
 * @implements 29E8:07EB:000F:32F6
 *
 * Called From: 29E8:081A:0003:628C
 * Called From: 29E8:08AD:0003:2227
 */
void f__29E8_074D_0066_6E9B()
{
l__074D:
	emu_push(emu_ds);
	emu_push(emu_di);
	emu_di = emu_ax;
	emu_ax = 0x353F;
	emu_ds = emu_ax;
	emu_ax = emu_get_memory16(emu_cs, emu_di, 0xAF);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (emu_flags.zf) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7013);
	}
	goto l__0765;
l__0765:
	emu_get_memory16(emu_ds, 0x00, 0x7013) = emu_ax;
	emu_addw(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_cmpb(&emu_al, 0x41);
	if (emu_flags.cf) goto l__07EB;
	emu_cmpb(&emu_al, 0x42);
	if (!(emu_flags.cf || emu_flags.zf)) goto l__07B3;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_cs, emu_di, 0xAF);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (emu_flags.zf) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7017);
	}
	goto l__0787;
l__0787:
	emu_get_memory16(emu_ds, 0x00, 0x7017) = emu_ax;
	emu_addw(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_get_memory16(emu_ds, 0x00, 0x7064) = emu_ax;
	emu_ax = emu_get_memory16(emu_cs, emu_di, 0xAF);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (emu_flags.zf) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7019);
	}
	goto l__07A3;
l__07A3:
	emu_get_memory16(emu_ds, 0x00, 0x7019) = emu_ax;
	emu_addw(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_get_memory16(emu_ds, 0x00, 0x7066) = emu_ax;
	emu_pop(&emu_ax);
	goto l__07EB;
l__07B3:
	emu_cmpb(&emu_al, 0x44);
	if ((emu_flags.cf || emu_flags.zf)) {
		emu_push(emu_ax);
		emu_ax = emu_get_memory16(emu_cs, emu_di, 0xAF);
		emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
		if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07C7; emu_last_cs = 0x29E8; emu_last_ip = 0x07C2; emu_last_length = 0x0047; emu_last_crc = 0x79F3; emu_call(); return; }
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7017);
		emu_get_memory16(emu_ds, 0x00, 0x7017) = emu_ax;
		emu_addw(&emu_di, 0x2);
		emu_andw(&emu_di, 0xFF);
		emu_ax = emu_get_memory16(emu_cs, emu_di, 0xAF);
		emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
		if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07E0; emu_last_cs = 0x29E8; emu_last_ip = 0x07DB; emu_last_length = 0x0047; emu_last_crc = 0x79F3; emu_call(); return; }
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7019);
		emu_get_memory16(emu_ds, 0x00, 0x7019) = emu_ax;
		emu_addw(&emu_di, 0x2);
		emu_andw(&emu_di, 0xFF);
		emu_pop(&emu_ax);
	}
	goto l__07EB;
l__07EB:
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x07F7; emu_last_cs = 0x29E8; emu_last_ip = 0x07F0; emu_last_length = 0x000F; emu_last_crc = 0x32F6; emu_call(); return; }
	emu_get_memory16(emu_cs, 0x00, 0x1AF) = emu_di;
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
 * @implements 29E8:0804:0016:2028
 * @implements 29E8:081A:0003:628C
 * @implements 29E8:081D:0023:1368
 * @implements 29E8:0840:0003:233C
 * @implements 29E8:0843:0008:9386
 *
 * Called From: 10E4:049B:0005:B085
 * Called From: B503:08A3:0005:B085
 * Called From: B503:13CE:0009:9868
 * Called From: B53B:01D1:0005:B085
 */
void f__29E8_07FA_0020_177A()
{
l__07FA:
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_cld();
	emu_ax = emu_cs;
	emu_es = emu_ax;
	goto l__0804;
l__0804:
	emu_cli();
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (emu_flags.zf) goto l__081A;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x1AF);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x1B1));
	if (!emu_flags.zf) goto l__081A;
	emu_sti();
	goto l__0804;
l__081A:
	emu_push(0x081D); f__29E8_074D_0066_6E9B();
	goto l__081D;
l__081D:
	emu_cx = emu_get_memory16(emu_cs, 0x00, 0x1B5);
	emu_get_memory16(emu_cs, 0x00, 0x1B7) = emu_cx;
	emu_sti();
	emu_di = 0x260;
	emu_cx = 0xB;
	emu_repne_scasb();
	emu_orw(&emu_cx, emu_cx);
	if (!emu_flags.zf) goto l__0804;
	emu_testb(&emu_ah, 0x8);
	if (!emu_flags.zf) goto l__0804;
	emu_cmpb(&emu_al, 0x7A);
	if (!emu_flags.cf) goto l__0804;
	emu_push(0x0840); emu_Input_Keyboard_HandleKeys(emu_al, emu_ah);
	goto l__0840;
l__0840:
	emu_push(0x0843); f__29E8_0534_000E_6213();
	goto l__0843;
l__0843:
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
 * @implements 29E8:08AD:0003:2227
 * @implements 29E8:08B0:0004:D32F
 * @implements 29E8:08B4:0001:6580
 *
 * Called From: 29E8:08AB:0016:2028
 * Called From: B4A2:0048:0009:3D8E
 * Called From: B4E6:0295:0009:0D8E
 */
void f__29E8_0897_0016_2028()
{
l__0897:
	emu_cli();
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (emu_flags.zf) goto l__08AD;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x1AF);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x1B1));
	if (!emu_flags.zf) goto l__08AD;
	emu_sti();
	f__29E8_0897_0016_2028(); return;
l__08AD:
	emu_push(0x08B0); f__29E8_074D_0066_6E9B();
	goto l__08B0;
l__08B0:
	emu_sti();
	emu_push(0x08B4); f__29E8_0534_000E_6213();
	goto l__08B4;
l__08B4:

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
 * @implements 29E8:08BF:0007:D960
 * @implements 29E8:08C6:001F:C389
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
l__08B5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(0x08BF); emu_Input_Unknown_04FC();
	goto l__08BF;
l__08BF:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x08C6); emu_Input_Keyboard_Translate();
	goto l__08C6;
l__08C6:
	emu_addw(&emu_sp, 0x2);
	emu_xorb(&emu_ah, emu_ah);
	emu_di = emu_ax;
	emu_cl = 0x3;
	emu_shrw(&emu_di, emu_cl);
	emu_cl = emu_al;
	emu_andb(&emu_cl, 0x7);
	emu_al = 0x1;
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
 * @implements 29E8:0989:0059:380D
 * @implements 29E8:0993:004F:70A6
 * @implements 29E8:099D:0045:17CA
 * @implements 29E8:09BA:0028:B31C
 * @implements 29E8:09C9:0019:6723
 * @implements 29E8:09D3:000F:9D37
 * @implements 29E8:09DD:0005:C3D3
 * @implements 29E8:09E2:0016:59C4
 * @implements 29E8:09F8:0005:63D1
 * @implements 29E8:09FD:0016:F12A
 * @implements 29E8:0A13:0006:D20B
 *
 * Called From: 1DB6:01AB:0007:65FE
 */
void f__29E8_0971_0071_E515()
{
l__0971:
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_ax = 0x40;
	emu_es = emu_ax;
	emu_al = emu_get_memory8(emu_es, 0x00, 0x17);
	emu_testb(&emu_al, 0x40);
	if (!emu_flags.zf) {
		emu_orw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x1);
	}
	goto l__0989;
l__0989:
	emu_testb(&emu_al, 0x20);
	if (!emu_flags.zf) {
		emu_orw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x2);
	}
	goto l__0993;
l__0993:
	emu_testb(&emu_al, 0x2);
	if (!emu_flags.zf) {
		emu_orb(&emu_get_memory8(emu_cs, 0x00, 0x237), 0x10);
	}
	goto l__099D;
l__099D:
	emu_andb(&emu_al, 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_ah = emu_al;
	emu_al = emu_get_memory8(emu_es, 0x00, 0x18);
	emu_shlb(&emu_al, 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_andb(&emu_al, 0xC);
	emu_orb(&emu_ah, emu_al);
	emu_al = emu_get_memory8(emu_es, 0x00, 0x96);
	emu_testb(&emu_al, 0x8);
	if (!emu_flags.zf) {
		emu_orb(&emu_ah, 0x40);
	}
	goto l__09BA;
l__09BA:
	emu_get_memory8(emu_cs, 0x00, 0x239) = emu_ah;
	emu_testb(&emu_al, 0x4);
	if (!emu_flags.zf) {
		emu_orb(&emu_get_memory8(emu_cs, 0x00, 0x23A), 0x1);
	}
	goto l__09C9;
l__09C9:
	emu_testb(&emu_al, 0x2);
	if (!emu_flags.zf) {
		emu_get_memory8(emu_cs, 0x00, 0x256) = 0x1;
	}
	goto l__09D3;
l__09D3:
	emu_testb(&emu_al, 0x1);
	if (!emu_flags.zf) {
		emu_get_memory8(emu_cs, 0x00, 0x257) = 0x2;
	}
	goto l__09DD;
l__09DD:
	emu_ax = 0x3509;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09E2); Interrupt_DOS();
	goto l__09E2;
l__09E2:
	emu_get_memory16(emu_cs, 0x00, 0x258) = emu_bx;
	emu_get_memory16(emu_cs, 0x00, 0x25A) = emu_es;
	emu_bx = emu_cs;
	emu_ds = emu_bx;
	emu_dx = 0xD47;
	emu_ax = 0x2509;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09F8); Interrupt_DOS();
	goto l__09F8;
l__09F8:
	emu_ax = 0x3523;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x09FD); Interrupt_DOS();
	goto l__09FD;
l__09FD:
	emu_get_memory16(emu_cs, 0x00, 0x25C) = emu_bx;
	emu_get_memory16(emu_cs, 0x00, 0x25E) = emu_es;
	emu_bx = emu_cs;
	emu_ds = emu_bx;
	emu_dx = 0xF79;
	emu_ax = 0x2523;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0A13); Interrupt_DOS();
	goto l__0A13;
l__0A13:
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
 * @implements 29E8:0D69:0074:EB18
 * @implements 29E8:0D77:0066:8FA5
 * @implements 29E8:0DC7:0016:492E
 * @implements 29E8:0DE0:000D:1FF6
 * @implements 29E8:0DED:002B:7693
 * @implements 29E8:0DF8:0020:D8CF
 * @implements 29E8:0E18:0003:DDAC
 * @implements 29E8:0E26:0008:3DE4
 * @implements 29E8:0E2E:002F:9EC9
 * @implements 29E8:0E60:0015:17DE
 * @implements 29E8:0E6B:000A:53F7
 * @implements 29E8:0E75:008C:16C3
 * @implements 29E8:0E8D:0074:0D35
 * @implements 29E8:0EB8:0049:69EA
 * @implements 29E8:0ECB:0036:01D0
 * @implements 29E8:0EEB:0016:D025
 * @implements 29E8:0EFC:0005:C212
 * @implements 29E8:0F01:0013:FF87
 * @implements 29E8:0F15:0021:FE06
 * @implements 29E8:0F36:0018:A539
 * @implements 29E8:0F3C:0012:01FA
 * @implements 29E8:0F4E:0028:9BC1
 *
 * Called From: 0000:0000:0000:0000
 */
void f__29E8_0D47_0096_3777()
{
l__0D47:
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
	emu_ax = 0x40;
	emu_es = emu_ax;
	emu_testb(&emu_get_memory8(emu_es, 0x00, 0x17), 0x40);
	if (!emu_flags.zf) {
		emu_orw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x1);
	}
	goto l__0D69;
l__0D69:
	emu_testb(&emu_get_memory8(emu_es, 0x00, 0x17), 0x20);
	if (!emu_flags.zf) {
		emu_orw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x2);
	}
	goto l__0D77;
l__0D77:
	emu_get_memory8(emu_cs, 0x00, 0xAE) = 0x1;
	emu_testb(&emu_get_memory8(emu_es, 0x00, 0x96), 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D8B; emu_last_cs = 0x29E8; emu_last_ip = 0x0D83; emu_last_length = 0x0066; emu_last_crc = 0x8FA5; emu_call(); return; }
	emu_get_memory8(emu_cs, 0x00, 0xAE) = 0x0;
	emu_ax = 0x353F;
	emu_ds = emu_ax;
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x700E);
	emu_get_memory16(emu_cs, 0x00, 0x1B3) = emu_dx;
	emu_ax = emu_cs;
	emu_ds = emu_ax;
	emu_es = emu_ax;
	emu_cld();
	emu_xorb(&emu_ah, emu_ah);
	emu_bx = 0x101;
	emu_inb(&emu_al, 0x60);
	emu_bx = emu_get_memory16(emu_cs, 0x00, 0x254);
	emu_get_memory8(emu_cs, emu_bx, 0x242) = emu_al;
	emu_incw(&emu_bx);
	emu_andw(&emu_bx, 0xF);
	emu_get_memory16(emu_cs, 0x00, 0x254) = emu_bx;
	emu_bx = 0x101;
	emu_cmpb(&emu_al, 0xE1);
	if (emu_flags.zf) {
		emu_get_memory8(emu_cs, 0x00, 0x257) = 0x3;
	}
	goto l__0DC7;
l__0DC7:
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00, 0x257), 0x0);
	if (emu_flags.zf) goto l__0DE0;
	emu_decb(&emu_get_memory8(emu_cs, 0x00, 0x257));
	emu_testw(&emu_dx, 0x80);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0DDD; emu_last_cs = 0x29E8; emu_last_ip = 0x0DD8; emu_last_length = 0x0016; emu_last_crc = 0x492E; emu_call(); return; }
	goto l__0F3C;
l__0DE0:
	emu_cmpb(&emu_al, 0xE0);
	if (!emu_flags.zf) goto l__0DED;
	emu_get_memory8(emu_cs, 0x00, 0x256) = 0x1;
	goto l__0F3C;
l__0DED:
	emu_testb(&emu_al, 0x80);
	if (!emu_flags.zf) {
		emu_xorb(&emu_bl, emu_bl);
		emu_andb(&emu_al, 0x7F);
		emu_orb(&emu_ah, 0x8);
	}
	goto l__0DF8;
l__0DF8:
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00, 0x256), 0x0);
	if (emu_flags.zf) goto l__0E26;
	emu_get_memory8(emu_cs, 0x00, 0x256) = 0x0;
	emu_get_memory8(emu_cs, 0x00, 0xF76) = 0x1;
	emu_di = 0x7E;
	emu_cx = 0x10;
	emu_repne_scasb();
	if (emu_cx == 0) goto l__0E18;
	/* Unresolved jump */ emu_ip = 0x0E1B; emu_last_cs = 0x29E8; emu_last_ip = 0x0E16; emu_last_length = 0x0020; emu_last_crc = 0xD8CF; emu_call();
l__0E18:
	goto l__0F4E;
l__0E26:
	emu_cmpb(&emu_al, 0x7A);
	if (!emu_flags.zf) goto l__0E2E;
	emu_al = 0x80;
	/* Unresolved jump */ emu_ip = 0x0E38; emu_last_cs = 0x29E8; emu_last_ip = 0x0E2C; emu_last_length = 0x0008; emu_last_crc = 0x3DE4; emu_call();
l__0E2E:
	emu_di = emu_ax;
	emu_andw(&emu_di, 0x7F);
	emu_al = emu_get_memory8(emu_cs, emu_di, 0x1B9);
	emu_testb(&emu_get_memory8(emu_cs, 0x00, 0x23A), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E3E; emu_last_length = 0x002F; emu_last_crc = 0x9EC9; emu_call(); return; }
	emu_testb(&emu_get_memory8(emu_cs, 0x00, 0x239), 0x4);
	if (emu_flags.zf) goto l__0E60;
	emu_cmpb(&emu_al, 0x5A);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E4A; emu_last_length = 0x002F; emu_last_crc = 0x9EC9; emu_call(); return; }
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00, 0xAE), 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E52; emu_last_length = 0x002F; emu_last_crc = 0x9EC9; emu_call(); return; }
	emu_testw(&emu_dx, 0x80);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E58; emu_last_length = 0x002F; emu_last_crc = 0x9EC9; emu_call(); return; }
	goto l__0F4E;
l__0E60:
	emu_testb(&emu_get_memory8(emu_cs, 0x00, 0x239), 0x50);
	if (!emu_flags.zf) {
		emu_orb(&emu_ah, 0x4);
	}
	goto l__0E6B;
l__0E6B:
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_ds = emu_ax;
	emu_push(emu_cs);
	emu_push(0x0E75); emu_Input_Keyboard_Translate();
	goto l__0E75;
l__0E75:
	emu_addw(&emu_sp, 0x2);
	emu_push(emu_cs);
	emu_pop(&emu_ds);
	emu_testb(&emu_get_memory8(emu_cs, 0x00, 0x237), 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E8A; emu_last_cs = 0x29E8; emu_last_ip = 0x0E80; emu_last_length = 0x008C; emu_last_crc = 0x16C3; emu_call(); return; }
	emu_testb(&emu_get_memory8(emu_cs, 0x00, 0x239), 0x2);
	if (!emu_flags.zf) {
		emu_orb(&emu_ah, 0x1);
	}
	goto l__0E8D;
l__0E8D:
	emu_di = emu_ax;
	emu_andw(&emu_di, 0x7F);
	emu_shrw(&emu_di, 0x1);
	emu_shrw(&emu_di, 0x1);
	emu_shrw(&emu_di, 0x1);
	emu_bx = emu_ax;
	emu_andw(&emu_bx, 0x7F);
	emu_andb(&emu_bl, 0x7);
	emu_ch = emu_get_memory8(emu_cs, emu_bx, 0x2E);
	emu_testw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x1);
	if (!emu_flags.zf) {
		emu_testb(&emu_ch, emu_get_memory8(emu_cs, emu_di, 0x212));
		if (!emu_flags.zf) {
			emu_xorb(&emu_ah, 0x1);
		}
	}
	goto l__0EB8;
l__0EB8:
	emu_testw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x2);
	if (!emu_flags.zf) {
		emu_testb(&emu_ch, emu_get_memory8(emu_cs, emu_di, 0x222));
		if (!emu_flags.zf) {
			emu_xorb(&emu_ah, 0x1);
		}
	}
	goto l__0ECB;
l__0ECB:
	emu_get_memory8(emu_cs, 0x00, 0x26B) = emu_ah;
	emu_cmpw(&emu_ax, 0x668);
	if (emu_flags.zf) goto l__0F3C;
	emu_cmpw(&emu_ax, 0x64C);
	if (emu_flags.zf) goto l__0F3C;
	emu_cmpw(&emu_ax, 0x420);
	if (emu_flags.zf) {
		emu_push(emu_ax);
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x700A);
		emu_xorw(&emu_ax, 0x1);
		emu_push(emu_ax);
		emu_addw(&emu_sp, 0x2);
		emu_pop(&emu_ax);
	}
	goto l__0EEB;
l__0EEB:
	emu_cmpw(&emu_ax, 0x434);
	if (emu_flags.zf) {
		emu_push(emu_ax);
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x700C);
		emu_xorw(&emu_ax, 0x1);
		emu_push(emu_ax);
		emu_addw(&emu_sp, 0x2);
		emu_pop(&emu_ax);
	}
	goto l__0EFC;
l__0EFC:
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0F01); emu_Input_HandleInputSafe();
	goto l__0F01;
l__0F01:
	emu_pop(&emu_ax);
	emu_cmpb(&emu_al, 0x6E);
	if (!emu_flags.zf) goto l__0F15;
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x7C), 0x0);
	if (emu_flags.zf) goto l__0F15;
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
l__0F15:
	emu_di = 0x260;
	emu_cx = 0xA;
	emu_repne_scasb();
	emu_orw(&emu_cx, emu_cx);
	if (emu_flags.zf) {
		emu_di = 0x36;
		emu_cx = 0x22;
		emu_shrw(&emu_cx, 0x1);
		emu_repne_scasw();
		if (emu_cx == 0) goto l__0F36;
		emu_bx = emu_get_memory16(emu_ds, emu_di, 0x20);
		emu_andw(&emu_bx, emu_dx);
		if (emu_flags.zf) goto l__0F36;
	}
	goto l__0F3C;
l__0F36:
	emu_testw(&emu_dx, 0x4);
	if (emu_flags.zf) goto l__0F4E;
	goto l__0F3C;
l__0F3C:
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
l__0F4E:
	emu_inb(&emu_al, 0x61);
	emu_ah = emu_al;
	emu_orb(&emu_al, 0x80);
	emu_outb(0x61, emu_al);
	emu_xchgb(&emu_al, &emu_ah);
	emu_outb(0x61, emu_al);
	emu_ax = 0x40;
	emu_es = emu_ax;
	emu_al = emu_get_memory8(emu_es, 0x00, 0x96);
	emu_andb(&emu_al, 0xFD);
	emu_get_memory8(emu_es, 0x00, 0x96) = emu_al;
	emu_al = 0x20;
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
 * @implements 29E8:0F87:000A:5481
 * @implements 29E8:0F91:0004:9ED7
 *
 * Called From: B500:003D:0005:B18D
 */
void f__29E8_0F7A_000D_B1AA()
{
l__0F7A:
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_dx, &emu_get_memory16(emu_cs, 0x00, 0x25C));
	emu_ax = 0x2523;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0F87); Interrupt_DOS();
	goto l__0F87;
l__0F87:
	emu_lfp(&emu_ds, &emu_dx, &emu_get_memory16(emu_cs, 0x00, 0x258));
	emu_ax = 0x2509;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0F91); Interrupt_DOS();
	goto l__0F91;
l__0F91:
	emu_pop(&emu_ds);
	emu_pop(&emu_dx);
	emu_pop(&emu_ax);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
