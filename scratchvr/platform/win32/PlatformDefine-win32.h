/**
* @file PlatformDefine-win32
* @brief
* @author Stan
* @date 2016/08/31 15:50
*/

#pragma once

#include "platform/PlatformConfig.h"

#if SC_TARGET_PLATFORM == SC_PLATFORM_WIN32

#if defined(SC_STATIC)
	#define SC_DLL
#else

#if defined(_USRDLL)
	#define SC_DLL __declspec(dllexport)
#else
	#define SC_DLL __declspec(dllimport)
#endif

#endif

#include <assert.h>

#if SC_DISABLE_ASSERT > 0
#define SC_ASSERT(cond)
#else
#define SC_ASSERT(cond)		assert(cond)
#endif

#define SC_UNUSED_PARAM(unusedparam) (void)unusedparam


#endif //SC_TARGET_PLATFORM == SC_PLATFORM_WIN32