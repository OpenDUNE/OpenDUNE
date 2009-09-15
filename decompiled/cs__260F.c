/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__260F_003A_0014_CDCF()
 *
 * @name f__260F_003A_0014_CDCF
 * @implements 260F:003A:0014:CDCF ()
 *
 * Called From: 0AEC:0953:0022:C773
 * Called From: B495:097D:0028:4047
 * Called From: B4B8:106C:004D:0E9E
 * Called From: B4DA:010E:0036:0576
 * Called From: B4DA:0199:0036:7356
 * Called From: B4DA:03B2:0017:00C9
 * Called From: B4DA:050A:0017:00CD
 * Called From: B4DA:0676:0017:00CD
 * Called From: B4DA:0A35:0017:00C1
 * Called From: B503:09D8:0014:A387
 * Called From: B503:0EE9:000E:458F
 * Called From: B520:0179:0054:3AD8
 */
void f__260F_003A_0014_CDCF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x004E; emu_last_cs = 0x260F; emu_last_ip = 0x0043; emu_last_length = 0x0014; emu_last_crc = 0xCDCF; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3));
	f__260F_0052_0002_00E2(); return;
}

/**
 * Decompiled function f__260F_0052_0002_00E2()
 *
 * @name f__260F_0052_0002_00E2
 * @implements 260F:0052:0002:00E2 ()
 *
 * Called From: 260F:004C:0014:CDCF
 */
void f__260F_0052_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__260F_0054_0016_11EB()
 *
 * @name f__260F_0054_0016_11EB
 * @implements 260F:0054:0016:11EB ()
 *
 * Called From: B4B8:1080:0014:BBC4
 * Called From: B4DA:0127:0019:3E58
 * Called From: B4DA:01B2:0019:90DA
 * Called From: B4DA:039B:0025:76EC
 * Called From: B4DA:039B:0027:02AC
 * Called From: B4DA:04F3:002C:D6BB
 * Called From: B4DA:065F:0027:C6BE
 * Called From: B4DA:0A1E:0027:7930
 * Called From: B503:09E8:0010:4A27
 * Called From: B503:0EDB:0016:8E92
 * Called From: B520:0191:0018:010D
 */
void f__260F_0054_0016_11EB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x006A; emu_last_cs = 0x260F; emu_last_ip = 0x005D; emu_last_length = 0x0016; emu_last_crc = 0x11EB; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movb(&emu_ax.h, 0x0);
	f__260F_006E_0002_00E2(); return;
}

/**
 * Decompiled function f__260F_006E_0002_00E2()
 *
 * @name f__260F_006E_0002_00E2
 * @implements 260F:006E:0002:00E2 ()
 *
 * Called From: 260F:0068:0016:11EB
 */
void f__260F_006E_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
