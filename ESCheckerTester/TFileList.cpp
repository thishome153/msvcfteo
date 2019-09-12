#include "stdafx.h"
#include "TFileList.h"

namespace ESCheckerTester {

TFileList::TFileList(void)
  {
  this->tst = gcnew TFileItem();
  this->Items = gcnew List<TFileItem^>();
  }


 void TFileList::Add(System::String^ srcfile)
   {
   this->tst->srcFile = srcfile;
   
   TFileItem^ newItem = gcnew TFileItem();
   newItem->srcFile = srcfile;    
   
   
   newItem->DestFile = this->DestPath+ srcfile;

   this->Items->Add(newItem);
   }

  }