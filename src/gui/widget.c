/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "mentat.h"
#include "widget.h"
#include "gui.h"
#include "../string.h"
#include "../sprites.h"

extern void f__22A6_0B60_006A_2F61();
extern void f__22A6_0C69_008C_017F();
extern void f__2995_0004_001F_FE17();
extern void f__29E8_072F_000F_651A();
extern void f__29E8_0897_0016_2028();
extern void f__29E8_08B5_000A_FC14();
extern void f__2B6C_0197_00CE_4D32();
extern void f__2B6C_0292_0028_3AD7();
extern void emu_GUI_HOF_ClearList();
extern void emu_GUI_HOF_ResumeGame();
extern void emu_GUI_Mentat_List();
extern void emu_GUI_Options();
extern void emu_GUI_Picture();
extern void emu_GUI_Production_BuildThis();
extern void emu_GUI_Production_Down();
extern void emu_GUI_Production_List();
extern void emu_GUI_Production_ResumeGame();
extern void emu_GUI_Production_Up();
extern void emu_GUI_Production_Upgrade();
extern void emu_GUI_Purchase_Invoice();
extern void emu_GUI_Purchase_Minus();
extern void emu_GUI_Purchase_Plus();
extern void emu_GUI_RepairUpgrade();
extern void emu_Tools_Malloc();
extern void overlay(uint16 cs, uint8 force);

Widget *GUI_Widget_GetNext(Widget *w)
{
	if (w->next.csip == 0x0) return NULL;
	return (Widget *)emu_get_memorycsip(w->next);
}

/**
 * Unknown function 0004.
 *
 * @param w The widget to draw.
 * @param unknown ??.
 */
void GUI_Widget_Unknown0004(Widget *w, uint16 unknown)
{
	if (g_global->variable_6C91 == 0) {
		emu_push(w->offsetY + w->height);
		emu_push(w->offsetX + w->width);
		emu_push(w->offsetY);
		emu_push(w->offsetX);
		emu_push(emu_cs); emu_push(0x003F); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
		emu_sp += 8;
	}

	GUI_DrawSprite(g_global->variable_6C91, w->drawProcNormal, w->offsetX, w->offsetY, w->parentID, 0);

	emu_push(unknown);
	emu_push(w->height);
	emu_push(w->width);
	emu_push(w->offsetY);
	emu_push(w->offsetX);
	emu_push(emu_cs); emu_push(0x0095); emu_cs = 0x2995; f__2995_0004_001F_FE17();
	emu_sp += 10;

	if (g_global->variable_6C91 == 0) {
		emu_push(emu_cs); emu_push(0x00A4); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	}
}

/**
 * Draw a widget to the display.
 *
 * @param w The widget to draw.
 * @param wcsip TODO -- TEMPORARY -- The csip to the widget.
 */
