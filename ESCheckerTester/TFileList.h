//#pragma once
//#include <list>
//#include "fteo/include/baseClasses.h"
//#ifndef FLIST_H
//#define FLIST_H
using namespace System;
using namespace System::Collections::Generic;

namespace ESCheckerTester {

ref class TFileItem
  {
  public:
    System::String^ srcFile;
    System::String^ DestFile;
    System::String^ GUIDFile;
    System::String^ FileDateTime;
  };

ref class TFileList
  {
  public:
    TFileList(void);
    System::String^ DestPath;
    TFileItem^ tst;
    List<TFileItem^>^ Items;//
    void Add(System::String^ srcfile);//,  System::String^ destfile);
  };
 } // namespace
//#endif