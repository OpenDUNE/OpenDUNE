/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__07C9_000F_0050_0FEA()
 *
 * @name f__07C9_000F_0050_0FEA
 * @implements 07C9:000F:0050:0FEA ()
 *
 * Called From: 0972:0053:0019:69E4
 * Called From: 176C:018A:0055:A03E
 * Called From: 176C:018A:0029:2797
 * Called From: 176C:018A:0014:1591
 * Called From: 176C:1034:001F:4758
 * Called From: 176C:1250:0019:2F65
 * Called From: 176C:1250:0016:A064
 * Called From: 176C:1890:0020:3C1F
 * Called From: 176C:18CD:003D:F463
 * Called From: 1A34:20E6:0019:CAB4
 * Called From: 1A34:2176:0029:6871
 */
void f__07C9_000F_0050_0FEA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3900), 0x2);
	if (emu_flags.zf) { f__07C9_009C_0004_0D0C(); return; }
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_shlw(&emu_ax.x, 0x1);
	emu_cmpw(&emu_ax.x, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0035; emu_last_cs = 0x07C9; emu_last_ip = 0x002D; emu_last_length = 0x0050; emu_last_crc = 0x0FEA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_sarw(&emu_ax.x, 0x1);
	emu_cmpw(&emu_ax.x, emu_cx.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0043; emu_last_cs = 0x07C9; emu_last_ip = 0x003B; emu_last_length = 0x0050; emu_last_crc = 0x0FEA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_cx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_subw(&emu_ax.x, emu_cx.x);
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_dx.x);
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { emu_ip = 0x005F; emu_last_cs = 0x07C9; emu_last_ip = 0x0058; emu_last_length = 0x0050; emu_last_crc = 0x0FEA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3900));
	emu_ip = 0x0066; emu_last_cs = 0x07C9; emu_last_ip = 0x005D; emu_last_length = 0x0050; emu_last_crc = 0x0FEA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07C9_009C_0004_0D0C()
 *
 * @name f__07C9_009C_0004_0D0C
 * @implements 07C9:009C:0004:0D0C ()
 *
 * Called From: 07C9:0025:0050:0FEA
 */
void f__07C9_009C_0004_0D0C()
{
	emu_movw(&emu_ax.x, emu_dx.x);
	f__07C9_00A0_0006_137A(); return;
}

/**
 * Decompiled function f__07C9_00A0_0006_137A()
 *
 * @name f__07C9_00A0_0006_137A
 * @implements 07C9:00A0:0006:137A ()
 *
 * Called From: 07C9:009E:0004:0D0C
 */
void f__07C9_00A0_0006_137A()
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
