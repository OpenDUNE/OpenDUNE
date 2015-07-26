/** @file src/cutscene.c Introduction movie and cutscenes routines. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "os/common.h"
#include "os/error.h"
#include "os/math.h"
#include "os/sleep.h"
#include "os/strings.h"

#include "cutscene.h"

#include "audio/driver.h"
#include "audio/sound.h"
#include "config.h"
#include "file.h"
#include "gfx.h"
#include "gui/font.h"
#include "gui/gui.h"
#include "gui/widget.h"
#include "house.h"
#include "input/input.h"
#include "opendune.h"
#include "sprites.h"
#include "string.h"
#include "table/strings.h"
#include "timer.h"
#include "wsa.h"


static const HouseAnimation_Animation   *s_houseAnimation_animation = NULL;   /*!< Animation part of animation data. */
static const HouseAnimation_Subtitle    *s_houseAnimation_subtitle = NULL;    /*!< Subtitle part of animation data. */
static const HouseAnimation_SoundEffect *s_houseAnimation_soundEffect = NULL; /*!< Soundeffect part of animation data. */
static uint16 s_var_8062 = 0xFFFF; /*!< Unknown animation data. */
static uint16 s_var_8068 = 0xFFFF; /*!< Unknown animation data. */
static uint16 s_subtitleWait = 0xFFFF; /*!< Unknown animation data. */
static uint16 s_houseAnimation_currentSubtitle = 0; /*!< Current subtitle (index) part of animation. */
static uint16 s_houseAnimation_currentSoundEffect = 0; /* Current voice (index) part of animation. */
static bool s_subtitleActive = false; /* Unknown animation data. */

/** Direction of change in the #GameLoop_PalettePart_Update function. */
typedef enum PalettePartDirection {
	PPD_STOPPED,        /*!< Not changing. */
	PPD_TO_NEW_PALETTE, /*!< Modifying towards #s_palettePartTarget */
	PPD_TO_BLACK        /*!< Modifying towards all black. */
} PalettePartDirection;

static PalettePartDirection s_palettePartDirection;    /*!< Direction of change. @see PalettePartDirection */
static uint32               s_paletteAnimationTimeout; /*!< Timeout value for the next palette change. */
static uint16               s_palettePartCount;        /*!< Number of steps left before the target palette is reached. */
static uint8                s_palettePartTarget[18];   /*!< Target palette part (6 colours). */
static uint8                s_palettePartCurrent[18];  /*!< Current value of the palette part (6 colours, updated each call to #GameLoop_PalettePart_Update). */
static uint8                s_palettePartChange[18];   /*!< Amount of change of each RGB colour of the palette part with each step. */

static void *s_buffer_182E = NULL;
static void *s_buffer_1832 = NULL;

bool g_canSkipIntro = false; /*!< When true, you can skip the intro by pressing a key or clicking. */

static void GameLoop_PrepareAnimation(const HouseAnimation_Animation *animation, const HouseAnimation_Subtitle *subtitle, uint16 arg_8062, const HouseAnimation_SoundEffect *soundEffect)
{
	uint8 i;
	uint8 colors[16];

	s_houseAnimation_animation   = animation;
	s_houseAnimation_subtitle    = subtitle;
	s_houseAnimation_soundEffect = soundEffect;

	s_houseAnimation_currentSubtitle    = 0;
	s_houseAnimation_currentSoundEffect = 0;

	g_fontCharOffset = 0;

	s_var_8062 = arg_8062;
	s_var_8068 = 0;
	s_subtitleWait = 0xFFFF;
	s_subtitleActive = false;

	s_palettePartDirection    = PPD_STOPPED;
	s_palettePartCount        = 0;
	s_paletteAnimationTimeout = 0;

	GFX_ClearScreen();

	File_ReadBlockFile("INTRO.PAL", g_palette1, 256 * 3);

	memcpy(g_palette_998A, g_palette1, 256 * 3);

	Font_Select(g_fontIntro);

	GFX_Screen_SetActive(SCREEN_0);

	memcpy(s_palettePartTarget, &g_palette1[(144 + s_houseAnimation_subtitle->colour * 16) * 3], 6 * 3);

	memset(&g_palette1[215 * 3], 0, 6 * 3);

	memcpy(s_palettePartCurrent, s_palettePartTarget, 6 * 3);

	memset(s_palettePartChange, 0, 6 * 3);


	colors[0] = 0;
	for (i = 0; i < 6; i++) colors[i + 1] = 215 + i;

	GUI_InitColors(colors, 0, 15);
}

