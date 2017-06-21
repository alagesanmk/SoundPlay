// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the SOUNDLIB_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// SOUNDLIB_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.

#include "SoundLib.inc.h"
#include <Windows.h>

#ifdef __cplusplus  
extern "C" {  // only need to export C interface if  
	// used by C++ source code  
#endif 

SOUNDLIB_API LPCTSTR GetWavPathaName();

#ifdef __cplusplus  
}
#endif 