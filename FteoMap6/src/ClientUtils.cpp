#include "stdafx.h"
#include "ClientUtils.h"
#include "AppCfg.h"



#include <ibase.h>
//#include <stdio.h>
#include <string.h> //for string: strcpy
#include <stdlib.h>  // for: mallloc 

using namespace netFteo;

 //Глобальные переменные для Database
	isc_db_handle FteoDBHandle = NULL;
	isc_tr_handle FteoTrHandle = NULL;
	//TAppOptions^ MainConfig = gcnew TAppOptions();

namespace fteo
{

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	
   
///////////////////////////////////////////////////////////////////////////////////////////////////


	namespace firebird
{
   int pr_error (long *, char *);
  
  bool          Connect2Base(char* server, char* dbname, char* uname, char* upasswrd)
   {
	   
	   static char *create_tbl  = "CREATE TABLE dbinfo (when_created DATE)";
       static char *insert_date = "INSERT INTO dbinfo VALUES ('NOW')";
	  // ISC_SCHAR 
    isc_db_handle   dbHandle = NULL;          /* database handle */
    isc_tr_handle   trans = NULL;          /* transaction handle */
    ISC_STATUS_ARRAY status;               /* status vector */
//    long            sqlcode;               /* SQLCODE  */
//    char            create_db[160];        /* 'create database' statement */
//    char            new_dbname[128];
   //Ошибки в определениях типа isc_error_......
   // 335544472 -Your user name and password are not defined. Ask your database administrator to set up a Firebird login
   // 335544357

	char             dpb[48];
    int                 i = 0, len;
	/* Format the dpb with the user name a password */
    dpb[i++] = isc_dpb_version1;
    
    dpb[i++] = isc_dpb_user_name;
	len = strlen (uname);
    dpb[i++] = (char) len;
	strncpy(&(dpb[i]), uname, len);
    i += len;
    
    dpb[i++] = isc_dpb_password;
	len = strlen (upasswrd);
    dpb[i++] = len;
	strncpy(&(dpb[i]), upasswrd, len);
    i += len;

	isc_attach_database(status, 0, dbname, &dbHandle, i, dpb);
  
	  if (dbHandle)
		{

			isc_start_transaction(status, &trans, 1, &dbHandle, 0, NULL);
		    isc_detach_database(status, &dbHandle);
         return true;
		} 
 	  else return false;

  } //end function

//==============================================================================================
  isc_db_handle Connect2Base_2(char* server,char* dbname, char* uname, char* upasswrd)
   {
	   if (FteoDBHandle) return NULL;

	   char *ConnStr;
	   ConcatChars(ConnStr, server,":",dbname);
	  // static char *create_tbl  = "CREATE TABLE dbinfo (when_created DATE)";
      // static char *insert_date = "INSERT INTO dbinfo VALUES ('NOW')";
	  // ISC_SCHAR 
    isc_db_handle   dbHandle = NULL;          /* database handle */
    isc_tr_handle   trans = NULL;          /* transaction handle */
    ISC_STATUS_ARRAY status;               /* status vector */
    //long            sqlcode;               /* SQLCODE  */
    //char            create_db[160];        /* 'create database' statement */
    //char            new_dbname[128];
   //Ошибки в определениях типа isc_error_......
   // 335544472 -Your user name and password are not defined. Ask your database administrator to set up a Firebird login
  

	char             dpb[48];
    int                 i = 0, len;
	/* Format the dpb with the user name a password */
    dpb[i++] = isc_dpb_version1;
    
    dpb[i++] = isc_dpb_user_name;
	len = strlen (uname);
    dpb[i++] = (char) len;
	strncpy(&(dpb[i]), uname, len);
    i += len;
    
    dpb[i++] = isc_dpb_password;
	len = strlen (upasswrd);
    dpb[i++] = len;
	strncpy(&(dpb[i]), upasswrd, len);
    i += len;

	isc_attach_database(status, 0, ConnStr, &dbHandle, i, dpb);
  
	  if (dbHandle)
		{
			FteoDBHandle = dbHandle;
			isc_start_transaction(status, &trans, 1, &dbHandle, 0, NULL);
			FteoTrHandle = trans;
			return dbHandle;
		} 
 	  else return NULL;

  } //end function

