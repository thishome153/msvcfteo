// DBConsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#ifdef _MSC_VER
#pragma warning(disable: 4786 4996)
#ifndef _DEBUG
#pragma warning(disable: 4702)
#endif
#endif

#ifdef IBPP_WINDOWS
#include <windows.h>
#endif

#include "ibpp.h"

#ifdef HAS_HDRSTOP
#pragma hdrstop
#endif

#include <iostream>
#include <stdio.h>
#include <typeinfo>


#include "soci.h"
#include "soci-firebird.h"

//#include "ibase.h"
#include <stdlib.h>  // for: mallloc 
#include <string.h> //for string: strcpy
//#include "mitab.h"


#define EMPLOY_DB_SERVER "10.66.77.4:/mnt/win_c/databases/EMPLOYEE.FDB"
#define EMPLOY_DB_LOCAL "C:\\Designer.Local\\Databases$.local\\EMPLOYEE.FDB"
#define FTEO_DB_LOCAL "C:\\Designer.Local\\Databases$.local\\FTEO.GDB"
#define FTEO_DB_SERVER "10.66.77.4:/mnt/win_c/databases/fteo.gdb"

void Test_SOCI()
{
  printf("\n Create Firebird connection " EMPLOY_DB_LOCAL);
	soci::backend_factory const &backEnd = soci::firebird;
	 soci::session sql;
	 sql.open(backEnd,"service=" EMPLOY_DB_LOCAL " user=SYSDBA password=masterkey");
	  //if (sql.gotData_)
		// printf("\n Connected to "+sql.get_backend_name());//+sql.backEnd_->get_backend_name);
	 int count;    
	 std::ostringstream doc;
	 
	 soci::row r; 

	 sql << "select count(*) from proj_dept_budget", soci::into (count); 
	 printf("\n Count of proj_dept_budget =%16.2f\n\n ", count);

	 sql << "select PROJ_NAME from PROJECT", soci::into (r);    

	// printf("\n item: ", row);

	for(std::size_t i = 0; i != r.size(); ++i)
	{
		 doc << r.get<std::string>(i);
		 printf("\nitem:  %16.2f\n\n"); //TODO print doc content
	}

	printf("\n .....Disconnect");
}

//=========================================================
bool get_Point_id(std::string &pointid)
{
	return false; //TODO need coorect to compiamnce with SDK 10....
	/*
  std::cout << "\n Enter point parent id: ";
  return std::cin >> pointid;

  */
}

void Test_SOCI_Fteo()
{
 printf("\n Create Firebird connection " FTEO_DB_SERVER);
	soci::backend_factory const &backEnd = soci::firebird;
	 soci::session sql;
     sql.open(backEnd,"service=" FTEO_DB_SERVER " user=SYSDBA password=masterkey");
	 int count;    
      std::ostringstream doc;
	 	char *sel_str;
	    int parent_id = 300;

     //ConcatChars(sel_str,"select OPORA_ID,NUM ,x ,y ,STATUS_OPORA , DESCRIPTION from OPORA where ID_BLOCK ", CadWorkTypeToChar(parent_id), " order by OPORA_ID asc ");
		std::string point_id;
 /*  std::cout << "\nSingle field selection " ;
 	 soci::row r; 
	  while (get_Point_id(point_id))
        {
		std::string NUM; soci::indicator ind;
		sql << "select NUM from OPORA where OPORA_ID = :OPORA_ID", soci::into (NUM, ind), soci::use(point_id); 
		if (ind == soci::i_ok)
            {
			std::cout << "The point NUM is " << NUM << '\n';
            }
            else
            {
			std:: cout << "There is no point for " << point_id << '\n';
            }
		}
*/
	  	std::cout << "\nSeveral rows selection (RecCount >1)" ;
	 while (get_Point_id(point_id))
		 {
		std::string NUM; soci::indicator ind;
    //--Вот здесь вся хуйня в () скобках, а без них НЕА!!!:
		soci::rowset<soci::row> rs = (sql.prepare << "select OPORA_ID,NUM ,x ,y ,STATUS_OPORA , DESCRIPTION from OPORA where ID_BLOCK = :ID_BLOCK ", soci::use(point_id) );
		for (soci::rowset<soci::row>::const_iterator it = rs.begin(); it != rs.end(); ++it)
          {
		  soci::row const& r = *it; // dynamic data extraction from каждой записи (row, рядa):
          
		if (r.get_indicator(0) ==0) std::cout << "\n id "<<r.get<int>(0);
		if (r.get_indicator(1) ==0) std::cout << " NUM "<<r.get<std::string>(1);
		if (r.get_indicator(2) ==0) std::cout << " y "<<r.get<double>(2);
		if (r.get_indicator(3) ==0)	std::cout << " y "<<r.get<double>(3);
		if (r.get_indicator(4) ==0) std::cout << " st= "<<r.get<int>(4);
		if (r.get_indicator(5) ==0) std::cout << " descr= "<<r.get<std::string>(5);		
			
			}
		 }
     sql.close();
	printf("\n .....Disconnect");
	}
