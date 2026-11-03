/** @file src/os/readdir_saturn.c Directory traversal on the Sega Saturn.
 *
 * Only the data directory exists as a real directory: the root of the disc,
 * reached through the "CD/" prefix (see saturn/common/files.h). */

#include <stdio.h>
#include <string.h>

#include "types.h"
#include "readdir.h"
#include "error.h"

#include "files.h"

typedef struct ReadDirContext {
	const char *dirpath;
	bool (*callback)(const char *name, const char *path, uint32 size);
	bool ok;
} ReadDirContext;

/**
 * Files_CdList() callback: pass a file of the disc to the engine's callback.
 *
 * @param name The file's name.
 * @param size Its size.
 * @param data The ReadDirContext.
 * @return 0 to stop.
 */
static int ReadDir_ProcessCdFile(const char *name, uint32_t size, void *data)
{
	ReadDirContext *context = data;
	char path[64];

	snprintf(path, sizeof(path), "%s%s", context->dirpath, name);
	if (!context->callback(name, path, (uint32)size)) {
		context->ok = false;
		return 0;
	}
	return 1;
}

/**
 * Call cb for every file in a directory: only the disc's root ("CD/") exists.
 *
 * @param dirpath The directory.
 * @param cb Called with each file's name, path and size; false stops.
 * @return False if the directory can't be read or cb stopped.
 */
bool ReadDir_ProcessAllFiles(const char *dirpath, bool (*cb)(const char *name, const char *path, uint32 size))
{
	ReadDirContext context;

	if (strcmp(dirpath, FILES_CD_PREFIX) != 0) {
		Error("Only %s can be listed, not %s\n", FILES_CD_PREFIX, dirpath);
		return false;
	}

	context.dirpath = dirpath;
	context.callback = cb;
	context.ok = true;
	if (!Files_CdList(ReadDir_ProcessCdFile, &context)) {
		Error("Cannot read the disc\n");
		return false;
	}
	return context.ok;
}