static void GameLoop_FinishAnimation(void)
{
	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x1);
	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x2);

	GUI_SetPaletteAnimated(g_palette2, 60);

	GUI_ClearScreen(SCREEN_0);

	Input_History_Clear();

	GFX_ClearBlock(SCREEN_3);
}

static void GameLoop_PlaySoundEffect(uint8 animation)
{
	const HouseAnimation_SoundEffect *soundEffect = &s_houseAnimation_soundEffect[s_houseAnimation_currentSoundEffect];

	if (soundEffect->animationID > animation || soundEffect->wait > s_var_8068) return;

	Voice_Play(soundEffect->voiceID);

	s_houseAnimation_currentSoundEffect++;
}

static void GameLoop_DrawText(char *string, uint16 top)
{
	char *s;
	uint8 *s2;

	s = string;
	for (s2 = (uint8 *)string; *s2 != 0; s2++) *s++ = (*s2 == 0xE1) ? 1 : *s2;
	*s = 0;

	s = string;

	while (*s != 0 && *s != '\r') s++;

	if (*s != 0) {
		*s++ = 0;
	} else {
		s = NULL;
	}

	GUI_DrawText_Wrapper(string, 160, top, 215, 0, 0x100);

	if (s == NULL) return;

	GUI_DrawText_Wrapper(s, 160, top + 18, 215, 0, 0x100);

	s[-1] = 0xD;
}

static void GameLoop_PlaySubtitle(uint8 animation)
{
	const HouseAnimation_Subtitle *subtitle;
	uint8 i;
	uint8 colors[16];

	s_var_8068++;

	GameLoop_PlaySoundEffect(animation);

	subtitle = &s_houseAnimation_subtitle[s_houseAnimation_currentSubtitle];

	if (subtitle->stringID == 0xFFFF || subtitle->animationID > animation) return;

	if (s_subtitleActive) {
		if (s_subtitleWait == 0xFFFF) s_subtitleWait = subtitle->waitFadeout;
		if (s_subtitleWait-- != 0) return;

		s_subtitleActive = false;
		s_houseAnimation_currentSubtitle++;
		s_palettePartDirection = PPD_TO_BLACK;

		if (subtitle->paletteFadeout != 0) {
			s_palettePartCount = subtitle->paletteFadeout;

			for (i = 0; i < 18; i++) {
				s_palettePartChange[i] = s_palettePartTarget[i] / s_palettePartCount;
				if (s_palettePartChange[i] == 0) s_palettePartChange[i] = 1;
			}

			return;
		}

		memcpy(s_palettePartChange, s_palettePartTarget, 18);
		s_palettePartCount = 1;
		return;
	}

	if (s_subtitleWait == 0xFFFF) s_subtitleWait = subtitle->waitFadein;
	if (s_subtitleWait-- != 0) return;

	memcpy(s_palettePartTarget, &g_palette1[(144 + (subtitle->colour * 16)) * 3], 18);

	s_subtitleActive = true;

	GUI_DrawFilledRectangle(0, subtitle->top == 85 ? 0 : subtitle->top, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1, 0);

	if (g_enableVoices != 0 && s_var_8062 != 0xFFFF && s_houseAnimation_currentSubtitle != 0 && g_config.language == LANGUAGE_ENGLISH) {
		uint16 loc06 = s_var_8062 + s_houseAnimation_currentSubtitle;

		Sound_Output_Feedback(loc06);

		if (g_feedback[loc06].messageId != 0) {
			GameLoop_DrawText(String_Get_ByIndex(subtitle->stringID), subtitle->top);
		}
	} else {
		if (subtitle->stringID != STR_NULL) {
			GameLoop_DrawText(String_Get_ByIndex(subtitle->stringID), subtitle->top);
		}
	}

	s_palettePartDirection = PPD_TO_NEW_PALETTE;

	if (subtitle->paletteFadein != 0) {
		s_palettePartCount = subtitle->paletteFadein;

		for (i = 0; i < 18; i++) {
			s_palettePartChange[i] = s_palettePartTarget[i] / s_palettePartCount;
			if (s_palettePartChange[i] == 0) s_palettePartChange[i] = 1;
		}
	} else {
		memcpy(s_palettePartChange, s_palettePartTarget, 18);
		s_palettePartCount = 1;
	}

	if (g_playerHouseID != HOUSE_INVALID || s_houseAnimation_currentSubtitle != 2) return;

	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x21);

	GUI_DrawText_Wrapper("Copyright (c) 1992 Westwood Studios, Inc.", 160, 189, 215, 0, 0x112);

	g_fontCharOffset = 0;

	colors[0] = 0;
	for (i = 0; i < 6; i++) colors[i + 1] = 215 + i;

	GUI_InitColors(colors, 0, 15);

	Font_Select(g_fontIntro);
}

