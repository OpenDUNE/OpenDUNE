/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4BE_0000_000C_E7F4()
 *
 * @name f__B4BE_0000_000C_E7F4
 * @implements B4BE:0000:000C:E7F4 ()
 *
 * Called From: 34BE:0020:0005:0000
 */
void f__B4BE_0000_000C_E7F4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x000C); emu_cs = 0x34E9; ovl__34E9(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_000C_000B_DEF2();
}

/**
 * Decompiled function f__B4BE_000C_000B_DEF2()
 *
 * @name f__B4BE_000C_000B_DEF2
 * @implements B4BE:000C:000B:DEF2 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4BE_000C_000B_DEF2()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x23AA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0017); emu_cs = 0x0FCB; f__0FCB_000D_0019_5047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0017_0007_DD28();
}

/**
 * Decompiled function f__B4BE_0017_0007_DD28()
 *
 * @name f__B4BE_0017_0007_DD28
 * @implements B4BE:0017:0007:DD28 ()
 *
 * Called From: B4BE:0017:000B:DEF2
 */
void f__B4BE_0017_0007_DD28()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs);
	emu_push(0x001E); f__B4BE_008B_0012_DDEE();
	f__B4BE_001E_0005_20AE();
}

/**
 * Decompiled function f__B4BE_001E_0005_20AE()
 *
 * @name f__B4BE_001E_0005_20AE
 * @implements B4BE:001E:0005:20AE ()
 *
 * Called From: B4BE:001E:0007:DD28
 */
void f__B4BE_001E_0005_20AE()
{
	emu_push(emu_cs); emu_push(0x0023); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0023_0014_092E();
}

/**
 * Decompiled function f__B4BE_0023_0014_092E()
 *
 * @name f__B4BE_0023_0014_092E
 * @implements B4BE:0023:0014:092E ()
 *
 * Called From: B4BE:0023:0005:20AE
 */
void f__B4BE_0023_0014_092E()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4BE_002E_0009_D5AF(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B4), 0x0);
	if (!emu_flags.zf) { f__B4BE_0073_0008_8C69(); return; }
	emu_movw(&emu_ax.x, 0x1B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0037); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0037_002A_2066();
}

/**
 * Decompiled function f__B4BE_002E_0009_D5AF()
 *
 * @name f__B4BE_002E_0009_D5AF
 * @implements B4BE:002E:0009:D5AF ()
 *
 * Called From: B4BE:0025:0014:092E
 */
void f__B4BE_002E_0009_D5AF()
{
	emu_movw(&emu_ax.x, 0x1B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0037); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0037_002A_2066();
}

/**
 * Decompiled function f__B4BE_0037_002A_2066()
 *
 * @name f__B4BE_0037_002A_2066
 * @implements B4BE:0037:002A:2066 ()
 *
 * Called From: B4BE:0037:0009:D5AF
 * Called From: B4BE:0037:0014:092E
 */
void f__B4BE_0037_002A_2066()
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
	f__B4BE_0061_0008_3461();
}

/**
 * Decompiled function f__B4BE_0061_0008_3461()
 *
 * @name f__B4BE_0061_0008_3461
 * @implements B4BE:0061:0008:3461 ()
 *
 * Called From: B4BE:0061:002A:2066
 */
