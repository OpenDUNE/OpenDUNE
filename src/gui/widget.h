/* $Id$ */

/** @file src/gui/widget.h %Widget definitions. */

#ifndef GUI_WIDGET_H
#define GUI_WIDGET_H

/**
 * Types of WidgetClick available in the game.
 */
typedef enum WidgetClickType {
	WIDGET_CLICK_MENTAT         = 0,
	WIDGET_CLICK_OPTIONS        = 1,
	WIDGET_CLICK_NAME           = 2,
	WIDGET_CLICK_PICTURE        = 3,
	WIDGET_CLICK_REPAIR_UPGRADE = 4,
	WIDGET_CLICK_BUILD_PLACE    = 5,
	WIDGET_CLICK_CANCEL         = 6,
	WIDGET_CLICK_UNIT_COMMAND_1 = 7,
	WIDGET_CLICK_UNIT_COMMAND_2 = 8,
	WIDGET_CLICK_UNIT_COMMAND_3 = 9,
	WIDGET_CLICK_UNIT_COMMAND_4 = 10,
	WIDGET_CLICK_VIEWPORT_1     = 11,
	WIDGET_CLICK_VIEWPORT_2     = 12,
	WIDGET_CLICK_VIEWPORT_3     = 13,
	WIDGET_CLICK_VIEWPORT_4     = 14,
	WIDGET_CLICK_VIEWPORT_5     = 15,
	WIDGET_CLICK_VIEWPORT_6     = 16,
	WIDGET_CLICK_VIEWPORT_7     = 17,

	WIDGET_CLICK_MAX            = 18,
	WIDGET_CLICK_INVALID        = 0xFFFF
} WidgetClickType;


/**
 * Types of DrawMode available in the game.
 */
typedef enum DrawMode {
	DRAW_MODE_NONE                = 0,               /*!< Draw nothing. */
	DRAW_MODE_SPRITE              = 1,               /*!< Draw a sprite. */
	DRAW_MODE_TEXT                = 2,               /*!< Draw text. */
	DRAW_MODE_UNKNOWN3            = 3,
	DRAW_MODE_CUSTOM_PROC         = 4,               /*!< Draw via a custom defined function. */
	DRAW_MODE_WIRED_RECTANGLE     = 5,               /*!< Draw a wired rectangle. */
	DRAW_MODE_XORFILLED_RECTANGLE = 6,               /*!< Draw a filled rectangle using xor. */

	DRAW_MODE_MAX             = 7
} DrawMode;

/**
 * Scrollbar information as stored in the memory.
 */
typedef struct WidgetScrollbar {
	/* 0000(4)   */ struct Widget *parent;             /*!< Parent widget we belong to. */
	/* 0004(2)   */ uint16 size;                       /*!< Size (in pixels) of the scrollbar. */
	/* 0006(2)   */ uint16 position;                   /*!< Current position of the scrollbar. */
	/* 0008(2)   */ uint16 scrollMax;                  /*!< Maximum position of the scrollbar cursor. */
	/* 000A(2)   */ uint16 scrollPageSize;             /*!< Amount of elements to scroll per page. */
	/* 000C(2)   */ uint16 scrollPosition;             /*!< Current position of the scrollbar cursor. */
	/* 000E(1)   */ uint8  pressed;                    /*!< If non-zero, the scrollbar is currently pressed. */
	/* 000F(1)   */ uint8  dirty;                      /*!< If non-zero, the scrollbar is dirty (requires repaint). */
	/* 0010(2)   */ uint16 pressedPosition;            /*!< Position where we clicked on the scrollbar when pressed. */
	/* 0012(4)   */ csip32 drawProc;                   /*!< Draw proc (called on every draw). Can be null. */
} WidgetScrollbar;

/**
 * A Widget as stored in the memory.
 */
