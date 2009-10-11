/* $Id$ */

#include <stdlib.h>
#include "types.h"
#include "libemu.h"
#include "../decompiled/decompiled.h"

/**
 * Decompiled function f__01F7_0229_0004_BEF7()
 *  Patched for different return-values in rare cases.
 *
 * @name p__01F7_0229_0004_BEF7
 * @implements 01F7:0229:0004:BEF7 ()
 *
 * @define 01F7:0F45:004B:44A0
 * @define 01F7:20B5:0076:64ED
 * @define 01F7:21FA:0012:B06A
 * @define 01F7:0138:0019:8DC5
 * @define 01F7:022D:0003:9E5A
 */
void p__01F7_0229_0004_BEF7()
{
	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx,  0x2);
	emu_push(0x022D);
	switch (emu_ip) {
		case 0x0F45: f__01F7_0F45_004B_44A0(); break;
		case 0x20B5: f__01F7_20B5_0076_64ED(); break;
		case 0x21FA: f__01F7_21FA_0012_B06A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0229; emu_last_length = 0x0004; emu_last_crc = 0xBEF7;
			emu_call();
			return;
	}

	/* XXX -- One of the above functions doesn't always return the next
	 *  function but some other function. For now we capture this in this
	 *  way. */
	switch (emu_ip) {
		case 0x0138: f__01F7_0138_0019_8DC5(); return;
		case 0x022D: f__01F7_022D_0003_9E5A(); return;
		default: exit(1);
	}
}
