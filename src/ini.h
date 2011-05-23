/* $Id$ */

#ifndef INI_H
#define INI_H

extern void String_Trim(char *string);
extern bool Ini_GetString(const char *category, const char *key, const char *defaultValue, char *dest, uint16 length, const char *source);
extern int Ini_GetInteger(const char *category, const char *key, int defaultValue, const char *source);

extern void emu_String_Trim();
extern void emu_Ini_GetString();

#endif /* INI_H */
