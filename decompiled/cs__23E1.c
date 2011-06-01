/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__23E1_03DB_000B_CF65()
 *
 * @name f__23E1_03DB_000B_CF65
 * @implements 23E1:03DB:000B:CF65 ()
 * @implements 23E1:03E6:000E:32CC
 * @implements 23E1:03F4:000E:7972
 * @implements 23E1:0402:0007:D436
 * @implements 23E1:0418:0005:F70A
 * @implements 23E1:041D:0012:BB9F
 * @implements 23E1:042F:0022:89AF
 * @implements 23E1:0447:000A:15E0
 * @implements 23E1:0451:000F:0E67
 * @implements 23E1:0460:0004:893F
 *
 * Called From: 23E1:0158:0008:5A28
 * Called From: 23E1:0158:0005:F8A0
 */
void f__23E1_03DB_000B_CF65()
{
l__03DB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x03E6); emu_cs = 0x01F7; f__01F7_1BC3_000F_9450();
l__03E6:
	emu_cmpw(&emu_ax, 0xFFFF);
	if (emu_ax != 0xFFFF) goto l__0418;
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03F4); emu_cs = 0x263B; emu_Video_SetMode();
l__03F4:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6714));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6712));
	emu_push(emu_cs); emu_push(0x0402); emu_cs = 0x28E4; emu_Tools_PrintString();
l__0402:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0409); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();
	/* Unresolved jump */ emu_ip = 0x0409; emu_last_cs = 0x23E1; emu_last_ip = 0x0409; emu_last_length = 0x0007; emu_last_crc = 0xD436; emu_call();
l__0418:
	emu_push(emu_cs); emu_push(0x041D); emu_cs = 0x01F7; f__01F7_1B73_0022_8ADB();
l__041D:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	goto l__0447;
l__042F:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xA));
		emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	}
l__0447:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0451); emu_cs = 0x01F7; f__01F7_1DE5_0036_9480();
l__0451:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__042F;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__0460;
l__0460:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
