#include <stdlib.h>
#include "types.h"
#include "libemu.h"
#include "../decompiled/decompiled.h"

/**
 * Decompiled function f__01F7_0229_0004_04C0()
 *  Patched for different return-values in rare cases.
 *
 * @name p__01F7_0229_0004_04C0
 * @implements 01F7:0229:0004:04C0 ()
 */
void p__01F7_0229_0004_04C0()
{
	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx.x,  0x2);
	emu_push(0x022D);
	switch (emu_ip) {
		case 0x0F45: f__01F7_0F45_004B_D392(); break;
		case 0x20B5: f__01F7_20B5_0076_659B(); break;
		case 0x21FA: f__01F7_21FA_0012_F153(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0229; emu_last_length = 0x0004; emu_last_crc = 0x04C0;
			emu_call();
			return;
	}

	switch (emu_ip) {
		case 0x0138: f__01F7_0138_0019_69C0(); return;
		case 0x022D: f__01F7_022D_0003_02EE(); return;
		default: exit(1);
	}
}

/**
 * Decompiled function f__2533_000D_001C_DBFD()
 *  Patched to avoid stack overflow.
 *
 * @name p__2533_000D_001C_DBFD
 * @implements 2533:000D:001C:DBFD ()
 * @implements 2533:0024:0005:104E
 * @implements 2533:0029:0007:3AA6
 * @implements 2533:0030:0013:0347
 * @implements 2533:0031:0012:0177
 * @implements 2533:0043:0009:EE82
 * @implements 2533:0045:0007:4882
 */
void p__2533_000D_001C_DBFD()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0xF);
loop:
	usleep(0);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x2BEE; f__2BEE_000E_0009_9317();

	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) {
		emu_incw(&emu_si);
	} else {
		emu_incw(&emu_di);
	}

	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { goto loop; }
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) {
		emu_xorw(&emu_ax.x, emu_ax.x);
	} else {
		emu_movw(&emu_ax.x, 0x1);
	}

	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x66C9), emu_ax.x);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__259E_022C_001C_3F7C()
 *  Patched to avoid stack overflow.
 *
 * @name p__259E_022C_001C_3F7C
 * @implements 259E:022C:001C:3F7C ()
 */
void p__259E_022C_001C_3F7C()
{
loop:
	usleep(0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76A8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.cf) { emu_ip = 0x022C; emu_last_cs = 0x259E; emu_last_ip = 0x0236; emu_last_length = 0x001C; emu_last_crc = 0x3F7C; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { f__259E_023F_0009_0E1F(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_flags.cf) goto loop;
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0248; emu_last_cs = 0x259E; emu_last_ip = 0x0243; emu_last_length = 0x001C; emu_last_crc = 0x3F7C; emu_call(); return; } // Jump does not resolve
	f__259E_018E_0022_76EF(); return;
}

/**
 * Decompiled function f__B4BE_0178_002F_47DB()
 *  Patched to avoid stack overflow.
 *
 * @name p__B4BE_0178_002F_47DB
 * @implements B4BE:0178:002F:47DB ()
 */
void p__B4BE_0178_002F_47DB()
{
loop:
	usleep(0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto loop;
	if (!emu_flags.zf) { f__B4BE_018C_001B_EE22(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!(emu_flags.cf || emu_flags.zf)) goto loop;
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_incw(&emu_di);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x01A7); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_01A7_0012_4BEF();
}

/**
 * Decompiled function f__B4BE_01DC_0002_039C()
 *  Patched to avoid stack overflow.
 *
 * @name p__B4BE_01DC_0002_039C
 * @implements B4BE:01DC:0002:039C ()
 * @implements B4BE:01DE:0005:14B2
 * @implements B4BE:01E3:0011:6647
 * @implements B4BE:01F6:001A:F321 ()
 */
void p__B4BE_01DC_0002_039C()
{
loop:
	usleep(0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));

	if (!emu_flags.zf) {
		emu_push(emu_cs); emu_push(0x01E3); emu_cs = 0x29E8; f__29E8_0643_0008_40B8();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
		emu_orw(&emu_ax.x, emu_ax.x);
		if (emu_flags.zf) goto loop;
		emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B4), 0x0);
		if (emu_flags.zf) goto loop;
		emu_movw(&emu_si, 0x1);
		f__B4BE_0389_0011_7C74(); return;
		return;
	}
	emu_movw(&emu_ax.x, 0x3C);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x0210); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0210_0005_1FBC();
}

