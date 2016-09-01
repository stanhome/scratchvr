/**
 * @file PlatformDefine
 * @brief
 * @author Stan
 * @date 2016/09/01 13:58
 */
 
#pragma once

#include "platform/PlatformConfig.h"

#if SC_TARGET_PLATFORM == SC_PLATFORM_WIN32
#include "platform/win32/PlatformDefine-win32.h"
#elif SC_TARGET_PLATFORM == SC_PLATFORM_MAC

#elif SC_TARGET_PLATFORM == SC_PLATFORM_LINUX

#endif

