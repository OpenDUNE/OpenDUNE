/* $Id$ */

#ifndef FILE_H
#define FILE_H

enum {
	FILE_MAX     = 676,
	FILE_INVALID = 0xFFFF
};

MSVC_PACKED_BEGIN
/**
 * Static information per Action type.
 */
typedef struct FileInfo {
	/* 0000(4)   */ PACK csip32 filename;                   /*!< Name of the file. */
	/* 0004(4)   */ PACK uint32 variable_04;                /*!< ?? */
	/* 0008(4)   */ PACK uint32 variable_08;                /*!< ?? */
	/* 000C(4)   */ PACK uint32 variable_0C;                /*!< ?? */
	/* 0010(1)   */ PACK uint8  variable_10;                /*!< ?? */
	/* 0011(1)   */ PACK uint8  variable_11;                /*!< ?? */
	/* 0012(1)   */ PACK uint8  variable_12;                /*!< ?? */
} GCC_PACKED FileInfo;
MSVC_PACKED_END
assert_compile(sizeof(FileInfo) == 0x13);

extern FileInfo *g_fileInfo;

extern uint16 FileInfo_FindIndex_ByName(char *filename);


extern void emu_FileInfo_FindIndex_ByName();

#endif /* FILE_H */
