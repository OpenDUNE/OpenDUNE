/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2C17_000C_002F_E104()
 *
 * @name f__2C17_000C_002F_E104
 * @implements 2C17:000C:002F:E104 ()
 *
 * Called From: 07D4:1468:0025:920B
 * Called From: B4ED:049F:0024:2731
 * Called From: B518:0F16:002D:7D51
 */
void f__2C17_000C_002F_E104()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x1E8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x14), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x003E; emu_last_cs = 0x2C17; emu_last_ip = 0x0019; emu_last_length = 0x002F; emu_last_crc = 0xE104; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x003B); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	f__2C17_003B_000A_FE35();
}

/**
 * Decompiled function f__2C17_003B_000A_FE35()
 *
 * @name f__2C17_003B_000A_FE35
 * @implements 2C17:003B:000A:FE35 ()
 *
 * Called From: 2C17:003B:002F:E104
 */
void f__2C17_003B_000A_FE35()
{
	emu_addws(&emu_sp, 0x8);
	emu_sarw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x1);
	emu_xorw(&emu_si, emu_si);
	f__2C17_0052_000C_5C44(); return;
}

/**
 * Decompiled function f__2C17_0045_0019_554E()
 *
 * @name f__2C17_0045_0019_554E
 * @implements 2C17:0045:0019:554E ()
 *
 * Called From: 2C17:0055:000C:5C44
 * Called From: 2C17:0055:0019:554E
 */
void f__2C17_0045_0019_554E()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x58);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_si);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_flags.cf) { f__2C17_0045_0019_554E(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__2C17_0072_000C_47BD(); return;
}

/**
 * Decompiled function f__2C17_0052_000C_5C44()
 *
 * @name f__2C17_0052_000C_5C44
 * @implements 2C17:0052:000C:5C44 ()
 *
 * Called From: 2C17:0043:000A:FE35
 */
void f__2C17_0052_000C_5C44()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_flags.cf) { f__2C17_0045_0019_554E(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_ip = 0x0072; emu_last_cs = 0x2C17; emu_last_ip = 0x005C; emu_last_length = 0x000C; emu_last_crc = 0x5C44; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2C17_005E_0020_8DF8()
 *
 * @name f__2C17_005E_0020_8DF8
 * @implements 2C17:005E:0020:8DF8 ()
 *
 * Called From: 2C17:0078:000C:47BD
 * Called From: 2C17:0078:0020:8DF8
 */
void f__2C17_005E_0020_8DF8()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x1E8);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.cf) { f__2C17_005E_0020_8DF8(); return; }
	emu_xorw(&emu_si, emu_si);
	f__2C17_00CA_000C_1DC4(); return;
}

/**
 * Decompiled function f__2C17_0072_000C_47BD()
 *
 * @name f__2C17_0072_000C_47BD
 * @implements 2C17:0072:000C:47BD ()
 *
 * Called From: 2C17:005C:0019:554E
 */
void f__2C17_0072_000C_47BD()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.cf) { f__2C17_005E_0020_8DF8(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x00CA; emu_last_cs = 0x2C17; emu_last_ip = 0x007C; emu_last_length = 0x000C; emu_last_crc = 0x47BD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2C17_007E_000D_A402()
 *
 * @name f__2C17_007E_000D_A402
 * @implements 2C17:007E:000D:A402 ()
 *
 * Called From: 2C17:00CD:000C:1DC4
 * Called From: 2C17:00CD:004B:FA18
 */
void f__2C17_007E_000D_A402()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x008B); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	f__2C17_008B_004B_FA18();
}

/**
 * Decompiled function f__2C17_008B_004B_FA18()
 *
 * @name f__2C17_008B_004B_FA18
 * @implements 2C17:008B:004B:FA18 ()
 *
 * Called From: 2C17:008B:000D:A402
 */
void f__2C17_008B_004B_FA18()
{
	emu_addws(&emu_sp, 0x4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x58);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x58);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_dx.x, emu_bp - 0x58);
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x58);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_flags.cf) { f__2C17_007E_000D_A402(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__2C17_012A_000F_2EC4(); return;
}

/**
 * Decompiled function f__2C17_00CA_000C_1DC4()
 *
 * @name f__2C17_00CA_000C_1DC4
 * @implements 2C17:00CA:000C:1DC4 ()
 *
 * Called From: 2C17:007C:0020:8DF8
 */
void f__2C17_00CA_000C_1DC4()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_flags.cf) { f__2C17_007E_000D_A402(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_ip = 0x012A; emu_last_cs = 0x2C17; emu_last_ip = 0x00D4; emu_last_length = 0x000C; emu_last_crc = 0x1DC4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2C17_00D6_000D_5402()
 *
 * @name f__2C17_00D6_000D_5402
 * @implements 2C17:00D6:000D:5402 ()
 *
 * Called From: 2C17:0130:000F:2EC4
 * Called From: 2C17:0130:0056:70BE
 */
void f__2C17_00D6_000D_5402()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00E3); emu_cs = 0x2537; f__2537_000C_001C_1A9E();
	f__2C17_00E3_0056_70BE();
}

/**
 * Decompiled function f__2C17_00E3_0056_70BE()
 *
 * @name f__2C17_00E3_0056_70BE
 * @implements 2C17:00E3:0056:70BE ()
 *
 * Called From: 2C17:00E3:000D:5402
 */
