/** @file src/gui/mentat.c Mentat gui routines. */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "../os/endian.h"
#include "../os/sleep.h"
#include "../os/strings.h"

#include "mentat.h"

#include "font.h"
#include "gui.h"
#include "widget.h"
#include "../audio/driver.h"
#include "../audio/sound.h"
#include "../file.h"
#include "../gfx.h"
#include "../house.h"
#include "../input/input.h"
#include "../input/mouse.h"
#include "../load.h"
#include "../opendune.h"
#include "../scenario.h"
#include "../sprites.h"
#include "../string.h"
#include "../table/strings.h"
#include "../timer.h"
#include "../tools.h"
#include "../wsa.h"

/**
 * Information about the mentat.
 */
static const uint8 s_unknownHouseData[6][8] = {
	{0x20,0x58,0x20,0x68,0x00,0x00,0x80,0x68}, /* Harkonnen mentat. */
	{0x28,0x50,0x28,0x60,0x48,0x98,0x80,0x80}, /* Atreides mentat. */
	{0x10,0x50,0x10,0x60,0x58,0x90,0x80,0x80}, /* Ordos mentat. */
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
	{0x40,0x50,0x38,0x60,0x00,0x00,0x00,0x00}, /* Intro houses (mercenaries) mentat. */
};


static uint8 *s_mentatSprites[3][5];

bool g_interrogation;      /*!< Asking a security question (changes mentat eye movement). */
static uint8 s_eyesLeft;    /*!< Left of the changing eyes. */
static uint8 s_eyesTop;     /*!< Top of the changing eyes. */
static uint8 s_eyesRight;   /*!< Right of the changing eyes. */
static uint8 s_eyesBottom;  /*!< Bottom of the changing eyes. */

uint32 g_interrogationTimer; /*!< Speaking time-out for security question. */
static uint8 s_mouthLeft;   /*!< Left of the moving mouth. */
static uint8 s_mouthTop;    /*!< Top of the moving mouth. */
static uint8 s_mouthRight;  /*!< Right of the moving mouth. */
static uint8 s_mouthBottom; /*!< Bottom of the moving mouth. */

static uint8 s_otherLeft; /*!< Left of the other object (ring of Ordos mentat, book of atreides mentat). */
static uint8 s_otherTop;  /*!< Top of the other object (ring of Ordos mentat, book of atreides mentat). */
bool g_disableOtherMovement; /*!< Disable moving of the other object. */

uint8 g_shoulderLeft; /*!< Left of the right shoulder of the house mentats (to put them in front of the display in the background). */
uint8 g_shoulderTop;  /*!< Top of the right shoulder of the house mentats (to put them in front of the display in the background). */

static bool s_selectMentatHelp = false; /*!< Selecting from the list of in-game help subjects. */
static uint8 *s_helpSubjects = NULL;

static char s_mentatFilename[13];
static uint16 s_topHelpList;
static uint16 s_selectedHelpSubject;
static uint16 s_numberHelpSubjects;

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

	if (g_debugSkipDialogs) return;

	w1 = GUI_Widget_Allocate(1, GUI_Widget_GetShortcut(String_Get_ByIndex(STR_PROCEED)[0]), 168, 168, 379, 0);
	w2 = GUI_Widget_Allocate(2, GUI_Widget_GetShortcut(String_Get_ByIndex(STR_REPEAT)[0]), 240, 168, 381, 0);

	w1 = GUI_Widget_Link(w1, w2);

	Sound_Output_Feedback(0xFFFE);

	Driver_Voice_Play(NULL, 0xFF);

	Music_Play(musicID);

	stringID += STR_HOUSE_HARKONNENFROM_THE_DARK_WORLD_OF_GIEDI_PRIME_THE_SAVAGE_HOUSE_HARKONNEN_HAS_SPREAD_ACROSS_THE_UNIVERSE_A_CRUEL_PEOPLE_THE_HARKONNEN_ARE_RUTHLESS_TOWARDS_BOTH_FRIEND_AND_FOE_IN_THEIR_FANATICAL_PURSUIT_OF_POWER + houseID * 40;

	do {
		strncpy(g_readBuffer, String_Get_ByIndex(stringID), g_readBufferSize);
		sleepIdle();
	} while (GUI_Mentat_Show(g_readBuffer, wsaFilename, w1, true) == 0x8002);

	free(w2);
	free(w1);

	if (musicID != 0xFFFF) Driver_Music_FadeOut();
}

