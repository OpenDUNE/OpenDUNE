/** @file src/audio/driver.h %Driver definitions. */

#ifndef DRIVER_H
#define DRIVER_H

typedef struct Driver {
	uint16 index;                                           /*!< Index of the loaded driver. */
	char   extension[4];                                    /*!< Extension used for music file names. */
	void  *content;                                         /*!< Pointer to the file to play content. */
	char  *filename;                                        /*!< Pointer to the name of file to play. */
	bool   contentMalloced;                                 /*!< Wether content pointer is the result of a malloc. */
} Driver;

typedef struct MSBuffer {
	uint16 index;                                           /*!< ?? */
	void  *buffer;                                          /*!< ?? */
} MSBuffer;

extern Driver *g_driverMusic;
extern Driver *g_driverSound;
extern Driver *g_driverVoice;

extern MSBuffer *g_bufferMusic;
extern MSBuffer *g_bufferSound[4];

extern void Drivers_All_Init(void);
extern bool Driver_Music_IsPlaying(void);
extern bool Driver_Voice_IsPlaying(void);
extern void Driver_Sound_Play(int16 index, int16 volume);
extern void Driver_Music_Stop(void);
extern void Driver_Sound_Stop(void);
extern void Driver_Voice_LoadFile(const char *filename, void *buffer, uint32 length);
extern void Driver_Voice_Play(const uint8 *data, int16 arg0A);
extern void Driver_Voice_Stop(void);
extern void Driver_Sound_LoadFile(const char *musicName);
extern char *Drivers_GenerateFilename(const char *name, Driver *driver);
extern void Drivers_All_Uninit(void);
extern void Driver_LoadFile(const char *musicName, Driver *driver);
extern void Driver_UnloadFile(Driver *driver);
extern void Driver_Music_FadeOut(void);

#endif /* DRIVER_H */
