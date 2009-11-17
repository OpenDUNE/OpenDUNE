/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__15C2_000B_000E_6322()
 *
 * @name f__15C2_000B_000E_6322
 * @implements 15C2:000B:000E:6322 ()
 * @implements 15C2:0019:0025:CD91
 * @implements 15C2:0040:001D:0028
 * @implements 15C2:005D:001F:81D4
 * @implements 15C2:007C:0030:33CA
 * @implements 15C2:007E:002E:8193
 *
 * Called From: 15C2:00D2:000A:E8D9
 * Called From: B491:0D34:000D:B58B
 * Called From: B491:0D40:000C:7254
 */
void f__15C2_000B_000E_6322()
{
l__000B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0019;
	/* Unresolved jump */ emu_ip = 0x00AA; emu_last_cs = 0x15C2; emu_last_ip = 0x0016; emu_last_length = 0x000E; emu_last_crc = 0x6322; emu_call();
l__0019:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x14), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x14) == 0x0) goto l__007E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	if (emu_ax == 0) goto l__0040;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x003E); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Unresolved jump */ emu_ip = 0x003E; emu_last_cs = 0x15C2; emu_last_ip = 0x003E; emu_last_length = 0x0025; emu_last_crc = 0xCD91; emu_call();
l__0040:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xA));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x005F; emu_last_cs = 0x15C2; emu_last_ip = 0x004B; emu_last_length = 0x001D; emu_last_crc = 0x0028; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_push(emu_cs); emu_push(0x005D); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
l__005D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	if (emu_ax == 0) goto l__007E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_push(emu_cs); emu_push(0x007C); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
l__007C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__007E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x2) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0xA) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x8) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x6) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x4) = 0x0;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__15C2_00AC_0015_2FBF()
 *
 * @name f__15C2_00AC_0015_2FBF
 * @implements 15C2:00AC:0015:2FBF ()
 * @implements 15C2:00BE:0003:9C13
 * @implements 15C2:00C1:000A:D449
 * @implements 15C2:00CB:000A:E8D9
 * @implements 15C2:00D5:001E:CD33
 * @implements 15C2:00F3:0024:0D45
 * @implements 15C2:00F5:0022:2546
 * @implements 15C2:0117:0009:B6AB
 * @implements 15C2:0120:000B:4489
 * @implements 15C2:012B:0012:38D0
 * @implements 15C2:013D:0049:3C82
 * @implements 15C2:01C3:000E:D267
 * @implements 15C2:01D1:0020:DCD5
 * @implements 15C2:01F1:002D:3393
 * @implements 15C2:021E:000F:92A6
 * @implements 15C2:022D:003E:C2E2
 * @implements 15C2:023B:0030:B965
 * @implements 15C2:026B:0007:ED2C
 * @implements 15C2:0272:0015:F826
 * @implements 15C2:0287:002E:175A
 * @implements 15C2:0299:001C:84E5
 * @implements 15C2:02B5:0020:DC54
 * @implements 15C2:02D5:002D:33F5
 * @implements 15C2:0302:000F:92A6
 * @implements 15C2:0311:002D:06F2
 * @implements 15C2:031F:001F:C809
 * @implements 15C2:033E:0016:43F5
 * @implements 15C2:036A:0002:CB3A
 * @implements 15C2:0382:0006:46FE
 * @implements 15C2:0388:0007:0D24
 * @implements 15C2:038F:0006:F7CE
 *
 * Called From: B4B8:22C7:001F:5CD7
 */
void f__15C2_00AC_0015_2FBF()
{
l__00AC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax != 0) goto l__00C1;
	emu_xorw(&emu_ax, emu_ax);
l__00BE:
	goto l__038F;
l__00C1:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__00CB;
	/* Unresolved jump */ emu_ip = 0x00BC; emu_last_cs = 0x15C2; emu_last_ip = 0x00C9; emu_last_length = 0x000A; emu_last_crc = 0xD449; emu_call();
l__00CB:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x00D5); f__15C2_000B_000E_6322();
l__00D5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_es);
	emu_push(emu_bx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_ax != 0) goto l__00F3;
	emu_ax = 0x1;
	goto l__00F5;
