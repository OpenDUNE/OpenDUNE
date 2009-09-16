/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__259E_0006_0016_858A()
 *
 * @name f__259E_0006_0016_858A
 * @implements 259E:0006:0016:858A ()
 *
 * Called From: 10E4:2263:0013:D274
 * Called From: 1423:0408:0016:5986
 * Called From: B4B8:1D7F:0011:195A
 * Called From: B4B8:1FDE:0014:B1DF
 * Called From: B4B8:2188:0018:F01B
 * Called From: B4BE:0143:0014:8DDF
 * Called From: B4BE:020B:001A:F454
 * Called From: B4BE:0249:001A:F45B
 * Called From: B4BE:02B4:0014:0DFA
 * Called From: B4BE:02F4:001A:B479
 * Called From: B4BE:0355:0014:0DFA
 * Called From: B4BE:0395:0011:195A
 * Called From: B4BE:0395:001A:B479
 * Called From: B4DA:117C:0014:31C1
 * Called From: B4DA:11CE:0011:9942
 * Called From: B4ED:01DE:0014:B1F3
 * Called From: B4ED:03FC:0013:D256
 * Called From: B4ED:06B7:0013:6E51
 * Called From: B4ED:070C:0013:525F
 * Called From: B503:006A:0013:BF46
 * Called From: B503:0279:0014:B1CE
 * Called From: B503:0550:0012:7598
 * Called From: B511:0F2C:0011:9942
 * Called From: B511:1120:0014:B1CE
 * Called From: B511:11F6:0025:9022
 * Called From: B511:1447:000F:CDB2
 * Called From: B511:14E7:000F:CDB2
 */
void f__259E_0006_0016_858A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x70A2);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x001C); f__259E_00B1_001C_4051();
	f__259E_001C_0005_60C3();
}

/**
 * Decompiled function f__259E_001C_0005_60C3()
 *
 * @name f__259E_001C_0005_60C3
 * @implements 259E:001C:0005:60C3 ()
 *
 * Called From: 259E:001C:0016:858A
 */
void f__259E_001C_0005_60C3()
{
	emu_addws(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__259E_0021_001A_E253()
 *
 * @name f__259E_0021_001A_E253
 * @implements 259E:0021:001A:E253 ()
 *
 * Called From: 10E4:2001:0016:34AE
 * Called From: B4ED:0179:0023:78FA
 * Called From: B4ED:0A8A:0023:78F0
 */
void f__259E_0021_001A_E253()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66D0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66D2);
	emu_push(0x003B);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A61102: f__22A6_1102_004C_B069(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x259E; emu_last_ip = 0x0036; emu_last_length = 0x001A; emu_last_crc = 0xE253;
			emu_call();
			return;
	}
	f__259E_003B_0005_6083();
}

/**
 * Decompiled function f__259E_003B_0005_6083()
 *
 * @name f__259E_003B_0005_6083
 * @implements 259E:003B:0005:6083 ()
 *
 * Called From: 259E:003B:001A:E253
 */
void f__259E_003B_0005_6083()
{
	emu_addws(&emu_sp, 0x8);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__259E_0040_0015_5E4A()
 *
 * @name f__259E_0040_0015_5E4A
 * @implements 259E:0040:0015:5E4A ()
 *
 * Called From: 0642:05C2:0010:2CA3
 * Called From: 0642:06B9:000D:A409
 * Called From: 0642:073A:000D:A409
 * Called From: 0642:073A:0013:43D9
 * Called From: 0C3A:17E2:000D:A409
 * Called From: 10E4:0469:0010:2CBB
 * Called From: 259E:0225:001E:04ED
 * Called From: 259E:0225:0017:E5A1
 * Called From: 259E:0225:0026:4520
 * Called From: 259E:0225:0028:CFAE
 * Called From: 25C4:03BF:0010:908E
 * Called From: B495:00E8:0010:2CBB
 * Called From: B4B8:185B:000E:A415
 * Called From: B4B8:186A:000F:9764
 * Called From: B4B8:1D9D:000D:A409
 * Called From: B4B8:1E08:000E:2564
 * Called From: B4B8:2274:000E:A56D
 * Called From: B4B8:2274:000D:A409
 * Called From: B4BE:00A9:0011:87E1
 * Called From: B4F2:0E0D:0010:2CBB
 * Called From: B4F2:0ED4:001D:B10D
 * Called From: B503:0573:000D:A409
 */
void f__259E_0040_0015_5E4A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0055); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	f__259E_0055_0005_6083();
}

