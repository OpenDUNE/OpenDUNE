/* $Id$ */

#ifndef FILE_H
#define FILE_H

extern bool File_Exists(const char *filename);
extern uint8 File_Open(const char *filename, uint8 mode);
extern void File_Close(uint8 index);
extern uint32 File_Read(uint8 index, void *buffer, uint32 length);
extern uint32 File_Write(uint8 index, void *buffer, uint32 length);
extern uint32 File_Seek(uint8 index, uint32 position, uint8 mode);
extern uint32 File_GetSize(uint8 index);
extern void File_Delete(const char *filename);
extern void File_Create(const char *filename);
extern uint32 File_ReadBlockFile(const char *filename, void *buffer, uint32 length);
extern csip32 File_ReadWholeFile(const char *filename, uint8 mallocFlags);
extern uint32 File_ReadFile(const char *filename, void *buf);
extern bool File_HasFreeSpace(uint32 size);
extern uint8 ChunkFile_Open(const char *filename);
extern void ChunkFile_Close(uint8 index);
extern uint32 ChunkFile_Seek(uint8 index, uint32 header);
extern uint32 ChunkFile_Read(uint8 index, uint32 header, void *buffer, uint32 buflen);


extern void emu_File_Read();
extern void emu_File_Write();
extern void emu_File_Obsolete5();

#endif /* FILE_H */
