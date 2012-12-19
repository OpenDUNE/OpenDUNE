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

	SLDT_CALLBACK,                                          /*!< A callback handler. */
	SLDT_SLD,                                               /*!< A SaveLoadDesc. */

	SLDT_NULL                                               /*!< Not stored. */
} SaveLoadType;

#define offset(c, m) (((size_t)&((c *)8)->m) - 8)
#define item_size(c, m) sizeof(((c *)0)->m)

/* Quick macros for easy making saveload tables */

/**
 * A normal entry.
 * @param c The class.
 * @param t The type on disk / in memory.
 * @param m The member of the class.
 */
#define SLD_ENTRY(c, t, m) { offset(c, m), t, t, 1, NULL, item_size(c, m), NULL, NULL }
#define SLD_GENTRY(t, m) { 0, t, t, 1, NULL, sizeof(m), NULL, &m }

/**
 * A full entry.
 * @param c The class.
 * @param t The type on disk.
 * @param m The member of the class.
 * @param t2 The type in memory.
 */
#define SLD_ENTRY2(c, t, m, t2) { offset(c, m), t, t2, 1, NULL, item_size(c, m), NULL, NULL }
#define SLD_GENTRY2(t, m, t2) { 0, t, t2, 1, NULL, sizeof(m), NULL, &m }

/**
 * A normal array.
 * @param c The class.
 * @param t The type on disk / in memory.
 * @param m The member of the class.
 * @param n The number of elements.
 */
#define SLD_ARRAY(c, t, m, n) { offset(c, m), t, t, n, NULL, item_size(c, m) / n, NULL, NULL }
#define SLD_GARRAY(t, m, n) { 0, t, t, n, NULL, sizeof(m) / n, NULL, &m }

/**
 * A full array.
 * @param c The class.
 * @param t The type on disk.
 * @param m The member of the class.
 * @param t2 The type in memory.
 * @param n The number of elements.
 */
#define SLD_ARRAY2(c, t, m, t2, n) { offset(c, m), t, t2, n, NULL, item_size(c, m) / n, NULL, NULL }
#define SLD_GARRAY2(t, m, t2, n) { 0, t, t2, n, NULL, sizeof(m) / n, NULL, &m }

/**
 * An empty entry. Just to pad bytes on disk.
 * @param t The type on disk.
 */
#define SLD_EMPTY(t) { 0, t, SLDT_NULL, 1, NULL, 0, NULL, NULL }

/**
 * An empty array. Just to pad bytes on disk.
 * @param t The type on disk.
 * @param n The number of elements.
 */
#define SLD_EMPTY2(t, n) { 0, t, SLDT_NULL, n, NULL, 0, NULL, NULL }

/**
 * A struct entry.
 * @param c The class.
 * @param m The member of the class.
 * @param s The SaveLoadDesc.
 */
#define SLD_SLD(c, m, s) { offset(c, m), SLDT_SLD, SLDT_SLD, 1, s, item_size(c, m), NULL, NULL }
#define SLD_GSLD(m, s) { 0, SLDT_SLD, SLDT_SLD, 1, s, sizeof(m), NULL, &m }

/**
 * A struct array.
 * @param c The class.
 * @param m The member of the class.
 * @param s The SaveLoadDesc.
 * @param n The number of elements.
 */
#define SLD_SLD2(c, m, s, n) { offset(c, m), SLDT_SLD, SLDT_SLD, n, s, item_size(c, m) / n, NULL, NULL }
#define SLD_GSLD2(m, s, n) { 0, SLDT_SLD, SLDT_SLD, n, s, sizeof(m) / n, NULL, &m }

/**
 * A callback entry.
 * @param c The class.
 * @param t The type on disk.
 * @param m The member of the class.
 * @param p The callback.
 */
#define SLD_CALLB(c, t, m, p) { offset(c, m), t, SLDT_CALLBACK, 1, NULL, item_size(c, m), p, NULL }
#define SLD_GCALLB(t, m, p) { 0, t, SLDT_CALLBACK, 1, NULL, sizeof(m), p, &m }

/** Indicates end of array. */
#define SLD_END { 0, SLDT_NULL, SLDT_NULL, 0, NULL, 0, NULL, NULL }

/**
 * Table definition for SaveLoad descriptors.
 */
typedef struct SaveLoadDesc {
	size_t offset;                                          /*!< The offset in the object, in bytes. */
	SaveLoadType type_disk;                                 /*!< The type it is on disk. */
	SaveLoadType type_memory;                               /*!< The type it is in memory. */
	uint16 count;                                           /*!< The number of elements */
	const struct SaveLoadDesc *sld;                         /*!< The SaveLoadDesc. */
	size_t size;                                            /*!< The size of an element. */
	uint32 (*callback)(void *object, uint32 value, bool loading);/*!< The custom callback. */
	void *address;                                          /*!< The address of the element. */
} SaveLoadDesc;

extern const SaveLoadDesc g_saveObject[];
extern const SaveLoadDesc g_saveScriptEngine[];
extern const SaveLoadDesc g_saveScenario[];

extern uint32 SaveLoad_GetLength(const SaveLoadDesc *sld);
extern bool SaveLoad_Load(const SaveLoadDesc *sld, FILE *fp, void *object);
extern bool SaveLoad_Save(const SaveLoadDesc *sld, FILE *fp, void *object);

extern bool House_Load(FILE *fp, uint32 length);
extern bool House_LoadOld(FILE *fp, uint32 length);
extern bool House_Save(FILE *fp);

extern bool Info_Load(FILE *fp, uint32 length);
extern bool Info_LoadOld(FILE *fp, uint32 length);
extern bool Info_Save(FILE *fp);

extern bool Unit_Load(FILE *fp, uint32 length);
extern bool Unit_Save(FILE *fp);
extern bool UnitNew_Load(FILE *fp, uint32 length);
extern bool UnitNew_Save(FILE *fp);

#endif /* SAVELOAD_SAVELOAD_H */
