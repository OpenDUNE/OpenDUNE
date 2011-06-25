/* $Id$ */

/** @file src/gui/mentat.c Mentat gui routines. */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "types.h"
#include "../global.h"
#include "../os/endian.h"
#include "../os/sleep.h"
#include "../os/strings.h"

#include "mentat.h"

#include "font.h"
#include "gui.h"
#include "widget.h"
#include "../file.h"
#include "../gfx.h"
#include "../house.h"
#include "../input/input.h"
#include "../load.h"
#include "../mouse.h"
#include "../opendune.h"
#include "../sprites.h"
#include "../string.h"
#include "../tools.h"
#include "../wsa.h"
#include "../unknown/unknown.h"

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


static uint8 *_mentatSprites[3][5];

bool g_interrogation;      /*!< Asking a security question (changes mentat eye movement). */
static uint8 _eyesLeft;    /*!< Left of the changing eyes. */
static uint8 _eyesTop;     /*!< Top of the changing eyes. */
static uint8 _eyesRight;   /*!< Right of the changing eyes. */
static uint8 _eyesBottom;  /*!< Bottom of the changing eyes. */

uint32 g_interrogationTimer; /*!< Speaking time-out for security question. */
static uint8 _mouthLeft;   /*!< Left of the moving mouth. */
static uint8 _mouthTop;    /*!< Top of the moving mouth. */
static uint8 _mouthRight;  /*!< Right of the moving mouth. */
static uint8 _mouthBottom; /*!< Bottom of the moving mouth. */

static uint8 otherLeft; /*!< Left of the other object (ring of Ordos mentat, book of atreides mentat). */
static uint8 otherTop;  /*!< Top of the other object (ring of Ordos mentat, book of atreides mentat). */
bool g_disableOtherMovement; /*!< Disable moving of the other object. */

uint8 g_shoulderLeft; /*!< Left of the right shoulder of the house mentats (to put them in front of the display in the background). */
uint8 g_shoulderTop;  /*!< Top of the right shoulder of the house mentats (to put them in front of the display in the background). */


/**
 * Show the Mentat screen with a dialog (Proceed / Repeat).
 * @param houseID The house to show the mentat of.
 * @param stringID The string to show.
 * @param wsaFilename The WSA to show.
 * @param musicID The Music to play.
 */
static void GUI_Mentat_ShowDialog(uint8 houseID, uint16 stringID, const char *wsaFilename, uint16 musicID)
{
	Widget *w1, *w2;

	if (g_global->debugSkipDialogs) return;

	Sprites_Load(1, 7, g_sprites);

	w1 = GUI_Widget_Allocate(1, GUI_Widget_GetShortcut(String_Get_ByIndex(175)[0]), 168, 168, 6, 0, 0);
	w2 = GUI_Widget_Allocate(2, GUI_Widget_GetShortcut(String_Get_ByIndex(176)[0]), 240, 168, 8, 0, 0);

	w1 = GUI_Widget_Link(w1, w2);

	Sound_Unknown0363(0xFFFE);

	{
		csip32 nullcsip;
		nullcsip.csip = 0x0;
		Driver_Voice_Play(NULL, nullcsip, 0xFF, 0xFF);
	}

	Music_Play(musicID);

	do {
		char filename[10];
		snprintf(filename, sizeof(filename), "TEXT%c", g_table_houseInfo[houseID].name[0]);
		String_LoadFile(String_GenerateFilename(filename), stringID, (char *)emu_get_memorycsip(g_global->readBuffer), g_global->readBufferSize);
		String_TranslateSpecial((char *)emu_get_memorycsip(g_global->readBuffer), (char *)emu_get_memorycsip(g_global->readBuffer));
	} while (GUI_Mentat_Show((char *)emu_get_memorycsip(g_global->readBuffer), wsaFilename, w1, true) == 0x8002);

	Tools_Free(emu_Global_GetCSIP(w2));
	Tools_Free(emu_Global_GetCSIP(w1));

	if (musicID != 0xFFFF) Driver_Music_FadeOut();

	Sprites_Load(0, 7, g_sprites);
}

