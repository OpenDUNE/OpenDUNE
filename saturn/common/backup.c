/** @file saturn/common/backup.c Files in backup memory, compressed.
 *
 * The backup library lives in the BIOS: BUP_Init() copies it into a 16 KB
 * buffer and takes an 8 KB work area. Both are only allocated while a file
 * is read or written. The reset button is off while the library runs, as
 * SBL's sample does, so a reset can't leave a file half written. */

#include <stdlib.h>
#include <string.h>
#include "backup.h"
#include "pack.h"
#include "saturn_hw.h"
#include "smpc.h"

/* From SBL's SEGA_BUP.H: the BIOS keeps the library's address and, after
 * BUP_Init, the address of its function table. */
#define BUP_LIB_ADDRESS     (*(volatile uint32_t *)(0x6000350 + 8))
#define BUP_VECTOR_ADDRESS  (*(volatile uint32_t *)(0x6000350 + 4))
#define BUP_FUNCTION(n)     (*(uint32_t *)(BUP_VECTOR_ADDRESS + 4 * (n)))

typedef struct BupConfig {
	uint16_t unit_id; /*!< 0: not connected */
	uint16_t partition;
} BupConfig;

typedef struct BupStat {
	uint32_t totalsize, totalblock, blocksize, freesize, freeblock, datanum;
} BupStat;

typedef struct BupDir {
	uint8_t filename[12];
	uint8_t comment[11];
	uint8_t language;
	uint32_t date;
	uint32_t datasize;
	uint16_t blocksize;
} BupDir;

typedef struct BupDate {
	uint8_t year; /*!< - 1980 */
	uint8_t month, day, time, min, week;
} BupDate;

#define BUP_Init    ((void (*)(volatile uint32_t *lib, uint32_t *work, BupConfig config[3]))BUP_LIB_ADDRESS)
#define BUP_Format  ((int32_t (*)(uint32_t device))BUP_FUNCTION(2))
#define BUP_Stat    ((int32_t (*)(uint32_t device, uint32_t size, BupStat *stat))BUP_FUNCTION(3))
#define BUP_Write   ((int32_t (*)(uint32_t device, BupDir *dir, volatile uint8_t *data, uint8_t keep))BUP_FUNCTION(4))
#define BUP_Read    ((int32_t (*)(uint32_t device, uint8_t *name, volatile uint8_t *data))BUP_FUNCTION(5))
#define BUP_Delete  ((int32_t (*)(uint32_t device, uint8_t *name))BUP_FUNCTION(6))
#define BUP_Dir     ((int32_t (*)(uint32_t device, uint8_t *name, uint16_t count, BupDir *dir))BUP_FUNCTION(7))
#define BUP_SetDate ((uint32_t (*)(BupDate *date))BUP_FUNCTION(10))

enum {
	LIB_SIZE = 16 * 1024,
	WORK_SIZE = 8 * 1024,
	BUP_ENGLISH = 1,
	BUP_UNFORMAT = 2,
	DIR_MAX = 16
};

static uint32_t *s_lib, *s_work;
static BupConfig s_config[3];
static int s_device = BACKUP_INTERNAL;

/**
 * Copy the backup library out of the BIOS and initialise it, with the reset
 * button off while it runs.
 *
 * @return 0 if there is no memory for the library.
 */
static int Backup_Begin(void)
{
	s_lib = malloc(LIB_SIZE);
	s_work = malloc(WORK_SIZE);
	if (s_lib == NULL || s_work == NULL) {
		free(s_lib);
		free(s_work);
		return 0;
	}
	Smpc_Command(SMPC_CMD_RESDISA);
	BUP_Init(s_lib, s_work, s_config);
	return 1;
}

/**
 * Free the backup library and turn the reset button back on.
 */
static void Backup_End(void)
{
	Smpc_Command(SMPC_CMD_RESENAB);
	free(s_lib);
	free(s_work);
	s_lib = s_work = NULL;
}

/**
 * Whether the selected device is there and formatted (formatting it if it
 * isn't, as the BIOS would).
 *
 * @return 1 if the device can be used.
 */
static int Backup_Ready(void)
{
	BupStat stat;
	if (s_config[s_device].unit_id == 0) return 0;
	if (BUP_Stat((uint32_t)s_device, 0, &stat) == BUP_UNFORMAT && BUP_Format((uint32_t)s_device) != 0) return 0;
	return 1;
}

/**
 * Find a file by its exact name (BUP_Dir matches the start of names).
 *
 * @param name The name.
 * @param found Filled with the file's directory entry.
 * @return 1 if the file is there.
 */
static int Backup_Find(const char *name, BupDir *found)
{
	BupDir dir[DIR_MAX];
	int32_t count = BUP_Dir((uint32_t)s_device, (uint8_t *)name, DIR_MAX, dir);
	int32_t i;

	if (count > DIR_MAX) count = DIR_MAX;
	for (i = 0; i < count; i++) {
		if (strncmp((const char *)dir[i].filename, name, BACKUP_NAME_LENGTH) == 0) {
			*found = dir[i];
			return 1;
		}
	}
	return 0;
}

/**
 * Now, as a backup library date stamp.
 *
 * @return The date stamp.
 */
