/* $Id$ */

#ifndef MT32MPU_H
#define MT32MPU_H

MSVC_PACKED_BEGIN
typedef struct MSData {
	/* 0000(4)   */ PACK csip32 TIMB;                       /*!< Pointer to TIMB position in sound file. */
	/* 0004(4)   */ PACK csip32 RBRN;                       /*!< Pointer to RBRN position in sound file. */
	/* 0008(4)   */ PACK csip32 EVNT;                       /*!< Pointer to EVNT position in sound file. */
	/* 000C(4)   */ PACK csip32 sound;                      /*!< Pointer to current position in sound file. */
	/* 0010(2)   */ PACK uint16 variable_0010;              /*!< ?? */
	/* 0012(4)   */ PACK csip32 variable_0012;              /*!< ?? */
	/* 0016(2)   */ PACK uint16 index;                      /*!< ?? */
	/* 0018(2)   */ PACK uint16 variable_0018;              /*!< ?? */
	/* 001A(2)   */ PACK uint16 playing;                    /*!< ?? 0, 1 or 2. 1 if a sound is playing. */
	/* 001C(2)   */ PACK uint16 variable_001C;              /*!< ?? */
	/* 001E(2)   */ PACK int16  delay;                      /*!< Delay before reading next command. */
	/* 0020(2)   */ PACK uint16 noteOnCount;                /*!< Number of notes currently on. */
	/* 0022(2)   */ PACK uint16 variable_0022;              /*!< ?? */
	/* 0024(2)   */ PACK uint16 variable_0024;              /*!< ?? */
	/* 0026(2)   */ PACK uint16 variable_0026;              /*!< ?? */
	/* 0028(4)   */ PACK uint32 variable_0028;              /*!< ?? */
	/* 002C(4)   */ PACK uint32 variable_002C;              /*!< ?? */
	/* 0030(2)   */ PACK uint16 variable_0030;              /*!< ?? */
	/* 0032(2)   */ PACK uint16 variable_0032;              /*!< ?? */
	/* 0034(2)   */ PACK uint16 variable_0034;              /*!< ?? */
	/* 0036(4)   */ PACK uint32 variable_0036;              /*!< ?? */
	/* 003A(4)   */ PACK uint32 variable_003A;              /*!< ?? */
	/* 003E(2)   */ PACK uint16 variable_003E;              /*!< ?? */
	/* 0040(2)   */ PACK uint16 variable_0040;              /*!< ?? */
	/* 0042(2)   */ PACK uint16 variable_0042;              /*!< ?? */
	/* 0044(4)   */ PACK uint32 variable_0044;              /*!< ?? */
	/* 0048(4)   */ PACK uint32 variable_0048;              /*!< ?? */
	/* 004C(4)   */ PACK uint32 variable_004C;              /*!< ?? */
	/* 0050()    */ PACK uint8   unknown_0050[0x010];
	/* 0060(8)   */ PACK uint16 variable_0060[4];           /*!< ?? */
	/* 0068(16)  */ PACK uint8  chanMaps[16];               /*!< ?? Channel mapping. */
	/* 0078(16)  */ PACK uint8  programs[16];               /*!< Channel program number (C0 command). */
	/* 0088(16)  */ PACK uint8  pitchWheelLSB[16];          /*!< Channel pitch wheel LSB (E0 command). */
	/* 0098(16)  */ PACK uint8  pitchWheelMSB[16];          /*!< Channel pitch wheel MSB (E0 command). */
	/* 00A8(16)  */ PACK uint8  variable_00A8[16];          /*!< ?? */
	/* 00B8(144) */ PACK uint8  variable_00B8[144];         /*!< ?? */
	/* 0148(32)  */ PACK uint8  noteOnChans[32];            /*!< ?? */
	/* 0168(32)  */ PACK uint8  noteOnNotes[32];            /*!< ?? */
	/* 0188(64)  */ PACK uint16 noteOnLengthLSB[32];        /*!< ?? */
	/* 01C8(64)  */ PACK uint16 noteOnLengthMSB[32];        /*!< ?? */
} GCC_PACKED MSData;
MSVC_PACKED_END
assert_compile(sizeof(MSData) == 0x208);

struct DriverInfo;

extern bool MPU_Reset();
extern void MPU_UART();
extern void MPU_WriteData(uint8 data);
extern void MPU_Interrupt();
extern uint16 MPU_SetData(csip32 file, uint16 index, csip32 data_csip, csip32 variable_0012);
extern void MPU_InitData(MSData *data);
extern void MPU_Play(uint16 index);
extern void MPU_Stop(uint16 index);
extern uint16 MPU_IsPlaying(uint16 index);
extern uint16 MPU_GetDataSize();
extern uint16 MPU_GetUnknownSize();
extern void MPU_Init();
extern void MPU_Uninit(csip32 csip);
extern void MPU_ClearData(uint16 index);
extern struct DriverInfo *MPU_GetInfo();


extern void emu_MPU_Reset();
extern void emu_MPU_UART();
extern void emu_MPU_WriteData();
extern void emu_MPU_Interrupt();
extern void emu_MPU_SetData();
extern void emu_MPU_Play();
extern void emu_MPU_Stop();
extern void emu_MPU_GetDataSize();
extern void emu_MPU_GetUnknownSize();
extern void emu_MPU_Init();
#define emu_MPU_TestPort() emu_MPU_Reset();
extern void emu_MPU_Uninit();
extern void emu_MPU_ClearData();
extern void emu_MPU_GetInfo();

#endif /* MT32MPU_H */
