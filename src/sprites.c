/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "gfx.h"
#include "sprites.h"
#include "unknown/unknown.h"
#include "house.h"
#include "pool/house.h"
#include "string.h"
#include "file.h"
#include "tools.h"
#include "os/endian.h"
#include "codec/format80.h"
#include "os/sleep.h"

csip32 *g_sprites = NULL;

extern void f__22A6_0FAE_0027_2378();
extern void f__22A6_0FD7_0043_ACF9();
extern void f__22A6_127B_0036_F8C9();
extern void f__2B6C_000E_0045_C1FE();
extern void f__2B6C_006E_002E_4FBC();
extern void emu_Tools_Free();
extern void emu_Tools_Malloc();
extern void emu_Tools_GetFreeMemory();
extern void f__B503_122D_002D_E562();
extern void overlay(uint16 cs, uint8 force);

/**
 * Initialize the sprites system.
 *
 * @init System_Init_Sprites
 */
void System_Init_Sprites()
{
	g_sprites = (csip32 *)&emu_get_memory8(0x2DCE, 0x0, 0x440);
}

/**
 * ??.
 *
 * @param sprite_csip The CSIP of the sprite to work on.
 * @param arg0A_csip ??.
 */
static void Sprites_Unknown_2BB6_000C(csip32 sprite_csip, csip32 arg0A_csip)
{
	uint8 *sprite;
	uint8 *arg0A;
	uint8 i;

	if (sprite_csip.csip == 0x0 || arg0A_csip.csip == 0x0) return;

	sprite = emu_get_memorycsip(sprite_csip);
	arg0A = emu_get_memorycsip(arg0A_csip);

	if ((*sprite & 0x1) == 0) return;

	sprite += 10;

	for (i = 0; i < 16; i++) {
		uint8 offset = *sprite;
		*sprite++ = arg0A[offset];
	}
}

/**
 * Loads the sprites.
 *
 * @param index The index of the list of sprite files to load.
 * @param memory The index of memory block where to store loaded sprites.
 * @param sprites The array where to store CSIP for each loaded sprite.
 */
void Sprites_Load(uint16 index, uint16 memory, csip32 *sprites)
{
#define M(x) x "\0"
	static const char *spriteFiles[3] = {
		M("MOUSE.SHP")    /*   0 -   6 */
		M("BTTN")         /*   7 -  11 */
		M("SHAPES.SHP")   /*  12 - 110 */
		M("UNITS2.SHP")   /* 111 - 150 */
		M("UNITS1.SHP")   /* 151 - 237 */
		M("UNITS.SHP")    /* 238 - 354 */
		M(""),
		M("MENTAT")       /*   0 -  13 */
		M("MENSHP%c.SHP") /*  14 -  28 */
		M(""),
		M("MOUSE.SHP")    /*   0 -   6 */
		M("BTTN")         /*   7 -  11 */
		M("SHAPES.SHP")   /*  12 - 110 */
		M("CHOAM")        /* 111 - 128 */
		M("")
	};
#undef M

	const char *files;
	csip32 memBlock;
	uint8 *buffer;
	uint16 i;

	emu_push(memory);
	emu_push(emu_cs); emu_push(0x0A4C); emu_cs = 0x252E; emu_Screen_GetSegment_ByIndex_1();
	emu_sp += 2;
	memBlock.s.cs = emu_dx;
	memBlock.s.ip = emu_ax;
	buffer = emu_get_memorycsip(memBlock);

	files = spriteFiles[index];

	while (*files != '\0') {
		uint32 length;
		HouseInfo *hi;
		char *filename = (char *)g_global->variable_9939;

		hi = &g_houseInfo[(g_global->playerHouseID == HOUSE_INDEX_INVALID) ? HOUSE_ATREIDES : g_global->playerHouseID];

		sprintf(filename, files, *(char *)emu_get_memorycsip(hi->name));

		if (strchr(filename, '.') == NULL) {
			filename = String_GenerateFilename(filename);
		}

		length = File_ReadBlockFile(filename, buffer, 0xFDE8);

		for (i = 0; i < *(uint16 *)buffer; i++) {
			*sprites++ = Sprites_GetCSIP(memBlock, i);
		}

		files += strlen(files) + 1;
		memBlock.csip += length;
		buffer += length;
	}

	switch (index) {
		case 0:
			for (i = 7; i < 12; i++) Sprites_Unknown_2BB6_000C(g_sprites[i], g_global->variable_3C42);
			break;

		case 2:
			for (i = 111; i < 129; i++) Sprites_Unknown_2BB6_000C(g_sprites[i], g_global->variable_3C42);
			break;

		default: break;
	}
}

