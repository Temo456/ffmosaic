#ifndef FFHEADER_H
#define FFHEADER_H

extern "C"
{
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavformat/avio.h>
#include <libswscale/swscale.h>
#include <libavutil/avstring.h>
#include <libavutil/time.h>
}

#pragma comment(lib, "avcodec.lib")
#pragma comment(lib, "avdevice.lib")
#pragma comment(lib, "avformat.lib")
#pragma comment(lib, "avutil.lib")
#pragma comment(lib, "swscale.lib")
#pragma comment(lib, "swresample.lib")


#include <SDL.h>
#include <SDL_thread.h>

#pragma comment(lib, "SDL.lib")

static AVRational g_avr_param = { 1, AV_TIME_BASE };

#ifdef AV_TIME_BASE_Q
#undef AV_TIME_BASE_Q
#endif // AV_TIME_BASE_Q

#define AV_TIME_BASE_Q  g_avr_param
#endif // FFHEADER_H