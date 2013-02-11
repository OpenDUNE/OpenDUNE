/** @file src/file.c %File access routines. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "os/endian.h"
#include "os/error.h"
#include "os/file.h"
#include "os/math.h"
#include "os/strings.h"
#include "os/readdir.h"

#include "file.h"

#include "config.h"


/**
 * Extensions to stdio.h
 */

/**
 * Read a uint32 value from a little endian file
 */
bool fread_le_uint32(uint32 *value, FILE *stream)
{
	uint8 buffer[4];
	if (value == NULL)
		return false;
	if (fread(buffer, 1, 4, stream) != 4)
		return false;
	*value = buffer[0] | (buffer[1] << 8) | (buffer[2] << 16) | (buffer[3] << 16);
	return true;
}

/**
 * Static information about opened files.
 */
typedef struct File {
	FILE *fp;
	uint32 size;
	uint32 start;
	uint32 position;
} File;

static File s_file[FILE_MAX];

/**
 * Information about files in data/ directory
 * and processed content of PAK files
 */
typedef struct FileInfoLinkedElem {
	struct FileInfoLinkedElem * next;
	FileInfo info;
	char filenamebuffer[1];
} FileInfoLinkedElem;

static FileInfoLinkedElem * s_files_in_root = NULL;

typedef struct PakFileInfoLinkedElem {
	struct PakFileInfoLinkedElem * next;
	FileInfo * pak;
	FileInfo info;
	char filenamebuffer[1];
} PakFileInfoLinkedElem;

static PakFileInfoLinkedElem * s_files_in_pak = NULL;

uint16 g_fileOperation = 0; /*!< If non-zero, input (keyboard + mouse), video is not updated, .. Basically, any operation that might trigger a free() in the signal handler, which can collide with malloc() of file operations. */

/**
 * Find the FileInfo for the given filename.
 *
 * @param filename The filename to get the FileInfo for.
 * @return The FileInfo pointer or NULL if not found.
 */
static FileInfo * FileInfo_Find_ByName(const char *filename, FileInfo ** pakInfo)
{
	{
		FileInfoLinkedElem * e;
		for (e = s_files_in_root; e != NULL; e = e->next) {
			if (!strcasecmp(e->info.filename, filename)) {
				if (pakInfo) *pakInfo = NULL;
				return &e->info;
			}
		}
	}
	{
		PakFileInfoLinkedElem * e;
		for (e = s_files_in_pak; e != NULL; e = e->next) {
			if (!strcasecmp(e->info.filename, filename)) {
				if (pakInfo) *pakInfo = e->pak;
				return &e->info;
			}
		}
	}
	return NULL;
}

/**
 * Internal function to truly open a file.
 *
 * @param filename The name of the file to open.
 * @param mode The mode to open the file in. Bit 1 means reading, bit 2 means writing.
 * @return An index value refering to the opened file, or FILE_INVALID.
 */
