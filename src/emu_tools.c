/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "tools.h"

/**
 * Emulator wrapper around Tools_AdjustToGameSpeed().
 *
 * @name emu_Tools_AdjustToGameSpeed
 * @implements 07C9:000F:0050:9278 ()
 * @implements 07C9:0035:002A:BC44
 * @implements 07C9:0043:001C:5702
 * @implements 07C9:005F:0015:22E3
 * @implements 07C9:0066:000E:D629
 * @implements 07C9:0074:0006:C560
 * @implements 07C9:0076:0004:6FD8
 * @implements 07C9:007A:0008:4548
 * @implements 07C9:007D:0005:BEE7
 * @implements 07C9:0082:0002:C03A
 * @implements 07C9:0084:0008:A7FF
 * @implements 07C9:008C:000C:41F1
 * @implements 07C9:008E:000A:8959
 * @implements 07C9:0098:0008:C872
 * @implements 07C9:009A:0006:42F0
 * @implements 07C9:009C:0004:6872
 * @implements 07C9:00A0:0006:F7CE
 */
void emu_Tools_AdjustToGameSpeed()
{
	uint16 normal;
	uint16 maximum;
	uint16 minimum;
	uint16 inverse;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	normal  = emu_get_memory16(emu_ss, emu_sp, 0x0);
	minimum = emu_get_memory16(emu_ss, emu_sp, 0x2);
	maximum = emu_get_memory16(emu_ss, emu_sp, 0x4);
	inverse = emu_get_memory16(emu_ss, emu_sp, 0x6);

	emu_ax = Tools_AdjustToGameSpeed(normal, minimum, maximum, (inverse == 0) ? true : false);
}

/**
 * 32bits left shift.
 *
 * @name emu_Tools_Shld
 * @implements 01F7:058E:0015:CED2 ()
 * @implements 01F7:05A3:0009:5F2E
 */
void emu_Tools_Shld()
{
	uint32 val;

	/* Pop the return CS:IP */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	val = ((emu_dx << 16) | emu_ax) << emu_cl;
	emu_ax = val & 0xFFFF;
	emu_dx = (val >> 16) & 0xFFFF;
}

/**
 * 32bits right shift.
 *
 * @name emu_Tools_Shrd
 * @implements 01F7:05AF:0015:0AD5 ()
 * @implements 01F7:05C4:0008:2A95
 */
void emu_Tools_Shrd()
{
	uint32 val;

	/* Pop the return CS:IP */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	val = ((emu_dx << 16) | emu_ax) >> emu_cl;
	emu_ax = val & 0xFFFF;
	emu_dx = (val >> 16) & 0xFFFF;
}

/**
 * Emulator wrapper around Tools_Index_GetType().
 *
 * @name emu_Tools_Index_GetType
 * @implements 167E:0088:001A:60ED ()
 * @implements 167E:00A2:0005:E2FA
 * @implements 167E:00A5:0002:C73A
 * @implements 167E:00A7:0005:897A
 * @implements 167E:00AC:0005:AFFA
 * @implements 167E:00B1:0004:9039
 * @implements 167E:00B5:0002:2597
 */
void emu_Tools_Index_GetType()
{
	uint16 id;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	id = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = Tools_Index_GetType(id);
}

/**
 * Emulator wrapper around Tools_Index_Decode().
 *
 * @name emu_Tools_Index_Decode
 * @implements 167E:00B7:0034:F3DA ()
 * @implements 167E:00E6:0005:34FD
 * @implements 167E:00EB:0004:13F2
 * @implements 167E:00EF:0004:893F
 */
void emu_Tools_Index_Decode()
{
	uint16 id;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	id = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = Tools_Index_Decode(id);
}

/**
 * Emulator wrapper around Tools_Index_Encode().
 *
 * @name emu_Tools_Index_Encode
 * @implements 167E:00F3:001E:8CB3 ()
 * @implements 167E:0111:0025:96F6
 * @implements 167E:0134:0002:D3BA
 * @implements 167E:0136:0006:8BC7
 * @implements 167E:013C:0012:1FAD
 * @implements 167E:014E:0002:C4BA
 * @implements 167E:0150:0007:030A
 * @implements 167E:0153:0004:067A
 * @implements 167E:0157:0002:C03A
 * @implements 167E:0159:0004:83B9
 * @implements 167E:015D:0005:8BCF
 */
void emu_Tools_Index_Encode()
{
	uint16 id;
	uint16 type;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	id =   emu_get_memory16(emu_ss, emu_sp, 0x0);
	type = emu_get_memory16(emu_ss, emu_sp, 0x2);

	emu_ax = Tools_Index_Encode(id, type);
}
