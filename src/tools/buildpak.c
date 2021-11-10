#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/stat.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>

struct pakfile {
	uint32_t paksize;
	uint32_t headersize;
	uint32_t entrycount;
	struct {
		struct fileentry * head;
		struct fileentry * tail;
	} entries;
};

struct fileentry {
	struct fileentry * next;
	uint32_t size;
	char * source;
	char name[13]; /* 8.3 + '\0' */
};

static int add_to_pak(struct pakfile * pak, const char * filename);
static int add_dir_to_pak(struct pakfile * pak, const char * dirname);

static int fwrite_le_uint32(uint32_t value, FILE *stream)
{
	int i;
	uint8_t buffer[4];
	for (i = 0; i < 4; i++) {
		buffer[i] = value & 0xFF;
		value >>= 8;
	}
	if (fwrite(buffer, 1, 4, stream) != 4) return -1;
	return 0;
}

static int fcopy(const char * filename, FILE *stream)
{
	char buffer[4096];
	size_t n;
	FILE * src = fopen(filename, "rb");
	if (src == NULL) {
		fprintf(stderr, "Failed to open %s\n", filename);
		return -1;
	}
	do {
		n = fread(buffer, 1, sizeof(buffer), src);
		if (n > 0) {
			if (fwrite(buffer, 1, n, stream) != n) {
				fclose(src);
				return -1;
			}
		} else if(ferror(src)) {
			fclose(src);
			return -1;
		}
	} while (!feof(src));
	fclose(src);
	return 0;
}

static int add_to_pak(struct pakfile * pak, const char * filename)
{
	int i;
	const char * p;
	struct stat st;
	struct fileentry * entry;
	size_t len;

	if (stat(filename, &st) < 0) {
		perror(filename);
		return -1;
	}
	if (S_ISDIR(st.st_mode)) {
		return add_dir_to_pak(pak, filename);
	}
	if (!S_ISREG(st.st_mode)) {
		fprintf(stderr, "%s is not a regular file\n", filename);
		return -1;
	}
	p = strrchr(filename, '/');
	if (p == NULL) p = filename;
	else p++;
	len = strlen(p);
	if (len >= 13) {
		fprintf(stderr, "%s is too long (only support 8.3)\n", p);
		return -1;
	}
	entry = malloc(sizeof(struct fileentry));
	entry->source = strdup(filename);
	entry->next = NULL;
	entry->size = (uint32_t)st.st_size;
	for (i = 0; i <= (int)len; i++) {
		entry->name[i] = toupper(p[i]);
	}
	pak->headersize += 4 + len + 1;
	pak->paksize += 4 + len + 1 + entry->size;
	pak->entrycount++;
	/* insert at the tail of the list */
	if (pak->entries.head == NULL) {
		pak->entries.head = entry;
		pak->entries.tail = entry;
	} else {
		pak->entries.tail->next = entry;
		pak->entries.tail = entry;
	}
	printf("Add %-12s %6lu bytes\n", entry->name, (unsigned long)entry->size);
	return 0;
}

static int add_files_to_pak(struct pakfile * pak, int count, const char * * filenames)
{
	int i, r = 0;

	for (i = 0; i < count; i++) {
		if (add_to_pak(pak, filenames[i]) < 0) r = -1;
	}
	return r;
}

static int add_dir_to_pak(struct pakfile * pak, const char * dirname)
{
	int r = 0;
	DIR * dir;
	struct dirent * ent;
	size_t dirlen, available;
	char * path;

	dir = opendir(dirname);
	if (dir == NULL) {
		perror(dirname);
		return -1;
	}
	available = 16;
	dirlen = strlen(dirname);
	path = malloc(dirlen + available + 1);
	if (path == NULL) {
		// TODO error handling
	}
	memcpy(path, dirname, dirlen + 1);
	if (path[dirlen-1] != '/') {
		path[dirlen++] = '/';
		path[dirlen] = '\0';
		available--;
	}

	while ((ent = readdir(dir)) != NULL) {
		size_t len;
		if (strcmp(ent->d_name, "..") == 0 || strcmp(ent->d_name, ".") == 0) continue;
		len = strlen(ent->d_name);
		if (len > available) {
			char * tmp;
			available = len;
			tmp = realloc(path, dirlen + available + 1);
			if (tmp == NULL) {
				// TODO : error handling
			} else {
				path = tmp;
			}
		}
		memcpy(path + dirlen, ent->d_name, len + 1);
		if (add_to_pak(pak, path) < 0) r = -1;
	}
	closedir(dir);
	free(path);
	return r;
}

static int build_pak(struct pakfile * pak, const char * outfile) {
	struct fileentry * entry;
	FILE * f;
	uint32_t offset;

	f = fopen(outfile, "wb");
	if (f == NULL) {
		fprintf(stderr, "Failed to open %s for writing\n", outfile);
		return -1;
	}

	/* first write header */
	offset = pak->headersize;
	for (entry = pak->entries.head; entry != NULL; entry = entry->next) {
		size_t len;
		if (fwrite_le_uint32(offset, f) < 0) goto error;
		len = strlen(entry->name) + 1;
		if (fwrite(entry->name, 1, len, f) != len) goto error;
		offset += entry->size;
	}
	/* header terminator */
	if (fwrite_le_uint32(0, f) < 0) goto error;
	offset = pak->headersize;
	for (entry = pak->entries.head; entry != NULL; entry = entry->next) {
		printf("%06x %-12s : %s\n", offset, entry->name, entry->source);
		if ((uint32_t)ftell(f) != offset) goto error;
		if (fcopy(entry->source, f) < 0) goto error;
		offset += entry->size;
	}
	fclose(f);
	return 0;
error:
	fprintf(stderr, "Write error\n");
	if (f != NULL) fclose(f);
	return -1;
}

int main(int argc, char * * argv)
{
	const char * outfile = "OUT.PAK";
	struct pakfile pak = { 0 };
	int i;

	i = 1;
	if (i >= argc || strcmp("--help", argv[i]) == 0 || strcmp("-h", argv[i]) == 0) {
		printf("Usage: %s [--out FILE.PAK] file1 file2 file3 ...\n", argv[0]);
		return 0;
	}
	if (strcmp("--out", argv[i]) == 0 && i + 1 < argc) {
		outfile = argv[i + 1];
		i += 2;
	}
	add_files_to_pak(&pak, argc - i, (const char * *)argv + i);
	pak.headersize += 4;
	pak.paksize += 4;
	build_pak(&pak, outfile);
	return 0;
}