static uint8 _File_Open(const char *filename, uint8 mode)
{
	char filenameComplete[1024];
	char pakNameComplete[1024];
	uint8 fileIndex;
	FileInfo * fileInfo;
	FileInfo * pakInfo = NULL;

	fileInfo = FileInfo_Find_ByName(filename, &pakInfo);
	if (fileInfo != NULL) {
		/* Take the filename from the FileInfo structure, as it was read
		 * from the data/ directory */
		snprintf(filenameComplete, sizeof(filenameComplete), DATA_DIR "%s", fileInfo->filename);
	} else {
		snprintf(filenameComplete, sizeof(filenameComplete), DATA_DIR "%s", filename);
	}

	if ((mode & 1) == 0 && (mode & 2) == 0) return FILE_INVALID;

	/* Find a free spot in our limited array */
	for (fileIndex = 0; fileIndex < FILE_MAX; fileIndex++) {
		if (s_file[fileIndex].fp == NULL) break;
	}
	if (fileIndex == FILE_MAX) return FILE_INVALID;

	/* Check if we can find the file outside any PAK file */
	s_file[fileIndex].fp = fopen(filenameComplete, (mode == 2) ? "wb" : ((mode == 3) ? "wb+" : "rb"));
	if (s_file[fileIndex].fp != NULL) {
		s_file[fileIndex].start    = 0;
		s_file[fileIndex].position = 0;
		s_file[fileIndex].size     = 0;

		/* We can only check the size of the file if we are reading (or appending) */
		if ((mode & 1) != 0) {
			fseek(s_file[fileIndex].fp, 0, SEEK_END);
			s_file[fileIndex].size = ftell(s_file[fileIndex].fp);
			fseek(s_file[fileIndex].fp, 0, SEEK_SET);
		}

		return fileIndex;
	}

	/* We never allow writing of files inside PAKs */
	if ((mode & 2) != 0) return FILE_INVALID;

	/* Check if the file could be inside any of our PAK files */
	if (fileInfo == NULL) return FILE_INVALID;

	/* If the file is not inside another PAK, then the file doesn't exist (as it wasn't in the directory either) */
	if (!fileInfo->flags.inPAKFile) return FILE_INVALID;

	if (pakInfo == NULL) return FILE_INVALID;
	snprintf(pakNameComplete, sizeof(pakNameComplete), DATA_DIR "%s", pakInfo->filename);
	s_file[fileIndex].fp = fopen(pakNameComplete, "rb");
	if (s_file[fileIndex].fp == NULL) return FILE_INVALID;

	s_file[fileIndex].start    = fileInfo->filePosition;
	s_file[fileIndex].position = 0;
	s_file[fileIndex].size     = fileInfo->fileSize;

	/* Go to the start of the file now */
	fseek(s_file[fileIndex].fp, s_file[fileIndex].start, SEEK_SET);
	return fileIndex;
}

/**
 * Memorize a file from the data/ directory
 *
 * @param filename
 * @param filesize
 * @return A pointer to the newly created FileInfo
 */
static FileInfo * _File_Init_AddFileInRootDir(const char * filename, uint32 filesize)
{
	FileInfoLinkedElem * new;
	size_t size;
	size = sizeof(FileInfoLinkedElem) + strlen(filename);
	new = malloc(size);
	if (new == NULL) {
		Error("cannot allocate %u bytes of memory\n", size);
		return NULL;
	}
	new->next = s_files_in_root;
	memset(&new->info, 0, sizeof(FileInfo));
	memcpy(new->filenamebuffer, filename, strlen(filename) + 1);
	new->info.filename = new->filenamebuffer;
	new->info.fileSize = filesize;
	new->info.filePosition = 0;
	s_files_in_root = new;
	return &new->info;
}

/**
 * Memorize a file inside a PAK file
 *
 * @param filename the filename as indicated in PAK header
 * @param filesize the size as calculated from PAK header
 * @param position the position of the file from the start of the PAK file
 * @param pakInfo FileInfo pointer for the PAK file
 * @return A pointer to the newly created FileInfo
 */
static FileInfo * _File_Init_AddFileInPak(const char * filename, uint32 filesize, uint32 position, FileInfo * pakInfo) {
	PakFileInfoLinkedElem * new;
	size_t size;
	size = sizeof(PakFileInfoLinkedElem) + strlen(filename);
	new = malloc(size);
	if (new == NULL) {
		Error("cannot allocate %u bytes of memory\n", size);
		return NULL;
	}
	new->next = s_files_in_pak;
	new->pak = pakInfo;
	memset(&new->info, 0, sizeof(FileInfo));
	memcpy(new->filenamebuffer, filename, strlen(filename) + 1);
	new->info.filename = new->filenamebuffer;
	new->info.fileSize = filesize;
	new->info.filePosition = position;
	new->info.flags.inPAKFile = true;
	s_files_in_pak = new;
	return &new->info;
}

/**
 * Process (parse) a PAK file
 *
 * @param pakpath real path to open PAK file
 * @param paksize size (bytes) of the PAK file
 * @param pakInfo pointer to the FileInfo for PAK file
 * @return True if PAK processing was ok
 */
