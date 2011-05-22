/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <stdarg.h>
#include "types.h"
#include "libemu.h"
#include "gui.h"
#include "mentat.h"
#include "../global.h"

extern void emu_String_sprintf_params();

/**
 * Emulator wrapper around GUI_EditBox().
 *
 * @name emu_GUI_DrawWiredRectangle
 * @implements 251B:0000:001E:7202 ()
 */
void emu_GUI_DrawWiredRectangle()
{
	uint16 left, top;
	uint16 right, bottom;
	uint16 colour;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	left   = emu_get_memory16(emu_ss, emu_sp, 0x0);
	top    = emu_get_memory16(emu_ss, emu_sp, 0x2);
	right  = emu_get_memory16(emu_ss, emu_sp, 0x4);
	bottom = emu_get_memory16(emu_ss, emu_sp, 0x6);
	colour = emu_get_memory16(emu_ss, emu_sp, 0x8);

	GUI_DrawWiredRectangle(left, top, right, bottom, (uint8)colour);
}

/**
 * Decompiled function emu_GUI_DrawFilledRectangle()
 *
 * @name emu_GUI_DrawFilledRectangle
 * @implements 22A6:0D31:0015:A4C3 ()
 */
void emu_GUI_DrawFilledRectangle()
{
	uint16 left, top;
	uint16 right, bottom;
	uint16 colour;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	left   = emu_get_memory16(emu_ss, emu_sp, 0x0);
	top    = emu_get_memory16(emu_ss, emu_sp, 0x2);
	right  = emu_get_memory16(emu_ss, emu_sp, 0x4);
	bottom = emu_get_memory16(emu_ss, emu_sp, 0x6);
	colour = emu_get_memory16(emu_ss, emu_sp, 0x8);

	GUI_DrawFilledRectangle(left, top, right, bottom, (uint8)colour);
}

/**
 * Emulator wrapper around GUI_DrawText()
 *
 * @name emu_GUI_DrawText
 * @implements 2BC2:000A:0044:2E0E ()
 */
void emu_GUI_DrawText()
{
	char *string;
	int16 left;
	int16 top;
	uint8 fgColour;
	uint8 bgColour;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	string   = (char *)emu_get_memorycsip(emu_get_csip32(emu_ss, emu_sp, 0x0));
	left     = (int16)emu_get_memory16(emu_ss, emu_sp, 0x4);
	top      = (int16)emu_get_memory16(emu_ss, emu_sp, 0x6);
	fgColour = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x8);
	bgColour = (uint8)emu_get_memory16(emu_ss, emu_sp, 0xA);

	GUI_DrawText(string, left, top, fgColour, bgColour);
}

/**
 * Emulator wrapper around GUI_DrawText_Wrapper()
 *
 * @name emu_GUI_DrawText_Wrapper
 * @implements 10E4:1EF1:0040:01F8 ()
 */
void emu_GUI_DrawText_Wrapper()
{
	csip32 string;
	int16 left;
	int16 top;
	uint8 fgColour;
	uint8 bgColour;
	uint16 flags;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	string   =        emu_get_csip32  (emu_ss, emu_sp, 0x0);
	left     = (int16)emu_get_memory16(emu_ss, emu_sp, 0x4);
	top      = (int16)emu_get_memory16(emu_ss, emu_sp, 0x6);
	fgColour = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x8);
	bgColour = (uint8)emu_get_memory16(emu_ss, emu_sp, 0xA);
	flags    =        emu_get_memory16(emu_ss, emu_sp, 0xC);

	if (string.csip != 0) {
		/* Run the snprintf in emulator space */
		emu_push(emu_ss); emu_push(emu_sp + 16); /* args are at emu_sp + 14, but as we pushed emu_ss they are now at emu_sp + 16 */
		emu_push(string.s.cs); emu_push(string.s.ip);
		emu_push(0x353F); emu_push(0x8AEE);
		emu_push(emu_cs); emu_push(0x2035); emu_cs = 0x01F7; emu_String_sprintf_params();
		emu_sp += 12;

		GUI_DrawText_Wrapper(g_global->variable_8AEE, left, top, fgColour, bgColour, flags);
	} else {
		GUI_DrawText_Wrapper(NULL, left, top, fgColour, bgColour, flags);
	}
}

/**
 * Emulator wrapper around GUI_PaletteAnimate()
 *
 * @name emu_GUI_PaletteAnimate
 * @implements 0642:0559:0027:3560 ()
 */
void emu_GUI_PaletteAnimate()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GUI_PaletteAnimate();
}

/**
 * Emulator wrapper around GUI_DisplayModalMessage()
 *
 * @name emu_GUI_DisplayModalMessage
 * @implements 10E4:0273:0029:DCE5 ()
 */
