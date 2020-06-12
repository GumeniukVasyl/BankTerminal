#pragma once
#include <stdlib.h>
#include "EndForm.h"
namespace Diploma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Card_InForm
	/// </summary>
	public ref class Card_InForm : public System::Windows::Forms::Form
	{
	public:
		Card_InForm(void)
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
		~Card_InForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mainMenuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel2;
	private: ::JThinButton::JThinButton^ jThinButton1;
	private: ::JThinButton::JThinButton^ jThinButton2;
	private: ::JThinButton::JThinButton^ jThinButton3;
	private: ::JThinButton::JThinButton^ jThinButton4;
	private: ::JThinButton::JThinButton^ jThinButton5;
	private: ::JThinButton::JThinButton^ jThinButton6;
	private: ::JThinButton::JThinButton^ jThinButton7;
	private: System::Windows::Forms::Label^ label1;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox1;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox2;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox3;
	private: ::JMetroTextBox::JMetroTextBox^ jMetroTextBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: ::JDragControl::JDragControl^ jDragControl1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mainMenuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->jThinButton1 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton2 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton3 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton4 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton5 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton6 = (gcnew ::JThinButton::JThinButton());
			this->jThinButton7 = (gcnew ::JThinButton::JThinButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->jMetroTextBox1 = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->jMetroTextBox2 = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->jMetroTextBox3 = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->jMetroTextBox4 = (gcnew ::JMetroTextBox::JMetroTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->jDragControl1 = (gcnew ::JDragControl::JDragControl(this->components));
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(700, 27);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mainMenuToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fileToolStripMenuItem->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(84, 23);
			this->fileToolStripMenuItem->Text = L"Actions";
			// 
			// mainMenuToolStripMenuItem
			// 
			this->mainMenuToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->mainMenuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mainMenuToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->mainMenuToolStripMenuItem->Name = L"mainMenuToolStripMenuItem";
			this->mainMenuToolStripMenuItem->Size = System::Drawing::Size(133, 28);
			this->mainMenuToolStripMenuItem->Text = L"Main";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->exitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exitToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(133, 28);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->aboutToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutToolStripMenuItem->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(72, 23);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(700, 106);
			this->panel1->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label2->Location = System::Drawing::Point(187, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(327, 47);
			this->label2->TabIndex = 1;
			this->label2->Text = L"REPLANISHMENT";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label3->Location = System::Drawing::Point(670, -5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 32);
			this->label3->TabIndex = 11;
			this->label3->Text = L"X";
			this->label3->Click += gcnew System::EventHandler(this, &Card_InForm::label3_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Chartreuse;
			this->panel2->ForeColor = System::Drawing::Color::Chartreuse;
			this->panel2->Location = System::Drawing::Point(349, 154);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(5, 414);
			this->panel2->TabIndex = 12;
			// 
			// jThinButton1
			// 
			this->jThinButton1->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton1->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->jThinButton1->BorderColor = System::Drawing::Color::White;
			this->jThinButton1->BorderRadius = 15;
			this->jThinButton1->ButtonText = L"50";
			this->jThinButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton1->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton1->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton1->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton1->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton1->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton1->LineThickness = 2;
			this->jThinButton1->Location = System::Drawing::Point(375, 151);
			this->jThinButton1->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->jThinButton1->Name = L"jThinButton1";
			this->jThinButton1->Size = System::Drawing::Size(150, 117);
			this->jThinButton1->TabIndex = 23;
			// 
			// jThinButton2
			// 
			this->jThinButton2->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton2->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->jThinButton2->BorderColor = System::Drawing::Color::White;
			this->jThinButton2->BorderRadius = 15;
			this->jThinButton2->ButtonText = L"100";
			this->jThinButton2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton2->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton2->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton2->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton2->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton2->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton2->LineThickness = 2;
			this->jThinButton2->Location = System::Drawing::Point(529, 151);
			this->jThinButton2->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->jThinButton2->Name = L"jThinButton2";
			this->jThinButton2->Size = System::Drawing::Size(150, 117);
			this->jThinButton2->TabIndex = 24;
			// 
			// jThinButton3
			// 
			this->jThinButton3->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton3->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton3->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->jThinButton3->BorderColor = System::Drawing::Color::White;
			this->jThinButton3->BorderRadius = 15;
			this->jThinButton3->ButtonText = L"200";
			this->jThinButton3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton3->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton3->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton3->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton3->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton3->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton3->LineThickness = 2;
			this->jThinButton3->Location = System::Drawing::Point(375, 269);
			this->jThinButton3->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->jThinButton3->Name = L"jThinButton3";
			this->jThinButton3->Size = System::Drawing::Size(150, 117);
			this->jThinButton3->TabIndex = 25;
			// 
			// jThinButton4
			// 
			this->jThinButton4->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton4->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton4->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->jThinButton4->BorderColor = System::Drawing::Color::White;
			this->jThinButton4->BorderRadius = 15;
			this->jThinButton4->ButtonText = L"500";
			this->jThinButton4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton4->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton4->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton4->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton4->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton4->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton4->LineThickness = 2;
			this->jThinButton4->Location = System::Drawing::Point(529, 269);
			this->jThinButton4->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->jThinButton4->Name = L"jThinButton4";
			this->jThinButton4->Size = System::Drawing::Size(150, 117);
			this->jThinButton4->TabIndex = 26;
			// 
			// jThinButton5
			// 
			this->jThinButton5->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton5->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton5->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->jThinButton5->BorderColor = System::Drawing::Color::White;
			this->jThinButton5->BorderRadius = 15;
			this->jThinButton5->ButtonText = L"1000";
			this->jThinButton5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton5->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton5->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton5->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton5->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton5->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton5->LineThickness = 2;
			this->jThinButton5->Location = System::Drawing::Point(375, 386);
			this->jThinButton5->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->jThinButton5->Name = L"jThinButton5";
			this->jThinButton5->Size = System::Drawing::Size(150, 117);
			this->jThinButton5->TabIndex = 27;
			// 
			// jThinButton6
			// 
			this->jThinButton6->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->jThinButton6->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton6->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->jThinButton6->BorderColor = System::Drawing::Color::White;
			this->jThinButton6->BorderRadius = 15;
			this->jThinButton6->ButtonText = L"2000";
			this->jThinButton6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton6->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold));
			this->jThinButton6->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton6->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton6->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton6->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->jThinButton6->LineThickness = 2;
			this->jThinButton6->Location = System::Drawing::Point(529, 386);
			this->jThinButton6->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->jThinButton6->Name = L"jThinButton6";
			this->jThinButton6->Size = System::Drawing::Size(150, 117);
			this->jThinButton6->TabIndex = 28;
			// 
			// jThinButton7
			// 
			this->jThinButton7->BackColor = System::Drawing::Color::Transparent;
			this->jThinButton7->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->jThinButton7->BorderColor = System::Drawing::Color::White;
			this->jThinButton7->BorderRadius = 23;
			this->jThinButton7->ButtonText = L"���������";
			this->jThinButton7->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->jThinButton7->Font_Size = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->jThinButton7->ForeColors = System::Drawing::SystemColors::ControlLight;
			this->jThinButton7->HoverBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton7->HoverBorder = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->jThinButton7->HoverFontColor = System::Drawing::Color::White;
			this->jThinButton7->LineThickness = 2;
			this->jThinButton7->Location = System::Drawing::Point(375, 512);
			this->jThinButton7->Margin = System::Windows::Forms::Padding(4);
			this->jThinButton7->Name = L"jThinButton7";
			this->jThinButton7->Size = System::Drawing::Size(304, 52);
			this->jThinButton7->TabIndex = 29;
			this->jThinButton7->Click += gcnew System::EventHandler(this, &Card_InForm::jThinButton7_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(37, 174);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(281, 20);
			this->label1->TabIndex = 30;
			this->label1->Text = L"������ ���� ���������� (������ 50)";
			// 
			// jMetroTextBox1
			// 
			this->jMetroTextBox1->BackColor = System::Drawing::Color::Transparent;
			this->jMetroTextBox1->BorderColor = System::Drawing::Color::Empty;
			this->jMetroTextBox1->BorderRadius = 20;
			this->jMetroTextBox1->FillColor = System::Drawing::SystemColors::Window;
			this->jMetroTextBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox1->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox1->ForeColors = System::Drawing::Color::Gray;
			this->jMetroTextBox1->IsPassword = false;
			this->jMetroTextBox1->LineThickness = 2;
			this->jMetroTextBox1->Location = System::Drawing::Point(65, 197);
			this->jMetroTextBox1->Margin = System::Windows::Forms::Padding(4);
			this->jMetroTextBox1->MaxLength = 32767;
			this->jMetroTextBox1->MouseOnHover = System::Drawing::Color::DarkGray;
			this->jMetroTextBox1->Name = L"jMetroTextBox1";
			this->jMetroTextBox1->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->jMetroTextBox1->OnFocusColor = System::Drawing::Color::DarkGray;
			this->jMetroTextBox1->OnFocusFontColor = System::Drawing::Color::Gray;
			this->jMetroTextBox1->ReadOnly = false;
			this->jMetroTextBox1->Size = System::Drawing::Size(218, 51);
			this->jMetroTextBox1->TabIndex = 32;
			this->jMetroTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->jMetroTextBox1->TextName = L"";
			// 
			// jMetroTextBox2
			// 
			this->jMetroTextBox2->BackColor = System::Drawing::Color::Transparent;
			this->jMetroTextBox2->BorderColor = System::Drawing::Color::Empty;
			this->jMetroTextBox2->BorderRadius = 10;
			this->jMetroTextBox2->Enabled = false;
			this->jMetroTextBox2->FillColor = System::Drawing::Color::White;
			this->jMetroTextBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox2->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox2->ForeColors = System::Drawing::Color::Gray;
			this->jMetroTextBox2->IsPassword = false;
			this->jMetroTextBox2->LineThickness = 2;
			this->jMetroTextBox2->Location = System::Drawing::Point(243, 367);
			this->jMetroTextBox2->Margin = System::Windows::Forms::Padding(4);
			this->jMetroTextBox2->MaxLength = 32767;
			this->jMetroTextBox2->MouseOnHover = System::Drawing::Color::DarkGray;
			this->jMetroTextBox2->Name = L"jMetroTextBox2";
			this->jMetroTextBox2->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->jMetroTextBox2->OnFocusColor = System::Drawing::Color::DarkGray;
			this->jMetroTextBox2->OnFocusFontColor = System::Drawing::Color::Gray;
			this->jMetroTextBox2->ReadOnly = false;
			this->jMetroTextBox2->Size = System::Drawing::Size(99, 51);
			this->jMetroTextBox2->TabIndex = 33;
			this->jMetroTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->jMetroTextBox2->TextName = L"50000";
			// 
			// jMetroTextBox3
			// 
			this->jMetroTextBox3->BackColor = System::Drawing::Color::Transparent;
			this->jMetroTextBox3->BorderColor = System::Drawing::Color::Empty;
			this->jMetroTextBox3->BorderRadius = 10;
			this->jMetroTextBox3->Enabled = false;
			this->jMetroTextBox3->FillColor = System::Drawing::Color::White;
			this->jMetroTextBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox3->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox3->ForeColors = System::Drawing::Color::Gray;
			this->jMetroTextBox3->IsPassword = false;
			this->jMetroTextBox3->LineThickness = 2;
			this->jMetroTextBox3->Location = System::Drawing::Point(124, 416);
			this->jMetroTextBox3->Margin = System::Windows::Forms::Padding(4);
			this->jMetroTextBox3->MaxLength = 32767;
			this->jMetroTextBox3->MouseOnHover = System::Drawing::Color::DarkGray;
			this->jMetroTextBox3->Name = L"jMetroTextBox3";
			this->jMetroTextBox3->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->jMetroTextBox3->OnFocusColor = System::Drawing::Color::DarkGray;
			this->jMetroTextBox3->OnFocusFontColor = System::Drawing::Color::Gray;
			this->jMetroTextBox3->ReadOnly = false;
			this->jMetroTextBox3->Size = System::Drawing::Size(218, 51);
			this->jMetroTextBox3->TabIndex = 34;
			this->jMetroTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->jMetroTextBox3->TextName = L"Name";
			// 
			// jMetroTextBox4
			// 
			this->jMetroTextBox4->BackColor = System::Drawing::Color::Transparent;
			this->jMetroTextBox4->BorderColor = System::Drawing::Color::Empty;
			this->jMetroTextBox4->BorderRadius = 10;
			this->jMetroTextBox4->Enabled = false;
			this->jMetroTextBox4->FillColor = System::Drawing::Color::White;
			this->jMetroTextBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox4->Font_Size = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->jMetroTextBox4->ForeColors = System::Drawing::Color::Gray;
			this->jMetroTextBox4->IsPassword = false;
			this->jMetroTextBox4->LineThickness = 2;
			this->jMetroTextBox4->Location = System::Drawing::Point(124, 466);
			this->jMetroTextBox4->Margin = System::Windows::Forms::Padding(4);
			this->jMetroTextBox4->MaxLength = 32767;
			this->jMetroTextBox4->MouseOnHover = System::Drawing::Color::DarkGray;
			this->jMetroTextBox4->Name = L"jMetroTextBox4";
			this->jMetroTextBox4->OnCursor = System::Windows::Forms::Cursors::IBeam;
			this->jMetroTextBox4->OnFocusColor = System::Drawing::Color::DarkGray;
			this->jMetroTextBox4->OnFocusFontColor = System::Drawing::Color::Gray;
			this->jMetroTextBox4->ReadOnly = false;
			this->jMetroTextBox4->Size = System::Drawing::Size(218, 51);
			this->jMetroTextBox4->TabIndex = 35;
			this->jMetroTextBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->jMetroTextBox4->TextName = L"****";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(1, 386);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(239, 19);
			this->label4->TabIndex = 36;
			this->label4->Text = L"����������� ���� ����������";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1, 432);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 19);
			this->label5->TabIndex = 37;
			this->label5->Text = L"���������";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(1, 484);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 19);
			this->label6->TabIndex = 38;
			this->label6->Text = L"����� ������";
			// 
			// jDragControl1
			// 
			this->jDragControl1->GetForm = this;
			this->jDragControl1->TargetControl = this->menuStrip1;
			// 
			// Card_InForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(700, 584);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->jMetroTextBox4);
			this->Controls->Add(this->jMetroTextBox3);
			this->Controls->Add(this->jMetroTextBox2);
			this->Controls->Add(this->jMetroTextBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->jThinButton7);
			this->Controls->Add(this->jThinButton6);
			this->Controls->Add(this->jThinButton5);
			this->Controls->Add(this->jThinButton4);
			this->Controls->Add(this->jThinButton3);
			this->Controls->Add(this->jThinButton2);
			this->Controls->Add(this->jThinButton1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Card_InForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Card_InForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}

private: System::Void jThinButton7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
		EndForm ^ _EndForm1 = gcnew EndForm();
	_EndForm1->ShowDialog();
}
};
}
