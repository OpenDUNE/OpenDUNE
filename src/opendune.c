/* $Id$ */

/** @file src/opendune.c Gameloop and other main routines. */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "os/math.h"
#include "os/strings.h"
#include "os/sleep.h"

#include "opendune.h"

#include "animation.h"
#include "file.h"
#include "gfx.h"
#include "gui/font.h"
#include "gui/gui.h"
#include "gui/mentat.h"
#include "gui/widget.h"
#include "house.h"
#include "ini.h"
#include "input/input.h"
#include "interrupt.h"
#include "map.h"
#include "mouse.h"
#include "pool/pool.h"
#include "pool/house.h"
#include "pool/unit.h"
#include "pool/structure.h"
#include "pool/team.h"
#include "scenario.h"
#include "security.h"
#include "sprites.h"
#include "string.h"
#include "structure.h"
#include "team.h"
#include "tile.h"
#include "tools.h"
#include "unit.h"
#include "unknown/unknown.h"
#include "wsa.h"


extern void Input_Init();
extern void Input_Uninit();

/**
 * Initialize the video driver.
 */
void Video_Init()
{
	emu_ah = 0x0;
	emu_al = 19;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x022D); Interrupt_Video();
}

/**
 * Check if a level is finished, based on the values in WinFlags.
 *
 * @return True if and only if the level has come to an end.
 */
static bool GameLoop_IsLevelFinished()
{
	bool finish = false;

	if (g_global->debugForceWin) return true;

	/* You have to play at least 7200 ticks before you can win the game */
	if (g_global->tickGlobal - g_global->tickScenarioStart < 7200) return false;

	/* Check for structure counts hitting zero */
	if ((g_global->scenario.winFlags & 0x3) != 0) {
		PoolFindStruct find;
		uint16 countStructureEnemy = 0;
		uint16 countStructureFriendly = 0;

		find.houseID = 0xFFFF;
		find.type    = 0xFFFF;
		find.index   = 0xFFFF;

		/* Calculate how many structures are left on the map */
		while (true) {
			Structure *s;

			s = Structure_Find(&find);
			if (s == NULL) break;

			if (s->o.type == STRUCTURE_TURRET) continue;
			if (s->o.type == STRUCTURE_ROCKET_TURRET) continue;

			if (s->o.houseID == g_global->playerHouseID) {
				countStructureFriendly++;
			} else {
				countStructureEnemy++;
			}
		}

		if ((g_global->scenario.winFlags & 0x1) != 0 && countStructureEnemy == 0) {
			finish = true;
		}
		if ((g_global->scenario.winFlags & 0x2) != 0 && countStructureFriendly == 0) {
			finish = true;
		}
	}

	/* Check for reaching spice quota */
	if ((g_global->scenario.winFlags & 0x4) != 0 && g_global->playerCredits != 0xFFFF) {
		if (g_global->playerCredits >= g_playerHouse->creditsQuota) {
			finish = true;
		}
	}

	/* Check for reaching timeout */
	if ((g_global->scenario.winFlags & 0x8) != 0) {
		/* XXX -- This code was with '<' instead of '>=', which makes
		 *  no sense. As it is unused, who knows what the intentions
		 *  were. This at least makes it sensible. */
		if (g_global->tickGlobal >= g_global->tickGameTimeout) {
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

	if (g_global->debugForceWin) return true;

	/* Check for structure counts hitting zero */
	if ((g_global->scenario.loseFlags & 0x3) != 0) {
		PoolFindStruct find;
		uint16 countStructureEnemy = 0;
		uint16 countStructureFriendly = 0;

		find.houseID = 0xFFFF;
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

			if (s->o.houseID == g_global->playerHouseID) {
				countStructureFriendly++;
			} else {
				countStructureEnemy++;
			}
		}

		win = true;
		if ((g_global->scenario.loseFlags & 0x1) != 0) {
			win = win && (countStructureEnemy == 0);
		}
		if ((g_global->scenario.loseFlags & 0x2) != 0) {
			win = win && (countStructureFriendly != 0);
		}
	}

	/* Check for reaching spice quota */
	if (!win && (g_global->scenario.loseFlags & 0x4) != 0 && g_global->playerCredits != 0xFFFF) {
		win = (g_global->playerCredits >= g_playerHouse->creditsQuota);
	}

	/* Check for reaching timeout */
	if (!win && (g_global->scenario.loseFlags & 0x8) != 0) {
		win = (g_global->tickGlobal < g_global->tickGameTimeout);
	}

	return win;
}

static void GameLoop_PrepareAnimation(csip32 arg06, csip32 arg0A, uint16 arg0E, csip32 arg10)
{
	uint8 i;
	uint8 colors[16];

	g_global->variable_805E = arg06;
	g_global->variable_805A = arg0A;
	g_global->variable_8056 = arg10;
	g_global->variable_8062 = arg0E;
	g_global->variable_6C6C = 0;
	g_global->variable_8072 = 0;
	g_global->animationSoundEffect = 0;
	g_global->variable_8068 = 0;
	g_global->variable_80AE = 0;
	g_global->variable_80AC = 0;
	g_global->variable_8074 = 0;
	g_global->animationTick = 0;
	g_global->variable_806A = 0xFFFF;

	GFX_ClearScreen();

	File_ReadBlockFile("INTRO.PAL", g_palette1, 768);

	memcpy(g_palette_998A, g_palette1, 768);

	g_fontIntro = Font_LoadFile("INTRO.FNT");

	Font_Select(g_fontIntro);

	GUI_Screen_SetActive(0);

	memcpy(g_global->variable_809A, &g_palette1[(144 + (((uint16 *)emu_get_memorycsip(g_global->variable_805A))[1] * 16)) * 3], 6 * 3);

	memset(&g_palette1[215 * 3], 0, 6 * 3);

	memcpy(g_global->variable_8088, g_global->variable_809A, 6 * 3);

	memset(g_global->variable_8076, 0, 6 * 3);


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
	uint32 size;
	uint8 *memory;

	memory = emu_get_memorycsip(Screen_GetSegment_ByIndex_1(index));

	size = g_global->variable_6CD3[index >> 1][index & 0x1];

	memset(memory, 0, size);
}

static void GameLoop_FinishAnimation()
{
	Tools_Free(emu_Global_GetCSIP(g_fontIntro));

	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x1);
	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x2);

	Unknown_259E_0006(g_palette2, 60);

	GUI_ClearScreen(0);

	Input_History_Clear();

	Memory_ClearBlock(7);
}

static void GameLoop_PlaySoundEffect(uint8 animation)
{
	struct_1A2C *var8056 = &((struct_1A2C *)emu_get_memorycsip(g_global->variable_8056))[g_global->animationSoundEffect];

	if (var8056->variable_0000 > animation || var8056->variable_0002 > g_global->variable_8068) return;

	Voice_Play(var8056->voiceID);

	g_global->animationSoundEffect++;
}

