#ifndef __PULSEAUDIO_BACKEND_H__
#define __PULSEAUDIO_BACKEND_H__

#include "audio_backend.h"

#define PULSEAUDIO_BACKEND_NAME   "pulseaudio"
int pulseaudio_backend_init(audio_backend_handle_t* handle);

#endif /*__PULSEAUDIO_BACKEND_H__*/

