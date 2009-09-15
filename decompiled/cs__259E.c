/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__259E_0006_0016_2DFF()
 *
 * @name f__259E_0006_0016_2DFF
 * @implements 259E:0006:0016:2DFF ()
 *
 * Called From: 10E4:2263:0013:1DC9
 * Called From: 1423:0408:0016:6E55
 * Called From: B4B8:1FDE:0014:1024
 * Called From: B4B8:2188:0018:6779
 * Called From: B4BE:0143:0014:3139
 * Called From: B4BE:020B:001A:F321
 * Called From: B4BE:0249:001A:F3D1
 * Called From: B4BE:02B4:0014:3163
 * Called From: B4BE:02F4:001A:F3F7
 * Called From: B4BE:0355:0014:3163
 * Called From: B4BE:0395:0011:7C74
 * Called From: B4BE:0395:001A:F3F7
 * Called From: B4DA:117C:0014:7255
 * Called From: B4DA:11CE:0011:1E65
 * Called From: B4ED:01DE:0014:727E
 * Called From: B4ED:03FC:0013:1DEB
 * Called From: B4ED:06B7:0013:3C8E
 * Called From: B4ED:070C:0013:7FEB
 * Called From: B503:006A:0013:C5DD
 * Called From: B503:0279:0014:1035
 * Called From: B503:0550:0012:C6C5
 * Called From: B511:0F2C:0011:1E65
 * Called From: B511:1120:0014:1035
 * Called From: B511:11F6:0025:4DC6
 * Called From: B511:1447:000F:DF4B
 * Called From: B511:14E7:000F:DF4B
 */
void f__259E_0006_0016_2DFF()
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
	emu_push(0x001C); f__259E_00B1_001C_3B31();
	f__259E_001C_0005_1C92();
}

/**
 * Decompiled function f__259E_001C_0005_1C92()
 *
 * @name f__259E_001C_0005_1C92
 * @implements 259E:001C:0005:1C92 ()
 *
 * Called From: 259E:001C:0016:2DFF
 */
void f__259E_001C_0005_1C92()
{
	emu_addws(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__259E_0021_001A_9268()
 *
 * @name f__259E_0021_001A_9268
 * @implements 259E:0021:001A:9268 ()
 *
 * Called From: 10E4:2001:0016:D8E8
 * Called From: B4ED:0179:0023:68B0
 * Called From: B4ED:0A8A:0023:62B0
 */
void f__259E_0021_001A_9268()
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
		case 0x22A61102: f__22A6_1102_004C_6FA8(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x259E; emu_last_ip = 0x0036; emu_last_length = 0x001A; emu_last_crc = 0x9268;
			emu_call();
			return;
	}
	f__259E_003B_0005_1C82();
}

/**
 * Decompiled function f__259E_003B_0005_1C82()
 *
 * @name f__259E_003B_0005_1C82
 * @implements 259E:003B:0005:1C82 ()
 *
 * Called From: 259E:003B:001A:9268
 */
void f__259E_003B_0005_1C82()
{
	emu_addws(&emu_sp, 0x8);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__259E_0040_0015_2233()
 *
 * @name f__259E_0040_0015_2233
 * @implements 259E:0040:0015:2233 ()
 *
 * Called From: 0642:05C2:0010:9B8D
 * Called From: 0642:06B9:000D:1B6E
 * Called From: 0642:06B9:0013:9CD0
 * Called From: 0642:073A:000D:1B6E
 * Called From: 0642:073A:0013:1CD6
 * Called From: 0C3A:17E2:000D:1B6E
 * Called From: 10E4:0469:0010:1B8C
 * Called From: 259E:0225:0017:54E0
 * Called From: 259E:0225:001E:FCC2
 * Called From: 259E:0225:0026:DF1F
 * Called From: 259E:0225:0028:379F
 * Called From: 25C4:03BF:0010:3ACA
 * Called From: B495:00E8:0010:1B8C
 * Called From: B4B8:185B:000E:DB6F
 * Called From: B4B8:186A:000F:B954
 * Called From: B4B8:1E08:000E:3978
 * Called From: B4B8:2274:000E:5B78
 * Called From: B4BE:00A9:0011:F948
 * Called From: B4F2:0E0D:0010:1B8C
 * Called From: B4F2:0ED4:001D:B19E
 * Called From: B503:0573:000D:1B6E
 */
void f__259E_0040_0015_2233()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0055); emu_cs = 0x2BA5; f__2BA5_0006_009C_1FA4();
	f__259E_0055_0005_1C82();
}