/**
 * Gets the CSIP of the given sprite inside the given buffer.
 *
 * @param buffer_csip The CSIP of the buffer containing sprites.
 * @param index The index of the sprite to get the CSIP for.
 * @return The CSIP.
 */
csip32 Sprites_GetCSIP(csip32 buffer_csip, uint16 index)
{
	csip32 ret;
	uint16 *buffer;

	ret.csip = 0;

	if (buffer_csip.s.cs == 0) return ret;

	buffer = (uint16 *)emu_get_memorycsip(buffer_csip);

	if (*buffer++ <= index) return ret;

	buffer += 2 * index;

	if (*buffer == 0) return ret;

	buffer_csip.s.cs += buffer[1];
	buffer_csip.s.ip += buffer[0] + 2;

	return Tools_GetSmallestIP(buffer_csip);
}

/**
 * Gets the width of the given sprite.
 *
 * @param sprite_csip The CSIP of the sprite.
 * @return The width.
 */
uint8 Sprite_GetWidth(csip32 sprite_csip)
{
	if (sprite_csip.csip == 0x0) return 0;

	return emu_get_memorycsip(sprite_csip)[3];
}

/**
 * Gets the height of the given sprite.
 *
 * @param sprite_csip The CSIP of the sprite.
 * @return The height.
 */
uint8 Sprite_GetHeight(csip32 sprite_csip)
{
	if (sprite_csip.csip == 0x0) return 0;

	return emu_get_memorycsip(sprite_csip)[2];
}

/**
 * Decodes an image.
 *
 * @param source The encoded image.
 * @param dest The place the decoded image will be.
 * @return The size of the decoded image.
 */
static uint32 Sprites_Decode(uint8 *source, uint8 *dest, csip32 source_csip, csip32 dest_csip)
{
	uint32 size = 0;

	switch(*source) {
		case 0x0:
			source += 2;
			size = *((uint32 *)source);
			source += 4;
			source += *((uint16 *)source);
			source += 2;
			memmove(dest, source, size);
			break;

		case 0x3:
			emu_push(dest_csip.s.cs);
			emu_push(source_csip.s.cs);
			/* Unresolved call */ emu_push(emu_cs); emu_push(0x02BB); emu_cs = 0x2BD6; emu_ip = 0x0100; emu_last_cs = 0x253D; emu_last_ip = 0x02B6; emu_last_length = 0x0011; emu_last_crc = 0xFC80; emu_call();
			emu_sp += 4;
			size = emu_ax;
			break;

		case 0x4:
			source += 6;
			source += *((uint16 *)source);
			source += 2;
			size = Format80_Decode(dest, source, 0xFFFF);
			break;

		default: break;
	}

	return size;
}

/**
 * Loads an ICN file.
 *
 * @param filename The name of the file to load.
 * @param memory1 The index of a memory block where to store loaded sprites.
 * @param memory2 The index of a memory block where to store loaded sprites.
 * @return The number of loaded sprites.
 */
