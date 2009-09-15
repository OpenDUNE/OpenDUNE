/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__23E1_0004_0014_DD3C()
 *
 * @name f__23E1_0004_0014_DD3C
 * @implements 23E1:0004:0014:DD3C ()
 *
 * Called From: 10E4:0362:000C:FB46
 * Called From: 15C2:0228:000F:3790
 * Called From: 15C2:030C:000F:3790
 * Called From: 253D:00BB:0015:9426
 * Called From: 256D:006B:000F:D29D
 * Called From: 25C4:0182:0012:B434
 * Called From: 25C4:0340:0012:F629
 * Called From: 2B4C:00B9:000E:0A00
 * Called From: 2B4C:0135:000E:0A00
 * Called From: 3FF1:0164:0017:ADA9
 * Called From: B480:0164:0017:ADA9
 * Called From: B4B8:0EF2:001E:8D32
 * Called From: B4B8:176F:0010:F7FF
 * Called From: B4B8:1789:001A:3584
 * Called From: B4B8:17A2:0019:9493
 * Called From: B4B8:17C9:0027:BCFE
 * Called From: B4B8:187B:0011:758D
 * Called From: B4B8:1894:0019:9403
 * Called From: B4B8:1934:004F:D135
 * Called From: B4B8:1C48:001D:C57B
 * Called From: B4B8:1D26:001D:C57B
 * Called From: B511:101A:0010:8CFF
 * Called From: B520:0125:0016:81BF
 * Called From: B520:0246:0016:81A7
 * Called From: B520:030A:00C4:0003
 */
void f__23E1_0004_0014_DD3C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x66F8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x66FA));
	if (!emu_flags.zf) { f__23E1_001F_0015_3F6E(); return; }
	emu_push(emu_cs);
	emu_push(0x0018); f__23E1_0334_000B_B6F7();
	f__23E1_0018_001C_FDE5();
}

/**
 * Decompiled function f__23E1_0018_001C_FDE5()
 *
 * @name f__23E1_0018_001C_FDE5
 * @implements 23E1:0018:001C:FDE5 ()
 *
 * Called From: 23E1:0018:0014:DD3C
 */
void f__23E1_0018_001C_FDE5()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66FA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F8), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x40);
	if (emu_flags.zf) { emu_ip = 0x0040; emu_last_cs = 0x23E1; emu_last_ip = 0x0024; emu_last_length = 0x001C; emu_last_crc = 0xFDE5; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0034); emu_cs = 0x2649; f__2649_0336_004C_D882();
	f__23E1_0034_000C_10C1();
}

/**
 * Decompiled function f__23E1_001F_0015_3F6E()
 *
 * @name f__23E1_001F_0015_3F6E
 * @implements 23E1:001F:0015:3F6E ()
 *
 * Called From: 23E1:0011:0014:DD3C
 */
void f__23E1_001F_0015_3F6E()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x40);
	if (emu_flags.zf) { f__23E1_0040_0018_BACB(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0034); emu_cs = 0x2649; emu_ip = 0x036A; emu_last_cs = 0x23E1; emu_last_ip = 0x002F; emu_last_length = 0x0015; emu_last_crc = 0x3F6E; emu_call(); // Jump does not resolve
	f__23E1_0034_000C_10C1();
}

/**
 * Decompiled function f__23E1_0034_000C_10C1()
 *
 * @name f__23E1_0034_000C_10C1
 * @implements 23E1:0034:000C:10C1 ()
 *
 * Called From: 23E1:0034:001C:FDE5
 */
void f__23E1_0034_000C_10C1()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	f__23E1_01B1_000D_7FC7(); return;
}

/**
 * Decompiled function f__23E1_0040_0018_BACB()
 *
 * @name f__23E1_0040_0018_BACB
 * @implements 23E1:0040:0018:BACB ()
 *
 * Called From: 23E1:0024:0015:3F6E
 */
void f__23E1_0040_0018_BACB()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x20);
	if (emu_flags.zf) { f__23E1_0058_000C_9D22(); return; }
	emu_movw(&emu_ax.x, 0x10);
	f__23E1_005B_0009_1529(); return;
}