  //------------------------------------------------------
  bool DisConnect(isc_db_handle Handle)
{
	ISC_STATUS_ARRAY status;
	//isc_db_handle WrongHandle;
	if (FteoTrHandle)
	{
	  isc_commit_transaction(status, &FteoTrHandle);
	  isc_detach_database(status, &Handle);
	}

	//isc_print_status(status);
	long Code= isc_sqlcode(status);
	if (Code == 0)
	 { 
		 FteoDBHandle = NULL;
		return true; 
	 }
	else 
		return false;
}



  int  SQLRequestTest(isc_db_handle dbHandle)
  {
	  char *sel_str = "select lottable.lottable_id from lottable" ;
	  double   lottable_id;
	  int				  RecCount =0;
	  long                fetch_stat;
      isc_stmt_handle     Statement = NULL;
	  ISC_STATUS_ARRAY    status;
	  isc_tr_handle       trans = NULL;
	  XSQLDA *            sqlda;
	  short               flag0 = 0;

	//  if (isc_start_transaction(status, &trans, 1, &dbHandle, 0, NULL))

	   //   Allocate and prepare the select statement.
	  if (isc_dsql_allocate_statement(status, &dbHandle, &Statement))
	  {}
		   sqlda = (XSQLDA *) malloc(XSQLDA_LENGTH(1)); //Здесь единица потому что выбираем 1 поле.
		   sqlda->sqln = 1;
		   sqlda->sqld = 1;
           sqlda->version = 1;

	if (isc_dsql_prepare(status, &FteoTrHandle, &Statement, 0, sel_str,  SQL_DIALECT_V6, sqlda))
	{}
	sqlda->sqlvar[0].sqldata = (char *)&lottable_id;
	sqlda->sqlvar[0].sqltype = SQL_DOUBLE + 1 ;   //Почему +1 ????!!!!
	sqlda->sqlvar[0].sqllen = sizeof(lottable_id);
    sqlda->sqlvar[0].sqlind  = &flag0;

	if (isc_dsql_execute(status, &FteoTrHandle, &Statement, 1, NULL))
	{
	}

	while ((fetch_stat = isc_dsql_fetch(status, &Statement, SQL_DIALECT_V6, sqlda)) == 0)
	  {
		  RecCount++; 
		  int ChekValue = lottable_id;
	  }

	      /* Free statement handle. */
	if (isc_dsql_free_statement(status, & Statement, DSQL_close))
    {
	}

	return RecCount;
  }







  
  
///////////////////////////////////////////////////////////////////////////////////////////////////
//
//			Loader defintions
//
//////////////////////////////////////////////////////////////////////////////////////////////////  
//
// Class Loader methods defintion
  Loader::Loader()
  {
    this->LoaderName = L"LoaderName";
  }

