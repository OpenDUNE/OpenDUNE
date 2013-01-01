/** @file src/tools.h Various definitions. */

#ifndef TOOLS_H
#define TOOLS_H

/**
 * Types of encoded Index.
 */
typedef enum IndexType {
	IT_NONE      = 0,
	IT_TILE      = 1,
	IT_UNIT      = 2,
	IT_STRUCTURE = 3
} IndexType;

struct Unit;
struct Structure;
struct Object;

extern uint16 Tools_AdjustToGameSpeed(uint16 normal, uint16 minimum, uint16 maximum, bool inverseSpeed);
extern IndexType Tools_Index_GetType(uint16 encoded);
extern uint16 Tools_Index_Decode(uint16 encoded);
extern uint16 Tools_Index_Encode(uint16 index, IndexType type);
extern bool Tools_Index_IsValid(uint16 encoded);
extern uint16 Tools_Index_GetPackedTile(uint16 encoded);
extern tile32 Tools_Index_GetTile(uint16 encoded);
extern struct Unit *Tools_Index_GetUnit(uint16 encoded);
extern struct Structure *Tools_Index_GetStructure(uint16 encoded);
extern struct Object *Tools_Index_GetObject(uint16 encoded);

extern uint8 Tools_Random_256(void);
extern void Tools_Random_Seed(uint32 seed);
extern void Tools_RandomLCG_Seed(uint32 seed);
extern uint16 Tools_RandomLCG_Range(uint16 min, uint16 max);

extern bool BitArray_Test(uint8 *array, uint16 index);
extern void BitArray_Set(uint8 *array, uint16 index);
extern void BitArray_Clear(uint8 *array, uint16 index);

#endif /* TOOLS_H */