/**
 * Decompiled function f__259E_0055_0005_1C82()
 *
 * @name f__259E_0055_0005_1C82
 * @implements 259E:0055:0005:1C82 ()
 *
 * Called From: 259E:0055:0015:2233
 */
void f__259E_0055_0005_1C82()
{
	emu_addws(&emu_sp, 0x8);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__259E_00B1_001C_3B31()
 *
 * @name f__259E_00B1_001C_3B31
 * @implements 259E:00B1:001C:3B31 ()
 *
 * Called From: 259E:0019:0016:2DFF
 */
void f__259E_00B1_001C_3B31()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x312);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { emu_ip = 0x00CA; emu_last_cs = 0x259E; emu_last_ip = 0x00C0; emu_last_length = 0x001C; emu_last_crc = 0x3B31; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__259E_00CD_0015_61B8(); return; }
	emu_ip = 0x0248; emu_last_cs = 0x259E; emu_last_ip = 0x00CA; emu_last_length = 0x001C; emu_last_crc = 0x3B31; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__259E_00CD_0015_61B8()
 *
 * @name f__259E_00CD_0015_61B8
 * @implements 259E:00CD:0015:61B8 ()
 *
 * Called From: 259E:00C8:001C:3B31
 */
void f__259E_00CD_0015_61B8()
{
	emu_movw(&emu_ax.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x312);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00E2); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	f__259E_00E2_0014_2F12();
}

/**
 * Decompiled function f__259E_00E2_0014_2F12()
 *
 * @name f__259E_00E2_0014_2F12
 * @implements 259E:00E2:0014:2F12 ()
 *
 * Called From: 259E:00E2:0015:61B8
 */
void f__259E_00E2_0014_2F12()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C76), 0x3);
	if (emu_flags.zf) { f__259E_00FB_0009_B64B(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x00F6); emu_ip = 0x0040; emu_last_cs = 0x259E; emu_last_ip = 0x00F3; emu_last_length = 0x0014; emu_last_crc = 0x2F12; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__259E_00FB_0009_B64B()
 *
 * @name f__259E_00FB_0009_B64B
 * @implements 259E:00FB:0009:B64B ()
 *
 * Called From: 259E:00EA:0014:2F12
 */
void f__259E_00FB_0009_B64B()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__259E_0137_002D_A519(); return;
}

/**
 * Decompiled function f__259E_0104_0026_A6F9()
 *
 * @name f__259E_0104_0026_A6F9
 * @implements 259E:0104:0026:A6F9 ()
 *
 * Called From: 259E:013B:002D:A519
 * Called From: 259E:013B:002E:2508
 * Called From: 259E:013B:0038:CFE9
 * Called From: 259E:013B:003A:67EA
 */
void f__259E_0104_0026_A6F9()
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
	if (!(emu_flags.sf != emu_flags.of)) { f__259E_012A_003A_67EA(); return; }
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__259E_012C_0038_CFE9(); return;
}

/**
 * Decompiled function f__259E_012A_003A_67EA()
 *
 * @name f__259E_012A_003A_67EA
 * @implements 259E:012A:003A:67EA ()
 *
 * Called From: 259E:0122:0026:A6F9
 */
