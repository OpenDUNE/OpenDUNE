/* $Id$ */

/** @file src/gui/mentat.c Mentat gui routines. */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../os/strings.h"
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "mentat.h"
#include "gui.h"
#include "widget.h"
#include "../house.h"
#include "../load.h"
#include "../sprites.h"
#include "../string.h"
#include "../tools.h"
#include "../file.h"
#include "../gfx.h"
#include "../wsa.h"
#include "../unknown/unknown.h"
#include "../input/input.h"
#include "../mouse.h"
#include "../os/endian.h"
#include "../os/sleep.h"
#include "./font.h"

/**
 * Information about the mentat.
 */
static const uint8 unknownHouseData[6][8] = {
	{0x20,0x58,0x20,0x68,0x00,0x00,0x80,0x68}, /* Harkonnen mentat. */
	{0x28,0x50,0x28,0x60,0x48,0x98,0x80,0x80}, /* Atreides mentat. */
	{0x10,0x50,0x10,0x60,0x58,0x90,0x80,0x80}, /* Ordos mentat. */
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x40,0x50,0x38,0x60,0x00,0x00,0x00,0x00}, /* Intro houses (mercenaries) mentat. */
};



/**
 * Show the Mentat screen with a dialog (Proceed / Repeat).
 * @param houseID The house to show the mentat of.
 * @param stringID The string to show.
 * @param wsaFilename The WSA to show.
 * @param musicID The Music to play.
 */
static void GUI_Mentat_ShowDialog(uint8 houseID, uint16 stringID, csip32 wsaFilename, uint16 musicID)
{
	Widget *w1, *w2;
	csip32 w1csip, w2csip;

	if (g_global->debugSkipDialogs) return;

	Sprites_Load(1, 7, g_sprites);

	w1 = GUI_Widget_Allocate(1, GUI_Widget_GetShortcut(String_Get_ByIndex(175)[0]), 168, 168, 6, 0, 0, &w1csip);
	w2 = GUI_Widget_Allocate(2, GUI_Widget_GetShortcut(String_Get_ByIndex(176)[0]), 240, 168, 8, 0, 0, &w2csip);

	w1 = GUI_Widget_Link(w1, w2);
	w1csip = emu_Global_GetCSIP(w1);

	Sound_Unknown0363(0xFFFE);

	{
		csip32 nullcsip;
		nullcsip.csip = 0x0;
		Driver_Voice_Play(NULL, nullcsip, 0xFF, 0xFF);
	}

	Music_Play(musicID);

	do {
		char filename[10];
		snprintf(filename, sizeof(filename), "TEXT%c", emu_get_memorycsip(g_houseInfo[houseID].name)[0]);
		String_LoadFile(String_GenerateFilename(filename), stringID, (char *)emu_get_memorycsip(g_global->readBuffer), g_global->readBufferSize);
		String_TranslateSpecial((char *)emu_get_memorycsip(g_global->readBuffer), (char *)emu_get_memorycsip(g_global->readBuffer));
	} while (GUI_Mentat_Show(g_global->readBuffer, wsaFilename, w1, true) == 0x8002);

	Tools_Free(w2csip);
	Tools_Free(w1csip);

	if (musicID != 0xFFFF) Driver_Music_FadeOut();

	Sprites_Load(0, 7, g_sprites);
}

static void GUI_Mentat_HelpListLoop()
{
	uint16 key = 0;

	while (key != 0x8001) {
		Widget *w = (Widget *)emu_get_memorycsip(g_global->variable_802A);

		GUI_Mentat_Animation(0);

		key = GUI_Widget_HandleEvents(w);

		if ((key & 0x800) != 0) key = 0;

		if (key == 0x8001) break;

		key &= 0x80FF;

		g_global->variable_25CE = 1;

		switch (key) {
			case 0x0053:
			case 0x0060: /* NUMPAD 8 / ARROW UP */
			case 0x0453:
			case 0x0460:
				if (g_global->selectedHelpSubject != 0) {
					GUI_Mentat_List_Click(GUI_Widget_Get_ByIndex(w, g_global->selectedHelpSubject + 2));
					break;
				}

				GUI_Widget_Scrollbar_ArrowUp_Click((Widget *)emu_get_memorycsip(g_global->variable_8036));
				break;

			case 0x0054:
			case 0x0062: /* NUMPAD 2 / ARROW DOWN */
			case 0x0454:
			case 0x0462:
				if (g_global->selectedHelpSubject < 10) {
					GUI_Mentat_List_Click(GUI_Widget_Get_ByIndex(w, g_global->selectedHelpSubject + 4));
					break;
				}

				GUI_Widget_Scrollbar_ArrowDown_Click((Widget *)emu_get_memorycsip(g_global->variable_8036));
				break;

			case 0x0055:
			case 0x0065: /* NUMPAD 9 / PAGE UP */
			case 0x0455:
			case 0x0465: {
				uint8 i;
				for (i = 0; i < 11; i++) GUI_Widget_Scrollbar_ArrowUp_Click((Widget *)emu_get_memorycsip(g_global->variable_8036));
			} break;

			case 0x0056:
			case 0x0067: /* NUMPAD 3 / PAGE DOWN */
			case 0x0456:
			case 0x0467: {
				uint8 i;
				for (i = 0; i < 11; i++) GUI_Widget_Scrollbar_ArrowDown_Click((Widget *)emu_get_memorycsip(g_global->variable_8036));
			} break;

			case 0x0041: /* MOUSE LEFT BUTTON */
				if (g_global->config.useMouse) break;
				/* FALL THROUGH */

			case 0x002B: /* NUMPAD 5 / RETURN */
			case 0x003D: /* SPACE */
			case 0x042B:
			case 0x043D:
				GUI_Mentat_List_Click(GUI_Widget_Get_ByIndex(w, g_global->selectedHelpSubject + 3));
				break;

			default: break;
		}

		g_global->variable_25CE = 0;
	}
}

