/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0C3A_1B79_0021_8C40()
 *
 * @name f__0C3A_1B79_0021_8C40
 * @implements 0C3A:1B79:0021:8C40 ()
 * @implements 0C3A:1B97:0003:5C0D
 * @implements 0C3A:1B9A:0026:93A4
 * @implements 0C3A:1BC0:0028:37B2
 * @implements 0C3A:1BE8:0007:272B
 * @implements 0C3A:1BEF:0019:E86F
 * @implements 0C3A:1C08:0069:2044
 * @implements 0C3A:1C4A:0027:2378
 * @implements 0C3A:1C60:0011:5C72
 * @implements 0C3A:1C71:0068:B126
 * @implements 0C3A:1C83:0056:A39E
 * @implements 0C3A:1CC3:0016:6D58
 * @implements 0C3A:1CD9:0045:61E9
 * @implements 0C3A:1D01:001D:9D99
 * @implements 0C3A:1D16:0008:1F0E
 * @implements 0C3A:1D1E:0003:5DA9
 * @implements 0C3A:1D21:0004:E479
 * @implements 0C3A:1D25:001F:E40E
 * @implements 0C3A:1D3A:000A:DFCB
 * @implements 0C3A:1D44:0019:8A47
 * @implements 0C3A:1D5D:009E:865A
 * @implements 0C3A:1D72:0089:930C
 * @implements 0C3A:1DA0:005B:730E
 * @implements 0C3A:1DFB:0008:5638
 * @implements 0C3A:1E03:0029:1BC2
 * @implements 0C3A:1E23:0009:F391
 * @implements 0C3A:1E24:0008:F3B2
 * @implements 0C3A:1E2C:0002:CC3A
 * @implements 0C3A:1E2E:000C:BB3D
 * @implements 0C3A:1E3A:000C:2DAD
 * @implements 0C3A:1E46:0009:5A36
 * @implements 0C3A:1E4F:0006:F7CE
 *
 * Called From: 0AEC:05EF:001A:1D41
 * Called From: 0C3A:1522:000B:E0E2
 * Called From: 0C3A:1522:001A:38D1
 * Called From: 1423:0CA4:0012:C249
 */
void f__0C3A_1B79_0021_8C40()
{
l__1B79:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__1B9A;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__1B97:
	goto l__1E4F;
l__1B9A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1BC0); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__1BC0:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_subw(&emu_ax, 0x3);
	emu_bx = emu_ax;
	emu_cmpw(&emu_bx, 0x8);
	if (emu_bx <= 0x8) goto l__1BE8;
	goto l__1E3A;
l__1BE8:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1E55);
	switch (emu_ip) {
		case 0x1BEF: goto l__1BEF;
		case 0x1D21: goto l__1D21;
		case 0x1E2E: goto l__1E2E;
		case 0x1E3A: goto l__1E3A;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0C3A; emu_last_ip = 0x1BEA; emu_last_length = 0x0007; emu_last_crc = 0x272B;
			emu_call();
			return;
	}
l__1BEF:
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x1;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0xA;
	emu_xorw(&emu_si, emu_si);
	goto l__1D16;
l__1C08:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_di = emu_get_memory16(emu_es, emu_bx, 0x1A);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x1E);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x1C);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_dx;
	emu_cmpw(&emu_si, 0x7);
	if (emu_si == 0x7) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x8), 0x0);
		if (emu_get_memory8(emu_es, emu_bx, 0x8) == 0x0) {
			emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x1);
			if ((int16)emu_get_memory16(emu_ds, 0x00, 0x38B2) >= (int16)0x1) {
				emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0xFBFF);
				emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0xFFFF);
				emu_di = 0x2;
			}
		}
	}
l__1C4A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_andw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_andw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x16)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x18));
		if (emu_dx == emu_get_memory16(emu_ss, emu_bp, -0x18)) goto l__1C71;
	}
l__1C60:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1C71;
	goto l__1D01;
l__1C71:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x8), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x8) != 0x0) {
		emu_cmpw(&emu_si, 0x3);
		if (emu_si == 0x3) {
			emu_di = 0x2;
		}
	}
