/** @file src/input/pad_saturn.c Sega Saturn controllers as mouse and keys.
 *
 * The controller type comes from what is plugged in, looked at every frame:
 * a keyboard and a mouse on the two ports make a DOS-style keyboard+mouse;
 * otherwise the device on port 1 is used, or else the one on port 2. With
 * none, the game pauses with a message until one is connected.
 *
 * Standard pad (after the Mega Drive version):
 *   D-pad        UI mode: moves the focus between the buttons of the screen
 *                (on the campaign map, between the regions to choose);
 *                camera mode (missions): with the Tiles camera, scrolls
 *                the map a tile at a time under a cursor in the middle of
 *                the view (which leaves the middle only where the map ends);
 *                with the Free camera (a Game Controls setting, as on the
 *                Mega Drive), moves the cursor freely, scrolling the map
 *                smoothly near the edges.
 *   C            in missions, a tap switches between UI and camera mode;
 *                held with the D-pad, scrolls the camera fast. Targeting
 *                and placing a structure use the camera whatever the mode.
 *   A            left mouse button (press the focused button, select,
 *                target, place; hold to drag)
 *   B            cancel (Esc)
 *   X Y Z R      the selected unit's command buttons 1-4 in the side bar;
 *                with a structure selected, X opens its menu (F3), Y
 *                repairs or upgrades it and Z presses its build button
 *                (a Construction Yard's Build it, then Place it)
 *   L (hold)     Shift: with a command button, Ambush / Area Guard
 *   L (tap)      select your next unit and centre the view on it;
 *                C+L: your next structure
 *   Start        options (F2); C+Start: Mentat (F1)
 *   A+B+C+Start  leave for the BIOS screen
 * 3D Controller: the same, but the D-pad always works the UI and the analog
 *   stick the camera (no C switch): whichever was used last has the cursor.
 * Keyboard: the DOS keys (letters, F keys, Esc, Enter, Shift) go to the game
 *   as they are; the arrows work as the D-pad, Space as A and Tab as C.
 * Keyboard and mouse: as on DOS.
 *
 * Without a keyboard, typing a name (a saved game, the Hall of Fame) brings
 * up an on-screen keyboard: the D-pad picks a key, A types it, B deletes and
 * Start is OK.
 *
 * The mouse pointer is only drawn with a mouse. With the pad-like
 * controllers the focused button gets a reticle, drawn on the VDP2 overlay
 * and gliding from one button to the next (lines of menus and lists change
 * colour instead), and so does the camera's cursor. Moving the focus makes
 * a blip.
 *
 * Mouse and key events go to the engine from Video_Tick, as other video
 * drivers deliver them. Moving the focus and the camera needs the game's
 * state, so it happens in PadSaturn_HandleEvents(), called by
 * GUI_Widget_HandleEvents() with the widgets of the screen on show. */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "types.h"
#include "input.h"
#include "mouse.h"
#include "pad_saturn.h"
#include "../gfx.h"
#include "../audio/dsp.h"
#include "../config.h"
#include "../gui/font.h"
#include "../gui/gui.h"
#include "../gui/mentat.h"
#include "../gui/widget.h"
#include "../house.h"
#include "../map.h"
#include "../opendune.h"
#include "../pool/pool.h"
#include "../pool/structure.h"
#include "../pool/unit.h"
#include "../scenario.h"
#include "../structure.h"
#include "../tile.h"
#include "../timer.h"
#include "../unit.h"

#include "bios.h"
#include "saturn_hw.h"
#include "saturn_timer.h"
#include "smpc.h"
#include "vdp2.h"

enum {
	TAP_FRAMES = 15,   /*!< a press this short is a tap, not a hold */
	REPEAT_FIRST = 18, /*!< D-pad repeat for the focus, in frames */
	REPEAT_NEXT = 5,
	SCROLL_FIRST = 12, /*!< and for scrolling the camera */
	SCROLL_NEXT = 4,
	STICK_DEAD = 24,     /*!< 3D Controller stick dead zone */
	STICK_STEP = 300,    /*!< stick travel summed up per tile of scroll */
	FOCUS_STALE = 5,     /*!< frames without PadSaturn_HandleEvents() */
	MISSING_FRAMES = 30, /*!< frames with nothing connected before it counts */
	/* the cursor in camera mode: the middle of the centre tile of the map
	 * view (tile 7, 5 of the 15 x 10 shown from 0, 40) */
	CAMERA_X = 7 * 16 + 8,
	CAMERA_Y = 40 + 5 * 16 + 8,
	/* the 320x200 picture is centred in the 224 lines shown (video_saturn.c) */
	/* the map view, for the free camera's cursor: off the strips along its
	 * left, top and bottom edges (widgets 39-42, edges included), where the
	 * engine scrolls the map for a mouse resting there; pushing against
	 * these limits scrolls it here instead */
	VIEW_LEFT = 3,
	VIEW_RIGHT = 239,
	VIEW_TOP = 41,
	VIEW_BOTTOM = 197,
	FREE_SPEED = 2,         /*!< free camera: pixels a frame, */
	FREE_SPEED_FAST = 6,    /*!< with C */
	EDGE_SCROLL_FRAMES = 6, /*!< a tile of scroll every so many frames at the edge, */
	EDGE_SCROLL_FAST = 3,   /*!< with C */
	/* where the cursor waits while the focus is on the Mentat's list: the
	 * left edge, where the Mentat screen has no widget */
	LIST_PARK_X = 0,
	LIST_PARK_Y = 100,

	NO_DIRECTION = 0xFFFF
};

/* PC XT scan codes, as Input_EventHandler() expects */
enum {
	SCANCODE_ESC = 0x01,
	SCANCODE_BACKSPACE = 0x0E,
	SCANCODE_RETURN = 0x1C,
	SCANCODE_LSHIFT = 0x2A,
	SCANCODE_RSHIFT = 0x36,
	SCANCODE_F1 = 0x3B,
	SCANCODE_F2 = 0x3C,
	SCANCODE_F3 = 0x3D,
	SCANCODE_RELEASED = 0x80
};

/* Dune II key codes: arrows and Return as lists take them, and one no key
 * sends (between F12 and Scroll Lock), lent to the side bar button the pad
 * presses (Repair/Upgrade, Build it/Place it), which have no shortcut */
enum {
	KEY_RETURN = 0x2B,
	KEY_ARROW_UP = 0x60,
	KEY_ARROW_DOWN = 0x62,
	KEY_SIDE_BAR = 0x7C
};

/* the game screen: the side bar, right of the map, and the Options button */
enum {
	SIDE_BAR_X = 240,
	WIDGET_OPTIONS = 2
};

/* Saturn keyboard key numbers (PS/2 set 2) standing in for pad buttons */
enum {
	KEY_TAB = 0x0D,
	KEY_SPACE = 0x29
};

typedef enum Controller {
	CONTROLLER_NONE,
	CONTROLLER_PAD,
	CONTROLLER_3D,
	CONTROLLER_KEYBOARD,
	CONTROLLER_KEYBOARD_MOUSE
} Controller;

#define PAD_DIRECTIONS (PAD_UP | PAD_DOWN | PAD_LEFT | PAD_RIGHT)
#define PAD_RESET (PAD_A | PAD_B | PAD_C | PAD_START)

static Controller s_controller = CONTROLLER_PAD;
static int s_x = SCREEN_WIDTH / 2;
static int s_y = SCREEN_HEIGHT / 2;
static int s_minX = 0, s_maxX = SCREEN_WIDTH - 1;
static int s_minY = 0, s_maxY = SCREEN_HEIGHT - 1;
static bool s_positionChanged = true;
static uint16 s_previous = 0; /*!< buttons of the last frame */
static bool s_leftButton, s_rightButton;
static int s_repeatFrames = 0;
static int s_lTapFrames = -1;     /*!< frames L has been held, -1: not a tap */
static int s_cTapFrames = -1;     /*!< the same for C */
static bool s_keySpace, s_keyTab; /*!< keyboard keys working as A and C */
static int s_missingFrames = 0;
static bool s_controllerMessage = true; /*!< pause with a message when none */

/* requests from Video_Tick for PadSaturn_HandleEvents() and the game loop */
static volatile uint16 s_navigate = NO_DIRECTION; /*!< move the focus */
static volatile uint16 s_scroll = NO_DIRECTION;   /*!< scroll the camera */
static volatile int s_stickX = 0, s_stickY = 0;   /*!< stick travel summed up */
static volatile bool s_toggleCamera = false;
static volatile bool s_stickLast = false;     /*!< 3D Controller: stick used last */
static volatile bool s_pressA = false;        /*!< A pressed (for PadSaturn_PickRegion()) */
static volatile uint16 s_keyA = 0;            /*!< a key A sends instead of a click, or 0 */
static volatile bool s_blockA = false;        /*!< ignore A until it is released */
static volatile bool s_useSound = false;      /*!< A on the focus makes the use sound */
static volatile bool s_pressB = false;        /*!< B pressed (for the Mentat's list) */
static volatile int s_edgeX = 0, s_edgeY = 0; /*!< free camera: pushing against an edge */
static volatile bool s_edgeFast = false;      /*!< with C held */
static enum { CYCLE_NONE, CYCLE_UNIT, CYCLE_STRUCTURE } s_cycle = CYCLE_NONE;

/* what PadSaturn_HandleEvents() found */
static bool s_camera = false;                /*!< camera mode chosen with C */
static volatile bool s_cameraActive = false; /*!< the cursor is the camera's */
static volatile bool s_focusActive = false;  /*!< the screen has buttons to focus */
static volatile uint32 s_handledFrame = 0;

static bool s_pointerVisible = true;          /*!< the mouse pointer is drawn */
typedef struct Rect { int x, y, w, h; } Rect; /*!< w 0: none */
static Rect s_reticle = { 0, 0, 0, 0 };       /*!< where the reticle goes */
static Rect s_reticleDrawn = { 0, 0, 0, 0 };  /*!< where it is on the overlay */
static bool s_reticleSnap = false;            /*!< follow at once (the free camera) */

/* the on-screen keyboard, for typing names without a keyboard */
enum {
	OSK_COLUMNS = 13,
	OSK_ROWS = 6,
	OSK_CELL_W = 16,
	OSK_CELL_H = 13,
	OSK_WIDTH = OSK_COLUMNS * OSK_CELL_W + 16,
	OSK_HEIGHT = OSK_ROWS * OSK_CELL_H + 10,
	OSK_LEFT = (SCREEN_WIDTH - OSK_WIDTH) / 2,
	OSK_MARGIN = 2,       /*!< from the top or the bottom of the screen */
	DELETE_FIRST = 15,    /*!< B held: Delete again after 250 ms, */
	DELETE_NEXT = 3       /*!< then every 50 ms */
};

