/* $Id$ */

#ifndef WINDOW_H
#define WINDOW_H

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
	/* 0010(4)   */ PACK uint32 variable_10;                /*!< ?? */
	/* 0014(4)   */ PACK uint32 variable_14;                /*!< ?? */
	/* 0018(4)   */ PACK uint32 variable_18;                /*!< ?? */
	/* 001C(2)   */ PACK uint16 variable_1C;                /*!< ?? */
	/* 001E(2)   */ PACK uint16 variable_1E;                /*!< ?? */
	/* 0020(2)   */ PACK uint16 variable_20;                /*!< ?? */
	/* 0022(2)   */ PACK uint16 variable_22;                /*!< ?? */
	/* 0024(2)   */ PACK uint16 variable_24;                /*!< ?? */
	/* 0026(1)   */ PACK uint8  variable_26;                /*!< ?? */
	/* 0027(1)   */ PACK uint8  variable_27;                /*!< ?? */
	/* 0028(1)   */ PACK uint8  variable_28;                /*!< ?? */
	/* 0029(1)   */ PACK uint8  variable_29;                /*!< ?? */
	/* 002A()    */ PACK uint8   unknown_002B[0x0004];
	/* 002E(2)   */ PACK uint16 variable_2E;                /*!< ?? */
	/* 0030(4)   */ PACK csip32 clickProc;                  /*!< Function to execute when pressed. */
	/* 0034()    */ PACK uint8   unknown_0034[0x0004];
	/* 0038(2)   */ PACK uint16 variable_38;                /*!< ?? */
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
	/* 0002(4)   */ PACK csip32 clickProc;                  /*!< Function to execute when pressed. */
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

#endif /* WINDOW_H */
