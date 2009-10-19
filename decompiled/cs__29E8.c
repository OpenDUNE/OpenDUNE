/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Input_Keyboard_HandleKeys()
 *
 * @name emu_Input_Keyboard_HandleKeys
 * @implements 29E8:026C:0015:3543 ()
 * @implements 29E8:027A:0007:5A2E
 * @implements 29E8:0281:0012:4D00
 * @implements 29E8:0293:0015:08FC
 * @implements 29E8:02B6:0025:93AF
 * @implements 29E8:02BB:0020:2395
 * @implements 29E8:02D9:0002:F53A
 * @implements 29E8:02DB:0028:AB44
 * @implements 29E8:030D:002A:00F8
 * @implements 29E8:0331:0006:D00A
 * @implements 29E8:0337:0008:6739
 * @implements 29E8:033F:0004:113A
 * @implements 29E8:0343:0007:372B
 * @implements 29E8:0345:0005:5A4B
 *
 * Called From: 29E8:047F:0009:A77A
 * Called From: 29E8:06B5:0012:72C8
 * Called From: 29E8:06B5:0014:5ACB
 * Called From: 29E8:083D:0023:1368
 */
void emu_Input_Keyboard_HandleKeys()
{
l__026C:
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_testw(&emu_ax, 0x8000);
	if ((emu_ax & 0x8000) == 0) {
		emu_testb(&emu_ah, 0x8);
		if ((emu_ah & 0x8) == 0) goto l__0281;
	}
	goto l__027A;
l__027A:
	emu_xorw(&emu_ax, emu_ax);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
l__0281:
	emu_push(emu_cs);
	emu_pop(&emu_ds);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x700E);
	emu_get_memory16(emu_cs, 0x00, 0x1B3) = emu_ax;
	emu_pop(&emu_ax);
	emu_cmpb(&emu_al, 0x6E);
	if (emu_al != 0x6E) goto l__0293;
	goto l__0343;
l__0293:
	emu_cmpb(&emu_al, 0x3E);
	if (emu_al >= 0x3E) goto l__02DB;
	emu_bx = emu_ax;
	emu_andw(&emu_bx, 0x3F);
	emu_testb(&emu_ah, 0x1);
	if ((emu_ah & 0x1) != 0) goto l__02B6;
	emu_al = emu_get_memory8(emu_cs, emu_bx, 0x34A);
	goto l__02BB;
l__02B6:
	emu_al = emu_get_memory8(emu_cs, emu_bx, 0x388);
	goto l__02BB;
l__02BB:
	emu_testb(&emu_ah, 0x2);
	if ((emu_ah & 0x2) != 0) {
		emu_di = emu_bx;
		emu_andw(&emu_di, 0x7);
		emu_cl = emu_get_memory8(emu_cs, emu_di, 0x2E);
		emu_shrw(&emu_bx, 0x1);
		emu_shrw(&emu_bx, 0x1);
		emu_shrw(&emu_bx, 0x1);
		emu_testb(&emu_cl, emu_get_memory8(emu_cs, emu_bx, 0x212));
		if ((emu_cl & emu_get_memory8(emu_cs, emu_bx, 0x212)) != 0) {
			emu_andb(&emu_al, 0x1F);
		}
	}
	goto l__02D9;
l__02D9:
	goto l__0345;
l__02DB:
	emu_cmpb(&emu_al, 0x4B);
	if (emu_al < 0x4B) goto l__0337;
	emu_cmpb(&emu_al, 0x6E);
	if (emu_al >= 0x6E) goto l__030D;
	emu_xorb(&emu_bh, emu_bh);
	emu_bl = emu_al;
	emu_subb(&emu_bl, 0x4B);
	emu_testw(&emu_get_memory16(emu_cs, 0x00, 0x1B3), 0x200);
	if ((emu_get_memory16(emu_cs, 0x00, 0x1B3) & 0x200) != 0) { /* Unresolved jump */ emu_ip = 0x02FC; emu_last_cs = 0x29E8; emu_last_ip = 0x02F1; emu_last_length = 0x0028; emu_last_crc = 0xAB44; emu_call(); return; }
	emu_testw(&emu_get_memory16(emu_cs, 0x00, 0x1B7), 0x2);
	if ((emu_get_memory16(emu_cs, 0x00, 0x1B7) & 0x2) != 0) { /* Unresolved jump */ emu_ip = 0x0303; emu_last_cs = 0x29E8; emu_last_ip = 0x02FA; emu_last_length = 0x0028; emu_last_crc = 0xAB44; emu_call(); return; }
	emu_al = emu_get_memory8(emu_cs, emu_bx, 0x442);
	goto l__0345;
