// TEMP_CLR_IBPP_TESTER.cpp : main project file.

#include "stdafx.h"
#include "MainForm.h"
using namespace FteoDBForms;

//using namespace System;
//using namespace System::Windows;
//using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 



	// Create the main window and run it
	MainForm^ mfrm=	gcnew MainForm();
	mfrm->Text += " MainSource.cpp. Rebuild app as FteoMap6";
	Application::Run(mfrm);
	return 0;
}