/**
 * Update part of the palette one step.
 * @param finishNow Finish all steps now.
 * @return Direction of change for the next call.
 * @note If \a finishNow, the new palette is not written to the screen.
 * @see PalettePartDirection
 */
static uint16 GameLoop_PalettePart_Update(bool finishNow)
{
	Sound_StartSpeech();

	if (s_palettePartDirection == PPD_STOPPED) return 0;

	if (s_paletteAnimationTimeout >= g_timerGUI && !finishNow) return s_palettePartDirection;

	s_paletteAnimationTimeout = g_timerGUI + 7;
	if (--s_palettePartCount == 0 || finishNow) {
		if (s_palettePartDirection == PPD_TO_NEW_PALETTE) {
			memcpy(s_palettePartCurrent, s_palettePartTarget, 18);
		} else {
			memset(s_palettePartCurrent, 0, 18);
		}

		s_palettePartDirection = PPD_STOPPED;
	} else {
		uint8 i;

		for (i = 0; i < 18; i++) {
			if (s_palettePartDirection == PPD_TO_NEW_PALETTE) {
				s_palettePartCurrent[i] = min(s_palettePartCurrent[i] + s_palettePartChange[i], s_palettePartTarget[i]);
			} else {
				s_palettePartCurrent[i] = max(s_palettePartCurrent[i] - s_palettePartChange[i], 0);
			}
		}
	}

	if (finishNow) return s_palettePartDirection;

	memcpy(&g_palette_998A[215 * 3], s_palettePartCurrent, 18);

	GFX_SetPalette(g_palette_998A);

	return s_palettePartDirection;
}