/**
 * Decompiled function f__23E1_0058_000C_9D22()
 *
 * @name f__23E1_0058_000C_9D22
 * @implements 23E1:0058:000C:9D22 ()
 *
 * Called From: 23E1:0051:0018:BACB
 */
void f__23E1_0058_000C_9D22()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_cwd();
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx.x);
	f__23E1_0066_000B_E088(); return;
}

/**
 * Decompiled function f__23E1_005B_0009_1529()
 *
 * @name f__23E1_005B_0009_1529
 * @implements 23E1:005B:0009:1529 ()
 *
 * Called From: 23E1:0056:0018:BACB
 */
void f__23E1_005B_0009_1529()
{
	emu_cwd();
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx.x);
	f__23E1_0066_000B_E088(); return;
}

/**
 * Decompiled function f__23E1_0066_000B_E088()
 *
 * @name f__23E1_0066_000B_E088
 * @implements 23E1:0066:000B:E088 ()
 *
 * Called From: 23E1:0062:0009:1529
 * Called From: 23E1:0062:000C:9D22
 */
void f__23E1_0066_000B_E088()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0071); emu_cs = 0x01F7; f__01F7_1855_0053_5E94();
	f__23E1_0071_001F_4E09();
}

/**
 * Decompiled function f__23E1_0071_001F_4E09()
 *
 * @name f__23E1_0071_001F_4E09
 * @implements 23E1:0071:001F:4E09 ()
 *
 * Called From: 23E1:0071:000B:E088
 */
void f__23E1_0071_001F_4E09()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x0064; emu_last_cs = 0x23E1; emu_last_ip = 0x007B; emu_last_length = 0x001F; emu_last_crc = 0x4E09; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__23E1_008E_0002_03B4(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C86));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C88));
	if (!emu_flags.zf) { emu_ip = 0x0090; emu_last_cs = 0x23E1; emu_last_ip = 0x008C; emu_last_length = 0x001F; emu_last_crc = 0x4E09; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x009C; emu_last_cs = 0x23E1; emu_last_ip = 0x008E; emu_last_length = 0x001F; emu_last_crc = 0x4E09; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__23E1_008E_0002_03B4()
 *
 * @name f__23E1_008E_0002_03B4
 * @implements 23E1:008E:0002:03B4 ()
 *
 * Called From: 23E1:0083:001F:4E09
 */
void f__23E1_008E_0002_03B4()
{
	f__23E1_009C_000F_352C(); return;
}

/**
 * Decompiled function f__23E1_009C_000F_352C()
 *
 * @name f__23E1_009C_000F_352C
 * @implements 23E1:009C:000F:352C ()
 *
 * Called From: 23E1:008E:0002:03B4
 */
void f__23E1_009C_000F_352C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__23E1_00AB_000B_3929(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x01BE; emu_last_cs = 0x23E1; emu_last_ip = 0x00A8; emu_last_length = 0x000F; emu_last_crc = 0x352C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__23E1_00A8_0003_0706()
 *
 * @name f__23E1_00A8_0003_0706
 * @implements 23E1:00A8:0003:0706 ()
 *
 * Called From: 23E1:01BB:000D:7FC7
 * Called From: 23E1:01BB:0021:B5DF
 * Called From: 23E1:01BB:0049:EE0C
 * Called From: 23E1:01BB:0063:E55A
 */
void f__23E1_00A8_0003_0706()
{
	f__23E1_01BE_0004_0F7A(); return;
}

/**
 * Decompiled function f__23E1_00AB_000B_3929()
 *
 * @name f__23E1_00AB_000B_3929
 * @implements 23E1:00AB:000B:3929 ()
 *
 * Called From: 23E1:00A2:000F:352C
 */
void f__23E1_00AB_000B_3929()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x00B6); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	f__23E1_00B6_0035_BD5C();
}

