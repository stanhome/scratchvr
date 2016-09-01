/**
* @file AppDelegate
* @brief
* @author Stan
* @date 2016/09/01 10:26
*/

#pragma once

#include "scratchvr.h"

class AppDelegate : private scratch::Application
{
public:
	AppDelegate();
	virtual ~AppDelegate();

	virtual bool applicationDidFinishLaunching() override;
};