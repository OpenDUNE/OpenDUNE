/* $Id$ */

#define DECOMPILED_INCLUDE

#include <stdio.h>

#include "../src/animation.h"
#include "../src/codec/format80.h"
#include "../src/config.h"
#include "../src/driver.h"
#include "../src/file.h"
#include "../src/gfx.h"
#include "../src/global.h"
#include "../src/gui/font.h"
#include "../src/gui/gui.h"
#include "../src/gui/widget.h"
#include "../src/house.h"
#include "../src/ini.h"
#include "../src/input/input.h"
#include "../src/interrupt.h"
#include "../src/load.h"
#include "../src/map.h"
#include "../src/mouse.h"
#include "../src/mt32mpu.h"
#include "../src/object.h"
#include "../src/opendune.h"
#include "../src/os/endian.h"
#include "../src/os/file.h"
#include "../src/os/math.h"
#include "../src/os/strings.h"
#include "../src/pool/house.h"
#include "../src/pool/pool.h"
#include "../src/pool/structure.h"
#include "../src/pool/team.h"
#include "../src/pool/unit.h"
#include "../src/save.h"
#include "../src/scenario.h"
#include "../src/script/script.h"
#include "../src/security.h"
#include "../src/sound.h"
#include "../src/sprites.h"
#include "../src/string.h"
#include "../src/structure.h"
#include "../src/team.h"
#include "../src/tile.h"
#include "../src/tools.h"
#include "../src/unit.h"
#include "../src/unknown/unknown.h"
#include "../src/wsa.h"


#undef DECOMPILED_INCLUDE

extern void emu_Video_IsInVSync();
extern void emu_Video_WaitForNextVSync();
extern void emu_Mouse_EventHandler();
extern void emu_DSP_Write();
extern void emu_DSP_Read();
extern void emu_DSP_WriteAndWait();
extern void emu_DSP_Reset();
extern void f__AB00_0264_0047_2B67();
extern void f__AB00_02AB_000F_A43F();
extern void emu_Mouse_CallbackClear();
extern void f__AB00_02FE_0020_41D6();
extern void f__AB00_0325_0020_80E9();
extern void f__AB00_0364_0014_B343();
extern void f__AB00_0398_0001_6780();
extern void emu_DSP_SetTimeConst();
extern void f__AB00_03EA_0001_6780();
extern void f__AB00_03F7_0007_D805();
extern void emu_DSP_InstallInterrupt();
extern void f__AB00_0467_0001_6780();
extern void emu_DSP_UninstallInterrupt();
extern void f__AB00_04CE_0001_6780();
extern void f__AB00_04D8_002F_418B();
extern void f__AB00_0501_0001_6780();
extern void emu_DSP_SetDMA();
extern void f__AB00_0564_0001_6780();
extern void f__AB00_056F_0020_6328();
extern void f__AB00_058F_000E_41A1();
extern void f__AB00_0662_0011_6EA3();
extern void f__AB00_06A2_003A_A0A5();
extern void f__AB01_0713_0023_9473();
extern void f__AB01_0787_0028_C5A7();
extern void f__AB01_07AF_0045_BDCD();
extern void f__AB00_07EB_0026_ECEA();
extern void f__AB01_07FC_0036_425C();
extern void f__AB00_0816_0055_489B();
extern void f__AB01_0869_0035_F60C();
extern void f__AB00_086B_0007_9A8B();
extern void f__AB01_08CE_005F_AC14();
extern void f__29E8_0971_0071_E515();
extern void f__AB00_0B4B_0028_C5A7();
extern void emu_DSP_GetInfo();
extern void f__AB00_0B86_0001_6780();
extern void emu_DSP_Uninit();
extern void f__AB00_0BC6_0001_6780();
extern void f__AB01_0C06_0032_85C4();
extern void emu_DSP_SetVolume();
extern void f__AB00_0C1C_0001_6780();
extern void f__AB01_0C38_001F_B3E4();
extern void f__AB01_0CB4_0016_9B28();
extern void emu_Input_Keyboard_EventHandler();
extern void f__AB01_0D96_0001_6780();
extern void f__AB00_0D99_0001_6780();
extern void emu_DSP_Init();
extern void f__AB00_0E65_0001_6780();
extern void f__29E8_0F7A_000D_B1AA();
extern void emu_DSP_Play();
extern void f__AB00_1115_0001_6780();
extern void emu_DSP_Start();
extern void f__AB00_1184_0001_6780();
extern void emu_DSP_Stop();
extern void f__AB00_11CF_0001_6780();
extern void emu_DSP_GetStatus();
extern void f__AB00_1242_0001_6780();
extern void f__AB01_15E1_0068_0B9B();
extern void f__AB01_16B7_0039_7EF1();
extern void f__AB01_18AC_0082_307C();
extern void f__AB01_1A90_002B_D292();
extern void f__AB01_1B48_0023_740C();
extern void f__AB01_281A_003D_9A17();
extern void f__AB01_2892_0001_6780();
extern void f__AB01_289D_0017_6184();
extern void f__AB01_2976_0001_6780();
