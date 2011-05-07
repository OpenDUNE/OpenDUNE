/* $Id$ */

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

extern void f__22A6_04A5_000F_3B8F();
extern void f__2B4C_0002_0029_64AF();
extern void f__2B6C_0137_0020_C73F();
extern void f__2B6C_0169_001E_6939();
extern void f__2B6C_0197_00CE_4D32();
extern void f__2B6C_0292_0028_3AD7();
extern void f__29E8_08B5_000A_FC14();
extern void f__B4DA_0AB8_002A_AAB2();
extern void f__B4E0_0000_000F_14AD();
extern void emu_Tools_Free();
extern void emu_Mouse_InsideRegion();
extern void overlay(uint16 cs, uint8 force);
extern void emu_Input_History_Clear();

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

	Unknown_B483_0363(0xFFFE);

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

	emu_push(w2csip.s.cs); emu_push(w2csip.s.ip);
	emu_push(emu_cs); emu_push(0x0E1C); emu_cs = 0x23E1; emu_Tools_Free();
	emu_sp += 4;

	emu_push(w1csip.s.cs); emu_push(w1csip.s.ip);
	emu_push(emu_cs); emu_push(0x0E0F); emu_cs = 0x23E1; emu_Tools_Free();
	emu_sp += 4;

	if (musicID != 0xFFFF) Driver_Music_FadeOut();

	Sprites_Load(0, 7, g_sprites);
}

/**
 * Handle clicks on the Mentat widget.
 * @return True, always.
 */
