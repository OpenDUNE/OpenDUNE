/* MXTX MaxTrax Amiga music format */
#include <stdint.h>
#include <stdio.h>

int parseMX(const char * filename)
{
	FILE * f;
	unsigned char buffer[64];
	uint32_t pos;
	int i;
	int count;
	uint16_t flags;
	uint16_t songs_number;
	uint16_t song;
	uint16_t samples_number;
	uint16_t sample;
	uint32_t line_count;
	uint16_t octaveCount;
	uint16_t octave;
	uint32_t attackLen;
	uint32_t sustainLen;
	uint16_t attackCount;
	uint16_t releaseCount;

	f = fopen(filename, "rb");

	fread(buffer, 1, 4, f);	/* signature */
	printf("%.4s ", buffer);
	if (memcmp(buffer, "MXTX", 4) != 0) {
		fprintf(stderr, "not a MXTX file\n");
		return -1;
	}
	fread(buffer, 1, 2, f);
	count = buffer[0] << 8 | buffer[1];	/* tempo ??? */
	printf("count=%d", count);
	fread(buffer, 1, 2, f);
	flags = buffer[0] << 8 | buffer[1];	/* microtonal (0x8000), attack(2), filter (1) */
	printf(" flags=%04hx", flags);
	if (flags & 0x8000) {
		/* skip 256 bytes */
	}
	fread(buffer, 1, 2, f);	/* offset 8 */
	songs_number = buffer[0] << 8 | buffer[1];
	printf(" songs_number=%d\n", songs_number);
	for (song = 0; song < songs_number; song++) {
		fread(buffer, 1, 4, f);
		line_count = buffer[0] << 24 | buffer[1] << 16 | buffer[2] << 8 | buffer[3];
		printf("song #%2d: line_count=%u\n", song, line_count);
		for (i = 0; i < line_count; i++) {
			fread(buffer, 1, 6, f);
			printf("    line #%2d: %02X %02X %02X%02X %02X%02X\n", i,
			       buffer[0], buffer[1], buffer[2], buffer[3],
			       buffer[4], buffer[5]);
		}
	}
	fread(buffer, 1, 2, f);
	samples_number = buffer[0] << 8 | buffer[1];
	printf("%hu samples\n", samples_number);
	for (sample = 0; sample < samples_number; sample++) {
		/*printf("%06lx ",ftell(f));*/
/* 		0	WORD	dsamp_Number
		2	WORD	dsamp_Tune
		4	WORD	dsamp_Volume
		6	WORD	dsamp_Octaves
		8	LONG	dsamp_AttackLength
		12	LONG	dsamp_SustainLength
		16	WORD	dsamp_AttackCount
		18	WORD	dsamp_ReleaseCount
*/
		fread(buffer, 1, 20, f);
		octaveCount = buffer[6] << 8 | buffer[7];
		attackLen = buffer[8] << 24 | buffer[9] << 16 | buffer[10] << 8 | buffer[11];
		sustainLen = buffer[12] << 24 | buffer[13] << 16 | buffer[14] << 8 | buffer[15];
		attackCount = buffer[16]<<8|buffer[17];
		releaseCount = buffer[18] << 8 | buffer[19];
		printf("sample #%02d: %02X%02X %02X%02X %02X%02X"
		            " %02X%02X %02X%02X%02X%02X"
		            " %02X%02X%02X%02X %02X%02X"
		            " %02X%02X\n",sample,
		       buffer[0], buffer[1], buffer[2], buffer[3],
		       buffer[4], buffer[5], buffer[6], buffer[7],
		       buffer[8], buffer[9], buffer[10], buffer[11],
		       buffer[12], buffer[13], buffer[14], buffer[15],
		       buffer[16], buffer[17], buffer[18], buffer[19]);
		for (i = 0; i < attackCount; i++) {
			fread(buffer, 1, 4, f);	/* attack data */
			printf("   attack  %02X%02X %02X%02X\n", /* duration volume */
		       buffer[0], buffer[1], buffer[2], buffer[3]);
		}
		for (i = 0; i < releaseCount; i++) {
			fread(buffer, 1, 4, f);	/* release data */
			printf("   release %02X%02X %02X%02X\n", /* duration volume */
		       buffer[0], buffer[1], buffer[2], buffer[3]);
		}
		for (octave = 0; octave < octaveCount; octave++) {
			fseek(f, (attackLen+sustainLen), SEEK_CUR);	/* skip sample data */
			attackLen *= 2;
			sustainLen *= 2;
		}
	}

	fclose(f);
	return 0;
}

int main(int argc, char * * argv)
{
	if (argc < 2) {
		return 1;
	}
	parseMX(argv[1]);
	return 0;
}
