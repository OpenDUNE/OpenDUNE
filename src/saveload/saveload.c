/* $Id$ */

/** @file src/saveload/saveload.c General routines for load/save. */

#include <stdio.h>
#include "types.h"

#include "saveload.h"

/**
 * Get the length of the struct how it would be on disk.
 * @param sld The description of the struct.
 * @return The length of the struct on disk.
 */
uint32 SaveLoad_GetLength(SaveLoadDesc *sld)
{
	uint32 length = 0;

	while (sld->type_disk != SLDT_NULL) {
		switch (sld->type_disk) {
			case SLDT_NULL:   length += 0; break;
			case SLDT_UINT8:  length += sizeof(uint8) * sld->count;  break;
			case SLDT_UINT16: length += sizeof(uint16) * sld->count; break;
			case SLDT_UINT32: length += sizeof(uint32) * sld->count; break;
		}
		sld++;
	}

	return length;
}

/**
 * Load from a file into a struct.
 * @param sld The description of the struct.
 * @param fp The file to read from.
 * @param object The object instance to read to.
 * @return True if and only if the reading was successful.
 */
bool SaveLoad_Load(SaveLoadDesc *sld, FILE *fp, void *object)
{
	while (sld->type_disk != SLDT_NULL) {
		uint32 value = 0;
		uint16 i;

		for (i = 0; i < sld->count; i++) {
			switch (sld->type_disk) {
				case SLDT_NULL:
					value = 0;
					break;

				case SLDT_UINT8: {
					uint8 v;

					if (fread(&v, sizeof(uint8), 1, fp) != 1) return false;

					value = v;
				} break;

				case SLDT_UINT16: {
					uint16 v;

					if (fread(&v, sizeof(uint16), 1, fp) != 1) return false;

					value = v;
				} break;

				case SLDT_UINT32: {
					uint32 v;

					if (fread(&v, sizeof(uint32), 1, fp) != 1) return false;

					value = v;
				} break;
			}

			switch (sld->type_memory) {
				case SLDT_NULL:
					break;

				case SLDT_UINT8:
					*((uint8 *)(((uint8 *)object) + sld->offset) + i) = (uint8)value;
					break;

				case SLDT_UINT16:
					*((uint16 *)(((uint8 *)object) + sld->offset) + i) = (uint16)value;
					break;

				case SLDT_UINT32:
					*((uint32 *)(((uint8 *)object) + sld->offset) + i) = (uint32)value;
					break;
			}
		}

		sld++;
	}

	return true;
}

/**
 * Save from a struct to a file.
 * @param sld The description of the struct.
 * @param fp The file to write to.
 * @param object The object instance to write from.
 * @return True if and only if the writing was successful.
 */
bool SaveLoad_Save(SaveLoadDesc *sld, FILE *fp, void *object)
{
	while (sld->type_disk != SLDT_NULL) {
		uint32 value = 0;
		uint16 i;

		for (i = 0; i < sld->count; i++) {
			switch (sld->type_memory) {
				case SLDT_NULL:
					value = 0;
					break;

				case SLDT_UINT8:
					value = *((uint8 *)(((uint8 *)object) + sld->offset) + i);
					break;

				case SLDT_UINT16:
					value = *((uint16 *)(((uint8 *)object) + sld->offset) + i);
					break;

				case SLDT_UINT32:
					value = *((uint32 *)(((uint8 *)object) + sld->offset) + i);
					break;
			}

			switch (sld->type_disk) {
				case SLDT_NULL:
					break;

				case SLDT_UINT8: {
					uint8 v = (uint8)value;

					if (fwrite(&v, sizeof(uint8), 1, fp) != 1) return false;
				} break;

				case SLDT_UINT16: {
					uint16 v = (uint16)value;

					if (fwrite(&v, sizeof(uint16), 1, fp) != 1) return false;
				} break;

				case SLDT_UINT32: {
					uint32 v = (uint32)value;

					if (fwrite(&v, sizeof(uint32), 1, fp) != 1) return false;
				} break;
			}
		}

		sld++;
	}

	return true;
}
