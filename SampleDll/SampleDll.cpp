// SampleDll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "SampleDll.h"

SAMPLEDLL_EXPORTS

extern "C"
{
  SAMPLEDLL_EXPORTS int SampleFunction1()
  {
	  return 1975; // Заглушка
  }

}