static void GameLoop_DrawText(char *string, uint16 top)
{
	char *s;
	uint8 *s2;

	s = string;
	for (s2 = (uint8 *)string; *s2 != 0; s2++) *s++ = (*s2 == 0xE1) ? 1 : *s2;
	*s = 0;

	s = string;

	while (*s != 0 && *s != g_global->variable_264A) s++;

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

static void GameLoop_B4ED_07B6(uint8 animation)
{
	struct_19F0 *var805A;
	uint8 i;
	uint8 colors[16];

	g_global->variable_8068++;

	GameLoop_PlaySoundEffect(animation);

	var805A = &((struct_19F0 *)emu_get_memorycsip(g_global->variable_805A))[g_global->variable_8072];

	if (var805A->stringID == 0xFFFF || var805A->variable_0004 > animation) return;

	if (g_global->variable_8074 != 0) {
		if (g_global->variable_806A == 0xFFFF) g_global->variable_806A = var805A->variable_0008;

		if (g_global->variable_806A-- != 0) return;

		g_global->variable_8074 = 0;
		g_global->variable_8072++;
		g_global->variable_80AE = 2;

		if (var805A->variable_0009 != 0) {
			uint8 i;

			g_global->variable_80AC = var805A->variable_0009;

			for (i = 0; i < 18; i++) {
				g_global->variable_8076[i] = g_global->variable_809A[i] / g_global->variable_80AC;
				if (g_global->variable_8076[i] == 0) g_global->variable_8076[i] = 1;
			}

			return;
		}

		memcpy(g_global->variable_8076, g_global->variable_809A, 18);
		g_global->variable_80AC = 1;
		return;
	}

	if (g_global->variable_806A == 0xFFFF) g_global->variable_806A = var805A->variable_0006;

	if (g_global->variable_806A-- != 0) return;

	memcpy(g_global->variable_809A, &g_palette1[(144 + (var805A->variable_0002 * 16)) * 3], 18);

	g_global->variable_8074 = 1;

	GUI_DrawFilledRectangle(0, var805A->top == 85 ? 0 : var805A->top, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1, 0);

	if (g_config.voiceDrv != 0 && g_global->variable_8062 != 0xFFFF && g_global->variable_8072 != 0 && g_config.language == LANGUAGE_ENGLISH) {
		uint16 loc06 = g_global->variable_8062 + g_global->variable_8072;

		Sound_Unknown0363(loc06);

		if (g_global->variable_0312[loc06][5] != 0) {
			GameLoop_DrawText(String_Get_ByIndex(var805A->stringID), var805A->top);
		}
	} else {
		if (var805A->stringID != 0) {
			GameLoop_DrawText(String_Get_ByIndex(var805A->stringID), var805A->top);
		}
	}

	g_global->variable_80AE = 1;

	if (var805A->variable_0007 != 0) {
		uint8 i;

		g_global->variable_80AC = var805A->variable_0007;

		for (i = 0; i < 18; i++) {
			g_global->variable_8076[i] = g_global->variable_809A[i] / g_global->variable_80AC;
			if (g_global->variable_8076[i] == 0) g_global->variable_8076[i] = 1;
		}
	} else {
		memcpy(g_global->variable_8076, g_global->variable_809A, 18);
		g_global->variable_80AC = 1;
	}

	if (g_global->playerHouseID != HOUSE_INDEX_INVALID || g_global->variable_8072 != 2) return;

	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x21);

	GUI_DrawText_Wrapper("Copyright (c) 1992 Westwood Studios, Inc.", 160, 189, 215, 0, 0x112);

	g_global->variable_6C6C = 0;

	colors[0] = 0;
	for (i = 0; i < 6; i++) colors[i + 1] = 215 + i;

	GUI_InitColors(colors, 0, 15);

	Font_Select(g_fontIntro);
}

static uint16 GameLoop_B4ED_0AA5(bool arg06)
{
	Sound_Unknown0470();

	if (g_global->variable_80AE == 0) return 0;

	if (g_global->animationTick >= g_global->variable_76AC && !arg06) return g_global->variable_80AE;

	g_global->animationTick = g_global->variable_76AC + 7;
	if (--g_global->variable_80AC == 0 || arg06) {
		if (g_global->variable_80AE == 1) {
			memcpy(g_global->variable_8088, g_global->variable_809A, 18);
		} else {
			memset(g_global->variable_8088, 0, 18);
		}

		g_global->variable_80AE = 0;
	} else {
		uint8 i;

		for (i = 0; i < 18; i++) {
			if (g_global->variable_80AE == 1) {
				g_global->variable_8088[i] = min(g_global->variable_8088[i] + g_global->variable_8076[i], g_global->variable_809A[i]);
			} else {
				g_global->variable_8088[i] = max(g_global->variable_8088[i] - g_global->variable_8076[i], 0);
			}
		}
	}

	if (arg06) return g_global->variable_80AE;

	memcpy(&g_palette_998A[215 * 3], g_global->variable_8088, 18);

	GFX_SetPalette(g_palette_998A);

	return g_global->variable_80AE;
}

static void GameLoop_PlayAnimation()
{
	struct_19A8 *var805E;
	uint8 animation = 0;

	var805E = (struct_19A8 *)emu_get_memorycsip(g_global->variable_805E);

	while (var805E->variable_0004 != 0) {
		uint16 loc04;
		uint16 posX = 0;
		uint16 posY = 0;
		uint32 loc10 = g_global->variable_76AC + var805E->variable_0004 * 6;
		uint32 loc14 = loc10 + 30;
		uint32 loc18;
		uint32 loc1C;
		uint16 mode = var805E->flags & 0x3;
		bool loc20;
		uint32 loc24;
		uint16 locdi;
		uint16 frame;
		void *wsa;

		if ((var805E->flags & 0x20) == 0) {
			posX = 8;
			posY = 24;
		}

		g_global->variable_8068 = 0;

		if (mode == 0) {
			wsa = NULL;
			frame = 0;
		} else {
			if (mode == 3) {
				frame = var805E->variable_0005;
				loc20 = true;
			} else {
				frame = 0;
				loc20 = ((var805E->flags & 0x40) != 0) ? true : false;
			}

			if ((var805E->flags & 0x480) != 0) {
				GUI_ClearScreen(3);

				wsa = emu_get_memorycsip(Screen_GetSegment_ByIndex_1(5));

				loc24 = g_global->variable_6CD3[2][1] + g_global->variable_6CD3[3][0];
				loc20 = false;
			} else {
				wsa = emu_get_memorycsip(Screen_GetSegment_ByIndex_1(3));

				loc24 = g_global->variable_6CD3[1][1] + g_global->variable_6CD3[2][1] + g_global->variable_6CD3[3][0];
			}

			sprintf((char *)g_global->variable_9939, "%s.WSA", emu_get_memorycsip(var805E->string));

			wsa = WSA_LoadFile((char *)g_global->variable_9939, wsa, loc24, loc20);
		}

		locdi = 0;
		if ((var805E->flags & 0x8) != 0) {
			loc10 -= 45;
			locdi++;
		} else {
			if ((var805E->flags & 0x10) != 0) {
				loc10 -= 15;
				locdi++;
			}
		}

		if ((var805E->flags & 0x4) != 0) {
			GameLoop_B4ED_07B6(animation);
			WSA_DisplayFrame(wsa, frame++, posX, posY, 0);
			GameLoop_B4ED_0AA5(true);

			memcpy(&g_palette1[215 * 3], g_global->variable_8088, 18);

			Unknown_259E_0006(g_palette1, 45);

			locdi++;
		} else {
			if ((var805E->flags & 0x480) != 0) {
				GameLoop_B4ED_07B6(animation);
				WSA_DisplayFrame(wsa, frame++, posX, posY, 2);
				locdi++;

				if ((var805E->flags & 0x480) == 0x80) {
					GUI_Screen_FadeIn2(8, 24, 304, 120, 2, 0, 1, false);
				} else if ((var805E->flags & 0x480) == 0x400) {
					GUI_Screen_FadeIn(1, 24, 1, 24, 38, 120, 2, 0);
				}
			}
		}

		loc1C = loc10 - g_global->variable_76AC;
		loc18 = 0;
		loc04 = 1;

		switch (mode) {
			case 0:
				loc04 = var805E->variable_0005 - locdi;
				loc18 = loc1C / loc04;
				break;

			case 1:
				loc04 = WSA_GetFrameCount(wsa);
				loc18 = loc1C / var805E->variable_0005;
				break;

			case 2:
				loc04 = WSA_GetFrameCount(wsa) - locdi;
				loc18 = loc1C / loc04;
				loc10 -= loc18;
				break;

			case 3:
				frame = var805E->variable_0005;
				loc04 = 1;
				loc18 = loc1C / 20;
				break;

			default:
				PrepareEnd();
				printf("Bad mode in animation #%i.\r\n", animation);
				exit(0);
		}

		while (loc10 > g_global->variable_76AC) {
			g_global->variable_76B4 = loc18;

			GameLoop_B4ED_07B6(animation);
			WSA_DisplayFrame(wsa, frame++, posX, posY, 0);

			if (mode == 1 && frame == loc04) {
				frame = 0;
			} else {
				if (mode == 3) frame--;
			}

			if (Input_Keyboard_NextKey() != 0 && g_global->variable_37B4 != 0) {
				WSA_Unload(wsa);
				return;
			}

			do {
				GameLoop_B4ED_0AA5(false);
			} while (g_global->variable_76B4 != 0 && loc10 > g_global->variable_76AC);
		}

		if (mode == 2) {
			bool displayed;
			do {
				GameLoop_B4ED_07B6(animation);
				displayed = WSA_DisplayFrame(wsa, frame++, posX, posY, 0);
			} while (displayed);
		}

		if ((var805E->flags & 0x10) != 0) {
			memset(&g_palette_998A[3 * 1], 63, 3 * 255);

			memcpy(&g_palette_998A[215 * 3], g_global->variable_8088, 18);

			Unknown_259E_0006(g_palette_998A, 15);

			memcpy(g_palette_998A, g_palette1, 3 * 256);
		}

		if ((var805E->flags & 0x8) != 0) {
			GameLoop_B4ED_0AA5(true);

			memcpy(&g_palette_998A[215 * 3], g_global->variable_8088, 18);

			Unknown_259E_0006(g_palette_998A, 45);
		}

		WSA_Unload(wsa);

		animation++;
		var805E++;

		while (loc14 > g_global->variable_76AC) sleep(0);
	}
}

