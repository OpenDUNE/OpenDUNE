/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2903_007A_0032_6B6A()
 *
 * @name f__2903_007A_0032_6B6A
 * @implements 2903:007A:0032:6B6A ()
 *
 * Called From: B4B8:0AFB:000C:443C
 * Called From: B503:06FE:0031:026C
 * Called From: B503:09C4:0011:E839
 * Called From: B503:0ADF:004B:501D
 * Called From: B503:0E73:0011:A839
 */
void f__2903_007A_0032_6B6A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cx.x);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) { emu_ip = 0x00C5; emu_last_cs = 0x2903; emu_last_ip = 0x0088; emu_last_length = 0x0032; emu_last_crc = 0x6B6A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lodsw(emu_ds);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if (!emu_flags.cf) { emu_ip = 0x00A4; emu_last_cs = 0x2903; emu_last_ip = 0x0097; emu_last_length = 0x0032; emu_last_crc = 0x6B6A; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_si,  0x0), 0x0);
	if (!emu_flags.zf) { f__2903_00AC_0016_3BF4(); return; }
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x00C5; emu_last_cs = 0x2903; emu_last_ip = 0x00AA; emu_last_length = 0x0032; emu_last_crc = 0x6B6A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_00AC_0016_3BF4()
 *
 * @name f__2903_00AC_0016_3BF4
 * @implements 2903:00AC:0016:3BF4 ()
 *
 * Called From: 2903:00A2:0032:6B6A
 */
void f__2903_00AC_0016_3BF4()
{
	emu_movw(&emu_dx.x, emu_ds);
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, emu_si,  0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x0));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x2);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00C2); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	f__2903_00C2_0008_E81A();
}

/**
 * Decompiled function f__2903_00C2_0008_E81A()
 *
 * @name f__2903_00C2_0008_E81A
 * @implements 2903:00C2:0008:E81A ()
 *
 * Called From: 2903:00C2:0016:3BF4
 */
void f__2903_00C2_0008_E81A()
{
	emu_addws(&emu_sp, 0x4);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2903_00CA_0015_B203()
 *
 * @name f__2903_00CA_0015_B203
 * @implements 2903:00CA:0015:B203 ()
 *
 * Called From: 07D4:18FF:000B:38B9
 */
void f__2903_00CA_0015_B203()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) { emu_ip = 0x00DB; emu_last_cs = 0x2903; emu_last_ip = 0x00D5; emu_last_length = 0x0015; emu_last_crc = 0xB203; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lodsw(emu_ds);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2903_0158_001A_A9AA()
 *
 * @name f__2903_0158_001A_A9AA
 * @implements 2903:0158:001A:A9AA ()
 *
 * Called From: 07D4:0BAD:0031:6D90
 * Called From: 07D4:0C82:0046:0190
 * Called From: 07D4:0E39:0038:B797
 * Called From: 07D4:0F95:002B:044B
 * Called From: 07D4:11FF:0049:5323
 * Called From: 07D4:1238:0025:0CED
 * Called From: 07D4:188B:0069:D7A9
 * Called From: 0AEC:0931:0039:D44C
 * Called From: 0AEC:09CB:0031:4E99
 * Called From: 0AEC:0A79:0043:37EB
 * Called From: 0AEC:0DB0:0036:D428
 * Called From: 10E4:03E7:0038:B3E3
 * Called From: 10E4:0812:0026:0402
 * Called From: 10E4:0812:0030:7495
 * Called From: 10E4:08B1:0032:DA5D
 * Called From: 10E4:090D:003F:7109
 * Called From: 10E4:0940:002E:E251
 * Called From: 10E4:13A4:0033:2593
 * Called From: 10E4:13F4:0029:E0D4
 * Called From: 10E4:211E:0028:809F
 * Called From: 2B6C:0124:001F:4150
 * Called From: B495:0955:002E:E991
 * Called From: B495:09EC:002B:765B
 * Called From: B495:12D1:0028:809F
 * Called From: B495:148B:0032:DCD9
 * Called From: B4A2:08E0:0020:C693
 * Called From: B4A2:08E0:0023:C18B
 * Called From: B4DA:03EC:0023:C9CA
 * Called From: B4DA:0544:0023:C1EA
 * Called From: B4DA:06B0:0023:C1EA
 * Called From: B4DA:0A6F:0023:D98A
 * Called From: B4DA:0AAE:0025:F0AA
 * Called From: B503:070C:000E:80AC
 * Called From: B503:0A7C:002D:316B
 * Called From: B503:0AED:000E:80AC
 * Called From: B503:0EAC:0039:7A89
 */
void f__2903_0158_001A_A9AA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x44);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_es);
	emu_addw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { f__2903_0172_00B0_E99F(); return; }
	emu_ip = 0x0502; emu_last_cs = 0x2903; emu_last_ip = 0x016F; emu_last_length = 0x001A; emu_last_crc = 0xA9AA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_0172_00B0_E99F()
 *
 * @name f__2903_0172_00B0_E99F
 * @implements 2903:0172:00B0:E99F ()
 *
 * Called From: 2903:016D:001A:A9AA
 */
void f__2903_0172_00B0_E99F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x40), emu_ds);
	emu_testb(&emu_get_memory8(emu_es, emu_di,  0x0), 0x1);
	if (emu_flags.zf) { f__2903_0180_00A2_D967(); return; }
	emu_orw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x400);
	emu_movw(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2000);
	if (emu_flags.zf) { f__2903_0196_008C_63AF(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3C), emu_es);
	emu_addws(&emu_di, 0x4);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x100);
	if (emu_flags.zf) { f__2903_01B8_006A_61E6(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_es);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x16));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__2903_01B2_0070_4166(); return; }
	emu_andw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0xFEFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_ax.x);
	emu_addws(&emu_di, 0x6);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x200);
	if (emu_flags.zf) { emu_ip = 0x01EC; emu_last_cs = 0x2903; emu_last_ip = 0x01BD; emu_last_length = 0x00B0; emu_last_crc = 0xE99F; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_andws(&emu_get_memory16(emu_cs, 0x00,  0x5E), 0xF);
	emu_movw(&emu_bx.x, 0x60);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x70), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x74), 0x0);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), 0x100);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x1000);
	if (emu_flags.zf) { emu_ip = 0x01FD; emu_last_cs = 0x2903; emu_last_ip = 0x01F1; emu_last_length = 0x00B0; emu_last_crc = 0xE99F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x800);
	if (emu_flags.zf) { emu_ip = 0x020D; emu_last_cs = 0x2903; emu_last_ip = 0x0202; emu_last_length = 0x00B0; emu_last_crc = 0xE99F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x18), emu_ax.l);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { emu_ip = 0x0222; emu_last_cs = 0x2903; emu_last_ip = 0x0212; emu_last_length = 0x00B0; emu_last_crc = 0xE99F; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_es);
	emu_addws(&emu_di, 0x4);
	emu_ip = 0x0227; emu_last_cs = 0x2903; emu_last_ip = 0x0220; emu_last_length = 0x00B0; emu_last_crc = 0xE99F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_0180_00A2_D967()
 *
 * @name f__2903_0180_00A2_D967
 * @implements 2903:0180:00A2:D967 ()
 *
 * Called From: 2903:0179:00B0:E99F
 */
