/* $Id$ */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "os/file.h"
#include "os/strings.h"
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "file.h"
#include "os/endian.h"
#include "os/math.h"
#include "tools.h"

enum {
	FILEINFO_MAX     = 676,
	FILEINFO_INVALID = 0xFFFF,

	FILE_MAX = 20,
	FILE_INVALID = 0xFF
};

MSVC_PACKED_BEGIN
/**
 * Static information about files and their location.
 */
typedef struct FileInfo {
	/* 0000(4)   */ PACK csip32 filename;                   /*!< Name of the file. */
	/* 0004(4)   */ PACK uint32 fileSize;                   /*!< The size of this file. */
	/* 0008(4)   */ PACK csip32 buffer;                     /*!< In case the file is read in the memory, this is the location of the data. */
	/* 000C(4)   */ PACK uint32 filePosition;               /*!< Where in the file we currently are (doesn't have to start at zero when in PAK file). */
	/* 0010(1)   */ PACK uint8  parentIndex;                /*!< In which FileInfo this file can be found. */
	/* 0011(1)   */ PACK uint8  variable_11;                /*!< ?? */
	/* 0012(1)   */ PACK uint8  variable_12;                /*!< Bitflags. 0x01 - Is mapped, 0x02 / 0x04 - If either flag is on, file is read in memory (in malloced area) on open, 0x10 - Resides in other file. */
} GCC_PACKED FileInfo;
MSVC_PACKED_END
assert_compile(sizeof(FileInfo) == 0x13);

/**
 * Static information about opened files.
 */
typedef struct File {
	FILE *fp;
	uint32 size;
	uint32 start;
	uint32 position;
} File;

static FileInfo *s_fileInfo = NULL;
static File s_file[FILE_MAX];

/**
 * Initialize the file system.
 *
 * @init System_Init_File
 */
void System_Init_File()
{
	s_fileInfo = (FileInfo *)&emu_get_memory8(0x2E9C, 0x0, 0x0);
}

/**
 * Find the FileInfo index for the given filename.
 *
 * @param filename The filename to get the index for.
 * @return The index or 0xFFFF if not found.
 */