l__030D:
	emu_cmpb(&emu_al, 0x70);
	if (emu_al < 0x70) goto l__033F;
	emu_cmpb(&emu_al, 0x79);
	if (emu_al > 0x79) goto l__033F;
	emu_bl = emu_al;
	emu_subb(&emu_bl, 0x70);
	emu_bh = 0xC5;
	emu_testb(&emu_ah, 0x7);
	if ((emu_ah & 0x7) != 0) {
		emu_bh = 0x98;
		emu_testb(&emu_ah, 0x4);
		if ((emu_ah & 0x4) == 0) {
			emu_bh = 0xA2;
			emu_testb(&emu_ah, 0x2);
			if ((emu_ah & 0x2) == 0) {
				emu_bh = 0xAC;
			}
		}
	}
	goto l__0331;
l__0331:
	emu_subb(&emu_bh, emu_bl);
	emu_al = emu_bh;
	goto l__0345;
l__0337:
	emu_cmpb(&emu_al, 0x41);
	if (emu_al < 0x41) goto l__033F;
	emu_addb(&emu_al, 0x85);
	goto l__0345;
l__033F:
	emu_orb(&emu_al, 0x80);
	goto l__0345;
l__0343:
	emu_al = 0x1B;
	goto l__0345;
l__0345:
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function emu_Input_Keyboard_HandleKeys2()
 *
 * @name emu_Input_Keyboard_HandleKeys2
 * @implements 29E8:0479:0009:A77A ()
 * @implements 29E8:0482:0002:2597
 *
 * Called From: B4E6:03D6:000E:C8A0
 * Called From: B527:01CA:0008:8702
 */
void emu_Input_Keyboard_HandleKeys2()
{
l__0479:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(0x0482); emu_Input_Keyboard_HandleKeys();
	goto l__0482;
l__0482:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Input_Keyboard_Translate()
 *
 * @name emu_Input_Keyboard_Translate
 * @implements 29E8:0484:002B:0A28 ()
 * @implements 29E8:04AA:0005:5C4F
 *
 * Called From: 29E8:08C3:0007:D960
 * Called From: 29E8:0E72:000A:53F7
 */
void emu_Input_Keyboard_Translate()
{
l__0484:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_cx);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x700E), 0x2);
	if ((emu_get_memory16(emu_ds, 0x00, 0x700E) & 0x2) == 0) {
		emu_cx = 0x10;
		emu_push(emu_cs);
		emu_pop(&emu_es);
		emu_di = 0x8E;
		emu_repne_scasb();
		if (emu_cx == 0) goto l__04AA;
		emu_di = 0xAE;
		emu_decw(&emu_di);
		emu_subw(&emu_di, emu_cx);
		emu_al = emu_get_memory8(emu_es, emu_di, 0x0);
	}
	goto l__04AA;
l__04AA:
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Input_Flags_SetBits()
 *
 * @name emu_Input_Flags_SetBits
 * @implements 29E8:04AF:003C:ECA0 ()
 * @implements 29E8:04E9:0002:2597
 *
 * Called From: B480:01A2:0012:4C62
 * Called From: B4E0:0017:000D:9EA7
 * Called From: B527:0011:0016:BBD9
 * Called From: B527:0298:000A:B6BD
 */
void emu_Input_Flags_SetBits()
{
l__04AF:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_get_memory16(emu_ds, 0x00, 0x700E), emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x700E);
	emu_testw(&emu_ax, 0x800);
	if ((emu_ax & 0x800) != 0) {
		emu_push(emu_ax);
		emu_push(emu_ds);
		emu_push(emu_cs);
		emu_pop(&emu_ds);
		emu_xorw(&emu_ax, emu_ax);
		emu_get_memory16(emu_cs, 0x00, 0x232) = emu_ax;
		emu_get_memory16(emu_cs, 0x00, 0x234) = emu_ax;
		emu_get_memory16(emu_cs, 0x00, 0x236) = emu_ax;
		emu_get_memory16(emu_cs, 0x00, 0x238) = emu_ax;
		emu_get_memory16(emu_cs, 0x00, 0x23A) = emu_ax;
		emu_get_memory16(emu_cs, 0x00, 0x23C) = emu_ax;
		emu_get_memory16(emu_cs, 0x00, 0x23E) = emu_ax;
		emu_get_memory16(emu_cs, 0x00, 0x240) = emu_ax;
		emu_pop(&emu_ds);
		emu_pop(&emu_ax);
	}
	goto l__04E9;
l__04E9:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Input_Flags_ClearBits()
 *
 * @name emu_Input_Flags_ClearBits
 * @implements 29E8:04EB:0011:9CC8 ()
 *
 * Called From: B4B8:1713:000C:840B
 * Called From: B4E0:013C:0024:0DEA
 * Called From: B527:001B:000A:F6B9
 * Called From: B527:028E:0009:E2B9
 */
