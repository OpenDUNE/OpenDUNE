/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "sound.h"

/**
 * Emulator wrapper around Sound_Play()
 *
 * @name emu_Sound_Play
 * @implements B483:0283:0014:983A ()
 * @implements B483:0294:0003:5D12
 * @implements B483:0297:0020:5211
 * @implements B483:02B7:001D:5E6C
 * @implements B483:02D4:000B:5099
 * @implements B483:02DF:0019:9BD8
 * @implements B483:02F8:001A:FE1A
 * @implements B483:0312:001C:FF11
 * @implements B483:032E:001C:6F5D
 * @implements B483:034A:0015:564E
 * @implements B483:034D:0012:13DA
 * @implements B483:035F:0004:BE52
 * @implements B483:0360:0003:2E57
 */
void emu_Sound_Play()
{
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index = emu_get_memory16(emu_ss, emu_sp, 0);

	Sound_Play(index);
}