bool GUI_Widget_Mentat_Click()
{
	g_global->cursorSpriteID = 0;

	emu_push(emu_get_memory16(0x2DCE, 0x00, 0x442)); emu_push(emu_get_memory16(0x2DCE, 0x00, 0x440)); /* g_sprites */
	emu_push(0);
	emu_push(0);
	emu_push(emu_cs); emu_push(0x0368); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	emu_sp += 8;

	Unknown_B483_0363(0xFFFE);

	{
		csip32 nullcsip;
		nullcsip.csip = 0x0;
		Driver_Voice_Play(NULL, nullcsip, 0xFF, 0xFF);
	}

	Music_Play(g_houseInfo[g_global->playerHouseID].musicBriefing);

	Sprites_UnloadTiles();

	Sprites_Load(1, 7, g_sprites);

	Tools_Var76B8_Set(2, false);

	emu_push(0);
	emu_push(emu_cs); emu_push(0x03C3); emu_cs = 0x34E0; overlay(0x34E0, 0); f__B4E0_0000_000F_14AD();
	emu_sp += 2;

	Tools_Var76B8_Set(2, true);

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

	Unknown_Set_Global_6C91(2);

	Unknown_07AE_00E4(8);

	if (wsaFilename.csip != 0x0) {
		csip32 wsa;
		csip32 memBlock;
		csip32 null;

		null.csip = 0x0;

		emu_push(5);
		emu_push(emu_cs); emu_push(0x0E98); emu_cs = 0x252E; emu_Memory_GetBlock1();
		emu_sp += 2;

		memBlock.s.cs = emu_dx;
		memBlock.s.ip = emu_ax;

		wsa = WSA_LoadFile((char *)emu_get_memorycsip(wsaFilename), memBlock, g_global->variable_6CD3[2][0], 0, null);

		WSA_DisplayFrame(wsa, 0, g_global->variable_992D * 8, g_global->variable_992B, 2, 0);
		WSA_Unload(wsa);
	}

	GUI_DrawSprite_8002(2);
	Unknown_Set_Global_6C91(0);

	emu_push(emu_cs); emu_push(0x0EF8); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

	GUI_Unknown_24D0_000D(0, 0, 0, 0, 40, 200, 2, 0);

	emu_push(emu_cs); emu_push(0x0F20); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

	Unknown_259E_0006(g_global->variable_3C32, 15);

	emu_push(0); emu_push(0);
	emu_push(1);
	emu_push(stringBuffer.s.cs); emu_push(stringBuffer.s.ip);
	emu_push(0); emu_push(0);
	emu_push(wsaFilename.s.cs); emu_push(wsaFilename.s.ip);
	emu_push(emu_cs); emu_push(0x0F55); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0AB8_002A_AAB2();
	emu_sp += 18;
	ret = emu_ax;

	if (w != NULL) {
		do {
			GUI_Widget_DrawAll(w);
			ret = GUI_Widget_HandleEvents(w);

			GUI_PaletteAnimate();
			GUI_Mentat_Animation(0);
		} while ((ret & 0x8000) == 0);
	}

	emu_push(emu_cs); emu_push(0x0F97); emu_cs = 0x29E8; emu_Input_History_Clear();

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
	uint16 old_6C91;
	int i;

	char *houseName = (char *)emu_get_memorycsip(g_houseInfo[houseID].name);
	sprintf((char *)g_global->variable_9939, "MENTAT%c.CPS", houseName[0]);

	Sprites_LoadImage((char *)g_global->variable_9939, 3, 3, (void *)emu_get_memorycsip(g_global->variable_998A), 1);

	emu_push(0x0); emu_push(0x0);
	emu_push(0x2);
	emu_push(0x3);
	emu_push(emu_cs); emu_push(0x0068); emu_cs = 0x22A6; f__22A6_04A5_000F_3B8F();
	emu_sp += 8;

	old_6C91 = Unknown_Set_Global_6C91(2);

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
		csip32 memBlock;

		null.csip = 0x0;

		emu_push(0x5);
		emu_push(emu_cs); emu_push(0x027D); emu_cs = 0x252E; emu_Memory_GetBlock1();
		emu_sp += 2;
		memBlock.s.cs = emu_dx;
		memBlock.s.ip = emu_ax;

		locPtr = WSA_LoadFile(houseFilename, memBlock, g_global->variable_6CD3[2][1], 0, null);
		WSA_DisplayFrame(locPtr, 0, g_global->variable_992D * 8, g_global->variable_992B, 2, 0);
		WSA_Unload(locPtr);
	}

	GUI_DrawSprite_8002(g_global->variable_6C91);
	Unknown_Set_Global_6C91(old_6C91);
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

			emu_push(g_global->variable_800F + Sprite_GetHeight(sprite));
			emu_push(g_global->variable_800E + Sprite_GetWidth(sprite));
			emu_push(g_global->variable_800F);
			emu_push(g_global->variable_800E);
			emu_push(emu_cs); emu_push(0x03CE); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
			emu_sp += 0x8;

			GUI_DrawSprite(0, sprite, g_global->variable_800E, g_global->variable_800F, 0, 0);

			emu_push(emu_cs); emu_push(0x03F9); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
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

			emu_push(g_global->variable_800B + Sprite_GetHeight(sprite));
			emu_push(g_global->variable_800A + Sprite_GetWidth(sprite));
			emu_push(g_global->variable_800B);
			emu_push(g_global->variable_800A);
			emu_push(emu_cs); emu_push(0x0526); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
			emu_sp += 0x8;

			GUI_DrawSprite(0, sprite, g_global->variable_800A, g_global->variable_800B, 0, 0);

			emu_push(emu_cs); emu_push(0x0551); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }

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

		emu_push(0x41);
		emu_push(emu_cs); emu_push(0x05AC); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
		emu_sp += 0x2;
		if (emu_ax == 0) {
			emu_push(0x42);
			emu_push(emu_cs); emu_push(0x05BA); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
			emu_sp += 0x2;
			if (emu_ax == 0) {
				if (g_global->variable_8022 != 0) {
					g_global->variable_8022 = 0;
					g_global->variable_8016 = 0;
					bool06 = 0x1;
				}
				goto l__0634;
			}
		}

		emu_push(g_global->variable_800D);
		emu_push(g_global->variable_800C);
		emu_push(g_global->variable_800B);
		emu_push(g_global->variable_800A);
		emu_push(emu_cs); emu_push(0x05DC); emu_cs = 0x29A3; emu_Mouse_InsideRegion();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
		emu_sp += 0x8;
		if (emu_ax != 0) {
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
l__0634:
		if (bool06 != 0x0) {
			sprite = g_global->variable_7FC6[1][g_global->variable_8022];

			emu_push(g_global->variable_800B + Sprite_GetHeight(sprite));
			emu_push(g_global->variable_800A + Sprite_GetWidth(sprite));
			emu_push(g_global->variable_800B);
			emu_push(g_global->variable_800A);
			emu_push(emu_cs); emu_push(0x0692); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
			emu_sp += 0x8;

			GUI_DrawSprite(0, sprite, g_global->variable_800A, g_global->variable_800B, 0, 0);

			emu_push(emu_cs); emu_push(0x06BD); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
		}
	}

	bool06 = 0x0;

	emu_push(0x41);
	emu_push(emu_cs); emu_push(0x06CB); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
	emu_sp += 0x2;
	if (emu_ax == 0) {
		emu_push(0x42);
		emu_push(emu_cs); emu_push(0x06D9); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
		emu_sp += 0x2;
		if (emu_ax == 0) goto l__0738;
	}

	emu_push(g_global->variable_8009);
	emu_push(g_global->variable_8008);
	emu_push(g_global->variable_8007);
	emu_push(g_global->variable_8006);
	emu_push(emu_cs); emu_push(0x06FB); emu_cs = 0x29A3; emu_Mouse_InsideRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
	emu_sp += 0x8;
	if (emu_ax != 0) {
		if (g_global->variable_801E != 0x4) {
			bool06 = 0x1;
			g_global->variable_801E = (g_global->variable_801E == 3) ? 4 : 3;
			g_global->variable_8020 = 0x0;
			g_global->variable_8012 = 0;
		}
		goto l__09F3;
	}
