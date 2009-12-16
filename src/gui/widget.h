/* $Id$ */

#ifndef GUI_WIDGET_H
#define GUI_WIDGET_H

/**
 *  * Types of Structures available in the game.
 *   */
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

	WIDGET_CLICK_MAX     = 18,
	WIDGET_CLICK_INVALID = 0xFFFF
} WidgetClickType;

MSVC_PACKED_BEGIN
/**
 * A Widget as stored in the memory.
 */
typedef struct Widget {
	/* 0000()    */ PACK uint8   unknown_0000[0x0004];
	/* 0004(2)   */ PACK uint16 variable_04;                /*!< ?? */
	/* 0006(2)   */ PACK uint16 variable_06;                /*!< ?? */
	/* 0008(2)   */ PACK uint16 variable_08;                /*!< ?? */
	/* 000A(1)   */ PACK uint8  variable_0A;                /*!< ?? */
	/* 000B(1)   */ PACK uint8  variable_0B;                /*!< ?? */
	/* 000C(1)   */ PACK uint8  variable_0C;                /*!< ?? */
	/* 000D(1)   */ PACK uint8  variable_0D;                /*!< ?? */
	/* 000E(2)   */ PACK uint16 variable_0E;                /*!< ?? */
	/* 0010(4)   */ PACK csip32 procDraw1;                  /*!< ?? Function to execute when widget should be drawn. */
	/* 0014(4)   */ PACK csip32 procDraw2;                  /*!< ?? Function to execute when widget should be drawn. */
	/* 0018(4)   */ PACK csip32 procDraw3;                  /*!< ?? Function to execute when widget should be drawn. */
	/* 001C(2)   */ PACK uint16 parentID;                   /*!< Parent window we are nested in. */
	/* 001E(2)   */ PACK uint16 offsetX;                    /*!< X position from parent we are at, in pixels. */
	/* 0020(2)   */ PACK uint16 offsetY;                    /*!< Y position from parent we are at, in pixels. */
	/* 0022(2)   */ PACK uint16 width;                      /*!< Width of widget in pixels. */
	/* 0024(2)   */ PACK uint16 height;                     /*!< Height of widget in pixels. */
	/* 0026(1)   */ PACK uint8  variable_26;                /*!< ?? Belongs to procDraw1. */
	/* 0027(1)   */ PACK uint8  variable_27;                /*!< ?? Belongs to procDraw1. */
	/* 0028(1)   */ PACK uint8  variable_28;                /*!< ?? Belongs to procDraw2. */
	/* 0029(1)   */ PACK uint8  variable_29;                /*!< ?? Belongs to procDraw2. */
	/* 002A(1)   */ PACK uint8  variable_2A;                /*!< ?? Belongs to procDraw3. */
	/* 002B(1)   */ PACK uint8  variable_2B;                /*!< ?? Belongs to procDraw3. */
	/* 002C()    */ PACK uint8   unknown_002C[0x0002];
	/* 002E(2)   */ PACK uint16 flags;                      /*!< Bitflags. 0x0001 - Pressed, 0x0004 - Hover. */
	/* 0030(4)   */ PACK csip32 procClick;                  /*!< Function to execute when widget is pressed. */
	/* 0034()    */ PACK uint8   unknown_0034[0x0004];
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

void GUI_Widget_Button_Draw(struct Widget *w);


extern void emu_GUI_Widget_Button_Draw();

#endif /* GUI_WIDGET_H */
