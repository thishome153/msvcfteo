#include "AppCfg.h"
#include "ClientUtils.h"
#include "esviewer.h" // core win32++

#include "OptionsForm.h"
#include "OporaForm.h"
#include "ContourEditorForm.h"
#include "wzCadworkEditor.h"
#include "FS2_About.h"


//#include <winbase.h>

#pragma once




using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace fteo;

namespace FteoDBForms {

	/// <summary>
	/// Summary for MainForm
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		fteo::NET::wr_TWork^ CurrentWork;
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripProgressBar^ toolStripProgressBar1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ Ù‡ÈÎToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚˚ıÓ‰ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÏÓ‰ÛÎËToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ÚÓ˜ÍËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Â‰‡ÍÚÓ ÓÌÚÛÓ‚ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÒÂ‚ËÒToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Ì‡ÒÚÓÈÍËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ ÏÓ‰ÛÎËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sQLTest1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ ÔÓÏÓ˘¸ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AboutMenuItem;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;

	public: OptionsForm^ Ofrm;
	public: OporaForm^ Oporafrm;
	public: ContourEditorForm^ Cntfrm;

	public: fteo::NET::wr_TWorks^ CW_New;
	public: fteo::NET::wr_TWorks^ CW_Div;
	public: fteo::NET::wr_TWorks^ CW_Part;
	public: fteo::NET::wr_TWorks^ CW_DG;
	public: fteo::NET::wr_TWorks^ CW_UN;
	public: fteo::NET::wr_TWorks^ CW_REP;
	public: fteo::NET::wr_TWorks^ CW_ExA;
	public: fteo::NET::wr_TWorks^ CW_ExS;
	public: fteo::NET::wr_TWorks^ CW_Def;
	public: fteo::NET::wr_TWorks^ CW_NewBuild;
	public: fteo::NET::wr_TWorks^ CW_Zone;
	public: fteo::NET::wr_TWorks^ CW_None;

	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	public:
	private: System::Windows::Forms::ToolStripButton^ toolStrip_Button_Points;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::ContextMenuStrip^ Mainfrm_contextMenu1;
	private: System::Windows::Forms::ToolStripMenuItem^ ÚÓ˜ÍËToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ Ò‚ÓÈÒÚ‚‡ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton6;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton7;
	private: System::Windows::Forms::ToolStripButton^ Button_OpenFile;
	private: System::Windows::Forms::ToolStripMenuItem^ ÓÚÍ˚Ú¸ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton8;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton_Sign;
	private: System::Windows::Forms::ToolStripMenuItem^ signFileToolStripMenuItem;



	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator5;