/**
 * Decompiled function f__23E1_00B6_0035_BD5C()
 *
 * @name f__23E1_00B6_0035_BD5C
 * @implements 23E1:00B6:0035:BD5C ()
 *
 * Called From: 23E1:00B6:000B:3929
 */
void f__23E1_00B6_0035_BD5C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x20);
	if (emu_flags.zf) { f__23E1_00EB_001B_A39B(); return; }
	emu_movb(&emu_ax.l, 0xF);
	emu_subb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_dx.l, emu_ax.l);
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movb(&emu_ax.h, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_orb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_incw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	f__23E1_00F7_000F_A7E9(); return;
}

/**
 * Decompiled function f__23E1_00EB_001B_A39B()
 *
 * @name f__23E1_00EB_001B_A39B
 * @implements 23E1:00EB:001B:A39B ()
 *
 * Called From: 23E1:00C3:0035:BD5C
 */
void f__23E1_00EB_001B_A39B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x10);
	if (emu_flags.zf) { f__23E1_0156_0005_17A4(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__23E1_012D_0026_0CEE(); return;
}

/**
 * Decompiled function f__23E1_00F7_000F_A7E9()
 *
 * @name f__23E1_00F7_000F_A7E9
 * @implements 23E1:00F7:000F:A7E9 ()
 *
 * Called From: 23E1:00E9:0035:BD5C
 */
void f__23E1_00F7_000F_A7E9()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x10);
	if (emu_flags.zf) { f__23E1_0156_0005_17A4(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__23E1_012D_0026_0CEE(); return;
}

/**
 * Decompiled function f__23E1_0106_0012_EB05()
 *
 * @name f__23E1_0106_0012_EB05
 * @implements 23E1:0106:0012:EB05 ()
 *
 * Called From: 23E1:0137:0026:0CEE
 * Called From: 23E1:0137:003B:2BE0
 * Called From: 23E1:0140:003B:2BE0
 */
void f__23E1_0106_0012_EB05()
{
	emu_movw(&emu_ax.x, 0x7D00);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0118); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__23E1_0118_003B_2BE0();
}

/**
 * Decompiled function f__23E1_0118_003B_2BE0()
 *
 * @name f__23E1_0118_003B_2BE0
 * @implements 23E1:0118:003B:2BE0 ()
 *
 * Called From: 23E1:0118:0012:EB05
 */
void f__23E1_0118_003B_2BE0()
{
	emu_addws(&emu_sp, 0x8);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x7D00);
	emu_sbbws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_ax.x, 0x7D0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!(emu_flags.cf || emu_flags.zf)) { f__23E1_0106_0012_EB05(); return; }
	if (!emu_flags.zf) { emu_ip = 0x0142; emu_last_cs = 0x23E1; emu_last_ip = 0x0139; emu_last_length = 0x003B; emu_last_crc = 0x2BE0; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x7D00);
	if (!(emu_flags.cf || emu_flags.zf)) { f__23E1_0106_0012_EB05(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0153); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__23E1_0153_0008_F4A4();
}

/**
 * Decompiled function f__23E1_012D_0026_0CEE()
 *
 * @name f__23E1_012D_0026_0CEE
 * @implements 23E1:012D:0026:0CEE ()
 *
 * Called From: 23E1:0104:000F:A7E9
 * Called From: 23E1:0104:001B:A39B
 */
void f__23E1_012D_0026_0CEE()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!(emu_flags.cf || emu_flags.zf)) { f__23E1_0106_0012_EB05(); return; }
	if (!emu_flags.zf) { emu_ip = 0x0142; emu_last_cs = 0x23E1; emu_last_ip = 0x0139; emu_last_length = 0x0026; emu_last_crc = 0x0CEE; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x7D00);
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0106; emu_last_cs = 0x23E1; emu_last_ip = 0x0140; emu_last_length = 0x0026; emu_last_crc = 0x0CEE; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0153); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__23E1_0153_0008_F4A4();
}

/**
 * Decompiled function f__23E1_0153_0008_F4A4()
 *
 * @name f__23E1_0153_0008_F4A4
 * @implements 23E1:0153:0008:F4A4 ()
 *
 * Called From: 23E1:0153:0026:0CEE
 * Called From: 23E1:0153:003B:2BE0
 */