void emu_GUI_DisplayModalMessage()
{
	csip32 str;
	uint16 arg0A;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	str     = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	arg0A   = emu_get_memory16(emu_ss, emu_sp, 0x4);

	/* XXX -- Theorically there can be more args, but this wrapper is always called without any */
	emu_ax = GUI_DisplayModalMessage((char *)emu_get_memorycsip(str), arg0A);
}

/**
 * Emulator wrapper around GUI_SplitText()
 *
 * @name emu_GUI_SplitText
 * @implements 10E4:01B8:0014:5104 ()
 */
void emu_GUI_SplitText()
{
	csip32 str;
	uint16 maxwidth;
	char delimiter;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	str       = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	maxwidth  = emu_get_memory16(emu_ss, emu_sp, 0x4);
	delimiter = emu_get_memory8 (emu_ss, emu_sp, 0x6);

	emu_ax = GUI_SplitText((char *)emu_get_memorycsip(str), maxwidth, delimiter);
}

/**
 * Emulator wrapper around GUI_DrawSprite()
 *
 * @name emu_GUI_DrawSprite
 * @implements 2903:0158:001A:2931 ()
 */
void emu_GUI_DrawSprite()
{
	uint16 memory;
	csip32 sprite_csip;
	int16  posX;
	int16  posY;
	uint16 windowID;
	uint16 flags;

	uint16  va_offset;
	uint8  *arg_2000   = NULL;
	uint8  *arg_0100_1 = NULL;
	uint16  arg_0100_2 = 0;
	uint16  arg_1000   = 0;
	uint8   arg_0800   = 0;
	uint16  arg_0004_1 = 0;
	uint16  arg_0004_2 = 0;


	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	memory      =        emu_get_memory16(emu_ss, emu_sp, 0x0);
	sprite_csip =        emu_get_csip32  (emu_ss, emu_sp, 0x2);
	posX        = (int16)emu_get_memory16(emu_ss, emu_sp, 0x6);
	posY        = (int16)emu_get_memory16(emu_ss, emu_sp, 0x8);
	windowID    =        emu_get_memory16(emu_ss, emu_sp, 0xA);
	flags       =        emu_get_memory16(emu_ss, emu_sp, 0xC);

	if (sprite_csip.csip == 0x0) return;

	va_offset = 0xE;
	if ((flags & 0x2000) != 0) {
		arg_2000 = emu_get_memorycsip(emu_get_csip32(emu_ss, emu_sp, va_offset));
		va_offset += 4;
	}

	if ((flags & 0x100) != 0) {
		arg_0100_1 = emu_get_memorycsip(emu_get_csip32(emu_ss, emu_sp, va_offset));
		va_offset += 4;
		arg_0100_2 = emu_get_memory16(emu_ss, emu_sp, va_offset);
		va_offset += 2;
	}

	if ((flags & 0x1000) != 0) {
		arg_1000 = emu_get_memory16(emu_ss, emu_sp, va_offset);
		va_offset += 2;
	}

	if ((flags & 0x800) != 0) {
		arg_0800 = emu_get_memory8(emu_ss, emu_sp, va_offset);
		va_offset += 2;
	}

	if ((flags & 0x4) != 0) {
		arg_0004_1 = emu_get_memory16(emu_ss, emu_sp, va_offset);
		va_offset += 2;
		arg_0004_2 = emu_get_memory16(emu_ss, emu_sp, va_offset);
		va_offset += 2;
	}

	switch (flags & 0x3904) {
		case 0x3904: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_2000, arg_0100_1, arg_0100_2, arg_1000, arg_0800, arg_0004_1, arg_0004_2); break;
		case 0x3900: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_2000, arg_0100_1, arg_0100_2, arg_1000, arg_0800); break;
		case 0x3804: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_2000, arg_1000, arg_0800, arg_0004_1, arg_0004_2); break;
		case 0x3800: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_2000, arg_1000, arg_0800); break;
		case 0x3104: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_2000, arg_0100_1, arg_0100_2, arg_1000, arg_0004_1, arg_0004_2); break;
		case 0x3100: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_2000, arg_0100_1, arg_0100_2, arg_1000); break;
		case 0x3004: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_2000, arg_1000, arg_0004_1, arg_0004_2); break;
		case 0x3000: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_2000, arg_1000); break;
		case 0x2904: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_2000, arg_0100_1, arg_0100_2, arg_0800, arg_0004_1, arg_0004_2); break;
		case 0x2900: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_2000, arg_0100_1, arg_0100_2, arg_0800); break;
		case 0x2804: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_2000, arg_0800, arg_0004_1, arg_0004_2); break;
		case 0x2800: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_2000, arg_0800); break;
		case 0x2104: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_2000, arg_0100_1, arg_0100_2, arg_0004_1, arg_0004_2); break;
		case 0x2100: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_2000, arg_0100_1, arg_0100_2); break;
		case 0x2004: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_2000, arg_0004_1, arg_0004_2); break;
		case 0x2000: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_2000); break;
		case 0x1904: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_0100_1, arg_0100_2, arg_1000, arg_0800, arg_0004_1, arg_0004_2); break;
		case 0x1900: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_0100_1, arg_0100_2, arg_1000, arg_0800); break;
		case 0x1804: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_1000, arg_0800, arg_0004_1, arg_0004_2); break;
		case 0x1800: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_1000, arg_0800); break;
		case 0x1104: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_0100_1, arg_0100_2, arg_1000, arg_0004_1, arg_0004_2); break;
		case 0x1100: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_0100_1, arg_0100_2, arg_1000); break;
		case 0x1004: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_1000, arg_0004_1, arg_0004_2); break;
		case 0x1000: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_1000); break;
		case 0x0904: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_0100_1, arg_0100_2, arg_0800, arg_0004_1, arg_0004_2); break;
		case 0x0900: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_0100_1, arg_0100_2, arg_0800); break;
		case 0x0804: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_0800, arg_0004_1, arg_0004_2); break;
		case 0x0800: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_0800); break;
		case 0x0104: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_0100_1, arg_0100_2, arg_0004_1, arg_0004_2); break;
		case 0x0100: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_0100_1, arg_0100_2); break;
		case 0x0004: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags, arg_0004_1, arg_0004_2); break;
		case 0x0000: GUI_DrawSprite(memory, sprite_csip, posX, posY, windowID, flags); break;
		default: assert(0);
	}
}

