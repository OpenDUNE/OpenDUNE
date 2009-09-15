/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BB4_0004_0027_4CDD()
 *
 * @name f__2BB4_0004_0027_4CDD
 * @implements 2BB4:0004:0027:4CDD ()
 *
 * Called From: 06F7:0833:0005:1186
 * Called From: 0C3A:2509:000F:31E9
 * Called From: 0C3A:2509:0015:2FA5
 * Called From: 0EDB:00FD:000C:5405
 * Called From: 0F3F:01D6:000A:5207
 * Called From: 0F3F:01EE:0010:C0DA
 * Called From: 0F3F:01EE:000D:4001
 * Called From: 151A:044E:0018:8630
 * Called From: 16C5:0027:0023:95F8
 * Called From: 176C:18E8:000E:8170
 * Called From: 176C:18E8:0005:1186
 * Called From: 176C:272E:0012:A33F
 * Called From: 176C:272E:0005:1186
 * Called From: 176C:2779:0005:1186
 * Called From: 176C:294B:000A:DE45
 * Called From: 176C:2973:000A:D6C5
 * Called From: 176C:2988:0009:F686
 * Called From: 176C:2988:000C:7E8D
 * Called From: 1A34:00C6:0031:64B5
 * Called From: 1A34:013C:0023:8D8D
 * Called From: 1A34:0DBB:0008:F106
 * Called From: 1A34:2338:0011:E32F
 * Called From: B4B8:002A:0005:1186
 * Called From: B4B8:0054:000C:BF05
 * Called From: B4B8:0054:002A:1E95
 * Called From: B4B8:0060:0005:1186
 * Called From: B4B8:00A4:000B:3102
 * Called From: B4B8:00A4:0008:8506
 * Called From: B4B8:00D0:002C:4CE5
 * Called From: B4B8:00DC:0005:1186
 * Called From: B4B8:0120:000B:3102
 * Called From: B4B8:0442:0005:1186
 * Called From: B4B8:0468:0009:B807
 * Called From: B4B8:04E8:0019:93C4
 * Called From: B4B8:04F5:0005:1186
 * Called From: B4B8:04FE:0009:7086
 * Called From: B4B8:052F:0028:82EA
 * Called From: B4B8:0545:0009:7487
 * Called From: B4CD:15B7:0014:E71A
 */
void f__2BB4_0004_0027_4CDD()
{
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_ds, emu_ax.x);
	emu_movw(&emu_si, 0x76A2);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si,  0x0));
	emu_shrb(&emu_ax.l, 0x1);
	emu_shrb(&emu_ax.l, 0x1);
	emu_rclb(&emu_get_memory8(emu_ds, emu_si,  0x2), 0x1);
	emu_rclb(&emu_get_memory8(emu_ds, emu_si,  0x1), 0x1);
	emu_cmc();
	emu_sbbb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si,  0x0));
	emu_shrb(&emu_ax.l, 0x1);
	emu_rcrb(&emu_get_memory8(emu_ds, emu_si,  0x0), 0x1);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si,  0x0));
	emu_xorb(&emu_ax.l, emu_get_memory8(emu_ds, emu_si,  0x1));
	emu_xorb(&emu_ax.h, emu_ax.h);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