static bool _File_Init_ProcessPak(const char * pakpath, uint32 paksize, FileInfo * pakInfo) {
	FILE * f;
	uint32 position;
	uint32 nextposition;
	uint32 size;
	char filename[32];
	unsigned int i;

	f = fopen(pakpath, "rb");
	if (f == NULL)
	{
		Error("failed to open %s", pakpath);
		return false;
	}
	if (!fread_le_uint32(&nextposition, f)) {
		fclose(f);
		return false;
	}
	while (nextposition != 0) {
		position = nextposition;
		for (i = 0; i < sizeof(filename); i++) {
			if (fread(filename + i, 1, 1, f) != 1) {
				fclose(f);
				return false;
			}
			if (filename[i] == '\0')
				break;
		}
		/* be endian agnostic ! */
		if (!fread_le_uint32(&nextposition, f)) {
			fclose(f);
			return false;
		}
		size = (nextposition != 0) ? nextposition - position : paksize - position;
		if (_File_Init_AddFileInPak(filename, size, position, pakInfo) == NULL) {
			fclose(f);
			return false;
		}
	}
	fclose(f);
	return true;
}

/**
 * Callback for processing files found in data/ directory
 *
 * @param name file name
 * @param path file relative path
 * @param size file size (bytes)
 * @return True if the processing went OK
 */
static bool _File_Init_Callback(const char * name, const char * path, uint32 size)
{
	char * ext;
	FileInfo * fileInfo;

	fileInfo = _File_Init_AddFileInRootDir(name, size);
	if (fileInfo == NULL)
		return false;
	ext = strrchr(path, '.');
	if (ext != NULL) {
		if (strcasecmp(ext, ".pak") == 0) {
			if (!_File_Init_ProcessPak(path, size, fileInfo))
				return false;
		}
	}
	return true;
}

/**
 * Initialize files tables by reading the DATA_DIR directory
 *
 * @return True if and only if everything was ok
 */
bool File_Init(void)
{
	return ReadDir_ProcessAllFiles(DATA_DIR, _File_Init_Callback);
}

/**
 * Free all ressources loaded in memory
 */
void File_Uninit(void)
{
	while (s_files_in_root != NULL) {
		FileInfoLinkedElem * e = s_files_in_root;
		s_files_in_root = e->next;
		free(e);
	}

	while (s_files_in_pak != NULL) {
		PakFileInfoLinkedElem * e = s_files_in_pak;
		s_files_in_pak = e->next;
		free(e);
	}
}

/**
 * Check if a file exists either in a PAK or on the disk.
 *
 * @param filename The filename to check for.
 * @return True if and only if the file can be found.
 */
bool File_Exists(const char *filename)
{
	uint8 index;

	g_fileOperation++;

	index = _File_Open(filename, 1);
	if (index == FILE_INVALID) {
		g_fileOperation--;
		return false;
	}
	File_Close(index);

	g_fileOperation--;

	return true;
}

/**
 * Open a file for reading/writing/appending.
 *
 * @param filename The name of the file to open.
 * @param mode The mode to open the file in. Bit 1 means reading, bit 2 means writing.
 * @return An index value refering to the opened file, or FILE_INVALID.
 */
uint8 File_Open(const char *filename, uint8 mode)
{
	uint8 res;

	g_fileOperation++;
	res = _File_Open(filename, mode);
	g_fileOperation--;

	if (res == FILE_INVALID) {
		Error("Unable to open file '%s'.\n", filename);
		exit(1);
	}

	return res;
}

/**
 * Close an opened file.
 *
 * @param index The index given by File_Open() of the file.
 */
void File_Close(uint8 index)
{
	if (index >= FILE_MAX) return;
	if (s_file[index].fp == NULL) return;

	g_fileOperation++;

	fclose(s_file[index].fp);
	s_file[index].fp = NULL;

	g_fileOperation--;
}

/**
 * Read bytes from a file into a buffer.
 *
 * @param index The index given by File_Open() of the file.
 * @param buffer The buffer to read into.
 * @param length The amount of bytes to read.
 * @return The amount of bytes truly read, or 0 if there was a failure.
 */
uint32 File_Read(uint8 index, void *buffer, uint32 length)
{
	if (index >= FILE_MAX) return 0;
	if (s_file[index].fp == NULL) return 0;
	if (s_file[index].position >= s_file[index].size) return 0;
	if (length == 0) return 0;

	if (length > s_file[index].size - s_file[index].position) length = s_file[index].size - s_file[index].position;

	g_fileOperation++;
	if (fread(buffer, length, 1, s_file[index].fp) != 1) {
		Error("Read error\n");
		File_Close(index);

		length = 0;
	}
	g_fileOperation--;

	s_file[index].position += length;
	return length;
}