l__00F3:
	emu_xorw(&emu_ax, emu_ax);
l__00F5:
	emu_pop(&emu_bx);
	emu_pop(&emu_es);
	emu_get_memory16(emu_es, emu_bx, 0x14) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_es, emu_bx, 0x12) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x10) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0117); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
l__0117:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0120;
	/* Unresolved jump */ emu_ip = 0x0389; emu_last_cs = 0x15C2; emu_last_ip = 0x011D; emu_last_length = 0x0009; emu_last_crc = 0xB6AB; emu_call();
l__0120:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x012B); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0000_0016_067A();
l__012B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_ax = 0x5458;
	emu_dx = 0x4554;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x013D); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0098_002A_CE8A();
l__013D:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__01C3;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0186; emu_last_cs = 0x15C2; emu_last_ip = 0x0160; emu_last_length = 0x0049; emu_last_crc = 0x3C82; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x14);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x14);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_get_memory16(emu_ss, emu_bp,  0x14) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp,  0x12) = emu_dx;
	/* Unresolved jump */ emu_ip = 0x01A2; emu_last_cs = 0x15C2; emu_last_ip = 0x0184; emu_last_length = 0x0049; emu_last_crc = 0x3C82; emu_call();
l__01C3:
	emu_ax = 0x5244;
	emu_dx = 0x524F;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01D1); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0098_002A_CE8A();
l__01D1:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__01F1;
	/* Unresolved jump */ emu_ip = 0x036C; emu_last_cs = 0x15C2; emu_last_ip = 0x01EE; emu_last_length = 0x0020; emu_last_crc = 0xDCD5; emu_call();
l__01F1:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_ax == 0) goto l__021E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x14);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x14);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_get_memory16(emu_ss, emu_bp,  0x14) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp,  0x12) = emu_dx;
	goto l__023B;
l__021E:
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x022D); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
l__022D:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_ax;
l__023B:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_shrw(&emu_ax, 0x1);
	emu_rcrw(&emu_dx, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_ax = 0x5244;
	emu_dx = 0x524F;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x026B); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_01CD_002A_CE8A();
l__026B:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_di, emu_di);
	goto l__0299;
l__0272:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_ax = emu_di;
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0287); emu_cs = 0x2BC0; f__2BC0_0013_000A_39BD();
l__0287:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_dx = emu_di;
	emu_shlw(&emu_dx, 0x1);
	emu_addw(&emu_bx, emu_dx);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_incw(&emu_di);
l__0299:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_shrw(&emu_ax, 0x1);
	emu_rcrw(&emu_dx, 0x1);
	emu_cmpw(&emu_dx, emu_di);
	if ((int16)emu_dx > (int16)emu_di) goto l__0272;
	emu_ax = 0x4154;
	emu_dx = 0x4144;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02B5); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0098_002A_CE8A();
l__02B5:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__02D5;
	/* Unresolved jump */ emu_ip = 0x0354; emu_last_cs = 0x15C2; emu_last_ip = 0x02D2; emu_last_length = 0x0020; emu_last_crc = 0xDC54; emu_call();
l__02D5:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_ax == 0) goto l__0302;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x14);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x14);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_get_memory16(emu_ss, emu_bp,  0x14) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp,  0x12) = emu_dx;
	goto l__031F;
l__0302:
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0311); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
l__0311:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_ax;
l__031F:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_ax = 0x4154;
	emu_dx = 0x4144;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x033E); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_01CD_002A_CE8A();
l__033E:
	emu_addw(&emu_sp, 0xE);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_shrw(&emu_ax, 0x1);
	emu_rcrw(&emu_dx, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_dx;
	goto l__036A;
l__036A:
	goto l__0382;
l__0382:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0388); emu_cs = 0x34B1; overlay(0x34B1, 0); f__B4B1_0082_0012_D287();
l__0388:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	goto l__00BE;
l__038F:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Script_Reset()
 *
 * @name emu_Script_Reset
 * @implements 15C2:0395:0044:304E ()
 *
 * Called From: 0972:0A15:001C:5B8B
 * Called From: 0C3A:0640:002B:9E18
 * Called From: 0C3A:0640:0039:762F
 * Called From: 0C3A:067D:003D:0EC1
 * Called From: 0C3A:0E89:002F:78FA
 * Called From: 0FE4:057B:0018:8258
 * Called From: 104B:02BE:0064:D684
 * Called From: 1082:0338:0018:025E
 * Called From: 15C2:0417:0015:C65E
 * Called From: 16C5:09FD:003E:31D6
 * Called From: 16C5:0A55:003A:2375
 * Called From: 176C:00B4:003E:BA74
 * Called From: 1A34:0A77:0078:30A2
 * Called From: 1A34:0A77:00A3:1334
 * Called From: 1A34:1167:0017:75C8
 * Called From: 1A34:2AE7:001F:0A02
 */
