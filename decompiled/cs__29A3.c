/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Mouse_CheckButtons()
 *
 * @name emu_Mouse_CheckButtons
 * @implements 29A3:000C:0048:00FE ()
 * @implements 29A3:0039:001B:7C5C
 * @implements 29A3:004C:0008:FC68
 *
 * Called From: 29A3:00AD:0015:C95F
 * Called From: 29A3:0130:0024:C7FA
 */
void emu_Mouse_CheckButtons()
{
l__000C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_bx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2D;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x4);
	emu_ax = emu_bx;
	emu_xorb(&emu_bl, emu_get_memory8(emu_ds, 0x00, 0x7099));
	if (emu_flags.zf) goto l__004C;
	emu_get_memory8(emu_ds, 0x00, 0x7099) = emu_al;
	emu_testb(&emu_bl, 0x2);
	if ((emu_bl & 0x2) != 0) {
		emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x42;
		emu_testb(&emu_al, 0x2);
		if ((emu_al & 0x2) == 0) {
			emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x800);
		}
	}
l__0039:
	emu_testb(&emu_bl, 0x1);
	if ((emu_bl & 0x1) != 0) {
		emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x41;
		emu_testb(&emu_al, 0x1);
		if ((emu_al & 0x1) == 0) {
			emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x800);
		}
	}
l__004C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_pop(&emu_bx);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

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
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(0x00B0); emu_Mouse_CheckButtons();
l__00B0:
	emu_addw(&emu_sp, 0x2);
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
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) == 0x2) { emu_Mouse_CheckMovement(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7010), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x7010) == 0x0) { emu_Mouse_CheckMovement(); return; }
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x700E), 0x1000);
	if ((emu_get_memory16(emu_ds, 0x00, 0x700E) & 0x1000) != 0) { emu_Mouse_CheckMovement(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(0x0133); emu_Mouse_CheckButtons();
l__0133:
	emu_addw(&emu_sp, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x29E8; emu_Input_HandleInput();
l__013C:
	emu_addw(&emu_sp, 0x2);
	emu_Mouse_CheckMovement(); return;
}

/**
 * Decompiled function emu_Mouse_CheckMovement()
 *
 * @name emu_Mouse_CheckMovement
 * @implements 29A3:013F:002A:CFEE ()
 * @implements 29A3:0152:0017:5360
 * @implements 29A3:0169:0008:63C3
 * @implements 29A3:0171:0004:C0E6
 * @implements 29A3:0175:0028:0C94
 * @implements 29A3:019D:000C:9EC2
 * @implements 29A3:01A9:0008:63C5
 * @implements 29A3:01B1:0004:C0E6
 * @implements 29A3:01B5:001A:784E
 * @implements 29A3:01C3:000C:CF33
 *
 * Called From: 29A3:011C:0024:C7FA
 * Called From: 29A3:0123:0024:C7FA
 */
void emu_Mouse_CheckMovement()
{
l__013F:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x706A), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x706A) != 0x0) goto l__01B5;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x707C), emu_cx);
	if (emu_get_memory16(emu_ds, 0x00, 0x707C) == emu_cx) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x707E), emu_dx);
		if (emu_get_memory16(emu_ds, 0x00, 0x707E) == emu_dx) goto l__01B5;
	}
l__0152:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7080);
	emu_andw(&emu_ax, 0xC000);
	emu_cmpw(&emu_ax, 0xC000);
	if (emu_ax == 0xC000) { /* Unresolved jump */ emu_ip = 0x017D; emu_last_cs = 0x29A3; emu_last_ip = 0x015B; emu_last_length = 0x0017; emu_last_crc = 0x5360; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7092));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66B6);
	emu_push(0x0169);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29A3; emu_last_ip = 0x0165; emu_last_length = 0x0017; emu_last_crc = 0x5360;
			emu_call();
			return;
	}
