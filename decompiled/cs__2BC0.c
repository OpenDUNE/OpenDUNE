/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Tools_Swapd()
 *
 * @name emu_Tools_Swapd
 * @implements 2BC0:0004:000F:950B ()
 *
 * Called From: B4B1:0139:000B:B36D
 * Called From: B4B1:026E:000B:B36D
 * Called From: B4B1:0451:001C:226F
 * Called From: B4B1:049B:001D:92B3
 * Called From: B4E0:05FB:001F:D0A6
 * Called From: B4E0:05FB:0021:C9E6
 * Called From: B4E0:0640:000C:36ED
 * Called From: B4E0:0653:0013:A738
 * Called From: B511:08BC:001B:5CCA
 */
void emu_Tools_Swapd()
{
l__0004:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_xchgb(&emu_dl, &emu_ah);
	emu_xchgb(&emu_dh, &emu_al);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tools_Swapw()
 *
 * @name emu_Tools_Swapw
 * @implements 2BC0:0013:000A:39BD ()
 *
 * Called From: 0EDB:0030:002F:CECA
 * Called From: 0EDB:01AF:0030:A1C2
 * Called From: 15C2:0282:0015:F826
 * Called From: 15C2:0595:001E:C033
 * Called From: 15C2:05F9:0025:FC39
 */
void emu_Tools_Swapw()
{
l__0013:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_xchgb(&emu_al, &emu_ah);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
