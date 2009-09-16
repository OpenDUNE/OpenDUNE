/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4CA_020F_0017_B156()
 *
 * @name f__B4CA_020F_0017_B156
 * @implements B4CA:020F:0017:B156 ()
 *
 * Called From: 34CA:0020:0005:1C14
 * Called From: 34CA:0020:0005:1C62
 * Called From: 34CA:0020:0005:1C66
 * Called From: 34CA:0020:0005:1C76
 * Called From: 34CA:0020:0005:1C8A
 * Called From: 34CA:0020:0005:1C90
 * Called From: 34CA:0020:0005:1C9A
 * Called From: 34CA:0020:0005:1CAC
 * Called From: 34CA:0020:0005:1CDE
 * Called From: 34CA:0020:0005:1D28
 * Called From: 34CA:0020:0005:1D2C
 * Called From: 34CA:0020:0005:1D58
 * Called From: 34CA:0020:0005:1D9E
 * Called From: 34CA:0020:0005:1DA6
 * Called From: 34CA:0020:0005:1DAC
 * Called From: 34CA:0020:0005:1DC6
 * Called From: 34CA:0020:0005:1E1A
 * Called From: 34CA:0020:0005:1E22
 * Called From: 34CA:0020:0005:1E26
 * Called From: 34CA:0020:0005:1E28
 * Called From: 34CA:0020:0005:1E2E
 * Called From: 34CA:0020:0005:1E3A
 * Called From: 34CA:0020:0005:1E42
 * Called From: 34CA:0020:0005:1E4A
 * Called From: 34CA:0020:0005:1E5E
 * Called From: 34CA:0020:0005:1EB4
 * Called From: 34CA:0020:0005:1F18
 * Called From: 34CA:0020:0005:1F24
 * Called From: 34CA:0020:0005:1F46
 * Called From: 34CA:0020:0005:1F4A
 * Called From: 34CA:0020:0005:1F58
 * Called From: 34CA:0020:0005:1F6E
 * Called From: 34CA:0020:0005:1F92
 * Called From: 34CA:0020:0005:1F98
 * Called From: 34CA:0020:0005:1E80
 * Called From: 34CA:0020:0005:1C26
 * Called From: 34CA:0020:0005:1ECA
 * Called From: 34CA:0020:0005:1FE4
 * Called From: 34CA:0020:0005:1DEA
 * Called From: 34CA:0020:0005:1FF2
 * Called From: 34CA:0020:0005:1C50
 * Called From: 34CA:0020:0005:1E9A
 * Called From: 34CA:0020:0005:1E6A
 */
void f__B4CA_020F_0017_B156()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x38);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0226); emu_cs = 0x1FB5; f__1FB5_01FA_0010_D47C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CA) { ovl__34CA(0xFF); }
	f__B4CA_0226_0011_B554();
}

/**
 * Decompiled function f__B4CA_0226_0011_B554()
 *
 * @name f__B4CA_0226_0011_B554
 * @implements B4CA:0226:0011:B554 ()
 *
 * Called From: B4CA:0226:0017:B156
 */
void f__B4CA_0226_0011_B554()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	if (!emu_flags.zf) { f__B4CA_0237_0014_0B5D(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x068C; emu_last_cs = 0xB4CA; emu_last_ip = 0x0234; emu_last_length = 0x0011; emu_last_crc = 0xB554; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CA_0234_0003_0614()
 *
 * @name f__B4CA_0234_0003_0614
 * @implements B4CA:0234:0003:0614 ()
 *
 * Called From: B4CA:0294:000B:95DF
 */
void f__B4CA_0234_0003_0614()
{
	f__B4CA_068C_0006_137A(); return;
}

/**
 * Decompiled function f__B4CA_0237_0014_0B5D()
 *
 * @name f__B4CA_0237_0014_0B5D
 * @implements B4CA:0237:0014:0B5D ()
 *
 * Called From: B4CA:0230:0011:B554
 */
void f__B4CA_0237_0014_0B5D()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x024B); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CA) { ovl__34CA(0xFF); }
	f__B4CA_024B_000B_FA15();
}

/**
 * Decompiled function f__B4CA_024B_000B_FA15()
 *
 * @name f__B4CA_024B_000B_FA15
 * @implements B4CA:024B:000B:FA15 ()
 *
 * Called From: B4CA:024B:0014:0B5D
 */
void f__B4CA_024B_000B_FA15()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0256); emu_cs = 0x1FB5; f__1FB5_09C7_0018_F3A8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CA) { ovl__34CA(0xFF); }
	f__B4CA_0256_001E_89E4();
}

/**
 * Decompiled function f__B4CA_0256_001E_89E4()
 *
 * @name f__B4CA_0256_001E_89E4
 * @implements B4CA:0256:001E:89E4 ()
 *
 * Called From: B4CA:0256:000B:FA15
 */
void f__B4CA_0256_001E_89E4()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x4D52);
	if (!emu_flags.zf) { f__B4CA_0265_000F_6E93(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x4F46);
	if (emu_flags.zf) { emu_ip = 0x0299; emu_last_cs = 0xB4CA; emu_last_ip = 0x0263; emu_last_length = 0x001E; emu_last_crc = 0x89E4; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C76), 0x3);
	if (!emu_flags.zf) { emu_ip = 0x0274; emu_last_cs = 0xB4CA; emu_last_ip = 0x026A; emu_last_length = 0x001E; emu_last_crc = 0x89E4; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_ip = 0x0278; emu_last_cs = 0xB4CA; emu_last_ip = 0x0272; emu_last_length = 0x001E; emu_last_crc = 0x89E4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CA_0265_000F_6E93()
 *
 * @name f__B4CA_0265_000F_6E93
 * @implements B4CA:0265:000F:6E93 ()
 *
 * Called From: B4CA:025C:001E:89E4
 */
void f__B4CA_0265_000F_6E93()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C76), 0x3);
	if (!emu_flags.zf) { emu_ip = 0x0274; emu_last_cs = 0xB4CA; emu_last_ip = 0x026A; emu_last_length = 0x000F; emu_last_crc = 0x6E93; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	f__B4CA_0278_0013_4BB7(); return;
}

/**
 * Decompiled function f__B4CA_0278_0013_4BB7()
 *
 * @name f__B4CA_0278_0013_4BB7
 * @implements B4CA:0278:0013:4BB7 ()
 *
 * Called From: B4CA:0272:000F:6E93
 */
void f__B4CA_0278_0013_4BB7()
{
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x028B); emu_cs = 0x253D; f__253D_00FA_0010_5316();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CA) { ovl__34CA(0xFF); }
	f__B4CA_028B_000B_95DF();
}

/**
 * Decompiled function f__B4CA_028B_000B_95DF()
 *
 * @name f__B4CA_028B_000B_95DF
 * @implements B4CA:028B:000B:95DF ()
 *
 * Called From: B4CA:028B:0013:4BB7
 */
void f__B4CA_028B_000B_95DF()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_bx.x, 0x1F40);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	f__B4CA_0234_0003_0614(); return;
}

/**
 * Decompiled function f__B4CA_068C_0006_137A()
 *
 * @name f__B4CA_068C_0006_137A
 * @implements B4CA:068C:0006:137A ()
 *
 * Called From: B4CA:0234:0003:0614
 */
void f__B4CA_068C_0006_137A()
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
