/* $Id$ */

/** @file src/opendune.c Gameloop and other main routines. */

#if defined(_WIN32)
	#if defined(_MSC_VER)
		#define _CRTDBG_MAP_ALLOC
		#include <stdlib.h>
		#include <crtdbg.h>
	#endif /* _MSC_VER */
	#include <io.h>
	#include <windows.h>
#endif /* _WIN32 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "types.h"
#include "os/common.h"
#include "os/error.h"
#include "os/math.h"
#include "os/strings.h"
#include "os/sleep.h"

#include "opendune.h"

#include "animation.h"
#include "audio/driver.h"
#include "audio/sound.h"
#include "config.h"
#include "crashlog/crashlog.h"
#include "explosion.h"
#include "file.h"
#include "gfx.h"
#include "gui/font.h"
#include "gui/gui.h"
#include "gui/mentat.h"
#include "gui/security.h"
#include "gui/widget.h"
#include "house.h"
#include "ini.h"
#include "input/input.h"
#include "input/mouse.h"
#include "map.h"
#include "pool/pool.h"
#include "pool/house.h"
#include "pool/unit.h"
#include "pool/structure.h"
#include "pool/team.h"
#include "scenario.h"
#include "sprites.h"
#include "string.h"
#include "structure.h"
#include "table/strings.h"
#include "team.h"
#include "tile.h"
#include "timer.h"
#include "tools.h"
#include "unit.h"
#include "video/video.h"
#include "wsa.h"


char *window_caption = "OpenDUNE - Pre v0.8";

bool g_dune2_enhanced = true; /*!< If false, the game acts exactly like the original Dune2, including bugs. */

uint32 g_hintsShown1 = 0;          /*!< A bit-array to indicate which hints has been show already (0-31). */
uint32 g_hintsShown2 = 0;          /*!< A bit-array to indicate which hints has been show already (32-63). */
GameMode g_gameMode = GM_NORMAL;
uint16 g_campaignID = 0;
uint16 g_scenarioID = 1;
uint16 g_activeAction = 0xFFFF;      /*!< Action the controlled unit will do. */
uint32 g_tickScenarioStart = 0;      /*!< The tick the scenario started in. */
static uint32 s_tickGameTimeout = 0; /*!< The tick the game will timeout. */

bool   g_debugGame = false;        /*!< When true, you can control the AI. */
bool   g_debugScenario = false;    /*!< When true, you can review the scenario. There is no fog. The game is not running (no unit-movement, no structure-building, etc). You can click on individual tiles. */
bool   g_debugSkipDialogs = false; /*!< When non-zero, you immediately go to house selection, and skip all intros. */

void *g_readBuffer = NULL;
uint32 g_readBufferSize = 0;

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

static bool  s_debugForceWin = false; /*!< When true, you immediately win the level. */

static void *s_buffer_182E = NULL;
static void *s_buffer_1832 = NULL;

static uint16 s_var_8052 = 0;

static uint8 s_enableLog = 0; /*!< 0 = off, 1 = record game, 2 = playback game (stored in 'dune.log'). */
static bool s_var_37B4;

uint16 g_var_38BC = 0;
bool g_var_38F8 = true;
uint16 g_selectionType = 0;
uint16 g_selectionTypeNew = 0;
bool g_viewport_forceRedraw = false;
bool g_var_3A14 = false;

int16 g_musicInBattle = 0; /*!< 0 = no battle, 1 = fight is going on, -1 = music of fight is going on is active. */

/**
 * Check if a level is finished, based on the values in WinFlags.
 *
 * @return True if and only if the level has come to an end.
 */
static bool GameLoop_IsLevelFinished()
{
	bool finish = false;

	if (s_debugForceWin) return true;

	/* You have to play at least 7200 ticks before you can win the game */
	if (g_timerGame - g_tickScenarioStart < 7200) return false;

	/* Check for structure counts hitting zero */
	if ((g_scenario.winFlags & 0x3) != 0) {
		PoolFindStruct find;
		uint16 countStructureEnemy = 0;
		uint16 countStructureFriendly = 0;

		find.houseID = HOUSE_INVALID;
		find.type    = 0xFFFF;
		find.index   = 0xFFFF;

		/* Calculate how many structures are left on the map */
		while (true) {
			Structure *s;

			s = Structure_Find(&find);
			if (s == NULL) break;

			if (s->o.type == STRUCTURE_TURRET) continue;
			if (s->o.type == STRUCTURE_ROCKET_TURRET) continue;

			if (s->o.houseID == g_playerHouseID) {
				countStructureFriendly++;
			} else {
				countStructureEnemy++;
			}
		}

		if ((g_scenario.winFlags & 0x1) != 0 && countStructureEnemy == 0) {
			finish = true;
		}
		if ((g_scenario.winFlags & 0x2) != 0 && countStructureFriendly == 0) {
			finish = true;
		}
	}

	/* Check for reaching spice quota */
	if ((g_scenario.winFlags & 0x4) != 0 && g_playerCredits != 0xFFFF) {
		if (g_playerCredits >= g_playerHouse->creditsQuota) {
			finish = true;
		}
	}

	/* Check for reaching timeout */
	if ((g_scenario.winFlags & 0x8) != 0) {
		/* XXX -- This code was with '<' instead of '>=', which makes
		 *  no sense. As it is unused, who knows what the intentions
		 *  were. This at least makes it sensible. */
		if (g_timerGame >= s_tickGameTimeout) {
			finish = true;
		}
	}

	return finish;
}

/**
 * Check if a level is won, based on the values in LoseFlags.
 *
 * @return True if and only if the level has been won by the human.
 */
static bool GameLoop_IsLevelWon()
{
	bool win = false;

	if (s_debugForceWin) return true;

	/* Check for structure counts hitting zero */
	if ((g_scenario.loseFlags & 0x3) != 0) {
		PoolFindStruct find;
		uint16 countStructureEnemy = 0;
		uint16 countStructureFriendly = 0;

		find.houseID = HOUSE_INVALID;
		find.type    = 0xFFFF;
		find.index   = 0xFFFF;

		/* Calculate how many structures are left on the map */
		while (true) {
			Structure *s;

			s = Structure_Find(&find);
			if (s == NULL) break;

			if (s->o.type == STRUCTURE_WALL) continue;
			if (s->o.type == STRUCTURE_TURRET) continue;
			if (s->o.type == STRUCTURE_ROCKET_TURRET) continue;

			if (s->o.houseID == g_playerHouseID) {
				countStructureFriendly++;
			} else {
				countStructureEnemy++;
			}
		}

		win = true;
		if ((g_scenario.loseFlags & 0x1) != 0) {
			win = win && (countStructureEnemy == 0);
		}
		if ((g_scenario.loseFlags & 0x2) != 0) {
			win = win && (countStructureFriendly != 0);
		}
	}

	/* Check for reaching spice quota */
	if (!win && (g_scenario.loseFlags & 0x4) != 0 && g_playerCredits != 0xFFFF) {
		win = (g_playerCredits >= g_playerHouse->creditsQuota);
	}

	/* Check for reaching timeout */
	if (!win && (g_scenario.loseFlags & 0x8) != 0) {
		win = (g_timerGame < s_tickGameTimeout);
	}

	return win;
}

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

	GFX_Screen_SetActive(0);

	memcpy(s_palettePartTarget, &g_palette1[(144 + s_houseAnimation_subtitle->colour * 16) * 3], 6 * 3);

	memset(&g_palette1[215 * 3], 0, 6 * 3);

	memcpy(s_palettePartCurrent, s_palettePartTarget, 6 * 3);

	memset(s_palettePartChange, 0, 6 * 3);


	colors[0] = 0;
	for (i = 0; i < 6; i++) colors[i + 1] = 215 + i;

	GUI_InitColors(colors, 0, 15);
}