static volatile bool s_oskWanted = false;  /*!< an editbox waits for text */
static bool s_oskCancel = false;           /*!< and can be cancelled (Esc) */
static int s_oskEditBottom = 0;            /*!< the bottom of the line edited */
static volatile bool s_oskOpen = false;    /*!< the keyboard is on show */
static volatile bool s_pressStart = false; /*!< Start pressed (OK on the keyboard) */
static int s_oskRow = 0, s_oskColumn = 0;  /*!< the key selected */
static int s_oskTop = 0;                   /*!< where the keyboard is drawn */
static uint8 *s_oskBackup = NULL;          /*!< the screen under it */

/**
 * Start reading the controllers, in the VBlank interrupt.
 */
void PadSaturn_Init(void)
{
	SaturnTimer_SetVBlankHook(Smpc_VBlank);
}

/**
 * Keep the cursor within its region.
 */
static void PadSaturn_Clamp(void)
{
	if (s_x < s_minX) s_x = s_minX;
	if (s_x > s_maxX) s_x = s_maxX;
	if (s_y < s_minY) s_y = s_minY;
	if (s_y > s_maxY) s_y = s_maxY;
}

/**
 * Move the cursor. If A is held and the cursor goes elsewhere, the button is
 * let go of where it was first, and A ignored until released: a click only ever
 * lands where A was pressed.
 *
 * @param x Its column.
 * @param y Its line.
 */
void PadSaturn_SetPosition(uint16 x, uint16 y)
{
	/* A click only ever where A was pressed: if the cursor goes elsewhere
	 * while A is held (the focus jumping to a new screen's button, to the
	 * Options button after placing a structure, to the camera...), let go
	 * of the button where it is, and ignore A until it is released. */
	if ((x != s_x || y != s_y) && (s_previous & PAD_A) && s_controller != CONTROLLER_KEYBOARD_MOUSE) {
		Mouse_EventHandler((uint16)s_x, (uint16)s_y, false, false);
		s_previous &= ~PAD_A;
		s_blockA = true;
	}
	s_x = x;
	s_y = y;
	PadSaturn_Clamp();
	s_positionChanged = true;
}

/**
 * Keep the cursor within a rectangle.
 *
 * @param minX The left edge.
 * @param maxX The right edge.
 * @param minY The top edge.
 * @param maxY The bottom edge.
 */
void PadSaturn_SetRegion(uint16 minX, uint16 maxX, uint16 minY, uint16 maxY)
{
	s_minX = minX;
	s_maxX = maxX;
	s_minY = minY;
	s_maxY = maxY;
	PadSaturn_Clamp();
	s_positionChanged = true;
}

/**
 * The sound of moving the focus: its own, as the game's effects depend on
 * the music loaded (the menus' has none that fits).
 */
static void PadSaturn_Blip(void)
{
	if (g_gameConfig.sounds != 0) DSP_Saturn_Blip(DSP_BLIP_FOCUS);
}


/**
 * The sound of a button that has nothing to do.
 */
static void PadSaturn_InvalidSound(void)
{
	if (g_gameConfig.sounds != 0) DSP_Saturn_Blip(DSP_BLIP_INVALID);
}

/**
 * The sound of pressing A on what is focused.
 */
static void PadSaturn_UseSound(void)
{
	if (g_gameConfig.sounds == 0) return;
	DSP_Saturn_Blip(DSP_BLIP_USE);
}

/**
 * Queue a Dune II key code as a press and a release: a key still down in
 * the engine's map isn't taken again (when keys don't repeat).
 *
 * @param key The key code.
 */
static void PadSaturn_Key(uint16 key)
{
	Input_HandleInput(key);
	Input_HandleInput(key | 0x800);
}

/**
 * Press and release a key, as a PC scan code.
 *
 * @param scancode The scan code.
 */
static void PadSaturn_KeyTap(uint8 scancode)
{
	Input_EventHandler(scancode);
	Input_EventHandler(scancode | SCANCODE_RELEASED);
}

/**
 * Queue the shortcut of side bar command button index (8..11), if shown.
 * The shortcut is the first letter of the command, so it depends on the
 * language; reading it from the widget keeps it right.
 *
 * @param index The widget index.
 */
static void PadSaturn_CommandButton(uint16 index)
{
	Widget *w;

	if (g_selectionType != SELECTIONTYPE_UNIT) return;
	w = GUI_Widget_Get_ByIndex(g_widgetLinkedListHead, index);
	if (w == NULL || w->flags.invisible || w->shortcut == 0) {
		PadSaturn_InvalidSound();
		return;
	}
	PadSaturn_Key(w->shortcut);
}

/**
 * Press a button of the selected structure in the side bar, if shown:
 * Repair/Upgrade (widget 4) or the one that builds, places, launches...
 * (widget 5, "Build it", "Place it").
 *
 * @param index The widget index, 4 or 5.
 */
static void PadSaturn_SideBarButton(uint16 index)
{
	Widget *w = GUI_Widget_Get_ByIndex(g_widgetLinkedListHead, index);
	Widget *other = GUI_Widget_Get_ByIndex(g_widgetLinkedListHead, (index == 4) ? 5 : 4);

	if (w == NULL || w->flags.invisible) {
		PadSaturn_InvalidSound();
		return;
	}
	/* the key goes to one of them only */
	if (other != NULL && other->shortcut == KEY_SIDE_BAR) other->shortcut = 0;
	w->shortcut = KEY_SIDE_BAR;
	PadSaturn_Key(KEY_SIDE_BAR);
}

/**
 * Saturn keyboard key number (PS/2 set 2) to PC XT scan code, or 0.
 *
 * @param key The key number.
 * @return The scan code.
 */
static uint8 PadSaturn_ScanCode(uint8 key)
{
	static const uint8 table[][2] = {
		{0x76, 0x01}, {0x05, 0x3B}, {0x06, 0x3C}, {0x04, 0x3D}, {0x0C, 0x3E}, {0x03, 0x3F},
		{0x0B, 0x40}, {0x83, 0x41}, {0x0A, 0x42}, {0x01, 0x43}, {0x09, 0x44}, {0x78, 0x57},
		{0x07, 0x58}, {0x0E, 0x29}, {0x16, 0x02}, {0x1E, 0x03}, {0x26, 0x04}, {0x25, 0x05},
		{0x2E, 0x06}, {0x36, 0x07}, {0x3D, 0x08}, {0x3E, 0x09}, {0x46, 0x0A}, {0x45, 0x0B},
		{0x4E, 0x0C}, {0x55, 0x0D}, {0x66, 0x0E}, {0x0D, 0x0F}, {0x15, 0x10}, {0x1D, 0x11},
		{0x24, 0x12}, {0x2D, 0x13}, {0x2C, 0x14}, {0x35, 0x15}, {0x3C, 0x16}, {0x43, 0x17},
		{0x44, 0x18}, {0x4D, 0x19}, {0x54, 0x1A}, {0x5B, 0x1B}, {0x5A, 0x1C}, {0x14, 0x1D},
		{0x1C, 0x1E}, {0x1B, 0x1F}, {0x23, 0x20}, {0x2B, 0x21}, {0x34, 0x22}, {0x33, 0x23},
		{0x3B, 0x24}, {0x42, 0x25}, {0x4B, 0x26}, {0x4C, 0x27}, {0x52, 0x28}, {0x12, 0x2A},
		{0x5D, 0x2B}, {0x1A, 0x2C}, {0x22, 0x2D}, {0x21, 0x2E}, {0x2A, 0x2F}, {0x32, 0x30},
		{0x31, 0x31}, {0x3A, 0x32}, {0x41, 0x33}, {0x49, 0x34}, {0x4A, 0x35}, {0x59, 0x36},
		{0x11, 0x38}, {0x29, 0x39}, {0x58, 0x3A}
	};
	size_t i;

	for (i = 0; i < sizeof(table) / sizeof(table[0]); i++) {
		if (table[i][0] == key) return table[i][1];
	}
	return 0;
}

/**
 * Which controller to use, from what is on the two ports; sets which port
 * holds it (the keyboard, for a keyboard and a mouse).
 *
 * @param d The devices of ports 1 and 2.
 * @param port Filled with the port of the controller.
 * @return The controller.
 */
static Controller PadSaturn_Detect(const SmpcDevice d[2], int *port)
{
	int i;

	if ((d[0].kind == SMPC_KEYBOARD && d[1].kind == SMPC_MOUSE) || (d[0].kind == SMPC_MOUSE && d[1].kind == SMPC_KEYBOARD)) {
		*port = (d[0].kind == SMPC_KEYBOARD) ? 0 : 1;
		return CONTROLLER_KEYBOARD_MOUSE;
	}
	for (i = 0; i < 2; i++) {
		*port = i;
		switch (d[i].kind) {
			case SMPC_PAD: case SMPC_OTHER: return CONTROLLER_PAD;
			case SMPC_ANALOG: return CONTROLLER_3D;
			case SMPC_KEYBOARD: return CONTROLLER_KEYBOARD;
			/* without keys */
			case SMPC_MOUSE: return CONTROLLER_KEYBOARD_MOUSE;
			default: break;
		}
	}
	return CONTROLLER_NONE;
}

/**
 * Keyboard keys go to the game as on DOS, but for the ones standing in for
 * pad buttons when there is no mouse.
 *
 * @param mouse True with a mouse (all keys go to the game).
 */
static void PadSaturn_Keys(bool mouse)
{
	uint8 key;
	int make;

	while (Smpc_KeyEvent(&key, &make)) {
		uint8 scancode;

		if (!mouse && key == KEY_SPACE) {
			s_keySpace = make != 0;
			continue;
		}
		if (!mouse && key == KEY_TAB) {
			s_keyTab = make != 0;
			continue;
		}
		scancode = PadSaturn_ScanCode(key);
		if (scancode != 0) Input_EventHandler(make ? scancode : (uint8)(scancode | SCANCODE_RELEASED));
	}
}

/**
 * The keyboard and mouse: as on DOS.
 *
 * @param d The devices of ports 1 and 2.
 */
