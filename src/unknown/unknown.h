/* $Id$ */

/** @file src/unknown/unknown.h Definitions of unknown converted routines. */

#ifndef UNKNOWN_UNKNOWN_H
#define UNKNOWN_UNKNOWN_H

extern void Unknown_07D4_0000(uint16 screenID);
extern void Unknown_07D4_02F8(uint16 packed);
extern void Unknown_07D4_159A(uint16 screenID);
extern void Unknown_07D4_1625(uint16 packed);

extern csip32 Screen_GetSegment_ByIndex_1(uint16 index);
extern csip32 Screen_GetSegment_ByIndex_2(uint16 index);

extern void Unknown_259E_0006(uint8 *ptr2data, int16 unknown);

extern void Unknown_2903_090A(csip32 arg06, uint16 arg0A);

#endif /* UNKNOWN_UNKNOWN_H */