/**
 * Decompiled function f__259E_0055_0005_6083()
 *
 * @name f__259E_0055_0005_6083
 * @implements 259E:0055:0005:6083 ()
 *
 * Called From: 259E:0055:0015:5E4A
 */
void f__259E_0055_0005_6083()
{
	emu_addws(&emu_sp, 0x8);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__259E_00B1_001C_4051()
 *
 * @name f__259E_00B1_001C_4051
 * @implements 259E:00B1:001C:4051 ()
 *
 * Called From: 259E:0019:0016:858A
 */
void f__259E_00B1_001C_4051()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x312);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { emu_ip = 0x00CA; emu_last_cs = 0x259E; emu_last_ip = 0x00C0; emu_last_length = 0x001C; emu_last_crc = 0x4051; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__259E_00CD_0015_D443(); return; }
	emu_ip = 0x0248; emu_last_cs = 0x259E; emu_last_ip = 0x00CA; emu_last_length = 0x001C; emu_last_crc = 0x4051; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__259E_00CD_0015_D443()
 *
 * @name f__259E_00CD_0015_D443
 * @implements 259E:00CD:0015:D443 ()
 *
 * Called From: 259E:00C8:001C:4051
 */
void f__259E_00CD_0015_D443()
{
	emu_movw(&emu_ax.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x312);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00E2); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	f__259E_00E2_0014_1303();
}

/**
 * Decompiled function f__259E_00E2_0014_1303()
 *
 * @name f__259E_00E2_0014_1303
 * @implements 259E:00E2:0014:1303 ()
 *
 * Called From: 259E:00E2:0015:D443
 */
void f__259E_00E2_0014_1303()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C76), 0x3);
	if (emu_flags.zf) { f__259E_00FB_0009_30FE(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x00F6); emu_ip = 0x0040; emu_last_cs = 0x259E; emu_last_ip = 0x00F3; emu_last_length = 0x0014; emu_last_crc = 0x1303; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__259E_00FB_0009_30FE()
 *
 * @name f__259E_00FB_0009_30FE
 * @implements 259E:00FB:0009:30FE ()
 *
 * Called From: 259E:00EA:0014:1303
 */
void f__259E_00FB_0009_30FE()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__259E_0137_002D_0A2F(); return;
}

/**
 * Decompiled function f__259E_0104_0026_85EC()
 *
 * @name f__259E_0104_0026_85EC
 * @implements 259E:0104:0026:85EC ()
 *
 * Called From: 259E:013B:002D:0A2F
 * Called From: 259E:013B:002E:0B37
 * Called From: 259E:013B:003A:029E
 * Called From: 259E:013B:0038:203F
 */
void f__259E_0104_0026_85EC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_bx.x, emu_si);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_di, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp + emu_si, -0x312));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_orw(&emu_dx.x, emu_dx.x);
	if (!(emu_flags.sf != emu_flags.of)) { f__259E_012A_003A_029E(); return; }
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__259E_012C_0038_203F(); return;
}

/**
 * Decompiled function f__259E_012A_003A_029E()
 *
 * @name f__259E_012A_003A_029E
 * @implements 259E:012A:003A:029E ()
 *
 * Called From: 259E:0122:0026:85EC
 */