void f__2903_0180_00A2_D967()
{
	emu_movw(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2000);
	if (emu_flags.zf) { f__2903_0196_008C_63AF(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3C), emu_es);
	emu_addws(&emu_di, 0x4);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x100);
	if (emu_flags.zf) { f__2903_01B8_006A_61E6(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_es);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x16));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x01B2; emu_last_cs = 0x2903; emu_last_ip = 0x01AB; emu_last_length = 0x00A2; emu_last_crc = 0xD967; emu_call(); return; } // Jump does not resolve
	emu_andw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0xFEFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_ax.x);
	emu_addws(&emu_di, 0x6);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x200);
	if (emu_flags.zf) { emu_ip = 0x01EC; emu_last_cs = 0x2903; emu_last_ip = 0x01BD; emu_last_length = 0x00A2; emu_last_crc = 0xD967; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_andws(&emu_get_memory16(emu_cs, 0x00,  0x5E), 0xF);
	emu_movw(&emu_bx.x, 0x60);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x70), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x74), 0x0);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), 0x100);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x1000);
	if (emu_flags.zf) { emu_ip = 0x01FD; emu_last_cs = 0x2903; emu_last_ip = 0x01F1; emu_last_length = 0x00A2; emu_last_crc = 0xD967; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x800);
	if (emu_flags.zf) { emu_ip = 0x020D; emu_last_cs = 0x2903; emu_last_ip = 0x0202; emu_last_length = 0x00A2; emu_last_crc = 0xD967; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x18), emu_ax.l);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { emu_ip = 0x0222; emu_last_cs = 0x2903; emu_last_ip = 0x0212; emu_last_length = 0x00A2; emu_last_crc = 0xD967; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_es);
	emu_addws(&emu_di, 0x4);
	emu_ip = 0x0227; emu_last_cs = 0x2903; emu_last_ip = 0x0220; emu_last_length = 0x00A2; emu_last_crc = 0xD967; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_0196_008C_63AF()
 *
 * @name f__2903_0196_008C_63AF
 * @implements 2903:0196:008C:63AF ()
 *
 * Called From: 2903:0188:00A2:D967
 * Called From: 2903:0188:00B0:E99F
 */
void f__2903_0196_008C_63AF()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x100);
	if (emu_flags.zf) { f__2903_01B8_006A_61E6(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_es);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x16));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__2903_01B2_0070_4166(); return; }
	emu_andw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0xFEFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_ax.x);
	emu_addws(&emu_di, 0x6);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x200);
	if (emu_flags.zf) { f__2903_01EC_0036_BFD5(); return; }
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_andws(&emu_get_memory16(emu_cs, 0x00,  0x5E), 0xF);
	emu_movw(&emu_bx.x, 0x60);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x70), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x74), 0x0);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), 0x100);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x1000);
	if (emu_flags.zf) { emu_ip = 0x01FD; emu_last_cs = 0x2903; emu_last_ip = 0x01F1; emu_last_length = 0x008C; emu_last_crc = 0x63AF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x800);
	if (emu_flags.zf) { emu_ip = 0x020D; emu_last_cs = 0x2903; emu_last_ip = 0x0202; emu_last_length = 0x008C; emu_last_crc = 0x63AF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x18), emu_ax.l);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { emu_ip = 0x0222; emu_last_cs = 0x2903; emu_last_ip = 0x0212; emu_last_length = 0x008C; emu_last_crc = 0x63AF; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_es);
	emu_addws(&emu_di, 0x4);
	emu_ip = 0x0227; emu_last_cs = 0x2903; emu_last_ip = 0x0220; emu_last_length = 0x008C; emu_last_crc = 0x63AF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_01B2_0070_4166()
 *
 * @name f__2903_01B2_0070_4166
 * @implements 2903:01B2:0070:4166 ()
 *
 * Called From: 2903:01AB:00B0:E99F
 * Called From: 2903:01AB:008C:63AF
 */
void f__2903_01B2_0070_4166()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_ax.x);
	emu_addws(&emu_di, 0x6);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x200);
	if (emu_flags.zf) { f__2903_01EC_0036_BFD5(); return; }
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_andws(&emu_get_memory16(emu_cs, 0x00,  0x5E), 0xF);
	emu_movw(&emu_bx.x, 0x60);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x70), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x74), 0x0);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), 0x100);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x1000);
	if (emu_flags.zf) { f__2903_01FD_0025_5B06(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x800);
	if (emu_flags.zf) { emu_ip = 0x020D; emu_last_cs = 0x2903; emu_last_ip = 0x0202; emu_last_length = 0x0070; emu_last_crc = 0x4166; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x18), emu_ax.l);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { emu_ip = 0x0222; emu_last_cs = 0x2903; emu_last_ip = 0x0212; emu_last_length = 0x0070; emu_last_crc = 0x4166; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_es);
	emu_addws(&emu_di, 0x4);
	emu_ip = 0x0227; emu_last_cs = 0x2903; emu_last_ip = 0x0220; emu_last_length = 0x0070; emu_last_crc = 0x4166; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_01B8_006A_61E6()
 *
 * @name f__2903_01B8_006A_61E6
 * @implements 2903:01B8:006A:61E6 ()
 *
 * Called From: 2903:019B:008C:63AF
 * Called From: 2903:019B:00A2:D967
 * Called From: 2903:019B:00B0:E99F
 */
void f__2903_01B8_006A_61E6()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x200);
	if (emu_flags.zf) { f__2903_01EC_0036_BFD5(); return; }
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_incw(&emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_andws(&emu_get_memory16(emu_cs, 0x00,  0x5E), 0xF);
	emu_movw(&emu_bx.x, 0x60);
	emu_addw(&emu_bx.x, emu_get_memory16(emu_cs, 0x00,  0x5E));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x70), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x74), 0x0);
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), 0x100);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x1000);
	if (emu_flags.zf) { emu_ip = 0x01FD; emu_last_cs = 0x2903; emu_last_ip = 0x01F1; emu_last_length = 0x006A; emu_last_crc = 0x61E6; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x800);
	if (emu_flags.zf) { emu_ip = 0x020D; emu_last_cs = 0x2903; emu_last_ip = 0x0202; emu_last_length = 0x006A; emu_last_crc = 0x61E6; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x18), emu_ax.l);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { emu_ip = 0x0222; emu_last_cs = 0x2903; emu_last_ip = 0x0212; emu_last_length = 0x006A; emu_last_crc = 0x61E6; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_es);
	emu_addws(&emu_di, 0x4);
	emu_ip = 0x0227; emu_last_cs = 0x2903; emu_last_ip = 0x0220; emu_last_length = 0x006A; emu_last_crc = 0x61E6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_01EC_0036_BFD5()
 *
 * @name f__2903_01EC_0036_BFD5
 * @implements 2903:01EC:0036:BFD5 ()
 *
 * Called From: 2903:01BD:006A:61E6
 * Called From: 2903:01BD:0070:4166
 * Called From: 2903:01BD:008C:63AF
 */
void f__2903_01EC_0036_BFD5()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x1000);
	if (emu_flags.zf) { f__2903_01FD_0025_5B06(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_cs, 0x00,  0x72), emu_ax.x);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x800);
	if (emu_flags.zf) { f__2903_020D_0015_2959(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x18), emu_ax.l);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { emu_ip = 0x0222; emu_last_cs = 0x2903; emu_last_ip = 0x0212; emu_last_length = 0x0036; emu_last_crc = 0xBFD5; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_es);
	emu_addws(&emu_di, 0x4);
	emu_ip = 0x0227; emu_last_cs = 0x2903; emu_last_ip = 0x0220; emu_last_length = 0x0036; emu_last_crc = 0xBFD5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_01FD_0025_5B06()
 *
 * @name f__2903_01FD_0025_5B06
 * @implements 2903:01FD:0025:5B06 ()
 *
 * Called From: 2903:01F1:0036:BFD5
 * Called From: 2903:01F1:0070:4166
 */