static void GameLoop_LevelEndAnimation()
{
	csip32 args[3];

	Input_History_Clear();

	switch (g_global->campaignID) {
		case 4:
			switch (g_global->playerHouseID) {
				case HOUSE_ATREIDES:
					args[0].csip = 0x353F1C1A;
					args[1].csip = 0x353F1C42;
					args[2].csip = 0x353F1C88;
					break;

				case HOUSE_ORDOS:
					args[0].csip = 0x353F1CEE;
					args[1].csip = 0x353F1D16;
					args[2].csip = 0x353F1D5C;
					break;

				case HOUSE_HARKONNEN:
					args[0].csip = 0x353F1DC2;
					args[1].csip = 0x353F1DEA;
					args[2].csip = 0x353F1E30;
					break;

				default: return;
			} break;

		case 8:
			switch (g_global->playerHouseID) {
				case HOUSE_ATREIDES:
					args[0].csip = 0x353F1C8D;
					args[1].csip = 0x353F1CAD;
					args[2].csip = 0x353F1CE9;
					break;

				case HOUSE_ORDOS:
					args[0].csip = 0x353F1D61;
					args[1].csip = 0x353F1D81;
					args[2].csip = 0x353F1DBD;
					break;

				case HOUSE_HARKONNEN:
					args[0].csip = 0x353F1E35;
					args[1].csip = 0x353F1E55;
					args[2].csip = 0x353F1E9B;
					break;

				default: return;
			}
			break;

		default: return;
	}

	GameLoop_PrepareAnimation(args[0], args[1], 0xFFFF, args[2]);

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

		Tools_Free(emu_Global_GetCSIP(w));
	}

	Tools_Free(emu_Global_GetCSIP(g_palette1));
	Tools_Free(emu_Global_GetCSIP(g_palette2));
	Tools_Free(emu_Global_GetCSIP(g_paletteMapping1));
	Tools_Free(emu_Global_GetCSIP(g_paletteMapping2));
	Tools_Free(g_global->variable_38C6);
	Tools_Free(g_global->variable_3C46);
	Tools_Free(g_global->readBuffer);
	Tools_Free(g_global->strings);

	Script_ClearInfo(&g_global->scriptStructure);
	Script_ClearInfo(&g_global->scriptTeam);
}