void f__259E_012A_003A_029E()
{
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__259E_0136_002E_0B37(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_0104_0026_85EC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_cx.l, 0x8);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0157; emu_last_cs = 0x259E; emu_last_ip = 0x014B; emu_last_length = 0x003A; emu_last_crc = 0x029E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_ip = 0x016D; emu_last_cs = 0x259E; emu_last_ip = 0x0162; emu_last_length = 0x003A; emu_last_crc = 0x029E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__259E_012C_0038_203F()
 *
 * @name f__259E_012C_0038_203F
 * @implements 259E:012C:0038:203F ()
 *
 * Called From: 259E:0128:0026:85EC
 */
void f__259E_012C_0038_203F()
{
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__259E_0136_002E_0B37(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_0104_0026_85EC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_cx.l, 0x8);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0157; emu_last_cs = 0x259E; emu_last_ip = 0x014B; emu_last_length = 0x0038; emu_last_crc = 0x203F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_ip = 0x016D; emu_last_cs = 0x259E; emu_last_ip = 0x0162; emu_last_length = 0x0038; emu_last_crc = 0x203F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__259E_0136_002E_0B37()
 *
 * @name f__259E_0136_002E_0B37
 * @implements 259E:0136:002E:0B37 ()
 *
 * Called From: 259E:0131:003A:029E
 * Called From: 259E:0131:0038:203F
 */
void f__259E_0136_002E_0B37()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_0104_0026_85EC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_cx.l, 0x8);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { f__259E_0157_000D_4ECC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	f__259E_016D_0043_E83E(); return;
}

/**
 * Decompiled function f__259E_0137_002D_0A2F()
 *
 * @name f__259E_0137_002D_0A2F
 * @implements 259E:0137:002D:0A2F ()
 *
 * Called From: 259E:0102:0009:30FE
 */
void f__259E_0137_002D_0A2F()
{
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_0104_0026_85EC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_cx.l, 0x8);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0157; emu_last_cs = 0x259E; emu_last_ip = 0x014B; emu_last_length = 0x002D; emu_last_crc = 0x0A2F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_ip = 0x016D; emu_last_cs = 0x259E; emu_last_ip = 0x0162; emu_last_length = 0x002D; emu_last_crc = 0x0A2F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__259E_0157_000D_4ECC()
 *
 * @name f__259E_0157_000D_4ECC
 * @implements 259E:0157:000D:4ECC ()
 *
 * Called From: 259E:014B:002E:0B37
 */
void f__259E_0157_000D_4ECC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	f__259E_016D_0043_E83E(); return;
}

/**
 * Decompiled function f__259E_0164_004C_E7DA()
 *
 * @name f__259E_0164_004C_E7DA
 * @implements 259E:0164:004C:E7DA ()
 *
 * Called From: 259E:017A:0043:E83E
 * Called From: 259E:017A:004C:E7DA
 */
void f__259E_0164_004C_E7DA()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x017C; emu_last_cs = 0x259E; emu_last_ip = 0x0173; emu_last_length = 0x004C; emu_last_crc = 0xE7DA; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x200);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_0164_004C_E7DA(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76A8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_cx.l, 0x8);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_cwd();
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0xFF);
	emu_xorw(&emu_si, emu_si);
	f__259E_0212_0016_E52D(); return;
}

/**
 * Decompiled function f__259E_016D_0043_E83E()
 *
 * @name f__259E_016D_0043_E83E
 * @implements 259E:016D:0043:E83E ()
 *
 * Called From: 259E:0162:002E:0B37
 * Called From: 259E:0162:000D:4ECC
 */
void f__259E_016D_0043_E83E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__259E_017C_0034_B862(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x200);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_0164_004C_E7DA(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76A8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_cx.l, 0x8);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_cwd();
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0xFF);
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x0212; emu_last_cs = 0x259E; emu_last_ip = 0x01AE; emu_last_length = 0x0043; emu_last_crc = 0xE83E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__259E_017C_0034_B862()
 *
 * @name f__259E_017C_0034_B862
 * @implements 259E:017C:0034:B862 ()
 *
 * Called From: 259E:0173:0043:E83E
 */
void f__259E_017C_0034_B862()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76A8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_cx.l, 0x8);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_cwd();
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0xFF);
	emu_xorw(&emu_si, emu_si);
	f__259E_0212_0016_E52D(); return;
}

/**
 * Decompiled function f__259E_018E_0022_79F4()
 *
 * @name f__259E_018E_0022_79F4
 * @implements 259E:018E:0022:79F4 ()
 *
 * Called From: 259E:0245:001C:7DA8
 * Called From: 259E:0245:0009:2EAC
 */
void f__259E_018E_0022_79F4()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_cx.l, 0x8);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_cwd();
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0xFF);
	emu_xorw(&emu_si, emu_si);
	f__259E_0212_0016_E52D(); return;
}

