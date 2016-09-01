/**
 * @file Application-win32
 * @brief  
 * @author Stan
 * @date 2016/08/31 17:08
 */

#include "Application-win32.h"

NS_SC_BEGIN

Application *scratch::Application::s_instance;

Application::Application()
{
	SC_ASSERT(!s_instance);
	s_instance = this;
}

Application::~Application()
{
	SC_ASSERT(this == s_instance);
	s_instance = nullptr;
}


int scratch::Application::run()
{
	if (!applicationDidFinishLaunching())
	{
		return 1;
	}


}

Application * scratch::Application::getInstance()
{
	SC_ASSERT(s_instance);
	return s_instance;
}


NS_SC_END