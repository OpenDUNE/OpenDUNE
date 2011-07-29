/* $Id$ */

/** @file src/sprites.c Sprite routines. */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "os/common.h"
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
uint8 *g_spriteBuffer;
uint8 *g_iconRTBL = NULL;
uint8 *g_iconRPAL = NULL;
uint8 *g_spriteInfo = NULL;
uint16 *g_iconMap = NULL;

void *g_mouseSprite = NULL;
void *g_mouseSpriteBuffer = NULL;

uint16 s_mouseSpriteBufferSize = 0;
uint16 s_mouseSpriteSize = 0;

uint8 s_orientationTable[256];

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
 * @param sprites The array where to store CSIP for each loaded sprite.
 */
void Sprites_Load(uint16 index, uint8 **sprites)
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
	uint8 *buffer;
	uint16 i;

	buffer = emu_get_memorycsip(Screen_GetSegment_ByIndex_1(7));

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
static uint32 Sprites_Decode(uint8 *source, uint8 *dest)
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

#if 0
		/* XXX -- In Dune2, this type of sprite was never used, so it is unknown how to decode it. */
		case 0x3:
			emu_push(dest_csip.s.cs);
			emu_push(source_csip.s.cs);
			/* Unresolved call */ emu_push(emu_cs); emu_push(0x02BB); emu_cs = 0x2BD6; emu_ip = 0x0100; emu_last_cs = 0x253D; emu_last_ip = 0x02B6; emu_last_length = 0x0011; emu_last_crc = 0xFC80; emu_call();
			emu_sp += 4;
			size = emu_ax;
			break;
#endif

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
 * @param screenID The index of a memory block where to store loaded sprites.
 */
static void Sprites_LoadICNFile(const char *filename)
{
	uint8  fileIndex;

	uint32 spriteInfoLength;
	uint32 tableLength;
	uint32 paletteLength;
	int8   info[4];

	fileIndex = ChunkFile_Open(filename);

	/* Get the length of the chunks */
	spriteInfoLength = ChunkFile_Seek(fileIndex, HTOBE32('SSET'));
	tableLength      = ChunkFile_Seek(fileIndex, HTOBE32('RTBL'));
	paletteLength    = ChunkFile_Seek(fileIndex, HTOBE32('RPAL'));

	/* Read the header information */
	ChunkFile_Read(fileIndex, HTOBE32('SINF'), info, 4);
	GFX_Init_SpriteInfo(info[0], info[1]);

	/* Get the SpriteInfo chunk */
	free(g_spriteInfo);
	g_spriteInfo = calloc(1, spriteInfoLength);
	ChunkFile_Read(fileIndex, HTOBE32('SSET'), g_spriteInfo, spriteInfoLength);
	Sprites_Decode(g_spriteInfo, g_spriteInfo);

	/* Get the Table chunk */
	free(g_iconRTBL);
	g_iconRTBL = calloc(1, tableLength);
	ChunkFile_Read(fileIndex, HTOBE32('RTBL'), g_iconRTBL, tableLength);

	/* Get the Palette chunk */
	free(g_iconRPAL);
	g_iconRPAL = calloc(1, paletteLength);
	ChunkFile_Read(fileIndex, HTOBE32('RPAL'), g_iconRPAL, paletteLength);

	ChunkFile_Close(fileIndex);
}

/**
 * Initialize the orientation table.
 */
static void Orientation_InitTable()
{
	uint8 *block = s_orientationTable;
	int16 i;

	for (i = 0; i < 256; i++) {
		uint8 low  = ((i + 16) / 32) & 0x7;
		uint8 hi   = ((i + 8)  / 16) & 0xF;

		*block++ = (hi << 4) | low;
	}
}

static bool _iconLoaded = false;

/**
 * Loads the sprites for tiles.
 */