void emu_Script_Reset()
{
l__0395:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x03D7; emu_last_cs = 0x15C2; emu_last_ip = 0x039E; emu_last_length = 0x0044; emu_last_crc = 0x304E; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x2) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x34) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0xA) = 0x11;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0xB) = 0xF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_dx;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Script_Load()
 *
 * @name emu_Script_Load
 * @implements 15C2:03D9:0011:D202 ()
 * @implements 15C2:03EA:001B:2DB8
 * @implements 15C2:0405:0015:C65E
 * @implements 15C2:041A:0032:6C7D
 * @implements 15C2:0447:0005:8BCF
 *
 * Called From: 0972:0A32:001D:C13E
 * Called From: 0C3A:0698:001B:2708
 * Called From: 0C3A:0EA4:001B:2708
 * Called From: 104B:02D1:0013:8AC5
 * Called From: 16C5:0A11:0014:245A
 * Called From: 16C5:0A70:001B:990F
 * Called From: 176C:00D9:0025:6898
 * Called From: B511:026B:0018:7FFC
 */
void emu_Script_Load()
{
l__03D9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__03EA;
	goto l__0447;
l__03EA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__0405;
	goto l__0447;
l__0405:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x041A); emu_Script_Reset();
l__041A:
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_addw(&emu_bx, emu_ax);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_si, 0x2) = emu_dx;
	emu_get_memory16(emu_es, emu_si, 0x0) = emu_bx;
l__0447:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__15C2_0526_000F_EA1E()
 *
 * @name f__15C2_0526_000F_EA1E
 * @implements 15C2:0526:000F:EA1E ()
 * @implements 15C2:0531:0004:F939
 * @implements 15C2:0533:0002:D13A
 * @implements 15C2:0535:000E:4CCF
 * @implements 15C2:0543:000F:0F10
 * @implements 15C2:0552:0005:BBFA
 * @implements 15C2:0557:0002:2597
 *
 * Called From: 0972:095A:0010:E581
 * Called From: 16C5:009D:002F:03B8
 * Called From: 176C:06C2:0010:03D5
 */