static uint16 Sprites_LoadICNFile(const char *filename, uint16 memory1, uint16 memory2)
{
	csip32 memBlock1;
	csip32 memBlock2;
	uint8  index;
	uint16 tileSize;
	uint32 length;
	int8   info[4];
	uint16 tileCount = 0;

	emu_push(memory2);
	emu_push(emu_cs); emu_push(0x001A); emu_cs = 0x252E; emu_Screen_GetSegment_ByIndex_1();
	emu_sp += 2;
	memBlock2.s.cs = emu_dx;
	memBlock2.s.ip = emu_ax;

	emu_push(memory1);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x252E; emu_Screen_GetSegment_ByIndex_1();
	emu_sp += 2;
	memBlock1.s.cs = emu_dx;
	memBlock1.s.ip = emu_ax;

	index = ChunkFile_Open(filename);

	ChunkFile_Read(index, HTOBE32('SINF'), info, 4);

	GFX_Init_SpriteInfo(info[0], info[1]);

	tileSize = (info[1] * (info[0] << 3)) * info[3];

	length = ChunkFile_Seek(index, HTOBE32('SSET'));

	if (g_global->variable_6CD3[memory1 >> 1][memory1 & 0x1] >= length) {
		memBlock1.s.cs = g_global->variable_6C93[memory1 >> 1][memory1 & 0x1];
		memBlock1.s.ip = g_global->variable_6CD3[memory1 >> 1][memory1 & 0x1] - length - 8;

		memBlock1 = Tools_GetSmallestIP(memBlock1);
		memBlock1.s.ip = 0x0;

		ChunkFile_Read(index, HTOBE32('SSET'), (void *)emu_get_memorycsip(memBlock1), length);

		tileCount = Sprites_Decode(emu_get_memorycsip(memBlock1), emu_get_memorycsip(memBlock2), memBlock1, memBlock2) / tileSize;
		g_global->iconUsedMemory = tileSize * tileCount;

		if (g_global->iconRTBL.csip != 0x0 && g_global->iconRTBLFreed == 0) {
			emu_push(g_global->iconRTBL.s.cs); emu_push(g_global->iconRTBL.s.ip);
			emu_push(emu_cs); emu_push(0x0187); emu_cs = 0x23E1; emu_Tools_Free();
			emu_sp += 4;

			g_global->iconRTBLFreed = 1;
		}

		if (g_global->iconRPAL.csip != 0x0 && g_global->iconRPALFreed == 0) {
			emu_push(g_global->iconRPAL.s.cs); emu_push(g_global->iconRPAL.s.ip);
			emu_push(emu_cs); emu_push(0x01AC); emu_cs = 0x23E1; emu_Tools_Free();
			emu_sp += 4;

			g_global->iconRPALFreed = 1;
		}

		if (g_global->variable_6CD3[memory2 >> 1][memory2 & 0x1] - g_global->iconUsedMemory > tileCount) {
			g_global->iconRTBL = memBlock2;
			g_global->iconRTBL.csip += g_global->iconUsedMemory;

			g_global->iconRTBL = Tools_GetSmallestIP(g_global->iconRTBL);

			g_global->iconUsedMemory += (tileCount + 0xF) & 0xFFFFFFF0;

			length = ChunkFile_Seek(index, HTOBE32('RPAL'));

			if (g_global->variable_6CD3[memory2 >> 1][memory2 & 0x1] - g_global->iconUsedMemory > length) {
				g_global->iconRPAL = memBlock2;
				g_global->iconRPAL.csip += g_global->iconUsedMemory;

				g_global->iconRPAL = Tools_GetSmallestIP(g_global->iconRPAL);
				g_global->iconRPAL.s.ip = 0x0;

				g_global->iconUsedMemory += length;
			} else {
				emu_push(0x30);
				emu_push(length >> 16); emu_push(length & 0xFFFF);
				emu_push(emu_cs); emu_push(0x02B0); emu_cs = 0x23E1; emu_Tools_Malloc();
				emu_sp += 6;
				g_global->iconRPAL.s.cs = emu_dx;
				g_global->iconRPAL.s.ip = emu_ax;

				g_global->iconRPALFreed = 0;
			}
		} else {
			emu_push(0x30);
			emu_push(0); emu_push(tileCount);
			emu_push(emu_cs); emu_push(0x02CF); emu_cs = 0x23E1; emu_Tools_Malloc();
			emu_sp += 6;
			g_global->iconRTBL.s.cs = emu_dx;
			g_global->iconRTBL.s.ip = emu_ax;

			g_global->iconRTBLFreed = 0;

			emu_push(0x30);
			emu_push((length >> 16)); emu_push((length & 0xFFFF));
			emu_push(emu_cs); emu_push(0x02EE); emu_cs = 0x23E1; emu_Tools_Malloc();
			emu_sp += 6;
			g_global->iconRPAL.s.cs = emu_dx;
			g_global->iconRPAL.s.ip = emu_ax;

			g_global->iconRPALFreed = 0;
		}

		ChunkFile_Read(index, HTOBE32('RTBL'), (void *)emu_get_memorycsip(g_global->iconRTBL), tileCount);
		ChunkFile_Read(index, HTOBE32('RPAL'), (void *)emu_get_memorycsip(g_global->iconRPAL), length);

		GFX_Init_Sprites(memory2, (void *)emu_get_memorycsip(g_global->iconRPAL), (void *)emu_get_memorycsip(g_global->iconRTBL));
	}

	ChunkFile_Close(index);

	return tileCount;
}

