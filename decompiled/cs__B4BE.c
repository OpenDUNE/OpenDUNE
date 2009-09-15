/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4BE_0000_000C_C92F()
 *
 * @name f__B4BE_0000_000C_C92F
 * @implements B4BE:0000:000C:C92F ()
 *
 * Called From: 34BE:0020:0005:1C7E
 * Called From: 34BE:0020:0005:1CAC
 * Called From: 34BE:0020:0005:1CC2
 * Called From: 34BE:0020:0005:1CD8
 * Called From: 34BE:0020:0005:1D80
 * Called From: 34BE:0020:0005:1D8E
 * Called From: 34BE:0020:0005:1E1A
 * Called From: 34BE:0020:0005:1E50
 * Called From: 34BE:0020:0005:1EBC
 * Called From: 34BE:0020:0005:1EFA
 * Called From: 34BE:0020:0005:1F00
 * Called From: 34BE:0020:0005:1F3A
 */
void f__B4BE_0000_000C_C92F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x000C); emu_cs = 0x34E9; ovl__34E9(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_000C_000B_7F21();
}

/**
 * Decompiled function f__B4BE_000C_000B_7F21()
 *
 * @name f__B4BE_000C_000B_7F21
 * @implements B4BE:000C:000B:7F21 ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4BE:000C:000C:C92F
 */
void f__B4BE_000C_000B_7F21()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x23AA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0017); emu_cs = 0x0FCB; f__0FCB_000D_0019_1BED();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0017_0007_2ED4();
}

/**
 * Decompiled function f__B4BE_0017_0007_2ED4()
 *
 * @name f__B4BE_0017_0007_2ED4
 * @implements B4BE:0017:0007:2ED4 ()
 *
 * Called From: B4BE:0017:000B:7F21
 */
void f__B4BE_0017_0007_2ED4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs);
	emu_push(0x001E); f__B4BE_008B_0012_6EB9();
	f__B4BE_001E_0005_14B2();
}

/**
 * Decompiled function f__B4BE_001E_0005_14B2()
 *
 * @name f__B4BE_001E_0005_14B2
 * @implements B4BE:001E:0005:14B2 ()
 *
 * Called From: B4BE:001E:0007:2ED4
 */
void f__B4BE_001E_0005_14B2()
{
	emu_push(emu_cs); emu_push(0x0023); emu_cs = 0x29E8; f__29E8_0643_0008_40B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0023_0014_37AE();
}

/**
 * Decompiled function f__B4BE_0023_0014_37AE()
 *
 * @name f__B4BE_0023_0014_37AE
 * @implements B4BE:0023:0014:37AE ()
 *
 * Called From: B4BE:0023:0005:14B2
 */
void f__B4BE_0023_0014_37AE()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4BE_002E_0009_6C75(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B4), 0x0);
	if (!emu_flags.zf) { f__B4BE_0073_0008_552C(); return; }
	emu_movw(&emu_ax.x, 0x1B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0037); emu_cs = 0x3483; emu_ip = 0x005C; emu_last_cs = 0xB4BE; emu_last_ip = 0x0032; emu_last_length = 0x0014; emu_last_crc = 0x37AE; emu_call(); // Jump does not resolve
	f__B4BE_0037_002A_5064();
}

/**
 * Decompiled function f__B4BE_002E_0009_6C75()
 *
 * @name f__B4BE_002E_0009_6C75
 * @implements B4BE:002E:0009:6C75 ()
 *
 * Called From: B4BE:0025:0014:37AE
 */
void f__B4BE_002E_0009_6C75()
{
	emu_movw(&emu_ax.x, 0x1B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0037); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0037_002A_5064();
}

/**
 * Decompiled function f__B4BE_0037_002A_5064()
 *
 * @name f__B4BE_0037_002A_5064
 * @implements B4BE:0037:002A:5064 ()
 *
 * Called From: B4BE:0037:0009:6C75
 */
void f__B4BE_0037_002A_5064()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2C6B);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2C5B);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4A);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2C4D);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2C41);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0061); emu_cs = 0x34ED; ovl__34ED(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0061_0008_F7BC();
}

/**
 * Decompiled function f__B4BE_0061_0008_F7BC()
 *
 * @name f__B4BE_0061_0008_F7BC
 * @implements B4BE:0061:0008:F7BC ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4BE:0061:002A:5064
 */
