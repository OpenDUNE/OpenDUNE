#include <stdint.h>
#include <stdio.h>

int parseMX(const char * filename)
{
	FILE * f;
	unsigned char buffer[64];
	uint32_t pos;
	int i;
	int count;

	f = fopen(filename, "rb");

	fread(buffer, 1, 4, f);	/* signature */
	printf("%.4s ", buffer);
	fread(buffer, 1, 2, f);
	count = buffer[0] << 8 | buffer[1];
	printf("count=%d\n", count);
	fread(buffer, 1, 2, f);
	printf(" %d ", buffer[0] << 8 | buffer[1]);
	fread(buffer, 1, 2, f);
	printf(" %d\n", buffer[0] << 8 | buffer[1]);
	for (i = 0; i < count; i++) {
		printf("%06lx ",ftell(f));
		fread(buffer, 1, 34, f);
		printf("%02d: %02X%02X%02X%02X %02X %02X"
		            " %02X%02X%02X%02X %02X %02X"
		            " %02X%02X%02X%02X %02X %02X"
		            " %02X%02X%02X%02X %02X %02X"
		            " %02X%02X%02X%02X %02X %02X"
		            " %02X %02X %02X %02X\n", i,
		       buffer[0], buffer[1], buffer[2], buffer[3],
		       buffer[4], buffer[5], buffer[6], buffer[7],
		       buffer[8], buffer[9], buffer[10], buffer[11],
		       buffer[12], buffer[13], buffer[14], buffer[15],
		       buffer[16], buffer[17], buffer[18], buffer[19],
		       buffer[20], buffer[21], buffer[22], buffer[23],
		       buffer[24], buffer[25], buffer[26], buffer[27],
		       buffer[28], buffer[29],
		       buffer[30], buffer[31], buffer[32], buffer[33]);
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
