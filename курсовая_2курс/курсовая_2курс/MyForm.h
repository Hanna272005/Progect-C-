#pragma once


#include "MyForm2.h"
#include "MyForm1.h"
#include <iostream>
#include <fstream> 
#include <string>
  

using namespace std;
using namespace System::IO;



namespace êóğñîâàÿ2êóğñ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
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
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ âèäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òåìàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğîçîâûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôèîëåòîâûéToolStripMenuItem;
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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->âèäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òåìàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğîçîâûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôèîëåòîâûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->label1->Location = System::Drawing::Point(182, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ĞÅÃÈÑÒĞÀÖÈß";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(51, 73);
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
			this->label3->Location = System::Drawing::Point(51, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ÏÀĞÎËÜ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(186, 111);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(186, 73);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 22);
			this->textBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 191);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 42);
			this->button1->TabIndex = 5;
			this->button1->Text = L"ÂÛÕÎÄ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(142, 191);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 42);
			this->button2->TabIndex = 6;
			this->button2->Text = L"ÓÆÅ ÇÀĞÅÃÈÑÒĞÈĞÎÂÀÍ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(345, 191);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 42);
			this->button3->TabIndex = 7;
			this->button3->Text = L"ÑÎÕĞÀÍÈÒÜ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->âèäToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(504, 28);
			this->menuStrip1->TabIndex = 8;
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
			this->âèäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âèäToolStripMenuItem_Click);
			// 
			// òåìàToolStripMenuItem
			// 
			this->òåìàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ğîçîâûéToolStripMenuItem,
					this->ñèíèéToolStripMenuItem, this->ôèîëåòîâûéToolStripMenuItem
			});
			this->òåìàToolStripMenuItem->Name = L"òåìàToolStripMenuItem";
			this->òåìàToolStripMenuItem->Size = System::Drawing::Size(127, 26);
			this->òåìàToolStripMenuItem->Text = L"Òåìà";
			// 
			// ğîçîâûéToolStripMenuItem
			// 
			this->ğîçîâûéToolStripMenuItem->Name = L"ğîçîâûéToolStripMenuItem";
			this->ğîçîâûéToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->ğîçîâûéToolStripMenuItem->Text = L"Ğîçîâûé";
			this->ğîçîâûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ğîçîâûéToolStripMenuItem_Click);
			// 
			// ñèíèéToolStripMenuItem
			// 
			this->ñèíèéToolStripMenuItem->Name = L"ñèíèéToolStripMenuItem";
			this->ñèíèéToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->ñèíèéToolStripMenuItem->Text = L"Ïåğñèêîâûé";
			this->ñèíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñèíèéToolStripMenuItem_Click);
			// 
			// ôèîëåòîâûéToolStripMenuItem
			// 
			this->ôèîëåòîâûéToolStripMenuItem->Name = L"ôèîëåòîâûéToolStripMenuItem";
			this->ôèîëåòîâûéToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->ôèîëåòîâûéToolStripMenuItem->Text = L"Ôèîëåòîâûé";
			this->ôèîëåòîâûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ôèîëåòîâûéToolStripMenuItem_Click);
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
			this->ğóññêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ğóññêèéToolStripMenuItem_Click);
			// 
			// àíãëèéñêèéToolStripMenuItem
			// 
			this->àíãëèéñêèéToolStripMenuItem->Name = L"àíãëèéñêèéToolStripMenuItem";
			this->àíãëèéñêèéToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->àíãëèéñêèéToolStripMenuItem->Text = L"Àíãëèéñêèé";
			this->àíãëèéñêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::àíãëèéñêèéToolStripMenuItem_Click);
			// 
			// áåëîğóññêèéToolStripMenuItem
			// 
			this->áåëîğóññêèéToolStripMenuItem->Name = L"áåëîğóññêèéToolStripMenuItem";
			this->áåëîğóññêèéToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->áåëîğóññêèéToolStripMenuItem->Text = L"Áåëîğóññêèé";
			this->áåëîğóññêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::áåëîğóññêèéToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(504, 280);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
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

	MyForm1^ form = gcnew MyForm1();
	form->Show();
	this->Hide(); 
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {	
	String^ value = textBox1->Text;
	String^ value2 = textBox2->Text;

	// Ñîçäàåì ıêçåìïëÿğ StreamWriter äëÿ çàïèñè â ôàéë
	StreamWriter^ writer = gcnew StreamWriter("ïàğîëü.txt");
	StreamWriter^ writer2 = gcnew StreamWriter("ëîãèí.txt");

	// Çàïèñûâàåì çíà÷åíèå â ôàéë
	writer->WriteLine(value);
	writer2->WriteLine(value2);

	// Çàêğûâàåì StreamWriter
	writer->Close();
	writer2->Close();

	// Âûâîäèì ñîîáùåíèå îá óñïåøíîì ñîõğàíåíèè
	MessageBox::Show("Äàííûå ñîõğàíåíû");
	MyForm1^ form = gcnew MyForm1();
	form->Show();
	this->Hide();
}
private: System::Void ğîçîâûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::LightPink;
	button1->BackColor = Color::Aqua;
	button2->BackColor = Color::Aqua;
	button3->BackColor = Color::Aqua;
}
private: System::Void ñèíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::PeachPuff;
	button1->BackColor = Color::LightSkyBlue;
	button2->BackColor = Color::LightSkyBlue;
	button3->BackColor = Color::LightSkyBlue;
}
private: System::Void ôèîëåòîâûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::MediumPurple;
	button1->BackColor = Color::LimeGreen;
	button2->BackColor = Color::LimeGreen;
	button3->BackColor = Color::LimeGreen; 
}
private: System::Void ğóññêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "ĞÅÃÈÑÒĞÀÖÈß";
	label2->Text = "ËÎÃÈÍ";
	label3->Text = "ÏÀĞÎËÜ";
	button1->Text = "ÂÛÕÎÄ";
	button2->Text = "ÀÂÒÎĞÈÇÀÖÈß";
	button3->Text = "ÎÊ";
	âèäToolStripMenuItem->Text = "Âèä";
	òåìàToolStripMenuItem->Text = "Òåìà";
	ÿçûêToolStripMenuItem->Text = "ßçûê";
	ğîçîâûéToolStripMenuItem->Text = "Ğîçîâûé";
	ñèíèéToolStripMenuItem->Text = "Ïåğñèêîâûé";
    ôèîëåòîâûéToolStripMenuItem->Text = "Ôèîëåòîâûé";
	ğóññêèéToolStripMenuItem->Text = "Ğóññêèé";
	àíãëèéñêèéToolStripMenuItem->Text = "Àíãëèéñêèé";
	áåëîğóññêèéToolStripMenuItem->Text = "Áåëîğóññêèé";
}
private: System::Void âèäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void àíãëèéñêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "REGISTRATION";
	label2->Text = "LOGIN";
	label3->Text = "PASSWORD";
	button1->Text = "EXIT";
	button2->Text = "AUTHORIZATION";
	button3->Text = "OK";
	âèäToolStripMenuItem->Text = "VIEW";
	òåìàToolStripMenuItem->Text = "Topic";
	ÿçûêToolStripMenuItem->Text = "Language";
	ğîçîâûéToolStripMenuItem->Text = "Pink";
	ñèíèéToolStripMenuItem->Text = "Peach";
	ôèîëåòîâûéToolStripMenuItem->Text = "Purpule";
	ğóññêèéToolStripMenuItem->Text = "Russsian";
	àíãëèéñêèéToolStripMenuItem->Text = "English";
	áåëîğóññêèéToolStripMenuItem->Text = "Belarusian";
}
private: System::Void áåëîğóññêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "ĞİÃ²ÑÒĞÀÖÛß";
	label2->Text = "ËÎÃ²Í";
	label3->Text = "ÏÀĞÎËÜ";
	button1->Text = "ÂÛÕÀÄ";
	button2->Text = "À¡ÒÀĞÛÇÀÖÛß";
	button3->Text = "ÎÊ";
	âèäToolStripMenuItem->Text = "Âûãëÿä";
	òåìàToolStripMenuItem->Text = "Òıìà";
	ÿçûêToolStripMenuItem->Text = "Ìîâà";
	ğîçîâûéToolStripMenuItem->Text = "Ğóæîâû";
	ñèíèéToolStripMenuItem->Text = "Ïåğñ³êàâû";
	ôèîëåòîâûéToolStripMenuItem->Text = "Ô³ÿëåòàâû";
	ğóññêèéToolStripMenuItem->Text = "Ğóñê³";
	àíãëèéñêèéToolStripMenuItem->Text = "Àíãë³éñê³";
	áåëîğóññêèéToolStripMenuItem->Text = "Áåëàğóñê³";
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
};
}
 