/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B48B_0000_001E_7E97()
 *
 * @name f__B48B_0000_001E_7E97
 * @implements B48B:0000:001E:7E97 ()
 * @implements B48B:0024:0002:EF3A
 * @implements B48B:0026:0016:3673
 * @implements B48B:003C:002E:CE21
 * @implements B48B:004C:001E:A15E
 * @implements B48B:006A:001A:DFCC
 * @implements B48B:0076:000E:0C48
 * @implements B48B:0084:0004:893F
 *
 * Called From: 348B:0020:0005:0000
 * Called From: B48B:02F7:003C:DD44
 * Called From: B48B:02F7:0058:1F2E
 */
void f__B48B_0000_001E_7E97()
{
l__0000:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x001E; emu_last_cs = 0xB48B; emu_last_ip = 0x000C; emu_last_length = 0x001E; emu_last_crc = 0x7E97; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
	goto l__0026;
l__0024:
	goto l__0084;
l__0026:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) goto l__006A;
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	goto l__004C;
l__003C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx);
	goto l__004C;
l__004C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	if (!emu_flags.zf) goto l__003C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_dx);
	goto l__0076;
l__006A:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	goto l__0076;
l__0076:
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6D75), 0x1);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__0024;
l__0084:
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_0088_0029_3A68()
 *
 * @name f__B48B_0088_0029_3A68
 * @implements B48B:0088:0029:3A68 ()
 * @implements B48B:00B1:000A:9966
 * @implements B48B:00B3:0008:0F0A
 * @implements B48B:00BB:0002:2597
 *
 * Called From: 348B:0025:0005:0000
 */
void f__B48B_0088_0029_3A68()
{
l__0088:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) goto l__00B3;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x8);
	if (!emu_flags.zf) goto l__00B3;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00B1); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	goto l__00B1;
l__00B1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__00B3;
l__00B3:
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	goto l__00BB;
l__00BB:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_00BD_0029_3530()
 *
 * @name f__B48B_00BD_0029_3530
 * @implements B48B:00BD:0029:3530 ()
 * @implements B48B:00E6:000A:9966
 * @implements B48B:00E8:0008:0F0A
 * @implements B48B:00F0:0002:2597
 *
 * Called From: 348B:002A:0005:0000
 */
void f__B48B_00BD_0029_3530()
{
l__00BD:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) goto l__00E8;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x8);
	if (emu_flags.zf) goto l__00E8;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0xFFF7);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00E6); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	goto l__00E6;
l__00E6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__00E8;
l__00E8:
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	goto l__00F0;
l__00F0:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_00F2_0005_601A()
 *
 * @name f__B48B_00F2_0005_601A
 * @implements B48B:00F2:0005:601A ()
 * @implements B48B:00F7:000E:11CF
 * @implements B48B:0105:0020:190A
 * @implements B48B:0115:0010:C2D5
 * @implements B48B:011D:0008:0F0A
 * @implements B48B:0125:0002:2597
 *
 * Called From: 348B:002F:0005:0000
 */
void f__B48B_00F2_0005_601A()
{
l__00F2:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	goto l__0115;
l__00F7:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (!emu_flags.zf) goto l__0105;
	goto l__011D;
l__0105:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx);
	goto l__0115;
l__0115:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) goto l__00F7;
	goto l__011D;
l__011D:
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	goto l__0125;
l__0125:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_0127_000E_E325()
 *
 * @name f__B48B_0127_000E_E325
 * @implements B48B:0127:000E:E325 ()
 * @implements B48B:0135:000E:EE25
 * @implements B48B:0143:0015:1A4F
 * @implements B48B:0158:002D:49A8
 * @implements B48B:0160:0025:9ED0
 * @implements B48B:0185:001B:BAF2
 * @implements B48B:018D:0013:6710
 * @implements B48B:01A0:0022:19B9
 * @implements B48B:01C4:0008:0F0A
 * @implements B48B:01CC:0002:2597
 *
 * Called From: 348B:0034:0005:0000
 */
void f__B48B_0127_000E_E325()
{
l__0127:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) goto l__0135;
	goto l__01C4;
l__0135:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x8);
	if (emu_flags.zf) goto l__0143;
	goto l__01C4;
l__0143:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x1);
	if (emu_flags.zf) goto l__0158;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x8);
	goto l__0160;
l__0158:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFF7);
	goto l__0160;
l__0160:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFFE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFFD);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x4);
	if (emu_flags.zf) goto l__0185;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x10);
	goto l__018D;
l__0185:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFEF);
	goto l__018D;
