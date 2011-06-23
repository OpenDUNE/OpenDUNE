/* $Id$ */

/** @file src/gui/widget.c %Widget routines. */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../os/math.h"

#include "widget.h"

#include "mentat.h"
#include "gui.h"
#include "../input/input.h"
#include "../gfx.h"
#include "../house.h"
#include "../string.h"
#include "../sprites.h"
#include "../tools.h"


uint8 *g_palette1 = NULL;
uint8 *g_palette2 = NULL;
uint8 *g_paletteMapping1 = NULL;
uint8 *g_paletteMapping2 = NULL;

Widget *g_widgetLinkedListHead = NULL;
Widget *g_widgetLinkedListTail = NULL;
Widget *g_widgetInvoiceTail = NULL;
Widget *g_widgetMentatFirst = NULL;
Widget *g_widgetMentatTail = NULL;
Widget *g_widgetMentatUnknown1 = NULL;
Widget *g_widgetMentatUnknown2 = NULL;
Widget *g_widgetMentatScrollbar = NULL;

Widget *GUI_Widget_GetNext(Widget *w)
{
	if (w->next == NULL) return NULL;
	return w->next;
}

/**
 * Find an existing Widget by the index number. It matches the first hit, and
 *  returns that widget to you.
 * @param w The first widget to start searching from.
 * @param index The index of the widget you are looking for.
 * @return The widget, or NULL if not found.
 */
Widget *GUI_Widget_Get_ByIndex(Widget *w, uint16 index)
{
	if (index == 0) return w;

	while (w != NULL) {
		if (w->index == index) return w;
		w = GUI_Widget_GetNext(w);
	}

	return NULL;
}

/**
 * Draw a chess-pattern filled rectangle over the widget.
 *
 * @param w The widget to draw.
 * @param colour The colour of the chess pattern.
 */
static void GUI_Widget_DrawBlocked(Widget *w, uint8 colour)
{
	if (g_global->screenActiveID == 0) {
		GUI_Mouse_Hide_InRegion(w->offsetX, w->offsetY, w->offsetX + w->width, w->offsetY + w->height);
	}

	GUI_DrawSprite(g_global->screenActiveID, w->drawParameterNormal.sprite, w->offsetX, w->offsetY, w->parentID, 0);

	GUI_DrawBlockedRectangle(w->offsetX, w->offsetY, w->width, w->height, colour);

	if (g_global->screenActiveID == 0) {
		GUI_Mouse_Show_InRegion();
	}
}

/**
 * Make the widget invisible.
 * @param w The widget to make invisible.
 */
void GUI_Widget_MakeInvisible(Widget *w)
{
	if (w == NULL || w->flags.s.invisible) return;
	w->flags.s.invisible = true;

	GUI_Widget_Draw(w);
}

/**
 * Make the widget visible.
 * @param w The widget to make visible.
 */
void GUI_Widget_MakeVisible(Widget *w)
{
	if (w == NULL || !w->flags.s.invisible) return;
	w->flags.s.invisible = false;

	GUI_Widget_Draw(w);
}

/**
 * Draw a widget to the display.
 *
 * @param w The widget to draw.
 */
