/** @file src/saveload/saveload.c General routines for load/save. */

#include <stdio.h>
#include "types.h"

#include "saveload.h"


/**
 * Get the length of the struct how it would be on disk.
 * @param sld The description of the struct.
 * @return The length of the struct on disk.
 */
uint32 SaveLoad_GetLength(const SaveLoadDesc *sld)
{
	uint32 length = 0;

	while (sld->type_disk != SLDT_NULL) {
		switch (sld->type_disk) {
			case SLDT_NULL:     length += 0; break;
			case SLDT_CALLBACK: length += 0; break;
			case SLDT_UINT8:    length += sizeof(uint8)  * sld->count;  break;
			case SLDT_UINT16:   length += sizeof(uint16) * sld->count;  break;
			case SLDT_UINT32:   length += sizeof(uint32) * sld->count;  break;
			case SLDT_INT8:     length += sizeof(int8)   * sld->count;  break;
			case SLDT_INT16:    length += sizeof(int16)  * sld->count;  break;
			case SLDT_INT32:    length += sizeof(int32)  * sld->count;  break;
			case SLDT_SLD:      length += SaveLoad_GetLength(sld->sld) * sld->count; break;
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
bool SaveLoad_Load(const SaveLoadDesc *sld, FILE *fp, void *object)
{
	while (sld->type_disk != SLDT_NULL) {
		uint32 value = 0;
		uint16 i;

		for (i = 0; i < sld->count; i++) {
			void *ptr = (sld->address == NULL ? ((uint8 *)object) + sld->offset : (uint8 *)sld->address) + i * sld->size;

			switch (sld->type_disk) {
				case SLDT_CALLBACK:
				case SLDT_SLD:
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


				case SLDT_INT8: {
					int8 v;

					if (fread(&v, sizeof(int8), 1, fp) != 1) return false;

					value = v;
				} break;

				case SLDT_INT16: {
					int16 v;

					if (fread(&v, sizeof(int16), 1, fp) != 1) return false;

					value = v;
				} break;

				case SLDT_INT32: {
					int32 v;

					if (fread(&v, sizeof(int32), 1, fp) != 1) return false;

					value = v;
				} break;
			}

			switch (sld->type_memory) {
				case SLDT_NULL:
					break;

				case SLDT_UINT8:
					*(uint8 *)ptr = (uint8)value;
					break;

				case SLDT_UINT16:
					*(uint16 *)ptr = (uint16)value;
					break;

				case SLDT_UINT32:
					*(uint32 *)ptr = (uint32)value;
					break;


				case SLDT_INT8:
					*(int8 *)ptr = (uint8)value;
					break;

				case SLDT_INT16:
					*(int16 *)ptr = (uint16)value;
					break;

				case SLDT_INT32:
					*(int32 *)ptr = (uint32)value;
					break;


				case SLDT_SLD:
					if (!SaveLoad_Load(sld->sld, fp, ptr)) return false;
					break;

				case SLDT_CALLBACK:
					sld->callback(object, value, true);
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
bool SaveLoad_Save(const SaveLoadDesc *sld, FILE *fp, void *object)
{
	while (sld->type_disk != SLDT_NULL) {
		uint32 value = 0;
		uint16 i;

		for (i = 0; i < sld->count; i++) {
			void *ptr = (sld->address == NULL ? ((uint8 *)object) + sld->offset : (uint8 *)sld->address) + i * sld->size;

			switch (sld->type_memory) {
				case SLDT_NULL:
					value = 0;
					break;

				case SLDT_UINT8:
					value = *(uint8 *)ptr;
					break;

				case SLDT_UINT16:
					value = *(uint16 *)ptr;
					break;

				case SLDT_UINT32:
					value = *(uint32 *)ptr;
					break;


				case SLDT_INT8:
					value = *(int8 *)ptr;
					break;

				case SLDT_INT16:
					value = *(int16 *)ptr;
					break;

				case SLDT_INT32:
					value = *(int32 *)ptr;
					break;


				case SLDT_SLD:
					if (!SaveLoad_Save(sld->sld, fp, ptr)) return false;
					break;

				case SLDT_CALLBACK:
					value = sld->callback(object, 0, false);
					break;
			}

			switch (sld->type_disk) {
				case SLDT_CALLBACK:
				case SLDT_SLD:
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


				case SLDT_INT8: {
					int8 v = (int8)value;

					if (fwrite(&v, sizeof(int8), 1, fp) != 1) return false;
				} break;

				case SLDT_INT16: {
					int16 v = (int16)value;

					if (fwrite(&v, sizeof(int16), 1, fp) != 1) return false;
				} break;

				case SLDT_INT32: {
					int32 v = (int32)value;

					if (fwrite(&v, sizeof(int32), 1, fp) != 1) return false;
				} break;
			}
		}

		sld++;
	}

	return true;
}