static void PadSaturn_KeyboardMouse(const SmpcDevice d[2])
{
	int dx, dy, i;
	bool left = false, right = false;

	PadSaturn_Keys(true);

	Smpc_MouseMotion(&dx, &dy);
	if (dx != 0 || dy != 0) {
		s_x += dx;
		s_y -= dy;
		PadSaturn_Clamp();
		s_positionChanged = true;
	}
	for (i = 0; i < 2; i++) {
		if (d[i].kind != SMPC_MOUSE) continue;
		left = (d[i].buttons & 1) != 0;
		right = (d[i].buttons & 2) != 0;
	}
	if (s_positionChanged || left != s_leftButton || right != s_rightButton) {
		s_positionChanged = false;
		s_leftButton = left;
		s_rightButton = right;
		Mouse_EventHandler((uint16)s_x, (uint16)s_y, left, right);
	}
}

/**
 * A D-pad direction as Map_MoveDirection() takes it (0 up, then clockwise
 * in eighths), or NO_DIRECTION.
 *
 * @param pad The buttons (PAD_*).
 * @return The direction.
 */
static uint16 PadSaturn_Direction(uint16 pad)
{
	static const uint16 directions[16] = {
		/* by bits right, left, down, up */
		NO_DIRECTION, 0, 4, NO_DIRECTION, 6, 7, 5, NO_DIRECTION,
		2, 1, 3, NO_DIRECTION, NO_DIRECTION, NO_DIRECTION, NO_DIRECTION, NO_DIRECTION
	};
	int bits = ((pad & PAD_UP) ? 1 : 0) | ((pad & PAD_DOWN) ? 2 : 0) | ((pad & PAD_LEFT) ? 4 : 0) | ((pad & PAD_RIGHT) ? 8 : 0);
	return directions[bits];
}

/**
 * Whether the camera's reticle moves freely (Mega Drive) rather than
 * snapping to tiles in the middle of the view: the Game Controls setting.
 *
 * @return True for the free camera.
 */
static bool PadSaturn_FreeCamera(void)
{
	return g_gameConfig.camera != 0;
}

/**
 * Free camera: move the cursor over the map view; pushing on at an edge
 * asks to scroll that way (PadSaturn_Camera() does it).
 *
 * @param dx The pixels to move right.
 * @param dy The pixels to move down.
 * @param fast Whether to scroll fast at an edge.
 */
static void PadSaturn_MoveFree(int dx, int dy, bool fast)
{
	int x = s_x + dx, y = s_y + dy;

	s_edgeX = (x < VIEW_LEFT) ? -1 : (x > VIEW_RIGHT) ? 1 : 0;
	s_edgeY = (y < VIEW_TOP) ? -1 : (y > VIEW_BOTTOM) ? 1 : 0;
	s_edgeFast = fast;
	if (x < VIEW_LEFT) x = VIEW_LEFT;
	if (x > VIEW_RIGHT) x = VIEW_RIGHT;
	if (y < VIEW_TOP) y = VIEW_TOP;
	if (y > VIEW_BOTTOM) y = VIEW_BOTTOM;
	if (x != s_x || y != s_y) {
		s_x = x;
		s_y = y;
		s_positionChanged = true;
	}
}

/**
 * The buttons while the on-screen keyboard is on show: the D-pad moves
 * along the keys (repeating when held), A types, B deletes (repeating
 * when held), Start is OK;
 * PadSaturn_OnScreenKeyboard() carries them out.
 *
 * @param pad The buttons (PAD_*).
 * @param pressed The buttons pressed since the last frame.
 */
static void PadSaturn_OskButtons(uint16 pad, uint16 pressed)
{
	static int deleteFrames = 0;

	if (pressed & PAD_DIRECTIONS) s_repeatFrames = 0;
	if (pad & PAD_DIRECTIONS) {
		if (s_repeatFrames == 0 || (s_repeatFrames >= REPEAT_FIRST && (s_repeatFrames - REPEAT_FIRST) % REPEAT_NEXT == 0)) {
			s_navigate = PadSaturn_Direction(pad);
		}
		s_repeatFrames++;
	}
	if (pressed & PAD_A) s_pressA = true;
	if (pressed & PAD_START) s_pressStart = true;

	/* B deletes, and goes on deleting while held */
	if (pressed & PAD_B) deleteFrames = 0;
	if (pad & PAD_B) {
		if (deleteFrames == 0 || (deleteFrames >= DELETE_FIRST && (deleteFrames - DELETE_FIRST) % DELETE_NEXT == 0)) s_pressB = true;
		deleteFrames++;
	}
}

/**
 * The pad-like controllers: standard pad, 3D Controller, keyboard alone.
 *
 * @param d The controller.
 * @param controller Its type.
 */
static void PadSaturn_Buttons(const SmpcDevice *d, Controller controller)
{
	uint16 pad = d->buttons;
	uint16 pressed, released;

	if (controller == CONTROLLER_KEYBOARD) {
		/* the arrows come as the pad bits; Space and Tab stand for A and C;
		 * everything else goes to the game as keys (all of them while a
		 * name is typed) */
		PadSaturn_Keys(s_oskWanted);
		pad &= PAD_DIRECTIONS;
		if (s_keySpace) pad |= PAD_A;
		if (s_keyTab) pad |= PAD_C;
	}
	/* a new screen ignores the A that was down when it came (the press
	 * that skipped the one before) until A is released */
	if (s_blockA) {
		if (pad & PAD_A) {
			pad &= ~PAD_A;
		} else {
			s_blockA = false;
		}
	}
	pressed = pad & ~s_previous;
	released = s_previous & ~pad;
	s_previous = pad;

	if (controller != CONTROLLER_KEYBOARD && (pad & PAD_RESET) == PAD_RESET) Bios_ExitToMenu();

	/* the on-screen keyboard has the pad while it is on show */
	if (s_oskOpen && controller != CONTROLLER_KEYBOARD) {
		PadSaturn_OskButtons(pad, pressed);
		return;
	}

	if (pressed & PAD_A) {
		s_pressA = true;
		if (s_useSound && SaturnTimer_Frames() - s_handledFrame <= FOCUS_STALE) PadSaturn_UseSound();
	}

	/* the D-pad: requests for the focus and camera, repeating when held;
	 * with C held the camera scrolls a tile every frame */
	if (pad & PAD_DIRECTIONS) {
		bool repeat;

		if (pressed & PAD_DIRECTIONS) s_repeatFrames = 0;
		if (s_cameraActive && controller != CONTROLLER_3D) {
			repeat = s_repeatFrames == 0 || (pad & PAD_C) != 0 ||
				(s_repeatFrames >= SCROLL_FIRST && (s_repeatFrames - SCROLL_FIRST) % SCROLL_NEXT == 0);
		} else {
			repeat = s_repeatFrames == 0 || (s_repeatFrames >= REPEAT_FIRST && (s_repeatFrames - REPEAT_FIRST) % REPEAT_NEXT == 0);
		}
		s_repeatFrames++;
		if (controller == CONTROLLER_3D) s_stickLast = false;

		if (s_cameraActive && controller != CONTROLLER_3D && PadSaturn_FreeCamera()) {
			int speed = (pad & PAD_C) ? FREE_SPEED_FAST : FREE_SPEED;
			PadSaturn_MoveFree(((pad & PAD_RIGHT) ? speed : 0) - ((pad & PAD_LEFT) ? speed : 0),
				((pad & PAD_DOWN) ? speed : 0) - ((pad & PAD_UP) ? speed : 0), (pad & PAD_C) != 0);
		} else if (repeat) {
			if (s_cameraActive && controller != CONTROLLER_3D) {
				s_scroll = PadSaturn_Direction(pad);
			} else {
				s_navigate = PadSaturn_Direction(pad);
			}
		}
	} else if (controller != CONTROLLER_3D) {
		s_edgeX = s_edgeY = 0;
	}

	/* the 3D Controller's stick: the camera */
	if (controller == CONTROLLER_3D) {
		int sx = (int)d->analog[0] - 128, sy = (int)d->analog[1] - 128;

		if (abs(sx) < STICK_DEAD) sx = 0;
		if (abs(sy) < STICK_DEAD) sy = 0;
		if (sx != 0 || sy != 0) {
			s_stickLast = true;
			if (s_cameraActive && PadSaturn_FreeCamera()) {
				PadSaturn_MoveFree(sx / 16, sy / 16, sx > 100 || sx < -100 || sy > 100 || sy < -100);
			} else {
				s_stickX += sx;
				s_stickY += sy;
			}
		} else if (!(pad & PAD_DIRECTIONS)) {
			s_edgeX = s_edgeY = 0;
		}
	}

	/* A: a click, or on a list the key that opens the selected line */
	if (s_keyA != 0 && SaturnTimer_Frames() - s_handledFrame <= FOCUS_STALE) {
		if (pressed & PAD_A) PadSaturn_Key(s_keyA);
		pad &= ~PAD_A;
		pressed &= ~PAD_A;
		released &= ~PAD_A;
	}
	if (s_positionChanged || ((pressed | released) & PAD_A) != 0) {
		s_positionChanged = false;
		Mouse_EventHandler((uint16)s_x, (uint16)s_y, (pad & PAD_A) != 0, false);
	}

	if (controller == CONTROLLER_KEYBOARD) {
		/* Tab switches the camera, as a C tap does */
		if (pressed & PAD_C) s_toggleCamera = true;
		return;
	}

	if (pressed & PAD_B) {
		PadSaturn_KeyTap(SCANCODE_ESC);
		s_pressB = true;
	}
	if (pressed & PAD_START) PadSaturn_KeyTap((pad & PAD_C) ? SCANCODE_F1 : SCANCODE_F2);

	if (pressed & PAD_L) Input_EventHandler(SCANCODE_LSHIFT);
	if (released & PAD_L) Input_EventHandler(SCANCODE_LSHIFT | SCANCODE_RELEASED);

	/* taps: a short press of L or C with no other button in between */
	if (pressed & PAD_L) {
		s_lTapFrames = 0;
	} else if (s_lTapFrames >= 0 && (pad & PAD_L)) {
		if (++s_lTapFrames > TAP_FRAMES || (pad & ~(PAD_L | PAD_C)) != 0) s_lTapFrames = -1;
	}
	if ((released & PAD_L) && s_lTapFrames >= 0) {
		s_cycle = (pad & PAD_C) ? CYCLE_STRUCTURE : CYCLE_UNIT;
		s_lTapFrames = -1;
		/* C+L isn't a C tap */
		s_cTapFrames = -1;
	}

	if (controller == CONTROLLER_PAD) {
		/* a tap: C alone (held with the D-pad it scrolls fast instead) */
		if (pressed & PAD_C) {
			s_cTapFrames = ((pad & ~PAD_C) == 0) ? 0 : -1;
		} else if (s_cTapFrames >= 0 && (pad & PAD_C)) {
			if (++s_cTapFrames > TAP_FRAMES || (pad & ~PAD_C) != 0) s_cTapFrames = -1;
		}
		if ((released & PAD_C) && s_cTapFrames >= 0) {
			s_toggleCamera = true;
			s_cTapFrames = -1;
		}
	}

	if (g_selectionType == SELECTIONTYPE_STRUCTURE) {
		if (pressed & PAD_X) PadSaturn_KeyTap(SCANCODE_F3);
		if (pressed & PAD_Y) PadSaturn_SideBarButton(4);
		if (pressed & PAD_Z) PadSaturn_SideBarButton(5);
	} else {
		if (pressed & PAD_X) PadSaturn_CommandButton(8);
		if (pressed & PAD_Y) PadSaturn_CommandButton(9);
		if (pressed & PAD_Z) PadSaturn_CommandButton(10);
		if (pressed & PAD_R) PadSaturn_CommandButton(11);
	}
}