static void GUI_Mentat_LoadHelpSubjects(bool init)
{
	uint8 fileID;
	uint32 length;
	uint32 counter;
	uint8 *helpSubjects;
	uint16 i;

	if (init) {
		g_global->variable_25D0 = Screen_GetSegment_ByIndex_1(3);

		g_global->topHelpList = 0;
		g_global->selectedHelpSubject = 0;

		sprintf(g_global->mentatFilename, "MENTAT%c", *emu_get_memorycsip(g_houseInfo[g_global->playerHouseID].name));
		strcpy(g_global->mentatFilename, String_GenerateFilename(g_global->mentatFilename));
	}

	fileID = ChunkFile_Open(g_global->mentatFilename);
	length = ChunkFile_Read(fileID, HTOBE32('NAME'), emu_get_memorycsip(g_global->variable_25D0), g_global->variable_6CD3[1][1]);
	ChunkFile_Close(fileID);

	g_global->numberHelpSubjects = 0;
	helpSubjects = emu_get_memorycsip(g_global->variable_25D0);

	counter = 0;
	while (counter < length) {
		uint8 size = *helpSubjects;

		counter += size;

		if (helpSubjects[size - 1] > g_global->campaignID + 1) {
			while (size-- != 0) *helpSubjects++ = '\0';
			continue;
		}

		helpSubjects[size - 1] = size;
		helpSubjects += size;
		g_global->numberHelpSubjects++;
	}

	helpSubjects = emu_get_memorycsip(g_global->variable_25D0);

	while (*helpSubjects == '\0') helpSubjects++;

	for (i = 0; i < g_global->topHelpList; i++) helpSubjects = String_NextString(helpSubjects);

	g_global->helpSubjects = emu_Global_GetCSIP(helpSubjects);
}

static void GUI_Mentat_Draw(bool force)
{
	uint16 oldScreenID;
	Widget *line;
	Widget *w = (Widget *)emu_get_memorycsip(g_global->variable_802A);
	uint8 *helpSubjects = emu_get_memorycsip(g_global->helpSubjects);
	uint16 i;

	if (!force && g_global->topHelpList == g_global->variable_25D4) return;

	g_global->variable_25D4 = g_global->topHelpList;

	oldScreenID = GUI_Screen_SetActive(2);

	Unknown_07AE_00E4(8);

	GUI_DrawSprite_8002(2);

	/* "Select Subject:" */
	GUI_DrawText_Wrapper(String_Get_ByIndex(0x30), (g_global->variable_992D << 3) + 16, g_global->variable_992B + 2, 12, 0, 0x12);
	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x11);

	line = GUI_Widget_Get_ByIndex(w, 3);
	for (i = 0; i < 11; i++) {
		csip32 text_csip = emu_Global_GetCSIP(helpSubjects);
		text_csip.s.ip += 7;
		line->drawProcDown     = text_csip;
		line->drawProcSelected = text_csip;
		line->drawProcNormal   = text_csip;

		if (helpSubjects[6] == '0') {
			line->offsetX          = 16;
			line->fgColourSelected = 11;
			line->fgColourDown     = 11;
			line->fgColourNormal   = 11;
			line->stringID         = 0x30;
		} else {
			uint8 colour = (i == g_global->selectedHelpSubject) ? 8 : 15;
			line->offsetX          = 24;
			line->fgColourSelected = colour;
			line->fgColourDown     = colour;
			line->fgColourNormal   = colour;
			line->stringID         = 0x31;
		}

		GUI_Widget_MakeNormal(line, false);
		GUI_Widget_Draw(line);

		line = GUI_Widget_GetNext(line);
		helpSubjects = String_NextString(helpSubjects);
	}

	GUI_Widget_Scrollbar_Init(GUI_Widget_Get_ByIndex(w, 15), g_global->numberHelpSubjects, 11, g_global->topHelpList);

	GUI_Widget_Draw(GUI_Widget_Get_ByIndex(w, 16));
	GUI_Widget_Draw(GUI_Widget_Get_ByIndex(w, 17));

	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(g_global->variable_992D, g_global->variable_992B, g_global->variable_992D, g_global->variable_992B, g_global->variable_992F, g_global->variable_9931, 2, 0);
	GUI_Mouse_Show_Safe();
	GUI_Screen_SetActive(oldScreenID);
}

/**
 * Shows the Help window.
 * @param proceed Display a "Proceed" button if true, "Exit" otherwise.
 */
static void GUI_Mentat_ShowHelpList(bool proceed)
{
	uint16 oldScreenID;
	Widget *w;

	oldScreenID = GUI_Screen_SetActive(2);

	Input_Flags_SetBits(INPUT_FLAG_KEY_REPEAT);
	Input_History_Clear();

	GUI_Mentat_Display(NULL, g_global->playerHouseID);

	w = GUI_Widget_Allocate(1, GUI_Widget_GetShortcut(*String_Get_ByIndex(0xC1)), 200, 168, proceed ? 6 : 4, 5, 1, &g_global->variable_8026);

	w->shortcut2 = 'n';

	GUI_Mentat_Create_HelpScreen_Widgets();

	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, 2, 0);
	GUI_Mouse_Show_Safe();

	GUI_Mentat_LoadHelpSubjects(true);

	GUI_Mentat_Draw(true);

	GUI_Screen_SetActive(0);

	GUI_Mentat_HelpListLoop();

	Tools_Free(g_global->variable_8026); /* w */

	Load_Palette_Mercenaries();

	GUI_Widget_Free_WithScrollbar(g_global->variable_8036);

	Tools_Free(g_global->variable_8032);
	Tools_Free(g_global->variable_802E);

	g_global->variable_802E.csip = 0x0;
	g_global->variable_8032.csip = 0x0;
	g_global->variable_8036.csip = 0x0;

	Input_Flags_ClearBits(INPUT_FLAG_KEY_REPEAT);

	GUI_Screen_SetActive(oldScreenID);
}

