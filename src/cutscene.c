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


static const HouseAnimation_Subtitle    *s_houseAnimation_subtitle = NULL;    /*!< Subtitle part of animation data. */
static const HouseAnimation_SoundEffect *s_houseAnimation_soundEffect = NULL; /*!< Soundeffect part of animation data. */
static uint16 s_feedback_base_index = 0xFFFF; /*!< base index in g_feedback - used in Intro animation.*/
static uint16 s_subtitleIndex = 0xFFFF; /*!< Unknown animation data. */
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

bool g_canSkipIntro = false; /*!< When true, you can skip the intro by pressing a key or clicking. */

static void GameLoop_PrepareAnimation(const HouseAnimation_Subtitle *subtitle, uint16 feedback_base_index, const HouseAnimation_SoundEffect *soundEffect)
{
	uint8 i;
	uint8 colors[16];

	s_houseAnimation_subtitle    = subtitle;
	s_houseAnimation_soundEffect = soundEffect;

	s_houseAnimation_currentSubtitle    = 0;
	s_houseAnimation_currentSoundEffect = 0;

	g_fontCharOffset = 0;

	s_feedback_base_index = feedback_base_index;
	s_subtitleIndex = 0;
	s_subtitleWait = 0xFFFF;
	s_subtitleActive = false;

	s_palettePartDirection    = PPD_STOPPED;
	s_palettePartCount        = 0;
	s_paletteAnimationTimeout = 0;

	GFX_ClearScreen(SCREEN_ACTIVE);

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

	if (soundEffect->animationID > animation || soundEffect->wait > s_subtitleIndex) return;

	Voice_Play(soundEffect->voiceID);

	s_houseAnimation_currentSoundEffect++;
}

/**
 * Used to print subtitles during cutscenes :
 * one or two lines separated by a CR
 *
 * Warning : \xE1 is translated to \x01 in the source string
 */
static void GameLoop_DrawText(char *string, uint16 top)
{
	char *s;

	/* replace all \xE1 with \x01 */
	for (s = string; *s != 0; s++) if (*s == '\xE1') *s = '\x01';

	/* look for either null terminator or CR */
	s = string;
	while (*s != 0 && *s != '\r') s++;

	if (*s != 0) {
		/* replace CR with a null terminator and let s point to the 2nd line */
		*s++ = 0;
	} else {
		s = NULL;
	}

	Debug("GameLoop_DrawText() 1st line : %s\n", string);;
	GUI_DrawText_Wrapper(string, 160, top, 215, 0, 0x100);

	if (s != NULL) {
		/* there is a second line to draw */
		Debug("GameLoop_DrawText() 2nd line : %s\n", s);;
		GUI_DrawText_Wrapper(s, 160, top + 18, 215, 0, 0x100);
		s[-1] = '\r';	/* put the CR character back in place */
	}
}