void f__B4BE_0061_0008_F7BC()
{
	emu_addws(&emu_sp, 0x12);
	emu_push(emu_cs); emu_push(0x0069); emu_cs = 0x34ED; ovl__34ED(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0069_0005_154E();
}

/**
 * Decompiled function f__B4BE_0069_0005_154E()
 *
 * @name f__B4BE_0069_0005_154E
 * @implements B4BE:0069:0005:154E ()
 *
 * Called From: B4BE:0069:0008:F7BC
 */
void f__B4BE_0069_0005_154E()
{
	emu_push(emu_cs); emu_push(0x006E); emu_cs = 0x1DD7; f__1DD7_0B53_0025_71E0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_006E_0005_12CC();
}

/**
 * Decompiled function f__B4BE_006E_0005_12CC()
 *
 * @name f__B4BE_006E_0005_12CC
 * @implements B4BE:006E:0005:12CC ()
 *
 * Called From: B4BE:006E:0005:154E
 */
void f__B4BE_006E_0005_12CC()
{
	emu_push(emu_cs); emu_push(0x0073); emu_cs = 0x34ED; ovl__34ED(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0073_0008_552C();
}

/**
 * Decompiled function f__B4BE_0073_0008_552C()
 *
 * @name f__B4BE_0073_0008_552C
 * @implements B4BE:0073:0008:552C ()
 *
 * Called From: B4BE:002C:0014:37AE
 * Called From: B4BE:0073:0005:12CC
 */
void f__B4BE_0073_0008_552C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x007B); emu_cs = 0x34E9; ovl__34E9(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_007B_000C_9025();
}

/**
 * Decompiled function f__B4BE_007B_000C_9025()
 *
 * @name f__B4BE_007B_000C_9025
 * @implements B4BE:007B:000C:9025 ()
 *
 * Called From: B4BE:007B:0008:552C
 */
void f__B4BE_007B_000C_9025()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0087); emu_cs = 0x0FCB; f__0FCB_000D_0019_1BED();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0087_0004_07BA();
}

/**
 * Decompiled function f__B4BE_0087_0004_07BA()
 *
 * @name f__B4BE_0087_0004_07BA
 * @implements B4BE:0087:0004:07BA ()
 *
 * Called From: B4BE:0087:000C:9025
 */
void f__B4BE_0087_0004_07BA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4BE_008B_0012_6EB9()
 *
 * @name f__B4BE_008B_0012_6EB9
 * @implements B4BE:008B:0012:6EB9 ()
 *
 * Called From: B4BE:001B:0007:2ED4
 */
void f__B4BE_008B_0012_6EB9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x009D); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_009D_0011_F948();
}

/**
 * Decompiled function f__B4BE_009D_0011_F948()
 *
 * @name f__B4BE_009D_0011_F948
 * @implements B4BE:009D:0011:F948 ()
 *
 * Called From: B4BE:009D:0012:6EB9
 */
void f__B4BE_009D_0011_F948()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x00AE); emu_cs = 0x259E; f__259E_0040_0015_2233();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_00AE_000C_8E09();
}

/**
 * Decompiled function f__B4BE_00AE_000C_8E09()
 *
 * @name f__B4BE_00AE_000C_8E09
 * @implements B4BE:00AE:000C:8E09 ()
 *
 * Called From: B4BE:00AE:0011:F948
 */
void f__B4BE_00AE_000C_8E09()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6640);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6642);
	emu_push(0x00BA);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60796: f__22A6_0796_000B_3851(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4BE; emu_last_ip = 0x00B5; emu_last_length = 0x000C; emu_last_crc = 0x8E09;
			emu_call();
			return;
	}
	f__B4BE_00BA_0019_B9EA();
}

/**
 * Decompiled function f__B4BE_00BA_0019_B9EA()
 *
 * @name f__B4BE_00BA_0019_B9EA
 * @implements B4BE:00BA:0019:B9EA ()
 *
 * Called From: B4BE:00BA:000C:8E09
 */
void f__B4BE_00BA_0019_B9EA()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x23B0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00D3); emu_cs = 0x253D; f__253D_0000_0013_AAD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_00D3_002F_8201();
}

/**
 * Decompiled function f__B4BE_00D3_002F_8201()
 *
 * @name f__B4BE_00D3_002F_8201
 * @implements B4BE:00D3:002F:8201 ()
 *
 * Called From: B4BE:00D3:0019:B9EA
 */