/**
 * Handle clicks on the Mentat widget.
 * @return True, always.
 */
bool GUI_Widget_Mentat_Click()
{
	g_global->cursorSpriteID = 0;

	Sprites_SetMouseSprite(0, 0, g_sprites[0]);

	Sound_Unknown0363(0xFFFE);

	{
		csip32 nullcsip;
		nullcsip.csip = 0x0;
		Driver_Voice_Play(NULL, nullcsip, 0xFF, 0xFF);
	}

	Music_Play(g_houseInfo[g_global->playerHouseID].musicBriefing);

	Sprites_UnloadTiles();

	Sprites_Load(1, 7, g_sprites);

	Game_Timer_SetState(2, false);

	GUI_Mentat_ShowHelpList(false);

	Game_Timer_SetState(2, true);

	Driver_Sound_Play(1, 0xFF);

	Sprites_Load(0, 7, g_sprites);

	Sprites_LoadTiles();

	g_global->variable_38C4 = 1;

	GUI_DrawInterfaceAndRadar(0);

	Music_Play(Tools_RandomRange(0, 5) + 8);

	return true;
}

/**
 * Show the Mentat screen.
 * @param spriteBuffer The buffer of the strings.
 * @param wsaFilename The WSA to show.
 * @param w The widgets to handle. Can be NULL for no widgets.
 * @param unknown A boolean.
 * @return Return value of GUI_Widget_HandleEvents() or f__B4DA_0AB8_002A_AAB2() (latter when no widgets).
 */
uint16 GUI_Mentat_Show(csip32 stringBuffer, csip32 wsaFilename, Widget *w, bool unknown)
{
	uint16 ret;

	Sprites_UnloadTiles();

	GUI_Mentat_Display((char *)emu_get_memorycsip(wsaFilename), g_global->playerHouseID);

	GUI_Screen_SetActive(2);

	Unknown_07AE_00E4(8);

	if (wsaFilename.csip != 0x0) {
		csip32 wsa;
		csip32 null;

		null.csip = 0x0;

		wsa = WSA_LoadFile((char *)emu_get_memorycsip(wsaFilename), Screen_GetSegment_ByIndex_1(5), g_global->variable_6CD3[2][0], 0, null);
		WSA_DisplayFrame(wsa, 0, g_global->variable_992D * 8, g_global->variable_992B, 2);
		WSA_Unload(wsa);
	}

	GUI_DrawSprite_8002(2);
	GUI_Screen_SetActive(0);

	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, 2, 0);
	GUI_Mouse_Show_Safe();

	Unknown_259E_0006(emu_get_memorycsip(g_global->variable_3C32), 15);

	ret = GUI_Mentat_Loop((char *)emu_get_memorycsip(wsaFilename), NULL, (char *)emu_get_memorycsip(stringBuffer), true, NULL);

	if (w != NULL) {
		do {
			GUI_Widget_DrawAll(w);
			ret = GUI_Widget_HandleEvents(w);

			GUI_PaletteAnimate();
			GUI_Mentat_Animation(0);
		} while ((ret & 0x8000) == 0);
	}

	Input_History_Clear();

	if (unknown) {
		Load_Palette_Mercenaries();
		Sprites_LoadTiles();
	}

	return ret;
}

/**
 * Show the briefing screen.
 */
void GUI_Mentat_ShowBriefing()
{
	csip32 picture;
	picture.s.cs = 0x353F;
	picture.s.ip = 0x8D0D; /* g_global->scenario.pictureBriefing */
	GUI_Mentat_ShowDialog((uint8)g_global->playerHouseID, g_global->campaignID * 4 + 4, picture, g_houseInfo[g_global->playerHouseID].musicBriefing);
}

/**
 * Show the win screen.
 */
void GUI_Mentat_ShowWin()
{
	csip32 picture;
	picture.s.cs = 0x353F;
	picture.s.ip = 0x8D1B; /* g_global->scenario.pictureWin */
	GUI_Mentat_ShowDialog((uint8)g_global->playerHouseID, g_global->campaignID * 4 + 5, picture, g_houseInfo[g_global->playerHouseID].musicWin);
}

/**
 * Show the lose screen.
 */
void GUI_Mentat_ShowLose()
{
	csip32 picture;
	picture.s.cs = 0x353F;
	picture.s.ip = 0x8D29; /* g_global->scenario.pictureLose */
	GUI_Mentat_ShowDialog((uint8)g_global->playerHouseID, g_global->campaignID * 4 + 6, picture, g_houseInfo[g_global->playerHouseID].musicLose);
}

/**
 * Display a mentat.
 * @param houseFilename Filename of the house.
 * @param houseID ID of the house.
 */
