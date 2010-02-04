/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "load.h"

/**
 *Emulator wrapper around LoadFile()
 *
 * @name emu_LoadFile
 * @implements B511:0446:0013:E4E5 ()
 * @implements B511:0459:0009:C151
 * @implements B511:0462:0006:5E88
 * @implements B511:0468:000F:1E3D
 * @implements B511:0477:000B:28F6
 * @implements B511:0482:0008:C68B
 * @implements B511:048D:0005:8EFD
 * @implements B511:0492:000B:4489
 * @implements B511:049D:000D:5685
 * @implements B511:04AA:0023:7B53
 * @implements B511:04CD:000C:4C78
 * @implements B511:04D9:000D:34BA
 * @implements B511:04E6:005D:BFF7
 * @implements B511:0543:0007:6BC7
 * @implements B511:054A:0022:EC11
 * @implements B511:056C:0018:2EAF
 * @implements B511:0573:0011:E2E8
 * @implements B511:0577:000D:1AD2
 * @implements B511:0584:0008:250B
 * @implements B511:058C:0006:F79B
 * @implements B511:0592:000C:E98C
 * @implements B511:059E:000A:88AF
 * @implements B511:05A8:0009:C506
 * @implements B511:05B1:0023:4CA4
 * @implements B511:05D4:0011:66E3
 * @implements B511:05E5:000C:4CAE
 * @implements B511:05F1:0023:84C2
 * @implements B511:0614:0011:96E3
 * @implements B511:0625:000C:4CAE
 * @implements B511:0631:0023:05E3
 * @implements B511:0654:0011:C6E3
 * @implements B511:0665:000C:4CAE
 * @implements B511:0671:0023:6912
 * @implements B511:0694:0011:76E2
 * @implements B511:06A5:000C:4CAE
 * @implements B511:06B1:0023:C436
 * @implements B511:06D4:0011:A6E2
 * @implements B511:06E5:0005:83EE
 * @implements B511:06F8:0002:C73A
 * @implements B511:06FA:0005:1E52
 * @implements B511:06FF:0008:C68B
 * @implements B511:0708:0006:42FE
 * @implements B511:070E:000C:C3E1
 * @implements B511:071A:000A:7479
 */
void emu_LoadFile()
{
	char *filename;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filename = (char *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp, 0x2), emu_get_memory16(emu_ss, emu_sp, 0x0), 0x0);

	LoadFile(filename);
}
