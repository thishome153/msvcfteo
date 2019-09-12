// DbClient.cpp : main project file.

#include "stdafx.h"
#include "AppCfg.h"
#include "MainForm.h"
//#include "OptionsForm.h"
//#include "DBClientMainForm.h"
using namespace FteoDBForms;
//using namespace fteo;
//using namespace fteo::Forms;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
   //Main config Object 
  // MyPublicInteger = 2015;
  
	
  // Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	//ֳכאגםûי מבתוךע - MainForm
    MainForm^ MainFrm = gcnew MainForm();
	// Create the main window and run it
	//Application::Run(gcnew Form1());
	Application::Run(MainFrm);
	return 0;
}