void emu_Input_Flags_ClearBits()
{
l__04EB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_notw(&emu_ax, emu_ax);
	emu_andw(&emu_get_memory16(emu_ds, 0x00, 0x700E), emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x700E);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__29E8_04FC_0028_0C66()
 *
 * @name f__29E8_04FC_0028_0C66
 * @implements 29E8:04FC:0028:0C66 ()
 * @implements 29E8:0527:000D:25CF
 * @implements 29E8:0533:0001:6180
 *
 * Called From: 29E8:0648:0008:ED98
 * Called From: 29E8:073B:000F:651A
 * Called From: 29E8:08BC:000A:FC14
 */
void f__29E8_04FC_0028_0C66()
{
l__04FC:
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) == 0x0) goto l__0533;
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x1);
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) == 0x1) goto l__0533;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x701B), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x701B) != 0x0) { /* Unresolved jump */ emu_ip = 0x0524; emu_last_cs = 0x29E8; emu_last_ip = 0x050F; emu_last_length = 0x0028; emu_last_crc = 0x0C66; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7015);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x76A6), emu_ax);
	if (emu_get_memory16(emu_ds, 0x00, 0x76A6) < emu_ax) { /* Unresolved jump */ emu_ip = 0x0524; emu_last_cs = 0x29E8; emu_last_ip = 0x0518; emu_last_length = 0x0028; emu_last_crc = 0x0C66; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7013);
	emu_cmpb(&emu_al, 0x2D);
	if (emu_al != 0x2D) goto l__0527;
	emu_push(0x0524); f__29E8_0534_000E_6213();
	/* Unresolved jump */ emu_ip = 0x0524; emu_last_cs = 0x29E8; emu_last_ip = 0x0524; emu_last_length = 0x0028; emu_last_crc = 0x0C66; emu_call();
l__0527:
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_cs, 0x00, 0x1AF);
	emu_get_memory16(emu_cs, emu_di, 0xAF) = emu_ax;
	emu_pop(&emu_di);
	goto l__0533;
l__0533:

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

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
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) != 0x0) { /* Unresolved jump */ emu_ip = 0x0542; emu_last_cs = 0x29E8; emu_last_ip = 0x053D; emu_last_length = 0x000E; emu_last_crc = 0x6213; emu_call(); return; }
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
 * Decompiled function emu_Input_Keyboard_NextKey()
 *
 * @name emu_Input_Keyboard_NextKey
 * @implements 29E8:0643:0008:ED98 ()
 * @implements 29E8:064B:0059:4AA8
 * @implements 29E8:0650:0054:F944
 * @implements 29E8:0675:002F:0D28
 * @implements 29E8:068A:001A:55A8
 * @implements 29E8:0695:000F:89E5
 * @implements 29E8:06A4:0014:5ACB
 * @implements 29E8:06A6:0012:72C8
 * @implements 29E8:06B8:0008:9049
 * @implements 29E8:06BA:0006:A381
 *
 * Called From: B4BE:001E:0005:20AE
 * Called From: B4BE:01C2:000E:CC0C
 * Called From: B4BE:01DE:0005:20AE
 * Called From: B4BE:02CA:0005:20AE
 * Called From: B4BE:036B:0005:20AE
 * Called From: B4DA:1680:001E:27BA
 * Called From: B4DA:1680:001F:95BA
 * Called From: B4ED:05E3:0005:20AE
 * Called From: B4ED:05E3:000C:1D13
 * Called From: B503:0896:0005:20AE
 * Called From: B503:13C5:0008:C4BB
 * Called From: B518:0511:0005:20AE
 */
void emu_Input_Keyboard_NextKey()
{
l__0643:
	emu_push(emu_cx);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_pushf();
	emu_push(0x064B); f__29E8_04FC_0028_0C66();
	goto l__064B;
l__064B:
	emu_cld();
	emu_ax = emu_cs;
	emu_es = emu_ax;
	goto l__0650;
l__0650:
	emu_cli();
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x1AF);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) == 0x2) { /* Unresolved jump */ emu_ip = 0x0663; emu_last_cs = 0x29E8; emu_last_ip = 0x065A; emu_last_length = 0x0054; emu_last_crc = 0xF944; emu_call(); return; }
	emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x1B1));
	if (emu_ax == emu_get_memory16(emu_cs, 0x00, 0x1B1)) goto l__06A4;
	emu_si = emu_ax;
	emu_ax = emu_get_memory16(emu_cs, emu_si, 0xAF);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) == 0x2) {
		emu_orw(&emu_ax, emu_ax);
		if (emu_ax == 0) goto l__06A6;
	}
	goto l__0675;
