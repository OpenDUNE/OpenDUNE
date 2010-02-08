/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "config.h"

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
	config->soundDrv = 0;
	config->musicDrv = 0;
	config->voiceDrv = 0;

	return (sum == config->checksum);
}