/**
 * Emulator wrapper around GUI_DrawBorder().
 *
 * @name emu_GUI_DrawBorder
 * @implements 10E4:0008:0048:5BD4 ()
 */
void emu_GUI_DrawBorder()
{
	uint16 left;
	uint16 top;
	uint16 width;
	uint16 height;
	uint16 colourSchemaIndex;
	uint16 fill;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	left              = emu_get_memory16(emu_ss, emu_sp, 0x0);
	top               = emu_get_memory16(emu_ss, emu_sp, 0x2);
	width             = emu_get_memory16(emu_ss, emu_sp, 0x4);
	height            = emu_get_memory16(emu_ss, emu_sp, 0x6);
	colourSchemaIndex = emu_get_memory16(emu_ss, emu_sp, 0x8);
	fill              = emu_get_memory16(emu_ss, emu_sp, 0xA);

	GUI_DrawBorder(left, top, width, height, colourSchemaIndex, (fill != 0) ? true : false);
}

/**
 * Emulator wrapper around emu_GUI_DisplayHint().
 *
 * @name emu_GUI_DisplayHint
 * @implements 10E4:0117:0015:392D ()
 */
void emu_GUI_DisplayHint()
{
	uint16 stringID;
	uint16 spriteID;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	stringID = emu_get_memory16(emu_ss, emu_sp, 0x0);
	spriteID = emu_get_memory16(emu_ss, emu_sp, 0x2);

	emu_ax = GUI_DisplayHint(stringID, spriteID);
}

/**
 * Emulator wrapper around GUI_DrawCredits().
 *
 * @name emu_GUI_DrawCredits
 * @implements 10E4:0675:0026:F126 ()
 */
void emu_GUI_DrawCredits()
{
	uint16 houseID;
	uint16 var08;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	houseID = emu_get_memory16(emu_ss, emu_sp, 0x0);
	var08   = emu_get_memory16(emu_ss, emu_sp, 0x2);

	GUI_DrawCredits((uint8)houseID, var08);
}

/**
 * Emulator wrapper around GUI_DrawLine().
 *
 * @name emu_GUI_DrawLine
 * @implements 22A6:094D:000C:EC7D ()
 */
void emu_GUI_DrawLine()
{
	uint16 x1;
	uint16 y1;
	uint16 x2;
	uint16 y2;
	uint16 color;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	x1    = emu_get_memory16(emu_ss, emu_sp, 0x0);
	y1    = emu_get_memory16(emu_ss, emu_sp, 0x2);
	x2    = emu_get_memory16(emu_ss, emu_sp, 0x4);
	y2    = emu_get_memory16(emu_ss, emu_sp, 0x6);
	color = emu_get_memory16(emu_ss, emu_sp, 0x8);

	GUI_DrawLine(x1, y1, x2, y2, (uint8)color);
}

/**
 * Emulator wrapper around GUI_Unknown_24D0_000D().
 *
 * @name emu_GUI_Unknown_24D0_000D
 * @implements 24D0:000D:0039:C17D ()
 */
