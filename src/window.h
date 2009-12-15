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
	/* 0000()    */ PACK uint8   unknown_0000[0x0030];
	/* 0030(4)   */ PACK csip32 clickProc;                  /*!< What function is executed when clicked. */
} GCC_PACKED Widget;
MSVC_PACKED_END
assert_compile(sizeof(Widget) == 0x34);

MSVC_PACKED_BEGIN
/**
 * Static information per WidgetClick type.
 */
typedef struct WidgetClickInfo {
	/* 0000()    */ PACK uint8   unknown_0000[0x0002];
	/* 0002(4)   */ PACK csip32 clickProc;                  /*!< What function to executed when clicked. */
	/* 0006()    */ PACK uint8   unknown_0006[0x0012];
} GCC_PACKED WidgetClickInfo;
MSVC_PACKED_END
assert_compile(sizeof(WidgetClickInfo) == 0x18);

extern WidgetClickInfo *g_widgetClickInfo;

#endif /* WINDOW_H */