/**
 * Decompiled function f__B4BE_02B9_0011_367E()
 *  Patched to avoid stack overflow.
 *
 * @name p__B4BE_02B9_0011_367E
 * @implements B4BE:02B9:0011:367E ()
 * @implements B4BE:02CA:0005:14B2
 * @implements B4BE:02CF:000E:37BD
 * @implements B4BE:02DF:001A:F3F7
 */
void p__B4BE_02B9_0011_367E()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x3C);

loop:
	usleep(0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) {
		emu_push(emu_cs); emu_push(0x02CF); emu_cs = 0x29E8; f__29E8_0643_0008_40B8();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
		emu_orw(&emu_ax.x, emu_ax.x);
		if (emu_flags.zf) goto loop;
		emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B4), 0x0);
		if (emu_flags.zf) goto loop;
		f__B4BE_01EE_0006_2ABE();
		return;
	}
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x02F9); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_02F9_000B_5327();
}

/**
 * Decompiled function f__B4BE_035A_0011_3EFE()
 *  Patched to avoid stack overflow.
 *
 * @name p__B4BE_035A_0011_3EFE
 * @implements B4BE:035A:0011:3EFE ()
 * @implements B4BE:036B:0005:14B2
 * @implements B4BE:0370:000E:363B
 * @implements B4BE:0380:001A:F3F7
 */
void p__B4BE_035A_0011_3EFE()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0xB4);

loop:
	usleep(0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) {
		emu_push(emu_cs); emu_push(0x0370); emu_cs = 0x29E8; f__29E8_0643_0008_40B8();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
		emu_orw(&emu_ax.x, emu_ax.x);
		if (emu_flags.zf) goto loop;
		emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B4), 0x0);
		if (emu_flags.zf) goto loop;
		f__B4BE_01EE_0006_2ABE();
		return;
	}
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x039A); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_039A_000B_5327();
}

/**
 * Decompiled function f__B4ED_0603_0008_50C0()
 *  Patched to avoid stack overflow.
 *
 * @name p__B4ED_0603_0008_50C0
 * @implements B4ED:0603:0008:50C0 ()
 * @implements B4ED:060B:002D:2AF7
 */
void p__B4ED_0603_0008_50C0()
{
loop:
	usleep(0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x060B); f__B4ED_0AA5_0010_6060();

	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (emu_flags.zf) { f__B4ED_0629_000F_B205(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto loop;
	if (!emu_flags.zf) { emu_ip = 0x0629; emu_last_cs = 0xB4ED; emu_last_ip = 0x0621; emu_last_length = 0x002D; emu_last_crc = 0x2AF7; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!(emu_flags.cf || emu_flags.zf)) goto loop;
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4ED_0638_000B_AE91(); return; }
	emu_ip = 0x0598; emu_last_cs = 0xB4ED; emu_last_ip = 0x0635; emu_last_length = 0x002D; emu_last_crc = 0x2AF7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4ED_072B_0022_81E9()
 *  Patched to avoid stack overflow.
 *
 * @name p__B4ED_072B_0022_81E9
 * @implements B4ED:072B:0022:81E9 ()
 */
void p__B4ED_072B_0022_81E9()
{
loop:
	usleep(0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto loop;
	if (!emu_flags.zf) { emu_ip = 0x073F; emu_last_cs = 0xB4ED; emu_last_ip = 0x0737; emu_last_length = 0x0022; emu_last_crc = 0x81E9; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!(emu_flags.cf || emu_flags.zf)) goto loop;
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7FA2));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4), 0x0);
	if (emu_flags.zf) { f__B4ED_074D_0002_03AC(); return; }
	f__B4ED_020F_0044_5381(); return;
}

/**
 * Decompiled function f__B488_01D6_0021_CD5C()
 *  Patched to avoid stack overflow.
 *
 * @name p__B488_01D6_0021_CD5C
 * @implements B488:01D6:0021:CD5C ()
 */
void p__B488_01D6_0021_CD5C()
{
loop:
	usleep(0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76A8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (emu_flags.cf) goto loop;
	if (!emu_flags.zf) { emu_ip = 0x01E9; emu_last_cs = 0xB488; emu_last_ip = 0x01E2; emu_last_length = 0x0021; emu_last_crc = 0xCD5C; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_flags.cf) goto loop;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.cf) { f__B488_01F7_000B_E053(); return; }
	f__B488_012E_000B_324C(); return;
}
