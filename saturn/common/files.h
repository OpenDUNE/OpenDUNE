/** @file saturn/common/files.h Files for newlib: the CD and a RAM store.
 *
 * Paths starting with "CD/" name read-only files in the disc's root
 * directory (read through SBL's GFS). Any other path names a personal file
 * kept in RAM, identified by its last path component; "." is its directory. */

#ifndef SATURN_FILES_H
#define SATURN_FILES_H

#include <stddef.h>
#include <stdint.h>

#define FILES_CD_PREFIX "CD/"

extern int Files_CdList(int (*callback)(const char *name, uint32_t size, void *data), void *data);

extern int Files_Write(int fd, const void *buffer, size_t length);

#endif /*!< SATURN_FILES_H */
