/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "config.h"
#include "global.h"
#include "file.h"

extern void f__1DD7_000E_001C_4593();
extern void f__1DD7_006F_001C_4403();
extern void overlay(uint16 cs, uint8 force);

/**
 * Reads and decode the config.
 *
 * @param filename The name of file containing config.
 * @param config The address where the config will be stored.
 * @return True if loading and decoding is successful.
 */
bool Config_Read(char *filename, DuneCfg *config)
{
	char name[18]; /* "data/8.3" */
	FILE *f;
	size_t read;
	uint8 sum;
	uint8 *c;
	int8 i;

	assert(strlen(filename) < 13);

	strcpy(name, DATA_DIR);
	strcat(name, filename);

	f = fopen(name, "rb");
	if (f == NULL) return false;

	read = fread(config, 1, sizeof(DuneCfg), f);
	fclose(f);

	if (read != sizeof(DuneCfg)) return false;

	sum = 0;

	for (c = (uint8 *)config, i = 7; i >= 0; c++, i--) {
		*c ^= 0xA5;
		*c -= i;
		sum += *c;
	}

	sum ^= 0xA5;

	/* Disable all audio drivers. */
	if (config->soundDrv != 0) config->soundDrv = 7;
	if (config->musicDrv != 0) config->musicDrv = 7;
	if (config->voiceDrv != 0) config->voiceDrv = 1;

	return (sum == config->checksum);
}

/**
 * Loads the game options.
 *
 * @return True if loading is successful.
 */
bool GameOptions_Load()
{
	if (!File_Exists(g_global->string_2AB7)) return false;

	File_ReadBlockFile(g_global->string_2AB7, &g_global->gameConfig, sizeof(g_global->gameConfig));

	emu_push(g_global->gameConfig.music);
	emu_push(emu_cs); emu_push(0x0035); emu_cs = 0x1DD7; f__1DD7_006F_001C_4403();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
	emu_sp += 2;

	emu_push(g_global->gameConfig.sounds);
	emu_push(emu_cs); emu_push(0x003F); emu_cs = 0x1DD7; f__1DD7_000E_001C_4593();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
	emu_sp += 2;

	g_global->gameSpeed = g_global->gameConfig.gameSpeed;

	return true;
}

/**
 * Saves the game options.
 */
void GameOptions_Save()
{
	uint8 index;

	index = File_Open(g_global->string_2AB7, 2);

	File_Write(index, &g_global->gameConfig, sizeof(g_global->gameConfig));

	File_Close(index);

	if (g_global->gameConfig.music == 0) Sound_Play(0);
}
