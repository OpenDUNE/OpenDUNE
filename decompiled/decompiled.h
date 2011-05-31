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
#include "../src/patched.h"
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

extern void emu_EntryPoint();
extern void emu_XMS_Init();
extern void emu_Highmem_Internal_0003();
extern void emu_Tools_Malloc();
extern void emu_Video_GetMode();
extern void emu_Mouse_CheckButtons();
extern void emu_Video_IsInVSync();
extern void emu_Video_WaitForNextVSync();
extern void emu_Video_SetMode();
extern void emu_XMS_GetFreeMemory();
extern void emu_Highmem_Initialize();
extern void emu_Mouse_EventHandler();
extern void emu_XMS_Allocate();
extern void emu_XMS_MoveToMemory();
extern void emu_XMS_Free();
extern void emu_Mouse_HandleMovement();
extern void f__2AE1_0131_0023_99F9();
extern void f__01F7_0138_0019_8DC5();
extern void emu_Mouse_CheckMovement();
extern void f__01F7_0157_0010_1227();
extern void emu_DSP_Write();
extern void emu_Empty3();
extern void emu_Exit();
extern void emu_Interrupt_Vector_Store();
extern void emu_DSP_Read();
extern void emu_DSP_WriteAndWait();
extern void emu_Interrupt_Vector_Restore();
extern void emu_Tools_Free();
extern void f__29A3_01DB_003D_B0F3();
extern void f__2AE1_01EA_0020_A570();
extern void f__01F7_01ED_0024_A432();
extern void emu_Mouse_Init();
extern void f__01F7_022D_0003_9E5A();
extern void f__01F7_0231_0021_40ED();
extern void emu_DSP_Reset();
extern void f__AB00_0264_0047_2B67();
extern void emu_Input_Keyboard_HandleKeys();
extern void emu_Stderr_Write();
extern void emu_Error_Abnormal_Termination();
extern void f__2AE1_029F_0014_50E5();
extern void f__AB00_02AB_000F_A43F();
extern void emu_Mouse_CallbackClear();
extern void emu_Mouse_InsideRegion();
extern void f__AB00_02FE_0020_41D6();
extern void emu_Empty4();
extern void emu_Terminate();
extern void f__AB00_0325_0020_80E9();
extern void emu_Tools_GetFreeMemory();
extern void emu_Highmem_Alloc();
extern void f__AB00_0364_0014_B343();
extern void emu_Terminate_Normal();
extern void emu_Terminate_Error();
extern void f__AB00_0398_0001_6780();
extern void emu_DSP_SetTimeConst();
extern void f__23E1_03DB_000B_CF65();
extern void f__AB00_03EA_0001_6780();
extern void f__AB00_03F7_0007_D805();
extern void emu_DSP_InstallInterrupt();
extern void emu_MPU_SetPort();
extern void emu_MPU_TestPort();
extern void f__AB00_0467_0001_6780();
extern void emu_DSP_UninstallInterrupt();
extern void emu_Input_Keyboard_HandleKeys2();
extern void emu_Input_Keyboard_Translate();
extern void f__AB01_048E_0001_6780();
extern void emu_Interrupt_Vector_Get();
extern void emu_Interrupt_Vector_Set();
extern void f__AB00_04CE_0001_6780();
extern void f__AB00_04D8_002F_418B();
extern void f__29E8_04FC_0028_0C66();
extern void f__AB00_0501_0001_6780();
extern void emu_DSP_SetDMA();
extern void f__29E8_0534_000E_6213();
extern void f__AB00_0564_0001_6780();
extern void f__AB01_0564_0050_E6D5();
extern void f__AB00_056F_0020_6328();
extern void emu_Tools_Shld_Wrapper();
extern void f__AB00_058F_000E_41A1();
extern void emu_Highmem_Free();
extern void emu_Tools_AddCSIP_Wrapper();
extern void emu_Tools_AddCSIP();
extern void f__AB01_0606_0001_6780();
extern void f__AB01_0610_0050_6DE0();
extern void emu_Input_Keyboard_NextKey();
extern void emu_Tools_SubCSIP();
extern void f__AB00_0662_0011_6EA3();
extern void f__01F7_0675_0020_D684();
extern void f__AB00_06A2_003A_A0A5();
extern void emu_Device_Get_Info();
extern void f__AB01_0709_0001_6780();
extern void f__AB01_0713_0023_9473();
extern void f__29E8_072F_000F_651A();
extern void emu_Input_History_Clear();
extern void f__29E8_074D_0066_6E9B();
extern void f__AB01_074E_001C_6D6A();
extern void emu_File_LowLevel_Seek();
extern void f__AB01_0787_0028_C5A7();
extern void f__AB01_07AF_0045_BDCD();
extern void emu_Tools_Cmpd();
extern void f__AB00_07EB_0026_ECEA();
extern void f__29E8_07FA_0020_177A();
extern void f__AB01_07FC_0036_425C();
extern void f__AB00_0816_0055_489B();
extern void f__AB01_0869_0035_F60C();
extern void f__AB00_086B_0007_9A8B();
extern void f__29E8_0897_0016_2028();
extern void f__29E8_08B5_000A_FC14();
extern void f__AB01_08CE_005F_AC14();
extern void f__29E8_0971_0071_E515();
extern void emu_Input_History_Add();
extern void emu_Input_HandleInput();
extern void emu_Highmem_Uninitialize();
extern void emu_Highmem_Internal_0B07();
extern void emu_Highmem_Internal_0B26();
extern void f__AB00_0B4B_0028_C5A7();
extern void emu_Highmem_GetSize();
extern void emu_DSP_GetInfo();
extern void f__AB00_0B86_0001_6780();
extern void emu_DSP_Uninit();
extern void emu_Highmem_IsInHighmem();
extern void f__AB00_0BC6_0001_6780();
extern void f__AB01_0C06_0032_85C4();
extern void emu_DSP_SetVolume();
extern void emu_Highmem_Memmove_ToHighmem();
extern void f__AB00_0C1C_0001_6780();
extern void f__AB01_0C38_001F_B3E4();
extern void emu_DSP_TestPort();
extern void emu_MPU_GetInfo();
extern void f__AB01_0CA9_0001_6780();
extern void f__AB01_0CB4_0016_9B28();
extern void emu_Highmem_Memmove_FromHighmem();
extern void emu_Input_Keyboard_EventHandler();
extern void f__AB00_0D72_0001_6780();
extern void f__AB01_0D96_0001_6780();
extern void f__AB00_0D99_0001_6780();
extern void f__AB01_0DA1_0077_69FE();
extern void emu_DSP_Init();
extern void f__AB01_0E1C_0001_6780();
extern void f__AB00_0E65_0001_6780();
extern void emu_Highmem_Internal_0EBE();
extern void emu_Tools_StoreSegments();
extern void emu_Highmem_Internal_0EFC();
extern void emu_MPU_NeedTimbre();
extern void emu_Highmem_Internal_0F3A();
extern void f__01F7_0F45_004B_44A0();
extern void emu_Highmem_Internal_0F72();
extern void f__29E8_0F7A_000D_B1AA();
extern void f__AB01_0F7D_0001_6780();
extern void emu_DSP_Play();
extern void f__AB00_1115_0001_6780();
extern void emu_DSP_Start();
extern void f__AB00_1184_0001_6780();
extern void emu_DSP_Stop();
extern void f__AB00_11CF_0001_6780();
extern void emu_DSP_GetStatus();
extern void f__AB00_1242_0001_6780();
extern void f__AB01_15E1_0068_0B9B();
extern void f__01F7_160D_001B_4171();
extern void f__01F7_1670_003F_2D8D();
extern void f__AB01_16B7_0039_7EF1();
extern void f__01F7_16E1_0021_50D4();
extern void f__01F7_170A_0029_EF04();
extern void f__01F7_1741_001B_9E34();
extern void f__01F7_176A_000D_8D0C();
extern void f__01F7_17CE_0015_8AC2();
extern void f__01F7_1828_0023_D335();
extern void f__01F7_184B_000A_9146();
extern void f__AB01_184D_004F_7B67();
extern void f__01F7_1855_0053_AC2D();
extern void f__AB01_18AC_0082_307C();
extern void f__01F7_1A33_002B_B2CA();
extern void f__AB01_1A90_002B_D292();
extern void f__01F7_1AA9_0014_FC63();
extern void f__01F7_1AE8_0010_0EEE();
extern void f__AB01_1B48_0023_740C();
extern void f__01F7_1B73_0022_8ADB();
extern void f__01F7_1BC3_000F_9450();
extern void f__AB01_1C49_0022_C4C7();
extern void f__AB01_1CA3_0042_C43A();
extern void f__01F7_1DE5_0036_9480();
extern void emu_MPU_Init();
extern void emu_Interrupt_Video();
extern void emu_Interrupt_Video_Internal();
extern void f__01F7_2040_0033_F011();
extern void f__01F7_20B5_0076_64ED();
extern void f__AB01_20F8_0001_6780();
extern void emu_MPU_Uninit();
extern void f__01F7_2148_0028_6CAC();
extern void f__AB01_2184_0001_6780();
extern void f__AB01_21CE_001D_E2A5();
extern void emu_Tools_Realloc();
extern void f__AB01_21E5_0001_6780();
extern void f__01F7_21FA_0012_B06A();
extern void emu_MPU_ClearData();
extern void f__AB01_236F_0001_6780();
extern void f__01F7_2412_0011_FC80();
extern void f__01F7_260F_0012_C6FD();
extern void emu_MPU_SetVolume();
extern void f__AB01_275D_0001_6780();
extern void f__01F7_27FD_0037_E2C0();
extern void f__AB01_281A_003D_9A17();
extern void f__AB01_2892_0001_6780();
extern void f__AB01_289D_0017_6184();
extern void emu_Tools_Memcopy();
extern void emu_Tools_Memset_Internal();
extern void emu_Tools_Memset();
extern void f__AB01_2976_0001_6780();
extern void f__01F7_3357_0028_B817();
extern void emu_String_strcpy();
extern void f__01F7_4027_0011_8951();
extern void f__01F7_4484_0014_5939();
