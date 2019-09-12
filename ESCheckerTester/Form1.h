// #include äî clr pragma once è âñåãî áàðàõëà CLR
#include <windows.h>  // áîëüøîé âîïðîñ ïî ýòîìó ôàéëó! WINAPI çäåñü 
//#include <list>
#include "fteo_core.h"
//#include "MyStrMarshal.h"
#include "CLR_baseClasses.h"
#include "StartForm.h"

#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
//using namespace ESCheckerTester;
//    using namespace fteo::;
//    using namespace fteo::api;





          
namespace ESCheckerTester {

  
  // Õåðíÿ âñÿ âîò ýòà ïðèêðûòà íà âðåìÿ:
#ifndef  API_VARIABLES
 #define  API_VARIABLES
 typedef int (WINAPI* LPfn_PointerToFunction)();
 typedef int (*PointerTofnDll_Project_Template)();
 
  #endif




	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
       LPCWSTR SampleDLL; 
       LPCWSTR dllName_;
    private: System::Windows::Forms::ToolStripMenuItem^  mPV06EditorToolStripMenuItem;
    public: 
      String^ dllName; 
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
             dllName_ = L"ESChecker.dll";
             dllName  =  "ESChecker.dll";
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  callLibraryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
    private: System::Windows::Forms::ToolStripStatusLabel^  Label_dllName;