/**
 * Clears the given memory block.
 * @param index The memory block.
 */
static void Memory_ClearBlock(uint16 index)
{
	memset(GFX_Screen_Get_ByIndex(index), 0, GFX_Screen_GetSize_ByIndex(index));
}

static void GameLoop_FinishAnimation()
{
	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x1);
	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x2);

	GUI_SetPaletteAnimated(g_palette2, 60);

	GUI_ClearScreen(0);

	Input_History_Clear();

	Memory_ClearBlock(7);
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
			uint8 i;

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
			GameLoop_DrawText(String_GetFromBuffer_ByIndex(g_stringsIntro, subtitle->stringID), subtitle->top);
		}
	} else {
		if (subtitle->stringID != 0) {
			GameLoop_DrawText(String_GetFromBuffer_ByIndex(g_stringsIntro, subtitle->stringID), subtitle->top);
		}
	}

	s_palettePartDirection = PPD_TO_NEW_PALETTE;

	if (subtitle->paletteFadein != 0) {
		uint8 i;

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

static void GameLoop_PlayAnimation()
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
				GUI_ClearScreen(3);

				wsa = GFX_Screen_Get_ByIndex(5);

				loc24 = GFX_Screen_GetSize_ByIndex(5) + GFX_Screen_GetSize_ByIndex(6);
				loc20 = false;
			} else {
				wsa = GFX_Screen_Get_ByIndex(3);

				loc24 = GFX_Screen_GetSize_ByIndex(3) + GFX_Screen_GetSize_ByIndex(5) + GFX_Screen_GetSize_ByIndex(6);
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
			WSA_DisplayFrame(wsa, frame++, posX, posY, 0);
			GameLoop_PalettePart_Update(true);

			memcpy(&g_palette1[215 * 3], s_palettePartCurrent, 18);

			GUI_SetPaletteAnimated(g_palette1, 45);

			locdi++;
		} else {
			if ((animation->flags & 0x480) != 0) {
				GameLoop_PlaySubtitle(animationMode);
				WSA_DisplayFrame(wsa, frame++, posX, posY, 2);
				locdi++;

				if ((animation->flags & 0x480) == 0x80) {
					GUI_Screen_FadeIn2(8, 24, 304, 120, 2, 0, 1, false);
				} else if ((animation->flags & 0x480) == 0x400) {
					GUI_Screen_FadeIn(1, 24, 1, 24, 38, 120, 2, 0);
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
			WSA_DisplayFrame(wsa, frame++, posX, posY, 0);

			if (mode == 1 && frame == loc04) {
				frame = 0;
			} else {
				if (mode == 3) frame--;
			}

			if (Input_Keyboard_NextKey() != 0 && s_var_37B4) {
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
				displayed = WSA_DisplayFrame(wsa, frame++, posX, posY, 0);
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

static void GameLoop_LevelEndAnimation()
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

static void GameLoop_Uninit()
{
	while (g_widgetLinkedListHead != NULL) {
		Widget *w = g_widgetLinkedListHead;
		g_widgetLinkedListHead = w->next;

		free(w);
	}

	Script_ClearInfo(g_scriptStructure);
	Script_ClearInfo(g_scriptTeam);

	free(g_readBuffer); g_readBuffer = NULL;

	free(g_palette1); g_palette1 = NULL;
	free(g_palette2); g_palette2 = NULL;
	free(g_paletteMapping1); g_paletteMapping1 = NULL;
	free(g_paletteMapping2); g_paletteMapping2 = NULL;

	String_Uninit();
}

static void GameCredits_SwapScreen(uint16 top, uint16 height, uint16 screenID, void *buffer)
{
	uint16 *b = (uint16 *)buffer;
	uint16 *screen1 = (uint16 *)GFX_Screen_Get_ByIndex(screenID) + top * SCREEN_WIDTH / 2;
	uint16 *screen2 = (uint16 *)GFX_Screen_Get_ByIndex(0) + top * SCREEN_WIDTH / 2;
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

static void GameCredits_Play(char *data, uint16 windowID, uint16 memory, uint16 screenID, uint16 delay)
{
	uint16 loc02;
	uint16 stringCount = 0;
	uint32 loc0C;
	uint16 spriteID = 0;
	bool loc10 = false;
	uint8 *sprite;
	uint16 spriteX;
	uint16 spriteY;
	uint16 spritePos = 0;
	struct {
		uint16 x;
		uint16 y;
		char *text;
		uint8  separator;
		uint8  charHeight;
		uint8  type;
	} strings[33];
	struct {
		uint16 x;
		uint16 y;
	} positions[6];
	uint16 stage = 0;
	uint16 counter = 0;

	Widget_SetCurrentWidget(windowID);

	sprite = Sprites_GetSprite(g_sprites[spriteID], 0);
	spriteX = (g_curWidgetWidth << 3) - Sprite_GetWidth(sprite);
	spriteY = g_curWidgetHeight - Sprite_GetHeight(sprite);

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

	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, 0, memory);
	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, memory, screenID);

	GameCredits_SwapScreen(g_curWidgetYBase, g_curWidgetHeight, memory, s_buffer_182E);

	GFX_Screen_SetActive(0);
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

			strings[stringCount].charHeight = g_var_6C71;

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

				if (spriteID == 0) GUI_ClearScreen(screenID);

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
				if (g_sprites[spriteID] == NULL) spriteID = 0;
				sprite = Sprites_GetSprite(g_sprites[spriteID], 0);

				GUI_DrawSprite(memory, sprite, positions[spritePos].x, positions[spritePos].y, windowID, 0x4000);

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

				if (strings[loc02].charHeight != g_var_6C71) Font_Select(g_fontNew6p);

				GUI_DrawText(strings[loc02].text, strings[loc02].x, strings[loc02].y + g_curWidgetYBase, 255, 0);

				GFX_Screen_SetActive(0);
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

	GUI_ClearScreen(0);
	GUI_ClearScreen(memory);
	GUI_ClearScreen(screenID);
}

static void GameCredits_LoadPaletteAndSprites()
{
	uint16 i;
	uint8 *p;

	s_buffer_182E = GFX_Screen_Get_ByIndex(7);
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

	for (i = 0; i < 11; i++) {
		char filenameBuffer[16];

		snprintf(filenameBuffer, sizeof(filenameBuffer), "CREDIT%d.SHP", i + 1);
		g_sprites[i] = File_ReadWholeFile(filenameBuffer);
	}

	g_sprites[i] = NULL;
}

static void GameCredits_UnloadSprites()
{
	uint8 **sprite;

	for (sprite = g_sprites; *sprite != NULL; sprite++) {
		free(*sprite);
		*sprite = NULL;
	}
}

/**
 * Shows the game credits.
 */
static void GameLoop_GameCredits()
{
	static const uint8 colours[] = {0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	uint16 i;
	uint8 *memory;

	GUI_Mouse_Hide_Safe();

	Widget_SetCurrentWidget(20);

	Sprites_LoadImage("BIGPLAN.CPS", 3, g_palette_998A);

	GUI_ClearScreen(0);

	GUI_Screen_Copy(g_curWidgetXBase, g_curWidgetYBase, g_curWidgetXBase, g_curWidgetYBase, g_curWidgetWidth, g_curWidgetHeight, 2, 0);

	GUI_SetPaletteAnimated(g_palette_998A, 60);

	Music_Play(0);

	GameLoop_Uninit();

	Music_Play(33);

	memory = GFX_Screen_Get_ByIndex(5);

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

	Sprites_LoadImage("MAPPLAN.CPS", 3, g_palette_998A);

	GUI_Palette_RemapScreen(g_curWidgetXBase << 3, g_curWidgetYBase, g_curWidgetWidth << 3, g_curWidgetHeight, 2, memory);

	GUI_Screen_FadeIn2(g_curWidgetXBase << 3, g_curWidgetYBase, g_curWidgetWidth << 3, g_curWidgetHeight, 2, 0, 1, false);

	GameCredits_LoadPaletteAndSprites();

	GUI_Mouse_Hide_Safe();

	GUI_InitColors(colours, 0, lengthof(colours) - 1);

	g_fontCharOffset = -1;

	GFX_SetPalette(g_palette1);

	while (true) {
		File_ReadBlockFile(String_GenerateFilename("CREDITS"), s_buffer_1832, GFX_Screen_GetSize_ByIndex(6));

		GameCredits_Play(s_buffer_1832, 20, 2, 4, 6);

		if (Input_Keyboard_NextKey() != 0) break;

		Music_Play(33);
		sleepIdle();
	}

	GUI_SetPaletteAnimated(g_palette2, 60);

	Driver_Music_FadeOut();

	GFX_ClearScreen();

	GameCredits_UnloadSprites();
}

/**
 * Shows the end game "movie"
 */
static void GameLoop_GameEndAnimation()
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
 * Checks if the level comes to an end. If so, it shows all end-level stuff,
 *  and prepares for the next level.
 */
static void GameLoop_LevelEnd()
{
	static uint32 levelEndTimer = 0;

	if (levelEndTimer >= g_timerGame && !s_debugForceWin) return;

	if (GameLoop_IsLevelFinished()) {
		Music_Play(0);

		g_cursorSpriteID = 0;

		Sprites_SetMouseSprite(0, 0, g_sprites[0]);

		Sound_Output_Feedback(0xFFFE);

		GUI_ChangeSelectionType(SELECTIONTYPE_MENTAT);

		if (GameLoop_IsLevelWon()) {
			Sound_Output_Feedback(40);

			GUI_DisplayModalMessage(String_Get_ByIndex(STR_YOU_HAVE_SUCCESSFULLY_COMPLETED_YOUR_MISSION), 0xFFFF);

			GUI_Mentat_ShowWin();

			Sprites_UnloadTiles();

			g_campaignID++;

			GUI_EndStats_Show(g_scenario.killedAllied, g_scenario.killedEnemy, g_scenario.destroyedAllied, g_scenario.destroyedEnemy, g_scenario.harvestedAllied, g_scenario.harvestedEnemy, g_scenario.score, g_playerHouseID);

			if (g_campaignID == 9) {
				GUI_Mouse_Hide_Safe();

				GUI_SetPaletteAnimated(g_palette2, 15);
				GUI_ClearScreen(0);
				GameLoop_GameEndAnimation();
				PrepareEnd();
				exit(0);
			}

			GUI_Mouse_Hide_Safe();
			GameLoop_LevelEndAnimation();
			GUI_Mouse_Show_Safe();

			File_ReadBlockFile("IBM.PAL", g_palette1, 256 * 3);

			g_scenarioID = GUI_StrategicMap_Show(g_campaignID, true);

			GUI_SetPaletteAnimated(g_palette2, 15);

			if (g_campaignID == 1 || g_campaignID == 7) {
				Sprites_Load(1, g_sprites);

				if (!GUI_Security_Show()) {
					PrepareEnd();
					exit(0);
				}

				Sprites_Load(0, g_sprites);
			}
		} else {
			Sound_Output_Feedback(41);

			GUI_DisplayModalMessage(String_Get_ByIndex(STR_YOU_HAVE_FAILED_YOUR_MISSION), 0xFFFF);

			GUI_Mentat_ShowLose();

			Sprites_UnloadTiles();

			g_scenarioID = GUI_StrategicMap_Show(g_campaignID, false);
		}

		g_playerHouse->flags.doneFullScaleAttack = false;

		Sprites_Load(0, g_sprites);

		Sprites_LoadTiles();

		g_gameMode = GM_RESTART;
		s_debugForceWin = false;
	}

	levelEndTimer = g_timerGame + 300;
}

/**
 * Logos at begin of intro.
 */
static void Gameloop_Logos()
{
	uint16 oldScreenID;
	void *wsa;
	uint16 frame;

	oldScreenID = GFX_Screen_SetActive(0);

	GFX_SetPalette(g_palette2);
	GFX_ClearScreen();

	File_ReadBlockFile("WESTWOOD.PAL", g_palette_998A, 256 * 3);

	frame = 0;
	wsa = WSA_LoadFile("WESTWOOD.WSA", GFX_Screen_Get_ByIndex(3), GFX_Screen_GetSize_ByIndex(3) + GFX_Screen_GetSize_ByIndex(5) + GFX_Screen_GetSize_ByIndex(6), true);
	WSA_DisplayFrame(wsa, frame++, 0, 0, 0);

	GUI_SetPaletteAnimated(g_palette_998A, 60);

	Music_Play(0x24);

	g_timerTimeout = 360;

	while (true) {
		uint32 loc04;
		bool displayed;

		displayed = WSA_DisplayFrame(wsa, frame++, 0, 0, 0);
		if (!displayed) break;

		loc04 = g_timerGUI + 6;
		while (loc04 > g_timerGUI) sleepIdle();
	}

	WSA_Unload(wsa);

	if (!s_var_37B4) {
		Voice_LoadVoices(0xFFFF);
	} else {
		if (Input_Keyboard_NextKey() == 0 && s_var_37B4) {
			Voice_LoadVoices(0xFFFF);
		}
	}

	while (g_timerTimeout != 0) {
		if (Input_Keyboard_NextKey() == 0 || !s_var_37B4) {
			sleepIdle();
			continue;
		}

		GUI_SetPaletteAnimated(g_palette2, 30);

		GUI_ClearScreen(0);

		GFX_Screen_SetActive(oldScreenID);
		return;
	}

	GUI_SetPaletteAnimated(g_palette2, 60);

	while (Driver_Music_IsPlaying()) sleepIdle();

	while (g_timerTimeout != 0) {
		if (Input_Keyboard_NextKey() == 0 || !s_var_37B4) {
			sleepIdle();
			continue;
		}

		GUI_SetPaletteAnimated(g_palette2, 30);

		GUI_ClearScreen(0);

		GFX_Screen_SetActive(oldScreenID);
		return;
	}

	GUI_SetPaletteAnimated(g_palette2, 60);

	GFX_ClearScreen();

	Sprites_LoadImage(String_GenerateFilename("AND"), 2, g_palette_998A);

	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, 2, 0);

	GUI_SetPaletteAnimated(g_palette_998A, 30);

	g_timerTimeout = 60;
	while (g_timerTimeout != 0) {
		if (Input_Keyboard_NextKey() == 0 || !s_var_37B4) {
			sleepIdle();
			continue;
		}

		GUI_SetPaletteAnimated(g_palette2, 30);

		GUI_ClearScreen(0);

		GFX_Screen_SetActive(oldScreenID);
		return;
	}

	GUI_SetPaletteAnimated(g_palette2, 30);

	GUI_ClearScreen(0);

	Sprites_LoadImage("VIRGIN.CPS", 2, g_palette_998A);

	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, 2, 0);

	GUI_SetPaletteAnimated(g_palette_998A, 30);

	g_timerTimeout = 180;
	while (g_timerTimeout != 0) {
		if (Input_Keyboard_NextKey() == 0 || !s_var_37B4) {
			sleepIdle();
			continue;
		}

		break;
	}

	GUI_SetPaletteAnimated(g_palette2, 30);

	GUI_ClearScreen(0);

	GFX_Screen_SetActive(oldScreenID);
}

/**
 * The Intro.
 */
static void GameLoop_GameIntroAnimation()
{
	GUI_ChangeSelectionType(SELECTIONTYPE_INTRO);

	Gameloop_Logos();

	if (Input_Keyboard_NextKey() == 0 || !s_var_37B4) {
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

static uint16 GameLoop_B4E6_0000(uint16 arg06, uint32 arg08, uint16 arg0C)
{
	uint16 i = 0;

	if (arg08 == 0xFFFFFFFF) return arg06;

	while (arg06 != 0) {
		if ((arg08 & (1 << (arg0C + i))) != 0) arg06--;
		i++;
	}

	while (true) {
		if ((arg08 & (1 << (arg0C + i))) != 0) break;
		i++;
	}

	return i;
}

static void GameLoop_B4E6_0108(uint16 arg06, char **strings, uint32 arg0C, uint16 arg10, uint16 arg12)
{
	WidgetProperties *props;
	uint16 left;
	uint16 old;
	uint16 top;
	uint8 i;

	props = &g_widgetProperties[21 + arg06];
	top = g_curWidgetYBase + props->yBase;
	left = (g_curWidgetXBase + props->xBase) << 3;

	old = GameLoop_B4E6_0000(props->fgColourBlink, arg0C, arg10);

	GUI_Mouse_Hide_Safe();

	for (i = 0; i < props->height; i++) {
		uint16 index = GameLoop_B4E6_0000(i, arg0C, arg10);
		uint16 pos = top + ((g_var_6C71 + arg12) * i);

		if (index == old) {
			GUI_DrawText_Wrapper(strings[index], left, pos, props->fgColourSelected, 0, 0x22);
		} else {
			GUI_DrawText_Wrapper(strings[index], left, pos, props->fgColourNormal, 0, 0x22);
		}
	}

	s_var_8052 = arg12;

	GUI_Mouse_Show_Safe();

	Input_History_Clear();
}

static void GameLoop_DrawText2(char *string, uint16 left, uint16 top, uint8 fgColourNormal, uint8 fgColourSelected, uint8 bgColour)
{
	uint8 i;

	for (i = 0; i < 3; i++) {
		GUI_Mouse_Hide_Safe();

		GUI_DrawText_Wrapper(string, left, top, fgColourSelected, bgColour, 0x22);
		Timer_Sleep(2);

		GUI_DrawText_Wrapper(string, left, top, fgColourNormal, bgColour, 0x22);
		GUI_Mouse_Show_Safe();
		Timer_Sleep(2);
	}
}

static bool GameLoop_IsInRange(uint16 x, uint16 y, uint16 minX, uint16 minY, uint16 maxX, uint16 maxY)
{
	return x >= minX && x <= maxX && y >= minY && y <= maxY;
}

static uint16 GameLoop_HandleEvents(uint16 arg06, char **strings, uint32 arg10, uint16 arg14)
{
	uint8 last;
	uint16 result;
	uint16 key;
	uint16 top;
	uint16 left;
	uint16 minX;
	uint16 maxX;
	uint16 minY;
	uint16 maxY;
	uint16 lineHeight;
	uint8 fgColourNormal;
	uint8 fgColourSelected;
	uint8 old;
	WidgetProperties *props;
	uint8 current;

	props = &g_widgetProperties[21 + arg06];

	last = props->height - 1;
	old = props->fgColourBlink % (last + 1);
	current = old;

	result = 0xFFFF;

	top = g_curWidgetYBase + props->yBase;
	left = (g_curWidgetXBase + props->xBase) << 3;

	lineHeight = g_var_6C71 + s_var_8052;

	minX = (g_curWidgetXBase << 3) + (g_var_6C70 * props->xBase);
	minY = g_curWidgetYBase + props->yBase - s_var_8052 / 2;
	maxX = minX + (g_var_6C70 * props->width) - 1;
	maxY = minY + (props->height * lineHeight) - 1;

	fgColourNormal = props->fgColourNormal;
	fgColourSelected = props->fgColourSelected;

	key = 0;
	if (Input_IsInputAvailable() != 0) {
		key = Input_Wait() & 0x8FF;
	}

	if (g_var_7097 == 0) {
		uint16 y = g_mouseY;

		if (GameLoop_IsInRange(g_mouseX, y, minX, minY, maxX, maxY)) {
			current = (y - minY) / lineHeight;
		}
	}

	switch (key) {
		case 0x60: /* NUMPAD 8 / ARROW UP */
			if (current-- == 0) current = last;
			break;

		case 0x62: /* NUMPAD 2 / ARROW DOWN */
			if (current++ == last) current = 0;
			break;

		case 0x5B: /* NUMPAD 7 / HOME */
		case 0x65: /* NUMPAD 9 / PAGE UP */
			current = 0;
			break;

		case 0x5D: /* NUMPAD 1 / END */
		case 0x67: /* NUMPAD 3 / PAGE DOWN */
			current = last;
			break;

		case 0x41: /* MOUSE LEFT BUTTON */
		case 0x42: /* MOUSE RIGHT BUTTON */
			if (GameLoop_IsInRange(g_mouseClickX, g_mouseClickY, minX, minY, maxX, maxY)) {
				current = (g_mouseClickY - minY) / lineHeight;
				result = current;
			}
			break;

		case 0x2B: /* NUMPAD 5 / RETURN */
		case 0x3D: /* SPACE */
		case 0x61:
			result = current;
			break;

		default: {
			uint8 i;

			for (i = 0; i < props->height; i++) {
				char c1;
				char c2;

				c1 = toupper(*strings[GameLoop_B4E6_0000(i, arg10, arg14)]);
				c2 = toupper(Input_Keyboard_HandleKeys(key & 0xFF));

				if (c1 == c2) {
					result = i;
					current = i;
					break;
				}
			}
		} break;
	}

	if (current != old) {
		uint16 index;

		GUI_Mouse_Hide_Safe();

		index = GameLoop_B4E6_0000(old, arg10, arg14);

		GUI_DrawText_Wrapper(strings[index], left, top + (old * lineHeight), fgColourNormal, 0, 0x22);

		index = GameLoop_B4E6_0000(current, arg10, arg14);

		GUI_DrawText_Wrapper(strings[index], left, top + (current * lineHeight), fgColourSelected, 0, 0x22);

		GUI_Mouse_Show_Safe();
	}

	props->fgColourBlink = current;

	if (result == 0xFFFF) return 0xFFFF;

	result = GameLoop_B4E6_0000(result, arg10, arg14);

	GUI_Mouse_Hide_Safe();
	GameLoop_DrawText2(strings[result], left, top + (current * lineHeight), fgColourNormal, fgColourSelected, 0);
	GUI_Mouse_Show_Safe();

	return result;
}

static void Window_WidgetClick_Create()
{
	WidgetInfo *wi;

	for (wi = g_table_gameWidgetInfo; wi->index >= 0; wi++) {
		Widget *w;

		w = GUI_Widget_Allocate(wi->index, wi->shortcut, wi->offsetX, wi->offsetY, wi->spriteID, wi->stringID);

		if (wi->spriteID < 0) {
			w->width  = wi->width;
			w->height = wi->height;
		}

		w->clickProc = wi->clickProc;
		w->flags.all = wi->flags;

		g_widgetLinkedListHead = GUI_Widget_Insert(g_widgetLinkedListHead, w);
	}
}

static void ReadProfileIni(char *filename)
{
	char *source;
	char *key;
	char *keys;
	char buffer[120];
	uint16 locsi;

	if (filename == NULL) return;
	if (!File_Exists(filename)) return;

	source = GFX_Screen_Get_ByIndex(3);

	memset(source, 0, 32000);
	File_ReadBlockFile(filename, source, GFX_Screen_GetSize_ByIndex(3));

	keys = source + strlen(source) + 5000;
	*keys = '\0';

	Ini_GetString("construct", NULL, keys, keys, 2000, source);

	for (key = keys; *key != '\0'; key += strlen(key) + 1) {
		ObjectInfo *oi = NULL;
		uint16 count;
		uint8 type;
		uint16 buildCredits;
		uint16 buildTime;
		uint16 fogUncoverRadius;
		uint16 availableCampaign;
		uint16 sortPriority;
		uint16 priorityBuild;
		uint16 priorityTarget;
		uint16 hitpoints;

		type = Unit_StringToType(key);
		if (type != UNIT_INVALID) {
			oi = &g_table_unitInfo[type].o;
		} else {
			type = Structure_StringToType(key);
			if (type != STRUCTURE_INVALID) oi = &g_table_structureInfo[type].o;
		}

		if (oi == NULL) continue;

		Ini_GetString("construct", key, buffer, buffer, 120, source);
		count = sscanf(buffer, "%hu,%hu,%hu,%hu,%hu,%hu,%hu,%hu", &buildCredits, &buildTime, &hitpoints, &fogUncoverRadius, &availableCampaign, &priorityBuild, &priorityTarget, &sortPriority);
		oi->buildCredits      = buildCredits;
		oi->buildTime         = buildTime;
		oi->hitpoints         = hitpoints;
		oi->fogUncoverRadius  = fogUncoverRadius;
		oi->availableCampaign = availableCampaign;
		oi->priorityBuild     = priorityBuild;
		oi->priorityTarget    = priorityTarget;
		if (count <= 7) continue;
		oi->sortPriority = (uint8)sortPriority;
	}

	if (g_debugGame) {
		for (locsi = 0; locsi < UNIT_MAX; locsi++) {
			ObjectInfo *oi = &g_table_unitInfo[locsi].o;

			sprintf(buffer, "%*s%4d,%4d,%4d,%4d,%4d,%4d,%4d,%4d",
				15 - (int)strlen(oi->name), "", oi->buildCredits, oi->buildTime, oi->hitpoints, oi->fogUncoverRadius,
				oi->availableCampaign, oi->priorityBuild, oi->priorityTarget, oi->sortPriority);

			Ini_SetString("construct", oi->name, buffer, source);
		}

		for (locsi = 0; locsi < STRUCTURE_MAX; locsi++) {
			ObjectInfo *oi = &g_table_unitInfo[locsi].o;

			sprintf(buffer, "%*s%4d,%4d,%4d,%4d,%4d,%4d,%4d,%4d",
				15 - (int)strlen(oi->name), "", oi->buildCredits, oi->buildTime, oi->hitpoints, oi->fogUncoverRadius,
				oi->availableCampaign, oi->priorityBuild, oi->priorityTarget, oi->sortPriority);

			Ini_SetString("construct", oi->name, buffer, source);
		}
	}

	*keys = '\0';

	Ini_GetString("combat", NULL, keys, keys, 2000, source);

	for (key = keys; *key != '\0'; key += strlen(key) + 1) {
		uint16 damage;
		uint16 movingSpeed;
		uint16 fireDelay;
		uint16 fireDistance;

		Ini_GetString("combat", key, buffer, buffer, 120, source);
		String_Trim(buffer);
		if (sscanf(buffer, "%hu,%hu,%hu,%hu", &fireDistance, &damage, &fireDelay, &movingSpeed) < 4) continue;

		for (locsi = 0; locsi < UNIT_MAX; locsi++) {
			UnitInfo *ui = &g_table_unitInfo[locsi];

			if (strcasecmp(ui->o.name, key) != 0) continue;

			ui->damage       = damage;
			ui->movingSpeed  = movingSpeed;
			ui->fireDelay    = fireDelay;
			ui->fireDistance = fireDistance;
			break;
		}
	}

	if (!g_debugGame) return;

	for (locsi = 0; locsi < UNIT_MAX; locsi++) {
		const UnitInfo *ui = &g_table_unitInfo[locsi];

		sprintf(buffer, "%*s%4d,%4d,%4d,%4d", 15 - (int)strlen(ui->o.name), "", ui->fireDistance, ui->damage, ui->fireDelay, ui->movingSpeed);
		Ini_SetString("combat", ui->o.name, buffer, source);
	}
}

/**
 * Intro menu.
 */
static void GameLoop_GameIntroAnimationMenu()
{
	static const uint16 mainMenuStrings[][6] = {
		{0x001B, 0x001C, 0x001D, 0x0000, 0x0000, 0x0000}, /* Neither HOF nor save. */
		{0x001B, 0x001C, 0x005C, 0x001D, 0x0000, 0x0000}, /* Has a save game. */
		{0x001B, 0x001C, 0x001D, 0x014E, 0x0000, 0x0000}, /* Has a HOF. */
		{0x001B, 0x001C, 0x005C, 0x001D, 0x014E, 0x0000}  /* Has a HOF and a save game. */
	};

	bool loc02 = false;
	bool loc06;

	Input_Flags_ClearBits(INPUT_FLAG_KEY_RELEASE | INPUT_FLAG_UNKNOWN_0400 | INPUT_FLAG_UNKNOWN_0100 |
	                      INPUT_FLAG_UNKNOWN_0080 | INPUT_FLAG_UNKNOWN_0040 | INPUT_FLAG_UNKNOWN_0020 |
	                      INPUT_FLAG_UNKNOWN_0008 | INPUT_FLAG_UNKNOWN_0004 | INPUT_FLAG_UNKNOWN_0002);

	Timer_SetTimer(TIMER_GUI, true);

	g_campaignID = 0;
	g_scenarioID = 1;
	g_playerHouseID = HOUSE_INVALID;
	g_debugScenario = false;
	g_table_landscapeInfo[LST_SPICE].radarColour = 0xD7;
	g_table_landscapeInfo[LST_SPICE].spriteID = 0x35;
	g_table_landscapeInfo[LST_THICK_SPICE].radarColour = 0xD8;
	g_table_landscapeInfo[LST_THICK_SPICE].spriteID = 0x35;
	g_selectionType = SELECTIONTYPE_MENTAT;
	g_selectionTypeNew = SELECTIONTYPE_MENTAT;

	g_palette1 = calloc(1, 256 * 3);
	g_palette2 = calloc(1, 256 * 3);

	g_readBufferSize = 0x2EE0;
	g_readBuffer = calloc(1, g_readBufferSize);

	ReadProfileIni("PROFILE.INI");

	free(g_readBuffer); g_readBuffer = NULL;

	File_ReadBlockFile("IBM.PAL", g_palette_998A, 256 * 3);

	memmove(g_palette1, g_palette_998A, 256 * 3);

	GUI_ClearScreen(0);

	Video_SetPalette(g_palette1, 0, 256);

	GFX_SetPalette(g_palette1);
	GFX_SetPalette(g_palette2);

	g_paletteMapping1 = malloc(256);
	g_paletteMapping2 = malloc(256);

	GUI_Palette_CreateMapping(g_palette1, g_paletteMapping1, 0xC, 0x55);
	g_paletteMapping1[0xFF] = 0xFF;
	g_paletteMapping1[0xDF] = 0xDF;
	g_paletteMapping1[0xEF] = 0xEF;

	GUI_Palette_CreateMapping(g_palette1, g_paletteMapping2, 0xF, 0x55);
	g_paletteMapping2[0xFF] = 0xFF;
	g_paletteMapping2[0xDF] = 0xDF;
	g_paletteMapping2[0xEF] = 0xEF;

	Script_LoadFromFile("TEAM.EMC", g_scriptTeam, g_scriptFunctionsTeam, NULL);
	Script_LoadFromFile("BUILD.EMC", g_scriptStructure, g_scriptFunctionsStructure, NULL);

	if (g_playerHouseID != HOUSE_INVALID) GUI_Palette_CreateRemap(g_playerHouseID);

	Sprites_Load(0, g_sprites);

	g_cursorSpriteID = 0;

	Sprites_SetMouseSprite(0, 0, g_sprites[0]);

	while (g_mouseHiddenDepth > 1) {
		GUI_Mouse_Show_Safe();
	}

	Window_WidgetClick_Create();
	GameOptions_Load();
	Unit_Init();
	Team_Init();
	House_Init();
	Structure_Init();

	loc06 = true;

	GUI_Mouse_Show_Safe();

	if (!g_debugSkipDialogs) {
		uint16 stringID;
		uint16 maxWidth;
		bool hasSave;
		bool hasFame;
		bool loc10;

		loc10 = true;

		hasSave = File_Exists("_save000.dat");
		hasFame = File_Exists("SAVEFAME.DAT");

		if (hasSave || File_Exists("ONETIME.DAT")) s_var_37B4 = true;

		stringID = STR_REPLAY_INTRODUCTION;

		while (true) {
			char *strings[6];

			switch (stringID) {
				case STR_REPLAY_INTRODUCTION:
					Music_Play(0);

					free(g_readBuffer);
					g_readBufferSize = (g_enableVoices == 0) ? 0x2EE0 : 0x6D60;
					g_readBuffer = calloc(1, g_readBufferSize);

					GUI_Mouse_Hide_Safe();

					Driver_Music_FadeOut();

					GameLoop_GameIntroAnimation();

					Sound_Output_Feedback(0xFFFE);

					File_ReadBlockFile("IBM.PAL", g_palette_998A, 256 * 3);
					memmove(g_palette1, g_palette_998A, 256 * 3);

					if (!s_var_37B4) {
						uint8 fileID;

						fileID = File_Open("ONETIME.DAT", 2);
						File_Close(fileID);
						s_var_37B4 = true;
					}

					Music_Play(0);

					free(g_readBuffer);
					g_readBufferSize = (g_enableVoices == 0) ? 0x2EE0 : 0x4E20;
					g_readBuffer = calloc(1, g_readBufferSize);

					GUI_Mouse_Show_Safe();

					Sprites_Load(0, g_sprites);

					Music_Play(28);

					loc06 = true;
					break;

				case STR_EXIT_GAME:
					PrepareEnd();
					exit(0);
					break;

				case STR_HALL_OF_FAME:
					GUI_HallOfFame_Show(0xFFFF);

					GFX_SetPalette(g_palette2);

					hasFame = File_Exists("SAVEFAME.DAT");
					loc06 = true;
					break;

				case STR_LOAD_A_GAME:
					GUI_Mouse_Hide_Safe();
					GUI_SetPaletteAnimated(g_palette2, 30);
					GUI_ClearScreen(0);
					GUI_Mouse_Show_Safe();

					GFX_SetPalette(g_palette1);

					if (GUI_Widget_SaveLoad_Click(false)) {
						loc02 = true;
						loc10 = false;
						if (g_gameMode == GM_RESTART) break;
						g_gameMode = GM_NORMAL;

						Sprites_Load(0, g_sprites);
					} else {
						GFX_SetPalette(g_palette2);

						loc06 = true;
					}
					break;

				default: break;
			}

			if (loc06) {
				uint16 index = (hasFame ? 2 : 0) + (hasSave ? 1 : 0);
				uint16 i;

				g_widgetProperties[21].height = 0;

				for (i = 0; i < 6; i++) {
					strings[i] = NULL;

					if (mainMenuStrings[index][i] == 0) {
						if (g_widgetProperties[21].height == 0) g_widgetProperties[21].height = i;
						continue;
					}

					strings[i] = String_Get_ByIndex(mainMenuStrings[index][i]);
				}

				GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x22);

				maxWidth = 0;

				for (i = 0; i < g_widgetProperties[21].height; i++) {
					if (Font_GetStringWidth(strings[i]) <= maxWidth) continue;
					maxWidth = Font_GetStringWidth(strings[i]);
				}

				maxWidth += 7;

				g_widgetProperties[21].width  = maxWidth >> 3;
				g_widgetProperties[13].width  = g_widgetProperties[21].width + 2;
				g_widgetProperties[13].xBase  = 19 - (maxWidth >> 4);
				g_widgetProperties[13].yBase  = 160 - ((g_widgetProperties[21].height * g_var_6C71) >> 1);
				g_widgetProperties[13].height = (g_widgetProperties[21].height * g_var_6C71) + 11;

				Sprites_LoadImage(String_GenerateFilename("TITLE"), 3, NULL);

				GUI_Mouse_Hide_Safe();

				GUI_ClearScreen(0);

				GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, 2, 0);

				GUI_SetPaletteAnimated(g_palette1, 30);

				GUI_DrawText_Wrapper("V1.07", 319, 192, 133, 0, 0x231, 0x39);
				GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x22);

				Widget_SetCurrentWidget(13);

				GUI_Widget_DrawBorder(13, 2, 1);

				GameLoop_B4E6_0108(0, strings, 0xFFFF, 0, 0);

				GUI_Mouse_Show_Safe();

				loc06 = false;
			}

			if (!loc10) break;

			stringID = GameLoop_HandleEvents(0, strings, 0xFF, 0);

			if (stringID != 0xFFFF) {
				uint16 index = (hasFame ? 2 : 0) + (hasSave ? 1 : 0);
				stringID = mainMenuStrings[index][stringID];
			}

			GUI_PaletteAnimate();

			if (stringID == STR_PLAY_A_GAME) break;

			sleepIdle();
		}
	} else {
		Music_Play(0);

		free(g_readBuffer);
		g_readBufferSize = (g_enableVoices == 0) ? 0x2EE0 : 0x4E20;
		g_readBuffer = calloc(1, g_readBufferSize);
	}

	GUI_Mouse_Hide_Safe();

	s_var_37B4 = false;

	GUI_DrawFilledRectangle(g_curWidgetXBase << 3, g_curWidgetYBase, (g_curWidgetXBase + g_curWidgetWidth) << 3, g_curWidgetYBase + g_curWidgetHeight, 12);

	if (!loc02) {
		Voice_LoadVoices(5);

		GUI_SetPaletteAnimated(g_palette2, 15);

		GUI_ClearScreen(0);
	}

	Input_History_Clear();

	if (s_enableLog != 0) Mouse_SetMouseMode((uint8)s_enableLog, "DUNE.LOG");

	if (!loc02) {
		if (g_playerHouseID == HOUSE_INVALID) {
			GUI_Mouse_Show_Safe();

			g_playerHouseID = HOUSE_MERCENARY;
			g_playerHouseID = GUI_PickHouse();

			GUI_Mouse_Hide_Safe();
		}

		Sprites_LoadTiles();

		GUI_Palette_CreateRemap(g_playerHouseID);

		Voice_LoadVoices(g_playerHouseID);

		GUI_Mouse_Show_Safe();

		if (g_campaignID != 0) g_scenarioID = GUI_StrategicMap_Show(g_campaignID, true);

		Game_LoadScenario(g_playerHouseID, g_scenarioID);
		if (!g_debugScenario && !g_debugSkipDialogs) GUI_Mentat_ShowBriefing();

		GUI_Mouse_Hide_Safe();

		GUI_ChangeSelectionType(g_debugScenario ? SELECTIONTYPE_DEBUG : SELECTIONTYPE_STRUCTURE);
	}

	GFX_SetPalette(g_palette1);

	return;
}

static void InGame_Numpad_Move(uint16 key)
{
	if (key == 0) return;

	switch (key) {
		case 0x0010: /* TAB */
			Map_SelectNext(true);
			return;

		case 0x0110: /* SHIFT TAB */
			Map_SelectNext(false);
			return;

		case 0x005C: /* NUMPAD 4 / ARROW LEFT */
		case 0x045C:
		case 0x055C:
			Map_MoveDirection(6);
			return;

		case 0x0066: /* NUMPAD 6 / ARROW RIGHT */
		case 0x0466:
		case 0x0566:
			Map_MoveDirection(2);
			return;

		case 0x0060: /* NUMPAD 8 / ARROW UP */
		case 0x0460:
		case 0x0560:
			Map_MoveDirection(0);
			return;

		case 0x0062: /* NUMPAD 2 / ARROW DOWN */
		case 0x0462:
		case 0x0562:
			Map_MoveDirection(4);
			return;

		case 0x005B: /* NUMPAD 7 / HOME */
		case 0x045B:
		case 0x055B:
			Map_MoveDirection(7);
			return;

		case 0x005D: /* NUMPAD 1 / END */
		case 0x045D:
		case 0x055D:
			Map_MoveDirection(5);
			return;

		case 0x0065: /* NUMPAD 9 / PAGE UP */
		case 0x0465:
		case 0x0565:
			Map_MoveDirection(1);
			return;

		case 0x0067: /* NUMPAD 3 / PAGE DOWN */
		case 0x0467:
		case 0x0567:
			Map_MoveDirection(3);
			return;

		default: return;
	}
}

/**
 * Main game loop.
 */
static void GameLoop_Main()
{
	static uint32 l_timerNext = 0;
	static uint32 l_timerUnitStatus = 0;
	static int16  l_selectionState = -2;

	uint16 key;

	String_Init();
	Sprites_Init();

	GameLoop_GameIntroAnimationMenu();

	Timer_SetTimer(TIMER_GAME, true);

	GUI_Mouse_Show_Safe();

	Music_Play(Tools_RandomRange(0, 5) + 8);

	while (true) {
		if (g_gameMode == GM_PICKHOUSE) {
			Music_Play(28);

			g_playerHouseID = HOUSE_MERCENARY;
			g_playerHouseID = GUI_PickHouse();

			GUI_Mouse_Hide_Safe();

			Memory_ClearBlock(1);

			Sprites_LoadTiles();

			GUI_Palette_CreateRemap(g_playerHouseID);

			Voice_LoadVoices(g_playerHouseID);

			GUI_Mouse_Show_Safe();

			g_gameMode = GM_RESTART;
			g_scenarioID = 1;
			g_campaignID = 0;
			g_strategicRegionBits = 0;
		}

		if (g_selectionTypeNew != g_selectionType) {
			GUI_ChangeSelectionType(g_selectionTypeNew);
		}

		GUI_PaletteAnimate();

		if (g_gameMode == GM_RESTART) {
			GUI_ChangeSelectionType(SELECTIONTYPE_MENTAT);

			Game_LoadScenario(g_playerHouseID, g_scenarioID);
			if (!g_debugScenario && !g_debugSkipDialogs) GUI_Mentat_ShowBriefing();

			g_gameMode = GM_NORMAL;

			GUI_ChangeSelectionType(SELECTIONTYPE_STRUCTURE);

			Music_Play(Tools_RandomRange(0, 8) + 8);
			l_timerNext = g_timerGUI + 300;
		}

		if (l_selectionState != g_selectionState) {
			Map_SetSelectionObjectPosition(0xFFFF);
			Map_SetSelectionObjectPosition(g_selectionRectanglePosition);
			l_selectionState = g_selectionState;
		}

		if (!Driver_Voice_IsPlaying() && !Sound_StartSpeech()) {
			if (g_gameConfig.music == 0) {
				Music_Play(2);

				g_musicInBattle = 0;
			} else if (g_musicInBattle > 0) {
				Music_Play(Tools_RandomRange(0, 5) + 17);
				l_timerNext = g_timerGUI + 300;
				g_musicInBattle = -1;
			} else {
				g_musicInBattle = 0;
				if (g_enableSoundMusic != 0 && g_timerGUI > l_timerNext) {
					if (!Driver_Music_IsPlaying()) {
						Music_Play(Tools_RandomRange(0, 8) + 8);
						l_timerNext = g_timerGUI + 300;
					}
				}
			}
		}

		GFX_Screen_SetActive(0);

		key = GUI_Widget_HandleEvents(g_widgetLinkedListHead);

		if (g_selectionType == SELECTIONTYPE_TARGET || g_selectionType == SELECTIONTYPE_PLACE || g_selectionType == SELECTIONTYPE_UNIT || g_selectionType == SELECTIONTYPE_STRUCTURE) {
			if (g_unitSelected != NULL) {
				if (l_timerUnitStatus < g_timerGame) {
					Unit_DisplayStatusText(g_unitSelected);
					l_timerUnitStatus = g_timerGame + 300;
				}

				if (g_selectionType != SELECTIONTYPE_TARGET) {
					g_selectionPosition = Tile_PackTile(Tile_Center(g_unitSelected->o.position));
				}
			}

			GUI_Widget_ActionPanel_Draw(false);

			InGame_Numpad_Move(key);

			GUI_DrawCredits(g_playerHouseID, 0);

			GameLoop_Team();
			GameLoop_Unit();
			GameLoop_Structure();
			GameLoop_House();

			GUI_DrawScreen(0);
		}

		GUI_DisplayText(NULL, 0);

		if (g_var_38F8 && !g_debugScenario) {
			GameLoop_LevelEnd();
		}

		if (!g_var_38F8) break;

		sleepIdle();
	}

	GUI_Mouse_Hide_Safe();

	if (s_enableLog != 0) Mouse_SetMouseMode(INPUT_MOUSE_MODE_NORMAL, "DUNE.LOG");

	GUI_Mouse_Hide_Safe();

	Widget_SetCurrentWidget(0);

	GFX_Screen_SetActive(2);

	GFX_ClearScreen();

	GUI_Screen_FadeIn(g_curWidgetXBase, g_curWidgetYBase, g_curWidgetXBase, g_curWidgetYBase, g_curWidgetWidth, g_curWidgetHeight, 2, 0);
}

static bool Unknown_25C4_000E()
{
	Timer_Init();

	if (!Video_Init()) return false;

	Mouse_Init();

	/* Add the general tickers */
	Timer_Add(Video_Tick, 1000000 / 60);
	Timer_Add(Timer_Tick, 1000000 / 60);

	g_var_7097 = -1;

	GFX_Init();
	GFX_ClearScreen();

	if (!Font_Init()) {
		Error(
			"--------------------------\n"
			"ERROR LOADING DATA FILE\n"
			"\n"
			"Did you copy the Dune2 1.07eu data files into the data directory ?\n"
			"\n"
		);

		return false;
	}

	Font_Select(g_fontNew8p);

	g_palette_998A = calloc(256 * 3, sizeof(uint8));

	memset(&g_palette_998A[45], 63, 3);

	GFX_SetPalette(g_palette_998A);

	srand((unsigned)time(NULL));

	Widget_SetCurrentWidget(0);

	return true;
}

#if defined(__APPLE__)
int SDL_main(int argc, char **argv)
#else
int main(int argc, char **argv)
#endif /* __APPLE__ */
{
#if defined(_WIN32)
	#if defined(__MINGW32__) && defined(__STRICT_ANSI__)
		int __cdecl __MINGW_NOTHROW _fileno (FILE*);
	#endif
	FILE *err = fopen("error.log", "w");
	FILE *out = fopen("output.log", "w");

	#if defined(_MSC_VER)
		_CrtSetDbgFlag( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );
	#endif

	if (err != NULL) _dup2(_fileno(err), _fileno(stderr));
	if (out != NULL) _dup2(_fileno(out), _fileno(stdout));
	FreeConsole();
#endif
	CrashLog_Init();

	VARIABLE_NOT_USED(argc);
	VARIABLE_NOT_USED(argv);

	if (!Config_Read("dune.cfg", &g_config)) {
		Error("Missing dune.cfg file.\n");
		exit(1);
	}

	Input_Init();

	Drivers_All_Init();

	if (!Unknown_25C4_000E()) exit(1);

	g_var_7097 = 0;

	GameLoop_Main();

	printf("%s\n", String_Get_ByIndex(STR_THANK_YOU_FOR_PLAYING_DUNE_II));

	PrepareEnd();
	exit(0);
}

/**
 * Prepare the map (after loading scenario or savegame). Does some basic
 *  sanity-check and corrects stuff all over the place.
 */
void Game_Prepare()
{
	PoolFindStruct find;
	uint16 oldSelectionType;
	Tile *t;
	int i;

	g_var_38BC++;

	oldSelectionType = g_selectionType;
	g_selectionType = SELECTIONTYPE_MENTAT;

	Structure_Recount();
	Unit_Recount();
	Team_Recount();

	t = &g_map[0];
	for (i = 0; i < 64 * 64; i++, t++) {
		Structure *s;
		Unit *u;

		u = Unit_Get_ByPackedTile(i);
		s = Structure_Get_ByPackedTile(i);

		if (u == NULL || !u->o.flags.s.used) t->hasUnit = false;
		if (s == NULL || !s->o.flags.s.used) t->hasStructure = false;
		if (t->isUnveiled) Map_UnveilTile(i, g_playerHouseID);
	}

	find.houseID = HOUSE_INVALID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Unit *u;

		u = Unit_Find(&find);
		if (u == NULL) break;

		if (u->o.flags.s.isNotOnMap) continue;

		Unit_RemoveFog(u);
		Unit_UpdateMap(1, u);
	}

	find.houseID = HOUSE_INVALID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Structure *s;

		s = Structure_Find(&find);
		if (s == NULL) break;

		if (s->o.flags.s.isNotOnMap) continue;

		Structure_RemoveFog(s);

		if (s->o.type == STRUCTURE_STARPORT && s->o.linkedID != 0xFF) {
			Unit *u = Unit_Get_ByIndex(s->o.linkedID);

			if (!u->o.flags.s.used || !u->o.flags.s.isNotOnMap) {
				s->o.linkedID = 0xFF;
				s->countDown = 0;
			} else {
				Structure_SetState(s, STRUCTURE_STATE_READY);
			}
		}

		Script_Load(&s->o.script, s->o.type);

		if (s->o.type == STRUCTURE_PALACE) {
			House_Get_ByIndex(s->o.houseID)->palacePosition = s->o.position;
		}

		if (House_Get_ByIndex(s->o.houseID)->palacePosition.tile != 0) continue;
		House_Get_ByIndex(s->o.houseID)->palacePosition = s->o.position;
	}

	find.houseID = HOUSE_INVALID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		House *h;

		h = House_Find(&find);
		if (h == NULL) break;

		h->structuresBuilt = Structure_GetStructuresBuilt(h);
		House_UpdateCreditsStorage((uint8)h->index);
		House_CalculatePowerAndCredit(h);
	}

	GUI_Palette_CreateRemap(g_playerHouseID);

	Sprites_Load(0, g_sprites);

	Map_SetSelection(g_selectionPosition);

	if (g_structureActiveType != 0xFFFF) {
		Map_SetSelectionSize(g_table_structureInfo[g_structureActiveType].layout);
	} else {
		Structure *s = Structure_Get_ByPackedTile(g_selectionPosition);

		if (s != NULL) Map_SetSelectionSize(g_table_structureInfo[s->o.type].layout);
	}

	Voice_LoadVoices(g_playerHouseID);

	g_tickHousePowerMaintenance = max(g_timerGame + 70, g_tickHousePowerMaintenance);
	g_viewport_forceRedraw = true;
	g_playerCredits = 0xFFFF;

	g_selectionType = oldSelectionType;
	g_var_38BC--;
}