void GUI_Widget_Draw(Widget *w)
{
	uint16 positionLeft, positionRight;
	uint16 positionTop, positionBottom;
	uint16 offsetX, offsetY;
	uint16 drawMode;
	uint8 fgColour, bgColour;
	WidgetDrawParameter drawParam;

	if (w == NULL) return;

	if (w->flags.s.invisible) {
		if (!w->flags.s.variable_0010) return;

		GUI_Widget_DrawBlocked(w, (uint8)g_global->variable_6D53);
		return;
	}

	if (!w->state.s.hover2) {
		if (!w->state.s.selected) {
			drawMode  = w->drawModeNormal;
			drawParam = w->drawParameterNormal;
			fgColour  = w->fgColourNormal;
			bgColour  = w->bgColourNormal;
		} else {
			drawMode  = w->drawModeSelected;
			drawParam = w->drawParameterSelected;
			fgColour  = w->fgColourSelected;
			bgColour  = w->bgColourSelected;

		}
	} else {
		drawMode  = w->drawModeDown;
		drawParam = w->drawParameterDown;
		fgColour  = w->fgColourDown;
		bgColour  = w->bgColourDown;
	}

	offsetX = w->offsetX;
	if (w->offsetX < 0) {
		offsetX = (g_global->variable_4062[w->parentID][2] << 3) + w->offsetX;
	}
	positionLeft = (g_global->variable_4062[w->parentID][0] << 3) + offsetX;
	positionRight = positionLeft + w->width - 1;

	offsetY = w->offsetY;
	if (w->offsetY < 0) {
		offsetY = g_global->variable_4062[w->parentID][3] + w->offsetY;
	}
	positionTop = g_global->variable_4062[w->parentID][1] + offsetY;
	positionBottom = positionTop + w->height - 1;

	assert(drawMode < DRAW_MODE_MAX);
	if (drawMode != DRAW_MODE_NONE && drawMode != DRAW_MODE_CUSTOM_PROC && g_global->screenActiveID == 0) {
		GUI_Mouse_Hide_InRegion(positionLeft, positionTop, positionRight, positionBottom);
	}

	switch (drawMode) {
		case DRAW_MODE_NONE: break;

		case DRAW_MODE_SPRITE: {
			GUI_DrawSprite(g_global->screenActiveID, drawParam.sprite, offsetX, offsetY, w->parentID, 0x4000);
		} break;

		case DRAW_MODE_TEXT: {
			GUI_DrawText(drawParam.text, positionLeft, positionTop, fgColour, bgColour);
		} break;

		case DRAW_MODE_UNKNOWN3: {
			GFX_DrawSprite(drawParam.unknown, positionLeft >> 3, positionTop, HOUSE_HARKONNEN);
		} break;

		case DRAW_MODE_CUSTOM_PROC: {
			if (drawParam.proc == NULL) return;
			drawParam.proc(w);
		} break;

		case DRAW_MODE_WIRED_RECTANGLE: {
			GUI_DrawWiredRectangle(positionLeft, positionTop, positionRight, positionBottom, fgColour);
		} break;

		case DRAW_MODE_XORFILLED_RECTANGLE: {
			GUI_DrawXorFilledRectangle(positionLeft, positionTop, positionRight, positionBottom, fgColour);
		} break;
	}

	if (drawMode != DRAW_MODE_NONE && drawMode != DRAW_MODE_CUSTOM_PROC && g_global->screenActiveID == 0) {
		GUI_Mouse_Show_InRegion();
	}
}

/**
 * Check a widget for events like 'hover' or 'click'. Also check the keyboard
 *  buffer if there was any key which should active us.
 *
 * @param w The widget to handle events for. If the widget has a valid next
 *   pointer, those widgets are handled too.
  * @return The last key pressed, or 0 if the key pressed was handled (or if
 *   there was no key press).
 */
