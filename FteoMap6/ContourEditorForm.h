//#include "fteo_core.h"
#include "ClientUtils.h"
#include "CLR_baseClasses.h"
#include "NETWrappers.h"
#include "esviewer.h"
#include "mitab_capi.h"

#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace FteoDBForms
{


	/// <summary>
	/// Summary for ContourEditorForm
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class ContourEditorForm : public System::Windows::Forms::Form
	{
	public:
		ContourEditorForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			ESwindow = gcnew netFteo::Windows::MyWindowEx();
		}

	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;

	private: System::Windows::Forms::ToolStripMenuItem^ dxfToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton6;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîìîùüToolStripMenuItem;
	public:
		fteo::api::TMyContours* EditorData; //×òî îòîáðàæàåò è ñ ÷åì ðàáîòàåò ContourEditor.
		netFteo::Spatial::TEntitySpatial^ ES; // Also with NET
		netFteo::Windows::MyWindowEx^ ESwindow;
		netFteo::EntityViewer^ ViewWindow; // xaml WPF control
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	public:
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::TreeView^ treeView2;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripMenuItem^ âèäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMI_ShowES;





	public:		 int Item_id;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ContourEditorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíþToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ImportFteo_txt2015MenuItem;
	private: fteo::api::TMyContours* KPT;
	private: System::Windows::Forms::ToolStripMenuItem^ çàêðûòüToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ csvÔàéëTechnoCADToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ êÏÒToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêðûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mifôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ csvToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïðîâåðèòüÏåðåñå÷åíèÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñâîéñòâàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ MenuItem_KPT_Prop_Poly;
	private: System::Windows::Forms::ToolStripMenuItem^ MenuItem_KPT_Prop_Points;

	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripMenuItem^ mifôàéëToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ dxfToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel1;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ContourEditorForm::typeid));
			System::Windows::Forms::ListViewItem^ listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"Item1",
					L"Sub1"
			}, -1));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíþToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ImportFteo_txt2015MenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->csvÔàéëTechnoCADToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mifôàéëToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dxfToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàêðûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êÏÒToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêðûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mifôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->csvToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dxfToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïðîâåðèòüÏåðåñå÷åíèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ñâîéñòâàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuItem_KPT_Prop_Poly = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuItem_KPT_Prop_Points = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMI_ShowES = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîìîùüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->treeView2 = (gcnew System::Windows::Forms::TreeView());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->Enabled = false;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2, this->toolStripStatusLabel3, this->toolStripStatusLabel4
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 583);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(906, 22);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(118, 17);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(118, 17);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(118, 17);
			this->toolStripStatusLabel3->Text = L"toolStripStatusLabel3";
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(118, 17);
			this->toolStripStatusLabel4->Text = L"toolStripStatusLabel4";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ìåíþToolStripMenuItem,
					this->êÏÒToolStripMenuItem, this->âèäToolStripMenuItem, this->ïîìîùüToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(906, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ìåíþToolStripMenuItem
			// 
			this->ìåíþToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->çàêðûòüToolStripMenuItem
			});
			this->ìåíþToolStripMenuItem->Name = L"ìåíþToolStripMenuItem";
			this->ìåíþToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ìåíþToolStripMenuItem->Text = L"Ìåíþ";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ImportFteo_txt2015MenuItem,
					this->csvÔàéëTechnoCADToolStripMenuItem, this->mifôàéëToolStripMenuItem1, this->dxfToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(120, 22);
			this->toolStripMenuItem1->Text = L"Èìïîðò";
			// 
			// ImportFteo_txt2015MenuItem
			// 
			this->ImportFteo_txt2015MenuItem->Enabled = false;
			this->ImportFteo_txt2015MenuItem->Name = L"ImportFteo_txt2015MenuItem";
			this->ImportFteo_txt2015MenuItem->Size = System::Drawing::Size(236, 22);
			this->ImportFteo_txt2015MenuItem->Text = L"Òåêñòîâûé ôàéë NXYZD, 2015";
			this->ImportFteo_txt2015MenuItem->Click += gcnew System::EventHandler(this, &ContourEditorForm::ImportFteo_txt2015MenuItem_Click);
			// 
			// csvÔàéëTechnoCADToolStripMenuItem
			// 
			this->csvÔàéëTechnoCADToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"csvÔàéëTechnoCADToolStripMenuItem.Image")));
			this->csvÔàéëTechnoCADToolStripMenuItem->Name = L"csvÔàéëTechnoCADToolStripMenuItem";
			this->csvÔàéëTechnoCADToolStripMenuItem->Size = System::Drawing::Size(236, 22);
			this->csvÔàéëTechnoCADToolStripMenuItem->Text = L"csv ôàéë (TechnoCAD)";
			this->csvÔàéëTechnoCADToolStripMenuItem->Click += gcnew System::EventHandler(this, &ContourEditorForm::csvÔàéëTechnoCADToolStripMenuItem_Click);
			// 
			// mifôàéëToolStripMenuItem1
			// 
			this->mifôàéëToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mifôàéëToolStripMenuItem1.Image")));
			this->mifôàéëToolStripMenuItem1->Name = L"mifôàéëToolStripMenuItem1";
			this->mifôàéëToolStripMenuItem1->Size = System::Drawing::Size(236, 22);
			this->mifôàéëToolStripMenuItem1->Text = L"mif-ôàéë";
			this->mifôàéëToolStripMenuItem1->Click += gcnew System::EventHandler(this, &ContourEditorForm::mifôàéëToolStripMenuItem1_Click);
			// 
			// dxfToolStripMenuItem
			// 
			this->dxfToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dxfToolStripMenuItem.Image")));
			this->dxfToolStripMenuItem->Name = L"dxfToolStripMenuItem";
			this->dxfToolStripMenuItem->Size = System::Drawing::Size(236, 22);
			this->dxfToolStripMenuItem->Text = L"dxf-ôàéë";
			this->dxfToolStripMenuItem->Click += gcnew System::EventHandler(this, &ContourEditorForm::dxfToolStripMenuItem_Click);
			// 
			// çàêðûòüToolStripMenuItem
			// 
			this->çàêðûòüToolStripMenuItem->Name = L"çàêðûòüToolStripMenuItem";
			this->çàêðûòüToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->çàêðûòüToolStripMenuItem->Text = L"Çàêðûòü";
			this->çàêðûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &ContourEditorForm::çàêðûòüToolStripMenuItem_Click);
			// 
			// êÏÒToolStripMenuItem
			// 
			this->êÏÒToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->îòêðûòüToolStripMenuItem,
					this->ïðîâåðèòüÏåðåñå÷åíèÿToolStripMenuItem, this->î÷èñòèòüToolStripMenuItem, this->toolStripSeparator1, this->ñâîéñòâàToolStripMenuItem
			});
			this->êÏÒToolStripMenuItem->Name = L"êÏÒToolStripMenuItem";
			this->êÏÒToolStripMenuItem->Size = System::Drawing::Size(42, 20);
			this->êÏÒToolStripMenuItem->Text = L"ÊÏÒ";
			// 
			// îòêðûòüToolStripMenuItem
			// 
			this->îòêðûòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->mifôàéëToolStripMenuItem,
					this->csvToolStripMenuItem, this->dxfToolStripMenuItem1
			});
			this->îòêðûòüToolStripMenuItem->Name = L"îòêðûòüToolStripMenuItem";
			this->îòêðûòüToolStripMenuItem->Size = System::Drawing::Size(208, 22);
			this->îòêðûòüToolStripMenuItem->Text = L"Îòêðûòü";
			// 
			// mifôàéëToolStripMenuItem
			// 
			this->mifôàéëToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mifôàéëToolStripMenuItem.Image")));
			this->mifôàéëToolStripMenuItem->Name = L"mifôàéëToolStripMenuItem";
			this->mifôàéëToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->mifôàéëToolStripMenuItem->Text = L"mif-ôàéë";
			this->mifôàéëToolStripMenuItem->Click += gcnew System::EventHandler(this, &ContourEditorForm::mifôàéëToolStripMenuItem_Click);
			// 
			// csvToolStripMenuItem
			// 
			this->csvToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"csvToolStripMenuItem.Image")));
			this->csvToolStripMenuItem->Name = L"csvToolStripMenuItem";
			this->csvToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->csvToolStripMenuItem->Text = L"csv";
			this->csvToolStripMenuItem->Click += gcnew System::EventHandler(this, &ContourEditorForm::csvToolStripMenuItem_Click);
			// 
			// dxfToolStripMenuItem1
			// 
			this->dxfToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dxfToolStripMenuItem1.Image")));
			this->dxfToolStripMenuItem1->Name = L"dxfToolStripMenuItem1";
			this->dxfToolStripMenuItem1->Size = System::Drawing::Size(126, 22);
			this->dxfToolStripMenuItem1->Text = L"dxf";
			this->dxfToolStripMenuItem1->Click += gcnew System::EventHandler(this, &ContourEditorForm::dxfToolStripMenuItem1_Click);
			// 
			// ïðîâåðèòüÏåðåñå÷åíèÿToolStripMenuItem
			// 
			this->ïðîâåðèòüÏåðåñå÷åíèÿToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ïðîâåðèòüÏåðåñå÷åíèÿToolStripMenuItem.Image")));
			this->ïðîâåðèòüÏåðåñå÷åíèÿToolStripMenuItem->Name = L"ïðîâåðèòüÏåðåñå÷åíèÿToolStripMenuItem";
			this->ïðîâåðèòüÏåðåñå÷åíèÿToolStripMenuItem->Size = System::Drawing::Size(208, 22);
			this->ïðîâåðèòüÏåðåñå÷åíèÿToolStripMenuItem->Text = L"Ïðîâåðèòü ïåðåñå÷åíèÿ";
			this->ïðîâåðèòüÏåðåñå÷åíèÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &ContourEditorForm::ïðîâåðèòüÏåðåñå÷åíèÿToolStripMenuItem_Click);
			// 
			// î÷èñòèòüToolStripMenuItem
			// 
			this->î÷èñòèòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"î÷èñòèòüToolStripMenuItem.Image")));
			this->î÷èñòèòüToolStripMenuItem->Name = L"î÷èñòèòüToolStripMenuItem";
			this->î÷èñòèòüToolStripMenuItem->Size = System::Drawing::Size(208, 22);
			this->î÷èñòèòüToolStripMenuItem->Text = L"Î÷èñòèòü";
			this->î÷èñòèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &ContourEditorForm::î÷èñòèòüToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(205, 6);
			// 
			// ñâîéñòâàToolStripMenuItem
			// 
			this->ñâîéñòâàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->MenuItem_KPT_Prop_Poly,
					this->MenuItem_KPT_Prop_Points
			});
			this->ñâîéñòâàToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñâîéñòâàToolStripMenuItem.Image")));
			this->ñâîéñòâàToolStripMenuItem->Name = L"ñâîéñòâàToolStripMenuItem";
			this->ñâîéñòâàToolStripMenuItem->Size = System::Drawing::Size(208, 22);
			this->ñâîéñòâàToolStripMenuItem->Text = L"Ñâîéñòâà";
			this->ñâîéñòâàToolStripMenuItem->Click += gcnew System::EventHandler(this, &ContourEditorForm::ñâîéñòâàToolStripMenuItem_Click);
			// 
			// MenuItem_KPT_Prop_Poly
			// 
			this->MenuItem_KPT_Prop_Poly->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MenuItem_KPT_Prop_Poly.Image")));
			this->MenuItem_KPT_Prop_Poly->Name = L"MenuItem_KPT_Prop_Poly";
			this->MenuItem_KPT_Prop_Poly->Size = System::Drawing::Size(136, 22);
			this->MenuItem_KPT_Prop_Poly->Text = L"Ïîëèãîíîâ";
			// 
			// MenuItem_KPT_Prop_Points
			// 
			this->MenuItem_KPT_Prop_Points->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MenuItem_KPT_Prop_Points.Image")));
			this->MenuItem_KPT_Prop_Points->Name = L"MenuItem_KPT_Prop_Points";
			this->MenuItem_KPT_Prop_Points->Size = System::Drawing::Size(136, 22);
			this->MenuItem_KPT_Prop_Points->Text = L"Òî÷åê";
			// 
			// âèäToolStripMenuItem
			// 
			this->âèäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMI_ShowES });
			this->âèäToolStripMenuItem->Name = L"âèäToolStripMenuItem";
			this->âèäToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->âèäToolStripMenuItem->Text = L"Âèä";
			// 
			// toolStripMI_ShowES
			// 
			this->toolStripMI_ShowES->CheckOnClick = true;
			this->toolStripMI_ShowES->Name = L"toolStripMI_ShowES";
			this->toolStripMI_ShowES->Size = System::Drawing::Size(131, 22);
			this->toolStripMI_ShowES->Text = L"Ïðîñìîòð";
			this->toolStripMI_ShowES->Click += gcnew System::EventHandler(this, &ContourEditorForm::ToolStripMI_ShowES_Click);
			// 
			// ïîìîùüToolStripMenuItem
			// 
			this->ïîìîùüToolStripMenuItem->Name = L"ïîìîùüToolStripMenuItem";
			this->ïîìîùüToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->ïîìîùüToolStripMenuItem->Text = L"Ïîìîùü";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::SystemColors::Info;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->toolStripButton3,
					this->toolStripSeparator2, this->toolStripButton4, this->toolStripSeparator3, this->toolStripLabel1, this->toolStripButton1,
					this->toolStripButton5, this->toolStripButton2, this->toolStripSeparator4, this->toolStripButton6
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(906, 25);
			this->toolStrip1->TabIndex = 5;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->Click += gcnew System::EventHandler(this, &ContourEditorForm::toolStrip1_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(73, 22);
			this->toolStripButton3->Text = L"Çàêðûòü";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &ContourEditorForm::toolStripButton3_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(23, 22);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &ContourEditorForm::toolStripButton4_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->AutoSize = false;
			this->toolStripLabel1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(100, 22);
			this->toolStripLabel1->Text = L"::";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->ToolTipText = L"Îòêðûòü ÊÏÒ";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &ContourEditorForm::toolStripButton1_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(23, 22);
			this->toolStripButton5->Text = L"toolStripButton5";
			this->toolStripButton5->ToolTipText = L"Ïðîâåðêà ïåðåñå÷åíèé";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &ContourEditorForm::toolStripButton5_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &ContourEditorForm::toolStripButton2_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(23, 22);
			this->toolStripButton6->Text = L"toolStripButton6";
			this->toolStripButton6->ToolTipText = L"EsViewer";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &ContourEditorForm::toolStripButton6_Click);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer1->Location = System::Drawing::Point(0, 49);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->treeView1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->listView1);
			this->splitContainer1->Panel2->Controls->Add(this->treeView2);
			this->splitContainer1->Size = System::Drawing::Size(906, 534);
			this->splitContainer1->SplitterDistance = 256;
			this->splitContainer1->SplitterWidth = 10;
			this->splitContainer1->TabIndex = 7;
			// 
			// treeView1
			// 
			this->treeView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->treeView1->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeView1->Location = System::Drawing::Point(0, 0);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(256, 534);
			this->treeView1->TabIndex = 3;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &ContourEditorForm::TreeView1_AfterSelect);
			this->treeView1->NodeMouseClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &ContourEditorForm::TreeView1_NodeMouseClick);
			// 
			// treeView2
			// 
			this->treeView2->BackColor = System::Drawing::SystemColors::Info;
			this->treeView2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->treeView2->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeView2->Location = System::Drawing::Point(0, 321);
			this->treeView2->Name = L"treeView2";
			this->treeView2->Size = System::Drawing::Size(640, 213);
			this->treeView2->TabIndex = 8;
			// 
			// listView1
			// 
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->listView1->HideSelection = false;
			listViewItem1->StateImageIndex = 0;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { listViewItem1 });
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->ShowItemToolTips = true;
			this->listView1->Size = System::Drawing::Size(640, 321);
			this->listView1->TabIndex = 7;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Width = 78;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Width = 119;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Width = 96;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Width = 118;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Width = 94;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Width = 84;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Width = 81;
			// 
			// ContourEditorForm
			// 
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(906, 605);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::Color::ForestGreen;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(746, 400);
			this->Name = L"ContourEditorForm";
			this->Text = L"Ðåäàêòîð êîíòóðîâ";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ContourEditorForm::ContourEditorForm_FormClosing);
			this->Shown += gcnew System::EventHandler(this, &ContourEditorForm::ContourEditorForm_Shown);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: void ListEditorData(fteo::api::TMyContours* editorData) {
		if (editorData)
		{
			fteo::NET::Lister^ lstr = gcnew fteo::NET::Lister();
			lstr->ListContours(treeView1, editorData);
			UpdateKPTinfo();
		}
	}

	private: void ListEditorData(netFteo::Spatial::TEntitySpatial^ editorData) {
		if (editorData)
		{
			fteo::NET::Lister^ lstr = gcnew fteo::NET::Lister();
			//	lstr->ListContours(treeView1, editorData);
			UpdateKPTinfo();
		}
	}

	private: void ListEditorData(fteo::api::TDataRecords<fteo::api::TLayer>* editorData) {
		if (editorData->Items->empty()) return;
		treeView1->Nodes->Clear();
		std::list<fteo::api::TLayer>::const_iterator pt = editorData->Items->begin();

		for (pt = editorData->Items->begin(); pt != editorData->Items->end(); pt++)
		{
			//      std::advance(pt, 1);  // Increments given iterator it by n elements.
			treeView1->Nodes->Add(fteo::NETWrappers::CharToString(pt->LayerName) + " " + fteo::NETWrappers::CharToString(pt->LayerType));

		}
	}

	private: void ListEditorDataES(netFteo::Spatial::TEntitySpatial^ editorData) {
		if ((!editorData) ||
			(editorData->EmptySpatial)) return;

		treeView1->Nodes->Clear();
		netFteo::ObjectLister::ListEntSpat(treeView1->Nodes->Add("ES->Definition"), editorData);
	}

	private: void CheckSpatials(fteo::api::TMyContours* editorData, fteo::api::TMyContours* KPTData) {


		/*
			// Òåñòîâûå çíà÷åíèÿ äëÿ îòëàäêè
					 fteo::api::TLine* TestLine2 = new fteo::api::TLine(130171.5346,350715.5643,
																		130171.6311,350710.838 );
					 fteo::api::TOrdinate* ord21 = new fteo::api::TOrdinate(   130173.4576,350716.1108);
					// fteo::api::TOrdinate* ord22 = new fteo::api::TOrdinate(   130171.0457,350712.6269);
					 //óêîðî÷åííàÿ ïðÿìàÿ6 ïåðåñå÷ íå ä.áûòü
					 fteo::api::TOrdinate* ord22 = new fteo::api::TOrdinate(   130171.9495,350713.9519);
					 fteo::api::TMyPoint* res1x2 = TestLine2->FindIntersect("#1-#2 êîðîòêàÿ",ord21, ord22);
					 resPoints->AppendPoint(res1x2);
					 fteo::api::TLine* TestLine = new fteo::api::TLine(1000,0, 1000,2000);
					 fteo::api::TOrdinate* ord1 = new fteo::api::TOrdinate(   0,1000);
					 fteo::api::TOrdinate* ord2 = new fteo::api::TOrdinate(2000,1000);
					 // Òî÷êà ïåðåñå÷åíèÿ 1000;1000 - ñ ïðÿìîé (0,1000; 2000,1000)
					 fteo::api::TMyPoint* res1000x1000 = TestLine->FindIntersect("1000x1000",ord1, ord2);
					 resPoints->AppendPoint(res1000x1000);
					 // îòîáðàçèì ðåçóëüòàòû:
					 // fteo::NET::Lister^ lstr = gcnew fteo::NET::Lister();
					 // lstr->ListPointsList(treeView1,  resPoints);

		*/
		fteo::api::TPoints* resPoints = new fteo::api::TPoints();

		for (int i = 0; i <= KPTData->Contour->Count() - 1; i++)
		{
			resPoints->AppendPoints(editorData->CheckIntersections(KPTData->Contour->GetByIndex(i)->EntitySpatial));
		}

		if (resPoints->Count() > 0)
		{
			SaveFileDialog^ sd = gcnew SaveFileDialog();
			sd->Filter = "Òåêñòîâûé ôàéë (2015)|*.txt|Âñå ôàéëû|*.*";
			sd->FilterIndex = 0;
			if (sd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				fteo::api::TextWriter* twr = new fteo::api::TextWriter(false, 3, fteo::NETWrappers::StringtoChar(sd->FileName));
				twr->SaveAsFteo15(resPoints);
				//fteo::schemes::

			}
		}
	};

	private: void OpenFixosoft2015() {
		openFileDialog1->Filter = "Òåêñòîâûé ôàéë (2015)|*.txt|Âñå ôàéëû|*.*";
		openFileDialog1->FilterIndex = 0;
		if (openFileDialog1->ShowDialog(this) == System::Windows::Forms::DialogResult::OK)
		{
			fteo::api::TextReader* myTR = new fteo::api::TextReader();
			//fteo::api::TMyContours *impPoints = myTR->ImportNXYZD2015File(fteo::NET::StringtoChar(openFileDialog1->FileName));
			this->EditorData = myTR->ImportNXYZD2015File(fteo::NET::StringtoChar(openFileDialog1->FileName));
			ListEditorData(this->EditorData);
		};

	};

	private: void OpenCSVTechnoCAD() {
		openFileDialog1->Filter = "csv ôàéëû Òåõíîêàä|*.csv|Òåêñòîâûå ôàéëû|*.txt";
		openFileDialog1->FilterIndex = 0;
		if (openFileDialog1->ShowDialog(this) == System::Windows::Forms::DialogResult::OK)
		{
			fteo::api::TextReader* myTR = new fteo::api::TextReader();
			//fteo::api::TMyContours *impPoints = myTR->Read_csv_TechnoCADF(fteo::NET::StringtoChar(openFileDialog1->FileName));

			//using NET:
			netFteo::IO::TextReader^ csvDataReader = gcnew netFteo::IO::TextReader(openFileDialog1->FileName);
			netFteo::Spatial::TEntitySpatial^ csvData = csvDataReader->ImportCSVFile();
			ListEditorData(csvData);
			//this->EditorData = myTR->Read_csv_TechnoCADF(fteo::NET::StringtoChar(openFileDialog1->FileName));
			//ListEditorData(this->EditorData);
		};
	};


	private: void Open_mif() {
		openFileDialog1->Filter = "mif ôàéëû|*.mif|Âñå ôàéëû|*.*";
		openFileDialog1->FilterIndex = 0;
		if (openFileDialog1->ShowDialog(this) == System::Windows::Forms::DialogResult::OK)
		{
			//Open with mitab lib c api:
			mitab_handle mapinfoFile = mitab_c_open(fteo::NET::StringtoChar(openFileDialog1->FileName));
			const char* CSName = mitab_c_get_mif_coordsys(mapinfoFile);
			int feature_count = mitab_c_get_feature_count(mapinfoFile);
			int field_count = mitab_c_get_field_count(mapinfoFile);
			mitab_c_close(mapinfoFile);


			fteo::api::TextReader* myTR = new fteo::api::TextReader();
			//  TODO : Stackoverflow  : this->EditorData = myTR->Read_mif(fteo::NET::StringtoChar(openFileDialog1->FileName));
			ListEditorData(this->EditorData);

		};
	};

	private: void Open_dxf() {
		openFileDialog1->Filter = "dxf-ôàéëû|*.dxf|Âñå ôàéëû|*.*";
		openFileDialog1->FilterIndex = 0;
		if (openFileDialog1->ShowDialog(this) == System::Windows::Forms::DialogResult::OK)
		{
			fteo::api::TextReader* myTR = new fteo::api::TextReader();
			//fteo::api::TMyContours *impPoints = myTR->Read_dxf(fteo::NET::StringtoChar(openFileDialog1->FileName));
			this->EditorData = myTR->Read_dxf(fteo::NET::StringtoChar(openFileDialog1->FileName));
			ListEditorData(this->EditorData);
		};
	};

			 // Ïðîöåäóðû îòêðûâàíèÿ ÊÏÒ øåê äëÿ ïðîâåðîê íà ïåðåñå÷åíèÿ íàêðÿòèÿ è óñòàíîâêè ÃÊÍ òî÷åê
	private: void KPT_OpenCSVTechnoCAD() {
		openFileDialog1->Filter = "csv ôàéëû Òåõíîêàä|*.csv|Òåêñòîâûå ôàéëû|*.txt";
		openFileDialog1->FilterIndex = 0;
		if (openFileDialog1->ShowDialog(this) == System::Windows::Forms::DialogResult::OK)
		{
			fteo::api::TextReader* myTR = new fteo::api::TextReader();
			char* JustString = fteo::NET::StringtoChar(openFileDialog1->FileName);
			wchar_t* UnicodedString = fteo::NET::charToWChar(JustString);
			this->KPT->Appends(myTR->Read_csv_TechnoCADF(fteo::NET::StringtoChar(openFileDialog1->FileName)));
			fteo::NET::Lister^ lstr = gcnew fteo::NET::Lister();
			lstr->ListContours(treeView2, this->KPT);
			UpdateKPTinfo();
		};
	};

	private: void KPT_Open_mif() {
		openFileDialog1->Filter = "mif ôàéëû|*.mif|Âñå ôàéëû|*.*";
		openFileDialog1->FilterIndex = 0;
		if (openFileDialog1->ShowDialog(this) == System::Windows::Forms::DialogResult::OK)
		{
			fteo::api::TextReader* myTR = new fteo::api::TextReader();
			char* JustString = fteo::NET::StringtoChar(openFileDialog1->FileName);
			wchar_t* UnicodedString = fteo::NET::charToWChar(JustString);

			//this->KPT->Appends( myTR->Read_mif_MITabAPI(fteo::NET::StringtoChar(openFileDialog1->FileName)));

			//TODO : Stack over this->KPT->Appends(myTR->Read_mif(fteo::NET::StringtoChar(openFileDialog1->FileName)));

			fteo::NET::Lister^ lstr = gcnew fteo::NET::Lister();
			lstr->ListContours(treeView2, this->KPT);
			UpdateKPTinfo();
		};
	};

	private: void KPT_Open_dxf() {
		openFileDialog1->Filter = "dxf ôàéëû|*.dxf|Âñå ôàéëû|*.*";
		openFileDialog1->FilterIndex = 0;
		if (openFileDialog1->ShowDialog(this) == System::Windows::Forms::DialogResult::OK)
		{
			fteo::api::TextReader* myTR = new fteo::api::TextReader();
			char* JustString = fteo::NET::StringtoChar(openFileDialog1->FileName);
			wchar_t* UnicodedString = fteo::NET::charToWChar(JustString);
			this->KPT->Appends(myTR->Read_dxf(fteo::NET::StringtoChar(openFileDialog1->FileName)));
			fteo::NET::Lister^ lstr = gcnew fteo::NET::Lister();
			lstr->ListContours(treeView2, this->KPT);
			UpdateKPTinfo();
		};
	};


	private: void KPT_Clear(fteo::api::TMyContours* KPT) {
		if (KPT)
			KPT->Contour->clear();
		treeView2->Nodes->Clear();
		UpdateKPTinfo();
	};

	private: System::Void çàêðûòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void csvÔàéëTechnoCADToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->OpenCSVTechnoCAD();
	}

	private: System::Void ImportFteo_txt2015MenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->OpenFixosoft2015();
	}

	private: System::Void î÷èñòèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		KPT_Clear(this->KPT);
	}


	private: System::Void UpdateKPTinfo() {
		toolStripLabel1->Text = this->KPT->Contour->Count().ToString() +
			":: " + this->KPT->PointCount().ToString();
		MenuItem_KPT_Prop_Poly->Text = "Ïîëèãîíîâ " + this->KPT->Contour->Count().ToString();
		MenuItem_KPT_Prop_Points->Text = "Òî÷åê " + this->KPT->PointCount().ToString();
		toolStripButton5->Enabled = (!KPT->Contour->empty() && this->EditorData);
		/*
			   Graphics^ myDraw = pictureBox1->CreateGraphics();

			   cli::array<System::Drawing::Point>^  PointList = gcnew cli::array<System::Drawing::Point>(3);
			   PointList[0] =  System::Drawing::Point(20,20);
			   PointList[1] =  System::Drawing::Point(150,20);
			   PointList[2] =  System::Drawing::Point(150,150);
			   System::Drawing::Pen^ pen = gcnew System::Drawing::Pen(System::Drawing::Color::Red, 5);
			   myDraw->DrawPolygon(pen, PointList);

			   System::Drawing::Font^ fnt = gcnew System::Drawing::Font("Verdana", 15);
			   System::Drawing::SolidBrush^ br = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Coral);
			   myDraw->DrawString("CLI EsViewer", fnt, br, 5, 170);
			   System::Drawing::Font^ fnt2 = gcnew System::Drawing::Font("Verdana", 10);
			   myDraw->DrawString("Graphics^ = pictureBox1->CreateGraphics()", fnt2, br, 1, 190);
			   */
	}


	private: System::Void csvToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		this->KPT_OpenCSVTechnoCAD();
	}




	private: netFteo::Spatial::TRing^ BuildRing(fteo::api::TPoints* SourcePoints, int  Layer_ID, fteo::api::TDataRecords< fteo::api::TAreaRecord>* AreaRecords)
	{
		netFteo::Spatial::TRing^ ResultRing = gcnew netFteo::Spatial::TRing();
		std::list<fteo::api::TAreaRecord>::const_iterator at = AreaRecords->Items->begin();

		for (at = AreaRecords->Items->begin(); at != AreaRecords->Items->end(); at++)
		{
			if (Layer_ID == at->Layer_ID)
			{
				fteo::api::TMyPoint* src_Pt = SourcePoints->getpoint(at->Point_id);
				if (src_Pt)
				{
					netFteo::Spatial::TPoint^ pt = gcnew netFteo::Spatial::TPoint(src_Pt->NewOrd->x, src_Pt->NewOrd->y, src_Pt->NewOrd->z);
					pt->Definition = fteo::NETWrappers::CharToString(src_Pt->Name);
					ResultRing->AddPoint(pt);
				}
			}
		}
		return ResultRing;
	}

	private: netFteo::Spatial::TEntitySpatial^ BuildES(fteo::api::TPoints* SourcePoints, fteo::api::TDataRecords< fteo::api::TLayer>* Layers, fteo::api::TDataRecords< fteo::api::TAreaRecord>* AreaRecords)
	{
		netFteo::Spatial::TEntitySpatial^ ES = gcnew netFteo::Spatial::TEntitySpatial();
		//ES->id ???
		//netFteo::Spatial::TMyPolygon^ ResultPoly = gcnew netFteo::Spatial::TMyPolygon();

		std::list<fteo::api::TLayer>::const_iterator lt = Layers->Items->begin();

		for (lt = Layers->Items->begin(); lt != Layers->Items->end(); lt++)
		{
			/*
			if (lt->Geometric_Type == 1) //here polygon of fteo
			{
				if (strcmp(lt->LayerType, "OUT") == 0) // out ring
				{
					ResultPoly->ImportRing(BuildRing(SourcePoints, lt->Layer_ID, AreaRecords));
					ResultPoly->Definition = fteo::NETWrappers::CharToString(lt->LayerName);
					ResultPoly->id = lt->Layer_ID; //
				}

				//TODO: test here incoming child rings
				if (strcmp(lt->LayerType, "IN") == 0) // child ring
				{
					if (ResultPoly->id == lt->ParentLayer_ID) // if child is for this polygon
						ResultPoly->Childs->Add(BuildRing(SourcePoints, lt->Layer_ID, AreaRecords));
				}
			}
			*/
			//Check already :
			ES->Add(BuildPolygon(lt->Layer_ID, SourcePoints, Layers, AreaRecords));
		}
		return ES;
	}

	private: netFteo::Spatial::TMyPolygon^ BuildPolygon(int Feature_id, fteo::api::TPoints* SourcePoints, fteo::api::TDataRecords< fteo::api::TLayer>* Layers, fteo::api::TDataRecords< fteo::api::TAreaRecord>* AreaRecords)
	{
		netFteo::Spatial::TMyPolygon^ ResultPoly = gcnew netFteo::Spatial::TMyPolygon();

		std::list<fteo::api::TLayer>::const_iterator lt = Layers->Items->begin();

		for (lt = Layers->Items->begin(); lt != Layers->Items->end(); lt++)
		{
			if (lt->Geometric_Type == 1) //here polygon of fteo
				if (lt->Layer_ID == Feature_id)
				{
					if (strcmp(lt->LayerType, "OUT") == 0) // out ring
					{
						ResultPoly->ImportRing(BuildRing(SourcePoints, lt->Layer_ID, AreaRecords));
						ResultPoly->Definition = fteo::NETWrappers::CharToString(lt->LayerName);
						ResultPoly->id = lt->Layer_ID; //
					}

					//TODO: test here incoming child rings
					if (strcmp(lt->LayerType, "IN") == 0) // child ring
					{
						if (lt->ParentLayer_ID == Feature_id) // if child is for this polygon
							ResultPoly->Childs->Add(BuildRing(SourcePoints, lt->Layer_ID, AreaRecords));
					}
				}
		}
		return ResultPoly;
	}

	private: System::Void ContourEditorForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		KPT = new fteo::api::TMyContours();
		fteo::firebird::Loader^ Ld = gcnew fteo::firebird::Loader();
		fteo::api::TPoints* Points = Ld->LoadPoints(FteoDBHandle, this->Item_id)->API;
		fteo::api::TDataRecords< fteo::api::TLayer>* Layers = Ld->LoadLayers(FteoDBHandle, this->Item_id);
		fteo::api::TDataRecords< fteo::api::TAreaRecord>* AreaRecords = Ld->LoadAreaRecords(FteoDBHandle, this->Item_id);
		// let load and stress function:
		/*
		fteo::api::TMyList<fteo::api::TLayers>* lst = new fteo::api::TMyList<fteo::api::TLayers>();
		for (int pt = 0; pt <= 100; pt++)
		{
			fteo::api::TLayers* Layers = Ld->LoadLayers(FteoDBHandle, this->Item_id);
			lst->Add(Layers);
			delete(Layers);
		}
		int Count = lst->Count();
		int Count_Item0 = lst->GetByIndex(0)->ItemsCount();
		delete(lst);
		*/

		//netFteo::Spatial::TEntitySpatial^ ES = BuildES(Points, Layers, AreaRecords);
		ES = BuildES(Points, Layers, AreaRecords);
		//netFteo::ObjectLister::ListEntSpat()
		//ListEditorData(Layers);
		ListEditorDataES(ES);
		free(Layers);
		free(AreaRecords);
	}

	private: System::Void mifôàéëToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->KPT_Open_mif();
	}
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->KPT_Open_mif();
	}
	private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		KPT_Clear(this->KPT);
	}
	private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void mifôàéëToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Open_mif();
	}
	private: System::Void dxfToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Open_dxf();

	}
	private: System::Void toolStrip1_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateKPTinfo();

	}
	private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Open_mif();
	}
	private: System::Void ïðîâåðèòüÏåðåñå÷åíèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		CheckSpatials(this->EditorData, this->KPT);
	}
	private: System::Void toolStripButton5_Click(System::Object^ sender, System::EventArgs^ e) {
		CheckSpatials(this->EditorData, this->KPT);
	}

	private: System::Void ñâîéñòâàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateKPTinfo();
	}
	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	}
	private: System::Void dxfToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		KPT_Open_dxf();

	}
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		UpdateKPTinfo();
	}
	private: System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e) {

		Toggle_Visualizer();
		/*
			  toolStripButton6->Enabled = false;
			  fteo::Win32xx::CViewerApp2 MyView;// = new  fteo::Win32xx::CViewerApp();
			  MyView.Run();
				 //->Create((HWND) this->Handle.ToPointer());
			  toolStripButton6->Enabled = true;
			  */


	}

	private: System::Void Toggle_Visualizer()
	{

		if (toolStripMI_ShowES->Checked)
		{
			ESwindow->Hide();
			toolStripMI_ShowES->Checked = false;
			//toolStripButton_VisualizerToggle.Checked = false;
			//ïðîñìîòðToolStripMenuItem.Checked = false;
			return;
		}


		ESwindow->Title = "Âèçóàëèçàöèÿ ÏÄ (WPF)";
		ViewWindow = gcnew netFteo::EntityViewer();
		ViewWindow->Definition = "Viewer Created ok";
		ESwindow->Content = ViewWindow;
		ESwindow->MinHeight = 300; ESwindow->MinWidth = 500;
		ESwindow->Height = this->Height;  //576 ? just added to have a smaller control (Window)
		ESwindow->Width = 810;

		ESwindow->Top = this->Top; ESwindow->Left = this->Left + 1 + this->Width;
		ESwindow->Show();// ShowDialog();
						// checkonClick = true òîãäà íå íóæíî ýòî: 
		toolStripMI_ShowES->Checked = true;
		//toolStripButton_VisualizerToggle.Checked = true;
		//ïðîñìîòðToolStripMenuItem.Checked = true;

		/*
		if (TV_Parcels.SelectedNode != null)
			if (TV_Parcels.SelectedNode.Name.Contains("SPElem."))
			{
				ListSelectedNode(TV_Parcels.SelectedNode);
			}
		*/
	}



	private: System::Void GeometryToSpatialView(ListView^ LV, netFteo::Spatial::IGeometry^ Feature)
	{
		/*
		if (Feature)
		{
			if (! ViewWindow ) ViewWindow->Spatial = NULL; // ñîòðåì êàðòèíêó (ïîñëåäíþþ)
			return;
		}
		*/

		// Visualizer check:
		if (toolStripMI_ShowES->Checked)
		{
			ViewWindow->Spatial = Feature;
			//ViewWindow.label2.Content = poly.Definition;
			ViewWindow->BringIntoView();
			ViewWindow->CreateView(Feature);
		}
	}

	private: System::Void ListSelectedNode(TreeNode^ STrN)
	{
		//if (STrN == NULL) return;
		toolStripStatusLabel1->Text = STrN->Name;
		//clear items in any case:
		listView1->Items->Clear();
		listView1->Controls->Clear();
		listView1->View = View::Details;

		//listView_Properties.Items.Clear();
		//listView_Properties.Controls.Clear();
		//GeometryToSpatialView(listView1, null);


		if (STrN->Name->Contains("ES."))
		{
			netFteo::Spatial::IGeometry^ Entity = (netFteo::Spatial::IGeometry^)ES;
			if (Entity->TypeName == "netFteo.Spatial.TEntitySpatial")
			{
				//GeometryToSpatialView(listView1, Entity);
				Entity->ShowasListItems(listView1, true); //"netFteo.Spatial.TEntitySpatial"
				//PropertiesToListView(listView_Properties, Entity);
			}
		}


		if (STrN->Name->Contains("SPElem."))
		{
			std::string::size_type sz;   // alias of size_t

			netFteo::Spatial::IGeometry^ Entity = (netFteo::Spatial::IGeometry^)ES->GetFeature(Convert::ToInt32(STrN->Name->Substring(7)));
			if (Entity)
			{
				GeometryToSpatialView(listView1, Entity);
				Entity->ShowasListItems(listView1, true);
				//PropertiesToListView(listView_Properties, Entity);
			}
		}
	}

	private: System::Void TreeView1_NodeMouseClick(System::Object^ sender, System::Windows::Forms::TreeNodeMouseClickEventArgs^ e) {
		ListSelectedNode(e->Node);
	}

	private: System::Void TreeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
		ListSelectedNode(e->Node);
	}

	private: System::Void ToolStripMI_ShowES_Click(System::Object^ sender, System::EventArgs^ e) {
		Toggle_Visualizer();
	}

private: System::Void ContourEditorForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (ESwindow)
	{
		ESwindow->Close();
	}
}
};
}