/**
 * Decompiled function f__259E_01B0_001C_3FC8()
 *
 * @name f__259E_01B0_001C_3FC8
 * @implements 259E:01B0:001C:3FC8 ()
 *
 * Called From: 259E:0216:0016:E52D
 * Called From: 259E:0216:0017:E5A1
 * Called From: 259E:0216:001E:04ED
 * Called From: 259E:0216:0026:4520
 * Called From: 259E:0216:0028:CFAE
 */
void f__259E_01B0_001C_3FC8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_bx.x, emu_si);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_di, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp + emu_si, -0x312));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!emu_flags.zf) { f__259E_01CC_0015_6837(); return; }
	f__259E_0211_0017_E5A1(); return;
}

/**
 * Decompiled function f__259E_01CC_0015_6837()
 *
 * @name f__259E_01CC_0015_6837
 * @implements 259E:01CC:0015:6837 ()
 *
 * Called From: 259E:01C8:001C:3FC8
 */
void f__259E_01CC_0015_6837()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__259E_01EB_0015_E830(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__259E_01E1_001F_7EB7(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__259E_01E3_001D_6BAA(); return;
}

/**
 * Decompiled function f__259E_01E1_001F_7EB7()
 *
 * @name f__259E_01E1_001F_7EB7
 * @implements 259E:01E1:001F:7EB7 ()
 *
 * Called From: 259E:01DA:0015:6837
 */
void f__259E_01E1_001F_7EB7()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__259E_020A_001E_04ED(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0200; emu_last_cs = 0x259E; emu_last_ip = 0x01F9; emu_last_length = 0x001F; emu_last_crc = 0x7EB7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ip = 0x0202; emu_last_cs = 0x259E; emu_last_ip = 0x01FE; emu_last_length = 0x001F; emu_last_crc = 0x7EB7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__259E_01E3_001D_6BAA()
 *
 * @name f__259E_01E3_001D_6BAA
 * @implements 259E:01E3:001D:6BAA ()
 *
 * Called From: 259E:01DF:0015:6837
 */
void f__259E_01E3_001D_6BAA()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__259E_020A_001E_04ED(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0200; emu_last_cs = 0x259E; emu_last_ip = 0x01F9; emu_last_length = 0x001D; emu_last_crc = 0x6BAA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ip = 0x0202; emu_last_cs = 0x259E; emu_last_ip = 0x01FE; emu_last_length = 0x001D; emu_last_crc = 0x6BAA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__259E_01EB_0015_E830()
 *
 * @name f__259E_01EB_0015_E830
 * @implements 259E:01EB:0015:E830 ()
 *
 * Called From: 259E:01CF:0015:6837
 */
void f__259E_01EB_0015_E830()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x020A; emu_last_cs = 0x259E; emu_last_ip = 0x01EE; emu_last_length = 0x0015; emu_last_crc = 0xE830; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__259E_0200_0028_CFAE(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__259E_0202_0026_4520(); return;
}

/**
 * Decompiled function f__259E_0200_0028_CFAE()
 *
 * @name f__259E_0200_0028_CFAE
 * @implements 259E:0200:0028:CFAE ()
 *
 * Called From: 259E:01F9:0015:E830
 */
void f__259E_0200_0028_CFAE()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp + emu_si, -0x312), emu_ax.l);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_01B0_001C_3FC8(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x023F; emu_last_cs = 0x259E; emu_last_ip = 0x021C; emu_last_length = 0x0028; emu_last_crc = 0xCFAE; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x312);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0228); f__259E_0040_0015_5E4A();
	f__259E_0228_0004_5B1F();
}

/**
 * Decompiled function f__259E_0202_0026_4520()
 *
 * @name f__259E_0202_0026_4520
 * @implements 259E:0202:0026:4520 ()
 *
 * Called From: 259E:01FE:0015:E830
 */
void f__259E_0202_0026_4520()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp + emu_si, -0x312), emu_ax.l);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_01B0_001C_3FC8(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x023F; emu_last_cs = 0x259E; emu_last_ip = 0x021C; emu_last_length = 0x0026; emu_last_crc = 0x4520; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x312);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0228); f__259E_0040_0015_5E4A();
	f__259E_0228_0004_5B1F();
}

