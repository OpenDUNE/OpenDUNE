/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0FCB_000D_0019_1BED()
 *
 * @name f__0FCB_000D_0019_1BED
 * @implements 0FCB:000D:0019:1BED ()
 *
 * Called From: 0642:00E5:000A:E023
 * Called From: B4B8:1CF2:000C:5324
 * Called From: B4BE:0012:000B:7F21
 * Called From: B4BE:0082:000C:9025
 */
void f__0FCB_000D_0019_1BED()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38CA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38CC));
	if (emu_flags.zf) { f__0FCB_0034_0016_896F(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38CC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38CA));
	emu_push(emu_cs); emu_push(0x0026); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	f__0FCB_0026_0024_95F8();
}

/**
 * Decompiled function f__0FCB_0026_0024_95F8()
 *
 * @name f__0FCB_0026_0024_95F8
 * @implements 0FCB:0026:0024:95F8 ()
 *
 * Called From: 0FCB:0026:0019:1BED
 */
void f__0FCB_0026_0024_95F8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38CC), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38CA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__0FCB_005D_0002_00E2(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x004A); emu_cs = 0x0642; f__0642_075D_0011_56FC();
	f__0FCB_004A_0009_CD5E();
}

/**
 * Decompiled function f__0FCB_0034_0016_896F()
 *
 * @name f__0FCB_0034_0016_896F
 * @implements 0FCB:0034:0016:896F ()
 *
 * Called From: 0FCB:0017:0019:1BED
 */
void f__0FCB_0034_0016_896F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x005D; emu_last_cs = 0x0FCB; emu_last_ip = 0x003A; emu_last_length = 0x0016; emu_last_crc = 0x896F; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x004A); emu_cs = 0x0642; f__0642_075D_0011_56FC();
	f__0FCB_004A_0009_CD5E();
}

/**
 * Decompiled function f__0FCB_004A_0009_CD5E()
 *
 * @name f__0FCB_004A_0009_CD5E
 * @implements 0FCB:004A:0009:CD5E ()
 *
 * Called From: 0FCB:004A:0016:896F
 * Called From: 0FCB:004A:0024:95F8
 */
void f__0FCB_004A_0009_CD5E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0053); emu_cs = 0x253D; f__253D_008A_0016_A6D3();
	f__0FCB_0053_000C_7DED();
}

/**
 * Decompiled function f__0FCB_0053_000C_7DED()
 *
 * @name f__0FCB_0053_000C_7DED
 * @implements 0FCB:0053:000C:7DED ()
 *
 * Called From: 0FCB:0053:0009:CD5E
 */
void f__0FCB_0053_000C_7DED()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38CC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38CA), emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FCB_005D_0002_00E2()
 *
 * @name f__0FCB_005D_0002_00E2
 * @implements 0FCB:005D:0002:00E2 ()
 *
 * Called From: 0FCB:003A:0024:95F8
 */
