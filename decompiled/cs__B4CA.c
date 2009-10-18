/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4CA_020F_0017_A939()
 *
 * @name f__B4CA_020F_0017_A939
 * @implements B4CA:020F:0017:A939 ()
 * @implements B4CA:0226:0011:BA26
 * @implements B4CA:0234:0003:5F35
 * @implements B4CA:0237:0014:C0C9
 * @implements B4CA:024B:000B:6CAB
 * @implements B4CA:0256:001E:9B59
 * @implements B4CA:0265:000F:A174
 * @implements B4CA:0278:0013:32DA
 * @implements B4CA:028B:000B:720B
 * @implements B4CA:068C:0006:F7CE
 *
 * Called From: 34CA:0020:0005:0000
 */
void f__B4CA_020F_0017_A939()
{
l__020F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x38);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0226); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CA) { overlay(0x34CA, 1); }
	goto l__0226;
l__0226:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0xFFFF) goto l__0237;
	emu_xorw(&emu_ax, emu_ax);
	goto l__0234;
l__0234:
	goto l__068C;
l__0237:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x4;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x024B); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CA) { overlay(0x34CA, 1); }
	goto l__024B;
l__024B:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0256); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CA) { overlay(0x34CA, 1); }
	goto l__0256;
l__0256:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x4D52);
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) == 0x4D52) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x4F46);
		if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x4F46) { /* Unresolved jump */ emu_ip = 0x0299; emu_last_cs = 0xB4CA; emu_last_ip = 0x0263; emu_last_length = 0x001E; emu_last_crc = 0x9B59; emu_call(); return; }
	}
	goto l__0265;
l__0265:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C76), 0x3);
	if (emu_get_memory16(emu_ds, 0x00, 0x6C76) != 0x3) { /* Unresolved jump */ emu_ip = 0x0274; emu_last_cs = 0xB4CA; emu_last_ip = 0x026A; emu_last_length = 0x000F; emu_last_crc = 0xA174; emu_call(); return; }
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	goto l__0278;
l__0278:
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x028B); emu_cs = 0x253D; f__253D_00FA_0010_873D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CA) { overlay(0x34CA, 1); }
	goto l__028B;
l__028B:
	emu_addw(&emu_sp, 0xC);
	emu_bx = 0x1F40;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	goto l__0234;
l__068C:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
