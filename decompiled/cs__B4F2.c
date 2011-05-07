/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4F2_11CF_0013_5635()
 *
 * @name f__B4F2_11CF_0013_5635
 * @implements B4F2:11CF:0013:5635 ()
 * @implements B4F2:11E2:0018:1D91
 * @implements B4F2:11FA:000E:5317
 * @implements B4F2:1208:0011:0023
 * @implements B4F2:1214:0005:D7FA
 * @implements B4F2:121D:0004:893F
 *
 * Called From: B4F2:0131:000F:54A6
 */
void f__B4F2_11CF_0013_5635()
{
l__11CF:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_al = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x11E2); emu_cs = 0x01F7; emu_Drive_Get_Free_Space();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__11E2:
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0xFFFF) { /* Unresolved jump */ emu_ip = 0x1219; emu_last_cs = 0xB4F2; emu_last_ip = 0x11E9; emu_last_length = 0x0018; emu_last_crc = 0x1D91; emu_call(); return; }
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_xorw(&emu_cx, emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_cs); emu_push(0x11FA); emu_cs = 0x01F7; emu_Tools_MulCSIP_csip();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__11FA:
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(emu_dx);
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_push(emu_cs); emu_push(0x1208); emu_cs = 0x01F7; emu_Tools_MulCSIP_csip();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__1208:
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if ((int16)emu_dx < (int16)emu_get_memory16(emu_ss, emu_bp,  0x8)) { /* Unresolved jump */ emu_ip = 0x1219; emu_last_cs = 0xB4F2; emu_last_ip = 0x120B; emu_last_length = 0x0011; emu_last_crc = 0x0023; emu_call(); return; }
	if ((int16)emu_dx <= (int16)emu_get_memory16(emu_ss, emu_bp,  0x8)) {
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
		if (emu_ax <= emu_get_memory16(emu_ss, emu_bp,  0x6)) { /* Unresolved jump */ emu_ip = 0x1219; emu_last_cs = 0xB4F2; emu_last_ip = 0x1212; emu_last_length = 0x0011; emu_last_crc = 0x0023; emu_call(); return; }
	}
l__1214:
	emu_ax = 0x1;
	goto l__121D;
l__121D:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_String_Get_ByIndex()
 *
 * @name emu_GUI_String_Get_ByIndex
 * @implements B4F2:1303:0017:56DB ()
 * @implements B4F2:131A:0007:E192
 * @implements B4F2:1321:002F:0347
 * @implements B4F2:1348:0008:E6C9
 * @implements B4F2:134E:0002:EEBA
 * @implements B4F2:1350:000C:3803
 * @implements B4F2:135C:0007:E7C3
 * @implements B4F2:135F:0004:4EB2
 * @implements B4F2:1363:000C:3983
 * @implements B4F2:136F:0005:107C
 * @implements B4F2:1372:0002:B5BA
 * @implements B4F2:1374:000C:B6A3
 * @implements B4F2:1380:000C:3A83
 * @implements B4F2:138C:0005:02FC
 * @implements B4F2:138F:0002:A73A
 * @implements B4F2:1391:000C:3A03
 * @implements B4F2:139D:0005:3B7C
 * @implements B4F2:13A0:0002:9EBA
 * @implements B4F2:13A2:0002:C03A
 * @implements B4F2:13A4:0006:6B66
 * @implements B4F2:13AA:0003:9B9A
 * @implements B4F2:13AD:0005:8BCF
 *
 * Called From: B4F2:08A7:000F:B3B1
 * Called From: B4F2:08F4:002A:5752
 * Called From: B4F2:08F4:0028:5BF2
 * Called From: B4F2:090B:000F:E61A
 * Called From: B4F2:097D:0037:8E4A
 * Called From: B4F2:0A09:000B:51A5
 * Called From: B4F2:0A09:0005:3DBD
 * Called From: B4F2:0B97:0051:E4E8
 * Called From: B4F2:0B97:000D:1EAE
 * Called From: B4F2:1094:0022:D216
 * Called From: B4F2:1094:000C:2AAD
 * Called From: B4F2:125D:001A:72DC
 */
void emu_GUI_String_Get_ByIndex()
{
l__1303:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_bx = emu_si;
	emu_subw(&emu_bx, 0xFFF2);
	emu_cmpw(&emu_bx, 0xD);
	if (emu_bx <= 0xD) goto l__131A;
	goto l__13A2;
l__131A:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x13B2);
	switch (emu_ip) {
		case 0x1321: goto l__1321;
		case 0x1350: goto l__1350;
		case 0x1363: goto l__1363;
		case 0x1374: goto l__1374;
		case 0x1380: goto l__1380;
		case 0x1391: goto l__1391;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x131C; emu_last_length = 0x0007; emu_last_crc = 0xE192;
			emu_call();
			return;
	}
l__1321:
	emu_ax = emu_si;
	emu_negw(&emu_ax, emu_ax);
	emu_dx = 0x33;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x8081);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
		emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	}
l__1348:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
l__134E:
	goto l__13AD;
l__1350:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x41C2) == 0x0) goto l__135C;
	emu_ax = 0x69;
	goto l__135F;
l__135C:
	emu_ax = 0x6A;
l__135F:
	emu_si = emu_ax;
	goto l__13A4;
l__1363:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C4), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x41C4) == 0x0) goto l__136F;
	emu_ax = 0x69;
	goto l__1372;
l__136F:
	emu_ax = 0x6A;
l__1372:
	goto l__135F;
l__1374:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x3900);
	emu_shlw(&emu_bx, 0x1);
	emu_si = emu_get_memory16(emu_ds, emu_bx, 0x2AAD);
	goto l__13A4;
l__1380:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C8), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x41C8) == 0x0) goto l__138C;
	emu_ax = 0x69;
	goto l__138F;
l__138C:
	emu_ax = 0x6A;
l__138F:
	goto l__135F;
l__1391:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41CA), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x41CA) == 0x0) goto l__139D;
	emu_ax = 0x69;
	goto l__13A0;
l__139D:
	emu_ax = 0x6A;
l__13A0:
	goto l__135F;
l__13A2:
	goto l__13A4;
l__13A4:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x13AA); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__13AA:
	emu_pop(&emu_cx);
	goto l__134E;
l__13AD:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
