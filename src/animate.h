/* $Id$ */

#ifndef ANIMATE_H
#define ANIMATE_H

enum {
    ANIMATION_MAX = 112                                         /*!< The maximum amount of active animations we can have. */
};

MSVC_PACKED_BEGIN
/**
 * Information about an active animation.
 */
typedef struct Animation {
	/* 0000(4)   */ PACK uint32 tickNext;                   /*!< Which tick this Animation should be called again. */
	/* 0004(2)   */ PACK uint16 tileLayout;                 /*!< Tile layout of the Animation. */
	/* 0006(1)   */ PACK uint8  houseID;                    /*!< House of the item being Animated. */
	/* 0007(1)   */ PACK uint8  variable_07;                /*!< ?? */
	/* 0008(1)   */ PACK uint8  variable_08;                /*!< ?? */
	/* 0009(4)   */ PACK csip32 proc;                       /*!< Proc to call for Animation. */
	/* 000D(4)   */ PACK tile32 tile;                       /*!< Top-left tile of Animation. */
} GCC_PACKED Animation;
MSVC_PACKED_END
assert_compile(sizeof(Animation) == 0x11);

extern void Animation_Start(csip32 proc, tile32 tile, uint16 tileLayout, uint8 houseID, uint8 unknown2);
extern void Animation_Stop_ByTile(uint16 packed);
extern void Animation_Tick();

#endif /* ANIMATE_H */
