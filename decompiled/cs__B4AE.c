/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4AE_0000_0008_049C()
 *
 * @name f__B4AE_0000_0008_049C
 * @implements B4AE:0000:0008:049C ()
 *
 * Called From: 34AE:0020:0005:0000
 */
void f__B4AE_0000_0008_049C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cs); emu_push(0x0008); emu_cs = 0x29E8; Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { ovl__34AE(0xFF); }
	f__B4AE_0008_0010_F2A7();
}

/**
 * Decompiled function f__B4AE_0008_0010_F2A7()
 *
 * @name f__B4AE_0008_0010_F2A7
 * @implements B4AE:0008:0010:F2A7 ()
 *
 * Called From: B4AE:0008:0008:049C
 */
void f__B4AE_0008_0010_F2A7()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_cmpw(&emu_ax.x, 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0018; emu_last_cs = 0xB4AE; emu_last_ip = 0x000E; emu_last_length = 0x0010; emu_last_crc = 0xF2A7; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x8);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0081; emu_last_cs = 0xB4AE; emu_last_ip = 0x0013; emu_last_length = 0x0010; emu_last_crc = 0xF2A7; emu_call(); return; }
	f__B4AE_00EA_0002_C13A(); return;
}

/**
 * Decompiled function f__B4AE_00EA_0002_C13A()
 *
 * @name f__B4AE_00EA_0002_C13A
 * @implements B4AE:00EA:0002:C13A ()
 *
 * Called From: B4AE:0015:0010:F2A7
 */
void f__B4AE_00EA_0002_C13A()
{
	f__B4AE_00EE_0002_2597(); return;
}

/**
 * Decompiled function f__B4AE_00EE_0002_2597()
 *
 * @name f__B4AE_00EE_0002_2597
 * @implements B4AE:00EE:0002:2597 ()
 *
 * Called From: B4AE:00EA:0002:C13A
 */
void f__B4AE_00EE_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