/**
 * Initialize a game, by setting most variables to zero, cleaning the map, etc
 *  etc.
 */
void Game_Init()
{
	Unit_Init();
	Structure_Init();
	Team_Init();
	House_Init();

	memset(g_animations, 0, ANIMATION_MAX * sizeof(Animation));
	memset(g_explosions, 0, EXPLOSION_MAX * sizeof(Explosion));
	memset(g_map, 0, 64 * 64 * sizeof(Tile));

	memset(g_displayedViewport, 0, sizeof(g_displayedViewport));
	memset(g_displayedMinimap,  0, sizeof(g_displayedMinimap));
	memset(g_changedTilesMap,   0, sizeof(g_changedTilesMap));
	memset(g_dirtyViewport,     0, sizeof(g_dirtyViewport));
	memset(g_dirtyMinimap,      0, sizeof(g_dirtyMinimap));

	memset(g_mapSpriteID, 0, 64 * 64 * sizeof(uint16));
	memset(g_starportAvailable, 0, sizeof(g_starportAvailable));

	Sound_Output_Feedback(0xFFFE);

	g_playerCreditsNoSilo     = 0;
	g_houseMissileCountdown   = 0;
	g_selectionState          = 0; /* Invalid. */
	g_structureActivePosition = 0;

	g_unitHouseMissile = NULL;
	g_unitActive       = NULL;
	g_structureActive  = NULL;

	g_activeAction          = 0xFFFF;
	g_structureActiveType   = 0xFFFF;

	GUI_DisplayText(NULL, -1);
}

/**
 * Load a scenario is a safe way, and prepare the game.
 * @param houseID The House which is going to play the game.
 * @param scenarioID The Scenario to load.
 */
void Game_LoadScenario(uint8 houseID, uint16 scenarioID)
{
	Sound_Output_Feedback(0xFFFE);

	Game_Init();

	g_var_38BC++;

	if (!Scenario_Load(scenarioID, houseID)) {
		GUI_DisplayModalMessage("No more scenarios!", 0xFFFF);

		PrepareEnd();
		exit(0);
	}

	Game_Prepare();

	if (scenarioID < 5) {
		g_hintsShown1 = 0;
		g_hintsShown2 = 0;
	}

	g_var_38BC--;
}

/**
 * Close down facilities used by the program. Always called just before the
 *  program terminates.
 */
void PrepareEnd()
{
	free(g_palette_998A); g_palette_998A = NULL;

	GameLoop_Uninit();

	Sprites_Uninit();
	Font_Uninit();
	Voice_UnloadVoices();

	Drivers_All_Uninit();

	if (g_mouseFileID != 0xFF) Mouse_SetMouseMode(INPUT_MOUSE_MODE_NORMAL, NULL);

	Timer_Uninit();
	GFX_Uninit();
	Video_Uninit();
}
