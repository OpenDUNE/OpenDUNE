/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4E6_0000_001A_C6C7()
 *
 * @name f__B4E6_0000_001A_C6C7
 * @implements B4E6:0000:001A:C6C7 ()
 * @implements B4E6:0018:0002:EABA
 * @implements B4E6:001A:0007:CF45
 * @implements B4E6:0021:0010:9BFD
 * @implements B4E6:0031:0018:5CEE
 * @implements B4E6:0040:0009:66CE
 * @implements B4E6:0043:0006:A14D
 * @implements B4E6:0049:0013:7B0C
 * @implements B4E6:004C:0010:9BFD
 * @implements B4E6:005C:0013:9211
 * @implements B4E6:006F:0005:8BCF
 *
 * Called From: B4E6:014F:004A:C989
 * Called From: B4E6:0174:000C:F796
 * Called From: B4E6:03B1:000E:716E
 * Called From: B4E6:041D:0010:2276
 * Called From: B4E6:0468:0011:6F94
 * Called From: B4E6:04BF:0016:5921
 */
void f__B4E6_0000_001A_C6C7()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) != 0xFFFF) goto l__001A;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) != 0xFFFF) goto l__001A;
	emu_ax = emu_si;
l__0018:
	goto l__006F;
l__001A:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__0043;
l__0021:
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_addb(&emu_cl, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_push(emu_cs); emu_push(0x0031); emu_cs = 0x01F7; emu_Tools_Shld();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__0031:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_andw(&emu_cx, emu_ax);
	emu_andw(&emu_bx, emu_dx);
	emu_orw(&emu_cx, emu_bx);
	if (emu_cx != 0) {
		emu_decw(&emu_si);
	}
l__0040:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__0043:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0021;
	goto l__004C;
l__0049:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__004C:
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_addb(&emu_cl, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_push(emu_cs); emu_push(0x005C); emu_cs = 0x01F7; emu_Tools_Shld();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { overlay(0x34E6, 1); }
l__005C:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_andw(&emu_cx, emu_ax);
	emu_andw(&emu_bx, emu_dx);
	emu_orw(&emu_cx, emu_bx);
	if (emu_cx == 0) goto l__0049;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__0018;
l__006F:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E6_00E0_0022_452E()
 *
 * @name f__B4E6_00E0_0022_452E
 * @implements B4E6:00E0:0022:452E ()
 * @implements B4E6:0102:0004:E839
 * @implements B4E6:0104:0002:C03A
 * @implements B4E6:0106:0002:2597
 *
 * Called From: B4E6:0311:0074:F135
 * Called From: B4E6:0311:007A:6EC9
 * Called From: B4E6:0383:0018:2374
 */
void f__B4E6_00E0_0022_452E()
{
l__00E0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((int16)emu_dx < (int16)emu_get_memory16(emu_ss, emu_bp,  0xA)) goto l__0102;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if ((int16)emu_dx > (int16)emu_get_memory16(emu_ss, emu_bp,  0xE)) goto l__0102;
	emu_cmpw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if ((int16)emu_bx < (int16)emu_get_memory16(emu_ss, emu_bp,  0xC)) goto l__0102;
	emu_cmpw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if ((int16)emu_bx > (int16)emu_get_memory16(emu_ss, emu_bp,  0x10)) goto l__0102;
	emu_ax = 0x1;
	goto l__0104;
l__0102:
	emu_xorw(&emu_ax, emu_ax);
l__0104:
	goto l__0106;
l__0106:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