void emu_GUI_Unknown_24D0_000D()
{
	int16 loc06;
	int16 loc08;
	int16 loc0A;
	int16 loc0C;
	int16 loc0E;
	int16 loc10;
	int16 loc12;
	int16 loc14;

	/* Pop the return address from the stack. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	loc06 = emu_get_memory16(emu_ss, emu_sp, 0x0);
	loc08 = emu_get_memory16(emu_ss, emu_sp, 0x2);
	loc0A = emu_get_memory16(emu_ss, emu_sp, 0x4);
	loc0C = emu_get_memory16(emu_ss, emu_sp, 0x6);
	loc0E = emu_get_memory16(emu_ss, emu_sp, 0x8);
	loc10 = emu_get_memory16(emu_ss, emu_sp, 0xA);
	loc12 = emu_get_memory16(emu_ss, emu_sp, 0xC);
	loc14 = emu_get_memory16(emu_ss, emu_sp, 0xE);

	GUI_Unknown_24D0_000D(loc06, loc08, loc0A, loc0C, loc0E, loc10, loc12, loc14);
}

/**
 * Emulator wrapper around GUI_Mentat_Display().
 *
 * @name emu_GUI_Mentat_Display()
 * @implements B4DA:0000:002C:B3C2 ()
 */
void emu_GUI_Mentat_Display()
{
	csip32 houseFilename;
	uint16 houseID;

	/* Pop return address off the stack. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	houseFilename = emu_get_csip32(emu_ss, emu_sp, 0x0);
	houseID = emu_get_memory16(emu_ss, emu_sp, 0x4);

	GUI_Mentat_Display((char *)emu_get_memorycsip(houseFilename), houseID);
}

/**
 * Emu wrapper around #GUI_Mentat_Animation()
 *
 * @name emu_GUI_Mentat_Animation();
 * @implements B4DA:0308:0018:F99F ()
 */
void emu_GUI_Mentat_Animation()
{
	uint16 unknown;

	/* Pop the return address from the stack. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	unknown = emu_get_memory16(emu_ss, emu_sp, 0);
	GUI_Mentat_Animation(unknown);
}

/**
 * Emulator wrapper around GUI_DrawSprite_8002().
 *
 * @name emu_GUI_DrawSprite_8002()
 * @implements B4DA:0A8E:0025:4AC8 ()
 */
void emu_GUI_DrawSprite_8002()
{
	uint16 memory;

	/* Pop return address off the stack. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	memory = emu_get_memory16(emu_ss, emu_sp, 0);
	GUI_DrawSprite_8002(memory);
}

/**
 * Emulation wrapper around #GUI_Mentat_SelectHelpSubject
 *
 * @name emu_GUI_Mentat_SelectHelpSubject
 * @implements B4E0:0AAD:002E:796D ()
 */
void emu_GUI_Mentat_SelectHelpSubject()
{
	int16 difference;

	/* Pop return address off the stack. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	difference = emu_get_memory16(emu_ss, emu_sp, 0);
	GUI_Mentat_SelectHelpSubject(difference);
}

/**
 * Emulator wrapper around GUI_Mentat_Create_HelpScreen_Widgets
 *
 * @name emu_GUI_Mentat_Create_HelpScreen_Widgets
 * @implements B4E0:0B86:001E:9967 ()
 */
void emu_GUI_Mentat_Create_HelpScreen_Widgets()
{
	/* Pop return address off the stack. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GUI_Mentat_Create_HelpScreen_Widgets();
}

/**
 * Emulation wrapper around #GUI_Get_Scrollbar_Position
 *
 * @name emu_GUI_Get_Scrollbar_Position
 * @implements B520:00E3:0028:2188 ()
 */
void emu_GUI_Get_Scrollbar_Position()
{
	csip32 csip_w;
	Widget *w;

	/* Pop return address off the stack. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	csip_w = emu_get_csip32(emu_ss, emu_sp, 0);
	w = (Widget *)emu_get_memorycsip(csip_w);

	emu_ax = GUI_Get_Scrollbar_Position(w);
}

/**
 * Emulator wrapper around GUI_FactoryWindow_GetStruct8BEA()
 *
 * @name emu_GUI_FactoryWindow_GetStruct8BEA
 * @implements B495:1230:001B:A160 ()
 */
void emu_GUI_FactoryWindow_GetStruct8BEA()
{
	uint16 offset;
	csip32 ret;

	/* Pop return address off the stack. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	offset = emu_get_memory16(emu_ss, emu_sp, 0x0);

	ret = emu_Global_GetCSIP(GUI_FactoryWindow_GetStruct8BEA(offset));

	emu_dx = ret.s.cs;
	emu_ax = ret.s.ip;
}