/**
 * Initialize data block.
 * @param block_csip Start point of the data block (256 bytes long)
 */
static void Sprites_Init_DataBlock(csip32 block_csip)
{
	uint8 *block = emu_get_memorycsip(block_csip);
	int16 i;

	if (block == NULL) return;

	for (i = 0; i < 256; i++) {
		uint8 low  = ((i + 0x10) & 0xE0) >> 5;
		uint8 hi   = ((i + 0x08) & 0xF0) >> 4;
		*block = (hi << 4) | low;
		block++;
	}
}

/**
 * Loads the sprites for tiles.
 */
void Sprites_LoadTiles()
{
	csip32 memBlock;
	uint32 memBlockFree;
	uint32 length;
	uint16 *iconMap;

	if (g_global->iconLoaded != 0) return;

	g_global->iconLoaded = 1;

	emu_push(5);
	emu_push(emu_cs); emu_push(0x0D42); emu_cs = 0x252E; emu_Screen_GetSegment_ByIndex_1();
	emu_sp += 2;
	memBlock.s.cs = emu_dx;
	memBlock.s.ip = emu_ax;

	memBlockFree = g_global->variable_6CD3[2][1];

	g_global->iconUsedMemory = 0;

	Sprites_LoadICNFile("ICON.ICN", 5, 5);

	memBlock.csip += g_global->iconUsedMemory;
	memBlockFree  -= g_global->iconUsedMemory;

	g_global->iconMap = memBlock;

	length = File_ReadBlockFile("ICON.MAP", (void *)emu_get_memorycsip(g_global->iconMap), memBlockFree);

	iconMap = (uint16 *)emu_get_memorycsip(g_global->iconMap);
	g_global->variable_39F2 = iconMap[iconMap[7] + 16];
	g_global->variable_39F4 = iconMap[iconMap[10]];
	g_global->variable_39F8 = iconMap[iconMap[8] + 2];
	g_global->variable_39F6 = iconMap[iconMap[9]];
	g_global->variable_39FA = iconMap[iconMap[6]];

	memBlockFree  -= length;
	memBlock.s.ip += length;

	memBlock = Tools_GetSmallestIP(memBlock);

	g_global->variable_3952 = memBlock;

	memBlockFree  -= 256;
	memBlock.s.ip += 256;

	Sprites_Init_DataBlock(g_global->variable_3952);

	{
		csip32 functions;
		functions.csip = 0x353F6168; /* g_global->scriptFunctionsUnit */
		length = Script_LoadFromFile("UNIT.EMC", &g_global->scriptUnit, functions, memBlock);
	}

	memBlockFree  -= length;
	memBlock.s.ip += length;
}

