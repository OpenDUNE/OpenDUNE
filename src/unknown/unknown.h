/* $Id$ */

#ifndef UNKNOWN_UNKNOWN_H
#define UNKNOWN_UNKNOWN_H

extern uint16 Unknown_07AE_0000(uint16 index);
extern void emu_Unknown_07AE_0000();
extern void emu_Unknown_07AE_00E4();
extern uint16 Unknown_07AE_00E4(uint16 index);
extern void emu_Unknown_07AE_0103();
extern void Unknown_07AE_0103();

extern void emu_Unknown_07D4_0000();
extern void emu_Unknown_07D4_02F8();
extern void emu_Unknown_07D4_159A();
extern void Unknown_07D4_1625(uint16 packed);

extern uint16 Unknown_Set_Global_6C91(uint16 newval);
extern void emu_Unknown_Set_Global_6C91();

extern void emu_Memory_GetBlock1();
extern void emu_Memory_GetBlock2();

extern void emu_Unknown_259E_0006();
extern void Unknown_259E_0006(csip32 ptr2, int16 unknown);

extern void emu_Unknown_2903_00CA();
extern void Unknown_2903_090A(csip32 arg06, uint16 arg0A);

extern void Unknown_B483_0156(uint16 index);
extern void Unknown_B483_0363(uint16 index);
extern bool Unknown_B483_0470();
extern csip32 Unknown_B483_0823(char *filename, csip32 fcsip);

extern void emu_Unknown_B4B8_110D();
extern void Unknown_B4B8_110D(uint8 houseID);

extern void emu_Unknown_B53B_0000();
extern void emu_File_Error_Wrapper();

#endif /* UNKNOWN_UNKNOWN_H */