static uint16 FileInfo_FindIndex_ByName(const char *filename)
{
	uint16 index;

	for (index = 0; index < FILEINFO_MAX; index++) {
		if (!strcasecmp((char *)emu_get_memorycsip(s_fileInfo[index].filename), filename)) return index;
	}

	return FILEINFO_INVALID;
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
	char *pakName;
	uint8 fileIndex;
	uint16 fileInfoIndex;

	snprintf(filenameComplete, sizeof(filenameComplete), "data/%s", filename);
	/* XXX -- This should be removed when all references are changed to lowercase */
	{
		char *f;

		for (f = filenameComplete; *f != '\0'; f++) {
			if (*f >= 'A' && *f <= 'Z') *f += 32;
		}
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
	fileInfoIndex = FileInfo_FindIndex_ByName(filename);
	if (fileInfoIndex == FILEINFO_INVALID) return FILE_INVALID;

	/* If the file is not inside another PAK, then the file doesn't exist (as it wasn't in the directory either) */
	if ((s_fileInfo[fileInfoIndex].variable_12 & 0x10) == 0) return FILE_INVALID;

	pakName = (char *)&emu_get_memory8(s_fileInfo[s_fileInfo[fileInfoIndex].parentIndex].filename.s.cs, s_fileInfo[s_fileInfo[fileInfoIndex].parentIndex].filename.s.ip, 0);
	snprintf(pakNameComplete, sizeof(pakNameComplete), "data/%s", pakName);
	/* XXX -- This should be removed when all references are changed to lowercase */
	{
		char *f;

		for (f = pakNameComplete; *f != '\0'; f++) {
			if (*f >= 'A' && *f <= 'Z') *f += 32;
		}
	}
	s_file[fileIndex].fp = fopen(pakNameComplete, "rb");
	if (s_file[fileIndex].fp == NULL) return FILE_INVALID;

	/* If this file is not yet read from the PAK, read the complete index
	 *  of the PAK and index all files */
	if ((s_fileInfo[fileInfoIndex].variable_12 & 0x01) == 0) {
		uint16 pakIndexLast;

		pakIndexLast = FILEINFO_INVALID;

		while (true) {
			char pakFilename[1024];
			uint32 pakPosition;
			uint16 pakIndex;
			uint16 i;

			if (fread(&pakPosition, sizeof(uint32), 1, s_file[fileIndex].fp) != 1) {
				fclose(s_file[fileIndex].fp);
				return FILE_INVALID;
			}
			if (pakPosition == 0) break;

			/* Read the name of the file inside the PAK */
			for (i = 0; i < sizeof(pakFilename); i++) {
				if (fread(&pakFilename[i], 1, 1, s_file[fileIndex].fp) != 1) {
					fclose(s_file[fileIndex].fp);
					return FILE_INVALID;
				}
				if (pakFilename[i] == '\0') break;

				/* We always work in lowercase */
				if (pakFilename[i] >= 'A' && pakFilename[i] <= 'Z') pakFilename[i] += 32;
			}
			if (i == sizeof(pakFilename)) {
				fclose(s_file[fileIndex].fp);
				return FILE_INVALID;
			}

			/* Check if we expected this file in this PAK */
			pakIndex = FileInfo_FindIndex_ByName(pakFilename);
			if (pakIndex == FILEINFO_INVALID) continue;
			if (s_fileInfo[pakIndex].parentIndex != s_fileInfo[fileInfoIndex].parentIndex) continue;

			/* Update the information of the file */
			s_fileInfo[pakIndex].variable_12 |= 0x01;
			s_fileInfo[pakIndex].filePosition = pakPosition;
			if (pakIndexLast != FILEINFO_INVALID) s_fileInfo[pakIndexLast].fileSize = pakPosition - s_fileInfo[pakIndexLast].filePosition;

			pakIndexLast = pakIndex;
		}

		/* Make sure we set the right size of the last entry */
		if (pakIndexLast != FILEINFO_INVALID) {
			fseek(s_file[fileIndex].fp, 0, SEEK_END);
			s_fileInfo[pakIndexLast].fileSize = ftell(s_file[fileIndex].fp) - s_fileInfo[pakIndexLast].filePosition;
		}
	}

	/* Check if the file is inside the PAK file */
	if ((s_fileInfo[fileInfoIndex].variable_12 & 0x01) == 0) {
		fclose(s_file[fileIndex].fp);
		return FILE_INVALID;
	}

	s_file[fileIndex].start    = s_fileInfo[fileInfoIndex].filePosition;
	s_file[fileIndex].position = 0;
	s_file[fileIndex].size     = s_fileInfo[fileInfoIndex].fileSize;

	/* Go to the start of the file now */
	fseek(s_file[fileIndex].fp, s_file[fileIndex].start, SEEK_SET);
	return fileIndex;
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

	g_global->ignoreInput++;

	index = _File_Open(filename, 1);
	if (index == FILE_INVALID) {
		g_global->ignoreInput--;
		return false;
	}
	File_Close(index);

	g_global->ignoreInput--;

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

	g_global->ignoreInput++;
	res = _File_Open(filename, mode);
	g_global->ignoreInput--;

	if (res == FILE_INVALID) {
		fprintf(stderr, "ERROR: unable to open file '%s'.\n", filename);
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

	g_global->ignoreInput++;

	fclose(s_file[index].fp);
	s_file[index].fp = NULL;

	g_global->ignoreInput--;
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

	g_global->ignoreInput++;
	if (fread(buffer, length, 1, s_file[index].fp) != 1) {
		fprintf(stderr, "ERROR: read error\n");
		File_Close(index);

		length = 0;
	}
	g_global->ignoreInput--;

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

	g_global->ignoreInput++;
	if (fwrite(buffer, length, 1, s_file[index].fp) != 1) {
		fprintf(stderr, "ERROR: write error\n");
		File_Close(index);

		length = 0;
	}
	g_global->ignoreInput--;

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

	g_global->ignoreInput++;
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
	g_global->ignoreInput--;

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
	char filenameComplete[1024];

	snprintf(filenameComplete, sizeof(filenameComplete), "data/%s", filename);
	/* XXX -- This should be removed when all references are changed to lowercase */
	{
		char *f;

		for (f = filenameComplete; *f != '\0'; f++) {
			if (*f >= 'A' && *f <= 'Z') *f += 32;
		}
	}

	g_global->ignoreInput++;
	unlink(filenameComplete);
	g_global->ignoreInput--;
}

/**
 * Create a file on the disk.
 *
 * @param filename The filename to create.
 */
void File_Create(const char *filename)
{
	uint8 index;

	g_global->ignoreInput++;

	index = _File_Open(filename, 2);
	if (index == FILE_INVALID) {
		g_global->ignoreInput--;
		return;
	}
	File_Close(index);

	g_global->ignoreInput--;
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
csip32 File_ReadWholeFile(const char *filename, uint8 mallocFlags)
{
	uint8 index;
	uint32 length;
	csip32 memBlock;

	index = File_Open(filename, 1);
	length = File_GetSize(index);

	memBlock = Tools_Malloc(length, mallocFlags);

	if (memBlock.csip != 0x0) {
		File_Read(index, (void *)emu_get_memorycsip(memBlock), length);
	}

	File_Close(index);

	return memBlock;
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
 * Check if there is still @size bytes free on the disk.
 * @param size The size to check for.
 * @return True if and only if there is still @size bytes free on the disk.
 * @warning This function returns true, forced. It does no real freespace checks!
 */
bool File_HasFreeSpace(uint32 size)
{
	uint32 free = 0x8000000;
	return (size < free);
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