typedef struct Widget {
	/* 0000(4)   */ struct Widget *next;               /*!< Next widget in the list. */
	/* 0004(2)   */ uint16 index;                      /*!< Index of the widget. */
	/* 0006(2)   */ uint16 shortcut;                   /*!< What key triggers this widget. */
	/* 0008(2)   */ uint16 shortcut2;                  /*!< What key (also) triggers this widget. */
	/* 000A(1)   */ uint8  drawModeNormal;             /*!< Draw mode when normal. */
	/* 000B(1)   */ uint8  drawModeSelected;           /*!< Draw mode when selected. */
	/* 000C(1)   */ uint8  drawModeDown;               /*!< Draw mode when down. */
	/* 000D(1)   */ uint8  variable_0D;                /*!< ?? */
	/* 000E(2)   */ union {
	                     struct {
	/*      0001 */              BITTYPE requiresClick:1;   /*!< Requires click. */
	/*      0002 */              BITTYPE variable_0002:1;   /*!< ?? */
	/*      0004 */              BITTYPE clickAsHover:1;    /*!< Click as hover. */
	/*      0008 */              BITTYPE invisible:1;       /*!< Widget is invisible. */
	/*      0010 */              BITTYPE variable_0010:1;   /*!< ?? */
	/*      0020 */              BITTYPE noClickCascade:1;  /*!< Don't cascade the click event to any other widgets. */
	/*      0040 */              BITTYPE loseSelect:1;      /*!< Lose select when leave. */
	/*      0080 */              BITTYPE variable_0080:1;   /*!< ?? */
	/*      0F00 */              BITTYPE buttonFilterLeft:4;/*!< Left button filter. */
	/*      F000 */              BITTYPE buttonFilterRight:4;/*!< Right button filter. */
	                     } s;
	                     uint16 all; } flags;               /*!< General flags of the Widget. */
	/* 0010(4)   */ csip32 drawProcNormal;             /*!< Draw proc when normal. */
	/* 0014(4)   */ csip32 drawProcSelected;           /*!< Draw proc when selected. */
	/* 0018(4)   */ csip32 drawProcDown;               /*!< Draw proc when down. */
	/* 001C(2)   */ uint16 parentID;                   /*!< Parent window we are nested in. */
	/* 001E(2)   */  int16 offsetX;                    /*!< X position from parent we are at, in pixels. */
	/* 0020(2)   */  int16 offsetY;                    /*!< Y position from parent we are at, in pixels. */
	/* 0022(2)   */ uint16 width;                      /*!< Width of widget in pixels. */
	/* 0024(2)   */ uint16 height;                     /*!< Height of widget in pixels. */
	/* 0026(1)   */ uint8  fgColourNormal;             /*!< Foregroud colour for draw proc when normal. */
	/* 0027(1)   */ uint8  bgColourNormal;             /*!< Background colour for draw proc when normal. */
	/* 0028(1)   */ uint8  fgColourSelected;           /*!< Foregroud colour for draw proc when selected. */
	/* 0029(1)   */ uint8  bgColourSelected;           /*!< Background colour for draw proc when selected. */
	/* 002A(1)   */ uint8  fgColourDown;               /*!< Foregroud colour for draw proc when down. */
	/* 002B(1)   */ uint8  bgColourDown;               /*!< Background colour for draw proc when down. */
	/* 002C(1)   */ uint8  variable_2C;                /*!< ?? */
	/* 002D()    */ uint8   unknown_002D[0x0001];
	/* 002E(2)   */ union {
	                     struct {
	/*      0001 */              BITTYPE selected:1;        /*!< Selected. */
	/*      0002 */              BITTYPE hover1:1;          /*!< Hover. */
	/*      0004 */              BITTYPE hover2:1;          /*!< Hover. */
	/*      0008 */              BITTYPE selectedLast:1;    /*!< Last Selected. */
	/*      0010 */              BITTYPE hover1Last:1;      /*!< Last Hover. */
	/*      0020 */              BITTYPE hover2Last:1;      /*!< Last Hover. */
	/*      0040 */              BITTYPE variable_0040:1;   /*!< ?? */
	/*      0080 */              BITTYPE keySelected:1;     /*!< Key Selected. */
	/*      FF00 */              BITTYPE buttonState:8;     /*!< Button state. */
	                     } s;
	                     uint16 all; } state;               /*!< State of the Widget. */
	/* 0030(4)   */ csip32 clickProc;                  /*!< Function to execute when widget is pressed. */
	/* 0034(4)   */ void *data;                        /*!< If non-NULL, it points to WidgetScrollbar or HallOfFameData belonging to this widget. */
	/* 0038(2)   */ uint16 stringID;                   /*!< Strings to print on the widget. Index above 0xFFF2 are special. */
	/* 003A(2)   */ uint16 variable_3A;                /*!< ?? */
} Widget;