l__0675:
	emu_di = 0x260;
	emu_cx = 0xB;
	emu_repne_scasb();
	emu_orw(&emu_cx, emu_cx);
	if (emu_cx == 0) {
		emu_testb(&emu_ah, 0x8);
		if ((emu_ah & 0x8) == 0) {
			emu_cmpb(&emu_al, 0x7A);
			if (emu_al < 0x7A) goto l__06A6;
		}
	}
	goto l__068A;
l__068A:
	emu_cmpb(&emu_al, 0x41);
	if (emu_al >= 0x41) {
		emu_cmpb(&emu_al, 0x44);
		if (emu_al <= 0x44) {
			emu_addw(&emu_si, 0x4);
		}
	}
	goto l__0695;
l__0695:
	emu_addw(&emu_si, 0x2);
	emu_andw(&emu_si, 0xFF);
	emu_get_memory16(emu_cs, 0x00, 0x1AF) = emu_si;
	emu_sti();
	goto l__0650;
l__06A4:
	emu_xorw(&emu_ax, emu_ax);
	goto l__06A6;
l__06A6:
	emu_cx = emu_get_memory16(emu_cs, 0x00, 0x1B5);
	emu_get_memory16(emu_cs, 0x00, 0x1B7) = emu_cx;
	emu_sti();
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__06BA;
	emu_push(0x06B8); emu_Input_Keyboard_HandleKeys();
	goto l__06B8;
l__06B8:
	emu_xorb(&emu_ah, emu_ah);
	goto l__06BA;
l__06BA:
	emu_popf();
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_cx);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
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
	emu_push(0x073E); f__29E8_04FC_0028_0C66();
	goto l__073E;
l__073E:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Input_History_Clear()
 *
 * @name emu_Input_History_Clear
 * @implements 29E8:073F:000E:6816 ()
 *
 * Called From: 10E4:0491:000E:9A5B
 * Called From: 10E4:2285:0007:843A
 * Called From: B495:0786:0007:843A
 * Called From: B4AE:0003:0008:049C
 * Called From: B4B8:2199:0006:8488
 * Called From: B4B8:2199:0005:E089
 * Called From: B4DA:0BEE:003F:C2EE
 * Called From: B4DA:107D:0006:8488
 * Called From: B4DA:148D:0005:E089
 * Called From: B4DA:163F:0017:9D01
 * Called From: B4DA:16AF:0006:8488
 * Called From: B4E0:001D:0006:8488
 * Called From: B4E6:01F5:0005:E089
 * Called From: B4ED:01EF:0006:8488
 * Called From: B503:0281:0008:7A01
 * Called From: B503:0311:0008:2201
 * Called From: B503:0524:0008:4201
 * Called From: B503:07ED:0005:E089
 * Called From: B511:0F92:0005:E089
 * Called From: B511:0F92:000C:C06C
 * Called From: B511:14D3:0008:4201
 * Called From: B518:01DD:0008:2201
 * Called From: B518:0507:0005:E089
 * Called From: B518:051A:0009:6867
 * Called From: B518:083B:000D:2172
 * Called From: B518:0870:0007:843A
 * Called From: B536:008C:0005:E089
 * Called From: B53B:01CC:0008:5201
 */
void emu_Input_History_Clear()
{
l__073F:
	emu_push(emu_ax);
	emu_pushf();
	emu_cli();
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x1AF);
	emu_get_memory16(emu_cs, 0x00, 0x1B1) = emu_ax;
	emu_popf();
	emu_pop(&emu_ax);

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
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) == 0x2) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7013);
	}
	goto l__0765;
l__0765:
	emu_get_memory16(emu_ds, 0x00, 0x7013) = emu_ax;
	emu_addw(&emu_di, 0x2);
	emu_andw(&emu_di, 0xFF);
	emu_cmpb(&emu_al, 0x41);
	if (emu_al < 0x41) goto l__07EB;
	emu_cmpb(&emu_al, 0x42);
	if (emu_al > 0x42) goto l__07B3;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_cs, emu_di, 0xAF);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) == 0x2) {
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
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) == 0x2) {
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
	if (emu_al <= 0x44) {
		emu_push(emu_ax);
		emu_ax = emu_get_memory16(emu_cs, emu_di, 0xAF);
		emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
		if (emu_get_memory8(emu_ds, 0x00, 0x7010) != 0x2) { /* Unresolved jump */ emu_ip = 0x07C7; emu_last_cs = 0x29E8; emu_last_ip = 0x07C2; emu_last_length = 0x0047; emu_last_crc = 0x79F3; emu_call(); return; }
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7017);
		emu_get_memory16(emu_ds, 0x00, 0x7017) = emu_ax;
		emu_addw(&emu_di, 0x2);
		emu_andw(&emu_di, 0xFF);
		emu_ax = emu_get_memory16(emu_cs, emu_di, 0xAF);
		emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
		if (emu_get_memory8(emu_ds, 0x00, 0x7010) != 0x2) { /* Unresolved jump */ emu_ip = 0x07E0; emu_last_cs = 0x29E8; emu_last_ip = 0x07DB; emu_last_length = 0x0047; emu_last_crc = 0x79F3; emu_call(); return; }
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7019);
		emu_get_memory16(emu_ds, 0x00, 0x7019) = emu_ax;
		emu_addw(&emu_di, 0x2);
		emu_andw(&emu_di, 0xFF);
		emu_pop(&emu_ax);
	}
	goto l__07EB;