uint16 GUI_Widget_HandleEvents(Widget *w)
{
	static Widget *l_widget_selected     = NULL;
	static Widget *l_widget_last         = NULL;
	static uint16  l_widget_button_state = 0x0;

	uint16 mouseX, mouseY;
	uint16 buttonState;
	uint16 returnValue;
	uint16 key;
	bool fakeClick;

	/* Get the key from the buffer, if there was any key pressed */
	key = 0;
	if (Input_IsInputAvailable() != 0) {
		key = Input_Wait();
	}

	if (w == NULL) return key & 0x7FFF;

	/* First time this window is being drawn? */
	if (w != l_widget_last || g_global->widgetReset != 0) {
		l_widget_last         = w;
		l_widget_selected     = NULL;
		l_widget_button_state = 0x0;
		g_global->widgetReset = 0;

		/* Check for left click */
		if (Input_Test(0x41) != 0) l_widget_button_state |= 0x0200;

		/* Check for right click */
		if (Input_Test(0x42) != 0) l_widget_button_state |= 0x2000;

		/* Draw all the widgets */
		for (; w != NULL; w = GUI_Widget_GetNext(w)) {
			GUI_Widget_Draw(w);
		}
	}

	mouseX = g_global->mouseX;
	mouseY = g_global->mouseY;

	buttonState = 0;
	if (g_global->variable_7097 == 0) {
		uint16 buttonStateChange = 0;

		/* See if the key was a mouse button action */
		if ((key & 0x8000) != 0) {
			if ((key & 0x00FF) == 0xC7) buttonStateChange = 0x1000;
			if ((key & 0x00FF) == 0xC6) buttonStateChange = 0x0100;
		} else {
			if ((key & 0x00FF) == 0x42) buttonStateChange = 0x1000;
			if ((key & 0x00FF) == 0x41) buttonStateChange = 0x0100;
		}

		/* Mouse button up */
		if ((key & 0x0800) != 0) {
			buttonStateChange <<= 2;
		}

		if (buttonStateChange != 0) {
			mouseX = g_global->mouseClickX;
			mouseY = g_global->mouseClickY;
		}

		/* Disable when release, enable when click */
		l_widget_button_state &= ~((buttonStateChange & 0x4400) >> 1);
		l_widget_button_state |=   (buttonStateChange & 0x1100) << 1;

		buttonState |= buttonStateChange;
		buttonState |= l_widget_button_state;
		buttonState |= (l_widget_button_state << 2) ^ 0x8800;
	}

	w = l_widget_last;
	if (l_widget_selected != NULL) {
		w = l_widget_selected;

		if (w->flags.s.invisible) {
			l_widget_selected = NULL;
		}
	}

	returnValue = 0;
	for (; w != NULL; w = GUI_Widget_GetNext(w)) {
		uint16 positionX, positionY;
		bool triggerWidgetHover;
		bool widgetHover;
		bool widgetClick;

		if (w->flags.s.invisible) continue;

		/* Store the previous button state */
		w->state.s.selectedLast = w->state.s.selected;
		w->state.s.hover1Last = w->state.s.hover1;

		positionX = w->offsetX;
		if (w->offsetX < 0) positionX += (g_global->variable_4062[w->parentID][2] << 3);
		positionX += g_global->variable_4062[w->parentID][0] << 3;

		positionY = w->offsetY;
		if (w->offsetY < 0) positionY += g_global->variable_4062[w->parentID][3];
		positionY += g_global->variable_4062[w->parentID][1];

		widgetHover = false;
		w->state.s.keySelected = false;

		/* Check if the mouse is inside the widget */
		if (positionX <= mouseX && mouseX <= positionX + w->width && positionY <= mouseY && mouseY <= positionY + w->height) {
			widgetHover = true;
		}

		/* Check if there was a keypress for the widget */
		if ((key & 0x7F) != 0 && ((key & 0x7F) == w->shortcut || (key & 0x7F) == w->shortcut2)) {
			widgetHover = true;
			w->state.s.keySelected = true;
			key = 0;

			buttonState = 0;
			if ((key & 0x7F) == w->shortcut2) buttonState = (w->flags.s.buttonFilterRight) << 12;
			if (buttonState == 0) buttonState = (w->flags.s.buttonFilterLeft) << 8;

			l_widget_selected = w;
		}

		/* Update the hover state */
		w->state.s.hover1 = false;
		w->state.s.hover2 = false;
		if (widgetHover) {
			/* Button pressed, and click is hover */
			if ((buttonState & 0x3300) != 0 && w->flags.s.clickAsHover && (w == l_widget_selected || l_widget_selected == NULL)) {
				w->state.s.hover1 = true;
				w->state.s.hover2 = true;

				/* If we don't have a selected widget yet, this will be the one */
				if (l_widget_selected == NULL) {
					l_widget_selected = w;
				}
			}
			/* No button pressed, and click not is hover */
			if ((buttonState & 0x8800) != 0 && !w->flags.s.clickAsHover) {
				w->state.s.hover1 = true;
				w->state.s.hover2 = true;
			}
		}

		/* Check if we should trigger the hover activation */
		triggerWidgetHover = widgetHover;
		if (l_widget_selected != NULL && l_widget_selected->flags.s.loseSelect) {
			triggerWidgetHover = (l_widget_selected == w) ? true : false;
		}

		widgetClick = false;
		if (triggerWidgetHover) {
			/* We click this widget for the first time */
			if ((buttonState & 0x1100) != 0 && l_widget_selected == NULL) {
				l_widget_selected = w;
				key = 0;
			}

			/* Check if we want to consider this as click */
			if ((buttonState & w->flags.all) != 0 && (widgetHover || !w->flags.s.requiresClick)) {
				uint16 buttonStateFilter;
				buttonStateFilter = buttonState & w->flags.all;

				if ((buttonStateFilter & 0x1100) != 0) {
					/* Widget click */
					w->state.s.selected = !w->state.s.selected;
					returnValue = w->index | 0x8000;
					widgetClick = true;

					if (w->flags.s.clickAsHover) {
						w->state.s.hover1 = true;
						w->state.s.hover2 = true;
					}
					l_widget_selected = w;
				} else if ((buttonStateFilter & 0x2200) != 0) {
					/* Widget was already clicked */
					if (!w->flags.s.clickAsHover) {
						w->state.s.hover1 = true;
						w->state.s.hover2 = true;
					}
					if (!w->flags.s.requiresClick) widgetClick = true;
				} else if ((buttonStateFilter & 0x4400) != 0) {
					/* Widget release */
					if (!w->flags.s.requiresClick || (w->flags.s.requiresClick && w == l_widget_selected)) {
						w->state.s.selected = !w->state.s.selected;
						returnValue = w->index | 0x8000;
						widgetClick = true;
					}

					if (!w->flags.s.clickAsHover) {
						w->state.s.hover1 = false;
						w->state.s.hover2 = false;
					}
				} else {
					/* Widget was already released */
					if (w->flags.s.clickAsHover) {
						w->state.s.hover1 = true;
						w->state.s.hover2 = true;
					}
					if (!w->flags.s.requiresClick) widgetClick = true;
				}
			}
		}

		fakeClick = false;
		/* Check if we are hovering and have mouse button down */
		if (widgetHover && (buttonState & 0x2200) != 0) {
			w->state.s.hover1 = true;
			w->state.s.hover2 = true;

			if (!w->flags.s.clickAsHover && !w->state.s.selected) {
				fakeClick = true;
				w->state.s.selected = true;
			}
		}

		/* Check if we are not pressing a button */
		if ((buttonState & 0x8800) == 0x8800) {
			l_widget_selected = NULL;

			if (!widgetHover || w->flags.s.clickAsHover) {
				w->state.s.hover1 = false;
				w->state.s.hover2 = false;
			}
		}

		if (!widgetHover && l_widget_selected == w && !w->flags.s.loseSelect) {
			l_widget_selected = NULL;
		}

		/* When the state changed, redraw */
		if (w->state.s.selected != w->state.s.selectedLast || w->state.s.hover1 != w->state.s.hover1Last) {
			GUI_Widget_Draw(w);
		}

		/* Reset click state when we were faking it */
		if (fakeClick) {
			w->state.s.selected = false;
		}

		if (widgetClick) {
			w->state.s.buttonState = buttonState >> 8;

			if (w->clickProc.csip != 0x0) {
				bool success = false;

				switch (w->clickProc.csip) {
					case 0x0AEC0005: success = GUI_Widget_Name_Click(); break;
					case 0x0AEC004F: success = GUI_Widget_Viewport_Click(w); break;
					case 0x0AEC0FD8: success = GUI_Widget_Cancel_Click(); break;
					case 0x0AEC1093: success = GUI_Widget_SpriteTextButton_Click(w); break;
					case 0x0AEC1181: success = GUI_Widget_Picture_Click(); break;
					case 0x0AEC11F6: success = GUI_Widget_RepairUpgrade_Click(w); break;
					case 0x1A341CB1: success = GUI_Widget_TextButton_Click(w); break;
					case 0x34950025: success = GUI_Production_Down_Click(w); break;
					case 0x3495002A: success = GUI_Production_Up_Click(w); break;
					case 0x3495002F: success = GUI_Production_BuildThis_Click(w); break;
					case 0x34950034: success = GUI_Production_ResumeGame_Click(w); break;
					case 0x34950039: success = GUI_Production_Upgrade_Click(w); break;
					case 0x3495003E: success = GUI_Production_List_Click(w); break;
					case 0x34950043: success = GUI_Purchase_Plus_Click(w); break;
					case 0x34950048: success = GUI_Purchase_Minus_Click(w); break;
					case 0x3495004D: success = GUI_Purchase_Invoice_Click(w); break;
					case 0x34E0002A: success = GUI_Mentat_List_Click(w); break;
					case 0x34E9002F: success = GUI_Widget_Mentat_Click(); break;
					case 0x34F20025: success = GUI_Widget_Options_Click(w); break;
					case 0x35180034: success = GUI_Widget_HOF_ClearList_Click(w); break;
					case 0x35180039: success = GUI_Widget_HOF_Resume_Click(); break;
					case 0x35200039: success = GUI_Widget_Scrollbar_ArrowUp_Click(w); break;
					case 0x3520003E: success = GUI_Widget_Scrollbar_ArrowDown_Click(w); break;
					case 0x35200043: success = GUI_Widget_Scrollbar_Click(w); break;

					default: assert(0); break;
				}

				/* If Click was successful, don't handle any other widgets */
				if (success) break;
			}

			/* On click, don't handle any other widgets */
			if (w->flags.s.noClickCascade) break;
		}

		/* If we are selected and we lose selection on leave, don't try other widgets */
		if (w == l_widget_selected && w->flags.s.loseSelect) break;
	}

	if (returnValue != 0) return returnValue;
	return key & 0x7FFF;
}

