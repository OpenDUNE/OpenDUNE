/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4C1_0000_0022_1807()
 *
 * @name f__B4C1_0000_0022_1807
 * @implements B4C1:0000:0022:1807 ()
 * @implements B4C1:0022:000D:2BD2
 * @implements B4C1:0024:000B:7FB6
 * @implements B4C1:002F:0062:F44D
 * @implements B4C1:0031:0060:57EF
 * @implements B4C1:003E:0053:5980
 * @implements B4C1:0051:0040:2D5F
 * @implements B4C1:005F:0032:1BDF
 * @implements B4C1:0091:0007:8446
 * @implements B4C1:0098:0008:D019
 * @implements B4C1:009E:0002:D2BA
 * @implements B4C1:00A0:0018:42F5
 * @implements B4C1:00B8:0007:8446
 * @implements B4C1:00BF:000D:CADD
 * @implements B4C1:00C5:0007:DFC5
 * @implements B4C1:00CC:004D:EEE4
 * @implements B4C1:00CF:004A:D29C
 * @implements B4C1:00EA:002F:4ABE
 * @implements B4C1:00F0:0029:084F
 * @implements B4C1:00FF:001A:70F2
 * @implements B4C1:010B:000E:6A3C
 * @implements B4C1:0114:0005:341D
 * @implements B4C1:011B:0008:ACE9
 * @implements B4C1:0123:0006:F7CE
 *
 * Called From: 34C1:0025:0005:0000
 */
void f__B4C1_0000_0022_1807()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_si = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_di = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) goto l__0022;
	emu_ax = emu_si;
	emu_negw(&emu_ax, emu_ax);
	goto l__0024;
l__0022:
	emu_ax = emu_si;
l__0024:
	emu_push(emu_ax);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) goto l__002F;
	emu_ax = emu_di;
	emu_negw(&emu_ax, emu_ax);
	goto l__0031;
l__002F:
	emu_ax = emu_di;
l__0031:
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_cmpw(&emu_dx, 0x1F40);
	if ((int16)emu_dx > (int16)0x1F40) {
		emu_sarw(&emu_si, 0x1);
		emu_sarw(&emu_di, 0x1);
	}
l__003E:
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) {
		emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x2);
		emu_ax = emu_di;
		emu_negw(&emu_ax, emu_ax);
		emu_di = emu_ax;
	}
l__0051:
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) {
		emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
		emu_ax = emu_si;
		emu_negw(&emu_ax, emu_ax);
		emu_si = emu_ax;
	}
l__005F:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x23DA);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x7FFF;
	emu_cmpw(&emu_si, emu_di);
	if ((int16)emu_si < (int16)emu_di) goto l__00A0;
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__009E;
	emu_ax = emu_di;
	emu_cwd();
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_cwd();
	emu_cl = 0x8;
	emu_push(emu_cs); emu_push(0x0091); emu_cs = 0x01F7; emu_Tools_Shld();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C1) { overlay(0x34C1, 1); }
l__0091:
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0098); emu_cs = 0x01F7; f__01F7_04E0_0004_E219();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C1) { overlay(0x34C1, 1); }
l__0098:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
l__009E:
	goto l__00C5;
l__00A0:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x1;
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__00C5;
	emu_ax = emu_si;
	emu_cwd();
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_cwd();
	emu_cl = 0x8;
	emu_push(emu_cs); emu_push(0x00B8); emu_cs = 0x01F7; emu_Tools_Shld();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C1) { overlay(0x34C1, 1); }
l__00B8:
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00BF); emu_cs = 0x01F7; f__01F7_04E0_0004_E219();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C1) { overlay(0x34C1, 1); }
l__00BF:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
l__00C5:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__00CF;
l__00CC:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__00CF:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x23E4);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x23E2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__00F0;
	if (emu_ax <= emu_get_memory16(emu_ss, emu_bp, -0x4)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
		if (emu_dx <= emu_get_memory16(emu_ss, emu_bp, -0x6)) goto l__00F0;
	}
l__00EA:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x20);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0x20) goto l__00CC;
l__00F0:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) == 0x0) {
		emu_ax = 0x40;
		emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
		emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	}
l__00FF:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) != 0x0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x3);
		if (emu_get_memory16(emu_ss, emu_bp, -0xC) != 0x3) goto l__011B;
	}
l__010B:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, 0x40);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
l__0114:
	emu_andw(&emu_ax, 0xFF);
	goto l__0123;
l__011B:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	goto l__0114;
l__0123:
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
 * Decompiled function emu_Math_PercentToValue()
 *
 * @name emu_Math_PercentToValue
 * @implements B4C1:0129:0028:FB8E ()
 * @implements B4C1:0149:0008:CA29
 * @implements B4C1:0151:0004:893F
 *
 * Called From: 34C1:0020:0005:0000
 */
void emu_Math_PercentToValue()
{
l__0129:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_mulw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x80);
	emu_adcw(&emu_dx, 0x0);
	emu_al = emu_ah;
	emu_ah = emu_dl;
	emu_cmpb(&emu_dh, 0x0);
	if (emu_dh != 0x0) {
		emu_ax = 0xFFFF;
	}
l__0149:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__0151;
l__0151:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Math_ValueToPercent()
 *
 * @name emu_Math_ValueToPercent
 * @implements B4C1:0155:002A:AC43 ()
 * @implements B4C1:0169:0016:2275
 * @implements B4C1:017F:0014:52B1
 * @implements B4C1:018E:0005:BBA6
 * @implements B4C1:0193:0004:893F
 *
 * Called From: 34C1:002A:0005:0000
 */
void emu_Math_ValueToPercent()
{
l__0155:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_xorb(&emu_dh, emu_dh);
	emu_dl = emu_ah;
	emu_ah = emu_al;
	emu_xorb(&emu_al, emu_al);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
l__0169:
	emu_cmpw(&emu_dx, 0x0);
	if (emu_dx == 0x0) goto l__017F;
	emu_addw(&emu_ax, 0x1);
	emu_adcw(&emu_dx, 0x0);
	emu_shrw(&emu_dx, 0x1);
	emu_rcrw(&emu_ax, 0x1);
	emu_addw(&emu_bx, 0x1);
	emu_shrw(&emu_bx, 0x1);
	goto l__0169;
l__017F:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0xFFFF;
	emu_cmpw(&emu_bx, 0x0);
	if (emu_bx != 0x0) {
		emu_divw(&emu_ax, emu_bx);
		emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	}
l__018E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__0193;
l__0193:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
