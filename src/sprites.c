/** @file src/sprites.c Sprite routines. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "multichar.h"
#include "types.h"
#include "os/common.h"
#include "os/endian.h"
#include "os/sleep.h"
#include "os/strings.h"
#include "os/error.h"

#include "sprites.h"

#include "opendune.h"
#include "codec/format80.h"
#include "file.h"
#include "gfx.h"
#include "house.h"
#include "ini.h"
#include "input/mouse.h"
#include "gui/gui.h"
#include "script/script.h"
#include "string.h"
#include "tile.h"


uint8 **g_sprites = NULL;
static uint16 s_spritesCount = 0;
uint8 *g_iconRTBL = NULL;
uint8 *g_iconRPAL = NULL;
uint8 *g_tilesPixels = NULL;
uint16 *g_iconMap = NULL;

uint8 *g_fileRgnclkCPS = NULL;
void *g_fileRegionINI = NULL;
uint16 *g_regions = NULL;

uint16 g_veiledTileID;
uint16 g_bloomTileID;
uint16 g_landscapeTileID;
uint16 g_builtSlabTileID;
uint16 g_wallTileID;

void *g_mouseSprite = NULL;
void *g_mouseSpriteBuffer = NULL;

static uint16 s_mouseSpriteSize = 0;
static uint16 s_mouseSpriteBufferSize = 0;

static bool s_iconLoaded = false;

/**
 * Loads the sprites.
 *
 * @param index The index of the list of sprite files to load.
 * @param sprites The array where to store CSIP for each loaded sprite.
 */
static void Sprites_Load(const char *filename, const char *altFilename, uint16 expectedCount)
{
	uint8 *buffer;
	uint16 count;
	uint16 i;
	uint16 size;
	bool oldFormat;	// true for Dune2 v1.0 format

	if (!File_Exists(filename)) {
		if (altFilename != NULL && File_Exists(altFilename)) {
			Warning("%s Does not exists, using %s instead\n", filename, altFilename);
			filename = altFilename;
		} else {
			Warning("%s Does not exists\n", filename);
			s_spritesCount += expectedCount;
			g_sprites = (uint8 **)realloc(g_sprites, s_spritesCount * sizeof(uint8 *));
			for (i = s_spritesCount - expectedCount; i < s_spritesCount; i++) g_sprites[i] = NULL;
			return;
		}
	}
	buffer = File_ReadWholeFile(filename);
	if (buffer == NULL) return;

	count = READ_LE_UINT16(buffer);
	Debug("%s: %d %d\n", filename, count, expectedCount);
	oldFormat = (4 + (uint32)count * 4) != READ_LE_UINT32(buffer + 2);

	s_spritesCount += count;
	g_sprites = (uint8 **)realloc(g_sprites, s_spritesCount * sizeof(uint8 *));

	for (i = 0; i < count; i++) {
		uint8 *dst = NULL;
		uint32 offset = oldFormat ? (uint32)READ_LE_UINT16(buffer + 2 + 2 * i) : READ_LE_UINT32(buffer + 2 + 4 * i);

		if (offset == 0) {
			Warning("Sprites %-12s %3d : Load Error\n", filename, i);
		} else {
			const uint8 *src = buffer + offset;
			if (!oldFormat) src += 2;
			Debug("Sprites %-12s %3d : 0x%04x %2dx%2d %2d %5d %5d\n", filename, i,
			      READ_LE_UINT16(src)/*Flags*/, READ_LE_UINT16(src+3)/*Width*/, src[2], /* height */
			      src[5] /* height */, READ_LE_UINT16(src+6) /* packed size */, READ_LE_UINT16(src+8) /* decoded size */);
			if (g_unpackSHPonLoad && (src[0] & 0x2) == 0) {
				size = READ_LE_UINT16(src+8) + 10;
				if (READ_LE_UINT16(src) & 0x1) {
					size += 16;	/* 16 bytes more for the palette */
				}
				dst = (uint8 *)malloc(size);
				if (dst == NULL) {
					Error("Sprites_Load(%s) failed to allocate %u bytes\n", filename, size);
				} else {
					const uint8 *encoded_data = src;
					uint8 *decoded_data = dst;
					*decoded_data++ = *encoded_data++ | 0x2;	/* the sprite is not Format80 encoded any more */
					memcpy(decoded_data, encoded_data, 5);
					decoded_data += 5;
					WRITE_LE_UINT16(decoded_data, size);  /* new packed size */
					decoded_data += 2;
					encoded_data += 7;
					*decoded_data++ = *encoded_data++;    /* copy pixel size */
					*decoded_data++ = *encoded_data++;
					if (READ_LE_UINT16(src) & 0x1) {
						memcpy(decoded_data, encoded_data, 16);	/* copy palette */
						decoded_data += 16;
						encoded_data += 16;
					}
					Format80_Decode(decoded_data, encoded_data, READ_LE_UINT16(src+8));
				}
			} else {
				size = READ_LE_UINT16(src + 6);	/* "packed" size */
				dst = (uint8 *)malloc(size);
				if (dst == NULL) {
					Error("Sprites_Load(%s) failed to allocate %u bytes\n", filename, size);
				} else {
					memcpy(dst, src, size);
				}
			}
		}

		g_sprites[s_spritesCount - count + i] = dst;
	}
	if (expectedCount == 99 && count == 103) {
		// relocation of BTTN when loading SHAPES.SHP of Dune2 v1.0
		memcpy(g_sprites + 7, g_sprites + (s_spritesCount - count + 94), 4 * sizeof(uint8 *));
		memmove(g_sprites + (s_spritesCount - count + 94), g_sprites + (s_spritesCount - count + 98), (count - 98) * sizeof(uint8 *));
		s_spritesCount -= 4;
	} else if (expectedCount != count) {
		Warning("Sprites %-12s : %d sprites expected, found %d\n", filename, expectedCount, count);
	}

	free(buffer);
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
			size = READ_LE_UINT32(source);
			source += 4;
			source += READ_LE_UINT16(source);
			source += 2;
			memmove(dest, source, size);
			break;

		case 0x4:
			source += 6;
			source += READ_LE_UINT16(source);
			source += 2;
			size = Format80_Decode(dest, source, 0xFFFF);
			break;

		default: break;
	}

	return size;
}

