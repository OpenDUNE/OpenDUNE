/** @file src/config.c Configuration and options load and save routines. */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "os/strings.h"

#include "config.h"

#include "audio/sound.h"
#include "file.h"

GameCfg g_gameConfig = { 1, 1, 2, 1, 0 };
DuneCfg g_config;
bool g_enableSoundMusic = true;
bool g_enableVoices = true;

/**
 * Reads and decode the config.
 *
 * @param filename The name of file containing config.
 * @param config The address where the config will be stored.
 * @return True if loading and decoding is successful.
 */
bool Config_Read(const char *filename, DuneCfg *config)
{
	FILE *f;
	size_t read;
	uint8 sum;
	uint8 *c;
	int8 i;

	f = fopendatadir(filename, "rb");
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

	return (sum == config->checksum);
}

/**
 * Loads the game options.
 *
 * @return True if loading is successful.
 */
bool GameOptions_Load(void)
{
	uint8 index;

	index = File_Open("OPTIONS.CFG", 1);
	if (index == FILE_INVALID) return false;

	g_gameConfig.music = File_Read_LE16(index);
	g_gameConfig.sounds = File_Read_LE16(index);
	g_gameConfig.gameSpeed = File_Read_LE16(index);
	g_gameConfig.hints = File_Read_LE16(index);
	g_gameConfig.autoScroll = File_Read_LE16(index);

	return true;
}

/**
 * Saves the game options.
 */
void GameOptions_Save(void)
{
	uint8 index;

	index = File_Open("OPTIONS.CFG", 2);

	File_Write_LE16(index, g_gameConfig.music);
	File_Write_LE16(index, g_gameConfig.sounds);
	File_Write_LE16(index, g_gameConfig.gameSpeed);
	File_Write_LE16(index, g_gameConfig.hints);
	File_Write_LE16(index, g_gameConfig.autoScroll);

	File_Close(index);

	if (g_gameConfig.music == 0) Music_Play(0);
}
