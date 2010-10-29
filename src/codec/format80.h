/* $Id: driver.h 1128 2010-05-31 13:13:36Z glx $ */

#ifndef CODEC_FORMAT80_H
#define CODEC_FORMAT80_H

uint16 Format80_Decode(uint8 *source, uint8 *dest, uint16 destLength);

extern void emu_Format80_Decode();

#endif /* CODEC_FORMAT80_H */