void f__15C2_0526_000F_EA1E()
{
l__0526:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0535;
l__0531:
	emu_xorw(&emu_ax, emu_ax);
l__0533:
	goto l__0557;
l__0535:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	if (emu_ax != 0) goto l__0543;
	goto l__0531;
l__0543:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	if (emu_ax != 0) goto l__0552;
	goto l__0531;
l__0552:
	emu_ax = 0x1;
	goto l__0533;
l__0557:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Script_Run()
 *
 * @name emu_Script_Run
 * @implements 15C2:0559:0015:E98A ()
 * @implements 15C2:0569:0005:DFB5
 * @implements 15C2:056B:0003:DE21
 * @implements 15C2:056E:000E:4D4F
 * @implements 15C2:057C:001E:C033
 * @implements 15C2:059A:002D:D911
 * @implements 15C2:05C7:0012:F9D4
 * @implements 15C2:05D9:0025:FC39
 * @implements 15C2:05FE:000F:DE98
 * @implements 15C2:0602:000B:511E
 * @implements 15C2:060D:0007:AD99
 * @implements 15C2:0614:0023:B451
 * @implements 15C2:0637:000D:44D9
 * @implements 15C2:0644:000F:C918
 * @implements 15C2:0653:0028:E5FE
 * @implements 15C2:067B:0027:82B4
 * @implements 15C2:06A2:005B:8E2E
 * @implements 15C2:06FD:0011:8B08
 * @implements 15C2:070E:0003:9F37
 * @implements 15C2:0711:0022:4857
 * @implements 15C2:0733:002A:1080
 * @implements 15C2:075D:003B:FB79
 * @implements 15C2:0776:0022:68A7
 * @implements 15C2:0798:0017:8BAD
 * @implements 15C2:07AF:000F:0913
 * @implements 15C2:07BE:0020:0D93
 * @implements 15C2:07DE:000D:7E3C
 * @implements 15C2:07EB:005A:C12B
 * @implements 15C2:0848:0003:1CA9
 * @implements 15C2:084B:0028:447C
 * @implements 15C2:0873:0039:8805
 * @implements 15C2:08A4:0008:9D67
 * @implements 15C2:08AC:0035:9410
 * @implements 15C2:08D9:0008:8274
 * @implements 15C2:08E1:000D:D331
 * @implements 15C2:08EE:000D:330C
 * @implements 15C2:08FB:003A:D1E0
 * @implements 15C2:0935:000C:28E9
 * @implements 15C2:0941:0042:A7C5
 * @implements 15C2:0980:0003:1D9B
 * @implements 15C2:0983:002A:5FB4
 * @implements 15C2:09AD:000B:646D
 * @implements 15C2:09C4:0003:E3AD
 * @implements 15C2:09C7:001F:7DFA
 * @implements 15C2:09E6:003C:4EA7
 * @implements 15C2:0A22:0007:ADA0
 * @implements 15C2:0A29:000F:0A95
 * @implements 15C2:0A38:0007:593D
 * @implements 15C2:0A3A:0005:5958
 * @implements 15C2:0A3F:000F:0245
 * @implements 15C2:0A49:0005:D4FA
 * @implements 15C2:0A4E:0004:9C39
 * @implements 15C2:0A50:0002:B43A
 * @implements 15C2:0A52:000A:36EB
 * @implements 15C2:0A5C:0004:8539
 * @implements 15C2:0A5E:0002:AD3A
 * @implements 15C2:0A60:000A:36E9
 * @implements 15C2:0A6A:0004:8E39
 * @implements 15C2:0A6C:0002:A63A
 * @implements 15C2:0A6E:000A:36FB
 * @implements 15C2:0A78:0004:B739
 * @implements 15C2:0A7A:0002:9F3A
 * @implements 15C2:0A7C:000A:36FF
 * @implements 15C2:0A86:0004:B039
 * @implements 15C2:0A88:0002:983A
 * @implements 15C2:0A8A:000A:36FD
 * @implements 15C2:0A94:0004:B939
 * @implements 15C2:0A96:0002:913A
 * @implements 15C2:0A98:000A:36F9
 * @implements 15C2:0AA2:0004:A239
 * @implements 15C2:0AA4:0002:8A3A
 * @implements 15C2:0AA6:0007:E0B3
 * @implements 15C2:0AAD:0007:E473
 * @implements 15C2:0AB4:0008:374F
 * @implements 15C2:0AC5:000A:6C11
 * @implements 15C2:0AFB:0003:A09F
 * @implements 15C2:0AFE:001E:19F9
 * @implements 15C2:0B6C:0003:E083
 * @implements 15C2:0B6F:0006:0197
 * @implements 15C2:0B75:0006:F7CE
 *
 * Called From: 0972:09BD:0010:1586
 * Called From: 0972:09D6:0010:1586
 * Called From: 0972:09EF:0010:1586
 * Called From: 16C5:00EA:0010:2718
 * Called From: 176C:075B:0010:F3D2
 * Called From: 176C:075B:0040:2E37
 */
void emu_Script_Run()
{
l__0559:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__056E;
l__0569:
	emu_xorw(&emu_ax, emu_ax);
l__056B:
	goto l__0B75;
l__056E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	if (emu_ax != 0) goto l__057C;
	goto l__0569;
l__057C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x2);
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x059A); emu_cs = 0x2BC0; f__2BC0_0013_000A_39BD();
l__059A:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cl = 0x8;
	emu_shrw(&emu_ax, emu_cl);
	emu_andw(&emu_ax, 0x1F);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8000);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0x8000) == 0) goto l__05C7;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_andw(&emu_ax, 0x7FFF);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	goto l__0602;
