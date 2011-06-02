/* $Id$ */

#ifndef UNKNOWN_UNKNOWN_H
#define UNKNOWN_UNKNOWN_H

extern uint16 Unknown_07AE_0000(uint16 index);
extern uint16 Unknown_07AE_00E4(uint16 index);
extern void Unknown_07AE_0103();

extern void Unknown_07D4_0000(uint16 screenID);
extern void Unknown_07D4_02F8(uint16 packed);
extern void Unknown_07D4_159A(uint16 screenID);
extern void Unknown_07D4_1625(uint16 packed);

extern csip32 Screen_GetSegment_ByIndex_1(uint16 index);
extern csip32 Screen_GetSegment_ByIndex_2(uint16 index);

extern void Unknown_259E_0006(csip32 ptr2, int16 unknown);

extern uint16 Unknown_2903_00CA(csip32 sprite_csip);
extern void Unknown_2903_090A(csip32 arg06, uint16 arg0A);

#endif /* UNKNOWN_UNKNOWN_H */