void f__23E1_0153_0008_F4A4()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_cs);
	emu_push(0x015B); f__23E1_03DB_000B_B6F7();
	f__23E1_015B_0063_E55A();
}

/**
 * Decompiled function f__23E1_0156_0005_17A4()
 *
 * @name f__23E1_0156_0005_17A4
 * @implements 23E1:0156:0005:17A4 ()
 *
 * Called From: 23E1:00FC:000F:A7E9
 * Called From: 23E1:00FC:001B:A39B
 */
void f__23E1_0156_0005_17A4()
{
	emu_push(emu_cs);
	emu_push(0x015B); f__23E1_03DB_000B_B6F7();
	f__23E1_015B_0063_E55A();
}

/**
 * Decompiled function f__23E1_015B_0063_E55A()
 *
 * @name f__23E1_015B_0063_E55A
 * @implements 23E1:015B:0063:E55A ()
 *
 * Called From: 23E1:015B:0005:17A4
 * Called From: 23E1:015B:0008:F4A4
 */
void f__23E1_015B_0063_E55A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x66F2));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0182; emu_last_cs = 0x23E1; emu_last_ip = 0x016B; emu_last_length = 0x0063; emu_last_crc = 0xE55A; emu_call(); return; } // Jump does not resolve
	if (emu_flags.cf) { f__23E1_0175_0049_EE0C(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x66F0));
	if (!emu_flags.cf) { f__23E1_0182_003C_24E3(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F0), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x66FA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x66F8));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x66F6));
	if (emu_flags.cf) { emu_ip = 0x01B1; emu_last_cs = 0x23E1; emu_last_ip = 0x0193; emu_last_length = 0x0063; emu_last_crc = 0xE55A; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { f__23E1_019D_0021_B5DF(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x66F4));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x01B1; emu_last_cs = 0x23E1; emu_last_ip = 0x019B; emu_last_length = 0x0063; emu_last_crc = 0xE55A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x66FA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x66F8));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F4), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x6C8A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__23E1_00A8_0003_0706(); return;
}

/**
 * Decompiled function f__23E1_0175_0049_EE0C()
 *
 * @name f__23E1_0175_0049_EE0C
 * @implements 23E1:0175:0049:EE0C ()
 *
 * Called From: 23E1:016D:0063:E55A
 */
void f__23E1_0175_0049_EE0C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F0), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x66FA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x66F8));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x66F6));
	if (emu_flags.cf) { emu_ip = 0x01B1; emu_last_cs = 0x23E1; emu_last_ip = 0x0193; emu_last_length = 0x0049; emu_last_crc = 0xEE0C; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.cf || emu_flags.zf)) { f__23E1_019D_0021_B5DF(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x66F4));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x01B1; emu_last_cs = 0x23E1; emu_last_ip = 0x019B; emu_last_length = 0x0049; emu_last_crc = 0xEE0C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x66FA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x66F8));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F4), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x6C8A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__23E1_00A8_0003_0706(); return;
}

/**
 * Decompiled function f__23E1_0182_003C_24E3()
 *
 * @name f__23E1_0182_003C_24E3
 * @implements 23E1:0182:003C:24E3 ()
 *
 * Called From: 23E1:0173:0063:E55A
 */
void f__23E1_0182_003C_24E3()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x66FA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x66F8));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x66F6));
	if (emu_flags.cf) { f__23E1_01B1_000D_7FC7(); return; }
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x019D; emu_last_cs = 0x23E1; emu_last_ip = 0x0195; emu_last_length = 0x003C; emu_last_crc = 0x24E3; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x66F4));
	if ((emu_flags.cf || emu_flags.zf)) { f__23E1_01B1_000D_7FC7(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x66FA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x66F8));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F4), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x6C8A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ip = 0x00A8; emu_last_cs = 0x23E1; emu_last_ip = 0x01BB; emu_last_length = 0x003C; emu_last_crc = 0x24E3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__23E1_019D_0021_B5DF()
 *
 * @name f__23E1_019D_0021_B5DF
 * @implements 23E1:019D:0021:B5DF ()
 *
 * Called From: 23E1:0195:0049:EE0C
 * Called From: 23E1:0195:0063:E55A
 */