l__05C7:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4000);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0x4000) == 0) goto l__05D9;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_andb(&emu_al, 0xFF);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	goto l__0602;
l__05D9:
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2000);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0x2000) == 0) goto l__0602;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x2);
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x05FE); emu_cs = 0x2BC0; f__2BC0_0013_000A_39BD();
l__05FE:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
l__0602:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_bx, 0x12);
	if (emu_bx <= 0x12) goto l__060D;
	goto l__0B6C;
l__060D:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0xB9F);
	switch (emu_ip) {
		case 0x0614: goto l__0614;
		case 0x0637: goto l__0637;
		case 0x0644: goto l__0644;
		case 0x0711: goto l__0711;
		case 0x0733: goto l__0733;
		case 0x075D: goto l__075D;
		case 0x0798: goto l__0798;
		case 0x07AF: goto l__07AF;
		case 0x084B: goto l__084B;
		case 0x0873: goto l__0873;
		case 0x08AC: goto l__08AC;
		case 0x08E1: goto l__08E1;
		case 0x08EE: goto l__08EE;
		case 0x08FB: goto l__08FB;
		case 0x0941: goto l__0941;
		case 0x0983: goto l__0983;
		case 0x09E6: goto l__09E6;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x15C2; emu_last_ip = 0x060F; emu_last_length = 0x0007; emu_last_crc = 0xAD99;
			emu_call();
			return;
	}
l__0614:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_shlw(&emu_bx, 0x1);
	emu_addw(&emu_dx, emu_bx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
	goto l__0B6F;
l__0637:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_ax;
	goto l__0B6F;
l__0644:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0653;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__067B;
	goto l__06FD;
l__0653:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_decb(&emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0xB) = emu_al;
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x8);
	emu_pop(&emu_es);
	emu_get_memory16(emu_es, emu_bx, 0x16) = emu_ax;
	goto l__070E;
l__067B:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x2;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_subw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x06A2); emu_cs = 0x01F7; f__01F7_04E0_0004_E219();
l__06A2:
	emu_incw(&emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_dl = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_decb(&emu_dl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_get_memory8(emu_es, emu_bx, 0xB) = emu_dl;
	emu_al = emu_dl;
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x16) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xA);
	emu_ax = (int8)emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_dl = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_decb(&emu_dl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_get_memory8(emu_es, emu_bx, 0xB) = emu_dl;
	emu_al = emu_dl;
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x16) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_addb(&emu_al, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0xA) = emu_al;
	goto l__070E;
l__06FD:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x2) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0x0;
	goto l__0569;
l__070E:
	goto l__0B6F;
l__0711:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_decb(&emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0xB) = emu_al;
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_get_memory16(emu_es, emu_bx, 0x16) = emu_ax;
	goto l__0B6F;
l__0733:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_decb(&emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0xB) = emu_al;
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_shlw(&emu_ax, 0x1);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_si, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_si, 0xC);
	goto l__08A4;
l__075D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xA);
	emu_ax = (int8)emu_al;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_dx, 0x2);
	emu_negw(&emu_dx, emu_dx);
	emu_addw(&emu_ax, emu_dx);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
l__0776:
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_dl = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_decb(&emu_dl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_get_memory8(emu_es, emu_bx, 0xB) = emu_dl;
	emu_al = emu_dl;
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	goto l__08D9;
l__0798:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xA);
	emu_ax = (int8)emu_al;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_dx, emu_ax);
	emu_decw(&emu_dx);
	emu_shlw(&emu_dx, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_dx);
	goto l__0776;
l__07AF:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__07BE;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__07DE;
	/* Unresolved jump */ emu_ip = 0x0845; emu_last_cs = 0x15C2; emu_last_ip = 0x07BB; emu_last_length = 0x000F; emu_last_crc = 0x0913; emu_call();
l__07BE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_ax;
	goto l__0848;
l__07DE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0xB), 0xF);
	if (emu_get_memory8(emu_es, emu_bx, 0xB) != 0xF) goto l__07EB;
	goto l__06FD;