l__07EB:
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) == 0x2) { /* Unresolved jump */ emu_ip = 0x07F7; emu_last_cs = 0x29E8; emu_last_ip = 0x07F0; emu_last_length = 0x000F; emu_last_crc = 0x32F6; emu_call(); return; }
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
 * Called From: B536:0091:0005:B085
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
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) == 0x2) goto l__081A;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x1AF);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x1B1));
	if (emu_ax != emu_get_memory16(emu_cs, 0x00, 0x1B1)) goto l__081A;
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
	if (emu_cx != 0) goto l__0804;
	emu_testb(&emu_ah, 0x8);
	if ((emu_ah & 0x8) != 0) goto l__0804;
	emu_cmpb(&emu_al, 0x7A);
	if (emu_al >= 0x7A) goto l__0804;
	emu_push(0x0840); emu_Input_Keyboard_HandleKeys();
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
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) == 0x2) goto l__08AD;
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x1AF);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_cs, 0x00, 0x1B1));
	if (emu_ax != emu_get_memory16(emu_cs, 0x00, 0x1B1)) goto l__08AD;
	emu_sti();
	goto l__0897;
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
	emu_push(0x08BF); f__29E8_04FC_0028_0C66();
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
	if ((emu_al & 0x40) != 0) {
		emu_orw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x1);
	}
	goto l__0989;
l__0989:
	emu_testb(&emu_al, 0x20);
	if ((emu_al & 0x20) != 0) {
		emu_orw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x2);
	}
	goto l__0993;
l__0993:
	emu_testb(&emu_al, 0x2);
	if ((emu_al & 0x2) != 0) {
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
	if ((emu_al & 0x8) != 0) {
		emu_orb(&emu_ah, 0x40);
	}
	goto l__09BA;
l__09BA:
	emu_get_memory8(emu_cs, 0x00, 0x239) = emu_ah;
	emu_testb(&emu_al, 0x4);
	if ((emu_al & 0x4) != 0) {
		emu_orb(&emu_get_memory8(emu_cs, 0x00, 0x23A), 0x1);
	}
	goto l__09C9;
l__09C9:
	emu_testb(&emu_al, 0x2);
	if ((emu_al & 0x2) != 0) {
		emu_get_memory8(emu_cs, 0x00, 0x256) = 0x1;
	}
	goto l__09D3;
l__09D3:
	emu_testb(&emu_al, 0x1);
	if ((emu_al & 0x1) != 0) {
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
 * Decompiled function emu_Input_History_Add()
 *
 * @name emu_Input_History_Add
 * @implements 29E8:0A19:002A:2DE6 ()
 * @implements 29E8:0A43:0007:9B22
 *
 * Called From: 29E8:0C4F:0012:D969
 * Called From: 29E8:0C73:0009:DC81
 * Called From: 29E8:0C87:0014:0C0D
 */
void emu_Input_History_Add()
{
l__0A19:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_bx);
	emu_ax = emu_get_memory16(emu_cs, 0x00, 0x1B1);
	emu_si = emu_ax;
	emu_addw(&emu_ax, 0x2);
	emu_andw(&emu_ax, 0xFF);
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x1AF), emu_ax);
	if (emu_get_memory16(emu_cs, 0x00, 0x1AF) == emu_ax) goto l__0A43;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_cs, emu_si, 0xAF) = emu_bx;
	emu_get_memory16(emu_cs, 0x00, 0x1B1) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_pop(&emu_bx);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
