/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Mouse_EventHandler()
 *
 * @name emu_Mouse_EventHandler
 * @implements 29A3:0054:005C:47DC ()
 * @implements 29A3:0089:0027:69FF
 * @implements 29A3:009B:0015:C95F
 * @implements 29A3:00B0:0009:B56A
 * @implements 29A3:00B9:0014:EEB4
 * @implements 29A3:00BC:0011:463C
 * @implements 29A3:00CA:0003:9D1D
 * @implements 29A3:01C3:000C:CF33
 *
 * Called From: 0000:0000:0000:0000
 */
void emu_Mouse_EventHandler()
{
l__0054:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_bx;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = 0x353F;
	emu_ds = emu_ax;
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7097), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x7097) != 0x0) goto l__00CA;
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7098), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x7098) == 0x0) goto l__00CA;
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x1);
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) == 0x1) {
		emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x986C), 0x0);
		if (emu_get_memory8(emu_ds, 0x00, 0x986C) != 0x0) goto l__00CA;
	}
l__0089:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7068), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x7068) != 0x1) { /* Unresolved jump */ emu_ip = 0x0092; emu_last_cs = 0x29A3; emu_last_ip = 0x008E; emu_last_length = 0x0027; emu_last_crc = 0x69FF; emu_call(); return; }
	emu_shrw(&emu_cx, 0x1);
	emu_cmpw(&emu_cx, 0x13F);
	if (emu_cx > 0x13F) {
		emu_cx = 0x13F;
	}
l__009B:
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) != 0x0) goto l__00BC;
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x700E), 0x1000);
	if ((emu_get_memory16(emu_ds, 0x00, 0x700E) & 0x1000) != 0) goto l__00BC;

	emu_ax = Mouse_CheckButtons(emu_get_memory16(emu_ss, emu_bp, -0x4));

	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00B9); emu_cs = 0x29E8; emu_Input_HandleInput();
l__00B9:
	emu_addw(&emu_sp, 0x2);
l__00BC:
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) != 0x2) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x705E), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x705E) == 0x0) { emu_Mouse_HandleMovement(); return; }
	}
l__00CA:
	goto l__01C3;
l__01C3:
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Mouse_HandleMovement()
 *
 * @name emu_Mouse_HandleMovement
 * @implements 29A3:00CD:0066:C700 ()
 * @implements 29A3:00F3:0040:B81C
 * @implements 29A3:010F:0024:C7FA
 * @implements 29A3:0133:0009:B56A
 * @implements 29A3:013C:002D:9BAA
 *
 * Called From: 29A3:00C8:0014:EEB4
 * Called From: 29A3:00C8:0011:463C
 * Called From: 29A3:0215:000B:6BAD
 * Called From: 29A3:0215:0010:8923
 * Called From: 29A3:0215:0022:FFCE
 */
void emu_Mouse_HandleMovement()
{
l__00CD:
	emu_get_memory16(emu_ds, 0x00, 0x705E) = 0x1;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C78), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6C78) != 0x0) {
		emu_ax = emu_cx;
		emu_cx = emu_dx;
		emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C7C));
		emu_bx = emu_get_memory16(emu_ds, 0x00, 0x6C78);
		emu_cwd();
		emu_idivw(&emu_ax, emu_bx);
		emu_imuluw(&emu_ax, emu_bx);
		emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C7C));
		emu_dx = emu_cx;
		emu_cx = emu_ax;
	}
l__00F3:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C7A), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6C7A) != 0x0) {
		emu_ax = emu_dx;
		emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C7E));
		emu_bx = emu_get_memory16(emu_ds, 0x00, 0x6C7A);
		emu_cwd();
		emu_idivw(&emu_ax, emu_bx);
		emu_imuluw(&emu_ax, emu_bx);
		emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6C7E));
		emu_dx = emu_ax;
	}
l__010F:
	emu_get_memory16(emu_ds, 0x00, 0x7060) = emu_cx;
	emu_get_memory16(emu_ds, 0x00, 0x7062) = emu_dx;
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x2);
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) == 0x2) goto l__01C3;
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) == 0x0) goto l__01C3;
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x700E), 0x1000);
	if ((emu_get_memory16(emu_ds, 0x00, 0x700E) & 0x1000) != 0) goto l__01C3;

	emu_ax = Mouse_CheckButtons(emu_get_memory16(emu_ss, emu_bp, -0x4));

	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x29E8; emu_Input_HandleInput();
l__013C:
	emu_addw(&emu_sp, 0x2);
l__01C3:
	Mouse_CheckMovement(emu_cx, emu_dx);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Mouse_HandleMovementIfMoved()
 *
 * @name emu_Mouse_HandleMovementIfMoved
 * @implements 29A3:01DB:003D:B0F3 ()
 * @implements 29A3:01F6:0022:FFCE
 * @implements 29A3:0208:0010:8923
 * @implements 29A3:020D:000B:6BAD
 * @implements 29A3:0218:000C:CF33
 *
 * Called From: 29E8:0613:0020:55D6
 */
void emu_Mouse_HandleMovementIfMoved()
{
l__01DB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x7060);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x707C);
	emu_subw(&emu_ax, emu_cx);
	if (emu_flags.cf) {
		emu_negw(&emu_ax, emu_ax);
	}
l__01F6:
	emu_cmpw(&emu_ax, 0x1);
	if ((int16)emu_ax >= (int16)0x1) goto l__020D;
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x7062);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x707E);
	emu_subw(&emu_ax, emu_cx);
	if (emu_flags.cf) {
		emu_negw(&emu_ax, emu_ax);
	}
l__0208:
	emu_cmpw(&emu_ax, 0x1);
	if ((int16)emu_ax < (int16)0x1) goto l__0218;
