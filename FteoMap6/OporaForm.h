#include "fteo_core.h"
#include "wzPointFrm.h"

#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace fteo;


namespace FteoDBForms
{
	/// <summary>
	/// Summary for OporaForm
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class OporaForm : public System::Windows::Forms::Form
	{
	public:
		OporaForm(void)
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
		~OporaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::MenuStrip^ MainMenu;

	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàêğûòüToolStripMenuItem;
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::ToolStripMenuItem^ èìïîğòToolStripMenuItem;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	public:  fteo::NET::wr_TMyPoints^ Points;
	public:  int Selected_id;
	public:  int Mt; // Òåêóùàÿ òî÷íîñòü òî÷åê
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	public:
	private: System::Windows::Forms::ToolStripButton^ Button_Link;
	private: System::Windows::Forms::ToolStripButton^ Button_Properties;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîáàâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñâîéñòâàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ëèêâèäèğîâàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ êîïèğîâàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âñòàâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êàäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ óäàëèòüToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ OporaFrm_contextMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ ñâÿçàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñâîéñòâàToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñâÿçàòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripProgressBar^ toolStripProgressBar1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüÊàêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òåêñòîâûéÔàéëNToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ òåêñòîâûéÔàéëToolStripMenuItem;



	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OporaForm::typeid));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->MainMenu = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñâÿçàòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èìïîğòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÊàêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òåêñòîâûéÔàéëNToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñâîéñòâàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ëèêâèäèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->êîïèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñòàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êàäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->OporaFrm_contextMenu = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ñâÿçàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñâîéñòâàToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->Button_Link = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->Button_Properties = (gcnew System::Windows::Forms::ToolStripButton());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->òåêñòîâûéÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1->SuspendLayout();
			this->MainMenu->SuspendLayout();
			this->OporaFrm_contextMenu->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2, this->toolStripProgressBar1
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 251);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(272, 22);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->AutoSize = false;
			this->toolStripStatusLabel1->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(80, 17);
			this->toolStripStatusLabel1->Text = L"::";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->AutoSize = false;
			this->toolStripStatusLabel2->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(109, 17);
			this->toolStripStatusLabel2->Text = L"::";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->AutoSize = false;
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(50, 16);
			// 
			// MainMenu
			// 
			this->MainMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ìåíşToolStripMenuItem,
					this->ïğàâêàToolStripMenuItem, this->êàäToolStripMenuItem
			});
			this->MainMenu->Location = System::Drawing::Point(0, 0);
			this->MainMenu->Name = L"MainMenu";
			this->MainMenu->Size = System::Drawing::Size(272, 24);
			this->MainMenu->TabIndex = 1;
			this->MainMenu->Text = L"menuStrip1";
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ñâÿçàòüToolStripMenuItem1,
					this->èìïîğòToolStripMenuItem, this->ñîõğàíèòüToolStripMenuItem, this->ñîõğàíèòüÊàêToolStripMenuItem, this->çàêğûòüToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			this->ìåíşToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ìåíşToolStripMenuItem->Text = L"Ìåíş";
			// 
			// ñâÿçàòüToolStripMenuItem1
			// 
			this->ñâÿçàòüToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñâÿçàòüToolStripMenuItem1.Image")));
			this->ñâÿçàòüToolStripMenuItem1->Name = L"ñâÿçàòüToolStripMenuItem1";
			this->ñâÿçàòüToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->ñâÿçàòüToolStripMenuItem1->Text = L"Ñâÿçàòü";
			this->ñâÿçàòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &OporaForm::ñâÿçàòüToolStripMenuItem1_Click);
			// 
			// èìïîğòToolStripMenuItem
			// 
			this->èìïîğòToolStripMenuItem->Name = L"èìïîğòToolStripMenuItem";
			this->èìïîğòToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->èìïîğòToolStripMenuItem->Text = L"Èìïîğò...";
			this->èìïîğòToolStripMenuItem->Click += gcnew System::EventHandler(this, &OporaForm::èìïîğòToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"Ñîõğàíèòü";
			// 
			// ñîõğàíèòüÊàêToolStripMenuItem
			// 
			this->ñîõğàíèòüÊàêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->òåêñòîâûéÔàéëNToolStripMenuItem,
					this->òåêñòîâûéÔàéëToolStripMenuItem
			});
			this->ñîõğàíèòüÊàêToolStripMenuItem->Name = L"ñîõğàíèòüÊàêToolStripMenuItem";
			this->ñîõğàíèòüÊàêToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ñîõğàíèòüÊàêToolStripMenuItem->Text = L"Ñîõğàíèòü êàê....";
			// 
			// òåêñòîâûéÔàéëNToolStripMenuItem
			// 
			this->òåêñòîâûéÔàéëNToolStripMenuItem->Name = L"òåêñòîâûéÔàéëNToolStripMenuItem";
			this->òåêñòîâûéÔàéëNToolStripMenuItem->Size = System::Drawing::Size(250, 22);
			this->òåêñòîâûéÔàéëNToolStripMenuItem->Text = L"Òåêñòîâûé ôàéë NumXYZD 2015";
			this->òåêñòîâûéÔàéëNToolStripMenuItem->Click += gcnew System::EventHandler(this, &OporaForm::òåêñòîâûéÔàéëNToolStripMenuItem_Click);
			// 
			// çàêğûòüToolStripMenuItem
			// 
			this->çàêğûòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"çàêğûòüToolStripMenuItem.Image")));
			this->çàêğûòüToolStripMenuItem->Name = L"çàêğûòüToolStripMenuItem";
			this->çàêğûòüToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->çàêğûòüToolStripMenuItem->Text = L"Çàêğûòü";
			this->çàêğûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &OporaForm::çàêğûòüToolStripMenuItem_Click);
			// 
			// ïğàâêàToolStripMenuItem
			// 
			this->ïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->äîáàâèòüToolStripMenuItem,
					this->ñâîéñòâàToolStripMenuItem, this->ëèêâèäèğîâàòüToolStripMenuItem, this->toolStripMenuItem1, this->êîïèğîâàòüToolStripMenuItem,
					this->âñòàâèòüToolStripMenuItem
			});
			this->ïğàâêàToolStripMenuItem->Name = L"ïğàâêàToolStripMenuItem";
			this->ïğàâêàToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->ïğàâêàToolStripMenuItem->Text = L"Ïğàâêà";
			// 
			// äîáàâèòüToolStripMenuItem
			// 
			this->äîáàâèòüToolStripMenuItem->Name = L"äîáàâèòüToolStripMenuItem";
			this->äîáàâèòüToolStripMenuItem->Size = System::Drawing::Size(158, 22);
			this->äîáàâèòüToolStripMenuItem->Text = L"Äîáàâèòü";
			// 
			// ñâîéñòâàToolStripMenuItem
			// 
			this->ñâîéñòâàToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñâîéñòâàToolStripMenuItem.Image")));
			this->ñâîéñòâàToolStripMenuItem->Name = L"ñâîéñòâàToolStripMenuItem";
			this->ñâîéñòâàToolStripMenuItem->Size = System::Drawing::Size(158, 22);
			this->ñâîéñòâàToolStripMenuItem->Text = L"Ñâîéñòâà";
			this->ñâîéñòâàToolStripMenuItem->Click += gcnew System::EventHandler(this, &OporaForm::ñâîéñòâàToolStripMenuItem_Click);
			// 
			// ëèêâèäèğîâàòüToolStripMenuItem
			// 
			this->ëèêâèäèğîâàòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->óäàëèòüToolStripMenuItem });
			this->ëèêâèäèğîâàòüToolStripMenuItem->Name = L"ëèêâèäèğîâàòüToolStripMenuItem";
			this->ëèêâèäèğîâàòüToolStripMenuItem->Size = System::Drawing::Size(158, 22);
			this->ëèêâèäèğîâàòüToolStripMenuItem->Text = L"Ëèêâèäèğîâàòü";
			// 
			// óäàëèòüToolStripMenuItem
			// 
			this->óäàëèòüToolStripMenuItem->Name = L"óäàëèòüToolStripMenuItem";
			this->óäàëèòüToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->óäàëèòüToolStripMenuItem->Text = L"Óäàëèòü";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(155, 6);
			// 
			// êîïèğîâàòüToolStripMenuItem
			// 
			this->êîïèğîâàòüToolStripMenuItem->Name = L"êîïèğîâàòüToolStripMenuItem";
			this->êîïèğîâàòüToolStripMenuItem->Size = System::Drawing::Size(158, 22);
			this->êîïèğîâàòüToolStripMenuItem->Text = L"Êîïèğîâàòü";
			// 
			// âñòàâèòüToolStripMenuItem
			// 
			this->âñòàâèòüToolStripMenuItem->Name = L"âñòàâèòüToolStripMenuItem";
			this->âñòàâèòüToolStripMenuItem->Size = System::Drawing::Size(158, 22);
			this->âñòàâèòüToolStripMenuItem->Text = L"Âñòàâèòü";
			// 
			// êàäToolStripMenuItem
			// 
			this->êàäToolStripMenuItem->Name = L"êàäToolStripMenuItem";
			this->êàäToolStripMenuItem->Size = System::Drawing::Size(98, 20);
			this->êàäToolStripMenuItem->Text = L"Êàä. îïåğàöèè";
			// 
			// treeView1
			// 
			this->treeView1->BackColor = System::Drawing::Color::AntiqueWhite;
			this->treeView1->ContextMenuStrip = this->OporaFrm_contextMenu;
			this->treeView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->treeView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeView1->Location = System::Drawing::Point(0, 49);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(272, 202);
			this->treeView1->TabIndex = 2;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &OporaForm::treeView1_AfterSelect);
			this->treeView1->Click += gcnew System::EventHandler(this, &OporaForm::treeView1_Click);
			this->treeView1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &OporaForm::treeView1_KeyUp);
			// 
			// OporaFrm_contextMenu
			// 
			this->OporaFrm_contextMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñâÿçàòüToolStripMenuItem,
					this->ñâîéñòâàToolStripMenuItem1
			});
			this->OporaFrm_contextMenu->Name = L"OporaFrm_contextMenu";
			this->OporaFrm_contextMenu->Size = System::Drawing::Size(126, 48);
			// 
			// ñâÿçàòüToolStripMenuItem
			// 
			this->ñâÿçàòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñâÿçàòüToolStripMenuItem.Image")));
			this->ñâÿçàòüToolStripMenuItem->Name = L"ñâÿçàòüToolStripMenuItem";
			this->ñâÿçàòüToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->ñâÿçàòüToolStripMenuItem->Text = L"Ñâÿçàòü";
			this->ñâÿçàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &OporaForm::ñâÿçàòüToolStripMenuItem_Click);
			// 
			// ñâîéñòâàToolStripMenuItem1
			// 
			this->ñâîéñòâàToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñâîéñòâàToolStripMenuItem1.Image")));
			this->ñâîéñòâàToolStripMenuItem1->Name = L"ñâîéñòâàToolStripMenuItem1";
			this->ñâîéñòâàToolStripMenuItem1->Size = System::Drawing::Size(125, 22);
			this->ñâîéñòâàToolStripMenuItem1->Text = L"Ñâîéñòâà";
			this->ñâîéñòâàToolStripMenuItem1->Click += gcnew System::EventHandler(this, &OporaForm::ñâîéñòâàToolStripMenuItem1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Òåêñòîâûé ôàéë NumXYZD|*.txt|mif-ôàéëû|*.mif";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->Button_Link, this->toolStripSeparator1,
					this->Button_Properties
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(272, 25);
			this->toolStrip1->TabIndex = 3;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// Button_Link
			// 
			this->Button_Link->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Button_Link->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button_Link.Image")));
			this->Button_Link->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Button_Link->Name = L"Button_Link";
			this->Button_Link->Size = System::Drawing::Size(23, 22);
			this->Button_Link->Text = L"toolStripButton1";
			this->Button_Link->ToolTipText = L"Ñâÿçàòü";
			this->Button_Link->Click += gcnew System::EventHandler(this, &OporaForm::Button_Link_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->AutoSize = false;
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(15, 25);
			// 
			// Button_Properties
			// 
			this->Button_Properties->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Button_Properties->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button_Properties.Image")));
			this->Button_Properties->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Button_Properties->Name = L"Button_Properties";
			this->Button_Properties->Size = System::Drawing::Size(23, 22);
			this->Button_Properties->Text = L"toolStripButton2";
			this->Button_Properties->ToolTipText = L"Ñâîéñòâà";
			this->Button_Properties->Click += gcnew System::EventHandler(this, &OporaForm::Button_Properties_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Òåêñòîâûé ôàéë 2015|*.txt";
			// 
			// òåêñòîâûéÔàéëToolStripMenuItem
			// 
			this->òåêñòîâûéÔàéëToolStripMenuItem->Name = L"òåêñòîâûéÔàéëToolStripMenuItem";
			this->òåêñòîâûéÔàéëToolStripMenuItem->Size = System::Drawing::Size(250, 22);
			this->òåêñòîâûéÔàéëToolStripMenuItem->Text = L"Òåêñòîâûé ôàéë";
			this->òåêñòîâûéÔàéëToolStripMenuItem->Click += gcnew System::EventHandler(this, &OporaForm::ÒåêñòîâûéÔàéëToolStripMenuItem_Click);
			// 
			// OporaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(272, 273);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->MainMenu);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->MainMenu;
			this->MinimumSize = System::Drawing::Size(280, 300);
			this->Name = L"OporaForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Òî÷êè";
			this->Shown += gcnew System::EventHandler(this, &OporaForm::OporaForm_Shown);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->MainMenu->ResumeLayout(false);
			this->MainMenu->PerformLayout();
			this->OporaFrm_contextMenu->ResumeLayout(false);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma region Ôóíêöèè îáğàáîòêè

	private: System::Boolean EditPoint()
	{
		return false;
	}

	private: System::Boolean EditNode(TreeNode^ SelNode)
	{
		return false;
	}


	private: System::Void LinksTo()
	{
		this->DialogResult = System::Windows::Forms::DialogResult::Yes;
	}

	private: System::Object^ ChangeItem(TreeNode^ Node_)
	{
		if (!Node_) return nullptr;
		statusStrip1->Items[1]->Text = "";
		if (Node_->Tag)
		{
			System::Object^ O = Node_->Tag;
			if (O->GetType()->FullName == "fteo.NET.wr_TMyPoint")
			{
				fteo::NET::wr_TMyPoint^ Here = gcnew  fteo::NET::wr_TMyPoint();
				Here = (fteo::NET::wr_TMyPoint^) O; //!!
				this->Selected_id = Here->API->id;
				statusStrip1->Items[1]->Text = "id " + Selected_id.ToString();

				return O;
			}
			else return nullptr;
		}
		else return nullptr;
	}

	private: System::Boolean Call_OporaEditor(TreeNode^ SelNode) {

		System::Object^ T = ChangeItem(SelNode);
		if (T)
		{
			wzPointFrm^ PointEditor = gcnew wzPointFrm();
			/*
			   fteo::NET::wr_TMyPoint^ Here =gcnew  fteo::NET::wr_TMyPoint();
			   Here =(fteo::NET::wr_TMyPoint^) T; //!!
			   */
			   /*  //Chek working getPoint
			   fteo::firebird::Loader^ LDTest = gcnew fteo::firebird::Loader();
			   fteo::NET::wr_TMyPoints^ AllPoints =  LDTest->LoadPoints(FteoDBHandle, Points->API->Parent_Id);
			   AllPoints =       LDTest->LoadPoints(FteoDBHandle, Points->API->Parent_Id);
			   fteo::NET::wr_TMyPoint^ RePoint = AllPoints->GetPoint(Here->id);
			   PointEditor->Point_Ed = RePoint;
			   */
			PointEditor->Point_Ed = (fteo::NET::wr_TMyPoint^) T; // cast T ê òî÷êå!!
			if (PointEditor->ShowDialog(this) == System::Windows::Forms::DialogResult::Yes)
			{
				if (PointEditor->Point_Ed->API->changed)
				{
					SelNode->Text = "*" + PointEditor->Point_Ed->Name;
				}
				return true;
			}
		};
		return false;
	}

	private: System::Void ClearControls()
	{
		treeView1->Nodes->Clear();
	}

			 // Èìïîğò ôàéëà òèïà Fixosoft NumXYZD data format V2015
			 //
	private: System::Void ImportFixosoft2015(String^ FileName)
	{
		fteo::api::TextReader* myTR = new fteo::api::TextReader();
		fteo::api::TMyContours* impPoints = myTR->ImportNXYZD2015File(fteo::NET::StringtoChar(FileName));
		//if (impPoints)  this->Points->API->AppendPoints(impPoints);
	}


	private: System::Void OpenImportfile()
	{
		openFileDialog1->FilterIndex = 2; // begin from 1 !?
		if (openFileDialog1->ShowDialog(this) == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::StreamReader^ TR = System::IO::File::OpenText(openFileDialog1->FileName);
			System::String^ firstString = TR->ReadLine();
			if (firstString == L"#Fixosoft NumXYZD data format V2015")
			{
				ImportFixosoft2015(openFileDialog1->FileName);
				TR->Close();
			}

			// the mif:
			if (firstString->Contains(L"Version"))
			{
				fteo::api::TextReader* myTR = new fteo::api::TextReader();
				fteo::api::TMyContours* impPoints = myTR->Read_mif(fteo::NET::StringtoChar(openFileDialog1->FileName));
				TR->Close();
				fteo::NET::wr_TMyPoints^ Pts = gcnew fteo::NET::wr_TMyPoints();
				Pts->API->AppendPoints(impPoints->AsPoints());
				if (Pts->API->Count() > 0);
				ListPoints(treeView1, Pts);
			}

		}
	}



			 //  Ëèñòèíã òî÷åê â treeView
	private: System::Void ListPoints(TreeView^ TV, fteo::NET::wr_TMyPoints^ Pts)
	{
		if (!Pts) return;
		ClearControls();
		TV->BeginUpdate();
		int test = Pts->Count;
		this->Text = "Òî÷êè äëÿ id = " + Pts->id.ToString();

		for (int i = 0; i <= Pts->Count - 1; i++)
		{
			fteo::NET::wr_TMyPoint^ Pt = Pts->GetPointbyIndex(i);
			if (Pt) {
				TreeNode^ PointNode = TV->Nodes->Add(Pt->Name);
				PointNode->Tag = Pt;
				TreeNode^ xNode = PointNode->Nodes->Add("x = " + Pt->x.ToString());
				TreeNode^ yNode = PointNode->Nodes->Add("y = " + Pt->y.ToString());
				if (Pt->API->NewOrd->z != 0)
					TreeNode^ zNode = PointNode->Nodes->Add("z = " + Pt->z.ToString());
				if (Pt->API->DeltaGeopoint != 0)
					TreeNode^ MtNode = PointNode->Nodes->Add("Mt = " + Pt->API->DeltaGeopoint.ToString());

				//PointNode->ForeColor = fteo::Status::StatusToColor(Pt->API->Status);
			}
		}
		TV->EndUpdate();
	}

#pragma endregion

#pragma region Îáğàáîò÷èêè ñîáûòèé, àâòîìàòè÷åñêèå Designer generated:
	private: System::Void çàêğûòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void òåêñòîâûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void OporaForm_Shown(System::Object^ sender, System::EventArgs^ e) {

		ListPoints(treeView1, this->Points);
	}

	private: System::Void Button_Link_Click(System::Object^ sender, System::EventArgs^ e) {
		LinksTo();
	}
	private: System::Void ñâÿçàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		LinksTo();
	}
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	}

	private: System::Void ñâÿçàòüToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		LinksTo();
	}
	private: System::Void treeView1_Click(System::Object^ sender, System::EventArgs^ e) {
		ChangeItem(treeView1->SelectedNode);
	}
	private: System::Void treeView1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		ChangeItem(treeView1->SelectedNode);
	}
