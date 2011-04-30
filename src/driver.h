/* $Id$ */

#ifndef DRIVER_H
#define DRIVER_H

MSVC_PACKED_BEGIN
/**
 * Inside the GlobalData is information about digitized sound drivers. This is the layout of
 *  that data.
 */
typedef struct DSDriver {
	/* 0000(4)   */ PACK csip32 filename;                   /*!< Pointer to filename for the driver. */
} GCC_PACKED DSDriver;
MSVC_PACKED_END
assert_compile(sizeof(DSDriver) == 0x04);

MSVC_PACKED_BEGIN
/**
 * Inside the GlobalData is information about music/sound drivers. This is the layout of
 *  that data.
 */
typedef struct MSDriver {
	/* 0000(4)   */ PACK csip32 filename;                   /*!< Pointer to filename for the driver. */
	/* 0004(4)   */ PACK csip32 extension;                  /*!< Pointer to extension used for music file names. */
	/* 0008(2)   */ PACK uint16 variable_0008;              /*!< ?? */
	/* 000A(2)   */ PACK uint16 variable_000A;              /*!< ?? */
} GCC_PACKED MSDriver;
MSVC_PACKED_END
assert_compile(sizeof(MSDriver) == 0x0C);

MSVC_PACKED_BEGIN
typedef struct Driver {
	/* 0000(2)   */ PACK uint16 index;                      /*!< ?? */
	/* 0002(4)   */ PACK csip32 dfilename;                  /*!< Pointer to filename for the driver. */
	/* 0006(4)   */ PACK char   extension[4];               /*!< Extension used for music file names. */
	/* 000A(4)   */ PACK char   extension2[4];              /*!< Extension used for ?? */
	/* 000E(4)   */ PACK csip32 dcontent;                   /*!< Pointer to the driver file content. */
	/* 0012(4)   */ PACK csip32 variable_12;                /*!< ?? */
	/* 0016(4)   */ PACK csip32 content;                    /*!< Pointer to the file to play content. */
	/* 001A(4)   */ PACK csip32 filename;                   /*!< Pointer to the name of file to play. */
	/* 001E(4)   */ PACK csip32 variable_1E;                /*!< ?? */
	/* 0022(2)   */ PACK uint16 contentMalloced;            /*!< Wether content pointer is the result of a malloc. */
	/* 0024(2)   */ PACK uint16 customTimer;                /*!< ?? */
} GCC_PACKED Driver;
MSVC_PACKED_END
assert_compile(sizeof(Driver) == 0x26);

MSVC_PACKED_BEGIN
typedef struct MSBuffer {
	/* 0000(2)   */ PACK uint16 index;                      /*!< ?? */
	/* 0002(4)   */ PACK csip32 buffer;                     /*!< ?? */
} GCC_PACKED MSBuffer;
MSVC_PACKED_END
assert_compile(sizeof(MSBuffer) == 0x06);


extern uint16 Drivers_EnableSounds(uint16 sounds);
extern uint16 Drivers_EnableMusic(uint16 music);
extern void Drivers_All_Init(uint16 sound, uint16 music, uint16 voice);
extern csip32 Drivers_GetFunctionCSIP(uint16 driver, uint16 function);
extern csip32 Drivers_CallFunction(uint16 driver, uint16 function);
extern bool Driver_Music_IsPlaying();
extern bool Driver_Voice_01EB();
extern void Driver_Sound_Play(int16 index, int16 volume);
extern void Driver_Music_Stop();
extern void Driver_Sound_Stop();
extern void Driver_Voice_LoadFile(char *filename, void *buffer, csip32 buffer_csip, uint32 length);
extern void Driver_Voice_0248(uint8 *arg06, csip32 arg06_csip, int16 arg0A, int16 arg0C);
extern void Driver_Voice_01AB();
extern void Driver_Sound_LoadFile(char *musicName);
extern char *Drivers_GenerateFilename(char *name, Driver *driver);
extern char *Drivers_GenerateFilename2(char *name, Driver *driver);
extern void Drivers_1DD7_0B9C(Driver *driver, uint16 bufferIndex);
extern void Drivers_All_Uninit();
extern void Driver_LoadFile(char *musicName, Driver *driver);
extern void Driver_UnloadFile(Driver *driver);
extern void Drivers_1DD7_0B53();
extern void Drivers_1DD7_1C3C(Driver *driver, int16 index, uint16 volume);


extern void emu_Drivers_EnableSounds();
extern void emu_Drivers_EnableMusic();
extern void emu_Drivers_CallFunction();
extern void emu_Driver_Music_IsPlaying();
extern void emu_Driver_Voice_01EB();
extern void emu_Driver_Sound_Play();
extern void emu_Driver_Sound_Play_Wrapper();
extern void emu_Driver_Music_Stop();
extern void emu_Driver_Sound_Stop();
extern void emu_Driver_Voice_022D();
extern void emu_Drivers_GenerateFilename();
extern void emu_Drivers_GenerateFilename2();
extern void emu_Drivers_1DD7_0B53();

#endif /* DRIVER_H */