static void GameLoop_PlaySubtitle(uint8 animation)
{
	const HouseAnimation_Subtitle *subtitle;
	uint8 i;
	uint8 colors[16];

	s_subtitleIndex++;

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

	if (g_enableVoices != 0 && s_feedback_base_index != 0xFFFF && s_houseAnimation_currentSubtitle != 0 && g_config.language == LANGUAGE_ENGLISH) {
		/* specific code for Intro
		 * @see GameLoop_GameIntroAnimation() */
		uint16 feedback_index = s_feedback_base_index + s_houseAnimation_currentSubtitle;

		Sound_Output_Feedback(feedback_index);

		if (g_feedback[feedback_index].messageId != 0) {
			/* force drawing of subtitle */
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

static void GameLoop_PlayAnimation(const HouseAnimation_Animation *animation)
{
	uint8 animationStep = 0;

	while (animation->duration != 0) {
		uint16 frameCount;
		uint16 posX;
		uint16 posY;
		uint32 timeout = g_timerGUI + animation->duration * 6;
		uint32 timeout2 = timeout + 30;	/* timeout + 0.5 s */
		uint32 timeLeftForFrame;
		uint32 timeLeft;
		uint16 mode = animation->flags & 0x3;
		uint16 addFrameCount;	/* additional frame count */
		uint16 frame;
		void *wsa;

		if ((animation->flags & HOUSEANIM_FLAGS_POS0_0) != 0) {
			posX = 0;
			posY = 0;
		} else {
			posX = 8;
			posY = 24;
		}

		s_subtitleIndex = 0;

		Debug("GameLoop_PlayAnimation() %2d %-8.8s mode=%d flags=%03x\n", animationStep, animation->string, mode, animation->flags & ~3);
		if (mode == 0) {
			wsa = NULL;
			frame = 0;
		} else {
			char filenameBuffer[16];
			uint32 wsaSize;
			bool wsaReservedDisplayFrame;

			if (mode == 3) {
				frame = animation->frameCount;
				wsaReservedDisplayFrame = true;
			} else {
				frame = 0;
				wsaReservedDisplayFrame = ((animation->flags & HOUSEANIM_FLAGS_DISPLAYFRAME) != 0) ? true : false;
			}

			if ((animation->flags & (HOUSEANIM_FLAGS_FADEIN2 | HOUSEANIM_FLAGS_FADEIN)) != 0) {
				GUI_ClearScreen(SCREEN_1);

				wsa = GFX_Screen_Get_ByIndex(SCREEN_2);

				wsaSize = GFX_Screen_GetSize_ByIndex(SCREEN_2) + GFX_Screen_GetSize_ByIndex(SCREEN_3);
				wsaReservedDisplayFrame = false;
			} else {
				wsa = GFX_Screen_Get_ByIndex(SCREEN_1);

				wsaSize = GFX_Screen_GetSize_ByIndex(SCREEN_1) + GFX_Screen_GetSize_ByIndex(SCREEN_2) + GFX_Screen_GetSize_ByIndex(SCREEN_3);
			}

			snprintf(filenameBuffer, sizeof(filenameBuffer), "%.8s.WSA", animation->string);
			wsa = WSA_LoadFile(filenameBuffer, wsa, wsaSize, wsaReservedDisplayFrame);
		}

		addFrameCount = 0;
		if ((animation->flags & HOUSEANIM_FLAGS_FADEOUTTEXT) != 0) {
			timeout -= 45;
			addFrameCount++;
		} else if ((animation->flags & HOUSEANIM_FLAGS_FADETOWHITE) != 0) {
			timeout -= 15;
			addFrameCount++;
		}

		if ((animation->flags & HOUSEANIM_FLAGS_FADEINTEXT) != 0) {
			GameLoop_PlaySubtitle(animationStep);
			WSA_DisplayFrame(wsa, frame++, posX, posY, SCREEN_0);
			GameLoop_PalettePart_Update(true);

			memcpy(&g_palette1[215 * 3], s_palettePartCurrent, 18);

			GUI_SetPaletteAnimated(g_palette1, 45);

			addFrameCount++;
		} else if ((animation->flags & (HOUSEANIM_FLAGS_FADEIN2 | HOUSEANIM_FLAGS_FADEIN)) != 0) {
			GameLoop_PlaySubtitle(animationStep);
			WSA_DisplayFrame(wsa, frame++, posX, posY, SCREEN_1);
			addFrameCount++;

			if ((animation->flags & (HOUSEANIM_FLAGS_FADEIN2 | HOUSEANIM_FLAGS_FADEIN)) == HOUSEANIM_FLAGS_FADEIN2) {
				GUI_Screen_FadeIn2(8, 24, 304, 120, SCREEN_1, SCREEN_0, 1, false);
			} else if ((animation->flags & (HOUSEANIM_FLAGS_FADEIN2 | HOUSEANIM_FLAGS_FADEIN)) == HOUSEANIM_FLAGS_FADEIN) {
				GUI_Screen_FadeIn(1, 24, 1, 24, 38, 120, SCREEN_1, SCREEN_0);
			}
		}

		timeLeft = timeout - g_timerGUI;
		timeLeftForFrame = 0;
		frameCount = 1;

		switch (mode) {
			case 0:
				frameCount = animation->frameCount - addFrameCount;
				timeLeftForFrame = timeLeft / frameCount;
				break;

			case 1:
				frameCount = WSA_GetFrameCount(wsa);
				timeLeftForFrame = timeLeft / animation->frameCount;
				break;

			case 2:
				frameCount = WSA_GetFrameCount(wsa) - addFrameCount;
				timeLeftForFrame = timeLeft / frameCount;
				timeout -= timeLeftForFrame;
				break;

			case 3:
				frame = animation->frameCount;
				frameCount = 1;
				timeLeftForFrame = timeLeft / 20;
				break;

			default:
				PrepareEnd();
				Error("Bad mode in animation #%i.\n", animationStep);
				exit(0);
		}

		while (timeout > g_timerGUI) {
			g_timerTimeout = timeLeftForFrame;

			GameLoop_PlaySubtitle(animationStep);
			WSA_DisplayFrame(wsa, frame++, posX, posY, SCREEN_0);

			if (mode == 1 && frame == frameCount) {
				frame = 0;
			} else if (mode == 3) {
				frame--;
			}

			if (Input_Keyboard_NextKey() != 0 && g_canSkipIntro) {
				WSA_Unload(wsa);
				return;
			}

			do {
				GameLoop_PalettePart_Update(false);
				sleepIdle();
			} while (g_timerTimeout != 0 && timeout > g_timerGUI);
		}

		if (mode == 2) {
			bool displayed;
			do {
				GameLoop_PlaySubtitle(animationStep);
				displayed = WSA_DisplayFrame(wsa, frame++, posX, posY, SCREEN_0);
				sleepIdle();
			} while (displayed);
		}

		if ((animation->flags & HOUSEANIM_FLAGS_FADETOWHITE) != 0) {
			memset(&g_palette_998A[3 * 1], 63, 255 * 3);

			memcpy(&g_palette_998A[215 * 3], s_palettePartCurrent, 18);

			GUI_SetPaletteAnimated(g_palette_998A, 15);

			memcpy(g_palette_998A, g_palette1, 256 * 3);
		}

		if ((animation->flags & HOUSEANIM_FLAGS_FADEOUTTEXT) != 0) {
			GameLoop_PalettePart_Update(true);

			memcpy(&g_palette_998A[215 * 3], s_palettePartCurrent, 18);

			GUI_SetPaletteAnimated(g_palette_998A, 45);
		}

		WSA_Unload(wsa);

		animationStep++;
		animation++;

		while (timeout2 > g_timerGUI) sleepIdle();
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

	GameLoop_PrepareAnimation(subtitle, 0xFFFF, soundEffect);

	Music_Play(0x22);

	GameLoop_PlayAnimation(animation);

	Driver_Music_FadeOut();

	GameLoop_FinishAnimation();
}

static void GameCredits_SwapScreen(uint16 top, uint16 height, Screen srcScreenID, Screen dstScreenID)
{
	uint16 *b = (uint16 *)GFX_Screen_Get_ByIndex(dstScreenID);	/* destination */
	const uint16 *screen1 = (uint16 *)GFX_Screen_Get_ByIndex(srcScreenID) + top * SCREEN_WIDTH / 2;	/* source */
	uint16 *screen2 = (uint16 *)GFX_Screen_Get_ByIndex(SCREEN_0) + top * SCREEN_WIDTH / 2;	/* secondary destination : Video RAM*/
	uint16 count;

	for (count = height * SCREEN_WIDTH / 2; count > 0; count--) {
		if (*b != *screen1) {
			*b = *screen1;
			*screen2 = *screen1;
		}
		b++;
		screen1++;
		screen2++;
	}
}

static void GameCredits_Play(char *data, uint16 windowID, Screen spriteScreenID, Screen backScreenID, uint16 delay)
{
	uint16 i;
	uint16 stringCount = 0;
	uint32 timetoWait;
	uint16 spriteID = 514;
	bool textEnd = false;
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

	/* initialize */
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, SCREEN_0, spriteScreenID);
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, spriteScreenID, backScreenID);

	GameCredits_SwapScreen(g_curWidgetYBase, g_curWidgetHeight, spriteScreenID, SCREEN_3);

	GFX_Screen_SetActive(SCREEN_0);
	timetoWait = g_timerSleep;

	Input_History_Clear();

	while ((!textEnd || stage != 0) && (Input_Keyboard_NextKey() == 0)) {

		while (timetoWait > g_timerSleep) sleepIdle();

		timetoWait = g_timerSleep + delay;

		while ((g_curWidgetHeight / 6) + 2 > stringCount && *data != 0) {
			char *text;
			uint16 y;

			if (stringCount != 0) {
				/* below or next to the previous string */
				y = strings[stringCount - 1].y;
				if (strings[stringCount - 1].separator != 5) {
					y += strings[stringCount - 1].charHeight + strings[stringCount - 1].charHeight / 8;
				}
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

			switch(*text) {
			case 1:
				text++;
				Font_Select(g_fontNew6p);
				break;
			case 2:
				text++;
				Font_Select(g_fontNew8p);
				break;
			case 3:
			case 4:
				strings[stringCount].type = *text++;
				break;
			}

			strings[stringCount].charHeight = g_fontCurrent->height;

			switch (strings[stringCount].type) {
				case 3:		/* "xxx by:" text : on the left */
					strings[stringCount].x = 157 - Font_GetStringWidth(text);
					break;

				case 4:		/* names on the right */
					strings[stringCount].x = 161;
					break;

				default:	/* centered strings */
					strings[stringCount].x = 1 + (SCREEN_WIDTH - Font_GetStringWidth(text)) / 2;
					break;
			}

			strings[stringCount].y = y;
			strings[stringCount].text = text;

			stringCount++;
		}

		switch (stage) {
			case 0:	/* 0 : clear */
				GUI_ClearScreen(spriteScreenID);

				if (spriteID == 514) GUI_ClearScreen(backScreenID);

				stage++;
				counter = 2;
				break;

			case 1: case 4:	/* 1, 4 : Wait */
				if (counter == 0) {
					counter = 0;
					stage++;
				} else {
					counter--;
				}
				break;

			case 2:	/* 2 : display new picture */
				if (spriteID == 525) spriteID = 514;

				GUI_DrawSprite(spriteScreenID, g_sprites[spriteID], positions[spritePos].x, positions[spritePos].y, windowID, DRAWSPRITE_FLAG_WIDGETPOS);

				counter = 8;
				stage++;
				spriteID++;
				if (++spritePos > 5) spritePos = 0;
				break;

			case 3:	/* 3 : fade from black */
				if (counter < 8) GFX_SetPalette(g_palette1 + 256 * 3 * counter);

				if (counter-- == 0) {
					stage++;
					counter = 20;
				}
				break;

			case 5:	/* 5 : fade to black */
				if (counter > 0) GFX_SetPalette(g_palette1 + 256 * 3 * counter);

				if (counter++ >= 8) stage = 0;
				break;

			default: break;
		}

		/* copy sprite (image) to back buffer */
		GUI_Screen_Copy(g_curWidgetXBase, g_curWidgetYBase, g_curWidgetXBase, g_curWidgetYBase, g_curWidgetWidth, g_curWidgetHeight, spriteScreenID, backScreenID);

		/* draw all strings on back buffer and scroll them 1 pixel up */
		for (i = 0; i < stringCount; i++) {
			if ((int16)strings[i].y < g_curWidgetHeight) {
				GFX_Screen_SetActive(backScreenID);

				Font_Select(g_fontNew8p);

				if (strings[i].charHeight != g_fontCurrent->height) Font_Select(g_fontNew6p);

				GUI_DrawText(strings[i].text, strings[i].x, strings[i].y + g_curWidgetYBase, 255, 0);

				GFX_Screen_SetActive(SCREEN_0);
			}

			strings[i].y--;
		}

		/* display what we just draw on back buffer */
		GameCredits_SwapScreen(g_curWidgetYBase, g_curWidgetHeight, backScreenID, SCREEN_3);

		if ((int16)strings[0].y < -10) {
			/* remove 1st string and shift the other */
			strings[0].text += strlen(strings[0].text);
			*strings[0].text = strings[0].separator;
			stringCount--;
			memmove(&strings[0], &strings[1], stringCount * sizeof(*strings));
		}

		if ((g_curWidgetHeight / 6 + 2) > stringCount) {
			if (strings[stringCount - 1].y + strings[stringCount - 1].charHeight < g_curWidgetYBase + g_curWidgetHeight) textEnd = true;
		}
	}

	/* fade to black */
	GUI_SetPaletteAnimated(g_palette2, 120);

	GUI_ClearScreen(SCREEN_0);
	GUI_ClearScreen(spriteScreenID);
	GUI_ClearScreen(backScreenID);
}

static void GameCredits_LoadPalette(void)
{
	uint16 i;
	uint8 *p;

	if (g_palette1) Warning("g_palette1 already allocated\n");
	else g_palette1 = malloc(256 * 3 * 10);
	if (g_palette2) Warning("g_palette2 already allocated\n");
	else g_palette2 = calloc(1, 256 * 3);

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
	uint8 remap[256];
	char *credits_buffer;

	GUI_Mouse_Hide_Safe();

	Widget_SetCurrentWidget(20);

	Sprites_LoadImage("BIGPLAN.CPS", SCREEN_1, g_palette_998A);

	GUI_ClearScreen(SCREEN_0);

	GUI_Screen_Copy(g_curWidgetXBase, g_curWidgetYBase, g_curWidgetXBase, g_curWidgetYBase, g_curWidgetWidth, g_curWidgetHeight, SCREEN_1, SCREEN_0);

	GUI_SetPaletteAnimated(g_palette_998A, 60);

	Music_Play(0);

	GameLoop_Uninit();

	Music_Play(33);

	/*memory = GFX_Screen_Get_ByIndex(SCREEN_2);*/

	for (i = 0; i < 256; i++) {
		uint8 high, low;	/* high / low nibble */

		remap[i] = (uint8)i;

		high = i >> 4;
		low = i & 15;

		/* map colors 144-150 to the one of the player House */
		if (high == 9 && low <= 6) {
			remap[i] = ((g_playerHouseID + 9) << 4) + low;
			Debug("GameLoop_GameCredits() remap color %d to %d\n", i, remap[i]);
		}
	}

	Sprites_LoadImage("MAPPLAN.CPS", SCREEN_1, g_palette_998A);

	GUI_Palette_RemapScreen(g_curWidgetXBase << 3, g_curWidgetYBase, g_curWidgetWidth << 3, g_curWidgetHeight, SCREEN_1, remap);

	GUI_Screen_FadeIn2(g_curWidgetXBase << 3, g_curWidgetYBase, g_curWidgetWidth << 3, g_curWidgetHeight, SCREEN_1, SCREEN_0, 1, false);

	GameCredits_LoadPalette();

	credits_buffer = (char *)GFX_Screen_Get_ByIndex(SCREEN_3) + SCREEN_WIDTH * g_curWidgetHeight;
	Debug("GameLoop_GameCredits() credit buffer is %d lines in SCREEN_3 buffer\n", g_curWidgetHeight);

	GUI_Mouse_Hide_Safe();

	GUI_InitColors(colours, 0, lengthof(colours) - 1);

	g_fontCharOffset = -1;

	GFX_SetPalette(g_palette1);

	for (;; sleepIdle()) {
		File_ReadBlockFile(String_GenerateFilename("CREDITS"), credits_buffer, GFX_Screen_GetSize_ByIndex(SCREEN_3));

		GameCredits_Play(credits_buffer, 20, SCREEN_1, SCREEN_2, 6);

		if (Input_Keyboard_NextKey() != 0) break;

		Music_Play(33);
	}

	GUI_SetPaletteAnimated(g_palette2, 60);

	Driver_Music_FadeOut();

	GFX_ClearScreen(SCREEN_ACTIVE);
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

	GameLoop_PrepareAnimation(subtitle, 0xFFFF, soundEffect);

	Music_Play(sound);

	GameLoop_PlayAnimation(animation);

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
	GFX_ClearScreen(SCREEN_0);

	File_ReadBlockFile("WESTWOOD.PAL", g_palette_998A, 256 * 3);

	frame = 0;
	wsa = WSA_LoadFile("WESTWOOD.WSA", GFX_Screen_Get_ByIndex(SCREEN_1), GFX_Screen_GetSize_ByIndex(SCREEN_1) + GFX_Screen_GetSize_ByIndex(SCREEN_2) + GFX_Screen_GetSize_ByIndex(SCREEN_3), true);
	WSA_DisplayFrame(wsa, frame++, 0, 0, SCREEN_0);

	GUI_SetPaletteAnimated(g_palette_998A, 60);

	Music_Play(0x24);

	g_timerTimeout = 360;

	while (WSA_DisplayFrame(wsa, frame++, 0, 0, SCREEN_0)) Timer_Sleep(6);
	
	WSA_Unload(wsa);

	if (Input_Keyboard_NextKey() != 0 && g_canSkipIntro) goto logos_exit;
	Voice_LoadVoices(0xFFFF);

	for (; g_timerTimeout != 0; sleepIdle()) {
		if (Input_Keyboard_NextKey() != 0 && g_canSkipIntro) goto logos_exit;
	}

	GUI_SetPaletteAnimated(g_palette2, 60);

	while (Driver_Music_IsPlaying()) sleepIdle();

	GUI_SetPaletteAnimated(g_palette2, 60);

	GFX_ClearScreen(SCREEN_ACTIVE);

	if (File_Exists("AND.CPS")) Sprites_LoadImage("AND.CPS", SCREEN_1, g_palette_998A);
	else Sprites_LoadImage(String_GenerateFilename("AND"), SCREEN_1, g_palette_998A);

	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, SCREEN_1, SCREEN_0);

	GUI_SetPaletteAnimated(g_palette_998A, 30);

	for (g_timerTimeout = 60; g_timerTimeout != 0; sleepIdle()) {
		if (Input_Keyboard_NextKey() != 0 && g_canSkipIntro) goto logos_exit;
	}

	GUI_SetPaletteAnimated(g_palette2, 30);

	GUI_ClearScreen(SCREEN_0);

	Sprites_LoadImage("VIRGIN.CPS", SCREEN_1, g_palette_998A);

	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, SCREEN_1, SCREEN_0);

	GUI_SetPaletteAnimated(g_palette_998A, 30);

	for (g_timerTimeout = 180; g_timerTimeout != 0; sleepIdle()) {
		if (Input_Keyboard_NextKey() != 0 && g_canSkipIntro) goto logos_exit;
	}

logos_exit:
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

		/* 0x4A = 74 = Intro feedback base index */
		GameLoop_PrepareAnimation(subtitle, 0x4A, soundEffect);

		GameLoop_PlayAnimation(animation);

		Driver_Music_FadeOut();

		GameLoop_FinishAnimation();
	}

	GUI_ChangeSelectionType(SELECTIONTYPE_MENTAT);
}
