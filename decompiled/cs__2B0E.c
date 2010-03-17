/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2B0E_0006_0049_87B1()
 *
 * @name f__2B0E_0006_0049_87B1
 * @implements 2B0E:0006:0049:87B1 ()
 * @implements 2B0E:001E:0031:7223
 * @implements 2B0E:0029:0026:299A
 * @implements 2B0E:004F:0005:BCAE
 * @implements 2B0E:005E:0005:C642
 * @implements 2B0E:0063:0005:AAAE
 * @implements 2B0E:0068:0068:539D
 * @implements 2B0E:00A2:002E:524A
 * @implements 2B0E:00C6:000A:3DA6
 *
 * Called From: 0C3A:178D:0019:CC8F
 * Called From: 0FCB:016A:0037:24E5
 * Called From: 1FB5:0E5A:005C:A9D7
 * Called From: 253D:01F1:002B:4141
 * Called From: 253D:02A6:0039:AA2E
 * Called From: B483:0128:0019:5FEE
 * Called From: B483:01F8:0019:57E1
 * Called From: B483:04AE:0017:11AB
 * Called From: B483:08DE:002A:FBE9
 * Called From: B491:0C15:0028:83F4
 * Called From: B495:001D:0022:1CF6
 * Called From: B495:00D8:001C:D772
 * Called From: B4B8:1831:001F:0626
 * Called From: B4B8:1CA3:001F:0626
 * Called From: B4F2:00E6:0019:2DA2
 * Called From: B4F2:0DFD:001F:AB1C
 * Called From: B4F2:0E46:001C:FAAE
 * Called From: B4F2:0EB7:0038:CF2A
 * Called From: B518:1110:001C:5029
 * Called From: B518:1133:0023:A905
 * Called From: B52A:0981:0020:CBC2
 */
void f__2B0E_0006_0049_87B1()
{
l__0006:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_xorw(&emu_cx, emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_ax, 0xF000);
	if (emu_ax >= 0xF000) {
		emu_orw(&emu_cx, 0x1);
	}
l__001E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_cmpw(&emu_ax, 0xF000);
	if (emu_ax >= 0xF000) {
		emu_orw(&emu_cx, 0x2);
	}
l__0029:
	emu_cmpw(&emu_cx, 0x0);
	if (emu_cx == 0x0) goto l__0068;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_cx, 0x1);
	if (emu_cx != 0x1) goto l__005E;
	emu_cmpw(&emu_cx, 0x3);
	if (emu_cx == 0x3) { /* Unresolved jump */ emu_ip = 0x0054; emu_last_cs = 0x2B0E; emu_last_ip = 0x0048; emu_last_length = 0x0026; emu_last_crc = 0x299A; emu_call(); return; }
	emu_push(emu_cs); emu_push(0x004F); emu_cs = 0x2649; f__2649_0D40_0019_C58F();
l__004F:
	emu_addw(&emu_sp, 0xC);
	goto l__00C6;
l__005E:
	emu_push(emu_cs); emu_push(0x0063); emu_cs = 0x2649; f__2649_0C09_0019_459F();
l__0063:
	emu_addw(&emu_sp, 0xC);
	goto l__00C6;
l__0068:
	emu_cld();
	emu_cl = 0x4;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_si = emu_ax;
	emu_shrw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_ds = emu_ax;
	emu_andw(&emu_si, 0xF);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_di = emu_ax;
	emu_shrw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_es = emu_ax;
	emu_andw(&emu_di, 0xF);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_shlw(&emu_cx, 0x1);
	emu_rclw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rep_movsw(emu_ds);
	emu_adcw(&emu_cx, 0x0);
	emu_rep_movsb(emu_ds);
	emu_orw(&emu_bx, emu_bx);
	if (emu_bx == 0) goto l__00C6;
l__00A2:
	emu_cl = 0x4;
	emu_dx = emu_si;
	emu_shrw(&emu_dx, emu_cl);
	emu_ax = emu_ds;
	emu_addw(&emu_ax, emu_dx);
	emu_ds = emu_ax;
	emu_andw(&emu_si, 0xF);
	emu_dx = emu_di;
	emu_shrw(&emu_dx, emu_cl);
	emu_ax = emu_es;
	emu_addw(&emu_ax, emu_dx);
	emu_es = emu_ax;
	emu_andw(&emu_di, 0xF);
	emu_cx = 0x4000;
	emu_rep_movsw(emu_ds);
	emu_decw(&emu_bx);
	if (emu_bx != 0) goto l__00A2;
l__00C6:
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