  int Loader::LoadParcels(isc_db_handle dbHandle)
  {
	  Spatial::TMyParcelCollection LoadedCollection;
	  //BaseClasess::TmyPointO Point;
	  //Point.id = 25;
      //*****Api:

char *sel_str = "select lottable.lottable_id from lottable " ;
	  double   lottable_id;
	  int				  RecCount =0;
	  long                fetch_stat;
      isc_stmt_handle     Statement = NULL;
	  ISC_STATUS_ARRAY    status;
	  isc_tr_handle       trans = NULL;
	  XSQLDA *            sqlda;
	  short               flag0 = 0;

	//  if (isc_start_transaction(status, &trans, 1, &dbHandle, 0, NULL))

	   //   Allocate and prepare the select statement.
	  if (isc_dsql_allocate_statement(status, &dbHandle, &Statement))
	  {}
		   sqlda = (XSQLDA *) malloc(XSQLDA_LENGTH(1)); //Здесь единица потому что выбираем 1 поле.
		   sqlda->sqln = 1;
		   sqlda->sqld = 1;
           sqlda->version = 1;

	if (isc_dsql_prepare(status, &FteoTrHandle, &Statement, 0, sel_str,  SQL_DIALECT_V6, sqlda))
	{}
	sqlda->sqlvar[0].sqldata = (char *)&lottable_id;
	sqlda->sqlvar[0].sqltype = SQL_DOUBLE + 1 ;   //Почему +1 ????!!!!
	sqlda->sqlvar[0].sqllen = sizeof(lottable_id);
    sqlda->sqlvar[0].sqlind  = &flag0;

	if (isc_dsql_execute(status, &FteoTrHandle, &Statement, 1, NULL))
	{
	}

	while ((fetch_stat = isc_dsql_fetch(status, &Statement, SQL_DIALECT_V6, sqlda)) == 0)
	  {
		  RecCount++; 
		  int ChekValue = lottable_id;
          Spatial::TMyParcel^ TheParcel = gcnew Spatial::TMyParcel("26:xx","Землепользование");
		  TheParcel->CadastralBlock = lottable_id.ToString(); 
		  LoadedCollection.AddParcel( TheParcel);
	  }

	      /* Free statement handle. */
	if (isc_dsql_free_statement(status, & Statement, DSQL_close))
    {
	}
//*****


	 // res.AddParcel(TheParcel);
	return LoadedCollection.Count;
		RecCount;
  }




  
  //----------------- LoadParcels2
  //
netFteo::Spatial::TMyParcelCollection^ Loader::LoadParcels2(isc_db_handle dbHandle)
  {
	  Spatial::TMyParcelCollection^ LoadedCollection= gcnew Spatial::TMyParcelCollection();

//*****Api:
char *sel_str = "select lottable_id, archnum, lotname, kn, DKKPOSITION from lottable where is_child <> 1 order by lottable_id desc " ;
	  double   lottable_id;
	  char ArchNum[LOTTABLE_ACRHNUMLEN+2];
	  char LotName[LOTTABLE_LOTNAME+2];
	  char KN[LOTTABLE_KN+2];
	  char Dkk[LOTTABLE_DKKPOSITION+2];
	  int				  RecCount =0;
	  long                fetch_stat;
      isc_stmt_handle     Statement = NULL;
	  ISC_STATUS_ARRAY    status;
	  isc_tr_handle       trans = NULL;
	  XSQLDA *            sqlda;
	  short               flag0 = 0;  short flag3 = 0;
	  short               flag1 = 0;  short flag4 = 0;
	  short               flag2 = 0;

	//  if (isc_start_transaction(status, &trans, 1, &dbHandle, 0, NULL))

	   //   Allocate and prepare the select statement.
       if (isc_dsql_allocate_statement(status, &dbHandle, &Statement))
        {}	  
		   sqlda = (XSQLDA *) malloc(XSQLDA_LENGTH(5)); //Здесь единица потому что выбираем 1 поле.
		   sqlda->sqln = 5;
		   sqlda->sqld = 5;
           sqlda->version = 1;

   if (isc_dsql_prepare(status, &FteoTrHandle, &Statement, 0, sel_str,  SQL_DIALECT_V6, sqlda))
   {}

	sqlda->sqlvar[0].sqldata = (char *)&lottable_id;
	sqlda->sqlvar[0].sqltype = SQL_DOUBLE + 1 ;   //Почему +1 ????!!!!
	sqlda->sqlvar[0].sqllen = sizeof(lottable_id);
    sqlda->sqlvar[0].sqlind  = &flag0;

	sqlda->sqlvar[1].sqldata = ArchNum;
	sqlda->sqlvar[1].sqltype = SQL_VARYING + 1 ;   //Почему +1 ????!!!!
	sqlda->sqlvar[1].sqllen = LOTTABLE_ACRHNUMLEN;
    sqlda->sqlvar[1].sqlind  = &flag1;

	sqlda->sqlvar[2].sqldata = LotName;
    sqlda->sqlvar[2].sqlind  = &flag2;

	sqlda->sqlvar[3].sqldata = KN;
    sqlda->sqlvar[3].sqlind  = &flag3;
	
	sqlda->sqlvar[4].sqldata = Dkk;
    sqlda->sqlvar[4].sqlind  = &flag4;
   
   

	if (isc_dsql_execute(status, &FteoTrHandle, &Statement, 1, NULL))
	{}

	while ((fetch_stat = isc_dsql_fetch(status, &Statement, SQL_DIALECT_V6, sqlda)) == 0)
	  {
		  RecCount++; 
		  int ChekValue = lottable_id;
		 Spatial::TMyParcel^ TheParcel = gcnew Spatial::TMyParcel(FBArrayToString(KN)+FBArrayToString(Dkk),FBArrayToString(LotName));
		  TheParcel->id = lottable_id;
		  TheParcel->CadastralBlock = FBArrayToString(ArchNum);
		  LoadedCollection->AddParcel( TheParcel);
	  }

	      /* Free statement handle. */
	if (isc_dsql_free_statement(status, & Statement, DSQL_close))
    {
	}
//*****
    delete sqlda;
  return LoadedCollection;
  } 


//====================================================================
//	
//
wr_TWorks^ Loader::LoadCadWorks(isc_db_handle dbHandle, int CadWorkType)
{
      wr_TWorks^ Result = gcnew wr_TWorks(CadWorkType);
      char *Res;
      char *sel_str;
      ConcatChars(sel_str,"select LOTTABLE_ID, PARENT_ID, archnum, lotname, kn, DKKPOSITION from lottable where (is_child <> 1)\
                          and (KAD_PRICE ", CadWorkTypeToChar(CadWorkType), ") order by lottable_id desc ");
  //char *sel_str = "select lottable_id, archnum, lotname, kn, DKKPOSITION from lottable where is_child <> 1 order by lottable_id desc " ;

      double              lottable_id = -1; double PARENT_ID = -1;
	  char ArchNum[LOTTABLE_ACRHNUMLEN+2];
	  char LotName[LOTTABLE_LOTNAME+2];
	  char KN[LOTTABLE_KN+2];
	  char Dkk[LOTTABLE_DKKPOSITION+2];
	  int				  RecCount =0;
	  long                fetch_stat;
      isc_stmt_handle     Statement = NULL;
	  ISC_STATUS_ARRAY    status;
	  isc_tr_handle       trans = NULL;
	  XSQLDA *            sqlda;
	  short               flag0 = 0;  short flag3 = 0;
	  short               flag1 = 0;  short flag4 = 0;
	  short               flag2 = 0;  short flag5 = 0;
	   //   Allocate and prepare the select statement.
       if (isc_dsql_allocate_statement(status, &dbHandle, &Statement))
        {}	  
		   sqlda = (XSQLDA *) malloc(XSQLDA_LENGTH(6)); //Здесь единица потому что выбираем 1 поле.
		   sqlda->sqln = 6;
		   sqlda->sqld = 6;
           sqlda->version = 1;

   if (isc_dsql_prepare(status, &FteoTrHandle, &Statement, 0, sel_str,  SQL_DIALECT_V6, sqlda))
   {}
	sqlda->sqlvar[0].sqldata = (char *)&lottable_id;
	sqlda->sqlvar[0].sqltype = SQL_DOUBLE + 1 ;   //Почему +1 ????!!!!
	sqlda->sqlvar[0].sqllen = sizeof(lottable_id);
    sqlda->sqlvar[0].sqlind  = &flag0;

	sqlda->sqlvar[1].sqldata = (char *)&PARENT_ID;
	sqlda->sqlvar[1].sqltype = SQL_DOUBLE + 1 ;   //Почему +1 ????!!!!
	sqlda->sqlvar[1].sqllen = sizeof(PARENT_ID);
    sqlda->sqlvar[1].sqlind  = &flag0;

	sqlda->sqlvar[2].sqldata = ArchNum;
	sqlda->sqlvar[2].sqltype = SQL_VARYING + 1 ;   //Почему +1 ????!!!!
	sqlda->sqlvar[2].sqllen = LOTTABLE_ACRHNUMLEN;
    sqlda->sqlvar[2].sqlind  = &flag1;

	sqlda->sqlvar[3].sqldata = LotName;
    sqlda->sqlvar[3].sqlind  = &flag2;

	sqlda->sqlvar[4].sqldata = KN;
    sqlda->sqlvar[4].sqlind  = &flag3;
	
	sqlda->sqlvar[5].sqldata = Dkk;
    sqlda->sqlvar[5].sqlind  = &flag4;
   
	if (isc_dsql_execute(status, &FteoTrHandle, &Statement, 1, NULL))
	{}
    //free(sel_str);

	while ((fetch_stat = isc_dsql_fetch(status, &Statement, SQL_DIALECT_V6, sqlda)) == 0)
	  {
		  RecCount++; 
          wr_TWork^ Item = gcnew wr_TWork();
		  Item->API->id = lottable_id;
		  //if (PARENT_ID > 0)
		  //Item->API->Parent_id = PARENT_ID; // Дописать загрузку поля; Если child = 0, то и parent не заполнен.
          Item->API->CadWorkType = CadWorkType;
          Item->API->ArchNum = FBArrayToChar(ArchNum);
          Result->AddItem(Item);
          
	  }
    free (sqlda);

	      /* Free statement handle. */
	if (isc_dsql_free_statement(status, & Statement, DSQL_close))
    {
	}


  return Result;
}//end LOadCadWorks


//---------------------------------------------------------------------------------------
using namespace fteo::NET;
using namespace fteo::api;
wr_TMyPoints^ Loader::LoadPoints(isc_db_handle dbHandle, int parent_id) //Загрузить точки
 {
   wr_TMyPoints^ Result = gcnew wr_TMyPoints();
   Result->id = parent_id;

      char *sel_str;
        ConcatChars(sel_str,"select OPORA_ID,NUM ,x ,y ,STATUS_OPORA , DESCRIPTION from OPORA where ID_BLOCK ", CadWorkTypeToChar(parent_id), " order by OPORA_ID asc ");
     // ConcatChars(sel_str,"select OPORA_ID,NUM ,x ,y ,STATUS_OPORA , DESCRIPTION from OPORA where PARENT_ID ", CadWorkTypeToChar(parent_id), " order by OPORA_ID asc ");


      double   point_id = 0;
	  char          PointName [25+2];
      double         _x = 0;
      double         _y = 0;
      double    _status = 0;
	  char          PointDescr[64+2];

	  int				  RecCount =0;
	  long                fetch_stat;
      isc_stmt_handle     Statement = NULL;
	  ISC_STATUS_ARRAY    status;
	  isc_tr_handle       trans = NULL;
	  XSQLDA *            sqlda;
	  short               flag0 = 0;  short flag3 = 0;
	  short               flag1 = 0;  short flag4 = 0;
	  short               flag2 = 0;  short flag5 = 0;
	   //   Allocate and prepare the select statement.
       if (isc_dsql_allocate_statement(status, &dbHandle, &Statement))
        {}	  
		   sqlda = (XSQLDA *) malloc(XSQLDA_LENGTH(6)); //Здесь потому что выбираем 6 поле.
		   sqlda->sqln = 6;
		   sqlda->sqld = 6;
           sqlda->version = 1;

   if (isc_dsql_prepare(status, &FteoTrHandle, &Statement, 0, sel_str,  SQL_DIALECT_V6, sqlda))
   {}
    sqlda->sqlvar[0].sqldata = (char *)&point_id;
	sqlda->sqlvar[0].sqltype = SQL_DOUBLE + 1 ;   //Почему +1 ????!!!!
	sqlda->sqlvar[0].sqllen = sizeof(point_id);
    sqlda->sqlvar[0].sqlind  = &flag0;
    // для varchar достаточно и так:
	sqlda->sqlvar[1].sqldata = PointName;
	sqlda->sqlvar[1].sqlind  = &flag1;

    sqlda->sqlvar[2].sqldata = (char *)&_x;
	sqlda->sqlvar[2].sqltype = SQL_DOUBLE + 1 ;   //Почему +1 ????!!!!
	sqlda->sqlvar[2].sqllen = sizeof(_x);
    sqlda->sqlvar[2].sqlind  = &flag2;

    sqlda->sqlvar[3].sqldata = (char *)&_y;
	sqlda->sqlvar[3].sqltype = SQL_DOUBLE + 1 ;   //Почему +1 ????!!!!
	sqlda->sqlvar[3].sqllen = sizeof(_y);
    sqlda->sqlvar[3].sqlind  = &flag3;
	
    sqlda->sqlvar[4].sqldata = (char *)&_status;
	sqlda->sqlvar[4].sqltype = SQL_DOUBLE + 1 ;   //Почему +1 ????!!!!
    sqlda->sqlvar[4].sqllen = sizeof(_status);
    sqlda->sqlvar[4].sqlind  = &flag4;

    sqlda->sqlvar[5].sqldata = PointDescr;
    sqlda->sqlvar[5].sqlind  = &flag5;
   
	if (isc_dsql_execute(status, &FteoTrHandle, &Statement, 1, NULL))
	{}
    //free(sel_str);
    
 //335544569 - isc_dsql_error 
	while ((fetch_stat = isc_dsql_fetch(status, &Statement, SQL_DIALECT_V6, sqlda)) == 0)
	  {
		  RecCount++; 
          TMyPoint *Item = new TMyPoint();
          Item->id = point_id;
          Item->Name = FBArrayToChar(PointName);
          Item->NewOrd->x = _x;           Item->NewOrd->y= _y;
          Item->DeltaGeopoint = 0;
          Item->Status = _status;
          Item->Description = FBArrayToChar(PointDescr);

          Result->AppendPoint(Item);
          
	  }
    free (sqlda);

	      /* Free statement handle. */
	if (isc_dsql_free_statement(status, & Statement, DSQL_close))
    {
	}


  return Result;

}//end Загрузить точки


int Loader::LoadParcels3(isc_db_handle dbHandle)
{
  
  return 1975;
}

#define FTEO_DB_LOCAL "C:\\Designer.Local\\Databases$.local\\FTEO.GDB"

IBPPDriver::IBPPDriver(fteo::TAppOptions^ cfg_)
	{
	this->cfg = cfg_;
    this->ibpp = new wr_IBPP_Database();
    this->ibpp->DB_ibpp   = IBPP::DatabaseFactory(this->cfg->API->serverIp,
		                                          this->cfg->API->dbname,
								  			      this->cfg->API->username,
											      this->cfg->API->upassword, "", "WIN1251","PAGE_SIZE 8192 DEFAULT CHARACTER SET WIN1251");
    this->ibpp->DB_ibpp->Connect();
	}

void IBPPDriver::CloseData()
  {
   this->ibpp->DB_ibpp->Disconnect();
  };
//Точки могут быть привязаны к полю ID_Block или Parent_id в разных случаях (ЕЗП или нет)
//Поэтому этот метод загрузчика имя поля для выборки имеет как параметр FieldName
 wr_TMyPoints^ IBPPDriver::LoadPoints(isc_db_handle dbHandle, char *FieldName, int FieldValue)
	{
    if (this->ibpp->DB_ibpp->Connected())
		 {
		  wr_TMyPoints^ Result = gcnew wr_TMyPoints();
 		  Result->id = FieldValue;
          IBPP::Transaction tr1 = IBPP::TransactionFactory(this->ibpp->DB_ibpp, IBPP::amWrite,IBPP::ilConcurrency, IBPP::lrWait, IBPP::tfNoAutoUndo);
          tr1->Start();
	      IBPP::Statement st1 = IBPP::StatementFactory(this->ibpp->DB_ibpp, tr1);
		  char *sel_str; char *sel_str2;
	  /*
	  OPORA_ID  X			OBJ			STRT_PTS		Y 
	  Z			NUM STATUS_OPORA		DESCRIPTION    PLACEDESCRIPTION 
	  ID_BLOCK  OPORA_GID   PRECISION_  QUALITY		   OLDX
	  OLDY		OLDZ		POINTCODE   SK_KLS_ID	   PARENT_ID  */
		  ConcatChars(sel_str2,"select OPORA_ID,NUM ,x ,y,z ,PRECISION_,STATUS_OPORA , DESCRIPTION from OPORA ", "where " , FieldName);
		  ConcatChars(sel_str, sel_str2, CadWorkTypeToChar(FieldValue), " order by OPORA_ID asc ");
  	     st1->Prepare(sel_str);
         st1->Execute();
	int RecCount =0 ;
//fetch loop 		
while (st1->Fetch())
	{ 	    RecCount++; 
	 TMyPoint *Item = new TMyPoint();
		st1->Get(1, Item->id);
		std::string PointName, descr;
		st1->Get(2, PointName);
        st1->Get(3, Item->NewOrd->x);
        st1->Get(4, Item->NewOrd->y); st1->Get(5, Item->NewOrd->z);
        st1->Get(6, Item->DeltaGeopoint);st1->Get(7, Item->Status);
		st1->Get(8, descr);
		// Теперь строки varchar > std::string > char *
		  Item->Name =  str2char(PointName);
		  Item->Description =  str2char(descr);
		  Item->Parent_id = FieldValue; // id_block / parent_id
          Result->AppendPoint(Item);
	} 
    st1->Close(); 
	tr1->Commit();
     return Result;
		 }
    return nullptr;
	}

