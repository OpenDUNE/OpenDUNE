/** @file src/os/readdir.c Directory traversal for Win32 systems */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
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
bool ReadDir_ProcessAllFiles(const char *dirpath, bool (*cb)(const char *name, const char *path, uint32 size))
{
	WIN32_FIND_DATA ffd;
	char dir[MAX_PATH];
	char path[MAX_PATH];
	uint32 size;
	HANDLE hFind = INVALID_HANDLE_VALUE;

	snprintf(dir, sizeof(dir), "%s*", dirpath);
	hFind = FindFirstFile(dir, &ffd);
	if (INVALID_HANDLE_VALUE == hFind) {
		return false;
	}

	do {
		/* Skip directories */
		if (ffd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
			continue;
		snprintf(path, sizeof(path), "%s%s", dirpath, ffd.cFileName);
		size = ffd.nFileSizeLow;
		cb(ffd.cFileName, path, size);
	} while (FindNextFile(hFind, &ffd) != 0);

	if (GetLastError() != ERROR_NO_MORE_FILES) {
		FindClose(hFind);
		return false;
	}
	FindClose(hFind);
	return true;
}
