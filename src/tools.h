/* $Id$ */

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
extern csip32 Tools_GetSmallestIP(csip32 csip);
extern void Tools_Memmove(csip32 src, csip32 dst, uint32 count);
extern uint8 Tools_Random_256();
extern uint16 Tools_RandomRange(uint16 min, uint16 max);
extern bool Tools_Var76B8_Set(uint16 bit, bool set);


extern void emu_Tools_Free_IfNotNull();
extern void emu_Tools_Shld();
extern void emu_Tools_GetSmallestIP();
extern void emu_Tools_Memmove();
extern void emu_Tools_RandomRange();
extern void emu_Tools_PrintString();

#endif /* TOOLS_H */
