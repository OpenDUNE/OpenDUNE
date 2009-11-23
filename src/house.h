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

MSVC_PACKED_BEGIN
/**
 * An House as stored in the memory.
 */
typedef struct House {
	/* 0000(2)   */ PACK uint16 index;                      /*!< The index of the House in the array. */
	/* 0002(2)   */ PACK uint16 variable_02;                /*!< ?? */
	/* 0004(2)   */ PACK uint16 flags;                      /*!< ?? Bitflags. 0x0001 - Used, 0x0002 - Human. */
	/* 0006(2)   */ PACK uint16 unitCount;                  /*!< Amount of units owned by House. */
	/* 0008(2)   */ PACK uint16 unitCountMax;               /*!< Maximum amount of units this House is allowed to have. */
	/* 000A()    */ PACK uint8   unknown_000A[0x0004];
	/* 000E(4)   */ PACK uint32 structuresBuilt;            /*!< The Nth bit active means the Nth structure type is built (one or more). */
	/* 0012(2)   */ PACK uint16 credits;                    /*!< Amount of credits the House currently has. */
	/* 0014(2)   */ PACK uint16 creditsStorage;             /*!< Amount of credits the House can store. */
	/* 0016(2)   */ PACK uint16 powerProduction;            /*!< Amount of power the House produces. */
	/* 0018(2)   */ PACK uint16 powerUsage;                 /*!< Amount of power the House requires. */
	/* 001A(2)   */ PACK uint16 windtrapCount;              /*!< Amount of windtraps the House currently has. */
	/* 001C(2)   */ PACK uint16 creditsQuota;               /*!< Quota house has to reach to win the mission. */
	/* 001E()    */ PACK uint8   unknown_001E[0x0006];
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
	/* 0004()    */ PACK uint8   unknown_0004[0x0002];
	/* 0006(2)   */ PACK uint16 variable_06;                /*!< ?? */
	/* 0008(2)   */ PACK uint16 variable_08;                /*!< ?? Amount of damage per 'degrade' round? */
	/* 000A()    */ PACK uint8   unknown_000A[0x0004];
	/* 000E(2)   */ PACK uint16 starportDeliveryTime;       /*!< Time it takes for a starport delivery. */
	/* 0010(2)   */ PACK uint16 prefixChar;                 /*!< Char used as prefix for some filenames. */
	/* 0012()    */ PACK uint8   unknown_0012[0x0008];
	/* 001A(4)   */ PACK csip32 voiceFilename;              /*!< Pointer to filename with the voices of the house. */
} GCC_PACKED HouseInfo;
MSVC_PACKED_END
assert_compile(sizeof(HouseInfo) == 0x1E);

extern HouseInfo *g_houseInfo;

extern void GameLoop_House();
extern uint8 House_StringToType(const char *name);
extern void House_EnsureHarvesterAvailable(uint8 houseID);
extern bool House_AreAllied(uint8 houseID1, uint8 houseID2);


extern void emu_GameLoop_House();
extern void emu_House_AreAllied();

#endif /* HOUSE_H */
