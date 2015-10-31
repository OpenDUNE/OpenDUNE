/** @file src/file.c %File access routines. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include "multichar.h"
#include "types.h"
#include "os/endian.h"
#include "os/error.h"
#include "os/file.h"
#include "os/math.h"
#include "os/strings.h"
#include "os/readdir.h"

#include "file.h"

#include "config.h"
#include "inifile.h"

/* Set DUNE_DATA_DIR at compile time.  e.g. */
/* #define DUNE_DATA_DIR "/usr/local/share/opendune" */

#ifndef DUNE_DATA_DIR
#define DUNE_DATA_DIR "."
#endif

#define DUNE2_DATA_PREFIX       "data/"

static char g_dune_data_dir[1024] = DUNE_DATA_DIR;
static char g_personal_data_dir[1024] = ".";

static FileInfo *FileInfo_Find_ByName(const char *filename, FileInfo **pakInfo);


/**
 * Extensions to stdio.h
 */

/**
 * Read a uint32 value from a little endian file.
 */
bool fread_le_uint32(uint32 *value, FILE *stream)
{
	uint8 buffer[4];
	if (value == NULL) return false;
	if (fread(buffer, 1, 4, stream) != 4) return false;
	*value = READ_LE_UINT32(buffer);
	return true;
}

/**
 * Read a uint16 value from a little endian file.
 */
bool fread_le_uint16(uint16 *value, FILE *stream)
{
	uint8 buffer[2];
	if (value == NULL) return false;
	if (fread(buffer, 1, 2, stream) != 2) return false;
	*value = READ_LE_UINT16(buffer);
	return true;
}

/**
 * Write a uint32 value from a little endian file.
 */
bool fwrite_le_uint32(uint32 value, FILE *stream)
{
	if (putc(value & 0xff, stream) == EOF) return false;
	if (putc((value >> 8) & 0xff, stream) == EOF) return false;
	if (putc((value >> 16) & 0xff, stream) == EOF) return false;
	if (putc((value >> 24) & 0xff, stream) == EOF) return false;
	return true;
}

/**
 * Write a uint16 value from a little endian file.
 */
bool fwrite_le_uint16(uint16 value, FILE *stream)
{
	if (putc(value & 0xff, stream) == EOF) return false;
	if (putc((value >> 8) & 0xff, stream) == EOF) return false;
	return true;
}

enum ConvertCase {
	NO_CONVERT = 0,
	CONVERT_TO_UPPERCASE,
	CONVERT_TO_LOWERCASE
};

static void
File_MakeCompleteFilename(char *buf, size_t len, enum SearchDirectory dir, const char *filename, enum ConvertCase convert)
{
	int j;
	int i = 0;

	if (dir == SEARCHDIR_GLOBAL_DATA_DIR || dir == SEARCHDIR_CAMPAIGN_DIR) {
		/* Note: campaign specific data directory not implemented. */
		i = snprintf(buf, len, "%s/%s%s", g_dune_data_dir, DUNE2_DATA_PREFIX, filename);
	} else if (dir == SEARCHDIR_PERSONAL_DATA_DIR) {
		i = snprintf(buf, len, "%s/%s", g_personal_data_dir, filename);
	}
	buf[len - 1] = '\0';

	if (i > (int)len) {
		Warning("output truncated : %s (%s)\n", buf, filename);
		i = (int)len;
	}
	if (convert != NO_CONVERT) {
		for (j = i - 1; j >= 0; j--) {
			if (buf[j] == '/' || buf[j] == '\\')
				break;
			if (convert == CONVERT_TO_LOWERCASE) {
				if ('A' <= buf[j] && buf[j] <= 'Z')
					buf[j] = buf[j] + 'a' - 'A';
			} else if (convert == CONVERT_TO_UPPERCASE) {
				if ('a' <= buf[j] && buf[j] <= 'z')
					buf[j] = buf[j] - 'a' + 'A';
			}
		}
	}
}

/**
 * Open a file from the data/ directory
 */