/**
 * Write bytes from a buffer to a file.
 *
 * @param index The index given by File_Open() of the file.
 * @param buffer The buffer to write from.
 * @param length The amount of bytes to write.
 * @return The amount of bytes truly written, or 0 if there was a failure.
 */
uint32 File_Write(uint8 index, void *buffer, uint32 length)
{
	if (index >= FILE_MAX) return 0;
	if (s_file[index].fp == NULL) return 0;

	g_fileOperation++;
	if (fwrite(buffer, length, 1, s_file[index].fp) != 1) {
		Error("Write error\n");
		File_Close(index);

		length = 0;
	}
	g_fileOperation--;

	s_file[index].position += length;
	if (s_file[index].position > s_file[index].size) s_file[index].size = s_file[index].position;
	return length;
}

/**
 * Seek inside a file.
 *
 * @param index The index given by File_Open() of the file.
 * @param position Position to fix to.
 * @param mode Mode of seeking. 0 = SEEK_SET, 1 = SEEK_CUR, 2 = SEEK_END.
 * @return The new position inside the file, relative from the start.
 */
uint32 File_Seek(uint8 index, uint32 position, uint8 mode)
{
	if (index >= FILE_MAX) return 0;
	if (s_file[index].fp == NULL) return 0;
	if (mode > 2) { File_Close(index); return 0; }

	g_fileOperation++;
	switch (mode) {
		case 0:
			fseek(s_file[index].fp, s_file[index].start + position, SEEK_SET);
			s_file[index].position = position;
			break;
		case 1:
			fseek(s_file[index].fp, (int32)position, SEEK_CUR);
			s_file[index].position += (int32)position;
			break;
		case 2:
			fseek(s_file[index].fp, s_file[index].start + s_file[index].size - position, SEEK_SET);
			s_file[index].position = s_file[index].size - position;
			break;
	}
	g_fileOperation--;

	return s_file[index].position;
}

/**
 * Get the size of a file.
 *
 * @param index The index given by File_Open() of the file.
 * @return The size of the file.
 */
uint32 File_GetSize(uint8 index)
{
	if (index >= FILE_MAX) return 0;
	if (s_file[index].fp == NULL) return 0;

	return s_file[index].size;
}

/**
 * Delete a file from the disk.
 *
 * @param filename The filename to remove.
 */
void File_Delete(const char *filename)
{
	char filenameLower[1024];
	char filenameUpper[1024];
	char filenameComplete[1024];

	strncpy(filenameLower, filename, sizeof(filenameLower));
	filenameLower[sizeof(filenameLower) - 1] = '\0';
	strncpy(filenameUpper, filename, sizeof(filenameUpper));
	filenameUpper[sizeof(filenameUpper) - 1] = '\0';
	{
		char *f;

		for (f = filenameLower; *f != '\0'; f++) {
			if (*f >= 'A' && *f <= 'Z') *f += 32;
		}
		for (f = filenameUpper; *f != '\0'; f++) {
			if (*f >= 'a' && *f <= 'z') *f -= 32;
		}
	}
	snprintf(filenameComplete, sizeof(filenameComplete), DATA_DIR "%s", filenameLower);

	g_fileOperation++;
	if (unlink(filenameComplete) < 0) {
		/* try with the upper case file name */
		snprintf(filenameComplete, sizeof(filenameComplete), DATA_DIR "%s", filenameUpper);
		unlink(filenameComplete);
	}
	g_fileOperation--;
}

/**
 * Create a file on the disk.
 *
 * @param filename The filename to create.
 */
void File_Create(const char *filename)
{
	uint8 index;

	g_fileOperation++;

	index = _File_Open(filename, 2);
	if (index == FILE_INVALID) {
		g_fileOperation--;
		return;
	}
	File_Close(index);

	g_fileOperation--;
}

/**
 * Reads length bytes from filename into buffer.
 *
 * @param filename Then name of the file to read.
 * @param buffer The buffer to read into.
 * @param length The amount of bytes to read.
 * @return The amount of bytes truly read, or 0 if there was a failure.
 */
uint32 File_ReadBlockFile(const char *filename, void *buffer, uint32 length)
{
	uint8 index;

	index = File_Open(filename, 1);
	length = File_Read(index, buffer, length);
	File_Close(index);
	return length;
}

