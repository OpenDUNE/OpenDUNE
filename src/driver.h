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
	/* 000A()    */ PACK uint8   unknown_000A[0x04];
	/* 000E(4)   */ PACK csip32 dcontent;                   /*!< Pointer to the driver file content. */
	/* 0012()    */ PACK uint8   unknown_0012[0x14];
} GCC_PACKED Driver;
MSVC_PACKED_END
assert_compile(sizeof(Driver) == 0x26);

MSVC_PACKED_BEGIN
typedef struct MSBuffer {
	/* 0000(2)   */ PACK uint16 count;                      /*!< ?? */
	/* 0002(4)   */ PACK csip32 buffer;                     /*!< ?? */
} GCC_PACKED MSBuffer;
MSVC_PACKED_END
assert_compile(sizeof(MSBuffer) == 0x06);


extern void Drivers_All_Init(uint16 sound, uint16 music, uint16 voice);


extern void emu_Drivers_All_Init();

#endif /* DRIVER_H */
