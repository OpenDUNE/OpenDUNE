#include <stdint.h>
#include <inttypes.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <errno.h>

#ifndef MIN
#define MIN(a,b) (((a)<=(b))?(a):(b))
#endif

static const char * outdir = NULL;

static int buildOutPath(char * outpath, size_t outpath_len, const char * path)
{
	const char * filename;
	char * ext;

	filename = strrchr(path, '/');
	if (filename) filename++;
	else filename = path;
	snprintf(outpath, outpath_len, "%s/%s",
	         outdir ? outdir : ".", filename);
	/* remove extension */
	ext = strrchr(outpath, '.');
	if (ext) *ext = '\0';
	if (mkdir(outpath, 0777) < 0) {
		perror("mkdir");
		return -1;
	}
	return 0;
}


int extractFile(FILE * pak, const char * path, const char * filename, uint32_t position, uint32_t size)
{
	char buffer[1024];
	char filepath[1024];
	FILE * f;
	long pos_backup;
	size_t n;

	snprintf(filepath, sizeof(filepath), "%s/%s", path, filename);
	f = fopen(filepath, "wb");
	if (f == NULL) {
		fprintf(stderr, "Failed to open %s for writing\n", filepath);
		return -1;
	}

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
	char outpath[1024];

	f = fopen(path, "rb");
	if (f == NULL) {
		return -1;
	}
	if (paksize == 0) {
		fseek(f, 0, SEEK_END);
		paksize = (uint32_t)ftell(f);
		fseek(f, 0, SEEK_SET);
	}
	if (buildOutPath(outpath, sizeof(outpath), path) < 0) {
		fprintf(stderr, "Failed to create directory : %s\n", outpath);
		return -1;
	}
	printf("extracting %s to %s\n", path, outpath);
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
		printf("  %06x %-12s %" PRIu32 " bytes\n", position, filename, size);
		extractFile(f, outpath, filename, position, size);
		n++;
	}
	return n;
}

int extractPakInDir(const char * path)
{
	DIR * dir;
	struct dirent * ent;
	char * ext;
	char filepath[1024];
	int total = 0;

	dir = opendir(path);
	if (dir == NULL) {
		perror("opendir");
		return -1;
	}
	while((ent = readdir(dir)) != NULL) {
		if (strcmp(ent->d_name, "..") == 0 || strcmp(ent->d_name, ".") == 0) continue;
		ext = strrchr(ent->d_name, '.');
		if (ext != NULL) {
			if (strcasecmp(ext, ".PAK") == 0) {
				snprintf(filepath, sizeof(filepath), "%s/%s", path, ent->d_name);
				total += extractPak(filepath, 0);
			}
		}
	}
	closedir(dir);
	return total;
}

int main(int argc, char * * argv)
{
	int i;
	struct stat st;
	const char * path = NULL;

	for (i = 1; i < argc; i++) {
		if (strcmp(argv[i], "--outdir") == 0) {
			if (++i < argc) outdir = argv[i];
		} else {
			path = argv[i];
		}
	}
	if (path == NULL) {
		fprintf(stderr, "Usage: %s [options] <file|directory>\n", argv[0]);
		fprintf(stderr, "options:\n");
		fprintf(stderr, "    --outdir path\n");
		return 1;
	}

	if (outdir != NULL) {
		if (stat(outdir, &st) < 0) {
			if (errno != ENOENT) {
				perror(outdir);
				return 1;
			}
			if (mkdir(outdir, 0777) < 0) {
				perror("mkdir");
				fprintf(stderr, "Failed to create directory : %s\n", outdir);
				return 1;
			}
		} else if (!S_ISDIR(st.st_mode)) {
			fprintf(stderr, "%s is not a directory\n", outdir);
			return 1;
		}
	}

	if (stat(path, &st) < 0) {
		perror("stat");
		return 1;
	}
	if (S_ISDIR(st.st_mode)) {
		/* directory */
		printf("%s is a directory\n", path);
		extractPakInDir(path);
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