void GUI_Widget_Draw(Widget *w, csip32 wcsip)
{
	uint16 positionLeft, positionRight;
	uint16 positionTop, positionBottom;
	uint16 offsetX, offsetY;
	uint16 drawMode;
	uint8 fgColour, bgColour;
	csip32 drawProc;

	assert(g_global->variable_6660.csip == 0x22A60C69);
	assert(g_global->variable_665C.csip == 0x22A60B60);

	if (w == NULL) return;

	if ((w->flags & 0x08) != 0) {
		if ((w->flags & 0x10) == 0) return;

		GUI_Widget_Unknown0004(w, g_global->variable_6D53);
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
		return;
	}

	if ((w->state & 0x0004) == 0) {
		if ((w->state & 0x0001) == 0) {
			drawMode = w->drawModeNormal;
			drawProc = w->drawProcNormal;
			fgColour = w->fgColourNormal;
			bgColour = w->bgColourNormal;
		} else {
			drawMode = w->drawModeSelected;
			drawProc = w->drawProcSelected;
			fgColour = w->fgColourSelected;
			bgColour = w->bgColourSelected;

		}
	} else {
		drawMode = w->drawModeDown;
		drawProc = w->drawProcDown;
		fgColour = w->fgColourDown;
		bgColour = w->bgColourDown;
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
	if (drawMode != DRAW_MODE_NONE && drawMode != DRAW_MODE_CUSTOM_PROC && g_global->variable_6C91 == 0) {
		emu_push(positionBottom);
		emu_push(positionRight);
		emu_push(positionTop);
		emu_push(positionLeft);
		emu_push(emu_cs); emu_push(0x08C2); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
		emu_sp += 8;
	}

	switch (drawMode) {
		case DRAW_MODE_NONE: break;

		case DRAW_MODE_SPRITE: {
			GUI_DrawSprite(g_global->variable_6C91, drawProc, offsetX, offsetY, w->parentID, 0x4000);
		} break;

		case DRAW_MODE_TEXT: {
			GUI_DrawText((char *)emu_get_memorycsip(drawProc), positionLeft, positionTop, fgColour, bgColour);
		} break;

		case DRAW_MODE_UNKNOWN3: {
			emu_push(positionTop);
			emu_push(positionLeft >> 3);
			emu_push(drawProc.s.cs);
			emu_push(emu_cs); emu_push(0x0A0B); emu_cs = 0x22A6; f__22A6_0B60_006A_2F61(); break;
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
			emu_sp += 6;
		} break;

		case DRAW_MODE_CUSTOM_PROC: {
			if (drawProc.csip == 0x0) return;

			switch (drawProc.csip) {
				case 0x0AEC0809: GUI_Widget_SpriteTextButton_Draw(w); break;
				case 0x0AEC0CA1: GUI_Widget_SpriteButton_Draw(w);     break;
				case 0x0AEC0E3E: GUI_Widget_TextButton2_Draw(w);      break;
				case 0x34F20061: GUI_Widget_TextButton_Draw(w);       break;
				case 0x3520002A: GUI_Widget_ScrollBar_Draw(w, wcsip); break;
				default: assert(!"GUI_Widget_Draw(): unknown draw function.");
			}
		} break;

		case DRAW_MODE_WIRED_RECTANGLE: {
			GUI_DrawWiredRectangle(positionLeft, positionTop, positionRight, positionBottom, fgColour);
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
		} break;

		case DRAW_MODE_UNKNOWN6: {
			emu_push(fgColour);
			emu_push(positionBottom);
			emu_push(positionRight);
			emu_push(positionTop);
			emu_push(positionLeft);
			emu_push(emu_cs); emu_push(0x09CE); emu_cs = 0x22A6; f__22A6_0C69_008C_017F();
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
			emu_sp += 10;
		} break;
	}

	if (drawMode != DRAW_MODE_NONE && drawMode != DRAW_MODE_CUSTOM_PROC && g_global->variable_6C91 == 0) {
		emu_push(emu_cs); emu_push(0x08F4); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
	}
}

/**
 * Check a widget for events like 'hover' or 'click'. Also check the keyboard
 *  buffer if there was any key which should active us.
 *
 * @param w The widget to handle events for. If the widget has a valid next
 *   pointer, those widgets are handled too.
 * @param wcsip TODO -- TEMPORARY -- The csip to the widget.
 * @return The last key pressed, or 0 if the key pressed was handled (or if
 *   there was no key press).
 */
uint16 GUI_Widget_HandleEvents(Widget *w, csip32 wcsip)
{
	static Widget *l_widget_selected     = NULL;
	static Widget *l_widget_last         = NULL;
	static uint16  l_widget_button_state = 0x0;

	uint16 mouseX, mouseY;
	uint16 buttonState;
	uint16 returnValue;
	uint16 key;
	bool fakeClick;

	/* XXX -- Should be removed */
	static csip32  l_widget_selected_csip;
	static csip32  l_widget_last_csip;
	csip32 wncsip;

	/* Get the key from the buffer, if there was any key pressed */
	key = 0;
	emu_push(emu_cs); emu_push(0x0044); emu_cs = 0x29E8; f__29E8_072F_000F_651A();
	if (emu_ax != 0) {
		emu_push(emu_cs); emu_push(0x004D); emu_cs = 0x29E8; f__29E8_0897_0016_2028();
		key = emu_ax;
	}

	if (w == NULL) return key & 0x7FFF;

	/* First time this window is being drawn? */
	if (w != l_widget_last || g_global->widgetReset != 0) {
		l_widget_last         = w;
		l_widget_selected     = NULL;
		l_widget_button_state = 0x0;
		g_global->widgetReset = 0;

		/* XXX -- Should be removed */
		l_widget_last_csip = wcsip;
		l_widget_selected_csip.csip = 0x0;

		/* Check for left click */
		emu_push(0x41);
		emu_push(emu_cs); emu_push(0x00B5); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
		emu_sp += 2;
		if (emu_ax != 0) l_widget_button_state |= 0x0200;

		/* Check for right click */
		emu_push(0x42);
		emu_push(emu_cs); emu_push(0x00C9); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
		emu_sp += 2;
		if (emu_ax != 0) l_widget_button_state |= 0x2000;

		/* Draw all the widgets */
		for (; w != NULL; w = GUI_Widget_GetNext(w)) {
			GUI_Widget_Draw(w, wcsip);
			wcsip = w->next;
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
	/* XXX -- Should be removed */
	wcsip = l_widget_last_csip;
	if (l_widget_selected != NULL) {
		w = l_widget_selected;
		/* XXX -- Should be removed */
		wcsip = l_widget_selected_csip;

		if ((w->flags & 0x08) != 0) {
			l_widget_selected = NULL;
			/* XXX -- Should be removed */
			l_widget_selected_csip.csip = 0x0;
		}
	}

	/* XXX -- Should be removed */
	wncsip = wcsip;

	returnValue = 0;
	for (; w != NULL; w = GUI_Widget_GetNext(w)) {
		uint16 positionX, positionY;
		bool triggerWidgetHover;
		bool widgetHover;
		bool widgetClick;

		/* XXX -- Should be removed */
		wcsip = wncsip;
		wncsip = w->next;

		if ((w->flags & 0x08) != 0) continue;

		/* Store the previous button state */
		w->state &= 0xFFE7;
		w->state |= (w->state & 0x3) << 3;

		positionX = w->offsetX;
		if (w->offsetX < 0) positionX += (g_global->variable_4062[w->parentID][2] << 3);
		positionX += g_global->variable_4062[w->parentID][0] << 3;

		positionY = w->offsetY;
		if (w->offsetY < 0) positionY += g_global->variable_4062[w->parentID][3];
		positionY += g_global->variable_4062[w->parentID][1];

		widgetHover = false;
		w->state &= 0xFF7F;

		/* Check if the mouse is inside the widget */
		if (positionX <= mouseX && mouseX <= positionX + w->width && positionY <= mouseY && mouseY <= positionY + w->height) {
			widgetHover = true;
		}

		/* Check if there was a keypress for the widget */
		if ((key & 0x7F) != 0 && ((key & 0x7F) == w->shortcut || (key & 0x7F) == w->shortcut2)) {
			widgetHover = true;
			w->state |= 0x0080;
			key = 0;

			buttonState = 0;
			if ((key & 0x7F) == w->shortcut2) buttonState = w->flags & 0xF000;
			if (buttonState == 0) buttonState = w->flags & 0x0F00;

			l_widget_selected = w;
			/* XXX -- Should be removed */
			l_widget_selected_csip = wcsip;
		}

		/* Update the hover state */
		w->state &= 0xFFF9;
		if (widgetHover) {
			/* Button pressed, and click is hover */
			if ((buttonState & 0x3300) != 0 && (w->flags & 0x4) != 0 && (w == l_widget_selected || l_widget_selected == NULL)) {
				w->state |= 0x0006;

				/* If we don't have a selected widget yet, this will be the one */
				if (l_widget_selected == NULL) {
					l_widget_selected = w;
					/* XXX -- Should be removed */
					l_widget_selected_csip = wcsip;
				}
			}
			/* No button pressed, and click not is hover */
			if ((buttonState & 0x8800) != 0 && (w->flags & 0x4) == 0) {
				w->state |= 0x0006;
			}
		}

		/* Check if we should trigger the hover activation */
		triggerWidgetHover = widgetHover;
		if (l_widget_selected != NULL && (l_widget_selected->flags & 0x40) != 0) {
			triggerWidgetHover = (l_widget_selected == w) ? true : false;
		}

		widgetClick = false;
		if (triggerWidgetHover) {
			/* We click this widget for the first time */
			if ((buttonState & 0x1100) != 0 && l_widget_selected == NULL) {
				l_widget_selected = w;
				key = 0;
				/* XXX -- Should be removed */
				l_widget_selected_csip = wcsip;
			}

			/* Check if we want to consider this as click */
			if ((buttonState & w->flags) != 0 && (widgetHover || (w->flags & 0x01) == 0)) {
				uint16 buttonStateFilter;
				buttonStateFilter = buttonState & w->flags;

				if ((buttonStateFilter & 0x1100) != 0) {
					/* Widget click */
					w->state ^= 0x0001;
					returnValue = w->index | 0x8000;
					widgetClick = true;

					if ((w->flags & 0x04) != 0) w->state |= 0x0006;
					l_widget_selected = w;
					/* XXX -- Should be removed */
					l_widget_selected_csip = wcsip;
				} else if ((buttonStateFilter & 0x2200) != 0) {
					/* Widget was already clicked */
					if ((w->flags & 0x04) == 0) w->state |= 0x0006;
					if ((w->flags & 0x01) == 0) widgetClick = true;
				} else if ((buttonStateFilter & 0x4400) != 0) {
					/* Widget release */
					if ((w->flags & 0x01) == 0 || ((w->flags & 0x01) != 0 && w == l_widget_selected)) {
						w->state ^= 0x0001;
						returnValue = w->index | 0x8000;
						widgetClick = true;
					}

					if ((w->flags & 0x04) == 0) w->state &= 0xFFF9;
				} else {
					/* Widget was already released */
					if ((w->flags & 0x04) != 0) w->state |= 0x0006;
					if ((w->flags & 0x01) == 0) widgetClick = true;
				}
			}
		}

		fakeClick = false;
		/* Check if we are hovering and have mouse button down */
		if (widgetHover && (buttonState & 0x2200) != 0) {
			w->state |= 0x0006;

			if ((w->flags & 0x04) == 0 && (w->state & 0x0001) == 0) {
				fakeClick = true;
				w->state |= 0x0001;
			}
		}

		/* Check if we are not pressing a button */
		if ((buttonState & 0x8800) == 0x8800) {
			l_widget_selected = NULL;
			/* XXX -- Should be removed */
			l_widget_selected_csip.csip = 0x0;

			if (!widgetHover || (w->flags & 0x04) != 0) w->state &= 0xFFF9;
		}

		if (!widgetHover && l_widget_selected == w && (w->flags & 0x40) == 0) {
			l_widget_selected = NULL;
			/* XXX -- Should be removed */
			l_widget_selected_csip.csip = 0x0;
		}

		/* When the state changed, redraw */
		if ((w->state & 0x0018) != ((w->state & 0x0003) << 3)) {
			GUI_Widget_Draw(w, wcsip);
		}

		/* Reset click state when we were faking it */
		if (fakeClick) {
			w->state &= 0xFFFE;
		}

		if (widgetClick) {
			w->state &= 0x00FF;
			w->state |= buttonState;

			if (w->clickProc.csip != 0x0) {
				bool success = false;

				switch (w->clickProc.csip) {
					case 0x0AEC0005: success = GUI_Widget_Name_Click(); break;
					case 0x0AEC004F: success = GUI_Widget_Viewport_Click(w); break;
					case 0x0AEC0FD8: success = GUI_Widget_Cancel_Click(); break;
					case 0x0AEC1093: success = GUI_Widget_SpriteTextButton_Click(w); break;
					case 0x1A341CB1: success = GUI_Widget_TextButton_Click(w, wcsip); break;
					case 0x35200039: success = GUI_Widget_Scrollbar_ArrowUp_Click(w); break;
					case 0x3520003E: success = GUI_Widget_Scrollbar_ArrowDown_Click(w); break;
					case 0x35200043: success = GUI_Widget_Scrollbar_Click(w, wcsip); break;
					case 0x34E9002F: success = GUI_Widget_Mentat_Click(); break;

					default:
						emu_push(wcsip.s.cs);
						emu_push(wcsip.s.ip);

						/* Call based on memory/register values */
						emu_push(emu_cs); emu_push(0x06B0);
						emu_ip = w->clickProc.s.ip;
						emu_cs = w->clickProc.s.cs;
						switch ((emu_cs << 16) + emu_ip) {
							case 0x0AEC1181: emu_GUI_Picture(); break;
							case 0x0AEC11F6: emu_GUI_RepairUpgrade(); break;
							case 0x34950025: overlay(0x3495, 0); emu_GUI_Production_Down(); break;
							case 0x3495002A: overlay(0x3495, 0); emu_GUI_Production_Up(); break;
							case 0x3495002F: overlay(0x3495, 0); emu_GUI_Production_BuildThis(); break;
							case 0x34950034: overlay(0x3495, 0); emu_GUI_Production_ResumeGame(); break;
							case 0x34950039: overlay(0x3495, 0); emu_GUI_Production_Upgrade(); break;
							case 0x3495003E: overlay(0x3495, 0); emu_GUI_Production_List(); break;
							case 0x34950043: overlay(0x3495, 0); emu_GUI_Purchase_Plus(); break;
							case 0x34950048: overlay(0x3495, 0); emu_GUI_Purchase_Minus(); break;
							case 0x3495004D: overlay(0x3495, 0); emu_GUI_Purchase_Invoice(); break;
							case 0x34E0002A: overlay(0x34E0, 0); emu_GUI_Mentat_List(); break;
							case 0x34F20025: overlay(0x34F2, 0); emu_GUI_Options(); break;
							case 0x35180034: overlay(0x3518, 0); emu_GUI_HOF_ClearList(); break;
							case 0x35180039: overlay(0x3518, 0); emu_GUI_HOF_ResumeGame(); break;
							default:
								/* In case we don't know the call point yet, call the dynamic call */
								emu_last_cs = 0xB4A2; emu_last_ip = 0x06AC; emu_last_length = 0x0030; emu_last_crc = 0x38D3;
								emu_call();
								return key & 0x7FFF;
						}

						/* Check if this overlay should be reloaded */
						if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
						emu_sp += 4;

						success = (emu_ax != 0) ? true : false;
						break;
				}

				/* If Click was successful, don't handle any other widgets */
				if (success) break;
			}

			/* On click, don't handle any other widgets */
			if ((w->flags & 0x20) != 0) break;
		}

		/* If we are selected and we lose selection on leave, don't try other widgets */
		if (w == l_widget_selected && (w->flags & 0x40) != 0) break;
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
	static uint8 shortcuts[206] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x10, 0x00, 0x00, 0x00, 0x2b,
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
                        0x77, 0x76, 0x75, 0x74, 0x73, 0x72, 0x71, 0x70, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48 };

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
 * @param retcsip TODO -- TEMPORARY -- Pointer to return the csip of the allocated widget.
 * @return The allocated widget.
 */
Widget *GUI_Widget_Allocate(uint16 index, uint16 shortcut, uint16 offsetX, uint16 offsetY, uint16 spriteID, uint16 stringID, uint16 variable_3A, csip32 *retcsip)
{
	Widget *w;
	csip32 wcsip;
	uint8  drawMode;
	csip32 drawProc1;
	csip32 drawProc2;

	emu_push(0x10);
	emu_push(0); emu_push(0x3C);
	emu_push(emu_cs); emu_push(0x0EF7); emu_cs = 0x23E1; emu_Tools_Malloc();
	emu_sp += 6;
	wcsip.s.cs = emu_dx;
	wcsip.s.ip = emu_ax;
	w = (Widget *)emu_get_memorycsip(wcsip);

	w->index            = index;
	w->shortcut         = shortcut;
	w->shortcut2        = shortcut;
	w->parentID         = 0;
	w->fgColourSelected = 0xB;
	w->bgColourSelected = 0xC;
	w->fgColourNormal   = 0xF;
	w->bgColourNormal   = 0xC;
	w->flags            = 0x44C5;
	w->stringID         = stringID;
	w->variable_3A      = variable_3A;
	w->state            = 0x0;
	w->offsetX          = offsetX;
	w->offsetY          = offsetY;

	switch ((int16)spriteID + 4) {
		case 0:
			drawMode       = DRAW_MODE_CUSTOM_PROC;
			drawProc1.csip = 0x0AEC0CA1; /* GUI_Widget_SpriteButton_Draw */
			drawProc2.csip = 0x0AEC0CA1; /* GUI_Widget_SpriteButton_Draw */
			break;

		case 1:
			drawMode       = DRAW_MODE_CUSTOM_PROC;
			drawProc1.csip = 0x0AEC0809; /* GUI_Widget_SpriteTextButton_Draw */
			drawProc2.csip = 0x0AEC0809; /* GUI_Widget_SpriteTextButton_Draw */

			if (stringID == 0) break;

			if (String_Get_ByIndex(stringID) != NULL) w->shortcut = GUI_Widget_GetShortcut(*String_Get_ByIndex(stringID));
			if (stringID == 0x1E) w->shortcut2 = 0x6E ; /* "Cancel" */
		l__1009:
			break;

		case 2:
			drawMode       = DRAW_MODE_CUSTOM_PROC;
			drawProc1.csip = 0x0AEC0E3E; /* GUI_Widget_TextButton2_Draw */
			drawProc2.csip = 0x0AEC0E3E; /* GUI_Widget_TextButton2_Draw */
			break;

		case 3:
			drawMode       = DRAW_MODE_NONE;
			drawProc1.csip = 0x0;
			drawProc2.csip = 0x0;
			break;

		default:
			drawMode  = DRAW_MODE_SPRITE;
			drawProc1 = g_sprites[spriteID];
			drawProc2 = g_sprites[spriteID + 1];

			if (drawProc1.csip == 0x0) break;

			w->width  = Sprite_GetWidth(drawProc1);
			w->height = Sprite_GetHeight(drawProc1);
			break;
	}

	w->drawModeSelected = drawMode;
	w->drawModeDown     = drawMode;
	w->drawModeNormal   = drawMode;
	w->drawProcNormal   = drawProc1;
	w->drawProcDown     = drawProc2;
	w->drawProcSelected = (spriteID == 0x19) ? drawProc2 : drawProc1;

	if (retcsip != NULL) *retcsip = wcsip;
	return w;
}