void f__23E1_019D_0021_B5DF()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x66FA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x66F8));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x66F4), emu_dx.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x6C8A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__23E1_00A8_0003_0706(); return;
}

/**
 * Decompiled function f__23E1_01B1_000D_7FC7()
 *
 * @name f__23E1_01B1_000D_7FC7
 * @implements 23E1:01B1:000D:7FC7 ()
 *
 * Called From: 23E1:003D:000C:10C1
 * Called From: 23E1:0193:003C:24E3
 * Called From: 23E1:019B:003C:24E3
 */
void f__23E1_01B1_000D_7FC7()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x6C8A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__23E1_00A8_0003_0706(); return;
}

/**
 * Decompiled function f__23E1_01BE_0004_0F7A()
 *
 * @name f__23E1_01BE_0004_0F7A
 * @implements 23E1:01BE:0004:0F7A ()
 *
 * Called From: 23E1:00A8:0003:0706
 */
void f__23E1_01BE_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__23E1_01C2_0011_4E4B()
 *
 * @name f__23E1_01C2_0011_4E4B
 * @implements 23E1:01C2:0011:4E4B ()
 *
 * Called From: 0FCB:0021:0019:1BED
 * Called From: 10E4:054B:0012:D08E
 * Called From: 1DD7:1732:0010:DF48
 * Called From: 1DD7:1744:0012:C99E
 * Called From: 2B4C:00FF:001B:C701
 * Called From: B4B8:17EB:000F:F78B
 * Called From: B4B8:1C14:000E:77A7
 * Called From: B4B8:1CE6:000E:77A7
 * Called From: B4E0:00E6:000D:27B4
 * Called From: B4ED:018F:0010:F69D
 * Called From: B511:0E0A:000B:32AD
 * Called From: B511:0E17:000D:8BA3
 * Called From: B511:11D1:001B:6745
 * Called From: B511:1467:001B:ADCA
 * Called From: B518:0A68:0027:E4A2
 * Called From: B520:022C:000E:0926
 * Called From: B520:03B1:001B:B8E7
 * Called From: B520:03BE:000D:5922
 */
void f__23E1_01C2_0011_4E4B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__23E1_01D3_000B_ED16(); return; }
	f__23E1_0252_0004_0F7A(); return;
}

/**
 * Decompiled function f__23E1_01D3_000B_ED16()
 *
 * @name f__23E1_01D3_000B_ED16
 * @implements 23E1:01D3:000B:ED16 ()
 *
 * Called From: 23E1:01CE:0011:4E4B
 */
void f__23E1_01D3_000B_ED16()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x01DE); emu_cs = 0x2649; f__2649_0BAE_001D_D0BE();
	f__23E1_01DE_0011_1AA6();
}

/**
 * Decompiled function f__23E1_01DE_0011_1AA6()
 *
 * @name f__23E1_01DE_0011_1AA6
 * @implements 23E1:01DE:0011:1AA6 ()
 *
 * Called From: 23E1:01DE:000B:ED16
 */
void f__23E1_01DE_0011_1AA6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__23E1_01F3_0035_1F01(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x01EF); emu_cs = 0x2649; emu_ip = 0x07CE; emu_last_cs = 0x23E1; emu_last_ip = 0x01EA; emu_last_length = 0x0011; emu_last_crc = 0x1AA6; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__23E1_01F3_0035_1F01()
 *
 * @name f__23E1_01F3_0035_1F01
 * @implements 23E1:01F3:0035:1F01 ()
 *
 * Called From: 23E1:01E2:0011:1AA6
 */