l__020D:
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x7060);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x7062);
	emu_Mouse_HandleMovement(); return;
l__0218:
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Mouse_Init()
 *
 * @name emu_Mouse_Init
 * @implements 29A3:0224:0009:AA5D ()
 * @implements 29A3:022D:003C:7E93
 * @implements 29A3:025F:000A:D481
 * @implements 29A3:0269:0005:5C73
 * @implements 29A3:026E:0010:A6DC
 * @implements 29A3:027E:002A:70B8
 * @implements 29A3:02A8:000D:6EF0
 * @implements 29A3:02B5:0008:B689
 * @implements 29A3:02B8:0005:0E8B
 *
 * Called From: 25C4:0055:0006:F43B
 */
void emu_Mouse_Init()
{
l__0224:
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_ax = 0x3533;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x022D); Interrupt_DOS();
l__022D:
	emu_get_memory16(emu_ds, 0x00, 0x7060) = 0xA0;
	emu_get_memory16(emu_ds, 0x00, 0x7062) = 0x64;
	emu_get_memory16(emu_ds, 0x00, 0x706A) = 0x1;
	emu_get_memory16(emu_ds, 0x00, 0x7080) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x706E) = 0x13F;
	emu_get_memory16(emu_ds, 0x00, 0x7072) = 0xC7;
	emu_ax = emu_es;
	emu_orw(&emu_ax, emu_bx);
	if (emu_ax != 0) {
		emu_bl = emu_get_memory8(emu_es, emu_bx, 0x0);
		emu_cmpb(&emu_bl, 0xCF);
		if (emu_bl != 0xCF) goto l__0269;
	}
l__025F:
	emu_ax = 0x0;
	emu_get_memory8(emu_ds, 0x00, 0x7096) = 0x0;
	goto l__02B8;
l__0269:
	emu_ax = 0x0;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x026E); Interrupt_Mouse();
l__026E:
	emu_cmpw(&emu_ax, 0xFFFF);
	if (emu_ax != 0xFFFF) goto l__025F;
	emu_get_memory16(emu_ds, 0x00, 0x7068) = 0x0;
	emu_ax = 0x3;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x027E); Interrupt_Mouse();
l__027E:
	emu_cmpw(&emu_cx, 0xA0);
	if (emu_cx == 0xA0) { /* Unresolved jump */ emu_ip = 0x028A; emu_last_cs = 0x29A3; emu_last_ip = 0x0282; emu_last_length = 0x002A; emu_last_crc = 0x70B8; emu_call(); return; }
	emu_get_memory16(emu_ds, 0x00, 0x7068) = 0x1;
	emu_cx = 0xA0;
	emu_dx = 0x64;
	emu_get_memory8(emu_ds, 0x00, 0x7096) = 0x1;
	emu_get_memory8(emu_ds, 0x00, 0x7097) = 0x1;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7068), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x7068) != 0x1) { /* Unresolved jump */ emu_ip = 0x02A3; emu_last_cs = 0x29A3; emu_last_ip = 0x029F; emu_last_length = 0x002A; emu_last_crc = 0x70B8; emu_call(); return; }
	emu_shlw(&emu_cx, 0x1);
	emu_ax = 0x4;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x02A8); Interrupt_Mouse();
l__02A8:
	emu_ax = 0xC;
	emu_cx = 0x1F;
	emu_push(emu_cs);
	emu_pop(&emu_es);
	emu_dx = 0x54;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x02B5); Interrupt_Mouse();
l__02B5:
	emu_ax = 0x1;
l__02B8:
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Mouse_CallbackClear()
 *
 * @name emu_Mouse_CallbackClear
 * @implements 29A3:02BD:0018:A1B5 ()
 * @implements 29A3:02D5:0005:CE8B
 *
 * Called From: B500:000F:000C:F964
 */
void emu_Mouse_CallbackClear()
{
l__02BD:
	emu_push(emu_ax);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7096), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x7096) != 0x0) {
		emu_ax = 0xC;
		emu_cx = 0x0;
		emu_push(emu_cs);
		emu_pop(&emu_es);
		emu_dx = 0x54;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x02D5); Interrupt_Mouse();
	}
l__02D5:
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_ax);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Mouse_InsideRegion()
 *
 * @name emu_Mouse_InsideRegion
 * @implements 29A3:02DA:003B:81C9 ()
 * @implements 29A3:02EE:0027:7721
 * @implements 29A3:0315:000E:51CF
 * @implements 29A3:0318:000B:532F
 *
 * Called From: B4DA:05D7:001D:D9A0
 * Called From: B4DA:05D7:0022:75AA
 * Called From: B4DA:06F6:001D:CAEC
 * Called From: B4DA:06F6:0022:66D2
 * Called From: B4DA:075C:0029:DB1C
 * Called From: B4DA:0787:0021:7FD6
 * Called From: B4DA:07B9:0026:9772
 * Called From: B4DA:07EB:0026:D694
 */
void emu_Mouse_InsideRegion()
{
l__02DA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xC);
l__02EE:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x705E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x705E) != 0x0) goto l__02EE;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x705E));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7060);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x7062);
	emu_cmpw(&emu_ax, emu_cx);
	if ((int16)emu_ax < (int16)emu_cx) goto l__0315;
	emu_cmpw(&emu_ax, emu_si);
	if ((int16)emu_ax > (int16)emu_si) goto l__0315;
	emu_cmpw(&emu_bx, emu_dx);
	if ((int16)emu_bx < (int16)emu_dx) goto l__0315;
	emu_cmpw(&emu_bx, emu_di);
	if ((int16)emu_bx > (int16)emu_di) goto l__0315;
	emu_ax = 0x1;
	goto l__0318;
l__0315:
	emu_ax = 0x0;
l__0318:
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x705E));
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
