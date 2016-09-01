#pragma once

/*
 todo list:
 == core
	- platform
	- log
	- memory
	- math
	- unit test

 == resource manager
	- 3d model resource
	- texture resource
	- audio file
 == low shadering

	- shader
	- lighting
	- camera 
	- 3d model
	- texture
	- map
	- material
	- mesh

 == physical
	- collision
	- force

 == HID

 == game objects
	- scene
	- 3d object
	- GUI

 == animation

 == particle system

 == audio system

 == event dispatcher

 == director controller

 == lua script binding.
 
*/


// platform
#include "platform/PlatformConfig.h"
#include "platform/PlatformMacros.h"

#if (SC_TARGET_PLATFORM == SC_PLATFORM_WIN32)
	#include "platform/win32/Application-win32.h"
#endif
