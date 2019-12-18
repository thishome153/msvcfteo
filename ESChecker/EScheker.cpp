// SampleDll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "EScheker.h"


/*
SAMPLEDLL_EXPORTS extern "C"
{ */
  DLL_EXPORTABLE int ESCheck()
  {
	  return 1975; // Заглушка
  }

  DLL_EXPORTABLE int TestLibrary()
  {
	  return 1975; // Заглушка
  }

  DLL_EXPORTABLE int GetLibraryVersion()
  {
	 // void* vr =  FILEVERSION;
	  return 100265;
  }
  
  
  DLL_EXPORTABLE void *Func2(int value_id)
  {
     char *Test = "Here Pointer";
     fteo::api::TMyPoint *cppPoint = new fteo::api::TMyPoint();
     fteo::api::TLine *testLine = new fteo::api::TLine(0,0,1,1);
	 cppPoint->Name = "Point_Created_in_dll (c++)";
	 cppPoint->Description = "Объект точка. Создан в dll";
     cppPoint->id = value_id;
	 return cppPoint; // Заглушка
  }

 DLL_EXPORTABLE fteo::api::TMyPoint *Func21(int value_id, char* name) 
 {
     fteo::api::TMyPoint *cppPoint = new fteo::api::TMyPoint();
	 cppPoint->Name = name;
	 cppPoint->Description = "Объект точка. Создан в dll";
     cppPoint->id = value_id;
	 return cppPoint; // Заглушка
 }


  DLL_EXPORTABLE void *CheckIntersect(fteo::api::TMyPoint A1)
  {
     char *Test = "Here Pointer";
     fteo::api::TMyPoint *cppPoint = new fteo::api::TMyPoint();
	 cppPoint->Name = "Point_Created_in_dll";
	 cppPoint->Description = "Объект описан";
	 return cppPoint; // Заглушка
  }

  DLL_EXPORTABLE fteo::api::TPoints *CheckInterSect2(fteo::api::TMyContours src, fteo::api::TMyContours checkers)
  {
    fteo::api::TPoints* res = new fteo::api::TPoints();
   return res;
  }

  DLL_EXPORTABLE void *CheckIntersect3(fteo::api::TMyContours src, fteo::api::TMyContours checkers)
  {
  fteo::api::TMyContours* res = new fteo::api::TMyContours();
 
   return res;
  }

  //Exportable types from library
  DLL_EXPORTABLE fteo::api::TPoints *tmypoints;
  DLL_EXPORTABLE fteo::api::TMyPoint *point;
  DLL_EXPORTABLE fteo::api::TMyContours *contours;