MSVC_PACKED_BEGIN
/**
 * Static information per WidgetClick type.
 */
typedef struct WidgetClickInfo {
	/* 0000(2)   */ PACK uint16 index;                      /*!< ?? */
	/* 0002(4)   */ PACK csip32 clickProc;                  /*!< Function to execute when widget is pressed. */
	/* 0006(2)   */ PACK uint16 shortcut;                   /*!< ?? */
	/* 0008(2)   */ PACK uint16 flags;                      /*!< ?? */
	/* 000A(2)   */ PACK int16  spriteID;                   /*!< ?? */
	/* 000C(2)   */ PACK uint16 offsetX;                    /*!< ?? */
	/* 000E(2)   */ PACK uint16 offsetY;                    /*!< ?? */
	/* 0010(2)   */ PACK uint16 width;                      /*!< ?? */
	/* 0012(2)   */ PACK uint16 height;                     /*!< ?? */
	/* 0014(2)   */ PACK uint16 stringID;                   /*!< ?? */
	/* 0016(2)   */ PACK uint16 variable_3A;                /*!< ?? */
} GCC_PACKED WidgetClickInfo;
MSVC_PACKED_END
assert_compile(sizeof(WidgetClickInfo) == 0x18);

/**
 * Static information per WidgetClick type.
 */
typedef struct WindowDesc {
	/* 0000(2)   */ uint16 index;                      /*!< ?? */
	/* 0002(2)   */ uint16 stringID;                   /*!< ?? */
	/* 0004(2)   */ bool   addArrows;                  /*!< ?? */
	/* 0006(1)   */ uint8  widgetCount;                /*!< ?? */
	/* 0007(98)  */ struct {
	                       uint16 stringID;            /*!< ?? */
	                       uint16 offsetX;             /*!< ?? */
	                       uint16 offsetY;             /*!< ?? */
	                       uint16 width;               /*!< ?? */
	                       uint16 height;              /*!< ?? */
	                       uint16 labelStringId;       /*!< ?? */
	                       uint16 shortcut2;           /*!< ?? */
	                     } widgets[7];                 /*!< ?? */
} WindowDesc;

extern WidgetClickInfo *g_widgetClickInfo;

extern WindowDesc g_optionsWindowDesc;
extern WindowDesc g_gameControlWindowDesc;
extern WindowDesc g_yesNoWindowDesc;
extern WindowDesc g_saveLoadWindowDesc;
extern WindowDesc g_savegameNameWindowDesc;

extern uint8 *g_palette1;
extern uint8 *g_palette2;
extern uint8 *g_paletteMapping1;
extern uint8 *g_paletteMapping2;

extern Widget *g_widgetLinkedListHead;
extern Widget *g_widgetLinkedListTail;
extern Widget *g_widgetInvoiceTail;
extern Widget *g_widgetMentatFirst;
extern Widget *g_widgetMentatTail;
extern Widget *g_widgetMentatUnknown1;
extern Widget *g_widgetMentatUnknown2;
extern Widget *g_widgetMentatScrollbar;

extern Widget g_table_windowWidgets[];

