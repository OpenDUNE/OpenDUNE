/* $Id$ */

#ifndef STRING_H
#define STRING_H

extern uint16 String_Decompress(char *source, char *dest);
extern char *String_GenerateFilename(char *name);
extern char *String_GetFromBuffer_ByIndex(char *buffer, uint16 index);
extern char *String_Get_ByIndex(uint16 index);
extern void String_TranslateSpecial(char *source, char *dest);
extern void String_Load(char *name);
extern uint16 String_LoadFile(char *filename, uint16 index, char *buffer, uint16 buflen);


extern void emu_String_Decompress();
extern void emu_String_GenerateFilename();
extern void emu_String_Get_ByIndex();
extern void emu_String_TranslateSpecial();
extern void emu_String_Load();
extern void emu_String_LoadFile();

#endif /* STRING_H */