			 //                public: array<wr_TWorks^>^ AllWorks = gcnew array<wr_TWorks^>(11);

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
			 void InitializeComponent(void)
			 {
				 this->components = (gcnew System::ComponentModel::Container());
				 System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
				 this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
				 this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
				 this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
				 this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
				 this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
				 this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
				 this->Ù‡ÈÎToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->‚˚ıÓ‰ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->ÓÚÍ˚Ú¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->ÏÓ‰ÛÎËToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->ÚÓ˜ÍËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->Â‰‡ÍÚÓ ÓÌÚÛÓ‚ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->Ò‚ÓÈÒÚ‚‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->ÒÂ‚ËÒToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->Ì‡ÒÚÓÈÍËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
				 this->ÏÓ‰ÛÎËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->sQLTest1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->ÔÓÏÓ˘¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->AboutMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
				 this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
				 this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
				 this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
				 this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
				 this->toolStrip_Button_Points = (gcnew System::Windows::Forms::ToolStripButton());
				 this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
				 this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
				 this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
				 this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
				 this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
				 this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
				 this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
				 this->Button_OpenFile = (gcnew System::Windows::Forms::ToolStripButton());
				 this->toolStripButton8 = (gcnew System::Windows::Forms::ToolStripButton());
				 this->toolStripButton_Sign = (gcnew System::Windows::Forms::ToolStripButton());
				 this->treeView1 = (gcnew System::Windows::Forms::TreeView());
				 this->Mainfrm_contextMenu1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
				 this->ÚÓ˜ÍËToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->signFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->statusStrip1->SuspendLayout();
				 this->menuStrip1->SuspendLayout();
				 this->toolStrip1->SuspendLayout();
				 this->Mainfrm_contextMenu1->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // statusStrip1
				 // 
				 this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
					 this->toolStripStatusLabel1,
						 this->toolStripStatusLabel2, this->toolStripStatusLabel3, this->toolStripProgressBar1
				 });
				 this->statusStrip1->Location = System::Drawing::Point(0, 352);
				 this->statusStrip1->Name = L"statusStrip1";
				 this->statusStrip1->Size = System::Drawing::Size(593, 22);
				 this->statusStrip1->TabIndex = 4;
				 this->statusStrip1->Text = L"statusStrip1";
				 // 
				 // toolStripStatusLabel1
				 // 
				 this->toolStripStatusLabel1->AutoSize = false;
				 this->toolStripStatusLabel1->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
					 | System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
					 | System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
				 this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
				 this->toolStripStatusLabel1->Size = System::Drawing::Size(109, 17);
				 this->toolStripStatusLabel1->Text = L"...";
				 // 
				 // toolStripStatusLabel2
				 // 
				 this->toolStripStatusLabel2->AutoSize = false;
				 this->toolStripStatusLabel2->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
					 | System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
					 | System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
				 this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
				 this->toolStripStatusLabel2->Size = System::Drawing::Size(150, 17);
				 this->toolStripStatusLabel2->Text = L".......";
				 // 
				 // toolStripStatusLabel3
				 // 
				 this->toolStripStatusLabel3->AutoSize = false;
				 this->toolStripStatusLabel3->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
					 | System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
					 | System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
				 this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
				 this->toolStripStatusLabel3->Size = System::Drawing::Size(280, 17);
				 this->toolStripStatusLabel3->Text = L"..";
				 // 
				 // toolStripProgressBar1
				 // 
				 this->toolStripProgressBar1->AutoSize = false;
				 this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
				 this->toolStripProgressBar1->Size = System::Drawing::Size(30, 16);
				 // 
				 // menuStrip1
				 // 
				 this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
					 this->Ù‡ÈÎToolStripMenuItem,
						 this->ÏÓ‰ÛÎËToolStripMenuItem1, this->ÒÂ‚ËÒToolStripMenuItem, this->ÔÓÏÓ˘¸ToolStripMenuItem
				 });
				 this->menuStrip1->Location = System::Drawing::Point(0, 0);
				 this->menuStrip1->Name = L"menuStrip1";
				 this->menuStrip1->Size = System::Drawing::Size(593, 24);
				 this->menuStrip1->TabIndex = 3;
				 this->menuStrip1->Text = L"menuStrip1";
				 // 
				 // Ù‡ÈÎToolStripMenuItem
				 // 
				 this->Ù‡ÈÎToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
					 this->toolStripMenuItem1,
						 this->toolStripMenuItem2, this->ÓÚÍ˚Ú¸ToolStripMenuItem, this->‚˚ıÓ‰ToolStripMenuItem
				 });
				 this->Ù‡ÈÎToolStripMenuItem->Name = L"Ù‡ÈÎToolStripMenuItem";
				 this->Ù‡ÈÎToolStripMenuItem->Size = System::Drawing::Size(48, 20);
				 this->Ù‡ÈÎToolStripMenuItem->Text = L"‘‡ÈÎ";
				 // 
				 // toolStripMenuItem1
				 // 
				 this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
				 this->toolStripMenuItem1->Size = System::Drawing::Size(188, 22);
				 this->toolStripMenuItem1->Text = L"œÓ‰ÍÎ˛˜ËÚ¸....";
				 this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::toolStripMenuItem1_Click_1);
				 // 
				 // toolStripMenuItem2
				 // 
				 this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
				 this->toolStripMenuItem2->Size = System::Drawing::Size(188, 22);
				 this->toolStripMenuItem2->Text = L"—·ÓÒ ÔÓ‰ÍÎ˛˜ÂÌËˇ";
				 this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainForm::toolStripMenuItem2_Click);
				 // 
				 // ‚˚ıÓ‰ToolStripMenuItem
				 // 
				 this->‚˚ıÓ‰ToolStripMenuItem->Name = L"‚˚ıÓ‰ToolStripMenuItem";
				 this->‚˚ıÓ‰ToolStripMenuItem->Size = System::Drawing::Size(188, 22);
				 this->‚˚ıÓ‰ToolStripMenuItem->Text = L"¬˚ıÓ‰";
				 this->‚˚ıÓ‰ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::‚˚ıÓ‰ToolStripMenuItem_Click);
				 // 
				 // ÓÚÍ˚Ú¸ToolStripMenuItem
				 // 
				 this->ÓÚÍ˚Ú¸ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ÓÚÍ˚Ú¸ToolStripMenuItem.Image")));
				 this->ÓÚÍ˚Ú¸ToolStripMenuItem->Name = L"ÓÚÍ˚Ú¸ToolStripMenuItem";
				 this->ÓÚÍ˚Ú¸ToolStripMenuItem->Size = System::Drawing::Size(188, 22);
				 this->ÓÚÍ˚Ú¸ToolStripMenuItem->Text = L"ŒÚÍ˚Ú¸";
				 this->ÓÚÍ˚Ú¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ÓÚÍ˚Ú¸ToolStripMenuItem_Click);
				 // 
				 // ÏÓ‰ÛÎËToolStripMenuItem1
				 // 
				 this->ÏÓ‰ÛÎËToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					 this->ÚÓ˜ÍËToolStripMenuItem,
						 this->Â‰‡ÍÚÓ ÓÌÚÛÓ‚ToolStripMenuItem, this->Ò‚ÓÈÒÚ‚‡ToolStripMenuItem
				 });
				 this->ÏÓ‰ÛÎËToolStripMenuItem1->Name = L"ÏÓ‰ÛÎËToolStripMenuItem1";
				 this->ÏÓ‰ÛÎËToolStripMenuItem1->Size = System::Drawing::Size(63, 20);
				 this->ÏÓ‰ÛÎËToolStripMenuItem1->Text = L"ÃÓ‰ÛÎË";
				 // 
				 // ÚÓ˜ÍËToolStripMenuItem
				 // 
				 this->ÚÓ˜ÍËToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ÚÓ˜ÍËToolStripMenuItem.Image")));
				 this->ÚÓ˜ÍËToolStripMenuItem->Name = L"ÚÓ˜ÍËToolStripMenuItem";
				 this->ÚÓ˜ÍËToolStripMenuItem->Size = System::Drawing::Size(178, 22);
				 this->ÚÓ˜ÍËToolStripMenuItem->Text = L"“Ó˜ÍË";
				 this->ÚÓ˜ÍËToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ÚÓ˜ÍËToolStripMenuItem_Click);
				 // 
				 // Â‰‡ÍÚÓ ÓÌÚÛÓ‚ToolStripMenuItem
				 // 
				 this->Â‰‡ÍÚÓ ÓÌÚÛÓ‚ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Â‰‡ÍÚÓ ÓÌÚÛÓ‚ToolStripMenuItem.Image")));
				 this->Â‰‡ÍÚÓ ÓÌÚÛÓ‚ToolStripMenuItem->Name = L"Â‰‡ÍÚÓ ÓÌÚÛÓ‚ToolStripMenuItem";
				 this->Â‰‡ÍÚÓ ÓÌÚÛÓ‚ToolStripMenuItem->Size = System::Drawing::Size(178, 22);
				 this->Â‰‡ÍÚÓ ÓÌÚÛÓ‚ToolStripMenuItem->Text = L"–Â‰‡ÍÚÓ ÍÓÌÚÛÓ‚";
				 this->Â‰‡ÍÚÓ ÓÌÚÛÓ‚ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::Â‰‡ÍÚÓ ÓÌÚÛÓ‚ToolStripMenuItem_Click);
				 // 
				 // Ò‚ÓÈÒÚ‚‡ToolStripMenuItem
				 // 
				 this->Ò‚ÓÈÒÚ‚‡ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ò‚ÓÈÒÚ‚‡ToolStripMenuItem.Image")));
				 this->Ò‚ÓÈÒÚ‚‡ToolStripMenuItem->Name = L"Ò‚ÓÈÒÚ‚‡ToolStripMenuItem";
				 this->Ò‚ÓÈÒÚ‚‡ToolStripMenuItem->Size = System::Drawing::Size(178, 22);
				 this->Ò‚ÓÈÒÚ‚‡ToolStripMenuItem->Text = L"—‚ÓÈÒÚ‚‡";
				 // 
				 // ÒÂ‚ËÒToolStripMenuItem
				 // 
				 this->ÒÂ‚ËÒToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					 this->Ì‡ÒÚÓÈÍËToolStripMenuItem,
						 this->toolStripSeparator1, this->ÏÓ‰ÛÎËToolStripMenuItem
				 });
				 this->ÒÂ‚ËÒToolStripMenuItem->Name = L"ÒÂ‚ËÒToolStripMenuItem";
				 this->ÒÂ‚ËÒToolStripMenuItem->Size = System::Drawing::Size(59, 20);
				 this->ÒÂ‚ËÒToolStripMenuItem->Text = L"—Â‚ËÒ";
				 // 
				 // Ì‡ÒÚÓÈÍËToolStripMenuItem
				 // 
				 this->Ì‡ÒÚÓÈÍËToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ì‡ÒÚÓÈÍËToolStripMenuItem.Image")));
				 this->Ì‡ÒÚÓÈÍËToolStripMenuItem->Name = L"Ì‡ÒÚÓÈÍËToolStripMenuItem";
				 this->Ì‡ÒÚÓÈÍËToolStripMenuItem->Size = System::Drawing::Size(134, 22);
				 this->Ì‡ÒÚÓÈÍËToolStripMenuItem->Text = L"Õ‡ÒÚÓÈÍË";
				 this->Ì‡ÒÚÓÈÍËToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::Ì‡ÒÚÓÈÍËToolStripMenuItem_Click);
				 // 
				 // toolStripSeparator1
				 // 
				 this->toolStripSeparator1->Name = L"toolStripSeparator1";
				 this->toolStripSeparator1->Size = System::Drawing::Size(131, 6);
				 // 
				 // ÏÓ‰ÛÎËToolStripMenuItem
				 // 
				 this->ÏÓ‰ÛÎËToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					 this->sQLTest1ToolStripMenuItem,
						 this->toolStripMenuItem4, this->signFileToolStripMenuItem
				 });
				 this->ÏÓ‰ÛÎËToolStripMenuItem->Name = L"ÏÓ‰ÛÎËToolStripMenuItem";
				 this->ÏÓ‰ÛÎËToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				 this->ÏÓ‰ÛÎËToolStripMenuItem->Text = L"Debug";
				 // 
				 // sQLTest1ToolStripMenuItem
				 // 
				 this->sQLTest1ToolStripMenuItem->Name = L"sQLTest1ToolStripMenuItem";
				 this->sQLTest1ToolStripMenuItem->Size = System::Drawing::Size(135, 22);
				 this->sQLTest1ToolStripMenuItem->Text = L"SQL Test #1";
				 // 
				 // toolStripMenuItem4
				 // 
				 this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
				 this->toolStripMenuItem4->Size = System::Drawing::Size(135, 22);
				 this->toolStripMenuItem4->Text = L"1";
				 // 
				 // ÔÓÏÓ˘¸ToolStripMenuItem
				 // 
				 this->ÔÓÏÓ˘¸ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->AboutMenuItem });
				 this->ÔÓÏÓ˘¸ToolStripMenuItem->Name = L"ÔÓÏÓ˘¸ToolStripMenuItem";
				 this->ÔÓÏÓ˘¸ToolStripMenuItem->Size = System::Drawing::Size(68, 20);
				 this->ÔÓÏÓ˘¸ToolStripMenuItem->Text = L"œÓÏÓ˘¸";
				 // 
				 // AboutMenuItem
				 // 
				 this->AboutMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AboutMenuItem.Image")));
				 this->AboutMenuItem->Name = L"AboutMenuItem";
				 this->AboutMenuItem->Size = System::Drawing::Size(149, 22);
				 this->AboutMenuItem->Text = L"Œ ÔÓ„‡ÏÏÂ";
				 this->AboutMenuItem->Click += gcnew System::EventHandler(this, &MainForm::AboutMenuItem_Click);
				 // 
				 // toolStrip1
				 // 
				 this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(15) {
					 this->toolStripButton1,
						 this->toolStripSeparator2, this->toolStripButton3, this->toolStripSeparator4, this->toolStrip_Button_Points, this->toolStripButton5,
						 this->toolStripButton6, this->toolStripSeparator3, this->toolStripButton2, this->toolStripSeparator5, this->toolStripButton4,
						 this->toolStripButton7, this->Button_OpenFile, this->toolStripButton8, this->toolStripButton_Sign
				 });
				 this->toolStrip1->Location = System::Drawing::Point(0, 24);
				 this->toolStrip1->Name = L"toolStrip1";
				 this->toolStrip1->Size = System::Drawing::Size(593, 25);
				 this->toolStrip1->TabIndex = 5;
				 this->toolStrip1->Text = L"toolStrip1";
				 // 
				 // toolStripButton1
				 // 
				 this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
				 this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
				 this->toolStripButton1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
				 this->toolStripButton1->Name = L"toolStripButton1";
				 this->toolStripButton1->Size = System::Drawing::Size(23, 22);
				 this->toolStripButton1->Text = L"«‡Í˚Ú¸";
				 this->toolStripButton1->Click += gcnew System::EventHandler(this, &MainForm::toolStripButton1_Click);
				 // 
				 // toolStripSeparator2
				 // 
				 this->toolStripSeparator2->AutoSize = false;
				 this->toolStripSeparator2->Name = L"toolStripSeparator2";
				 this->toolStripSeparator2->Size = System::Drawing::Size(20, 25);
				 // 
				 // toolStripButton3
				 // 
				 this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
				 this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
				 this->toolStripButton3->Name = L"toolStripButton3";
				 this->toolStripButton3->Size = System::Drawing::Size(86, 22);
				 this->toolStripButton3->Text = L"—ÓÂ‰ËÌËÚ¸";
				 this->toolStripButton3->Click += gcnew System::EventHandler(this, &MainForm::toolStripButton3_Click);
				 // 
				 // toolStripSeparator4
				 // 
				 this->toolStripSeparator4->Name = L"toolStripSeparator4";
				 this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
				 // 
				 // toolStrip_Button_Points
				 // 
				 this->toolStrip_Button_Points->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
				 this->toolStrip_Button_Points->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStrip_Button_Points.Image")));
				 this->toolStrip_Button_Points->ImageTransparentColor = System::Drawing::Color::Magenta;
				 this->toolStrip_Button_Points->Name = L"toolStrip_Button_Points";
				 this->toolStrip_Button_Points->Size = System::Drawing::Size(23, 22);
				 this->toolStrip_Button_Points->Text = L"“Ó˜ÍË";
				 this->toolStrip_Button_Points->ToolTipText = L"“Ó˜ÍË";
				 this->toolStrip_Button_Points->Click += gcnew System::EventHandler(this, &MainForm::toolStrip_Button_Points_Click);
				 // 
				 // toolStripButton5
				 // 
				 this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
				 this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
				 this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
				 this->toolStripButton5->Name = L"toolStripButton5";
				 this->toolStripButton5->Size = System::Drawing::Size(23, 22);
				 this->toolStripButton5->Text = L"—‚ÓÈÒÚ‚‡";
				 this->toolStripButton5->Click += gcnew System::EventHandler(this, &MainForm::toolStripButton5_Click);
				 // 
				 // toolStripButton6
				 // 
				 this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
				 this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
				 this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
				 this->toolStripButton6->Name = L"toolStripButton6";
				 this->toolStripButton6->Size = System::Drawing::Size(23, 22);
				 this->toolStripButton6->Text = L"CE";
				 this->toolStripButton6->ToolTipText = L"–Â‰‡ÍÚÓ ÍÓÌÚÛÓ‚";
				 this->toolStripButton6->Click += gcnew System::EventHandler(this, &MainForm::toolStripButton6_Click);
				 // 
				 // toolStripSeparator3
				 // 
				 this->toolStripSeparator3->AutoSize = false;
				 this->toolStripSeparator3->Name = L"toolStripSeparator3";
				 this->toolStripSeparator3->Size = System::Drawing::Size(10, 25);
				 // 
				 // toolStripButton2
				 // 
				 this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
				 this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
				 this->toolStripButton2->Name = L"toolStripButton2";
				 this->toolStripButton2->Size = System::Drawing::Size(83, 22);
				 this->toolStripButton2->Text = L"Õ‡ÒÚÓÈÍi";
				 this->toolStripButton2->Click += gcnew System::EventHandler(this, &MainForm::toolStripButton2_Click);
				 // 
				 // toolStripSeparator5
				 // 
				 this->toolStripSeparator5->Name = L"toolStripSeparator5";
				 this->toolStripSeparator5->Size = System::Drawing::Size(6, 25);
				 // 
				 // toolStripButton4
				 // 
				 this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
				 this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
				 this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
				 this->toolStripButton4->Name = L"toolStripButton4";
				 this->toolStripButton4->Size = System::Drawing::Size(23, 22);
				 this->toolStripButton4->Text = L"Œ  ÔÓ„‡ÏÏÂ";
				 this->toolStripButton4->Click += gcnew System::EventHandler(this, &MainForm::toolStripButton4_Click);
				 // 
				 // toolStripButton7
				 // 
				 this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
				 this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton7.Image")));
				 this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
				 this->toolStripButton7->Name = L"toolStripButton7";
				 this->toolStripButton7->Size = System::Drawing::Size(23, 22);
				 this->toolStripButton7->Text = L"ES Viewer (win32++)";
				 this->toolStripButton7->Click += gcnew System::EventHandler(this, &MainForm::toolStripButton7_Click);
				 // 
				 // Button_OpenFile
				 // 
				 this->Button_OpenFile->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
				 this->Button_OpenFile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button_OpenFile.Image")));
				 this->Button_OpenFile->ImageTransparentColor = System::Drawing::Color::Magenta;
				 this->Button_OpenFile->Name = L"Button_OpenFile";
				 this->Button_OpenFile->Size = System::Drawing::Size(23, 22);
				 this->Button_OpenFile->Text = L"ŒÚÍ˚Ú¸";
				 this->Button_OpenFile->ToolTipText = L"ŒÚÍ˚Ú¸";
				 this->Button_OpenFile->Click += gcnew System::EventHandler(this, &MainForm::Button_OpenFile_Click);
				 // 
				 // toolStripButton8
				 // 
				 this->toolStripButton8->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
				 this->toolStripButton8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton8.Image")));
				 this->toolStripButton8->ImageTransparentColor = System::Drawing::Color::Magenta;
				 this->toolStripButton8->Name = L"toolStripButton8";
				 this->toolStripButton8->Size = System::Drawing::Size(23, 22);
				 this->toolStripButton8->Text = L"toolStripButton8";
				 this->toolStripButton8->ToolTipText = L"—Óı‡ÌËÚ¸ xml";
				 this->toolStripButton8->Click += gcnew System::EventHandler(this, &MainForm::toolStripButton8_Click);
				 // 
				 // toolStripButton_Sign
				 // 
				 this->toolStripButton_Sign->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
				 this->toolStripButton_Sign->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton_Sign.Image")));
				 this->toolStripButton_Sign->ImageTransparentColor = System::Drawing::Color::Magenta;
				 this->toolStripButton_Sign->Name = L"toolStripButton_Sign";
				 this->toolStripButton_Sign->Size = System::Drawing::Size(23, 22);
				 this->toolStripButton_Sign->Text = L"toolStripButton_Sign";
				 this->toolStripButton_Sign->ToolTipText = L"Sign file";
				 this->toolStripButton_Sign->Click += gcnew System::EventHandler(this, &MainForm::ToolStripButton_Sign_Click);
				 // 
				 // treeView1
				 // 
				 this->treeView1->BackColor = System::Drawing::Color::MediumSlateBlue;
				 this->treeView1->ContextMenuStrip = this->Mainfrm_contextMenu1;
				 this->treeView1->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->treeView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->treeView1->ForeColor = System::Drawing::Color::White;
				 this->treeView1->Location = System::Drawing::Point(0, 49);
				 this->treeView1->Name = L"treeView1";
				 this->treeView1->Size = System::Drawing::Size(593, 303);
				 this->treeView1->TabIndex = 6;
				 this->treeView1->Click += gcnew System::EventHandler(this, &MainForm::treeView1_Click);
				 this->treeView1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::treeView1_KeyUp);
				 // 
				 // Mainfrm_contextMenu1
				 // 
				 this->Mainfrm_contextMenu1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ÚÓ˜ÍËToolStripMenuItem1 });
				 this->Mainfrm_contextMenu1->Name = L"Mainfrm_contextMenu1";
				 this->Mainfrm_contextMenu1->Size = System::Drawing::Size(109, 26);
				 // 
				 // ÚÓ˜ÍËToolStripMenuItem1
				 // 
				 this->ÚÓ˜ÍËToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ÚÓ˜ÍËToolStripMenuItem1.Image")));
				 this->ÚÓ˜ÍËToolStripMenuItem1->Name = L"ÚÓ˜ÍËToolStripMenuItem1";
				 this->ÚÓ˜ÍËToolStripMenuItem1->Size = System::Drawing::Size(108, 22);
				 this->ÚÓ˜ÍËToolStripMenuItem1->Text = L"“Ó˜ÍË";
				 this->ÚÓ˜ÍËToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::ÚÓ˜ÍËToolStripMenuItem1_Click);
				 // 
				 // signFileToolStripMenuItem
				 // 
				 this->signFileToolStripMenuItem->Name = L"signFileToolStripMenuItem";
				 this->signFileToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				 this->signFileToolStripMenuItem->Text = L"Sign file";
				 this->signFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::SignFileToolStripMenuItem_Click);
				 // 
				 // MainForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(593, 374);
				 this->Controls->Add(this->treeView1);
				 this->Controls->Add(this->toolStrip1);
				 this->Controls->Add(this->statusStrip1);
				 this->Controls->Add(this->menuStrip1);
				 this->MinimumSize = System::Drawing::Size(600, 400);
				 this->Name = L"MainForm";
				 this->Text = L"MainForm";
				 this->Activated += gcnew System::EventHandler(this, &MainForm::MainForm_Activated);
				 this->Shown += gcnew System::EventHandler(this, &MainForm::MainForm_Shown);
				 this->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MainForm::MainForm_Validating_1);
				 this->statusStrip1->ResumeLayout(false);
				 this->statusStrip1->PerformLayout();
				 this->menuStrip1->ResumeLayout(false);
				 this->menuStrip1->PerformLayout();
				 this->toolStrip1->ResumeLayout(false);
				 this->toolStrip1->PerformLayout();
				 this->Mainfrm_contextMenu1->ResumeLayout(false);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//       Form1^ bad = gcnew Form1();
		 //      bad->ShowDialog(this);
	}
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		Disconnect();
		this->Close();
	}

	private: System::Object^ ChangeItem(TreeNode^ Node_)
	{
		if (!Node_) return nullptr;
		statusStrip1->Items[2]->Text = "";
		if (Node_->Tag)
		{
			System::Object^ O = Node_->Tag;
			if (O->GetType()->FullName == "fteo.NET.wr_TWork")
			{
				fteo::NET::wr_TWork^ Here = gcnew  fteo::NET::wr_TWork();
				Here = (fteo::NET::wr_TWork^) O; //!!
				statusStrip1->Items[2]->Text = "id Á‡ÔËÒË  " + (Here->API->id.ToString());
				Ofrm->Cfg->API->item_id = Here->API->id;

				return O;
			}
			else return nullptr;
		}

		// ƒÎˇ ËÁÛ˜ÂÌËˇ treeView:	 
		//	 statusStrip1->Items[1]->Text = "Index "+ Node_->Index.ToString(); - ‡ÒÒÚÓˇÌËÂ ÓÚ Ó‰ËÚÂÎ¸ÒÍÓ„Ó ÛÁÎ‡
		//   statusStrip1->Items[2]->Text = "Level "+ Node_->Level.ToString();
		else return nullptr;
	}


			 //----------------------------------------------------------------------------------------------------------------------------------
					  // ¬˚ÁÓ‚ Â‰‡ÍÚÓ‡/·Ó‚ÁÂ‡ ÚÓ˜ÂÍ
					  // ÕÛÊÂÌ ÍÓÏÔ‡ÍÚÌ˚È Ë ˝ÎÂ„‡ÌÚÌ˚È ‚Ë‰, ÔÓÌˇÚÌ˚È ‰‡ÊÂ ˜ÂÂÁ 2 ÔˇÚÌËˆ˚!!!
	private: System::Boolean Call_OporaForm(TreeNode^ SelNode) {

		System::Object^ SomeObject = ChangeItem(SelNode); //œÓÎÛ˜ËÏ ÒÒ˚ÎÍÛ Ì‡ ÚÂÍÛ˘ËÈ Work
		if (SomeObject) {
			fteo::NET::wr_TWork^ Here = (fteo::NET::wr_TWork^) SomeObject;//cast to !!
			if (Here->API->AllPoints->Empty()) {  // AllPoints ÓÔÂ‰ÂÎÂÌ˚ ‚ÒÂ„‰‡ ÍÓÌÒÚÛÍÚÓÓÏ, ÔÓ‚ÂˇÂÏ ÍÓÎË˜ÂÒÚ‚Ó. ≈ÒÎË ÔÛÒÚÓ, Á‡„ÛÊ‡ÂÏ Á‡ÌÓ‚Ó
				   //native - ÓÚÎ‡ÊÂÌÓ OK, ÓÒÚ‡‚ËÏ Í‡Í ‚‡Ë‡ÌÚ ‰Îˇ ÔÓÌËÏ‡ÌËˇ Firebird API:
					/*
					::firebird::Loader^ ld2  =gcnew firebird::Loader();
					fteo::NET::wr_TMyPoints^ PointsForParent =  ld2->LoadPoints(FteoDBHandle, Here->API->Parent_id);
					Oporafrm->Points = PointsForParent;
					*/
					// IBPP -
				::firebird::IBPPDriver^ ibpploader2 = gcnew firebird::IBPPDriver(Ofrm->Cfg);
				ibpploader2->LoadChilds(FteoDBHandle, Here);
				ibpploader2->CloseData();
			}
			if (Here->API->AllPoints->Count() > 0) // ≈ÒÎË ÚÓ˜ÍË ÂÒÚ¸, ÔÂÂ‰‡ÂÏ Ëı ‚ ÙÓÏÛ “Ó˜ÍË
			{
				if (!Oporafrm->Points) Oporafrm->Points = gcnew fteo::NET::wr_TMyPoints();// ˝Ú Ì‡ ‚ÒˇÍËÈ ÒÎÛ˜‡È
				Oporafrm->Points->API = Here->API->AllPoints; // ÔËÒ‚‡Ë‚‡ÌËÂ ‡‚ÌˇÂÚ ‡‰ÂÒ‡? ƒ‡! «Ì‡˜ËÚ ‰‡Î¸ÌÂÈ¯ËÂ Ï‡ÌËÔÛÎˇˆËË ·Û‰ÛÚ Ì‡‰ Ó·˙ÂÍÚÓÏ ÒÔ‡‚‡ ‚ ‚˚‡ÊÂÌËË
				Oporafrm->Points->id = Here->API->id;         // 
			};
			Oporafrm->Mt = Ofrm->Cfg->API->Mt_common; // ”ÒÚ‡Ì‡‚ÎË‚‡ÂÏ Œ·˘‡ˇ ÚÓ˜ÌÓÒÚ¸ ‰Îˇ ÏÓ‰ÛÎˇ “Ó˜ÍË
			Oporafrm->ShowDialog(this);
			if (Oporafrm->Points) Oporafrm->Points = nullptr; //Ó˜Ë˘‡ÂÏ ÓÚ ÒÒ˚ÎÍË Á‡„ÛÊÂÌÌ˚ı ÚÓ˜ÂÍ, nullptr ÚÓÎ¸ÍÓ ‰Îˇ CLR ËÁ‚ÂÒÚÂÌ;
		  //  SetProcessWorkingSetSize(GetCurrentProcess(),-1,-1);
		}
		return true;
	}

			 //----------------------------------------------------------------------------------------------------------------------------------
			 // ¬˚ÁÓ‚ Â‰‡ÍÚÓ‡/·Ó‚ÁÂ‡
	private: System::Boolean Call_LotEditor(TreeNode^ SelNode) {
		System::Object^ SomeObject = ChangeItem(SelNode); //œÓÎÛ˜ËÏ ÒÒ˚ÎÍÛ Ì‡ ÚÂÍÛ˘ËÈ Work
		if (SomeObject) {
			fteo::NET::wr_TWork^ Here = (fteo::NET::wr_TWork^) SomeObject;//cast to !!
			wzCadworkEditor^ wzCadworkEditorfrm = gcnew wzCadworkEditor;
			int test = Here->API->EntryList->size();
			if (Here->API->EntryCount() == 0)
			{
				::firebird::IBPPDriver^ ibpploader2 = gcnew firebird::IBPPDriver(Ofrm->Cfg);
				ibpploader2->LoadChilds(FteoDBHandle, Here);
				ibpploader2->CloseData();
			}
			SelNode->Nodes->Clear();
			for (int i = 0; i <= Here->API->EntryCount() - 1; i++)
			{
				SelNode->Nodes->Add("Child " + Here->API->GetEntrybyIndex(i)->id.ToString());
			}
		}
		return false;
	};

			 // ¬˚ÁÓ‚ Â‰‡ÍÚÓ‡ ContourEditor (‰‡ ÔÓ‰ÎËÚ ‰ÌË Â„Ó Delphi2006!)
	private: System::Boolean Call_ContourEditor(TreeNode^ SelNode) {
		System::Object^ SomeObject = ChangeItem(SelNode); //œÓÎÛ˜ËÏ ÒÒ˚ÎÍÛ Ì‡ ÚÂÍÛ˘ËÈ Work
		if (SomeObject) {
			fteo::NET::wr_TWork^ Here = (fteo::NET::wr_TWork^) SomeObject;//cast to !!
			/* 		/* œ–ËÍÓÂÏ Ì‡ ‚ÂÏˇ ÓÚÎ‡‰ÍË CE: 
			int test = Here->API->EntryList->size();
			if (Here->API->EntryCount() == 0)
			  {
					::firebird::IBPPDriver^ ibpploader2 =  gcnew firebird::IBPPDriver(Ofrm->Cfg);
											ibpploader2 -> LoadChilds(FteoDBHandle, Here);
											ibpploader2 -> CloseData();
											*/
			Cntfrm->Item_id = Here->API->id;
			Cntfrm->ShowDialog(this);
			//  }
			return false;
		}
	}


	private: void ClearControls()
	{
		treeView1->Nodes->Clear();
		statusStrip1->Items[0]->Text = ""; statusStrip1->Items[1]->Text = "";
		statusStrip1->Items[2]->Text = Ofrm->Cfg->GetDBNameW();
		//this->MainCWNode = treeView1->TopNode;
		//Message^ msg = gcnew Message("hi!");
		// msg->HWnd = HWND_BROADCAST;
	}

	private: void CheckControls()
	{
		if (FteoDBHandle)
		{
			toolStripButton3->Enabled = false;
			toolStripMenuItem1->Enabled = false;
			toolStrip_Button_Points->Enabled = true;
		}
		else {
			toolStripButton3->Enabled = true;
			toolStripMenuItem1->Enabled = true;
			toolStrip_Button_Points->Enabled = false;
		}
	}


	private:  int FillTree(TreeNodeCollection^ TNC, fteo::NET::wr_TWorks^ CW)

	{
		TreeNode^ To = TNC->Add(fteo::NET::CharToString(CadWorkTypeToName(CW->API->CadWorkType)) + " (" + CW->Count().ToString() + ")");

		for (int i = 0; i <= CW->Count() - 1; i++)
		{
			fteo::NET::wr_TWork^ cw = CW->GetItembyIndex(i);
			TreeNode^ PNode = To->Nodes->Add(cw->ArchNum());
			PNode->Tag = cw;
		}
		statusStrip1->Items[1]->Text = CW->Count().ToString();
		return CW->Count();
	}





			  //---------------------------------------------------------------------------------------------
	private: System::Void Disconnect() {

		statusStrip1->Items[0]->Text = "ŒÚÍÎ˛˜ÂÌËÂ...";
		ClearControls();
		this->Update();
		if (fteo::firebird::DisConnect(FteoDBHandle))
		{
			statusStrip1->Items[0]->Text = "¡ƒ ÓÚÍÎ˛˜ÂÌ‡";
			statusStrip1->Items[1]->Text = ""; statusStrip1->Items[2]->Text = "";

		}
		else { ClearControls(); statusStrip1->Items[0]->Text = "Œ¯Ë·Í‡ ÓÚÍÎ˛˜ÂÌËˇ"; }
	}


			 //--------------------------------Connect & Load--------------------------------------------------------
	private: System::Void Connect_Load() {

		using namespace System::Windows::Forms;
		ClearControls();
		if (fteo::firebird::Connect2Base_2(Ofrm->Cfg->API->serverIp, Ofrm->Cfg->API->dbname, Ofrm->Cfg->API->username, Ofrm->Cfg->API->upassword))
		{
			statusStrip1->Items[0]->Text = "Connect ok";
			statusStrip1->Items[1]->Text = "Á‡„ÛÁÍ‡ ‰‡ÌÌ˚ı...";//fteo::NETWrappers::CharToString((char *) FteoDBHandle);
			this->Update();
			fteo::firebird::Loader^ Ld = gcnew fteo::firebird::Loader();
			//netFteo::BaseClasess::TMyParcelCollection^ res=  gcnew netFteo::BaseClasess::TMyParcelCollection();
			  //netFteo::BaseClasess::TMyParcelCollection^ res= Ld->LoadParcels2(FteoDBHandle);

			treeView1->BeginUpdate();
			int AllCount = 0;

			CW_New = Ld->LoadCadWorks(FteoDBHandle, cw_OnNew_);
			AllCount += FillTree(treeView1->Nodes, CW_New);
			CW_Div = Ld->LoadCadWorks(FteoDBHandle, cw_OnNew_Divide);
			AllCount += FillTree(treeView1->Nodes, CW_Div);
			CW_Part = Ld->LoadCadWorks(FteoDBHandle, cw_OnNew_Partition);
			AllCount += FillTree(treeView1->Nodes, CW_Part);
			CW_DG = Ld->LoadCadWorks(FteoDBHandle, cw_OnNew_DivideGos);
			AllCount += FillTree(treeView1->Nodes, CW_DG);
			CW_UN = Ld->LoadCadWorks(FteoDBHandle, cw_OnNew_Unite);
			AllCount += FillTree(treeView1->Nodes, CW_UN);
			CW_REP = Ld->LoadCadWorks(FteoDBHandle, cw_OnNew_Repart);
			AllCount += FillTree(treeView1->Nodes, CW_REP);
			CW_ExA = Ld->LoadCadWorks(FteoDBHandle, cw_OnExist_Any);
			AllCount += FillTree(treeView1->Nodes, CW_ExA);
			CW_ExS = Ld->LoadCadWorks(FteoDBHandle, cw_OnExist_Slots);
			AllCount += FillTree(treeView1->Nodes, CW_ExS);
			CW_Def = Ld->LoadCadWorks(FteoDBHandle, cw_Default);
			AllCount += FillTree(treeView1->Nodes, CW_Def);
			CW_NewBuild = Ld->LoadCadWorks(FteoDBHandle, cw_New_Build);
			AllCount += FillTree(treeView1->Nodes, CW_NewBuild);
			CW_Zone = Ld->LoadCadWorks(FteoDBHandle, cw_Zone);
			AllCount += FillTree(treeView1->Nodes, CW_Zone);
			CW_None = Ld->LoadCadWorks(FteoDBHandle, cw_Unknown);
			AllCount += FillTree(treeView1->Nodes, CW_None);

			treeView1->EndUpdate();
			statusStrip1->Items[0]->Text = "¬ÒÂ„Ó Á‡ÔËÒÂÈ";
			statusStrip1->Items[2]->Text = AllCount.ToString();

		}
		else
		{
			//listBox1->Items->Add("Connection Error");
			statusStrip1->Items[0]->Text = "Connect error";
			statusStrip1->Items[1]->Text = "";
		}
	}

	private: System::Void MainForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		Ofrm = gcnew OptionsForm();
		Oporafrm = gcnew OporaForm();
		Cntfrm = gcnew ContourEditorForm();
		Ofrm->Cfg->ReadINI();
		ClearControls();
	}

	private: System::Void Ì‡ÒÚÓÈÍËToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Ofrm->ShowDialog(this);
	}
	private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Ofrm->ShowDialog(this);
	}
	private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
		Connect_Load();
		CheckControls();
	}

	private: System::Void toolStripMenuItem1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Connect_Load();
		CheckControls();
	}
	private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		Disconnect();
		CheckControls();
	}
	private: System::Void treeView1_Click(System::Object^ sender, System::EventArgs^ e) {
		ChangeItem(treeView1->SelectedNode);
	}
	private: System::Void treeView1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		ChangeItem(treeView1->SelectedNode);
	}
	private: System::Void MainForm_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {

	}
	private: System::Void MainForm_Validating_1(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void MainForm_Activated(System::Object^ sender, System::EventArgs^ e) {
		CheckControls();

	}
	private: System::Void ‚˚ıÓ‰ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Disconnect();
		Close();
	}

	private: System::Void ÚÓ˜ÍËToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Call_OporaForm(treeView1->SelectedNode);
	}
	private: System::Void toolStrip_Button_Points_Click(System::Object^ sender, System::EventArgs^ e) {
		Call_OporaForm(treeView1->SelectedNode);
	}
	private: System::Void ÚÓ˜ÍËToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Call_OporaForm(treeView1->SelectedNode);
	}
	private: System::Void AboutMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FS2_About^ Aboutfrm = gcnew FS2_About();
		Aboutfrm->ShowDialog(this);
	}
	private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
		FS2_About^ Aboutfrm = gcnew FS2_About();
		Aboutfrm->ShowDialog(this);
	}

	private: System::Void toolStripButton5_Click(System::Object^ sender, System::EventArgs^ e) {
		Call_LotEditor(treeView1->SelectedNode);
	}
	private: System::Void Â‰‡ÍÚÓ ÓÌÚÛÓ‚ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Call_ContourEditor(treeView1->SelectedNode);

	}
	private: System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e) {
		Call_ContourEditor(treeView1->SelectedNode);
	}
	private: System::Void toolStripButton7_Click(System::Object^ sender, System::EventArgs^ e) {

		toolStripButton7->Enabled = false;
		fteo::Win32xx::CViewerApp2 MyView;// = new  fteo::Win32xx::CViewerApp();
		MyView.Run();
		//->Create((HWND) this->Handle.ToPointer());
		toolStripButton7->Enabled = true;

	}


	private: System::Void Button_OpenFile_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFile_();
	}

	private: System::Void ÓÚÍ˚Ú¸ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFile_();
	}

	private: System::Void OpenFile_() {

		System::Windows::Forms::OpenFileDialog^ dlg = gcnew System::Windows::Forms::OpenFileDialog();
		dlg->Filter = "»Á‚ÂÒÚÌ˚Â xml-Ù‡ÈÎ˚|*.xml";
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{

			System::Xml::XmlTextReader^ reader = gcnew System::Xml::XmlTextReader(dlg->FileName->ToString());
			System::Xml::XmlDocument^ doc = gcnew System::Xml::XmlDocument();
			doc->Load(reader);
			statusStrip1->Items[1]->Text = doc->DocumentElement->Name;

		}
	}

			 /*
			 public: void SerializeContainer2( System::Xml::XmlWriter^ writer, Object obj )
			 {
			  using namespace System::Xml::Serialization;
			   try
			   {
				 // Make sure even the construsctor runs inside a
				 // try-catch block
			   XmlSerializer ser = new XmlSerializer(typeof(Container));
				 ser.Serialize( writer, obj );
			   }
			   catch( Exception ex )
			   {
				 DumpException( ex );
			   }

			 }
			 public static void DumpException( Exception ex )
			 {
			   Console.WriteLine( "--------- Outer Exception Data ---------" );
			   WriteExceptionInfo( ex );
			   ex = ex.InnerException;
			   if( null != ex )
			   {
				 Console.WriteLine( "--------- Inner Exception Data ---------" );
				 WriteExceptionInfo( ex.InnerException );
				 ex = ex.InnerException;
			   }
			 }
			 public static void WriteExceptionInfo( Exception ex )
			 {
			   Console.WriteLine( "Message: {0}", ex.Message );
			   Console.WriteLine( "Exception Type: {0}", ex.GetType().FullName );
			   Console.WriteLine( "Source: {0}", ex.Source );
			   Console.WriteLine( "StrackTrace: {0}", ex.StackTrace );
			   Console.WriteLine( "TargetSite: {0}", ex.TargetSite );
			 }
			 */




			 //—„ÂÌÂËÏ ÏÂÊÂ‚ÓÈ ÔÎ‡Ì ‚ÂÒËË 06:
	private: System::Void SaveFile_() {
		System::Windows::Forms::SaveFileDialog^ dlg = gcnew System::Windows::Forms::SaveFileDialog();
		dlg->Filter = "ÃÂÊÂ‚ÓÈ ÔÎ‡Ì|*.xml";
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			/*
			System::IO::TextWriter^ wr = gcnew System::IO::StreamWriter(dlg->FileName);
			System::Xml::XmlWriter^ xWr = gcnew System::Xml::XmlTextWriter(wr);


			 RRTypes_cpp::MP^ myMP_V06 = gcnew RRTypes_cpp::MP();
			 myMP_V06->GUID = "My_MP_V06 at vsc2008++";
			 myMP_V06->NameSoftware = "Fixosoft fteo 6";
			 myMP_V06->Package = gcnew RRTypes_cpp::MPPackage();
			 myMP_V06->Package->FormParcels = gcnew RRTypes_cpp::MPPackageFormParcels();
			 myMP_V06->Package->FormParcels->Method = RRTypes_cpp::dMethod::Item1;
			 myMP_V06->Package->FormParcels->NewParcel = gcnew cli::array<RRTypes_cpp::tNewParcel^>(31);
			 myMP_V06->Package->FormParcels->NewParcel[0] = gcnew RRTypes_cpp::tNewParcel();
			 myMP_V06->Package->FormParcels->NewParcel[0]->CadastralBlock = "Block for newParcel";
//            SerializeContainer2(xWr, myMP_V06);

		  using namespace System::Xml::Serialization;
		   //XmlSerializer^ sr = gcnew  XmlSerializer(RRTypes_cpp::MP::typeid);
		  // sr->Serialize(wr,myMP_V06);
			  wr->Close();
			  */
		}
	}


	private: System::Void toolStripButton8_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFile_();
	}

	private: System::Void ToolStripButton9_Click(System::Object^ sender, System::EventArgs^ e) {
	}


			 //
	private: System::Void SignFile(String^ FileName)
	{
		cspUtils::CadesWrapper^ cw = gcnew cspUtils::CadesWrapper();
		cw->Sign_GOST_2012(FileName, "subjectName");
	}

	private: System::Void ToolStripButton_Sign_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::OpenFileDialog^ dlg = gcnew System::Windows::Forms::OpenFileDialog();
		dlg->Filter = "Ù‡ÈÎ˚|*.*";
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			SignFile(dlg->FileName);
		}
	}

	private: System::Void SignFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
