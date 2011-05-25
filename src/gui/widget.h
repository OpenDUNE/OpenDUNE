/* $Id$ */

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
	DRAW_MODE_NONE            = 0,                   /*!< Draw nothing. */
	DRAW_MODE_SPRITE          = 1,                   /*!< Draw a sprite. */
	DRAW_MODE_TEXT            = 2,                   /*!< Draw text. */
	DRAW_MODE_UNKNOWN3        = 3,
	DRAW_MODE_CUSTOM_PROC     = 4,                   /*!< Draw via a custom defined function. */
	DRAW_MODE_WIRED_RECTANGLE = 5,                   /*!< Draw a wired rectangle. */
	DRAW_MODE_UNKNOWN6        = 6,

	DRAW_MODE_MAX             = 7
} DrawMode;

MSVC_PACKED_BEGIN
/**
 * Scrollbar information as stored in the memory.
 */
typedef struct WidgetScrollbar {
	/* 0000(4)   */ PACK csip32 parent;                     /*!< Parent widget we belong to. */
	/* 0004(2)   */ PACK uint16 size;                       /*!< Size (in pixels) of the scrollbar. */
	/* 0006(2)   */ PACK uint16 position;                   /*!< Current position of the scrollbar. */
	/* 0008(2)   */ PACK uint16 scrollMax;                  /*!< Maximum position of the scrollbar cursor. */
	/* 000A(2)   */ PACK uint16 scrollPageSize;             /*!< Amount of elements to scroll per page. */
	/* 000C(2)   */ PACK uint16 scrollPosition;             /*!< Current position of the scrollbar cursor. */
	/* 000E(1)   */ PACK uint8  pressed;                    /*!< If non-zero, the scrollbar is currently pressed. */
	/* 000F(1)   */ PACK uint8  dirty;                      /*!< If non-zero, the scrollbar is dirty (requires repaint). */
	/* 0010(2)   */ PACK uint16 pressedPosition;            /*!< Position where we clicked on the scrollbar when pressed. */
	/* 0012(4)   */ PACK csip32 drawProc;                   /*!< Draw proc (called on every draw). Can be null. */
} GCC_PACKED WidgetScrollbar;
MSVC_PACKED_END
assert_compile(sizeof(WidgetScrollbar) == 0x16);

MSVC_PACKED_BEGIN
/**
 * A Widget as stored in the memory.
 */
typedef struct Widget {
	/* 0000(4)   */ PACK csip32 next;                       /*!< Next widget in the list. */
	/* 0004(2)   */ PACK uint16 index;                      /*!< Index of the widget. */
	/* 0006(2)   */ PACK uint16 shortcut;                   /*!< What key triggers this widget. */
	/* 0008(2)   */ PACK uint16 shortcut2;                  /*!< What key (also) triggers this widget. */
	/* 000A(1)   */ PACK uint8  drawModeNormal;             /*!< Draw mode when normal. */
	/* 000B(1)   */ PACK uint8  drawModeSelected;           /*!< Draw mode when selected. */
	/* 000C(1)   */ PACK uint8  drawModeDown;               /*!< Draw mode when down. */
	/* 000D(1)   */ PACK uint8  variable_0D;                /*!< ?? */
	/* 000E(2)   */ PACK union {
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
	                     } GCC_PACKED s;
	                     uint16 all; } flags;               /*!< General flags of the Widget. */
	/* 0010(4)   */ PACK csip32 drawProcNormal;             /*!< Draw proc when normal. */
	/* 0014(4)   */ PACK csip32 drawProcSelected;           /*!< Draw proc when selected. */
	/* 0018(4)   */ PACK csip32 drawProcDown;               /*!< Draw proc when down. */
	/* 001C(2)   */ PACK uint16 parentID;                   /*!< Parent window we are nested in. */
	/* 001E(2)   */ PACK  int16 offsetX;                    /*!< X position from parent we are at, in pixels. */
	/* 0020(2)   */ PACK  int16 offsetY;                    /*!< Y position from parent we are at, in pixels. */
	/* 0022(2)   */ PACK uint16 width;                      /*!< Width of widget in pixels. */
	/* 0024(2)   */ PACK uint16 height;                     /*!< Height of widget in pixels. */
	/* 0026(1)   */ PACK uint8  fgColourNormal;             /*!< Foregroud colour for draw proc when normal. */
	/* 0027(1)   */ PACK uint8  bgColourNormal;             /*!< Background colour for draw proc when normal. */
	/* 0028(1)   */ PACK uint8  fgColourSelected;           /*!< Foregroud colour for draw proc when selected. */
	/* 0029(1)   */ PACK uint8  bgColourSelected;           /*!< Background colour for draw proc when selected. */
	/* 002A(1)   */ PACK uint8  fgColourDown;               /*!< Foregroud colour for draw proc when down. */
	/* 002B(1)   */ PACK uint8  bgColourDown;               /*!< Background colour for draw proc when down. */
	/* 002C(1)   */ PACK uint8  variable_2C;                /*!< ?? */
	/* 002D()    */ PACK uint8   unknown_002D[0x0001];
	/* 002E(2)   */ PACK union {
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
	                     } GCC_PACKED s;
	                     uint16 all; } state;               /*!< State of the Widget. */
	/* 0030(4)   */ PACK csip32 clickProc;                  /*!< Function to execute when widget is pressed. */
	/* 0034(4)   */ PACK csip32 scrollbar;                  /*!< If non-zero, it points to WidgetScrollbar belonging to this widget. */
	/* 0038(2)   */ PACK uint16 stringID;                   /*!< Strings to print on the widget. Index above 0xFFF2 are special. */
	/* 003A(2)   */ PACK uint16 variable_3A;                /*!< ?? */
} GCC_PACKED Widget;
MSVC_PACKED_END
assert_compile(sizeof(Widget) == 0x3C);

