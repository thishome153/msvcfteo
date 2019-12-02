

#include "AppCfg.h"
#include "NETWrappers.h"
#include "fteo_core.h"

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
	/// Summary for OptionsForm
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class OptionsForm : public System::Windows::Forms::Form
	{
	public:	fteo::TAppOptions^ Cfg;
			System::Collections::Generic::List< cspUtils::CertInfo^>^ Certificates;// global list of certififcates in MY_STORE
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ComboBox^ comboBox_Server;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox_Mt;
	private: System::Windows::Forms::TextBox^ textBox_Mt_SKPT;
	private: System::Windows::Forms::ComboBox^ Certs_listBox;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ Browse_button;


	public:

	public:
		//В сьорке NetFteo Прикрыл его: public:	netFteo::TCadwork^ Cadwork;	
	  // native класс будем использовать
		fteo::TWorkList* CadWorks;


	public: OptionsForm(void)
	{
		InitializeComponent();
		//
		//TODO: Add the constructor code here
		//
		Cfg = gcnew fteo::TAppOptions();
		// Для CLR:
		//Cadwork = gcnew netFteo::TCadwork();
		//Для native:
		//CadWork = new fteo::TMyObjList(1, CodeTypes::Exist);

	}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OptionsForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ textBox_UPasswrd;
	private: System::Windows::Forms::TextBox^ textBox_uname;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OptionsForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->Browse_button = (gcnew System::Windows::Forms::Button());
			this->comboBox_Server = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_UPasswrd = (gcnew System::Windows::Forms::TextBox());
			this->textBox_uname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox_Mt_SKPT = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Mt = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Certs_listBox = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(557, 217);
			this->tabControl1->TabIndex = 8;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->Browse_button);
			this->tabPage1->Controls->Add(this->comboBox_Server);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox_UPasswrd);
			this->tabPage1->Controls->Add(this->textBox_uname);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 24);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(549, 189);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"База данных";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// Browse_button
			// 
			this->Browse_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Browse_button.Image")));
			this->Browse_button->Location = System::Drawing::Point(511, 11);
			this->Browse_button->Name = L"Browse_button";
			this->Browse_button->Size = System::Drawing::Size(28, 27);
			this->Browse_button->TabIndex = 16;
			this->Browse_button->UseVisualStyleBackColor = true;
			this->Browse_button->Click += gcnew System::EventHandler(this, &OptionsForm::Browse_Database);
			// 
			// comboBox_Server
			// 
			this->comboBox_Server->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox_Server->FormattingEnabled = true;
			this->comboBox_Server->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"nas", L"192.168.0.4", L"geo-complex.com",
					L"82.119.136.82", L"localhost", L"127.0.0.1"
			});
			this->comboBox_Server->Location = System::Drawing::Point(164, 47);
			this->comboBox_Server->Name = L"comboBox_Server";
			this->comboBox_Server->Size = System::Drawing::Size(375, 24);
			this->comboBox_Server->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(14, 47);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 26);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Сервер";
			// 
			// textBox_UPasswrd
			// 
			this->textBox_UPasswrd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_UPasswrd->Location = System::Drawing::Point(164, 129);
			this->textBox_UPasswrd->Name = L"textBox_UPasswrd";
			this->textBox_UPasswrd->PasswordChar = '*';
			this->textBox_UPasswrd->Size = System::Drawing::Size(133, 23);
			this->textBox_UPasswrd->TabIndex = 13;
			this->textBox_UPasswrd->Text = L"masterkey";
			// 
			// textBox_uname
			// 
			this->textBox_uname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_uname->Location = System::Drawing::Point(164, 86);
			this->textBox_uname->Name = L"textBox_uname";
			this->textBox_uname->Size = System::Drawing::Size(133, 23);
			this->textBox_uname->TabIndex = 12;
			this->textBox_uname->Text = L"sysdba";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(14, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 26);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Пароль";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(14, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 26);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Имя пользователя";
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(14, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 26);
			this->label1->TabIndex = 9;
			this->label1->Text = L"База данных";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"/mnt/win_c/databases/test_fteo.gdb", L"/mnt/win_c/databases/fteo.gdb",
					L"/mnt/win_c/databases/CURRENTWORK.GDB", L"geo-complex.com:/mnt/win_c/databases/test_fteo.gdb", L"C:\\\\Designer.Local\\\\Databases$.local\\\\fteo.gdb",
					L"C:\\\\Work.local\\\\fteo.gdb"
			});
			this->comboBox1->Location = System::Drawing::Point(163, 11);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(342, 24);
			this->comboBox1->TabIndex = 8;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox_Mt_SKPT);
			this->tabPage2->Controls->Add(this->textBox_Mt);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Location = System::Drawing::Point(4, 24);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(549, 189);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Кадастровая деятельность";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox_Mt_SKPT
			// 
			this->textBox_Mt_SKPT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_Mt_SKPT->Location = System::Drawing::Point(263, 41);
			this->textBox_Mt_SKPT->Name = L"textBox_Mt_SKPT";
			this->textBox_Mt_SKPT->Size = System::Drawing::Size(41, 23);
			this->textBox_Mt_SKPT->TabIndex = 17;
			this->textBox_Mt_SKPT->Text = L"0";
			this->textBox_Mt_SKPT->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_Mt
			// 
			this->textBox_Mt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_Mt->Location = System::Drawing::Point(263, 11);
			this->textBox_Mt->Name = L"textBox_Mt";
			this->textBox_Mt->Size = System::Drawing::Size(41, 23);
			this->textBox_Mt->TabIndex = 16;
			this->textBox_Mt->Text = L"2";
			this->textBox_Mt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(8, 39);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(249, 26);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Точность вывода координат СКПТ";
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(8, 8);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(249, 27);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Точность вывода координат";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->Certs_listBox);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Location = System::Drawing::Point(4, 24);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(549, 189);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"ЭЦП";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(8, 54);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(533, 132);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Сертификат\r\n\r\nиб\r\n";
			// 
			// Certs_listBox
			// 
			this->Certs_listBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Certs_listBox->FormattingEnabled = true;
			this->Certs_listBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"/mnt/win_c/databases/test_fteo.gdb", L"/mnt/win_c/databases/fteo.gdb",
					L"/mnt/win_c/databases/CURRENTWORK.GDB", L"geo-complex.com:/mnt/win_c/databases/test_fteo.gdb", L"C:\\\\Designer.Local\\\\Databases$.local\\\\fteo.gdb",
					L"C:\\\\Work.local\\\\fteo.gdb"
			});
			this->Certs_listBox->Location = System::Drawing::Point(119, 12);
			this->Certs_listBox->Name = L"Certs_listBox";
			this->Certs_listBox->Size = System::Drawing::Size(376, 24);
			this->Certs_listBox->TabIndex = 11;
			this->Certs_listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &OptionsForm::Cert_ComboBox);
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(8, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 26);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Сертификат";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 217);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(557, 84);
			this->panel1->TabIndex = 9;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(51, 59);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(257, 30);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 27);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OptionsForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(164, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 27);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ok";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OptionsForm::button1_Click);
			// 
			// OptionsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(557, 301);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(701, 601);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(563, 326);
			this->Name = L"OptionsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Настройки";
			this->Load += gcnew System::EventHandler(this, &OptionsForm::OptionsForm_Load);
			this->Shown += gcnew System::EventHandler(this, &OptionsForm::OptionsForm_Shown);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Cfg->SetUserName(textBox_uname->Text);
		Cfg->SetDBName(comboBox1->Text);
		Cfg->SetServer(comboBox_Server->Text);
		Cfg->SetUserPwrd(textBox_UPasswrd->Text);
		Cfg->API->Mt_common = Convert::ToInt32(textBox_Mt->Text);
		Cfg->API->Mt_SKPT = Convert::ToInt32(textBox_Mt_SKPT->Text);
		Cfg->WriteINI();
		this->Close();

	}



	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


	private: System::Void OptionsForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		this->textBox_uname->Text = Cfg->GetUserNameW();
		this->comboBox1->Text = Cfg->GetDBNameW();
		this->textBox_UPasswrd->Text = Cfg->GetUserPwrdW();
		this->comboBox_Server->Text = Cfg->GetServerW();
		this->textBox_Mt->Text = Cfg->API->Mt_common.ToString();
		this->textBox_Mt_SKPT->Text = Cfg->API->Mt_SKPT.ToString();
	}

	private: System::Void bindingSource1_CurrentChanged(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void OptionsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Certs_listBox->Items->Clear();
		cspUtils::CadesWrapper^ cw = gcnew cspUtils::CadesWrapper();
		Certificates = cw->GetCertificatesObj();
		for each (cspUtils::CertInfo ^ var in Certificates)
			this->Certs_listBox->Items->Add(var->SubjectName);
	}

	private: System::Void Cert_ComboBox(System::Object^ sender, System::EventArgs^ e) {
		cspUtils::CertInfo^ curCert = Certificates[Certs_listBox->SelectedIndex];
		label8->Text = curCert->SubjectName + "\n\r" + curCert->SerialNumber+
			"\n\r Valide after:" + curCert->ValidNotAfter;
	}
	
	private: System::Void Browse_Database(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::OpenFileDialog^ openFileDialog1 = gcnew  System::Windows::Forms::OpenFileDialog();
		openFileDialog1->Filter = "Firebird data|*.gdb|Все файлы|*.*";
		openFileDialog1->FilterIndex = 0;
		if (openFileDialog1->ShowDialog(this) == System::Windows::Forms::DialogResult::OK)
		{
			this->comboBox1->Text = openFileDialog1->FileName;

		}
	};


};
}