void f__B4BE_0061_0008_3461()
{
	emu_addws(&emu_sp, 0x12);
	emu_push(emu_cs); emu_push(0x0069); emu_cs = 0x34ED; ovl__34ED(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0069_0005_FB00();
}

/**
 * Decompiled function f__B4BE_0069_0005_FB00()
 *
 * @name f__B4BE_0069_0005_FB00
 * @implements B4BE:0069:0005:FB00 ()
 *
 * Called From: B4BE:0069:0008:3461
 */
void f__B4BE_0069_0005_FB00()
{
	emu_push(emu_cs); emu_push(0x006E); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_006E_0005_0EE9();
}

/**
 * Decompiled function f__B4BE_006E_0005_0EE9()
 *
 * @name f__B4BE_006E_0005_0EE9
 * @implements B4BE:006E:0005:0EE9 ()
 *
 * Called From: B4BE:006E:0005:FB00
 */
void f__B4BE_006E_0005_0EE9()
{
	emu_push(emu_cs); emu_push(0x0073); emu_cs = 0x34ED; ovl__34ED(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0073_0008_8C69();
}

/**
 * Decompiled function f__B4BE_0073_0008_8C69()
 *
 * @name f__B4BE_0073_0008_8C69
 * @implements B4BE:0073:0008:8C69 ()
 *
 * Called From: B4BE:002C:0014:092E
 * Called From: B4BE:0073:0005:0EE9
 */
void f__B4BE_0073_0008_8C69()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x007B); emu_cs = 0x34E9; ovl__34E9(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_007B_000C_5C4C();
}

/**
 * Decompiled function f__B4BE_007B_000C_5C4C()
 *
 * @name f__B4BE_007B_000C_5C4C
 * @implements B4BE:007B:000C:5C4C ()
 *
 * Called From: B4BE:007B:0008:8C69
 */
void f__B4BE_007B_000C_5C4C()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0087); emu_cs = 0x0FCB; f__0FCB_000D_0019_5047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0087_0004_BEB2();
}

/**
 * Decompiled function f__B4BE_0087_0004_BEB2()
 *
 * @name f__B4BE_0087_0004_BEB2
 * @implements B4BE:0087:0004:BEB2 ()
 *
 * Called From: B4BE:0087:000C:5C4C
 */
void f__B4BE_0087_0004_BEB2()
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
 * Decompiled function f__B4BE_008B_0012_DDEE()
 *
 * @name f__B4BE_008B_0012_DDEE
 * @implements B4BE:008B:0012:DDEE ()
 *
 * Called From: B4BE:001B:0007:DD28
 */
void f__B4BE_008B_0012_DDEE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x009D); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_009D_0011_87E1();
}

/**
 * Decompiled function f__B4BE_009D_0011_87E1()
 *
 * @name f__B4BE_009D_0011_87E1
 * @implements B4BE:009D:0011:87E1 ()
 *
 * Called From: B4BE:009D:0012:DDEE
 */
void f__B4BE_009D_0011_87E1()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x00AE); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_00AE_000C_7E74();
}

/**
 * Decompiled function f__B4BE_00AE_000C_7E74()
 *
 * @name f__B4BE_00AE_000C_7E74
 * @implements B4BE:00AE:000C:7E74 ()
 *
 * Called From: B4BE:00AE:0011:87E1
 */
void f__B4BE_00AE_000C_7E74()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6640);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6642);
	emu_push(0x00BA);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60796: f__22A6_0796_000B_9035(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4BE; emu_last_ip = 0x00B5; emu_last_length = 0x000C; emu_last_crc = 0x7E74;
			emu_call();
			return;
	}
	f__B4BE_00BA_0019_9808();
}

/**
 * Decompiled function f__B4BE_00BA_0019_9808()
 *
 * @name f__B4BE_00BA_0019_9808
 * @implements B4BE:00BA:0019:9808 ()
 *
 * Called From: B4BE:00BA:000C:7E74
 */
void f__B4BE_00BA_0019_9808()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x998A));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x23B0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00D3); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_00D3_002F_D024();
}

/**
 * Decompiled function f__B4BE_00D3_002F_D024()
 *
 * @name f__B4BE_00D3_002F_D024
 * @implements B4BE:00D3:002F:D024 ()
 *
 * Called From: B4BE:00D3:0019:9808
 */
void f__B4BE_00D3_002F_D024()
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
	emu_push(emu_cs); emu_push(0x0102); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0102_000D_A9EB();
}

/**
 * Decompiled function f__B4BE_0102_000D_A9EB()
 *
 * @name f__B4BE_0102_000D_A9EB
 * @implements B4BE:0102:000D:A9EB ()
 *
 * Called From: B4BE:0102:002F:D024
 */
