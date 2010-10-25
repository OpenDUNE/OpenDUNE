/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_File_Error()
 *
 * @name emu_File_Error
 * @implements B53B:005C:000F:A920 ()
 * @implements B53B:006B:001D:6E01
 * @implements B53B:0088:000D:B84B
 * @implements B53B:0095:0011:1ABA
 * @implements B53B:00A6:0051:C06D
 * @implements B53B:00F7:0009:0D32
 * @implements B53B:0100:0016:FC40
 * @implements B53B:010A:000C:1AF8
 * @implements B53B:0116:000C:388D
 * @implements B53B:0124:0028:D443
 * @implements B53B:014C:0008:05D3
 * @implements B53B:0154:0015:EEC6
 * @implements B53B:0169:000B:944B
 * @implements B53B:0174:000C:CE7E
 * @implements B53B:0180:0016:AA3C
 * @implements B53B:0196:0033:F614
 * @implements B53B:01A5:0024:3A58
 * @implements B53B:01C9:0008:5201
 * @implements B53B:01D1:0005:B085
 * @implements B53B:01D6:000E:4EB9
 * @implements B53B:0207:0008:793E
 * @implements B53B:020F:0029:5454
 * @implements B53B:0238:000B:D182
 * @implements B53B:0243:000C:3847
 * @implements B53B:024F:000A:EFF5
 * @implements B53B:0259:0012:DC62
 * @implements B53B:026B:0013:11D9
 * @implements B53B:027E:0005:D5FA
 * @implements B53B:0283:0006:F7CE
 *
 * Called From: B53B:02A5:001F:95C1
 */
void emu_File_Error()
{
l__005C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x1C);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_cs); emu_push(0x006B); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__006B:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x6730);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x672E);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0088); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__0088:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C6A));
	emu_push(emu_cs); emu_push(0x0095); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__0095:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x99F1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x99EF));
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x2605; f__2605_000C_006D_F8B2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__00A6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_di = emu_get_memory16(emu_ds, 0x00, 0x9931);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_decw(&emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, emu_di);
	emu_decw(&emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x31B2);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x31B4));
	if (emu_ax != 0) goto l__0124;
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x66E4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x66E6);
	emu_push(0x00F7);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6127B: f__22A6_127B_0036_F8C9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB53B; emu_last_ip = 0x00F2; emu_last_length = 0x0051; emu_last_crc = 0xC06D;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__00F7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_cs); emu_push(0x0100); emu_cs = 0x23E1; f__23E1_0334_000B_CF65();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__0100:
	emu_orw(&emu_dx, emu_dx);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0122; emu_last_cs = 0xB53B; emu_last_ip = 0x0102; emu_last_length = 0x0016; emu_last_crc = 0xFC40; emu_call(); return; }
	if (emu_dx == 0) {
		emu_cmpw(&emu_ax, emu_si);
		if (emu_ax < emu_si) { /* Unresolved jump */ emu_ip = 0x0122; emu_last_cs = 0xB53B; emu_last_ip = 0x0108; emu_last_length = 0x0016; emu_last_crc = 0xFC40; emu_call(); return; }
	}
l__010A:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0116); emu_cs = 0x23E1; emu_Tools_Malloc();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__0116:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x31B4) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x31B2) = emu_ax;
	goto l__0124;
l__0124:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x31B2);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x31B4));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x014F; emu_last_cs = 0xB53B; emu_last_ip = 0x012B; emu_last_length = 0x0028; emu_last_crc = 0xD443; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31B4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31B2));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x66C0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x66C2);
	emu_push(0x014C);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6101C: emu_GUI_CopyToBuffer(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB53B; emu_last_ip = 0x0147; emu_last_length = 0x0028; emu_last_crc = 0xD443;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__014C:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x0154); emu_cs = 0x07AE; emu_Unknown_07AE_0103();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__0154:
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0169); emu_cs = 0x251B; emu_GUI_DrawWiredRectangle();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__0169:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0174); emu_Unknown_B53B_0000();
l__0174:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0180); emu_cs = 0x1FB5; emu_File_Obsolete1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__0180:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x8280) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0196); emu_cs = 0x3536; overlay(0x3536, 0); f__B536_0148_0060_01F3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__0196:
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x2);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) != 0x2) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
		if (emu_get_memory16(emu_ss, emu_bp,  0x6) != 0x0) { /* Unresolved jump */ emu_ip = 0x01CC; emu_last_cs = 0xB53B; emu_last_ip = 0x01A3; emu_last_length = 0x0033; emu_last_crc = 0xF614; emu_call(); return; }
	}
l__01A5:
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x8280);
	emu_addb(&emu_al, 0x31);
	emu_get_memory8(emu_ss, emu_bp, -0x1A) = emu_al;
	emu_get_memory8(emu_ss, emu_bp, -0x19) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x1A);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6778));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6776));
	emu_push(emu_cs); emu_push(0x01C9); emu_cs = 0x3536; overlay(0x3536, 0); f__B536_0148_0060_01F3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__01C9:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x01D1); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__01D1:
	emu_push(emu_cs); emu_push(0x01D6); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__01D6:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1B);
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) != 0x1B) goto l__0207;
	emu_push(emu_cs); emu_push(0x01E4); emu_cs = 0x07AE; emu_Unknown_07AE_0103();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
	/* Unresolved jump */ emu_ip = 0x01E4; emu_last_cs = 0xB53B; emu_last_ip = 0x01E4; emu_last_length = 0x000E; emu_last_crc = 0x4EB9; emu_call();
l__0207:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x020F); emu_Unknown_B53B_0000();
l__020F:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x31B2);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x31B4));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x023B; emu_last_cs = 0xB53B; emu_last_ip = 0x0217; emu_last_length = 0x0029; emu_last_crc = 0x5454; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31B4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31B2));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x662C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x662E);
	emu_push(0x0238);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604F8: emu_GUI_CopyFromBuffer(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB53B; emu_last_ip = 0x0233; emu_last_length = 0x0029; emu_last_crc = 0x5454;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__0238:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0243); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__0243:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x024F); emu_cs = 0x2605; f__2605_000C_006D_F8B2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__024F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_cs); emu_push(0x0259); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__0259:
	emu_pop(&emu_cx);
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) { /* Unresolved jump */ emu_ip = 0x0279; emu_last_cs = 0xB53B; emu_last_ip = 0x025C; emu_last_length = 0x0012; emu_last_crc = 0xDC62; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31B4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31B2));
	emu_push(emu_cs); emu_push(0x026B); emu_cs = 0x23E1; emu_Tools_Free();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__026B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x31B4) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x31B2) = 0x0;
	emu_push(emu_cs); emu_push(0x027E); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x353B) { overlay(0x353B, 1); }
l__027E:
	emu_ax = 0x1;
	goto l__0283;
l__0283:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
