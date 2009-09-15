/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4AE_0000_0008_38FA()
 *
 * @name f__B4AE_0000_0008_38FA
 * @implements B4AE:0000:0008:38FA ()
 *
 * Called From: 34AE:0020:0005:1CB0
 * Called From: 34AE:0020:0005:1F36
 */
void f__B4AE_0000_0008_38FA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cs); emu_push(0x0008); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { ovl__34AE(0xFF); }
	f__B4AE_0008_0010_15B0();
}

/**
 * Decompiled function f__B4AE_0008_0010_15B0()
 *
 * @name f__B4AE_0008_0010_15B0
 * @implements B4AE:0008:0010:15B0 ()
 *
 * Called From: B4AE:0008:0008:38FA
 */
void f__B4AE_0008_0010_15B0()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_cmpw(&emu_ax.x, 0x4);
	if (emu_flags.zf) { emu_ip = 0x0018; emu_last_cs = 0xB4AE; emu_last_ip = 0x000E; emu_last_length = 0x0010; emu_last_crc = 0x15B0; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x8);
	if (emu_flags.zf) { emu_ip = 0x0081; emu_last_cs = 0xB4AE; emu_last_ip = 0x0013; emu_last_length = 0x0010; emu_last_crc = 0x15B0; emu_call(); return; } // Jump does not resolve
	f__B4AE_00EA_0002_03A8(); return;
}

/**
 * Decompiled function f__B4AE_00EA_0002_03A8()
 *
 * @name f__B4AE_00EA_0002_03A8
 * @implements B4AE:00EA:0002:03A8 ()
 *
 * Called From: B4AE:0015:0010:15B0
 */
void f__B4AE_00EA_0002_03A8()
{
	f__B4AE_00EE_0002_00E2(); return;
}

/**
 * Decompiled function f__B4AE_00EE_0002_00E2()
 *
 * @name f__B4AE_00EE_0002_00E2
 * @implements B4AE:00EE:0002:00E2 ()
 *
 * Called From: B4AE:00EA:0002:03A8
 */
void f__B4AE_00EE_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
