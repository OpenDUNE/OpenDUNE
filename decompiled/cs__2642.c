/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2642_0002_005E_D1F0()
 *
 * @name f__2642_0002_005E_D1F0
 * @implements 2642:0002:005E:D1F0 ()
 *
 * Called From: 07D4:010D:000F:FC3F
 * Called From: 07D4:12E6:000D:6D27
 * Called From: 07D4:1443:0010:F378
 * Called From: 07D4:1517:0051:7C78
 * Called From: 10E4:095E:0012:D56E
 * Called From: 10E4:0B39:000A:1524
 * Called From: 10E4:0B39:0009:7125
 * Called From: 10E4:1B44:000F:C867
 * Called From: B4DA:0FCD:000A:8BE4
 * Called From: B4DA:1039:000A:8BE4
 * Called From: B4DA:1332:000A:8BE4
 */
void f__2642_0002_005E_D1F0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4062));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4064));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4066));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4068));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_decw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0060); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	f__2642_0060_0009_D57B();
}

/**
 * Decompiled function f__2642_0060_0009_D57B()
 *
 * @name f__2642_0060_0009_D57B
 * @implements 2642:0060:0009:D57B ()
 *
 * Called From: 2642:0060:005E:D1F0
 */
void f__2642_0060_0009_D57B()
{
	emu_addws(&emu_sp, 0x8);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2642_0069_0008_3016()
 *
 * @name f__2642_0069_0008_3016
 * @implements 2642:0069:0008:3016 ()
 *
 * Called From: 07D4:02ED:0007:2E54
 * Called From: 07D4:136D:0006:02D4
 * Called From: 07D4:1470:0008:F194
 * Called From: 07D4:1557:0009:CFD4
 * Called From: 10E4:098E:0008:F194
 * Called From: 10E4:0B80:0008:F194
 * Called From: 10E4:1B71:0008:F194
 * Called From: B4DA:0FFA:0008:F194
 * Called From: B4DA:1066:0008:F194
 * Called From: B4DA:135F:0008:F194
 */
void f__2642_0069_0008_3016()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_cs); emu_push(0x0071); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	f__2642_0071_0002_00E2();
}

/**
 * Decompiled function f__2642_0071_0002_00E2()
 *
 * @name f__2642_0071_0002_00E2
 * @implements 2642:0071:0002:00E2 ()
 *
 * Called From: 2642:0071:0008:3016
 */
void f__2642_0071_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