static void GameCredits_1DD2_0008(uint16 arg06, uint16 arg08, uint16 arg0A, csip32 arg0C)
{
	uint16 *data = (uint16 *)emu_get_memorycsip(g_global->variable_66EC);
	uint16 *esdi = (uint16 *)emu_get_memorycsip(arg0C);
	uint16 *dssi = (uint16 *)&emu_get_memory8(g_global->variable_6C93[arg0A >> 1][arg0A & 1], data[arg06], 0x0);
	uint16 *essi = (uint16 *)&emu_get_memory8(g_global->variable_6C93[0][0], data[arg06], 0x0);
	uint16 count = data[arg08] / 2;

	while (count-- != 0) {
		if (*esdi++ != *dssi++) {
			if (count == 0) return;
			esdi--;
			dssi--;
			*esdi++ = *dssi;
			*essi = *dssi++;
		}
		essi++;
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

	Unknown_07AE_0000(windowID);

	sprite = emu_get_memorycsip(Sprites_GetCSIP(g_sprites[spriteID], 0));
	spriteX = (g_global->variable_992F << 3) - Sprite_GetWidth(sprite);
	spriteY = g_global->variable_9931 - Sprite_GetHeight(sprite);

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

	GameCredits_1DD2_0008(g_global->variable_992B, g_global->variable_9931, memory, g_global->variable_182E);

	GUI_Screen_SetActive(0);
	loc0C = g_global->variable_76A8;

	Input_History_Clear();

	while (true) {
		while (loc0C > g_global->variable_76A8) sleep(0);

		loc0C = g_global->variable_76A8 + delay;

		while ((g_global->variable_9931 / 6) + 2 > stringCount && *data != 0) {
			char *text = data;
			uint16 y;

			if (stringCount != 0) {
				y = strings[stringCount - 1].y;
				if (strings[stringCount - 1].separator != 5) y += strings[stringCount - 1].charHeight + strings[stringCount - 1].charHeight / 8;
			} else {
				y = g_global->variable_9931;
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
				Font_Select(g_fontNew8p2);
			}

			strings[stringCount].charHeight = g_global->variable_6C71;

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

		switch (g_global->variable_1836) {
			case 0:
				GUI_ClearScreen(memory);

				if (spriteID == 0) GUI_ClearScreen(screenID);

				g_global->variable_1836++;
				g_global->variable_1838 = 2;
				break;

			case 1: case 4:
				if (g_global->variable_1838-- == 0) {
					g_global->variable_1838 = 0;
					g_global->variable_1836++;
				}
				break;

			case 2:
				if (g_sprites[spriteID].csip == 0x0) spriteID = 0;

				GUI_DrawSprite(memory, sprite, positions[spritePos].x, positions[spritePos].y, windowID, 0x4000);

				g_global->variable_1838 = 8;
				g_global->variable_1836++;
				spriteID++;
				if (++spritePos > 5) spritePos = 0;;
				break;

			case 3:
				GFX_SetPalette(g_palette1 + 0x300 * g_global->variable_1838);

				if (g_global->variable_1838-- == 0) {
					g_global->variable_1836++;
					g_global->variable_1838 = 20;
				}
				break;

			case 5:
				GFX_SetPalette(g_palette1 + 0x300 * g_global->variable_1838);

				if (g_global->variable_1838++ >= 8) g_global->variable_1836 = 0;
				break;

			default: break;
		}

		GUI_Screen_Copy(g_global->variable_992D, g_global->variable_992B, g_global->variable_992D, g_global->variable_992B, g_global->variable_992F, g_global->variable_9931, memory, screenID);

		for (loc02 = 0; loc02 < stringCount; loc02++) {
			if ((int16)strings[loc02].y < g_global->variable_9931) {
				GUI_Screen_SetActive(screenID);

				Font_Select(g_fontNew8p2);

				if (strings[loc02].charHeight != g_global->variable_6C71) Font_Select(g_fontNew6p);

				GUI_DrawText(strings[loc02].text, strings[loc02].x, strings[loc02].y + g_global->variable_992B, 255, 0);

				GUI_Screen_SetActive(0);
			}

			strings[loc02].y--;
		}

		GameCredits_1DD2_0008(g_global->variable_992B, g_global->variable_9931, screenID, g_global->variable_182E);

		if ((int16)strings[0].y < -10) {
			strings[0].text += strlen(strings[0].text);
			*strings[0].text = strings[0].separator;
			stringCount--;
			memcpy(&strings[0], &strings[1], stringCount * sizeof(*strings));
		}

		if ((g_global->variable_9931 / 6 + 2) > stringCount) {
			if (strings[stringCount - 1].y + strings[stringCount - 1].charHeight < g_global->variable_992B + g_global->variable_9931) loc10 = true;
		}

		if (loc10 && g_global->variable_1836 == 0) break;

		if (Input_Keyboard_NextKey() != 0) break;
	}

	Unknown_259E_0006(g_palette2, 120);

	GUI_ClearScreen(0);
	GUI_ClearScreen(memory);
	GUI_ClearScreen(screenID);

	g_global->variable_1838 = 0;
	g_global->variable_1836 = 0;
}

static void GameCredits_LoadPaletteAndSprites()
{
	uint8 *loc04;
	uint8 *loc08;
	csip32 memBlock;
	uint32 size;
	uint16 i;
	uint16 locdi;

	g_global->variable_182E = Screen_GetSegment_ByIndex_1(7);

	size = SCREEN_WIDTH * g_global->variable_9931;

	g_global->variable_1832 = g_global->variable_182E;
	g_global->variable_1832.s.ip += size;

	g_global->variable_3C46 = Screen_GetSegment_ByIndex_1(9);

	Unknown_2903_090A(g_global->variable_3C46, 20000);

	g_palette1 = emu_get_memorycsip(g_global->variable_3C46) + 20000;

	File_ReadBlockFile("IBM.PAL", g_palette1, 0x300);

	loc08 = g_palette1;

	for (i = 0; i < 10; i++) {
		loc04 = g_palette1;

		for (locdi = 0; locdi < 255 * 3; locdi++) *loc08++ = *loc04++ * (9 - i) / 9;

		*loc08++ = 0x3F;
		*loc08++ = 0x3F;
		*loc08++ = 0x3F;
	}

	g_palette2 = loc08;

	memset(g_palette2, 0, 0x300);

	memBlock = Screen_GetSegment_ByIndex_1(3);

	for (i = 0; i < 11; i++) {
		sprintf((char *)g_global->variable_9939, "CREDIT%d.SHP", i + 1);

		size = File_ReadBlockFile((char *)g_global->variable_9939, emu_get_memorycsip(memBlock), 0xFA00);

		g_sprites[i] = Tools_Malloc(size, 0x0);

		memcpy(emu_get_memorycsip(g_sprites[i]), emu_get_memorycsip(memBlock), size);
	}

	g_sprites[i].csip = 0x0;
}

/**
 * Shows the game credits.
 */
static void GameLoop_GameCredits()
{
	uint16 i;
	csip32 memBlock;
	uint8 *memory;

	GUI_Mouse_Hide_Safe();

	Unknown_07AE_0000(20);

	Sprites_LoadImage("BIGPLAN.CPS", 3, 3, g_palette_998A, 1);

	GUI_ClearScreen(0);

	GUI_Screen_Copy(g_global->variable_992D, g_global->variable_992B, g_global->variable_992D, g_global->variable_992B, g_global->variable_992F, g_global->variable_9931, 2, 0);

	Unknown_259E_0006(g_palette_998A, 60);

	Music_Play(0);

	GameLoop_Uninit();

	Music_Play(33);

	memBlock = Screen_GetSegment_ByIndex_1(5);

	memory = emu_get_memorycsip(memBlock);

	for (i = 0; i < 256; i++) {
		uint8 loc06;
		uint8 loc04;

		memory[i] = i & 0xFF;

		loc06 = i / 16;
		loc04 = i % 16;

		if (loc06 == 9 && loc04 <= 6) {
			memory[i] = (g_global->playerHouseID * 16) + loc04 + 144;
		}
	}

	Sprites_LoadImage("MAPPLAN.CPS", 3, 3, g_palette_998A, 1);

	GUI_Palette_RemapScreen(g_global->variable_992D << 3, g_global->variable_992B, g_global->variable_992F << 3, g_global->variable_9931, 2, emu_get_memorycsip(memBlock));

	GUI_Screen_FadeIn2(g_global->variable_992D << 3, g_global->variable_992B, g_global->variable_992F << 3, g_global->variable_9931, 2, 0, 1, false);

	GameCredits_LoadPaletteAndSprites();

	GUI_Mouse_Hide_Safe();

	GUI_InitColors(g_global->variable_1857, 0, 11);

	g_global->variable_6C6C = -1;

	GFX_SetPalette(g_palette1);

	while (true) {
		File_ReadBlockFile(String_GenerateFilename("CREDITS"), emu_get_memorycsip(g_global->variable_1832), g_global->variable_6CD3[3][0]);

		GameCredits_Play((char *)emu_get_memorycsip(g_global->variable_1832), 20, 2, 4, 6);

		if (Input_Keyboard_NextKey() != 0) break;

		Music_Play(33);
	}

	Unknown_259E_0006(g_palette2, 60);

	Driver_Music_FadeOut();

	GFX_ClearScreen();
}

/**
 * Shows the end game "movie"
 */
static void GameLoop_GameEndAnimation()
{
	csip32 args[3];
	uint16 sound;

	String_Load("INTRO");

	Voice_LoadVoices(0xFFFE);

	switch (g_global->playerHouseID) {
		case HOUSE_HARKONNEN:
			args[0].csip = 0x353F1A31;
			args[1].csip = 0x353F1A91;
			args[2].csip = 0x353F1AE1;
			sound = 0x1E;
			break;

		case HOUSE_ORDOS:
			args[0].csip = 0x353F1AFB;
			args[1].csip = 0x353F1B6B;
			args[2].csip = 0x353F1BB1;
			sound = 0x20;
			break;

		default:
		case HOUSE_ATREIDES:
			args[0].csip = 0x353F19A8;
			args[1].csip = 0x353F19F0;
			args[2].csip = 0x353F1A2C;
			sound = 0x1F;
			break;
	}

	GameLoop_PrepareAnimation(args[0], args[1], 0xFFFF, args[2]);

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
	if (g_global->variable_60A2 >= g_global->tickGlobal && g_global->debugForceWin == 0) return;

	if (GameLoop_IsLevelFinished()) {
		Music_Play(0);

		g_global->cursorSpriteID = 0;

		Sprites_SetMouseSprite(0, 0, emu_get_memorycsip(g_sprites[0]));

		Sound_Unknown0363(0xFFFE);

		GUI_ChangeSelectionType(0);

		if (GameLoop_IsLevelWon()) {
			Sound_Unknown0363(40);

			GUI_DisplayModalMessage(String_Get_ByIndex(0x52), 0xFFFF); /* "You have successfully completed your mission." */

			GUI_Mentat_ShowWin();

			Sprites_UnloadTiles();

			g_global->campaignID++;

			GUI_EndStats_Show(g_global->scenario.killedAllied, g_global->scenario.killedEnemy, g_global->scenario.destroyedAllied, g_global->scenario.destroyedEnemy, g_global->scenario.harvestedAllied, g_global->scenario.harvestedEnemy, g_global->scenario.score, g_global->playerHouseID);

			if (g_global->campaignID == 9) {
				GUI_Mouse_Hide_Safe();

				Unknown_259E_0006(g_palette2, 15);
				GUI_ClearScreen(0);
				GameLoop_GameEndAnimation();
				PrepareEnd();
				exit(0);
			}

			GUI_Mouse_Hide_Safe();
			GameLoop_LevelEndAnimation();
			GUI_Mouse_Show_Safe();

			File_ReadBlockFile("IBM.PAL", g_palette1, 768);

			g_global->scenarioID = GUI_StrategicMap_Show(g_global->campaignID, true);

			Unknown_259E_0006(g_palette2, 15);

			if (g_global->campaignID == 1 || g_global->campaignID == 7) {
				Sprites_Load(1, 7, g_sprites);

				if (!GUI_Security_Show()) {
					PrepareEnd();
					exit(0);
				}

				Sprites_Load(0, 7, g_sprites);
			}
		} else {
			Sound_Unknown0363(41);

			GUI_DisplayModalMessage(String_Get_ByIndex(0x53), 0xFFFF); /* "You have failed your mission " */

			GUI_Mentat_ShowLose();

			Sprites_UnloadTiles();

			g_global->scenarioID = GUI_StrategicMap_Show(g_global->campaignID, false);
		}

		g_playerHouse->flags.s.variable_0004 = false;

		Sprites_Load(0, 7, g_sprites);

		Sprites_LoadTiles();

		g_global->variable_38BE = 1;
		g_global->debugForceWin = 0;
	}

	g_global->variable_60A2 = g_global->tickGlobal + 300;
}

/**
 * Logos at begin of intro.
 */
static void Gameloop_Logos()
{
	uint16 oldScreenID;
	void *wsa;
	uint16 frame;

	oldScreenID = GUI_Screen_SetActive(0);

	GFX_SetPalette(g_palette2);
	GFX_ClearScreen();

	File_ReadBlockFile("WESTWOOD.PAL", g_palette_998A, 0x300);

	frame = 0;
	wsa = WSA_LoadFile("WESTWOOD.WSA", emu_get_memorycsip(Screen_GetSegment_ByIndex_1(3)), g_global->variable_6CD3[1][1] + g_global->variable_6CD3[2][1] + g_global->variable_6CD3[3][0], true);
	WSA_DisplayFrame(wsa, frame++, 0, 0, 0);

	Unknown_259E_0006(g_palette_998A, 60);

	Music_Play(0x24);

	g_global->variable_76B4 = 0x168;

	while (true) {
		uint32 loc04;
		bool displayed;

		displayed = WSA_DisplayFrame(wsa, frame++, 0, 0, 0);
		if (!displayed) break;

		loc04 = g_global->variable_76AC + 6;
		while (loc04 > g_global->variable_76AC) sleep(0);
	}

	WSA_Unload(wsa);

	if (g_global->variable_37B4 == 0) {
		Voice_LoadVoices(0xFFFF);
	} else {
		if (Input_Keyboard_NextKey() == 0 && g_global->variable_37B4 != 0) {
			Voice_LoadVoices(0xFFFF);
		}
	}

	while (g_global->variable_76B4 != 0) {
		if (Input_Keyboard_NextKey() == 0 || g_global->variable_37B4 == 0) continue;

		Unknown_259E_0006(g_palette2, 30);

		GUI_ClearScreen(0);

		GUI_Screen_SetActive(oldScreenID);
		return;
	}

	Unknown_259E_0006(g_palette2, 60);

	while (Driver_Music_IsPlaying());

	while (g_global->variable_76B4 != 0) {
		if (Input_Keyboard_NextKey() == 0 || g_global->variable_37B4 == 0) continue;

		Unknown_259E_0006(g_palette2, 30);

		GUI_ClearScreen(0);

		GUI_Screen_SetActive(oldScreenID);
		return;
	}

	Unknown_259E_0006(g_palette2, 60);

	GFX_ClearScreen(0);

	Sprites_LoadImage(String_GenerateFilename("AND"), 2, 2, g_palette_998A, g_global->variable_6CD3[1][0] & 0xFFFF);

	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, 2, 0);

	Unknown_259E_0006(g_palette_998A, 30);

	g_global->variable_76B4 = 0x3C;

	while (g_global->variable_76B4 != 0) {
		if (Input_Keyboard_NextKey() == 0 || g_global->variable_37B4 == 0) continue;

		Unknown_259E_0006(g_palette2, 30);

		GUI_ClearScreen(0);

		GUI_Screen_SetActive(oldScreenID);
		return;
	}

	Unknown_259E_0006(g_palette2, 30);

	GUI_ClearScreen(0);

	Sprites_LoadImage("VIRGIN.CPS", 2, 2, g_palette_998A, g_global->variable_6CD3[1][0] & 0xFFFF);

	GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, 2, 0);

	Unknown_259E_0006(g_palette_998A, 30);

	g_global->variable_76B4 = 0xB4;

	while (g_global->variable_76B4 != 0) {
		if (Input_Keyboard_NextKey() == 0 || g_global->variable_37B4 == 0) continue;
	}

	Unknown_259E_0006(g_palette2, 30);

	GUI_ClearScreen(0);

	GUI_Screen_SetActive(oldScreenID);
}

