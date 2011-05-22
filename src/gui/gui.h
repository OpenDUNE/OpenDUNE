/* $Id$ */

#ifndef GUI_GUI_H
#define GUI_GUI_H

struct Widget;
struct struct_8BEA;

extern void GUI_DrawWiredRectangle(uint16 left, uint16 top, uint16 right, uint16 bottom, uint8 colour);
extern void GUI_DrawFilledRectangle(int16 left, int16 top, int16 right, int16 bottom, uint8 colour);
extern void GUI_DisplayText(const char *str, uint16 arg0A, ...);
extern void GUI_DrawText(char *string, int16 left, int16 top, uint8 fgColour, uint8 bgColour);
extern void GUI_DrawText_Wrapper(char *string, int16 left, int16 top, uint8 fgColour, uint8 bgColour, uint16 flags, ...);
extern void GUI_PaletteAnimate();
extern void GUI_UpdateProductionStringID();
extern uint16 GUI_DisplayModalMessage(char *str, uint16 stringID, ...);
extern uint16 GUI_SplitText(char *str, uint16 maxwidth, char delimiter);
extern void GUI_DrawSprite(uint16 memory, csip32 sprite_csip, int16 posX, int16 posY, uint16 windowID, uint16 flags, ...);
extern void GUI_DrawSprite_8002(uint16 memory);
extern void GUI_ShowEndStats(uint16 killedAllied, uint16 killedEnemy, uint16 destroyedAllied, uint16 destroyedEnemy, uint16 harvestedAllied, uint16 harvestedEnemy, int16 score, uint16 houseID);
extern uint16 GUI_PickHouse();
extern void GUI_Palette_CreateMapping(uint8 *palette, uint8 *colors, uint8 reference, uint8 intensity);
extern void GUI_DrawBorder(uint16 left, uint16 top, uint16 width, uint16 height, uint16 colourSchemaIndex, bool fill);
extern uint16 GUI_DisplayHint(uint16 stringID, uint16 spriteID);
extern void GUI_DrawProgressbar(uint16 current, uint16 max);
extern void GUI_DrawInterfaceAndRadar(uint16 unknown);
extern void GUI_DrawCredits(uint8 houseID, uint16 mode);
extern void GUI_ChangeSelectionType(uint16 selectionType);
extern void GUI_InitColors(uint8 *colors, uint8 first, uint8 last);
extern void GUI_DrawLine(int16 x1, int16 y1, int16 x2, int16 y2, uint8 color);
extern void GUI_SetClippingArea(uint16 left, uint16 top, uint16 right, uint16 bottom);
extern uint16 GUI_DisplayFactoryWindow(uint16 var06, bool isStarPort, uint16 var0A);
extern char *GUI_String_Get_ByIndex(uint16 stringID);
extern uint16 GUI_ShowMap(uint16 campaignID, bool arg08);
extern void GUI_ClearScreen(uint16 arg06);
extern uint16 GUI_Get_Scrollbar_Position(struct Widget *w);
extern void GUI_DrawText_Monospace(char *string, uint16 left, uint16 top, uint8 fgColour, uint8 bgColour, uint16 charWidth);
extern void GUI_FactoryWindow_B495_0F30();
extern struct struct_8BEA *GUI_FactoryWindow_GetStruct8BEA(int16 offset);
extern void GUI_FactoryWindow_DrawDetails();
extern void GUI_FactoryWindow_DrawCaption(char *caption);

/* editbox.c */
extern uint16 GUI_EditBox(csip32 text, uint16 maxLength, uint16 unknown1, csip32 wcsip, csip32 uknown3, uint16 unknown4);


extern void emu_GUI_DrawWiredRectangle();
extern void emu_GUI_DrawFilledRectangle();
extern void emu_GUI_DrawText();
extern void emu_GUI_DrawText_Wrapper();
extern void emu_GUI_PaletteAnimate();
extern void emu_GUI_DisplayModalMessage();
extern void emu_GUI_SplitText();
extern void emu_GUI_DrawSprite();
extern void emu_GUI_DrawSprite_8002();
extern void emu_GUI_DrawBorder();
extern void emu_GUI_DisplayHint();
extern void emu_GUI_DrawCredits();
extern void emu_GUI_DrawLine();
extern void emu_GUI_Unknown_24D0_000D();
extern void GUI_Unknown_24D0_000D(int16 unknown06, int16 unknown08, int16 unknown0A, int16 unknown0C, int16 unknown0E, int16 unknown10, int16 unknown12, int16 unknown14);
extern void emu_GUI_Mentat_Display();
extern void emu_GUI_Mentat_Animation();
extern void emu_GUI_Mentat_SelectHelpSubject();
extern void emu_GUI_Mentat_Create_HelpScreen_Widgets();
extern void emu_GUI_Get_Scrollbar_Position();
extern void emu_GUI_FactoryWindow_GetStruct8BEA();

/* emu_editbox.c */
extern void emu_GUI_EditBox();

#endif /* GUI_GUI_H */
