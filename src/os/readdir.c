/** @file src/os/readdir.c Directory traversal for POSIX systems */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef __WATCOMC__
#include <direct.h>
#else
#include <dirent.h>
#endif
#include <sys/stat.h>
#include <sys/types.h>
#include "types.h"
#include "file.h"
#include "error.h"
#include "strings.h"
#include "readdir.h"

/**
 * Process all files in the directory.
 *
 * @param dirpath path to directory to traverse.
 * @param callback function called back for each file found.
 * @return True if and only if everything was ok.
 */
bool ReadDir_ProcessAllFiles(const char * dirpath, bool (*callback)(const char *name, const char *path, uint32 size))
{
	struct dirent *ep;
	DIR *dp = opendir(dirpath);
	if (dp == NULL) {
		return false;
	}
	while ((ep = readdir(dp)) != NULL) {
		char path[1024];
		struct stat st;
		if (strcmp(ep->d_name, ".") == 0 || strcmp(ep->d_name, "..") == 0)
			continue;
		snprintf(path, sizeof(path), "%s%s", dirpath, ep->d_name);
		/* lstat() should be prefered, but is not always available */
		if (stat(path, &st) < 0) {
			Warning("lstat(%s) failed\n", path);
			continue;
		}
		if (S_ISDIR(st.st_mode)) continue;
		if (!callback(ep->d_name, path, (uint32)st.st_size)) {
			closedir(dp);
			return false;
		}
	}
	closedir(dp);
	return true;
}

