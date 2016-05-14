/** @file src/os/readdir_atari.c Directory traversal for Atari TOS */

#include <mint/ostruct.h>
#include <mint/osbind.h>
#include <mint/errno.h>
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
	_DTA dta;
	char searchpath[256];
	char path[256];
	long r;

	snprintf(searchpath, sizeof(searchpath), "%s*.*", dirpath);
	Fsetdta(&dta);
	if(Fsfirst(searchpath, FA_RDONLY | FA_HIDDEN) != 0) {
		return false;
	} else do {
		/* Skip directories */
		if (dta.dta_attribute & FA_DIR) continue;
		snprintf(path, sizeof(path), "%s%s", dirpath, dta.dta_name);
		Debug("Found file %-17s %7ld bytes\n", path, dta.dta_size);
		if (!callback(dta.dta_name, path, (uint32)dta.dta_size)) {
			return false;
		}
	} while((r = Fsnext()) == 0);
	return (r == -ENMFILES);
}