void f__B4BE_0102_000D_A9EB()
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
	f__B4BE_010F_0025_9E19();
}

/**
 * Decompiled function f__B4BE_010F_0025_9E19()
 *
 * @name f__B4BE_010F_0025_9E19
 * @implements B4BE:010F:0025:9E19 ()
 *
 * Called From: B4BE:010F:000D:A9EB
 */
void f__B4BE_010F_0025_9E19()
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
	f__B4BE_0134_0014_8DDF();
}

/**
 * Decompiled function f__B4BE_0134_0014_8DDF()
 *
 * @name f__B4BE_0134_0014_8DDF
 * @implements B4BE:0134:0014:8DDF ()
 *
 * Called From: B4BE:0134:0025:9E19
 */
void f__B4BE_0134_0014_8DDF()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x3C);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x998A));
	emu_push(emu_cs); emu_push(0x0148); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0148_000C_6307();
}

/**
 * Decompiled function f__B4BE_0148_000C_6307()
 *
 * @name f__B4BE_0148_000C_6307
 * @implements B4BE:0148:000C:6307 ()
 *
 * Called From: B4BE:0148:0014:8DDF
 */
void f__B4BE_0148_000C_6307()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x24);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0154); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0154_000F_0A50();
}

/**
 * Decompiled function f__B4BE_0154_000F_0A50()
 *
 * @name f__B4BE_0154_000F_0A50
 * @implements B4BE:0154:000F:0A50 ()
 *
 * Called From: B4BE:0154:000C:6307
 */
void f__B4BE_0154_000F_0A50()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x168);
	f__B4BE_018C_001B_452C(); return;
}

/**
 * Decompiled function f__B4BE_0163_0015_B45C()
 *
 * @name f__B4BE_0163_0015_B45C
 * @implements B4BE:0163:0015:B45C ()
 *
 * Called From: B4BE:01AC:0012:0029
 */
void f__B4BE_0163_0015_B45C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x6);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	f__B4BE_0178_002F_3512(); return;
}

/**
 * Decompiled function f__B4BE_0178_002F_3512()
 *
 * @name f__B4BE_0178_002F_3512
 * @implements B4BE:0178:002F:3512 ()
 *
 * Called From: B4BE:0176:0015:B45C
 * Called From: B4BE:0182:002F:3512
 * Called From: B4BE:018A:002F:3512
 */
void f__B4BE_0178_002F_3512()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4BE_0178_002F_3512(); return; }
	if (!emu_flags.zf) { f__B4BE_018C_001B_452C(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!(emu_flags.cf || emu_flags.zf)) { f__B4BE_0178_002F_3512(); return; }
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
	f__B4BE_01A7_0012_0029();
}

/**
 * Decompiled function f__B4BE_018C_001B_452C()
 *
 * @name f__B4BE_018C_001B_452C
 * @implements B4BE:018C:001B:452C ()
 *
 * Called From: B4BE:0161:000F:0A50
 * Called From: B4BE:0184:002F:3512
 */
void f__B4BE_018C_001B_452C()
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
	f__B4BE_01A7_0012_0029();
}

/**
 * Decompiled function f__B4BE_01A7_0012_0029()
 *
 * @name f__B4BE_01A7_0012_0029
 * @implements B4BE:01A7:0012:0029 ()
 *
 * Called From: B4BE:01A7:001B:452C
 * Called From: B4BE:01A7:002F:3512
 */
void f__B4BE_01A7_0012_0029()
{
	emu_addws(&emu_sp, 0xE);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4BE_0163_0015_B45C(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x01B9); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_01B9_000E_CC0C();
}

/**
 * Decompiled function f__B4BE_01B9_000E_CC0C()
 *
 * @name f__B4BE_01B9_000E_CC0C
 * @implements B4BE:01B9:000E:CC0C ()
 *
 * Called From: B4BE:01B9:0012:0029
 */
