/* $Id$ */

/** @file src/sprites.c Sprite routines. */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "os/endian.h"
#include "os/sleep.h"
#include "os/strings.h"

#include "sprites.h"

#include "codec/format80.h"
#include "file.h"
#include "mouse.h"
#include "gfx.h"
#include "house.h"
#include "ini.h"
#include "gui/gui.h"
#include "pool/house.h"
#include "string.h"
#include "tools.h"
#include "unknown/unknown.h"

uint8 *g_sprites[355];

/**
 * ??.
 *
 * @param sprite_csip The CSIP of the sprite to work on.
 * @param arg0A_csip ??.
 */
static void Sprites_Remap(uint8 *sprite, uint8 *remap)
{
	uint8 i;

	if (sprite == NULL || remap == NULL) return;

	if ((*sprite & 0x1) == 0) return;

	sprite += 10;

	for (i = 0; i < 16; i++) {
		uint8 offset = *sprite;
		*sprite++ = remap[offset];
	}
}

/**
 * Loads the sprites.
 *
 * @param index The index of the list of sprite files to load.
 * @param memory The index of memory block where to store loaded sprites.
 * @param sprites The array where to store CSIP for each loaded sprite.
 */
void Sprites_Load(uint16 index, uint16 memory, uint8 **sprites)
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

	memBlock = Screen_GetSegment_ByIndex_1(memory);
	buffer = emu_get_memorycsip(memBlock);

	files = spriteFiles[index];

	while (*files != '\0') {
		const HouseInfo *hi;
		uint32 length;
		char bufferText[12];
		char *filename;

		hi = &g_table_houseInfo[(g_playerHouseID == HOUSE_INVALID) ? HOUSE_ATREIDES : g_playerHouseID];

		snprintf(bufferText, sizeof(bufferText), files, hi->name[0]);
		filename = bufferText;

		if (strchr(filename, '.') == NULL) {
			filename = String_GenerateFilename(filename);
		}

		length = File_ReadBlockFile(filename, buffer, 0xFDE8);

		for (i = 0; i < *(uint16 *)buffer; i++) {
			*sprites++ = Sprites_GetSprite(buffer, i);
		}

		files += strlen(files) + 1;
		buffer += length;
	}

	switch (index) {
		case 0:
			for (i = 7; i < 12; i++) Sprites_Remap(g_sprites[i], g_remap);
			break;

		case 2:
			for (i = 111; i < 129; i++) Sprites_Remap(g_sprites[i], g_remap);
			break;

		default: break;
	}
}

/**
 * Gets the given sprite inside the given buffer.
 *
 * @param buffer The buffer containing sprites.
 * @param index The index of the sprite to get.
 * @return The sprite.
 */
uint8 *Sprites_GetSprite(uint8 *buffer, uint16 index)
{
	uint32 offset;

	if (buffer == NULL) return NULL;
	if (*(uint16 *)buffer <= index) return NULL;

	buffer += 2;

	offset = *(uint32*)(buffer + 4 * index);

	if (offset == 0) return NULL;

	return buffer + offset;
}

/**
 * Gets the width of the given sprite.
 *
 * @param sprite The sprite.
 * @return The width.
 */
uint8 Sprite_GetWidth(uint8 *sprite)
{
	if (sprite == NULL) return 0;

	return sprite[3];
}

/**
 * Gets the height of the given sprite.
 *
 * @param sprite The sprite.
 * @return The height.
 */
uint8 Sprite_GetHeight(uint8 *sprite)
{
	if (sprite == NULL) return 0;

	return sprite[2];
}

/**
 * Gets the type of the given sprite.
 *
 * @param sprite The sprite.
 * @return The type.
 */
