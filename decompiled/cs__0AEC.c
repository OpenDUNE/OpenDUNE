/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_GUI_RepairUpgrade()
 *
 * @name emu_GUI_RepairUpgrade
 * @implements 0AEC:11F6:000F:2195 ()
 * @implements 0AEC:1205:001C:6F1D
 * @implements 0AEC:1221:001C:8D4B
 * @implements 0AEC:123D:0007:F96C
 * @implements 0AEC:1240:0004:E839
 * @implements 0AEC:1244:0004:893F
 *
 * Called From: B4A2:06AC:0030:38D3
 */
void emu_GUI_RepairUpgrade()
{
l__11F6:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x1205); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__1205:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1221); emu_cs = 0x0C3A; f__0C3A_2814_0015_76F0();
l__1221:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1240;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x123D); emu_cs = 0x0C3A; f__0C3A_2714_0015_B6F6();
l__123D:
	emu_addw(&emu_sp, 0xA);
l__1240:
	emu_xorw(&emu_ax, emu_ax);
	goto l__1244;
l__1244:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