void f__2903_01FD_0025_5B06()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x800);
	if (emu_flags.zf) { f__2903_020D_0015_2959(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x18), emu_ax.l);
	emu_addws(&emu_di, 0x2);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { emu_ip = 0x0222; emu_last_cs = 0x2903; emu_last_ip = 0x0212; emu_last_length = 0x0025; emu_last_crc = 0x5B06; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_es);
	emu_addws(&emu_di, 0x4);
	emu_ip = 0x0227; emu_last_cs = 0x2903; emu_last_ip = 0x0220; emu_last_length = 0x0025; emu_last_crc = 0x5B06; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_020D_0015_2959()
 *
 * @name f__2903_020D_0015_2959
 * @implements 2903:020D:0015:2959 ()
 *
 * Called From: 2903:0202:0025:5B06
 * Called From: 2903:0202:0036:BFD5
 */
void f__2903_020D_0015_2959()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { f__2903_0222_0041_6BB1(); return; }
	emu_lfp(&emu_es, &emu_ax.x, &emu_get_memory16(emu_ss, emu_bp + emu_di,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x30), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), emu_es);
	emu_addws(&emu_di, 0x4);
	emu_ip = 0x0227; emu_last_cs = 0x2903; emu_last_ip = 0x0220; emu_last_length = 0x0015; emu_last_crc = 0x2959; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_0222_0041_6BB1()
 *
 * @name f__2903_0222_0041_6BB1
 * @implements 2903:0222:0041:6BB1 ()
 *
 * Called From: 2903:0212:0015:2959
 */
void f__2903_0222_0041_6BB1()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x32), 0x100);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x34), 0x0);
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_movb(&emu_bx.l, emu_get_memory8(emu_ss, emu_bp,  0x12));
	emu_shlb(&emu_bx.l, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x2E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movb(&emu_bx.l, emu_get_memory8(emu_ss, emu_bp,  0x13));
	emu_andb(&emu_bx.l, 0xF);
	emu_shlb(&emu_bx.l, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x3E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0263); emu_cs = 0x252E; f__252E_001B_0018_30C5();
	f__2903_0263_0060_4CDD();
}

/**
 * Decompiled function f__2903_0263_0060_4CDD()
 *
 * @name f__2903_0263_0060_4CDD
 * @implements 2903:0263:0060:4CDD ()
 *
 * Called From: 2903:0263:0041:6BB1
 */
void f__2903_0263_0060_4CDD()
{
	emu_pop(&emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_si, 0x4062);
	emu_movb(&emu_cx.l, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_si, emu_ax.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x0));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_di, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4000);
	if (!emu_flags.zf) { f__2903_0286_003D_D4C6(); return; }
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x4));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4000);
	if (emu_flags.zf) { f__2903_029E_0025_6ED4(); return; }
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lodsw(emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_lodsb(emu_ds);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { emu_ip = 0x02C3; emu_last_cs = 0x2903; emu_last_ip = 0x02B3; emu_last_length = 0x0060; emu_last_crc = 0x4CDD; emu_call(); return; } // Jump does not resolve
	emu_mulw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_movb(&emu_ax.h, emu_dx.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x02C3; emu_last_cs = 0x2903; emu_last_ip = 0x02BE; emu_last_length = 0x0060; emu_last_crc = 0x4CDD; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0502; emu_last_cs = 0x2903; emu_last_ip = 0x02C0; emu_last_length = 0x0060; emu_last_crc = 0x4CDD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_0286_003D_D4C6()
 *
 * @name f__2903_0286_003D_D4C6
 * @implements 2903:0286:003D:D4C6 ()
 *
 * Called From: 2903:0281:0060:4CDD
 */
void f__2903_0286_003D_D4C6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x4));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4000);
	if (emu_flags.zf) { emu_ip = 0x029E; emu_last_cs = 0x2903; emu_last_ip = 0x0299; emu_last_length = 0x003D; emu_last_crc = 0xD4C6; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lodsw(emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_lodsb(emu_ds);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { f__2903_02C3_002A_EB6A(); return; }
	emu_mulw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_movb(&emu_ax.h, emu_dx.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__2903_02C3_002A_EB6A(); return; }
	emu_ip = 0x0502; emu_last_cs = 0x2903; emu_last_ip = 0x02C0; emu_last_length = 0x003D; emu_last_crc = 0xD4C6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_029E_0025_6ED4()
 *
 * @name f__2903_029E_0025_6ED4
 * @implements 2903:029E:0025:6ED4 ()
 *
 * Called From: 2903:0299:0060:4CDD
 */
void f__2903_029E_0025_6ED4()
{
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_si,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lodsw(emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_lodsb(emu_ds);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { f__2903_02C3_002A_EB6A(); return; }
	emu_mulw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_movb(&emu_ax.h, emu_dx.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x02C3; emu_last_cs = 0x2903; emu_last_ip = 0x02BE; emu_last_length = 0x0025; emu_last_crc = 0x6ED4; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0502; emu_last_cs = 0x2903; emu_last_ip = 0x02C0; emu_last_length = 0x0025; emu_last_crc = 0x6ED4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_02C3_002A_EB6A()
 *
 * @name f__2903_02C3_002A_EB6A
 * @implements 2903:02C3:002A:EB6A ()
 *
 * Called From: 2903:02B3:0025:6ED4
 * Called From: 2903:02B3:003D:D4C6
 * Called From: 2903:02BE:003D:D4C6
 */
void f__2903_02C3_002A_EB6A()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x8000);
	if (emu_flags.zf) { f__2903_02D1_001C_41C9(); return; }
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_shrw(&emu_dx.x, 0x1);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_lodsw(emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { f__2903_02ED_0054_790A(); return; }
	emu_mulw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_movb(&emu_ax.h, emu_dx.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x02ED; emu_last_cs = 0x2903; emu_last_ip = 0x02E8; emu_last_length = 0x002A; emu_last_crc = 0xEB6A; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0502; emu_last_cs = 0x2903; emu_last_ip = 0x02EA; emu_last_length = 0x002A; emu_last_crc = 0xEB6A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_02D1_001C_41C9()
 *
 * @name f__2903_02D1_001C_41C9
 * @implements 2903:02D1:001C:41C9 ()
 *
 * Called From: 2903:02C8:002A:EB6A
 */
void f__2903_02D1_001C_41C9()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_lodsw(emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { f__2903_02ED_0054_790A(); return; }
	emu_mulw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_movb(&emu_ax.l, emu_ax.h);
	emu_movb(&emu_ax.h, emu_dx.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__2903_02ED_0054_790A(); return; }
	emu_ip = 0x0502; emu_last_cs = 0x2903; emu_last_ip = 0x02EA; emu_last_length = 0x001C; emu_last_crc = 0x41C9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_02ED_0054_790A()
 *
 * @name f__2903_02ED_0054_790A
 * @implements 2903:02ED:0054:790A ()
 *
 * Called From: 2903:02DD:001C:41C9
 * Called From: 2903:02DD:002A:EB6A
 * Called From: 2903:02E8:001C:41C9
 */
void f__2903_02ED_0054_790A()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x8000);
	if (emu_flags.zf) { f__2903_02FB_0046_F6A0(); return; }
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_shrw(&emu_dx.x, 0x1);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_addws(&emu_si, 0x3);
	emu_lodsw(emu_ds);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	if (emu_flags.zf) { f__2903_031B_0026_E2CC(); return; }
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2000);
	if (!emu_flags.zf) { f__2903_031B_0026_E2CC(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3E), emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3C), emu_ds);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x400);
	if (emu_flags.zf) { emu_ip = 0x0325; emu_last_cs = 0x2903; emu_last_ip = 0x0320; emu_last_length = 0x0054; emu_last_crc = 0x790A; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_si, 0x10);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x034A; emu_last_cs = 0x2903; emu_last_ip = 0x032A; emu_last_length = 0x0054; emu_last_crc = 0x790A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp, -0x40));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x6F18));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0341); emu_cs = 0x2BD6; f__2BD6_0000_0015_D6DC();
	f__2903_0341_0018_F362();
}

