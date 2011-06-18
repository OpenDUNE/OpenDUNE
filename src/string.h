/* $Id$ */

/** @file src/string.h String definitions. */

#ifndef STRING_H
#define STRING_H

extern uint16 String_Decompress(char *source, char *dest);
extern char *String_GenerateFilename(char *name);
extern char *String_GetFromBuffer_ByIndex(char *buffer, uint16 index);
extern char *String_Get_ByIndex(uint16 index);
extern void String_TranslateSpecial(char *source, char *dest);
extern void String_Load(char *name);
extern uint16 String_LoadFile(char *filename, uint16 index, char *buffer, uint16 buflen);
extern uint8 *String_NextString(uint8 *ptr);
extern uint8 *String_PrevString(uint8 *ptr);


#endif /* STRING_H */