void GUI_Mentat_Display(char *houseFilename, uint16 houseID)
{
	uint16 oldScreenID;
	int i;

	char *houseName = (char *)emu_get_memorycsip(g_houseInfo[houseID].name);
	sprintf((char *)g_global->variable_9939, "MENTAT%c.CPS", houseName[0]);

	Sprites_LoadImage((char *)g_global->variable_9939, 3, 3, g_palette_998A, 1);

	GFX_Screen_Copy3(3, 2);

	oldScreenID = GUI_Screen_SetActive(2);

	if (houseID == HOUSE_MERCENARY) {
		File_ReadBlockFile("BENE.PAL", (char *)emu_get_memorycsip(g_global->variable_3C32), 0x300);
	}

	memset(g_global->variable_7FC6, 0, sizeof(g_global->variable_7FC6));

	g_global->variable_8006 = g_global->variable_8008 = unknownHouseData[houseID][0];
	g_global->variable_8007 = g_global->variable_8009 = unknownHouseData[houseID][1];

	for (i = 0; i < 5; i++) {
		g_global->variable_7FC6[0][i] = g_sprites[14 + i];
	}

	g_global->variable_8008 += Sprite_GetWidth(g_global->variable_7FC6[0][0]);
	g_global->variable_8009 += Sprite_GetHeight(g_global->variable_7FC6[0][0]);

	g_global->variable_800A = g_global->variable_800C = unknownHouseData[houseID][2];
	g_global->variable_800B = g_global->variable_800D = unknownHouseData[houseID][3];

	for (i = 0; i < 5; i++) {
		g_global->variable_7FC6[1][i] = g_sprites[19 + i];
	}

	g_global->variable_800C += Sprite_GetWidth(g_global->variable_7FC6[1][0]);
	g_global->variable_800D += Sprite_GetHeight(g_global->variable_7FC6[1][0]);

	g_global->variable_800E = unknownHouseData[houseID][4];
	g_global->variable_800F = unknownHouseData[houseID][5];

	for (i = 0; i < 4; i++) {
		g_global->variable_7FC6[2][i] = g_sprites[25 + i];
	}

	g_global->variable_8010 = unknownHouseData[houseID][6];
	g_global->variable_8011 = unknownHouseData[houseID][7];

	g_global->variable_8002 = g_sprites[24];

	Unknown_07AE_00E4(8);

	if (houseFilename != NULL) {
		csip32 locPtr;
		csip32 null;

		null.csip = 0x0;

		locPtr = WSA_LoadFile(houseFilename, Screen_GetSegment_ByIndex_1(5), g_global->variable_6CD3[2][1], 0, null);
		WSA_DisplayFrame(locPtr, 0, g_global->variable_992D * 8, g_global->variable_992B, 2);
		WSA_Unload(locPtr);
	}

	GUI_DrawSprite_8002(g_global->screenActiveID);
	GUI_Screen_SetActive(oldScreenID);
}

/**
 * Draw sprites and handle mouse in a mentat screen.
 * @param unknown
 */
