/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B518_0EB1_000E_D2F5()
 *
 * @name f__B518_0EB1_000E_D2F5
 * @implements B518:0EB1:000E:D2F5 ()
 * @implements B518:0EBF:0027:CF00
 * @implements B518:0EE6:0008:0683
 * @implements B518:0EEE:002D:1F4E
 * @implements B518:0F1B:0007:98BA
 * @implements B518:0F1E:0004:893F
 *
 * Called From: B518:0300:000D:286D
 * Called From: B518:0C27:0011:0A68
 */
void emu_GUI_HallOfFame_Internal_0EB1()
{
l__0EB1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0EBF); emu_GUI_HallOfFame_Internal_0F22();
l__0EBF:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = 0x122;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_ax = 0x31;
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37C0));
	emu_push(emu_cs); emu_push(0x0EE6); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0EE6:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EEE); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0EEE:
	emu_addw(&emu_sp, 0xE);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) == 0x0) goto l__0F1E;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = 0x14;
	emu_push(emu_ax);
	emu_ax = 0x31;
	emu_push(emu_ax);
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_ax = 0x31;
	emu_push(emu_ax);
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F1B); emu_cs = 0x2C17; emu_GUI_Screen_FadeIn();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0F1B:
	emu_addw(&emu_sp, 0x10);
l__0F1E:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_0F22_0007_C8B1()
 *
 * @name f__B518_0F22_0007_C8B1
 * @implements B518:0F22:0007:C8B1 ()
 * @implements B518:0F29:0011:FCEF
 * @implements B518:0F3A:000F:0B00
 * @implements B518:0F3B:000E:8F00
 * @implements B518:0F40:0009:E784
 * @implements B518:0F49:0009:49AC
 * @implements B518:0F4C:0006:42F0
 * @implements B518:0F52:0002:2597
 *
 * Called From: B518:0EBC:000E:D2F5
 * Called From: B518:1163:0019:C8A2
 */
void emu_GUI_HallOfFame_Internal_0F22()
{
l__0F22:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_dx, emu_dx);
	goto l__0F3B;
l__0F29:
	emu_bx = emu_dx;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x37C2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp,  0x6)) goto l__0F3A;
	goto l__0F40;
l__0F3A:
	emu_incw(&emu_dx);
l__0F3B:
	emu_cmpw(&emu_dx, 0xC);
	if ((int16)emu_dx < (int16)0xC) goto l__0F29;
l__0F40:
	emu_cmpw(&emu_dx, 0xB);
	if ((int16)emu_dx >= (int16)0xB) goto l__0F49;
	emu_ax = emu_dx;
	goto l__0F4C;
l__0F49:
	emu_ax = 0xB;
l__0F4C:
	emu_dx = emu_ax;
	emu_ax = emu_dx;
	goto l__0F52;
l__0F52:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_14D4_0013_5ED7()
 *
 * @name f__B518_14D4_0013_5ED7
 * @implements B518:14D4:0013:5ED7 ()
 * @implements B518:14E2:0005:3982
 * @implements B518:14E7:000B:B641
 *
 * Called From: B518:02F3:0009:1C6A
 * Called From: B518:030B:000B:2A27
 * Called From: B518:0450:000A:C8F6
 * Called From: B518:04DF:000A:2421
 * Called From: B518:04F5:0009:826A
 */
void emu_GUI_EndStats_Internal_14D4()
{
l__14D4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cwd();
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = emu_ax;
l__14E2:
	emu_push(emu_cs);
	emu_push(0x14E7); emu_GUI_HallOfFame_Tick();
l__14E7:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) goto l__14E2;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
