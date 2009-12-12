/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Overlay_Interrupt()
 *
 * @name emu_Overlay_Interrupt
 * @implements 261F:0008:0033:66ED ()
 * @implements 261F:003C:000E:672A
 * @implements 261F:004A:000E:FD7C
 * @implements 261F:0058:0005:44EF
 * @implements 261F:005D:0005:B7B6
 * @implements 261F:0062:0010:F80A
 * @implements 261F:007B:000D:15ED
 * @implements 261F:0088:0016:3265
 * @implements 261F:00A8:000E:768E
 * @implements 261F:00B6:0017:107E
 * @implements 261F:00DF:000A:57AA
 * @implements 261F:00E9:001B:0FA7
 * @implements 261F:0107:0012:C65C
 * @implements 261F:0119:0011:366E
 * @implements 261F:012A:0021:FC59
 * @implements 261F:015D:0008:F306
 * @implements 261F:0165:0003:CD9A
 * @implements 261F:0168:001D:22F4
 * @implements 261F:0175:0010:C131
 * @implements 261F:0185:001A:54D2
 * @implements 261F:019F:001B:EDBF
 *
 * Called From: 3480:0000:0002:0000
 * Called From: 3483:0020:0002:0000
 * Called From: 3483:0025:0002:0000
 * Called From: 3483:002A:0002:0000
 * Called From: 3483:002F:0002:0000
 * Called From: 3483:0034:0002:0000
 * Called From: 3488:0020:0002:0000
 * Called From: 348B:0000:0002:0000
 * Called From: 348B:0020:0002:0000
 * Called From: 348B:0025:0002:0000
 * Called From: 348B:002F:0002:0000
 * Called From: 348B:0034:0002:0000
 * Called From: 348B:0039:0002:0000
 * Called From: 348B:003E:0002:0000
 * Called From: 348B:0043:0002:0000
 * Called From: 3491:0020:0002:0000
 * Called From: 3495:0000:0002:0000
 * Called From: 3495:0020:0002:0000
 * Called From: 34A2:0000:0002:0000
 * Called From: 34A2:0020:0002:0000
 * Called From: 34A2:002A:0002:0000
 * Called From: 34AB:0000:0002:0000
 * Called From: 34AB:0020:0002:0000
 * Called From: 34AE:0000:0002:0000
 * Called From: 34AE:0020:0002:0000
 * Called From: 34B1:0020:0002:0000
 * Called From: 34B1:0025:0002:0000
 * Called From: 34B1:002A:0002:0000
 * Called From: 34B5:0000:0002:0000
 * Called From: 34B5:0020:0002:0000
 * Called From: 34B8:0000:0002:0000
 * Called From: 34B8:0020:0002:0000
 * Called From: 34B8:0025:0002:0000
 * Called From: 34B8:002A:0002:0000
 * Called From: 34B8:002F:0002:0000
 * Called From: 34B8:0034:0002:0000
 * Called From: 34B8:0039:0002:0000
 * Called From: 34BE:0000:0002:0000
 * Called From: 34BE:0020:0002:0000
 * Called From: 34C1:0020:0002:0000
 * Called From: 34C1:0025:0002:0000
 * Called From: 34C1:002A:0002:0000
 * Called From: 34C4:0020:0002:0000
 * Called From: 34CA:0020:0002:0000
 * Called From: 34CD:0000:0002:0000
 * Called From: 34CD:004D:0002:0000
 * Called From: 34CD:0057:0002:0000
 * Called From: 34CD:005C:0002:0000
 * Called From: 34CD:0061:0002:0000
 * Called From: 34CD:0066:0002:0000
 * Called From: 34CD:008E:0002:0000
 * Called From: 34CD:00A2:0002:0000
 * Called From: 34CD:00B1:0002:0000
 * Called From: 34CD:00B6:0002:0000
 * Called From: 34CD:00BB:0002:0000
 * Called From: 34CD:00C0:0002:0000
 * Called From: 34DA:0000:0002:0000
 * Called From: 34DA:0020:0002:0000
 * Called From: 34DA:0025:0002:0000
 * Called From: 34DA:002A:0002:0000
 * Called From: 34DA:002F:0002:0000
 * Called From: 34DA:0034:0002:0000
 * Called From: 34DA:0039:0002:0000
 * Called From: 34E0:0000:0002:0000
 * Called From: 34E0:0020:0002:0000
 * Called From: 34E6:0025:0002:0000
 * Called From: 34E9:0000:0002:0000
 * Called From: 34E9:0020:0002:0000
 * Called From: 34E9:0025:0002:0000
 * Called From: 34E9:002A:0002:0000
 * Called From: 34E9:002F:0002:0000
 * Called From: 34ED:0020:0002:0000
 * Called From: 34F2:0000:0002:0000
 * Called From: 34F2:0020:0002:0000
 * Called From: 34F2:0025:0002:0000
 * Called From: 34F2:002A:0002:0000
 * Called From: 34F2:002F:0002:0000
 * Called From: 34FC:0020:0002:0000
 * Called From: 34FC:0025:0002:0000
 * Called From: 3500:0020:0002:0000
 * Called From: 3503:0000:0002:0000
 * Called From: 3503:0020:0002:0000
 * Called From: 350B:0020:0002:0000
 * Called From: 3511:0000:0002:0000
 * Called From: 3511:0020:0002:0000
 * Called From: 3511:002A:0002:0000
 * Called From: 3511:0034:0002:0000
 * Called From: 3511:0039:0002:0000
 * Called From: 3511:003E:0002:0000
 * Called From: 3511:0043:0002:0000
 * Called From: 3518:0000:0002:0000
 * Called From: 3518:0020:0002:0000
 * Called From: 3518:0025:0002:0000
 * Called From: 3518:0066:0002:0000
 * Called From: 3520:0025:0002:0000
 * Called From: 3520:0034:0002:0000
 * Called From: 3520:004D:0002:0000
 * Called From: 3527:0020:0002:0000
 * Called From: 352A:0020:0002:0000
 * Called From: 352A:002A:0002:0000
 * Called From: 3530:0020:0002:0000
 * Called From: 3533:0020:0002:0000
 * Called From: 3536:002F:0002:0000
 * Called From: 3536:0039:0002:0000
 * Called From: 353B:0020:0002:0000
 * Called From: 353B:002F:0002:0000
 */