extern Widget *GUI_Widget_GetNext(Widget *w);
extern Widget *GUI_Widget_Get_ByIndex(Widget *w, uint16 index);
extern uint16  GUI_Widget_HandleEvents(Widget *w);
extern void    GUI_Widget_MakeInvisible(Widget *w);
extern void    GUI_Widget_MakeVisible(Widget *w);
extern void    GUI_Widget_Draw(Widget *w);
extern uint8   GUI_Widget_GetShortcut(uint8 c);
extern Widget *GUI_Widget_Allocate(uint16 index, uint16 shortcut, uint16 offsetX, uint16 offsetY, uint16 spriteID, uint16 stringID, uint16 variable_3A);
extern Widget *GUI_Widget_Allocate_WithScrollbar(uint16 index, uint16 parentID, uint16 offsetX, uint16 offsetY, int16 width, int16 height, csip32 drawProc);
extern Widget *GUI_Widget_Allocate3(uint16 index, uint16 parentID, uint16 offsetX, uint16 offsetY, csip32 csipSprite1, csip32 csipSprite2, Widget *widget2, uint16 unknown1A);
extern void    GUI_Widget_MakeNormal(Widget *w, bool clickProc);
extern void    GUI_Widget_MakeSelected(Widget *w, bool clickProc);
extern Widget *GUI_Widget_Link(Widget *w1, Widget *w2);
extern uint16 GUI_Widget_Scrollbar_Init(Widget *w, int16 scrollMax, int16 scrollPageSize, int16 scrollPosition);
extern uint16 GUI_Widget_Scrollbar_CalculatePosition(WidgetScrollbar *scrollbar);
extern uint16 GUI_Widget_Scrollbar_CalculateScrollPosition(WidgetScrollbar *scrollbar);
extern void GUI_Widget_Free_WithScrollbar(Widget *w);
extern Widget *GUI_Widget_Insert(Widget *w1, Widget *w2);

/* viewport.c */
extern bool GUI_Widget_Viewport_Click(Widget *w);

/* widget_click.c */
extern bool GUI_Widget_SpriteTextButton_Click(Widget *w);
extern bool GUI_Widget_Scrollbar_ArrowUp_Click(Widget *w);
extern bool GUI_Widget_Scrollbar_ArrowDown_Click(Widget *w);
extern bool GUI_Widget_Scrollbar_Click(Widget *w);
extern bool GUI_Widget_TextButton_Click(Widget *w);
extern bool GUI_Widget_Name_Click();
extern bool GUI_Widget_Cancel_Click();
extern bool GUI_Widget_Picture_Click();
extern bool GUI_Widget_RepairUpgrade_Click(Widget *w);
extern bool GUI_Widget_Options_Click(Widget *w);
extern bool GUI_Widget_SaveLoad_Click(bool save);
extern bool GUI_Widget_HOF_ClearList_Click(Widget *w);
extern bool GUI_Widget_HOF_Resume_Click();
extern bool GUI_Production_List_Click(Widget *w);
extern bool GUI_Production_Upgrade_Click(Widget *w);
extern bool GUI_Production_ResumeGame_Click(Widget *w);
extern bool GUI_Production_Down_Click(Widget *w);
extern bool GUI_Production_Up_Click(Widget *w);
extern bool GUI_Purchase_Invoice_Click(Widget *w);
extern bool GUI_Production_BuildThis_Click(Widget *w);
extern bool GUI_Purchase_Plus_Click(Widget *w);
extern bool GUI_Purchase_Minus_Click(Widget *w);

/* widget_draw.c */
extern void GUI_Widget_TextButton_Draw(Widget *w);
extern void GUI_Widget_SpriteButton_Draw(Widget *w);
extern void GUI_Widget_SpriteTextButton_Draw(Widget *w);
extern void GUI_Widget_TextButton2_Draw(Widget *w);
extern void GUI_Widget_Scrollbar_Draw(Widget *w);
extern void GUI_Widget_ActionPanel_Draw(bool forceDraw);
extern void GUI_Widget_DrawBorder(uint16 widgetIndex, uint16 borderType, bool pressed);
extern void GUI_Widget_DrawAll(Widget *w);

#endif /* GUI_WIDGET_H */
