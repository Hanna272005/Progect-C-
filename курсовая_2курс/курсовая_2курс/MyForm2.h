#pragma once


#include "MyForm3.h"
#include <iostream>
#include <fstream> 
#include <string>
#include <Windows.h>
#include <msclr/marshal_cppstd.h>  

using namespace std;
using namespace System::IO;
using namespace msclr::interop;


namespace курсовая2курс {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			DateTime g;////
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ видToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ темаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ светлаяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ темнаяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ креативнаяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ языкToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ белорусскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ английскийToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ToolStripMenuItem^ помощьToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::Label^ label15;

	private: System::Windows::Forms::GroupBox^ groupBox4;





	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::ComboBox^ comboBox9;
	private: System::Windows::Forms::ComboBox^ comboBox8;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::TextBox^ textBox29;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;




private: System::Windows::Forms::Label^ label41;

private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label42;





private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::TextBox^ textBox41;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::GroupBox^ groupBox5;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::TextBox^ textBox46;
private: System::Windows::Forms::TextBox^ textBox45;
private: System::Windows::Forms::TextBox^ textBox44;
private: System::Windows::Forms::TextBox^ textBox43;
private: System::Windows::Forms::TextBox^ textBox42;
private: System::Windows::Forms::ToolStripMenuItem^ описаниеToolStripMenuItem;

private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button9;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->видToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->темаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->светлаяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->темнаяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->креативнаяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->языкToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->русскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->белорусскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->английскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->описаниеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(70, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ФИО страхователя:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(266, 23);
			this->textBox1->TabIndex = 1;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->видToolStripMenuItem,
					this->помощьToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1564, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// видToolStripMenuItem
			// 
			this->видToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->темаToolStripMenuItem,
					this->языкToolStripMenuItem
			});
			this->видToolStripMenuItem->Name = L"видToolStripMenuItem";
			this->видToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->видToolStripMenuItem->Text = L"Вид";
			this->видToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::видToolStripMenuItem_Click);
			// 
			// темаToolStripMenuItem
			// 
			this->темаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->светлаяToolStripMenuItem,
					this->темнаяToolStripMenuItem, this->креативнаяToolStripMenuItem
			});
			this->темаToolStripMenuItem->Name = L"темаToolStripMenuItem";
			this->темаToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->темаToolStripMenuItem->Text = L"Тема";
			this->темаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::темаToolStripMenuItem_Click);
			// 
			// светлаяToolStripMenuItem
			// 
			this->светлаяToolStripMenuItem->Name = L"светлаяToolStripMenuItem";
			this->светлаяToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->светлаяToolStripMenuItem->Text = L"Серый";
			this->светлаяToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::светлаяToolStripMenuItem_Click);
			// 
			// темнаяToolStripMenuItem
			// 
			this->темнаяToolStripMenuItem->Name = L"темнаяToolStripMenuItem";
			this->темнаяToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->темнаяToolStripMenuItem->Text = L"Синий";
			this->темнаяToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::темнаяToolStripMenuItem_Click);
			// 
			// креативнаяToolStripMenuItem
			// 
			this->креативнаяToolStripMenuItem->Name = L"креативнаяToolStripMenuItem";
			this->креативнаяToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->креативнаяToolStripMenuItem->Text = L"Кораловый";
			this->креативнаяToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::креативнаяToolStripMenuItem_Click);
			// 
			// языкToolStripMenuItem
			// 
			this->языкToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->русскийToolStripMenuItem,
					this->белорусскийToolStripMenuItem, this->английскийToolStripMenuItem
			});
			this->языкToolStripMenuItem->Name = L"языкToolStripMenuItem";
			this->языкToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->языкToolStripMenuItem->Text = L"Язык";
			// 
			// русскийToolStripMenuItem
			// 
			this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			this->русскийToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->русскийToolStripMenuItem->Text = L"Русский";
			this->русскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::русскийToolStripMenuItem_Click);
			// 
			// белорусскийToolStripMenuItem
			// 
			this->белорусскийToolStripMenuItem->Name = L"белорусскийToolStripMenuItem";
			this->белорусскийToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->белорусскийToolStripMenuItem->Text = L"Белорусский";
			this->белорусскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::белорусскийToolStripMenuItem_Click);
			// 
			// английскийToolStripMenuItem
			// 
			this->английскийToolStripMenuItem->Name = L"английскийToolStripMenuItem";
			this->английскийToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->английскийToolStripMenuItem->Text = L"Английский";
			this->английскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::английскийToolStripMenuItem_Click);
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->описаниеToolStripMenuItem });
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(83, 24);
			this->помощьToolStripMenuItem->Text = L"Помощь";
			// 
			// описаниеToolStripMenuItem
			// 
			this->описаниеToolStripMenuItem->Name = L"описаниеToolStripMenuItem";
			this->описаниеToolStripMenuItem->Size = System::Drawing::Size(150, 26);
			this->описаниеToolStripMenuItem->Text = L"Справка";
			this->описаниеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::описаниеToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(70, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"ФИО застрахованного:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 135);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(266, 23);
			this->textBox2->TabIndex = 4;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox1->Location = System::Drawing::Point(289, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(326, 163);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Программа *Лояльность*";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(22, 119);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(280, 24);
			this->textBox3->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(317, 16);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Сумма уплачиваемого взноса при заключении";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(56, 41);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(177, 20);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Применить программу";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::checkBox1_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(621, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(270, 163);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Курсы валют";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(122, 84);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(142, 24);
			this->textBox5->TabIndex = 3;
			this->textBox5->Text = L"3,20001";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(122, 37);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(142, 24);
			this->textBox4->TabIndex = 2;
			this->textBox4->Text = L"2,90105";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(6, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 18);
			this->label5->TabIndex = 1;
			this->label5->Text = L"ЕВРО";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 46);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 18);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Доллар США";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(727, 252);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 60);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Сохранение в txt-файл";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->label26);
			this->groupBox3->Controls->Add(this->label25);
			this->groupBox3->Controls->Add(this->comboBox9);
			this->groupBox3->Controls->Add(this->comboBox8);
			this->groupBox3->Controls->Add(this->label24);
			this->groupBox3->Controls->Add(this->label23);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->comboBox7);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->comboBox6);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->comboBox5);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->comboBox4);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->comboBox3);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Controls->Add(this->comboBox1);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(12, 181);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(686, 389);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Информация для заключения договора";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &MyForm2::groupBox3_Enter);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(378, 191);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(18, 18);
			this->button3->TabIndex = 38;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(624, 327);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(21, 18);
			this->label26->TabIndex = 37;
			this->label26->Text = L"%";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(624, 288);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(21, 18);
			this->label25->TabIndex = 36;
			this->label25->Text = L"%";
			// 
			// comboBox9
			// 
			this->comboBox9->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"6,00" });
			this->comboBox9->Location = System::Drawing::Point(536, 319);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(80, 26);
			this->comboBox9->TabIndex = 35;
			// 
			// comboBox8
			// 
			this->comboBox8->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"8,00" });
			this->comboBox8->Location = System::Drawing::Point(538, 280);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(80, 26);
			this->comboBox8->TabIndex = 34;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(384, 327);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(146, 18);
			this->label24->TabIndex = 33;
			this->label24->Text = L"Норма доходности:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(384, 287);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(76, 18);
			this->label23->TabIndex = 32;
			this->label23->Text = L"Нагрузка:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(609, 241);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(67, 18);
			this->label19->TabIndex = 26;
			this->label19->Text = L"месяцев";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(498, 240);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(32, 18);
			this->label18->TabIndex = 25;
			this->label18->Text = L"лет";
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(538, 234);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(65, 24);
			this->textBox10->TabIndex = 24;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(427, 234);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(65, 24);
			this->textBox9->TabIndex = 23;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(441, 196);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(178, 18);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Возраст на дату начала:";
			// 
			// comboBox7
			// 
			this->comboBox7->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Физическое лицо" });
			this->comboBox7->Location = System::Drawing::Point(444, 135);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(192, 26);
			this->comboBox7->TabIndex = 22;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(468, 116);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(136, 18);
			this->label16->TabIndex = 21;
			this->label16->Text = L"Тип страхователя:";
			// 
			// comboBox6
			// 
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Прямые продажи" });
			this->comboBox6->Location = System::Drawing::Point(444, 75);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(192, 26);
			this->comboBox6->TabIndex = 20;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(481, 50);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(112, 18);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Канал продаж:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(259, 331);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(67, 18);
			this->label13->TabIndex = 17;
			this->label13->Text = L"месяцев";
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11"
			});
			this->comboBox5->Location = System::Drawing::Point(182, 319);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(71, 26);
			this->comboBox5->TabIndex = 16;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(123, 327);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(32, 18);
			this->label12->TabIndex = 15;
			this->label12->Text = L"лет";
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"3", L"4", L"5", L"6", L"7", L"8", L"9", L"10" });
			this->comboBox4->Location = System::Drawing::Point(43, 319);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(70, 26);
			this->comboBox4->TabIndex = 14;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(81, 286);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(167, 20);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Срок страхования:";
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"BYR", L"USD", L"EUR" });
			this->comboBox3->Location = System::Drawing::Point(167, 228);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(134, 26);
			this->comboBox3->TabIndex = 12;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(6, 236);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(156, 18);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Валюта страхования:";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Ежегодно", L"Раз в полгода", L"Ежемесячно" });
			this->comboBox2->Location = System::Drawing::Point(245, 184);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(127, 26);
			this->comboBox2->TabIndex = 10;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Женский", L"Мужской" });
			this->comboBox1->Location = System::Drawing::Point(77, 38);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(126, 26);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox1_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(6, 192);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(237, 18);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Периодичность уплаты взносов:";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(199, 137);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(173, 24);
			this->textBox7->TabIndex = 4;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(0, 140);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(191, 18);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Дата начала страхования:";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(128, 89);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(173, 24);
			this->textBox6->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(3, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 18);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Дата рождения:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(6, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 18);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Пол:";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox4->Controls->Add(this->button12);
			this->groupBox4->Controls->Add(this->button11);
			this->groupBox4->Controls->Add(this->button10);
			this->groupBox4->Controls->Add(this->button9);
			this->groupBox4->Controls->Add(this->label69);
			this->groupBox4->Controls->Add(this->label68);
			this->groupBox4->Controls->Add(this->label67);
			this->groupBox4->Controls->Add(this->label66);
			this->groupBox4->Controls->Add(this->label65);
			this->groupBox4->Controls->Add(this->label64);
			this->groupBox4->Controls->Add(this->label63);
			this->groupBox4->Controls->Add(this->label62);
			this->groupBox4->Controls->Add(this->label61);
			this->groupBox4->Controls->Add(this->label60);
			this->groupBox4->Controls->Add(this->textBox41);
			this->groupBox4->Controls->Add(this->label53);
			this->groupBox4->Controls->Add(this->label52);
			this->groupBox4->Controls->Add(this->label51);
			this->groupBox4->Controls->Add(this->label50);
			this->groupBox4->Controls->Add(this->label49);
			this->groupBox4->Controls->Add(this->label48);
			this->groupBox4->Controls->Add(this->label47);
			this->groupBox4->Controls->Add(this->label46);
			this->groupBox4->Controls->Add(this->label45);
			this->groupBox4->Controls->Add(this->label44);
			this->groupBox4->Controls->Add(this->label43);
			this->groupBox4->Controls->Add(this->label42);
			this->groupBox4->Controls->Add(this->label41);
			this->groupBox4->Controls->Add(this->label40);
			this->groupBox4->Controls->Add(this->textBox30);
			this->groupBox4->Controls->Add(this->textBox29);
			this->groupBox4->Controls->Add(this->textBox28);
			this->groupBox4->Controls->Add(this->textBox27);
			this->groupBox4->Controls->Add(this->textBox26);
			this->groupBox4->Controls->Add(this->label39);
			this->groupBox4->Controls->Add(this->label38);
			this->groupBox4->Controls->Add(this->textBox25);
			this->groupBox4->Controls->Add(this->textBox24);
			this->groupBox4->Controls->Add(this->textBox23);
			this->groupBox4->Controls->Add(this->textBox22);
			this->groupBox4->Controls->Add(this->textBox21);
			this->groupBox4->Controls->Add(this->textBox20);
			this->groupBox4->Controls->Add(this->textBox19);
			this->groupBox4->Controls->Add(this->textBox18);
			this->groupBox4->Controls->Add(this->label37);
			this->groupBox4->Controls->Add(this->label34);
			this->groupBox4->Controls->Add(this->textBox17);
			this->groupBox4->Controls->Add(this->textBox16);
			this->groupBox4->Controls->Add(this->textBox15);
			this->groupBox4->Controls->Add(this->textBox14);
			this->groupBox4->Controls->Add(this->textBox13);
			this->groupBox4->Controls->Add(this->label36);
			this->groupBox4->Controls->Add(this->label35);
			this->groupBox4->Controls->Add(this->label33);
			this->groupBox4->Controls->Add(this->label32);
			this->groupBox4->Controls->Add(this->label31);
			this->groupBox4->Controls->Add(this->label30);
			this->groupBox4->Controls->Add(this->label29);
			this->groupBox4->Controls->Add(this->label28);
			this->groupBox4->Controls->Add(this->label27);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(704, 318);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(839, 327);
			this->groupBox4->TabIndex = 9;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Итоговые данные";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(791, 299);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(18, 18);
			this->button12->TabIndex = 69;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm2::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(548, 298);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(18, 18);
			this->button11->TabIndex = 68;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm2::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(236, 299);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(18, 18);
			this->button10->TabIndex = 67;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm2::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(236, 264);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(18, 18);
			this->button9->TabIndex = 66;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm2::button9_Click);
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label69->Location = System::Drawing::Point(765, 206);
			this->label69->Name = L"label69";
			this->label69->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label69->Size = System::Drawing::Size(36, 18);
			this->label69->TabIndex = 65;
			this->label69->Text = L"0,00";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label68->Location = System::Drawing::Point(765, 172);
			this->label68->Name = L"label68";
			this->label68->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label68->Size = System::Drawing::Size(36, 18);
			this->label68->TabIndex = 64;
			this->label68->Text = L"0,00";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label67->Location = System::Drawing::Point(765, 138);
			this->label67->Name = L"label67";
			this->label67->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label67->Size = System::Drawing::Size(36, 18);
			this->label67->TabIndex = 63;
			this->label67->Text = L"0,00";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label66->Location = System::Drawing::Point(765, 105);
			this->label66->Name = L"label66";
			this->label66->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label66->Size = System::Drawing::Size(36, 18);
			this->label66->TabIndex = 62;
			this->label66->Text = L"0,00";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label65->Location = System::Drawing::Point(765, 71);
			this->label65->Name = L"label65";
			this->label65->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label65->Size = System::Drawing::Size(36, 18);
			this->label65->TabIndex = 61;
			this->label65->Text = L"6,00";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label64->Location = System::Drawing::Point(662, 207);
			this->label64->Name = L"label64";
			this->label64->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label64->Size = System::Drawing::Size(36, 18);
			this->label64->TabIndex = 60;
			this->label64->Text = L"8,00";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label63->Location = System::Drawing::Point(662, 172);
			this->label63->Name = L"label63";
			this->label63->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label63->Size = System::Drawing::Size(36, 18);
			this->label63->TabIndex = 59;
			this->label63->Text = L"8,00";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label62->Location = System::Drawing::Point(662, 139);
			this->label62->Name = L"label62";
			this->label62->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label62->Size = System::Drawing::Size(36, 18);
			this->label62->TabIndex = 58;
			this->label62->Text = L"8,00";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label61->Location = System::Drawing::Point(662, 104);
			this->label61->Name = L"label61";
			this->label61->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label61->Size = System::Drawing::Size(36, 18);
			this->label61->TabIndex = 57;
			this->label61->Text = L"8,00";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label60->Location = System::Drawing::Point(662, 71);
			this->label60->Name = L"label60";
			this->label60->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label60->Size = System::Drawing::Size(36, 18);
			this->label60->TabIndex = 56;
			this->label60->Text = L"8,00";
			// 
			// textBox41
			// 
			this->textBox41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox41->Location = System::Drawing::Point(623, 293);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(162, 24);
			this->textBox41->TabIndex = 55;
			this->textBox41->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox41_TextChanged);
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label53->Location = System::Drawing::Point(632, 258);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(137, 18);
			this->label53->TabIndex = 54;
			this->label53->Text = L"Налоговый вычет:";
			this->label53->Click += gcnew System::EventHandler(this, &MyForm2::label53_Click);
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label52->Location = System::Drawing::Point(807, 206);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(21, 18);
			this->label52->TabIndex = 53;
			this->label52->Text = L"%";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label51->Location = System::Drawing::Point(807, 169);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(21, 18);
			this->label51->TabIndex = 52;
			this->label51->Text = L"%";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label50->Location = System::Drawing::Point(807, 138);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(21, 18);
			this->label50->TabIndex = 51;
			this->label50->Text = L"%";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label49->Location = System::Drawing::Point(807, 104);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(21, 18);
			this->label49->TabIndex = 50;
			this->label49->Text = L"%";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label48->Location = System::Drawing::Point(807, 68);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(21, 18);
			this->label48->TabIndex = 49;
			this->label48->Text = L"%";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label47->Location = System::Drawing::Point(737, 42);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(91, 18);
			this->label47->TabIndex = 43;
			this->label47->Text = L"доходности";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label46->Location = System::Drawing::Point(742, 25);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(59, 18);
			this->label46->TabIndex = 42;
			this->label46->Text = L"Норма ";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label45->Location = System::Drawing::Point(704, 210);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(21, 18);
			this->label45->TabIndex = 41;
			this->label45->Text = L"%";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label44->Location = System::Drawing::Point(704, 176);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(21, 18);
			this->label44->TabIndex = 40;
			this->label44->Text = L"%";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label43->Location = System::Drawing::Point(704, 142);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(21, 18);
			this->label43->TabIndex = 39;
			this->label43->Text = L"%";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label42->Location = System::Drawing::Point(704, 105);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(21, 18);
			this->label42->TabIndex = 38;
			this->label42->Text = L"%";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label41->Location = System::Drawing::Point(704, 69);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(21, 18);
			this->label41->TabIndex = 33;
			this->label41->Text = L"%";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label40->Location = System::Drawing::Point(653, 42);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(72, 18);
			this->label40->TabIndex = 31;
			this->label40->Text = L"Нагрузка";
			// 
			// textBox30
			// 
			this->textBox30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox30->Location = System::Drawing::Point(525, 200);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(115, 24);
			this->textBox30->TabIndex = 30;
			// 
			// textBox29
			// 
			this->textBox29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox29->Location = System::Drawing::Point(525, 166);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(115, 24);
			this->textBox29->TabIndex = 29;
			// 
			// textBox28
			// 
			this->textBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox28->Location = System::Drawing::Point(525, 132);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(115, 24);
			this->textBox28->TabIndex = 28;
			// 
			// textBox27
			// 
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox27->Location = System::Drawing::Point(525, 99);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(115, 24);
			this->textBox27->TabIndex = 27;
			// 
			// textBox26
			// 
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox26->Location = System::Drawing::Point(525, 64);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(115, 24);
			this->textBox26->TabIndex = 26;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label39->Location = System::Drawing::Point(555, 42);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(54, 18);
			this->label39->TabIndex = 25;
			this->label39->Text = L"Тариф";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label38->Location = System::Drawing::Point(416, 264);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(135, 18);
			this->label38->TabIndex = 4;
			this->label38->Text = L"Страховая сумма:";
			// 
			// textBox25
			// 
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox25->Location = System::Drawing::Point(419, 293);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(123, 24);
			this->textBox25->TabIndex = 24;
			// 
			// textBox24
			// 
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox24->Location = System::Drawing::Point(260, 292);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(131, 24);
			this->textBox24->TabIndex = 23;
			// 
			// textBox23
			// 
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox23->Location = System::Drawing::Point(260, 258);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(131, 24);
			this->textBox23->TabIndex = 22;
			// 
			// textBox22
			// 
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox22->Location = System::Drawing::Point(385, 200);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(123, 24);
			this->textBox22->TabIndex = 21;
			// 
			// textBox21
			// 
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox21->Location = System::Drawing::Point(385, 166);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(123, 24);
			this->textBox21->TabIndex = 20;
			// 
			// textBox20
			// 
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox20->Location = System::Drawing::Point(385, 132);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(123, 24);
			this->textBox20->TabIndex = 19;
			// 
			// textBox19
			// 
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox19->Location = System::Drawing::Point(385, 99);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(123, 24);
			this->textBox19->TabIndex = 18;
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox18->Location = System::Drawing::Point(385, 65);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(123, 24);
			this->textBox18->TabIndex = 17;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label37->Location = System::Drawing::Point(382, 42);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(126, 18);
			this->label37->TabIndex = 16;
			this->label37->Text = L"ответственности";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->Location = System::Drawing::Point(416, 25);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(53, 18);
			this->label34->TabIndex = 15;
			this->label34->Text = L"Лимит";
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox17->Location = System::Drawing::Point(239, 204);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(131, 24);
			this->textBox17->TabIndex = 14;
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox16->Location = System::Drawing::Point(239, 98);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(131, 24);
			this->textBox16->TabIndex = 13;
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox15->Location = System::Drawing::Point(239, 166);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(131, 24);
			this->textBox15->TabIndex = 12;
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox14->Location = System::Drawing::Point(239, 132);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(131, 24);
			this->textBox14->TabIndex = 11;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox13->Location = System::Drawing::Point(239, 63);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(131, 24);
			this->textBox13->TabIndex = 10;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->Location = System::Drawing::Point(6, 306);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(195, 18);
			this->label36->TabIndex = 9;
			this->label36->Text = L"Общий взнос по договору:";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->Location = System::Drawing::Point(7, 264);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(166, 18);
			this->label35->TabIndex = 8;
			this->label35->Text = L"Периодический взнос:";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(-3, 210);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(240, 18);
			this->label33->TabIndex = 6;
			this->label33->Text = L"Временная нетрудоспособность:";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(4, 176);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(121, 18);
			this->label32->TabIndex = 5;
			this->label32->Text = L"Вред здоровью:";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(4, 142);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(113, 18);
			this->label31->TabIndex = 4;
			this->label31->Text = L"Инвалидность:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(6, 108);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(65, 18);
			this->label30->TabIndex = 3;
			this->label30->Text = L"Смерть:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(7, 70);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(167, 18);
			this->label29->TabIndex = 2;
			this->label29->Text = L"Достижение возраста:";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(274, 33);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(53, 18);
			this->label28->TabIndex = 1;
			this->label28->Text = L"взнос:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(98, 33);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(83, 18);
			this->label27->TabIndex = 0;
			this->label27->Text = L"Страховой";
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox5->Controls->Add(this->button8);
			this->groupBox5->Controls->Add(this->button7);
			this->groupBox5->Controls->Add(this->button6);
			this->groupBox5->Controls->Add(this->button5);
			this->groupBox5->Controls->Add(this->button4);
			this->groupBox5->Controls->Add(this->textBox46);
			this->groupBox5->Controls->Add(this->textBox45);
			this->groupBox5->Controls->Add(this->textBox44);
			this->groupBox5->Controls->Add(this->textBox43);
			this->groupBox5->Controls->Add(this->textBox42);
			this->groupBox5->Controls->Add(this->label58);
			this->groupBox5->Controls->Add(this->label57);
			this->groupBox5->Controls->Add(this->label56);
			this->groupBox5->Controls->Add(this->label55);
			this->groupBox5->Controls->Add(this->label54);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox5->Location = System::Drawing::Point(897, 12);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(457, 305);
			this->groupBox5->TabIndex = 10;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Информация для расчета";
			this->groupBox5->Enter += gcnew System::EventHandler(this, &MyForm2::groupBox5_Enter);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(259, 248);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(17, 14);
			this->button8->TabIndex = 14;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm2::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(259, 195);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(17, 14);
			this->button7->TabIndex = 13;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(259, 148);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(17, 14);
			this->button6->TabIndex = 12;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(259, 95);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(17, 14);
			this->button5->TabIndex = 11;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(259, 47);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(17, 14);
			this->button4->TabIndex = 10;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// textBox46
			// 
			this->textBox46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox46->Location = System::Drawing::Point(278, 244);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(156, 24);
			this->textBox46->TabIndex = 9;
			// 
			// textBox45
			// 
			this->textBox45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox45->Location = System::Drawing::Point(278, 191);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(156, 24);
			this->textBox45->TabIndex = 8;
			// 
			// textBox44
			// 
			this->textBox44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox44->Location = System::Drawing::Point(278, 141);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(156, 24);
			this->textBox44->TabIndex = 7;
			// 
			// textBox43
			// 
			this->textBox43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox43->Location = System::Drawing::Point(278, 89);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(156, 24);
			this->textBox43->TabIndex = 6;
			// 
			// textBox42
			// 
			this->textBox42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox42->Location = System::Drawing::Point(278, 40);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(156, 24);
			this->textBox42->TabIndex = 5;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label58->Location = System::Drawing::Point(21, 254);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(236, 18);
			this->label58->TabIndex = 4;
			this->label58->Text = L"Временная нетрудоспособность";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label57->Location = System::Drawing::Point(21, 197);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(117, 18);
			this->label57->TabIndex = 3;
			this->label57->Text = L"Вред здоровью";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label56->Location = System::Drawing::Point(21, 147);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(109, 18);
			this->label56->TabIndex = 2;
			this->label56->Text = L"Инвалидность";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label55->Location = System::Drawing::Point(21, 99);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(61, 18);
			this->label55->TabIndex = 1;
			this->label55->Text = L"Смерть";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label54->Location = System::Drawing::Point(18, 50);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(163, 18);
			this->label54->TabIndex = 0;
			this->label54->Text = L"Достижение возраста";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(727, 181);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 54);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Закрыть";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1564, 678);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm2";
			this->Text = L"Программа по подбору накопительного страхования жизни по Правилам №6";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close(); //закрыть окно
	}