/**
 * Decompiled function f__259E_020A_001E_04ED()
 *
 * @name f__259E_020A_001E_04ED
 * @implements 259E:020A:001E:04ED ()
 *
 * Called From: 259E:01EE:001D:6BAA
 * Called From: 259E:01EE:001F:7EB7
 */
void f__259E_020A_001E_04ED()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp + emu_si, -0x312), emu_ax.l);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_01B0_001C_3FC8(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x023F; emu_last_cs = 0x259E; emu_last_ip = 0x021C; emu_last_length = 0x001E; emu_last_crc = 0x04ED; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x312);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0228); f__259E_0040_0015_5E4A();
	f__259E_0228_0004_5B1F();
}

/**
 * Decompiled function f__259E_0211_0017_E5A1()
 *
 * @name f__259E_0211_0017_E5A1
 * @implements 259E:0211:0017:E5A1 ()
 *
 * Called From: 259E:01CA:001C:3FC8
 */
void f__259E_0211_0017_E5A1()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_01B0_001C_3FC8(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__259E_023F_0009_2EAC(); return; }
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x312);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0228); f__259E_0040_0015_5E4A();
	f__259E_0228_0004_5B1F();
}

/**
 * Decompiled function f__259E_0212_0016_E52D()
 *
 * @name f__259E_0212_0016_E52D
 * @implements 259E:0212:0016:E52D ()
 *
 * Called From: 259E:01AE:004C:E7DA
 * Called From: 259E:01AE:0022:79F4
 * Called From: 259E:01AE:0034:B862
 */
void f__259E_0212_0016_E52D()
{
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_01B0_001C_3FC8(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x023F; emu_last_cs = 0x259E; emu_last_ip = 0x021C; emu_last_length = 0x0016; emu_last_crc = 0xE52D; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x312);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0228); emu_ip = 0x0040; emu_last_cs = 0x259E; emu_last_ip = 0x0225; emu_last_length = 0x0016; emu_last_crc = 0xE52D; emu_call(); // Jump does not resolve
	f__259E_0228_0004_5B1F();
}

/**
 * Decompiled function f__259E_0228_0004_5B1F()
 *
 * @name f__259E_0228_0004_5B1F
 * @implements 259E:0228:0004:5B1F ()
 *
 * Called From: 259E:0228:001E:04ED
 * Called From: 259E:0228:0017:E5A1
 * Called From: 259E:0228:0026:4520
 * Called From: 259E:0228:0028:CFAE
 */
void f__259E_0228_0004_5B1F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__259E_022C_001C_7DA8(); return;
}

/**
 * Decompiled function f__259E_022C_001C_7DA8()
 *
 * @name f__259E_022C_001C_7DA8
 * @implements 259E:022C:001C:7DA8 ()
 *
 * Called From: 259E:022A:0004:5B1F
 * Called From: 259E:023D:001C:7DA8
 */
void f__259E_022C_001C_7DA8()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76A8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.cf) { emu_ip = 0x022C; emu_last_cs = 0x259E; emu_last_ip = 0x0236; emu_last_length = 0x001C; emu_last_crc = 0x7DA8; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { f__259E_023F_0009_2EAC(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_flags.cf) { f__259E_022C_001C_7DA8(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0248; emu_last_cs = 0x259E; emu_last_ip = 0x0243; emu_last_length = 0x001C; emu_last_crc = 0x7DA8; emu_call(); return; } // Jump does not resolve
	f__259E_018E_0022_79F4(); return;
}

/**
 * Decompiled function f__259E_023F_0009_2EAC()
 *
 * @name f__259E_023F_0009_2EAC
 * @implements 259E:023F:0009:2EAC ()
 *
 * Called From: 259E:021C:0017:E5A1
 * Called From: 259E:0238:001C:7DA8
 */
void f__259E_023F_0009_2EAC()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__259E_0248_0006_F7CE(); return; }
	f__259E_018E_0022_79F4(); return;
}

/**
 * Decompiled function f__259E_0248_0006_F7CE()
 *
 * @name f__259E_0248_0006_F7CE
 * @implements 259E:0248:0006:F7CE ()
 *
 * Called From: 259E:0243:0009:2EAC
 */
void f__259E_0248_0006_F7CE()
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
