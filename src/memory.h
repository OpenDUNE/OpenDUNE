/* $Id$ */

#ifndef MEMORY_H
#define MEMORY_H

extern struct Building *Memory_Building_Allocate(int16 index, uint8 typeID);

extern void emu_Memory_Building_Allocate();
extern void emu_Memory_Building_Free();

#endif /* MEMORY_H */
