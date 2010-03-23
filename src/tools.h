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

extern uint16 Tools_AdjustToGameSpeed(uint16 normal, uint16 minimum, uint16 maximum, bool inverseSpeed);
extern IndexType Tools_Index_GetType(uint16 encoded);
extern uint16 Tools_Index_Decode(uint16 encoded);
extern uint16 Tools_Index_Encode(uint16 index, IndexType type);
extern bool Tools_Index_IsValid(uint16 encoded);
extern uint16 Tools_Index_GetPackedTile(uint16 encoded);
extern tile32 Tools_Index_GetTile(uint16 encoded);
extern struct Unit *Tools_Index_GetUnit(uint16 encoded);
extern struct Structure *Tools_Index_GetStructure(uint16 encoded);
extern csip32 Tools_GetSmallestIP(csip32 csip);
extern void Tools_Memmove(csip32 src, csip32 dst, uint32 count);
extern uint8 Tools_Random_256();


extern void emu_Tools_AdjustToGameSpeed();
extern void emu_Tools_Shld();
extern void emu_Tools_Shrd();
extern void emu_Tools_Index_GetType();
extern void emu_Tools_Index_Decode();
extern void emu_Tools_Index_Encode();
extern void emu_Tools_Index_IsValid();
extern void emu_Tools_Index_GetPackedTile();
extern void emu_Tools_Index_GetTile();
extern void emu_Tools_Index_GetUnit();
extern void emu_Tools_Index_GetStructure();
extern void emu_Tools_GetSmallestIP();
extern void emu_Tools_GetSmallestIP2();
extern void emu_Tools_Memmove();
extern void emu_Tools_Random_256();

#endif /* TOOLS_H */