/**
 * The Intro.
 */
static void GameLoop_GameIntroAnimation()
{
	GUI_ChangeSelectionType(7);

	String_Load("INTRO");

	Gameloop_Logos();

	if (Input_Keyboard_NextKey() == 0 || g_global->variable_37B4 == 0) {
		csip32 args[3];

		Music_Play(0x1B);

		args[0].csip = 0x2C410000;
		args[1].csip = 0x2C4D0000;
		args[2].csip = 0x2C5B0000;

		GameLoop_PrepareAnimation(args[0], args[1], 0x4A, args[2]);

		GameLoop_PlayAnimation();

		Driver_Music_FadeOut();

		GameLoop_FinishAnimation();
	}

	GUI_ChangeSelectionType(0);
	String_Load(NULL);
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
	uint16 *loc04;
	uint16 left;
	uint16 old;
	uint16 top;
	uint8 i;

	loc04 = g_global->variable_4062[21 + arg06];
	top = g_global->variable_992B + loc04[1];
	left = (g_global->variable_992D + loc04[0]) << 3;

	old = GameLoop_B4E6_0000(loc04[4], arg0C, arg10);

	GUI_Mouse_Hide_Safe();

	for (i = 0; i < loc04[3]; i++) {
		uint16 index = GameLoop_B4E6_0000(i, arg0C, arg10);
		uint16 pos = top + ((g_global->variable_6C71 + arg12) * i);

		if (index == old && (g_global->variable_25E6 != 0 || g_global->variable_7097 != 0)) {
			GUI_DrawText_Wrapper(strings[index], left, pos, (uint8)loc04[6], 0, 0x22);
		} else {
			GUI_DrawText_Wrapper(strings[index], left, pos, (uint8)loc04[5], 0, 0x22);
		}
	}

	g_global->variable_8052 = arg12;

	GUI_Mouse_Show_Safe();

	Input_History_Clear();
}

static void GameLoop_B4E6_0074(char *string, uint16 left, uint16 top, uint8 fgColourNormal, uint8 fgColourSelected, uint8 bgColour)
{
	uint8 i;

	for (i = 0; i < 3; i++) {
		GUI_Mouse_Hide_Safe();

		GUI_DrawText_Wrapper(string, left, top, fgColourSelected, bgColour, 0x22);
		Tools_Sleep(2);

		GUI_DrawText_Wrapper(string, left, top, fgColourNormal, bgColour, 0x22);
		GUI_Mouse_Show_Safe();
		Tools_Sleep(2);
	}
}

static bool GameLoop_B4E6_00E0(uint16 x, uint16 y, uint16 minX, uint16 minY, uint16 maxX, uint16 maxY)
{
	return x >= minX && x <= maxX && y >= minY && y <= maxY;
}