void f__259E_012A_003A_67EA()
{
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__259E_0136_002E_2508(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_0104_0026_A6F9(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_cx.l, 0x8);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0157; emu_last_cs = 0x259E; emu_last_ip = 0x014B; emu_last_length = 0x003A; emu_last_crc = 0x67EA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_ip = 0x016D; emu_last_cs = 0x259E; emu_last_ip = 0x0162; emu_last_length = 0x003A; emu_last_crc = 0x67EA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__259E_012C_0038_CFE9()
 *
 * @name f__259E_012C_0038_CFE9
 * @implements 259E:012C:0038:CFE9 ()
 *
 * Called From: 259E:0128:0026:A6F9
 */
void f__259E_012C_0038_CFE9()
{
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__259E_0136_002E_2508(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_0104_0026_A6F9(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_cx.l, 0x8);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0157; emu_last_cs = 0x259E; emu_last_ip = 0x014B; emu_last_length = 0x0038; emu_last_crc = 0xCFE9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_ip = 0x016D; emu_last_cs = 0x259E; emu_last_ip = 0x0162; emu_last_length = 0x0038; emu_last_crc = 0xCFE9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__259E_0136_002E_2508()
 *
 * @name f__259E_0136_002E_2508
 * @implements 259E:0136:002E:2508 ()
 *
 * Called From: 259E:0131:0038:CFE9
 * Called From: 259E:0131:003A:67EA
 */
void f__259E_0136_002E_2508()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_0104_0026_A6F9(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_cx.l, 0x8);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { f__259E_0157_000D_BC3E(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	f__259E_016D_0043_749E(); return;
}

/**
 * Decompiled function f__259E_0137_002D_A519()
 *
 * @name f__259E_0137_002D_A519
 * @implements 259E:0137:002D:A519 ()
 *
 * Called From: 259E:0102:0009:B64B
 */
void f__259E_0137_002D_A519()
{
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_0104_0026_A6F9(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_cx.l, 0x8);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0157; emu_last_cs = 0x259E; emu_last_ip = 0x014B; emu_last_length = 0x002D; emu_last_crc = 0xA519; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_ip = 0x016D; emu_last_cs = 0x259E; emu_last_ip = 0x0162; emu_last_length = 0x002D; emu_last_crc = 0xA519; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__259E_0157_000D_BC3E()
 *
 * @name f__259E_0157_000D_BC3E
 * @implements 259E:0157:000D:BC3E ()
 *
 * Called From: 259E:014B:002E:2508
 */
void f__259E_0157_000D_BC3E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	f__259E_016D_0043_749E(); return;
}

/**
 * Decompiled function f__259E_0164_004C_1857()
 *
 * @name f__259E_0164_004C_1857
 * @implements 259E:0164:004C:1857 ()
 *
 * Called From: 259E:017A:0043:749E
 * Called From: 259E:017A:004C:1857
 */
void f__259E_0164_004C_1857()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x017C; emu_last_cs = 0x259E; emu_last_ip = 0x0173; emu_last_length = 0x004C; emu_last_crc = 0x1857; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x200);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_0164_004C_1857(); return; }
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
	f__259E_0212_0016_77E0(); return;
}

/**
 * Decompiled function f__259E_016D_0043_749E()
 *
 * @name f__259E_016D_0043_749E
 * @implements 259E:016D:0043:749E ()
 *
 * Called From: 259E:0162:000D:BC3E
 * Called From: 259E:0162:002E:2508
 */
void f__259E_016D_0043_749E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__259E_017C_0034_7309(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x200);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_0164_004C_1857(); return; }
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
	emu_ip = 0x0212; emu_last_cs = 0x259E; emu_last_ip = 0x01AE; emu_last_length = 0x0043; emu_last_crc = 0x749E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__259E_017C_0034_7309()
 *
 * @name f__259E_017C_0034_7309
 * @implements 259E:017C:0034:7309 ()
 *
 * Called From: 259E:0173:0043:749E
 */
void f__259E_017C_0034_7309()
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
	f__259E_0212_0016_77E0(); return;
}

/**
 * Decompiled function f__259E_018E_0022_76EF()
 *
 * @name f__259E_018E_0022_76EF
 * @implements 259E:018E:0022:76EF ()
 *
 * Called From: 259E:0245:0009:0E1F
 * Called From: 259E:0245:001C:3F7C
 */
void f__259E_018E_0022_76EF()
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
	f__259E_0212_0016_77E0(); return;
}

