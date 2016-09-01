/**
 * @file ApplicationInterface
 * @brief
 * @author Stan
 * @date 2016/08/31 16:43
 */
 
#pragma once

#include "platform/PlatformMacros.h"

NS_SC_BEGIN

class SC_DLL ApplicationInterface
{
public:
	virtual bool applicationDidFinishLaunching() = 0;

	virtual int run() = 0;
};

NS_SC_END