MSVC_PACKED_BEGIN
/**
 * Static information per WidgetClick type.
 */
typedef struct WidgetClickInfo {
	/* 0000(2)   */ PACK uint16 variable_00;                /*!< ?? */
	/* 0002(4)   */ PACK csip32 procClick;                  /*!< Function to execute when widget is pressed. */
	/* 0006(2)   */ PACK uint16 variable_06;                /*!< ?? */
	/* 0008(2)   */ PACK uint16 variable_08;                /*!< ?? */
	/* 000A(2)   */ PACK uint16 variable_0A;                /*!< ?? */
	/* 000C(2)   */ PACK uint16 variable_0C;                /*!< ?? */
	/* 000E(2)   */ PACK uint16 variable_0E;                /*!< ?? */
	/* 0010()    */ PACK uint8   unknown_0010[0x0004];
	/* 0014(2)   */ PACK uint16 variable_14;                /*!< ?? */
	/* 0016(2)   */ PACK uint16 variable_16;                /*!< ?? */
} GCC_PACKED WidgetClickInfo;
MSVC_PACKED_END
assert_compile(sizeof(WidgetClickInfo) == 0x18);

MSVC_PACKED_BEGIN
/**
 * Static information per WidgetClick type.
 */
typedef struct WindowDesc {
	/* 0000(2)   */ PACK uint16 index;                      /*!< ?? */
	/* 0002(2)   */ PACK uint16 stringID;                   /*!< ?? */
	/* 0004(2)   */ PACK uint16 addArrows;                  /*!< ?? */
	/* 0006(1)   */ PACK uint8  widgetCount;                /*!< ?? */
	/* 0007(98)  */ PACK struct {
	                       PACK uint16 stringID;            /*!< ?? */
	                       PACK uint16 offsetX;             /*!< ?? */
	                       PACK uint16 offsetY;             /*!< ?? */
	                       PACK uint16 width;               /*!< ?? */
	                       PACK uint16 height;              /*!< ?? */
	                       PACK uint16 labelStringId;       /*!< ?? */
	                       PACK uint16 shortcut2;           /*!< ?? */
	                     } GCC_PACKED widgets[7];           /*!< ?? */
} GCC_PACKED WindowDesc;
MSVC_PACKED_END
assert_compile(sizeof(WindowDesc) == 0x69);

extern WidgetClickInfo *g_widgetClickInfo;

extern Widget *GUI_Widget_GetNext(Widget *w);
extern Widget *GUI_Widget_Get_ByIndex(Widget *w, uint16 index);
extern uint16  GUI_Widget_HandleEvents(Widget *w);
extern void    GUI_Widget_MakeInvisible(Widget *w);
extern void    GUI_Widget_MakeVisible(Widget *w);
extern void    GUI_Widget_Draw(Widget *w);
extern uint8   GUI_Widget_GetShortcut(uint8 c);
extern Widget *GUI_Widget_Allocate(uint16 index, uint16 shortcut, uint16 offsetX, uint16 offsetY, uint16 spriteID, uint16 stringID, uint16 variable_3A, csip32 *retcsip);
extern Widget *GUI_Widget_Allocate2(uint16 index, uint16 parentID, uint16 offsetX, uint16 offsetY, int16 width, int16 height, csip32 drawProc);
extern Widget *GUI_Widget_Allocate3(uint16 index, uint16 parentID, uint16 offsetX, uint16 offsetY, csip32 csipSprite1, csip32 csipSprite2, Widget *widget2, uint16 unknown1A);
extern void    GUI_Widget_MakeNormal(Widget *w, bool clickProc);
extern void    GUI_Widget_MakeSelected(Widget *w, bool clickProc);
extern Widget *GUI_Widget_Link(Widget *w1, Widget *w2);

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
extern void GUI_Widget_ScrollBar_Draw(Widget *w);
extern void GUI_Widget_ActionPanel_Draw(bool forceDraw);
extern void GUI_Widget_DrawBorder(uint16 widgetIndex, uint16 borderType, bool pressed);
extern void GUI_Widget_DrawAll(Widget *w);


extern void emu_GUI_Widget_Get_ByIndex();
extern void emu_GUI_Widget_HandleEvents();
extern void emu_GUI_Widget_Draw();
extern void emu_GUI_Widget_ScrollBar_Draw();
extern void emu_GUI_Widget_Allocate();
extern void emu_GUI_Widget_MakeNormal();
extern void emu_GUI_Widget_DrawBorder();
extern void emu_GUI_Widget_Link();

#endif /* GUI_WIDGET_H */