void f__23E1_01F3_0035_1F01()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addws(&emu_dx.x, 0xF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), emu_ax.l);
	emu_testb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x20);
	if (emu_flags.zf) { f__23E1_022C_000F_E3C6(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x5));
	emu_movb(&emu_ax.h, 0x0);
	emu_andw(&emu_ax.x, 0xF);
	emu_movw(&emu_dx.x, 0xF);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0228); emu_cs = 0x01F7; f__01F7_1741_001B_55D2();
	f__23E1_0228_0004_04B0();
}

/**
 * Decompiled function f__23E1_0228_0004_04B0()
 *
 * @name f__23E1_0228_0004_04B0
 * @implements 23E1:0228:0004:04B0 ()
 *
 * Called From: 23E1:0228:0035:1F01
 */
void f__23E1_0228_0004_04B0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__23E1_024E_0008_D87A(); return;
}

/**
 * Decompiled function f__23E1_022C_000F_E3C6()
 *
 * @name f__23E1_022C_000F_E3C6
 * @implements 23E1:022C:000F:E3C6 ()
 *
 * Called From: 23E1:0210:0035:1F01
 */
void f__23E1_022C_000F_E3C6()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { emu_ip = 0x023B; emu_last_cs = 0x23E1; emu_last_ip = 0x0230; emu_last_length = 0x000F; emu_last_crc = 0xE3C6; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_decw(&emu_ax.x);
	f__23E1_0246_0006_0036(); return;
}

/**
 * Decompiled function f__23E1_0246_0006_0036()
 *
 * @name f__23E1_0246_0006_0036
 * @implements 23E1:0246:0006:0036 ()
 *
 * Called From: 23E1:0239:000F:E3C6
 */
void f__23E1_0246_0006_0036()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x024C); emu_cs = 0x01F7; f__01F7_1741_001B_55D2();
	f__23E1_024C_000A_0E7B();
}

/**
 * Decompiled function f__23E1_024C_000A_0E7B()
 *
 * @name f__23E1_024C_000A_0E7B
 * @implements 23E1:024C:000A:0E7B ()
 *
 * Called From: 23E1:024C:0006:0036
 */
void f__23E1_024C_000A_0E7B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x6C8A));
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__23E1_024E_0008_D87A()
 *
 * @name f__23E1_024E_0008_D87A
 * @implements 23E1:024E:0008:D87A ()
 *
 * Called From: 23E1:022A:0004:04B0
 */
void f__23E1_024E_0008_D87A()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x6C8A));
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__23E1_0252_0004_0F7A()
 *
 * @name f__23E1_0252_0004_0F7A
 * @implements 23E1:0252:0004:0F7A ()
 *
 * Called From: 23E1:01D0:0011:4E4B
 */
void f__23E1_0252_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__23E1_0334_000B_B6F7()
 *
 * @name f__23E1_0334_000B_B6F7
 * @implements 23E1:0334:000B:B6F7 ()
 *
 * Called From: 10E4:034C:0009:815A
 * Called From: 1DB6:0182:0005:13DA
 * Called From: 23E1:0015:0014:DD3C
 * Called From: 2B4C:009F:0006:071A
 * Called From: 2B4C:011B:0006:071A
 * Called From: 2B4C:011B:001C:51C2
 * Called From: 3FF1:0081:000C:A6D0
 * Called From: B480:0081:000C:A6D0
 */
void f__23E1_0334_000B_B6F7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x033F); emu_cs = 0x01F7; f__01F7_1BC3_000F_5F02();
	f__23E1_033F_000A_D66B();
}

/**
 * Decompiled function f__23E1_033F_000A_D66B()
 *
 * @name f__23E1_033F_000A_D66B
 * @implements 23E1:033F:000A:D66B ()
 *
 * Called From: 23E1:033F:000B:B6F7
 */
