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
extern IndexType Tools_Index_GetType(uint16 id);
extern uint16 Tools_Index_Decode(uint16 id);
extern uint16 Tools_Index_Encode(uint16 id, IndexType type);


extern void emu_Tools_AdjustToGameSpeed();
extern void emu_Tools_Shld();
extern void emu_Tools_Shrd();
extern void emu_Tools_Index_GetType();
extern void emu_Tools_Index_Decode();
extern void emu_Tools_Index_Encode();

#endif /* TOOLS_H */