    private: System::Windows::Forms::ToolStripStatusLabel^  StatusLabel_dll_present;

	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ToolStripMenuItem^  openChekingEntityToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mifFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
    private: System::Windows::Forms::ToolStripMenuItem^  îÏðîãðàììåToolStripMenuItem;
    private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
    private: System::Windows::Forms::ToolStripMenuItem^  ñáîðùèêÔàéëîâToolStripMenuItem;
    private: System::Data::DataSet^  dataSet1;
    private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
        System::Windows::Forms::ListViewItem^  listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(L""));
        System::Windows::Forms::ListViewItem^  listViewItem5 = (gcnew System::Windows::Forms::ListViewItem(L""));
        System::Windows::Forms::ListViewItem^  listViewItem6 = (gcnew System::Windows::Forms::ListViewItem(L""));
        System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
        this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
        this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->callLibraryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->openChekingEntityToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->mifFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->ñáîðùèêÔàéëîâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->mPV06EditorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->îÏðîãðàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->listView1 = (gcnew System::Windows::Forms::ListView());
        this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
        this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
        this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
        this->Label_dllName = (gcnew System::Windows::Forms::ToolStripStatusLabel());
        this->StatusLabel_dll_present = (gcnew System::Windows::Forms::ToolStripStatusLabel());
        this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
        this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
        this->dataSet1 = (gcnew System::Data::DataSet());
        this->menuStrip1->SuspendLayout();
        this->statusStrip1->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet1))->BeginInit();
        this->SuspendLayout();
        // 
        // menuStrip1
        // 
        this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->fileToolStripMenuItem, 
          this->callLibraryToolStripMenuItem, this->mPV06EditorToolStripMenuItem, this->helpToolStripMenuItem});
        this->menuStrip1->Location = System::Drawing::Point(0, 0);
        this->menuStrip1->Name = L"menuStrip1";
        this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
        this->menuStrip1->Size = System::Drawing::Size(541, 24);
        this->menuStrip1->TabIndex = 0;
        this->menuStrip1->Text = L"menuStrip1";
        // 
        // fileToolStripMenuItem
        // 
        this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
        this->fileToolStripMenuItem->Size = System::Drawing::Size(45, 20);
        this->fileToolStripMenuItem->Text = L"Close";
        this->fileToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::fileToolStripMenuItem_Click_1);
        // 
        // callLibraryToolStripMenuItem
        // 
        this->callLibraryToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->toolStripMenuItem1, 
          this->openChekingEntityToolStripMenuItem, this->ñáîðùèêÔàéëîâToolStripMenuItem});
        this->callLibraryToolStripMenuItem->Name = L"callLibraryToolStripMenuItem";
        this->callLibraryToolStripMenuItem->Size = System::Drawing::Size(75, 20);
        this->callLibraryToolStripMenuItem->Text = L"Call Library ";
        // 
        // toolStripMenuItem1
        // 
        this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
        this->toolStripMenuItem1->Size = System::Drawing::Size(181, 22);
        this->toolStripMenuItem1->Text = L"ESChecker::Func2";
        this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem1_Click_1);
        // 
        // openChekingEntityToolStripMenuItem
        // 
        this->openChekingEntityToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->mifFileToolStripMenuItem});
        this->openChekingEntityToolStripMenuItem->Name = L"openChekingEntityToolStripMenuItem";
        this->openChekingEntityToolStripMenuItem->Size = System::Drawing::Size(181, 22);
        this->openChekingEntityToolStripMenuItem->Text = L"Open cheking Entity";
        // 
        // mifFileToolStripMenuItem
        // 
        this->mifFileToolStripMenuItem->Name = L"mifFileToolStripMenuItem";
        this->mifFileToolStripMenuItem->Size = System::Drawing::Size(116, 22);
        this->mifFileToolStripMenuItem->Text = L"mif file";
        // 
        // ñáîðùèêÔàéëîâToolStripMenuItem
        // 
        this->ñáîðùèêÔàéëîâToolStripMenuItem->Name = L"ñáîðùèêÔàéëîâToolStripMenuItem";
        this->ñáîðùèêÔàéëîâToolStripMenuItem->Size = System::Drawing::Size(181, 22);
        this->ñáîðùèêÔàéëîâToolStripMenuItem->Text = L"Ñáîðùèê ôàéëîâ";
        // 
        // mPV06EditorToolStripMenuItem
        // 
        this->mPV06EditorToolStripMenuItem->Name = L"mPV06EditorToolStripMenuItem";
        this->mPV06EditorToolStripMenuItem->Size = System::Drawing::Size(85, 20);
        this->mPV06EditorToolStripMenuItem->Text = L"MP v06 Editor";
        this->mPV06EditorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mPV06EditorToolStripMenuItem_Click);
        // 
        // helpToolStripMenuItem
        // 
        this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->îÏðîãðàììåToolStripMenuItem});
        this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
        this->helpToolStripMenuItem->Size = System::Drawing::Size(40, 20);
        this->helpToolStripMenuItem->Text = L"Help";
        // 
        // îÏðîãðàììåToolStripMenuItem
        // 
        this->îÏðîãðàììåToolStripMenuItem->Name = L"îÏðîãðàììåToolStripMenuItem";
        this->îÏðîãðàììåToolStripMenuItem->Size = System::Drawing::Size(149, 22);
        this->îÏðîãðàììåToolStripMenuItem->Text = L"Î ïðîãðàììå";
        // 
        // listView1
        // 
        this->listView1->BackColor = System::Drawing::SystemColors::Info;
        this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->columnHeader1, this->columnHeader2});
        this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
        this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
          static_cast<System::Byte>(204)));
        this->listView1->FullRowSelect = true;
        this->listView1->GridLines = true;
        this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(3) {listViewItem4, listViewItem5, 
          listViewItem6});
        this->listView1->Location = System::Drawing::Point(0, 24);
        this->listView1->Margin = System::Windows::Forms::Padding(4);
        this->listView1->Name = L"listView1";
        this->listView1->Size = System::Drawing::Size(541, 330);
        this->listView1->TabIndex = 1;
        this->listView1->UseCompatibleStateImageBehavior = false;
        this->listView1->View = System::Windows::Forms::View::Details;
        // 
        // columnHeader1
        // 
        this->columnHeader1->Text = L"Action";
        this->columnHeader1->Width = 140;
        // 
        // columnHeader2
        // 
        this->columnHeader2->Text = L"Status";
        this->columnHeader2->Width = 280;
        // 
        // statusStrip1
        // 
        this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->Label_dllName, 
          this->StatusLabel_dll_present, this->toolStripDropDownButton1});
        this->statusStrip1->Location = System::Drawing::Point(0, 327);
        this->statusStrip1->Name = L"statusStrip1";
        this->statusStrip1->Padding = System::Windows::Forms::Padding(1, 0, 19, 0);
        this->statusStrip1->Size = System::Drawing::Size(541, 27);
        this->statusStrip1->TabIndex = 2;
        this->statusStrip1->Text = L"statusStrip1";
        // 
        // Label_dllName
        // 
        this->Label_dllName->AutoSize = false;
        this->Label_dllName->Name = L"Label_dllName";
        this->Label_dllName->Size = System::Drawing::Size(109, 22);
        this->Label_dllName->Text = L"ESCheker.dll :";
        this->Label_dllName->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
        // 
        // StatusLabel_dll_present
        // 
        this->StatusLabel_dll_present->AutoSize = false;
        this->StatusLabel_dll_present->Name = L"StatusLabel_dll_present";
        this->StatusLabel_dll_present->Size = System::Drawing::Size(109, 22);
        this->StatusLabel_dll_present->Text = L"..";
        // 
        // toolStripDropDownButton1
        // 
        this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
        this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripDropDownButton1.Image")));
        this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
        this->toolStripDropDownButton1->Size = System::Drawing::Size(29, 25);
        this->toolStripDropDownButton1->Text = L"toolStripDropDownButton1";
        // 
        // openFileDialog1
        // 
        this->openFileDialog1->FileName = L"openFileDialog1";
        this->openFileDialog1->Filter = L"*.mif|mif ôàéëû";
        // 
        // dataSet1
        // 
        this->dataSet1->DataSetName = L"NewDataSet";
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(541, 354);
        this->Controls->Add(this->statusStrip1);
        this->Controls->Add(this->listView1);
        this->Controls->Add(this->menuStrip1);
        this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
          static_cast<System::Byte>(204)));
        this->Location = System::Drawing::Point(500, 500);
        this->MainMenuStrip = this->menuStrip1;
        this->Margin = System::Windows::Forms::Padding(4);
        this->Name = L"Form1";
        this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
        this->Text = L"ESCheker testing application";
        this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
        this->Shown += gcnew System::EventHandler(this, &Form1::Form1_Shown);
        this->menuStrip1->ResumeLayout(false);
        this->menuStrip1->PerformLayout();
        this->statusStrip1->ResumeLayout(false);
        this->statusStrip1->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet1))->EndInit();
        this->ResumeLayout(false);
        this->PerformLayout();

          }
