/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "sprites.h"
#include "unknown/unknown.h"
#include "house.h"
#include "pool/house.h"
#include "string.h"
#include "file.h"
#include "tools.h"
#include "os/endian.h"

csip32 *g_sprites = NULL;

extern void f__22A6_0EDB_000A_151A();
extern void f__22A6_1158_0069_1890();
extern void f__253D_023A_0038_2BAE();
extern void f__B4B8_09D0_0012_0D7D();
extern void emu_Tools_Free();
extern void emu_Tools_Malloc();
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
	emu_push(emu_cs); emu_push(0x0A4C); emu_cs = 0x252E; emu_Memory_GetBlock1();
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
	emu_push(emu_cs); emu_push(0x001A); emu_cs = 0x252E; emu_Memory_GetBlock1();
	emu_sp += 2;
	memBlock2.s.cs = emu_dx;
	memBlock2.s.ip = emu_ax;

	emu_push(memory1);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x252E; emu_Memory_GetBlock1();
	emu_sp += 2;
	memBlock1.s.cs = emu_dx;
	memBlock1.s.ip = emu_ax;

	index = ChunkFile_Open(filename);

	ChunkFile_Read(index, HTOBE32('SINF'), info, 4);

	assert(g_global->variable_66DC.csip == 0x22A61158);
	emu_push(0);
	emu_push(0);
	emu_push(info[1]);
	emu_push(info[0]);
	emu_push(emu_cs); emu_push(0x0076); emu_cs = 0x22A6; f__22A6_1158_0069_1890();
	emu_sp += 8;

	tileSize = (info[1] * (info[0] << 3)) * info[3];

	length = ChunkFile_Seek(index, HTOBE32('SSET'));

	if (g_global->variable_6CD3[memory1 >> 1][memory1 & 0x1] >= length) {
		memBlock1.s.cs = g_global->variable_6C93[memory1 >> 1][memory1 & 0x1];
		memBlock1.s.ip = g_global->variable_6CD3[memory1 >> 1][memory1 & 0x1] - length - 8;

		memBlock1 = Tools_GetSmallestIP(memBlock1);
		memBlock1.s.ip = 0x0;

		ChunkFile_Read(index, HTOBE32('SSET'), (void *)emu_get_memorycsip(memBlock1), length);

		emu_push(memBlock2.s.cs); emu_push(memBlock2.s.ip);
		emu_push(memBlock1.s.cs); emu_push(memBlock1.s.ip);
		emu_push(emu_cs); emu_push(0x0149); emu_cs = 0x253D; f__253D_023A_0038_2BAE();
		emu_sp += 8;

		tileCount = ((emu_dx << 16) + emu_ax) / tileSize;
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

		assert(g_global->variable_6674.csip == 0x22A60EDB);
		emu_push(tileCount);
		emu_push(g_global->iconRTBL.s.cs); emu_push(g_global->iconRTBL.s.ip);
		emu_push(g_global->iconRPAL.s.cs); emu_push(g_global->iconRPAL.s.ip);
		emu_push(memory2);
		emu_push(emu_cs); emu_push(0x0358); emu_cs = 0x22A6; f__22A6_0EDB_000A_151A();
		emu_sp += 12;
	}

	ChunkFile_Close(index);

	return tileCount;
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
	emu_push(emu_cs); emu_push(0x0D42); emu_cs = 0x252E; emu_Memory_GetBlock1();
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

	emu_push(g_global->variable_3952.s.cs); emu_push(g_global->variable_3952.s.ip);
	emu_push(emu_cs); emu_push(0x0E8C); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_09D0_0012_0D7D();
	emu_sp += 4;

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