void f__0FCB_005D_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FCB_005F_001C_147D()
 *
 * @name f__0FCB_005F_001C_147D
 * @implements 0FCB:005F:001C:147D ()
 *
 * Called From: 0972:05F1:0006:0042
 * Called From: 0972:0600:000F:8CBD
 * Called From: 0AEC:06E4:000D:49CA
 * Called From: 0AEC:06F0:000C:B785
 * Called From: 0AEC:0BBC:0020:B4F2
 * Called From: 0AEC:0BD0:000C:DACD
 * Called From: 0AEC:0BF7:0018:1A4D
 * Called From: 0AEC:0F3F:0020:EB1A
 * Called From: 0AEC:0F3F:002B:EE22
 * Called From: 0AEC:0F3F:0030:0EF9
 * Called From: 0AEC:0F52:000B:F905
 * Called From: 0C3A:1AB8:0021:46B7
 * Called From: 0C3A:1B21:001B:2487
 * Called From: 0C3A:2876:002A:D221
 * Called From: 0C3A:28F3:004C:2D38
 * Called From: 10E4:12C5:0005:1582
 * Called From: 10E4:12C5:0006:0182
 * Called From: 10E4:12C5:0009:7783
 * Called From: 10E4:1413:001F:3158
 * Called From: 10E4:1470:0006:0182
 * Called From: 10E4:1470:001E:CC5F
 * Called From: 10E4:15C2:0046:6AC7
 * Called From: 10E4:197E:001F:7943
 * Called From: 10E4:1B22:001E:582C
 * Called From: 1391:04CD:0021:E133
 * Called From: 1423:033D:000E:2B8B
 * Called From: 1A34:2843:000B:E9C4
 * Called From: 1A34:290B:000A:EA01
 * Called From: 1A34:290B:000C:DA04
 * Called From: B480:02E0:0009:3003
 * Called From: B483:03FA:0013:2B83
 * Called From: B495:0C51:002A:F14C
 * Called From: B495:0C65:000C:EB8D
 * Called From: B495:0C96:0029:2A24
 * Called From: B495:16A0:000C:CC8F
 * Called From: B4B8:1E9E:0046:A838
 * Called From: B4E0:0057:0015:6755
 * Called From: B4E0:08A8:0027:B2AD
 * Called From: B4ED:099E:001E:0A93
 * Called From: B4F2:13A5:0006:0002
 * Called From: B503:02DD:000C:5A0D
 * Called From: B503:037B:000C:5D0D
 * Called From: B503:03E1:0009:6C03
 * Called From: B503:04E0:0012:A0B3
 * Called From: B511:0CD5:001E:B649
 * Called From: B511:0D13:0024:A6A2
 * Called From: B511:1231:0024:ED46
 * Called From: B511:1289:0024:BA1C
 * Called From: B518:0086:000F:DBAA
 * Called From: B518:009E:0010:D972
 * Called From: B518:00D1:0009:3803
 * Called From: B518:00E5:000C:2305
 * Called From: B518:0112:0009:3B03
 * Called From: B518:015B:0026:3BC8
 * Called From: B518:018C:0029:FC01
 * Called From: B518:08D3:000C:0E0D
 * Called From: B518:08E7:000C:2F05
 * Called From: B518:0914:0009:3703
 * Called From: B518:0946:002A:8804
 * Called From: B518:09BD:0064:1E99
 * Called From: B518:0CAF:001D:CF86
 * Called From: B518:0D1B:0029:3487
 * Called From: B518:0D62:001F:0216
 * Called From: B518:0D8C:001D:C5C4
 * Called From: B518:0EE1:0027:9DB9
 * Called From: B518:121E:000C:1C0D
 * Called From: B518:123E:0018:E0DE
 * Called From: B518:1254:000E:4415
 * Called From: B518:128A:002E:A992
 * Called From: B518:12AD:001B:F75D
 * Called From: B518:12D0:001B:EE5D
 * Called From: B518:13B4:0017:DA92
 */
void f__0FCB_005F_001C_147D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38CA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38CC));
	if (emu_flags.zf) { emu_ip = 0x0080; emu_last_cs = 0x0FCB; emu_last_ip = 0x0069; emu_last_length = 0x001C; emu_last_crc = 0x147D; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38CC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38CA));
	emu_push(emu_cs); emu_push(0x007B); emu_cs = 0x2502; f__2502_0165_0027_0314();
	f__0FCB_007B_0005_1FB0();
}

/**
 * Decompiled function f__0FCB_007B_0005_1FB0()
 *
 * @name f__0FCB_007B_0005_1FB0
 * @implements 0FCB:007B:0005:1FB0 ()
 *
 * Called From: 0FCB:007B:001C:147D
 */
void f__0FCB_007B_0005_1FB0()
{
	emu_addws(&emu_sp, 0x6);
	f__0FCB_0086_0002_00E2(); return;
}

/**
 * Decompiled function f__0FCB_0086_0002_00E2()
 *
 * @name f__0FCB_0086_0002_00E2
 * @implements 0FCB:0086:0002:00E2 ()
 *
 * Called From: 0FCB:007E:0005:1FB0
 */
void f__0FCB_0086_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0FCB_0088_0016_E17C()
 *
 * @name f__0FCB_0088_0016_E17C
 * @implements 0FCB:0088:0016:E17C ()
 *
 * Called From: B4E0:079E:0009:CEF2
 * Called From: B511:0DB5:0009:CEF2
 * Called From: B511:130C:0009:CEF2
 */
void f__0FCB_0088_0016_E17C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0FCB_009E_000B_7921(); return; }
	emu_ip = 0x0188; emu_last_cs = 0x0FCB; emu_last_ip = 0x009B; emu_last_length = 0x0016; emu_last_crc = 0xE17C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0FCB_009E_000B_7921()
 *
 * @name f__0FCB_009E_000B_7921
 * @implements 0FCB:009E:000B:7921 ()
 *
 * Called From: 0FCB:0099:0016:E17C
 */
void f__0FCB_009E_000B_7921()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!emu_flags.zf) { f__0FCB_00A9_0007_30F8(); return; }
	emu_ip = 0x0188; emu_last_cs = 0x0FCB; emu_last_ip = 0x00A6; emu_last_length = 0x000B; emu_last_crc = 0x7921; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0FCB_00A9_0007_30F8()
 *
 * @name f__0FCB_00A9_0007_30F8
 * @implements 0FCB:00A9:0007:30F8 ()
 *
 * Called From: 0FCB:00A4:000B:7921
 */