void emu_Overlay_Interrupt()
{
l__0008:
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_bp);
	emu_bp = 0x353F;
	emu_ds = emu_bp;
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_incb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_ax = 0x33F4;
	emu_es = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0x128), 0xFFFF);
	if (emu_get_memory16(emu_es, 0x00, 0x128) == 0xFFFF) goto l__003C;
	emu_ax = 0x33F4;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x128));
	emu_push(emu_cs); emu_push(0x003B); emu_cs = 0x01F7; emu_File_Close_Wrapper();
	/* Unresolved jump */ emu_ip = 0x003B; emu_last_cs = 0x261F; emu_last_ip = 0x003B; emu_last_length = 0x0033; emu_last_crc = 0x66ED; emu_call();
l__003C:
	emu_ax = 0x8001;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9882;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x004A); emu_cs = 0x01F7; emu_File_Open_Wrapper();
l__004A:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_cmpw(&emu_ax, 0xFFFF);
	if (emu_ax == 0xFFFF) goto l__0058;
	goto l__0168;
l__0058:
	emu_push(emu_cs); emu_push(0x005D); emu_cs = 0x01F7; emu_Drive_Get_Default_Wrapper();
l__005D:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	goto l__007B;
l__0062:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x98));
	emu_ax = 0x2;
	emu_push(emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x6C80);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x6C82);
	emu_push(0x0072);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x353B0020: overlay(0x353B, 0); emu_File_Error_Wrapper(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x261F; emu_last_ip = 0x006E; emu_last_length = 0x0010; emu_last_crc = 0xF80A;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x0072; emu_last_cs = 0x261F; emu_last_ip = 0x0072; emu_last_length = 0x0010; emu_last_crc = 0xF80A; emu_call();
l__007B:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x98));
	emu_push(emu_cs); emu_push(0x0088); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