static uint16 GameLoop_B4E6_0200(uint16 arg06, char **strings, uint32 arg10, uint16 arg14)
{
	uint16 last;
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
	uint16 old;
	uint16 *loc24;
	uint16 current;

	loc24 = g_global->variable_4062[21 + arg06];

	last = loc24[3] - 1;
	old = loc24[4] % (last + 1);
	current = old;

	result = 0xFFFF;

	top = g_global->variable_992B + loc24[1];
	left = (g_global->variable_992D + loc24[0]) << 3;

	lineHeight = g_global->variable_6C71 + g_global->variable_8052;

	minX = (g_global->variable_992D << 3) + (g_global->variable_6C70 * loc24[0]);
	minY = g_global->variable_992B + loc24[1] - (g_global->variable_8052 / 2);
	maxX = minX + (g_global->variable_6C70 * loc24[2]) - 1;
	maxY = minY + (loc24[3] * lineHeight) - 1;

	fgColourNormal = loc24[5] & 0xFF;
	fgColourSelected = loc24[6] & 0xFF;

	g_global->variable_8054 = 0;

	key = 0;
	if (Input_IsInputAvailable() != 0) {
		key = Input_Wait() & 0x8FF;
	}

	if (g_global->variable_7097 == 0) {
		uint16 y = g_global->mouseY;

		if (GameLoop_B4E6_00E0(g_global->mouseX, y, minX, minY, maxX, maxY) && g_global->variable_25E6 != 0) {
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
			if (GameLoop_B4E6_00E0(g_global->mouseClickX, g_global->mouseClickY, minX, minY, maxX, maxY)) {
				current = (g_global->mouseClickY - minY) / lineHeight;
				result = current;
			} else {
				g_global->variable_8054 = key;
			}
			break;

		case 0x2B: /* NUMPAD 5 / RETURN */
		case 0x3D: /* SPACE */
		case 0x61:
			result = current;
			break;

		default: {
			uint16 i;

			for (i = 0; i < loc24[3]; i++) {
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

			g_global->variable_8054 = key;
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

	loc24[4] = current;

	if (result == 0xFFFF) return 0xFFFF;

	result = GameLoop_B4E6_0000(result, arg10, arg14);

	GUI_Mouse_Hide_Safe();
	GameLoop_B4E6_0074(strings[result], left, top + (current * lineHeight), fgColourNormal, fgColourSelected, 0);
	GUI_Mouse_Show_Safe();

	return result;
}

static void Window_WidgetClick_Create()
{
	WidgetInfo *wi;

	for (wi = g_table_gameWidgetInfo; wi->index >= 0; wi++) {
		Widget *w;

		w = GUI_Widget_Allocate(wi->index, wi->shortcut, wi->offsetX, wi->offsetY, wi->spriteID, wi->stringID, wi->variable_3A);

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

	source = (char *)emu_get_memorycsip(Screen_GetSegment_ByIndex_1(3));

	memset(source, 0, 32000);
	File_ReadBlockFile(filename, source, g_global->variable_6CD3[1][1]);

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

	if (g_global->debugGame != 0) {
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
		uint16 variable_40;
		uint16 fireDelay;
		uint16 variable_50;

		Ini_GetString("combat", key, buffer, buffer, 120, source);
		String_Trim(buffer);
		if (sscanf(buffer, "%hu,%hu,%hu,%hu", &variable_50, &damage, &fireDelay, &variable_40) < 4) continue;

		for (locsi = 0; locsi < UNIT_MAX; locsi++) {
			UnitInfo *ui = &g_table_unitInfo[locsi];

			if (strcasecmp(ui->o.name, key) != 0) continue;

			ui->damage      = damage;
			ui->variable_40 = variable_40;
			ui->fireDelay   = fireDelay;
			ui->variable_50 = variable_50;
			break;
		}
	}

	if (g_global->debugGame == 0) return;

	for (locsi = 0; locsi < UNIT_MAX; locsi++) {
		const UnitInfo *ui = &g_table_unitInfo[locsi];

		sprintf(buffer, "%*s%4d,%4d,%4d,%4d", 15 - (int)strlen(ui->o.name), "", ui->variable_50, ui->damage, ui->fireDelay, ui->variable_40);
		Ini_SetString("combat", ui->o.name, buffer, source);
	}
}

/**
 * Intro menu.
 */
static void GameLoop_GameIntroAnimationMenu()
{
	bool loc02 = false;
	bool loc06;

	Input_Flags_ClearBits(INPUT_FLAG_KEY_RELEASE | INPUT_FLAG_UNKNOWN_0400 | INPUT_FLAG_UNKNOWN_0100 |
	                      INPUT_FLAG_UNKNOWN_0080 | INPUT_FLAG_UNKNOWN_0040 | INPUT_FLAG_UNKNOWN_0020 |
	                      INPUT_FLAG_UNKNOWN_0008 | INPUT_FLAG_UNKNOWN_0004 | INPUT_FLAG_UNKNOWN_0002);

	Game_Timer_SetState(1, true);

	g_global->campaignID = 0x0;
	g_global->scenarioID = 0x1;
	g_global->playerHouseID = HOUSE_INDEX_INVALID;
	g_global->debugScenario = 0x0;
	g_global->variable_3A3E[LST_SPICE][11] = 0xD7;
	g_global->variable_3A3E[LST_SPICE][12] = 0x35;
	g_global->variable_3A3E[LST_THICK_SPICE][11] = 0xD8;
	g_global->variable_3A3E[LST_THICK_SPICE][12] = 0x35;
	g_global->selectionType = 0x0;
	g_global->variable_3A10 = 0x0;
	g_global->variable_6C8C = 0; /* Seems never set to any other value. */

	g_palette2 = emu_get_memorycsip(Tools_Malloc(768, 0x10));
	g_palette1 = emu_get_memorycsip(Tools_Malloc(768, 0x10));

	g_global->readBufferSize = 0x2EE0;
	g_global->readBuffer = Tools_Malloc(g_global->readBufferSize, 0x20);

	ReadProfileIni("PROFILE.INI");

	Tools_Free(g_global->readBuffer);
	g_global->readBuffer.csip = 0x0;

	File_ReadBlockFile("IBM.PAL", g_palette_998A, 0x300);

	memmove(g_palette1, g_palette_998A, 3 * 256);

	GUI_ClearScreen(0);

	emu_push(emu_es);
	emu_es = emu_Global_GetCSIP(g_palette1).s.cs;
	emu_dx = emu_Global_GetCSIP(g_palette1).s.ip;
	emu_cx = 0x100;
	emu_bx = 0;
	emu_al = 0x12;
	emu_ah = 0x10;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x1852); Interrupt_Video();
	emu_pop(&emu_es);

	GFX_SetPalette(g_palette1);
	GFX_SetPalette(g_palette2);

	g_paletteMapping1 = emu_get_memorycsip(Tools_Malloc(256, 0x0));
	g_paletteMapping2 = emu_get_memorycsip(Tools_Malloc(256, 0x0));

	GUI_Palette_CreateMapping(g_palette1, g_paletteMapping1, 0xC, 0x55);
	g_paletteMapping1[0xFF] = 0xFF;
	g_paletteMapping1[0xDF] = 0xDF;
	g_paletteMapping1[0xEF] = 0xEF;

	GUI_Palette_CreateMapping(g_palette1, g_paletteMapping2, 0xF, 0x55);
	g_paletteMapping2[0xFF] = 0xFF;
	g_paletteMapping2[0xDF] = 0xDF;
	g_paletteMapping2[0xEF] = 0xEF;

	g_global->variable_3C46 = Tools_Malloc(1500, 0x30);
	Unknown_2903_090A(g_global->variable_3C46, 1500);

	g_global->variable_38C6 = File_ReadWholeFile(String_GenerateFilename("MESSAGE"), 0);

	g_fontNew6p = Font_LoadFile((g_config.language == LANGUAGE_GERMAN) ? "new6pg.fnt" : "new6p.fnt");
	g_fontNew8p2 = g_fontNew8p;

	{
		csip32 functions;
		csip32 null;
		functions.csip = 0x353F6128; /* g_global->scriptFunctionsTeam */
		null.csip = 0x0;
		Script_LoadFromFile("TEAM.EMC", &g_global->scriptTeam, functions, null);
	}

	{
		csip32 functions;
		csip32 null;
		functions.csip = 0x353F33B6; /* g_global->scriptFunctionsStructure */
		null.csip = 0x0;
		Script_LoadFromFile("BUILD.EMC", &g_global->scriptStructure, functions, null);
	}

	if (g_global->playerHouseID != HOUSE_INDEX_INVALID) {
		GUI_Palette_CreateRemap((uint8)g_global->playerHouseID);
	}

	Sprites_Load(0, 7, g_sprites);

	g_global->cursorSpriteID = 0;

	Sprites_SetMouseSprite(0, 0, emu_get_memorycsip(g_sprites[0]));

	while (g_global->mouseHiddenDepth > 1) {
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

	if (g_global->debugSkipDialogs == 0) {
		uint16 stringID;
		uint16 maxWidth;
		bool hasSave;
		bool hasFame;
		bool loc10;

		loc10 = true;

		hasSave = File_Exists("_save000.dat");
		hasFame = File_Exists("SAVEFAME.DAT");

		if (hasSave || File_Exists("ONETIME.DAT")) g_global->variable_37B4 = 1;

		stringID = 0x1C; /* Replay Introduction */

		while (true) {
			char *strings[6];

			switch (stringID) {
				case 0x001C: /* Replay Introduction */
					Music_Play(0);

					Tools_Free(g_global->readBuffer);
					g_global->readBufferSize = (g_config.voiceDrv == 0) ? 0x2EE0 : 0x6D60;
					g_global->readBuffer = Tools_Malloc(g_global->readBufferSize, 0x20);

					GUI_Mouse_Hide_Safe();

					Driver_Music_FadeOut();

					GameLoop_GameIntroAnimation();

					Sound_Unknown0363(0xFFFE);

					File_ReadBlockFile("IBM.PAL", g_palette_998A, 3 * 256);
					memmove(g_palette1, g_palette_998A, 3 * 256);

					if (g_global->variable_37B4 == 0) {
						uint8 fileID;

						fileID = File_Open("ONETIME.DAT", 2);
						File_Close(fileID);
						g_global->variable_37B4 = 1;
					}

					Music_Play(0);

					Tools_Free(g_global->readBuffer);

					String_Load("DUNE");

					g_global->readBufferSize = (g_config.voiceDrv == 0) ? 0x2EE0 : 0x4E20;
					g_global->readBuffer = Tools_Malloc(g_global->readBufferSize, 0x20);

					GUI_Mouse_Show_Safe();

					Sprites_Load(0, 7, g_sprites);

					Music_Play(28);

					loc06 = true;
					break;

				case 0x001D: /* Exit Game */
					PrepareEnd();
					exit(0);
					break;

				case 0x014E: /* Hall of Fame */
					GUI_HallOfFame_Show(0xFFFF);

					GFX_SetPalette(g_palette2);

					hasFame = File_Exists("SAVEFAME.DAT");
					loc06 = true;
					break;

				case 0x0153: /* Load Game */
					GUI_Mouse_Hide_Safe();
					Unknown_259E_0006(g_palette2, 30);
					GUI_ClearScreen(0);
					GUI_Mouse_Show_Safe();

					GFX_SetPalette(g_palette1);

					if (GUI_Widget_SaveLoad_Click(false)) {
						loc02 = true;
						loc10 = false;
						if (g_global->variable_38BE == 1) break;
						g_global->variable_38BE = 0;

						Sprites_Load(0, 7, g_sprites);
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

				g_global->variable_4062[21][3] = 0;

				for (i = 0; i < 6; i++) {
					strings[i] = NULL;

					if (g_global->variable_219D[index][i] == 0) {
						if (g_global->variable_4062[21][3] == 0) g_global->variable_4062[21][3] = i;
						continue;
					}

					strings[i] = String_Get_ByIndex(g_global->variable_219D[index][i]);
				}

				GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x22);

				maxWidth = 0;

				for (i = 0; i < g_global->variable_4062[21][3]; i++) {
					if (Font_GetStringWidth(strings[i]) <= maxWidth) continue;
					maxWidth = Font_GetStringWidth(strings[i]);
				}

				maxWidth += 7;

				g_global->variable_4062[21][2] = maxWidth >> 3;
				g_global->variable_4062[13][2] = g_global->variable_4062[21][2] + 2;
				g_global->variable_4062[13][0] = 19 - (maxWidth >> 4);
				g_global->variable_4062[13][1] = 160 - ((g_global->variable_4062[21][3] * g_global->variable_6C71) >> 1);
				g_global->variable_4062[13][3] = (g_global->variable_4062[21][3] * g_global->variable_6C71) + 11;

				Sprites_LoadImage(String_GenerateFilename("TITLE"), 3, 3, NULL, 0);

				GUI_Mouse_Hide_Safe();

				GUI_ClearScreen(0);

				GUI_Screen_Copy(0, 0, 0, 0, SCREEN_WIDTH / 8, SCREEN_HEIGHT, 2, 0);

				Unknown_259E_0006(g_palette1, 30);

				GUI_DrawText_Wrapper("V1.07", 319, 192, 133, 0, 0x231, 0x39);
				GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x22);

				Unknown_07AE_0000(13);

				GUI_Widget_DrawBorder(13, 2, 1);

				GameLoop_B4E6_0108(0, strings, 0xFFFF, 0, 0);

				GUI_Mouse_Show_Safe();

				loc06 = false;
			}

			if (!loc10) break;

			stringID = GameLoop_B4E6_0200(0, strings, 0xFF, 0);

			if (stringID != 0xFFFF) {
				uint16 index = (hasFame ? 2 : 0) + (hasSave ? 1 : 0);
				stringID = g_global->variable_219D[index][stringID];
			}

			GUI_PaletteAnimate();

			if (stringID == 0x1B) break;
		}
	} else {
		Music_Play(0);

		Tools_Free(g_global->readBuffer);

		String_Load("DUNE");

		g_global->readBufferSize = (g_config.voiceDrv == 0) ? 0x2EE0 : 0x4E20;
		g_global->readBuffer = Tools_Malloc(g_global->readBufferSize, 0x20);
	}

	GUI_Mouse_Hide_Safe();

	g_global->variable_37B4 = 0;

	GUI_DrawFilledRectangle(g_global->variable_992D << 3, g_global->variable_992B, (g_global->variable_992D + g_global->variable_992F) << 3, g_global->variable_992B + g_global->variable_9931, 12);

	if (!loc02) {
		Voice_LoadVoices(5);

		Unknown_259E_0006(g_palette2, 15);

		GUI_ClearScreen(0);
	}

	Input_History_Clear();

	if (g_global->enableLog != 0) Mouse_SetMouseMode((uint8)g_global->enableLog, "DUNE.LOG");

	if (!loc02) {
		if (g_global->playerHouseID == HOUSE_INDEX_INVALID) {
			GUI_Mouse_Show_Safe();

			g_global->playerHouseID = HOUSE_MERCENARY;
			g_global->playerHouseID = GUI_PickHouse();

			GUI_Mouse_Hide_Safe();
		}

		Sprites_LoadTiles();

		GUI_Palette_CreateRemap((uint8)g_global->playerHouseID);

		Voice_LoadVoices(g_global->playerHouseID);

		GUI_Mouse_Show_Safe();

		if (g_global->campaignID != 0) g_global->scenarioID = GUI_StrategicMap_Show(g_global->campaignID, true);

		Game_LoadScenario((uint8)g_global->playerHouseID, g_global->scenarioID);
		if (!g_global->debugScenario && !g_global->debugSkipDialogs) GUI_Mentat_ShowBriefing();

		GUI_Mouse_Hide_Safe();

		GUI_ChangeSelectionType((g_global->debugScenario != 0) ? 5 : 4);
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
	uint16 key;

	String_Load("DUNE");

	GameLoop_GameIntroAnimationMenu();

	Game_Timer_SetState(2, g_global->variable_37AA != 0);

	GUI_Mouse_Show_Safe();

	Music_Play(Tools_RandomRange(0, 5) + 8);

	while (true) {
		if (g_global->variable_38BE == 2) {
			Music_Play(28);

			g_global->playerHouseID = HOUSE_MERCENARY;
			g_global->playerHouseID = GUI_PickHouse();

			GUI_Mouse_Hide_Safe();

			Memory_ClearBlock(1);

			Sprites_LoadTiles();

			GUI_Palette_CreateRemap((uint8)g_global->playerHouseID);

			Voice_LoadVoices(g_global->playerHouseID);

			GUI_Mouse_Show_Safe();

			g_global->variable_38BE = 1;
			g_global->scenarioID    = 1;
			g_global->campaignID    = 0;
			g_global->variable_2AF4 = 0;
		}

		if (g_global->variable_3A10 != g_global->selectionType) {
			GUI_ChangeSelectionType(g_global->variable_3A10);
		}

		GUI_PaletteAnimate();

		if (g_global->variable_38BE == 1) {
			GUI_ChangeSelectionType(0);

			Game_LoadScenario((uint8)g_global->playerHouseID, g_global->scenarioID);
			if (!g_global->debugScenario && !g_global->debugSkipDialogs) GUI_Mentat_ShowBriefing();

			g_global->variable_38BE = 0;

			GUI_ChangeSelectionType(4);

			Music_Play(Tools_RandomRange(0, 8) + 8);
			g_global->variable_31BC = g_global->variable_76AC + 300;
		}

		if (g_global->variable_31C0 != g_global->variable_38EC) {
			Map_SetSelectionObjectPosition(0xFFFF);
			Map_SetSelectionObjectPosition(g_global->variable_3A00);
			g_global->variable_31C0 = g_global->variable_38EC;
		}

		if (!Driver_Voice_IsPlaying() && !Sound_Unknown0470()) {
			if (g_global->musicEnabled == 0) {
				Music_Play(2);

				g_global->variable_3E52 = 0;
			} else if (g_global->variable_3E52 > 0) {
				Music_Play(Tools_RandomRange(0, 5) + 17);
				g_global->variable_31BC = g_global->variable_76AC + 300;
				g_global->variable_3E52 = -1;
			} else {
				g_global->variable_3E52 = 0;
				if (g_config.musicDrv != 0 && g_global->variable_76AC > g_global->variable_31BC) {
					if (!Driver_Music_IsPlaying()) {
						Music_Play(Tools_RandomRange(0, 8) + 8);
						g_global->variable_31BC = g_global->variable_76AC + 300;
					}
				}
			}
		}

		GUI_Screen_SetActive(0);

		key = GUI_Widget_HandleEvents(g_widgetLinkedListHead);

		if (g_global->selectionType >= 1 && g_global->selectionType <= 4) {
			if (g_unitSelected != NULL) {
				if (g_global->variable_31C2 < g_global->tickGlobal) {
					Unit_DisplayStatusText(g_unitSelected);
					g_global->variable_31C2 = g_global->tickGlobal + 300;
				}

				if (g_global->selectionType != 1) {
					g_global->selectionPosition = Tile_PackTile(Tile_Center(g_unitSelected->o.position));
				}
			}

			GUI_Widget_ActionPanel_Draw(false);

			InGame_Numpad_Move(key);

			GUI_DrawCredits((uint8)g_global->playerHouseID, 0);

			GameLoop_Team();
			GameLoop_Unit();
			GameLoop_Structure();
			GameLoop_House();

			Unknown_07D4_0000(0);
		}

		GUI_DisplayText(NULL, 0);

		if (g_global->variable_38F8 != 0 && g_global->debugScenario == 0) {
			GameLoop_LevelEnd();
		}

		if (g_global->variable_38F8 == 0) break;
	}

	GUI_Mouse_Hide_Safe();

	if (g_global->enableLog != 0) Mouse_SetMouseMode(INPUT_MOUSE_MODE_NORMAL, "DUNE.LOG");

	GUI_Mouse_Hide_Safe();

	Unknown_07AE_0000(0);

	GUI_Screen_SetActive(2);

	GFX_ClearScreen();

	GUI_Screen_FadeIn(g_global->variable_992D, g_global->variable_992B, g_global->variable_992D, g_global->variable_992B, g_global->variable_992F, g_global->variable_9931, 2, 0);
}

static bool Unknown_25C4_000E()
{
	uint32 totalSize = 0;
	uint16 i;
	csip32 memBlock;

	memset(&emu_get_memory8(0xA000, 0x0000, 0x0000), 0, SCREEN_WIDTH * SCREEN_HEIGHT);

	Video_Init();
	Mouse_Init();

	g_global->variable_7097 = g_global->mouseInstalled == 0 ? 1 : -g_global->mouseInstalled;

	for (i = 1; i < 8; i++) {
		uint32 size = (g_global->variable_6CD3[i][1] + 15) & 0xFFFFFFF0;

		if ((size & 0xFF000000) != 0) {
			PrepareEnd();
			printf("PageArraySize is negative!\r\n");

			Input_WaitForValidInput();
			exit(5);
		}

		g_global->variable_6CD3[i][0] = size;
		g_global->variable_6CD3[i][1] = size;

		totalSize += size;
	}

	memBlock = Tools_Malloc(totalSize, 0x30);

	for (i = 1; i < 8; i++) {
		if (g_global->variable_6CD3[i][0] == 0) continue;

		g_global->variable_6C93[i][0] = memBlock.s.cs;
		g_global->variable_6C93[i][1] = memBlock.s.cs;

		memBlock.csip += g_global->variable_6CD3[i][0];
		memBlock = Tools_GetSmallestIP(memBlock);
	}

	g_global->variable_6C93[0][0] = 0xA000;
	g_global->variable_6C93[0][1] = 0xA000;

	GFX_ClearScreen();

	g_fontNew8p = Font_LoadFile("new8p.fnt");

	if (g_fontNew8p == NULL) {
		printf("\r\nUnable to load font new8p.fnt\r\nReinstall program.\r\n");

		Input_WaitForValidInput();
		return false;
	}

	Font_Select(g_fontNew8p);

	g_palette_998A = calloc(256 * 3, sizeof(uint8));

	memset(&g_palette_998A[45], 63, 3);

	GFX_SetPalette(g_palette_998A);

	srand((unsigned)time(NULL));

	Unknown_07AE_0000(0);

	return true;
}

void Main()
{
	if (!Config_Read("dune.cfg", &g_config)) {
		printf("\r\nThe setup program must be run first.\r\n"
		       "\r\nZuerst muß das Setup-Programm betrieben werden.\r\n"
		       "\r\nLe programme de configuration doit d'abord être lancé.\r\n"
		       "\r\n");
		exit(1);
	}

	Input_Init();
	if (!g_config.useXMS) {
		g_config.voiceDrv = 0;
	}

	if (!g_config.useMouse) Input_Flags_SetBits(INPUT_FLAG_UNKNOWN_2000 | INPUT_FLAG_NO_CLICK);

	g_global->variable_6CD3[0][0] = 0xFA00;
	g_global->variable_6CD3[0][1] = 0xFA00;
	g_global->variable_6CD3[1][0] = 0xFBF4;
	g_global->variable_6CD3[1][1] = 0xFBF4;
	g_global->variable_6CD3[2][0] = 0xFA00;
	g_global->variable_6CD3[2][1] = 0xFA00;
	g_global->variable_6CD3[3][0] = 0xFD0D;
	g_global->variable_6CD3[3][1] = 0xFD0D;
	g_global->variable_6CD3[4][0] = 0xA044;
	g_global->variable_6CD3[4][1] = 0xA044;

	Drivers_All_Init(g_config.soundDrv, g_config.musicDrv, g_config.voiceDrv);

	if (!Unknown_25C4_000E()) exit(1);

	g_global->variable_7097 = 0;

	GameLoop_Main();
	PrepareEnd();

	printf("%s\n", String_Get_ByIndex(0x141)); /* "Thank you for playing Dune II." */

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

	g_global->variable_38BC++;

	oldSelectionType = g_global->selectionType;
	g_global->selectionType = 0;

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
		if (t->isUnveiled) Map_UnveilTile(i, (uint8)g_global->playerHouseID);
	}

	find.houseID = 0xFFFF;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Unit *u;

		u = Unit_Find(&find);
		if (u == NULL) break;

		if (u->o.flags.s.isNotOnMap) continue;

		Unit_RemoveFog(u);
		Unit_B4CD_01BF(1, u);
	}

	find.houseID = 0xFFFF;
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
				Structure_SetAnimation(s, 2);
			}
		}

		Script_Load(&s->o.script, s->o.type);

		if (s->o.type == STRUCTURE_PALACE) {
			House_Get_ByIndex(s->o.houseID)->palacePosition = s->o.position;
		}

		if (House_Get_ByIndex(s->o.houseID)->palacePosition.tile != 0) continue;
		House_Get_ByIndex(s->o.houseID)->palacePosition = s->o.position;
	}

	find.houseID = 0xFFFF;
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

	GUI_Palette_CreateRemap((uint8)g_global->playerHouseID);

	Sprites_Load(0, 7, g_sprites);

	g_global->scenario.savegameVersion = 0x290;

	Map_SetSelection(g_global->selectionPosition);

	if (g_global->variable_38E8 != 0xFFFF) {
		g_structureActive = Structure_Get_ByIndex(g_global->variable_38E8);
	} else {
		g_structureActive = NULL;
	}

	if (g_global->activeStructureType != 0xFFFF) {
		Map_SetSelectionSize(g_table_structureInfo[g_global->activeStructureType].layout);
	} else {
		Structure *s = Structure_Get_ByPackedTile(g_global->selectionPosition);

		if (s != NULL) Map_SetSelectionSize(g_table_structureInfo[s->o.type].layout);
	}

	Voice_LoadVoices(g_global->playerHouseID);

	g_global->variable_38C0 = g_global->tickGlobal + 70;
	g_global->variable_3A12 = 1;
	g_global->playerCredits = 0xFFFF;

	g_global->selectionType = oldSelectionType;
	g_global->variable_38BC--;
}

