/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "map.h"

/**
 * Emulator wrapper around Map_MoveDirection().
 *
 * @name emu_Map_MoveDirection
 * @implements 0F78:0435:000E:32E0 ()
 * @implements 0F78:0443:0017:6AE3
 * @implements 0F78:045A:0020:E45E
 * @implements 0F78:047A:0020:30BA
 * @implements 0F78:0486:0014:085E
 * @implements 0F78:049A:0031:D0D9
 * @implements 0F78:04A6:0025:A2F9
 * @implements 0F78:04CB:0040:9F1F
 * @implements 0F78:04E6:0025:1314
 * @implements 0F78:050B:0024:7C89
 * @implements 0F78:0526:0009:23D1
 * @implements 0F78:052F:000A:F28D
 * @implements 0F78:0539:0004:DE52
 */
void emu_Map_MoveDirection()
{
	uint16 direction;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	direction = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = Map_MoveDirection(direction);
}

/**
 * Emulator wrapper around Map_SetSelection().
 *
 * @name emu_Map_SetSelection
 * @implements 0F78:02D5:0014:4ABC ()
 * @implements 0F78:02E9:0011:CCF5
 * @implements 0F78:02FA:0008:CF79
 * @implements 0F78:0302:0025:B4FB
 * @implements 0F78:0327:0006:66E9
 * @implements 0F78:032D:0012:B1AE
 * @implements 0F78:033F:004C:F314
 * @implements 0F78:038B:0012:7BE7
 * @implements 0F78:038D:0010:1771
 * @implements 0F78:039D:0021:A39A
 * @implements 0F78:03BE:000C:C461
 * @implements 0F78:03CA:0004:5F1F
 * @implements 0F78:03CE:0007:80C9
 * @implements 0F78:03D5:000E:0663
 * @implements 0F78:03D6:000D:0707
 * @implements 0F78:03E3:0025:77BC
 * @implements 0F78:0408:0004:501F
 * @implements 0F78:040A:0002:CB3A
 * @implements 0F78:040C:0014:EE7E
 * @implements 0F78:0420:0004:5F1F
 * @implements 0F78:0422:0002:C43A
 * @implements 0F78:0424:0007:00F3
 * @implements 0F78:042B:000A:C3CF
 * @implements 0F78:042C:0009:D58F
 * @implements 0F78:0430:0005:8BCF
 */
void emu_Map_SetSelection()
{
	uint16 packed;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	packed = emu_get_memory16(emu_ss, emu_sp, 0x0);

	Map_SetSelection(packed);
}

/**
 * Emulator wrapper around Map_SetSelectionSize().
 *
 * @name emu_Map_SetSelectionSize
 * @implements 0F78:0285:001C:04DB ()
 * @implements 0F78:02A1:0029:1FEE
 * @implements 0F78:02CA:0006:DFE7
 * @implements 0F78:02D0:0005:8BCF
 */
void emu_Map_SetSelectionSize()
{
	uint16 layout;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	layout = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = Map_SetSelectionSize(layout);
}

/**
 * Emulator wrapper around Map_SetSelectionObjectPosition().
 *
 * @name emu_Map_SetSelectionObjectPosition
 * @implements 0F78:01B4:0016:23DD ()
 * @implements 0F78:01C6:0004:7052
 * @implements 0F78:01CA:0012:8D4D
 * @implements 0F78:01DC:0017:D910
 * @implements 0F78:01DE:0015:BDA3
 * @implements 0F78:01F3:0008:9F16
 * @implements 0F78:01F5:0006:C6A4
 * @implements 0F78:01FB:0004:DE52
 */
void emu_Map_SetSelectionObjectPosition()
{
	uint16 packed;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	packed = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = Map_SetSelectionObjectPosition(packed);
}

/**
 * Emulator wrapper around Map_UpdateMinimapPosition().
 *
 * @name emu_Map_UpdateMinimapPosition
 * @implements 0F78:0008:002C:AB63 ()
 * @implements 0F78:002A:000A:80BD
 * @implements 0F78:0031:0003:9DBE
 * @implements 0F78:0034:0009:542B
 * @implements 0F78:003D:0020:7C2F
 * @implements 0F78:005D:002F:3722
 * @implements 0F78:008C:0012:745F
 * @implements 0F78:008D:0011:3449
 * @implements 0F78:0096:0008:D046
 * @implements 0F78:009E:000D:43A4
 * @implements 0F78:00AB:0006:BB3C
 * @implements 0F78:00B1:0035:3DDF
 * @implements 0F78:00E6:0044:7B39
 * @implements 0F78:012A:000D:2FF9
 * @implements 0F78:0137:003E:BA89
 * @implements 0F78:015B:001A:32E3
 * @implements 0F78:0164:0011:C0E1
 * @implements 0F78:0175:0024:4F8D
 * @implements 0F78:0199:0008:43E5
 * @implements 0F78:01A1:0008:1199
 * @implements 0F78:01A9:000B:91F4
 * @implements 0F78:01AE:0006:F7CE
 */
void emu_Map_UpdateMinimapPosition()
{
	uint16 packed;
	bool forceUpdate;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	packed      = emu_get_memory16(emu_ss, emu_sp, 0x0);
	forceUpdate = (emu_get_memory16(emu_ss, emu_sp, 0x2) != 0);

	Map_UpdateMinimapPosition(packed, forceUpdate);
}
