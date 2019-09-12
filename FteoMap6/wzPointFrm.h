#include "ClientUtils.h"
#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace FteoDBForms {

	/// <summary>
	/// Summary for wzPointFrm
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class wzPointFrm : public System::Windows::Forms::Form
	{
    public:    fteo::NET::wr_TMyPoint^ Point_Ed;

	public:
		wzPointFrm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
            Point_Ed = gcnew fteo::NET::wr_TMyPoint();
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~wzPointFrm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  OK_button;
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::TextBox^  textBox_Name;








    private: System::Windows::Forms::TextBox^  textBox_descr;
    private: System::Windows::Forms::ListView^  listView1;
    private: System::Windows::Forms::ColumnHeader^  columnHeader1;
    private: System::Windows::Forms::ColumnHeader^  columnHeader2;
    private: System::Windows::Forms::ColumnHeader^  columnHeader3;
    private: System::Windows::Forms::ColumnHeader^  columnHeader4;
    private: System::Windows::Forms::Label^  label7;












    protected: 

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
        System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Существующие", 
          L"0.01", L"0.02", L"0.003"}, -1));
        System::Windows::Forms::ListViewItem^  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Уточненные", 
          L"521356.231", L"1356245.231", L"152.256"}, -1, System::Drawing::Color::Empty, System::Drawing::SystemColors::GradientActiveCaption, 
          nullptr));
        System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(wzPointFrm::typeid));
        this->panel1 = (gcnew System::Windows::Forms::Panel());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->OK_button = (gcnew System::Windows::Forms::Button());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->textBox_Name = (gcnew System::Windows::Forms::TextBox());
        this->textBox_descr = (gcnew System::Windows::Forms::TextBox());
        this->listView1 = (gcnew System::Windows::Forms::ListView());
        this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
        this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
        this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
        this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
        this->label7 = (gcnew System::Windows::Forms::Label());
        this->panel1->SuspendLayout();
        this->SuspendLayout();
        // 
        // panel1
        // 
        this->panel1->Controls->Add(this->button1);
        this->panel1->Controls->Add(this->OK_button);
        this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
        this->panel1->Location = System::Drawing::Point(0, 170);
        this->panel1->Margin = System::Windows::Forms::Padding(4);
        this->panel1->Name = L"panel1";
        this->panel1->Size = System::Drawing::Size(394, 43);
        this->panel1->TabIndex = 0;
        // 
        // button1
        // 
        this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
        this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
          static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
        this->button1->FlatAppearance->BorderSize = 15;
        this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
          static_cast<System::Byte>(204)));
        this->button1->Location = System::Drawing::Point(202, 11);
        this->button1->Margin = System::Windows::Forms::Padding(4);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(121, 28);
        this->button1->TabIndex = 1;
        this->button1->Text = L"Отмена";
        this->button1->UseVisualStyleBackColor = true;
        // 
        // OK_button
        // 
        this->OK_button->DialogResult = System::Windows::Forms::DialogResult::Yes;
        this->OK_button->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
          static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
        this->OK_button->FlatAppearance->BorderSize = 15;
        this->OK_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->OK_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
          static_cast<System::Byte>(204)));
        this->OK_button->Location = System::Drawing::Point(73, 11);
        this->OK_button->Margin = System::Windows::Forms::Padding(4);
        this->OK_button->Name = L"OK_button";
        this->OK_button->Size = System::Drawing::Size(121, 28);
        this->OK_button->TabIndex = 0;
        this->OK_button->Text = L"ОK";
        this->OK_button->UseVisualStyleBackColor = true;
        this->OK_button->Click += gcnew System::EventHandler(this, &wzPointFrm::OK_button_Click);
        // 
        // label1
        // 
        this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
        this->label1->Location = System::Drawing::Point(0, 18);
        this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(96, 28);
        this->label1->TabIndex = 1;
        this->label1->Text = L"Имя";
        this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        // 
        // textBox_Name
        // 
        this->textBox_Name->Location = System::Drawing::Point(104, 21);
        this->textBox_Name->Margin = System::Windows::Forms::Padding(4);
        this->textBox_Name->MaxLength = 26;
        this->textBox_Name->Name = L"textBox_Name";
        this->textBox_Name->Size = System::Drawing::Size(90, 23);
        this->textBox_Name->TabIndex = 2;
        this->textBox_Name->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
        // 
        // textBox_descr
        // 
        this->textBox_descr->Location = System::Drawing::Point(202, 21);
        this->textBox_descr->Margin = System::Windows::Forms::Padding(4);
        this->textBox_descr->Name = L"textBox_descr";
        this->textBox_descr->Size = System::Drawing::Size(186, 23);
        this->textBox_descr->TabIndex = 11;
        this->textBox_descr->TextChanged += gcnew System::EventHandler(this, &wzPointFrm::textBox_descr_TextChanged);
        // 
        // listView1
        // 
        this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader1, this->columnHeader2, 
          this->columnHeader3, this->columnHeader4});
        this->listView1->GridLines = true;
        this->listView1->HideSelection = false;
        this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(2) {listViewItem1, listViewItem2});
        this->listView1->Location = System::Drawing::Point(4, 87);
        this->listView1->MultiSelect = false;
        this->listView1->Name = L"listView1";
        this->listView1->Size = System::Drawing::Size(388, 75);
        this->listView1->TabIndex = 12;
        this->listView1->UseCompatibleStateImageBehavior = false;
        this->listView1->View = System::Windows::Forms::View::Details;
        this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &wzPointFrm::listView1_SelectedIndexChanged);
        // 
        // columnHeader1
        // 
        this->columnHeader1->Text = L"Имя";
        this->columnHeader1->Width = 120;
        // 
        // columnHeader2
        // 
        this->columnHeader2->Text = L"x, м.";
        this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
        this->columnHeader2->Width = 100;
        // 
        // columnHeader3
        // 
        this->columnHeader3->Text = L"y,м.";
        this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
        this->columnHeader3->Width = 100;
        // 
        // columnHeader4
        // 
        this->columnHeader4->Text = L"z, м.";
        this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
        // 
        // label7
        // 
        this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
        this->label7->Location = System::Drawing::Point(0, 62);
        this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
        this->label7->Name = L"label7";
        this->label7->Size = System::Drawing::Size(388, 22);
        this->label7->TabIndex = 13;
        this->label7->Text = L"Ординаты";
        this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        // 
        // wzPointFrm
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(394, 213);
        this->Controls->Add(this->label7);
        this->Controls->Add(this->listView1);
        this->Controls->Add(this->textBox_descr);
        this->Controls->Add(this->textBox_Name);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->panel1);
        this->DoubleBuffered = true;
        this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
          static_cast<System::Byte>(204)));
        this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
        this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
        this->Margin = System::Windows::Forms::Padding(4);
        this->MaximizeBox = false;
        this->MinimizeBox = false;
        this->Name = L"wzPointFrm";
        this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
        this->Text = L"Точка";
        this->Load += gcnew System::EventHandler(this, &wzPointFrm::wzPointFrm_Load);
        this->Shown += gcnew System::EventHandler(this, &wzPointFrm::wzPointFrm_Shown);
        this->panel1->ResumeLayout(false);
        this->ResumeLayout(false);
        this->PerformLayout();

          }