/**
 * Get shortcut key for the given char.
 *
 * @param c The char to get the shortcut for.
 * @return The shortcut key.
 */
uint8 GUI_Widget_GetShortcut(uint8 c)
{
	static uint8 shortcuts[206] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x10, 0x00, 0x00, 0x00, 0x2b,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0x00, 0x00,
		0x00, 0x00, 0x3d, 0x02, 0x29, 0x04, 0x05, 0x06, 0x08, 0x29, 0x0a, 0x0b, 0x64, 0x6a, 0x35, 0x0c,
		0x36, 0x5f, 0x0b, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x28, 0x28, 0x35, 0x0d,
		0x36, 0x41, 0x03, 0x1f, 0x32, 0x30, 0x21, 0x13, 0x22, 0x23, 0x24, 0x18, 0x25, 0x26, 0x27, 0x34,
		0x33, 0x19, 0x1a, 0x11, 0x14, 0x20, 0x15, 0x17, 0x31, 0x12, 0x2f, 0x16, 0x2e, 0x1b, 0x1d, 0x1c,
		0x07, 0x0c, 0x01, 0x1f, 0x32, 0x30, 0x21, 0x13, 0x22, 0x23, 0x24, 0x18, 0x25, 0x26, 0x27, 0x34,
		0x33, 0x19, 0x1a, 0x11, 0x14, 0x20, 0x15, 0x17, 0x31, 0x12, 0x2f, 0x16, 0x2e, 0x1b, 0x1d, 0x1c,
		0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x79, 0x78, 0x77, 0x76, 0x75, 0x74, 0x73, 0x72, 0x71, 0x70, 0x79, 0x78, 0x77, 0x76, 0x75,
		0x74, 0x73, 0x72, 0x71, 0x70, 0x79, 0x78, 0x77, 0x76, 0x75, 0x74, 0x73, 0x72, 0x71, 0x70, 0x4c,
		0x4b, 0x56, 0x54, 0x51, 0x00, 0x59, 0x61, 0x4f, 0x00, 0x55, 0x53, 0x50, 0x00, 0x00, 0x79, 0x78,
		0x77, 0x76, 0x75, 0x74, 0x73, 0x72, 0x71, 0x70, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48
	};

	assert((c) < sizeof(shortcuts));

	return shortcuts[c];
}