#pragma endregion


#pragma region Self produced code
	
private: System::Void ClearControls() 
		 {
			// listView1->Clear();
			 listView1->Items->Clear();
		 }

private: System::Void Form1_Shown(System::Object^  sender, System::EventArgs^  e) {
			 
			 Label_dllName->Text = dllName;
             if (System::IO::File::Exists(dllName))// "Dll_Project_Template.dll"))
			 {
                StatusLabel_dll_present->Text = "Íàéäåíà";
			 }
			 else 
			 { 
				StatusLabel_dll_present->Text = "îòñóòñòâóåò";
			 }
		 
		 }




private: System::Void OpenFile() 
		 {
			ClearControls();
			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
			 {
			System::Windows::Forms::ListViewItem^ LVI = listView1->Items->Add("File to check");
			LVI->SubItems->Add(openFileDialog1->FileName->ToString());
			 }
		 }

///-----------------------Âûçîâ dll-----------------------------
private: System::Void callLibrary() 
		 {
          ClearControls();			 
		 //Ýòî ðàáî÷èé âàðèàíò 
		 LPCSTR fncName   = "ESCheck";
		 LPCSTR fncName2  = "Func2";
		 LPCSTR fncName21 = "Func21";		  
    typedef  fteo::api::TMyPoint* (WINAPI* LPfn_Function2)();		 
	typedef  fteo::api::TMyPoint* (*LPFunc21) (int value_id, char *name);	//Íîâûé òèï - óêàçàòåëü íà ôóíêöèþ	 
	
         HMODULE hMod_L = LoadLibrary(this->dllName_);
	     // À âîò åùå îäèí, è òîæå ðàáî÷èé:
         //HMODULE hMod = LoadLibrary(TEXT("Dll_Project_Template.dll"));

       if (hMod_L != NULL)
         {
   		   StatusLabel_dll_present->Text = "ok";
		   LPfn_Function2               PSampleFunction2  = (LPfn_Function2) GetProcAddress(hMod_L,fncName2);

         
		   LPfn_PointerToFunction       PSampleFunction1  = (LPfn_PointerToFunction) GetProcAddress(hMod_L,fncName);
           LPFunc21  func21 = (LPFunc21) GetProcAddress(hMod_L,fncName21);
		   fteo::api::TMyPoint *testPoint =   func21(65535, "Ìîÿ òî÷êà â dll");

       if (PSampleFunction1 != NULL)
         {
			 listView1->Items->Add("ESCheck")->SubItems->Add("ok");
             listView1->Items->Add("Result" )->SubItems->Add(""+PSampleFunction1());
         }
         
			 listView1->Items->Add("   ");         
             if (func21)
               {
        	      listView1->Items->Add("Func21")->SubItems->Add("ok");
                  listView1->Items->Add("Name"  )->SubItems->Add(fteo::NET::CharToString(testPoint->Name));
                  listView1->Items->Add("id"    )->SubItems->Add(testPoint->id.ToString());                                                   
			      listView1->Items->Add("Description")->SubItems->Add(fteo::NET::CharToString(testPoint->Description));
               }
       	 
			// netFteo::IO::TextWriter::SaveAsFixosoftTXT2015("Sample", nul);
 			// netFteo::BaseClasess::Geodethic::LinesIntersect();
        FreeLibrary(hMod_L);
            
	   } 
        else 
	   {
   		 StatusLabel_dll_present->Text = "Íå íàéäåíà";		 
	   }
		   }
			 
		 
		 

#pragma endregion

private: System::Void fileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {	 this->Close();	 }

private: System::Void callLibraryToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void mifFileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenFile();
		 }

private: System::Void ñáîðùèêÔàéëîâToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
          // FileCopierfrm^ ff = gcnew FileCopierfrm();
          // ff->ShowDialog(this);
           }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
           }
private: System::Void fileToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
           this->Close();
           }
private: System::Void toolStripMenuItem1_Click_1(System::Object^  sender, System::EventArgs^  e) {
           callLibrary();
           }
private: System::Void mPV06EditorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
           StartForm^  ff = gcnew StartForm();
           ff->ShowDialog(this);

         }
};
}

