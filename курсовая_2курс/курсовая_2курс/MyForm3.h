#pragma once


namespace ��������2���� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
			// 
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(433, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"������ ��������� ���������� ������� ��� ��������������";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm3::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(306, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"�����������, ������ �� �������� ������. ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm3::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(300, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"�������� ������ ������ ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(473, 18);
			this->label4->TabIndex = 4;
			this->label4->Text = L"���� ��� � ��� �������, ����� ��������� ���� � �����������,";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 82);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(447, 18);
			this->label5->TabIndex = 5;
			this->label5->Text = L"��� ���������� �������� � ������� ���������, �����������,";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 100);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(488, 18);
			this->label6->TabIndex = 6;
			this->label6->Text = L"������� ������ ������������ ������. ����� ������ ����������� ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 118);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(227, 18);
			this->label7->TabIndex = 7;
			this->label7->Text = L"���� �� ���������� ��������,";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(225, 118);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(328, 18);
			this->label8->TabIndex = 8;
			this->label8->Text = L"����� ����, ��� ������ ������ � ����������,";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm3::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(-3, 136);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(348, 18);
			this->label9->TabIndex = 9;
			this->label9->Text = L" �������� ���� � ������, ������� ������ �����";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(335, 136);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(273, 18);
			this->label10->TabIndex = 10;
			this->label10->Text = L"������� �� ������ ��������� ������.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 154);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(587, 18);
			this->label11->TabIndex = 11;
			this->label11->Text = L"����� ���������� ����������� ����� ����� ��������� ����� ������ ���������.";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->���ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(946, 28);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ���ToolStripMenuItem
			// 
			this->���ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����ToolStripMenuItem });
			this->���ToolStripMenuItem->Name = L"���ToolStripMenuItem";
			this->���ToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->���ToolStripMenuItem->Text = L"���";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->����������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(126, 26);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm3::�������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm3::����������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm3::����������ToolStripMenuItem_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(946, 187);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm3";
			this->Text = L"�������";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Text = "�������";
	���ToolStripMenuItem->Text = "���";
	����ToolStripMenuItem->Text = "����";
	�������ToolStripMenuItem->Text = "�������";
	����������ToolStripMenuItem->Text = "����������";
	����������ToolStripMenuItem->Text = "�����������";
	label1->Text = "������ ��������� ���������� ������ ��� ��������������";
	label2->Text = "�����������, ������ �� ��������� ������.";
	label3->Text = "�������� ������ ������";
	label4->Text = "���� ��� � ��� �������, ����� ��������� ���� � �����������,";
	label5->Text = "��� ���������� �������� � ������� ���������, �����������,";
	label6->Text = "������� ������ ������������ ������. ����� ������ ����������� ";
	label7->Text = "���� �� ���������� ��������,";
	label8->Text = "����� ����, ��� ������ ������ ��������� ������, �������� ������ c";
	label9->Text = "�������� ������ ��������� ���� � ������, ������� ������ �����";
	label10->Text = "������� ��  ��������� ��������� ������. ����� ����������";
	label11->Text = "����������� ����� ����� ��������� ����� ������ ���������.";
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Text = "�������";
	���ToolStripMenuItem->Text = "������";
	����ToolStripMenuItem->Text = "����";
	�������ToolStripMenuItem->Text = "�����";
	����������ToolStripMenuItem->Text = "��������";
	����������ToolStripMenuItem->Text = "���������";
	label1->Text = "�������� �������� �������� ����� ��� ���������������";
	label2->Text = "�����������, ��������� � ��������� ��������.";
	label3->Text = "������� ������ ������";
	label4->Text = "��� ��������, ��� � ��������, ��� ������, ������� ������� ��� � ����������";
	label5->Text = "��� ���������� �������� � ������ �������, �����������,";
	label6->Text = "���� ������ ���� �����. ����� ������ ��������� ";
	label7->Text = "���� �� ��������� ��������,";
	label8->Text = "����� ����, �� ����� ���� ��������� ������, ������� ����� c";
	label9->Text = "������� ������ ������� ���� � �����, ���� ����� �����";
	label10->Text = "������� �� �������� ��������� ������. ����� ���������";
	label11->Text = "���������� ��븢 ����� �������� ���� ����� �������.";
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Text = "Reference";
	���ToolStripMenuItem->Text = "View";
	����ToolStripMenuItem->Text = "Language";
	�������ToolStripMenuItem->Text = "Russian";
	����������ToolStripMenuItem->Text = "English";
	����������ToolStripMenuItem->Text = "Belarusian";
	label1->Text = "This program makes a calculation for cumulative";
	label2->Text = "�insurance based on the data entered.";
	label3->Text = "The employee must enter";
	label4->Text = "his full name and the client's full name, and also fill in the fields with the necessary";
	label5->Text = "information that the client must provide  to conclude";
	label6->Text = "the contract and calculate insurance. Next, the fields with insurance ";
	label7->Text = "cases must be filled in, after the client";
	label8->Text = "has selected insurance cases, the employee together with";
	label9->Text = " the client must fill in the fields with the amount ";
	label10->Text = "that the client will pay for the selected insurance cases. After filling in the required";
	label11->Text = "fields, the amount of full insurance will be calculated.";
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