/**
 * Brackets round the corners of a rectangle, with a dark edge outside.
 *
 * @param x The rectangle's left edge.
 * @param y Its top edge.
 * @param w Its width.
 * @param h Its height.
 * @param light The colour of the brackets (VDP2_OVERLAY_*).
 * @param dark The colour of their edge.
 */
static void PadSaturn_Brackets(int x, int y, int w, int h, int light, int dark)
{
	int arm = (w < h ? w : h) / 3;
	int x1, y1;
	int i, t;

	/* just outside the rectangle, clear of what's written in it */
	x -= 3;
	y += (g_vdp2DisplayH - SCREEN_HEIGHT) / 2 - 3;
	x1 = x + w + 5;
	y1 = y + h + 5;

	if (arm < 3) arm = 3;
	if (arm > 7) arm = 7;
	for (i = -1; i <= arm; i++) {
		for (t = -1; t <= 1; t++) {
			int c = (t == -1 || i == -1) ? dark : light;
			/* horizontal arms, then vertical ones, at each corner */
			Vdp2_OverlayPixel(x + i, y + t, c);  Vdp2_OverlayPixel(x1 - i, y + t, c);
			Vdp2_OverlayPixel(x + i, y1 - t, c); Vdp2_OverlayPixel(x1 - i, y1 - t, c);
			Vdp2_OverlayPixel(x + t, y + i, c);  Vdp2_OverlayPixel(x1 - t, y + i, c);
			Vdp2_OverlayPixel(x + t, y1 - i, c); Vdp2_OverlayPixel(x1 - t, y1 - i, c);
		}
	}
}

/**
 * Put the reticle round a rectangle (none for a width of 0); it glides
 * there in PadSaturn_ReticleTick().
 *
 * @param x The rectangle's left edge.
 * @param y Its top edge.
 * @param w Its width, 0 for no reticle.
 * @param h Its height.
 */
static void PadSaturn_SetReticle(int x, int y, int w, int h)
{
	s_reticle.x = x;
	s_reticle.y = y;
	s_reticle.w = w;
	s_reticle.h = h;
}

/**
 * A step of a value towards its target: half the way, at least 1.
 *
 * @param from The value.
 * @param to The target.
 * @return The value a step nearer.
 */
static int PadSaturn_Step(int from, int to)
{
	int d = to - from;
	if (d == 0) return to;
	return from + ((d > 0) ? (d + 1) / 2 : (d - 1) / 2);
}

/**
 * Once a frame: move the reticle drawn on the overlay towards its place.
 */
static void PadSaturn_ReticleTick(void)
{
	Rect next;

	if (s_reticleDrawn.w == s_reticle.w && s_reticleDrawn.h == s_reticle.h &&
			s_reticleDrawn.x == s_reticle.x && s_reticleDrawn.y == s_reticle.y) return;

	if (s_reticle.w == 0 || s_reticleDrawn.w == 0 || s_reticleSnap) {
		/* appears or goes (or follows the free camera) at once */
		next = s_reticle;
	} else {
		next.x = PadSaturn_Step(s_reticleDrawn.x, s_reticle.x);
		next.y = PadSaturn_Step(s_reticleDrawn.y, s_reticle.y);
		next.w = PadSaturn_Step(s_reticleDrawn.w, s_reticle.w);
		next.h = PadSaturn_Step(s_reticleDrawn.h, s_reticle.h);
	}
	if (s_reticleDrawn.w > 0) PadSaturn_Brackets(s_reticleDrawn.x, s_reticleDrawn.y, s_reticleDrawn.w, s_reticleDrawn.h, VDP2_OVERLAY_CLEAR, VDP2_OVERLAY_CLEAR);
	if (next.w > 0) PadSaturn_Brackets(next.x, next.y, next.w, next.h, VDP2_OVERLAY_LIGHT, VDP2_OVERLAY_DARK);
	s_reticleDrawn = next;
}

/**
 * Draw the mouse pointer or not, redrawing it if it is on show.
 *
 * @param visible Whether to draw it.
 */
static void PadSaturn_SetPointer(bool visible)
{
	if (visible == s_pointerVisible) return;
	if (g_mouseHiddenDepth != 0) {
		/* drawn or not when next shown */
		s_pointerVisible = visible;
		return;
	}
	/* the engine is at it: next frame */
	if (g_mouseLock != 0) return;
	g_mouseLock++;
	GUI_Mouse_Hide();
	s_pointerVisible = visible;
	GUI_Mouse_Show();
	g_mouseLock--;
}

/**
 * Whether to draw the mouse pointer (not where a reticle shows the focus).
 *
 * @return True to draw it.
 */
bool PadSaturn_PointerVisible(void)
{
	return s_pointerVisible;
}

/**
 * Once a frame, from Video_Tick(): pick the controller and turn its buttons,
 * keys and movement into the engine's mouse and key events; move the reticle.
 */
void PadSaturn_Tick(void)
{
	SmpcDevice d[2];
	int port = 0;
	Controller controller;

	Smpc_Devices(d);
	controller = PadSaturn_Detect(d, &port);
	if (controller == CONTROLLER_NONE) {
		/* not at once: the first frames after power on have no data yet */
		if (++s_missingFrames < MISSING_FRAMES) return;
	} else {
		s_missingFrames = 0;
	}
	if (controller != s_controller) {
		s_controller = controller;
		s_previous = 0;
		s_keySpace = s_keyTab = false;
	}

	switch (controller) {
		case CONTROLLER_NONE: break;
		case CONTROLLER_KEYBOARD_MOUSE: PadSaturn_KeyboardMouse(d); break;
		default: PadSaturn_Buttons(&d[port], controller); break;
	}

	/* the pointer only with a mouse; the reticle only while the focus or
	 * the camera is being looked after */
	PadSaturn_SetPointer(controller == CONTROLLER_KEYBOARD_MOUSE);
	if (controller == CONTROLLER_KEYBOARD_MOUSE || SaturnTimer_Frames() - s_handledFrame > FOCUS_STALE) {
		PadSaturn_SetReticle(0, 0, 0, 0);
	}
	PadSaturn_ReticleTick();
}

/**
 * Whether any controller is connected.
 *
 * @return True if one is.
 */
bool PadSaturn_Connected(void)
{
	return s_controller != CONTROLLER_NONE;
}

/**
 * Whether to pause with a message while no controller is connected (off
 * while a window says so itself).
 *
 * @param show Whether to.
 */
void PadSaturn_ShowControllerMessage(bool show)
{
	s_controllerMessage = show;
}

/**
 * Where a widget is on the screen (as GUI_Widget_HandleEvents() works it out).
 *
 * @param w The widget.
 * @param x Filled with its left edge.
 * @param y Filled with its top edge.
 */
static void PadSaturn_WidgetPosition(const Widget *w, int *x, int *y)
{
	*x = w->offsetX;
	if (w->offsetX < 0) *x += g_widgetProperties[w->parentID].width << 3;
	*x += g_widgetProperties[w->parentID].xBase << 3;
	*y = w->offsetY;
	if (w->offsetY < 0) *y += g_widgetProperties[w->parentID].height;
	*y += g_widgetProperties[w->parentID].yBase;
}

/**
 * Whether the focus can go to a widget: shown, big enough to be a button,
 * and not the map view, minimap or scroll edges.
 *
 * @param w The widget.
 * @return True if it can have the focus.
 */
static bool PadSaturn_Focusable(const Widget *w)
{
	if (w->flags.invisible || w->width < 8 || w->height < 8) return false;
	if (w->clickProc == &GUI_Widget_Viewport_Click) return false;
	/* lists scroll by themselves as the selection moves (or with the stick) */
	if (w->clickProc == &GUI_Widget_Scrollbar_Click) return false;
	if (w->clickProc == &GUI_Widget_Scrollbar_ArrowUp_Click || w->clickProc == &GUI_Widget_Scrollbar_ArrowDown_Click) return false;
	return true;
}

static Widget *s_focus = NULL; /*!< the focused widget */

/**
 * Put the cursor on a widget, so that a new screen focuses it first (the
 * focus goes to the button nearest the cursor).
 *
 * @param w The widget, or NULL.
 */
void PadSaturn_FocusWidget(const Widget *w)
{
	int x, y;

	if (w == NULL || s_controller == CONTROLLER_KEYBOARD_MOUSE) return;
	PadSaturn_WidgetPosition(w, &x, &y);
	PadSaturn_SetPosition((uint16)(x + w->width / 2), (uint16)(y + w->height / 2));
}

/**
 * Move the focus in a direction, or to the button nearest the cursor for
 * NO_DIRECTION: returns the widget focused then (the same one if there is
 * none that way), or NULL if the screen has nothing to focus.
 *
 * @param list The widgets of the screen.
 * @param direction The direction (as PadSaturn_Direction()), or NO_DIRECTION.
 * @return The widget focused, or NULL.
 */