l__0A43:
	emu_ax = 0x1;
	emu_pop(&emu_bx);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Input_HandleInput()
 *
 * @name emu_Input_HandleInput
 * @implements 29E8:0A4A:0040:5428 ()
 * @implements 29E8:0A8A:000A:EB53
 * @implements 29E8:0AD6:0010:7A1F
 * @implements 29E8:0C40:0012:D969
 * @implements 29E8:0C52:0018:DE31
 * @implements 29E8:0C6A:0003:1D11
 * @implements 29E8:0C6D:0009:DC81
 * @implements 29E8:0C76:0014:0C0D
 * @implements 29E8:0C8A:0099:E45D
 * @implements 29E8:0C95:008E:26E3
 * @implements 29E8:0CBB:0068:44F0
 * @implements 29E8:0CC0:0063:A66A
 * @implements 29E8:0CE7:003C:E58A
 * @implements 29E8:0D2C:0005:D17A
 * @implements 29E8:0D31:0016:113C
 * @implements 29E8:0D3A:000D:2768
 *
 * Called From: 10E4:04B4:0019:D8B6
 * Called From: 29A3:00B4:0009:B56A
 * Called From: 29E8:0EFE:0005:C212
 * Called From: B4E0:03FF:000A:A623
 * Called From: B4E0:0409:000A:A523
 */
void emu_Input_HandleInput()
{
l__0A4A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_pushf();
	emu_cli();
	emu_ax = 0x353F;
	emu_ds = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x700E);
	emu_get_memory16(emu_cs, 0x00, 0x1B3) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7060);
	emu_get_memory16(emu_cs, 0x00, 0xA98) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7062);
	emu_get_memory16(emu_cs, 0x00, 0xA9A) = emu_ax;
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x1);
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) != 0x1) goto l__0A8A;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x4;
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x986C), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x986C) == 0x0) goto l__0A8A;
	goto l__0D3A;
l__0A8A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0AD6;
	goto l__0D3A;
l__0AD6:
	emu_push(emu_ds);
	emu_pop(&emu_es);
	emu_push(emu_cs);
	emu_pop(&emu_ds);
	emu_testw(&emu_get_memory16(emu_cs, 0x00, 0x1B3), 0x1000);
	if ((emu_get_memory16(emu_cs, 0x00, 0x1B3) & 0x1000) != 0) { /* Unresolved jump */ emu_ip = 0x0AE6; emu_last_cs = 0x29E8; emu_last_ip = 0x0AE1; emu_last_length = 0x0010; emu_last_crc = 0x7A1F; emu_call(); return; }
	goto l__0C40;
l__0C40:
	emu_si = emu_get_memory16(emu_cs, 0x00, 0x1B1);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_si;
	emu_di = emu_get_memory16(emu_cs, 0x00, 0x1AF);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0C52); emu_Input_History_Add();
	goto l__0C52;
l__0C52:
	emu_addw(&emu_sp, 0x2);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0C6A;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpb(&emu_al, 0x2D);
	if (emu_al == 0x2D) goto l__0C6D;
	emu_cmpb(&emu_al, 0x41);
	if (emu_al == 0x41) goto l__0C6D;
	emu_cmpb(&emu_al, 0x42);
	if (emu_al == 0x42) goto l__0C6D;
	goto l__0C95;
l__0C6A:
	goto l__0D31;
l__0C6D:
	emu_push(emu_get_memory16(emu_cs, 0x00, 0xA98));
	emu_push(emu_cs);
	emu_push(0x0C76); emu_Input_History_Add();
	goto l__0C76;
l__0C76:
	emu_addw(&emu_sp, 0x2);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0C6A;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_push(emu_get_memory16(emu_cs, 0x00, 0xA9A));
	emu_push(emu_cs);
	emu_push(0x0C8A); emu_Input_History_Add();
	goto l__0C8A;
l__0C8A:
	emu_addw(&emu_sp, 0x2);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0C6A;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	goto l__0C95;
l__0C95:
	emu_bx = 0x101;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpb(&emu_al, 0x2D);
	if (emu_al != 0x2D) {
		emu_cmpb(&emu_al, 0x7F);
		if (emu_al != 0x7F) {
			emu_testb(&emu_ah, 0x8);
			if ((emu_ah & 0x8) == 0) goto l__0CC0;
			emu_xorb(&emu_bl, emu_bl);
			emu_testw(&emu_get_memory16(emu_cs, 0x00, 0x1B3), 0x800);
			if ((emu_get_memory16(emu_cs, 0x00, 0x1B3) & 0x800) != 0) goto l__0CC0;
			emu_cmpb(&emu_al, 0x41);
			if (emu_al == 0x41) goto l__0CC0;
			emu_cmpb(&emu_al, 0x42);
			if (emu_al == 0x42) goto l__0CC0;
		}
	}
	goto l__0CBB;
l__0CBB:
	emu_get_memory16(emu_cs, 0x00, 0x1B1) = emu_si;
	goto l__0CC0;