static void GameLoop_PlayAnimation(void)
{
	const HouseAnimation_Animation *animation;
	uint8 animationMode = 0;

	animation = s_houseAnimation_animation;

	while (animation->duration != 0) {
		uint16 loc04;
		uint16 posX = 0;
		uint16 posY = 0;
		uint32 loc10 = g_timerGUI + animation->duration * 6;
		uint32 loc14 = loc10 + 30;
		uint32 loc18;
		uint32 loc1C;
		uint16 mode = animation->flags & 0x3;
		bool loc20;
		uint32 loc24;
		uint16 locdi;
		uint16 frame;
		void *wsa;

		if ((animation->flags & 0x20) == 0) {
			posX = 8;
			posY = 24;
		}

		s_var_8068 = 0;

		if (mode == 0) {
			wsa = NULL;
			frame = 0;
		} else {
			char filenameBuffer[16];

			if (mode == 3) {
				frame = animation->frameCount;
				loc20 = true;
			} else {
				frame = 0;
				loc20 = ((animation->flags & 0x40) != 0) ? true : false;
			}

			if ((animation->flags & 0x480) != 0) {
				GUI_ClearScreen(SCREEN_1);

				wsa = GFX_Screen_Get_ByIndex(SCREEN_2);

				loc24 = GFX_Screen_GetSize_ByIndex(SCREEN_2) + GFX_Screen_GetSize_ByIndex(SCREEN_3);
				loc20 = false;
			} else {
				wsa = GFX_Screen_Get_ByIndex(SCREEN_1);

				loc24 = GFX_Screen_GetSize_ByIndex(SCREEN_1) + GFX_Screen_GetSize_ByIndex(SCREEN_2) + GFX_Screen_GetSize_ByIndex(SCREEN_3);
			}

			snprintf(filenameBuffer, sizeof(filenameBuffer), "%s.WSA", animation->string);
			wsa = WSA_LoadFile(filenameBuffer, wsa, loc24, loc20);
		}

		locdi = 0;
		if ((animation->flags & 0x8) != 0) {
			loc10 -= 45;
			locdi++;
		} else {
			if ((animation->flags & 0x10) != 0) {
				loc10 -= 15;
				locdi++;
			}
		}

		if ((animation->flags & 0x4) != 0) {
			GameLoop_PlaySubtitle(animationMode);
			WSA_DisplayFrame(wsa, frame++, posX, posY, SCREEN_0);
			GameLoop_PalettePart_Update(true);

			memcpy(&g_palette1[215 * 3], s_palettePartCurrent, 18);

			GUI_SetPaletteAnimated(g_palette1, 45);

			locdi++;
		} else {
			if ((animation->flags & 0x480) != 0) {
				GameLoop_PlaySubtitle(animationMode);
				WSA_DisplayFrame(wsa, frame++, posX, posY, SCREEN_1);
				locdi++;

				if ((animation->flags & 0x480) == 0x80) {
					GUI_Screen_FadeIn2(8, 24, 304, 120, SCREEN_1, SCREEN_0, 1, false);
				} else if ((animation->flags & 0x480) == 0x400) {
					GUI_Screen_FadeIn(1, 24, 1, 24, 38, 120, SCREEN_1, SCREEN_0);
				}
			}
		}

		loc1C = loc10 - g_timerGUI;
		loc18 = 0;
		loc04 = 1;

		switch (mode) {
			case 0:
				loc04 = animation->frameCount - locdi;
				loc18 = loc1C / loc04;
				break;

			case 1:
				loc04 = WSA_GetFrameCount(wsa);
				loc18 = loc1C / animation->frameCount;
				break;

			case 2:
				loc04 = WSA_GetFrameCount(wsa) - locdi;
				loc18 = loc1C / loc04;
				loc10 -= loc18;
				break;

			case 3:
				frame = animation->frameCount;
				loc04 = 1;
				loc18 = loc1C / 20;
				break;

			default:
				PrepareEnd();
				Error("Bad mode in animation #%i.\n", animationMode);
				exit(0);
		}

		while (loc10 > g_timerGUI) {
			g_timerTimeout = loc18;

			GameLoop_PlaySubtitle(animationMode);
			WSA_DisplayFrame(wsa, frame++, posX, posY, SCREEN_0);

			if (mode == 1 && frame == loc04) {
				frame = 0;
			} else {
				if (mode == 3) frame--;
			}

			if (Input_Keyboard_NextKey() != 0 && g_canSkipIntro) {
				WSA_Unload(wsa);
				return;
			}

			do {
				GameLoop_PalettePart_Update(false);
				sleepIdle();
			} while (g_timerTimeout != 0 && loc10 > g_timerGUI);
		}

		if (mode == 2) {
			bool displayed;
			do {
				GameLoop_PlaySubtitle(animationMode);
				displayed = WSA_DisplayFrame(wsa, frame++, posX, posY, SCREEN_0);
			} while (displayed);
		}

		if ((animation->flags & 0x10) != 0) {
			memset(&g_palette_998A[3 * 1], 63, 255 * 3);

			memcpy(&g_palette_998A[215 * 3], s_palettePartCurrent, 18);

			GUI_SetPaletteAnimated(g_palette_998A, 15);

			memcpy(g_palette_998A, g_palette1, 256 * 3);
		}

		if ((animation->flags & 0x8) != 0) {
			GameLoop_PalettePart_Update(true);

			memcpy(&g_palette_998A[215 * 3], s_palettePartCurrent, 18);

			GUI_SetPaletteAnimated(g_palette_998A, 45);
		}

		WSA_Unload(wsa);

		animationMode++;
		animation++;

		while (loc14 > g_timerGUI) sleepIdle();
	}
}