#pragma endregion

private: System::Void SetupForm()
              {
              textBox_Name->Text = this->Point_Ed->Name;
             // textBox_x->Text = this->Point_Ed->x.ToString();
             // textBox_y->Text = this->Point_Ed->y.ToString();
             // textBox_z->Text = this->Point_Ed->z.ToString();
              textBox_descr->Text =fteo::NET::CharToString(this->Point_Ed->API->Description);
              listView1->Items[0]->SubItems[1]->Text = "-";
              listView1->Items[0]->SubItems[2]->Text = "-";
              listView1->Items[0]->SubItems[3]->Text = "-";

              listView1->Items[1]->SubItems[1]->Text = this->Point_Ed->API->NewOrd->x.ToString();
              listView1->Items[1]->SubItems[2]->Text = this->Point_Ed->API->NewOrd->y.ToString();
              listView1->Items[1]->SubItems[3]->Text = this->Point_Ed->API->NewOrd->z.ToString();
              this->Text = L"Точка "+ this->Point_Ed->id.ToString();
              }


private: System::Void SaveData()
              {
              this->Point_Ed->Name = textBox_Name->Text;
            //  this->Point_Ed->x = Convert::ToDouble(textBox_x->Text);
            //  this->Point_Ed->y = Convert::ToDouble(textBox_y->Text) ;
            //  this->Point_Ed->z = Convert::ToDouble(textBox_z->Text) ;
              this->Point_Ed->API->Description = fteo::NET::StringtoChar(textBox_descr->Text);
              }


private: System::Void wzPointFrm_Shown(System::Object^  sender, System::EventArgs^  e) {
               SetupForm();
               }

private: System::Void OK_button_Click(System::Object^  sender, System::EventArgs^  e) {
           SaveData();
           }
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
           }
private: System::Void textBox_descr_TextChanged(System::Object^  sender, System::EventArgs^  e) {
           }
private: System::Void wzPointFrm_Load(System::Object^  sender, System::EventArgs^  e) {
           }
};
}