l__0CC0:
	emu_di = emu_ax;
	emu_andw(&emu_di, 0x7F);
	emu_cl = 0x3;
	emu_shrw(&emu_di, emu_cl);
	emu_cl = emu_al;
	emu_andb(&emu_cl, 0x7);
	emu_shlw(&emu_bx, emu_cl);
	emu_notb(&emu_bh, emu_bh);
	emu_testb(&emu_bl, emu_get_memory8(emu_cs, emu_di, 0x232));
	if ((emu_bl & emu_get_memory8(emu_cs, emu_di, 0x232)) != 0) {
		emu_testw(&emu_get_memory16(emu_cs, 0x00, 0x1B3), 0x1);
		if ((emu_get_memory16(emu_cs, 0x00, 0x1B3) & 0x1) == 0) {
			emu_get_memory16(emu_cs, 0x00, 0x1B1) = emu_si;
		}
	}
	goto l__0CE7;
l__0CE7:
	emu_andb(&emu_get_memory8(emu_cs, emu_di, 0x232), emu_bh);
	emu_orb(&emu_get_memory8(emu_cs, emu_di, 0x232), emu_bl);
	emu_ax = 0x353F;
	emu_ds = emu_ax;
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x1);
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) != 0x1) goto l__0D2C;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpb(&emu_al, 0x7D);
	if (emu_al == 0x7D) goto l__0D2C;
	emu_get_memory16(emu_cs, 0x00, 0xA94) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76A6);
	emu_get_memory16(emu_cs, 0x00, 0xA96) = emu_ax;
	emu_xorw(&emu_cx, emu_cx);
	emu_push(emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_bx = 0xA94;
	emu_push(emu_bx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7011));
	emu_push(emu_cs); emu_push(0x0D23); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Unresolved jump */ emu_ip = 0x0D23; emu_last_cs = 0x29E8; emu_last_ip = 0x0D23; emu_last_length = 0x003C; emu_last_crc = 0xE58A; emu_call();
l__0D2C:
	emu_ax = 0x1;
	goto l__0D3A;
l__0D31:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_get_memory16(emu_cs, 0x00, 0x1B1) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	goto l__0D3A;
l__0D3A:
	emu_popf();
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Input_Keyboard_EventHandler()
 *
 * @name emu_Input_Keyboard_EventHandler
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
void emu_Input_Keyboard_EventHandler()
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
	if ((emu_get_memory8(emu_es, 0x00, 0x17) & 0x40) != 0) {
		emu_orw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x1);
	}
	goto l__0D69;
l__0D69:
	emu_testb(&emu_get_memory8(emu_es, 0x00, 0x17), 0x20);
	if ((emu_get_memory8(emu_es, 0x00, 0x17) & 0x20) != 0) {
		emu_orw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x2);
	}
	goto l__0D77;
l__0D77:
	emu_get_memory8(emu_cs, 0x00, 0xAE) = 0x1;
	emu_testb(&emu_get_memory8(emu_es, 0x00, 0x96), 0x10);
	if ((emu_get_memory8(emu_es, 0x00, 0x96) & 0x10) != 0) { /* Unresolved jump */ emu_ip = 0x0D8B; emu_last_cs = 0x29E8; emu_last_ip = 0x0D83; emu_last_length = 0x0066; emu_last_crc = 0x8FA5; emu_call(); return; }
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
	if (emu_al == 0xE1) {
		emu_get_memory8(emu_cs, 0x00, 0x257) = 0x3;
	}
	goto l__0DC7;
l__0DC7:
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00, 0x257), 0x0);
	if (emu_get_memory8(emu_cs, 0x00, 0x257) == 0x0) goto l__0DE0;
	emu_decb(&emu_get_memory8(emu_cs, 0x00, 0x257));
	emu_testw(&emu_dx, 0x80);
	if ((emu_dx & 0x80) == 0) { /* Unresolved jump */ emu_ip = 0x0DDD; emu_last_cs = 0x29E8; emu_last_ip = 0x0DD8; emu_last_length = 0x0016; emu_last_crc = 0x492E; emu_call(); return; }
	goto l__0F3C;
l__0DE0:
	emu_cmpb(&emu_al, 0xE0);
	if (emu_al != 0xE0) goto l__0DED;
	emu_get_memory8(emu_cs, 0x00, 0x256) = 0x1;
	goto l__0F3C;
l__0DED:
	emu_testb(&emu_al, 0x80);
	if ((emu_al & 0x80) != 0) {
		emu_xorb(&emu_bl, emu_bl);
		emu_andb(&emu_al, 0x7F);
		emu_orb(&emu_ah, 0x8);
	}
	goto l__0DF8;
l__0DF8:
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00, 0x256), 0x0);
	if (emu_get_memory8(emu_cs, 0x00, 0x256) == 0x0) goto l__0E26;
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
	if (emu_al != 0x7A) goto l__0E2E;
	emu_al = 0x80;
	/* Unresolved jump */ emu_ip = 0x0E38; emu_last_cs = 0x29E8; emu_last_ip = 0x0E2C; emu_last_length = 0x0008; emu_last_crc = 0x3DE4; emu_call();
