/** @file saturn/common/backup.h Files in backup memory, compressed.
 *
 * Through the BIOS's backup library (SBL's sega_bup.h): the Saturn's own
 * 32 KB, or a backup cartridge. Each file holds its unpacked size (4 bytes,
 * high byte first) and the data packed with pack.h. Names are up to 11
 * characters. */

#ifndef SATURN_BACKUP_H
#define SATURN_BACKUP_H

#include <stdint.h>

enum {
	BACKUP_INTERNAL = 0,
	BACKUP_CARTRIDGE = 1,
	BACKUP_NAME_LENGTH = 11
};

extern int Backup_HasCartridge(void);

extern int32_t Backup_Free(int device);

extern void Backup_Select(int device);

extern int Backup_Read(const char *name, uint8_t **data, uint32_t *size);

extern int Backup_Write(const char *name, const char *comment, const uint8_t *data, uint32_t size);

extern void Backup_Delete(const char *name);

#endif /*!< SATURN_BACKUP_H */
