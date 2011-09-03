/* $Id$ */

/** @file src/string.h String definitions. */

#ifndef STRING_H
#define STRING_H

extern const char * const g_languageSuffixes[];

extern void *g_strings;
extern void *g_stringsHint;
extern void *g_stringsIntro;

extern uint16 String_Decompress(char *source, char *dest);
extern char *String_GenerateFilename(char *name);
extern char *String_GetFromBuffer_ByIndex(char *buffer, uint16 index);
extern char *String_Get_ByIndex(uint16 stringID);
extern void String_TranslateSpecial(char *source, char *dest);
extern void String_Init();
extern void String_Uninit();
extern uint16 String_LoadFile(char *filename, uint16 index, char *buffer, uint16 buflen);
extern uint8 *String_NextString(uint8 *ptr);
extern uint8 *String_PrevString(uint8 *ptr);


#endif /* STRING_H */