/**
 * Initialize a game, by setting most variables to zero, cleaning the map, etc
 *  etc.
 */
void Game_Init()
{
	csip32 null;
	null.csip = 0x0;

	Unit_Init();
	Structure_Init();
	Team_Init();
	House_Init();

	memset(g_animations, 0, ANIMATION_MAX * sizeof(Animation));
	memset(g_map395A, 0, 32 * sizeof(struct_395A));
	memset(g_map, 0, 64 * 64 * sizeof(Tile));

	memset(g_global->variable_95E5, 0, 512 * sizeof(uint8));
	memset(g_global->variable_93E5, 0, 512 * sizeof(uint8));
	memset(g_global->variable_91E5, 0, 512 * sizeof(uint8));
	memset(g_global->variable_8FE5, 0, 512 * sizeof(uint8));
	memset(g_global->variable_8DE5, 0, 512 * sizeof(uint8));

	memset(g_mapSpriteID, 0, 64 * 64 * sizeof(uint16));
	memset(g_global->starportAvailable, 0, 27 * sizeof(uint16));

	Sound_Unknown0363(0xFFFE);

	g_global->playerCreditsNoSilo     = 0;
	g_global->houseMissileCountdown   = 0;
	g_global->variable_38EC           = 0;
	g_global->activeStructurePosition = 0;

	g_unitHouseMissile = NULL;
	g_unitActive = NULL;
	g_structureActive = NULL;

	g_global->activeAction            = 0xFFFF;
	g_global->activeStructureType     = 0xFFFF;
	g_global->variable_38EE           = 0xFFFF;

	GUI_DisplayText(NULL, 0xFFFF);
}

