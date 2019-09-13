
#include <ibase.h>
#include "fteo_core.h"


#ifndef APPCFG_H
#define APPCFG_H


namespace fteo
{

#define FTEO_VERSION "6.0.0.27"
#define CENTOS_SRV "10.66.77.4"
#define TEST_FTEO_SERVER "10.66.77.4:/mnt/win_c/databases/test_fteo.gdb"
#define TEST_FTEO_REMOTE "82.119.136.82:/mnt/win_c/databases/test_fteo.gdb"
#define TEST_FTEO_VM_DESIGNER "C:\\Designer.Local\\Databases$.local\\FTEO.GDB" //Видиишь двойные слэши ?


	typedef void* Firebird_HANDLE;



	//====================================================================
	//	
	//
	//
	//


	//====================================================================
	//	
	//
	//
	//// Native class TConfig
	public  class TConfig
	{
	public:
		char* FteoVersion;
		Firebird_HANDLE dbHandle;
		char* dbname;
		char* username;
		char* upassword;
		int  item_id;   // id текущей записи
		char* serverIp;
		int Mt_common;  // Общая точность для точек
		int Mt_SKPT;    // Точность для точек СКПТ
		int Innccuracy; //Общая точность для Площади
	};

	// CLR Wrapper for TConfig
	public ref	class TAppOptions
	{
	public:
		TConfig* API;
		void SetServer(System::String^ _Value);
		void SetServer(char* _Value);
		void SetUserName(System::String^ _Value);
		void SetUserName(char* _Value);
		void SetDBName(System::String^ _Value);
		void SetDBName(char* _Value);
		char* GetUserName();
		System::String^ GetUserNameW();
		System::String^ GetUserPwrdW();
		System::String^ GetDBNameW();
		System::String^ GetServerW();
		bool WriteINI();
		bool ReadINI();
		// Allocate the native object on the C++ Heap via a constructor
		TAppOptions();
		~TAppOptions();
	};

	//====================================================================
	//	
	//
	//
	//
	extern int MyPublicInteger;
	//netFteo::BaseClasess::


}


#endif //APPCFG_H