l__1C83:
	emu_ax = emu_di;
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x38B2)) goto l__1D01;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x31);
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_dx = 0x1;
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) == 0) goto l__1D01;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x21);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x4E));
	if (emu_al > emu_get_memory8(emu_es, emu_bx, 0x4E)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
		emu_ax = (int8)emu_al;
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
		if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1CD9;
	}
l__1CC3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = 0x1;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	goto l__1D01;
l__1CD9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x21);
		emu_ax = (int8)emu_al;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_dl = emu_get_memory8(emu_es, emu_bx, 0x4E);
		emu_dh = 0x0;
		emu_incw(&emu_dx);
		emu_cmpw(&emu_ax, emu_dx);
		if ((int16)emu_ax <= (int16)emu_dx) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
			emu_get_memory8(emu_es, emu_bx, 0x2A) = 0xFF;
		}
	}
l__1D01:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_shlw(&emu_dx, 0x1);
	emu_rclw(&emu_ax, 0x1);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x60);
	emu_incw(&emu_si);
l__1D16:
	emu_cmpw(&emu_si, 0x13);
	if ((int16)emu_si >= (int16)0x13) goto l__1D1E;
	goto l__1C08;
l__1D1E:
	goto l__1E46;
l__1D21:
	emu_xorw(&emu_si, emu_si);
	goto l__1D3A;
l__1D25:
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_get_memory8(emu_es, emu_bx, 0x2A) = 0x0;
	emu_incw(&emu_si);
l__1D3A:
	emu_cmpw(&emu_si, 0x1B);
	if ((int16)emu_si < (int16)0x1B) goto l__1D25;
	emu_xorw(&emu_si, emu_si);
	goto l__1E24;
l__1D44:
	emu_ax = emu_si;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4A);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x12) != 0xFFFF) goto l__1D5D;
	goto l__1E23;
l__1D5D:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0xD);
	if (emu_get_memory16(emu_ss, emu_bp, -0x12) == 0xD) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x47), 0x2);
		if (emu_get_memory16(emu_es, emu_bx, 0x47) == 0x2) {
			emu_get_memory16(emu_ss, emu_bp, -0x12) = 0xE;
		}
	}
l__1D72:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x21);
	emu_ax = (int8)emu_al;
	emu_di = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0xA);
	if (emu_get_memory16(emu_ss, emu_bp, -0x12) == 0xA) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x47), 0x2);
		if (emu_get_memory16(emu_es, emu_bx, 0x47) == 0x2) {
			emu_decw(&emu_di);
		}
	}
l__1DA0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_andw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_andw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1E));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x1E)) goto l__1E23;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	if (emu_dx != emu_get_memory16(emu_es, emu_bx, 0x1C)) goto l__1E23;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x31);
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x47);
	emu_dx = 0x1;
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) == 0) goto l__1E23;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x4E);
	emu_ah = 0x0;
	emu_cmpw(&emu_ax, emu_di);
	if ((int16)emu_ax < (int16)emu_di) goto l__1E03;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = 0x1;
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x12);
	emu_push(emu_cs); emu_push(0x1DFB); emu_cs = 0x01F7; emu_Tools_Shld();
l__1DFB:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	goto l__1E23;
l__1E03:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x4E);
		emu_ah = 0x0;
		emu_incw(&emu_ax);
		emu_cmpw(&emu_ax, emu_di);
		if ((int16)emu_ax >= (int16)emu_di) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
			emu_get_memory8(emu_es, emu_bx, 0x2A) = 0xFF;
		}
	}
l__1E23:
	emu_incw(&emu_si);
l__1E24:
	emu_cmpw(&emu_si, 0x8);
	if ((int16)emu_si >= (int16)0x8) goto l__1E2C;
	goto l__1D44;
l__1E2C:
	goto l__1E46;
l__1E2E:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0xFFFF;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0xFFFF;
	goto l__1E46;
l__1E3A:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	goto l__1E46;
l__1E46:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__1B97;
l__1E4F:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