void f__2C17_00E3_0056_70BE()
{
	emu_addws(&emu_sp, 0x4);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x1E8);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x1E8);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_dx.x, emu_bp - 0x1E8);
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x1E8);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.cf) { f__2C17_00D6_000D_5402(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__2C17_01AA_0013_DCF5(); return;
}

/**
 * Decompiled function f__2C17_012A_000F_2EC4()
 *
 * @name f__2C17_012A_000F_2EC4
 * @implements 2C17:012A:000F:2EC4 ()
 *
 * Called From: 2C17:00D4:004B:FA18
 */
void f__2C17_012A_000F_2EC4()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.cf) { f__2C17_00D6_000D_5402(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_ip = 0x01AA; emu_last_cs = 0x2C17; emu_last_ip = 0x0137; emu_last_length = 0x000F; emu_last_crc = 0x2EC4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__2C17_0139_0007_4228()
 *
 * @name f__2C17_0139_0007_4228
 * @implements 2C17:0139:0007:4228 ()
 *
 * Called From: 2C17:01B0:0013:DCF5
 * Called From: 2C17:01B0:001F:26E3
 */
void f__2C17_0139_0007_4228()
{
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_xorw(&emu_si, emu_si);
	f__2C17_01A2_001B_C695(); return;
}

/**
 * Decompiled function f__2C17_0140_005E_6C5E()
 *
 * @name f__2C17_0140_005E_6C5E
 * @implements 2C17:0140:005E:6C5E ()
 *
 * Called From: 2C17:01A5:001B:C695
 * Called From: 2C17:01A5:001F:26E3
 */
void f__2C17_0140_005E_6C5E()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x58);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x1E8);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.cf) { f__2C17_0167_0037_1B29(); return; }
	emu_xorw(&emu_di, emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x019E); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	f__2C17_019E_001F_26E3();
}

/**
 * Decompiled function f__2C17_0167_0037_1B29()
 *
 * @name f__2C17_0167_0037_1B29
 * @implements 2C17:0167:0037:1B29 ()
 *
 * Called From: 2C17:0163:005E:6C5E
 */
void f__2C17_0167_0037_1B29()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x019E); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	f__2C17_019E_001F_26E3();
}

/**
 * Decompiled function f__2C17_019E_001F_26E3()
 *
 * @name f__2C17_019E_001F_26E3
 * @implements 2C17:019E:001F:26E3 ()
 *
 * Called From: 2C17:019E:0037:1B29
 * Called From: 2C17:019E:005E:6C5E
 */
void f__2C17_019E_001F_26E3()
{
	emu_addws(&emu_sp, 0x10);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_flags.cf) { f__2C17_0140_005E_6C5E(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.cf) { f__2C17_0139_0007_4228(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x14), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01BD; emu_last_cs = 0x2C17; emu_last_ip = 0x01B6; emu_last_length = 0x001F; emu_last_crc = 0x26E3; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x01BD); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	f__2C17_01BD_0006_137A();
}

/**
 * Decompiled function f__2C17_01A2_001B_C695()
 *
 * @name f__2C17_01A2_001B_C695
 * @implements 2C17:01A2:001B:C695 ()
 *
 * Called From: 2C17:013E:0007:4228
 */
void f__2C17_01A2_001B_C695()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (emu_flags.cf) { f__2C17_0140_005E_6C5E(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.cf) { emu_ip = 0x0139; emu_last_cs = 0x2C17; emu_last_ip = 0x01B0; emu_last_length = 0x001B; emu_last_crc = 0xC695; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x14), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01BD; emu_last_cs = 0x2C17; emu_last_ip = 0x01B6; emu_last_length = 0x001B; emu_last_crc = 0xC695; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x01BD); emu_cs = 0x2B6C; emu_ip = 0x044F; emu_last_cs = 0x2C17; emu_last_ip = 0x01B8; emu_last_length = 0x001B; emu_last_crc = 0xC695; emu_call(); // Jump does not resolve
	f__2C17_01BD_0006_137A();
}

/**
 * Decompiled function f__2C17_01AA_0013_DCF5()
 *
 * @name f__2C17_01AA_0013_DCF5
 * @implements 2C17:01AA:0013:DCF5 ()
 *
 * Called From: 2C17:0137:0056:70BE
 */
void f__2C17_01AA_0013_DCF5()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.cf) { f__2C17_0139_0007_4228(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x14), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x01BD; emu_last_cs = 0x2C17; emu_last_ip = 0x01B6; emu_last_length = 0x0013; emu_last_crc = 0xDCF5; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x01BD); emu_cs = 0x2B6C; emu_ip = 0x044F; emu_last_cs = 0x2C17; emu_last_ip = 0x01B8; emu_last_length = 0x0013; emu_last_crc = 0xDCF5; emu_call(); // Jump does not resolve
	f__2C17_01BD_0006_137A();
}

/**
 * Decompiled function f__2C17_01BD_0006_137A()
 *
 * @name f__2C17_01BD_0006_137A
 * @implements 2C17:01BD:0006:137A ()
 *
 * Called From: 2C17:01BD:001F:26E3
 */
void f__2C17_01BD_0006_137A()
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