void f__B4BE_01B9_000E_CC0C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B4), 0x0);
	if (emu_flags.zf) { f__B4BE_01D2_0009_2050(); return; }
	emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_01C7_0014_8411();
}

/**
 * Decompiled function f__B4BE_01C7_0014_8411()
 *
 * @name f__B4BE_01C7_0014_8411
 * @implements B4BE:01C7:0014:8411 ()
 *
 * Called From: B4BE:01C7:000E:CC0C
 */
void f__B4BE_01C7_0014_8411()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4BE_01DC_0002_CC3A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B4), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01DC; emu_last_cs = 0xB4BE; emu_last_ip = 0x01D0; emu_last_length = 0x0014; emu_last_crc = 0x8411; emu_call(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01DB); emu_cs = 0x3483; ovl__3483(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_01DB_0003_C71A();
}

/**
 * Decompiled function f__B4BE_01D2_0009_2050()
 *
 * @name f__B4BE_01D2_0009_2050
 * @implements B4BE:01D2:0009:2050 ()
 *
 * Called From: B4BE:01C0:000E:CC0C
 */
void f__B4BE_01D2_0009_2050()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01DB); emu_cs = 0x3483; ovl__3483(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_01DB_0003_C71A();
}

/**
 * Decompiled function f__B4BE_01DB_0003_C71A()
 *
 * @name f__B4BE_01DB_0003_C71A
 * @implements B4BE:01DB:0003:C71A ()
 *
 * Called From: B4BE:01DB:0014:8411
 * Called From: B4BE:01DB:0009:2050
 */
void f__B4BE_01DB_0003_C71A()
{
	emu_pop(&emu_cx.x);
	f__B4BE_01F6_001A_F454(); return;
}

/**
 * Decompiled function f__B4BE_01DC_0002_CC3A()
 *
 * @name f__B4BE_01DC_0002_CC3A
 * @implements B4BE:01DC:0002:CC3A ()
 *
 * Called From: B4BE:01C9:0014:8411
 */
void f__B4BE_01DC_0002_CC3A()
{
	f__B4BE_01F6_001A_F454(); return;
}

/**
 * Decompiled function f__B4BE_01DE_0005_20AE()
 *
 * @name f__B4BE_01DE_0005_20AE
 * @implements B4BE:01DE:0005:20AE ()
 *
 * Called From: B4BE:01FD:001A:F454
 */
void f__B4BE_01DE_0005_20AE()
{
	emu_push(emu_cs); emu_push(0x01E3); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_01E3_0011_AAD1();
}

/**
 * Decompiled function f__B4BE_01E3_0011_AAD1()
 *
 * @name f__B4BE_01E3_0011_AAD1
 * @implements B4BE:01E3:0011:AAD1 ()
 *
 * Called From: B4BE:01E3:0005:20AE
 */
void f__B4BE_01E3_0011_AAD1()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4BE_01F6_001A_F454(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B4), 0x0);
	if (emu_flags.zf) { f__B4BE_01F6_001A_F454(); return; }
	emu_movw(&emu_si, 0x1);
	f__B4BE_0389_0011_195A(); return;
}

/**
 * Decompiled function f__B4BE_01EE_0006_A58F()
 *
 * @name f__B4BE_01EE_0006_A58F
 * @implements B4BE:01EE:0006:A58F ()
 *
 * Called From: B4BE:02DA:000E:62DE
 * Called From: B4BE:037B:000E:2246
 */
void f__B4BE_01EE_0006_A58F()
{
	emu_movw(&emu_si, 0x1);
	f__B4BE_0389_0011_195A(); return;
}

/**
 * Decompiled function f__B4BE_01F6_001A_F454()
 *
 * @name f__B4BE_01F6_001A_F454
 * @implements B4BE:01F6:001A:F454 ()
 *
 * Called From: B4BE:01DC:0003:C71A
 * Called From: B4BE:01DC:0002:CC3A
 * Called From: B4BE:01E5:0011:AAD1
 * Called From: B4BE:01EC:0011:AAD1
 */
