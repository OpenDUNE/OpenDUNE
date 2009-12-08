/* $Id$ */

#ifndef STRING_H
#define STRING_H

uint16 String_Decompress(char *source, char *dest);
char *String_GenerateFilename(char *name);

void emu_String_Decompress();
void emu_String_GenerateFilename();

#endif /* STRING_H */