l__07EB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x16);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0xA) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_shlw(&emu_bx, 0x1);
	emu_addw(&emu_dx, emu_bx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
	goto l__0848;
l__0848:
	goto l__0B6F;
l__084B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_shlw(&emu_dx, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_dx);
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_ax;
	goto l__0B6F;
l__0873:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xA);
	emu_ax = (int8)emu_al;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_dx, 0x2);
	emu_negw(&emu_dx, emu_dx);
	emu_addw(&emu_ax, emu_dx);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_si, 0xB);
	emu_incb(&emu_get_memory8(emu_es, emu_si, 0xB));
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_si, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x16);
l__08A4:
	emu_pop(&emu_es);
	emu_get_memory16(emu_es, emu_bx, 0x16) = emu_ax;
	goto l__0B6F;
l__08AC:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xA);
	emu_ax = (int8)emu_al;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_dx, emu_ax);
	emu_decw(&emu_dx);
	emu_shlw(&emu_dx, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_dx);
l__08D9:
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x16) = emu_ax;
	goto l__0B6F;
l__08E1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x6);
	emu_addb(&emu_get_memory8(emu_es, emu_bx, 0xB), emu_al);
	goto l__0B6F;
l__08EE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x6);
	emu_subb(&emu_get_memory8(emu_es, emu_bx, 0xB), emu_al);
	goto l__0B6F;
