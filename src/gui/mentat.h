/* $Id$ */

#ifndef GUI_MENTAT_H
#define GUI_MENTAT_H

struct Widget;

extern bool GUI_Widget_Mentat_Click();
extern uint16 GUI_Mentat_Show(csip32 stringBuffer, csip32 wsaFilename, struct Widget *w, bool unknown);
extern void GUI_Mentat_ShowBriefing();
extern void GUI_Mentat_ShowWin();
extern void GUI_Mentat_ShowLose();
extern void GUI_Mentat_Display(char *houseFilename, uint16 houseID);
extern void GUI_Mentat_Animation(uint16 unknown);
extern void GUI_Mentat_SelectHelpSubject(int16 difference);
extern void GUI_Mentat_Create_HelpScreen_Widgets();
extern bool GUI_Mentat_List_Click(struct Widget *w);

#endif /* GUI_MENTAT_H */
