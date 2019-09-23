#include "fteo_core.h" // baseclasses here defined. Imports from corefteo.lib

#ifdef DLL_BUILD
#define DLL_EXPORTABLE __declspec(dllexport)
#else
#define DLL_EXPORTABLE __declspec(dllimport)
#endif


extern "C"
{
	DLL_EXPORTABLE int   ESCheck();
	DLL_EXPORTABLE int TestLibrary();
	DLL_EXPORTABLE int GetLibraryVersion();
	DLL_EXPORTABLE void *Func2(int value_id);
    DLL_EXPORTABLE fteo::api::TMyPoint *Func21(int value_id, char* name);
    DLL_EXPORTABLE fteo::api::TMyPoints *CheckInterSect2(fteo::api::TMyContours src, fteo::api::TMyContours checkers);
}