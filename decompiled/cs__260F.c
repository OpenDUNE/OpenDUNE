/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__260F_003A_0014_CA10()
 *
 * @name f__260F_003A_0014_CA10
 * @implements 260F:003A:0014:CA10 ()
 * @implements 260F:0052:0002:2597
 *
 * Called From: 0AEC:0953:0022:44A5
 * Called From: B495:097D:0028:09CD
 * Called From: B4B8:106C:004D:6612
 * Called From: B4DA:010E:0036:600D
 * Called From: B4DA:0199:0036:0A5D
 * Called From: B4DA:03B2:0017:1E77
 * Called From: B4DA:050A:0017:1E73
 * Called From: B4DA:0676:0017:1E73
 * Called From: B4DA:0A35:0017:1E7F
 * Called From: B503:09D8:0014:80A1
 * Called From: B503:0EE9:000E:69BD
 * Called From: B520:0179:0054:E901
 */
void f__260F_003A_0014_CA10()
{
l__003A:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x004E; emu_last_cs = 0x260F; emu_last_ip = 0x0043; emu_last_length = 0x0014; emu_last_crc = 0xCA10; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x3));
	goto l__0052;
l__0052:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__260F_0054_0016_0011()
 *
 * @name f__260F_0054_0016_0011
 * @implements 260F:0054:0016:0011 ()
 * @implements 260F:006E:0002:2597
 *
 * Called From: B4B8:1080:0014:8D34
 * Called From: B4DA:0127:0019:EE88
 * Called From: B4DA:01B2:0019:6692
 * Called From: B4DA:039B:0025:65D7
 * Called From: B4DA:039B:0027:78C2
 * Called From: B4DA:04F3:002C:7547
 * Called From: B4DA:065F:0027:F80D
 * Called From: B4DA:0A1E:0027:59EF
 * Called From: B503:09E8:0010:DAC0
 * Called From: B503:0EDB:0016:7A82
 * Called From: B520:0191:0018:47C3
 */
void f__260F_0054_0016_0011()
{
l__0054:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x006A; emu_last_cs = 0x260F; emu_last_ip = 0x005D; emu_last_length = 0x0016; emu_last_crc = 0x0011; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movb(&emu_ah, 0x0);
	goto l__006E;
l__006E:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