#pragma endregion
	private: System::Void ñâîéñòâàToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Call_OporaEditor(treeView1->SelectedNode);
	}
	private: System::Void Button_Properties_Click(System::Object^ sender, System::EventArgs^ e) {
		Call_OporaEditor(treeView1->SelectedNode);
	}
	private: System::Void ñâîéñòâàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Call_OporaEditor(treeView1->SelectedNode);
	}
	private: System::Void òåêñòîâûéÔàéëNToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->FileName = this->Points->id.ToString();
		if (saveFileDialog1->ShowDialog(this) == System::Windows::Forms::DialogResult::OK)
		{
			fteo::api::TextWriter* Twr = new fteo::api::TextWriter(false, this->Mt, fteo::NET::StringtoChar(saveFileDialog1->FileName));
			Twr->SaveAsFteo15(this->Points->API);
		}
	}

	private: System::Void mifToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void èìïîğòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenImportfile();
	}


	private: System::Void ÒåêñòîâûéÔàéëToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		saveFileDialog1->FileName = this->Points->id.ToString();
		if (saveFileDialog1->ShowDialog(this) == System::Windows::Forms::DialogResult::OK)
		{
			netFteo::IO::TextWriter^ TwrNET = gcnew netFteo::IO::TextWriter();
			netFteo::Spatial::TEntitySpatial^ ES = gcnew netFteo::Spatial::TEntitySpatial();
			netFteo::Spatial::PointList^ PointsNet = gcnew netFteo::Spatial::PointList();

			for (int pt = 0; pt <= this->Points->Count; pt++)
			{
				fteo::NET::wr_TMyPoint^ point = Points->GetPointbyIndex(pt);
				if (point->API)
				{
					netFteo::Spatial::TPoint^ LastPoint = PointsNet->AddPoint(point->Name, point->x, point->y, fteo::NET::CharToString(point->API->Description));
					LastPoint->z = point->z;
				}
			}
			ES->Add(PointsNet);
			TwrNET->SaveAsFixosoftTXT2018(saveFileDialog1->FileName, ES, System::Text::Encoding::Unicode);
		}

	}
	};
}