/**
 * Loads an ICN file.
 * NOTE : should be called "tiles"
 *
 * @param filename The name of the file to load.
 * @param screenID The index of a memory block where to store loaded sprites.
 */
static void Tiles_LoadICNFile(const char *filename)
{
	uint8  fileIndex;

	uint32 tilesDataLength;
	uint32 tableLength;
	uint32 paletteLength;
	int8   info[4];

	fileIndex = ChunkFile_Open(filename);

	/* Get the length of the chunks */
	tilesDataLength = ChunkFile_Seek(fileIndex, HTOBE32(CC_SSET));
	tableLength     = ChunkFile_Seek(fileIndex, HTOBE32(CC_RTBL));
	paletteLength   = ChunkFile_Seek(fileIndex, HTOBE32(CC_RPAL));

	/* Read the header information */
	ChunkFile_Read(fileIndex, HTOBE32(CC_SINF), info, 4);
	GFX_Init_TilesInfo(info[0], info[1]);

	/* Get the SpritePixels chunk */
	free(g_tilesPixels);
	g_tilesPixels = calloc(1, tilesDataLength);
	ChunkFile_Read(fileIndex, HTOBE32(CC_SSET), g_tilesPixels, tilesDataLength);
	tilesDataLength = Sprites_Decode(g_tilesPixels, g_tilesPixels);
	/*g_tilesPixels = realloc(g_tilesPixels, tilesDataLength);*/

	/* Get the Table chunk */
	free(g_iconRTBL);
	g_iconRTBL = calloc(1, tableLength);
	ChunkFile_Read(fileIndex, HTOBE32(CC_RTBL), g_iconRTBL, tableLength);

	/* Get the Palette chunk */
	free(g_iconRPAL);
	g_iconRPAL = calloc(1, paletteLength);
	ChunkFile_Read(fileIndex, HTOBE32(CC_RPAL), g_iconRPAL, paletteLength);

	ChunkFile_Close(fileIndex);
}

/**
 * Loads the sprites for tiles.
 */
void Sprites_LoadTiles(void)
{
	if (s_iconLoaded) return;

	s_iconLoaded = true;

	Tiles_LoadICNFile("ICON.ICN");

	free(g_iconMap);
	g_iconMap = File_ReadWholeFileLE16("ICON.MAP");

	g_veiledTileID    = g_iconMap[g_iconMap[ICM_ICONGROUP_FOG_OF_WAR] + 16];
	g_bloomTileID     = g_iconMap[g_iconMap[ICM_ICONGROUP_SPICE_BLOOM]];
	g_builtSlabTileID = g_iconMap[g_iconMap[ICM_ICONGROUP_CONCRETE_SLAB] + 2];
	g_landscapeTileID = g_iconMap[g_iconMap[ICM_ICONGROUP_LANDSCAPE]];
	g_wallTileID      = g_iconMap[g_iconMap[ICM_ICONGROUP_WALLS]];

	Script_LoadFromFile("UNIT.EMC", g_scriptUnit, g_scriptFunctionsUnit, GFX_Screen_Get_ByIndex(SCREEN_2));
}