/**
 * Unloads the sprites for tiles.
 */
void Sprites_UnloadTiles()
{
	g_global->iconLoaded = 0;
}

/**
 * Loads a CPS file.
 *
 * @param filename The name of the file to load.
 * @param memory1 The index of a memory block where to store loaded data.
 * @param memory2 The index of a memory block where to store loaded data.
 * @param palette Where to store the palette, if any.
 * @return The size of the loaded image.
 */
uint32 Sprites_LoadCPSFile(const char *filename, uint16 memory1, uint16 memory2, uint8 *palette)
{
	uint8 index;
	csip32 memBlock1;
	csip32 memBlock2;
	csip32 loc0A;
	uint16 size;
	void *buf;
	uint16 paletteSize;

	emu_push(memory1);
	emu_push(emu_cs); emu_push(0x010A); emu_cs = 0x252E; emu_Screen_GetSegment_ByIndex_1();
	emu_sp += 2;
	memBlock1.s.cs = emu_dx;
	memBlock1.s.ip = emu_ax;
	buf = (void *)emu_get_memorycsip(memBlock1);

	index = File_Open(filename, 1);

	File_Read(index, &size, 2);

	File_Read(index, buf, 8);

	size -= 8;

	paletteSize = ((uint16 *)buf)[3];

	if (palette != NULL && paletteSize != 0) {
		File_Read(index, palette, paletteSize);
	} else {
		File_Seek(index, paletteSize, 1);
	}

	((uint16 *)buf)[3] = 0;
	size -= paletteSize;

	loc0A.s.cs = g_global->variable_6C93[memory1 >> 1][memory1 & 0x1];
	loc0A.s.ip = g_global->variable_6CD3[memory1 >> 1][memory1 & 0x1] - size - 8;

	loc0A = Tools_GetSmallestIP(loc0A);
	loc0A.s.ip = 0x0;

	Tools_Memmove(memBlock1, loc0A, 8);

	File_Read(index, (void *)(emu_get_memorycsip(loc0A) + 8), size);

	File_Close(index);

	emu_push(memory2);
	emu_push(emu_cs); emu_push(0x0221); emu_cs = 0x252E; emu_Screen_GetSegment_ByIndex_1();
	emu_sp += 2;
	memBlock2.s.cs = emu_dx;
	memBlock2.s.ip = emu_ax;

	return Sprites_Decode(emu_get_memorycsip(loc0A), emu_get_memorycsip(memBlock2), loc0A, memBlock2);
}

/**
 * Loads an image.
 *
 * @param filename The name of the file to load.
 * @param memory1 The index of a memory block where to store loaded data.
 * @param memory2 The index of a memory block where to store loaded data.
 * @param palette Where to store the palette, if any.
 * @param arg12 ??.
 * @return The size of the loaded image.
 */
uint16 Sprites_LoadImage(const char *filename, uint16 memory1, uint16 memory2, uint8 *palette, uint16 arg12)
{
	uint8 index;
	uint32 header;

	VARIABLE_NOT_USED(arg12); /* used in unresolved code */

	index = File_Open(filename, 1);
	if (index == 0xFF) return 0;

	File_Read(index, &header, 4);
	File_Close(index);

	if (header == HTOBE32('FORM')) {
		/* Unresolved jump */ emu_ip = 0x0299; emu_last_cs = 0xB4CA; emu_last_ip = 0x0263; emu_last_length = 0x001E; emu_last_crc = 0x9B59; emu_call(); return 0;
	}

	return Sprites_LoadCPSFile(filename, memory1, memory2, (g_global->variable_6C76 == 3) ? palette : NULL) / 8000;
}

