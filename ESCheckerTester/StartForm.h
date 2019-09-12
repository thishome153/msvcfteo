#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

// в каком месте в форму вставлять включение?
//
//#include "MP_v06.h"

namespace ESCheckerTester {

	/// <summary>
	/// Summary for StartForm
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class StartForm : public System::Windows::Forms::Form
	{
	public:

		StartForm(void)
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
		~StartForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::MenuStrip^  menuStrip1;
    protected: 
    private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
    private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
    private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
    private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
    private: System::Windows::Forms::ToolStripMenuItem^  printToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  printPreviewToolStripMenuItem;
    private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
    private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  undoToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  redoToolStripMenuItem;
    private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
    private: System::Windows::Forms::ToolStripMenuItem^  cutToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  copyToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  pasteToolStripMenuItem;
    private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
    private: System::Windows::Forms::ToolStripMenuItem^  selectAllToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  toolsToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  customizeToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  contentsToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  indexToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  searchToolStripMenuItem;
    private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;
    private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;

    private: System::Windows::Forms::ToolStrip^  toolStrip1;
    private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
    private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator6;
    private: System::Windows::Forms::StatusStrip^  statusStrip1;
    private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
    private: System::Windows::Forms::ToolStripButton^  toolStripButton2;













































    private: System::ComponentModel::IContainer^  components;
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
        System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StartForm::typeid));
        this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
        this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
        this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
        this->printToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->printPreviewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
        this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
        this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
        this->selectAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->customizeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->contentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->indexToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->searchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
        this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
        this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
        this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
        this->toolStripSeparator6 = (gcnew System::Windows::Forms::ToolStripSeparator());
        this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
        this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
        this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
        this->menuStrip1->SuspendLayout();
        this->toolStrip1->SuspendLayout();
        this->statusStrip1->SuspendLayout();
        this->SuspendLayout();
        // 
        // menuStrip1
        // 
        this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->fileToolStripMenuItem, 
          this->editToolStripMenuItem, this->toolsToolStripMenuItem, this->helpToolStripMenuItem});
        this->menuStrip1->Location = System::Drawing::Point(0, 0);
        this->menuStrip1->Name = L"menuStrip1";
        this->menuStrip1->Size = System::Drawing::Size(770, 24);
        this->menuStrip1->TabIndex = 0;
        this->menuStrip1->Text = L"menuStrip1";
        // 
        // fileToolStripMenuItem
        // 
        this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {this->newToolStripMenuItem, 
          this->openToolStripMenuItem, this->toolStripSeparator, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->toolStripSeparator1, 
          this->printToolStripMenuItem, this->printPreviewToolStripMenuItem, this->toolStripSeparator2, this->exitToolStripMenuItem});
        this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
        this->fileToolStripMenuItem->Size = System::Drawing::Size(35, 20);
        this->fileToolStripMenuItem->Text = L"&File";
        // 
        // newToolStripMenuItem
        // 
        this->newToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"newToolStripMenuItem.Image")));
        this->newToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
        this->newToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
        this->newToolStripMenuItem->Size = System::Drawing::Size(151, 22);
        this->newToolStripMenuItem->Text = L"&New";
        // 
        // openToolStripMenuItem
        // 
        this->openToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"openToolStripMenuItem.Image")));
        this->openToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
        this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
        this->openToolStripMenuItem->Size = System::Drawing::Size(151, 22);
        this->openToolStripMenuItem->Text = L"&Open";
        // 
        // toolStripSeparator
        // 
        this->toolStripSeparator->Name = L"toolStripSeparator";
        this->toolStripSeparator->Size = System::Drawing::Size(148, 6);
        // 
        // saveToolStripMenuItem
        // 
        this->saveToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"saveToolStripMenuItem.Image")));
        this->saveToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
        this->saveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
        this->saveToolStripMenuItem->Size = System::Drawing::Size(151, 22);
        this->saveToolStripMenuItem->Text = L"&Save";
        // 
        // saveAsToolStripMenuItem
        // 
        this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
        this->saveAsToolStripMenuItem->Size = System::Drawing::Size(151, 22);
        this->saveAsToolStripMenuItem->Text = L"Save &As";
        // 
        // toolStripSeparator1
        // 
        this->toolStripSeparator1->Name = L"toolStripSeparator1";
        this->toolStripSeparator1->Size = System::Drawing::Size(148, 6);
        // 
        // printToolStripMenuItem
        // 
        this->printToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"printToolStripMenuItem.Image")));
        this->printToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->printToolStripMenuItem->Name = L"printToolStripMenuItem";
        this->printToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
        this->printToolStripMenuItem->Size = System::Drawing::Size(151, 22);
        this->printToolStripMenuItem->Text = L"&Print";
        // 
        // printPreviewToolStripMenuItem
        // 
        this->printPreviewToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"printPreviewToolStripMenuItem.Image")));
        this->printPreviewToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->printPreviewToolStripMenuItem->Name = L"printPreviewToolStripMenuItem";
        this->printPreviewToolStripMenuItem->Size = System::Drawing::Size(151, 22);
        this->printPreviewToolStripMenuItem->Text = L"Print Pre&view";
        // 
        // toolStripSeparator2
        // 
        this->toolStripSeparator2->Name = L"toolStripSeparator2";
        this->toolStripSeparator2->Size = System::Drawing::Size(148, 6);
        // 
        // exitToolStripMenuItem
        // 
        this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
        this->exitToolStripMenuItem->Size = System::Drawing::Size(151, 22);
        this->exitToolStripMenuItem->Text = L"E&xit";
        this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &StartForm::exitToolStripMenuItem_Click);
        // 
        // editToolStripMenuItem
        // 
        this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {this->undoToolStripMenuItem, 
          this->redoToolStripMenuItem, this->toolStripSeparator3, this->cutToolStripMenuItem, this->copyToolStripMenuItem, this->pasteToolStripMenuItem, 
          this->toolStripSeparator4, this->selectAllToolStripMenuItem});
        this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
        this->editToolStripMenuItem->Size = System::Drawing::Size(37, 20);
        this->editToolStripMenuItem->Text = L"&Edit";
        // 
        // undoToolStripMenuItem
        // 
        this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
        this->undoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
        this->undoToolStripMenuItem->Size = System::Drawing::Size(150, 22);
        this->undoToolStripMenuItem->Text = L"&Undo";
        // 
        // redoToolStripMenuItem
        // 
        this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
        this->redoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Y));
        this->redoToolStripMenuItem->Size = System::Drawing::Size(150, 22);
        this->redoToolStripMenuItem->Text = L"&Redo";
        // 
        // toolStripSeparator3
        // 
        this->toolStripSeparator3->Name = L"toolStripSeparator3";
        this->toolStripSeparator3->Size = System::Drawing::Size(147, 6);
        // 
        // cutToolStripMenuItem
        // 
        this->cutToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"cutToolStripMenuItem.Image")));
        this->cutToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
        this->cutToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
        this->cutToolStripMenuItem->Size = System::Drawing::Size(150, 22);
        this->cutToolStripMenuItem->Text = L"Cu&t";
        // 
        // copyToolStripMenuItem
        // 
        this->copyToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"copyToolStripMenuItem.Image")));
        this->copyToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
        this->copyToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
        this->copyToolStripMenuItem->Size = System::Drawing::Size(150, 22);
        this->copyToolStripMenuItem->Text = L"&Copy";
        // 
        // pasteToolStripMenuItem
        // 
        this->pasteToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pasteToolStripMenuItem.Image")));
        this->pasteToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
        this->pasteToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
        this->pasteToolStripMenuItem->Size = System::Drawing::Size(150, 22);
        this->pasteToolStripMenuItem->Text = L"&Paste";
        // 
        // toolStripSeparator4
        // 
        this->toolStripSeparator4->Name = L"toolStripSeparator4";
        this->toolStripSeparator4->Size = System::Drawing::Size(147, 6);
        // 
        // selectAllToolStripMenuItem
        // 
        this->selectAllToolStripMenuItem->Name = L"selectAllToolStripMenuItem";
        this->selectAllToolStripMenuItem->Size = System::Drawing::Size(150, 22);
        this->selectAllToolStripMenuItem->Text = L"Select &All";
        // 
        // toolsToolStripMenuItem
        // 
        this->toolsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->customizeToolStripMenuItem, 
          this->optionsToolStripMenuItem});
        this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
        this->toolsToolStripMenuItem->Size = System::Drawing::Size(44, 20);
        this->toolsToolStripMenuItem->Text = L"&Tools";
        // 
        // customizeToolStripMenuItem
        // 
        this->customizeToolStripMenuItem->Name = L"customizeToolStripMenuItem";
        this->customizeToolStripMenuItem->Size = System::Drawing::Size(134, 22);
        this->customizeToolStripMenuItem->Text = L"&Customize";
        // 
        // optionsToolStripMenuItem
        // 
        this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
        this->optionsToolStripMenuItem->Size = System::Drawing::Size(134, 22);
        this->optionsToolStripMenuItem->Text = L"&Options";
        // 
        // helpToolStripMenuItem
        // 
        this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->contentsToolStripMenuItem, 
          this->indexToolStripMenuItem, this->searchToolStripMenuItem, this->toolStripSeparator5, this->aboutToolStripMenuItem});
        this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
        this->helpToolStripMenuItem->Size = System::Drawing::Size(40, 20);
        this->helpToolStripMenuItem->Text = L"&Help";
        // 
        // contentsToolStripMenuItem
        // 
        this->contentsToolStripMenuItem->Name = L"contentsToolStripMenuItem";
        this->contentsToolStripMenuItem->Size = System::Drawing::Size(129, 22);
        this->contentsToolStripMenuItem->Text = L"&Contents";
        // 
        // indexToolStripMenuItem
        // 
        this->indexToolStripMenuItem->Name = L"indexToolStripMenuItem";
        this->indexToolStripMenuItem->Size = System::Drawing::Size(129, 22);
        this->indexToolStripMenuItem->Text = L"&Index";
        // 
        // searchToolStripMenuItem
        // 
        this->searchToolStripMenuItem->Name = L"searchToolStripMenuItem";
        this->searchToolStripMenuItem->Size = System::Drawing::Size(129, 22);
        this->searchToolStripMenuItem->Text = L"&Search";
        // 
        // toolStripSeparator5
        // 
        this->toolStripSeparator5->Name = L"toolStripSeparator5";
        this->toolStripSeparator5->Size = System::Drawing::Size(126, 6);
        // 
        // aboutToolStripMenuItem
        // 
        this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
        this->aboutToolStripMenuItem->Size = System::Drawing::Size(129, 22);
        this->aboutToolStripMenuItem->Text = L"&About...";
        // 
        // toolStrip1
        // 
        this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->toolStripButton1, 
          this->toolStripSeparator6, this->toolStripButton2});
        this->toolStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::Flow;
        this->toolStrip1->Location = System::Drawing::Point(0, 24);
        this->toolStrip1->Name = L"toolStrip1";
        this->toolStrip1->Size = System::Drawing::Size(770, 23);
        this->toolStrip1->TabIndex = 0;
        this->toolStrip1->Text = L"toolStrip1";
        // 
        // toolStripButton1
        // 
        this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
        this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
        this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->toolStripButton1->Name = L"toolStripButton1";
        this->toolStripButton1->Size = System::Drawing::Size(23, 20);
        this->toolStripButton1->Text = L"toolStripButton1";
        this->toolStripButton1->Click += gcnew System::EventHandler(this, &StartForm::toolStripButton1_Click);
        // 
        // toolStripSeparator6
        // 
        this->toolStripSeparator6->Name = L"toolStripSeparator6";
        this->toolStripSeparator6->Size = System::Drawing::Size(6, 23);
        // 
        // toolStripButton2
        // 
        this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
        this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton2.Image")));
        this->toolStripButton2->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
        this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
        this->toolStripButton2->Name = L"toolStripButton2";
        this->toolStripButton2->Size = System::Drawing::Size(23, 20);
        this->toolStripButton2->Text = L"toolStripButton2";
        this->toolStripButton2->Click += gcnew System::EventHandler(this, &StartForm::toolStripButton2_Click);
        // 
        // statusStrip1
        // 
        this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
        this->statusStrip1->Location = System::Drawing::Point(0, 498);
        this->statusStrip1->Name = L"statusStrip1";
        this->statusStrip1->Size = System::Drawing::Size(770, 22);
        this->statusStrip1->TabIndex = 1;
        this->statusStrip1->Text = L"statusStrip1";
        // 
        // toolStripStatusLabel1
        // 
        this->toolStripStatusLabel1->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top) 
          | System::Windows::Forms::ToolStripStatusLabelBorderSides::Right) 
          | System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
        this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
        this->toolStripStatusLabel1->Size = System::Drawing::Size(73, 17);
        this->toolStripStatusLabel1->Text = L"start form clr";
        // 
        // StartForm
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(770, 520);
        this->Controls->Add(this->statusStrip1);
        this->Controls->Add(this->toolStrip1);
        this->Controls->Add(this->menuStrip1);
        this->DoubleBuffered = true;
        this->MainMenuStrip = this->menuStrip1;
        this->Name = L"StartForm";
        this->Text = L"StartForm";
        this->menuStrip1->ResumeLayout(false);
        this->menuStrip1->PerformLayout();
        this->toolStrip1->ResumeLayout(false);
        this->toolStrip1->PerformLayout();
        this->statusStrip1->ResumeLayout(false);
        this->statusStrip1->PerformLayout();
        this->ResumeLayout(false);
        this->PerformLayout();

          }
#pragma endregion


#pragma region Self designed code
public : System::Void NewDataSet() {
            RRShema::MP_V06_data::MP^ mp = gcnew  RRShema::MP_V06_data::MP();
            mp->Conclusion = "За клю чение";
            mp->Appendix = gcnew array<RRShema::MP_V06_data::tAppendixAppliedFiles^> (1);
           }

#pragma endregion






private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
           this->Close();
         }
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
           this->Close();
           }
private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) {
          NewDataSet();
           }
};
}