static void GUI_Mentat_HelpListLoop()
{
	uint16 key = 0;

	while (key != 0x8001) {
		Widget *w = g_widgetMentatTail;

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

				GUI_Widget_Scrollbar_ArrowUp_Click(g_widgetMentatScrollbar);
				break;

			case 0x0054:
			case 0x0062: /* NUMPAD 2 / ARROW DOWN */
			case 0x0454:
			case 0x0462:
				if (g_global->selectedHelpSubject < 10) {
					GUI_Mentat_List_Click(GUI_Widget_Get_ByIndex(w, g_global->selectedHelpSubject + 4));
					break;
				}

				GUI_Widget_Scrollbar_ArrowDown_Click(g_widgetMentatScrollbar);
				break;

			case 0x0055:
			case 0x0065: /* NUMPAD 9 / PAGE UP */
			case 0x0455:
			case 0x0465: {
				uint8 i;
				for (i = 0; i < 11; i++) GUI_Widget_Scrollbar_ArrowUp_Click(g_widgetMentatScrollbar);
			} break;

			case 0x0056:
			case 0x0067: /* NUMPAD 3 / PAGE DOWN */
			case 0x0456:
			case 0x0467: {
				uint8 i;
				for (i = 0; i < 11; i++) GUI_Widget_Scrollbar_ArrowDown_Click(g_widgetMentatScrollbar);
			} break;

			case 0x0041: /* MOUSE LEFT BUTTON */
				if (g_config.useMouse) break;
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

		sprintf(g_global->mentatFilename, "MENTAT%c", g_table_houseInfo[g_playerHouseID].name[0]);
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

		if (helpSubjects[size - 1] > g_campaignID + 1) {
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
	Widget *w = g_widgetMentatTail;
	uint8 *helpSubjects = emu_get_memorycsip(g_global->helpSubjects);
	uint16 i;

	if (!force && g_global->topHelpList == g_global->variable_25D4) return;

	g_global->variable_25D4 = g_global->topHelpList;

	oldScreenID = GUI_Screen_SetActive(2);

	Unknown_07AE_00E4(8);

	GUI_DrawSprite(2, g_sprites[24], g_shoulderLeft, g_shoulderTop, 0, 0);

	/* "Select Subject:" */
	GUI_DrawText_Wrapper(String_Get_ByIndex(0x30), (g_global->variable_992D << 3) + 16, g_global->variable_992B + 2, 12, 0, 0x12);
	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x11);

	line = GUI_Widget_Get_ByIndex(w, 3);
	for (i = 0; i < 11; i++) {
		line->drawParameterDown.text     = (char *)helpSubjects + 7;
		line->drawParameterSelected.text = (char *)helpSubjects + 7;
		line->drawParameterNormal.text   = (char *)helpSubjects + 7;

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

	oldScreenID = GUI_Screen_SetActive(2);

	Input_Flags_SetBits(INPUT_FLAG_KEY_REPEAT);
	Input_History_Clear();

	GUI_Mentat_Display(NULL, g_playerHouseID);

	g_widgetMentatFirst = GUI_Widget_Allocate(1, GUI_Widget_GetShortcut(*String_Get_ByIndex(0xC1)), 200, 168, proceed ? 6 : 4, 5, 1);
	g_widgetMentatFirst->shortcut2 = 'n';

	GUI_Mentat_Create_HelpScreen_Widgets();

	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, 2, 0);
	GUI_Mouse_Show_Safe();

	GUI_Mentat_LoadHelpSubjects(true);

	GUI_Mentat_Draw(true);

	GUI_Screen_SetActive(0);

	GUI_Mentat_HelpListLoop();

	Tools_Free(emu_Global_GetCSIP(g_widgetMentatFirst));

	Load_Palette_Mercenaries();

	GUI_Widget_Free_WithScrollbar(g_widgetMentatScrollbar);

	Tools_Free(emu_Global_GetCSIP(g_widgetMentatUnknown1));
	Tools_Free(emu_Global_GetCSIP(g_widgetMentatUnknown2));

	g_widgetMentatUnknown1 = NULL;
	g_widgetMentatUnknown2 = NULL;
	g_widgetMentatScrollbar = NULL;

	Input_Flags_ClearBits(INPUT_FLAG_KEY_REPEAT);

	GUI_Screen_SetActive(oldScreenID);
}

/**
 * Handle clicks on the Mentat widget.
 * @return True, always.
 */
bool GUI_Widget_Mentat_Click(Widget *w)
{
	VARIABLE_NOT_USED(w);

	g_global->cursorSpriteID = 0;

	Sprites_SetMouseSprite(0, 0, g_sprites[0]);

	Sound_Unknown0363(0xFFFE);

	{
		csip32 nullcsip;
		nullcsip.csip = 0x0;
		Driver_Voice_Play(NULL, nullcsip, 0xFF, 0xFF);
	}

	Music_Play(g_table_houseInfo[g_playerHouseID].musicBriefing);

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
uint16 GUI_Mentat_Show(char *stringBuffer, const char *wsaFilename, Widget *w, bool unknown)
{
	uint16 ret;

	Sprites_UnloadTiles();

	GUI_Mentat_Display(wsaFilename, g_playerHouseID);

	GUI_Screen_SetActive(2);

	Unknown_07AE_00E4(8);

	if (wsaFilename != NULL) {
		void *wsa;

		wsa = WSA_LoadFile(wsaFilename, emu_get_memorycsip(Screen_GetSegment_ByIndex_1(5)), g_global->variable_6CD3[2][0], false);
		WSA_DisplayFrame(wsa, 0, g_global->variable_992D * 8, g_global->variable_992B, 2);
		WSA_Unload(wsa);
	}

	GUI_DrawSprite(2, g_sprites[24], g_shoulderLeft, g_shoulderTop, 0, 0);
	GUI_Screen_SetActive(0);

	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, 2, 0);
	GUI_Mouse_Show_Safe();

	Unknown_259E_0006(g_palette1, 15);

	ret = GUI_Mentat_Loop(wsaFilename, NULL, stringBuffer, true, NULL);

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
	GUI_Mentat_ShowDialog(g_playerHouseID, g_campaignID * 4 + 4, g_global->scenario.pictureBriefing, g_table_houseInfo[g_playerHouseID].musicBriefing);
}

/**
 * Show the win screen.
 */
void GUI_Mentat_ShowWin()
{
	GUI_Mentat_ShowDialog(g_playerHouseID, g_campaignID * 4 + 5, g_global->scenario.pictureWin, g_table_houseInfo[g_playerHouseID].musicWin);
}

/**
 * Show the lose screen.
 */
void GUI_Mentat_ShowLose()
{
	GUI_Mentat_ShowDialog(g_playerHouseID, g_campaignID * 4 + 6, g_global->scenario.pictureLose, g_table_houseInfo[g_playerHouseID].musicLose);
}

/**
 * Display a mentat.
 * @param houseFilename Filename of the house.
 * @param houseID ID of the house.
 */
void GUI_Mentat_Display(const char *wsaFilename, uint8 houseID)
{
	uint16 oldScreenID;
	int i;

	sprintf((char *)g_global->variable_9939, "MENTAT%c.CPS", g_table_houseInfo[houseID].name[0]);

	Sprites_LoadImage((char *)g_global->variable_9939, 3, 3, g_palette_998A, 1);

	GFX_Screen_Copy3(3, 2);

	oldScreenID = GUI_Screen_SetActive(2);

	if (houseID == HOUSE_MERCENARY) {
		File_ReadBlockFile("BENE.PAL", g_palette1, 0x300);
	}

	memset(_mentatSprites, 0, sizeof(_mentatSprites));

	_eyesLeft = _eyesRight  = unknownHouseData[houseID][0];
	_eyesTop  = _eyesBottom = unknownHouseData[houseID][1];

	for (i = 0; i < 5; i++) {
		_mentatSprites[0][i] = g_sprites[14 + i];
	}

	_eyesRight  += Sprite_GetWidth(_mentatSprites[0][0]);
	_eyesBottom += Sprite_GetHeight(_mentatSprites[0][0]);

	_mouthLeft = _mouthRight  = unknownHouseData[houseID][2];
	_mouthTop  = _mouthBottom = unknownHouseData[houseID][3];

	for (i = 0; i < 5; i++) {
		_mentatSprites[1][i] = g_sprites[19 + i];
	}

	_mouthRight  += Sprite_GetWidth(_mentatSprites[1][0]);
	_mouthBottom += Sprite_GetHeight(_mentatSprites[1][0]);

	otherLeft = unknownHouseData[houseID][4];
	otherTop  = unknownHouseData[houseID][5];

	for (i = 0; i < 4; i++) {
		_mentatSprites[2][i] = g_sprites[25 + i];
	}

	g_shoulderLeft = unknownHouseData[houseID][6];
	g_shoulderTop  = unknownHouseData[houseID][7];

	Unknown_07AE_00E4(8);

	if (wsaFilename != NULL) {
		void *wsa;

		wsa = WSA_LoadFile(wsaFilename, emu_get_memorycsip(Screen_GetSegment_ByIndex_1(5)), g_global->variable_6CD3[2][1], false);
		WSA_DisplayFrame(wsa, 0, g_global->variable_992D * 8, g_global->variable_992B, 2);
		WSA_Unload(wsa);
	}

	GUI_DrawSprite(2, g_sprites[24], g_shoulderLeft, g_shoulderTop, 0, 0);
	GUI_Screen_SetActive(oldScreenID);
}

/**
 * Draw sprites and handle mouse in a mentat screen.
 * @param speakingMode If \c 1, the mentat is speaking.
 */
void GUI_Mentat_Animation(uint16 speakingMode)
{
	static int32  movingEyesTimer;      /* timer when to change the eyes sprite. */
	static uint16 movingEyesSprite;     /* index in _mentatSprites of the displayed moving eyes. */
	static uint16 movingEyesNextSprite; /* If not 0, it decides the movingEyesNextSprite */

	static int32  movingMouthTimer;
	static uint16 movingMouthSprite;

	static int32 movingOtherTimer;
	static int16 otherSprite;

	bool partNeedsRedraw;
	uint16 i;

	if (movingOtherTimer < (int32)g_global->variable_76AC && !g_disableOtherMovement) {
		if (movingOtherTimer != 0) {
			uint8 *sprite;

			if (_mentatSprites[2][1 + abs(otherSprite)] == NULL) {
				otherSprite = 1 - otherSprite;
			} else {
				otherSprite++;
			}

			sprite = _mentatSprites[2][abs(otherSprite)];

			GUI_Mouse_Hide_InRegion(otherLeft, otherTop, otherLeft + Sprite_GetWidth(sprite), otherTop + Sprite_GetHeight(sprite));
			GUI_DrawSprite(0, sprite, otherLeft, otherTop, 0, 0);
			GUI_Mouse_Show_InRegion();
		}

		switch (g_playerHouseID) {
			case HOUSE_HARKONNEN:
				movingOtherTimer = g_global->variable_76AC + 300 * 60;
				break;
			case HOUSE_ATREIDES:
				movingOtherTimer = g_global->variable_76AC + 60 * Tools_RandomRange(1,3);
				break;
			case HOUSE_ORDOS:
				if (otherSprite != 0) {
					movingOtherTimer = g_global->variable_76AC + 6;
				} else {
					movingOtherTimer = g_global->variable_76AC + 60 * Tools_RandomRange(10, 19);
				}
				break;
			default:
				break;
		}
	}

	if (speakingMode == 1) {
		if (movingMouthTimer < (int32)g_global->variable_76AC) {
			uint8 *sprite;

			movingMouthSprite = Tools_RandomRange(0, 4);
			sprite = _mentatSprites[1][movingMouthSprite];

			GUI_Mouse_Hide_InRegion(_mouthLeft, _mouthTop, _mouthLeft + Sprite_GetWidth(sprite), _mouthTop + Sprite_GetHeight(sprite));
			GUI_DrawSprite(0, sprite, _mouthLeft, _mouthTop, 0, 0);
			GUI_Mouse_Show_InRegion();

			switch (movingMouthSprite) {
				case 0:
					movingMouthTimer = g_global->variable_76AC + Tools_RandomRange(7, 30);
					break;
				case 1:
				case 2:
				case 3:
					movingMouthTimer = g_global->variable_76AC + Tools_RandomRange(6, 10);
					break;
				case 4:
					movingMouthTimer = g_global->variable_76AC + Tools_RandomRange(5, 6);
					break;
				default:
					break;
			}
		}
	} else {
		partNeedsRedraw = false;

		if (Input_Test(0x41) == 0 && Input_Test(0x42) == 0) {
			if (movingMouthSprite != 0) {
				movingMouthSprite = 0;
				movingMouthTimer = 0;
				partNeedsRedraw = true;
			}
		} else if (Mouse_InsideRegion(_mouthLeft, _mouthTop, _mouthRight, _mouthBottom) != 0) {
			if (movingMouthTimer != -1) {
				movingMouthTimer = -1;
				movingMouthSprite = Tools_RandomRange(1, 4);
				partNeedsRedraw = true;
			}
		} else {
			if (movingMouthSprite != 0) {
				movingMouthSprite = 0;
				movingMouthTimer = 0;
				partNeedsRedraw = true;
			}
		}

		if (partNeedsRedraw) {
			uint8 *sprite;

			sprite = _mentatSprites[1][movingMouthSprite];

			GUI_Mouse_Hide_InRegion(_mouthLeft, _mouthTop, _mouthLeft + Sprite_GetWidth(sprite), _mouthTop + Sprite_GetHeight(sprite));
			GUI_DrawSprite(0, sprite, _mouthLeft, _mouthTop, 0, 0);
			GUI_Mouse_Show_InRegion();
		}
	}

	partNeedsRedraw = false;

	if (Input_Test(0x41) != 0 || Input_Test(0x42) != 0) {
		if (Mouse_InsideRegion(_eyesLeft, _eyesTop, _eyesRight, _eyesBottom) != 0) {
			if (movingEyesSprite != 0x4) {
				partNeedsRedraw = true;
				movingEyesSprite = (movingEyesSprite == 3) ? 4 : 3;
				movingEyesNextSprite = 0;
				movingEyesTimer = 0;
			}

			if (partNeedsRedraw) {
				uint8 *sprite;

				sprite = _mentatSprites[0][movingEyesSprite];

				GUI_Mouse_Hide_InRegion(_eyesLeft, _eyesTop, _eyesLeft + Sprite_GetWidth(sprite), _eyesTop + Sprite_GetHeight(sprite));
				GUI_DrawSprite(0, sprite, _eyesLeft, _eyesTop, 0, 0);
				GUI_Mouse_Show_InRegion();
			}

			return;
		}
	}

	if (Mouse_InsideRegion((int16)_eyesLeft - 16, (int16)_eyesTop - 8, _eyesRight + 16, _eyesBottom + 24) != 0) {
		if (Mouse_InsideRegion((int16)_eyesLeft - 8, _eyesBottom, _eyesRight + 8, SCREEN_HEIGHT - 1) != 0) {
			i = 3;
		} else {
			if (Mouse_InsideRegion(_eyesRight, (int16)_eyesTop - 8, _eyesRight + 16, _eyesBottom + 8) != 0) {
				i = 2;
			} else {
				i = (Mouse_InsideRegion((int16)_eyesLeft - 16, (int16)_eyesTop - 8, _eyesLeft, _eyesBottom + 8) == 0) ? 0 : 1;
			}
		}

		if (i != movingEyesSprite) {
			partNeedsRedraw = true;
			movingEyesSprite = i;
			movingEyesNextSprite = 0;
			movingEyesTimer = g_global->variable_76AC;
		}
	} else {
		if (movingEyesTimer >= (int32)g_global->variable_76AC) return;

		partNeedsRedraw = true;
		if (movingEyesNextSprite != 0) {
			movingEyesSprite = movingEyesNextSprite;
			movingEyesNextSprite = 0;

			if (movingEyesSprite != 4) {
				movingEyesTimer = g_global->variable_76AC + Tools_RandomRange(20, 180);
			} else {
				movingEyesTimer = g_global->variable_76AC + Tools_RandomRange(12, 30);
			}
		} else {
			i = 0;
			switch (speakingMode) {
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
					if (movingEyesSprite != ((!g_interrogation) ? 0 : 3)) {
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

			if ((i == 2 && movingEyesSprite == 1) || (i == 1 && movingEyesSprite == 2)) {
				movingEyesNextSprite = i;
				movingEyesSprite = 0;
				movingEyesTimer = g_global->variable_76AC + Tools_RandomRange(1, 5);
			} else {
				if (i != movingEyesSprite && (i == 4 || movingEyesSprite == 4)) {
					movingEyesNextSprite = i;
					movingEyesSprite = 3;
					movingEyesTimer = g_global->variable_76AC;
				} else {
					movingEyesSprite = i;
					if (i != 4) {
						movingEyesTimer = g_global->variable_76AC + Tools_RandomRange(15, 180);
					} else {
						movingEyesTimer = g_global->variable_76AC + Tools_RandomRange(6, 60);
					}
				}
			}

			if (g_interrogation && movingEyesSprite == 0) movingEyesSprite = 3;
		}
	}

	if (partNeedsRedraw) {
		uint8 *sprite;

		sprite = _mentatSprites[0][movingEyesSprite];

		GUI_Mouse_Hide_InRegion(_eyesLeft, _eyesTop, _eyesLeft + Sprite_GetWidth(sprite), _eyesTop + Sprite_GetHeight(sprite));
		GUI_DrawSprite(0, sprite, _eyesLeft, _eyesTop, 0, 0);
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
	static char empty[2] = "";
	uint16 ypos;
	Widget *w;
	int i;

	if (g_widgetMentatScrollbar != NULL) GUI_Widget_Free_WithScrollbar(g_widgetMentatScrollbar);

	Tools_Free(emu_Global_GetCSIP(g_widgetMentatUnknown2));
	Tools_Free(emu_Global_GetCSIP(g_widgetMentatUnknown1));

	g_widgetMentatTail = NULL;
	ypos = 8;

	w = (Widget *)emu_get_memorycsip(Screen_GetSegment_ByIndex_1(5));

	memset(w, 0, 13 * sizeof(Widget));

	for (i = 0; i < 13; i++) {
		w->index = i + 2;

		w->flags.all = 0;
		w->flags.s.buttonFilterLeft = 9;
		w->flags.s.buttonFilterRight = 1;

		w->clickProc = &GUI_Mentat_List_Click;

		w->drawParameterDown.text     = empty;
		w->drawParameterSelected.text = empty;
		w->drawParameterNormal.text   = empty;

		w->drawModeNormal = DRAW_MODE_TEXT;
		w->variable_0D    = 1;

		w->state.all      = 0;

		w->offsetX        = 24;
		w->offsetY        = ypos;
		w->width          = 0x88;
		w->height         = 8;
		w->parentID       = 8;

		if (g_widgetMentatTail != NULL) {
			g_widgetMentatTail = GUI_Widget_Link(g_widgetMentatTail, w);
		} else {
			g_widgetMentatTail = w;
		}

		ypos += 8;
		w++;
	}

	GUI_Widget_MakeInvisible(g_widgetMentatTail);
	GUI_Widget_MakeInvisible(w - 1);

	g_widgetMentatScrollbar = GUI_Widget_Allocate_WithScrollbar(15, 8, 168, 24, 8, 72, &GUI_Mentat_ScrollBar_Draw);

	g_widgetMentatTail = GUI_Widget_Link(g_widgetMentatTail, g_widgetMentatScrollbar);

	g_widgetMentatUnknown2 = GUI_Widget_Allocate3(16, 0, 168, 96, g_sprites[12], g_sprites[13], GUI_Widget_Get_ByIndex(g_widgetMentatTail, 15), 1);
	g_widgetMentatUnknown2->shortcut  = 0;
	g_widgetMentatUnknown2->shortcut2 = 0;
	g_widgetMentatUnknown2->parentID  = 8;
	g_widgetMentatTail = GUI_Widget_Link(g_widgetMentatTail, g_widgetMentatUnknown2);

	g_widgetMentatUnknown1 = GUI_Widget_Allocate3(17, 0, 168, 16, g_sprites[10], g_sprites[11], GUI_Widget_Get_ByIndex(g_widgetMentatTail, 15), 0);
	g_widgetMentatUnknown1->shortcut  = 0;
	g_widgetMentatUnknown1->shortcut2 = 0;
	g_widgetMentatUnknown1->parentID  = 8;
	g_widgetMentatTail = GUI_Widget_Link(g_widgetMentatTail, g_widgetMentatUnknown1);

	g_widgetMentatTail = GUI_Widget_Link(g_widgetMentatTail, g_widgetMentatFirst);

	GUI_Widget_Draw(g_widgetMentatFirst);
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

		index = *text - 44 + g_campaignID * 4;

		sprintf((char *)g_global->variable_9939, "TEXT%c", g_table_houseInfo[g_playerHouseID].name[0]);
		String_LoadFile(String_GenerateFilename((char *)g_global->variable_9939), index, text, g_global->readBufferSize);
		String_TranslateSpecial(text, text);
	} else {
		picture = (char *)emu_get_memorycsip(g_global->readBuffer);
		desc    = text;

		while (*text != '\0' && *text != 0xC) text++;
		if (*text != '\0') *text++ = '\0';
	}

	GUI_Mentat_Loop(picture, desc, text, loc12 ? 1 : 0, g_widgetMentatFirst);

	GUI_Widget_MakeNormal(g_widgetMentatFirst, false);

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
		w2 = GUI_Widget_Get_ByIndex(g_widgetMentatTail, index);

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

uint16 GUI_Mentat_Loop(const char *wsaFilename, char *pictureDetails, char *text, bool arg12, Widget *w)
{
	uint16 oldScreenID;
	uint16 old07AE;
	void *wsa;
	uint16 descLines;
	bool dirty;
	bool done;
	bool textDone;
	uint16 frame;
	uint32 descTick;
	uint16 mentatSpeakingMode;
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

	wsa = NULL;

	if (wsaFilename != NULL) {
		wsa = WSA_LoadFile(wsaFilename, emu_get_memorycsip(Screen_GetSegment_ByIndex_1(3)), g_global->variable_6CD3[1][1], false);
	}

	step = 0;
	if (wsa == NULL) {
		Unknown_07AE_0103();
		step = 1;
	}

	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x31);

	descLines = GUI_SplitText(pictureDetails, (g_global->variable_992F << 3) + 10, '\0');

	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x32);

	textLines = GUI_Mentat_SplitText(text, 304);

	mentatSpeakingMode = 2;
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
				if (mentatSpeakingMode == 2 && textTick < g_global->variable_76AC) key = 1;

				if ((key != 0 && textDone) || result != 0) {
					GUI_Mouse_Hide_InRegion(0, 0, SCREEN_WIDTH, 40);
					GUI_Screen_Copy(0, 160, 0, 0, SCREEN_WIDTH / 8, 40, 4, 0);
					GUI_Mouse_Show_InRegion();

					step = 4;
					mentatSpeakingMode = 0;
					break;
				}

				if (key != 0) {
					GUI_Screen_Copy(0, 160, 0, 0, SCREEN_WIDTH / 8, 40, 4, 4);

					if (textLines-- != 0) {
						GUI_Screen_SetActive(4);
						GUI_DrawText_Wrapper(text, 4, 1, (uint8)g_global->variable_6D5B, 0, 0x32);
						mentatSpeakingMode = 1;
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

				if (mentatSpeakingMode == 0 || textTick > g_global->variable_76AC) break;

				mentatSpeakingMode = 2;
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

		GUI_Mentat_Animation(mentatSpeakingMode);

		if (wsa != NULL && g_global->variable_76B4 == 0) {
			g_global->variable_76B4 = 7;

			do {
				if (step == 0 && frame > 4) step = 1;

				if (!WSA_DisplayFrame(wsa, frame++, g_global->variable_992D << 3, g_global->variable_992B, 4)) {
					if (step == 0) step = 1;

					if (arg12 != 0) {
						frame = 0;
					} else {
						WSA_Unload(wsa);
						wsa = NULL;
					}
				}
			} while (frame == 0);
			dirty = true;
		}

		if (!dirty) continue;

		GUI_Mentat_DrawInfo(pictureDetails, (g_global->variable_992D << 3) + 5, g_global->variable_992B + 3, 8, 0, lines, 0x31);

		GUI_DrawSprite(4, g_sprites[24], g_shoulderLeft, g_shoulderTop, 0, 0);
		GUI_Mouse_Hide_InWidget(g_global->variable_6D5D);
		GUI_Screen_Copy(g_global->variable_992D, g_global->variable_992B, g_global->variable_992D, g_global->variable_992B, g_global->variable_992F, g_global->variable_9931, 4, 0);
		GUI_Mouse_Show_InWidget();
		dirty = false;
	}

	if (wsa != NULL) WSA_Unload(wsa);

	GUI_Screen_SetActive(4);
	GUI_DrawSprite(4, g_sprites[24], g_shoulderLeft, g_shoulderTop, 0, 0);
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
	GUI_Mentat_Animation((g_interrogationTimer < g_global->variable_76AC) ? 0 : 1);

	return 0;
}
