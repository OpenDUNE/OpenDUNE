/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BD1_0004_0001_0196()
 *
 * @name f__2BD1_0004_0001_0196
 * @implements 2BD1:0004:0001:0196 ()
 *
 * Called From: 1DB6:01B0:0005:1012
 */
void f__2BD1_0004_0001_0196()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BD1_0005_0001_0196()
 *
 * @name f__2BD1_0005_0001_0196
 * @implements 2BD1:0005:0001:0196 ()
 *
 * Called From: B500:0038:0005:1002
 */
void f__2BD1_0005_0001_0196()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BD1_0006_004A_5176()
 *
 * @name f__2BD1_0006_004A_5176
 * @implements 2BD1:0006:004A:5176 ()
 *
 * Called From: 2756:059D:0019:B819
 */
void f__2BD1_0006_004A_5176()
{
	emu_push(emu_ds);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B8));
	emu_shrw(&emu_ax.x, 0x1);
	if (!emu_flags.cf) { f__2BD1_001E_0032_B3E0(); return; }
	emu_addws(&emu_get_memory16(emu_ds, 0x00,  0x76AC), 0x1);
	emu_adcws(&emu_get_memory16(emu_ds, 0x00,  0x76AE), 0x0);
	emu_shrw(&emu_ax.x, 0x1);
	if (!emu_flags.cf) { f__2BD1_002C_0024_51AB(); return; }
	emu_addws(&emu_get_memory16(emu_ds, 0x00,  0x76B0), 0x1);
	emu_adcws(&emu_get_memory16(emu_ds, 0x00,  0x76B2), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x76A6));
	emu_addws(&emu_get_memory16(emu_ds, 0x00,  0x76A8), 0x1);
	emu_adcws(&emu_get_memory16(emu_ds, 0x00,  0x76AA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (emu_flags.zf) { f__2BD1_004D_0003_032A(); return; }
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
 * Decompiled function f__2BD1_001E_0032_B3E0()
 *
 * @name f__2BD1_001E_0032_B3E0
 * @implements 2BD1:001E:0032:B3E0 ()
 *
 * Called From: 2BD1:0012:004A:5176
 */
void f__2BD1_001E_0032_B3E0()
{
	emu_shrw(&emu_ax.x, 0x1);
	if (!emu_flags.cf) { f__2BD1_002C_0024_51AB(); return; }
	emu_addws(&emu_get_memory16(emu_ds, 0x00,  0x76B0), 0x1);
	emu_adcws(&emu_get_memory16(emu_ds, 0x00,  0x76B2), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x76A6));
	emu_addws(&emu_get_memory16(emu_ds, 0x00,  0x76A8), 0x1);
	emu_adcws(&emu_get_memory16(emu_ds, 0x00,  0x76AA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (emu_flags.zf) { emu_ip = 0x004D; emu_last_cs = 0x2BD1; emu_last_ip = 0x0041; emu_last_length = 0x0032; emu_last_crc = 0xB3E0; emu_call(); return; } // Jump does not resolve
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
 * Decompiled function f__2BD1_002C_0024_51AB()
 *
 * @name f__2BD1_002C_0024_51AB
 * @implements 2BD1:002C:0024:51AB ()
 *
 * Called From: 2BD1:0020:0032:B3E0
 * Called From: 2BD1:0020:004A:5176
 */
void f__2BD1_002C_0024_51AB()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x76A6));
	emu_addws(&emu_get_memory16(emu_ds, 0x00,  0x76A8), 0x1);
	emu_adcws(&emu_get_memory16(emu_ds, 0x00,  0x76AA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B6));
	if (emu_flags.zf) { f__2BD1_004D_0003_032A(); return; }
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
 * Decompiled function f__2BD1_004D_0003_032A()
 *
 * @name f__2BD1_004D_0003_032A
 * @implements 2BD1:004D:0003:032A ()
 *
 * Called From: 2BD1:0041:0024:51AB
 * Called From: 2BD1:0041:004A:5176
 */
void f__2BD1_004D_0003_032A()
{
	emu_pop(&emu_ax.x);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
