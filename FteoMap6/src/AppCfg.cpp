#include "stdafx.h"
#include "AppCfg.h"
#include "CLR_baseClasses.h" //#include "fteo/include/baseClasses.h"


namespace fteo
{
//====================================================================
//	
//
//
//




//====================================================================
//	
//
//
//

	TAppOptions::TAppOptions()
	{
		this->API = new TConfig(); // Allocate the native object on the C++ Heap via a constructor
		this->API->dbname = "empty";
		this->API->dbHandle = NULL;
		this->API->username = "empty_User(char*)";
		this->API->upassword = "empty_upassword(char*)";
		this->API->serverIp = "localhost";
		this->API->FteoVersion = FTEO_VERSION;
		
	}
	TAppOptions::~TAppOptions()
		{// Deallocate the native object on a destructor 
		delete this->API;
		}

	void TAppOptions::SetServer(System::String ^_Value)
	 {
	 this->API->serverIp = fteo::NET::StringtoChar(_Value);
	 }

	void TAppOptions::SetServer(char *_Value)
	 {
	  this->API->serverIp = _Value;
	 }

	void TAppOptions::SetUserName(System::String^ _Value)
	 {
		 
     this->API->username = fteo::NET::StringtoChar(_Value);
	 }

	void TAppOptions::SetUserName(char *_Value)
	 {
		 this->API->username = _Value;
	 }

   char* TAppOptions::GetUserName()
			   {
				   return this->API->username;
			   }

 System::String^ TAppOptions::GetUserNameW()
	 {
       return fteo::NET::CharToString(this->API->username);
	 }

 System::String^ TAppOptions::GetUserPwrdW()
 {
   return fteo::NET::CharToString(this->API->upassword);
 }

 System::String^ TAppOptions::GetDBNameW()
	 {
     return fteo::NET::CharToString(this->API->dbname);
	 }

 System::String^ TAppOptions::GetServerW()
	 {
     return fteo::NET::CharToString(this->API->serverIp);
	 }
 

	 void TAppOptions::SetDBName(System::String^ _Value)
	 {
		 this->API->dbname = fteo::NET::StringtoChar(_Value);
	 }
	 void TAppOptions::SetDBName(char *_Value)
	 {
		 this->API->dbname = _Value;
	 }
	
bool	TAppOptions::WriteINI()
	{
     using namespace System;
     using namespace Microsoft::Win32;
	  RegistryKey^ rk;
       rk  = Registry::CurrentUser->OpenSubKey("Software", true);

	   if (!rk) {return false;}

	   RegistryKey^ nk = rk->CreateSubKey("Fixosoft")->CreateSubKey("fteo")->CreateSubKey(FTEO_VERSION);
   	   if (!nk) {return false;}
     try
   {
      nk->SetValue("Company", "Fixosoft");
	  nk->SetValue("Product", "©Fteo {this->in->Visual C++;}");
	  nk->SetValue("Version", FTEO_VERSION);
	  nk->SetValue("IDE", "Visual C++ 2008 Express (VC90)");
	  nk->SetValue("SQLNAME", this->GetUserNameW());
	  nk->SetValue("password", "masterkey");
	  nk->SetValue("dbname", this->GetDBNameW());
	  nk->SetValue("server", this->GetServerW());
      nk->SetValue("Mt_common", this->API->Mt_common);	  
      nk->SetValue("Mt_SKPT", this->API->Mt_SKPT);	  
	  
	}
    catch (Exception^)
   {
     //Console::WriteLine("Failed to set new values in 'NewRegKey'");
      return false;
   }
	return true;
	}


bool	TAppOptions::ReadINI()
	{
     using namespace System;
     using namespace Microsoft::Win32;
 RegistryKey^ rk;
   rk  = Registry::CurrentUser->OpenSubKey("Software", true)->OpenSubKey("Fixosoft")->OpenSubKey("fteo")->OpenSubKey(FTEO_VERSION);
   	   if (!rk) {return false;}
	   this->SetUserName((System::String^) rk->GetValue("SQLNAME"));
	   this->SetServer((System::String^) rk->GetValue("server"));
	   this->SetDBName  ((System::String^) rk->GetValue("dbname"));
	   this->API->upassword = fteo::NET::StringtoChar((System::String^) rk->GetValue("password"));
       if (rk->GetValue("Mt_common"))
       this->API->Mt_common = (int) rk->GetValue("Mt_common");
       if (rk->GetValue("Mt_SKPT"))
       this->API->Mt_SKPT   = (int) rk->GetValue("Mt_SKPT");
	 return false;

}// end REadINI





//====================================================================
  extern int MyPublicInteger = 1975;
  
}