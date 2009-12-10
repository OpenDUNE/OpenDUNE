/* $Id$ */

#include <stdio.h>
#include "os/strings.h"
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "file.h"

FileInfo *g_fileInfo = NULL;

/**
 * Initialize the file system.
 *
 * @init System_Init_File
 */
void System_Init_File()
{
	g_fileInfo = (FileInfo *)&emu_get_memory8(0x2E9C, 0x0, 0x0);
}

/**
 * Find the FileInfo index for the given filename.
 *
 * @param filename The filename to get the index for.
 * @return The index or 0xFFFF if not found.
 */
uint16 FileInfo_FindIndex_ByName(char *filename)
{
	uint16 index;

	for (index = 0; index < FILE_MAX; index++) {
		if (!strcasecmp((char *)emu_get_memorycsip(g_fileInfo[index].filename), filename)) return index;
	}

	return FILE_INVALID;
}
