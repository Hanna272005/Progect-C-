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

namespace êóğñîâàÿ2êóğñ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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
	private: System::Windows::Forms::ToolStripMenuItem^ âèäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òåìàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êğàñíûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ æåëòûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çåëåíûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÿçûêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğóññêèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ àíãëèéñêèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ áåëîğóññêèéToolStripMenuItem;

	protected:

	protected:








	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
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
			this->âèäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òåìàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êğàñíûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->æåëòûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåëåíûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÿçûêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğóññêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àíãëèéñêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áåëîğóññêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->label1->Text = L"ÀÂÒÎĞÈÇÀÖÈß";
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
			this->label2->Text = L"ËÎÃÈÍ";
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
			this->label3->Text = L"ÏÀĞÎËÜ";
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
			this->button1->Text = L"ÂÛÕÎÄ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(340, 225);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 38);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Âîéòè";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->âèäToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(464, 28);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// âèäToolStripMenuItem
			// 
			this->âèäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->òåìàToolStripMenuItem,
					this->ÿçûêToolStripMenuItem
			});
			this->âèäToolStripMenuItem->Name = L"âèäToolStripMenuItem";
			this->âèäToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->âèäToolStripMenuItem->Text = L"Âèä";
			// 
			// òåìàToolStripMenuItem
			// 
			this->òåìàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->êğàñíûéToolStripMenuItem,
					this->æåëòûéToolStripMenuItem, this->çåëåíûéToolStripMenuItem
			});
			this->òåìàToolStripMenuItem->Name = L"òåìàToolStripMenuItem";
			this->òåìàToolStripMenuItem->Size = System::Drawing::Size(127, 26);
			this->òåìàToolStripMenuItem->Text = L"Òåìà";
			// 
			// êğàñíûéToolStripMenuItem
			// 
			this->êğàñíûéToolStripMenuItem->Name = L"êğàñíûéToolStripMenuItem";
			this->êğàñíûéToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->êğàñíûéToolStripMenuItem->Text = L"Êğàñíûé";
			this->êğàñíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::êğàñíûéToolStripMenuItem_Click);
			// 
			// æåëòûéToolStripMenuItem
			// 
			this->æåëòûéToolStripMenuItem->Name = L"æåëòûéToolStripMenuItem";
			this->æåëòûéToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->æåëòûéToolStripMenuItem->Text = L"Æåëòûé";
			this->æåëòûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::æåëòûéToolStripMenuItem_Click);
			// 
			// çåëåíûéToolStripMenuItem
			// 
			this->çåëåíûéToolStripMenuItem->Name = L"çåëåíûéToolStripMenuItem";
			this->çåëåíûéToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->çåëåíûéToolStripMenuItem->Text = L"Çåëåíûé";
			this->çåëåíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::çåëåíûéToolStripMenuItem_Click);
			// 
			// ÿçûêToolStripMenuItem
			// 
			this->ÿçûêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ğóññêèéToolStripMenuItem,
					this->àíãëèéñêèéToolStripMenuItem, this->áåëîğóññêèéToolStripMenuItem
			});
			this->ÿçûêToolStripMenuItem->Name = L"ÿçûêToolStripMenuItem";
			this->ÿçûêToolStripMenuItem->Size = System::Drawing::Size(127, 26);
			this->ÿçûêToolStripMenuItem->Text = L"ßçûê";
			// 
			// ğóññêèéToolStripMenuItem
			// 
			this->ğóññêèéToolStripMenuItem->Name = L"ğóññêèéToolStripMenuItem";
			this->ğóññêèéToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->ğóññêèéToolStripMenuItem->Text = L"Ğóññêèé";
			this->ğóññêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::ğóññêèéToolStripMenuItem_Click);
			// 
			// àíãëèéñêèéToolStripMenuItem
			// 
			this->àíãëèéñêèéToolStripMenuItem->Name = L"àíãëèéñêèéToolStripMenuItem";
			this->àíãëèéñêèéToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->àíãëèéñêèéToolStripMenuItem->Text = L"Àíãëèéñêèé";
			this->àíãëèéñêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::àíãëèéñêèéToolStripMenuItem_Click);
			// 
			// áåëîğóññêèéToolStripMenuItem
			// 
			this->áåëîğóññêèéToolStripMenuItem->Name = L"áåëîğóññêèéToolStripMenuItem";
			this->áåëîğóññêèéToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->áåëîğóññêèéToolStripMenuItem->Text = L"Áåëîğóññêèé";
			this->áåëîğóññêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::áåëîğóññêèéToolStripMenuItem_Click);
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
	StreamReader^ reader = gcnew StreamReader("ëîãèí.txt");
	StreamReader^ reader2 = gcnew StreamReader("ïàğîëü.txt");

	// ×èòàåì ïåğâóş ñòğîêó èç ôàéëà
	String^ savedValue = reader->ReadLine();
	String^ savedValue2 = reader2->ReadLine();

	// Çàêğûâàåì StreamReader
	reader->Close();
	reader2->Close();

	// Ïîëó÷àåì çíà÷åíèå èç òåêñòîâîãî ïîëÿ
	String^ currentValue = textBox1->Text;
	String^ currentValue2 = textBox2->Text;

	// Ñğàâíèâàåì çíà÷åíèÿ
	if (savedValue == currentValue && savedValue2 == currentValue2)
	{
		// Âûâîäèì ñîîáùåíèå îá óñïåøíîé ïğîâåğêå
		MyForm2^ form1 = gcnew MyForm2();
		form1->Show();
		this->Hide();
	}
	else
	{
		// Âûâîäèì ñîîáùåíèå îá îøèáêå
		MessageBox::Show("Äàííûå íå íàéäåíû");
	}

}
private: System::Void êğàñíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Red;
	button1->BackColor = Color::HotPink;
	button2->BackColor = Color::HotPink;
}
private: System::Void æåëòûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Orange;
	button1->BackColor = Color::IndianRed;
	button2->BackColor = Color::IndianRed;
}
private: System::Void çåëåíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::LightGreen;
	button1->BackColor = Color::Olive;
	button2->BackColor = Color::Olive;
}
private: System::Void ğóññêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "ÀÂÒÎĞÈÇÀÖÈß";
	label2->Text = "ËÎÃÈÍ";
	label3->Text = "ÏÀĞÎËÜ";
	button1->Text = "ÂÛÕÎÄ";
	button2->Text = "ÎÊ";
	âèäToolStripMenuItem->Text = "Âèä";
	òåìàToolStripMenuItem->Text = "Òåìà";
	ÿçûêToolStripMenuItem->Text = "ßçûê";
	êğàñíûéToolStripMenuItem->Text = "Êğàñíûé";
	æåëòûéToolStripMenuItem->Text = "Æåëòûé";
	çåëåíûéToolStripMenuItem->Text = "Çåëåíûé";
	ğóññêèéToolStripMenuItem->Text = "Ğóññêèé";
	àíãëèéñêèéToolStripMenuItem->Text = "Àíãëèéñêèé";
	áåëîğóññêèéToolStripMenuItem->Text = "Áåëîğóññêèé";
}
private: System::Void àíãëèéñêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "AUTHORIZATION";
	label2->Text = "LOGIN";
	label3->Text = "PASSWORD";
	button1->Text = "EXIT";
	button2->Text = "OK";
	âèäToolStripMenuItem->Text = "VIEW";
	òåìàToolStripMenuItem->Text = "Topic";
	ÿçûêToolStripMenuItem->Text = "Language";
	êğàñíûéToolStripMenuItem->Text = "Red";
	æåëòûéToolStripMenuItem->Text = "Orange";
	çåëåíûéToolStripMenuItem->Text = "Green";
	ğóññêèéToolStripMenuItem->Text = "Russsian";
	àíãëèéñêèéToolStripMenuItem->Text = "English";
	áåëîğóññêèéToolStripMenuItem->Text = "Belarusian";
}
private: System::Void áåëîğóññêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "À¡ÒÀĞÛÇÀÖÛß";
	label2->Text = "ËÎÃ²Í";
	label3->Text = "ÏÀĞÎËÜ";
	button1->Text = "ÂÛÕÀÄ";
	button2->Text = "ÎÊ";
	âèäToolStripMenuItem->Text = "Âûãëÿä";
	òåìàToolStripMenuItem->Text = "Òıìà";
	ÿçûêToolStripMenuItem->Text = "Ìîâà";
	êğàñíûéToolStripMenuItem->Text = "×ûğâîíû";
	æåëòûéToolStripMenuItem->Text = "Æî¢òû";
	çåëåíûéToolStripMenuItem->Text = "Çÿëåíû";
	ğóññêèéToolStripMenuItem->Text = "Ğóñê³";
	àíãëèéñêèéToolStripMenuItem->Text = "Àíãë³éñê³";
	áåëîğóññêèéToolStripMenuItem->Text = "Áåëàğóñê³";
}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	
}

};
}
