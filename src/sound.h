/* $Id$ */

#ifndef SOUND_H
#define SOUND_H

MSVC_PACKED_BEGIN
typedef struct SoundData {
	/* 0000(4)   */ PACK csip32 string;                     /*!< Pointer to a string. */
	/* 0004(2)   */ PACK uint16 variable_04;                /*!< ?? */
} GCC_PACKED SoundData;
MSVC_PACKED_END
assert_compile(sizeof(SoundData) == 0x6);


extern void Sound_Play(uint16 index);


extern void emu_Sound_Play();

#endif /* SOUND_H */
