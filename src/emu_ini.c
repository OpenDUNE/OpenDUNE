/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "ini.h"

/**
 * Emulator wrapper around String_Trim().
 *
 * @name emu_String_Trim
 * @implements B4FC:07E2:0012:911F ()
 */
void emu_String_Trim()
{
	char *string;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	string = (char *)emu_get_memorycsip(emu_get_csip32(emu_ss, emu_sp, 0x0));

	String_Trim(string);
}

/**
 * Emulator wrapper around Ini_GetString().
 *
 * @name emu_Ini_GetString
 * @implements B4FC:03C8:002C:9251 ()
*/
void emu_Ini_GetString()
{
	csip32 ccsip;
	csip32 kcsip;
	csip32 dvcsip;
	csip32 dcsip;
	uint16 length;
	csip32 scsip;
	bool ret;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ccsip  =   emu_get_csip32(emu_ss, emu_sp, 0x0);
	kcsip  =   emu_get_csip32(emu_ss, emu_sp, 0x4);
	dvcsip =   emu_get_csip32(emu_ss, emu_sp, 0x8);
	dcsip  =   emu_get_csip32(emu_ss, emu_sp, 0xC);
	length = emu_get_memory16(emu_ss, emu_sp, 0x10);
	scsip  =   emu_get_csip32(emu_ss, emu_sp, 0x12);

	ret = Ini_GetString((char *)emu_get_memorycsip(ccsip), (char *)emu_get_memorycsip(kcsip), (char *)emu_get_memorycsip(dvcsip), (char *)emu_get_memorycsip(dcsip), length, (char *)emu_get_memorycsip(scsip));

	emu_ax = 0x0;
	emu_dx = 0x0;
	if (ret) emu_ax = 1;
}