l__0169:
	emu_addw(&emu_sp, 0x4);
	emu_push(emu_cs); emu_push(0x0171); emu_cs = 0x2B6C; f__2B6C_000E_0045_C1FE();
l__0171:

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66A6);
	emu_push(0x0175);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_2378(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29A3; emu_last_ip = 0x0171; emu_last_length = 0x0004; emu_last_crc = 0xC0E6;
			emu_call();
			return;
	}
l__0175:
	emu_testw(&emu_get_memory16(emu_ds, 0x00, 0x7080), 0x8000);
	if ((emu_get_memory16(emu_ds, 0x00, 0x7080) & 0x8000) == 0) goto l__019D;
	emu_cmpw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x7082));
	if (emu_cx < emu_get_memory16(emu_ds, 0x00, 0x7082)) goto l__019D;
	emu_cmpw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x7086));
	if (emu_cx > emu_get_memory16(emu_ds, 0x00, 0x7086)) goto l__019D;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x7084));
	if (emu_dx < emu_get_memory16(emu_ds, 0x00, 0x7084)) goto l__019D;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x7088));
	if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x7088)) goto l__019D;
	emu_orw(&emu_get_memory16(emu_ds, 0x00, 0x7080), 0x4000);
	goto l__01B5;
l__019D:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7092));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66B6);
	emu_push(0x01A9);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29A3; emu_last_ip = 0x01A5; emu_last_length = 0x000C; emu_last_crc = 0x9EC2;
			emu_call();
			return;
	}
l__01A9:
	emu_addw(&emu_sp, 0x4);
	emu_push(emu_cs); emu_push(0x01B1); emu_cs = 0x2B6C; f__2B6C_006E_002E_4FBC();
l__01B1:

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66A6);
	emu_push(0x01B5);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_2378(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29A3; emu_last_ip = 0x01B1; emu_last_length = 0x0004; emu_last_crc = 0xC0E6;
			emu_call();
			return;
	}
l__01B5:
	emu_get_memory16(emu_ds, 0x00, 0x707C) = emu_cx;
	emu_get_memory16(emu_ds, 0x00, 0x707E) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x705E) = 0x0;
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
 * Decompiled function f__29A3_01DB_003D_B0F3()
 *
 * @name f__29A3_01DB_003D_B0F3
 * @implements 29A3:01DB:003D:B0F3 ()
 * @implements 29A3:01F6:0022:FFCE
 * @implements 29A3:0208:0010:8923
 * @implements 29A3:020D:000B:6BAD
 * @implements 29A3:0218:000C:CF33
 *
 * Called From: 29E8:0613:0020:55D6
 */
void f__29A3_01DB_003D_B0F3()
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
 * @implements 29A3:0269:0005:5C73
 * @implements 29A3:026E:0010:A6DC
 * @implements 29A3:027E:002A:70B8
 * @implements 29A3:02A8:000D:6EF0
 * @implements 29A3:02B5:0008:B689
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
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x025F; emu_last_cs = 0x29A3; emu_last_ip = 0x0255; emu_last_length = 0x003C; emu_last_crc = 0x7E93; emu_call(); return; }
	emu_bl = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_cmpb(&emu_bl, 0xCF);
	if (emu_bl != 0xCF) goto l__0269;
	emu_ax = 0x0;
	emu_get_memory8(emu_ds, 0x00, 0x7096) = 0x0;
	/* Unresolved jump */ emu_ip = 0x02B8; emu_last_cs = 0x29A3; emu_last_ip = 0x0267; emu_last_length = 0x003C; emu_last_crc = 0x7E93; emu_call();
l__0269:
	emu_ax = 0x0;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x026E); Interrupt_Mouse();
l__026E:
	emu_cmpw(&emu_ax, 0xFFFF);
	if (emu_ax != 0xFFFF) { /* Unresolved jump */ emu_ip = 0x025F; emu_last_cs = 0x29A3; emu_last_ip = 0x0271; emu_last_length = 0x0010; emu_last_crc = 0xA6DC; emu_call(); return; }
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
