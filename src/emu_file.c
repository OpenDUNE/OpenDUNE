/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "file.h"

/**
 * Emulator wrapper around File_Exists()
 *
 * @name emu_File_Exists
 * @implements 1FB5:15B5:0015:6A00 ()
 */
void emu_File_Exists()
{
	csip32 filename;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filename = emu_get_csip32(emu_ss, emu_sp, 0x0);

	emu_ax = 0;

	if (filename.csip == 0x0) return;

	emu_ax = File_Exists((char *)emu_get_memorycsip(filename)) ? 1 : 0;
}

/**
 * Emulator wrapper around File_Open().
 *
 * @name emu_File_Open
 * @implements 1FB5:01FA:0010:F89C ()
 */
void emu_File_Open()
{
	csip32 filename;
	uint8 mode;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filename =        emu_get_csip32  (emu_ss, emu_sp, 0x0);
	mode     = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x4);

	emu_ax = 0xFFFF;

	if (filename.csip == 0x0) return;

	emu_ax = File_Open((char *)emu_get_memorycsip(filename), mode);
}

/**
 * Emulator wrapper around File_Close().
 *
 * @name emu_File_Close
 * @implements 1FB5:09C7:0018:922D ()
 */
void emu_File_Close()
{
	uint8 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);

	File_Close(index);
}

/**
 * Emulator wrapper around File_Read().
 *
 * @name emu_File_Read
 * @implements 1FB5:0AEC:001B:A5E4 ()
 */
void emu_File_Read()
{
	uint8 index;
	csip32 buffer;
	uint32 length;
	uint32 res;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index  = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);
	buffer =        emu_get_csip32  (emu_ss, emu_sp, 0x2);
	length =        emu_get_memory32(emu_ss, emu_sp, 0x6);

	res = File_Read(index, (void *)emu_get_memorycsip(buffer), length);

	emu_dx = res >> 16;
	emu_ax = res & 0xFFFF;
}

/**
 * Emulator wrapper around File_Write().
 *
 * @name emu_File_Write
 * @implements 1FB5:0E9C:001B:37D1 ()
 */
void emu_File_Write()
{
	uint8 index;
	csip32 buffer;
	uint32 length;
	uint32 res;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index  = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);
	buffer =        emu_get_csip32  (emu_ss, emu_sp, 0x2);
	length =        emu_get_memory32(emu_ss, emu_sp, 0x6);

	res = File_Write(index, (void *)emu_get_memorycsip(buffer), length);

	emu_dx = res >> 16;
	emu_ax = res & 0xFFFF;
}

/**
 * Emulator wrapper around File_Seek().
 *
 * @name emu_File_Seek
 * @implements 1FB5:1207:001B:2A6C ()
 */
void emu_File_Seek()
{
	uint8 index;
	uint32 position;
	uint8 mode;
	uint32 res;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index    = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);
	position =        emu_get_memory32(emu_ss, emu_sp, 0x2);
	mode     = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x6);

	res = File_Seek(index, position, mode);

	emu_dx = res >> 16;
	emu_ax = res & 0xFFFF;
}

/**
 * Emulator wrapper around File_GetSize().
 *
 * @name emu_File_GetSize
 * @implements 1FB5:16D5:006A:679B ()
 */
void emu_File_GetSize()
{
	uint8 index;
	uint32 res;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);

	res = File_GetSize(index);

	emu_dx = res >> 16;
	emu_ax = res & 0xFFFF;
}

/**
 * Emulator wrapper around File_Delete().
 *
 * @name emu_File_Delete
 * @implements 1FB5:17FE:0011:2DA9 ()
 */
void emu_File_Delete()
{
	csip32 filename;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filename = emu_get_csip32(emu_ss, emu_sp, 0x0);

	if (filename.csip == 0x0) return;

	File_Delete((char *)emu_get_memorycsip(filename));
}

/**
 * Emulator wrapper around File_Create().
 *
 * @name emu_File_Create
 * @implements 1FB5:189B:0010:8453 ()
 */