l__0E2E:
	emu_di = emu_ax;
	emu_andw(&emu_di, 0x7F);
	emu_al = emu_get_memory8(emu_cs, emu_di, 0x1B9);
	emu_testb(&emu_get_memory8(emu_cs, 0x00, 0x23A), 0x1);
	if ((emu_get_memory8(emu_cs, 0x00, 0x23A) & 0x1) != 0) { /* Unresolved jump */ emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E3E; emu_last_length = 0x002F; emu_last_crc = 0x9EC9; emu_call(); return; }
	emu_testb(&emu_get_memory8(emu_cs, 0x00, 0x239), 0x4);
	if ((emu_get_memory8(emu_cs, 0x00, 0x239) & 0x4) == 0) goto l__0E60;
	emu_cmpb(&emu_al, 0x5A);
	if (emu_al != 0x5A) { /* Unresolved jump */ emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E4A; emu_last_length = 0x002F; emu_last_crc = 0x9EC9; emu_call(); return; }
	emu_cmpb(&emu_get_memory8(emu_cs, 0x00, 0xAE), 0x1);
	if (emu_get_memory8(emu_cs, 0x00, 0xAE) == 0x1) { /* Unresolved jump */ emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E52; emu_last_length = 0x002F; emu_last_crc = 0x9EC9; emu_call(); return; }
	emu_testw(&emu_dx, 0x80);
	if ((emu_dx & 0x80) != 0) { /* Unresolved jump */ emu_ip = 0x0E5D; emu_last_cs = 0x29E8; emu_last_ip = 0x0E58; emu_last_length = 0x002F; emu_last_crc = 0x9EC9; emu_call(); return; }
	goto l__0F4E;
l__0E60:
	emu_testb(&emu_get_memory8(emu_cs, 0x00, 0x239), 0x50);
	if ((emu_get_memory8(emu_cs, 0x00, 0x239) & 0x50) != 0) {
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
	if ((emu_get_memory8(emu_cs, 0x00, 0x237) & 0x10) != 0) { /* Unresolved jump */ emu_ip = 0x0E8A; emu_last_cs = 0x29E8; emu_last_ip = 0x0E80; emu_last_length = 0x008C; emu_last_crc = 0x16C3; emu_call(); return; }
	emu_testb(&emu_get_memory8(emu_cs, 0x00, 0x239), 0x2);
	if ((emu_get_memory8(emu_cs, 0x00, 0x239) & 0x2) != 0) {
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
	if ((emu_get_memory16(emu_cs, 0x00, 0x1B5) & 0x1) != 0) {
		emu_testb(&emu_ch, emu_get_memory8(emu_cs, emu_di, 0x212));
		if ((emu_ch & emu_get_memory8(emu_cs, emu_di, 0x212)) != 0) {
			emu_xorb(&emu_ah, 0x1);
		}
	}
	goto l__0EB8;
l__0EB8:
	emu_testw(&emu_get_memory16(emu_cs, 0x00, 0x1B5), 0x2);
	if ((emu_get_memory16(emu_cs, 0x00, 0x1B5) & 0x2) != 0) {
		emu_testb(&emu_ch, emu_get_memory8(emu_cs, emu_di, 0x222));
		if ((emu_ch & emu_get_memory8(emu_cs, emu_di, 0x222)) != 0) {
			emu_xorb(&emu_ah, 0x1);
		}
	}
	goto l__0ECB;
l__0ECB:
	emu_get_memory8(emu_cs, 0x00, 0x26B) = emu_ah;
	emu_cmpw(&emu_ax, 0x668);
	if (emu_ax == 0x668) goto l__0F3C;
	emu_cmpw(&emu_ax, 0x64C);
	if (emu_ax == 0x64C) goto l__0F3C;
	emu_cmpw(&emu_ax, 0x420);
	if (emu_ax == 0x420) {
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
	if (emu_ax == 0x434) {
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
	emu_push(0x0F01); emu_Input_HandleInput();
	goto l__0F01;
l__0F01:
	emu_pop(&emu_ax);
	emu_cmpb(&emu_al, 0x6E);
	if (emu_al != 0x6E) goto l__0F15;
	emu_cmpw(&emu_get_memory16(emu_cs, 0x00, 0x7C), 0x0);
	if (emu_get_memory16(emu_cs, 0x00, 0x7C) == 0x0) goto l__0F15;
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
	if (emu_cx == 0) {
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
	if ((emu_dx & 0x4) == 0) goto l__0F4E;
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
