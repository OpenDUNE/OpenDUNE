/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/unit.h"
#include "airunit.h"

/**
 * Emulator wrapper around GameLoop_AirUnit().
 *
 * @name emu_GameLoop_AirUnit
 * @implements 16C5:0009:0023:21B3 ()
 * @implements 16C5:0024:0008:EF7F
 * @implements 16C5:002C:0025:E446
 * @implements 16C5:004A:0007:F6A9
 * @implements 16C5:0051:000F:288A
 * @implements 16C5:0060:0006:7728
 * @implements 16C5:0066:000D:3A8A
 * @implements 16C5:0073:002F:03B8
 * @implements 16C5:00A2:004D:9382
 * @implements 16C5:00DF:0010:2718
 * @implements 16C5:00EF:0008:F6CF
 * @implements 16C5:00F7:0002:C43A
 * @implements 16C5:00F9:0013:BAAB
 * @implements 16C5:0101:000B:0673
 * @implements 16C5:010C:0015:DF16
 * @implements 16C5:010E:0013:4DDB
 * @implements 16C5:0121:0003:2E57
 */
void emu_GameLoop_AirUnit()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GameLoop_AirUnit();
}