/**
 * Decompiled function f__2903_02FB_0046_F6A0()
 *
 * @name f__2903_02FB_0046_F6A0
 * @implements 2903:02FB:0046:F6A0 ()
 *
 * Called From: 2903:02F2:0054:790A
 */
void f__2903_02FB_0046_F6A0()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_addws(&emu_si, 0x3);
	emu_lodsw(emu_ds);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	if (emu_flags.zf) { f__2903_031B_0026_E2CC(); return; }
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2000);
	if (!emu_flags.zf) { emu_ip = 0x031B; emu_last_cs = 0x2903; emu_last_ip = 0x0313; emu_last_length = 0x0046; emu_last_crc = 0xF6A0; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3E), emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3C), emu_ds);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x400);
	if (emu_flags.zf) { emu_ip = 0x0325; emu_last_cs = 0x2903; emu_last_ip = 0x0320; emu_last_length = 0x0046; emu_last_crc = 0xF6A0; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_si, 0x10);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2);
	if (!emu_flags.zf) { f__2903_034A_000F_0AE7(); return; }
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp, -0x40));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x6F18));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0341); emu_cs = 0x2BD6; f__2BD6_0000_0015_D6DC();
	f__2903_0341_0018_F362();
}

/**
 * Decompiled function f__2903_031B_0026_E2CC()
 *
 * @name f__2903_031B_0026_E2CC
 * @implements 2903:031B:0026:E2CC ()
 *
 * Called From: 2903:030C:0046:F6A0
 * Called From: 2903:030C:0054:790A
 * Called From: 2903:0313:0054:790A
 */
void f__2903_031B_0026_E2CC()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x400);
	if (emu_flags.zf) { f__2903_0325_001C_D665(); return; }
	emu_addws(&emu_si, 0x10);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2);
	if (!emu_flags.zf) { f__2903_034A_000F_0AE7(); return; }
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp, -0x40));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x6F18));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0341); emu_cs = 0x2BD6; f__2BD6_0000_0015_D6DC();
	f__2903_0341_0018_F362();
}

/**
 * Decompiled function f__2903_0325_001C_D665()
 *
 * @name f__2903_0325_001C_D665
 * @implements 2903:0325:001C:D665 ()
 *
 * Called From: 2903:0320:0026:E2CC
 */
void f__2903_0325_001C_D665()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2);
	if (!emu_flags.zf) { f__2903_034A_000F_0AE7(); return; }
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp, -0x40));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00,  0x6F18));
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_bx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0341); emu_cs = 0x2BD6; f__2BD6_0000_0015_D6DC();
	f__2903_0341_0018_F362();
}

/**
 * Decompiled function f__2903_0341_0018_F362()
 *
 * @name f__2903_0341_0018_F362
 * @implements 2903:0341:0018:F362 ()
 *
 * Called From: 2903:0341:001C:D665
 * Called From: 2903:0341:0026:E2CC
 * Called From: 2903:0341:0046:F6A0
 * Called From: 2903:0341:0054:790A
 */
void f__2903_0341_0018_F362()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00,  0x6F18));
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (!emu_flags.zf) { f__2903_0359_0013_ADE6(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	f__2903_0362_000A_5943(); return;
}

/**
 * Decompiled function f__2903_034A_000F_0AE7()
 *
 * @name f__2903_034A_000F_0AE7
 * @implements 2903:034A:000F:0AE7 ()
 *
 * Called From: 2903:032A:001C:D665
 * Called From: 2903:032A:0026:E2CC
 * Called From: 2903:032A:0046:F6A0
 */
void f__2903_034A_000F_0AE7()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (!emu_flags.zf) { f__2903_0359_0013_ADE6(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	f__2903_0362_000A_5943(); return;
}

/**
 * Decompiled function f__2903_0359_0013_ADE6()
 *
 * @name f__2903_0359_0013_ADE6
 * @implements 2903:0359:0013:ADE6 ()
 *
 * Called From: 2903:034F:000F:0AE7
 * Called From: 2903:034F:0018:F362
 */
void f__2903_0359_0013_ADE6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!emu_flags.sf) { f__2903_03BB_000F_33A7(); return; }
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2903_036C_001B_83D1(); return; }
	f__2903_0502_000C_5E3D(); return;
}

/**
 * Decompiled function f__2903_0362_000A_5943()
 *
 * @name f__2903_0362_000A_5943
 * @implements 2903:0362:000A:5943 ()
 *
 * Called From: 2903:0357:000F:0AE7
 * Called From: 2903:0357:0018:F362
 */
void f__2903_0362_000A_5943()
{
	if (!emu_flags.sf) { f__2903_03BB_000F_33A7(); return; }
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2903_036C_001B_83D1(); return; }
	f__2903_0502_000C_5E3D(); return;
}

/**
 * Decompiled function f__2903_036C_001B_83D1()
 *
 * @name f__2903_036C_001B_83D1
 * @implements 2903:036C:001B:83D1 ()
 *
 * Called From: 2903:0367:000A:5943
 * Called From: 2903:0367:0013:ADE6
 */
void f__2903_036C_001B_83D1()
{
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x42), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x36), emu_ds);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_cx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(0x0387);
	switch (emu_ip) {
		case 0x050E: f__2903_050E_0022_9D9B(); break;
		case 0x0545: f__2903_0545_0024_66E3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x0384; emu_last_length = 0x001B; emu_last_crc = 0x83D1;
			emu_call();
			return;
	}
	f__2903_0387_0043_CFBC();
}

/**
 * Decompiled function f__2903_0371_0016_64D4()
 *
 * @name f__2903_0371_0016_64D4
 * @implements 2903:0371:0016:64D4 ()
 *
 * Called From: 2903:039C:0043:CFBC
 */
void f__2903_0371_0016_64D4()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x42), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x36), emu_ds);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_cx.x);
	emu_xorw(&emu_dx.x, emu_dx.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(0x0387);
	switch (emu_ip) {
		case 0x050E: f__2903_050E_0022_9D9B(); break;
		case 0x0545: f__2903_0545_0024_66E3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x0384; emu_last_length = 0x0016; emu_last_crc = 0x64D4;
			emu_call();
			return;
	}
	f__2903_0387_0043_CFBC();
}

/**
 * Decompiled function f__2903_0387_0043_CFBC()
 *
 * @name f__2903_0387_0043_CFBC
 * @implements 2903:0387:0043:CFBC ()
 *
 * Called From: 2903:0387:001B:83D1
 * Called From: 2903:0387:0016:64D4
 */
void f__2903_0387_0043_CFBC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x34), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x34), 0xFF00);
	if (emu_flags.zf) { emu_ip = 0x0371; emu_last_cs = 0x2903; emu_last_ip = 0x0392; emu_last_length = 0x0043; emu_last_crc = 0xCFBC; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xchgb(&emu_get_memory8(emu_ss, emu_bp, -0x33), &emu_ax.l);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2903_0371_0016_64D4(); return; }
	if (!emu_flags.sf) { f__2903_03AE_001C_14BC(); return; }
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x38));
	emu_xorb(&emu_ax.l, emu_ax.l);
	emu_negw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_movb(&emu_ax.h, emu_get_memory8(emu_ss, emu_bp, -0x2A));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x34), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x03BB; emu_last_cs = 0x2903; emu_last_ip = 0x03B3; emu_last_length = 0x0043; emu_last_crc = 0xCFBC; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x03CA; emu_last_cs = 0x2903; emu_last_ip = 0x03C0; emu_last_length = 0x0043; emu_last_crc = 0xCFBC; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_ip = 0x03D3; emu_last_cs = 0x2903; emu_last_ip = 0x03C8; emu_last_length = 0x0043; emu_last_crc = 0xCFBC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_03AE_001C_14BC()
 *
 * @name f__2903_03AE_001C_14BC
 * @implements 2903:03AE:001C:14BC ()
 *
 * Called From: 2903:039E:0043:CFBC
 */