void Sprites_LoadTiles()
{
	if (_iconLoaded) return;

	_iconLoaded = true;

	Sprites_LoadICNFile("ICON.ICN");

	free(g_iconMap);
	g_iconMap = File_ReadWholeFile_Pure("ICON.MAP");

	g_global->variable_39F2     = g_iconMap[g_iconMap[ICM_ICONGROUP_FOG_OF_WAR] + 16];
	g_global->bloomSpriteID     = g_iconMap[g_iconMap[ICM_ICONGROUP_SPICE_BLOOM]];
	g_global->builtSlabSpriteID = g_iconMap[g_iconMap[ICM_ICONGROUP_CONCRETE_SLAB] + 2];
	g_global->landscapeSpriteID = g_iconMap[g_iconMap[ICM_ICONGROUP_LANDSCAPE]];
	g_global->wallSpriteID      = g_iconMap[g_iconMap[ICM_ICONGROUP_WALLS]];

	Orientation_InitTable();

	Script_LoadFromFile("UNIT.EMC", g_scriptUnit, g_scriptFunctionsUnit, emu_get_memorycsip(Screen_GetSegment_ByIndex_1(5)));
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
 * @param screenID The index of a memory block where to store loaded data.
 * @param palette Where to store the palette, if any.
 * @return The size of the loaded image.
 */
static uint32 Sprites_LoadCPSFile(const char *filename, uint16 screenID, uint8 *palette)
{
	uint8 index;
	csip32 loc0A;
	uint16 size;
	void *buffer;
	uint16 paletteSize;

	buffer = (void *)emu_get_memorycsip(Screen_GetSegment_ByIndex_1(screenID));

	index = File_Open(filename, 1);

	File_Read(index, &size, 2);

	File_Read(index, buffer, 8);

	size -= 8;

	paletteSize = ((uint16 *)buffer)[3];

	if (palette != NULL && paletteSize != 0) {
		File_Read(index, palette, paletteSize);
	} else {
		File_Seek(index, paletteSize, 1);
	}

	((uint16 *)buffer)[3] = 0;
	size -= paletteSize;

	loc0A.s.cs = g_global->variable_6C93[screenID >> 1][screenID & 0x1];
	loc0A.s.ip = g_global->variable_6CD3[screenID >> 1][screenID & 0x1] - size - 8;

	loc0A = Tools_GetSmallestIP(loc0A);
	loc0A.s.ip = 0x0;

	memmove(emu_get_memorycsip(loc0A), buffer, 8);

	File_Read(index, (void *)(emu_get_memorycsip(loc0A) + 8), size);

	File_Close(index);

	return Sprites_Decode(emu_get_memorycsip(loc0A), buffer);
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
uint16 Sprites_LoadImage(const char *filename, uint16 screenID, uint8 *palette, uint16 arg12)
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

	return Sprites_LoadCPSFile(filename, screenID, palette) / 8000;
}

void Sprites_SetMouseSprite(uint16 hotSpotX, uint16 hotSpotY, uint8 *sprite)
{
	uint16 size;

	if (sprite == NULL || g_global->variable_7097 != 0) return;

	while (g_mouseLock != 0) sleep(0);

	g_mouseLock++;

	GUI_Mouse_Hide();

	size = GFX_GetSize((*(uint16 *)(sprite + 3) >> 3) + 2, sprite[5]);

	if (s_mouseSpriteBufferSize < size) {
		if (g_mouseSpriteBuffer != NULL) {
			free(g_mouseSpriteBuffer);
			g_mouseSpriteBuffer = NULL;
			s_mouseSpriteBufferSize = 0;
		}

		g_mouseSpriteBuffer = malloc(size);
		s_mouseSpriteBufferSize = size;
	}

	size = *(uint16 *)(sprite + 8) + 10;
	if ((*(uint16 *)sprite & 0x1) != 0) size += 16;

	if (s_mouseSpriteSize < size) {
		if (g_mouseSprite != NULL) {
			free(g_mouseSprite);
			g_mouseSprite = NULL;
			s_mouseSpriteSize = 0;
		}

		g_mouseSprite = malloc(size);
		s_mouseSpriteSize = size;
	}

	if ((*(uint16 *)sprite & 0x2) != 0) {
		memcpy(g_mouseSprite, sprite, *(uint16 *)(sprite + 6) * 2);
	} else {
		uint8 *dst = (uint8 *)g_mouseSprite;
		uint8 *buf = g_spriteBuffer;
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

	sprite = g_mouseSprite;
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
	Sprites_LoadCPSFile("RGNCLK.CPS", 5, NULL);
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

void Sprite_SetSpriteBuffer(uint8 *buffer)
{
	g_spriteBuffer = buffer;
}

/**
 * Convert an orientation that goes from 0 .. 255 to one that goes from 0 .. 7.
 * @param orientation The 256-based orientation.
 * @return A 8-based orientation.
 */
uint8 Orientation_Orientation256ToOrientation8(uint8 orientation)
{
	return s_orientationTable[orientation] & 0x7;
}

/**
 * Convert an orientation that goes from 0 .. 255 to one that goes from 0 .. 15.
 * @param orientation The 256-based orientation.
 * @return A 16-based orientation.
 */
uint8 Orientation_Orientation256ToOrientation16(uint8 orientation)
{
	return s_orientationTable[orientation] >> 4;
}
