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
	/* 000E(2)   */ PACK uint16 flags;                      /*!< ?? Bitflags. 0x01 - Requires Click, 0x04 - Click as Hover, 0x08 - NoButton, 0x10 - ??, 0x20 - No Other Widgets On Click, 0x40 - Lose Select When Leave. Bitmask. 0x0F00 - Left Button Filter, 0xF000 - Right Button Filter. */
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
	/* 002C()    */ PACK uint8   unknown_002C[0x0002];
	/* 002E(2)   */ PACK uint16 state;                      /*!< Bitflags. 0x01 - Selected, 0x02/0x04 - Hover, 0x08 - Last Selected, 0x10/0x20 - Last Hover, 0x80 - Key Selected. */
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

extern WidgetClickInfo *g_widgetClickInfo;

extern Widget *GUI_Widget_GetNext(Widget *w);
extern uint16  GUI_Widget_HandleEvents(Widget *w, csip32 wcsip);
extern void    GUI_Widget_Draw(Widget *w, csip32 wcsip);
extern uint8   GUI_Widget_GetShortcut(uint8 c);
extern Widget *GUI_Widget_Allocate(uint16 index, uint16 shortcut, uint16 offsetX, uint16 offsetY, uint16 spriteID, uint16 stringID, uint16 variable_3A, csip32 *retcsip);

/* viewport.c */
extern bool GUI_Widget_Viewport_Click(Widget *w);

/* widget_click.c */
extern bool GUI_Widget_SpriteTextButton_Click(Widget *w);
extern bool GUI_Widget_Scrollbar_ArrowUp_Click(Widget *w);
extern bool GUI_Widget_Scrollbar_ArrowDown_Click(Widget *w);
extern bool GUI_Widget_Scrollbar_Click(Widget *w, csip32 wcsip);
extern bool GUI_Widget_TextButton_Click(Widget *w, csip32 wcsip);
extern bool GUI_Widget_Name_Click();

/* widget_draw.c */
extern void GUI_Widget_TextButton_Draw(Widget *w);
extern void GUI_Widget_SpriteButton_Draw(Widget *w);
extern void GUI_Widget_SpriteTextButton_Draw(Widget *w);
extern void GUI_Widget_TextButton2_Draw(Widget *w);
extern void GUI_Widget_ScrollBar_Draw(Widget *w, csip32 wcsip);


extern void emu_GUI_Widget_HandleEvents();
extern void emu_GUI_Widget_Draw();
extern void emu_GUI_Widget_ScrollBar_Draw();
extern void emu_GUI_Widget_Scrollbar_ArrowUp_Click();
extern void emu_GUI_Widget_Scrollbar_ArrowDown_Click();
extern void emu_GUI_Widget_GetShortcut();
extern void emu_GUI_Widget_Allocate();

#endif /* GUI_WIDGET_H */