void emu_File_Create()
{
	csip32 filename;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filename = emu_get_csip32(emu_ss, emu_sp, 0x0);

	emu_ax = 0;

	if (filename.csip == 0x0) return;

	File_Create((char *)emu_get_memorycsip(filename));
}

/**
 * Emulator wrapper around File_ReadBlockFile()
 *
 * @name emu_File_ReadBlockFile
 * @implements 253D:0000:0013:38F4 ()
 */
void emu_File_ReadBlockFile()
{
	csip32 filename;
	csip32 buffer;
	uint32 length;
	uint32 res;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filename  = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	buffer    = emu_get_csip32  (emu_ss, emu_sp, 0x4);
	length    = emu_get_memory32(emu_ss, emu_sp, 0x8);

	res = File_ReadBlockFile((char *)emu_get_memorycsip(filename), (void *)emu_get_memorycsip(buffer), length);

	emu_dx = res >> 16;
	emu_ax = res & 0xFFFF;
}

/**
 * Emulator wrapper around File_ReadWholeFile()
 *
 * @name emu_File_ReadWholeFile
 * @implements 253D:008A:0016:007A ()
 */
void emu_File_ReadWholeFile()
{
	csip32 filename;
	uint16 arg0A;
	csip32 res;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filename  = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	arg0A     = emu_get_memory16(emu_ss, emu_sp, 0x4);

	res = File_ReadWholeFile((char *)emu_get_memorycsip(filename), arg0A);

	emu_dx = res.s.cs;
	emu_ax = res.s.ip;
}

/**
 * This function is obsolete. Please remove any reference to it as soon as
 *  you can.
 *
 * @name emu_File_Obsolete1
 * @implements 1FB5:175A:000F:6F28 ()
 */
void emu_File_Obsolete1()
{
	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * This function is obsolete. Please remove any reference to it as soon as
 *  you can.
 *
 * @name emu_File_Obsolete2
 * @implements 1FB5:17D7:0018:F3C7 ()
 */
void emu_File_Obsolete2()
{
	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * This function is obsolete. Please remove any reference to it as soon as
 *  you can.
 *
 * @name emu_File_Obsolete3
 * @implements 1FB5:1A67:0005:8AB7 ()
 */
void emu_File_Obsolete3()
{
	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * This function is obsolete. Please remove any reference to it as soon as
 *  you can.
 *
 * @name emu_File_Obsolete4
 * @implements 1FB5:18D3:000E:76AC ()
 */
void emu_File_Obsolete4()
{
	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * This function is obsolete. Please remove any reference to it as soon as
 *  you can.
 *
 * @name emu_File_Obsolete5
 * @implements 1FB5:017A:001C:0508 ()
 */
void emu_File_Obsolete5()
{
	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Emulator wrapper around ChunkFile_Open()
 *
 * @name emu_ChunkFile_Open
 * @implements B4B1:0000:0016:067A ()
 */
void emu_ChunkFile_Open()
{
	csip32 filename;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filename = emu_get_csip32  (emu_ss, emu_sp, 0x0);

	emu_ax = ChunkFile_Open((char *)emu_get_memorycsip(filename));
}

/**
 * Emulator wrapper around ChunkFile_Close()
 *
 * @name emu_ChunkFile_Close
 * @implements B4B1:0082:0012:D287 ()
 */
void emu_ChunkFile_Close()
{
	uint8 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);

	ChunkFile_Close(index);
}

/**
 * Emulator wrapper around ChunkFile_Read()
 *
 * @name emu_ChunkFile_Read
 * @implements B4B1:01CD:002A:CE8A ()
 */
void emu_ChunkFile_Read()
{
	uint8 index;
	uint32 header;
	csip32 buffer;
	uint32 length;
	uint32 res;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index  = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);
	header =        emu_get_memory32(emu_ss, emu_sp, 0x2);
	buffer =        emu_get_csip32  (emu_ss, emu_sp, 0x6);
	length =        emu_get_memory32(emu_ss, emu_sp, 0xA);

	res = ChunkFile_Read(index, header, (void *)emu_get_memorycsip(buffer), length);

	emu_dx = res >> 16;
	emu_ax = res & 0xFFFF;
}