void GameLoop_LevelEndAnimation(void)
{
	const HouseAnimation_Animation *animation;
	const HouseAnimation_Subtitle *subtitle;
	const HouseAnimation_SoundEffect *soundEffect;

	Input_History_Clear();

	switch (g_campaignID) {
		case 4:
			switch (g_playerHouseID) {
				case HOUSE_HARKONNEN:
					animation   = g_table_houseAnimation_animation[HOUSEANIMATION_LEVEL4_HARKONNEN];
					subtitle    = g_table_houseAnimation_subtitle[HOUSEANIMATION_LEVEL4_HARKONNEN];
					soundEffect = g_table_houseAnimation_soundEffect[HOUSEANIMATION_LEVEL4_HARKONNEN];
					break;

				case HOUSE_ATREIDES:
					animation   = g_table_houseAnimation_animation[HOUSEANIMATION_LEVEL4_ARTREIDES];
					subtitle    = g_table_houseAnimation_subtitle[HOUSEANIMATION_LEVEL4_ARTREIDES];
					soundEffect = g_table_houseAnimation_soundEffect[HOUSEANIMATION_LEVEL4_ARTREIDES];
					break;

				case HOUSE_ORDOS:
					animation   = g_table_houseAnimation_animation[HOUSEANIMATION_LEVEL4_ORDOS];
					subtitle    = g_table_houseAnimation_subtitle[HOUSEANIMATION_LEVEL4_ORDOS];
					soundEffect = g_table_houseAnimation_soundEffect[HOUSEANIMATION_LEVEL4_ORDOS];
					break;

				default: return;
			} break;

		case 8:
			switch (g_playerHouseID) {
				case HOUSE_HARKONNEN:
					animation   = g_table_houseAnimation_animation[HOUSEANIMATION_LEVEL8_HARKONNEN];
					subtitle    = g_table_houseAnimation_subtitle[HOUSEANIMATION_LEVEL8_HARKONNEN];
					soundEffect = g_table_houseAnimation_soundEffect[HOUSEANIMATION_LEVEL8_HARKONNEN];
					break;

				case HOUSE_ATREIDES:
					animation   = g_table_houseAnimation_animation[HOUSEANIMATION_LEVEL8_ARTREIDES];
					subtitle    = g_table_houseAnimation_subtitle[HOUSEANIMATION_LEVEL8_ARTREIDES];
					soundEffect = g_table_houseAnimation_soundEffect[HOUSEANIMATION_LEVEL8_ARTREIDES];
					break;

				case HOUSE_ORDOS:
					animation   = g_table_houseAnimation_animation[HOUSEANIMATION_LEVEL8_ORDOS];
					subtitle    = g_table_houseAnimation_subtitle[HOUSEANIMATION_LEVEL8_ORDOS];
					soundEffect = g_table_houseAnimation_soundEffect[HOUSEANIMATION_LEVEL8_ORDOS];
					break;

				default: return;
			}
			break;

		default: return;
	}

	GameLoop_PrepareAnimation(animation, subtitle, 0xFFFF, soundEffect);

	Music_Play(0x22);

	GameLoop_PlayAnimation();

	Driver_Music_FadeOut();

	GameLoop_FinishAnimation();
}

static void GameCredits_SwapScreen(uint16 top, uint16 height, Screen screenID, void *buffer)
{
	uint16 *b = (uint16 *)buffer;
	uint16 *screen1 = (uint16 *)GFX_Screen_Get_ByIndex(screenID) + top * SCREEN_WIDTH / 2;
	uint16 *screen2 = (uint16 *)GFX_Screen_Get_ByIndex(SCREEN_0) + top * SCREEN_WIDTH / 2;
	uint16 count = height * SCREEN_WIDTH / 2;

	while (count-- != 0) {
		if (*b++ != *screen1++) {
			if (count == 0) return;
			b--;
			screen1--;
			*b++ = *screen1;
			*screen2 = *screen1++;
		}
		screen2++;
	}
}

