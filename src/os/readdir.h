/** @file src/os/readdir.h Platform dependant directory traversal */

#ifndef OS_READDIR_H
#define OS_READDIR_H

extern bool ReadDir_ProcessAllFiles(const char * dirpath, bool (*cb)(const char * name, const char * path, uint32 size));

#endif /* OS_READDIR_H */
