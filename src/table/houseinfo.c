/* $Id$ */

/** @file src/table/houseinfo.c HouseInfo file table. */

#include "types.h"

#include "../house.h"

const HouseInfo g_table_houseInfo[] = {
	{ /* 0 */
		/* name                 */ "Harkonnen",
		/* toughness            */ 200,
		/* degradingChance      */ 85,
		/* degradingAmount      */ 3,
		/* minimapColor         */ 144,
		/* specialCountDown     */ 600,
		/* starportDeliveryTime */ 10,
		/* prefixChar           */ 'H',
		/* specialWeapon        */ 1,
		/* musicWin             */ 6,
		/* musicLose            */ 3,
		/* musicBriefing        */ 24,
		/* voiceFilename        */ "nhark.voc"
	},

	{ /* 1 */
		/* name                 */ "Atreides",
		/* toughness            */ 77,
		/* degradingChance      */ 0,
		/* degradingAmount      */ 1,
		/* minimapColor         */ 160,
		/* specialCountDown     */ 300,
		/* starportDeliveryTime */ 10,
		/* prefixChar           */ 'A',
		/* specialWeapon        */ 2,
		/* musicWin             */ 7,
		/* musicLose            */ 4,
		/* musicBriefing        */ 25,
		/* voiceFilename        */ "nattr.voc"
	},

	{ /* 2 */
		/* name                 */ "Ordos",
		/* toughness            */ 128,
		/* degradingChance      */ 10,
		/* degradingAmount      */ 2,
		/* minimapColor         */ 176,
		/* specialCountDown     */ 300,
		/* starportDeliveryTime */ 10,
		/* prefixChar           */ 'O',
		/* specialWeapon        */ 3,
		/* musicWin             */ 5,
		/* musicLose            */ 2,
		/* musicBriefing        */ 26,
		/* voiceFilename        */ "nordo.voc"
	},

	{ /* 3 */
		/* name                 */ "Fremen",
		/* toughness            */ 10,
		/* degradingChance      */ 0,
		/* degradingAmount      */ 1,
		/* minimapColor         */ 192,
		/* specialCountDown     */ 300,
		/* starportDeliveryTime */ 0,
		/* prefixChar           */ 'O',
		/* specialWeapon        */ 2,
		/* musicWin             */ 5,
		/* musicLose            */ 2,
		/* musicBriefing        */ 65535,
		/* voiceFilename        */ "afremen.voc"
	},

	{ /* 4 */
		/* name                 */ "Sardaukar",
		/* toughness            */ 10,
		/* degradingChance      */ 0,
		/* degradingAmount      */ 1,
		/* minimapColor         */ 208,
		/* specialCountDown     */ 600,
		/* starportDeliveryTime */ 0,
		/* prefixChar           */ 'H',
		/* specialWeapon        */ 1,
		/* musicWin             */ 6,
		/* musicLose            */ 3,
		/* musicBriefing        */ 65535,
		/* voiceFilename        */ "asard.voc"
	},

	{ /* 5 */
		/* name                 */ "Mercenary",
		/* toughness            */ 0,
		/* degradingChance      */ 0,
		/* degradingAmount      */ 1,
		/* minimapColor         */ 224,
		/* specialCountDown     */ 300,
		/* starportDeliveryTime */ 0,
		/* prefixChar           */ 'M',
		/* specialWeapon        */ 3,
		/* musicWin             */ 7,
		/* musicLose            */ 4,
		/* musicBriefing        */ 65535,
		/* voiceFilename        */ "amerc.voc"
	}
};
