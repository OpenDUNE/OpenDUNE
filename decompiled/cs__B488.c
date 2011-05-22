/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B488_0000_0027_45A9()
 *
 * @name f__B488_0000_0027_45A9
 * @implements B488:0000:0027:45A9 ()
 * @implements B488:0027:001F:F7F0
 * @implements B488:0046:0016:1484
 * @implements B488:0053:0009:D101
 * @implements B488:005C:0016:348C
 * @implements B488:0069:0009:F10D
 * @implements B488:0072:000D:6A91
 * @implements B488:007F:0049:2ABF
 * @implements B488:00BF:0009:F301
 * @implements B488:00C8:000D:AA91
 * @implements B488:00D5:004D:47BE
 * @implements B488:0115:000D:EA2D
 * @implements B488:0122:000C:BEF6
 * @implements B488:012E:000B:44F3
 * @implements B488:0139:003C:6B9F
 * @implements B488:016D:0008:D19A
 * @implements B488:0175:000F:B531
 * @implements B488:0184:000D:55E2
 * @implements B488:0191:0024:0351
 * @implements B488:01A4:0011:94F5
 * @implements B488:01B5:000C:CB41
 * @implements B488:01B9:0008:42CA
 * @implements B488:01C1:0015:1DDC
 * @implements B488:01D6:0021:5ACE
 * @implements B488:01E9:000E:D7EC
 * @implements B488:01EC:000B:EB52
 * @implements B488:01F7:000B:5A70
 * @implements B488:0202:0008:5199
 * @implements B488:020A:0007:F77C
 *
 * Called From: 3488:0020:0005:0000
 */
void f__B488_0000_0027_45A9()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x10) != 0x0) { /* Unresolved jump */ emu_ip = 0x002A; emu_last_cs = 0xB488; emu_last_ip = 0x000C; emu_last_length = 0x0027; emu_last_crc = 0x45A9; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0027); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { overlay(0x3488, 1); }
l__0027:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x7B8C;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_dx, 0x280);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_xorw(&emu_si, emu_si);
	goto l__0053;
l__0046:
	emu_ax = emu_si;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_si;
	emu_incw(&emu_si);
l__0053:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_si < emu_get_memory16(emu_ss, emu_bp,  0xA)) goto l__0046;
	emu_xorw(&emu_si, emu_si);
	goto l__0069;
l__005C:
	emu_ax = emu_si;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_si;
	emu_incw(&emu_si);
l__0069:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_si < emu_get_memory16(emu_ss, emu_bp,  0xC)) goto l__005C;
	emu_xorw(&emu_si, emu_si);
	goto l__00BF;
l__0072:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x007F); emu_cs = 0x2537; emu_Tools_RandomRange();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { overlay(0x3488, 1); }
l__007F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_si;
	emu_ax = emu_di;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_dx = emu_di;
	emu_shlw(&emu_dx, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_dx);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_incw(&emu_si);
l__00BF:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_si < emu_get_memory16(emu_ss, emu_bp,  0xA)) goto l__0072;
	emu_xorw(&emu_si, emu_si);
	goto l__0115;
l__00C8:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00D5); emu_cs = 0x2537; emu_Tools_RandomRange();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { overlay(0x3488, 1); }
l__00D5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_si;
	emu_ax = emu_di;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_dx = emu_di;
	emu_shlw(&emu_dx, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx, emu_dx);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_incw(&emu_si);
l__0115:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_si < emu_get_memory16(emu_ss, emu_bp,  0xC)) goto l__00C8;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x0122); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { overlay(0x3488, 1); }
l__0122:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	goto l__01EC;
l__012E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	goto l__01B9;
l__0139:
	emu_ax = emu_si;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_di = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax >= emu_get_memory16(emu_ss, emu_bp,  0xC)) {
		emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x0;
	}
l__016D:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0175); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { overlay(0x3488, 1); }
l__0175:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_di);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x666C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666E);
	emu_push(0x0184);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60E34: f__22A6_0E34_002B_E39A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB488; emu_last_ip = 0x017F; emu_last_length = 0x000F; emu_last_crc = 0xB531;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { overlay(0x3488, 1); }
l__0184:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x0191); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { overlay(0x3488, 1); }
l__0191:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x14), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x14) != 0x0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x14), 0x0);
		if (emu_get_memory16(emu_ss, emu_bp,  0x14) == 0x0) { /* Unresolved jump */ emu_ip = 0x01B8; emu_last_cs = 0xB488; emu_last_ip = 0x019C; emu_last_length = 0x0024; emu_last_crc = 0x0351; emu_call(); return; }
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
		if (emu_get_memory16(emu_ss, emu_bp, -0xA) == 0x0) { /* Unresolved jump */ emu_ip = 0x01B8; emu_last_cs = 0xB488; emu_last_ip = 0x01A2; emu_last_length = 0x0024; emu_last_crc = 0x0351; emu_call(); return; }
	}
l__01A4:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_di);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x66A0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x66A2);
	emu_push(0x01B5);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60F76: emu_GFX_PutPixel(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB488; emu_last_ip = 0x01B0; emu_last_length = 0x0011; emu_last_crc = 0x94F5;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { overlay(0x3488, 1); }
l__01B5:
	emu_addw(&emu_sp, 0x6);
	emu_incw(&emu_si);
l__01B9:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_si >= emu_get_memory16(emu_ss, emu_bp,  0xA)) goto l__01C1;
	goto l__0139;
l__01C1:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AA);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76A8);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	goto l__01D6;
l__01D6:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AA);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76A8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp, -0x14)) goto l__01D6;
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x14)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x16));
		if (emu_dx < emu_get_memory16(emu_ss, emu_bp, -0x16)) goto l__01D6;
	}
l__01E9:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xC));
l__01EC:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax >= emu_get_memory16(emu_ss, emu_bp,  0xC)) goto l__01F7;
	goto l__012E;
l__01F7:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x10) == 0x0) {
		emu_push(emu_cs); emu_push(0x0202); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3488) { overlay(0x3488, 1); }
	}
l__0202:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x020A); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3488) { overlay(0x3488, 1); }
l__020A:
	emu_pop(&emu_cx);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