l__0738:
	emu_push(g_global->variable_8009 + 24);
	emu_push(g_global->variable_8008 + 16);
	emu_push((int16)g_global->variable_8007 - 8);
	emu_push((int16)g_global->variable_8006 - 16);
	emu_push(emu_cs); emu_push(0x0761); emu_cs = 0x29A3; emu_Mouse_InsideRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
	emu_sp += 0x8;
	if (emu_ax != 0) {
		emu_push(SCREEN_HEIGHT - 1);
		emu_push(g_global->variable_8008 + 8);
		emu_push(g_global->variable_8009);
		emu_push((int16)g_global->variable_8006 - 8);
		emu_push(emu_cs); emu_push(0x078C); emu_cs = 0x29A3; emu_Mouse_InsideRegion();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
		emu_sp += 0x8;
		if (emu_ax != 0) {
			i = 3;
		} else {
			emu_push(g_global->variable_8009 + 8);
			emu_push(g_global->variable_8008 + 16);
			emu_push((int16)g_global->variable_8007 - 8);
			emu_push(g_global->variable_8008);
			emu_push(emu_cs); emu_push(0x07BE); emu_cs = 0x29A3; emu_Mouse_InsideRegion();
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
			emu_sp += 0x8;
			if (emu_ax != 0) {
				i = 2;
			} else {
				emu_push(g_global->variable_8009 + 8);
				emu_push(g_global->variable_8006);
				emu_push((int16)g_global->variable_8007 - 8);
				emu_push((int16)g_global->variable_8006 - 16);
				emu_push(emu_cs); emu_push(0x07F0); emu_cs = 0x29A3; emu_Mouse_InsideRegion();
				/* Check if this overlay should be reloaded */
				if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
				emu_sp += 0x8;
				i = (emu_ax == 0) ? 0 : 1;
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

		emu_push(g_global->variable_8007 + Sprite_GetHeight(sprite));
		emu_push(g_global->variable_8006 + Sprite_GetWidth(sprite));
		emu_push(g_global->variable_8007);
		emu_push(g_global->variable_8006);
		emu_push(emu_cs); emu_push(0x0A51); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
		emu_sp += 0x8;

		GUI_DrawSprite(0, sprite, g_global->variable_8006, g_global->variable_8007, 0, 0);

		emu_push(emu_cs); emu_push(0x0A7C); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
	}
}