void GUI_Mentat_Animation(uint16 unknown)
{
	csip32 sprite;
	uint16 bool06;
	uint16 i;

	if (g_global->variable_801A < (int32)g_global->variable_76AC && g_global->variable_2580 == 0) {
		if (g_global->variable_801A != 0) {
			if (g_global->variable_7FC6[2][1 + abs(g_global->variable_8024)].csip == 0x0) {
				g_global->variable_8024 = 1 - g_global->variable_8024;
			} else {
				g_global->variable_8024++;
			}

			sprite = g_global->variable_7FC6[2][abs(g_global->variable_8024)];

			GUI_Mouse_Hide_InRegion(g_global->variable_800E, g_global->variable_800F, g_global->variable_800E + Sprite_GetWidth(sprite), g_global->variable_800F + Sprite_GetHeight(sprite));
			GUI_DrawSprite(0, sprite, g_global->variable_800E, g_global->variable_800F, 0, 0);
			GUI_Mouse_Show_InRegion();
		}

		switch (g_global->playerHouseID) {
			case 0:
				g_global->variable_801A = g_global->variable_76AC + 300 * 60;
				break;
			case 1:
				g_global->variable_801A = g_global->variable_76AC + 60 * Tools_RandomRange(1,3);
				break;
			case 2:
				if (g_global->variable_8024 != 0x0) {
					g_global->variable_801A = g_global->variable_76AC + 6;
				} else {
					g_global->variable_801A = g_global->variable_76AC + 60 * Tools_RandomRange(10, 19);
				}
				break;
			default:
				break;
		}
	}

	if (unknown == 0x1) {
		if (g_global->variable_8016 < (int32)g_global->variable_76AC) {
			g_global->variable_8022 = Tools_RandomRange(0, 4);
			sprite = g_global->variable_7FC6[1][g_global->variable_8022];

			GUI_Mouse_Hide_InRegion(g_global->variable_800A, g_global->variable_800B, g_global->variable_800A + Sprite_GetWidth(sprite), g_global->variable_800B + Sprite_GetHeight(sprite));
			GUI_DrawSprite(0, sprite, g_global->variable_800A, g_global->variable_800B, 0, 0);
			GUI_Mouse_Show_InRegion();

			switch (g_global->variable_8022) {
				case 0:
					g_global->variable_8016 = g_global->variable_76AC + Tools_RandomRange(7, 30);
					break;
				case 1:
				case 2:
				case 3:
					g_global->variable_8016 = g_global->variable_76AC + Tools_RandomRange(6, 10);
					break;
				case 4:
					g_global->variable_8016 = g_global->variable_76AC + Tools_RandomRange(5, 6);
					break;
				default:
					break;
			}
		}
	} else {
		bool06 = 0x0;

		if (Input_Test(0x41) == 0 && Input_Test(0x42) == 0) {
			if (g_global->variable_8022 != 0) {
				g_global->variable_8022 = 0;
				g_global->variable_8016 = 0;
				bool06 = 0x1;
			}
		} else if (Mouse_InsideRegion(g_global->variable_800A, g_global->variable_800B, g_global->variable_800C, g_global->variable_800D) != 0) {
			if (g_global->variable_8016 != -1) {
				g_global->variable_8016 = -1;
				g_global->variable_8022 = Tools_RandomRange(1, 4);
				bool06 = 0x1;
			}
		} else {
			if (g_global->variable_8022 != 0x0) {
				g_global->variable_8022 = 0x0;
				g_global->variable_8016 = 0;
				bool06 = 0x1;
			}
		}

		if (bool06 != 0x0) {
			sprite = g_global->variable_7FC6[1][g_global->variable_8022];

			GUI_Mouse_Hide_InRegion(g_global->variable_800A, g_global->variable_800B, g_global->variable_800A + Sprite_GetWidth(sprite), g_global->variable_800B + Sprite_GetHeight(sprite));
			GUI_DrawSprite(0, sprite, g_global->variable_800A, g_global->variable_800B, 0, 0);
			GUI_Mouse_Show_InRegion();
		}
	}

	bool06 = 0x0;

	if (Input_Test(0x41) != 0 || Input_Test(0x42) != 0) {
		if (Mouse_InsideRegion(g_global->variable_8006, g_global->variable_8007, g_global->variable_8008, g_global->variable_8009) != 0) {
			if (g_global->variable_801E != 0x4) {
				bool06 = 0x1;
				g_global->variable_801E = (g_global->variable_801E == 3) ? 4 : 3;
				g_global->variable_8020 = 0x0;
				g_global->variable_8012 = 0;
			}
			goto l__09F3;
		}
	}

	if (Mouse_InsideRegion((int16)g_global->variable_8006 - 16, (int16)g_global->variable_8007 - 8, g_global->variable_8008 + 16, g_global->variable_8009 + 24) != 0) {
		if (Mouse_InsideRegion((int16)g_global->variable_8006 - 8, g_global->variable_8009, g_global->variable_8008 + 8, SCREEN_HEIGHT - 1) != 0) {
			i = 3;
		} else {
			if (Mouse_InsideRegion(g_global->variable_8008, (int16)g_global->variable_8007 - 8, g_global->variable_8008 + 16, g_global->variable_8009 + 8) != 0) {
				i = 2;
			} else {
				i = (Mouse_InsideRegion((int16)g_global->variable_8006 - 16, (int16)g_global->variable_8007 - 8, g_global->variable_8006, g_global->variable_8009 + 8) == 0) ? 0 : 1;
			}
		}

		if (i != g_global->variable_801E) {
			bool06 = 0x1;
			g_global->variable_801E = i;
			g_global->variable_8020 = 0x0;
			g_global->variable_8012 = g_global->variable_76AC;
		}
	} else {
		if (g_global->variable_8012 >= (int32)g_global->variable_76AC) return;

		bool06 = 0x1;
		if (g_global->variable_8020 != 0) {
			g_global->variable_801E = g_global->variable_8020;
			g_global->variable_8020 = 0x0;

			if (g_global->variable_801E != 0x4) {
				g_global->variable_8012 = g_global->variable_76AC + Tools_RandomRange(20, 180);
			} else {
				g_global->variable_8012 = g_global->variable_76AC + Tools_RandomRange(12, 30);
			}
		} else {
			i = 0;
			switch (unknown) {
				case 0:
					i = Tools_RandomRange(0, 7);
					if (i > 5) {
						i = 1;
					} else {
						if (i == 5) {
							i = 4;
						}
					}
					break;

				case 1:
					if (g_global->variable_801E != ((g_global->variable_3C4A == 0x0) ? 0 : 3)) {
						i = 0;
					} else {
						i = Tools_RandomRange(0, 17);
						if (i > 9) {
							i = 0;
						} else {
							if (i >= 5) {
								i = 4;
							}
						}
					}
					break;

				default:
					i = Tools_RandomRange(0, 15);
					if (i > 10) {
						i = 2;
					} else {
						if (i >= 5) {
							i = 4;
						}
					}
					break;
			}

			if ((i == 2 && g_global->variable_801E == 1) || (i == 1 && g_global->variable_801E == 2)) {
				g_global->variable_8020 = i;
				g_global->variable_801E = 0;
				g_global->variable_8012 = g_global->variable_76AC + Tools_RandomRange(1, 5);
			} else {
				if (i != g_global->variable_801E && (i == 4 || g_global->variable_801E == 4)) {
					g_global->variable_8020 = i;
					g_global->variable_801E = 3;
					g_global->variable_8012 = g_global->variable_76AC;
				} else {
					g_global->variable_801E = i;
					if (i != 4) {
						g_global->variable_8012 = g_global->variable_76AC + Tools_RandomRange(15, 180);
					} else {
						g_global->variable_8012 = g_global->variable_76AC + Tools_RandomRange(6, 60);
					}
				}
			}

			if (g_global->variable_3C4A != 0 && g_global->variable_801E == 0) g_global->variable_801E = 3;
		}
	}
l__09F3:
	if (bool06 != 0x0) {
		sprite = g_global->variable_7FC6[0][g_global->variable_801E];

		GUI_Mouse_Hide_InRegion(g_global->variable_8006, g_global->variable_8007, g_global->variable_8006 + Sprite_GetWidth(sprite), g_global->variable_8007 + Sprite_GetHeight(sprite));
		GUI_DrawSprite(0, sprite, g_global->variable_8006, g_global->variable_8007, 0, 0);
		GUI_Mouse_Show_InRegion();
	}
}

/**
 * Select a new subject, move the list of help subjects displayed, if necessary.
 * @param difference Number of subjects to jump.
 */
void GUI_Mentat_SelectHelpSubject(int16 difference)
{
	uint8 *helpSujects; /* Needed for converting g_global->numberHelpSubjects */

	if (difference > 0) {
		if (difference + g_global->topHelpList + 11 > g_global->numberHelpSubjects) {
			difference = g_global->numberHelpSubjects - (g_global->topHelpList + 11);
		}
		g_global->topHelpList += difference;

		helpSujects = emu_get_memorycsip(g_global->helpSubjects);
		while (difference-- != 0) {
			helpSujects = String_NextString(helpSujects);
		}
		g_global->helpSubjects = emu_Global_GetCSIP(helpSujects);
		return;
	}

	if (difference < 0) {
		difference = -difference;

		if ((int16)g_global->topHelpList < difference) {
			difference = g_global->topHelpList;
		}

		g_global->topHelpList -= difference;

		helpSujects = emu_get_memorycsip(g_global->helpSubjects);
		while (difference-- != 0) {
			helpSujects = String_PrevString(helpSujects);
		}
		g_global->helpSubjects = emu_Global_GetCSIP(helpSujects);
		return;
	}
}

