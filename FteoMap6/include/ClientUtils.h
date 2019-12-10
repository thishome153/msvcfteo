///////////////////////////////////////////////////////////////////////
//	@2015 Fixosoft
//
//	Утилиты (wrappers) для FireBird API
//
//
//////////////////////////////////////////////////////////////////////
#ifdef _MSC_VER
#pragma warning(disable: 4786 4996)
#ifndef _DEBUG
#pragma warning(disable: 4702)
#endif
#endif


#include <ibase.h>

#include "ibpp.h"
// включает нижняя  строка- #include "fteo/include/baseClasses.h"
#include "CLR_baseClasses.h"
#include "fteo_core.h"
#include "AppCfg.h"

#ifndef CLIENT_H
#define CLIENT_H

//Field sizes:
#define    LOTTABLE_ACRHNUMLEN     16
#define    LOTTABLE_LOTNAME        64
#define    LOTTABLE_KN			   25
#define    LOTTABLE_DKKPOSITION    128

/* This macro is used to declare structures representing SQL VARCHAR types */
#define SQL_VARCHAR(len) struct {short vary_length; char vary_string[(len)+1];}


//Объявление глобальной переменной для Database
extern isc_db_handle FteoDBHandle;
extern isc_tr_handle FteoTrHandle;


namespace fteo
{

	namespace firebird
	{
		//Firebird varchar presentation struct
		struct VarChar_64W
		{
			short vary_len;
			char vary_stryng[64 + 2];
		};

		bool Connect2Base(char* server, char* dbname, char* uname, char* upasswrd);
		bool DisConnect(isc_db_handle Handle);
		isc_db_handle Connect2Base_2(char* server, char* dbname, char* uname, char* upasswrd);
		int  SQLRequestTest(isc_db_handle dbHandle);
		void SQLRequestByField(char* TableName, char* FieldName, isc_db_handle dbHandle);
		bool LoadParcels(isc_db_handle dbHandle, char* TableName, int CadWorkType);//Загрузка участков

		char* FBArrayToChar(char FireBirdVarChar[]);  //Firebird varchar converting function to null terminated string
		System::String^ FBArrayToString(char InArray[]);
		char* ConcatChars(char*& Dest, const char* Begin, const char* Middle, const char* End);


		using namespace fteo::NET;
		using namespace fteo::api;


		//---------------Firebird native api loader: free of depend of some libs (soci, ibpp etc.), but firebird api only------------------------------------
		public ref class Loader
		{


		public:  Loader();
				 System::String^ LoaderName;

				 int LoadParcels(isc_db_handle dbHandle);
				 int LoadParcels3(isc_db_handle dbHandle);
				 netFteo::Spatial::TMyParcelCollection^ LoadParcels2(isc_db_handle dbHandle);

				 wr_TWorks^ LoadCadWorks(isc_db_handle dbHandle, int CWType);//Загрузить кадастровые работы
				 wr_TMyPoints^ LoadPoints(isc_db_handle dbHandle, int parent_id);//Загрузить точки
				 netFteo::Spatial::TEntitySpatial^ LoadContours(isc_db_handle dbHandle, int parent_id);
				 TDataRecords<fteo::api::TLayer>* LoadLayers(isc_db_handle dbHandle, int parent_id);//Load LAYER , AREA, OPORA
				 TDataRecords<fteo::api::TAreaRecord>* LoadAreaRecords(isc_db_handle dbHandle, int Lot_id);//Load AREA

		};



		class wr_IBPP_Database {
		public:   IBPP::Database DB_ibpp;
		};

		//---------------IBPP api to firebird api loader:----------------------------------------------
		public ref class IBPPDriver
		{
		private: fteo::TAppOptions^ cfg;
		public: wr_IBPP_Database* ibpp;
				IBPPDriver(fteo::TAppOptions^ cfg_);
				void CloseData();
		public:
			wr_TMyPoints^ LoadPoints(isc_db_handle dbHandle, char* FieldName, int FieldValue); //Загрузить точки, параметр запрооса - FieldName
			bool LoadChilds(isc_db_handle dbHandle, wr_TWork^ Parent); //Загрузить входящие участки/Окс`ы и всё входящее (child = 1)
	  //       bool SavePoint (isc_db_handle dbHandle, wr_TMyPoint  ^point );  //Сохранить (update) точку
	  //       bool SavePoints(isc_db_handle dbHandle, wr_TMyPoints ^points); //Сохранить (update) точки


		};

	}
}

#endif //CLIENT_H