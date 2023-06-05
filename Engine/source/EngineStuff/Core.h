#pragma once

#ifdef ENGINEP_PLATFORM_WINDOWS
	#ifdef ENGINE_BUILD_DLL
		#define ENGINE_API __declspec(dllexport)
	#else 
		#define ENGINE_API __declspec(dllimport)
	#endif 
#else
	#error Engine only supports Windows systems!
#endif 
