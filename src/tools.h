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

extern uint16 Tools_AdjustToGameSpeed(uint16 normal, uint16 minimum, uint16 maximum, bool inverseSpeed);
extern IndexType Tools_Index_GetType(uint16 encoded);
extern uint16 Tools_Index_Decode(uint16 encoded);
extern uint16 Tools_Index_Encode(uint16 index, IndexType type);
extern bool Tools_Index_IsValid(uint16 encoded);
extern uint16 Tools_Index_GetPackedTile(uint16 encoded);
extern tile32 Tools_Index_GetTile(uint16 encoded);


extern void emu_Tools_AdjustToGameSpeed();
extern void emu_Tools_Shld();
extern void emu_Tools_Shrd();
extern void emu_Tools_Index_GetType();
extern void emu_Tools_Index_Decode();
extern void emu_Tools_Index_Encode();
extern void emu_Tools_Index_IsValid();
extern void emu_Tools_Index_GetPackedTile();
extern void emu_Tools_Index_GetTile();

#endif /* TOOLS_H */