void f__B4BE_01F6_001A_F454()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { f__B4BE_01DE_0005_20AE(); return; }
	emu_movw(&emu_ax.x, 0x3C);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x0210); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0210_0005_84EE();
}

/**
 * Decompiled function f__B4BE_0210_0005_84EE()
 *
 * @name f__B4BE_0210_0005_84EE
 * @implements B4BE:0210:0005:84EE ()
 *
 * Called From: B4BE:0210:001A:F454
 */
void f__B4BE_0210_0005_84EE()
{
	emu_addws(&emu_sp, 0x6);
	f__B4BE_0215_0005_6B6D(); return;
}

/**
 * Decompiled function f__B4BE_0215_0005_6B6D()
 *
 * @name f__B4BE_0215_0005_6B6D
 * @implements B4BE:0215:0005:6B6D ()
 *
 * Called From: B4BE:0213:0005:84EE
 */
void f__B4BE_0215_0005_6B6D()
{
	emu_push(emu_cs); emu_push(0x021A); emu_cs = 0x1DD7; f__1DD7_088A_0026_5144();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_021A_0006_AEDD();
}

/**
 * Decompiled function f__B4BE_021A_0006_AEDD()
 *
 * @name f__B4BE_021A_0006_AEDD
 * @implements B4BE:021A:0006:AEDD ()
 *
 * Called From: B4BE:021A:0005:6B6D
 */
void f__B4BE_021A_0006_AEDD()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0215; emu_last_cs = 0xB4BE; emu_last_ip = 0x021C; emu_last_length = 0x0006; emu_last_crc = 0xAEDD; emu_call(); return; }
	f__B4BE_0234_001A_F45B(); return;
}

/**
 * Decompiled function f__B4BE_0234_001A_F45B()
 *
 * @name f__B4BE_0234_001A_F45B
 * @implements B4BE:0234:001A:F45B ()
 *
 * Called From: B4BE:021E:0006:AEDD
 */
void f__B4BE_0234_001A_F45B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0220; emu_last_cs = 0xB4BE; emu_last_ip = 0x023B; emu_last_length = 0x001A; emu_last_crc = 0xF45B; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x3C);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x024E); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_024E_000D_8FAB();
}

/**
 * Decompiled function f__B4BE_024E_000D_8FAB()
 *
 * @name f__B4BE_024E_000D_8FAB
 * @implements B4BE:024E:000D:8FAB ()
 *
 * Called From: B4BE:024E:001A:F45B
 */
void f__B4BE_024E_000D_8FAB()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6640);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6642);
	emu_push(0x025B);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60796: f__22A6_0796_000B_9035(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4BE; emu_last_ip = 0x0256; emu_last_length = 0x000D; emu_last_crc = 0x8FAB;
			emu_call();
			return;
	}
	f__B4BE_025B_001E_AB48();
}

/**
 * Decompiled function f__B4BE_025B_001E_AB48()
 *
 * @name f__B4BE_025B_001E_AB48
 * @implements B4BE:025B:001E:AB48 ()
 *
 * Called From: B4BE:025B:000D:8FAB
 */
void f__B4BE_025B_001E_AB48()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CDB));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x998A));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x23CA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0279); emu_cs = 0x0642; f__0642_075D_0011_C164();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0279_0009_0769();
}

/**
 * Decompiled function f__B4BE_0279_0009_0769()
 *
 * @name f__B4BE_0279_0009_0769
 * @implements B4BE:0279:0009:0769 ()
 *
 * Called From: B4BE:0279:001E:AB48
 */
void f__B4BE_0279_0009_0769()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0282); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0282_0023_174C();
}

/**
 * Decompiled function f__B4BE_0282_0023_174C()
 *
 * @name f__B4BE_0282_0023_174C
 * @implements B4BE:0282:0023:174C ()
 *
 * Called From: B4BE:0282:0009:0769
 */
