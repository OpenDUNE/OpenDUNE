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
	emu_push(emu_cs); emu_push(0x0287); emu_cs = 0x2BC0; emu_Tools_Swapw();
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
 * Decompiled function f__15C2_044C_0012_C66D()
 *
 * @name f__15C2_044C_0012_C66D
 * @implements 15C2:044C:0012:C66D ()
 * @implements 15C2:045E:0009:779F
 * @implements 15C2:0521:0005:8BCF
 *
 * Called From: 176C:00FD:0022:7D65
 */
void f__15C2_044C_0012_C66D()
{
l__044C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x045E); emu_Script_IsLoaded();
l__045E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x0467; emu_last_cs = 0x15C2; emu_last_ip = 0x0462; emu_last_length = 0x0009; emu_last_crc = 0x779F; emu_call(); return; }
	goto l__0521;
l__0521:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
