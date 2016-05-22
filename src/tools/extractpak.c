#include <stdint.h>
#include <inttypes.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#ifndef MIN
#define MIN(a,b) (((a)<=(b))?(a):(b))
#endif

int extractFile(FILE * pak, const char * path, const char * filename, uint32_t position, uint32_t size)
{
	char buffer[1024];
	char filepath[1024];
	FILE * f;
	long pos_backup;
	size_t n;

	snprintf(filepath, sizeof(filepath), "%s/%s", path, filename);
	f = fopen(filepath, "wb");

	pos_backup = ftell(pak);
	fseek(pak, position, SEEK_SET);

	while (size > 0) {
		n = MIN(size, sizeof(buffer));
		fread(buffer, 1, n, pak);
		fwrite(buffer, 1, n, f);
		size -= n;
	}
	fclose(f);

	fseek(pak, pos_backup, SEEK_SET);
	return 0;
}

/**
 * Read a uint32 value from a little endian file.
 */
int fread_le_uint32(uint32_t *value, FILE *stream)
{
	uint8_t buffer[4];
	if (value == NULL) return -1;
	if (fread(buffer, 1, 4, stream) != 4) return -1;
	*value = buffer[0] | (buffer[1] << 8) | (buffer[2] << 16) | (buffer[3] << 24);
	return 0;
}

int extractPak(const char * path, uint32_t paksize)
{
	FILE * f;
	uint32_t position;
	uint32_t nextposition;
	uint32_t size;
	char filename[256];
	int i, n = 0;

	f = fopen(path, "rb");
	if (f == NULL) {
		return -1;
	}
	if (fread_le_uint32(&nextposition, f) < 0) {
		fclose(f);
		return -1;
	}
	while (nextposition != 0) {
		position = nextposition;
		for (i = 0; i < (int)sizeof(filename); i++) {
			if (fread(filename + i, 1, 1, f) != 1) {
				fclose(f);
				return -1;
			}
			if (filename[i] == '\0') break;
		}
		if (i == sizeof(filename)) {
			fclose(f);
			return -1;
		}
		if (fread_le_uint32(&nextposition, f) < 0) {
			fclose(f);
			return -1;
		}
		size = (nextposition != 0) ? nextposition - position : paksize - position;
		printf("%08x %s %" PRIu32 " bytes\n", position, filename, size);
		extractFile(f, ".", filename, position, size);
	}
	return n;
}

int main(int argc, char * * argv)
{
	struct stat st;
	const char * path;

	if (argc < 2) {
		fprintf(stderr, "Usage: %s <file|directory>\n", argv[0]);
		return 1;
	}
	path = argv[1];

	if (stat(path, &st) < 0) {
		perror("stat");
		return 1;
	}
	if (S_ISDIR(st.st_mode)) {
		/* directory */
		printf("%s is a directory\n", path);
	} else if (S_ISREG(st.st_mode)) {
		/* regular file */
		printf("%s is a file\n", path);
		extractPak(path, st.st_size);
	} else {
		fprintf(stderr, "cannot recognize %s as directory or regular file\n", path);
		return 1;
	}
	return 0;
}
