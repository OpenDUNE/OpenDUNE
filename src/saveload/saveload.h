/* $Id$ */

/** @file src/house.h Definitions for saveload routines. */

#ifndef SAVELOAD_SAVELOAD_H
#define SAVELOAD_SAVELOAD_H

/**
 * Types of storage we support / understand.
 */
typedef enum SaveLoadType {
	SLDT_UINT8,                                             /*!< 8bit unsigned integer. */
	SLDT_UINT16,                                            /*!< 16bit unsigned integer. */
	SLDT_UINT32,                                            /*!< 32bit unsigned integer. */

	SLDT_INT8,                                              /*!< 8bit signed integer. */
	SLDT_INT16,                                             /*!< 16bit signed integer. */
	SLDT_INT32,                                             /*!< 32bit signed integer. */

	SLDT_SLD,                                               /*!< A SaveLoadDesc. */

	SLDT_NULL                                               /*!< Not stored. */
} SaveLoadType;

#define offset(c, m) (((size_t)&((c *)8)->m) - 8)

/* Quick macros for easy making saveload tables */

/**
 * A normal entry.
 * @param c The class.
 * @param t The type on disk / in memory.
 * @param m The member of the class.
 */
#define SLD_ENTRY(c, t, m) { offset(c, m), t, t, 1, NULL }

/**
 * A full entry.
 * @param c The class.
 * @param t The type on disk.
 * @param m The member of the class.
 * @param t2 The type in memory.
 */
#define SLD_ENTRY2(c, t, m, t2) { offset(c, m), t, t2, 1, NULL }

/**
 * A normal array.
 * @param c The class.
 * @param t The type on disk / in memory.
 * @param m The member of the class.
 * @param n The number of elements.
 */
#define SLD_ARRAY(c, t, m, n) { offset(c, m), t, t, n, NULL }

/**
 * A full array.
 * @param c The class.
 * @param t The type on disk.
 * @param m The member of the class.
 * @param t2 The type in memory.
 * @param n The number of elements.
 */
#define SLD_ARRAY2(c, t, m, t2, n) { offset(c, m), t, t2, n, NULL }

/**
 * An empty entry. Just to pad bytes on disk.
 * @param t The type on disk.
 */
#define SLD_EMPTY(t) { 0, t, SLDT_NULL, 1, NULL }

/**
 * An empty array. Just to pad bytes on disk.
 * @param t The type on disk.
 * @param n The number of elements.
 */
#define SLD_EMPTY2(t, n) { 0, t, SLDT_NULL, n, NULL }

/**
 * A struct entry.
 * @param c The class.
 * @param m The member of the class.
 * @param s The SaveLoadDesc.
 */
#define SLD_SLD(c, m, s) { offset(c, m), SLDT_SLD, SLDT_SLD, 1, s }

/** Indicates end of array. */
#define SLD_END { 0, SLDT_NULL, SLDT_NULL, 0, NULL }

/**
 * Table definition for SaveLoad descriptors.
 */
typedef struct SaveLoadDesc {
	size_t offset;                                          /*!< The offset in the object, in bytes. */
	SaveLoadType type_disk;                                 /*!< The type it is on disk. */
	SaveLoadType type_memory;                               /*!< The type it is in memory. */
	uint16 count;                                           /*!< The number of elements */
	const struct SaveLoadDesc *sld;                         /*!< The SaveLoadDesc. */
} SaveLoadDesc;

extern const SaveLoadDesc g_saveObject[];
extern const SaveLoadDesc g_saveScriptEngine[];

extern uint32 SaveLoad_GetLength(const SaveLoadDesc *sld);
extern bool SaveLoad_Load(const SaveLoadDesc *sld, FILE *fp, void *object);
extern bool SaveLoad_Save(const SaveLoadDesc *sld, FILE *fp, void *object);

extern bool House_Load(FILE *fp, uint32 length);
extern bool House_Save(FILE *fp);

#endif /* SAVELOAD_SAVELOAD_H */