/**
 * Allocates a widget.
 *
 * @param index The index for the allocated widget.
 * @param shortcut The shortcut for the allocated widget.
 * @param offsetX The x position for the allocated widget.
 * @param offsetY The y position for the allocated widget.
 * @param spriteID The sprite to draw on the allocated widget (0xFFFF for none).
 * @param stringID The string to print on the allocated widget.
 * @param variable_3A ??.
 * @return The allocated widget.
 */
Widget *GUI_Widget_Allocate(uint16 index, uint16 shortcut, uint16 offsetX, uint16 offsetY, uint16 spriteID, uint16 stringID, uint16 variable_3A)
{
	Widget *w;
	uint8  drawMode;
	WidgetDrawParameter drawParam1;
	WidgetDrawParameter drawParam2;

	w = (Widget *)emu_get_memorycsip(Tools_Malloc(sizeof(Widget), 0x10));

	w->index            = index;
	w->shortcut         = shortcut;
	w->shortcut2        = shortcut;
	w->parentID         = 0;
	w->fgColourSelected = 0xB;
	w->bgColourSelected = 0xC;
	w->fgColourNormal   = 0xF;
	w->bgColourNormal   = 0xC;
	w->stringID         = stringID;
	w->variable_3A      = variable_3A;
	w->state.all        = 0x0;
	w->offsetX          = offsetX;
	w->offsetY          = offsetY;

	w->flags.all = 0x0;
	w->flags.s.requiresClick = true;
	w->flags.s.clickAsHover = true;
	w->flags.s.loseSelect = true;
	w->flags.s.variable_0080 = true;
	w->flags.s.buttonFilterLeft = 4;
	w->flags.s.buttonFilterRight = 4;

	switch ((int16)spriteID + 4) {
		case 0:
			drawMode        = DRAW_MODE_CUSTOM_PROC;
			drawParam1.proc = &GUI_Widget_SpriteButton_Draw;
			drawParam2.proc = &GUI_Widget_SpriteButton_Draw;
			break;

		case 1:
			drawMode        = DRAW_MODE_CUSTOM_PROC;
			drawParam1.proc = &GUI_Widget_SpriteTextButton_Draw;
			drawParam2.proc = &GUI_Widget_SpriteTextButton_Draw;

			if (stringID == 0) break;

			if (String_Get_ByIndex(stringID) != NULL) w->shortcut = GUI_Widget_GetShortcut(*String_Get_ByIndex(stringID));
			if (stringID == 0x1E) w->shortcut2 = 0x6E ; /* "Cancel" */
		l__1009:
			break;

		case 2:
			drawMode        = DRAW_MODE_CUSTOM_PROC;
			drawParam1.proc = &GUI_Widget_TextButton2_Draw;
			drawParam2.proc = &GUI_Widget_TextButton2_Draw;
			break;

		case 3:
			drawMode           = DRAW_MODE_NONE;
			drawParam1.unknown = 0;
			drawParam2.unknown = 0;
			break;

		default:
			drawMode = DRAW_MODE_SPRITE;
			drawParam1.sprite = emu_get_memorycsip(g_sprites[spriteID]);
			drawParam2.sprite = emu_get_memorycsip(g_sprites[spriteID + 1]);

			if (drawParam1.sprite == NULL) break;

			w->width  = Sprite_GetWidth(drawParam1.sprite);
			w->height = Sprite_GetHeight(drawParam1.sprite);
			break;
	}

	w->drawModeSelected = drawMode;
	w->drawModeDown     = drawMode;
	w->drawModeNormal   = drawMode;
	w->drawParameterNormal   = drawParam1;
	w->drawParameterDown     = drawParam2;
	w->drawParameterSelected = (spriteID == 0x19) ? drawParam2 : drawParam1;

	return w;
}

