/**
* @file platformMacros
* @brief
* @author Stan
* @date 2016/08/31 14:58
*/

#pragma once

#include "platform/PlatformConfig.h"
#include "platform/PlatformDefine.h"

// Generic macros

// namespace scratch
#if __cplusplus
	#define NS_SC_BEGIN				namespace scratch {
	#define NS_SC_END				}
	#define USING_NS_SC				using namespace scratch
	#define NS_SC					::scratch
#else
	#define NS_SC_BEGIN
	#define NS_SC_END
	#define USING_NS_SC
	#define NS_SC
#endif

