/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2B4C_0002_0029_64AF()
 *
 * @name f__2B4C_0002_0029_64AF
 * @implements 2B4C:0002:0029:64AF ()
 * @implements 2B4C:002B:0017:D42A
 * @implements 2B4C:0042:0008:63C3
 * @implements 2B4C:004A:0004:C0E6
 * @implements 2B4C:004E:001A:FD04
 * @implements 2B4C:0068:0020:DBA0
 * @implements 2B4C:009E:0006:590A
 * @implements 2B4C:00A4:000C:B454
 * @implements 2B4C:00B0:000E:CC99
 * @implements 2B4C:00BE:000C:6572
 * @implements 2B4C:00CA:003A:1672
 * @implements 2B4C:00D5:002F:AFD5
 * @implements 2B4C:00E9:001B:853E
 * @implements 2B4C:0104:001C:EC2A
 * @implements 2B4C:011A:0006:590A
 * @implements 2B4C:0120:000C:B4F5
 * @implements 2B4C:012C:000E:CC99
 * @implements 2B4C:013A:000C:65D5
 * @implements 2B4C:0146:0023:1BAE
 * @implements 2B4C:0151:0018:D96A
 * @implements 2B4C:0169:0035:BC12
 * @implements 2B4C:0187:0017:56F7
 * @implements 2B4C:019E:0047:12C3
 * @implements 2B4C:01E5:0008:63C5
 * @implements 2B4C:01ED:0004:C0E6
 * @implements 2B4C:01F1:0008:E4FC
 * @implements 2B4C:01FF:000E:5009
 *
 * Called From: 0AEC:00E3:0048:33A5
 * Called From: 0AEC:1077:003B:40DA
 * Called From: 1423:0305:0021:6A50
 * Called From: B4B8:1A20:0023:5281
 * Called From: B4E9:02F9:0025:A3BA
 * Called From: B4E9:0363:0023:FA52
 * Called From: B4F2:00C5:002E:D76F
 * Called From: B4F2:0367:0027:E6B6
 */
void f__2B4C_0002_0029_64AF()
{
l__0002:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) == 0x0) { /* Unresolved jump */ emu_ip = 0x001B; emu_last_cs = 0x2B4C; emu_last_ip = 0x0012; emu_last_length = 0x0029; emu_last_crc = 0x64AF; emu_call(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7097), 0x0);
	if (emu_get_memory8(emu_ds, 0x00, 0x7097) == 0x0) goto l__002B;
	emu_lfp(&emu_es, &emu_ax, &emu_get_memory16(emu_ds, 0x00, 0x708E));
	emu_dx = emu_es;
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
l__002B:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x705E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x705E) != 0x0) goto l__002B;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x705E));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7092));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66B6);
	emu_push(0x0042);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B4C; emu_last_ip = 0x003E; emu_last_length = 0x0017; emu_last_crc = 0xD42A;
			emu_call();
			return;
	}
l__0042:
	emu_addw(&emu_sp, 0x4);
	emu_push(emu_cs); emu_push(0x004A); emu_cs = 0x2B6C; f__2B6C_000E_0045_C1FE();
l__004A:

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66A6);
	emu_push(0x004E);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_2378(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B4C; emu_last_ip = 0x004A; emu_last_length = 0x0004; emu_last_crc = 0xC0E6;
			emu_call();
			return;
	}
l__004E:
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_xorb(&emu_ah, emu_ah);
	emu_al = emu_get_memory8(emu_es, emu_si, 0x5);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x3);
	emu_cl = 0x3;
	emu_shrw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66E4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66E6);
	emu_push(0x0068);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6127B: f__22A6_127B_0036_F8C9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B4C; emu_last_ip = 0x0064; emu_last_length = 0x001A; emu_last_crc = 0xFD04;
			emu_call();
			return;
	}
l__0068:
	emu_addw(&emu_sp, 0x4);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x705A), emu_bx);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x705A) >= (int16)emu_bx) goto l__00D5;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x708C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x708C) == 0x0) goto l__009E;
	emu_push(emu_bx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x708C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x708A));
	emu_push(emu_cs); emu_push(0x0088); emu_cs = 0x23E1; emu_Tools_Free();
	/* Unresolved jump */ emu_ip = 0x0088; emu_last_cs = 0x2B4C; emu_last_ip = 0x0088; emu_last_length = 0x0020; emu_last_crc = 0xDBA0; emu_call();
l__009E:
	emu_push(emu_bx);
	emu_push(emu_cs); emu_push(0x00A4); emu_cs = 0x23E1; emu_Tools_GetFreeMemory();
l__00A4:
	emu_pop(&emu_bx);
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx != 0) goto l__00B0;
	emu_cmpw(&emu_ax, emu_bx);
	if (emu_ax >= emu_bx) goto l__00B0;
	/* Unresolved jump */ emu_ip = 0x01F9; emu_last_cs = 0x2B4C; emu_last_ip = 0x00AD; emu_last_length = 0x000C; emu_last_crc = 0xB454; emu_call();
l__00B0:
	emu_push(emu_bx);
	emu_ax = 0x0;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cs); emu_push(0x00BE); emu_cs = 0x23E1; emu_Tools_Malloc();
