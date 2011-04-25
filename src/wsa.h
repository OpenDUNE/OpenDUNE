/* $Id$ */

#ifndef WSA_H
#define WSA_H

MSVC_PACKED_BEGIN
/**
 * The flags of a WSA Header.
 */
typedef union WSAFlags {
	struct {
	/*      0001 */ BITTYPE notmalloced:1;                  /*!< If the WSA is in memory of the caller. */
	/*      0002 */ BITTYPE malloced:1;                     /*!< If the WSA is malloc'd by us. */
	/*      0004 */ BITTYPE dataOnDisk:1;                   /*!< Only the header is in the memory. Rest is on disk. */
	/*      0008 */ BITTYPE dataInMemory:1;                 /*!< The whole WSA is in memory. */
	/*      0010 */ BITTYPE displayInBuffer:1;              /*!< The output display is in the buffer. */
	/*      0020 */ BITTYPE noAnimation:1;                  /*!< If the WSA has animation or not. */
	/*      0040 */ BITTYPE variable_0040:1;                /*!< ?? */
	/*      0080 */ BITTYPE variable_0080:1;                /*!< ?? */
	/*      0100 */ BITTYPE isSpecial:1;                    /*!< Indicates if the WSA has a special buffer. */
	/*      -    */ BITTYPE notused:7;                      /*!< The remaining bits are never used. */
	} GCC_PACKED s;
	uint16 all;
} GCC_PACKED WSAFlags;
MSVC_PACKED_END
assert_compile(sizeof(WSAFlags) == 0x02);

MSVC_PACKED_BEGIN
/**
 * The header of a WSA file that is being read.
 */
typedef struct WSAHeader {
	/* 0000(2)   */ PACK uint16 frameCurrent;               /*!< Current frame displaying. */
	/* 0002(2)   */ PACK uint16 frames;                     /*!< Total frames in WSA. */
	/* 0004(2)   */ PACK uint16 width;                      /*!< Width of WSA. */
	/* 0006(2)   */ PACK uint16 height;                     /*!< Height of WSA. */
	/* 0008(2)   */ PACK uint16 bufferLength;               /*!< Length of the buffer. */
	/* 000A(4)   */ PACK csip32 buffer;                     /*!< The buffer. */
	/* 000E(4)   */ PACK csip32 fileContent;                /*!< ?? */
	/* 0012(13)  */ PACK char   filename[13];               /*!< Filename of WSA. */
	/* 001F(2)   */ PACK WSAFlags flags;                    /*!< Flags of WSA. */
} GCC_PACKED WSAHeader;
MSVC_PACKED_END
assert_compile(sizeof(WSAHeader) == 0x21);

MSVC_PACKED_BEGIN
/**
 * The header of a WSA file as on the disk.
 */
typedef struct WSAFileHeader {
	/* 0000(2)   */ PACK uint16 frames;                     /*!< Amount of animation frames in this WSA. */
	/* 0002(2)   */ PACK uint16 width;                      /*!< Width of WSA. */
	/* 0004(2)   */ PACK uint16 height;                     /*!< Height of WSA. */
	/* 0006(2)   */ PACK uint16 requiredBufferSize;         /*!< The size the buffer has to be at least to process this WSA. */
	/* 0008(2)   */ PACK uint16 isSpecial;                  /*!< Indicates if the WSA has a special buffer. */
	/* 000A(4)   */ PACK uint32 animationOffsetStart;       /*!< Offset where animation starts. */
	/* 000E(4)   */ PACK uint32 animationOffsetEnd;         /*!< Offset where animation ends. */
} GCC_PACKED WSAFileHeader;
MSVC_PACKED_END
assert_compile(sizeof(WSAFileHeader) == 0x12);

extern uint16 WSA_GetFrameCount(WSAHeader *header);
extern uint16 WSA_GotoNextFrame(WSAHeader *header, uint16 frame, csip32 displayBuffer);
extern csip32 WSA_LoadFile(char *filename, csip32 buffer, uint32 bufferSizeCurrent, uint16 reserveDisplayFrame, csip32 bufferSpecial);
extern void WSA_Unload(csip32 buffer);
extern uint16 WSA_DisplayFrame(csip32 buffer, uint16 frameNext, uint16 posX, uint16 posY, uint16 memoryBlock, uint16 unknown);

extern void emu_WSA_GetFrameCount();
extern void emu_WSA_LoadFile();
extern void emu_WSA_Unload();
extern void emu_WSA_DisplayFrame();

#endif /* WSA_H */
