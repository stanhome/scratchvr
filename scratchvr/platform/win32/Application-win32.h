/**
 * @file Application-win32
 * @brief
 * @author Stan
 * @date 2016/08/31 17:03
 */
 
#pragma once

#include "platform/PlatformConfig.h"
#include "platform/ApplicationInterface.h"

NS_SC_BEGIN

class SC_DLL Application : public ApplicationInterface
{
public:
	Application();
	virtual ~Application();

	int run() override;

	static Application *getInstance();

protected:
	static Application *s_instance;
};

NS_SC_END
