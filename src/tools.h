/* $Id$ */

#ifndef TOOLS_H
#define TOOLS_H

extern uint16 Tools_AdjustToGameSpeed(uint16 normal, uint16 minimum, uint16 maximum, bool inverseSpeed);


extern void emu_Tools_AdjustToGameSpeed();
extern void emu_Tools_Shld();
extern void emu_Tools_Shrd();

#endif /* TOOLS_H */
