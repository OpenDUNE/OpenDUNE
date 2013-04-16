/** @file src/string.h String definitions. */

#ifndef STRING_H
#define STRING_H

extern const char * const g_languageSuffixes[];

extern uint16 String_Decompress(const char *source, char *dest);
extern const char *String_GenerateFilename(const char *name);
extern char *String_Get_ByIndex(uint16 stringID);
extern void String_TranslateSpecial(char *source, char *dest);
extern void String_Init(void);
extern void String_Uninit(void);
extern uint8 *String_NextString(uint8 *ptr);
extern uint8 *String_PrevString(uint8 *ptr);
extern void String_Trim(char *string);

#endif /* STRING_H */