/** Create the widgets of the mentat help screen. */
void GUI_Mentat_Create_HelpScreen_Widgets()
{
	uint16 ypos;
	Widget *w, *w8;
	int i;

	if (g_global->variable_8036.csip != 0x0) GUI_Widget_Free_WithScrollbar(g_global->variable_8036);

	Tools_Free(g_global->variable_8032);
	Tools_Free(g_global->variable_802E);

	g_global->variable_802A.csip = 0x0;
	ypos = 8;

	w = (Widget *)emu_get_memorycsip(Screen_GetSegment_ByIndex_1(5));

	memset(w, 0, 13 * sizeof(Widget));

	for (i = 0; i < 13; i++) {
		w->index = i + 2;

		w->flags.all = 0;
		w->flags.s.buttonFilterLeft = 9;
		w->flags.s.buttonFilterRight = 1;

		w->clickProc.csip = 0x34E0002A;

		w->drawProcDown.csip     = 0x353F25DE; /* "" NULL terminated. */
		w->drawProcSelected.csip = 0x353F25DE; /* "" NULL terminated. */
		w->drawProcNormal.csip   = 0x353F25DE; /* "" NULL terminated. */

		w->drawModeNormal = DRAW_MODE_TEXT;
		w->variable_0D    = 1;

		w->state.all      = 0;

		w->offsetX        = 24;
		w->offsetY        = ypos;
		w->width          = 0x88;
		w->height         = 8;
		w->parentID       = 8;

		if (g_global->variable_802A.csip != 0x0) {
			g_global->variable_802A = emu_Global_GetCSIP(GUI_Widget_Link((Widget *)emu_get_memorycsip(g_global->variable_802A), w));
		} else {
			g_global->variable_802A = emu_Global_GetCSIP(w);
		}

		ypos += 8;
		w++;
	}

	GUI_Widget_MakeInvisible((Widget *)emu_get_memorycsip(g_global->variable_802A));
	GUI_Widget_MakeInvisible(w - 1);

	{
		csip32 drawProc;
		drawProc.csip = 0x34E0003E;
		g_global->variable_8036 = emu_Global_GetCSIP(GUI_Widget_Allocate_WithScrollbar(15, 8, 168, 24, 8, 72, drawProc));
	}

	g_global->variable_802A = emu_Global_GetCSIP(GUI_Widget_Link((Widget *)emu_get_memorycsip(g_global->variable_802A),
			(Widget *)emu_get_memorycsip(g_global->variable_8036)));

	w8 = GUI_Widget_Allocate3(16, 0, 168, 96, g_sprites[12], g_sprites[13],
			GUI_Widget_Get_ByIndex((Widget *)emu_get_memorycsip(g_global->variable_802A), 15), 1);
	g_global->variable_8032 = emu_Global_GetCSIP(w8);

	w8->shortcut  = 0;
	w8->shortcut2 = 0;
	w8->parentID  = 8;

	g_global->variable_802A = emu_Global_GetCSIP(GUI_Widget_Link((Widget *)emu_get_memorycsip(g_global->variable_802A), w8));

	w8 = GUI_Widget_Allocate3(17, 0, 168, 16, g_sprites[10], g_sprites[11],
			GUI_Widget_Get_ByIndex((Widget *)emu_get_memorycsip(g_global->variable_802A), 15), 0);
	g_global->variable_802E = emu_Global_GetCSIP(w8);

	w8->shortcut  = 0;
	w8->shortcut2 = 0;
	w8->parentID  = 8;

	g_global->variable_802A = emu_Global_GetCSIP(GUI_Widget_Link((Widget *)emu_get_memorycsip(g_global->variable_802A), w8));
	g_global->variable_802A = emu_Global_GetCSIP(GUI_Widget_Link((Widget *)emu_get_memorycsip(g_global->variable_802A),
			(Widget *)emu_get_memorycsip(g_global->variable_8026)));

	GUI_Widget_Draw((Widget *)emu_get_memorycsip(g_global->variable_8026));
}

