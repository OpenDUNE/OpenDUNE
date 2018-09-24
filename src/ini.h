/** @file src/ini.h INI file reading definitions. */

#ifndef INI_H
#define INI_H

/* if source is NULL, defaultValue will still be returned */
extern char *Ini_GetString(const char *category, const char *key, const char *defaultValue, char *dest, uint16 length, char *source);

/* if source is NULL, defaultValue will still be returned */
extern int Ini_GetInteger(const char *category, const char *key, int defaultValue, char *source);

/* if source is NULL, no action will be performed */
extern void Ini_SetString(const char *category, const char *key, const char *value, char *source);

#endif /* INI_H */