l__00BE:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bx);
	emu_cmpw(&emu_dx, 0x0);
	if (emu_dx != 0x0) goto l__00CA;
	/* Unresolved jump */ emu_ip = 0x01F9; emu_last_cs = 0x2B4C; emu_last_ip = 0x00C7; emu_last_length = 0x000C; emu_last_crc = 0x6572; emu_call();
l__00CA:
	emu_get_memory16(emu_ds, 0x00, 0x708A) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x708C) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x705A) = emu_bx;
l__00D5:
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_bx = emu_get_memory16(emu_es, emu_si, 0x8);
	emu_addw(&emu_bx, 0xA);
	emu_testw(&emu_get_memory16(emu_es, emu_si, 0x0), 0x1);
	if ((emu_get_memory16(emu_es, emu_si, 0x0) & 0x1) != 0) {
		emu_addw(&emu_bx, 0x10);
	}
l__00E9:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x705C), emu_bx);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x705C) >= (int16)emu_bx) goto l__0151;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7090), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7090) == 0x0) goto l__011A;
	emu_push(emu_bx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7090));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x708E));
	emu_push(emu_cs); emu_push(0x0104); emu_cs = 0x23E1; emu_Tools_Free();
l__0104:
	emu_addw(&emu_sp, 0x4);
	emu_get_memory16(emu_ds, 0x00, 0x7090) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x708E) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x705C) = 0x0;
	emu_pop(&emu_bx);
l__011A:
	emu_push(emu_bx);
	emu_push(emu_cs); emu_push(0x0120); emu_cs = 0x23E1; emu_Tools_GetFreeMemory();
l__0120:
	emu_pop(&emu_bx);
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx != 0) goto l__012C;
	emu_cmpw(&emu_ax, emu_bx);
	if (emu_ax >= emu_bx) goto l__012C;
	/* Unresolved jump */ emu_ip = 0x01F9; emu_last_cs = 0x2B4C; emu_last_ip = 0x0129; emu_last_length = 0x000C; emu_last_crc = 0xB4F5; emu_call();
l__012C:
	emu_push(emu_bx);
	emu_ax = 0x0;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cs); emu_push(0x013A); emu_cs = 0x23E1; emu_Tools_Malloc();
l__013A:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bx);
	emu_cmpw(&emu_dx, 0x0);
	if (emu_dx != 0x0) goto l__0146;
	/* Unresolved jump */ emu_ip = 0x01F9; emu_last_cs = 0x2B4C; emu_last_ip = 0x0143; emu_last_length = 0x000C; emu_last_crc = 0x65D5; emu_call();
l__0146:
	emu_get_memory16(emu_ds, 0x00, 0x7090) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x708E) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x705C) = emu_bx;
l__0151:
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00, 0x708E));
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ds;
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x0);
	emu_testw(&emu_ax, 0x2);
	if ((emu_ax & 0x2) == 0) goto l__0169;
	emu_cx = emu_get_memory16(emu_ds, emu_si, 0x6);
	emu_rep_movsb(emu_ds);
	/* Unresolved jump */ emu_ip = 0x01AC; emu_last_cs = 0x2B4C; emu_last_ip = 0x0167; emu_last_length = 0x0018; emu_last_crc = 0xD96A; emu_call();
l__0169:
	emu_lodsw(emu_ds);
	emu_orw(&emu_ax, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_stosw();
	emu_cx = 0x3;
	emu_rep_movsw(emu_ds);
	emu_lodsw(emu_ds);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_stosw();
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	if ((emu_get_memory16(emu_ss, emu_bp, -0xA) & 0x1) != 0) {
		emu_cx = 0x8;
		emu_rep_movsw(emu_ds);
	}
l__0187:
	emu_bx = emu_ds;
	emu_ds = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00, 0x6F18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x019E); emu_cs = 0x2BD6; emu_Format80_Decode();
l__019E:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x6F18));
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_rep_movsb(emu_ds);
	emu_ds = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ds, 0x00, 0x7078) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_ds, 0x00, 0x707A) = emu_ax;
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00, 0x708E));
	emu_xorb(&emu_bh, emu_bh);
	emu_bl = emu_get_memory8(emu_es, emu_di, 0x5);
	emu_get_memory16(emu_ds, 0x00, 0x7074) = emu_bx;
	emu_bx = emu_get_memory16(emu_es, emu_di, 0x3);
	emu_cx = 0x3;
	emu_shrw(&emu_bx, emu_cl);
	emu_addw(&emu_bx, 0x2);
	emu_get_memory16(emu_ds, 0x00, 0x7076) = emu_bx;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7092));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66B6);
	emu_push(0x01E5);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B4C; emu_last_ip = 0x01E1; emu_last_length = 0x0047; emu_last_crc = 0x12C3;
			emu_call();
			return;
	}
l__01E5:
	emu_addw(&emu_sp, 0x4);
	emu_push(emu_cs); emu_push(0x01ED); emu_cs = 0x2B6C; f__2B6C_006E_002E_4FBC();
l__01ED:

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x66A6);
	emu_push(0x01F1);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_2378(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2B4C; emu_last_ip = 0x01ED; emu_last_length = 0x0004; emu_last_crc = 0xC0E6;
			emu_call();
			return;
	}
l__01F1:
	emu_lfp(&emu_es, &emu_ax, &emu_get_memory16(emu_ds, 0x00, 0x708E));
	emu_dx = emu_es;
	goto l__01FF;
l__01FF:
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x705E));
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