static void GUI_Mentat_ShowHelp()
{
	struct {
		uint8  unknown_00[4];
		uint32 variable_04;
		uint32 variable_08;
	} info;
	uint8 *subject;
	uint16 i;
	bool noDesc;
	uint8 fileID;
	uint32 offset;
	char *compressedText;
	char *desc;
	char *picture;
	char *text;
	bool loc12;

	subject = emu_get_memorycsip(g_global->helpSubjects);

	for (i = 0; i < g_global->selectedHelpSubject; i++) subject = String_NextString(subject);

	noDesc = (subject[5] == '0');
	offset = HTOBE32(*(uint32 *)(subject + 1));

	fileID = ChunkFile_Open(g_global->mentatFilename);
	ChunkFile_Read(fileID, HTOBE32('INFO'), &info, 12);
	ChunkFile_Close(fileID);

	info.variable_04 = HTOBE32(info.variable_04);
	info.variable_08 = HTOBE32(info.variable_08);

	text = (char *)emu_get_memorycsip(g_global->readBuffer);

	compressedText = (char *)emu_get_memorycsip(Screen_GetSegment_ByIndex_1(3));

	fileID = File_Open(g_global->mentatFilename, 1);
	File_Seek(fileID, offset, 0);
	File_Read(fileID, compressedText, info.variable_08);
	String_Decompress(compressedText, text);
	String_TranslateSpecial(text, text);
	File_Close(fileID);

	while (*text != '*' && *text != '?') text++;

	loc12 = (*text == '*');

	*text++ = '\0';

	if (noDesc) {
		uint16 index;

		picture = g_global->scenario.pictureBriefing;
		desc    = NULL;
		text    = (char *)emu_get_memorycsip(g_global->readBuffer);

		index = *text - 44 + g_global->campaignID * 4;

		sprintf((char *)g_global->variable_9939, "TEXT%c", *emu_get_memorycsip(g_houseInfo[g_global->playerHouseID].name));
		String_LoadFile(String_GenerateFilename((char *)g_global->variable_9939), index, text, g_global->readBufferSize);
		String_TranslateSpecial(text, text);
	} else {
		picture = (char *)emu_get_memorycsip(g_global->readBuffer);
		desc    = text;

		while (*text != '\0' && *text != 0xC) text++;
		if (*text != '\0') *text++ = '\0';
	}

	GUI_Mentat_Loop(picture, desc, text, loc12 ? 1 : 0, (Widget *)emu_get_memorycsip(g_global->variable_8026));

	GUI_Widget_MakeNormal((Widget *)emu_get_memorycsip(g_global->variable_8026), false);

	GUI_Mentat_LoadHelpSubjects(false);

	GUI_Mentat_Create_HelpScreen_Widgets();

	GUI_Mentat_Draw(true);
}

/**
 * Handles Click event for list in mentat window.
 *
 * @param w The widget.
 */
bool GUI_Mentat_List_Click(Widget *w)
{
	uint16 index;
	Widget *w2;

	index = g_global->selectedHelpSubject + 3;

	if (w->index != index) {
		w2 = GUI_Widget_Get_ByIndex((Widget *)emu_get_memorycsip(g_global->variable_802A), index);

		GUI_Widget_MakeNormal(w, false);
		GUI_Widget_MakeNormal(w2, false);

		if (w2->stringID == 0x31) {
			w2->variable_2C    = 15;
			w2->fgColourDown   = 15;
			w2->fgColourNormal = 15;

			GUI_Widget_Draw(w2);
		}

		if (w->stringID == 0x31) {
			w->variable_2C    = 8;
			w->fgColourDown   = 8;
			w->fgColourNormal = 8;

			GUI_Widget_Draw(w);
		}

		g_global->selectedHelpSubject = w->index - 3;
		return true;
	}

	if ((w->state.s.buttonState & 0x11) == 0 && g_global->variable_25CE == 0) return true;

	if (w->stringID != 0x31) return true;

	GUI_Widget_MakeNormal(w, false);

	GUI_Mentat_ShowHelp();

	GUI_Mentat_Draw(true);

	Input_HandleInput(0x841);
	Input_HandleInput(0x842);
	return false;
}

void GUI_Mentat_ScrollBar_Draw(Widget *w)
{
	GUI_Mentat_SelectHelpSubject(GUI_Get_Scrollbar_Position(w) - g_global->topHelpList);
	GUI_Mentat_Draw(false);
}

static bool GUI_Mentat_DrawInfo(char *text, uint16 left, uint16 top, uint16 height, uint16 skip, int16 lines, uint16 flags)
{
	uint16 oldScreenID;

	if (lines <= 0) return false;

	oldScreenID = GUI_Screen_SetActive(4);

	while (skip-- != 0) text += strlen(text) + 1;

	while (lines-- != 0) {
		if (*text != '\0') GUI_DrawText_Wrapper(text, left, top, (uint8)g_global->variable_6D5B, 0, flags);
		top += height;
		text += strlen(text) + 1;
	}

	GUI_Screen_SetActive(oldScreenID);

	return true;
}

