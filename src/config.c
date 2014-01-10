/** @file src/config.c Configuration and options load and save routines. */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "os/strings.h"

#include "config.h"

#include "audio/sound.h"
#include "file.h"
#include "string.h"

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

	f = fopendatadir(SEARCHDIR_PERSONAL_DATA_DIR, filename, "rb");
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
 * encode and write the config
 *
 * @param filename The name of file containing config.
 * @param config The address where the config will be read.
 * @return True if successful.
 */
bool Config_Write(const char * filename, DuneCfg *config)
{
	FILE *f;
	size_t write;
	uint8 coded[sizeof(DuneCfg)];
	uint8 sum;
	uint8 *c1, *c2;
	int8 i;

	f = fopendatadir(SEARCHDIR_PERSONAL_DATA_DIR, filename, "wb");
	if (f == NULL) return false;

	sum = 0;
	for (c1 = (uint8 *)config, c2 = coded, i = 7; i >= 0; c1++, c2++, i--) {
		*c2 = (*c1 + i) ^ 0xA5;
		sum += *c1;
	}
	/* Language */
	*c2++ = *c1++;
	sum ^= 0xA5;
	*c2 = sum;
	write = fwrite(coded, 1, sizeof(DuneCfg), f);
	fclose(f);
	return (write == sizeof(DuneCfg));
}

/**
 * Set a default config
 */
bool Config_Default(DuneCfg *config)
{
	if (config == NULL) return false;

	memset(config, 0, sizeof(DuneCfg));
	config->graphicDrv = 1;
	config->musicDrv = 1;
	config->soundDrv = 1;
	config->voiceDrv = 1;
	config->useMouse = 1;
	config->useXMS = 1;
	config->language = LANGUAGE_ENGLISH;
	return true;
}

/**
 * Loads the game options.
 *
 * @return True if loading is successful.
 */
bool GameOptions_Load(void)
{
	uint8 index;

	if (!File_Exists_Personal("OPTIONS.CFG")) return false;

	index = File_Open_Personal("OPTIONS.CFG", FILE_MODE_READ);

	g_gameConfig.music = File_Read_LE16(index);
	g_gameConfig.sounds = File_Read_LE16(index);
	g_gameConfig.gameSpeed = File_Read_LE16(index);
	g_gameConfig.hints = File_Read_LE16(index);
	g_gameConfig.autoScroll = File_Read_LE16(index);

	File_Close(index);

	return true;
}

/**
 * Saves the game options.
 */
void GameOptions_Save(void)
{
	uint8 index;

	index = File_Open_Personal("OPTIONS.CFG", FILE_MODE_WRITE);

	File_Write_LE16(index, g_gameConfig.music);
	File_Write_LE16(index, g_gameConfig.sounds);
	File_Write_LE16(index, g_gameConfig.gameSpeed);
	File_Write_LE16(index, g_gameConfig.hints);
	File_Write_LE16(index, g_gameConfig.autoScroll);

	File_Close(index);

	if (g_gameConfig.music == 0) Music_Play(0);
}