static void GUI_Mentat_HelpListLoop(void)
{
	uint16 key;

	for (key = 0; key != 0x8001; sleepIdle()) {
		Widget *w = g_widgetMentatTail;

		GUI_Mentat_Animation(0);

		key = GUI_Widget_HandleEvents(w);

		if ((key & 0x800) != 0) key = 0;

		if (key == 0x8001) break;

		key &= 0x80FF;

		s_selectMentatHelp = true;

		switch (key) {
			case 0x0053:
			case 0x0060: /* NUMPAD 8 / ARROW UP */
			case 0x0453:
			case 0x0460:
				if (s_selectedHelpSubject != 0) {
					GUI_Mentat_List_Click(GUI_Widget_Get_ByIndex(w, s_selectedHelpSubject + 2));
					break;
				}

				GUI_Widget_Scrollbar_ArrowUp_Click(g_widgetMentatScrollbar);
				break;

			case 0x0054:
			case 0x0062: /* NUMPAD 2 / ARROW DOWN */
			case 0x0454:
			case 0x0462:
				if (s_selectedHelpSubject < 10) {
					GUI_Mentat_List_Click(GUI_Widget_Get_ByIndex(w, s_selectedHelpSubject + 4));
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
				break;

			case 0x002B: /* NUMPAD 5 / RETURN */
			case 0x003D: /* SPACE */
			case 0x042B:
			case 0x043D:
				GUI_Mentat_List_Click(GUI_Widget_Get_ByIndex(w, s_selectedHelpSubject + 3));
				break;

			default: break;
		}

		s_selectMentatHelp = false;
	}
}

static void GUI_Mentat_LoadHelpSubjects(bool init)
{
	static uint8 *helpDataList = NULL;

	uint8 fileID;
	uint32 length;
	uint32 counter;
	uint8 *helpSubjects;
	uint16 i;

	if (init) {
		helpDataList = GFX_Screen_Get_ByIndex(SCREEN_1);

		s_topHelpList = 0;
		s_selectedHelpSubject = 0;

		sprintf(s_mentatFilename, "MENTAT%c", g_table_houseInfo[g_playerHouseID].name[0]);
		strcpy(s_mentatFilename, String_GenerateFilename(s_mentatFilename));
	}

	fileID = ChunkFile_Open(s_mentatFilename);
	length = ChunkFile_Read(fileID, HTOBE32('NAME'), helpDataList, GFX_Screen_GetSize_ByIndex(SCREEN_1));
	ChunkFile_Close(fileID);

	s_numberHelpSubjects = 0;
	helpSubjects = helpDataList;

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
		s_numberHelpSubjects++;
	}

	helpSubjects = helpDataList;

	while (*helpSubjects == '\0') helpSubjects++;

	for (i = 0; i < s_topHelpList; i++) helpSubjects = String_NextString(helpSubjects);

	s_helpSubjects = helpSubjects;
}

static void GUI_Mentat_Draw(bool force)
{
	static uint16 displayedHelpSubject = 0;

	Screen oldScreenID;
	Widget *line;
	Widget *w = g_widgetMentatTail;
	uint8 *helpSubjects = s_helpSubjects;
	uint16 i;

	if (!force && s_topHelpList == displayedHelpSubject) return;

	displayedHelpSubject = s_topHelpList;

	oldScreenID = GFX_Screen_SetActive(SCREEN_1);

	Widget_SetAndPaintCurrentWidget(8);

	GUI_DrawSprite(SCREEN_1, g_sprites[397 + g_playerHouseID * 15], g_shoulderLeft, g_shoulderTop, 0, 0);

	GUI_DrawText_Wrapper(String_Get_ByIndex(STR_SELECT_SUBJECT), (g_curWidgetXBase << 3) + 16, g_curWidgetYBase + 2, 12, 0, 0x12);
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
			uint8 colour = (i == s_selectedHelpSubject) ? 8 : 15;
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

	GUI_Widget_Scrollbar_Init(GUI_Widget_Get_ByIndex(w, 15), s_numberHelpSubjects, 11, s_topHelpList);

	GUI_Widget_Draw(GUI_Widget_Get_ByIndex(w, 16));
	GUI_Widget_Draw(GUI_Widget_Get_ByIndex(w, 17));

	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(g_curWidgetXBase, g_curWidgetYBase, g_curWidgetXBase, g_curWidgetYBase, g_curWidgetWidth, g_curWidgetHeight, SCREEN_1, SCREEN_0);
	GUI_Mouse_Show_Safe();
	GFX_Screen_SetActive(oldScreenID);
}

/**
 * Shows the Help window.
 * @param proceed Display a "Proceed" button if true, "Exit" otherwise.
 */
