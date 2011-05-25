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
 * Emulator wrapper around GUI_Screen_Copy().
 *
 * @name emu_GUI_Screen_Copy
 * @implements 24D0:000D:0039:C17D ()
 */
void emu_GUI_Screen_Copy()
{
	uint16 xSrc;
	uint16 ySrc;
	uint16 xDst;
	uint16 yDst;
	uint16 width;
	uint16 height;
	uint16 screenSrc;
	uint16 screenDst;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	xSrc        = emu_get_memory16(emu_ss, emu_sp, 0x0);
	ySrc        = emu_get_memory16(emu_ss, emu_sp, 0x2);
	xDst        = emu_get_memory16(emu_ss, emu_sp, 0x4);
	yDst        = emu_get_memory16(emu_ss, emu_sp, 0x6);
	width       = emu_get_memory16(emu_ss, emu_sp, 0x8);
	height      = emu_get_memory16(emu_ss, emu_sp, 0xA);
	screenSrc   = emu_get_memory16(emu_ss, emu_sp, 0xC);
	screenDst   = emu_get_memory16(emu_ss, emu_sp, 0xE);

	GUI_Screen_Copy(xSrc, ySrc, xDst, yDst, width, height, screenSrc, screenDst);
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
 * Emulator wrapper around GUI_Screen_FadeIn().
 *
 * @name emu_GUI_Screen_FadeIn
 * @implements 2C17:000C:002F:3016 ()
 */
void emu_GUI_Screen_FadeIn()
{
	uint16 xSrc;
	uint16 ySrc;
	uint16 xDst;
	uint16 yDst;
	uint16 width;
	uint16 height;
	uint16 screenSrc;
	uint16 screenDst;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	xSrc        = emu_get_memory16(emu_ss, emu_sp, 0x0);
	ySrc        = emu_get_memory16(emu_ss, emu_sp, 0x2);
	xDst        = emu_get_memory16(emu_ss, emu_sp, 0x4);
	yDst        = emu_get_memory16(emu_ss, emu_sp, 0x6);
	width       = emu_get_memory16(emu_ss, emu_sp, 0x8);
	height      = emu_get_memory16(emu_ss, emu_sp, 0xA);
	screenSrc   = emu_get_memory16(emu_ss, emu_sp, 0xC);
	screenDst   = emu_get_memory16(emu_ss, emu_sp, 0xE);

	GUI_Screen_FadeIn(xSrc, ySrc, xDst, yDst, width, height, screenSrc, screenDst);
}

/**
 * Emulator wrapper around GUI_Screen_SetActive().
 *
 * @name emu_GUI_Screen_SetActive
 * @implements 2598:0000:0017:EB80 ()
 * @implements 2598:0017:0004:893F
 */
void emu_GUI_Screen_SetActive()
{
	uint16 screenID;

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	screenID = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = GUI_Screen_SetActive(screenID);
}

/**
 * Emulator wrapper around GUI_Mouse_Show().
 *
 * @name emu_GUI_Mouse_Show
 * @implements 2B6C:006E:002E:4FBC ()
 */
void emu_GUI_Mouse_Show()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GUI_Mouse_Show();
}

/**
 * Emulator wrapper around GUI_Mouse_Hide().
 *
 * @name emu_GUI_Mouse_Hide
 * @implements 2B6C:000E:0045:C1FE ()
 */
void emu_GUI_Mouse_Hide()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GUI_Mouse_Hide();
}

/**
 * Emulator wrapper around GUI_Mouse_Hide_Safe().
 *
 * @name GUI_Mouse_Hide_Safe
 * @implements 2B6C:0137:0020:C73F ()
 */
void emu_GUI_Mouse_Hide_Safe()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GUI_Mouse_Hide_Safe();
}

/**
 * Emulator wrapper around GUI_Mouse_Show_Safe().
 *
 * @name GUI_Mouse_Show_Safe
 * @implements 2B6C:0169:001E:6939 ()
 */
void emu_GUI_Mouse_Show_Safe()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GUI_Mouse_Show_Safe();
}