void f__0FCB_00A9_0007_30F8()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__0FCB_00B0_001B_4438(); return; }
	emu_ip = 0x0188; emu_last_cs = 0x0FCB; emu_last_ip = 0x00AD; emu_last_length = 0x0007; emu_last_crc = 0x30F8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0FCB_00B0_001B_4438()
 *
 * @name f__0FCB_00B0_001B_4438
 * @implements 0FCB:00B0:001B:4438 ()
 *
 * Called From: 0FCB:00AB:0007:30F8
 */
void f__0FCB_00B0_001B_4438()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00CB); emu_cs = 0x1FB5; f__1FB5_01FA_0010_D47C();
	f__0FCB_00CB_0017_38F8();
}

/**
 * Decompiled function f__0FCB_00CB_0017_38F8()
 *
 * @name f__0FCB_00CB_0017_38F8
 * @implements 0FCB:00CB:0017:38F8 ()
 *
 * Called From: 0FCB:00CB:001B:4438
 */
void f__0FCB_00CB_0017_38F8()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_ax.x, 0x1);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00E2); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	f__0FCB_00E2_0015_E920();
}

/**
 * Decompiled function f__0FCB_00E2_0015_E920()
 *
 * @name f__0FCB_00E2_0015_E920
 * @implements 0FCB:00E2:0015:E920 ()
 *
 * Called From: 0FCB:00E2:0017:38F8
 */
void f__0FCB_00E2_0015_E920()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00F7); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	f__0FCB_00F7_0018_47C7();
}

/**
 * Decompiled function f__0FCB_00F7_0018_47C7()
 *
 * @name f__0FCB_00F7_0018_47C7
 * @implements 0FCB:00F7:0018:47C7 ()
 *
 * Called From: 0FCB:00F7:0015:E920
 */
void f__0FCB_00F7_0018_47C7()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x010F); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	f__0FCB_010F_0014_5907();
}

/**
 * Decompiled function f__0FCB_010F_0014_5907()
 *
 * @name f__0FCB_010F_0014_5907
 * @implements 0FCB:010F:0014:5907 ()
 *
 * Called From: 0FCB:010F:0018:47C7
 */
void f__0FCB_010F_0014_5907()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_di);
	emu_cwd();
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0123); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	f__0FCB_0123_0009_CF13();
}

/**
 * Decompiled function f__0FCB_0123_0009_CF13()
 *
 * @name f__0FCB_0123_0009_CF13
 * @implements 0FCB:0123:0009:CF13 ()
 *
 * Called From: 0FCB:0123:0014:5907
 */
void f__0FCB_0123_0009_CF13()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x012C); emu_cs = 0x1FB5; f__1FB5_09C7_0018_F3A8();
	f__0FCB_012C_000C_A504();
}

/**
 * Decompiled function f__0FCB_012C_000C_A504()
 *
 * @name f__0FCB_012C_000C_A504
 * @implements 0FCB:012C:000C:A504 ()
 *
 * Called From: 0FCB:012C:0009:CF13
 */
void f__0FCB_012C_000C_A504()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0138); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	f__0FCB_0138_0037_EE08();
}

/**
 * Decompiled function f__0FCB_0138_0037_EE08()
 *
 * @name f__0FCB_0138_0037_EE08
 * @implements 0FCB:0138:0037:EE08 ()
 *
 * Called From: 0FCB:0138:000C:A504
 */
void f__0FCB_0138_0037_EE08()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_decw(&emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_bx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x1);
	emu_adcws(&emu_dx.x, 0x0);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x016F); emu_cs = 0x2B0E; f__2B0E_0006_0049_1E3C();
	f__0FCB_016F_0014_FD3B();
}

/**
 * Decompiled function f__0FCB_016F_0014_FD3B()
 *
 * @name f__0FCB_016F_0014_FD3B
 * @implements 0FCB:016F:0014:FD3B ()
 *
 * Called From: 0FCB:016F:0037:EE08
 */
void f__0FCB_016F_0014_FD3B()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0183); emu_cs = 0x2502; f__2502_00FA_0009_4FCC();
	f__0FCB_0183_0005_1FC4();
}

/**
 * Decompiled function f__0FCB_0183_0005_1FC4()
 *
 * @name f__0FCB_0183_0005_1FC4
 * @implements 0FCB:0183:0005:1FC4 ()
 *
 * Called From: 0FCB:0183:0014:FD3B
 */
void f__0FCB_0183_0005_1FC4()
{
	emu_addws(&emu_sp, 0x8);
	f__0FCB_018C_0006_137A(); return;
}

/**
 * Decompiled function f__0FCB_018C_0006_137A()
 *
 * @name f__0FCB_018C_0006_137A
 * @implements 0FCB:018C:0006:137A ()
 *
 * Called From: 0FCB:0186:0005:1FC4
 */
void f__0FCB_018C_0006_137A()
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