static void GUI_Mentat_ShowHelpList(bool proceed)
{
	Screen oldScreenID;

	oldScreenID = GFX_Screen_SetActive(SCREEN_1);

	/* ENHANCEMENT -- After visiting Mentat (the help) window, auto-repeat of keys gets disabled. */
	if (!g_dune2_enhanced) Input_Flags_SetBits(INPUT_FLAG_KEY_REPEAT);
	Input_History_Clear();

	GUI_Mentat_Display(NULL, g_playerHouseID);

	g_widgetMentatFirst = GUI_Widget_Allocate(1, GUI_Widget_GetShortcut(*String_Get_ByIndex(STR_EXIT)), 200, 168, proceed ? 379 : 377, 5);
	g_widgetMentatFirst->shortcut2 = 'n';

	GUI_Mentat_Create_HelpScreen_Widgets();

	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, SCREEN_1, SCREEN_0);
	GUI_Mouse_Show_Safe();

	GUI_Mentat_LoadHelpSubjects(true);

	GUI_Mentat_Draw(true);

	GFX_Screen_SetActive(SCREEN_0);

	GUI_Mentat_HelpListLoop();

	free(g_widgetMentatFirst); g_widgetMentatFirst = NULL;

	Load_Palette_Mercenaries();

	GUI_Widget_Free_WithScrollbar(g_widgetMentatScrollbar);
	g_widgetMentatScrollbar = NULL;

	free(g_widgetMentatScrollUp); g_widgetMentatScrollUp = NULL;
	free(g_widgetMentatScrollDown); g_widgetMentatScrollDown = NULL;

	/* ENHANCEMENT -- After visiting Mentat (the help) window, auto-repeat of keys gets disabled. */
	if (!g_dune2_enhanced) Input_Flags_ClearBits(INPUT_FLAG_KEY_REPEAT);

	GFX_Screen_SetActive(oldScreenID);
}

/**
 * Handle clicks on the Mentat widget.
 * @return True, always.
 */
