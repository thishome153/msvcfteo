// ESCheckerTester.cpp : main project file.
#include "stdafx.h"
//#include "StartForm.h"
#include "Form1.h"
#include "CLR_baseClasses.h"

using namespace System;
using namespace System::Windows;
using namespace System::Windows::Forms;
using namespace ESCheckerTester;



[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
  	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	// Create the main window and run it
      //ESCheckerTester::StartForm^ tst = gcnew ESCheckerTester::StartForm();
      ESCheckerTester::Form1^ tst1 = gcnew ESCheckerTester::Form1();
     
     tst1->Text += " MainSource.cpp. Rebuild app as ES Checker";

     fteo::api::TMyPoint* nativePoint = new fteo::api::TMyPoint();
     nativePoint->Name = "c++ native Point instance";
    Application::Run(tst1);
	return 0;
}