 //Загрузка входящих объектов
 bool IBPPDriver::LoadChilds(isc_db_handle dbHandle, wr_TWork ^Parent) {

   Parent->AppendPoints(this->LoadPoints(dbHandle, "ID_BLOCK", Parent->API->id));// сразу прогрузим Родителя его точками
   /*     TWorkEntry *Root = new TWorkEntry();
        Root->id = Parent->API->id;
        Parent->API->AddWorkEntrys(Root);
        */

   if (this->ibpp->DB_ibpp->Connected()) {
          IBPP::Transaction tr1 = IBPP::TransactionFactory(this->ibpp->DB_ibpp, IBPP::amWrite,IBPP::ilConcurrency, IBPP::lrWait, IBPP::tfNoAutoUndo);
          tr1->Start();
	      IBPP::Statement st1 = IBPP::StatementFactory(this->ibpp->DB_ibpp, tr1);
		  char *sel_str; 
          ConcatChars(sel_str,"select LOTTABLE_ID, PARENT_ID, archnum, lotname, kn, DKKPOSITION, KAD_PRICE from lottable where PARENT_ID ", CadWorkTypeToChar(Parent->API->id) , " order by lottable_id asc");
  	     st1->Prepare(sel_str);
         st1->Execute();
	int RecCount =0 ;
//fetch loop 		
while (st1->Fetch())
	{ 	    RecCount++; 
        TWorkEntry *Item = new TWorkEntry();
		st1->Get(1, Item->id);
        st1->Get(2, Item->Parent_id);
		std::string archnum, lotname, kn, DKKPOSITION;
        st1->Get(3, archnum); 
        st1->Get(4, lotname); 
        st1->Get(5, kn); st1->Get(6, DKKPOSITION);
        Item->Name    = str2char(archnum); // для входящих это поля для названия
        Item->LotName = str2char(lotname);  


        double KAD_PRICE = -1;
        st1->Get(7, KAD_PRICE);
        Item->EntryType = (int) KAD_PRICE;
        // int lowBytesCW << KAD_PRICE;
        if (KAD_PRICE ==  cw_OnNew_Partition)
          {
          Item->NewParcel = new TNewParcel();
           Item->NewParcel->Definition = str2char(DKKPOSITION);
           Item->NewParcel->CadastralBlock = str2char(kn);
          }


		// Теперь строки varchar > std::string > char *
		 // Item->Name =  stdString2Char(PointName);
		 // Item->Description =  stdString2Char(descr);
        Parent->AppendPoints(this->LoadPoints(dbHandle, "ID_BLOCK", Item->id));// сразу прогрузим его точками
        Parent->API->AddWorkEntrys(Item);
	} 

     st1->Close(); 
	tr1->Commit();
	 return true;
       }
    return false;
   };

 
 
//====================================================================
// Странные строки Firebird выдает в виде массива
// Пришлось 2 дня проебаться? чтобы высрать вот это
//
//
char *FBArrayToChar(char InArray[])
{   //Первый элемент  - длина строки
	const int count = InArray[0]; 
	int ic =0;
	char *ResArray =(char*)  malloc(count+2);
for (int i =2; i <=3+count-1; i++)
{ 
	ResArray[ic++] = InArray[i];
}
// add nul terminator
 ResArray[count] ='\0'; //кавычки то одинарные!!!!
 return ResArray;
}

System::String^ FBArrayToString(char InArray[])
	{
    return fteo::NET::CharToString(FBArrayToChar(InArray));
	}

//Соедiним строки
char *ConcatChars(char* &Dest,const char *Begin, const char *Middle,const char *End)
{
 // int allLen = (sizeof(Begin)+ sizeof(Middle)+sizeof(End))/ sizeof(char); - это лажа! Размеры неверные дает
  int allLen2 = (strlen(Begin)+ strlen(Middle)+strlen(End))/ sizeof(char);
              Dest= (char*) malloc (allLen2+1);   
              strcpy(Dest, Begin);
              strcat(Dest, Middle);
              strcat(Dest, End);
       return Dest;
}

//----------------------------------------------------------------
  void SQLRequestByField(char* TableName,char* FieldName, isc_db_handle dbHandle)
{
  // char    *sel_str =	 "SELECT " + FieldName +  " FROM "+ TableName; // " WHERE "
	 


}//end function










int  SQLRequestTest(isc_db_handle dbHandle);
//---namespace firebird
}

}