static uint16 GUI_Widget_Scrollbar_CalculateSize(WidgetScrollbar *scrollbar)
{
	Widget *w;
	uint16 size;

	w = scrollbar->parent;

	if (w == NULL) return 0;

	size = scrollbar->scrollPageSize * (max(w->width, w->height) - 2) / scrollbar->scrollMax;

	if (scrollbar->size != size) {
		scrollbar->size = size;
		scrollbar->dirty = 1;
	}

	return size;
}

/**
 * Allocate a #Widget and a #WidgetScrollbar.
 * @param index Index of the new widget.
 * @param parentID Parent ID of the new widget.
 * @param offsetX Horizontal offset of the new widget.
 * @param offsetY Vertical offset of the new widget.
 * @param width Width of the new widget.
 * @param height Height of the new widget.
 * @param drawProc Procedure for drawing.
 * @return Address of the new widget.
 */
Widget *GUI_Widget_Allocate_WithScrollbar(uint16 index, uint16 parentID, uint16 offsetX, uint16 offsetY, int16 width, int16 height, ScrollbarDrawProc *drawProc)
{
	Widget *w;
	WidgetScrollbar *ws;

	w = (Widget *)emu_get_memorycsip(Tools_Malloc(sizeof(Widget), 0x10));

	w->index    = index;
	w->parentID = parentID;
	w->offsetX  = offsetX;
	w->offsetY  = offsetY;
	w->width    = width;
	w->height   = height;

	w->fgColourSelected = 10;
	w->bgColourSelected = 12;

	w->fgColourNormal = 15;
	w->bgColourNormal = 12;

	w->flags.all = 0;
	w->flags.s.buttonFilterLeft = 7;
	w->flags.s.loseSelect = true;

	w->state.all = 0;
	w->state.s.hover2Last = true;

	w->drawModeNormal   = DRAW_MODE_CUSTOM_PROC;
	w->drawModeSelected = DRAW_MODE_CUSTOM_PROC;

	w->drawParameterNormal.proc   = &GUI_Widget_Scrollbar_Draw;
	w->drawParameterSelected.proc = &GUI_Widget_Scrollbar_Draw;
	w->clickProc.csip        = 0x35200043;

	ws = (WidgetScrollbar *)emu_get_memorycsip(Tools_Malloc(sizeof(WidgetScrollbar), 0x10));

	w->data = ws;

	ws->parent = w;

	ws->scrollMax      = 1;
	ws->scrollPageSize = 1;
	ws->scrollPosition = 0;
	ws->pressed        = 0;
	ws->dirty          = 0;

	ws->drawProc = drawProc;

	GUI_Widget_Scrollbar_CalculateSize(ws);
	GUI_Widget_Scrollbar_CalculatePosition(ws);

	return w;
}

