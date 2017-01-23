#ifndef _DY_LIB_HELLO_
#define _DY_LIB_HELLO_

#if defined _WIN32
	#if DY_BUILD
		#define DY_LIB_API __declspec(dllexport)
	#else
		#define DY_LIB_API __declspec(dllimport)
	#endif
#else
	#define DY_LIB_API
#endif

DY_LIB_API void hello(const char* name);

#endif //_DY_LIB_HELLO_