l__0088:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0x0) goto l__0062;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0x0) goto l__00A8;
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x009E); emu_cs = 0x3500; emu_ip = 0x0020; emu_last_cs = 0x261F; emu_last_ip = 0x0099; emu_last_length = 0x0016; emu_last_crc = 0x3265; emu_call();
	/* Unresolved jump */ emu_ip = 0x009E; emu_last_cs = 0x261F; emu_last_ip = 0x009E; emu_last_length = 0x0016; emu_last_crc = 0x3265; emu_call();
l__00A8:
	emu_ax = 0x50;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9882;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00B6); emu_cs = 0x01F7; f__01F7_276F_000F_E56B();
l__00B6:
	emu_addw(&emu_sp, 0x6);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__00DF;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x98));
	emu_ax = 0xC;
	emu_push(emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x6C80);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x6C82);
	emu_push(0x00CD);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x261F; emu_last_ip = 0x00C9; emu_last_length = 0x0017; emu_last_crc = 0x107E;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x00CD; emu_last_cs = 0x261F; emu_last_ip = 0x00CD; emu_last_length = 0x0017; emu_last_crc = 0x107E; emu_call();
l__00DF:
	emu_push(emu_ds);
	emu_ax = 0x9882;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00E9); emu_cs = 0x01F7; emu_String_strlen();
l__00E9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_decw(&emu_ax);
	emu_bx = emu_ax;
	emu_cmpb(&emu_get_memory8(emu_ds, emu_bx, 0x9882), 0x5C);
	if (emu_get_memory8(emu_ds, emu_bx, 0x9882) == 0x5C) goto l__0107;
	emu_push(emu_ds);
	emu_ax = 0x6E24;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9882;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0104); emu_cs = 0x01F7; emu_String_strcat();
	/* Unresolved jump */ emu_ip = 0x0104; emu_last_cs = 0x261F; emu_last_ip = 0x0104; emu_last_length = 0x001B; emu_last_crc = 0x0FA7; emu_call();
l__0107:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x98));
	emu_push(emu_ds);
	emu_ax = 0x9882;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0119); emu_cs = 0x01F7; emu_String_strcat();
l__0119:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x8001;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9882;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x012A); emu_cs = 0x01F7; emu_File_Open_Wrapper();
l__012A:
	emu_addw(&emu_sp, 0x6);
	emu_dx = 0x33F4;
	emu_es = emu_dx;
	emu_get_memory16(emu_es, 0x00, 0x128) = emu_ax;
	emu_cmpw(&emu_ax, 0xFFFF);
	if (emu_ax != 0xFFFF) goto l__015D;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x98));
	emu_ax = 0x2;
	emu_push(emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x6C80);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x6C82);
	emu_push(0x014B);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x261F; emu_last_ip = 0x0147; emu_last_length = 0x0021; emu_last_crc = 0xFC59;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x014B; emu_last_cs = 0x261F; emu_last_ip = 0x014B; emu_last_length = 0x0021; emu_last_crc = 0xFC59; emu_call();
l__015D:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0165); emu_cs = 0x01F7; emu_Drive_Set_Default_Wrapper();
l__0165:
	emu_pop(&emu_cx);
	goto l__0175;
l__0168:
	emu_ax = 0x33F4;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_es = emu_ax;
	emu_get_memory16(emu_es, 0x00, 0x128) = emu_dx;
l__0175:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_push(emu_bp);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00, 0x9846);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00, 0x9848);
	emu_push(0x0185);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x217E04F9: emu_Overlay_Load(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x261F; emu_last_ip = 0x0181; emu_last_length = 0x0010; emu_last_crc = 0xC131;
			emu_call();
			return;
	}
l__0185:
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_bp);
	emu_sti();
	emu_ax = 0x33F4;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x128));
	emu_push(emu_cs); emu_push(0x019F); emu_cs = 0x01F7; emu_File_Close_Wrapper();
l__019F:
	emu_pop(&emu_cx);
	emu_ax = 0x33F4;
	emu_es = emu_ax;
	emu_get_memory16(emu_es, 0x00, 0x128) = 0xFFFF;
	emu_decb(&emu_get_memory8(emu_ds, 0x00, 0x986C));
	emu_pop(&emu_bp);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}