void f__B4BE_0282_0023_174C()
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
	emu_push(emu_cs); emu_push(0x02A5); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_02A5_0014_0DFA();
}

/**
 * Decompiled function f__B4BE_02A5_0014_0DFA()
 *
 * @name f__B4BE_02A5_0014_0DFA
 * @implements B4BE:02A5:0014:0DFA ()
 *
 * Called From: B4BE:02A5:0023:174C
 */
void f__B4BE_02A5_0014_0DFA()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x998A));
	emu_push(emu_cs); emu_push(0x02B9); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_02B9_0011_AB31();
}

/**
 * Decompiled function f__B4BE_02B9_0011_AB31()
 *
 * @name f__B4BE_02B9_0011_AB31
 * @implements B4BE:02B9:0011:AB31 ()
 *
 * Called From: B4BE:02B9:0014:0DFA
 */
void f__B4BE_02B9_0011_AB31()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x3C);
	f__B4BE_02DF_001A_B479(); return;
}

/**
 * Decompiled function f__B4BE_02CA_0005_20AE()
 *
 * @name f__B4BE_02CA_0005_20AE
 * @implements B4BE:02CA:0005:20AE ()
 *
 * Called From: B4BE:02E6:001A:B479
 */
void f__B4BE_02CA_0005_20AE()
{
	emu_push(emu_cs); emu_push(0x02CF); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_02CF_000E_62DE();
}

/**
 * Decompiled function f__B4BE_02CF_000E_62DE()
 *
 * @name f__B4BE_02CF_000E_62DE
 * @implements B4BE:02CF:000E:62DE ()
 *
 * Called From: B4BE:02CF:0005:20AE
 */
void f__B4BE_02CF_000E_62DE()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4BE_02DF_001A_B479(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B4), 0x0);
	if (emu_flags.zf) { f__B4BE_02DF_001A_B479(); return; }
	f__B4BE_01EE_0006_A58F(); return;
}

/**
 * Decompiled function f__B4BE_02DF_001A_B479()
 *
 * @name f__B4BE_02DF_001A_B479
 * @implements B4BE:02DF:001A:B479 ()
 *
 * Called From: B4BE:02C8:0011:AB31
 * Called From: B4BE:02D1:000E:62DE
 * Called From: B4BE:02D8:000E:62DE
 */
void f__B4BE_02DF_001A_B479()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { f__B4BE_02CA_0005_20AE(); return; }
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x02F9); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_02F9_000B_F574();
}

/**
 * Decompiled function f__B4BE_02F9_000B_F574()
 *
 * @name f__B4BE_02F9_000B_F574
 * @implements B4BE:02F9:000B:F574 ()
 *
 * Called From: B4BE:02F9:001A:B479
 */
void f__B4BE_02F9_000B_F574()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0304); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0304_001F_D48D();
}

/**
 * Decompiled function f__B4BE_0304_001F_D48D()
 *
 * @name f__B4BE_0304_001F_D48D
 * @implements B4BE:0304:001F:D48D ()
 *
 * Called From: B4BE:0304:000B:F574
 */
void f__B4BE_0304_001F_D48D()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6CDB));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x998A));
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
	f__B4BE_0323_0023_174C();
}

/**
 * Decompiled function f__B4BE_0323_0023_174C()
 *
 * @name f__B4BE_0323_0023_174C
 * @implements B4BE:0323:0023:174C ()
 *
 * Called From: B4BE:0323:001F:D48D
 */
void f__B4BE_0323_0023_174C()
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
	emu_push(emu_cs); emu_push(0x0346); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0346_0014_0DFA();
}

/**
 * Decompiled function f__B4BE_0346_0014_0DFA()
 *
 * @name f__B4BE_0346_0014_0DFA
 * @implements B4BE:0346:0014:0DFA ()
 *
 * Called From: B4BE:0346:0023:174C
 */