void f__23E1_033F_000A_D66B()
{
	emu_cmpw(&emu_ax.x, 0xFFFF);
	if (!emu_flags.zf) { f__23E1_0367_0005_1776(); return; }
	emu_push(emu_cs); emu_push(0x0349); emu_cs = 0x3500; emu_ip = 0x0369; emu_last_cs = 0x23E1; emu_last_ip = 0x0344; emu_last_length = 0x000A; emu_last_crc = 0xD66B; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__23E1_0367_0005_1776()
 *
 * @name f__23E1_0367_0005_1776
 * @implements 23E1:0367:0005:1776 ()
 *
 * Called From: 23E1:0342:000A:D66B
 */
void f__23E1_0367_0005_1776()
{
	emu_push(emu_cs); emu_push(0x036C); emu_cs = 0x01F7; f__01F7_1B73_0022_5AE0();
	f__23E1_036C_0012_7D95();
}

/**
 * Decompiled function f__23E1_036C_0012_7D95()
 *
 * @name f__23E1_036C_0012_7D95
 * @implements 23E1:036C:0012:7D95 ()
 *
 * Called From: 23E1:036C:0005:1776
 */
void f__23E1_036C_0012_7D95()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__23E1_03A2_000A_7727(); return;
}

/**
 * Decompiled function f__23E1_037E_002E_C3F0()
 *
 * @name f__23E1_037E_002E_C3F0
 * @implements 23E1:037E:002E:C3F0 ()
 *
 * Called From: 23E1:03B1:0025:26C8
 */
void f__23E1_037E_002E_C3F0()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__23E1_03A2_000A_7727(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.cf) { f__23E1_03A2_000A_7727(); return; }
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0396; emu_last_cs = 0x23E1; emu_last_ip = 0x038F; emu_last_length = 0x002E; emu_last_crc = 0xC3F0; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x03A2; emu_last_cs = 0x23E1; emu_last_ip = 0x0394; emu_last_length = 0x002E; emu_last_crc = 0xC3F0; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03AC); emu_cs = 0x01F7; emu_ip = 0x2191; emu_last_cs = 0x23E1; emu_last_ip = 0x03A7; emu_last_length = 0x002E; emu_last_crc = 0xC3F0; emu_call(); // Jump does not resolve
	f__23E1_03AC_0025_26C8();
}

/**
 * Decompiled function f__23E1_03A2_000A_7727()
 *
 * @name f__23E1_03A2_000A_7727
 * @implements 23E1:03A2:000A:7727 ()
 *
 * Called From: 23E1:037C:0012:7D95
 * Called From: 23E1:0382:002E:C3F0
 * Called From: 23E1:038D:002E:C3F0
 */
void f__23E1_03A2_000A_7727()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03AC); emu_cs = 0x01F7; f__01F7_1DE5_0036_743A();
	f__23E1_03AC_0025_26C8();
}

/**
 * Decompiled function f__23E1_03AC_0025_26C8()
 *
 * @name f__23E1_03AC_0025_26C8
 * @implements 23E1:03AC:0025:26C8 ()
 *
 * Called From: 23E1:03AC:000A:7727
 */
void f__23E1_03AC_0025_26C8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__23E1_037E_002E_C3F0(); return; }
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x10);
	emu_sbbws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x03D1; emu_last_cs = 0x23E1; emu_last_ip = 0x03BF; emu_last_length = 0x0025; emu_last_crc = 0x26C8; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__23E1_03C9_0008_8EC4(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x03D1; emu_last_cs = 0x23E1; emu_last_ip = 0x03C7; emu_last_length = 0x0025; emu_last_crc = 0x26C8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ip = 0x03D5; emu_last_cs = 0x23E1; emu_last_ip = 0x03CF; emu_last_length = 0x0025; emu_last_crc = 0x26C8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__23E1_03C9_0008_8EC4()
 *
 * @name f__23E1_03C9_0008_8EC4
 * @implements 23E1:03C9:0008:8EC4 ()
 *
 * Called From: 23E1:03C1:0025:26C8
 */
void f__23E1_03C9_0008_8EC4()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__23E1_03D5_0002_03AC(); return;
}

/**
 * Decompiled function f__23E1_03D5_0002_03AC()
 *
 * @name f__23E1_03D5_0002_03AC
 * @implements 23E1:03D5:0002:03AC ()
 *
 * Called From: 23E1:03CF:0008:8EC4
 */