/**
 * Allocate a widget.
 * @return Allocated widget.
 */
Widget *GUI_Widget_Allocate3(uint16 index, uint16 parentID, uint16 offsetX, uint16 offsetY, void *sprite1, void *sprite2, Widget *widget2, uint16 unknown1A)
{
	Widget *w;

	w = (Widget *)emu_get_memorycsip(Tools_Malloc(sizeof(Widget), 0x10));

	w->index    = index;
	w->parentID = parentID;
	w->offsetX  = offsetX;
	w->offsetY  = offsetY;

	w->drawModeNormal   = DRAW_MODE_SPRITE;
	w->drawModeDown     = DRAW_MODE_SPRITE;
	w->drawModeSelected = DRAW_MODE_SPRITE;

	w->width  = Sprite_GetWidth(sprite1) * 8;
	w->height = Sprite_GetHeight(sprite1);

	w->flags.all = 0;
	w->flags.s.requiresClick     = true;
	w->flags.s.clickAsHover      = true;
	w->flags.s.loseSelect        = true;
	w->flags.s.variable_0080     = true;
	w->flags.s.buttonFilterLeft  = 1;
	w->flags.s.buttonFilterRight = 1;

	w->drawParameterNormal.sprite   = sprite1;
	w->drawParameterSelected.sprite = sprite1;
	w->drawParameterDown.sprite     = sprite2;

	if (unknown1A != 0x0) {
		w->clickProc.csip = 0x3520003E;
	} else {
		w->clickProc.csip = 0x35200039;
	}

	w->data = widget2->data;
	return w;
}

/**
 * Make the Widget selected.
 *
 * @param w The widget to make selected.
 * @param clickProc Wether to execute the widget clickProc.
 */
void GUI_Widget_MakeSelected(Widget *w, bool clickProc)
{
	if (w == NULL || w->flags.s.invisible) return;

	w->state.s.selectedLast = w->state.s.selected;

	w->state.s.selected = true;

	GUI_Widget_Draw(w);

	if (!clickProc || w->clickProc.csip == 0x0) return;

	/* XXX -- Code has never been called so far in all runs */
	{
		csip32 wcsip = emu_Global_GetCSIP(w);

		emu_push(wcsip.s.cs); emu_push(wcsip.s.ip);

		/* Call based on memory/register values */
		emu_push(emu_cs); emu_push(0x0236);
		emu_ip = w->clickProc.s.ip;
		emu_cs = w->clickProc.s.cs;
		switch (w->clickProc.csip) {
			default:
				/* In case we don't know the call point yet, call the dynamic call */
				emu_last_cs = 0xB48B; emu_last_ip = 0x0232; emu_last_length = 0x0022; emu_last_crc = 0x19B9;
				emu_call();
				return;
		}
		emu_sp += 4;
	}
}

/**
 * Reset the Widget to a normal state (not selected, not clicked).
 *
 * @param w The widget to reset.
 * @param clickProc Wether to execute the widget clickProc.
 */
void GUI_Widget_MakeNormal(Widget *w, bool clickProc)
{
	if (w == NULL || w->flags.s.invisible) return;

	w->state.s.selectedLast = w->state.s.selected;
	w->state.s.hover1Last = w->state.s.hover2;

	w->state.s.selected = false;
	w->state.s.hover1 = false;
	w->state.s.hover2 = false;;

	GUI_Widget_Draw(w);

	if (!clickProc || w->clickProc.csip == 0x0) return;

	/* XXX -- Code has never been called so far in all runs */
	{
		csip32 wcsip = emu_Global_GetCSIP(w);

		emu_push(wcsip.s.cs); emu_push(wcsip.s.ip);

		/* Call based on memory/register values */
		emu_push(emu_cs); emu_push(0x01C2);
		emu_ip = w->clickProc.s.ip;
		emu_cs = w->clickProc.s.cs;
		switch (w->clickProc.csip) {
			default:
				/* In case we don't know the call point yet, call the dynamic call */
				emu_last_cs = 0xB48B; emu_last_ip = 0x01BE; emu_last_length = 0x0022; emu_last_crc = 0x19B9;
				emu_call();
				return;
		}
		emu_sp += 4;
	}

	return;
}