void f__B4BE_00D3_002F_8201()
{
	emu_addws(&emu_sp, 0xC);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6CE1));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6CDF));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6CE7));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6CE9));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6CEF));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6CF1));
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0102); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0102_000D_210F();
}

/**
 * Decompiled function f__B4BE_0102_000D_210F()
 *
 * @name f__B4BE_0102_000D_210F
 * @implements B4BE:0102:000D:210F ()
 *
 * Called From: B4BE:0102:002F:8201
 */
void f__B4BE_0102_000D_210F()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x23BD);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x010F); emu_cs = 0x352A; ovl__352A(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_010F_0025_CBB9();
}

/**
 * Decompiled function f__B4BE_010F_0025_CBB9()
 *
 * @name f__B4BE_010F_0025_CBB9
 * @implements B4BE:010F:0025:CBB9 ()
 *
 * Called From: B4BE:010F:000D:210F
 */
void f__B4BE_010F_0025_CBB9()
{
	emu_addws(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0134); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0134_0014_3139();
}

/**
 * Decompiled function f__B4BE_0134_0014_3139()
 *
 * @name f__B4BE_0134_0014_3139
 * @implements B4BE:0134:0014:3139 ()
 *
 * Called From: B4BE:0134:0025:CBB9
 */
void f__B4BE_0134_0014_3139()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x3C);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x0148); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0148_000C_5B7B();
}

/**
 * Decompiled function f__B4BE_0148_000C_5B7B()
 *
 * @name f__B4BE_0148_000C_5B7B
 * @implements B4BE:0148:000C:5B7B ()
 *
 * Called From: B4BE:0148:0014:3139
 */
void f__B4BE_0148_000C_5B7B()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x24);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0154); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0154_000F_B2A3();
}

/**
 * Decompiled function f__B4BE_0154_000F_B2A3()
 *
 * @name f__B4BE_0154_000F_B2A3
 * @implements B4BE:0154:000F:B2A3 ()
 *
 * Called From: B4BE:0154:000C:5B7B
 */
void f__B4BE_0154_000F_B2A3()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x168);
	f__B4BE_018C_001B_EE22(); return;
}

/**
 * Decompiled function f__B4BE_0163_0015_D253()
 *
 * @name f__B4BE_0163_0015_D253
 * @implements B4BE:0163:0015:D253 ()
 *
 * Called From: B4BE:01AC:0012:4BEF
 */
void f__B4BE_0163_0015_D253()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x6);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	p__B4BE_0178_002F_47DB(); return;
}

/**
 * Decompiled function f__B4BE_018C_001B_EE22()
 *
 * @name f__B4BE_018C_001B_EE22
 * @implements B4BE:018C:001B:EE22 ()
 *
 * Called From: B4BE:0161:000F:B2A3
 * Called From: B4BE:0184:002F:47DB
 */
void f__B4BE_018C_001B_EE22()
{
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
 * Decompiled function f__B4BE_01A7_0012_4BEF()
 *
 * @name f__B4BE_01A7_0012_4BEF
 * @implements B4BE:01A7:0012:4BEF ()
 *
 * Called From: B4BE:01A7:001B:EE22
 * Called From: B4BE:01A7:002F:47DB
 */
void f__B4BE_01A7_0012_4BEF()
{
	emu_addws(&emu_sp, 0xE);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4BE_0163_0015_D253(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x01B9); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_01B9_000E_34A4();
}

/**
 * Decompiled function f__B4BE_01B9_000E_34A4()
 *
 * @name f__B4BE_01B9_000E_34A4
 * @implements B4BE:01B9:000E:34A4 ()
 *
 * Called From: B4BE:01B9:0012:4BEF
 */
void f__B4BE_01B9_000E_34A4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B4), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01D2; emu_last_cs = 0xB4BE; emu_last_ip = 0x01C0; emu_last_length = 0x000E; emu_last_crc = 0x34A4; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x29E8; f__29E8_0643_0008_40B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_01C7_0014_9917();
}

/**
 * Decompiled function f__B4BE_01C7_0014_9917()
 *
 * @name f__B4BE_01C7_0014_9917
 * @implements B4BE:01C7:0014:9917 ()
 *
 * Called From: B4BE:01C7:000E:34A4
 */