static void GameCredits_Play(char *data, uint16 windowID, Screen memory, Screen screenID, uint16 delay)
{
	uint16 loc02;
	uint16 stringCount = 0;
	uint32 loc0C;
	uint16 spriteID = 514;
	bool loc10 = false;
	uint16 spriteX;
	uint16 spriteY;
	uint16 spritePos = 0;
	struct {
		uint16 x;
		int16 y;
		char *text;
		uint8  separator;
		uint8  charHeight;
		uint8  type;
	} strings[33];
	struct {
		uint16 x;
		uint16 y;
	} positions[6];
	uint16 stage = 4;
	uint16 counter = 60;

	Widget_SetCurrentWidget(windowID);

	spriteX = (g_curWidgetWidth << 3) - Sprite_GetWidth(g_sprites[spriteID]);
	spriteY = g_curWidgetHeight - Sprite_GetHeight(g_sprites[spriteID]);

	positions[0].x = spriteX;
	positions[0].y = 0;
	positions[1].x = 0;
	positions[1].y = spriteY / 2;
	positions[2].x = spriteX;
	positions[2].y = spriteY;
	positions[3].x = 0;
	positions[3].y = 0;
	positions[4].x = spriteX;
	positions[4].y = spriteY / 2;
	positions[5].x = 0;
	positions[5].y = spriteY;

	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, SCREEN_0, memory);
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, memory, screenID);

	GameCredits_SwapScreen(g_curWidgetYBase, g_curWidgetHeight, memory, s_buffer_182E);

	GFX_Screen_SetActive(SCREEN_0);
	loc0C = g_timerSleep;

	Input_History_Clear();

	while (true) {
		while (loc0C > g_timerSleep) sleepIdle();

		loc0C = g_timerSleep + delay;

		while ((g_curWidgetHeight / 6) + 2 > stringCount && *data != 0) {
			char *text = data;
			uint16 y;

			if (stringCount != 0) {
				y = strings[stringCount - 1].y;
				if (strings[stringCount - 1].separator != 5) y += strings[stringCount - 1].charHeight + strings[stringCount - 1].charHeight / 8;
			} else {
				y = g_curWidgetHeight;
			}

			text = data;

			data = strpbrk(data, "\x05\r");
			if (data == NULL) data = strchr(text, '\0');

			strings[stringCount].separator = *data;
			*data = '\0';
			if (strings[stringCount].separator != 0) data++;
			strings[stringCount].type = 0;

			if (*text == 3 || *text == 4) strings[stringCount].type = *text++;

			if (*text == 1) {
				text++;
				Font_Select(g_fontNew6p);
			} else if (*text == 2) {
				text++;
				Font_Select(g_fontNew8p);
			}

			strings[stringCount].charHeight = g_fontCurrent->height;

			switch (strings[stringCount].type) {
				case 3:
					strings[stringCount].x = 157 - Font_GetStringWidth(text);
					break;

				case 4:
					strings[stringCount].x = 161;
					break;

				default:
					strings[stringCount].x = 1 + (SCREEN_WIDTH - Font_GetStringWidth(text)) / 2;
					break;
			}

			strings[stringCount].y = y;
			strings[stringCount].text = text;

			stringCount++;
		}

		switch (stage) {
			case 0:
				GUI_ClearScreen(memory);

				if (spriteID == 514) GUI_ClearScreen(screenID);

				stage++;
				counter = 2;
				break;

			case 1: case 4:
				if (counter-- == 0) {
					counter = 0;
					stage++;
				}
				break;

			case 2:
				if (spriteID == 525) spriteID = 514;

				GUI_DrawSprite(memory, g_sprites[spriteID], positions[spritePos].x, positions[spritePos].y, windowID, 0x4000);

				counter = 8;
				stage++;
				spriteID++;
				if (++spritePos > 5) spritePos = 0;;
				break;

			case 3:
				GFX_SetPalette(g_palette1 + 256 * 3 * counter);

				if (counter-- == 0) {
					stage++;
					counter = 20;
				}
				break;

			case 5:
				GFX_SetPalette(g_palette1 + 256 * 3 * counter);

				if (counter++ >= 8) stage = 0;
				break;

			default: break;
		}

		GUI_Screen_Copy(g_curWidgetXBase, g_curWidgetYBase, g_curWidgetXBase, g_curWidgetYBase, g_curWidgetWidth, g_curWidgetHeight, memory, screenID);

		for (loc02 = 0; loc02 < stringCount; loc02++) {
			if ((int16)strings[loc02].y < g_curWidgetHeight) {
				GFX_Screen_SetActive(screenID);

				Font_Select(g_fontNew8p);

				if (strings[loc02].charHeight != g_fontCurrent->height) Font_Select(g_fontNew6p);

				GUI_DrawText(strings[loc02].text, strings[loc02].x, strings[loc02].y + g_curWidgetYBase, 255, 0);

				GFX_Screen_SetActive(SCREEN_0);
			}

			strings[loc02].y--;
		}

		GameCredits_SwapScreen(g_curWidgetYBase, g_curWidgetHeight, screenID, s_buffer_182E);

		if ((int16)strings[0].y < -10) {
			strings[0].text += strlen(strings[0].text);
			*strings[0].text = strings[0].separator;
			stringCount--;
			memcpy(&strings[0], &strings[1], stringCount * sizeof(*strings));
		}

		if ((g_curWidgetHeight / 6 + 2) > stringCount) {
			if (strings[stringCount - 1].y + strings[stringCount - 1].charHeight < g_curWidgetYBase + g_curWidgetHeight) loc10 = true;
		}

		if (loc10 && stage == 0) break;

		if (Input_Keyboard_NextKey() != 0) break;
	}

	GUI_SetPaletteAnimated(g_palette2, 120);

	GUI_ClearScreen(SCREEN_0);
	GUI_ClearScreen(memory);
	GUI_ClearScreen(screenID);
}

static void GameCredits_LoadPalette(void)
{
	uint16 i;
	uint8 *p;

	s_buffer_182E = GFX_Screen_Get_ByIndex(SCREEN_3);
	s_buffer_1832 = (uint8 *)s_buffer_182E + SCREEN_WIDTH * g_curWidgetHeight;

	g_palette1 = malloc(256 * 3 * 10);
	g_palette2 = calloc(1, 256 * 3);

	File_ReadBlockFile("IBM.PAL", g_palette1, 256 * 3);

	/* Create 10 fadein/fadeout palettes */
	p = g_palette1;
	for (i = 0; i < 10; i++) {
		uint16 j;
		uint8 *pr = g_palette1;

		for (j = 0; j < 255 * 3; j++) *p++ = *pr++ * (9 - i) / 9;

		*p++ = 0x3F;
		*p++ = 0x3F;
		*p++ = 0x3F;
	}
}