/**
 * Decompiled function f__259E_01B0_001C_7072()
 *
 * @name f__259E_01B0_001C_7072
 * @implements 259E:01B0:001C:7072 ()
 *
 * Called From: 259E:0216:0016:77E0
 * Called From: 259E:0216:0017:54E0
 * Called From: 259E:0216:001E:FCC2
 * Called From: 259E:0216:0026:DF1F
 * Called From: 259E:0216:0028:379F
 */
void f__259E_01B0_001C_7072()
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
	if (!emu_flags.zf) { f__259E_01CC_0015_48FC(); return; }
	f__259E_0211_0017_54E0(); return;
}

/**
 * Decompiled function f__259E_01CC_0015_48FC()
 *
 * @name f__259E_01CC_0015_48FC
 * @implements 259E:01CC:0015:48FC ()
 *
 * Called From: 259E:01C8:001C:7072
 */
void f__259E_01CC_0015_48FC()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__259E_01EB_0015_4975(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__259E_01E1_001F_E790(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__259E_01E3_001D_A7E4(); return;
}

/**
 * Decompiled function f__259E_01E1_001F_E790()
 *
 * @name f__259E_01E1_001F_E790
 * @implements 259E:01E1:001F:E790 ()
 *
 * Called From: 259E:01DA:0015:48FC
 */
void f__259E_01E1_001F_E790()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__259E_020A_001E_FCC2(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0200; emu_last_cs = 0x259E; emu_last_ip = 0x01F9; emu_last_length = 0x001F; emu_last_crc = 0xE790; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ip = 0x0202; emu_last_cs = 0x259E; emu_last_ip = 0x01FE; emu_last_length = 0x001F; emu_last_crc = 0xE790; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__259E_01E3_001D_A7E4()
 *
 * @name f__259E_01E3_001D_A7E4
 * @implements 259E:01E3:001D:A7E4 ()
 *
 * Called From: 259E:01DF:0015:48FC
 */
void f__259E_01E3_001D_A7E4()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__259E_020A_001E_FCC2(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0200; emu_last_cs = 0x259E; emu_last_ip = 0x01F9; emu_last_length = 0x001D; emu_last_crc = 0xA7E4; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ip = 0x0202; emu_last_cs = 0x259E; emu_last_ip = 0x01FE; emu_last_length = 0x001D; emu_last_crc = 0xA7E4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__259E_01EB_0015_4975()
 *
 * @name f__259E_01EB_0015_4975
 * @implements 259E:01EB:0015:4975 ()
 *
 * Called From: 259E:01CF:0015:48FC
 */
void f__259E_01EB_0015_4975()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__259E_020A_001E_FCC2(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__259E_0200_0028_379F(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__259E_0202_0026_DF1F(); return;
}

/**
 * Decompiled function f__259E_0200_0028_379F()
 *
 * @name f__259E_0200_0028_379F
 * @implements 259E:0200:0028:379F ()
 *
 * Called From: 259E:01F9:0015:4975
 */
void f__259E_0200_0028_379F()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp + emu_si, -0x312), emu_ax.l);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_01B0_001C_7072(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x023F; emu_last_cs = 0x259E; emu_last_ip = 0x021C; emu_last_length = 0x0028; emu_last_crc = 0x379F; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x312);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0228); f__259E_0040_0015_2233();
	f__259E_0228_0004_04F4();
}

/**
 * Decompiled function f__259E_0202_0026_DF1F()
 *
 * @name f__259E_0202_0026_DF1F
 * @implements 259E:0202:0026:DF1F ()
 *
 * Called From: 259E:01FE:0015:4975
 */
void f__259E_0202_0026_DF1F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp + emu_si, -0x312), emu_ax.l);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_01B0_001C_7072(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x023F; emu_last_cs = 0x259E; emu_last_ip = 0x021C; emu_last_length = 0x0026; emu_last_crc = 0xDF1F; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x312);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0228); f__259E_0040_0015_2233();
	f__259E_0228_0004_04F4();
}

/**
 * Decompiled function f__259E_020A_001E_FCC2()
 *
 * @name f__259E_020A_001E_FCC2
 * @implements 259E:020A:001E:FCC2 ()
 *
 * Called From: 259E:01EE:0015:4975
 * Called From: 259E:01EE:001D:A7E4
 * Called From: 259E:01EE:001F:E790
 */
