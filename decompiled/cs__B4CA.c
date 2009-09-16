/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4CA_020F_0017_A939()
 *
 * @name f__B4CA_020F_0017_A939
 * @implements B4CA:020F:0017:A939 ()
 *
 * Called From: 34CA:0020:0005:0000
 */
void f__B4CA_020F_0017_A939()
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
	emu_push(emu_cs); emu_push(0x0226); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CA) { ovl__34CA(0xFF); }
	f__B4CA_0226_0011_BA26();
}

/**
 * Decompiled function f__B4CA_0226_0011_BA26()
 *
 * @name f__B4CA_0226_0011_BA26
 * @implements B4CA:0226:0011:BA26 ()
 *
 * Called From: B4CA:0226:0017:A939
 */
void f__B4CA_0226_0011_BA26()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	if (!emu_flags.zf) { f__B4CA_0237_0014_C0C9(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x068C; emu_last_cs = 0xB4CA; emu_last_ip = 0x0234; emu_last_length = 0x0011; emu_last_crc = 0xBA26; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CA_0234_0003_5F35()
 *
 * @name f__B4CA_0234_0003_5F35
 * @implements B4CA:0234:0003:5F35 ()
 *
 * Called From: B4CA:0294:000B:720B
 */
void f__B4CA_0234_0003_5F35()
{
	f__B4CA_068C_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4CA_0237_0014_C0C9()
 *
 * @name f__B4CA_0237_0014_C0C9
 * @implements B4CA:0237:0014:C0C9 ()
 *
 * Called From: B4CA:0230:0011:BA26
 */
void f__B4CA_0237_0014_C0C9()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x024B); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CA) { ovl__34CA(0xFF); }
	f__B4CA_024B_000B_6CAB();
}

/**
 * Decompiled function f__B4CA_024B_000B_6CAB()
 *
 * @name f__B4CA_024B_000B_6CAB
 * @implements B4CA:024B:000B:6CAB ()
 *
 * Called From: B4CA:024B:0014:C0C9
 */
void f__B4CA_024B_000B_6CAB()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0256); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CA) { ovl__34CA(0xFF); }
	f__B4CA_0256_001E_9B59();
}

/**
 * Decompiled function f__B4CA_0256_001E_9B59()
 *
 * @name f__B4CA_0256_001E_9B59
 * @implements B4CA:0256:001E:9B59 ()
 *
 * Called From: B4CA:0256:000B:6CAB
 */
void f__B4CA_0256_001E_9B59()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x4D52);
	if (!emu_flags.zf) { f__B4CA_0265_000F_A174(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x4F46);
	if (emu_flags.zf) { emu_ip = 0x0299; emu_last_cs = 0xB4CA; emu_last_ip = 0x0263; emu_last_length = 0x001E; emu_last_crc = 0x9B59; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C76), 0x3);
	if (!emu_flags.zf) { emu_ip = 0x0274; emu_last_cs = 0xB4CA; emu_last_ip = 0x026A; emu_last_length = 0x001E; emu_last_crc = 0x9B59; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_ip = 0x0278; emu_last_cs = 0xB4CA; emu_last_ip = 0x0272; emu_last_length = 0x001E; emu_last_crc = 0x9B59; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4CA_0265_000F_A174()
 *
 * @name f__B4CA_0265_000F_A174
 * @implements B4CA:0265:000F:A174 ()
 *
 * Called From: B4CA:025C:001E:9B59
 */
void f__B4CA_0265_000F_A174()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C76), 0x3);
	if (!emu_flags.zf) { emu_ip = 0x0274; emu_last_cs = 0xB4CA; emu_last_ip = 0x026A; emu_last_length = 0x000F; emu_last_crc = 0xA174; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	f__B4CA_0278_0013_32DA(); return;
}

/**
 * Decompiled function f__B4CA_0278_0013_32DA()
 *
 * @name f__B4CA_0278_0013_32DA
 * @implements B4CA:0278:0013:32DA ()
 *
 * Called From: B4CA:0272:000F:A174
 */
void f__B4CA_0278_0013_32DA()
{
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x028B); emu_cs = 0x253D; f__253D_00FA_0010_873D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CA) { ovl__34CA(0xFF); }
	f__B4CA_028B_000B_720B();
}

/**
 * Decompiled function f__B4CA_028B_000B_720B()
 *
 * @name f__B4CA_028B_000B_720B
 * @implements B4CA:028B:000B:720B ()
 *
 * Called From: B4CA:028B:0013:32DA
 */
void f__B4CA_028B_000B_720B()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_bx.x, 0x1F40);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	f__B4CA_0234_0003_5F35(); return;
}

/**
 * Decompiled function f__B4CA_068C_0006_F7CE()
 *
 * @name f__B4CA_068C_0006_F7CE
 * @implements B4CA:068C:0006:F7CE ()
 *
 * Called From: B4CA:0234:0003:5F35
 */
void f__B4CA_068C_0006_F7CE()
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
