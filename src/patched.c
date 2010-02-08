/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "libemu.h"

extern void f__01F7_0138_0019_8DC5();
extern void f__01F7_022D_0003_9E5A();
extern void f__01F7_0F45_004B_44A0();
extern void f__01F7_2040_0033_F011();
extern void f__01F7_20B5_0076_64ED();
extern void f__01F7_21FA_0012_B06A();
extern void Interrupt_Video();
extern void f__AB00_045A_0022_EC86();
extern void f__AB00_0C96_0019_A7D9();
extern void f__AB00_0F02_0012_D841();
extern void f__AB00_0F24_0044_3584();
extern void f__AB00_1FA8_0072_8B95();
extern void f__AB00_2103_0040_93D2();
extern void f__AB00_2191_0012_DA45();
extern void f__AB00_21F0_0024_C4F7();
extern void f__AB00_2336_002C_4FDC();
extern void f__AB00_237A_002C_07AF();
extern void f__AB00_240F_0029_C429();
extern void f__AB00_2498_0021_920B();
extern void f__AB00_26EB_0047_41F4();

/* TODO decompiler bug: extern void f__AB00_240F_0029_C429(); */

/**
 * Decompiled function f__01F7_0229_0004_BEF7()
 *  Patched for different return-values in rare cases.
 *
 * @name p__01F7_0229_0004_BEF7
 * @implements 01F7:0229:0004:BEF7 ()
 */
void p__01F7_0229_0004_BEF7()
{
	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx,  0x2);
	emu_push(0x022D);
	switch (emu_ip) {
		case 0x0F45: f__01F7_0F45_004B_44A0(); break;
		case 0x20B5: f__01F7_20B5_0076_64ED(); break;
		case 0x21FA: f__01F7_21FA_0012_B06A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0229; emu_last_length = 0x0004; emu_last_crc = 0xBEF7;
			emu_call();
			return;
	}

	/* XXX -- One of the above functions doesn't always return the next
	 *  function but some other function. For now we capture this in this
	 *  way. */
	switch (emu_ip) {
		case 0x0138: f__01F7_0138_0019_8DC5(); return;
		case 0x022D: f__01F7_022D_0003_9E5A(); return;
		default: exit(1);
	}
}

/**
 * Decompiled function f__01F7_201F_0021_24DC()
 *  Patched to remove decompiled functions duplications.
 *
 * @name p__01F7_201F_0021_24DC
 * @implements 01F7:201F:0021:24DC ()
 */
void p__01F7_201F_0021_24DC()
{
l__201F:
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ds, emu_si, 0x0));
	emu_push(emu_get_memory16(emu_ds, emu_si, 0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x0);
	emu_bx = emu_get_memory16(emu_ds, emu_si, 0x2);
	emu_cx = emu_get_memory16(emu_ds, emu_si, 0x4);
	emu_dx = emu_get_memory16(emu_ds, emu_si, 0x6);
	emu_di = emu_get_memory16(emu_ds, emu_si, 0xA);
	emu_si = emu_get_memory16(emu_ds, emu_si, 0x8);
	emu_pop(&emu_ds);
	emu_pop(&emu_es);

	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x2040);
	switch (emu_get_memory8(emu_ss, emu_bp, 0x6)) {
		case 0x10:
			emu_push(emu_bp);
			emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(emu_ip + 3); Interrupt_Video();
			emu_pop(&emu_bp);
			break;

		default:
			assert(!"Invalid video mode call");
	}
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	f__01F7_2040_0033_F011();
}

/**
 * Decompiled function f__2756_050B_0003_6FD4()
 *  Patched for different return-values in rare cases.
 *
 * @name p__2756_050B_0003_6FD4
 * @implements 2756:050B:0003:6FD4 ()
 */
void p__2756_050B_0003_6FD4()
{
	/* Call/jump based on memory/register values */
	emu_ip = emu_ax;
	emu_cs = emu_dx;
	switch ((emu_cs << 16) + emu_ip) {
		case 0x44AF045A: f__AB00_045A_0022_EC86(); return;
		case 0x44AF0C96: f__AB00_0C96_0019_A7D9(); return;
		case 0x44AF0F02: f__AB00_0F02_0012_D841(); return;
		case 0x44AF0F24: f__AB00_0F24_0044_3584(); return;
		case 0x44AF1FA8: f__AB00_1FA8_0072_8B95(); return;
		case 0x44AF2103: f__AB00_2103_0040_93D2(); return;
		case 0x44AF2191: f__AB00_2191_0012_DA45(); return;
		case 0x44AF21F0: f__AB00_21F0_0024_C4F7(); return;
		case 0x44AF2336: f__AB00_2336_002C_4FDC(); return;
		case 0x44AF237A: f__AB00_237A_002C_07AF(); return;
		case 0x44AF240F: f__AB00_240F_0029_C429(); return;
		case 0x44AF2498: f__AB00_2498_0021_920B(); return;
		case 0x44AF26EB: f__AB00_26EB_0047_41F4(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2756; emu_last_ip = 0x050B; emu_last_length = 0x0003; emu_last_crc = 0x6FD4;
			emu_call();
			return;
	}
}