void f__2903_03AE_001C_14BC()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (!emu_flags.zf) { f__2903_03BB_000F_33A7(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x03CA; emu_last_cs = 0x2903; emu_last_ip = 0x03C0; emu_last_length = 0x001C; emu_last_crc = 0x14BC; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	f__2903_03D3_005C_858A(); return;
}

/**
 * Decompiled function f__2903_03BB_000F_33A7()
 *
 * @name f__2903_03BB_000F_33A7
 * @implements 2903:03BB:000F:33A7 ()
 *
 * Called From: 2903:0362:000A:5943
 * Called From: 2903:0362:0013:ADE6
 * Called From: 2903:03B3:001C:14BC
 */
void f__2903_03BB_000F_33A7()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (!emu_flags.zf) { f__2903_03CA_0065_508E(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	f__2903_03D3_005C_858A(); return;
}

/**
 * Decompiled function f__2903_03CA_0065_508E()
 *
 * @name f__2903_03CA_0065_508E
 * @implements 2903:03CA:0065:508E ()
 *
 * Called From: 2903:03C0:000F:33A7
 */
void f__2903_03CA_0065_508E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.sf) { f__2903_042F_0003_0408(); return; }
	if (emu_flags.zf) { emu_ip = 0x042F; emu_last_cs = 0x2903; emu_last_ip = 0x03D5; emu_last_length = 0x0065; emu_last_crc = 0x508E; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!emu_flags.cf) { f__2903_03EC_0043_E450(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (emu_flags.zf) { emu_ip = 0x03EC; emu_last_cs = 0x2903; emu_last_ip = 0x03E4; emu_last_length = 0x0065; emu_last_crc = 0x508E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { f__2903_040A_0025_58F1(); return; }
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!emu_flags.cf) { emu_ip = 0x042F; emu_last_cs = 0x2903; emu_last_ip = 0x0403; emu_last_length = 0x0065; emu_last_crc = 0x508E; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.sf) { emu_ip = 0x042F; emu_last_cs = 0x2903; emu_last_ip = 0x0415; emu_last_length = 0x0065; emu_last_crc = 0x508E; emu_call(); return; } // Jump does not resolve
	if (emu_flags.zf) { emu_ip = 0x042F; emu_last_cs = 0x2903; emu_last_ip = 0x0417; emu_last_length = 0x0065; emu_last_crc = 0x508E; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (!emu_flags.cf) { emu_ip = 0x0432; emu_last_cs = 0x2903; emu_last_ip = 0x041C; emu_last_length = 0x0065; emu_last_crc = 0x508E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_ip = 0x0432; emu_last_cs = 0x2903; emu_last_ip = 0x042D; emu_last_length = 0x0065; emu_last_crc = 0x508E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_03D3_005C_858A()
 *
 * @name f__2903_03D3_005C_858A
 * @implements 2903:03D3:005C:858A ()
 *
 * Called From: 2903:03C8:000F:33A7
 * Called From: 2903:03C8:001C:14BC
 */
void f__2903_03D3_005C_858A()
{
	if (emu_flags.sf) { f__2903_042F_0003_0408(); return; }
	if (emu_flags.zf) { f__2903_042F_0003_0408(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!emu_flags.cf) { f__2903_03EC_0043_E450(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (emu_flags.zf) { f__2903_03EC_0043_E450(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { emu_ip = 0x040A; emu_last_cs = 0x2903; emu_last_ip = 0x03F6; emu_last_length = 0x005C; emu_last_crc = 0x858A; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!emu_flags.cf) { emu_ip = 0x042F; emu_last_cs = 0x2903; emu_last_ip = 0x0403; emu_last_length = 0x005C; emu_last_crc = 0x858A; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.sf) { emu_ip = 0x042F; emu_last_cs = 0x2903; emu_last_ip = 0x0415; emu_last_length = 0x005C; emu_last_crc = 0x858A; emu_call(); return; } // Jump does not resolve
	if (emu_flags.zf) { emu_ip = 0x042F; emu_last_cs = 0x2903; emu_last_ip = 0x0417; emu_last_length = 0x005C; emu_last_crc = 0x858A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (!emu_flags.cf) { emu_ip = 0x0432; emu_last_cs = 0x2903; emu_last_ip = 0x041C; emu_last_length = 0x005C; emu_last_crc = 0x858A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_ip = 0x0432; emu_last_cs = 0x2903; emu_last_ip = 0x042D; emu_last_length = 0x005C; emu_last_crc = 0x858A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_03EC_0043_E450()
 *
 * @name f__2903_03EC_0043_E450
 * @implements 2903:03EC:0043:E450 ()
 *
 * Called From: 2903:03DA:005C:858A
 * Called From: 2903:03DA:0065:508E
 * Called From: 2903:03E4:005C:858A
 */
void f__2903_03EC_0043_E450()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.sf) { f__2903_040A_0025_58F1(); return; }
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!emu_flags.cf) { f__2903_042F_0003_0408(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.sf) { emu_ip = 0x042F; emu_last_cs = 0x2903; emu_last_ip = 0x0415; emu_last_length = 0x0043; emu_last_crc = 0xE450; emu_call(); return; } // Jump does not resolve
	if (emu_flags.zf) { emu_ip = 0x042F; emu_last_cs = 0x2903; emu_last_ip = 0x0417; emu_last_length = 0x0043; emu_last_crc = 0xE450; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (!emu_flags.cf) { f__2903_0432_0072_F783(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_ip = 0x0432; emu_last_cs = 0x2903; emu_last_ip = 0x042D; emu_last_length = 0x0043; emu_last_crc = 0xE450; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_040A_0025_58F1()
 *
 * @name f__2903_040A_0025_58F1
 * @implements 2903:040A:0025:58F1 ()
 *
 * Called From: 2903:03F6:0043:E450
 * Called From: 2903:03F6:0065:508E
 */
void f__2903_040A_0025_58F1()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.sf) { f__2903_042F_0003_0408(); return; }
	if (emu_flags.zf) { f__2903_042F_0003_0408(); return; }
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (!emu_flags.cf) { f__2903_0432_0072_F783(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	f__2903_0432_0072_F783(); return;
}

/**
 * Decompiled function f__2903_042F_0003_0408()
 *
 * @name f__2903_042F_0003_0408
 * @implements 2903:042F:0003:0408 ()
 *
 * Called From: 2903:03D3:005C:858A
 * Called From: 2903:03D3:0065:508E
 * Called From: 2903:03D5:005C:858A
 * Called From: 2903:0403:0043:E450
 * Called From: 2903:0415:0025:58F1
 * Called From: 2903:0417:0025:58F1
 */
void f__2903_042F_0003_0408()
{
	f__2903_0502_000C_5E3D(); return;
}

/**
 * Decompiled function f__2903_0432_0072_F783()
 *
 * @name f__2903_0432_0072_F783
 * @implements 2903:0432:0072:F783 ()
 *
 * Called From: 2903:041C:0025:58F1
 * Called From: 2903:041C:0043:E450
 * Called From: 2903:042D:0025:58F1
 */
void f__2903_0432_0072_F783()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x3A), 0x140);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ds, emu_get_memory16(emu_ss, emu_bp, -0x40));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x2);
	if (emu_flags.zf) { f__2903_044D_0057_B62F(); return; }
	emu_negw(&emu_get_memory16(emu_ss, emu_bp, -0x3A), emu_get_memory16(emu_ss, emu_bp, -0x3A));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_decw(&emu_bx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00,  0x66EC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x + emu_si,  0x0));
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_di, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_di);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x1);
	if (emu_flags.zf) { f__2903_0478_002C_7CA1(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_xchgw(&emu_get_memory16(emu_ss, emu_bp, -0x20), &emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_decw(&emu_ax.x);
	emu_addw(&emu_di, emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { f__2903_049B_0009_D55D(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x44), emu_ax.x);
	emu_xchgb(&emu_ax.h, &emu_dx.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_divw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x42), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x34), 0xFF00);
	if (emu_flags.zf) { emu_ip = 0x04A4; emu_last_cs = 0x2903; emu_last_ip = 0x04A0; emu_last_length = 0x0072; emu_last_crc = 0xF783; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x04C4; emu_last_cs = 0x2903; emu_last_ip = 0x04A2; emu_last_length = 0x0072; emu_last_crc = 0xF783; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_044D_0057_B62F()
 *
 * @name f__2903_044D_0057_B62F
 * @implements 2903:044D:0057:B62F ()
 *
 * Called From: 2903:0444:0072:F783
 */
void f__2903_044D_0057_B62F()
{
	emu_shlw(&emu_bx.x, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00,  0x66EC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x + emu_si,  0x0));
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_di, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_di);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x1);
	if (emu_flags.zf) { f__2903_0478_002C_7CA1(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_xchgw(&emu_get_memory16(emu_ss, emu_bp, -0x20), &emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_decw(&emu_ax.x);
	emu_addw(&emu_di, emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { f__2903_049B_0009_D55D(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x44), emu_ax.x);
	emu_xchgb(&emu_ax.h, &emu_dx.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_divw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x42), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x34), 0xFF00);
	if (emu_flags.zf) { emu_ip = 0x04A4; emu_last_cs = 0x2903; emu_last_ip = 0x04A0; emu_last_length = 0x0057; emu_last_crc = 0xB62F; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x04C4; emu_last_cs = 0x2903; emu_last_ip = 0x04A2; emu_last_length = 0x0057; emu_last_crc = 0xB62F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_0478_002C_7CA1()
 *
 * @name f__2903_0478_002C_7CA1
 * @implements 2903:0478:002C:7CA1 ()
 *
 * Called From: 2903:0464:0057:B62F
 * Called From: 2903:0464:0072:F783
 */
void f__2903_0478_002C_7CA1()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x4);
	if (emu_flags.zf) { f__2903_049B_0009_D55D(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x0);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x44), emu_ax.x);
	emu_xchgb(&emu_ax.h, &emu_dx.l);
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_divw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x30));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x42), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x34), 0xFF00);
	if (emu_flags.zf) { emu_ip = 0x04A4; emu_last_cs = 0x2903; emu_last_ip = 0x04A0; emu_last_length = 0x002C; emu_last_crc = 0x7CA1; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x04C4; emu_last_cs = 0x2903; emu_last_ip = 0x04A2; emu_last_length = 0x002C; emu_last_crc = 0x7CA1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_049B_0009_D55D()
 *
 * @name f__2903_049B_0009_D55D
 * @implements 2903:049B:0009:D55D ()
 *
 * Called From: 2903:047D:002C:7CA1
 * Called From: 2903:047D:0057:B62F
 * Called From: 2903:047D:0072:F783
 */
void f__2903_049B_0009_D55D()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x34), 0xFF00);
	if (emu_flags.zf) { f__2903_04A4_0018_0116(); return; }
	emu_ip = 0x04C4; emu_last_cs = 0x2903; emu_last_ip = 0x04A2; emu_last_length = 0x0009; emu_last_crc = 0xD55D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2903_04A4_0018_0116()
 *
 * @name f__2903_04A4_0018_0116
 * @implements 2903:04A4:0018:0116 ()
 *
 * Called From: 2903:04A0:0009:D55D
 * Called From: 2903:04FB:0018:E823
 */
void f__2903_04A4_0018_0116()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x32));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x34), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x34), 0xFF00);
	if (!emu_flags.zf) { f__2903_04BE_0016_DD76(); return; }
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_cx.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(0x04BC);
	switch (emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x04B9; emu_last_length = 0x0018; emu_last_crc = 0x0116;
			emu_call();
			return;
	}
	emu_unknown_call();
}