//------------------------------------------------------------------------------------------
/*
   int pr_error (long *, char *);
   void  Connect2Base(char* server,char* dbname, char* uname, char* upasswrd)
   {
	   static char *create_tbl  = "CREATE TABLE dbinfo (when_created DATE)";
    static char *insert_date = "INSERT INTO dbinfo VALUES ('NOW')";
    isc_db_handle   dbHandle = NULL;         // database handle 
    isc_tr_handle   trans = NULL;          // transaction handle 
    ISC_STATUS_ARRAY status;               // status vector 
    long            sqlcode;               // SQLCODE  
    char            create_db[160];        // 'create database' statement 
    char            new_dbname[128];


  if 	  (isc_attach_database(status, 0, dbname, &dbHandle, 0, NULL))
  {

	  isc_start_transaction(status, &trans, 1, &dbHandle, 0, NULL);
	  isc_detach_database(status, &dbHandle);

  }
   }
*/
//----------------ibpp ---------------------------------------------------
 int Test_ibpp()
 {
 

//   IBPP::Service svc = IBPP::ServiceFactory("127.0.0.1", "sysdba","masterkey");


  IBPP::Database DB_ibpp;
  printf("\n Connecting to " FTEO_DB_LOCAL);
  //DB_ibpp = IBPP::DatabaseFactory("192.168.0.4",FTEO_DB_SERVER,"sysdba","masterkey", "", "WIN1251","PAGE_SIZE 8192 DEFAULT CHARACTER SET WIN1251");
  DB_ibpp = IBPP::DatabaseFactory("127.0.0.1",FTEO_DB_LOCAL,"sysdba","masterkey", "", "WIN1251","PAGE_SIZE 8192 DEFAULT CHARACTER SET WIN1251");
	 DB_ibpp->Connect();
	 if (DB_ibpp->Connected())
		 {
		 printf("\n Connect ok" FTEO_DB_LOCAL);
		 int Major, Minor, PageSize, Pages, Buffers, Sweep;
	     bool Sync, Reserve;
		 DB_ibpp->Info(&Major, &Minor, &PageSize, &Pages, &Buffers, &Sweep, &Sync, &Reserve);
	
		 
	printf("\n           ODS Major %d\n", Major);
	printf("           ODS Minor %d\n", Minor);
	printf("           Page Size %d\n", PageSize);
	printf("           Pages     %d\n", Pages);
	printf("           Buffers   %d\n", Buffers);
	printf("           Sweep     %d\n", Sweep);
	printf("           Reserve   %s\n", Reserve ? _("true") : _("false"));

    printf("\n Create transaction");
	IBPP::Transaction tr1 = IBPP::TransactionFactory(DB_ibpp, IBPP::amWrite,IBPP::ilConcurrency, IBPP::lrWait, IBPP::tfNoAutoUndo);
       tr1->Start();
	IBPP::Statement st1 = IBPP::StatementFactory(DB_ibpp, tr1);
  	st1->Prepare("select lottable_id, archnum, lotname, kn, DKKPOSITION from lottable where is_child <> 1 order by lottable_id desc");
	st1->Execute();
	
	printf(" %d ",st1->AffectedRows());
	printf("\n Data prepared. Fetching:....\n   ");
	std::cout <<"\n Records count "<< st1->AffectedRows();
	int recs =0;
	while (st1->Fetch())
	{
	recs++;
		double n2, n6;
		int ni2, ni6;
		st1->Get(1, n2);
		std::string ArchNUm;
		std::string KN,dkk;
		st1->Get(2, ArchNUm);
		st1->Get(4, KN);
        st1->Get(5, dkk);
		//st1->Get(2, n6);
		//st1->Get(1, ni2);
		//st1->Get(2, ni6);
		//printf("%g, %g, %d, %d\n", n2);
		//printf("\n%d", n2);
		std::cout <<"\n id "<<n2 << " "<< ArchNUm;
		std::cout <<"  "<<KN<<dkk;
		
	}
	std::cout <<"\n Total records "<<recs<<"\n Commit transaction";
	 tr1->Commit();
	 DB_ibpp->Disconnect();
	 //std::cin<<"Disconnecting"<<id;
		 
		 }
	 else 
		 {


			 
			 printf("\n Ошибка соединения" FTEO_DB_LOCAL);
		 }
/* Здесь нужна будет опция/clr, иначе не компилит
      using namespace System;
      using namespace Microsoft::Win32;
	  RegistryKey^ rk;
       rk  = Registry::CurrentUser->OpenSubKey("Software", true);
	   if (rk)
		   {
		   //printf(rk->Name);
		   }

	   rk->Close();
*/

	 return 0;
 }