void f__259E_020A_001E_FCC2()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp + emu_si, -0x312), emu_ax.l);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_01B0_001C_7072(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x023F; emu_last_cs = 0x259E; emu_last_ip = 0x021C; emu_last_length = 0x001E; emu_last_crc = 0xFCC2; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x312);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0228); f__259E_0040_0015_2233();
	f__259E_0228_0004_04F4();
}

/**
 * Decompiled function f__259E_0211_0017_54E0()
 *
 * @name f__259E_0211_0017_54E0
 * @implements 259E:0211:0017:54E0 ()
 *
 * Called From: 259E:01CA:001C:7072
 */
void f__259E_0211_0017_54E0()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_01B0_001C_7072(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__259E_023F_0009_0E1F(); return; }
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x312);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0228); f__259E_0040_0015_2233();
	f__259E_0228_0004_04F4();
}

/**
 * Decompiled function f__259E_0212_0016_77E0()
 *
 * @name f__259E_0212_0016_77E0
 * @implements 259E:0212:0016:77E0 ()
 *
 * Called From: 259E:01AE:0022:76EF
 * Called From: 259E:01AE:0034:7309
 * Called From: 259E:01AE:004C:1857
 */
void f__259E_0212_0016_77E0()
{
	emu_cmpw(&emu_si, 0x300);
	if ((emu_flags.sf != emu_flags.of)) { f__259E_01B0_001C_7072(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x023F; emu_last_cs = 0x259E; emu_last_ip = 0x021C; emu_last_length = 0x0016; emu_last_crc = 0x77E0; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x312);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0228); emu_ip = 0x0040; emu_last_cs = 0x259E; emu_last_ip = 0x0225; emu_last_length = 0x0016; emu_last_crc = 0x77E0; emu_call(); // Jump does not resolve
	f__259E_0228_0004_04F4();
}

/**
 * Decompiled function f__259E_0228_0004_04F4()
 *
 * @name f__259E_0228_0004_04F4
 * @implements 259E:0228:0004:04F4 ()
 *
 * Called From: 259E:0228:0017:54E0
 * Called From: 259E:0228:001E:FCC2
 * Called From: 259E:0228:0026:DF1F
 * Called From: 259E:0228:0028:379F
 */
void f__259E_0228_0004_04F4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__259E_022C_001C_3F7C(); return;
}

/**
 * Decompiled function f__259E_022C_001C_3F7C()
 *
 * @name f__259E_022C_001C_3F7C
 * @implements 259E:022C:001C:3F7C ()
 *
 * Called From: 259E:022A:0004:04F4
 * Called From: 259E:023D:001C:3F7C
 */
void f__259E_022C_001C_3F7C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76A8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.cf) { emu_ip = 0x022C; emu_last_cs = 0x259E; emu_last_ip = 0x0236; emu_last_length = 0x001C; emu_last_crc = 0x3F7C; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { f__259E_023F_0009_0E1F(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_flags.cf) { f__259E_022C_001C_3F7C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0248; emu_last_cs = 0x259E; emu_last_ip = 0x0243; emu_last_length = 0x001C; emu_last_crc = 0x3F7C; emu_call(); return; } // Jump does not resolve
	f__259E_018E_0022_76EF(); return;
}

/**
 * Decompiled function f__259E_023F_0009_0E1F()
 *
 * @name f__259E_023F_0009_0E1F
 * @implements 259E:023F:0009:0E1F ()
 *
 * Called From: 259E:021C:0017:54E0
 * Called From: 259E:0238:001C:3F7C
 */
void f__259E_023F_0009_0E1F()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__259E_0248_0006_137A(); return; }
	f__259E_018E_0022_76EF(); return;
}

/**
 * Decompiled function f__259E_0248_0006_137A()
 *
 * @name f__259E_0248_0006_137A
 * @implements 259E:0248:0006:137A ()
 *
 * Called From: 259E:0243:0009:0E1F
 */
void f__259E_0248_0006_137A()
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
