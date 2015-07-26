/** @file src/saveload/saveload.c General routines for load/save. */

#include <stdio.h>
#include "types.h"

#include "saveload.h"
#include "../house.h"
#include "../object.h"
#include "../team.h"
#include "../file.h"
#include "../os/error.h"


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
			default:            length += 0;
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

					if (!fread_le_uint16(&v, fp)) return false;

					value = v;
				} break;

				case SLDT_UINT32: {
					uint32 v;

					if (!fread_le_uint32(&v, fp)) return false;

					value = v;
				} break;


				case SLDT_INT8: {
					int8 v;

					if (fread(&v, sizeof(int8), 1, fp) != 1) return false;

					value = v;
				} break;

				case SLDT_INT16: {
					int16 v;

					if (!fread_le_int16(&v, fp)) return false;

					value = v;
				} break;

				case SLDT_INT32: {
					int32 v;

					if (!fread_le_int32(&v, fp)) return false;

					value = v;
				} break;

				case SLDT_INVALID:
				default:
					Error("Error in Save/Load structure descriptions");
					return false;
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


				case SLDT_HOUSEFLAGS: {
					HouseFlags *f = (HouseFlags *)ptr;
					f->used = (value & 0x01) ? true : false;
					f->human = (value & 0x02) ? true : false;
					f->doneFullScaleAttack = (value & 0x04) ? true : false;
					f->isAIActive = (value & 0x08) ? true : false;
					f->radarActivated = (value & 0x10) ? true : false;
					f->unused_0020 = 0;
				} break;

				case SLDT_OBJECTFLAGS: {
					ObjectFlags *f = (ObjectFlags *)ptr;
					f->s.used = (value & 0x01) ? true : false;
					f->s.allocated = (value & 0x02) ? true : false;
					f->s.isNotOnMap = (value & 0x04) ? true : false;
					f->s.isSmoking = (value & 0x08) ? true : false;
					f->s.fireTwiceFlip = (value & 0x10) ? true : false;
					f->s.animationFlip = (value & 0x20) ? true : false;
					f->s.bulletIsBig = (value & 0x40) ? true : false;
					f->s.isWobbling = (value & 0x80) ? true : false;
					f->s.inTransport = (value & 0x0100) ? true : false;
					f->s.byScenario = (value & 0x0200) ? true : false;
					f->s.degrades = (value & 0x0400) ? true : false;
					f->s.isHighlighted = (value & 0x0800) ? true : false;
					f->s.isDirty = (value & 0x1000) ? true : false;
					f->s.repairing = (value & 0x2000) ? true : false;
					f->s.onHold = (value & 0x4000) ? true : false;
					f->s.notused_4_8000 = 0;
					f->s.isUnit = (value & 0x010000) ? true : false;
					f->s.upgrading = (value & 0x020000) ? true : false;
					f->s.notused_6_0004 = 0;
					f->s.notused_6_0100 = 0;
				} break;

				case SLDT_TEAMFLAGS: {
					TeamFlags *f = (TeamFlags *)ptr;
					f->used = (value & 0x01) ? true : false;
					f->notused_0002 = 0;
				} break;


				case SLDT_SLD:
					if (!SaveLoad_Load(sld->sld, fp, ptr)) return false;
					break;

				case SLDT_CALLBACK:
					sld->callback(object, value, true);
					break;

				case SLDT_INVALID:
					Error("Error in Save/Load structure descriptions");
					return false;
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


				case SLDT_HOUSEFLAGS: {
					HouseFlags *f = (HouseFlags *)ptr;
					value = f->used | (f->human << 1) | (f->doneFullScaleAttack << 2) | (f->isAIActive << 3) | (f->radarActivated << 4);
				} break;

				case SLDT_OBJECTFLAGS: {
					ObjectFlags *f = (ObjectFlags *)ptr;
					value = f->s.used | (f->s.allocated << 1) | (f->s.isNotOnMap << 2) | (f->s.isSmoking << 3) | (f->s.fireTwiceFlip << 4) | (f->s.animationFlip << 5) | (f->s.bulletIsBig << 6) | (f->s.isWobbling << 7) | (f->s.inTransport << 8) | (f->s.byScenario << 9) | (f->s.degrades << 10) | (f->s.isHighlighted << 11) | (f->s.isDirty << 12) | (f->s.repairing << 13) | (f->s.onHold << 14) | (f->s.isUnit << 16) | (f->s.upgrading << 17);
				} break;

				case SLDT_TEAMFLAGS: {
					TeamFlags *f = (TeamFlags *)ptr;
					value = f->used;
				} break;


				case SLDT_SLD:
					if (!SaveLoad_Save(sld->sld, fp, ptr)) return false;
					break;

				case SLDT_CALLBACK:
					value = sld->callback(object, 0, false);
					break;

				case SLDT_INVALID:
					Error("Error in Save/Load structure descriptions");
					return false;
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

					if (!fwrite_le_uint16(v, fp)) return false;
				} break;

				case SLDT_UINT32: {
					uint32 v = (uint32)value;

					if (!fwrite_le_uint32(v, fp)) return false;
				} break;


				case SLDT_INT8: {
					int8 v = (int8)value;

					if (fwrite(&v, sizeof(int8), 1, fp) != 1) return false;
				} break;

				case SLDT_INT16: {
					int16 v = (int16)value;

					if (!fwrite_le_int16(v, fp)) return false;
				} break;

				case SLDT_INT32: {
					int32 v = (int32)value;

					if (!fwrite_le_int32(v, fp)) return false;
				} break;

				default:
				case SLDT_INVALID:
					Error("Error in Save/Load structure descriptions");
					return false;
			}
		}

		sld++;
	}

	return true;
}
