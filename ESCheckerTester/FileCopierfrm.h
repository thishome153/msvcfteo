
#pragma once


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


#include "TFileList.h"

namespace ESCheckerTester {


	/// <summary>
	/// Summary for FileCopierfrm
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class FileCopierfrm : public System::Windows::Forms::Form
	{
	public:
      TFileList^ FileList;
		FileCopierfrm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
            this->FileList = gcnew TFileList();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FileCopierfrm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::ToolStripContainer^  toolStripContainer1;
    protected: 
    private: System::Windows::Forms::ToolStrip^  toolStrip1;
    private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
    private: System::Windows::Forms::ListView^  listView1;
    private: System::Windows::Forms::ColumnHeader^  columnHeader1;
    private: System::Windows::Forms::ColumnHeader^  columnHeader2;



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
        System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FileCopierfrm::typeid));
        System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L""));
        System::Windows::Forms::ListViewItem^  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(L""));
        System::Windows::Forms::ListViewItem^  listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(L""));
        this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
        this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
        this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
        this->listView1 = (gcnew System::Windows::Forms::ListView());
        this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
        this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
        this->toolStripContainer1->ContentPanel->SuspendLayout();
        this->toolStripContainer1->SuspendLayout();
        this->toolStrip1->SuspendLayout();
        this->SuspendLayout();
        // 
        // toolStripContainer1
        // 
        // 
        // toolStripContainer1.ContentPanel
        // 
        this->toolStripContainer1->ContentPanel->Controls->Add(this->toolStrip1);
        this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(742, 45);
        this->toolStripContainer1->Dock = System::Windows::Forms::DockStyle::Top;
        this->toolStripContainer1->Location = System::Drawing::Point(0, 0);
        this->toolStripContainer1->Name = L"toolStripContainer1";
        this->toolStripContainer1->Size = System::Drawing::Size(742, 70);
        this->toolStripContainer1->TabIndex = 0;
        this->toolStripContainer1->Text = L"toolStripContainer1";
        // 
        // toolStrip1
        // 
        this->toolStrip1->Dock = System::Windows::Forms::DockStyle::None;
        this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripButton1});
        this->toolStrip1->Location = System::Drawing::Point(21, 13);
        this->toolStrip1->Name = L"toolStrip1";
        this->toolStrip1->Size = System::Drawing::Size(64, 25);
        this->toolStrip1->TabIndex = 0;
        this->toolStrip1->Text = L"toolStrip1";
        // 
        // toolStripButton1
        // 
        this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
        this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
        this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->toolStripButton1->Name = L"toolStripButton1";
        this->toolStripButton1->Size = System::Drawing::Size(23, 22);
        this->toolStripButton1->Text = L"toolStripButton1";
        this->toolStripButton1->Click += gcnew System::EventHandler(this, &FileCopierfrm::toolStripButton1_Click);
        // 
        // listView1
        // 
        this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->columnHeader1, this->columnHeader2});
        this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(3) {listViewItem1, listViewItem2, 
          listViewItem3});
        this->listView1->Location = System::Drawing::Point(12, 76);
        this->listView1->MultiSelect = false;
        this->listView1->Name = L"listView1";
        this->listView1->Size = System::Drawing::Size(543, 270);
        this->listView1->TabIndex = 1;
        this->listView1->UseCompatibleStateImageBehavior = false;
        this->listView1->View = System::Windows::Forms::View::Details;
        // 
        // columnHeader1
        // 
        this->columnHeader1->Text = L"Исходный";
        this->columnHeader1->Width = 250;
        // 
        // columnHeader2
        // 
        this->columnHeader2->Text = L"Конечный";
        this->columnHeader2->Width = 250;
        // 
        // FileCopierfrm
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(742, 441);
        this->Controls->Add(this->listView1);
        this->Controls->Add(this->toolStripContainer1);
        this->DoubleBuffered = true;
        this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
        this->Name = L"FileCopierfrm";
        this->Text = L"Копирование файлов";
        this->toolStripContainer1->ContentPanel->ResumeLayout(false);
        this->toolStripContainer1->ContentPanel->PerformLayout();
        this->toolStripContainer1->ResumeLayout(false);
        this->toolStripContainer1->PerformLayout();
        this->toolStrip1->ResumeLayout(false);
        this->toolStrip1->PerformLayout();
        this->ResumeLayout(false);

          }
#pragma endregion
    private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
               System::Windows::Forms::OpenFileDialog^ openFileDialog1 = gcnew System::Windows::Forms::OpenFileDialog();
              openFileDialog1->Filter = "csv файлы Технокад|*.csv|Текстовые файлы|*.txt";
			 openFileDialog1->FilterIndex = 0;
			 if (openFileDialog1->ShowDialog(this) == System::Windows::Forms::DialogResult::OK)
				 {

                 this->FileList->Add(openFileDialog1->FileName);
               }
};
}
