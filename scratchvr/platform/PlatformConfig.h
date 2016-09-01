/**
 * @file PlatformConfig
 * @brief
 * @author Stan
 * @date 2016/08/31 15:20
 */
 
#pragma once

//////////////////////////////////////////////////////////////////////////
// pre configure
//////////////////////////////////////////////////////////////////////////

// define supported target platform macro
#define SC_PLATFORM_UNKNOWN				0
#define SC_PLATFORM_WIN32				1
#define SC_PLATFORM_MAC					2
#define SC_PLATFORM_LINUX				3

// Determine target platform by compile environment macro.
#define SC_TARGET_PLATFORM				SC_PLATFORM_UNKNOWN

//win32
#if defined(_WIN32) && defined(_WINDOWS)
	#undef  SC_TARGET_PLATFORM
	#define SC_TARGET_PLATFORM				SC_PLATFORM_WIN32
#endif

//mac
#if defined(__APPLE__) && TARGET_OS_MAC
	#undef  SC_TARGET_PLATFORM
	#define SC_TARGET_PLATFORM				SC_PLATFORM_MAC
#endif

// linux
#if defined(LINUX) && !defined(__APPLE__)
	#undef  SC_TARGET_PLATFORM
	#define SC_TARGET_PLATFORM				SC_PLATFORM_LINUX
#endif

//////////////////////////////////////////////////////////////////////////
// post configure
//////////////////////////////////////////////////////////////////////////

// check user set platform
#if ! SC_TARGET_PLATFORM
	#error "Cannot recognize the target platform; are you targeting an unsupported platform?"
#endif

