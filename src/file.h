/* $Id$ */

/** @file src/file.h %File access definitions. */

#ifndef FILE_H
#define FILE_H

enum {
	FILEINFO_MAX     = 676,
	FILEINFO_INVALID = 0xFFFF,

	FILE_MAX = 20,
	FILE_INVALID = 0xFF
};

/**
 * Static information about files and their location.
 */
typedef struct FileInfo {
	const char *filename;                                   /*!< Name of the file. */
	uint32 fileSize;                                        /*!< The size of this file. */
	void *buffer;                                           /*!< In case the file is read in the memory, this is the location of the data. */
	uint32 filePosition;                                    /*!< Where in the file we currently are (doesn't have to start at zero when in PAK file). */
	uint8  parentIndex;                                     /*!< In which FileInfo this file can be found. */
	uint8  variable_11;                                     /*!< ?? */
	union {
		struct {
			BITTYPE isLoaded:1;                     /*!< File is mapped in the memory. */
			BITTYPE inMemory:1;                     /*!< File is loaded in alloc'd memory. */
			BITTYPE variable_0004:1;                /*!< ?? */
			BITTYPE variable_0008:1;                /*!< ?? */
			BITTYPE inPAKFile:1;                    /*!< File can be in other PAK file. */
			BITTYPE variable_0020:1;                /*!< ?? */
			BITTYPE variable_0040:1;                /*!< ?? */
			BITTYPE variable_0080:1;                /*!< ?? */
		} s;
		uint8 all; } flags;                             /*!< General flags of the FileInfo. */
} FileInfo;

extern FileInfo g_table_fileInfo[];

extern bool File_Exists(const char *filename);
extern uint8 File_Open(const char *filename, uint8 mode);
extern void File_Close(uint8 index);
extern uint32 File_Read(uint8 index, void *buffer, uint32 length);
extern uint32 File_Write(uint8 index, void *buffer, uint32 length);
extern uint32 File_Seek(uint8 index, uint32 position, uint8 mode);
extern uint32 File_GetSize(uint8 index);
extern void File_Delete(const char *filename);
extern void File_Create(const char *filename);
extern uint32 File_ReadBlockFile(const char *filename, void *buffer, uint32 length);
extern csip32 File_ReadWholeFile(const char *filename, uint8 mallocFlags);
extern void *File_ReadWholeFile_Pure(const char *filename);
extern uint32 File_ReadFile(const char *filename, void *buf);
extern uint8 ChunkFile_Open(const char *filename);
extern void ChunkFile_Close(uint8 index);
extern uint32 ChunkFile_Seek(uint8 index, uint32 header);
extern uint32 ChunkFile_Read(uint8 index, uint32 header, void *buffer, uint32 buflen);

#endif /* FILE_H */