l__08FB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_andw(&emu_ax, 0xFF);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_push(0x0935);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x09720A72: f__0972_0A72_000D_024E(); break;
		case 0x09720A81: f__0972_0A81_0017_2EC7(); break;
		case 0x09720AFC: f__0972_0AFC_0016_0DC9(); break;
		case 0x09720C04: f__0972_0C04_0037_B310(); break;
		case 0x09720C5A: f__0972_0C5A_0015_E00A(); break;
		case 0x09720E87: f__0972_0E87_0047_4065(); break;
		case 0x09721004: f__0972_1004_0029_E69D(); break;
		case 0x097211B9: f__0972_11B9_0020_8DC9(); break;
		case 0x0972121E: f__0972_121E_0030_5DAA(); break;
		case 0x0972137B: f__0972_137B_002B_A9E3(); break;
		case 0x097213AF: f__0972_13AF_0015_619A(); break;
		case 0x09721524: f__0972_1524_0018_014D(); break;
		case 0x097215A2: f__0972_15A2_0019_AB1E(); break;
		case 0x0EDB00B7: f__0EDB_00B7_003B_92E3(); break;
		case 0x0EDB00F6: f__0EDB_00F6_000C_3B74(); break;
		case 0x0EDB0145: f__0EDB_0145_002F_C125(); break;
		case 0x0EDB01F7: f__0EDB_01F7_0020_4DC9(); break;
		case 0x0EDB024B: f__0EDB_024B_001D_2E46(); break;
		case 0x0EDB0288: f__0EDB_0288_0020_3D83(); break;
		case 0x0EDB02EA: f__0EDB_02EA_001E_F83C(); break;
		case 0x0EDB032B: f__0EDB_032B_0031_E91B(); break;
		case 0x0EDB03B9: f__0EDB_03B9_001D_2E46(); break;
		case 0x0EDB03EC: f__0EDB_03EC_0020_629E(); break;
		case 0x0EDB0426: f__0EDB_0426_0027_711D(); break;
		case 0x0EDB0456: f__0EDB_0456_0032_B7E5(); break;
		case 0x0EDB04AE: f__0EDB_04AE_0024_408E(); break;
		case 0x0EDB050C: f__0EDB_050C_001D_2E46(); break;
		case 0x16C501EF: f__16C5_01EF_000D_1984(); break;
		case 0x16C501FE: f__16C5_01FE_000D_19C4(); break;
		case 0x16C5020D: f__16C5_020D_000D_1A44(); break;
		case 0x16C5021C: f__16C5_021C_003A_2718(); break;
		case 0x16C503C3: f__16C5_03C3_002D_24E5(); break;
		case 0x16C50543: f__16C5_0543_0034_CA88(); break;
		case 0x16C506C6: f__16C5_06C6_001D_94A6(); break;
		case 0x16C50788: f__16C5_0788_0018_4AA5(); break;
		case 0x16C509C4: f__16C5_09C4_003E_31D6(); break;
		case 0x16C50A20: f__16C5_0A20_003A_2375(); break;
		case 0x176C0858: f__176C_0858_0023_E780(); break;
		case 0x176C0882: f__176C_0882_0014_0C6A(); break;
		case 0x176C0BC3: f__176C_0BC3_002A_A6DE(); break;
		case 0x176C0FA2: f__176C_0FA2_0013_6D6D(); break;
		case 0x176C0FD2: f__176C_0FD2_001F_B15D(); break;
		case 0x176C105E: f__176C_105E_0031_8B3F(); break;
		case 0x176C1098: f__176C_1098_0021_667D(); break;
		case 0x176C12CE: f__176C_12CE_0011_A5C5(); break;
		case 0x176C1382: f__176C_1382_0013_AA74(); break;
		case 0x176C13CD: f__176C_13CD_0014_7309(); break;
		case 0x176C1458: f__176C_1458_0023_356A(); break;
		case 0x176C1932: f__176C_1932_0029_D0CC(); break;
		case 0x176C196C: f__176C_196C_0027_D87A(); break;
		case 0x176C1A40: f__176C_1A40_0020_8DC9(); break;
		case 0x176C1A9F: f__176C_1A9F_0024_813F(); break;
		case 0x176C1B45: f__176C_1B45_0022_208C(); break;
		case 0x176C1C00: f__176C_1C00_003A_E6C7(); break;
		case 0x176C1C4F: f__176C_1C4F_0017_E375(); break;
		case 0x176C1C6F: f__176C_1C6F_001D_2E46(); break;
		case 0x176C1CFE: f__176C_1CFE_0021_29C8(); break;
		case 0x176C1F51: f__176C_1F51_002F_CE9F(); break;
		case 0x176C212E: f__176C_212E_002E_9D89(); break;
		case 0x176C2275: f__176C_2275_001D_D22D(); break;
		case 0x176C22C4: f__176C_22C4_0019_80C9(); break;
		case 0x176C23CC: f__176C_23CC_000B_4119(); break;
		case 0x176C246C: f__176C_246C_0015_C163(); break;
		case 0x176C2552: f__176C_2552_0019_4894(); break;
		case 0x176C25A5: f__176C_25A5_002C_AC04(); break;
		case 0x176C2638: f__176C_2638_0017_CF4B(); break;
		case 0x176C26CD: f__176C_26CD_0010_041C(); break;
		case 0x176C26E5: f__176C_26E5_0013_FF24(); break;
		case 0x176C27A4: f__176C_27A4_0021_7EE9(); break;
		case 0x176C28B1: f__176C_28B1_0024_58C9(); break;
		case 0x176C291A: f__176C_291A_0010_8A93(); break;
		case 0x176C29A9: f__176C_29A9_003A_8DEF(); break;
		case 0x176C2AB2: f__176C_2AB2_0021_82CD(); break;
		case 0x176C2B97: f__176C_2B97_0013_B226(); break;
		case 0x176C2BD5: f__176C_2BD5_0014_2C56(); break;
		case 0x176C2C73: f__176C_2C73_0010_BB2A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x15C2; emu_last_ip = 0x0932; emu_last_length = 0x003A; emu_last_crc = 0xD1E0;
			emu_call();
			return;
	}
l__0935:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_ax;
	goto l__0B6F;
l__0941:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x16), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x16) == 0x0) {
		emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x7FFF);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x4));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
		emu_dx = emu_get_memory16(emu_es, emu_bx, 0x4);
		emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x6);
		emu_shlw(&emu_bx, 0x1);
		emu_addw(&emu_dx, emu_bx);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_get_memory16(emu_es, emu_bx, 0x2) = emu_ax;
		emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
	}
l__0980:
	goto l__0B6F;
l__0983:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__09AD;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) { /* Unresolved jump */ emu_ip = 0x09B8; emu_last_cs = 0x15C2; emu_last_ip = 0x09A4; emu_last_length = 0x002A; emu_last_crc = 0x5FB4; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) { /* Unresolved jump */ emu_ip = 0x09BE; emu_last_cs = 0x15C2; emu_last_ip = 0x09A9; emu_last_length = 0x002A; emu_last_crc = 0x5FB4; emu_call(); return; }
	goto l__09C4;