uint8 Sprites_B4CD_17DC(uint8 orientation)
{
	return emu_get_memorycsip(g_global->variable_3952)[orientation] & 0x7;
}

uint8 Sprites_B4CD_17F7(uint8 orientation)
{
	return emu_get_memorycsip(g_global->variable_3952)[orientation] >> 4;
}

void Sprites_SetMouseSprite(uint16 hotSpotX, uint16 hotSpotY, csip32 spritecsip)
{
	uint8 *sprite = emu_get_memorycsip(spritecsip);
	uint16 size;

	if (sprite == NULL || g_global->variable_7097 != 0) return;

	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);

	while (g_global->mouseLock != 0) sleep(0);

	g_global->mouseLock++;

	emu_push(g_global->variable_7094);
	emu_push(g_global->variable_7092);
	emu_push(emu_cs); emu_push(0x0042); emu_cs = 0x22A6; f__22A6_0FD7_0043_ACF9();
	emu_sp += 4;

	emu_push(emu_cs); emu_push(0x004A); emu_cs = 0x2B6C; f__2B6C_000E_0045_C1FE();

	emu_push(emu_cs); emu_push(0x004E); emu_cs = 0x22A6; f__22A6_0FAE_0027_2378();

	emu_push(sprite[5]);
	emu_push((*(uint16 *)(sprite + 3) << 3) + 2);
	emu_push(emu_cs); emu_push(0x0068); emu_cs = 0x22A6; f__22A6_127B_0036_F8C9();
	emu_sp += 4;
	size = emu_ax;

	if (g_global->variable_705A < size) {
		if (g_global->variable_708A.csip != 0x0) {
			emu_push(g_global->variable_708A.s.cs); emu_push(g_global->variable_708A.s.ip);
			emu_push(emu_cs); emu_push(0x0088); emu_cs = 0x23E1; emu_Tools_Free();
			emu_sp += 4;

			g_global->variable_708A.csip = 0x0;
			g_global->variable_705A = 0;
		}

		emu_push(emu_cs); emu_push(0x00A4); emu_cs = 0x23E1; emu_Tools_GetFreeMemory();
		if (((emu_dx << 16) | emu_ax) < size) goto end;

		emu_push(0);
		emu_push(0); emu_push(size);
		emu_push(emu_cs); emu_push(0x00BE); emu_cs = 0x23E1; emu_Tools_Malloc();
		emu_sp += 6;
		if (emu_dx == 0) goto end;

		g_global->variable_708A.s.cs = emu_dx;
		g_global->variable_708A.s.ip = emu_ax;
		g_global->variable_705A = size;
	}

	size = *(uint16 *)(sprite + 8) + 10;
	if ((*(uint16 *)sprite & 0x1) != 0) size += 16;

	if (g_global->variable_705C < size) {
		if (g_global->variable_708E.csip != 0x0) {
			emu_push(g_global->variable_708E.s.cs); emu_push(g_global->variable_708E.s.ip);
			emu_push(emu_cs); emu_push(0x0104); emu_cs = 0x23E1; emu_Tools_Free();
			emu_sp += 4;

			g_global->variable_708E.csip = 0x0;
			g_global->variable_705C = 0;
		}

		emu_push(emu_cs); emu_push(0x0120); emu_cs = 0x23E1; emu_Tools_GetFreeMemory();
		if (((emu_dx << 16) | emu_ax) < size) goto end;

		emu_push(0);
		emu_push(0); emu_push(size);
		emu_push(emu_cs); emu_push(0x013A); emu_cs = 0x23E1; emu_Tools_Malloc();
		emu_sp += 6;
		if (emu_dx == 0) goto end;

		g_global->variable_708E.s.cs = emu_dx;
		g_global->variable_708E.s.ip = emu_ax;
		g_global->variable_705C = size;
	}

	if ((*(uint16 *)sprite & 0x2) != 0) {
		memcpy(emu_get_memorycsip(g_global->variable_708E), sprite, *(uint16 *)(sprite + 6) * 2);
	} else {
		uint8 *dst = emu_get_memorycsip(g_global->variable_708E);
		uint8 *buf = emu_get_memorycsip(g_global->variable_6F18);
		uint16 flags = *(uint16 *)sprite | 0x2;

		*(uint16 *)dst = flags;
		dst += 2;
		sprite += 2;

		memcpy(dst, sprite, 6);
		dst += 6;
		sprite += 6;

		size = *(uint16 *)sprite;
		*(uint16 *)dst = size;
		dst += 2;
		sprite += 2;

		if ((flags & 0x1) != 0) {
			memcpy(dst, sprite, 16);
			dst += 16;
			sprite += 16;
		}

		Format80_Decode(buf, sprite, size);

		memcpy(dst, buf, size);
	}

	g_global->variable_7078 = hotSpotX;
	g_global->variable_707A = hotSpotY;

	sprite = emu_get_memorycsip(g_global->variable_708E);
	g_global->variable_7074 = sprite[5];
	g_global->variable_7076 = (*(uint16 *)(sprite + 3) << 3) + 2;

	emu_push(g_global->variable_7094);
	emu_push(g_global->variable_7092);
	emu_push(emu_cs); emu_push(0x01E5); emu_cs = 0x22A6; f__22A6_0FD7_0043_ACF9();
	emu_sp += 4;

	emu_push(emu_cs); emu_push(0x01ED); emu_cs = 0x2B6C; f__2B6C_006E_002E_4FBC();

	emu_push(emu_cs); emu_push(0x01F1); emu_cs = 0x22A6; f__22A6_0FAE_0027_2378();

