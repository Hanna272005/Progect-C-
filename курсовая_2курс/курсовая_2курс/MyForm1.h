#pragma once

#include "MyForm.h"
#include "MyForm2.h"
#include <iostream>
#include <fstream> 
#include <string>
#include <Windows.h>
#include <msclr/marshal_cppstd.h>  

using namespace std;
using namespace System::IO;
using namespace msclr::interop;

namespace ��������2���� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;

	protected:

	protected:








	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(171, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�����������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(48, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"�����";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(48, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"������";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(175, 95);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(192, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(175, 153);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(192, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 225);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 38);
			this->button1->TabIndex = 5;
			this->button1->Text = L"�����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(340, 225);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 38);
			this->button2->TabIndex = 6;
			this->button2->Text = L"�����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->���ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(464, 28);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ���ToolStripMenuItem
			// 
			this->���ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->����ToolStripMenuItem
			});
			this->���ToolStripMenuItem->Name = L"���ToolStripMenuItem";
			this->���ToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->���ToolStripMenuItem->Text = L"���";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->������ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(127, 26);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::�������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::�������ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->�����������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(127, 26);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::�������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::����������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::�����������ToolStripMenuItem_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(464, 296);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ reader = gcnew StreamReader("�����.txt");
	StreamReader^ reader2 = gcnew StreamReader("������.txt");

	// ������ ������ ������ �� �����
	String^ savedValue = reader->ReadLine();
	String^ savedValue2 = reader2->ReadLine();

	// ��������� StreamReader
	reader->Close();
	reader2->Close();

	// �������� �������� �� ���������� ����
	String^ currentValue = textBox1->Text;
	String^ currentValue2 = textBox2->Text;

	// ���������� ��������
	if (savedValue == currentValue && savedValue2 == currentValue2)
	{
		// ������� ��������� �� �������� ��������
		MyForm2^ form1 = gcnew MyForm2();
		form1->Show();
		this->Hide();
	}
	else
	{
		// ������� ��������� �� ������
		MessageBox::Show("������ �� �������");
	}

}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Red;
	button1->BackColor = Color::HotPink;
	button2->BackColor = Color::HotPink;
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Orange;
	button1->BackColor = Color::IndianRed;
	button2->BackColor = Color::IndianRed;
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::LightGreen;
	button1->BackColor = Color::Olive;
	button2->BackColor = Color::Olive;
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "�����������";
	label2->Text = "�����";
	label3->Text = "������";
	button1->Text = "�����";
	button2->Text = "��";
	���ToolStripMenuItem->Text = "���";
	����ToolStripMenuItem->Text = "����";
	����ToolStripMenuItem->Text = "����";
	�������ToolStripMenuItem->Text = "�������";
	������ToolStripMenuItem->Text = "������";
	�������ToolStripMenuItem->Text = "�������";
	�������ToolStripMenuItem->Text = "�������";
	����������ToolStripMenuItem->Text = "����������";
	�����������ToolStripMenuItem->Text = "�����������";
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "AUTHORIZATION";
	label2->Text = "LOGIN";
	label3->Text = "PASSWORD";
	button1->Text = "EXIT";
	button2->Text = "OK";
	���ToolStripMenuItem->Text = "VIEW";
	����ToolStripMenuItem->Text = "Topic";
	����ToolStripMenuItem->Text = "Language";
	�������ToolStripMenuItem->Text = "Red";
	������ToolStripMenuItem->Text = "Orange";
	�������ToolStripMenuItem->Text = "Green";
	�������ToolStripMenuItem->Text = "Russsian";
	����������ToolStripMenuItem->Text = "English";
	�����������ToolStripMenuItem->Text = "Belarusian";
}
private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "�����������";
	label2->Text = "��ò�";
	label3->Text = "������";
	button1->Text = "�����";
	button2->Text = "��";
	���ToolStripMenuItem->Text = "������";
	����ToolStripMenuItem->Text = "����";
	����ToolStripMenuItem->Text = "����";
	�������ToolStripMenuItem->Text = "�������";
	������ToolStripMenuItem->Text = "����";
	�������ToolStripMenuItem->Text = "������";
	�������ToolStripMenuItem->Text = "����";
	����������ToolStripMenuItem->Text = "�������";
	�����������ToolStripMenuItem->Text = "��������";
}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	
}

};
}