FILE *fopendatadir(enum SearchDirectory dir, const char *name, const char *mode)
{
	char filenameComplete[1024];
	FileInfo *fileInfo;
	const char *filename;

	if(dir != SEARCHDIR_PERSONAL_DATA_DIR) {
		fileInfo = FileInfo_Find_ByName(name, NULL);
		if (fileInfo != NULL) {
			/* Take the filename from the FileInfo structure, as it was read
			 * from the data/ directory */
			filename = fileInfo->filename;
		} else {
			filename = name;
		}
		File_MakeCompleteFilename(filenameComplete, sizeof(filenameComplete), dir, filename, NO_CONVERT);
		return fopen(filenameComplete, mode);
	} else {
		FILE *f;
		/* try both in lower and upper case */
		File_MakeCompleteFilename(filenameComplete, sizeof(filenameComplete), dir, name, CONVERT_TO_UPPERCASE);
		f = fopen(filenameComplete, mode);
		if (f != NULL) return f;
		File_MakeCompleteFilename(filenameComplete, sizeof(filenameComplete), dir, name, CONVERT_TO_LOWERCASE);
		return fopen(filenameComplete, mode);
	}
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
 * and processed content of PAK files.
 */
typedef struct FileInfoLinkedElem {
	struct FileInfoLinkedElem *next;
	FileInfo info;
	char filenamebuffer[1];
} FileInfoLinkedElem;

static FileInfoLinkedElem *s_files_in_root = NULL;

typedef struct PakFileInfoLinkedElem {
	struct PakFileInfoLinkedElem *next;
	FileInfo *pak;
	FileInfo info;
	char filenamebuffer[1];
} PakFileInfoLinkedElem;

static PakFileInfoLinkedElem *s_files_in_pak = NULL;

uint16 g_fileOperation = 0; /*!< If non-zero, input (keyboard + mouse), video is not updated, .. Basically, any operation that might trigger a free() in the signal handler, which can collide with malloc() of file operations. */

/**
 * Find the FileInfo for the given filename.
 *
 * @param filename The filename to get the FileInfo for.
 * @return The FileInfo pointer or NULL if not found.
 */
static FileInfo *FileInfo_Find_ByName(const char *filename, FileInfo **pakInfo)
{
	{
		FileInfoLinkedElem *e;
		for (e = s_files_in_root; e != NULL; e = e->next) {
			if (!strcasecmp(e->info.filename, filename)) {
				if (pakInfo) *pakInfo = NULL;
				return &e->info;
			}
		}
	}
	{
		PakFileInfoLinkedElem *e;
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
static uint8 _File_Open(enum SearchDirectory dir, const char *filename, uint8 mode)
{
	uint8 fileIndex;
	FileInfo *fileInfo;
	FileInfo *pakInfo = NULL;

	if ((mode & FILE_MODE_READ_WRITE) == 0) return FILE_INVALID;

	/* Find a free spot in our limited array */
	for (fileIndex = 0; fileIndex < FILE_MAX; fileIndex++) {
		if (s_file[fileIndex].fp == NULL) break;
	}
	if (fileIndex == FILE_MAX) return FILE_INVALID;

	/* Check if we can find the file outside any PAK file */
	s_file[fileIndex].fp = fopendatadir(dir, filename, (mode == FILE_MODE_WRITE) ? "wb" : ((mode == FILE_MODE_READ_WRITE) ? "wb+" : "rb"));
	if (s_file[fileIndex].fp != NULL) {
		s_file[fileIndex].start    = 0;
		s_file[fileIndex].position = 0;
		s_file[fileIndex].size     = 0;

		/* We can only check the size of the file if we are reading (or appending) */
		if ((mode & FILE_MODE_READ) != 0) {
			fseek(s_file[fileIndex].fp, 0, SEEK_END);
			s_file[fileIndex].size = ftell(s_file[fileIndex].fp);
			fseek(s_file[fileIndex].fp, 0, SEEK_SET);
		}

		return fileIndex;
	}

	/* We never allow writing of files inside PAKs */
	if ((mode & FILE_MODE_WRITE) != 0) return FILE_INVALID;
	/* Personnal files are not inside PAKs */
	if (dir == SEARCHDIR_PERSONAL_DATA_DIR) return FILE_INVALID;

	fileInfo = FileInfo_Find_ByName(filename, &pakInfo);

	/* Check if the file could be inside any of our PAK files */
	if (fileInfo == NULL) return FILE_INVALID;

	/* If the file is not inside another PAK, then the file doesn't exist (as it wasn't in the directory either) */
	if (!fileInfo->flags.inPAKFile) return FILE_INVALID;

	if (pakInfo == NULL) return FILE_INVALID;
	s_file[fileIndex].fp = fopendatadir(dir, pakInfo->filename, "rb");
	if (s_file[fileIndex].fp == NULL) return FILE_INVALID;

	s_file[fileIndex].start    = fileInfo->filePosition;
	s_file[fileIndex].position = 0;
	s_file[fileIndex].size     = fileInfo->fileSize;

	/* Go to the start of the file now */
	fseek(s_file[fileIndex].fp, s_file[fileIndex].start, SEEK_SET);
	return fileIndex;
}

/**
 * Memorize a file from the data/ directory.
 *
 * @param filename The name of the file.
 * @param filesize The size of the file.
 * @return A pointer to the newly created FileInfo.
 */
static FileInfo *_File_Init_AddFileInRootDir(const char *filename, uint32 filesize)
{
	FileInfoLinkedElem *new;
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
 * Memorize a file inside a PAK file.
 *
 * @param filename the filename as indicated in PAK header.
 * @param filesize the size as calculated from PAK header.
 * @param position the position of the file from the start of the PAK file.
 * @param pakInfo FileInfo pointer for the PAK file.
 * @return A pointer to the newly created FileInfo.
 */
static FileInfo *_File_Init_AddFileInPak(const char *filename, uint32 filesize, uint32 position, FileInfo *pakInfo)
{
	PakFileInfoLinkedElem *new;
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
 * Process (parse) a PAK file.
 *
 * @param pakpath real path to open PAK file.
 * @param paksize size (bytes) of the PAK file.
 * @param pakInfo pointer to the FileInfo for PAK file.
 * @return True if PAK processing was ok.
 */
static bool _File_Init_ProcessPak(const char *pakpath, uint32 paksize, FileInfo *pakInfo)
{
	FILE *f;
	uint32 position;
	uint32 nextposition;
	uint32 size;
	char filename[256];
	unsigned int i;

	f = fopen(pakpath, "rb");
	if (f == NULL) {
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
			if (filename[i] == '\0') break;
		}
		if (i == sizeof(filename)) {
			fclose(f);
			return false;
		}
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
 * Callback for processing files found in data/ directory.
 *
 * @param name The name of the file.
 * @param path The relative path of the file.
 * @param size The file size (bytes).
 * @return True if the processing went OK.
 */
static bool _File_Init_Callback(const char *name, const char *path, uint32 size)
{
	char *ext;
	FileInfo *fileInfo;

	fileInfo = _File_Init_AddFileInRootDir(name, size);
	if (fileInfo == NULL) return false;
	ext = strrchr(path, '.');
	if (ext != NULL) {
		if (strcasecmp(ext, ".pak") == 0) {
			if (!_File_Init_ProcessPak(path, size, fileInfo))
				return false;
		}
	}
	return true;
}

static bool File_MakeDirectory(char *dir)
{
#ifdef _WIN32
	DWORD attributes;
#else /* _WIN32 */
	struct stat st;
	char *s = dir;
#endif /* _WIN32 */
	bool success = true;

#ifdef _WIN32
	attributes = GetFileAttributes(dir);
	if (attributes != INVALID_FILE_ATTRIBUTES) {
		return ((attributes & FILE_ATTRIBUTE_DIRECTORY) != 0);
	}
#else /* _WIN32 */
	if (stat(dir, &st) == 0) {
		return S_ISDIR(st.st_mode);
	}
#endif /* _WIN32 */

#ifdef _WIN32
	/* create intermediate folders if they do not exist */
	success = (SHCreateDirectoryEx(NULL, dir, NULL) == ERROR_SUCCESS);
#else /* _WIN32 */
	while (success) {
		s = strchr(s + 1, '/');

		if (s != NULL)
			*s = '\0';

		if (stat(dir, &st) < 0) {
			success = (mkdir(dir, S_IRWXU) == 0);
		} else {
			success = S_ISDIR(st.st_mode);
		}

		if (s == NULL)
			break;

		*s = '/';
	}
#endif /* _WIN32 */

	return success;
}

/**
 * Initialize the personal and global data directories, and the file tables.
 *
 * @return True if and only if everything was ok.
 */
bool File_Init(void)
{
	char buf[1024];
	char *homedir = NULL;

	if (IniFile_GetString("savedir", NULL, buf, sizeof(buf)) != NULL) {
		/* savedir is defined in opendune.ini */
		strncpy(g_personal_data_dir, buf, sizeof(g_personal_data_dir));
	} else {
#ifdef _WIN32
		/* %APPDATA%/OpenDUNE (win32) */
		if (SHGetFolderPath( NULL, CSIDL_APPDATA/*CSIDL_COMMON_APPDATA*/, NULL, 0, buf ) != S_OK) {
			Warning("Cannot find AppData directory.\n");
			snprintf(g_personal_data_dir, sizeof(g_personal_data_dir), ".");
		} else {
			PathAppend(buf, TEXT("OpenDUNE"));
			strncpy(g_personal_data_dir, buf, sizeof(g_personal_data_dir));
		}
#else /* _WIN32 */
		/* ~/.config/opendune (Linux)  ~/Library/Application Support/OpenDUNE (Mac OS X) */
		homedir = getenv("HOME");
		if (homedir == NULL) {
			snprintf(g_personal_data_dir, sizeof(g_personal_data_dir), ".");
		} else {
#if defined(__APPLE__)
			snprintf(g_personal_data_dir, sizeof(g_personal_data_dir), "%s/Library/Application Support/OpenDUNE", homedir);
#else /* __APPLE__ */
			snprintf(g_personal_data_dir, sizeof(g_personal_data_dir), "%s/.config/opendune", homedir);
#endif /* __APPLE__ */
		}
#endif /* _WIN32 */
	}

	if (!File_MakeDirectory(g_personal_data_dir)) {
		Error("Cannot open personal data directory %s. Do you have sufficient permissions?\n", g_personal_data_dir);
		return false;
	}

	if (IniFile_GetString("datadir", NULL, buf, sizeof(buf)) != NULL) {
		/* datadir is defined in opendune.ini */
		strncpy(g_dune_data_dir, buf, sizeof(g_dune_data_dir));
	}
	File_MakeCompleteFilename(buf, sizeof(buf), SEARCHDIR_GLOBAL_DATA_DIR, "", NO_CONVERT);

	if (!ReadDir_ProcessAllFiles(buf, _File_Init_Callback)) {
		Error("Cannot initialise files. Does %s directory exist ?\n", buf);
		return false;
	}

	return true;
}

/**
 * Free all ressources loaded in memory.
 */
void File_Uninit(void)
{
	while (s_files_in_root != NULL) {
		FileInfoLinkedElem *e = s_files_in_root;
		s_files_in_root = e->next;
		free(e);
	}

	while (s_files_in_pak != NULL) {
		PakFileInfoLinkedElem *e = s_files_in_pak;
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
bool File_Exists_Ex(enum SearchDirectory dir, const char *filename)
{
	uint8 index;

	g_fileOperation++;

	index = _File_Open(dir, filename, FILE_MODE_READ);
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
uint8 File_Open_Ex(enum SearchDirectory dir, const char *filename, uint8 mode)
{
	uint8 res;

	g_fileOperation++;
	res = _File_Open(dir, filename, mode);
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
 * Read a 16bit unsigned from the file (written on disk in Little endian)
 *
 * @param index The index given by File_Open() of the file.
 * @return The integer read.
 */
uint16 File_Read_LE16(uint8 index)
{
	uint8 buffer[2];
	File_Read(index, buffer, sizeof(buffer));
	return READ_LE_UINT16(buffer);
}

/**
 * Read a 32bit unsigned from the file (written on disk in Little endian)
 *
 * @param index The index given by File_Open() of the file.
 * @return The integer read.
 */
uint32 File_Read_LE32(uint8 index)
{
	uint8 buffer[4];
	File_Read(index, buffer, sizeof(buffer));
	return READ_LE_UINT32(buffer);
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
 * Write a 16bit unsigned to the file (written on disk in Little endian)
 *
 * @param index The index given by File_Open() of the file.
 * @param value The 16bit unsigned integer
 * @return true if the operation succeeded
 */
bool File_Write_LE16(uint8 index, uint16 value)
{
	uint8 buffer[2];
	WRITE_LE_UINT16(buffer, value);
	return (File_Write(index, buffer, 2) == 2);
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
void File_Delete_Personal(const char *filename)
{
	char filenameComplete[1024];

	File_MakeCompleteFilename(filenameComplete, sizeof(filenameComplete), SEARCHDIR_PERSONAL_DATA_DIR, filename, CONVERT_TO_LOWERCASE);

	g_fileOperation++;
	if (unlink(filenameComplete) < 0) {
		/* try with the upper case file name */
		File_MakeCompleteFilename(filenameComplete, sizeof(filenameComplete), SEARCHDIR_PERSONAL_DATA_DIR, filename, CONVERT_TO_UPPERCASE);
		unlink(filenameComplete);
	}
	g_fileOperation--;
}

/**
 * Create a file on the disk.
 *
 * @param filename The filename to create.
 */
void File_Create_Personal(const char *filename)
{
	uint8 index;

	g_fileOperation++;

	index = _File_Open(SEARCHDIR_PERSONAL_DATA_DIR, filename, FILE_MODE_WRITE);
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
uint32 File_ReadBlockFile_Ex(enum SearchDirectory dir, const char *filename, void *buffer, uint32 length)
{
	uint8 index;

	index = File_Open_Ex(dir, filename, FILE_MODE_READ);
	length = File_Read(index, buffer, length);
	File_Close(index);
	return length;
}

/**
 * Reads the whole file in the memory.
 *
 * @param filename The name of the file to open.
 * @param mallocFlags The type of memory to allocate.
 * @return The pointer to allocated memory where the file has been read.
 */
void *File_ReadWholeFile(const char *filename)
{
	uint8 index;
	uint32 length;
	void *buffer;

	index = File_Open(filename, FILE_MODE_READ);
	length = File_GetSize(index);

	buffer = malloc(length + 1);
	File_Read(index, buffer, length);

	/* In case of text-files it can be very important to have a \0 at the end */
	((char *)buffer)[length] = '\0';

	File_Close(index);

	return buffer;
}

/**
 * Reads the whole file in the memory. The file should contain little endian
 * 16bits unsigned integers. It is converted to host byte ordering if needed.
 *
 * @param filename The name of the file to open.
 * @param mallocFlags The type of memory to allocate.
 * @return The pointer to allocated memory where the file has been read.
 */
uint16 *File_ReadWholeFileLE16(const char *filename)
{
	uint8 index;
	uint32 count;
	uint16 *buffer;
#if __BYTE_ORDER == __BIG_ENDIAN
	uint32 i;
#endif

	index = File_Open(filename, FILE_MODE_READ);
	count = File_GetSize(index) / sizeof(uint16);

	buffer = malloc(count * sizeof(uint16));
	if (File_Read(index, buffer, count * sizeof(uint16)) != count * sizeof(uint16)) {
		free(buffer);
		return NULL;
	}

	File_Close(index);

#if __BYTE_ORDER == __BIG_ENDIAN
	for(i = 0; i < count; i++) {
		buffer[i] = LETOH16(buffer[i]);
	}
#endif

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

	index = File_Open(filename, FILE_MODE_READ);
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
uint8 ChunkFile_Open_Ex(enum SearchDirectory dir, const char *filename)
{
	uint8 index;
	uint32 header;

	index = File_Open_Ex(dir, filename, FILE_MODE_READ);

	File_Read(index, &header, 4);

	if (header != HTOBE32(CC_FORM)) {
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
