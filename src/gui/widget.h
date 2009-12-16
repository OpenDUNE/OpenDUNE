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
	DRAW_MODE_UNKNOWN1        = 1,
	DRAW_MODE_TEXT            = 2,                   /*!< Draw text. */
	DRAW_MODE_UNKNOWN3        = 3,
	DRAW_MODE_CUSTOM_PROC     = 4,                   /*!< Draw via a custom defined function. */
	DRAW_MODE_WIRED_RECTANGLE = 5,                   /*!< Draw a wired rectangle. */
	DRAW_MODE_UNKNOWN6        = 6,

	DRAW_MODE_MAX             = 7
} DrawMode;

MSVC_PACKED_BEGIN
/**
 * A Widget as stored in the memory.
 */
typedef struct Widget {
	/* 0000()    */ PACK uint8   unknown_0000[0x0004];
	/* 0004(2)   */ PACK uint16 variable_04;                /*!< ?? */
	/* 0006(2)   */ PACK uint16 variable_06;                /*!< ?? */
	/* 0008(2)   */ PACK uint16 variable_08;                /*!< ?? */
	/* 000A(1)   */ PACK uint8  drawModeNormal;             /*!< Draw mode when in normal state. */
	/* 000B(1)   */ PACK uint8  drawModeHover;              /*!< Draw mode when in hover state. */
	/* 000C(1)   */ PACK uint8  drawModeClick;              /*!< Draw mode when in click state. */
	/* 000D(1)   */ PACK uint8  variable_0D;                /*!< ?? */
	/* 000E(2)   */ PACK uint16 variable_0E;                /*!< ?? Bitflags. 0x08 - ??, 0x10 - ??. */
	/* 0010(4)   */ PACK csip32 drawProcNormal;             /*!< Draw proc when in normal state. */
	/* 0014(4)   */ PACK csip32 drawProcHover;              /*!< Draw proc when in hover state. */
	/* 0018(4)   */ PACK csip32 drawProcClick;              /*!< Draw proc when in click state. */
	/* 001C(2)   */ PACK uint16 parentID;                   /*!< Parent window we are nested in. */
	/* 001E(2)   */ PACK  int16 offsetX;                    /*!< X position from parent we are at, in pixels. */
	/* 0020(2)   */ PACK  int16 offsetY;                    /*!< Y position from parent we are at, in pixels. */
	/* 0022(2)   */ PACK uint16 width;                      /*!< Width of widget in pixels. */
	/* 0024(2)   */ PACK uint16 height;                     /*!< Height of widget in pixels. */
	/* 0026(1)   */ PACK uint8  drawParam1Normal;           /*!< Param 1 for draw proc in normal state. */
	/* 0027(1)   */ PACK uint8  drawParam2Normal;           /*!< Param 2 for draw proc in normal state. */
	/* 0028(1)   */ PACK uint8  drawParam1Hover;            /*!< Param 1 for draw proc in hover state. */
	/* 0029(1)   */ PACK uint8  drawParam2Hover;            /*!< Param 2 for draw proc in hover state. */
	/* 002A(1)   */ PACK uint8  drawParam1Click;            /*!< Param 1 for draw proc in click state. */
	/* 002B(1)   */ PACK uint8  drawParam2Click;            /*!< Param 2 for draw proc in click state. */
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

void GUI_Widget_Draw(Widget *w, csip32 wcsip);


extern void emu_GUI_Widget_Draw();

#endif /* GUI_WIDGET_H */
