/* $Id$ */

#ifndef HOUSE_H
#define HOUSE_H

/**
 * Types of Houses available in the game.
 */
typedef enum HouseType {
	HOUSE_HARKONNEN = 0,
	HOUSE_ATREIDES  = 1,
	HOUSE_ORDOS     = 2,
	HOUSE_FREMEN    = 3,
	HOUSE_SARDAUKAR = 4,
	HOUSE_MERCENARY = 5,

	HOUSE_MAX       = 6,
	HOUSE_INVALID   = 0xFF
} HouseType;

/**
 * Types of special House Weapons there ar ein the game.
 */
typedef enum HouseWeapon {
	HOUSE_WEAPON_MISSLE   = 1,
	HOUSE_WEAPON_FREMEN   = 2,
	HOUSE_WEAPON_SABOTEUR = 3,

	HOUSE_WEAPON_INVALID = 0xFF
} HouseWeapon;

MSVC_PACKED_BEGIN
/**
 * An House as stored in the memory.
 */
typedef struct House {
	/* 0000(2)   */ PACK uint16 index;                      /*!< The index of the House in the array. */
	/* 0002(2)   */ PACK uint16 variable_02;                /*!< ?? */
	/* 0004(2)   */ PACK union {
	                     struct {
	/*      0001 */              BITTYPE used:1;            /*!< The House is in use (no longer free in the pool). */
	/*      0002 */              BITTYPE human:1;           /*!< The House is controlled by a human. */
	/*      0004 */              BITTYPE variable_0004:1;   /*!< ?? */
	/*      0008 */              BITTYPE variable_0008:1;   /*!< ?? */
	/*      0010 */              BITTYPE unknown_0010:1;
	/*      0020 */              BITTYPE unknown_0020:1;
	/*      0040 */              BITTYPE unknown_0040:1;
	/*      0080 */              BITTYPE unknown_0080:1;
	/*      0100 */              BITTYPE unknown_0100:1;
	/*      0200 */              BITTYPE unknown_0200:1;
	/*      0400 */              BITTYPE unknown_0400:1;
	/*      0800 */              BITTYPE unknown_0800:1;
	/*      1000 */              BITTYPE unknown_1000:1;
	/*      2000 */              BITTYPE unknown_2000:1;
	/*      4000 */              BITTYPE unknown_4000:1;
	/*      8000 */              BITTYPE unknown_8000:1;
	                     } GCC_PACKED s;
	                     uint16 all; } flags;               /*!< General flags of the House. */
	/* 0006(2)   */ PACK uint16 unitCount;                  /*!< Amount of units owned by House. */
	/* 0008(2)   */ PACK uint16 unitCountMax;               /*!< Maximum amount of units this House is allowed to have. */
	/* 000A(2)   */ PACK uint16 unitCountEnemy;             /*!< ?? Amount of units owned by allied. */
	/* 000C(2)   */ PACK uint16 unitCountAllied;            /*!< ?? Amount of units owned by enemy. */
	/* 000E(4)   */ PACK uint32 structuresBuilt;            /*!< The Nth bit active means the Nth structure type is built (one or more). */
	/* 0012(2)   */ PACK uint16 credits;                    /*!< Amount of credits the House currently has. */
	/* 0014(2)   */ PACK uint16 creditsStorage;             /*!< Amount of credits the House can store. */
	/* 0016(2)   */ PACK uint16 powerProduction;            /*!< Amount of power the House produces. */
	/* 0018(2)   */ PACK uint16 powerUsage;                 /*!< Amount of power the House requires. */
	/* 001A(2)   */ PACK uint16 windtrapCount;              /*!< Amount of windtraps the House currently has. */
	/* 001C(2)   */ PACK uint16 creditsQuota;               /*!< Quota house has to reach to win the mission. */
	/* 001E(4)   */ PACK tile32 palacePosition;             /*!< Position of the Palace. */
	/* 0022()    */ PACK uint8  unknown_0022[0x0002];
	/* 0024(2)   */ PACK uint16 variable_24;                /*!< ?? */
	/* 0026(2)   */ PACK uint16 variable_26;                /*!< ?? */
	/* 0028(2)   */ PACK uint16 variable_28;                /*!< ?? */
	/* 002A(2)   */ PACK uint16 starportTimeLeft;           /*!< How much time is left before starport transport arrives. */
	/* 002C(2)   */ PACK uint16 starportLinkedID;           /*!< If there is a starport delivery, this indicates the first unit of the linked list. Otherwise it is 0xFFFF. */
	/* 002E(20)  */ PACK uint16 ai_structureRebuild[10];    /*!< An array for the AI which stores the type and position of a destroyed structure, for rebuilding. */
} GCC_PACKED House;
MSVC_PACKED_END
assert_compile(sizeof(House) == 0x42);

MSVC_PACKED_BEGIN
/**
 * Inside the GlobalData is information about houses. This is the layout of
 *  that data.
 */
typedef struct HouseInfo {
	/* 0000(4)   */ PACK csip32 name;                       /*!< Pointer to name of house. */
	/* 0004(2)   */ PACK uint16 variable_04;                /*!< ?? Default amount of deviation decreased? */
	/* 0006(2)   */ PACK uint16 variable_06;                /*!< ?? */
	/* 0008(2)   */ PACK uint16 variable_08;                /*!< ?? Amount of damage per 'degrade' round? */
	/* 000A()    */ PACK uint8   unknown_000A[0x0002];
	/* 000C(2)   */ PACK uint16 specialCountDown;           /*!< Time between activation of Special Weapon. */
	/* 000E(2)   */ PACK uint16 starportDeliveryTime;       /*!< Time it takes for a starport delivery. */
	/* 0010(2)   */ PACK uint16 prefixChar;                 /*!< Char used as prefix for some filenames. */
	/* 0012(2)   */ PACK uint16 specialWeapon;              /*!< Which Special Weapon this House has. @see HouseWeapon. */
	/* 0014()    */ PACK uint8   unknown_0014[0x0006];
	/* 001A(4)   */ PACK csip32 voiceFilename;              /*!< Pointer to filename with the voices of the house. */
} GCC_PACKED HouseInfo;
MSVC_PACKED_END
assert_compile(sizeof(HouseInfo) == 0x1E);

extern HouseInfo *g_houseInfo;

extern void GameLoop_House();
extern uint8 House_StringToType(const char *name);
extern void House_EnsureHarvesterAvailable(uint8 houseID);
extern bool House_AreAllied(uint8 houseID1, uint8 houseID2);
extern bool House_Save(FILE *fp);
extern bool House_Load(FILE *fp, uint32 length);


extern void emu_House_AreAllied();

#endif /* HOUSE_H */