end:
	g_global->mouseLock--;
}

void Sprites_CPS_LoadRegionClick()
{
	csip32 memBlock;
	uint8 *buf;
	uint8 i;

	emu_push(5);
	emu_push(emu_cs); emu_push(0x1038); emu_cs = 0x252E; emu_Screen_GetSegment_ByIndex_1();
	emu_sp += 2;
	memBlock.s.cs = emu_dx;
	memBlock.s.ip = emu_ax;
	g_global->RGNCLK_CPS = memBlock;

	buf = emu_get_memorycsip(g_global->RGNCLK_CPS);
	Sprites_LoadCPSFile("RGNCLK.CPS", 5, 5, NULL);
	for (i = 0; i < 120; i++) memcpy(buf + (i * 304), buf + 7688 + (i * 320), 304);
	memBlock.s.ip += i * 304;
	memBlock = Tools_GetSmallestIP(memBlock);
	g_global->PIECES_SHP = memBlock;

	buf = emu_get_memorycsip(g_global->PIECES_SHP);
	memBlock.s.ip += File_ReadFile("PIECES.SHP", buf) & 0xFFFF;
	memBlock = Tools_GetSmallestIP(memBlock);
	g_global->ARROWS_SHP = memBlock;

	buf = emu_get_memorycsip(g_global->ARROWS_SHP);
	memBlock.s.ip += File_ReadFile("ARROWS.SHP", buf) & 0xFFFF;
	memBlock = Tools_GetSmallestIP(memBlock);
	g_global->REGION_INI = memBlock;

	buf = emu_get_memorycsip(g_global->REGION_INI);
	sprintf((char *)g_global->variable_9939, "REGION%c.INI", emu_get_memorycsip(g_houseInfo[g_global->playerHouseID].name)[0]);
	memBlock.s.ip += File_ReadFile((char *)g_global->variable_9939, buf) & 0xFFFF;
	memBlock = Tools_GetSmallestIP(memBlock);
	g_global->variable_81D2 = memBlock;

	emu_push(emu_cs); emu_push(0x1161); emu_cs = 0x3503; overlay(0x3503, 0); f__B503_122D_002D_E562();
}