/**
 * Load a scenario is a safe way, and prepare the game.
 * @param houseID The House which is going to play the game.
 * @param scenarioID The Scenario to load.
 */
void Game_LoadScenario(uint8 houseID, uint16 scenarioID)
{
	Sound_Unknown0363(0xFFFE);

	Game_Init();

	g_global->variable_38BC++;

	if (!Scenario_Load(scenarioID, houseID)) {
		GUI_DisplayModalMessage(g_global->string_2BCA, 0xFFFF);

		PrepareEnd();
		exit(0);
	}

	Game_Prepare();

	if (scenarioID < 5) {
		g_global->hintsShown1 = 0;
		g_global->hintsShown2 = 0;
	}

	g_global->variable_38BC--;
}

/**
 * Close down facilities used by the program such as resetting the interrupt
 *   vector and clearing the mouse callback.
 * Always called just before the program terminates.
 */
void PrepareEnd()
{
	Drivers_All_Uninit();

	Mouse_CallbackClear();

	if (g_global->mouseFileID != 0xFF) Mouse_SetMouseMode(INPUT_MOUSE_MODE_NORMAL, NULL);

	Input_Uninit();
}

void Game_Timer_Interrupt()
{
	uint16 timers = g_global->timersActive;

	if ((timers & 0x1) != 0) g_global->variable_76AC++;
	if ((timers & 0x2) != 0) g_global->tickGlobal++;
	g_global->variable_76A6++;
	g_global->variable_76A8++;

	if (g_global->variable_76B4 != 0) g_global->variable_76B4--;
}
