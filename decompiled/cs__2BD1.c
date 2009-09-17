/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BD1_0004_0001_6580()
 *
 * @name f__2BD1_0004_0001_6580
 * @implements 2BD1:0004:0001:6580 ()
 *
 * Called From: 1DB6:01B0:0005:1164
 */
void f__2BD1_0004_0001_6580()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BD1_0005_0001_6580()
 *
 * @name f__2BD1_0005_0001_6580
 * @implements 2BD1:0005:0001:6580 ()
 *
 * Called From: B500:0038:0005:0164
 */
void f__2BD1_0005_0001_6580()
{

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
 *
 * Called From: 2756:059D:0019:7966
 */
void f__2BD1_0006_004A_CD10()
{
	emu_push(emu_ds);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B8));
	emu_shrw(&emu_ax.x, 0x1);
	if (!emu_flags.cf) { f__2BD1_001E_0032_52D3(); return; }
	emu_addws(&emu_get_memory16(emu_ds, 0x00,  0x76AC), 0x1);
	emu_adcws(&emu_get_memory16(emu_ds, 0x00,  0x76AE), 0x0);
	emu_shrw(&emu_ax.x, 0x1);
	if (!emu_flags.cf) { f__2BD1_002C_0024_C4F2(); return; }
	emu_addws(&emu_get_memory16(emu_ds, 0x00,  0x76B0), 0x1);
	emu_adcws(&emu_get_memory16(emu_ds, 0x00,  0x76B2), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x76A6));
	emu_addws(&emu_get_memory16(emu_ds, 0x00,  0x76A8), 0x1);
	emu_adcws(&emu_get_memory16(emu_ds, 0x00,  0x76AA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (emu_flags.zf) { f__2BD1_004D_0003_AE87(); return; }
	emu_subws(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x1);
	emu_sbbws(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BD1_001E_0032_52D3()
 *
 * @name f__2BD1_001E_0032_52D3
 * @implements 2BD1:001E:0032:52D3 ()
 *
 * Called From: 2BD1:0012:004A:CD10
 */
void f__2BD1_001E_0032_52D3()
{
	emu_shrw(&emu_ax.x, 0x1);
	if (!emu_flags.cf) { f__2BD1_002C_0024_C4F2(); return; }
	emu_addws(&emu_get_memory16(emu_ds, 0x00,  0x76B0), 0x1);
	emu_adcws(&emu_get_memory16(emu_ds, 0x00,  0x76B2), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x76A6));
	emu_addws(&emu_get_memory16(emu_ds, 0x00,  0x76A8), 0x1);
	emu_adcws(&emu_get_memory16(emu_ds, 0x00,  0x76AA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x004D; emu_last_cs = 0x2BD1; emu_last_ip = 0x0041; emu_last_length = 0x0032; emu_last_crc = 0x52D3; emu_call(); return; }
	emu_subws(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x1);
	emu_sbbws(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BD1_002C_0024_C4F2()
 *
 * @name f__2BD1_002C_0024_C4F2
 * @implements 2BD1:002C:0024:C4F2 ()
 *
 * Called From: 2BD1:0020:0032:52D3
 * Called From: 2BD1:0020:004A:CD10
 */
void f__2BD1_002C_0024_C4F2()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x76A6));
	emu_addws(&emu_get_memory16(emu_ds, 0x00,  0x76A8), 0x1);
	emu_adcws(&emu_get_memory16(emu_ds, 0x00,  0x76AA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (emu_flags.zf) { f__2BD1_004D_0003_AE87(); return; }
	emu_subws(&emu_get_memory16(emu_ds, 0x00,  0x76B4), 0x1);
	emu_sbbws(&emu_get_memory16(emu_ds, 0x00,  0x76B6), 0x0);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BD1_004D_0003_AE87()
 *
 * @name f__2BD1_004D_0003_AE87
 * @implements 2BD1:004D:0003:AE87 ()
 *
 * Called From: 2BD1:0041:0024:C4F2
 * Called From: 2BD1:0041:004A:CD10
 */
void f__2BD1_004D_0003_AE87()
{
	emu_pop(&emu_ax.x);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