/**
 * Decompiled function f__2903_04BE_0016_DD76()
 *
 * @name f__2903_04BE_0016_DD76
 * @implements 2903:04BE:0016:DD76 ()
 *
 * Called From: 2903:04B1:0018:0116
 */
void f__2903_04BE_0016_DD76()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x38), emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x36), emu_ds);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x04D4);
	switch (emu_ip) {
		case 0x050E: f__2903_050E_0022_9D9B(); break;
		case 0x0545: f__2903_0545_0024_66E3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x04D1; emu_last_length = 0x0016; emu_last_crc = 0xDD76;
			emu_call();
			return;
	}
	f__2903_04D4_000E_A780();
}

/**
 * Decompiled function f__2903_04C4_0010_F9FA()
 *
 * @name f__2903_04C4_0010_F9FA
 * @implements 2903:04C4:0010:F9FA ()
 *
 * Called From: 2903:0500:0018:E823
 */
void f__2903_04C4_0010_F9FA()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(0x04D4);
	switch (emu_ip) {
		case 0x050E: f__2903_050E_0022_9D9B(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x04D1; emu_last_length = 0x0010; emu_last_crc = 0xF9FA;
			emu_call();
			return;
	}
	f__2903_04D4_000E_A780();
}

/**
 * Decompiled function f__2903_04D4_000E_A780()
 *
 * @name f__2903_04D4_000E_A780
 * @implements 2903:04D4:000E:A780 ()
 *
 * Called From: 2903:04D4:0010:F9FA
 * Called From: 2903:04D4:0016:DD76
 */
void f__2903_04D4_000E_A780()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x04EA; emu_last_cs = 0x2903; emu_last_ip = 0x04D8; emu_last_length = 0x000E; emu_last_crc = 0xA780; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2903_04E2_0008_0704(); return; }

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_push(0x04E2);
	switch (emu_ip) {
		case 0x0530: f__2903_0530_0008_905C(); break;
		case 0x0569: f__2903_0569_000A_905D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x04DF; emu_last_length = 0x000E; emu_last_crc = 0xA780;
			emu_call();
			return;
	}
	f__2903_04E2_0008_0704();
}

/**
 * Decompiled function f__2903_04E2_0008_0704()
 *
 * @name f__2903_04E2_0008_0704
 * @implements 2903:04E2:0008:0704 ()
 *
 * Called From: 2903:04DD:000E:A780
 * Called From: 2903:04E2:000E:A780
 */
void f__2903_04E2_0008_0704()
{
	emu_addw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_cx.x == 0) { f__2903_04EA_0018_E823(); return; }

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_push(0x04EA);
	switch (emu_ip) {
		case 0x050E: f__2903_050E_0022_9D9B(); break;
		case 0x0545: f__2903_0545_0024_66E3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x04E7; emu_last_length = 0x0008; emu_last_crc = 0x0704;
			emu_call();
			return;
	}
	f__2903_04EA_0018_E823();
}

/**
 * Decompiled function f__2903_04EA_0018_E823()
 *
 * @name f__2903_04EA_0018_E823
 * @implements 2903:04EA:0018:E823 ()
 *
 * Called From: 2903:04E5:0008:0704
 * Called From: 2903:04EA:0008:0704
 */