uint16 Sprites_GetType(uint8 *sprite)
{
	if (sprite == NULL) return 0;

	return *(uint16 *)sprite;
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

	memBlock2 = Screen_GetSegment_ByIndex_1(memory2);
	memBlock1 = Screen_GetSegment_ByIndex_1(memory1);

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
			Tools_Free(g_global->iconRTBL);
			g_global->iconRTBLFreed = 1;
		}

		if (g_global->iconRPAL.csip != 0x0 && g_global->iconRPALFreed == 0) {
			Tools_Free(g_global->iconRPAL);
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
				g_global->iconRPAL = Tools_Malloc(length, 0x30);
				g_global->iconRPALFreed = 0;
			}
		} else {
			g_global->iconRTBL = Tools_Malloc(tileCount, 0x30);
			g_global->iconRTBLFreed = 0;

			g_global->iconRPAL = Tools_Malloc(length, 0x30);
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

static bool _iconLoaded = false;

/**
 * Loads the sprites for tiles.
 */
void Sprites_LoadTiles()
{
	csip32 memBlock;
	uint32 memBlockFree;
	uint32 length;
	uint16 *iconMap;

	if (_iconLoaded) return;

	_iconLoaded = true;

	memBlock = Screen_GetSegment_ByIndex_1(5);

	memBlockFree = g_global->variable_6CD3[2][1];

	g_global->iconUsedMemory = 0;

	Sprites_LoadICNFile("ICON.ICN", 5, 5);

	memBlock.csip += g_global->iconUsedMemory;
	memBlockFree  -= g_global->iconUsedMemory;

	g_global->iconMap = memBlock;

	length = File_ReadBlockFile("ICON.MAP", (void *)emu_get_memorycsip(g_global->iconMap), memBlockFree);

	iconMap = (uint16 *)emu_get_memorycsip(g_global->iconMap);
	g_global->variable_39F2     = iconMap[iconMap[ICM_ICONGROUP_FOG_OF_WAR] + 16];
	g_global->bloomSpriteID     = iconMap[iconMap[ICM_ICONGROUP_SPICE_BLOOM]];
	g_global->builtSlabSpriteID = iconMap[iconMap[ICM_ICONGROUP_CONCRETE_SLAB] + 2];
	g_global->landscapeSpriteID = iconMap[iconMap[ICM_ICONGROUP_LANDSCAPE]];
	g_global->wallSpriteID      = iconMap[iconMap[ICM_ICONGROUP_WALLS]];

	memBlockFree  -= length;
	memBlock.s.ip += length;

	memBlock = Tools_GetSmallestIP(memBlock);

	g_global->variable_3952 = memBlock;

	memBlockFree  -= 256;
	memBlock.s.ip += 256;

	Sprites_Init_DataBlock(g_global->variable_3952);

	length = Script_LoadFromFile("UNIT.EMC", g_scriptUnit, g_scriptFunctionsUnit, emu_get_memorycsip(memBlock));

	memBlockFree  -= length;
	memBlock.s.ip += length;
}

/**
 * Unloads the sprites for tiles.
 */
void Sprites_UnloadTiles()
{
	_iconLoaded = false;
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
	csip32 memBlock;
	csip32 loc0A;
	uint16 size;
	void *buf;
	uint16 paletteSize;

	buf = (void *)emu_get_memorycsip(Screen_GetSegment_ByIndex_1(memory1));

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

	memmove(emu_get_memorycsip(loc0A), buf, 8);

	File_Read(index, (void *)(emu_get_memorycsip(loc0A) + 8), size);

	File_Close(index);

	memBlock = Screen_GetSegment_ByIndex_1(memory2);

	return Sprites_Decode(emu_get_memorycsip(loc0A), emu_get_memorycsip(memBlock), loc0A, memBlock);
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

	return Sprites_LoadCPSFile(filename, memory1, memory2, palette) / 8000;
}

uint8 Sprites_B4CD_17DC(uint8 orientation)
{
	return emu_get_memorycsip(g_global->variable_3952)[orientation] & 0x7;
}

uint8 Sprites_B4CD_17F7(uint8 orientation)
{
	return emu_get_memorycsip(g_global->variable_3952)[orientation] >> 4;
}

void Sprites_SetMouseSprite(uint16 hotSpotX, uint16 hotSpotY, uint8 *sprite)
{
	uint16 size;

	if (sprite == NULL || g_global->variable_7097 != 0) return;

	while (g_mouseLock != 0) sleep(0);

	g_mouseLock++;

	GUI_Mouse_Hide();

	size = GFX_GetSize((*(uint16 *)(sprite + 3) >> 3) + 2, sprite[5]);

	if (g_global->variable_705A < size) {
		if (g_global->mouseSpriteBuffer.csip != 0x0) {
			Tools_Free(g_global->mouseSpriteBuffer);
			g_global->mouseSpriteBuffer.csip = 0x0;
			g_global->variable_705A = 0;
		}

		g_global->mouseSpriteBuffer = Tools_Malloc(size, 0x0);
		g_global->variable_705A = size;
	}

	size = *(uint16 *)(sprite + 8) + 10;
	if ((*(uint16 *)sprite & 0x1) != 0) size += 16;

	if (g_global->variable_705C < size) {
		if (g_global->mouseSprite.csip != 0x0) {
			Tools_Free(g_global->mouseSprite);
			g_global->mouseSprite.csip = 0x0;
			g_global->variable_705C = 0;
		}

		g_global->mouseSprite = Tools_Malloc(size, 0x0);
		g_global->variable_705C = size;
	}

	if ((*(uint16 *)sprite & 0x2) != 0) {
		memcpy(emu_get_memorycsip(g_global->mouseSprite), sprite, *(uint16 *)(sprite + 6) * 2);
	} else {
		uint8 *dst = emu_get_memorycsip(g_global->mouseSprite);
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

	g_global->mouseSpriteHotspotX = hotSpotX;
	g_global->mouseSpriteHotspotY = hotSpotY;

	sprite = emu_get_memorycsip(g_global->mouseSprite);
	g_global->mouseHeight = sprite[5];
	g_global->mouseWidth = (*(uint16 *)(sprite + 3) >> 3) + 2;

	GUI_Mouse_Show();

	g_mouseLock--;
}

static void InitRegions()
{
	uint16 *regions = (uint16 *)emu_get_memorycsip(g_global->regions);
	uint16 i;
	char textBuffer[81];

	Ini_GetString("INFO", "TOTAL REGIONS", NULL, textBuffer, lengthof(textBuffer) - 1, (char *)emu_get_memorycsip(g_global->REGION_INI));

	sscanf(textBuffer, "%hu", &regions[0]);

	for (i = 0; i < regions[0]; i++) regions[i + 1] = 0xFFFF;
}

void Sprites_CPS_LoadRegionClick()
{
	csip32 memBlock;
	uint8 *buf;
	uint8 i;
	char filename[16];

	memBlock = Screen_GetSegment_ByIndex_1(5);
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
	snprintf(filename, sizeof(filename), "REGION%c.INI", g_table_houseInfo[g_playerHouseID].name[0]);
	memBlock.s.ip += File_ReadFile(filename, buf) & 0xFFFF;
	memBlock = Tools_GetSmallestIP(memBlock);
	g_global->regions = memBlock;

	InitRegions();
}
