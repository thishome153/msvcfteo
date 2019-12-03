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
		}
	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;

	private: System::Windows::Forms::ToolStripMenuItem^ dxfToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton6;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	public:
		fteo::api::TMyContours* EditorData; //��� ���������� � � ��� �������� ContourEditor.
		netFteo::Spatial::TEntitySpatial^ ES; // Also with NET
		int Item_id;

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
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ImportFteo_txt2015MenuItem;
	private: fteo::api::TMyContours* KPT;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::TreeView^ treeView1;

	private: System::Windows::Forms::ToolStripMenuItem^ csv����TechnoCADToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mif����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ csvToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ MenuItem_KPT_Prop_Poly;
	private: System::Windows::Forms::ToolStripMenuItem^ MenuItem_KPT_Prop_Points;
	private: System::Windows::Forms::TreeView^ treeView2;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripMenuItem^ mif����ToolStripMenuItem1;
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
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ImportFteo_txt2015MenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->csv����TechnoCADToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mif����ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dxfToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mif����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->csvToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dxfToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuItem_KPT_Prop_Poly = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuItem_KPT_Prop_Points = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->treeView2 = (gcnew System::Windows::Forms::TreeView());
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
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->Enabled = false;
			this->statusStrip1->Location = System::Drawing::Point(0, 512);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(740, 22);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����ToolStripMenuItem,
					this->���ToolStripMenuItem, this->������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(740, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->�������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ImportFteo_txt2015MenuItem,
					this->csv����TechnoCADToolStripMenuItem, this->mif����ToolStripMenuItem1, this->dxfToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(129, 22);
			this->toolStripMenuItem1->Text = L"������";
			// 
			// ImportFteo_txt2015MenuItem
			// 
			this->ImportFteo_txt2015MenuItem->Enabled = false;
			this->ImportFteo_txt2015MenuItem->Name = L"ImportFteo_txt2015MenuItem";
			this->ImportFteo_txt2015MenuItem->Size = System::Drawing::Size(235, 22);
			this->ImportFteo_txt2015MenuItem->Text = L"��������� ���� NXYZD, 2015";
			this->ImportFteo_txt2015MenuItem->Click += gcnew System::EventHandler(this, &ContourEditorForm::ImportFteo_txt2015MenuItem_Click);
			// 
			// csv����TechnoCADToolStripMenuItem
			// 
			this->csv����TechnoCADToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"csv����TechnoCADToolStripMenuItem.Image")));
			this->csv����TechnoCADToolStripMenuItem->Name = L"csv����TechnoCADToolStripMenuItem";
			this->csv����TechnoCADToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->csv����TechnoCADToolStripMenuItem->Text = L"csv ���� (TechnoCAD)";
			this->csv����TechnoCADToolStripMenuItem->Click += gcnew System::EventHandler(this, &ContourEditorForm::csv����TechnoCADToolStripMenuItem_Click);
			// 
			// mif����ToolStripMenuItem1
			// 
			this->mif����ToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mif����ToolStripMenuItem1.Image")));
			this->mif����ToolStripMenuItem1->Name = L"mif����ToolStripMenuItem1";
			this->mif����ToolStripMenuItem1->Size = System::Drawing::Size(235, 22);
			this->mif����ToolStripMenuItem1->Text = L"mif-����";
			this->mif����ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &ContourEditorForm::mif����ToolStripMenuItem1_Click);
			// 
			// dxfToolStripMenuItem
			// 
			this->dxfToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dxfToolStripMenuItem.Image")));
			this->dxfToolStripMenuItem->Name = L"dxfToolStripMenuItem";
			this->dxfToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->dxfToolStripMenuItem->Text = L"dxf-����";
			this->dxfToolStripMenuItem->Click += gcnew System::EventHandler(this, &ContourEditorForm::dxfToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ContourEditorForm::�������ToolStripMenuItem_Click);
			// 
			// ���ToolStripMenuItem
			// 
			this->���ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->�������ToolStripMenuItem,
					this->��������������������ToolStripMenuItem, this->��������ToolStripMenuItem, this->toolStripSeparator1, this->��������ToolStripMenuItem
			});
			this->���ToolStripMenuItem->Name = L"���ToolStripMenuItem";
			this->���ToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->���ToolStripMenuItem->Text = L"���";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->mif����ToolStripMenuItem,
					this->csvToolStripMenuItem, this->dxfToolStripMenuItem1
			});
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(208, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// mif����ToolStripMenuItem
			// 
			this->mif����ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mif����ToolStripMenuItem.Image")));
			this->mif����ToolStripMenuItem->Name = L"mif����ToolStripMenuItem";
			this->mif����ToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->mif����ToolStripMenuItem->Text = L"mif-����";
			this->mif����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ContourEditorForm::mif����ToolStripMenuItem_Click);
			// 
			// csvToolStripMenuItem
			// 
			this->csvToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"csvToolStripMenuItem.Image")));
			this->csvToolStripMenuItem->Name = L"csvToolStripMenuItem";
			this->csvToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->csvToolStripMenuItem->Text = L"csv";
			this->csvToolStripMenuItem->Click += gcnew System::EventHandler(this, &ContourEditorForm::csvToolStripMenuItem_Click);
			// 
			// dxfToolStripMenuItem1
			// 
			this->dxfToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dxfToolStripMenuItem1.Image")));
			this->dxfToolStripMenuItem1->Name = L"dxfToolStripMenuItem1";
			this->dxfToolStripMenuItem1->Size = System::Drawing::Size(129, 22);
			this->dxfToolStripMenuItem1->Text = L"dxf";
			this->dxfToolStripMenuItem1->Click += gcnew System::EventHandler(this, &ContourEditorForm::dxfToolStripMenuItem1_Click);
			// 
			// ��������������������ToolStripMenuItem
			// 
			this->��������������������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������������������ToolStripMenuItem.Image")));
			this->��������������������ToolStripMenuItem->Name = L"��������������������ToolStripMenuItem";
			this->��������������������ToolStripMenuItem->Size = System::Drawing::Size(208, 22);
			this->��������������������ToolStripMenuItem->Text = L"��������� �����������";
			this->��������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ContourEditorForm::��������������������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(208, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ContourEditorForm::��������ToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(205, 6);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->MenuItem_KPT_Prop_Poly,
					this->MenuItem_KPT_Prop_Points
			});
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(208, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ContourEditorForm::��������ToolStripMenuItem_Click);
			// 
			// MenuItem_KPT_Prop_Poly
			// 
			this->MenuItem_KPT_Prop_Poly->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MenuItem_KPT_Prop_Poly.Image")));
			this->MenuItem_KPT_Prop_Poly->Name = L"MenuItem_KPT_Prop_Poly";
			this->MenuItem_KPT_Prop_Poly->Size = System::Drawing::Size(139, 22);
			this->MenuItem_KPT_Prop_Poly->Text = L"���������";
			// 
			// MenuItem_KPT_Prop_Points
			// 
			this->MenuItem_KPT_Prop_Points->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MenuItem_KPT_Prop_Points.Image")));
			this->MenuItem_KPT_Prop_Points->Name = L"MenuItem_KPT_Prop_Points";
			this->MenuItem_KPT_Prop_Points->Size = System::Drawing::Size(139, 22);
			this->MenuItem_KPT_Prop_Points->Text = L"�����";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// treeView1
			// 
			this->treeView1->Dock = System::Windows::Forms::DockStyle::Left;
			this->treeView1->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeView1->Location = System::Drawing::Point(0, 49);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(342, 463);
			this->treeView1->TabIndex = 2;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// treeView2
			// 
			this->treeView2->BackColor = System::Drawing::SystemColors::Info;
			this->treeView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->treeView2->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeView2->Location = System::Drawing::Point(342, 49);
			this->treeView2->Name = L"treeView2";
			this->treeView2->Size = System::Drawing::Size(398, 463);
			this->treeView2->TabIndex = 3;
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
			this->toolStrip1->Size = System::Drawing::Size(740, 25);
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
			this->toolStripButton3->Size = System::Drawing::Size(71, 22);
			this->toolStripButton3->Text = L"�������";
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
			this->toolStripButton1->ToolTipText = L"������� ���";
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
			this->toolStripButton5->ToolTipText = L"�������� �����������";
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
			// ContourEditorForm
			// 
			this->ClientSize = System::Drawing::Size(740, 534);
			this->Controls->Add(this->treeView2);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(746, 400);
			this->Name = L"ContourEditorForm";
			this->Text = L"�������� ��������";
			this->Shown += gcnew System::EventHandler(this, &ContourEditorForm::ContourEditorForm_Shown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
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

	private: void CheckSpatials(fteo::api::TMyContours* editorData, fteo::api::TMyContours* KPTData) {


		/*
			// �������� �������� ��� �������
					 fteo::api::TLine* TestLine2 = new fteo::api::TLine(130171.5346,350715.5643,
																		130171.6311,350710.838 );
					 fteo::api::TOrdinate* ord21 = new fteo::api::TOrdinate(   130173.4576,350716.1108);
					// fteo::api::TOrdinate* ord22 = new fteo::api::TOrdinate(   130171.0457,350712.6269);
					 //����������� ������6 ������� �� �.����
					 fteo::api::TOrdinate* ord22 = new fteo::api::TOrdinate(   130171.9495,350713.9519);
					 fteo::api::TMyPoint* res1x2 = TestLine2->FindIntersect("#1-#2 ��������",ord21, ord22);
					 resPoints->AppendPoint(res1x2);
					 fteo::api::TLine* TestLine = new fteo::api::TLine(1000,0, 1000,2000);
					 fteo::api::TOrdinate* ord1 = new fteo::api::TOrdinate(   0,1000);
					 fteo::api::TOrdinate* ord2 = new fteo::api::TOrdinate(2000,1000);
					 // ����� ����������� 1000;1000 - � ������ (0,1000; 2000,1000)
					 fteo::api::TMyPoint* res1000x1000 = TestLine->FindIntersect("1000x1000",ord1, ord2);
					 resPoints->AppendPoint(res1000x1000);
					 // ��������� ����������:
					 // fteo::NET::Lister^ lstr = gcnew fteo::NET::Lister();
					 // lstr->ListPointsList(treeView1,  resPoints);

		*/
		fteo::api::TMyPoints* resPoints = new fteo::api::TMyPoints();

		for (int i = 0; i <= KPTData->Contour->Count() - 1; i++)
		{
			resPoints->AppendPoints(editorData->CheckIntersections(KPTData->Contour->GetByIndex(i)->EntitySpatial));
		}

		if (resPoints->Count() > 0)
		{
			SaveFileDialog^ sd = gcnew SaveFileDialog();
			sd->Filter = "��������� ���� (2015)|*.txt|��� �����|*.*";
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
		openFileDialog1->Filter = "��������� ���� (2015)|*.txt|��� �����|*.*";
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
		openFileDialog1->Filter = "csv ����� ��������|*.csv|��������� �����|*.txt";
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
		openFileDialog1->Filter = "mif �����|*.mif|��� �����|*.*";
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
		openFileDialog1->Filter = "dxf-�����|*.dxf|��� �����|*.*";
		openFileDialog1->FilterIndex = 0;
		if (openFileDialog1->ShowDialog(this) == System::Windows::Forms::DialogResult::OK)
		{
			fteo::api::TextReader* myTR = new fteo::api::TextReader();
			//fteo::api::TMyContours *impPoints = myTR->Read_dxf(fteo::NET::StringtoChar(openFileDialog1->FileName));
			this->EditorData = myTR->Read_dxf(fteo::NET::StringtoChar(openFileDialog1->FileName));
			ListEditorData(this->EditorData);
		};
	};

			 // ��������� ���������� ��� ��� ��� �������� �� ����������� �������� � ��������� ��� �����
	private: void KPT_OpenCSVTechnoCAD() {
		openFileDialog1->Filter = "csv ����� ��������|*.csv|��������� �����|*.txt";
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
		openFileDialog1->Filter = "mif �����|*.mif|��� �����|*.*";
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
		openFileDialog1->Filter = "dxf �����|*.dxf|��� �����|*.*";
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

	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void csv����TechnoCADToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->OpenCSVTechnoCAD();
	}

	private: System::Void ImportFteo_txt2015MenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->OpenFixosoft2015();
	}

	private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		KPT_Clear(this->KPT);
	}


	private: System::Void UpdateKPTinfo() {
		toolStripLabel1->Text = this->KPT->Contour->Count().ToString() +
			":: " + this->KPT->PointCount().ToString();
		MenuItem_KPT_Prop_Poly->Text = "��������� " + this->KPT->Contour->Count().ToString();
		MenuItem_KPT_Prop_Points->Text = "����� " + this->KPT->PointCount().ToString();
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

	private: System::Void ContourEditorForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		KPT = new fteo::api::TMyContours();
		fteo::firebird::Loader^ Ld = gcnew fteo::firebird::Loader();
		Ld->LoadLayers(FteoDBHandle,this->Item_id);
	}

	private: System::Void mif����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void mif����ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void ��������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		CheckSpatials(this->EditorData, this->KPT);
	}
	private: System::Void toolStripButton5_Click(System::Object^ sender, System::EventArgs^ e) {
		CheckSpatials(this->EditorData, this->KPT);
	}

	private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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

		/*
			  toolStripButton6->Enabled = false;
			  fteo::Win32xx::CViewerApp2 MyView;// = new  fteo::Win32xx::CViewerApp();
			  MyView.Run();
				 //->Create((HWND) this->Handle.ToPointer());
			  toolStripButton6->Enabled = true;
			  */


	}
	};
}
