#pragma once

#ifdef RE_PLATFORM_WINDOWS
	#ifdef RE_BUILD_DLL
		#define RAYTECHENGINE_API _declspec(dllexport)


	#else
	#define RAYTECHENGINE_API _declspec(dllimport)
	#endif 
#else
#error RaytechEngine only supports windows!
#endif

