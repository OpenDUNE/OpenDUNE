/** @file src/ini.h INI file reading definitions. */

#ifndef INI_H
#define INI_H

extern void String_Trim(char *string);
extern char *Ini_GetString(const char *category, const char *key, const char *defaultValue, char *dest, uint16 length, char *source);
extern int Ini_GetInteger(const char *category, const char *key, int defaultValue, char *source);
extern void Ini_SetString(const char *category, const char *key, const char *value, char *source);

#endif /* INI_H */
