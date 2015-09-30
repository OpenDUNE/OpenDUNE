/** @file src/inifile.c opendune.ini file handling */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "types.h"
#include "os/strings.h"
#include "os/error.h"
#if defined(_WIN32)
#include <Shlwapi.h>
#include <Shlobj.h>
#else  /* _WIN32 */
#include <limits.h>
#ifndef PATH_MAX
#define PATH_MAX (4096)
#endif /* PATH_MAX */
#endif /* _WIN32 */

#include "config.h"
#include "string.h"
#include "inifile.h"
#include "ini.h"

static char * g_openduneini = NULL;

/**
 * Find and read the opendune.ini file
 *
 * @return True if and only if opendune.ini file was found and read.
 */
bool Load_IniFile(void)
{
	FILE *f = NULL;
	long fileSize;
	/* look for opendune.ini in the following locations :
	   1) %APPDATA%/OpenDUNE (win32)
	      ~/Library/Application Support/OpenDUNE (Mac OS X)
	      ~/.config/opendune (Linux)
	   2) current directory
	   3) data/ dir
	*/
#if defined(_WIN32)
	TCHAR path[MAX_PATH];
	if (SHGetFolderPath( NULL, CSIDL_APPDATA/*CSIDL_COMMON_APPDATA*/, NULL, 0, path ) != S_OK) {
		Warning("Cannot find AppData directory.\n");
	} else {
		PathAppend(path, TEXT("OpenDUNE\\opendune.ini"));
		f = fopen(path, "rb");
	}
#else  /* _WIN32 */
	char path[PATH_MAX];
	char * homeDir;
	homeDir = getenv("HOME");
	if (homeDir != NULL) {
#if defined(__APPLE__)
		snprintf(path, sizeof(path), "%s/Library/Application Support/OpenDUNE/opendune.ini", homeDir);
#else /* __APPLE__ */
		snprintf(path, sizeof(path), "%s/.config/opendune/opendune.ini", homeDir);
#endif /* __APPLE__ */
		f = fopen(path, "rb");
	}
#endif /* _WIN32 */
	if (f == NULL) {
		/* current directory */
		f = fopen("opendune.ini", "rb");
	}
	if (f == NULL) {
		f = fopen("data/opendune.ini", "rb");
	}
	if (f == NULL) {
		Warning("opendune.ini file not found.\n");
		return false;
	}
	if (fseek(f, 0, SEEK_END) < 0) {
		Error("Cannot get opendune.ini file size.\n");
		fclose(f);
		return false;
	}
	fileSize = ftell(f);
	if (fileSize < 0) {
		Error("Cannot get opendune.ini file size.\n");
		fclose(f);
		return false;
	}
	rewind(f);
	g_openduneini = malloc(fileSize + 1);
	if (g_openduneini == NULL) {
		Error("Cannot allocate %ld bytes\n", fileSize + 1);
		fclose(f);
		return false;
	}
	if ((long)fread(g_openduneini, 1, fileSize, f) != fileSize) {
		Error("Failed to read opendune.ini\n");
		fclose(f);
		free(g_openduneini);
		g_openduneini = NULL;
		return false;
	}
	g_openduneini[fileSize] = '\0';
	fclose(f);
	return true;
}

/**
 * Release opendune.ini malloc'd buffer
 */
void Free_IniFile(void)
{
	free(g_openduneini);
	g_openduneini = NULL;
}	

/**
 * Set language depending on value in opendune.ini
 *
 * @param config dune config to modify
 * @return False in case of error
 */
bool SetLanguage_From_IniFile(DuneCfg *config)
{
	char language[16];

	if (config == NULL || g_openduneini == NULL) return false;
	if (IniFile_GetString("language", NULL, language, sizeof(language)) == NULL) {
		return false;
	}
	if (strcasecmp(language, "ENGLISH") == 0)
		config->language = LANGUAGE_ENGLISH;
	else if(strcasecmp(language, "FRENCH") == 0)
		config->language = LANGUAGE_FRENCH;
	else if(strcasecmp(language, "GERMAN") == 0)
		config->language = LANGUAGE_GERMAN;
	else if(strcasecmp(language, "ITALIAN") == 0)
		config->language = LANGUAGE_ITALIAN;
	else if(strcasecmp(language, "SPANISH") == 0)
		config->language = LANGUAGE_SPANISH;
	return true;
}

char *IniFile_GetString(const char *key, const char *defaultValue, char *dest, uint16 length)
{
	char * p;
	uint16 i;
	if (g_openduneini == NULL) return NULL;
	p = Ini_GetString("opendune", key, defaultValue, dest, length, g_openduneini);
	if (p) {
		/* Trim space from the beginning of the dest */
		for (i = 0; i < length && (dest[i] == ' ' || dest[i] == '\t') && (dest[i] != '\0'); i++);
		if (i > 0 && i < length) memmove(dest, dest+i, length - i);
	}
	return p;
}

int IniFile_GetInteger(const char *key, int defaultValue)
{
	if (g_openduneini == NULL) return defaultValue;
	return Ini_GetInteger("opendune", key, defaultValue, g_openduneini);
}