/**
 * Shows the game credits.
 */
static void GameLoop_GameCredits(void)
{
	static const uint8 colours[] = {0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	uint16 i;
	uint8 *memory;

	GUI_Mouse_Hide_Safe();

	Widget_SetCurrentWidget(20);

	Sprites_LoadImage("BIGPLAN.CPS", SCREEN_1, g_palette_998A);

	GUI_ClearScreen(SCREEN_0);

	GUI_Screen_Copy(g_curWidgetXBase, g_curWidgetYBase, g_curWidgetXBase, g_curWidgetYBase, g_curWidgetWidth, g_curWidgetHeight, SCREEN_1, SCREEN_0);

	GUI_SetPaletteAnimated(g_palette_998A, 60);

	Music_Play(0);

	GameLoop_Uninit();

	Music_Play(33);

	memory = GFX_Screen_Get_ByIndex(SCREEN_2);

	for (i = 0; i < 256; i++) {
		uint8 loc06;
		uint8 loc04;

		memory[i] = i & 0xFF;

		loc06 = i / 16;
		loc04 = i % 16;

		if (loc06 == 9 && loc04 <= 6) {
			memory[i] = (g_playerHouseID * 16) + loc04 + 144;
		}
	}

	Sprites_LoadImage("MAPPLAN.CPS", SCREEN_1, g_palette_998A);

	GUI_Palette_RemapScreen(g_curWidgetXBase << 3, g_curWidgetYBase, g_curWidgetWidth << 3, g_curWidgetHeight, SCREEN_1, memory);

	GUI_Screen_FadeIn2(g_curWidgetXBase << 3, g_curWidgetYBase, g_curWidgetWidth << 3, g_curWidgetHeight, SCREEN_1, SCREEN_0, 1, false);

	GameCredits_LoadPalette();

	GUI_Mouse_Hide_Safe();

	GUI_InitColors(colours, 0, lengthof(colours) - 1);

	g_fontCharOffset = -1;

	GFX_SetPalette(g_palette1);

	for (;; sleepIdle()) {
		File_ReadBlockFile(String_GenerateFilename("CREDITS"), s_buffer_1832, GFX_Screen_GetSize_ByIndex(SCREEN_3));

		GameCredits_Play(s_buffer_1832, 20, SCREEN_1, SCREEN_2, 6);

		if (Input_Keyboard_NextKey() != 0) break;

		Music_Play(33);
	}

	GUI_SetPaletteAnimated(g_palette2, 60);

	Driver_Music_FadeOut();

	GFX_ClearScreen();
}

/**
 * Shows the end game "movie"
 */
void GameLoop_GameEndAnimation(void)
{
	const HouseAnimation_Animation *animation;
	const HouseAnimation_Subtitle *subtitle;
	const HouseAnimation_SoundEffect *soundEffect;
	uint16 sound;

	Voice_LoadVoices(0xFFFE);

	switch (g_playerHouseID) {
		case HOUSE_HARKONNEN:
			animation   = g_table_houseAnimation_animation[HOUSEANIMATION_LEVEL9_HARKONNEN];
			subtitle    = g_table_houseAnimation_subtitle[HOUSEANIMATION_LEVEL9_HARKONNEN];
			soundEffect = g_table_houseAnimation_soundEffect[HOUSEANIMATION_LEVEL9_HARKONNEN];
			sound       = 0x1E;
			break;

		default:
		case HOUSE_ATREIDES:
			animation   = g_table_houseAnimation_animation[HOUSEANIMATION_LEVEL9_ARTREIDES];
			subtitle    = g_table_houseAnimation_subtitle[HOUSEANIMATION_LEVEL9_ARTREIDES];
			soundEffect = g_table_houseAnimation_soundEffect[HOUSEANIMATION_LEVEL9_ARTREIDES];
			sound       = 0x1F;
			break;

		case HOUSE_ORDOS:
			animation   = g_table_houseAnimation_animation[HOUSEANIMATION_LEVEL9_ORDOS];
			subtitle    = g_table_houseAnimation_subtitle[HOUSEANIMATION_LEVEL9_ORDOS];
			soundEffect = g_table_houseAnimation_soundEffect[HOUSEANIMATION_LEVEL9_ORDOS];
			sound       = 0x20;
			break;
	}

	GameLoop_PrepareAnimation(animation, subtitle, 0xFFFF, soundEffect);

	Music_Play(sound);

	GameLoop_PlayAnimation();

	Driver_Music_FadeOut();

	GameLoop_FinishAnimation();

	GameLoop_GameCredits();
}

/**
 * Logos at begin of intro.
 */
static void Gameloop_Logos(void)
{
	Screen oldScreenID;
	void *wsa;
	uint16 frame;

	oldScreenID = GFX_Screen_SetActive(SCREEN_0);

	GFX_SetPalette(g_palette2);
	GFX_ClearScreen();

	File_ReadBlockFile("WESTWOOD.PAL", g_palette_998A, 256 * 3);

	frame = 0;
	wsa = WSA_LoadFile("WESTWOOD.WSA", GFX_Screen_Get_ByIndex(SCREEN_1), GFX_Screen_GetSize_ByIndex(SCREEN_1) + GFX_Screen_GetSize_ByIndex(SCREEN_2) + GFX_Screen_GetSize_ByIndex(SCREEN_3), true);
	WSA_DisplayFrame(wsa, frame++, 0, 0, SCREEN_0);

	GUI_SetPaletteAnimated(g_palette_998A, 60);

	Music_Play(0x24);

	g_timerTimeout = 360;

	while (WSA_DisplayFrame(wsa, frame++, 0, 0, SCREEN_0)) Timer_Sleep(6);
	
	WSA_Unload(wsa);

	if (Input_Keyboard_NextKey() == 0 || !g_canSkipIntro) Voice_LoadVoices(0xFFFF);

	for (; g_timerTimeout != 0; sleepIdle()) {
		if (Input_Keyboard_NextKey() == 0 || !g_canSkipIntro) continue;

		GUI_SetPaletteAnimated(g_palette2, 30);

		GUI_ClearScreen(SCREEN_0);

		GFX_Screen_SetActive(oldScreenID);
		return;
	}

	GUI_SetPaletteAnimated(g_palette2, 60);

	while (Driver_Music_IsPlaying()) sleepIdle();

	GUI_SetPaletteAnimated(g_palette2, 60);

	GFX_ClearScreen();

	Sprites_LoadImage(String_GenerateFilename("AND"), SCREEN_1, g_palette_998A);

	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, SCREEN_1, SCREEN_0);

	GUI_SetPaletteAnimated(g_palette_998A, 30);

	for (g_timerTimeout = 60; g_timerTimeout != 0; sleepIdle()) {
		if (Input_Keyboard_NextKey() == 0 || !g_canSkipIntro) continue;

		GUI_SetPaletteAnimated(g_palette2, 30);

		GUI_ClearScreen(SCREEN_0);

		GFX_Screen_SetActive(oldScreenID);
		return;
	}

	GUI_SetPaletteAnimated(g_palette2, 30);

	GUI_ClearScreen(SCREEN_0);

	Sprites_LoadImage("VIRGIN.CPS", SCREEN_1, g_palette_998A);

	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, SCREEN_1, SCREEN_0);

	GUI_SetPaletteAnimated(g_palette_998A, 30);

	for (g_timerTimeout = 180; g_timerTimeout != 0; sleepIdle()) {
		if (Input_Keyboard_NextKey() == 0 || !g_canSkipIntro) continue;

		GUI_SetPaletteAnimated(g_palette2, 30);

		GUI_ClearScreen(SCREEN_0);

		GFX_Screen_SetActive(oldScreenID);
		return;
	}

	GUI_SetPaletteAnimated(g_palette2, 30);

	GUI_ClearScreen(SCREEN_0);

	GFX_Screen_SetActive(oldScreenID);
}

/**
 * The Intro.
 */
void GameLoop_GameIntroAnimation(void)
{
	GUI_ChangeSelectionType(SELECTIONTYPE_INTRO);

	Gameloop_Logos();

	if (Input_Keyboard_NextKey() == 0 || !g_canSkipIntro) {
		const HouseAnimation_Animation   *animation   = g_table_houseAnimation_animation[HOUSEANIMATION_INTRO];
		const HouseAnimation_Subtitle    *subtitle    = g_table_houseAnimation_subtitle[HOUSEANIMATION_INTRO];
		const HouseAnimation_SoundEffect *soundEffect = g_table_houseAnimation_soundEffect[HOUSEANIMATION_INTRO];

		Music_Play(0x1B);

		GameLoop_PrepareAnimation(animation, subtitle, 0x4A, soundEffect);

		GameLoop_PlayAnimation();

		Driver_Music_FadeOut();

		GameLoop_FinishAnimation();
	}

	GUI_ChangeSelectionType(SELECTIONTYPE_MENTAT);
}