/**
 * Unloads the sprites for tiles.
 */
void Sprites_UnloadTiles(void)
{
	s_iconLoaded = false;
}

/**
 * Loads a CPS file.
 *
 * @param filename The name of the file to load.
 * @param screenID The index of a memory block where to store loaded data.
 * @param palette Where to store the palette, if any.
 * @return The size of the loaded image.
 */
static uint32 Sprites_LoadCPSFile(const char *filename, Screen screenID, uint8 *palette)
{
	uint8 index;
	uint16 size;
	uint8 *buffer;
	uint8 *buffer2;
	uint16 paletteSize;

	buffer = GFX_Screen_Get_ByIndex(screenID);

	index = File_Open(filename, FILE_MODE_READ);
	if (index == FILE_INVALID) {
		Warning("Failed to open %s\n", filename);
		return 0;
	}

	size = File_Read_LE16(index);

	File_Read(index, buffer, 8);

	size -= 8;

	paletteSize = READ_LE_UINT16(buffer + 6);

	if (palette != NULL && paletteSize != 0) {
		File_Read(index, palette, paletteSize);
	} else {
		File_Seek(index, paletteSize, 1);
	}

	buffer[6] = 0;	/* dont read palette next time */
	buffer[7] = 0;
	size -= paletteSize;

	buffer2 = GFX_Screen_Get_ByIndex(screenID);
	buffer2 += GFX_Screen_GetSize_ByIndex(screenID) - size - 8;

	memmove(buffer2, buffer, 8);
	File_Read(index, buffer2 + 8, size);

	File_Close(index);

	return Sprites_Decode(buffer2, buffer);
}

/**
 * Loads an image.
 *
 * @param filename The name of the file to load.
 * @param memory1 The index of a memory block where to store loaded data.
 * @param memory2 The index of a memory block where to store loaded data.
 * @param palette Where to store the palette, if any.
 * @return The size of the loaded image.
 */
uint16 Sprites_LoadImage(const char *filename, Screen screenID, uint8 *palette)
{
#if 0
	uint8 index;
	uint32 header;

	index = File_Open(filename, FILE_MODE_READ);
	if (index == FILE_INVALID) return 0;

	File_Read(index, &header, 4);
	File_Close(index);
#endif
	return Sprites_LoadCPSFile(filename, screenID, palette) / 8000;
}

void Sprites_SetMouseSprite(uint16 hotSpotX, uint16 hotSpotY, const uint8 *sprite)
{
	uint16 size;

	if (sprite == NULL || g_mouseDisabled != 0) return;

	while (g_mouseLock != 0) sleepIdle();

	g_mouseLock++;

	GUI_Mouse_Hide();

	size = GFX_GetSize(READ_LE_UINT16(sprite + 3) + 16, sprite[5]);

	if (s_mouseSpriteBufferSize < size) {
		g_mouseSpriteBuffer = realloc(g_mouseSpriteBuffer, size);
		s_mouseSpriteBufferSize = size;
	}

	size = READ_LE_UINT16(sprite + 8) + 10;
	if ((*sprite & 0x1) != 0) size += 16;

	if (s_mouseSpriteSize < size) {
		g_mouseSprite = realloc(g_mouseSprite, size);
		s_mouseSpriteSize = size;
	}

	if ((*sprite & 0x2) != 0) {
		memcpy(g_mouseSprite, sprite, READ_LE_UINT16(sprite + 6));
	} else {
		uint8 *dst = (uint8 *)g_mouseSprite;
		uint8 flags = sprite[0] | 0x2;

		dst[0] = flags;
		dst[1] = sprite[1];
		dst += 2;
		sprite += 2;

		memcpy(dst, sprite, 6);
		dst += 6;
		sprite += 6;

		size = READ_LE_UINT16(sprite);
		dst[0] = sprite[0];
		dst[1] = sprite[1];
		dst += 2;
		sprite += 2;

		if ((flags & 0x1) != 0) {
			memcpy(dst, sprite, 16);
			dst += 16;
			sprite += 16;
		}

		Format80_Decode(dst, sprite, size);
	}

	g_mouseSpriteHotspotX = hotSpotX;
	g_mouseSpriteHotspotY = hotSpotY;

	sprite = g_mouseSprite;
	g_mouseHeight = sprite[5];
	g_mouseWidth = (READ_LE_UINT16(sprite + 3) >> 3) + 2;

	GUI_Mouse_Show();

	g_mouseLock--;
}

static void InitRegions(void)
{
	uint16 *regions = g_regions;
	uint16 i;
	char textBuffer[81];

	Ini_GetString("INFO", "TOTAL REGIONS", NULL, textBuffer, lengthof(textBuffer) - 1, g_fileRegionINI);

	sscanf(textBuffer, "%hu", &regions[0]);

	for (i = 0; i < regions[0]; i++) regions[i + 1] = 0xFFFF;
}