private: System::Void светлаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::LightSlateGray; //сменить цыет окна на серый
}
private: System::Void темнаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::DarkBlue; //сменить цвет окна на синий
}
private: System::Void креативнаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::LightCoral; //сменить цвет окна на коралловый
}
private: System::Void русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{//сменить язык программы на русский
	this->Text = "Программа по подбору накопительного страхования жизни по Правилам №6";
	видToolStripMenuItem->Text = "Вид";
	темаToolStripMenuItem->Text = "Тема";
	языкToolStripMenuItem->Text = "Язык";
	светлаяToolStripMenuItem->Text = "Серый";
	темнаяToolStripMenuItem->Text = "Синий";
	креативнаяToolStripMenuItem->Text = "Кораловый";
	русскийToolStripMenuItem->Text = "Русский";
	английскийToolStripMenuItem->Text = "Английский";
	белорусскийToolStripMenuItem->Text = "Белорусский";
	помощьToolStripMenuItem->Text = "Помощь";
	описаниеToolStripMenuItem->Text = "Описание";
	label1->Text = "ФИО страхователя";
	label2->Text = "ФИО застрахованного";
	label3->Text = "Сумма уплачиваемого взноса при заключении";
	label4->Text = "Доллар США";
	label5->Text = "ЕВРО";
	label6->Text = "Пол";
	label7->Text = "Дата рождения";
	label8->Text = "Дата начала стрхования";
	label9->Text = "Периодичность уплаты взносов";
	label10->Text = "Валюта страхования";
	label11->Text = "Срок страхования";
	label12->Text = "лет";
	label13->Text = "месяцев";
	label15->Text = "Канал продаж";
	label16->Text = "Тип страхователя";
	label17->Text = "Возраст на дату начала";
	label18->Text = "лет";
	label19->Text = "месяцев";
	label23->Text = "Нагрузка";
	label24->Text = "Норма доходности";
	label25->Text = "%";
	label26->Text = "%";
	label27->Text = "Страховой";
	label28->Text = "взнос";
	label29->Text = "Достижение возраста";
	label30->Text = "Смерть";
	label31->Text = "Инвалидность";
	label32->Text = "Вред здоровью";
	label33->Text = "Временная нетрудоспособность";
	label34->Text = "Лимит";
	label35->Text = "Периодический взнос";
	label36->Text = "Общий взнос по договору";
	label37->Text = "ответственности";
	label38->Text = "Страховая сумма";
	label39->Text = "Тариф";
	label40->Text = "Нагрузка";
	label41->Text = "%";
	label42->Text = "%";
	label43->Text = "%";
	label44->Text = "%";
	label45->Text = "%";
	label46->Text = "Норма";
	label47->Text = "доходности";
	label48->Text = "%";
	label49->Text = "%";
	label50->Text = "%";
	label51->Text = "%";
	label52->Text = "%";
	label53->Text = "Налоговый вычет";
	label54->Text = "Достижение возраста";
	label55->Text = "Смерть";
	label56->Text = "Инвалидность";
	label57->Text = "Вред здоровью";
	label58->Text = "Временная нетрудоспособность";
	groupBox1->Text = "Программа *Лояльность*";
	groupBox2->Text = "Курсы валют";
	groupBox3->Text = "Информация для заключения договора";
	groupBox4->Text = "Итоговые данные";
	groupBox5->Text = "Информация для расчета";
	button1->Text = "Созранить в txt-файл";
	button2->Text = "Закрыть";
	checkBox1->Text = "Применить программу";
}
private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) 
{//заполнение comboBox1-9
	
	//начало comboBox с 0
	comboBox1->SelectedIndex = 0;
	comboBox2->SelectedIndex = 0;
	comboBox3->SelectedIndex = 0;
	comboBox4->SelectedIndex = 0;
	comboBox5->SelectedIndex = 0;
	comboBox6->SelectedIndex = 0;
	comboBox7->SelectedIndex = 0;
	comboBox8->SelectedIndex = 0;
	comboBox9->SelectedIndex = 0;

	// очистить список элементов comboBox1
	comboBox1->Items->Clear();
	comboBox2->Items->Clear();
	comboBox3->Items->Clear();
	comboBox4->Items->Clear();
	comboBox5->Items->Clear();
	comboBox6->Items->Clear();
	comboBox7->Items->Clear();
	comboBox8->Items->Clear();
	comboBox9->Items->Clear();

	// сформировать список элементов comboBox1
	comboBox1->Items->Add("Женский");
	comboBox1->Items->Add("Мужской");

	//сформировать список элементов comboBox2
	comboBox2->Items->Add("Ежегодно");
	comboBox2->Items->Add("Раз в полгода");
	comboBox2->Items->Add("Ежемесячно");

	//сформировать список элементов comboBox3
	comboBox3->Items->Add("BYR");
	comboBox3->Items->Add("USD");
	comboBox3->Items->Add("EUR");

	//сформировать список элементов comboBox4
	comboBox4->Items->Add("3");
	comboBox4->Items->Add("4");
	comboBox4->Items->Add("5");
	comboBox4->Items->Add("6");
	comboBox4->Items->Add("7");
	comboBox4->Items->Add("8");
	comboBox4->Items->Add("9");
	comboBox4->Items->Add("10");

	//сформировать список элементов comboBox5
	comboBox5->Items->Add("1");
	comboBox5->Items->Add("2");
	comboBox5->Items->Add("3");
	comboBox5->Items->Add("4");
	comboBox5->Items->Add("5");
	comboBox5->Items->Add("6");
	comboBox5->Items->Add("7");
	comboBox5->Items->Add("8");
	comboBox5->Items->Add("9");
	comboBox5->Items->Add("10");
	comboBox5->Items->Add("11");

	//сформировать список элементов comboBox6
	comboBox6->Items->Add("Прямые продажи");

	//сформировать список элементов comboBox7
	comboBox7->Items->Add("Физическое лицо");

	//сформировать список элементов comboBox8
	comboBox8->Items->Add("8,00");

	//сформировать список элементов comboBox9
	comboBox9->Items->Add("6,00");

}
private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void белорусскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{//сменить язык программы на белорусский
	this->Text = "Праграма па падобы назапашвальнага страхавання жыцця па правілах №6";
	видToolStripMenuItem->Text = "Выгляд";
	темаToolStripMenuItem->Text = "Тэма";
	языкToolStripMenuItem->Text = "Мова";
	светлаяToolStripMenuItem->Text = "Шэры";
	темнаяToolStripMenuItem->Text = "Сіні";
	креативнаяToolStripMenuItem->Text = "Каралавы";
	русскийToolStripMenuItem->Text = "Рускій";
	английскийToolStripMenuItem->Text = "Англійскій";
	белорусскийToolStripMenuItem->Text = "Беларускій";
	помощьToolStripMenuItem->Text = "Дапамога";
	описаниеToolStripMenuItem->Text = "Апісанне";
	label1->Text = "Прозвішча, імя страхавальніка";
	label2->Text = "Прозвішча, імя застрахаванай";
	label3->Text = "Сумма выплачанага ўзносу пры заключэнні";
	label4->Text = "Долар ЗША";
	label5->Text = "ЕВРО";
	label6->Text = "Пол";
	label7->Text = "Дата нараджэння";
	label8->Text = "Дата пачатку стрхавання";
	label9->Text = "Перыядычнасць выплат ўзносаў";
	label10->Text = "Валюта страховання";
	label11->Text = "Тэрмін страховання";
	label12->Text = "гадоў";
	label13->Text = "месяцаў";
	label15->Text = "Канал продажаў";
	label16->Text = "Тып страхавальніка";
	label17->Text = "Узрост на дату начала";
	label18->Text = "гадоў";
	label19->Text = "месяцаў";
	label23->Text = "Нагрузка";
	label24->Text = "Норма даходнасці";
	label25->Text = "%";
	label26->Text = "%";
	label27->Text = "Страхавы";
	label28->Text = "ўзнос";
	label29->Text = "Дасягненне ўзросту";
	label30->Text = "Смерць";
	label31->Text = "Інваліднасть";
	label32->Text = "Шкода здароўю";
	label33->Text = "Часовая непрацаздольнасць";
	label34->Text = "Ліміт";
	label35->Text = "Перыядычны ўзнос";
	label36->Text = "Агульны ўзнос па дагавору";
	label37->Text = "адказнасці";
	label38->Text = "Страхавая сума";
	label39->Text = "Тарыф";
	label40->Text = "Нагрузка";
	label41->Text = "%";
	label42->Text = "%";
	label43->Text = "%";
	label44->Text = "%";
	label45->Text = "%";
	label46->Text = "Норма";
	label47->Text = "даходнасці";
	label48->Text = "%";
	label49->Text = "%";
	label50->Text = "%";
	label51->Text = "%";
	label52->Text = "%";
	label53->Text = "Падатковы вылік";
	label54->Text = "Дасягненне ўзросту";
	label55->Text = "Смерць";
	label56->Text = "Інваліднасць";
	label57->Text = "Шкода здароўю";
	label58->Text = "Часовая непрацаздольнасць";
	groupBox1->Text = "Праграма *Лаяльнасць*";
	groupBox2->Text = "Курсы валют";
	groupBox3->Text = "Інфармацыя для заключэння дагавора";
	groupBox4->Text = "Выніковыя дадзеныя";
	groupBox5->Text = "Інфармацыя для разліку";
	button1->Text = "Захаваць ў txt-файл";
	button2->Text = "Зачыніць";
	checkBox1->Text = "Прымяніць праграму";
}
private: System::Void английскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{//сменить язык программы на английский
	this->Text = "The program for the selection of cumulative life insurance according to Rules No. 6";
	видToolStripMenuItem->Text = "View";
	темаToolStripMenuItem->Text = "Topic";
	языкToolStripMenuItem->Text = "Language";
	светлаяToolStripMenuItem->Text = "Grey";
	темнаяToolStripMenuItem->Text = "DarkBlue";
	креативнаяToolStripMenuItem->Text = "Coral";
	русскийToolStripMenuItem->Text = "Russian";
	английскийToolStripMenuItem->Text = "English";
	белорусскийToolStripMenuItem->Text = "Belarusian";
	помощьToolStripMenuItem->Text = "Help";
	описаниеToolStripMenuItem->Text = "Description";
	label1->Text = "Full name of the policyholder";
	label2->Text = "Full name of the insured";
	label3->Text = "The amount of the fee to be paid at the conclusion";
	label4->Text = "USD";
	label5->Text = "EUR";
	label6->Text = "Gender";
	label7->Text = "Date of birth";
	label8->Text = "Insurance start date";
	label9->Text = "The frequency of payment of contributions";
	label10->Text = "Insurance currency";
	label11->Text = "The insurance period";
	label12->Text = "years";
	label13->Text = "month";
	label15->Text = "Sales Channel";
	label16->Text = "Type of policyholder";
	label17->Text = "Age as of the start date";
	label18->Text = "years";
	label19->Text = "month";
	label23->Text = "Load";
	label24->Text = "The rate of return";
	label25->Text = "%";
	label26->Text = "%";
	label27->Text = "Insurance";
	label28->Text = "premium";
	label29->Text = "Reaching the age";
	label30->Text = "Death";
	label31->Text = "Disability";
	label32->Text = "Harm to health";
	label33->Text = "Temporary disability";
	label34->Text = "Limit";
	label35->Text = "Periodic payment";
	label36->Text = "The total contribution under the contract";
	label37->Text = "responsibilities";
	label38->Text = "Insurance amount";
	label39->Text = "Rate";
	label40->Text = "Load";
	label41->Text = "%";
	label42->Text = "%";
	label43->Text = "%";
	label44->Text = "%";
	label45->Text = "%";
	label46->Text = "Rate";
	label47->Text = "of return";
	label48->Text = "%";
	label49->Text = "%";
	label50->Text = "%";
	label51->Text = "%";
	label52->Text = "%";
	label53->Text = "Tax deduction";
	label54->Text = "Reaching the age";
	label55->Text = "Death";
	label56->Text = "Disability";
	label57->Text = "Harm to health";
	label58->Text = "Temporary disability";
	groupBox1->Text = "*Loyalty* Program";
	groupBox2->Text = "Exchange rates";
	groupBox3->Text = "Information for the conclusion of the contract";
	groupBox4->Text = "Summary data";
	groupBox5->Text = "Information for calculation";
	button1->Text = "Save to txt file";
	button2->Text = "Close";
	checkBox1->Text = "Apply the program";
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{//сохранение в txt-файл 
	String^ a = label1->Text;
	String^ b = textBox1->Text;
	String^ c = label2->Text;
	String^ d = textBox2->Text;
	String^ f = label6->Text;
	String^ g = comboBox1->Text;
	String^ h = label7->Text;
	String^ i = textBox6->Text;
	String^ j = textBox7->Text;
	String^ k = label8->Text;
	String^ l = label9->Text;
	String^ m = comboBox2->Text;
	String^ n = label10->Text;
	String^ o = comboBox3->Text;
	String^ p = label11->Text;
	String^ q = comboBox4->Text;
	String^ r = label12->Text;
	String^ s = comboBox5->Text;
	String^ t = label13->Text;
	String^ x = label15->Text;
	String^ y = comboBox6->Text;
	String^ z = label16->Text;
	String^ ez = comboBox7->Text;
	String^ ab = label17->Text;
	String^ bc = textBox9->Text;
	String^ cd = label18->Text;
	String^ de = textBox10->Text;
	String^ ef = label19->Text;
	String^ kl = label23->Text;
	String^ lm = comboBox8->Text; 
	String^ mn = label25->Text;
	String^ no = label24->Text;
	String^ op = comboBox9->Text; 
	String^ pq = label26->Text;
	String^ qr = label27->Text;
	String^ rs = label28->Text;
	String^ st = label29->Text;
	String^ tu = textBox13->Text;
	String^ uv = label30->Text;
	String^ vw = textBox14->Text;
	String^ wx = label31->Text;
	String^ xy = textBox15->Text;
	String^ yz = label32->Text;
	String^ zz = textBox16->Text;
	String^ aa = label33->Text;
	String^ bb = textBox17->Text;
	String^ pipa = label38->Text;
	String^ bib = textBox25->Text;
	String^ ppa = label35->Text;
	String^ bub = textBox23->Text;
	String^ pupa = label36->Text;
	String^ bcb = textBox24->Text;

	StreamWriter^ Write = gcnew StreamWriter("Inf.txt");//сохранить данные в Inf.txt 
	Write->WriteLine(a);
	Write->WriteLine(b);
	Write->WriteLine(c);
	Write->WriteLine(d);
	Write->WriteLine(f);
	Write->WriteLine(g);
	Write->WriteLine(h);
	Write->WriteLine(i);
	Write->WriteLine(j);
	Write->WriteLine(k);
	Write->WriteLine(l);
	Write->WriteLine(m);
	Write->WriteLine(n);
	Write->WriteLine(o);
	Write->WriteLine(p);
	Write->WriteLine(q);
	Write->WriteLine(r);
	Write->WriteLine(s);
	Write->WriteLine(t);
	Write->WriteLine(x);
	Write->WriteLine(y);
	Write->WriteLine(z);
	Write->WriteLine(ez);
	Write->WriteLine(ab);
	Write->WriteLine(bc);
	Write->WriteLine(cd);
	Write->WriteLine(de);
	Write->WriteLine(ef);
	Write->WriteLine(kl); 
	Write->WriteLine(lm); 
	Write->WriteLine(mn);
	Write->WriteLine(no);
	Write->WriteLine(op);
	Write->WriteLine(pq);
	Write->WriteLine(qr);
	Write->WriteLine(rs);
	Write->WriteLine(st);
	Write->WriteLine(tu);
	Write->WriteLine(uv);
	Write->WriteLine(vw);
	Write->WriteLine(wx);
	Write->WriteLine(xy);
	Write->WriteLine(yz);
	Write->WriteLine(zz);
	Write->WriteLine(aa);
	Write->WriteLine(bb);
	Write->WriteLine(pipa);
	Write->WriteLine(bib);
	Write->WriteLine(ppa);
	Write->WriteLine(bub);
	Write->WriteLine(pupa);
	Write->WriteLine(bcb);
	Write->Close();
	MessageBox::Show(this, "Даннные сохранены", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void описаниеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	MyForm3^ form3 = gcnew MyForm3();
	form3->Owner = this;
	form3->Show();//показать окно

}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{//расчет тарифа исходя из выбраной переодичности уплаты взносов
	    String^ comboBoxValue = this->comboBox2->SelectedItem->ToString();
		if (comboBoxValue == "Ежегодно")//ежегодно
		{
			double c = 18.1908;
			this->textBox26->Clear();
			this->textBox26->Text = c.ToString();

			double e = 0.0945;
			this->textBox27->Clear();
			this->textBox27->Text =e.ToString();

			double f = 0.0045;
			this->textBox28->Clear();
			this->textBox28->Text = f.ToString();

			double n = 2.0250;
			this->textBox29->Clear();
			this->textBox29->Text = n.ToString();

			double u = 2.4923;
			this->textBox30->Clear();
			this->textBox30->Text = u.ToString();
		}
		else if(comboBoxValue == "Раз в полгода")//раз в полгода
		{
			double d = 9.2278;
			this->textBox26->Clear();
			this->textBox26->Text = d.ToString();

			double c = 0.0475;
			this->textBox27->Clear();
			this->textBox27->Text = c.ToString();

			double y = 0.0025;
			this->textBox28->Clear();
			this->textBox28->Text = y.ToString();

			double x = 1.0125;
			this->textBox29->Clear();
			this->textBox29->Text = x.ToString();

			double o = 1.2460;
			this->textBox30->Clear();
			this->textBox30->Text = o.ToString();
		}
		else//ежемесячно
		{
			double j = 1.4713;
			this->textBox26->Clear();
			this->textBox26->Text = j.ToString();

			double s = 0.0079;
			this->textBox27->Clear();
			this->textBox27->Text = s.ToString();


			double v = 0.0055;
			this->textBox28->Clear();
			this->textBox28->Text = v.ToString();

			double x = 0.1688;
			this->textBox29->Clear();
			this->textBox29->Text = x.ToString();

			double z = 0.2080;
			this->textBox30->Clear();
			this->textBox30->Text = z.ToString();
		}
		
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
	if (checkBox1->Checked)
	{
		MessageBox::Show(this,"К сожалению на данный момент акция отсутствует! Приносим свои извенения!", "Сообщение",MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void groupBox5_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	double a = Convert::ToDouble(this->textBox42->Text);
	double c = Convert::ToDouble(this->textBox26->Text);
	this->textBox13->Clear();
	this->textBox13->Text = a.ToString();
	double b = a * c;//расчет лимита ответственности по страховому случаю "достижение возраста"
	this->textBox18->Clear();
	this->textBox18->Text = b.ToString();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	double d = Convert::ToDouble(this->textBox43->Text);
	double el = Convert::ToDouble(this->textBox27->Text);
	this->textBox16->Clear();
	this->textBox16->Text = d.ToString();
	double k = d * el;//расчет лимита ответственности по страховому случаю "смерть"
	this->textBox19->Clear();
	this->textBox19->Text = k.ToString();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	double l = Convert::ToDouble(this->textBox44->Text);
	double m = Convert::ToDouble(this->textBox28->Text);
	this->textBox14->Clear();
	this->textBox14->Text = l.ToString();
	double r = l * m;//расчет лимита ответственности по страховому случаю "инвалидность"
	this->textBox20->Clear();
	this->textBox20->Text = r.ToString();

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	double v = Convert::ToDouble(this->textBox45->Text);
	double kook = Convert::ToDouble(this->textBox29->Text);
	this->textBox15->Clear();
	this->textBox15->Text = v.ToString();
	double vkook = v * kook;//расчет лимита ответственности по страховому случаю "вред здоровью"
	this->textBox21->Clear();
	this->textBox21->Text = vkook.ToString();

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	double yon = Convert::ToDouble(this->textBox46->Text);
	double min = Convert::ToDouble(this->textBox30->Text);
	this->textBox17->Clear();
	this->textBox17->Text = yon.ToString();
	double yonmin = yon * min;//расчет лимита ответственности по страховому случаю "временная нетрудоспособность"
	this->textBox22->Clear();
	this->textBox22->Text = yonmin.ToString();

}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) 
{//расчет страховой суммы
	double jk = Convert::ToDouble(this->textBox18->Text);
	double vmin = Convert::ToDouble(this->textBox19->Text);
	double vkook = Convert::ToDouble(this->textBox20->Text);
	double namjin = Convert::ToDouble(this->textBox21->Text);
	double jhope = Convert::ToDouble(this->textBox22->Text);

	double lms = jk + vmin + vkook + namjin + jhope;
	this->textBox25->Clear();
	this->textBox25->Text = lms.ToString();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
{//расчет переодического взноса
	double vа = Convert::ToDouble(this->textBox13->Text);
	double rm = Convert::ToDouble(this->textBox16->Text);
	double kooki = Convert::ToDouble(this->textBox14->Text);
	double jm = Convert::ToDouble(this->textBox15->Text);
	double jin = Convert::ToDouble(this->textBox17->Text);

	double msh = vа + rm + kooki + jm + jin;
	this->textBox23->Clear();
	this->textBox23->Text = msh.ToString();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) 
{//расчет налогового вычета
	double vi = Convert::ToDouble(this->textBox24->Text);//общий взнос по договору
	//double tm = Convert::ToDouble(this->textBox23->Text); //периодический взнос 
	double bt2 = (vi * 13 ) / 100;
	this->textBox41->Clear();
	this->textBox41->Text = bt2.ToString();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) 
{//расчет общего взноса по договору взависимости от выбранного срока договора
	double v = Convert::ToDouble(this->textBox23->Text);//периодический взнос
	double nm = Convert::ToDouble(this->comboBox4->Text);
	double vn = Convert::ToDouble(this->comboBox5->Text);
	if (nm == 3)
	{
		double d = 36 * v;
		this->textBox24->Clear();
		this->textBox24->Text = d.ToString();
	}
	else if (nm == 3 && vn == 1)
	{
		double u = 37 * v;
		this->textBox24->Clear();
		this->textBox24->Text = u.ToString();
	}
	else if (nm == 3 && vn == 2)
	{
		double y = 38 * v;
		this->textBox24->Clear();
		this->textBox24->Text = y.ToString();
	}
	else if (nm == 3 && vn == 3)
	{
		double h = 39 * v;
		this->textBox24->Clear();
		this->textBox24->Text = h.ToString();
	}
	else if (nm == 3 && vn == 4)
	{
		double g= 40 * v;
		this->textBox24->Clear();
		this->textBox24->Text = g.ToString();
	}
	else if (nm == 3 && vn == 5)
	{
		double k = 41 * v;
		this->textBox24->Clear();
		this->textBox24->Text = k.ToString();
	}
	else if (nm == 3 && vn == 6)
	{
		double l = 42 * v;
		this->textBox24->Clear();
		this->textBox24->Text = l.ToString();
	}
	else if (nm == 3 && vn == 7)
	{
		double b = 43 * v;
		this->textBox24->Clear();
		this->textBox24->Text = b.ToString();
	}
	else if (nm == 3 && vn == 9)
	{
		double j = 44 * v;
		this->textBox24->Clear();
		this->textBox24->Text = j.ToString();
	}
	else if (nm == 3 && vn == 10)
	{
		double gm = 45 * v;
		this->textBox24->Clear();
		this->textBox24->Text = gm.ToString();
	}
	else if (nm == 3 && vn == 11)
	{
		double dm = 46 * v;
		this->textBox24->Clear();
		this->textBox24->Text = dm.ToString();
	}
	else if (nm == 4)
	{
		double kt = 48 * v;
		this->textBox24->Clear();
		this->textBox24->Text = kt.ToString();
	}
	else if (nm == 4 && vn == 1)
	{
		double kn = 49 * v;
		this->textBox24->Clear();
		this->textBox24->Text = kn.ToString();
	}
	else if (nm == 4 && vn == 2)
	{
		double rt = 50 * v;
		this->textBox24->Clear();
		this->textBox24->Text = rt.ToString();
	}
	else if (nm == 4 && vn == 3)
	{
		double tf = 51 * v;
		this->textBox24->Clear();
		this->textBox24->Text = tf.ToString();
	}
	else if (nm == 4 && vn == 4)
	{
	double f = 52 * v;
	this->textBox24->Clear();
	this->textBox24->Text = f.ToString();
	}
	else if (nm == 4 && vn == 5)
	{
	double lo = 53 * v;
	this->textBox24->Clear();
	this->textBox24->Text = lo.ToString();
	}
	else if (nm == 4 && vn == 6)
	{
	double jp = 54 * v;
	this->textBox24->Clear();
	this->textBox24->Text = jp.ToString();
	}
	else if (nm == 4 && vn == 7)
	{
	double mj = 55 * v;
	this->textBox24->Clear();
	this->textBox24->Text = mj.ToString();
	}
	else if (nm == 4 && vn == 8)
	{
	double xs = 56 * v;
	this->textBox24->Clear();
	this->textBox24->Text = xs.ToString();
	}
	else if (nm == 4 && vn == 9)
	{
	double xx = 57 * v;
	this->textBox24->Clear();
	this->textBox24->Text = xx.ToString();
	}
	else if (nm == 4 && vn == 10)
	{
	double pz = 58 * v;
	this->textBox24->Clear();
	this->textBox24->Text = pz.ToString();
	}
	else if (nm == 4 && vn == 11)
	{
	double ki = 59 * v;
	this->textBox24->Clear();
	this->textBox24->Text = ki.ToString();
	}
	else if (nm == 5)
	{
	double hd = 60 * v;
	this->textBox24->Clear();
	this->textBox24->Text = hd.ToString();
    }
	else if (nm == 5 && vn == 1)
	{
	double bt = 61 * v;
	this->textBox24->Clear();
	this->textBox24->Text = bt.ToString();
	}
	else if (nm == 5 && vn == 2)
	{
	double bp = 62 * v;
	this->textBox24->Clear();
	this->textBox24->Text = bp.ToString();
	}
	else if (nm == 5 && vn == 3)
	{
	double ts = 63 * v;
	this->textBox24->Clear();
	this->textBox24->Text = ts.ToString();
	}
	else if (nm == 5 && vn == 4)
	{
	double fr = 64 * v;
	this->textBox24->Clear();
	this->textBox24->Text = fr.ToString();
	}
	else if (nm == 5 && vn == 5)
	{
	double gt = 65 * v;
	this->textBox24->Clear();
	this->textBox24->Text = gt.ToString();
	}
	else if (nm == 5 && vn == 6)
	{
	double vy = 66 * v;
	this->textBox24->Clear();
	this->textBox24->Text = vy.ToString();
	}
	else if (nm == 5 && vn == 7)
	{
	double hu = 67 * v;
	this->textBox24->Clear();
	this->textBox24->Text = hu.ToString();
	}
	else if (nm == 5 && vn == 8)
	{
	double m = 68 * v;
	this->textBox24->Clear();
	this->textBox24->Text = m.ToString();
	}
	else if (nm == 5 && vn == 9)
	{
	double o = 69 * v;
	this->textBox24->Clear();
	this->textBox24->Text = o.ToString();
	}
	else if (nm == 5 && vn == 10)
	{
	double zh = 70 * v;
	this->textBox24->Clear();
	this->textBox24->Text = zh.ToString();
	}
	else if (nm == 5 && vn == 11)
	{
	double n = 71 * v;
	this->textBox24->Clear();
	this->textBox24->Text = n.ToString();
	}
	else if (nm == 6)
	{
	double og = 72 * v;
	this->textBox24->Clear();
	this->textBox24->Text = og.ToString();
    }
	else if (nm == 6 && vn == 1)
	{
	double mn = 73 * v;
	this->textBox24->Clear();
	this->textBox24->Text = mn.ToString();
	}
	else if (nm == 6 && vn == 2)
	{
	double ep = 74 * v;
	this->textBox24->Clear();
	this->textBox24->Text = ep.ToString();
	}
	else if (nm == 6 && vn == 3)
	{
	double et = 75 * v;
	this->textBox24->Clear();
	this->textBox24->Text = et.ToString();
	}
	else if (nm == 6 && vn == 4)
	{
	double eh = 76 * v;
	this->textBox24->Clear();
	this->textBox24->Text = eh.ToString();
	}
	else if (nm == 6 && vn == 5)
	{
	double er = 77 * v;
	this->textBox24->Clear();
	this->textBox24->Text = er.ToString();
	}
	else if (nm == 6 && vn == 6)
	{
	double ey = 78 * v;
	this->textBox24->Clear();
	this->textBox24->Text = ey.ToString();
	}
	else if (nm == 6 && vn == 7)
	{
	double ew = 79 * v;
	this->textBox24->Clear();
	this->textBox24->Text = ew.ToString();
	}
	else if (nm == 6 && vn == 8)
	{
	double es = 80 * v;
	this->textBox24->Clear();
	this->textBox24->Text = es.ToString();
	}
	else if (nm == 6 && vn == 9)
	{
	double ed = 81 * v;
	this->textBox24->Clear();
	this->textBox24->Text = ed.ToString();
	}
	else if (nm == 6 && vn == 10)
	{
	double ea = 82 * v;
	this->textBox24->Clear();
	this->textBox24->Text = ea.ToString();
	}
	else if (nm == 6 && vn == 11)
	{
	double eq = 83 * v;
	this->textBox24->Clear();
	this->textBox24->Text = eq.ToString();
	}
	else if (nm == 7)
	{
	double lol = 84 * v;
	this->textBox24->Clear();
	this->textBox24->Text = lol.ToString();
	}
	else if (nm == 7 && vn == 1)
	{
	double ez = 85 * v;
	this->textBox24->Clear();
	this->textBox24->Text = ez.ToString();
	}
	else if (nm == 7 && vn == 2)
	{
	double eb = 86 * v;
	this->textBox24->Clear();
	this->textBox24->Text = eb.ToString();
	}
	else if (nm == 7 && vn == 3)
	{
	double emn = 87 * v;
	this->textBox24->Clear();
	this->textBox24->Text = emn.ToString();
	}
	else if (nm == 7 && vn == 4)
	{
	double elk = 88 * v;
	this->textBox24->Clear();
	this->textBox24->Text = elk.ToString();
	}
	else if (nm == 7 && vn == 5)
	{
	double bom = 89 * v;
	this->textBox24->Clear();
	this->textBox24->Text = bom.ToString();
	}
	else if (nm == 7 && vn == 6)
	{
	double ugh = 90 * v;
	this->textBox24->Clear();
	this->textBox24->Text = ugh.ToString();
	}
	else if (nm == 7 && vn == 7)
	{
	double ivi = 91 * v;
	this->textBox24->Clear();
	this->textBox24->Text = ivi.ToString();
	}
	else if (nm == 7 && vn == 8)
	{
	double iva = 92 * v;
	this->textBox24->Clear();
	this->textBox24->Text = iva.ToString();
	}
	else if (nm == 7 && vn == 9)
	{
	double ava = 93 * v;
	this->textBox24->Clear();
	this->textBox24->Text = ava.ToString();
	}
	else if (nm == 7 && vn == 10)
	{
	double ida = 94 * v;
	this->textBox24->Clear();
	this->textBox24->Text = ida.ToString();
	}
	else if (nm == 7 && vn == 11)
	{
	double ika = 95 * v;
	this->textBox24->Clear();
	this->textBox24->Text = ika.ToString();
	}
	else if (nm == 8)
	{
	double sos = 96 * v;
	this->textBox24->Clear();
	this->textBox24->Text = sos.ToString();
	}
	else if (nm == 8 && vn == 1)
	{
	double spa = 97 * v;
	this->textBox24->Clear();
	this->textBox24->Text = spa.ToString();
	}
	else if (nm == 8 && vn == 2)
	{
	double siti = 98 * v;
	this->textBox24->Clear();
	this->textBox24->Text = siti.ToString();
	}
	else if (nm == 8 && vn == 3)
	{
	double plz = 99 * v;
	this->textBox24->Clear();
	this->textBox24->Text = plz.ToString();
	}
	else if (nm == 8 && vn == 4)
	{
	double help = 100 * v;
	this->textBox24->Clear();
	this->textBox24->Text = help.ToString();
	}
	else if (nm == 8 && vn == 5)
	{
	double kill = 101 * v;
	this->textBox24->Clear();
	this->textBox24->Text = kill.ToString();
	}
	else if (nm == 8 && vn == 6)
	{
	double lopuh = 102 * v;
	this->textBox24->Clear();
	this->textBox24->Text = lopuh.ToString();
	}
	else if (nm == 8 && vn == 7)
	{
	double hochu = 103 * v;
	this->textBox24->Clear();
	this->textBox24->Text = hochu.ToString();
	}
	else if (nm == 8 && vn == 8)
	{
	double go = 104 * v;
	this->textBox24->Clear();
	this->textBox24->Text = go.ToString();
	}
	else if (nm == 8 && vn == 9)
	{
	double home = 105 * v;
	this->textBox24->Clear();
	this->textBox24->Text = home.ToString();
	}
	else if (nm == 8 && vn == 10)
	{
	double fig = 106 * v;
	this->textBox24->Clear();
	this->textBox24->Text = fig.ToString();
	}
	else if (nm == 8 && vn == 11)
	{
	double na = 107 * v;
	this->textBox24->Clear();
	this->textBox24->Text = na.ToString();
	}
	else if (nm == 9)
	{
	double hee = 108 * v;
	this->textBox24->Clear();
	this->textBox24->Text = hee.ToString();
	}
	else if (nm == 9 && vn == 1)
	{
	double llp = 109 * v;
	this->textBox24->Clear();
	this->textBox24->Text = llp.ToString();
	}
	else if (nm == 9 && vn == 2)
	{
	double lpp = 110 * v;
	this->textBox24->Clear();
	this->textBox24->Text = lpp.ToString();
	}
	else if (nm == 9 && vn == 3)
	{
	double lop = 111 * v;
	this->textBox24->Clear();
	this->textBox24->Text = lop.ToString();
	}
	else if (nm == 9 && vn == 4)
	{
	double kol = 112 * v;
	this->textBox24->Clear();
	this->textBox24->Text = kol.ToString();
	}
	else if (nm == 9 && vn == 5)
	{
	double koll = 113 * v;
	this->textBox24->Clear();
	this->textBox24->Text = koll.ToString();
	}
	else if (nm == 9 && vn == 6)
	{
	double kkl = 114 * v;
	this->textBox24->Clear();
	this->textBox24->Text = kkl.ToString();
	}
	else if (nm == 9 && vn == 7)
	{
	double copy = 115 * v;
	this->textBox24->Clear();
	this->textBox24->Text = copy.ToString();
	}
	else if (nm == 9 && vn == 8)
	{
	double cat = 116 * v;
	this->textBox24->Clear();
	this->textBox24->Text = cat.ToString();
	}
	else if (nm == 9 && vn == 9)
	{
	double dog = 117 * v;
	this->textBox24->Clear();
	this->textBox24->Text = dog.ToString();
	}
	else if (nm == 9 && vn == 10)
	{
	double kot = 118 * v;
	this->textBox24->Clear();
	this->textBox24->Text = kot.ToString();
	}
	else if (nm == 9 && vn == 11)
	{
	double ruby = 119 * v;
	this->textBox24->Clear();
	this->textBox24->Text = ruby.ToString();
	}
	else if (nm == 10)
	{
	double gufy = 120 * v;
	this->textBox24->Clear();
	this->textBox24->Text = gufy.ToString();
	}
	else if (nm == 10 && vn == 1)
	{
	double pufi = 121 * v;
	this->textBox24->Clear();
	this->textBox24->Text = pufi.ToString();
	}
	else if (nm == 10 && vn == 2)
	{
	double puf = 122 * v;
	this->textBox24->Clear();
	this->textBox24->Text = puf.ToString();
	}
	else if (nm == 10 && vn == 3)
	{
	double paf = 123 * v;
	this->textBox24->Clear();
	this->textBox24->Text = paf.ToString();
	}
	else if (nm == 10 && vn == 4)
	{
	double sqwid = 124 * v;
	this->textBox24->Clear();
	this->textBox24->Text = sqwid.ToString();
	}
	else if (nm == 10 && vn == 5)
	{
	double ward = 125 * v;
	this->textBox24->Clear();
	this->textBox24->Text = ward.ToString();
	
	}
	else if (nm == 10 && vn == 6)
	{
	double spanch = 126 * v;
	this->textBox24->Clear();
	this->textBox24->Text = spanch.ToString();
	}
	else if (nm == 10 && vn == 7)
	{
	double bob = 127 * v;
	this->textBox24->Clear();
	this->textBox24->Text = bob.ToString();
	}
	else if (nm == 10 && vn == 8)
	{
	double ui = 128 * v;
	this->textBox24->Clear();
	this->textBox24->Text = ui.ToString();
	}
	else if (nm == 10 && vn == 9)
	{
	double wang = 129 * v;
	this->textBox24->Clear();
	this->textBox24->Text = wang.ToString();
	}
	else if (nm == 10 && vn == 10)
	{
	double aziza = 130 * v;
	this->textBox24->Clear();
	this->textBox24->Text = aziza.ToString();
	}
	else if (nm == 10 && vn == 11)
	{
	double nani = 131 * v;
	this->textBox24->Clear();
	this->textBox24->Text = nani.ToString();
	}
}
private: System::Void темаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void видToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox41_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label53_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}