/**
 * Link a widget to another widget, where the new widget is linked at the end
 *  of the list of the first widget.
 * @param w1 Widget to which the other widget is added.
 * @param w2 Widget which is added to the first widget (at the end of his chain).
 * @return The first widget of the chain.
 */
Widget *GUI_Widget_Link(Widget *w1, Widget *w2)
{
	Widget *first = w1;

	g_global->widgetReset = true;

	if (w2 == NULL) return w1;
	w2->next = NULL;
	if (w1 == NULL) return w2;

	while (w1->next != NULL) w1 = w1->next;

	w1->next = w2;
	return first;
}

/**
 * Get scrollbar position.
 * @param w Widget.
 * @return Scrollbar position, or \c 0xFFFF if no widget supplied.
 */
uint16 GUI_Get_Scrollbar_Position(Widget *w)
{
	WidgetScrollbar *ws;

	if (w == NULL) return 0xFFFF;

	ws = w->data;
	return ws->scrollPosition;
}

uint16 GUI_Widget_Scrollbar_Init(Widget *w, int16 scrollMax, int16 scrollPageSize, int16 scrollPosition)
{
	uint16 position;
	WidgetScrollbar *scrollbar;

	if (w == NULL) return 0xFFFF;

	position = GUI_Get_Scrollbar_Position(w);
	scrollbar = w->data;

	if (scrollMax > 0) scrollbar->scrollMax = scrollMax;
	if (scrollPageSize >= 0) scrollbar->scrollPageSize = min(scrollPageSize, scrollbar->scrollMax);
	if (scrollPosition >= 0) scrollbar->scrollPosition = min(scrollPosition, scrollbar->scrollMax - scrollbar->scrollPageSize);

	GUI_Widget_Scrollbar_CalculateSize(scrollbar);
	GUI_Widget_Scrollbar_CalculatePosition(scrollbar);
	GUI_Widget_Scrollbar_Draw(w);

	if (scrollbar->drawProc != NULL) scrollbar->drawProc(w);

	return position;
}

uint16 GUI_Widget_Scrollbar_CalculatePosition(WidgetScrollbar *scrollbar)
{
	Widget *w;
	uint16 position;

	w = scrollbar->parent;
	if (w == NULL) return 0xFFFF;

	position = scrollbar->scrollMax - scrollbar->scrollPageSize;

	if (position != 0) position = scrollbar->scrollPosition * (max(w->width, w->height) - 2 - scrollbar->size) / position;

	if (scrollbar->position != position) {
		scrollbar->position = position;
		scrollbar->dirty = 1;
	}

	return position;
}

uint16 GUI_Widget_Scrollbar_CalculateScrollPosition(WidgetScrollbar *scrollbar)
{
	Widget *w;

	w = scrollbar->parent;
	if (w == NULL) return 0xFFFF;

	scrollbar->scrollPosition = scrollbar->position * (scrollbar->scrollMax - scrollbar->scrollPageSize) / (max(w->width, w->height) - 2 - scrollbar->size);

	return scrollbar->scrollPosition;
}

void GUI_Widget_Free_WithScrollbar(Widget *w)
{
	if (w == NULL) return;

	Tools_Free(emu_Global_GetCSIP(w->data));
	Tools_Free(emu_Global_GetCSIP(w));
}

/**
 * Insert a widget into a list of widgets.
 * @param w1 Widget to which the other widget is added.
 * @param w2 Widget which is added to the first widget (ordered by index).
 * @return The first widget of the chain.
 */
Widget *GUI_Widget_Insert(Widget *w1, Widget *w2)
{
	Widget *first;
	Widget *prev;

	if (w1 == NULL) return w2;
	if (w2 == NULL) return w1;

	if (w2->index <= w1->index) {
		w2->next = w1;
		return w2;
	}

	first = w1;
	prev = w1;

	while (w2->index > w1->index && w1->next != NULL) {
		prev = w1;
		w1 = w1->next;
	}

	if (w2->index > w1->index) {
		w1 = GUI_Widget_Link(first, w2);
	} else {
		prev->next = w2;
		w2->next = w1;
	}

	g_global->widgetReset = 1;

	return first;
}