/**
 * Reads the whole file in the memory.
 *
 * @param filename The name of the file to open.
 * @param mallocFlags The type of memory to allocate.
 * @return The CS:IP of the allocated memory where the file has been read.
 */
void *File_ReadWholeFile(const char *filename)
{
	uint8 index;
	uint32 length;
	void *buffer;

	index = File_Open(filename, 1);
	length = File_GetSize(index);

	buffer = malloc(length + 1);
	File_Read(index, buffer, length);

	/* In case of text-files it can be very important to have a \0 at the end */
	((char *)buffer)[length] = '\0';

	File_Close(index);

	return buffer;
}

/**
 * Reads the whole file into buffer.
 *
 * @param filename The name of the file to open.
 * @param buf The buffer to read into.
 * @return The length of the file.
 */
uint32 File_ReadFile(const char *filename, void *buf)
{
	uint8 index;
	uint32 length;

	index = File_Open(filename, 1);
	length = File_Seek(index, 0, 2);
	File_Seek(index, 0, 0);
	File_Read(index, buf, length);
	File_Close(index);

	return length;
}

/**
 * Open a chunk file (starting with FORM) for reading.
 *
 * @param filename The name of the file to open.
 * @return An index value refering to the opened file, or FILE_INVALID.
 */
uint8 ChunkFile_Open(const char *filename)
{
	uint8 index;
	uint32 header;

	index = File_Open(filename, 1);
	File_Close(index);

	index = File_Open(filename, 1);

	File_Read(index, &header, 4);

	if (header != HTOBE32('FORM')) {
		File_Close(index);
		return FILE_INVALID;
	}

	File_Seek(index, 4, 1);

	return index;
}

/**
 * Close an opened chunk file.
 *
 * @param index The index given by ChunkFile_Open() of the file.
 */
void ChunkFile_Close(uint8 index)
{
	if (index == FILE_INVALID) return;

	File_Close(index);
}

/**
 * Seek to the given chunk inside a chunk file.
 *
 * @param index The index given by ChunkFile_Open() of the file.
 * @param chunk The chunk to seek to.
 * @return The length of the chunk (0 if not found).
 */
uint32 ChunkFile_Seek(uint8 index, uint32 chunk)
{
	uint32 value = 0;
	uint32 length = 0;
	bool first = true;

	while (true) {
		if (File_Read(index, &value, 4) != 4 && !first) return 0;

		if (value == 0 && File_Read(index, &value, 4) != 4 && !first) return 0;

		if (File_Read(index, &length, 4) != 4 && !first) return 0;

		length = HTOBE32(length);

		if (value == chunk) {
			File_Seek(index, -8, 1);
			return length;
		}

		if (first) {
			File_Seek(index, 12, 0);
			first = false;
			continue;
		}

		length += 1;
		length &= 0xFFFFFFFE;
		File_Seek(index, length, 1);
	}
}

/**
 * Read bytes from a chunk file into a buffer.
 *
 * @param index The index given by ChunkFile_Open() of the file.
 * @param chunk The chunk to read from.
 * @param buffer The buffer to read into.
 * @param length The amount of bytes to read.
 * @return The amount of bytes truly read, or 0 if there was a failure.
 */
uint32 ChunkFile_Read(uint8 index, uint32 chunk, void *buffer, uint32 buflen)
{
	uint32 value = 0;
	uint32 length = 0;
	bool first = true;

	while (true) {
		if (File_Read(index, &value, 4) != 4 && !first) return 0;

		if (value == 0 && File_Read(index, &value, 4) != 4 && !first) return 0;

		if (File_Read(index, &length, 4) != 4 && !first) return 0;

		length = HTOBE32(length);

		if (value == chunk) {
			buflen = min(buflen, length);

			File_Read(index, buffer, buflen);

			length += 1;
			length &= 0xFFFFFFFE;

			if (buflen < length) File_Seek(index, length - buflen, 1);

			return buflen;
		}

		if (first) {
			File_Seek(index, 12, 0);
			first = false;
			continue;
		}

		length += 1;
		length &= 0xFFFFFFFE;
		File_Seek(index, length, 1);
	}
}