void f__B4BE_01C7_0014_9917()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { p__B4BE_01DC_0002_039C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B4), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01DC; emu_last_cs = 0xB4BE; emu_last_ip = 0x01D0; emu_last_length = 0x0014; emu_last_crc = 0x9917; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01DB); emu_cs = 0x3483; ovl__3483(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_01DB_0003_0154();
}

/**
 * Decompiled function f__B4BE_01DB_0003_0154()
 *
 * @name f__B4BE_01DB_0003_0154
 * @implements B4BE:01DB:0003:0154 ()
 *
 * Called From: B4BE:01DB:0014:9917
 */
void f__B4BE_01DB_0003_0154()
{
	emu_pop(&emu_cx.x);
	p__B4BE_01DC_0002_039C(); return;
}

/**
 * Decompiled function f__B4BE_01EE_0006_2ABE()
 *
 * @name f__B4BE_01EE_0006_2ABE
 * @implements B4BE:01EE:0006:2ABE ()
 *
 * Called From: B4BE:02DA:000E:37BD
 * Called From: B4BE:037B:000E:363B
 */
void f__B4BE_01EE_0006_2ABE()
{
	emu_movw(&emu_si, 0x1);
	f__B4BE_0389_0011_7C74(); return;
}

/**
 * Decompiled function f__B4BE_0210_0005_1FBC()
 *
 * @name f__B4BE_0210_0005_1FBC
 * @implements B4BE:0210:0005:1FBC ()
 *
 * Called From: B4BE:0210:001A:F321
 */
void f__B4BE_0210_0005_1FBC()
{
	emu_addws(&emu_sp, 0x6);
	f__B4BE_0215_0005_18C6(); return;
}

/**
 * Decompiled function f__B4BE_0215_0005_18C6()
 *
 * @name f__B4BE_0215_0005_18C6
 * @implements B4BE:0215:0005:18C6 ()
 *
 * Called From: B4BE:0213:0005:1FBC
 */
void f__B4BE_0215_0005_18C6()
{
	emu_push(emu_cs); emu_push(0x021A); emu_cs = 0x1DD7; f__1DD7_088A_0026_2FF6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_021A_0006_19AC();
}

/**
 * Decompiled function f__B4BE_021A_0006_19AC()
 *
 * @name f__B4BE_021A_0006_19AC
 * @implements B4BE:021A:0006:19AC ()
 *
 * Called From: B4BE:021A:0005:18C6
 */
void f__B4BE_021A_0006_19AC()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x0215; emu_last_cs = 0xB4BE; emu_last_ip = 0x021C; emu_last_length = 0x0006; emu_last_crc = 0x19AC; emu_call(); return; } // Jump does not resolve
	f__B4BE_0234_001A_F3D1(); return;
}

/**
 * Decompiled function f__B4BE_0234_001A_F3D1()
 *
 * @name f__B4BE_0234_001A_F3D1
 * @implements B4BE:0234:001A:F3D1 ()
 *
 * Called From: B4BE:021E:0006:19AC
 */
void f__B4BE_0234_001A_F3D1()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { emu_ip = 0x0220; emu_last_cs = 0xB4BE; emu_last_ip = 0x023B; emu_last_length = 0x001A; emu_last_crc = 0xF3D1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x3C);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x024E); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_024E_000D_C612();
}

/**
 * Decompiled function f__B4BE_024E_000D_C612()
 *
 * @name f__B4BE_024E_000D_C612
 * @implements B4BE:024E:000D:C612 ()
 *
 * Called From: B4BE:024E:001A:F3D1
 */
void f__B4BE_024E_000D_C612()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6640);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6642);
	emu_push(0x025B);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60796: f__22A6_0796_000B_3851(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4BE; emu_last_ip = 0x0256; emu_last_length = 0x000D; emu_last_crc = 0xC612;
			emu_call();
			return;
	}
	f__B4BE_025B_001E_A711();
}

/**
 * Decompiled function f__B4BE_025B_001E_A711()
 *
 * @name f__B4BE_025B_001E_A711
 * @implements B4BE:025B:001E:A711 ()
 *
 * Called From: B4BE:025B:000D:C612
 */
void f__B4BE_025B_001E_A711()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CDB));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x23CA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0279); emu_cs = 0x0642; f__0642_075D_0011_56FC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0279_0009_C400();
}

/**
 * Decompiled function f__B4BE_0279_0009_C400()
 *
 * @name f__B4BE_0279_0009_C400
 * @implements B4BE:0279:0009:C400 ()
 *
 * Called From: B4BE:0279:001E:A711
 */
