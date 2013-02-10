/** @file src/os/readdir.c Directory traversal for Win32 systems */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "file.h"
#include "error.h"
#include "strings.h"
#include "readdir.h"

/**
 * Process all files in the directory
 *
 * @param dirpath path to directory to traverse
 * @param cb function called back for each file found
 * @return True if and only if everything was ok
 */
bool ReadDir_ProcessAllFiles(const char * dirpath, bool (*cb)(const char * name, const char * path, uint32 size))
{
	Error("ReadDir_ProcessAllFiles() not yet implemented for Win32\n");
	return false;
}

