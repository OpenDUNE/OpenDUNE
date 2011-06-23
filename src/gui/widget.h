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
	DRAW_MODE_NONE                = 0,                      /*!< Draw nothing. */
	DRAW_MODE_SPRITE              = 1,                      /*!< Draw a sprite. */
	DRAW_MODE_TEXT                = 2,                      /*!< Draw text. */
	DRAW_MODE_UNKNOWN3            = 3,
	DRAW_MODE_CUSTOM_PROC         = 4,                      /*!< Draw via a custom defined function. */
	DRAW_MODE_WIRED_RECTANGLE     = 5,                      /*!< Draw a wired rectangle. */
	DRAW_MODE_XORFILLED_RECTANGLE = 6,                      /*!< Draw a filled rectangle using xor. */

	DRAW_MODE_MAX             = 7
} DrawMode;

struct Widget;

/**
 * The parameter for a given DrawMode.
 */
typedef union WidgetDrawParameter {
	uint16 unknown;                                         /*!< Parameter for DRAW_MODE_UNKNOWN3. */
	void *sprite;                                           /*!< Parameter for DRAW_MODE_SPRITE. */
	char *text;                                             /*!< Parameter for DRAW_MODE_TEXT. */
	void (*proc)(struct Widget *);                          /*!< Parameter for DRAW_MODE_CUSTOM_PROC. */
} WidgetDrawParameter;

typedef bool (ClickProc)(struct Widget *);

/**
 * A Widget as stored in the memory.
 */
typedef struct Widget {
	struct Widget *next;                                    /*!< Next widget in the list. */
	uint16 index;                                           /*!< Index of the widget. */
	uint16 shortcut;                                        /*!< What key triggers this widget. */
	uint16 shortcut2;                                       /*!< What key (also) triggers this widget. */
	uint8  drawModeNormal;                                  /*!< Draw mode when normal. */
	uint8  drawModeSelected;                                /*!< Draw mode when selected. */
	uint8  drawModeDown;                                    /*!< Draw mode when down. */
	uint8  variable_0D;                                     /*!< ?? */
	union {
		struct {
			BITTYPE requiresClick:1;                        /*!< Requires click. */
			BITTYPE variable_0002:1;                        /*!< ?? */
			BITTYPE clickAsHover:1;                         /*!< Click as hover. */
			BITTYPE invisible:1;                            /*!< Widget is invisible. */
			BITTYPE variable_0010:1;                        /*!< ?? */
			BITTYPE noClickCascade:1;                       /*!< Don't cascade the click event to any other widgets. */
			BITTYPE loseSelect:1;                           /*!< Lose select when leave. */
			BITTYPE variable_0080:1;                        /*!< ?? */
			BITTYPE buttonFilterLeft:4;                     /*!< Left button filter. */
			BITTYPE buttonFilterRight:4;                    /*!< Right button filter. */
		} s;
		uint16 all; } flags;                                /*!< General flags of the Widget. */
	WidgetDrawParameter drawParameterNormal;                /*!< Draw parameter when normal. */
	WidgetDrawParameter drawParameterSelected;              /*!< Draw parameter when selected. */
	WidgetDrawParameter drawParameterDown;                  /*!< Draw parameter when down. */
	uint16 parentID;                                        /*!< Parent window we are nested in. */
	 int16 offsetX;                                         /*!< X position from parent we are at, in pixels. */
	 int16 offsetY;                                         /*!< Y position from parent we are at, in pixels. */
	uint16 width;                                           /*!< Width of widget in pixels. */
	uint16 height;                                          /*!< Height of widget in pixels. */
	uint8  fgColourNormal;                                  /*!< Foregroud colour for draw proc when normal. */
	uint8  bgColourNormal;                                  /*!< Background colour for draw proc when normal. */
	uint8  fgColourSelected;                                /*!< Foregroud colour for draw proc when selected. */
	uint8  bgColourSelected;                                /*!< Background colour for draw proc when selected. */
	uint8  fgColourDown;                                    /*!< Foregroud colour for draw proc when down. */
	uint8  bgColourDown;                                    /*!< Background colour for draw proc when down. */
	uint8  variable_2C;                                     /*!< ?? */
	uint8   unknown_002D[0x0001];
	union {
		struct {
			BITTYPE selected:1;                             /*!< Selected. */
			BITTYPE hover1:1;                               /*!< Hover. */
			BITTYPE hover2:1;                               /*!< Hover. */
			BITTYPE selectedLast:1;                         /*!< Last Selected. */
			BITTYPE hover1Last:1;                           /*!< Last Hover. */
			BITTYPE hover2Last:1;                           /*!< Last Hover. */
			BITTYPE variable_0040:1;                        /*!< ?? */
			BITTYPE keySelected:1;                          /*!< Key Selected. */
			BITTYPE buttonState:8;                          /*!< Button state. */
		} s;
		uint16 all; } state;                                /*!< State of the Widget. */
	ClickProc *clickProc;                                   /*!< Function to execute when widget is pressed. */
	void *data;                                             /*!< If non-NULL, it points to WidgetScrollbar or HallOfFameData belonging to this widget. */
	uint16 stringID;                                        /*!< Strings to print on the widget. Index above 0xFFF2 are special. */
	uint16 variable_3A;                                     /*!< ?? */
} Widget;