static Widget *PadSaturn_MoveFocus(Widget *list, uint16 direction)
{
	static const int dirX[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
	static const int dirY[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
	Widget *w, *best = NULL;
	long bestScore = 0;
	bool any = false;
	int fromX = s_x, fromY = s_y;

	/* a move goes from the focused widget, wherever the cursor is */
	if (direction != NO_DIRECTION && s_focus != NULL) {
		PadSaturn_WidgetPosition(s_focus, &fromX, &fromY);
		fromX += s_focus->width / 2;
		fromY += s_focus->height / 2;
	}

	for (w = list; w != NULL; w = GUI_Widget_GetNext(w)) {
		int x, y, dx, dy;
		long score;

		if (!PadSaturn_Focusable(w)) continue;
		any = true;
		if (w == s_focus && direction != NO_DIRECTION) continue;
		PadSaturn_WidgetPosition(w, &x, &y);
		dx = x + w->width / 2 - fromX;
		dy = y + w->height / 2 - fromY;

		if (direction == NO_DIRECTION) {
			score = (long)dx * dx + (long)dy * dy;
		} else {
			/* ahead in the direction; nearer and better lined up is better */
			long along = (long)dx * dirX[direction] + (long)dy * dirY[direction];
			long across = labs((long)dx * dirY[direction] - (long)dy * dirX[direction]);
			if (along <= 2) continue;
			score = along + 3 * across;
		}
		if (best == NULL || score < bestScore) {
			best = w;
			bestScore = score;
		}
	}
	if (!any) return NULL;
	/* nothing that way */
	if (best == NULL) return s_focus;
	{
		int x, y;
		PadSaturn_WidgetPosition(best, &x, &y);
		PadSaturn_SetPosition((uint16)(x + best->width / 2), (uint16)(y + best->height / 2));
	}
	return best;
}

/**
 * The Mentat's list of subjects keeps its own selection (drawn red): the
 * focus follows it, up and down move it with the keys the list takes
 * (scrolling at the ends) and skip the section headings (blue, stringID
 * 0x30), down from the last subject goes to Exit, and B clicks Exit.
 * Returns true while the focus is on the list (direction is then used up).
 *
 * @param list The widgets of the screen.
 * @param fresh Whether the screen is new.
 * @param direction The D-pad direction, set to NO_DIRECTION once used.
 * @return True while the focus is on the list.
 */
static bool PadSaturn_MentatList(Widget *list, bool fresh, uint16 *direction)
{
	static uint16 lastMove = 4;
	Widget *line, *exitButton = NULL, *w;
	bool first, last, hasList = false, pressB, quiet = false;
	uint32 sr;
	int x, y, stick;

	for (w = list; w != NULL; w = GUI_Widget_GetNext(w)) {
		if (w->clickProc == &GUI_Mentat_List_Click) hasList = true;
		if (w == g_widgetMentatFirst) exitButton = w;
	}
	if (!hasList) return false;

	sr = Cpu_DisableInterrupts();
	pressB = s_pressB;
	s_pressB = false;
	Cpu_RestoreInterrupts(sr);
	if (pressB && !fresh && exitButton != NULL) {
		/* B: a click on Exit, as A there would */
		PadSaturn_WidgetPosition(exitButton, &x, &y);
		s_focus = exitButton;
		PadSaturn_SetPosition((uint16)(x + exitButton->width / 2), (uint16)(y + exitButton->height / 2));
		Mouse_EventHandler((uint16)s_x, (uint16)s_y, true, false);
		Mouse_EventHandler((uint16)s_x, (uint16)s_y, false, false);
		*direction = NO_DIRECTION;
		return false;
	}

	line = GUI_Widget_Get_ByIndex(list, GUI_Mentat_HelpSelection(&first, &last));
	if (fresh || s_focus == NULL) {
		/* entering: the selected subject */
		s_focus = line;
		lastMove = 4;
	}

	/* the 3D Controller's stick moves the selection too, a line each time
	 * enough travel has been summed up (without the blip) */
	sr = Cpu_DisableInterrupts();
	stick = s_stickY;
	if (stick >= STICK_STEP) {
		s_stickY -= STICK_STEP;
	} else if (stick <= -STICK_STEP) {
		s_stickY += STICK_STEP;
	}
	s_stickX = 0;
	Cpu_RestoreInterrupts(sr);
	s_stickLast = false;

	if (s_focus == NULL || s_focus->clickProc != &GUI_Mentat_List_Click) {
		/* elsewhere (Exit): the selection shouldn't look like the focus */
		GUI_Mentat_ShowHelpSelection(false);
		return false;
	}
	GUI_Mentat_ShowHelpSelection(true);
	if (*direction == NO_DIRECTION && stick >= STICK_STEP) {
		*direction = 4;
		quiet = true;
	} else if (*direction == NO_DIRECTION && stick <= -STICK_STEP) {
		*direction = 0;
		quiet = true;
	}

	if (s_x != LIST_PARK_X || s_y != LIST_PARK_Y) PadSaturn_SetPosition(LIST_PARK_X, LIST_PARK_Y);

	/* on a heading: on to the nearest subject, the way it was going */
	if (line != NULL && line->stringID == 0x30) {
		if (first) lastMove = 4;
		if (last) lastMove = 0;
		PadSaturn_Key(lastMove == 0 ? KEY_ARROW_UP : KEY_ARROW_DOWN);
		*direction = NO_DIRECTION;
		s_focus = line;
		return true;
	}

	if (*direction == 0 && !first) {
		lastMove = 0;
		PadSaturn_Key(KEY_ARROW_UP);
		if (!quiet) PadSaturn_Blip();
	} else if (*direction == 4 && last && exitButton != NULL && !quiet) {
		s_focus = exitButton;
		GUI_Mentat_ShowHelpSelection(false);
		PadSaturn_WidgetPosition(exitButton, &x, &y);
		PadSaturn_SetPosition((uint16)(x + exitButton->width / 2), (uint16)(y + exitButton->height / 2));
		PadSaturn_Blip();
		*direction = NO_DIRECTION;
		return false;
	} else if (*direction == 4 && !last) {
		lastMove = 4;
		PadSaturn_Key(KEY_ARROW_DOWN);
		if (!quiet) PadSaturn_Blip();
	}
	*direction = NO_DIRECTION;

	/* the focus is the selected line (drawn red by the list); the cursor
	 * waits off the list: a line under it takes the keys meant for the list
	 * (it counts hovering as a click) */
	s_focus = line;
	if (s_x != LIST_PARK_X || s_y != LIST_PARK_Y) PadSaturn_SetPosition(LIST_PARK_X, LIST_PARK_Y);
	return true;
}

/**
 * A number for the buttons of a list, where and how big they are: another
 * number, another screen.
 *
 * @param list The widgets.
 * @return The number.
 */
static uint32 PadSaturn_Layout(Widget *list)
{
	uint32 layout = 0;
	Widget *w;

	for (w = list; w != NULL; w = GUI_Widget_GetNext(w)) {
		int x, y;
		if (!PadSaturn_Focusable(w)) continue;
		PadSaturn_WidgetPosition(w, &x, &y);
		layout = layout * 31 + (uint32)(w->index * 1009 + x * 97 + y * 13 + w->width * 7 + w->height);
	}
	return layout;
}

/**
 * Whether w is a widget of list the focus can go to.
 *
 * @param list The widgets.
 * @param w The widget.
 * @return True if it is there and focusable.
 */
static bool PadSaturn_InList(Widget *list, Widget *w)
{
	Widget *i;

	if (w == NULL) return false;
	for (i = list; i != NULL; i = GUI_Widget_GetNext(i)) {
		if (i == w) return PadSaturn_Focusable(w);
	}
	return false;
}

/**
 * Where the focus goes back to from the camera when the button focused
 * before is gone: the side bar's button nearest the cursor, or Options if
 * the side bar has none.
 *
 * @param list The widgets of the screen.
 * @return The widget, or NULL.
 */
static Widget *PadSaturn_SideBarFocus(Widget *list)
{
	Widget *w, *best = NULL;
	long bestScore = 0;

	for (w = list; w != NULL; w = GUI_Widget_GetNext(w)) {
		int x, y;
		long dx, dy, score;

		if (!PadSaturn_Focusable(w)) continue;
		PadSaturn_WidgetPosition(w, &x, &y);
		if (x < SIDE_BAR_X) continue;
		dx = x + w->width / 2 - s_x;
		dy = y + w->height / 2 - s_y;
		score = dx * dx + dy * dy;
		if (best == NULL || score < bestScore) {
			best = w;
			bestScore = score;
		}
	}
	if (best != NULL) return best;

	w = GUI_Widget_Get_ByIndex(list, WIDGET_OPTIONS);
	return PadSaturn_InList(list, w) ? w : NULL;
}

/**
 * The 3D Controller's stick, off the camera: scrolls the screen's list, a
 * line each time enough travel has been summed up.
 *
 * @param list The widgets of the screen.
 */
static void PadSaturn_StickScroll(Widget *list)
{
	Widget *w;
	int sy;
	uint32 sr;

	/* on the Mentat's list and the construction list the stick moves the
	 * selection (PadSaturn_MentatList(), PadSaturn_FactoryList()) */
	for (w = list; w != NULL; w = GUI_Widget_GetNext(w)) {
		if (w->clickProc == &GUI_Mentat_List_Click || w->clickProc == &GUI_Production_List_Click) return;
	}

	sr = Cpu_DisableInterrupts();
	sy = s_stickY;
	s_stickX = 0;
	s_stickY = 0;
	Cpu_RestoreInterrupts(sr);
	s_stickLast = false;
	if (sy > -STICK_STEP && sy < STICK_STEP) {
		/* keep what isn't a line yet */
		sr = Cpu_DisableInterrupts();
		s_stickY += sy;
		Cpu_RestoreInterrupts(sr);
		return;
	}

	for (w = list; w != NULL; w = GUI_Widget_GetNext(w)) {
		if (w->flags.invisible || w->clickProc != &GUI_Widget_Scrollbar_Click) continue;
		if (sy < 0) {
			GUI_Widget_Scrollbar_ArrowUp_Click(w);
		} else {
			GUI_Widget_Scrollbar_ArrowDown_Click(w);
		}
		break;
	}
	sr = Cpu_DisableInterrupts();
	s_stickY += (sy < 0) ? sy + STICK_STEP : sy - STICK_STEP;
	Cpu_RestoreInterrupts(sr);
}

/**
 * Put the reticle on the focused widget.
 */
static void PadSaturn_ReticleOnFocus(void)
{
	Widget *w = s_focus;
	int x, y;

	/* list lines (the Mentat's subjects) change colour instead */
	if (w == NULL || w->clickProc == &GUI_Mentat_List_Click) {
		PadSaturn_SetReticle(0, 0, 0, 0);
		return;
	}
	PadSaturn_WidgetPosition(w, &x, &y);
	PadSaturn_SetReticle(x, y, w->width, w->height);
}

/* Where the camera's cursor is, in tiles from the middle of the map view:
 * it only leaves the middle to reach the edges of the map, where the view
 * can't scroll further. */
static int s_cameraTileX = 0, s_cameraTileY = 0;

/**
 * Scroll the view by dx, dy tiles within the map (as Map_MoveDirection()
 * does, but from where the view is now); returns the tiles moved.
 *
 * @param dx The tiles to scroll right.
 * @param dy The tiles to scroll down.
 * @param movedX Filled with the tiles scrolled right.
 * @param movedY Filled with the tiles scrolled down.
 */
static void PadSaturn_ScrollView(int dx, int dy, int *movedX, int *movedY)
{
	const MapInfo *mapInfo = &g_mapInfos[g_scenario.mapScale];
	int x = Tile_GetPackedX(g_viewportPosition), y = Tile_GetPackedY(g_viewportPosition);
	int nx = x + dx, ny = y + dy;

	if (nx < mapInfo->minX) nx = mapInfo->minX;
	if (ny < mapInfo->minY) ny = mapInfo->minY;
	if (nx > mapInfo->minX + mapInfo->sizeX - 15) nx = mapInfo->minX + mapInfo->sizeX - 15;
	if (ny > mapInfo->minY + mapInfo->sizeY - 10) ny = mapInfo->minY + mapInfo->sizeY - 10;
	g_viewportPosition = Tile_PackXY((uint16)nx, (uint16)ny);
	*movedX = nx - x;
	*movedY = ny - y;
}

/**
 * One step of the camera: the cursor back to the middle first, then the
 * view, then (at the map's edge) the cursor towards the edge.
 *
 * @param dx The tiles right (-1, 0, 1).
 * @param dy The tiles down (-1, 0, 1).
 */
static void PadSaturn_CameraStep(int dx, int dy)
{
	int scrollX = 0, scrollY = 0, movedX, movedY;

	if (dx != 0 && s_cameraTileX != 0 && (s_cameraTileX > 0) != (dx > 0)) {
		s_cameraTileX += dx;
	} else {
		scrollX = dx;
	}
	if (dy != 0 && s_cameraTileY != 0 && (s_cameraTileY > 0) != (dy > 0)) {
		s_cameraTileY += dy;
	} else {
		scrollY = dy;
	}

	PadSaturn_ScrollView(scrollX, scrollY, &movedX, &movedY);
	if (scrollX != 0 && movedX == 0) s_cameraTileX += scrollX;
	if (scrollY != 0 && movedY == 0) s_cameraTileY += scrollY;

	/* the view shows 15 x 10 tiles, the middle one being 7, 5 */
	if (s_cameraTileX < -7) s_cameraTileX = -7;
	if (s_cameraTileX > 7) s_cameraTileX = 7;
	if (s_cameraTileY < -5) s_cameraTileY = -5;
	if (s_cameraTileY > 4) s_cameraTileY = 4;
}

/**
 * The free camera: the reticle on the cursor, the view scrolling while it
 * is pushed against an edge.
 */
static void PadSaturn_FreeCameraTick(void)
{
	static uint32 lastScroll = 0;
	uint32 frames = SaturnTimer_Frames();
	int movedX, movedY;

	if (s_x < VIEW_LEFT || s_x > VIEW_RIGHT || s_y < VIEW_TOP || s_y > VIEW_BOTTOM) {
		/* coming from the side bar */
		PadSaturn_SetPosition(CAMERA_X, CAMERA_Y);
	}
	if ((s_edgeX != 0 || s_edgeY != 0) && frames - lastScroll >= (uint32)(s_edgeFast ? EDGE_SCROLL_FAST : EDGE_SCROLL_FRAMES)) {
		PadSaturn_ScrollView(s_edgeX, s_edgeY, &movedX, &movedY);
		lastScroll = frames;
	}
	s_reticleSnap = true;
	PadSaturn_SetReticle(s_x - 8, s_y - 8, 16, 16);
}

/**
 * Scroll the camera from the D-pad or the stick.
 */
static void PadSaturn_Camera(void)
{
	static const int directionX[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
	static const int directionY[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
	uint32 sr;
	uint16 direction;
	int sx, sy, x, y;

	if (PadSaturn_FreeCamera()) {
		PadSaturn_FreeCameraTick();
		return;
	}
	s_reticleSnap = false;

	sr = Cpu_DisableInterrupts();
	direction = s_scroll;
	s_scroll = NO_DIRECTION;
	sx = s_stickX;
	sy = s_stickY;
	Cpu_RestoreInterrupts(sr);

	if (direction != NO_DIRECTION) PadSaturn_CameraStep(directionX[direction], directionY[direction]);

	/* the stick: a tile each time enough travel has been summed up */
	x = (sx >= STICK_STEP) ? 1 : (sx <= -STICK_STEP) ? -1 : 0;
	y = (sy >= STICK_STEP) ? 1 : (sy <= -STICK_STEP) ? -1 : 0;
	if (x != 0 || y != 0) {
		PadSaturn_CameraStep(x, y);
		sr = Cpu_DisableInterrupts();
		s_stickX -= x * STICK_STEP;
		s_stickY -= y * STICK_STEP;
		Cpu_RestoreInterrupts(sr);
	}

	x = CAMERA_X + s_cameraTileX * 16;
	y = CAMERA_Y + s_cameraTileY * 16;
	if (s_x != x || s_y != y) PadSaturn_SetPosition((uint16)x, (uint16)y);
	PadSaturn_SetReticle(x - 8, y - 8, 16, 16);
}

/* A new screen: forget what was pressed for the one before. */

/**
 * The focus jumps by itself (not with the D-pad): let go of the button
 * where the cursor is now, and ignore A until it is released, or the
 * release would click where the focus lands (placing a structure ends on
 * the Options button, a command button hands over to the camera).
 */
static void PadSaturn_ReleaseA(void)
{
	if (s_previous & PAD_A) {
		Mouse_EventHandler((uint16)s_x, (uint16)s_y, false, false);
		s_previous &= ~PAD_A;
		s_blockA = true;
	}
}

/**
 * A new screen: let go of A and forget what was pressed for the one before.
 */
static void PadSaturn_NewScreen(void)
{
	/* let go before forgetting: a release coming later would finish a
	 * click on the new screen's focused button */
	PadSaturn_ReleaseA();
	Input_History_Clear();
	s_blockA = true;
	s_pressA = false;
}

/**
 * A key of the on-screen keyboard: what it types (Space, '\b' Delete, 0x1B
 * Cancel and '\r' OK on the bottom row) and the columns it spans.
 *
 * @param row The row.
 * @param column A column of the key.
 * @param first Filled with its first column.
 * @param last Filled with its last column.
 * @return What it types.
 */
static char PadSaturn_OskKey(int row, int column, int *first, int *last)
{
	static const char rows[OSK_ROWS - 1][OSK_COLUMNS + 1] = {
		"ABCDEFGHIJKLM", "NOPQRSTUVWXYZ", "abcdefghijklm", "nopqrstuvwxyz", "0123456789.-'"
	};

	if (row < OSK_ROWS - 1) {
		*first = *last = column;
		return rows[row][column];
	}
	if (column < 4) {
		*first = 0;
		*last = 3;
		return ' ';
	}
	if (column < 7) {
		*first = 4;
		*last = 6;
		return '\b';
	}
	if (s_oskCancel && column < 10) {
		*first = 7;
		*last = 9;
		return 0x1B;
	}
	*first = s_oskCancel ? 10 : 7;
	*last = OSK_COLUMNS - 1;
	return '\r';
}

/**
 * Where a key of the on-screen keyboard is on the screen.
 *
 * @param row The row.
 * @param column A column of the key.
 * @param r Filled with its rectangle.
 */
static void PadSaturn_OskKeyRect(int row, int column, Rect *r)
{
	int first, last;

	PadSaturn_OskKey(row, column, &first, &last);
	r->x = OSK_LEFT + 8 + first * OSK_CELL_W;
	r->y = s_oskTop + 5 + row * OSK_CELL_H;
	r->w = (last - first + 1) * OSK_CELL_W;
	r->h = OSK_CELL_H;
}

/**
 * Move the selection of the on-screen keyboard, round at the edges.
 *
 * @param direction The direction (as PadSaturn_Direction()).
 * @return True if it moved (not for diagonals).
 */
static bool PadSaturn_OskMove(uint16 direction)
{
	int first, last;

	PadSaturn_OskKey(s_oskRow, s_oskColumn, &first, &last);
	switch (direction) {
		case 0: s_oskRow = (s_oskRow == 0) ? OSK_ROWS - 1 : s_oskRow - 1; break;
		case 2: s_oskColumn = (last == OSK_COLUMNS - 1) ? 0 : last + 1; break;
		case 4: s_oskRow = (s_oskRow == OSK_ROWS - 1) ? 0 : s_oskRow + 1; break;
		case 6: s_oskColumn = (first == 0) ? OSK_COLUMNS - 1 : first - 1; break;
		default: return false;
	}
	return true;
}

/**
 * Type a key of the on-screen keyboard as a keyboard would: its scan code,
 * with Shift for capitals, so the editbox and the window's shortcuts (Return,
 * Esc) take it as they take a key.
 *
 * @param c What the key types.
 */
static void PadSaturn_OskType(char c)
{
	/* the PC scan codes of the characters on the keyboard */
	static const char keys[] = {
		  0,   0, '1', '2', '3', '4', '5', '6', '7', '8',  '9', '0', '-', '=',   0,   0,
		'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p',  '[', ']',   0,   0, 'a', 's',
		'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '\'', '`',   0, '\\', 'z', 'x', 'c', 'v',
		'b', 'n', 'm', ',', '.', '/',   0,   0,   0, ' '
	};
	bool shift = c >= 'A' && c <= 'Z';
	char lower = shift ? (char)(c - 'A' + 'a') : c;
	uint8 scancode;
	uint32 sr;

	switch (c) {
		case '\b': scancode = SCANCODE_BACKSPACE; break;
		case '\r': scancode = SCANCODE_RETURN; break;
		case 0x1B: scancode = SCANCODE_ESC; break;
		default:
			for (scancode = 0; scancode < sizeof(keys); scancode++) {
				if (keys[scancode] == lower) break;
			}
			if (scancode == sizeof(keys)) return;
			break;
	}

	sr = Cpu_DisableInterrupts();
	/* the engine takes capitals from the right Shift */
	if (shift) Input_EventHandler(SCANCODE_RSHIFT);
	PadSaturn_KeyTap(scancode);
	if (shift) Input_EventHandler(SCANCODE_RSHIFT | SCANCODE_RELEASED);
	Cpu_RestoreInterrupts(sr);
}

/**
 * Draw the on-screen keyboard on the screen, below the line edited if there
 * is room or else above it, keeping what was there; or put that back.
 *
 * @param show Whether to draw it (else to take it away).
 */
static void PadSaturn_OskShow(bool show)
{
	uint8 *screen = GFX_Screen_Get_ByIndex(SCREEN_0);
	Screen oldScreenID;
	Font *oldFont;
	int row, column;

	if (show == s_oskOpen) return;
	GUI_Mouse_Hide_Safe();

	if (!show) {
		if (s_oskBackup != NULL) {
			memcpy(screen + s_oskTop * SCREEN_WIDTH, s_oskBackup, SCREEN_WIDTH * OSK_HEIGHT);
			GFX_Screen_SetDirty(SCREEN_0, 0, s_oskTop, SCREEN_WIDTH, s_oskTop + OSK_HEIGHT);
		}
		free(s_oskBackup);
		s_oskBackup = NULL;
		s_oskOpen = false;
		GUI_Mouse_Show_Safe();
		return;
	}

	s_oskTop = SCREEN_HEIGHT - OSK_HEIGHT - OSK_MARGIN;
	if (s_oskEditBottom >= s_oskTop - 1) s_oskTop = OSK_MARGIN;
	/* without the memory to keep it, the screen is left as the keyboard leaves it */
	s_oskBackup = malloc(SCREEN_WIDTH * OSK_HEIGHT);
	if (s_oskBackup != NULL) memcpy(s_oskBackup, screen + s_oskTop * SCREEN_WIDTH, SCREEN_WIDTH * OSK_HEIGHT);

	oldScreenID = GFX_Screen_SetActive(SCREEN_0);
	oldFont = g_fontCurrent;
	Font_Select(g_fontNew8p);

	GUI_DrawBorder(OSK_LEFT, s_oskTop, OSK_WIDTH, OSK_HEIGHT, 3, true);
	GUI_DrawBorder(OSK_LEFT + 4, s_oskTop + 3, OSK_WIDTH - 8, OSK_HEIGHT - 6, 4, false);

	for (row = 0; row < OSK_ROWS; row++) {
		for (column = 0; column < OSK_COLUMNS; column++) {
			char text[2];
			const char *label = text;
			int first, last;
			Rect r;

			text[0] = PadSaturn_OskKey(row, column, &first, &last);
			text[1] = '\0';
			if (column != first) continue;
			switch (text[0]) {
				case ' ': label = "Space"; break;
				case '\b': label = "Delete"; break;
				case 0x1B: label = "Cancel"; break;
				case '\r': label = "OK"; break;
				default: break;
			}
			PadSaturn_OskKeyRect(row, column, &r);
			GUI_DrawText(label, r.x + (r.w - Font_GetStringWidth(label)) / 2, r.y + (r.h - g_fontCurrent->height) / 2 + 1, 15, 0);
		}
	}

	Font_Select(oldFont);
	GFX_Screen_SetActive(oldScreenID);
	GFX_Screen_SetDirty(SCREEN_0, 0, s_oskTop, SCREEN_WIDTH, s_oskTop + OSK_HEIGHT);
	s_oskOpen = true;
	GUI_Mouse_Show_Safe();
}

/**
 * Let go of A for what comes after the on-screen keyboard: the press that
 * typed its last key mustn't click there when released.
 */
static void PadSaturn_OskBlockA(void)
{
	uint32 sr = Cpu_DisableInterrupts();

	if (s_previous & PAD_A) {
		s_previous &= ~PAD_A;
		s_blockA = true;
	}
	Cpu_RestoreInterrupts(sr);
}

/**
 * An editbox waits for text, or no longer: without a keyboard connected an
 * on-screen keyboard types it, from PadSaturn_HandleEvents().
 *
 * @param editing Whether the editbox waits for text.
 * @param cancel Whether it can be cancelled (Esc).
 */
void PadSaturn_EditBox(bool editing, bool cancel)
{
	s_oskWanted = editing;
	s_oskCancel = cancel;
	s_oskEditBottom = g_curWidgetYBase + g_curWidgetHeight - 1;
	if (editing) return;

	PadSaturn_OskShow(false);
	PadSaturn_OskBlockA();
}

/**
 * The on-screen keyboard: shown while an editbox waits for text and the
 * controller is a pad (none with a keyboard connected); moves its selection,
 * types and puts the reticle on the key selected.
 *
 * @return True while it is on show (it has the pad then).
 */
static bool PadSaturn_OnScreenKeyboard(void)
{
	bool show = s_oskWanted && (s_controller == CONTROLLER_PAD || s_controller == CONTROLLER_3D);
	bool pressA, pressB, pressStart;
	uint16 direction;
	uint32 sr;
	Rect r;

	if (show != s_oskOpen) {
		if (show) {
			/* nothing pressed before counts; L may have been holding Shift */
			PadSaturn_ReleaseA();
			sr = Cpu_DisableInterrupts();
			s_navigate = NO_DIRECTION;
			s_pressA = s_pressB = s_pressStart = false;
			Input_EventHandler(SCANCODE_LSHIFT | SCANCODE_RELEASED);
			Cpu_RestoreInterrupts(sr);
			s_oskRow = s_oskColumn = 0;
		} else {
			PadSaturn_OskBlockA();
		}
		PadSaturn_OskShow(show);
	}
	if (!show) return false;

	sr = Cpu_DisableInterrupts();
	direction = s_navigate;
	s_navigate = NO_DIRECTION;
	pressA = s_pressA;
	pressB = s_pressB;
	pressStart = s_pressStart;
	s_pressA = s_pressB = s_pressStart = false;
	Cpu_RestoreInterrupts(sr);

	if (direction != NO_DIRECTION && PadSaturn_OskMove(direction)) PadSaturn_Blip();
	if (pressA) {
		int first, last;

		PadSaturn_UseSound();
		PadSaturn_OskType(PadSaturn_OskKey(s_oskRow, s_oskColumn, &first, &last));
	}
	if (pressB) PadSaturn_OskType('\b');
	if (pressStart) PadSaturn_OskType('\r');

	s_focusActive = false;
	s_cameraActive = false;
	s_useSound = false;
	s_reticleSnap = false;
	PadSaturn_OskKeyRect(s_oskRow, s_oskColumn, &r);
	PadSaturn_SetReticle(r.x + 2, r.y + 1, r.w - 4, r.h - 2);
	return true;
}

/**
 * Pause, with a message, until a controller is connected.
 */
static void PadSaturn_WaitForController(void)
{
	static bool waiting = false;
	bool gameTimer;

	if (waiting || !s_controllerMessage) return;
	waiting = true;
	gameTimer = Timer_SetTimer(TIMER_GAME, false);
	g_modalMessageUntil = &PadSaturn_Connected;
	GUI_DisplayModalMessage("No controller is connected.\rPlease connect one to controller port 1 or 2.", 0xFFFF);
	g_modalMessageUntil = NULL;
	Timer_SetTimer(TIMER_GAME, gameTimer);
	/* no press from what was held when connecting */
	s_previous = 0xFFFF;
	waiting = false;
}

/**
 * The construction window's list keeps its own selection: with the focus on
 * the list, up and down move that selection (scrolling the list at its ends,
 * as its arrow buttons do) and the focus follows it; past the first and the
 * last item they move the focus as anywhere else. The 3D Controller's stick
 * moves the selection too.
 *
 * @param list The widgets of the screen.
 * @param direction The D-pad direction, set to NO_DIRECTION once used.
 */
static void PadSaturn_FactoryList(Widget *list, uint16 *direction)
{
	Widget *w, *up = NULL, *down = NULL;
	bool hasList = false, quiet = false;
	uint32 sr;
	int stick, x, y;

	for (w = list; w != NULL; w = GUI_Widget_GetNext(w)) {
		if (w->clickProc == &GUI_Production_List_Click) hasList = true;
		if (w->clickProc == &GUI_Production_Up_Click) up = w;
		if (w->clickProc == &GUI_Production_Down_Click) down = w;
	}
	if (!hasList || up == NULL || down == NULL) return;

	/* the stick: a line each time enough travel has been summed up */
	sr = Cpu_DisableInterrupts();
	stick = s_stickY;
	if (stick >= STICK_STEP) {
		s_stickY -= STICK_STEP;
	} else if (stick <= -STICK_STEP) {
		s_stickY += STICK_STEP;
	}
	s_stickX = 0;
	Cpu_RestoreInterrupts(sr);
	s_stickLast = false;

	if (s_focus == NULL || s_focus->clickProc != &GUI_Production_List_Click) return;

	if (*direction == NO_DIRECTION && stick >= STICK_STEP) {
		*direction = 4;
		quiet = true;
	} else if (*direction == NO_DIRECTION && stick <= -STICK_STEP) {
		*direction = 0;
		quiet = true;
	}

	if (*direction == 0 && g_factoryWindowBase + g_factoryWindowSelected > 0) {
		GUI_Production_Up_Click(up);
	} else if (*direction == 4 && g_factoryWindowBase + g_factoryWindowSelected + 1 < g_factoryWindowTotal) {
		GUI_Production_Down_Click(down);
	} else {
		/* the stick doesn't leave the list */
		if (quiet) *direction = NO_DIRECTION;
		return;
	}
	*direction = NO_DIRECTION;
	if (!quiet) PadSaturn_Blip();

	w = GUI_Widget_Get_ByIndex(list, 46 + g_factoryWindowSelected);
	if (w == NULL) return;
	s_focus = w;
	PadSaturn_WidgetPosition(w, &x, &y);
	PadSaturn_SetPosition((uint16)(x + w->width / 2), (uint16)(y + w->height / 2));
}

/**
 * Move the focus or the camera; GUI_Widget_HandleEvents() calls it with the
 * widgets of the screen on show.
 *
 * @param list The widgets of the screen, or NULL.
 */
void PadSaturn_HandleEvents(Widget *list)
{
	static Widget *lastList = NULL;
	static uint32 lastLayout = 0;
	bool mission, targeting, camera, fresh;
	uint32 layout;
	uint16 direction;
	uint32 sr;

	s_handledFrame = SaturnTimer_Frames();
	s_keyA = 0;
	/* (gone before the message, which goes where the keyboard was) */
	if (PadSaturn_OnScreenKeyboard()) return;
	if (s_controller == CONTROLLER_NONE) PadSaturn_WaitForController();
	if (s_controller == CONTROLLER_KEYBOARD_MOUSE || s_controller == CONTROLLER_NONE) {
		s_focusActive = false;
		s_cameraActive = false;
		return;
	}

	targeting = g_selectionType == SELECTIONTYPE_TARGET || g_selectionType == SELECTIONTYPE_PLACE;
	mission = list != NULL && list == g_widgetLinkedListHead &&
		(targeting || g_selectionType == SELECTIONTYPE_UNIT || g_selectionType == SELECTIONTYPE_STRUCTURE);

	/* a new screen: another list, or other buttons in the same one (windows
	 * reuse theirs); not the mission's, whose side bar changes as you go */
	layout = PadSaturn_Layout(list);
	fresh = list != lastList || (list != g_widgetLinkedListHead && layout != lastLayout);
	lastLayout = layout;

	sr = Cpu_DisableInterrupts();
	if (s_toggleCamera && mission && s_controller != CONTROLLER_3D) s_camera = !s_camera;
	s_toggleCamera = false;
	direction = s_navigate;
	s_navigate = NO_DIRECTION;
	Cpu_RestoreInterrupts(sr);

	/* the camera: targeting or placing, chosen with C, or the stick used last */
	camera = mission && (targeting || (s_controller == CONTROLLER_3D ? s_stickLast : s_camera));

	if (camera) {
		if (!s_cameraActive) {
			PadSaturn_ReleaseA();
			s_cameraTileX = s_cameraTileY = 0;
		}
		s_cameraActive = true;
		s_focusActive = false;
		s_keyA = 0;
		s_useSound = false;
		PadSaturn_Camera();
		lastList = list;
		return;
	}

	if (s_cameraActive) {
		/* back from the camera: the button focused before, if it is still
		 * shown, or else one in the side bar, or else Options */
		PadSaturn_ReleaseA();
		s_cameraActive = false;
		s_reticleSnap = false;
		s_edgeX = s_edgeY = 0;
		if (!PadSaturn_InList(list, s_focus)) s_focus = PadSaturn_SideBarFocus(list);
		if (s_focus != NULL) {
			int x, y;

			PadSaturn_WidgetPosition(s_focus, &x, &y);
			PadSaturn_SetPosition((uint16)(x + s_focus->width / 2), (uint16)(y + s_focus->height / 2));
		}
	}
	PadSaturn_StickScroll(list);

	/* a new screen, or the focused widget gone: the nearest one */
	if (fresh || !PadSaturn_InList(list, s_focus)) {
		if (fresh) {
			PadSaturn_NewScreen();
		} else {
			PadSaturn_ReleaseA();
		}
		s_focus = PadSaturn_MoveFocus(list, NO_DIRECTION);
		lastList = list;
	}
	if (PadSaturn_MentatList(list, fresh, &direction)) {
		s_keyA = KEY_RETURN;
		s_useSound = true;
		s_focusActive = true;
		PadSaturn_ReticleOnFocus();
		return;
	}
	PadSaturn_FactoryList(list, &direction);
	if (direction != NO_DIRECTION && s_focus != NULL) {
		Widget *next = PadSaturn_MoveFocus(list, direction);

		/* into the construction list: at its selected item */
		if (next != NULL && next != s_focus && next->clickProc == &GUI_Production_List_Click) {
			Widget *selected = GUI_Widget_Get_ByIndex(list, 46 + g_factoryWindowSelected);

			if (selected != NULL && selected != next && PadSaturn_Focusable(selected)) {
				int x, y;

				next = selected;
				PadSaturn_WidgetPosition(next, &x, &y);
				PadSaturn_SetPosition((uint16)(x + next->width / 2), (uint16)(y + next->height / 2));
			}
		}
		if (next != s_focus) PadSaturn_Blip();
		s_focus = next;
	}
	s_keyA = (s_focus != NULL && s_focus->clickProc == &GUI_Mentat_List_Click) ? KEY_RETURN : 0;
	/* the Mentat still speaking: A carries on (a key), not Exit (a click) */
	if (g_mentatTextPending) s_keyA = KEY_RETURN;
	/* the use sound, but not for scrolling */
	s_useSound = s_focus != NULL && s_focus->clickProc != &GUI_Widget_Scrollbar_ArrowUp_Click &&
		s_focus->clickProc != &GUI_Widget_Scrollbar_ArrowDown_Click;
	s_focusActive = s_focus != NULL;
	PadSaturn_ReticleOnFocus();
}

/**
 * The same for the text menus of GameLoop_HandleEvents() (main menu): the
 * focus moves between the lines, from left, top to right, of lineHeight.
 *
 * @param left The left edge of the lines.
 * @param top The top of the first line.
 * @param right The right edge of the lines.
 * @param lineHeight The height of a line.
 * @param lines How many lines.
 * @param current The menu's own choice.
 */
void PadSaturn_HandleMenu(uint16 left, uint16 top, uint16 right, uint16 lineHeight, uint16 lines, uint16 current)
{
	static uint16 lastTop = 0xFFFF;
	uint16 direction;
	int line;
	uint32 sr;

	if (s_controller == CONTROLLER_NONE) PadSaturn_WaitForController();
	s_handledFrame = SaturnTimer_Frames();
	s_keyA = 0;
	s_useSound = true;
	if (s_controller == CONTROLLER_KEYBOARD_MOUSE || s_controller == CONTROLLER_NONE || lines == 0) {
		s_focusActive = false;
		return;
	}

	sr = Cpu_DisableInterrupts();
	direction = s_navigate;
	s_navigate = NO_DIRECTION;
	s_toggleCamera = false;
	Cpu_RestoreInterrupts(sr);
	s_focusActive = true;
	s_cameraActive = false;
	/* the focused line changes colour */
	PadSaturn_SetReticle(0, 0, 0, 0);

	/* the line the cursor is on, or the menu's own choice when it's elsewhere */
	if (top != lastTop || s_x < left || s_x > right || s_y < top || s_y >= top + lines * lineHeight) {
		if (top != lastTop) PadSaturn_NewScreen();
		line = current;
		lastTop = top;
	} else {
		line = (s_y - top) / lineHeight;
	}
	if (direction == 0) line = (line == 0) ? lines - 1 : line - 1;
	if (direction == 4) line = (line == lines - 1) ? 0 : line + 1;
	if (direction == 0 || direction == 4) PadSaturn_Blip();

	if (s_x != (left + right) / 2 || s_y != top + line * lineHeight + lineHeight / 2) {
		PadSaturn_SetPosition((left + right) / 2, (uint16)(top + line * lineHeight + lineHeight / 2));
	}
}

/**
 * The campaign map: move the focus between the regions to choose, at x, y
 * (16 x 16 each, usable or not); returns the one picked with A, or -1.
 *
 * @param x The regions' left edges.
 * @param y Their top edges.
 * @param usable Whether each can be chosen.
 * @param count How many there are.
 * @return The region picked, or -1.
 */
int PadSaturn_PickRegion(const int16 *x, const int16 *y, const bool *usable, int count)
{
	static const int dirX[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
	static const int dirY[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
	static int focus = -1;
	uint16 direction;
	bool pressA;
	uint32 sr;
	int i;

	if (s_controller == CONTROLLER_NONE) PadSaturn_WaitForController();
	if (SaturnTimer_Frames() - s_handledFrame > FOCUS_STALE) {
		/* a new map */
		focus = -1;
		PadSaturn_NewScreen();
	}
	s_handledFrame = SaturnTimer_Frames();
	s_keyA = 0;
	s_useSound = true;
	if (s_controller == CONTROLLER_KEYBOARD_MOUSE || s_controller == CONTROLLER_NONE) return -1;

	sr = Cpu_DisableInterrupts();
	direction = s_navigate;
	s_navigate = NO_DIRECTION;
	pressA = s_pressA;
	s_pressA = false;
	s_toggleCamera = false;
	Cpu_RestoreInterrupts(sr);
	s_focusActive = true;
	s_cameraActive = false;

	if (focus < 0 || focus >= count || !usable[focus]) {
		for (focus = 0; focus < count && !usable[focus]; focus++) {}
		if (focus == count) {
			focus = -1;
			return -1;
		}
		/* the press that opened the map */
		pressA = false;
	}

	if (direction != NO_DIRECTION) {
		/* the nearest region ahead, better lined up counting more */
		int best = -1;
		long bestScore = 0;

		for (i = 0; i < count; i++) {
			long dx = x[i] - x[focus], dy = y[i] - y[focus], along, across, score;
			if (i == focus || !usable[i]) continue;
			along = dx * dirX[direction] + dy * dirY[direction];
			across = labs(dx * dirY[direction] - dy * dirX[direction]);
			if (along <= 0) continue;
			score = along + 3 * across;
			if (best < 0 || score < bestScore) {
				best = i;
				bestScore = score;
			}
		}
		if (best >= 0) {
			focus = best;
			PadSaturn_Blip();
		}
	}

	PadSaturn_SetReticle(x[focus], y[focus], 16, 16);
	return pressA ? focus : -1;
}

/**
 * The next of the player's objects after index (wrapping round), or NULL.
 *
 * @param structures True for structures, false for units.
 * @param index The pool index to go on from, or 0xFFFF for the first.
 * @return The object, or NULL.
 */
static Object *PadSaturn_NextObject(bool structures, uint16 index)
{
	PoolFindStruct find;
	Object *first = NULL;

	find.houseID = g_playerHouseID;
	find.type = 0xFFFF;
	find.index = 0xFFFF;

	for (;;) {
		Object *o;

		if (structures) {
			Structure *st = Structure_Find(&find);
			if (st == NULL) break;
			if (st->o.type == STRUCTURE_SLAB_1x1 || st->o.type == STRUCTURE_SLAB_2x2 || st->o.type == STRUCTURE_WALL) continue;
			o = &st->o;
		} else {
			Unit *u = Unit_Find(&find);
			if (u == NULL) break;
			if (u->o.type == UNIT_CARRYALL || u->o.type == UNIT_SANDWORM || u->o.flags.s.isNotOnMap) continue;
			o = &u->o;
		}
		if (first == NULL) first = o;
		if (index == 0xFFFF || o->index > index) return o;
	}
	return first;
}

/**
 * Carry out what the pad asked for that has to run in the game loop
 * (cycling through units and structures).
 */
void PadSaturn_GameLoop(void)
{
	bool structures = (s_cycle == CYCLE_STRUCTURE);
	uint16 index = 0xFFFF;
	Object *o;
	uint16 packed;

	if (s_cycle == CYCLE_NONE) return;
	s_cycle = CYCLE_NONE;
	if (g_selectionType != SELECTIONTYPE_UNIT && g_selectionType != SELECTIONTYPE_STRUCTURE) return;

	/* continue from the selected object of that kind */
	if (!structures && g_unitSelected != NULL) index = g_unitSelected->o.index;
	if (structures && g_unitSelected == NULL) {
		Structure *st = Structure_Get_ByPackedTile(g_selectionPosition);
		if (st != NULL && st->o.houseID == g_playerHouseID) index = st->o.index;
	}

	o = PadSaturn_NextObject(structures, index);
	if (o == NULL) {
		PadSaturn_InvalidSound();
		return;
	}

	/* as clicking the picture of the selection does: centre, then select */
	packed = Tile_PackTile(o->position);
	if (structures) Unit_Select(NULL);
	Map_SetViewportPosition(packed);
	Map_SetSelection(packed);
}
