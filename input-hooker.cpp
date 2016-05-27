#include "input-hooker.h"

#ifndef DLL_NAME
#error DLL_NAME must be defined
#endif

#define STRINGIZE_HELPER(x) #x
#define STRINGIZE(x) STRINGIZE_HELPER(x)

const char* InputHooker::dllName = STRINGIZE(DLL_NAME) ".dll"; // must be defined as dll file name