//---------EXAMPLE api6.c---------------------------------------------------------------------------------
 
#define ERREXIT(status, rc)	{isc_print_status(status); return rc;}
#define    DEPTLEN        3
#define    PROJLEN        5
#define    BUFLEN        256
#define    uname        "sysdba"
#define    upasswrd     "masterkey"


   float increase_factor (double budget)
{
    if (budget < 100000L)
        return (float)0.15;
    else if (budget < 500000L)
        return (float)0.10;
    else 
        return (float)0.5;
}


 int Example_api6c()
 {
	

char *sel_str =
    "SELECT proj_id, dept_no, projected_budget \
     FROM proj_dept_budget WHERE fiscal_year = 1994 \
     FOR UPDATE OF projected_budget";

//* This query is executed prior to the positioned update
char *tot_str0 =
    "SELECT SUM(projected_budget) FROM proj_dept_budget WHERE fiscal_year = 1994";
char *tot_str =
    "SELECT projected_budget FROM proj_dept_budget";

 char                dept_no[DEPTLEN + 2];
    char                proj_id[PROJLEN + 2];
    char                upd_str[BUFLEN];
    double              budget;
    double              tot_budget;
    short               flag0 = 0,
                        flag1 = 0,
                        flag2 = 0,
                        flag3 = 0;
    isc_db_handle       DB = NULL;              // Database handle 
    isc_tr_handle       trans = NULL;           // transaction handle 
    ISC_STATUS_ARRAY    status;                 // status vector 
    char                *cursor = "budget";     // dynamic cursor name 
    isc_stmt_handle     stmt = NULL;            // statement handle 
    XSQLDA  *           osqlda;                 // output SQLDA 
    XSQLDA  *           isqlda;                 // input SQLDA 
    long                fetch_stat;
    char                empdb[128];
	
   // if (argc > 1)   strcpy(empdb, argv[1]);    else 
        
		strcpy(empdb, EMPLOY_DB_SERVER);

	char               dpb[48];
    int                i = 0, len;
	// Format the dpb with the user name a password 
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

    if (isc_attach_database(status, 0, empdb, &DB, i, dpb))
    {
        ERREXIT(status, 1)
    }

    
     //    Prepare and execute the first select statement.
     //    Free the statement handle, when done.
     

    if (isc_dsql_allocate_statement(status, &DB, &stmt))
    {
        ERREXIT(status, 1)
    }

    osqlda = (XSQLDA *) malloc(XSQLDA_LENGTH(1));
    osqlda->sqln = 1;
    osqlda->sqld = 1;
    osqlda->version = 1;

    if (isc_start_transaction(status, &trans, 1, &DB, 0, NULL))
    {
        ERREXIT(status, 1)
    }
  // SQL_DIALECT_V6!!!
	if (isc_dsql_prepare(status, &trans, &stmt, 0, tot_str0, SQL_DIALECT_V6, osqlda))
        isc_print_status(status);

	osqlda->sqlvar[0].sqldata = (char *) &budget;
    osqlda->sqlvar[0].sqltype = SQL_DOUBLE + 1;
    osqlda->sqlvar[0].sqllen  = sizeof(budget);
    osqlda->sqlvar[0].sqlind  = &flag3;

    if (isc_dsql_execute(status, &trans, &stmt, 1, NULL))
    {
        ERREXIT(status, 1)
    }

    fetch_stat = isc_dsql_fetch(status, &stmt, 1, osqlda);

	printf("\nTotal budget:  %16.2f\n\n", budget);

    if (isc_dsql_free_statement(status, &stmt, DSQL_close))
    {
        ERREXIT(status, 1)
    }

    if (isc_commit_transaction(status, &trans))
    {
        ERREXIT(status, 1)
    }

    
     //   Prepare and execute the positioned update.
     //    Re-use the statement handle as the select cursor.
     
 
    sprintf(upd_str, "UPDATE proj_dept_budget SET projected_budget = ? \
            WHERE CURRENT OF %s", cursor);

    // Allocate an input SQLDA for the update statement.
    isqlda = (XSQLDA *) malloc(XSQLDA_LENGTH(1));
    isqlda->sqln = isqlda->sqld = 1;
    isqlda->version = 1;

    isqlda->sqlvar[0].sqldata = (char *) &budget;
    isqlda->sqlvar[0].sqltype = SQL_DOUBLE + 1;
    isqlda->sqlvar[0].sqllen  = sizeof(budget);
    isqlda->sqlvar[0].sqlind  = &flag3;
                              
    // Free the output SQLDA, which was used previously.
    free(osqlda);

    // Re-allocate the output SQLDA. 
    osqlda = (XSQLDA *) malloc(XSQLDA_LENGTH(3));
    osqlda->sqln = 3;
    osqlda->sqld = 3;
    osqlda->version = 1;

    osqlda->sqlvar[0].sqldata = proj_id;
    osqlda->sqlvar[0].sqlind  = &flag0;

    osqlda->sqlvar[1].sqldata = dept_no;
    osqlda->sqlvar[1].sqlind  = &flag1;

    osqlda->sqlvar[2].sqldata = (char *) &budget;
    osqlda->sqlvar[2].sqlind  = &flag2;
                              
    if (isc_start_transaction(status, &trans, 1, &DB, 0, NULL))
    {
        ERREXIT(status, 1)
    }

    // Zero the statement handle.
    stmt = NULL;

    if (isc_dsql_allocate_statement(status, &DB, &stmt))
        isc_print_status(status);
    
	if (isc_dsql_prepare(status, &trans, &stmt, 0, sel_str, SQL_DIALECT_V6, osqlda))
        isc_print_status(status);
               
    //Declare the cursor. 
    isc_dsql_set_cursor_name(status, &stmt, cursor, 0);

    if (isc_dsql_execute(status, &trans, &stmt, 1, NULL))
    {
        ERREXIT(status, 1)
    }

    printf("\n%-15s%-10s%-18s%-18s\n\n",
           "PROJ", "DEPT", " CURRENT BUDGET",  "  CHANGED TO");

   
   //   Fetch and update department budgets.
   

	while ((fetch_stat = isc_dsql_fetch(status, &stmt, SQL_DIALECT_V6, osqlda)) == 0)
    {
        // Determine the increase percentage. 
        proj_id[PROJLEN] = '\0';
        dept_no[DEPTLEN] = '\0';
        printf("%-15s%-10s%15.2f", proj_id, dept_no, budget);
        budget = budget + budget * increase_factor(budget);
        printf("%15.2f\n", budget);

        // Increase the budget. 
		isc_dsql_exec_immed2(status, &DB, &trans, 0, upd_str, SQL_DIALECT_V6, isqlda, NULL);

        if (isc_sqlcode(status) == -625)
        {
            printf("\tExceeded budget limit -- not updated.\n");
            continue;
        }
        else
            isc_print_status(status);
    }

    if (fetch_stat != 100L)
    {
        ERREXIT(status, 1)
    }

    if (isc_dsql_free_statement(status, &stmt, DSQL_close))
    {
        ERREXIT(status, 1)
    }

    if (isc_rollback_transaction(status, &trans))
    {
        ERREXIT(status, 1)
    }

    if (isc_detach_database(status, &DB))
    {
        ERREXIT(status, 1)
    }

    free(osqlda);
    free(isqlda);

	
	

 }//END FUNC






   
   int _tmain(int argc, _TCHAR* argv[])
{
  int number;
  setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
  printf("\n ===============================================================================");
  //system("Color 4D");
  printf("\n Firebird test application for {api :: IBPP :: soci}   \n @2017-19  DB Console\n\n\n\"");
  system("Color 5E");
  std::cout << "\n Enter function number: ";
  std::cout << "\n1 Test_ibpp";
  std::cout << "\n2 Test_SOCI::Fteo";
  std::cout << "\n3 Test_api6c (native Firebird)\n";
  std::cout << "\n0 Выход (result := 200)\n";
  printf("\n @2017 Автор здесь: home153@mailru ==============================================");
  std::cin >> number;
  printf("\n \n\n\n");
  //system("Color 6F");
  system("pause");
  switch (number)
    {
    case 0: return 200;
    
	//Connect2Base("192.168.0.4","test_fteo", "SYSDBA","masterkey");
	//Test_SOCI();

  case 1:   Test_ibpp();
  case 2:  Test_SOCI_Fteo();
  case 3:  Example_api6c();
  //case 0:  return 0;
	return 0;
    }
}