void f__23E1_03D5_0002_03AC()
{
	f__23E1_03D7_0004_0F7A(); return;
}

/**
 * Decompiled function f__23E1_03D7_0004_0F7A()
 *
 * @name f__23E1_03D7_0004_0F7A
 * @implements 23E1:03D7:0004:0F7A ()
 *
 * Called From: 23E1:03D5:0002:03AC
 */
void f__23E1_03D7_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__23E1_03DB_000B_B6F7()
 *
 * @name f__23E1_03DB_000B_B6F7
 * @implements 23E1:03DB:000B:B6F7 ()
 *
 * Called From: 23E1:0158:0005:17A4
 * Called From: 23E1:0158:0008:F4A4
 */
void f__23E1_03DB_000B_B6F7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x03E6); emu_cs = 0x01F7; f__01F7_1BC3_000F_5F02();
	f__23E1_03E6_000E_300D();
}

/**
 * Decompiled function f__23E1_03E6_000E_300D()
 *
 * @name f__23E1_03E6_000E_300D
 * @implements 23E1:03E6:000E:300D ()
 *
 * Called From: 23E1:03E6:000B:B6F7
 */
void f__23E1_03E6_000E_300D()
{
	emu_cmpw(&emu_ax.x, 0xFFFF);
	if (!emu_flags.zf) { f__23E1_0418_0005_1776(); return; }
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03F4); emu_cs = 0x263B; emu_ip = 0x0423; emu_last_cs = 0x23E1; emu_last_ip = 0x03EF; emu_last_length = 0x000E; emu_last_crc = 0x300D; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__23E1_0418_0005_1776()
 *
 * @name f__23E1_0418_0005_1776
 * @implements 23E1:0418:0005:1776 ()
 *
 * Called From: 23E1:03E9:000E:300D
 */
void f__23E1_0418_0005_1776()
{
	emu_push(emu_cs); emu_push(0x041D); emu_cs = 0x01F7; f__01F7_1B73_0022_5AE0();
	f__23E1_041D_0012_7DED();
}

/**
 * Decompiled function f__23E1_041D_0012_7DED()
 *
 * @name f__23E1_041D_0012_7DED
 * @implements 23E1:041D:0012:7DED ()
 *
 * Called From: 23E1:041D:0005:1776
 */
void f__23E1_041D_0012_7DED()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__23E1_0447_000A_7727(); return;
}

/**
 * Decompiled function f__23E1_042F_0022_16AC()
 *
 * @name f__23E1_042F_0022_16AC
 * @implements 23E1:042F:0022:16AC ()
 *
 * Called From: 23E1:0456:000F:B0F1
 */
void f__23E1_042F_0022_16AC()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__23E1_0447_000A_7727(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0451); emu_cs = 0x01F7; f__01F7_1DE5_0036_743A();
	f__23E1_0451_000F_B0F1();
}

/**
 * Decompiled function f__23E1_0447_000A_7727()
 *
 * @name f__23E1_0447_000A_7727
 * @implements 23E1:0447:000A:7727 ()
 *
 * Called From: 23E1:042D:0012:7DED
 * Called From: 23E1:0433:0022:16AC
 */
void f__23E1_0447_000A_7727()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0451); emu_cs = 0x01F7; f__01F7_1DE5_0036_743A();
	f__23E1_0451_000F_B0F1();
}

/**
 * Decompiled function f__23E1_0451_000F_B0F1()
 *
 * @name f__23E1_0451_000F_B0F1
 * @implements 23E1:0451:000F:B0F1 ()
 *
 * Called From: 23E1:0451:000A:7727
 * Called From: 23E1:0451:0022:16AC
 */
void f__23E1_0451_000F_B0F1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__23E1_042F_0022_16AC(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__23E1_0460_0004_0F7A(); return;
}

/**
 * Decompiled function f__23E1_0460_0004_0F7A()
 *
 * @name f__23E1_0460_0004_0F7A
 * @implements 23E1:0460:0004:0F7A ()
 *
 * Called From: 23E1:045E:000F:B0F1
 */
void f__23E1_0460_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