l__09AD:
	emu_ax = emu_dx;
	emu_negw(&emu_ax, emu_ax);
	emu_sbbw(&emu_ax, emu_ax);
	emu_incw(&emu_ax);
	emu_cx = emu_ax;
	goto l__09C7;
l__09C4:
	goto l__06FD;
l__09C7:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_decb(&emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0xB) = emu_al;
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x16) = emu_cx;
	goto l__0B6F;
l__09E6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_cmpw(&emu_bx, 0x11);
	if (emu_bx <= 0x11) goto l__0A22;
	goto l__0AFB;
l__0A22:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0xB7B);
	switch (emu_ip) {
		case 0x0A29: goto l__0A29;
		case 0x0A3F: goto l__0A3F;
		case 0x0A52: goto l__0A52;
		case 0x0A60: goto l__0A60;
		case 0x0A6E: goto l__0A6E;
		case 0x0A7C: goto l__0A7C;
		case 0x0A8A: goto l__0A8A;
		case 0x0A98: goto l__0A98;
		case 0x0AA6: goto l__0AA6;
		case 0x0AAD: goto l__0AAD;
		case 0x0AB4: goto l__0AB4;
		case 0x0AC5: goto l__0AC5;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x15C2; emu_last_ip = 0x0A24; emu_last_length = 0x0007; emu_last_crc = 0xADA0;
			emu_call();
			return;
	}
l__0A29:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__0A38;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x0) goto l__0A38;
	emu_ax = 0x1;
	goto l__0A3A;
l__0A38:
	emu_xorw(&emu_ax, emu_ax);
l__0A3A:
	emu_di = emu_ax;
	goto l__0AFE;
l__0A3F:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
		if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x0) goto l__0A4E;
	}
l__0A49:
	emu_ax = 0x1;
	goto l__0A50;
l__0A4E:
	emu_xorw(&emu_ax, emu_ax);
l__0A50:
	goto l__0A3A;
l__0A52:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_si != emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__0A5C;
	emu_ax = 0x1;
	goto l__0A5E;
l__0A5C:
	emu_xorw(&emu_ax, emu_ax);
l__0A5E:
	goto l__0A3A;
l__0A60:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_si == emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__0A6A;
	emu_ax = 0x1;
	goto l__0A6C;
l__0A6A:
	emu_xorw(&emu_ax, emu_ax);
l__0A6C:
	goto l__0A3A;
l__0A6E:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if ((int16)emu_si >= (int16)emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__0A78;
	emu_ax = 0x1;
	goto l__0A7A;
l__0A78:
	emu_xorw(&emu_ax, emu_ax);
l__0A7A:
	goto l__0A3A;
l__0A7C:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if ((int16)emu_si > (int16)emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__0A86;
	emu_ax = 0x1;
	goto l__0A88;
l__0A86:
	emu_xorw(&emu_ax, emu_ax);
l__0A88:
	goto l__0A3A;
l__0A8A:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if ((int16)emu_si <= (int16)emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__0A94;
	emu_ax = 0x1;
	goto l__0A96;
l__0A94:
	emu_xorw(&emu_ax, emu_ax);
l__0A96:
	goto l__0A3A;
l__0A98:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if ((int16)emu_si < (int16)emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__0AA2;
	emu_ax = 0x1;
	goto l__0AA4;
l__0AA2:
	emu_xorw(&emu_ax, emu_ax);
l__0AA4:
	goto l__0A3A;
l__0AA6:
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	goto l__0A3A;
l__0AAD:
	emu_ax = emu_si;
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	goto l__0A3A;
l__0AB4:
	emu_ax = emu_si;
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	goto l__0A3A;
l__0AC5:
	emu_ax = emu_si;
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x8);
	emu_sarw(&emu_ax, emu_cl);
	goto l__0A3A;
l__0AFB:
	goto l__06FD;
l__0AFE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_decb(&emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0xB) = emu_al;
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x16) = emu_di;
	goto l__0B6F;
l__0B6C:
	goto l__06FD;
l__0B6F:
	emu_ax = 0x1;
	goto l__056B;
l__0B75:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