bool GUI_Widget_Mentat_Click(Widget *w)
{
	VARIABLE_NOT_USED(w);

	g_cursorSpriteID = 0;

	Sprites_SetMouseSprite(0, 0, g_sprites[0]);

	Sound_Output_Feedback(0xFFFE);

	Driver_Voice_Play(NULL, 0xFF);

	Music_Play(g_table_houseInfo[g_playerHouseID].musicBriefing);

	Sprites_UnloadTiles();

	Timer_SetTimer(TIMER_GAME, false);

	GUI_Mentat_ShowHelpList(false);

	Timer_SetTimer(TIMER_GAME, true);

	Driver_Sound_Play(1, 0xFF);

	Sprites_LoadTiles();

	g_textDisplayNeedsUpdate = true;

	GUI_DrawInterfaceAndRadar(SCREEN_0);

	Music_Play(Tools_RandomLCG_Range(0, 5) + 8);

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

	GFX_Screen_SetActive(SCREEN_1);

	Widget_SetAndPaintCurrentWidget(8);

	if (wsaFilename != NULL) {
		void *wsa;

		wsa = WSA_LoadFile(wsaFilename, GFX_Screen_Get_ByIndex(SCREEN_2), GFX_Screen_GetSize_ByIndex(SCREEN_2), false);
		WSA_DisplayFrame(wsa, 0, g_curWidgetXBase * 8, g_curWidgetYBase, SCREEN_1);
		WSA_Unload(wsa);
	}

	GUI_DrawSprite(SCREEN_1, g_sprites[397 + g_playerHouseID * 15], g_shoulderLeft, g_shoulderTop, 0, 0);
	GFX_Screen_SetActive(SCREEN_0);

	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, SCREEN_1, SCREEN_0);
	GUI_Mouse_Show_Safe();

	GUI_SetPaletteAnimated(g_palette1, 15);

	ret = GUI_Mentat_Loop(wsaFilename, NULL, stringBuffer, true, NULL);

	if (w != NULL) {
		do {
			GUI_Widget_DrawAll(w);
			ret = GUI_Widget_HandleEvents(w);

			GUI_PaletteAnimate();
			GUI_Mentat_Animation(0);

			sleepIdle();
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
void GUI_Mentat_ShowBriefing(void)
{
	GUI_Mentat_ShowDialog(g_playerHouseID, g_campaignID * 4 + 4, g_scenario.pictureBriefing, g_table_houseInfo[g_playerHouseID].musicBriefing);
}

/**
 * Show the win screen.
 */
void GUI_Mentat_ShowWin(void)
{
	GUI_Mentat_ShowDialog(g_playerHouseID, g_campaignID * 4 + 5, g_scenario.pictureWin, g_table_houseInfo[g_playerHouseID].musicWin);
}

/**
 * Show the lose screen.
 */
void GUI_Mentat_ShowLose(void)
{
	GUI_Mentat_ShowDialog(g_playerHouseID, g_campaignID * 4 + 6, g_scenario.pictureLose, g_table_houseInfo[g_playerHouseID].musicLose);
}

/**
 * Display a mentat.
 * @param houseFilename Filename of the house.
 * @param houseID ID of the house.
 */
void GUI_Mentat_Display(const char *wsaFilename, uint8 houseID)
{
	char textBuffer[16];
	Screen oldScreenID;
	int i;

	snprintf(textBuffer, sizeof(textBuffer), "MENTAT%c.CPS", g_table_houseInfo[houseID].name[0]);
	Sprites_LoadImage(textBuffer, SCREEN_1, g_palette_998A);

	oldScreenID = GFX_Screen_SetActive(SCREEN_1);

	if (houseID == HOUSE_MERCENARY) {
		File_ReadBlockFile("BENE.PAL", g_palette1, 256 * 3);
	}

	memset(s_mentatSprites, 0, sizeof(s_mentatSprites));

	s_eyesLeft = s_eyesRight  = s_unknownHouseData[houseID][0];
	s_eyesTop  = s_eyesBottom = s_unknownHouseData[houseID][1];

	for (i = 0; i < 5; i++) {
		s_mentatSprites[0][i] = g_sprites[387 + houseID * 15 + i];
	}

	s_eyesRight  += Sprite_GetWidth(s_mentatSprites[0][0]);
	s_eyesBottom += Sprite_GetHeight(s_mentatSprites[0][0]);

	s_mouthLeft = s_mouthRight  = s_unknownHouseData[houseID][2];
	s_mouthTop  = s_mouthBottom = s_unknownHouseData[houseID][3];

	for (i = 0; i < 5; i++) {
		s_mentatSprites[1][i] = g_sprites[392 + houseID * 15 + i];
	}

	s_mouthRight  += Sprite_GetWidth(s_mentatSprites[1][0]);
	s_mouthBottom += Sprite_GetHeight(s_mentatSprites[1][0]);

	s_otherLeft = s_unknownHouseData[houseID][4];
	s_otherTop  = s_unknownHouseData[houseID][5];

	for (i = 0; i < 4; i++) {
		s_mentatSprites[2][i] = g_sprites[398 + houseID * 15 + i];
	}

	g_shoulderLeft = s_unknownHouseData[houseID][6];
	g_shoulderTop  = s_unknownHouseData[houseID][7];

	Widget_SetAndPaintCurrentWidget(8);

	if (wsaFilename != NULL) {
		void *wsa;

		wsa = WSA_LoadFile(wsaFilename, GFX_Screen_Get_ByIndex(SCREEN_2), GFX_Screen_GetSize_ByIndex(SCREEN_2), false);
		WSA_DisplayFrame(wsa, 0, g_curWidgetXBase * 8, g_curWidgetYBase, SCREEN_1);
		WSA_Unload(wsa);
	}

	GUI_DrawSprite(SCREEN_1, g_sprites[397 + houseID * 15], g_shoulderLeft, g_shoulderTop, 0, 0);
	GFX_Screen_SetActive(oldScreenID);
}

/**
 * Draw sprites and handle mouse in a mentat screen.
 * @param speakingMode If \c 1, the mentat is speaking.
 */
void GUI_Mentat_Animation(uint16 speakingMode)
{
	static uint32 movingEyesTimer = 0;      /* Timer when to change the eyes sprite. */
	static uint16 movingEyesSprite = 0;     /* Index in _mentatSprites of the displayed moving eyes. */
	static uint16 movingEyesNextSprite = 0; /* If not 0, it decides the movingEyesNextSprite */

	static uint32 movingMouthTimer = 0;
	static uint16 movingMouthSprite = 0;

	static uint32 movingOtherTimer = 0;
	static int16 otherSprite = 0;

	bool partNeedsRedraw;
	uint16 i;

	if (movingOtherTimer < g_timerGUI && !g_disableOtherMovement) {
		if (movingOtherTimer != 0) {
			uint8 *sprite;

			if (s_mentatSprites[2][1 + abs(otherSprite)] == NULL) {
				otherSprite = 1 - otherSprite;
			} else {
				otherSprite++;
			}

			sprite = s_mentatSprites[2][abs(otherSprite)];

			GUI_Mouse_Hide_InRegion(s_otherLeft, s_otherTop, s_otherLeft + Sprite_GetWidth(sprite), s_otherTop + Sprite_GetHeight(sprite));
			GUI_DrawSprite(SCREEN_0, sprite, s_otherLeft, s_otherTop, 0, 0);
			GUI_Mouse_Show_InRegion();
		}

		switch (g_playerHouseID) {
			case HOUSE_HARKONNEN:
				movingOtherTimer = g_timerGUI + 300 * 60;
				break;
			case HOUSE_ATREIDES:
				movingOtherTimer = g_timerGUI + 60 * Tools_RandomLCG_Range(1,3);
				break;
			case HOUSE_ORDOS:
				if (otherSprite != 0) {
					movingOtherTimer = g_timerGUI + 6;
				} else {
					movingOtherTimer = g_timerGUI + 60 * Tools_RandomLCG_Range(10, 19);
				}
				break;
			default:
				break;
		}
	}

	if (speakingMode == 1) {
		if (movingMouthTimer < g_timerGUI) {
			uint8 *sprite;

			movingMouthSprite = Tools_RandomLCG_Range(0, 4);
			sprite = s_mentatSprites[1][movingMouthSprite];

			GUI_Mouse_Hide_InRegion(s_mouthLeft, s_mouthTop, s_mouthLeft + Sprite_GetWidth(sprite), s_mouthTop + Sprite_GetHeight(sprite));
			GUI_DrawSprite(SCREEN_0, sprite, s_mouthLeft, s_mouthTop, 0, 0);
			GUI_Mouse_Show_InRegion();

			switch (movingMouthSprite) {
				case 0:
					movingMouthTimer = g_timerGUI + Tools_RandomLCG_Range(7, 30);
					break;
				case 1:
				case 2:
				case 3:
					movingMouthTimer = g_timerGUI + Tools_RandomLCG_Range(6, 10);
					break;
				case 4:
					movingMouthTimer = g_timerGUI + Tools_RandomLCG_Range(5, 6);
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
		} else if (Mouse_InsideRegion(s_mouthLeft, s_mouthTop, s_mouthRight, s_mouthBottom) != 0) {
			if (movingMouthTimer != 0xFFFFFFFF) {
				movingMouthTimer = 0xFFFFFFFF;
				movingMouthSprite = Tools_RandomLCG_Range(1, 4);
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

			sprite = s_mentatSprites[1][movingMouthSprite];

			GUI_Mouse_Hide_InRegion(s_mouthLeft, s_mouthTop, s_mouthLeft + Sprite_GetWidth(sprite), s_mouthTop + Sprite_GetHeight(sprite));
			GUI_DrawSprite(SCREEN_0, sprite, s_mouthLeft, s_mouthTop, 0, 0);
			GUI_Mouse_Show_InRegion();
		}
	}

	partNeedsRedraw = false;

	if (Input_Test(0x41) != 0 || Input_Test(0x42) != 0) {
		if (Mouse_InsideRegion(s_eyesLeft, s_eyesTop, s_eyesRight, s_eyesBottom) != 0) {
			if (movingEyesSprite != 0x4) {
				partNeedsRedraw = true;
				movingEyesSprite = (movingEyesSprite == 3) ? 4 : 3;
				movingEyesNextSprite = 0;
				movingEyesTimer = 0;
			}

			if (partNeedsRedraw) {
				uint8 *sprite;

				sprite = s_mentatSprites[0][movingEyesSprite];

				GUI_Mouse_Hide_InRegion(s_eyesLeft, s_eyesTop, s_eyesLeft + Sprite_GetWidth(sprite), s_eyesTop + Sprite_GetHeight(sprite));
				GUI_DrawSprite(SCREEN_0, sprite, s_eyesLeft, s_eyesTop, 0, 0);
				GUI_Mouse_Show_InRegion();
			}

			return;
		}
	}

	if (Mouse_InsideRegion((int16)s_eyesLeft - 16, (int16)s_eyesTop - 8, s_eyesRight + 16, s_eyesBottom + 24) != 0) {
		if (Mouse_InsideRegion((int16)s_eyesLeft - 8, s_eyesBottom, s_eyesRight + 8, SCREEN_HEIGHT - 1) != 0) {
			i = 3;
		} else {
			if (Mouse_InsideRegion(s_eyesRight, (int16)s_eyesTop - 8, s_eyesRight + 16, s_eyesBottom + 8) != 0) {
				i = 2;
			} else {
				i = (Mouse_InsideRegion((int16)s_eyesLeft - 16, (int16)s_eyesTop - 8, s_eyesLeft, s_eyesBottom + 8) == 0) ? 0 : 1;
			}
		}

		if (i != movingEyesSprite) {
			partNeedsRedraw = true;
			movingEyesSprite = i;
			movingEyesNextSprite = 0;
			movingEyesTimer = g_timerGUI;
		}
	} else {
		if (movingEyesTimer >= g_timerGUI) return;

		partNeedsRedraw = true;
		if (movingEyesNextSprite != 0) {
			movingEyesSprite = movingEyesNextSprite;
			movingEyesNextSprite = 0;

			if (movingEyesSprite != 4) {
				movingEyesTimer = g_timerGUI + Tools_RandomLCG_Range(20, 180);
			} else {
				movingEyesTimer = g_timerGUI + Tools_RandomLCG_Range(12, 30);
			}
		} else {
			i = 0;
			switch (speakingMode) {
				case 0:
					i = Tools_RandomLCG_Range(0, 7);
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
						i = Tools_RandomLCG_Range(0, 17);
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
					i = Tools_RandomLCG_Range(0, 15);
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
				movingEyesTimer = g_timerGUI + Tools_RandomLCG_Range(1, 5);
			} else {
				if (i != movingEyesSprite && (i == 4 || movingEyesSprite == 4)) {
					movingEyesNextSprite = i;
					movingEyesSprite = 3;
					movingEyesTimer = g_timerGUI;
				} else {
					movingEyesSprite = i;
					if (i != 4) {
						movingEyesTimer = g_timerGUI + Tools_RandomLCG_Range(15, 180);
					} else {
						movingEyesTimer = g_timerGUI + Tools_RandomLCG_Range(6, 60);
					}
				}
			}

			if (g_interrogation && movingEyesSprite == 0) movingEyesSprite = 3;
		}
	}

	if (partNeedsRedraw) {
		uint8 *sprite;

		sprite = s_mentatSprites[0][movingEyesSprite];

		GUI_Mouse_Hide_InRegion(s_eyesLeft, s_eyesTop, s_eyesLeft + Sprite_GetWidth(sprite), s_eyesTop + Sprite_GetHeight(sprite));
		GUI_DrawSprite(SCREEN_0, sprite, s_eyesLeft, s_eyesTop, 0, 0);
		GUI_Mouse_Show_InRegion();
	}
}

/**
 * Select a new subject, move the list of help subjects displayed, if necessary.
 * @param difference Number of subjects to jump.
 */
void GUI_Mentat_SelectHelpSubject(int16 difference)
{
	if (difference > 0) {
		if (difference + s_topHelpList + 11 > s_numberHelpSubjects) {
			difference = s_numberHelpSubjects - (s_topHelpList + 11);
		}
		s_topHelpList += difference;

		while (difference-- != 0) {
			s_helpSubjects = String_NextString(s_helpSubjects);
		}
		return;
	}

	if (difference < 0) {
		difference = -difference;

		if ((int16)s_topHelpList < difference) {
			difference = s_topHelpList;
		}

		s_topHelpList -= difference;

		while (difference-- != 0) {
			s_helpSubjects = String_PrevString(s_helpSubjects);
		}
		return;
	}
}

/** Create the widgets of the mentat help screen. */
void GUI_Mentat_Create_HelpScreen_Widgets(void)
{
	static char empty[2] = "";
	uint16 ypos;
	Widget *w;
	int i;

	if (g_widgetMentatScrollbar != NULL) {
		GUI_Widget_Free_WithScrollbar(g_widgetMentatScrollbar);
		g_widgetMentatScrollbar = NULL;
	}

	free(g_widgetMentatScrollUp); g_widgetMentatScrollUp = NULL;
	free(g_widgetMentatScrollDown); g_widgetMentatScrollDown = NULL;

	g_widgetMentatTail = NULL;
	ypos = 8;

	w = (Widget *)GFX_Screen_Get_ByIndex(SCREEN_2);

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

	g_widgetMentatScrollDown = GUI_Widget_Allocate3(16, 0, 168, 96, g_sprites[385], g_sprites[386], GUI_Widget_Get_ByIndex(g_widgetMentatTail, 15), 1);
	g_widgetMentatScrollDown->shortcut  = 0;
	g_widgetMentatScrollDown->shortcut2 = 0;
	g_widgetMentatScrollDown->parentID  = 8;
	g_widgetMentatTail = GUI_Widget_Link(g_widgetMentatTail, g_widgetMentatScrollDown);

	g_widgetMentatScrollUp = GUI_Widget_Allocate3(17, 0, 168, 16, g_sprites[383], g_sprites[384], GUI_Widget_Get_ByIndex(g_widgetMentatTail, 15), 0);
	g_widgetMentatScrollUp->shortcut  = 0;
	g_widgetMentatScrollUp->shortcut2 = 0;
	g_widgetMentatScrollUp->parentID  = 8;
	g_widgetMentatTail = GUI_Widget_Link(g_widgetMentatTail, g_widgetMentatScrollUp);

	g_widgetMentatTail = GUI_Widget_Link(g_widgetMentatTail, g_widgetMentatFirst);

	GUI_Widget_Draw(g_widgetMentatFirst);
}

static void GUI_Mentat_ShowHelp(void)
{
	struct {
		uint8  notused[8];
		uint32 length;
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

	subject = s_helpSubjects;

	for (i = 0; i < s_selectedHelpSubject; i++) subject = String_NextString(subject);

	noDesc = (subject[5] == '0');
	offset = HTOBE32(*(uint32 *)(subject + 1));

	fileID = ChunkFile_Open(s_mentatFilename);
	ChunkFile_Read(fileID, HTOBE32('INFO'), &info, 12);
	ChunkFile_Close(fileID);

	info.length = HTOBE32(info.length);

	text = g_readBuffer;
	compressedText = GFX_Screen_Get_ByIndex(SCREEN_1);

	fileID = File_Open(s_mentatFilename, 1);
	File_Seek(fileID, offset, 0);
	File_Read(fileID, compressedText, info.length);
	String_Decompress(compressedText, text);
	String_TranslateSpecial(text, text);
	File_Close(fileID);

	while (*text != '*' && *text != '?') text++;

	loc12 = (*text == '*');

	*text++ = '\0';

	if (noDesc) {
		uint16 index;

		picture = g_scenario.pictureBriefing;
		desc    = NULL;
		text    = (char *)g_readBuffer;

		index = *text - 44 + g_campaignID * 4 + STR_HOUSE_HARKONNENFROM_THE_DARK_WORLD_OF_GIEDI_PRIME_THE_SAVAGE_HOUSE_HARKONNEN_HAS_SPREAD_ACROSS_THE_UNIVERSE_A_CRUEL_PEOPLE_THE_HARKONNEN_ARE_RUTHLESS_TOWARDS_BOTH_FRIEND_AND_FOE_IN_THEIR_FANATICAL_PURSUIT_OF_POWER + g_playerHouseID * 40;

		strncpy(g_readBuffer, String_Get_ByIndex(index), g_readBufferSize);
	} else {
		picture = (char *)g_readBuffer;
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

	index = s_selectedHelpSubject + 3;

	if (w->index != index) {
		w2 = GUI_Widget_Get_ByIndex(g_widgetMentatTail, index);

		GUI_Widget_MakeNormal(w, false);
		GUI_Widget_MakeNormal(w2, false);

		if (w2->stringID == 0x31) {
			w2->fgColourDown   = 15;
			w2->fgColourNormal = 15;

			GUI_Widget_Draw(w2);
		}

		if (w->stringID == 0x31) {
			w->fgColourDown   = 8;
			w->fgColourNormal = 8;

			GUI_Widget_Draw(w);
		}

		s_selectedHelpSubject = w->index - 3;
		return true;
	}

	if ((w->state.s.buttonState & 0x11) == 0 && !s_selectMentatHelp) return true;

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
	GUI_Mentat_SelectHelpSubject(GUI_Get_Scrollbar_Position(w) - s_topHelpList);
	GUI_Mentat_Draw(false);
}

static bool GUI_Mentat_DrawInfo(char *text, uint16 left, uint16 top, uint16 height, uint16 skip, int16 lines, uint16 flags)
{
	Screen oldScreenID;

	if (lines <= 0) return false;

	oldScreenID = GFX_Screen_SetActive(SCREEN_2);

	while (skip-- != 0) text += strlen(text) + 1;

	while (lines-- != 0) {
		if (*text != '\0') GUI_DrawText_Wrapper(text, left, top, g_curWidgetFGColourBlink, 0, flags);
		top += height;
		text += strlen(text) + 1;
	}

	GFX_Screen_SetActive(oldScreenID);

	return true;
}

uint16 GUI_Mentat_Loop(const char *wsaFilename, char *pictureDetails, char *text, bool arg12, Widget *w)
{
	Screen oldScreenID;
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

	old07AE = Widget_SetCurrentWidget(8);
	oldScreenID = GFX_Screen_SetActive(SCREEN_2);

	wsa = NULL;

	if (wsaFilename != NULL) {
		wsa = WSA_LoadFile(wsaFilename, GFX_Screen_Get_ByIndex(SCREEN_1), GFX_Screen_GetSize_ByIndex(SCREEN_1), false);
	}

	step = 0;
	if (wsa == NULL) {
		Widget_PaintCurrentWidget();
		step = 1;
	}

	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x31);

	descLines = GUI_SplitText(pictureDetails, (g_curWidgetWidth << 3) + 10, '\0');

	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x32);

	textLines = GUI_Mentat_SplitText(text, 304);

	mentatSpeakingMode = 2;
	lines = 0;
	frame = 0;
	g_timerTimeout = 0;
	descTick = g_timerGUI + 30;

	Input_History_Clear();

	textDone = false;
	result = 0;
	for (done = false; !done; sleepIdle()) {
		uint16 key;

		GFX_Screen_SetActive(SCREEN_0);

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
					if (g_timerGUI > descTick) {
						descTick = g_timerGUI + 15;
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
				GUI_Screen_Copy(0, 0, 0, 160, SCREEN_WIDTH / 8, 40, SCREEN_0, SCREEN_2);
				GUI_Mouse_Show_InRegion();

				step = 3;
				key = 1;
				/* FALL-THROUGH */

			case 3:
				if (mentatSpeakingMode == 2 && textTick < g_timerGUI) key = 1;

				if ((key != 0 && textDone) || result != 0) {
					GUI_Mouse_Hide_InRegion(0, 0, SCREEN_WIDTH, 40);
					GUI_Screen_Copy(0, 160, 0, 0, SCREEN_WIDTH / 8, 40, SCREEN_2, SCREEN_0);
					GUI_Mouse_Show_InRegion();

					step = 4;
					mentatSpeakingMode = 0;
					break;
				}

				if (key != 0) {
					GUI_Screen_Copy(0, 160, 0, 0, SCREEN_WIDTH / 8, 40, SCREEN_2, SCREEN_2);

					if (textLines-- != 0) {
						GFX_Screen_SetActive(SCREEN_2);
						GUI_DrawText_Wrapper(text, 4, 1, g_curWidgetFGColourBlink, 0, 0x32);
						mentatSpeakingMode = 1;
						textDelay = strlen(text) * 4;
						textTick = g_timerGUI + textDelay;

						if (textLines != 0) {
							while (*text++ != '\0') {}
						} else {
							textDone = true;
						}

						GFX_Screen_SetActive(SCREEN_0);
					}

					GUI_Mouse_Hide_InRegion(0, 0, SCREEN_WIDTH, 40);
					GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, 40, SCREEN_2, SCREEN_0);
					GUI_Mouse_Show_InRegion();
					break;
				}

				if (mentatSpeakingMode == 0 || textTick > g_timerGUI) break;

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

		if (wsa != NULL && g_timerTimeout == 0) {
			g_timerTimeout = 7;

			do {
				if (step == 0 && frame > 4) step = 1;

				if (!WSA_DisplayFrame(wsa, frame++, g_curWidgetXBase << 3, g_curWidgetYBase, SCREEN_2)) {
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

		GUI_Mentat_DrawInfo(pictureDetails, (g_curWidgetXBase << 3) + 5, g_curWidgetYBase + 3, 8, 0, lines, 0x31);

		GUI_DrawSprite(SCREEN_2, g_sprites[397 + g_playerHouseID * 15], g_shoulderLeft, g_shoulderTop, 0, 0);
		GUI_Mouse_Hide_InWidget(g_curWidgetIndex);
		GUI_Screen_Copy(g_curWidgetXBase, g_curWidgetYBase, g_curWidgetXBase, g_curWidgetYBase, g_curWidgetWidth, g_curWidgetHeight, SCREEN_2, SCREEN_0);
		GUI_Mouse_Show_InWidget();
		dirty = false;
	}

	if (wsa != NULL) WSA_Unload(wsa);

	GFX_Screen_SetActive(SCREEN_2);
	GUI_DrawSprite(SCREEN_2, g_sprites[397 + g_playerHouseID * 15], g_shoulderLeft, g_shoulderTop, 0, 0);
	GUI_Mouse_Hide_InWidget(g_curWidgetIndex);
	GUI_Screen_Copy(g_curWidgetXBase, g_curWidgetYBase, g_curWidgetXBase, g_curWidgetYBase, g_curWidgetWidth, g_curWidgetHeight, SCREEN_2, SCREEN_0);
	GUI_Mouse_Show_InWidget();
	Widget_SetCurrentWidget(old07AE);
	GFX_Screen_SetActive(oldScreenID);

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

uint16 GUI_Mentat_Tick(void)
{
	GUI_Mentat_Animation((g_interrogationTimer < g_timerGUI) ? 0 : 1);

	return 0;
}