void f__B4BE_0346_0014_0DFA()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x998A));
	emu_push(emu_cs); emu_push(0x035A); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_035A_0011_2B39();
}

/**
 * Decompiled function f__B4BE_035A_0011_2B39()
 *
 * @name f__B4BE_035A_0011_2B39
 * @implements B4BE:035A:0011:2B39 ()
 *
 * Called From: B4BE:035A:0014:0DFA
 */
void f__B4BE_035A_0011_2B39()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0xB4);
	f__B4BE_0380_001A_B479(); return;
}

/**
 * Decompiled function f__B4BE_036B_0005_20AE()
 *
 * @name f__B4BE_036B_0005_20AE
 * @implements B4BE:036B:0005:20AE ()
 *
 * Called From: B4BE:0387:001A:B479
 */
void f__B4BE_036B_0005_20AE()
{
	emu_push(emu_cs); emu_push(0x0370); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_0370_000E_2246();
}

/**
 * Decompiled function f__B4BE_0370_000E_2246()
 *
 * @name f__B4BE_0370_000E_2246
 * @implements B4BE:0370:000E:2246 ()
 *
 * Called From: B4BE:0370:0005:20AE
 */
void f__B4BE_0370_000E_2246()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4BE_0380_001A_B479(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B4), 0x0);
	if (emu_flags.zf) { f__B4BE_0380_001A_B479(); return; }
	f__B4BE_01EE_0006_A58F(); return;
}

/**
 * Decompiled function f__B4BE_0380_001A_B479()
 *
 * @name f__B4BE_0380_001A_B479
 * @implements B4BE:0380:001A:B479 ()
 *
 * Called From: B4BE:0369:0011:2B39
 * Called From: B4BE:0372:000E:2246
 * Called From: B4BE:0379:000E:2246
 */
void f__B4BE_0380_001A_B479()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (!emu_flags.zf) { f__B4BE_036B_0005_20AE(); return; }
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x039A); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_039A_000B_F574();
}

/**
 * Decompiled function f__B4BE_0389_0011_195A()
 *
 * @name f__B4BE_0389_0011_195A
 * @implements B4BE:0389:0011:195A ()
 *
 * Called From: B4BE:01F1:0011:AAD1
 * Called From: B4BE:01F1:0006:A58F
 */
void f__B4BE_0389_0011_195A()
{
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x039A); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_039A_000B_F574();
}

/**
 * Decompiled function f__B4BE_039A_000B_F574()
 *
 * @name f__B4BE_039A_000B_F574
 * @implements B4BE:039A:000B:F574 ()
 *
 * Called From: B4BE:039A:0011:195A
 * Called From: B4BE:039A:001A:B479
 */
void f__B4BE_039A_000B_F574()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03A5); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_03A5_0009_81B5();
}

/**
 * Decompiled function f__B4BE_03A5_0009_81B5()
 *
 * @name f__B4BE_03A5_0009_81B5
 * @implements B4BE:03A5:0009:81B5 ()
 *
 * Called From: B4BE:03A5:000B:F574
 */
void f__B4BE_03A5_0009_81B5()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x03AE); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34BE) { ovl__34BE(0xFF); }
	f__B4BE_03AE_0003_CB1A();
}

/**
 * Decompiled function f__B4BE_03AE_0003_CB1A()
 *
 * @name f__B4BE_03AE_0003_CB1A
 * @implements B4BE:03AE:0003:CB1A ()
 *
 * Called From: B4BE:03AE:0009:81B5
 */
void f__B4BE_03AE_0003_CB1A()
{
	emu_pop(&emu_cx.x);
	f__B4BE_03B1_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4BE_03B1_0006_F7CE()
 *
 * @name f__B4BE_03B1_0006_F7CE
 * @implements B4BE:03B1:0006:F7CE ()
 *
 * Called From: B4BE:03AF:0003:CB1A
 */
void f__B4BE_03B1_0006_F7CE()
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
