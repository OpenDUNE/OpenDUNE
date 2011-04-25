/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2C17_000C_002F_3016()
 *
 * @name f__2C17_000C_002F_3016
 * @implements 2C17:000C:002F:3016 ()
 * @implements 2C17:003B:000A:39F8
 * @implements 2C17:0045:0019:D623
 * @implements 2C17:0052:000C:FA42
 * @implements 2C17:005E:0020:A008
 * @implements 2C17:0072:000C:36DD
 * @implements 2C17:007E:000D:EA91
 * @implements 2C17:008B:004B:6C03
 * @implements 2C17:00CA:000C:9B42
 * @implements 2C17:00D6:000D:2A92
 * @implements 2C17:00E3:0056:3346
 * @implements 2C17:012A:000F:625A
 * @implements 2C17:0139:0007:211E
 * @implements 2C17:0140:005E:FAF1
 * @implements 2C17:0167:0037:421C
 * @implements 2C17:019E:001F:31F4
 * @implements 2C17:01A2:001B:B085
 * @implements 2C17:01AA:0013:A00B
 * @implements 2C17:01BD:0006:F7CE
 *
 * Called From: 0642:046C:0024:22E8
 * Called From: 07D4:1468:0025:2165
 * Called From: B4ED:049F:0024:9E14
 * Called From: B518:0F16:002D:1F4E
 */
void f__2C17_000C_002F_3016()
{
l__000C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x1E8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x14), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x14) != 0x0) { /* Unresolved jump */ emu_ip = 0x003E; emu_last_cs = 0x2C17; emu_last_ip = 0x0019; emu_last_length = 0x002F; emu_last_crc = 0x3016; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x003B); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
l__003B:
	emu_addw(&emu_sp, 0x8);
	emu_sarw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x1);
	emu_xorw(&emu_si, emu_si);
	goto l__0052;
l__0045:
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x58);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_si;
	emu_incw(&emu_si);
l__0052:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_si < emu_get_memory16(emu_ss, emu_bp,  0xE)) goto l__0045;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__0072;
l__005E:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x1E8);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__0072:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp,  0x10)) goto l__005E;
	emu_xorw(&emu_si, emu_si);
	goto l__00CA;
l__007E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x008B); emu_cs = 0x2537; emu_Tools_RandomRange();
l__008B:
	emu_addw(&emu_sp, 0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x58);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x58);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_dx, emu_bp - 0x58);
	emu_addw(&emu_bx, emu_dx);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x58);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_incw(&emu_si);
l__00CA:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_si < emu_get_memory16(emu_ss, emu_bp,  0xE)) goto l__007E;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__012A;
l__00D6:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00E3); emu_cs = 0x2537; emu_Tools_RandomRange();
l__00E3:
	emu_addw(&emu_sp, 0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x1E8);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x1E8);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_dx, emu_bp - 0x1E8);
	emu_addw(&emu_bx, emu_dx);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x1E8);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__012A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp,  0x10)) goto l__00D6;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__01AA;
l__0139:
	emu_di = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_xorw(&emu_si, emu_si);
	goto l__01A2;
l__0140:
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x58);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_bx = emu_di;
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x1E8);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_di >= emu_get_memory16(emu_ss, emu_bp,  0x10)) {
		emu_xorw(&emu_di, emu_di);
	}
l__0167:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_shlw(&emu_ax, 0x1);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_shlw(&emu_ax, 0x1);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x019E); emu_cs = 0x24D0; emu_GUI_Unknown_24D0_000D();
l__019E:
	emu_addw(&emu_sp, 0x10);
	emu_incw(&emu_si);
l__01A2:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_si < emu_get_memory16(emu_ss, emu_bp,  0xE)) goto l__0140;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__01AA:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp,  0x10)) goto l__0139;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x14), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x14) == 0x0) {
		emu_push(emu_cs); emu_push(0x01BD); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	}
l__01BD:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
