/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Empty2()
 *
 * @name emu_Empty2
 * @implements 2BD1:0005:0001:6580 ()
 *
 * Called From: B500:0038:0005:0164
 */
void emu_Empty2()
{
l__0005:

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BD1_0006_004A_CD10()
 *
 * @name f__2BD1_0006_004A_CD10
 * @implements 2BD1:0006:004A:CD10 ()
 * @implements 2BD1:001E:0032:52D3
 * @implements 2BD1:002C:0024:C4F2
 * @implements 2BD1:004D:0003:AE87
 *
 * Called From: 2756:059D:0019:7966
 */
void f__2BD1_0006_004A_CD10()
{
l__0006:
	emu_push(emu_ds);
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_ds = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B8);
	emu_shrw(&emu_ax, 0x1);
	if (emu_flags.cf) {
		emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x76AC), 0x1);
		emu_adcw(&emu_get_memory16(emu_ds, 0x00, 0x76AE), 0x0);
	}
l__001E:
	emu_shrw(&emu_ax, 0x1);
	if (emu_flags.cf) {
		emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x76B0), 0x1);
		emu_adcw(&emu_get_memory16(emu_ds, 0x00, 0x76B2), 0x0);
	}
l__002C:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x76A6));
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x76A8), 0x1);
	emu_adcw(&emu_get_memory16(emu_ds, 0x00, 0x76AA), 0x0);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) {
		emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x76B4), 0x1);
		emu_sbbw(&emu_get_memory16(emu_ds, 0x00, 0x76B6), 0x0);
	}
l__004D:
	emu_pop(&emu_ax);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