l__018D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFFB);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x01A0); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	goto l__01A0;
l__01A0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) goto l__01C4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x30));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x32));
	if (emu_flags.zf) goto l__01C4;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx, 0x30);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx, 0x32);
	emu_push(0x01C2);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB48B; emu_last_ip = 0x01BE; emu_last_length = 0x0022; emu_last_crc = 0x19B9;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x01C2; emu_last_cs = 0xB48B; emu_last_ip = 0x01BE; emu_last_length = 0x0022; emu_last_crc = 0x19B9; emu_call();
l__01C4:
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	goto l__01CC;
l__01CC:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_01CE_002B_7574()
 *
 * @name f__B48B_01CE_002B_7574
 * @implements B48B:01CE:002B:7574 ()
 * @implements B48B:01F9:001B:35F3
 * @implements B48B:0201:0013:6810
 * @implements B48B:0214:0022:19B9
 * @implements B48B:0238:0008:0F0A
 * @implements B48B:0240:0002:2597
 *
 * Called From: 348B:0039:0005:0000
 */
void f__B48B_01CE_002B_7574()
{
l__01CE:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) goto l__0238;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x8);
	if (!emu_flags.zf) goto l__0238;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x1);
	if (emu_flags.zf) goto l__01F9;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x8);
	goto l__0201;
l__01F9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFF7);
	goto l__0201;
l__0201:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x1);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0214); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	goto l__0214;
l__0214:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) goto l__0238;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x30));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x32));
	if (emu_flags.zf) goto l__0238;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx, 0x30);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx, 0x32);
	emu_push(0x0236);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB48B; emu_last_ip = 0x0232; emu_last_length = 0x0022; emu_last_crc = 0x19B9;
			emu_call();
			return;
	}
	/* Unresolved jump */ emu_ip = 0x0236; emu_last_cs = 0xB48B; emu_last_ip = 0x0232; emu_last_length = 0x0022; emu_last_crc = 0x19B9; emu_call();
l__0238:
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	goto l__0240;
l__0240:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_0242_0017_581D()
 *
 * @name f__B48B_0242_0017_581D
 * @implements B48B:0242:0017:581D ()
 * @implements B48B:0256:0003:DD16
 * @implements B48B:0259:0010:340C
 * @implements B48B:0269:0034:5F53
 * @implements B48B:02A0:0002:CE3A
 * @implements B48B:02A2:0058:1F2E
 * @implements B48B:02BE:003C:DD44
 * @implements B48B:02DA:0020:1036
 * @implements B48B:02FA:000B:4C0E
 * @implements B48B:0305:002F:4AF9
 * @implements B48B:0325:000F:DBE6
 * @implements B48B:0334:0004:893F
 *
 * Called From: 348B:003E:0005:0000
 */
void f__B48B_0242_0017_581D()
{
l__0242:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) goto l__0259;
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	goto l__0256;
l__0256:
	goto l__0334;
l__0259:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) goto l__0269;
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	goto l__0256;
l__0269:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	if (!(emu_flags.cf || emu_flags.zf)) goto l__02A0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_dx);
	/* Unresolved jump */ emu_ip = 0x0250; emu_last_cs = 0xB48B; emu_last_ip = 0x029B; emu_last_length = 0x0034; emu_last_crc = 0x5F53; emu_call();
l__02A0:
	goto l__02BE;
l__02A2:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx);
	goto l__02BE;
l__02BE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	if (!(emu_flags.cf || emu_flags.zf)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
		emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
		if (!emu_flags.zf) goto l__02A2;
	}
	goto l__02DA;
l__02DA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	if ((emu_flags.cf || emu_flags.zf)) goto l__0305;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x02FA); f__B48B_0000_001E_7E97();
	goto l__02FA;
l__02FA:
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax);
	goto l__0325;
l__0305:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_dx);
	goto l__0325;
l__0325:
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6D75), 0x1);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__0256;
l__0334:
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_03A4_0005_619A()
 *
 * @name f__B48B_03A4_0005_619A
 * @implements B48B:03A4:0005:619A ()
 * @implements B48B:03A9:000B:848D
 * @implements B48B:03B4:001C:8029
 * @implements B48B:03C6:000A:5244
 *
 * Called From: 348B:0043:0005:0000
 */
void f__B48B_03A4_0005_619A()
{
l__03A4:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	goto l__03C6;
l__03A9:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03B4); emu_cs = 0x34A2; ovl__34A2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { ovl__348B(0xFF); }
	goto l__03B4;
l__03B4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx);
	goto l__03C6;
l__03C6:
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) goto l__03A9;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
