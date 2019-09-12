#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace FteoDBForms {

	/// <summary>
	/// Summary for wzCadworkEditor
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class wzCadworkEditor : public System::Windows::Forms::Form
	{
	public:
		wzCadworkEditor(void)
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
		~wzCadworkEditor()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Panel^  panel1;
    protected: 
    private: System::Windows::Forms::Button^  button1;
    private: System::Windows::Forms::Button^  OK_button;
    private: System::Windows::Forms::TextBox^  textBox_NumberCadWork;

    private: System::Windows::Forms::Label^  label1;

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
        this->panel1 = (gcnew System::Windows::Forms::Panel());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->OK_button = (gcnew System::Windows::Forms::Button());
        this->textBox_NumberCadWork = (gcnew System::Windows::Forms::TextBox());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->panel1->SuspendLayout();
        this->SuspendLayout();
        // 
        // panel1
        // 
        this->panel1->Controls->Add(this->button1);
        this->panel1->Controls->Add(this->OK_button);
        this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
        this->panel1->Location = System::Drawing::Point(0, 371);
        this->panel1->Margin = System::Windows::Forms::Padding(4);
        this->panel1->Name = L"panel1";
        this->panel1->Size = System::Drawing::Size(685, 43);
        this->panel1->TabIndex = 1;
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
        this->button1->Location = System::Drawing::Point(379, 8);
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
        this->OK_button->Location = System::Drawing::Point(250, 8);
        this->OK_button->Margin = System::Windows::Forms::Padding(4);
        this->OK_button->Name = L"OK_button";
        this->OK_button->Size = System::Drawing::Size(121, 28);
        this->OK_button->TabIndex = 0;
        this->OK_button->Text = L"ОK";
        this->OK_button->UseVisualStyleBackColor = true;
        this->OK_button->Click += gcnew System::EventHandler(this, &wzCadworkEditor::OK_button_Click);
        // 
        // textBox_NumberCadWork
        // 
        this->textBox_NumberCadWork->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
        this->textBox_NumberCadWork->Location = System::Drawing::Point(117, 9);
        this->textBox_NumberCadWork->Margin = System::Windows::Forms::Padding(4);
        this->textBox_NumberCadWork->MaxLength = 26;
        this->textBox_NumberCadWork->MinimumSize = System::Drawing::Size(0, 25);
        this->textBox_NumberCadWork->Name = L"textBox_NumberCadWork";
        this->textBox_NumberCadWork->Size = System::Drawing::Size(162, 20);
        this->textBox_NumberCadWork->TabIndex = 4;
        this->textBox_NumberCadWork->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
        // 
        // label1
        // 
        this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
        this->label1->Location = System::Drawing::Point(13, 9);
        this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(96, 28);
        this->label1->TabIndex = 3;
        this->label1->Text = L"Номер";
        this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        // 
        // wzCadworkEditor
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(685, 414);
        this->Controls->Add(this->textBox_NumberCadWork);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->panel1);
        this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
        this->Name = L"wzCadworkEditor";
        this->Text = L"wzCadworkEditor";
        this->panel1->ResumeLayout(false);
        this->ResumeLayout(false);
        this->PerformLayout();

          }
#pragma endregion
    private: System::Void OK_button_Click(System::Object^  sender, System::EventArgs^  e) {
               this->Close();
               }
};
}
