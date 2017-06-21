#ifndef ___SOUND_LIB__L__PH___
#define ___SOUND_LIB__L__PH___

#ifndef SOUNDLIB_IMPORT
#define SOUNDLIB_IMPORT		__declspec(dllimport)
#endif

#ifndef SOUNDLIB_EXPORT
#define SOUNDLIB_EXPORT		__declspec(dllexport)
#endif

#ifdef _SOUND_EXT
  #define SOUNDLIB_API			SOUNDLIB_EXPORT
  #define SOUNDLIB_CLASS		SOUNDLIB_EXPORT
  #define SOUNDLIB_DATA			SOUNDLIB_EXPORT
 
  // Project dependant dll Library linking
  #pragma comment (lib, "Shlwapi.lib" )

#else
  #define SOUNDLIB_API			SOUNDLIB_IMPORT 
  #define SOUNDLIB_CLASS		SOUNDLIB_IMPORT
  #define SOUNDLIB_DATA			SOUNDLIB_IMPORT

  // To linking lib file import into proect which uses SoundLib
#ifdef _DEBUG
  #pragma comment (lib, "SoundLibD.lib" )
#else 
  #pragma comment (lib, "SoundLib.lib" )
#endif 

#endif

#endif //___SOUND_LIB__L__PH___