void f__2903_04EA_0018_E823()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x3A));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (emu_flags.zf) { f__2903_0502_000C_5E3D(); return; }
	emu_decb(&emu_get_memory8(emu_ss, emu_bp, -0x33));
	if (emu_flags.zf) { f__2903_04A4_0018_0116(); return; }
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x38));
	f__2903_04C4_0010_F9FA(); return;
}

/**
 * Decompiled function f__2903_0502_000C_5E3D()
 *
 * @name f__2903_0502_000C_5E3D
 * @implements 2903:0502:000C:5E3D ()
 *
 * Called From: 2903:0369:000A:5943
 * Called From: 2903:0369:0013:ADE6
 * Called From: 2903:042F:0003:0408
 * Called From: 2903:04F6:0018:E823
 */
void f__2903_0502_000C_5E3D()
{
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2903_050E_0022_9D9B()
 *
 * @name f__2903_050E_0022_9D9B
 * @implements 2903:050E:0022:9D9B ()
 *
 * Called From: 2903:0384:0016:64D4
 * Called From: 2903:0384:001B:83D1
 * Called From: 2903:04D1:0010:F9FA
 * Called From: 2903:04D1:0016:DD76
 * Called From: 2903:04E7:0008:0704
 */
void f__2903_050E_0022_9D9B()
{
	emu_push(emu_es);
	emu_movw(&emu_bx.x, emu_ds);
	emu_movw(&emu_es, emu_bx.x);
	emu_xchgw(&emu_di, &emu_si);
	if (emu_cx.x == 0) { f__2903_0528_0008_DFEA(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_repne_scasb();
	if (emu_flags.zf) { f__2903_051F_0011_6D33(); return; }
	if (emu_cx.x == 0) { f__2903_0528_0008_DFEA(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0517; emu_last_cs = 0x2903; emu_last_ip = 0x0526; emu_last_length = 0x0022; emu_last_crc = 0x9D9B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ds, emu_bx.x);
	emu_xchgw(&emu_di, &emu_si);
	emu_pop(&emu_es);
	emu_subw(&emu_di, emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0517_0019_902F()
 *
 * @name f__2903_0517_0019_902F
 * @implements 2903:0517:0019:902F ()
 *
 * Called From: 2903:0526:0011:6D33
 */
void f__2903_0517_0019_902F()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_repne_scasb();
	if (emu_flags.zf) { f__2903_051F_0011_6D33(); return; }
	if (emu_cx.x == 0) { f__2903_0528_0008_DFEA(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0517; emu_last_cs = 0x2903; emu_last_ip = 0x0526; emu_last_length = 0x0019; emu_last_crc = 0x902F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ds, emu_bx.x);
	emu_xchgw(&emu_di, &emu_si);
	emu_pop(&emu_es);
	emu_subw(&emu_di, emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_051F_0011_6D33()
 *
 * @name f__2903_051F_0011_6D33
 * @implements 2903:051F:0011:6D33 ()
 *
 * Called From: 2903:051B:0022:9D9B
 * Called From: 2903:051B:0019:902F
 */
void f__2903_051F_0011_6D33()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2903_0517_0019_902F(); return; }
	emu_movw(&emu_ds, emu_bx.x);
	emu_xchgw(&emu_di, &emu_si);
	emu_pop(&emu_es);
	emu_subw(&emu_di, emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0528_0008_DFEA()
 *
 * @name f__2903_0528_0008_DFEA
 * @implements 2903:0528:0008:DFEA ()
 *
 * Called From: 2903:0515:0022:9D9B
 * Called From: 2903:051D:0019:902F
 * Called From: 2903:051D:0022:9D9B
 */
void f__2903_0528_0008_DFEA()
{
	emu_movw(&emu_ds, emu_bx.x);
	emu_xchgw(&emu_di, &emu_si);
	emu_pop(&emu_es);
	emu_subw(&emu_di, emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0530_0008_905C()
 *
 * @name f__2903_0530_0008_905C
 * @implements 2903:0530:0008:905C ()
 *
 * Called From: 2903:04DF:000E:A780
 * Called From: 2903:0539:0005:02CA
 * Called From: 2903:0542:0008:9BAE
 */
void f__2903_0530_0008_905C()
{
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__2903_053D_0008_9BAE(); return; }

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x0538);
	switch (emu_ip) {
		case 0x0580: f__2903_0580_0004_07B2(); break;
		case 0x0584: f__2903_0584_0015_3069(); break;
		case 0x05C8: f__2903_05C8_0018_74AA(); break;
		case 0x05E0: f__2903_05E0_000A_F553(); break;
		case 0x061F: f__2903_061F_0015_C9D7(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x0535; emu_last_length = 0x0008; emu_last_crc = 0x905C;
			emu_call();
			return;
	}
	f__2903_0538_0005_02CA();
}

/**
 * Decompiled function f__2903_0538_0005_02CA()
 *
 * @name f__2903_0538_0005_02CA
 * @implements 2903:0538:0005:02CA ()
 *
 * Called From: 2903:0538:0008:905C
 */
void f__2903_0538_0005_02CA()
{
	emu_incw(&emu_di);
	if (--emu_cx.x != 0) { f__2903_0530_0008_905C(); return; }
	f__2903_0544_0001_0186(); return;
}

/**
 * Decompiled function f__2903_053D_0008_9BAE()
 *
 * @name f__2903_053D_0008_9BAE
 * @implements 2903:053D:0008:9BAE ()
 *
 * Called From: 2903:0533:0008:905C
 */
void f__2903_053D_0008_9BAE()
{
	emu_lodsb(emu_ds);
	emu_addw(&emu_di, emu_ax.x);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2903_0530_0008_905C(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0544_0001_0186()
 *
 * @name f__2903_0544_0001_0186
 * @implements 2903:0544:0001:0186 ()
 *
 * Called From: 2903:053B:0005:02CA
 */
void f__2903_0544_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0545_0024_66E3()
 *
 * @name f__2903_0545_0024_66E3
 * @implements 2903:0545:0024:66E3 ()
 *
 * Called From: 2903:0384:001B:83D1
 * Called From: 2903:0384:0016:64D4
 * Called From: 2903:04D1:0016:DD76
 * Called From: 2903:04E7:0008:0704
 */
void f__2903_0545_0024_66E3()
{
	emu_push(emu_es);
	emu_movw(&emu_ax.x, emu_ds);
	emu_movw(&emu_es, emu_ax.x);
	emu_xchgw(&emu_di, &emu_si);
	if (emu_cx.x == 0) { f__2903_055F_000A_6F29(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_repne_scasb();
	if (emu_flags.zf) { f__2903_0556_0013_A44F(); return; }
	if (emu_cx.x == 0) { f__2903_055F_000A_6F29(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x054E; emu_last_cs = 0x2903; emu_last_ip = 0x055D; emu_last_length = 0x0024; emu_last_crc = 0x66E3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_es);
	emu_movw(&emu_ds, emu_ax.x);
	emu_xchgw(&emu_di, &emu_si);
	emu_pop(&emu_es);
	emu_addw(&emu_di, emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_054E_001B_503C()
 *
 * @name f__2903_054E_001B_503C
 * @implements 2903:054E:001B:503C ()
 *
 * Called From: 2903:055D:0013:A44F
 */
void f__2903_054E_001B_503C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_repne_scasb();
	if (emu_flags.zf) { f__2903_0556_0013_A44F(); return; }
	if (emu_cx.x == 0) { f__2903_055F_000A_6F29(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x054E; emu_last_cs = 0x2903; emu_last_ip = 0x055D; emu_last_length = 0x001B; emu_last_crc = 0x503C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_es);
	emu_movw(&emu_ds, emu_ax.x);
	emu_xchgw(&emu_di, &emu_si);
	emu_pop(&emu_es);
	emu_addw(&emu_di, emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0556_0013_A44F()
 *
 * @name f__2903_0556_0013_A44F
 * @implements 2903:0556:0013:A44F ()
 *
 * Called From: 2903:0552:0024:66E3
 * Called From: 2903:0552:001B:503C
 */
void f__2903_0556_0013_A44F()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_incw(&emu_di);
	emu_incw(&emu_cx.x);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2903_054E_001B_503C(); return; }
	emu_movw(&emu_ax.x, emu_es);
	emu_movw(&emu_ds, emu_ax.x);
	emu_xchgw(&emu_di, &emu_si);
	emu_pop(&emu_es);
	emu_addw(&emu_di, emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_055F_000A_6F29()
 *
 * @name f__2903_055F_000A_6F29
 * @implements 2903:055F:000A:6F29 ()
 *
 * Called From: 2903:054C:0024:66E3
 * Called From: 2903:0554:001B:503C
 * Called From: 2903:0554:0024:66E3
 */
void f__2903_055F_000A_6F29()
{
	emu_movw(&emu_ax.x, emu_es);
	emu_movw(&emu_ds, emu_ax.x);
	emu_xchgw(&emu_di, &emu_si);
	emu_pop(&emu_es);
	emu_addw(&emu_di, emu_cx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0569_000A_905D()
 *
 * @name f__2903_0569_000A_905D
 * @implements 2903:0569:000A:905D ()
 *
 * Called From: 2903:04DF:000E:A780
 */
void f__2903_0569_000A_905D()
{
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__2903_0578_0008_8FAE(); return; }

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x0573);
	switch (emu_ip) {
		case 0x05C8: f__2903_05C8_0018_74AA(); break;
		case 0x05E0: f__2903_05E0_000A_F553(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x0570; emu_last_length = 0x000A; emu_last_crc = 0x905D;
			emu_call();
			return;
	}
	f__2903_0573_0005_03CA();
}

/**
 * Decompiled function f__2903_056B_0008_905C()
 *
 * @name f__2903_056B_0008_905C
 * @implements 2903:056B:0008:905C ()
 *
 * Called From: 2903:0574:0005:03CA
 * Called From: 2903:057D:0008:8FAE
 */
void f__2903_056B_0008_905C()
{
	emu_lodsb(emu_ds);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (emu_flags.zf) { f__2903_0578_0008_8FAE(); return; }

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x0573);
	switch (emu_ip) {
		case 0x0580: f__2903_0580_0004_07B2(); break;
		case 0x05C8: f__2903_05C8_0018_74AA(); break;
		case 0x05E0: f__2903_05E0_000A_F553(); break;
		case 0x061F: f__2903_061F_0015_C9D7(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x2903; emu_last_ip = 0x0570; emu_last_length = 0x0008; emu_last_crc = 0x905C;
			emu_call();
			return;
	}
	f__2903_0573_0005_03CA();
}

/**
 * Decompiled function f__2903_0573_0005_03CA()
 *
 * @name f__2903_0573_0005_03CA
 * @implements 2903:0573:0005:03CA ()
 *
 * Called From: 2903:0573:0008:905C
 * Called From: 2903:0573:000A:905D
 */
void f__2903_0573_0005_03CA()
{
	emu_decw(&emu_di);
	if (--emu_cx.x != 0) { f__2903_056B_0008_905C(); return; }
	f__2903_057F_0001_0186(); return;
}

/**
 * Decompiled function f__2903_0578_0008_8FAE()
 *
 * @name f__2903_0578_0008_8FAE
 * @implements 2903:0578:0008:8FAE ()
 *
 * Called From: 2903:056E:000A:905D
 * Called From: 2903:056E:0008:905C
 */
void f__2903_0578_0008_8FAE()
{
	emu_lodsb(emu_ds);
	emu_subw(&emu_di, emu_ax.x);
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__2903_056B_0008_905C(); return; }

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_057F_0001_0186()
 *
 * @name f__2903_057F_0001_0186
 * @implements 2903:057F:0001:0186 ()
 *
 * Called From: 2903:0576:0005:03CA
 */
void f__2903_057F_0001_0186()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0580_0004_07B2()
 *
 * @name f__2903_0580_0004_07B2
 * @implements 2903:0580:0004:07B2 ()
 *
 * Called From: 2903:0535:0008:905C
 * Called From: 2903:0570:0008:905C
 */
void f__2903_0580_0004_07B2()
{
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_0584_0015_3069()
 *
 * @name f__2903_0584_0015_3069
 * @implements 2903:0584:0015:3069 ()
 *
 * Called From: 2903:0535:0008:905C
 */
void f__2903_0584_0015_3069()
{
	emu_push(emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_cx.x);
	emu_lfp(&emu_ds, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x + emu_ax.l,  0x0));
	if (--emu_cx.x != 0) { f__2903_058E_000B_BB8E(); return; }
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_058E_000B_BB8E()
 *
 * @name f__2903_058E_000B_BB8E
 * @implements 2903:058E:000B:BB8E ()
 *
 * Called From: 2903:058F:0015:3069
 */
void f__2903_058E_000B_BB8E()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x + emu_ax.l,  0x0));
	if (--emu_cx.x != 0) { emu_ip = 0x058E; emu_last_cs = 0x2903; emu_last_ip = 0x058F; emu_last_length = 0x000B; emu_last_crc = 0xBB8E; emu_call(); } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_05C8_0018_74AA()
 *
 * @name f__2903_05C8_0018_74AA
 * @implements 2903:05C8:0018:74AA ()
 *
 * Called From: 2903:0535:0008:905C
 * Called From: 2903:0570:000A:905D
 * Called From: 2903:0570:0008:905C
 */
void f__2903_05C8_0018_74AA()
{
	emu_push(emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_cx.x);
	emu_lfp(&emu_ds, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_di,  0x0));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x + emu_ax.l,  0x0));
	if (--emu_cx.x != 0) { emu_ip = 0x05D5; emu_last_cs = 0x2903; emu_last_ip = 0x05D6; emu_last_length = 0x0018; emu_last_crc = 0x74AA; emu_call(); } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_05E0_000A_F553()
 *
 * @name f__2903_05E0_000A_F553
 * @implements 2903:05E0:000A:F553 ()
 *
 * Called From: 2903:0535:0008:905C
 * Called From: 2903:0570:0008:905C
 * Called From: 2903:0570:000A:905D
 */
void f__2903_05E0_000A_F553()
{
	emu_push(emu_ds);
	emu_lfp(&emu_ds, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x3E));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x + emu_ax.l,  0x0));
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_061F_0015_C9D7()
 *
 * @name f__2903_061F_0015_C9D7
 * @implements 2903:061F:0015:C9D7 ()
 *
 * Called From: 2903:0535:0008:905C
 * Called From: 2903:0570:0008:905C
 */
void f__2903_061F_0015_C9D7()
{
	emu_push(emu_ds);
	emu_push(emu_cx.x);
	emu_lfp(&emu_ds, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x3E));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x + emu_ax.l,  0x0));
	emu_lfp(&emu_ds, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x + emu_ax.l,  0x0));
	if (--emu_cx.x != 0) { emu_ip = 0x062B; emu_last_cs = 0x2903; emu_last_ip = 0x062C; emu_last_length = 0x0015; emu_last_crc = 0xC9D7; emu_call(); } // Jump does not resolve
	emu_movb(&emu_get_memory8(emu_es, emu_di,  0x0), emu_ax.l);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}

/**
 * Decompiled function f__2903_090A_0019_A387()
 *
 * @name f__2903_090A_0019_A387
 * @implements 2903:090A:0019:A387 ()
 *
 * Called From: B4B8:194F:001B:DD24
 */
void f__2903_090A_0019_A387()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6F1C), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6F18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6F1A), emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