void f__B4BE_0279_0009_C400()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0282); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0282_0023_7081();
}

/**
 * Decompiled function f__B4BE_0282_0023_7081()
 *
 * @name f__B4BE_0282_0023_7081
 * @implements B4BE:0282:0023:7081 ()
 *
 * Called From: B4BE:0282:0009:C400
 */
void f__B4BE_0282_0023_7081()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02A5); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_02A5_0014_3163();
}

/**
 * Decompiled function f__B4BE_02A5_0014_3163()
 *
 * @name f__B4BE_02A5_0014_3163
 * @implements B4BE:02A5:0014:3163 ()
 *
 * Called From: B4BE:02A5:0023:7081
 */
void f__B4BE_02A5_0014_3163()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x02B9); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	p__B4BE_02B9_0011_367E();
}

/**
 * Decompiled function f__B4BE_02F9_000B_5327()
 *
 * @name f__B4BE_02F9_000B_5327
 * @implements B4BE:02F9:000B:5327 ()
 *
 * Called From: B4BE:02F9:001A:F3F7
 */
void f__B4BE_02F9_000B_5327()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0304); emu_cs = 0x24DA; f__24DA_0004_000E_98E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0304_001F_2691();
}

/**
 * Decompiled function f__B4BE_0304_001F_2691()
 *
 * @name f__B4BE_0304_001F_2691
 * @implements B4BE:0304:001F:2691 ()
 *
 * Called From: B4BE:0304:000B:5327
 */
void f__B4BE_0304_001F_2691()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CDB));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x23CE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0323); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0323_0023_7081();
}

/**
 * Decompiled function f__B4BE_0323_0023_7081()
 *
 * @name f__B4BE_0323_0023_7081
 * @implements B4BE:0323:0023:7081 ()
 *
 * Called From: B4BE:0323:001F:2691
 */
void f__B4BE_0323_0023_7081()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0346); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0346_0014_3163();
}

/**
 * Decompiled function f__B4BE_0346_0014_3163()
 *
 * @name f__B4BE_0346_0014_3163
 * @implements B4BE:0346:0014:3163 ()
 *
 * Called From: B4BE:0346:0023:7081
 */
void f__B4BE_0346_0014_3163()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x035A); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	p__B4BE_035A_0011_3EFE();
}

/**
 * Decompiled function f__B4BE_0389_0011_7C74()
 *
 * @name f__B4BE_0389_0011_7C74
 * @implements B4BE:0389:0011:7C74 ()
 *
 * Called From: B4BE:01F1:0006:2ABE
 * Called From: B4BE:01F1:0011:6647
 */
void f__B4BE_0389_0011_7C74()
{
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
 * Decompiled function f__B4BE_039A_000B_5327()
 *
 * @name f__B4BE_039A_000B_5327
 * @implements B4BE:039A:000B:5327 ()
 *
 * Called From: B4BE:039A:0011:7C74
 * Called From: B4BE:039A:001A:F3F7
 */
void f__B4BE_039A_000B_5327()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03A5); emu_cs = 0x24DA; f__24DA_0004_000E_98E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_03A5_0009_59EA();
}

/**
 * Decompiled function f__B4BE_03A5_0009_59EA()
 *
 * @name f__B4BE_03A5_0009_59EA
 * @implements B4BE:03A5:0009:59EA ()
 *
 * Called From: B4BE:03A5:000B:5327
 */
void f__B4BE_03A5_0009_59EA()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x03AE); emu_cs = 0x2598; f__2598_0000_0017_D681();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_03AE_0003_0164();
}

/**
 * Decompiled function f__B4BE_03AE_0003_0164()
 *
 * @name f__B4BE_03AE_0003_0164
 * @implements B4BE:03AE:0003:0164 ()
 *
 * Called From: B4BE:03AE:0009:59EA
 */
void f__B4BE_03AE_0003_0164()
{
	emu_pop(&emu_cx.x);
	f__B4BE_03B1_0006_137A(); return;
}

/**
 * Decompiled function f__B4BE_03B1_0006_137A()
 *
 * @name f__B4BE_03B1_0006_137A
 * @implements B4BE:03B1:0006:137A ()
 *
 * Called From: B4BE:03AF:0003:0164
 */
void f__B4BE_03B1_0006_137A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