static uint32_t Backup_Now(void)
{
	uint8_t clock[7];
	BupDate date;
	int year;

	Smpc_ReadClock(clock);
	year = (clock[0] >> 4) * 1000 + (clock[0] & 0xF) * 100 + (clock[1] >> 4) * 10 + (clock[1] & 0xF);
	date.year = (uint8_t)(year - 1980);
	date.month = clock[2] & 0xF;
	date.week = clock[2] >> 4;
	date.day = (uint8_t)((clock[3] >> 4) * 10 + (clock[3] & 0xF));
	date.time = (uint8_t)((clock[4] >> 4) * 10 + (clock[4] & 0xF));
	date.min = (uint8_t)((clock[5] >> 4) * 10 + (clock[5] & 0xF));
	return BUP_SetDate(&date);
}

/**
 * Whether a backup cartridge is connected.
 *
 * @return 1 if there is one.
 */
int Backup_HasCartridge(void)
{
	int present;
	if (!Backup_Begin()) return 0;
	present = s_config[BACKUP_CARTRIDGE].unit_id != 0;
	Backup_End();
	return present;
}

/**
 * Free bytes on a device, or -1 if it isn't there.
 *
 * @param device BACKUP_INTERNAL or BACKUP_CARTRIDGE.
 * @return The free bytes.
 */
static int32_t Backup_DeviceFree(int device)
{
	BupStat stat;
	int saved = s_device;
	int32_t free_bytes = -1;

	s_device = device;
	if (Backup_Ready() && BUP_Stat((uint32_t)device, 0, &stat) == 0) free_bytes = (int32_t)stat.freesize;
	s_device = saved;
	return free_bytes;
}

/**
 * Free bytes on a device, or -1 if it isn't there.
 *
 * @param device BACKUP_INTERNAL or BACKUP_CARTRIDGE.
 * @return The free bytes.
 */
int32_t Backup_Free(int device)
{
	int32_t free_bytes;
	if (!Backup_Begin()) return -1;
	free_bytes = Backup_DeviceFree(device);
	Backup_End();
	return free_bytes;
}

/**
 * Use this device from now on (BACKUP_INTERNAL by default).
 *
 * @param device BACKUP_INTERNAL or BACKUP_CARTRIDGE.
 */
void Backup_Select(int device)
{
	s_device = device;
}

/**
 * Read a file into memory from malloc(); returns 0 if there is none (or it
 * can't be read).
 *
 * @param name The file's name (up to 11 characters).
 * @param data Filled with the data, to free().
 * @param size Filled with its size.
 * @return 1 if the file was read.
 */
int Backup_Read(const char *name, uint8_t **data, uint32_t *size)
{
	BupDir dir;
	uint8_t *packed = NULL, *unpacked = NULL;
	uint32_t length = 0;
	int ok = 0;

	if (!Backup_Begin()) return 0;
	if (Backup_Ready() && Backup_Find(name, &dir) && dir.datasize >= 4) {
		packed = malloc(dir.datasize);
		if (packed != NULL && BUP_Read((uint32_t)s_device, (uint8_t *)name, packed) == 0) ok = 1;
	}
	Backup_End();

	if (ok) {
		length = ((uint32_t)packed[0] << 24) | ((uint32_t)packed[1] << 16) | ((uint32_t)packed[2] << 8) | packed[3];
		unpacked = malloc(length != 0 ? length : 1);
		ok = unpacked != NULL && Pack_Decompress(packed + 4, dir.datasize - 4, unpacked, length) == length;
	}
	free(packed);
	if (!ok) {
		free(unpacked);
		return 0;
	}
	*data = unpacked;
	*size = length;
	return 1;
}

/**
 * Write (or replace) a file; comment is shown by the BIOS's memory manager
 * (up to 10 characters). Returns 0 if it doesn't fit.
 *
 * @param name The file's name (up to 11 characters).
 * @param comment The comment.
 * @param data The data.
 * @param size Its size in bytes.
 * @return 1 if the file was written.
 */
int Backup_Write(const char *name, const char *comment, const uint8_t *data, uint32_t size)
{
	uint32_t capacity = size + size / 128 + 16;
	uint8_t *packed = malloc(4 + capacity);
	uint32_t length;
	BupDir dir;
	int ok = 0;

	if (packed == NULL) return 0;
	length = Pack_Compress(data, size, packed + 4, capacity);
	if (length == 0 && size != 0) {
		free(packed);
		return 0;
	}
	packed[0] = (uint8_t)(size >> 24);
	packed[1] = (uint8_t)(size >> 16);
	packed[2] = (uint8_t)(size >> 8);
	packed[3] = (uint8_t)size;

	if (Backup_Begin()) {
		if (Backup_Ready()) {
			memset(&dir, 0, sizeof(dir));
			strncpy((char *)dir.filename, name, BACKUP_NAME_LENGTH);
			strncpy((char *)dir.comment, comment, sizeof(dir.comment) - 1);
			dir.language = BUP_ENGLISH;
			dir.date = Backup_Now();
			dir.datasize = 4 + length;
			ok = BUP_Write((uint32_t)s_device, &dir, packed, 0) == 0;
		}
		Backup_End();
	}
	free(packed);
	return ok;
}

/**
 * Delete a file, if it is there.
 *
 * @param name The file's name (up to 11 characters).
 */
void Backup_Delete(const char *name)
{
	if (!Backup_Begin()) return;
	if (Backup_Ready()) BUP_Delete((uint32_t)s_device, (uint8_t *)name);
	Backup_End();
}
