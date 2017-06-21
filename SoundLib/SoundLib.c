// File having set of Library functions
//#include "stdafx.h"		// Precompiled header for Windows header and to include IMPORT and EXPORT Symbolic contants

#include <Windows.h>
#include <Shlwapi.h>
#include <wchar.h>
#include <string.h>

#include "SoundLib.h"   // Library header file

// Buffer for returning value of GetWavPathaName
#define MAX_PATH_LEN  1024 
TCHAR g_szWavFullPathName[MAX_PATH_LEN];

// Wave FileName
const TCHAR* pszWavFileName = TEXT("11k16bitpcm.wav");

// This function return Full Path of a wav file including Filename
SOUNDLIB_API LPCTSTR GetWavPathaName()
{
	int result = GetModuleFileName( NULL, g_szWavFullPathName, MAX_PATH_LEN );
	if( ERROR_INSUFFICIENT_BUFFER == result )
		return NULL;

	// Remove and append Wav Fileanme
	PathRemoveFileSpec( g_szWavFullPathName );
	wcscat_s( g_szWavFullPathName, MAX_PATH_LEN, TEXT("\\") );
	wcscat_s( g_szWavFullPathName, MAX_PATH_LEN, pszWavFileName );
	
	// Return wave Full FileName
	return g_szWavFullPathName;
}