void Sprites_CPS_LoadRegionClick(void)
{
	uint8 *buf;
	uint8 i;
	char filename[16];

	buf = GFX_Screen_Get_ByIndex(SCREEN_2);

	g_fileRgnclkCPS = buf;
	Sprites_LoadCPSFile("RGNCLK.CPS", SCREEN_2, NULL);
	for (i = 0; i < 120; i++) memcpy(buf + (i * 304), buf + 7688 + (i * 320), 304);
	buf += 120 * 304;

	g_fileRegionINI = buf;
	snprintf(filename, sizeof(filename), "REGION%c.INI", g_table_houseInfo[g_playerHouseID].name[0]);
	buf += File_ReadFile(filename, buf);

	g_regions = (uint16 *)buf;

	InitRegions();
}

/**
 * Check if a spriteID is part of the veiling sprites.
 * @param spriteID The sprite to check for.
 * @return True if and only if the spriteID is part of the veiling sprites.
 */
bool Tile_IsUnveiled(uint16 tileID)
{
	if (tileID > g_veiledTileID) return true;
	if (tileID < g_veiledTileID - 15) return true;

	return false;
}

void Sprites_Init(void)
{
	Sprites_Load("MOUSE.SHP", NULL, 7);              /*   0 -   6 */
	Sprites_Load(String_GenerateFilename("BTTN"), NULL, 5); /*   7 -  11 */
	Sprites_Load("SHAPES.SHP", NULL, 99);            /*  12 - 110 */
	Sprites_Load("UNITS2.SHP", NULL, 40);            /* 111 - 150 */
	Sprites_Load("UNITS1.SHP", NULL, 87);            /* 151 - 237 */
	Sprites_Load("UNITS.SHP", NULL, 117);            /* 238 - 354 */
	Sprites_Load(String_GenerateFilename("CHOAM"), "CHOAMSHP.SHP", 18); /* 355 - 372 */
	Sprites_Load(String_GenerateFilename("MENTAT"), "MENTAT.SHP", 14);  /* 373 - 386 */
	Sprites_Load("MENSHPH.SHP", NULL, 15);           /* 387 - 401 */
	Sprites_Load("MENSHPA.SHP", NULL, 15);           /* 402 - 416 */
	Sprites_Load("MENSHPO.SHP", NULL, 15);                    /* 417 - 431 */
	Sprites_Load("MENSHPM.SHP", NULL, 15);                    /* 432 - 446 (Placeholder - Fremen) */
	Sprites_Load("MENSHPM.SHP", NULL, 15);                    /* 447 - 461 (Placeholder - Sardaukar) */
	Sprites_Load("MENSHPM.SHP", NULL, 15);                    /* 462 - 476 */
	Sprites_Load("PIECES.SHP", NULL, 28);                     /* 477 - 504 */
	Sprites_Load("ARROWS.SHP", NULL, 9);                      /* 505 - 513 */
	Sprites_Load("CREDIT1.SHP", NULL, 1);                     /* 514 */
	Sprites_Load("CREDIT2.SHP", NULL, 1);                     /* 515 */
	Sprites_Load("CREDIT3.SHP", NULL, 1);                     /* 516 */
	Sprites_Load("CREDIT4.SHP", NULL, 1);                     /* 517 */
	Sprites_Load("CREDIT5.SHP", NULL, 1);                     /* 518 */
	Sprites_Load("CREDIT6.SHP", NULL, 1);                     /* 519 */
	Sprites_Load("CREDIT7.SHP", NULL, 1);                     /* 520 */
	Sprites_Load("CREDIT8.SHP", NULL, 1);                     /* 521 */
	Sprites_Load("CREDIT9.SHP", NULL, 1);                     /* 522 */
	Sprites_Load("CREDIT10.SHP", NULL, 1);                    /* 523 */
	Sprites_Load("CREDIT11.SHP", NULL, 1);                    /* 524 */
}

void Sprites_Uninit(void)
{
	uint16 i;

	for (i = 0; i < s_spritesCount; i++) free(g_sprites[i]);
	free(g_sprites); g_sprites = NULL;

	free(g_mouseSpriteBuffer); g_mouseSpriteBuffer = NULL;
	free(g_mouseSprite); g_mouseSprite = NULL;

	free(g_tilesPixels); g_tilesPixels = NULL;
	free(g_iconRTBL); g_iconRTBL = NULL;
	free(g_iconRPAL); g_iconRPAL = NULL;

	free(g_iconMap); g_iconMap = NULL;
}
