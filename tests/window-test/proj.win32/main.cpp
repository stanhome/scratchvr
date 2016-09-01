/**
 * @file main
 * @brief  
 * @author Stan
 * @date 2016/08/31 11:31
 */

#include "main.h"
#include "../classes/AppDelegate.h"


int WINAPI _tWinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPTSTR    lpCmdLine,
	int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	//// create the application instance
	AppDelegate app;
	return scratch::Application::getInstance()->run();
}