uint16 GUI_Mentat_Loop(char *pictureName, char *pictureDetails, char *text, bool arg12, Widget *w)
{
	uint16 oldScreenID;
	uint16 old07AE;
	csip32 wsa;
	uint16 descLines;
	bool dirty;
	bool done;
	bool textDone;
	uint16 frame;
	uint32 descTick;
	uint16 mentatAnimation;
	uint16 result;
	uint32 textTick;
	uint32 textDelay;
	uint16 lines;
	uint16 textLines;
	uint16 step;

	dirty = false;
	textTick = 0;
	textDelay = 0;

	old07AE = Unknown_07AE_0000(8);
	oldScreenID = GUI_Screen_SetActive(4);

	wsa.csip = 0x0;

	if (pictureName != NULL) {
		csip32 nullcsip;
		nullcsip.csip = 0x0;

		wsa = WSA_LoadFile(pictureName, Screen_GetSegment_ByIndex_1(3), g_global->variable_6CD3[1][1], 0, nullcsip);
	}

	step = 0;
	if (wsa.csip == 0x0) {
		Unknown_07AE_0103();
		step = 1;
	}

	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x31);

	descLines = GUI_SplitText(pictureDetails, (g_global->variable_992F << 3) + 10, '\0');

	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x32);

	textLines = GUI_Mentat_SplitText(text, 304);

	mentatAnimation = 2;
	lines = 0;
	frame = 0;
	g_global->variable_76B4 = 0;
	descTick = g_global->variable_76AC + 30;

	Input_History_Clear();

	textDone = false;
	done = false;
	result = 0;
	while (!done) {
		uint16 key;

		GUI_Screen_SetActive(0);

		key = GUI_Widget_HandleEvents(w);

		GUI_PaletteAnimate();

		if (key != 0) {
			if ((key & 0x800) == 0) {
				if (w != NULL) {
					if ((key & 0x8000) != 0 && result == 0) result = key;
				} else {
					if (textDone) result = key;
				}
			} else {
				key = 0;
			}
		}

		switch (step) {
			case 0:
				if (key == 0) break;
				step = 1;
				/* FALL-THROUGH */

			case 1:
				if (key != 0) {
					if (result != 0) {
						step = 5;
						break;
					}
					lines = descLines;
					dirty = true;
				} else {
					if (g_global->variable_76AC > descTick) {
						descTick = g_global->variable_76AC + 15;
						lines++;
						dirty = true;
					}
				}

				if (lines < descLines && lines <= 12) break;

				step = (text != NULL) ? 2 : 4;
				lines = descLines;
				break;

			case 2:
				GUI_Mouse_Hide_InRegion(0, 0, SCREEN_WIDTH, 40);
				GUI_Screen_Copy(0, 0, 0, 160, SCREEN_WIDTH / 8, 40, 0, 4);
				GUI_Mouse_Show_InRegion();

				step = 3;
				key = 1;
				/* FALL-THROUGH */

			case 3:
				if (mentatAnimation == 2 && textTick < g_global->variable_76AC) key = 1;

				if ((key != 0 && textDone) || result != 0) {
					GUI_Mouse_Hide_InRegion(0, 0, SCREEN_WIDTH, 40);
					GUI_Screen_Copy(0, 160, 0, 0, SCREEN_WIDTH / 8, 40, 4, 0);
					GUI_Mouse_Show_InRegion();

					step = 4;
					mentatAnimation = 0;
					break;
				}

				if (key != 0) {
					GUI_Screen_Copy(0, 160, 0, 0, SCREEN_WIDTH / 8, 40, 4, 4);

					if (textLines-- != 0) {
						GUI_Screen_SetActive(4);
						GUI_DrawText_Wrapper(text, 4, 1, (uint8)g_global->variable_6D5B, 0, 0x32);
						mentatAnimation = 1;
						textDelay = strlen(text) * 4;
						textTick = g_global->variable_76AC + textDelay;

						if (textLines != 0) {
							while (*text++ != '\0') sleep(0);
						} else {
							textDone = true;
						}

						GUI_Screen_SetActive(0);
					}

					GUI_Mouse_Hide_InRegion(0, 0, SCREEN_WIDTH, 40);
					GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, 40, 4, 0);
					GUI_Mouse_Show_InRegion();
					break;
				}

				if (mentatAnimation == 0 || textTick > g_global->variable_76AC) break;

				mentatAnimation = 2;
				textTick += textDelay + textDelay / 2;
				break;

			case 4:
				if (result != 0 || w == NULL) step = 5;
				break;

			case 5:
				dirty = true;
				done = true;
				break;

			default: break;
		}

		GUI_Mentat_Animation(mentatAnimation);

		if (wsa.csip != 0x0 && g_global->variable_76B4 == 0) {
			g_global->variable_76B4 = 7;

			do {
				if (step == 0 && frame > 4) step = 1;

				if (WSA_DisplayFrame(wsa, frame++, g_global->variable_992D << 3, g_global->variable_992B, 4) == 0) {
					if (step == 0) step = 1;

					if (arg12 != 0) {
						frame = 0;
					} else {
						WSA_Unload(wsa);
						wsa.csip = 0x0;
					}
				}
			} while (frame == 0);
			dirty = true;
		}

		if (!dirty) continue;

		GUI_Mentat_DrawInfo(pictureDetails, (g_global->variable_992D << 3) + 5, g_global->variable_992B + 3, 8, 0, lines, 0x31);

		GUI_DrawSprite_8002(4);
		GUI_Mouse_Hide_InWidget(g_global->variable_6D5D);
		GUI_Screen_Copy(g_global->variable_992D, g_global->variable_992B, g_global->variable_992D, g_global->variable_992B, g_global->variable_992F, g_global->variable_9931, 4, 0);
		GUI_Mouse_Show_InWidget();
		dirty = false;
	}

	if (wsa.csip != 0x0) WSA_Unload(wsa);

	GUI_Screen_SetActive(4);
	GUI_DrawSprite_8002(4);
	GUI_Mouse_Hide_InWidget(g_global->variable_6D5D);
	GUI_Screen_Copy(g_global->variable_992D, g_global->variable_992B, g_global->variable_992D, g_global->variable_992B, g_global->variable_992F, g_global->variable_9931, 4, 0);
	GUI_Mouse_Show_InWidget();
	Unknown_07AE_0000(old07AE);
	GUI_Screen_SetActive(oldScreenID);

	Input_History_Clear();

	return result;
}

uint16 GUI_Mentat_SplitText(char *str, uint16 maxWidth)
{
	uint16 lines = 0;
	uint16 height = 0;

	if (str == NULL) return 0;

	while (*str != '\0') {
		uint16 width = 0;

		while (width < maxWidth && *str != '.' && *str != '!' && *str != '?' && *str != '\0' && *str != '\r') {
			width += Font_GetCharWidth(*str++);
		}

		if (width >= maxWidth) {
			while (*str != ' ') width -= Font_GetCharWidth(*str--);
		}

		height++;

		if ((*str != '\0' && (*str == '.' || *str == '!' || *str == '?' || *str == '\r')) || height >= 3) {
			while (*str != '\0' && (*str == ' ' || *str == '.' || *str == '!' || *str == '?' || *str == '\r')) str++;

			if (*str != '\0') str[-1] = '\0';
			height = 0;
			lines++;
			continue;
		}

		if (*str == '\0') {
			lines++;
			height = 0;
			continue;
		}

		*str++ = '\r';
	}

	return lines;
}

uint16 GUI_Mentat_Tick()
{
	GUI_Mentat_Animation((g_global->variable_2582 < g_global->variable_76AC) ? 0 : 1);

	return 0;
}