typedef void (ScrollbarDrawProc)(Widget *);

/**
 * Scrollbar information as stored in the memory.
 */
typedef struct WidgetScrollbar {
	Widget *parent;                                         /*!< Parent widget we belong to. */
	uint16 size;                                            /*!< Size (in pixels) of the scrollbar. */
	uint16 position;                                        /*!< Current position of the scrollbar. */
	uint16 scrollMax;                                       /*!< Maximum position of the scrollbar cursor. */
	uint16 scrollPageSize;                                  /*!< Amount of elements to scroll per page. */
	uint16 scrollPosition;                                  /*!< Current position of the scrollbar cursor. */
	uint8  pressed;                                         /*!< If non-zero, the scrollbar is currently pressed. */
	uint8  dirty;                                           /*!< If non-zero, the scrollbar is dirty (requires repaint). */
	uint16 pressedPosition;                                 /*!< Position where we clicked on the scrollbar when pressed. */
	ScrollbarDrawProc *drawProc;                            /*!< Draw proc (called on every draw). Can be null. */
} WidgetScrollbar;


/**
 * Static information per WidgetClick type.
 */
typedef struct WidgetInfo {
	int16 index;                       /*!< ?? */
	ClickProc *clickProc;              /*!< Function to execute when widget is pressed. */
	int16 shortcut;                    /*!< ?? */
	uint16 flags;                      /*!< ?? */
	int16  spriteID;                   /*!< ?? */
	uint16 offsetX;                    /*!< ?? */
	uint16 offsetY;                    /*!< ?? */
	uint16 width;                      /*!< ?? */
	uint16 height;                     /*!< ?? */
	uint16 stringID;                   /*!< ?? */
	uint16 variable_3A;                /*!< ?? */
} WidgetInfo;

/**
 * Static information per WidgetClick type.
 */
typedef struct WindowDesc {
	uint16 index;                                           /*!< Index of the Window. */
	uint16 stringID;                                        /*!< String for the Window. */
	bool   addArrows;                                       /*!< If true, arrows are added to the Window. */
	uint8  widgetCount;                                     /*!< Amount of widgets following. */
	struct {
		uint16 stringID;                                    /*!< String of the Widget. */
		uint16 offsetX;                                     /*!< Offset in X-position of the Widget (relative to Window). */
		uint16 offsetY;                                     /*!< Offset in Y-position of the Widget (relative to Window). */
		uint16 width;                                       /*!< Width of the Widget. */
		uint16 height;                                      /*!< Height of the Widget. */
		uint16 labelStringId;                               /*!< Label of the Widget. */
		uint16 shortcut2;                                   /*!< The shortcut to trigger the Widget. */
	} widgets[7];                                           /*!< The Widgets belonging to the Window. */
} WindowDesc;

extern WidgetInfo g_table_gameWidgetInfo[];
extern WidgetInfo g_table_factoryWidgetInfo[];

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
extern Widget *GUI_Widget_Allocate_WithScrollbar(uint16 index, uint16 parentID, uint16 offsetX, uint16 offsetY, int16 width, int16 height, ScrollbarDrawProc *drawProc);
extern Widget *GUI_Widget_Allocate3(uint16 index, uint16 parentID, uint16 offsetX, uint16 offsetY, void *sprite1, void *sprite2, Widget *widget2, uint16 unknown1A);
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
extern bool GUI_Widget_Name_Click(Widget *w);
extern bool GUI_Widget_Cancel_Click(Widget *w);
extern bool GUI_Widget_Picture_Click(Widget *w);
extern bool GUI_Widget_RepairUpgrade_Click(Widget *w);
extern bool GUI_Widget_Options_Click(Widget *w);
extern bool GUI_Widget_SaveLoad_Click(bool save);
extern bool GUI_Widget_HOF_ClearList_Click(Widget *w);
extern bool GUI_Widget_HOF_Resume_Click(Widget *w);
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
