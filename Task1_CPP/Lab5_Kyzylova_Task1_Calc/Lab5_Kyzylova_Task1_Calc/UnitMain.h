/*
***************************************************************************
*Лабораторная работа № 5                                                  *
*Задача № 1                                                               *
*                                                                         *
*Условие:                                                                 *
*Разработать приложение WinForms калькулятор на С++ с параметрами:        *                                                        
*обычный калькулятор, математический расширенный калькулятор, калькулятор *                                                                         
*перевод едениц измерения и дополнительный (на выбор) калькулятор.        *
*                                                                         *                                                        
*Выполнила:                                                               *
*Кызылова Полина Андреевна                                                *
*Группа: ПКТб-20-1                                                        *
*                                                                         *
*Дата: 12.04.2021                                                         *
***************************************************************************
*/

#pragma once

#include "UnitAbout.h"
#include "UnitHelp.h"
#include <cmath>

namespace Lab5_Kyzylova_Task1_Calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для UnitMain
	/// </summary>
	public ref class UnitMain : public System::Windows::Forms::Form
	{

		int oper = 0;
		double x, y, z;
		double Result, ResultM;
		double Pi = 3.14;
	private: System::Windows::Forms::ComboBox^  comboBoxVolumeRes;

	private: System::Windows::Forms::ComboBox^  comboBoxVolume;

	private: System::Windows::Forms::ComboBox^  comboBoxSpeedRes;

	private: System::Windows::Forms::ComboBox^  comboBoxSpeed;

	private: System::Windows::Forms::ComboBox^  comboBoxTemperRes;

	private: System::Windows::Forms::ComboBox^  comboBoxTemper;

	private: System::Windows::Forms::ComboBox^  comboBoxPressRes;

	private: System::Windows::Forms::ComboBox^  comboBoxPress;

	private: System::Windows::Forms::Button^  buttonCheckResult;
	private: System::Windows::Forms::Label^  labelMoonPhase;
	private: System::Windows::Forms::TextBox^  textBoxMoon;
	private: System::Windows::Forms::Label^  labelYear;
	private: System::Windows::Forms::Label^  labelMonth;
	private: System::Windows::Forms::Label^  labelDay;
	private: System::Windows::Forms::Label^  labelMoon;
	private: System::Windows::Forms::TextBox^  textBoxYear;

	private: System::Windows::Forms::TextBox^  textBoxMonth;

	private: System::Windows::Forms::TextBox^  textBoxDay;
	private: System::Windows::Forms::PictureBox^  pictureBoxStart;


	private: System::Windows::Forms::TextBox^  textBoxMemory;
	private: System::Windows::Forms::PictureBox^  pictureBoxM1;
	private: System::Windows::Forms::PictureBox^  pictureBoxM2;
	private: System::Windows::Forms::PictureBox^  pictureBoxM3;
	private: System::Windows::Forms::PictureBox^  pictureBoxM4;
	private: System::Windows::Forms::PictureBox^  pictureBoxM5;
	private: System::Windows::Forms::PictureBox^  pictureBoxM6;
	private: System::Windows::Forms::PictureBox^  pictureBoxM8;
	private: System::Windows::Forms::PictureBox^  pictureBoxM7;








			 double exp = 2.7;

	public:
		UnitMain(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~UnitMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panelStandart;
	protected:

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  обычныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  расширенныйМатематическийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  астрономическийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  переводЕденицИзмеренияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  помощьToolStripMenuItem;
	private: System::Windows::Forms::Button^  buttonComma;

	private: System::Windows::Forms::Button^  buttonNumber0;


	private: System::Windows::Forms::Button^  buttonNumber3;

	private: System::Windows::Forms::Button^  buttonNumber2;

	private: System::Windows::Forms::Button^  buttonNumber1;

	private: System::Windows::Forms::Button^  buttonNumber6;

	private: System::Windows::Forms::Button^  buttonNumber9;

	private: System::Windows::Forms::Button^  buttonNumber7;
	private: System::Windows::Forms::Button^  buttonNumber4;
	private: System::Windows::Forms::Button^  buttonNumber5;



	private: System::Windows::Forms::Button^  buttonNumber8;
	private: System::Windows::Forms::Button^  buttonEqual;


	private: System::Windows::Forms::Button^  buttonPlus;
	private: System::Windows::Forms::Button^  buttonPlusMinus;


	private: System::Windows::Forms::Button^  buttonMinus;


	private: System::Windows::Forms::Button^  buttonMultiply;

	private: System::Windows::Forms::Button^  buttonDivide;
	private: System::Windows::Forms::Button^  buttonPercent;


	private: System::Windows::Forms::Button^  buttonC;

	private: System::Windows::Forms::Button^  buttonCE;

	private: System::Windows::Forms::Button^  buttonFactorial;

	private: System::Windows::Forms::Button^  buttonTwoDegree;

	private: System::Windows::Forms::Button^  buttonSqrt;

	private: System::Windows::Forms::Button^  buttonMMinus;

	private: System::Windows::Forms::Button^  buttonMPlus;

	private: System::Windows::Forms::Button^  buttonMS;

	private: System::Windows::Forms::Button^  buttonMR;

	private: System::Windows::Forms::Button^  buttonMC;
	private: System::Windows::Forms::TextBox^  textBoxCalcScreen;
	private: System::Windows::Forms::Panel^  panelMatch;

	private: System::Windows::Forms::Button^  buttonDegreeTwoA;

	private: System::Windows::Forms::Button^  buttonXThreeDegree;

	private: System::Windows::Forms::Button^  buttonExpDegree;

	private: System::Windows::Forms::Button^  buttonTenDegree;

	private: System::Windows::Forms::Button^  buttonScobaL;
	private: System::Windows::Forms::Button^  buttonExponenta;
	private: System::Windows::Forms::Button^  buttonPi;



	private: System::Windows::Forms::Button^  buttonScobaR;
private: System::Windows::Forms::Button^  button1DivX;


	private: System::Windows::Forms::Button^  buttonLog10;

	private: System::Windows::Forms::Button^  buttonArcCotan;

	private: System::Windows::Forms::Button^  buttonArcTan;

private: System::Windows::Forms::Button^  buttonLn;

private: System::Windows::Forms::Button^  buttonCotan;

private: System::Windows::Forms::Button^  buttonTan;

private: System::Windows::Forms::Button^  buttonArcCos;

private: System::Windows::Forms::Button^  buttonArcSin;
private: System::Windows::Forms::Button^  buttonThreeSqrt;


private: System::Windows::Forms::Button^  buttonModule;

private: System::Windows::Forms::Button^  buttonCos;

private: System::Windows::Forms::Button^  buttonSin;
private: System::Windows::Forms::Panel^  panelUnits;

private: System::Windows::Forms::Label^  labelVolume;
private: System::Windows::Forms::Label^  labelSpeed;
private: System::Windows::Forms::Label^  labelTemper;
private: System::Windows::Forms::Label^  labelPressue;
private: System::Windows::Forms::Button^  buttonVolumeResult;
private: System::Windows::Forms::Button^  buttonSpeedResult;
private: System::Windows::Forms::Button^  buttonTemperResult;
private: System::Windows::Forms::Button^  buttonPressueResult;
private: System::Windows::Forms::Panel^  panelAstro;
private: System::Windows::Forms::TextBox^  textBoxVolumeRes;
private: System::Windows::Forms::TextBox^  textBoxVolume;
private: System::Windows::Forms::TextBox^  textBoxSpeedRes;
private: System::Windows::Forms::TextBox^  textBoxSpeed;
private: System::Windows::Forms::TextBox^  textBoxTemperRes;
private: System::Windows::Forms::TextBox^  textBoxTemper;
private: System::Windows::Forms::TextBox^  textBoxPressRes;
private: System::Windows::Forms::TextBox^  textBoxPress;



	protected:









	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(UnitMain::typeid));
			this->panelStandart = (gcnew System::Windows::Forms::Panel());
			this->textBoxMemory = (gcnew System::Windows::Forms::TextBox());
			this->buttonComma = (gcnew System::Windows::Forms::Button());
			this->buttonNumber0 = (gcnew System::Windows::Forms::Button());
			this->buttonNumber3 = (gcnew System::Windows::Forms::Button());
			this->buttonNumber2 = (gcnew System::Windows::Forms::Button());
			this->buttonNumber1 = (gcnew System::Windows::Forms::Button());
			this->buttonNumber6 = (gcnew System::Windows::Forms::Button());
			this->buttonNumber9 = (gcnew System::Windows::Forms::Button());
			this->buttonNumber7 = (gcnew System::Windows::Forms::Button());
			this->buttonNumber4 = (gcnew System::Windows::Forms::Button());
			this->buttonNumber5 = (gcnew System::Windows::Forms::Button());
			this->buttonNumber8 = (gcnew System::Windows::Forms::Button());
			this->buttonEqual = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonPlusMinus = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonMultiply = (gcnew System::Windows::Forms::Button());
			this->buttonDivide = (gcnew System::Windows::Forms::Button());
			this->buttonPercent = (gcnew System::Windows::Forms::Button());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonCE = (gcnew System::Windows::Forms::Button());
			this->buttonFactorial = (gcnew System::Windows::Forms::Button());
			this->buttonTwoDegree = (gcnew System::Windows::Forms::Button());
			this->buttonSqrt = (gcnew System::Windows::Forms::Button());
			this->buttonMMinus = (gcnew System::Windows::Forms::Button());
			this->buttonMPlus = (gcnew System::Windows::Forms::Button());
			this->buttonMS = (gcnew System::Windows::Forms::Button());
			this->buttonMR = (gcnew System::Windows::Forms::Button());
			this->buttonMC = (gcnew System::Windows::Forms::Button());
			this->textBoxCalcScreen = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обычныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->расширенныйМатематическийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->астрономическийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->переводЕденицИзмеренияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panelMatch = (gcnew System::Windows::Forms::Panel());
			this->buttonDegreeTwoA = (gcnew System::Windows::Forms::Button());
			this->buttonXThreeDegree = (gcnew System::Windows::Forms::Button());
			this->buttonExpDegree = (gcnew System::Windows::Forms::Button());
			this->buttonTenDegree = (gcnew System::Windows::Forms::Button());
			this->buttonScobaL = (gcnew System::Windows::Forms::Button());
			this->buttonExponenta = (gcnew System::Windows::Forms::Button());
			this->buttonPi = (gcnew System::Windows::Forms::Button());
			this->buttonScobaR = (gcnew System::Windows::Forms::Button());
			this->button1DivX = (gcnew System::Windows::Forms::Button());
			this->buttonLog10 = (gcnew System::Windows::Forms::Button());
			this->buttonArcCotan = (gcnew System::Windows::Forms::Button());
			this->buttonArcTan = (gcnew System::Windows::Forms::Button());
			this->buttonLn = (gcnew System::Windows::Forms::Button());
			this->buttonCotan = (gcnew System::Windows::Forms::Button());
			this->buttonTan = (gcnew System::Windows::Forms::Button());
			this->buttonArcCos = (gcnew System::Windows::Forms::Button());
			this->buttonArcSin = (gcnew System::Windows::Forms::Button());
			this->buttonThreeSqrt = (gcnew System::Windows::Forms::Button());
			this->buttonModule = (gcnew System::Windows::Forms::Button());
			this->buttonCos = (gcnew System::Windows::Forms::Button());
			this->buttonSin = (gcnew System::Windows::Forms::Button());
			this->panelUnits = (gcnew System::Windows::Forms::Panel());
			this->comboBoxVolumeRes = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxVolume = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSpeedRes = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSpeed = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxTemperRes = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxTemper = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxPressRes = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxPress = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxVolumeRes = (gcnew System::Windows::Forms::TextBox());
			this->textBoxVolume = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSpeedRes = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSpeed = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTemperRes = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTemper = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPressRes = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPress = (gcnew System::Windows::Forms::TextBox());
			this->labelVolume = (gcnew System::Windows::Forms::Label());
			this->labelSpeed = (gcnew System::Windows::Forms::Label());
			this->labelTemper = (gcnew System::Windows::Forms::Label());
			this->labelPressue = (gcnew System::Windows::Forms::Label());
			this->buttonVolumeResult = (gcnew System::Windows::Forms::Button());
			this->buttonSpeedResult = (gcnew System::Windows::Forms::Button());
			this->buttonTemperResult = (gcnew System::Windows::Forms::Button());
			this->buttonPressueResult = (gcnew System::Windows::Forms::Button());
			this->panelAstro = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxM8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxM7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxM1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxM2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxM3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxM4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxM5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxM6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxStart = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxYear = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMonth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDay = (gcnew System::Windows::Forms::TextBox());
			this->buttonCheckResult = (gcnew System::Windows::Forms::Button());
			this->labelMoonPhase = (gcnew System::Windows::Forms::Label());
			this->textBoxMoon = (gcnew System::Windows::Forms::TextBox());
			this->labelYear = (gcnew System::Windows::Forms::Label());
			this->labelMonth = (gcnew System::Windows::Forms::Label());
			this->labelDay = (gcnew System::Windows::Forms::Label());
			this->labelMoon = (gcnew System::Windows::Forms::Label());
			this->panelStandart->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->panelMatch->SuspendLayout();
			this->panelUnits->SuspendLayout();
			this->panelAstro->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxM8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxM7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxM1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxM2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxM3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxM4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxM5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxM6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxStart))->BeginInit();
			this->SuspendLayout();
			// 
			// panelStandart
			// 
			this->panelStandart->Controls->Add(this->textBoxMemory);
			this->panelStandart->Controls->Add(this->buttonComma);
			this->panelStandart->Controls->Add(this->buttonNumber0);
			this->panelStandart->Controls->Add(this->buttonNumber3);
			this->panelStandart->Controls->Add(this->buttonNumber2);
			this->panelStandart->Controls->Add(this->buttonNumber1);
			this->panelStandart->Controls->Add(this->buttonNumber6);
			this->panelStandart->Controls->Add(this->buttonNumber9);
			this->panelStandart->Controls->Add(this->buttonNumber7);
			this->panelStandart->Controls->Add(this->buttonNumber4);
			this->panelStandart->Controls->Add(this->buttonNumber5);
			this->panelStandart->Controls->Add(this->buttonNumber8);
			this->panelStandart->Controls->Add(this->buttonEqual);
			this->panelStandart->Controls->Add(this->buttonPlus);
			this->panelStandart->Controls->Add(this->buttonPlusMinus);
			this->panelStandart->Controls->Add(this->buttonMinus);
			this->panelStandart->Controls->Add(this->buttonMultiply);
			this->panelStandart->Controls->Add(this->buttonDivide);
			this->panelStandart->Controls->Add(this->buttonPercent);
			this->panelStandart->Controls->Add(this->buttonC);
			this->panelStandart->Controls->Add(this->buttonCE);
			this->panelStandart->Controls->Add(this->buttonFactorial);
			this->panelStandart->Controls->Add(this->buttonTwoDegree);
			this->panelStandart->Controls->Add(this->buttonSqrt);
			this->panelStandart->Controls->Add(this->buttonMMinus);
			this->panelStandart->Controls->Add(this->buttonMPlus);
			this->panelStandart->Controls->Add(this->buttonMS);
			this->panelStandart->Controls->Add(this->buttonMR);
			this->panelStandart->Controls->Add(this->buttonMC);
			this->panelStandart->Controls->Add(this->textBoxCalcScreen);
			this->panelStandart->Location = System::Drawing::Point(1, 30);
			this->panelStandart->Name = L"panelStandart";
			this->panelStandart->Size = System::Drawing::Size(241, 288);
			this->panelStandart->TabIndex = 0;
			// 
			// textBoxMemory
			// 
			this->textBoxMemory->BackColor = System::Drawing::Color::White;
			this->textBoxMemory->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxMemory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxMemory->Location = System::Drawing::Point(16, 0);
			this->textBoxMemory->Name = L"textBoxMemory";
			this->textBoxMemory->ReadOnly = true;
			this->textBoxMemory->Size = System::Drawing::Size(86, 20);
			this->textBoxMemory->TabIndex = 31;
			// 
			// buttonComma
			// 
			this->buttonComma->BackColor = System::Drawing::Color::Coral;
			this->buttonComma->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonComma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonComma->Location = System::Drawing::Point(108, 238);
			this->buttonComma->Name = L"buttonComma";
			this->buttonComma->Size = System::Drawing::Size(40, 30);
			this->buttonComma->TabIndex = 30;
			this->buttonComma->Text = L",";
			this->buttonComma->UseVisualStyleBackColor = false;
			this->buttonComma->Click += gcnew System::EventHandler(this, &UnitMain::buttonComma_Click);
			// 
			// buttonNumber0
			// 
			this->buttonNumber0->BackColor = System::Drawing::Color::Coral;
			this->buttonNumber0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNumber0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNumber0->Location = System::Drawing::Point(16, 238);
			this->buttonNumber0->Name = L"buttonNumber0";
			this->buttonNumber0->Size = System::Drawing::Size(86, 30);
			this->buttonNumber0->TabIndex = 28;
			this->buttonNumber0->Text = L"0";
			this->buttonNumber0->UseVisualStyleBackColor = false;
			this->buttonNumber0->Click += gcnew System::EventHandler(this, &UnitMain::buttonNumber0_Click);
			// 
			// buttonNumber3
			// 
			this->buttonNumber3->BackColor = System::Drawing::Color::Coral;
			this->buttonNumber3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNumber3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNumber3->Location = System::Drawing::Point(108, 202);
			this->buttonNumber3->Name = L"buttonNumber3";
			this->buttonNumber3->Size = System::Drawing::Size(40, 30);
			this->buttonNumber3->TabIndex = 27;
			this->buttonNumber3->Text = L"3";
			this->buttonNumber3->UseVisualStyleBackColor = false;
			this->buttonNumber3->Click += gcnew System::EventHandler(this, &UnitMain::buttonNumber3_Click);
			// 
			// buttonNumber2
			// 
			this->buttonNumber2->BackColor = System::Drawing::Color::Coral;
			this->buttonNumber2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNumber2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNumber2->Location = System::Drawing::Point(62, 202);
			this->buttonNumber2->Name = L"buttonNumber2";
			this->buttonNumber2->Size = System::Drawing::Size(40, 30);
			this->buttonNumber2->TabIndex = 26;
			this->buttonNumber2->Text = L"2";
			this->buttonNumber2->UseVisualStyleBackColor = false;
			this->buttonNumber2->Click += gcnew System::EventHandler(this, &UnitMain::buttonNumber2_Click);
			// 
			// buttonNumber1
			// 
			this->buttonNumber1->BackColor = System::Drawing::Color::Coral;
			this->buttonNumber1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNumber1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNumber1->Location = System::Drawing::Point(16, 202);
			this->buttonNumber1->Name = L"buttonNumber1";
			this->buttonNumber1->Size = System::Drawing::Size(40, 30);
			this->buttonNumber1->TabIndex = 25;
			this->buttonNumber1->Text = L"1";
			this->buttonNumber1->UseVisualStyleBackColor = false;
			this->buttonNumber1->Click += gcnew System::EventHandler(this, &UnitMain::buttonNumber1_Click);
			// 
			// buttonNumber6
			// 
			this->buttonNumber6->BackColor = System::Drawing::Color::Coral;
			this->buttonNumber6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNumber6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNumber6->Location = System::Drawing::Point(108, 166);
			this->buttonNumber6->Name = L"buttonNumber6";
			this->buttonNumber6->Size = System::Drawing::Size(40, 30);
			this->buttonNumber6->TabIndex = 24;
			this->buttonNumber6->Text = L"6";
			this->buttonNumber6->UseVisualStyleBackColor = false;
			this->buttonNumber6->Click += gcnew System::EventHandler(this, &UnitMain::buttonNumber6_Click);
			// 
			// buttonNumber9
			// 
			this->buttonNumber9->BackColor = System::Drawing::Color::Coral;
			this->buttonNumber9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNumber9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNumber9->Location = System::Drawing::Point(108, 130);
			this->buttonNumber9->Name = L"buttonNumber9";
			this->buttonNumber9->Size = System::Drawing::Size(40, 30);
			this->buttonNumber9->TabIndex = 23;
			this->buttonNumber9->Text = L"9";
			this->buttonNumber9->UseVisualStyleBackColor = false;
			this->buttonNumber9->Click += gcnew System::EventHandler(this, &UnitMain::buttonNumber9_Click);
			// 
			// buttonNumber7
			// 
			this->buttonNumber7->BackColor = System::Drawing::Color::Coral;
			this->buttonNumber7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNumber7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNumber7->Location = System::Drawing::Point(16, 130);
			this->buttonNumber7->Name = L"buttonNumber7";
			this->buttonNumber7->Size = System::Drawing::Size(40, 30);
			this->buttonNumber7->TabIndex = 22;
			this->buttonNumber7->Text = L"7";
			this->buttonNumber7->UseVisualStyleBackColor = false;
			this->buttonNumber7->Click += gcnew System::EventHandler(this, &UnitMain::buttonNumber7_Click);
			// 
			// buttonNumber4
			// 
			this->buttonNumber4->BackColor = System::Drawing::Color::Coral;
			this->buttonNumber4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNumber4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNumber4->Location = System::Drawing::Point(16, 166);
			this->buttonNumber4->Name = L"buttonNumber4";
			this->buttonNumber4->Size = System::Drawing::Size(40, 30);
			this->buttonNumber4->TabIndex = 21;
			this->buttonNumber4->Text = L"4";
			this->buttonNumber4->UseVisualStyleBackColor = false;
			this->buttonNumber4->Click += gcnew System::EventHandler(this, &UnitMain::buttonNumber4_Click);
			// 
			// buttonNumber5
			// 
			this->buttonNumber5->BackColor = System::Drawing::Color::Coral;
			this->buttonNumber5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNumber5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNumber5->Location = System::Drawing::Point(62, 166);
			this->buttonNumber5->Name = L"buttonNumber5";
			this->buttonNumber5->Size = System::Drawing::Size(40, 30);
			this->buttonNumber5->TabIndex = 20;
			this->buttonNumber5->Text = L"5";
			this->buttonNumber5->UseVisualStyleBackColor = false;
			this->buttonNumber5->Click += gcnew System::EventHandler(this, &UnitMain::buttonNumber5_Click);
			// 
			// buttonNumber8
			// 
			this->buttonNumber8->BackColor = System::Drawing::Color::Coral;
			this->buttonNumber8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNumber8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNumber8->Location = System::Drawing::Point(62, 130);
			this->buttonNumber8->Name = L"buttonNumber8";
			this->buttonNumber8->Size = System::Drawing::Size(40, 30);
			this->buttonNumber8->TabIndex = 19;
			this->buttonNumber8->Text = L"8";
			this->buttonNumber8->UseVisualStyleBackColor = false;
			this->buttonNumber8->Click += gcnew System::EventHandler(this, &UnitMain::buttonNumber8_Click);
			// 
			// buttonEqual
			// 
			this->buttonEqual->BackColor = System::Drawing::Color::SandyBrown;
			this->buttonEqual->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonEqual->Location = System::Drawing::Point(200, 202);
			this->buttonEqual->Name = L"buttonEqual";
			this->buttonEqual->Size = System::Drawing::Size(40, 66);
			this->buttonEqual->TabIndex = 18;
			this->buttonEqual->Text = L"=";
			this->buttonEqual->UseVisualStyleBackColor = false;
			this->buttonEqual->Click += gcnew System::EventHandler(this, &UnitMain::buttonEqual_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->BackColor = System::Drawing::Color::SandyBrown;
			this->buttonPlus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPlus->Location = System::Drawing::Point(154, 238);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(40, 30);
			this->buttonPlus->TabIndex = 17;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = false;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &UnitMain::buttonPlus_Click);
			// 
			// buttonPlusMinus
			// 
			this->buttonPlusMinus->BackColor = System::Drawing::Color::Bisque;
			this->buttonPlusMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPlusMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPlusMinus->Location = System::Drawing::Point(200, 166);
			this->buttonPlusMinus->Name = L"buttonPlusMinus";
			this->buttonPlusMinus->Size = System::Drawing::Size(40, 30);
			this->buttonPlusMinus->TabIndex = 16;
			this->buttonPlusMinus->Text = L"+/-";
			this->buttonPlusMinus->UseVisualStyleBackColor = false;
			this->buttonPlusMinus->Click += gcnew System::EventHandler(this, &UnitMain::buttonPlusMinus_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->BackColor = System::Drawing::Color::SandyBrown;
			this->buttonMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMinus->Location = System::Drawing::Point(154, 202);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(40, 30);
			this->buttonMinus->TabIndex = 14;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = false;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &UnitMain::buttonMinus_Click);
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->BackColor = System::Drawing::Color::SandyBrown;
			this->buttonMultiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMultiply->Location = System::Drawing::Point(154, 166);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Size = System::Drawing::Size(40, 30);
			this->buttonMultiply->TabIndex = 13;
			this->buttonMultiply->Text = L"*";
			this->buttonMultiply->UseVisualStyleBackColor = false;
			this->buttonMultiply->Click += gcnew System::EventHandler(this, &UnitMain::buttonMultiply_Click);
			// 
			// buttonDivide
			// 
			this->buttonDivide->BackColor = System::Drawing::Color::SandyBrown;
			this->buttonDivide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDivide->Location = System::Drawing::Point(154, 130);
			this->buttonDivide->Name = L"buttonDivide";
			this->buttonDivide->Size = System::Drawing::Size(40, 30);
			this->buttonDivide->TabIndex = 12;
			this->buttonDivide->Text = L"/";
			this->buttonDivide->UseVisualStyleBackColor = false;
			this->buttonDivide->Click += gcnew System::EventHandler(this, &UnitMain::buttonDivide_Click);
			// 
			// buttonPercent
			// 
			this->buttonPercent->BackColor = System::Drawing::Color::Bisque;
			this->buttonPercent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPercent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPercent->Location = System::Drawing::Point(200, 130);
			this->buttonPercent->Name = L"buttonPercent";
			this->buttonPercent->Size = System::Drawing::Size(40, 30);
			this->buttonPercent->TabIndex = 11;
			this->buttonPercent->Text = L"%";
			this->buttonPercent->UseVisualStyleBackColor = false;
			this->buttonPercent->Click += gcnew System::EventHandler(this, &UnitMain::buttonPercent_Click);
			// 
			// buttonC
			// 
			this->buttonC->BackColor = System::Drawing::Color::Bisque;
			this->buttonC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonC->Location = System::Drawing::Point(200, 94);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(40, 30);
			this->buttonC->TabIndex = 10;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = false;
			this->buttonC->Click += gcnew System::EventHandler(this, &UnitMain::buttonC_Click);
			// 
			// buttonCE
			// 
			this->buttonCE->BackColor = System::Drawing::Color::Bisque;
			this->buttonCE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCE->Location = System::Drawing::Point(154, 94);
			this->buttonCE->Name = L"buttonCE";
			this->buttonCE->Size = System::Drawing::Size(40, 30);
			this->buttonCE->TabIndex = 9;
			this->buttonCE->Text = L"CE";
			this->buttonCE->UseVisualStyleBackColor = false;
			this->buttonCE->Click += gcnew System::EventHandler(this, &UnitMain::buttonCE_Click);
			// 
			// buttonFactorial
			// 
			this->buttonFactorial->BackColor = System::Drawing::Color::Bisque;
			this->buttonFactorial->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonFactorial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonFactorial->Location = System::Drawing::Point(108, 94);
			this->buttonFactorial->Name = L"buttonFactorial";
			this->buttonFactorial->Size = System::Drawing::Size(40, 30);
			this->buttonFactorial->TabIndex = 8;
			this->buttonFactorial->Text = L"x!";
			this->buttonFactorial->UseVisualStyleBackColor = false;
			this->buttonFactorial->Click += gcnew System::EventHandler(this, &UnitMain::buttonFactorial_Click);
			// 
			// buttonTwoDegree
			// 
			this->buttonTwoDegree->BackColor = System::Drawing::Color::Bisque;
			this->buttonTwoDegree->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonTwoDegree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonTwoDegree->Location = System::Drawing::Point(62, 94);
			this->buttonTwoDegree->Name = L"buttonTwoDegree";
			this->buttonTwoDegree->Size = System::Drawing::Size(40, 30);
			this->buttonTwoDegree->TabIndex = 7;
			this->buttonTwoDegree->Text = L"x^2";
			this->buttonTwoDegree->UseVisualStyleBackColor = false;
			this->buttonTwoDegree->Click += gcnew System::EventHandler(this, &UnitMain::buttonTwoDegree_Click);
			// 
			// buttonSqrt
			// 
			this->buttonSqrt->BackColor = System::Drawing::Color::Bisque;
			this->buttonSqrt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSqrt->Location = System::Drawing::Point(16, 94);
			this->buttonSqrt->Name = L"buttonSqrt";
			this->buttonSqrt->Size = System::Drawing::Size(40, 30);
			this->buttonSqrt->TabIndex = 6;
			this->buttonSqrt->Text = L"Sqr";
			this->buttonSqrt->UseVisualStyleBackColor = false;
			this->buttonSqrt->Click += gcnew System::EventHandler(this, &UnitMain::buttonSqrt_Click);
			// 
			// buttonMMinus
			// 
			this->buttonMMinus->BackColor = System::Drawing::Color::Bisque;
			this->buttonMMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMMinus->Location = System::Drawing::Point(200, 58);
			this->buttonMMinus->Name = L"buttonMMinus";
			this->buttonMMinus->Size = System::Drawing::Size(40, 30);
			this->buttonMMinus->TabIndex = 5;
			this->buttonMMinus->Text = L"M-";
			this->buttonMMinus->UseVisualStyleBackColor = false;
			this->buttonMMinus->Click += gcnew System::EventHandler(this, &UnitMain::buttonMMinus_Click);
			// 
			// buttonMPlus
			// 
			this->buttonMPlus->BackColor = System::Drawing::Color::Bisque;
			this->buttonMPlus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMPlus->Location = System::Drawing::Point(154, 58);
			this->buttonMPlus->Name = L"buttonMPlus";
			this->buttonMPlus->Size = System::Drawing::Size(40, 30);
			this->buttonMPlus->TabIndex = 4;
			this->buttonMPlus->Text = L"M+";
			this->buttonMPlus->UseVisualStyleBackColor = false;
			this->buttonMPlus->Click += gcnew System::EventHandler(this, &UnitMain::buttonMPlus_Click);
			// 
			// buttonMS
			// 
			this->buttonMS->BackColor = System::Drawing::Color::Bisque;
			this->buttonMS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMS->Location = System::Drawing::Point(108, 58);
			this->buttonMS->Name = L"buttonMS";
			this->buttonMS->Size = System::Drawing::Size(40, 30);
			this->buttonMS->TabIndex = 3;
			this->buttonMS->Text = L"MS";
			this->buttonMS->UseVisualStyleBackColor = false;
			this->buttonMS->Click += gcnew System::EventHandler(this, &UnitMain::buttonMS_Click);
			// 
			// buttonMR
			// 
			this->buttonMR->BackColor = System::Drawing::Color::Bisque;
			this->buttonMR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMR->Location = System::Drawing::Point(62, 58);
			this->buttonMR->Name = L"buttonMR";
			this->buttonMR->Size = System::Drawing::Size(40, 30);
			this->buttonMR->TabIndex = 2;
			this->buttonMR->Text = L"MR";
			this->buttonMR->UseVisualStyleBackColor = false;
			this->buttonMR->Click += gcnew System::EventHandler(this, &UnitMain::buttonMR_Click);
			// 
			// buttonMC
			// 
			this->buttonMC->BackColor = System::Drawing::Color::Bisque;
			this->buttonMC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMC->Location = System::Drawing::Point(16, 58);
			this->buttonMC->Name = L"buttonMC";
			this->buttonMC->Size = System::Drawing::Size(40, 30);
			this->buttonMC->TabIndex = 1;
			this->buttonMC->Text = L"MC";
			this->buttonMC->UseVisualStyleBackColor = false;
			this->buttonMC->Click += gcnew System::EventHandler(this, &UnitMain::buttonMC_Click);
			// 
			// textBoxCalcScreen
			// 
			this->textBoxCalcScreen->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBoxCalcScreen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxCalcScreen->Location = System::Drawing::Point(15, 22);
			this->textBoxCalcScreen->Name = L"textBoxCalcScreen";
			this->textBoxCalcScreen->ReadOnly = true;
			this->textBoxCalcScreen->Size = System::Drawing::Size(225, 29);
			this->textBoxCalcScreen->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Bisque;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem1,
					this->оПрограммеToolStripMenuItem, this->помощьToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(259, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->обычныйToolStripMenuItem,
					this->расширенныйМатематическийToolStripMenuItem, this->астрономическийToolStripMenuItem, this->переводЕденицИзмеренияToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(42, 20);
			this->toolStripMenuItem1->Text = L"Вид";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &UnitMain::toolStripMenuItem1_Click);
			// 
			// обычныйToolStripMenuItem
			// 
			this->обычныйToolStripMenuItem->Name = L"обычныйToolStripMenuItem";
			this->обычныйToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->обычныйToolStripMenuItem->Text = L"Обычный";
			this->обычныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &UnitMain::обычныйToolStripMenuItem_Click);
			// 
			// расширенныйМатематическийToolStripMenuItem
			// 
			this->расширенныйМатематическийToolStripMenuItem->Name = L"расширенныйМатематическийToolStripMenuItem";
			this->расширенныйМатематическийToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->расширенныйМатематическийToolStripMenuItem->Text = L"Расширенный математический";
			this->расширенныйМатематическийToolStripMenuItem->Click += gcnew System::EventHandler(this, &UnitMain::расширенныйМатематическийToolStripMenuItem_Click);
			// 
			// астрономическийToolStripMenuItem
			// 
			this->астрономическийToolStripMenuItem->Name = L"астрономическийToolStripMenuItem";
			this->астрономическийToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->астрономическийToolStripMenuItem->Text = L"Астраномический";
			this->астрономическийToolStripMenuItem->Click += gcnew System::EventHandler(this, &UnitMain::астрономическийToolStripMenuItem_Click);
			// 
			// переводЕденицИзмеренияToolStripMenuItem
			// 
			this->переводЕденицИзмеренияToolStripMenuItem->Name = L"переводЕденицИзмеренияToolStripMenuItem";
			this->переводЕденицИзмеренияToolStripMenuItem->Size = System::Drawing::Size(258, 22);
			this->переводЕденицИзмеренияToolStripMenuItem->Text = L"Перевод едениц измерения";
			this->переводЕденицИзмеренияToolStripMenuItem->Click += gcnew System::EventHandler(this, &UnitMain::переводЕденицИзмеренияToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(95, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &UnitMain::оПрограммеToolStripMenuItem_Click);
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->помощьToolStripMenuItem->Text = L"Помощь";
			this->помощьToolStripMenuItem->Click += gcnew System::EventHandler(this, &UnitMain::помощьToolStripMenuItem_Click);
			// 
			// panelMatch
			// 
			this->panelMatch->Controls->Add(this->buttonDegreeTwoA);
			this->panelMatch->Controls->Add(this->buttonXThreeDegree);
			this->panelMatch->Controls->Add(this->buttonExpDegree);
			this->panelMatch->Controls->Add(this->buttonTenDegree);
			this->panelMatch->Controls->Add(this->buttonScobaL);
			this->panelMatch->Controls->Add(this->buttonExponenta);
			this->panelMatch->Controls->Add(this->buttonPi);
			this->panelMatch->Controls->Add(this->buttonScobaR);
			this->panelMatch->Controls->Add(this->button1DivX);
			this->panelMatch->Controls->Add(this->buttonLog10);
			this->panelMatch->Controls->Add(this->buttonArcCotan);
			this->panelMatch->Controls->Add(this->buttonArcTan);
			this->panelMatch->Controls->Add(this->buttonLn);
			this->panelMatch->Controls->Add(this->buttonCotan);
			this->panelMatch->Controls->Add(this->buttonTan);
			this->panelMatch->Controls->Add(this->buttonArcCos);
			this->panelMatch->Controls->Add(this->buttonArcSin);
			this->panelMatch->Controls->Add(this->buttonThreeSqrt);
			this->panelMatch->Controls->Add(this->buttonModule);
			this->panelMatch->Controls->Add(this->buttonCos);
			this->panelMatch->Controls->Add(this->buttonSin);
			this->panelMatch->Location = System::Drawing::Point(247, 30);
			this->panelMatch->Name = L"panelMatch";
			this->panelMatch->Size = System::Drawing::Size(178, 288);
			this->panelMatch->TabIndex = 2;
			this->panelMatch->Visible = false;
			// 
			// buttonDegreeTwoA
			// 
			this->buttonDegreeTwoA->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonDegreeTwoA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDegreeTwoA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDegreeTwoA->Location = System::Drawing::Point(112, 238);
			this->buttonDegreeTwoA->Name = L"buttonDegreeTwoA";
			this->buttonDegreeTwoA->Size = System::Drawing::Size(50, 30);
			this->buttonDegreeTwoA->TabIndex = 20;
			this->buttonDegreeTwoA->Text = L"2^a";
			this->buttonDegreeTwoA->UseVisualStyleBackColor = false;
			this->buttonDegreeTwoA->Click += gcnew System::EventHandler(this, &UnitMain::buttonDegreeTwoA_Click);
			// 
			// buttonXThreeDegree
			// 
			this->buttonXThreeDegree->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonXThreeDegree->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonXThreeDegree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonXThreeDegree->Location = System::Drawing::Point(0, 238);
			this->buttonXThreeDegree->Name = L"buttonXThreeDegree";
			this->buttonXThreeDegree->Size = System::Drawing::Size(50, 30);
			this->buttonXThreeDegree->TabIndex = 19;
			this->buttonXThreeDegree->Text = L"x^3";
			this->buttonXThreeDegree->UseVisualStyleBackColor = false;
			this->buttonXThreeDegree->Click += gcnew System::EventHandler(this, &UnitMain::buttonXThreeDegree_Click);
			// 
			// buttonExpDegree
			// 
			this->buttonExpDegree->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonExpDegree->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonExpDegree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExpDegree->Location = System::Drawing::Point(112, 202);
			this->buttonExpDegree->Name = L"buttonExpDegree";
			this->buttonExpDegree->Size = System::Drawing::Size(50, 30);
			this->buttonExpDegree->TabIndex = 18;
			this->buttonExpDegree->Text = L"e^a";
			this->buttonExpDegree->UseVisualStyleBackColor = false;
			this->buttonExpDegree->Click += gcnew System::EventHandler(this, &UnitMain::buttonExpDegree_Click);
			// 
			// buttonTenDegree
			// 
			this->buttonTenDegree->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonTenDegree->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonTenDegree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonTenDegree->Location = System::Drawing::Point(112, 166);
			this->buttonTenDegree->Name = L"buttonTenDegree";
			this->buttonTenDegree->Size = System::Drawing::Size(50, 30);
			this->buttonTenDegree->TabIndex = 17;
			this->buttonTenDegree->Text = L"10^a";
			this->buttonTenDegree->UseVisualStyleBackColor = false;
			this->buttonTenDegree->Click += gcnew System::EventHandler(this, &UnitMain::buttonTenDegree_Click);
			// 
			// buttonScobaL
			// 
			this->buttonScobaL->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonScobaL->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonScobaL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonScobaL->Location = System::Drawing::Point(56, 166);
			this->buttonScobaL->Name = L"buttonScobaL";
			this->buttonScobaL->Size = System::Drawing::Size(50, 30);
			this->buttonScobaL->TabIndex = 16;
			this->buttonScobaL->Text = L")";
			this->buttonScobaL->UseVisualStyleBackColor = false;
			this->buttonScobaL->Click += gcnew System::EventHandler(this, &UnitMain::buttonScobaL_Click);
			// 
			// buttonExponenta
			// 
			this->buttonExponenta->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonExponenta->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonExponenta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExponenta->Location = System::Drawing::Point(1, 202);
			this->buttonExponenta->Name = L"buttonExponenta";
			this->buttonExponenta->Size = System::Drawing::Size(50, 30);
			this->buttonExponenta->TabIndex = 15;
			this->buttonExponenta->Text = L"e";
			this->buttonExponenta->UseVisualStyleBackColor = false;
			this->buttonExponenta->Click += gcnew System::EventHandler(this, &UnitMain::buttonExponenta_Click);
			// 
			// buttonPi
			// 
			this->buttonPi->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonPi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPi->Location = System::Drawing::Point(56, 202);
			this->buttonPi->Name = L"buttonPi";
			this->buttonPi->Size = System::Drawing::Size(50, 30);
			this->buttonPi->TabIndex = 14;
			this->buttonPi->Text = L"Pi";
			this->buttonPi->UseVisualStyleBackColor = false;
			this->buttonPi->Click += gcnew System::EventHandler(this, &UnitMain::buttonPi_Click);
			// 
			// buttonScobaR
			// 
			this->buttonScobaR->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonScobaR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonScobaR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonScobaR->Location = System::Drawing::Point(0, 166);
			this->buttonScobaR->Name = L"buttonScobaR";
			this->buttonScobaR->Size = System::Drawing::Size(50, 30);
			this->buttonScobaR->TabIndex = 13;
			this->buttonScobaR->Text = L"(";
			this->buttonScobaR->UseVisualStyleBackColor = false;
			this->buttonScobaR->Click += gcnew System::EventHandler(this, &UnitMain::buttonScobaR_Click);
			// 
			// button1DivX
			// 
			this->button1DivX->BackColor = System::Drawing::Color::LightSalmon;
			this->button1DivX->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1DivX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1DivX->Location = System::Drawing::Point(56, 238);
			this->button1DivX->Name = L"button1DivX";
			this->button1DivX->Size = System::Drawing::Size(50, 30);
			this->button1DivX->TabIndex = 12;
			this->button1DivX->Text = L"1/x";
			this->button1DivX->UseVisualStyleBackColor = false;
			this->button1DivX->Click += gcnew System::EventHandler(this, &UnitMain::button1DivX_Click);
			// 
			// buttonLog10
			// 
			this->buttonLog10->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonLog10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonLog10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonLog10->Location = System::Drawing::Point(112, 130);
			this->buttonLog10->Name = L"buttonLog10";
			this->buttonLog10->Size = System::Drawing::Size(50, 30);
			this->buttonLog10->TabIndex = 11;
			this->buttonLog10->Text = L"Log10";
			this->buttonLog10->UseVisualStyleBackColor = false;
			this->buttonLog10->Click += gcnew System::EventHandler(this, &UnitMain::buttonLog10_Click);
			// 
			// buttonArcCotan
			// 
			this->buttonArcCotan->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonArcCotan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonArcCotan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonArcCotan->Location = System::Drawing::Point(56, 130);
			this->buttonArcCotan->Name = L"buttonArcCotan";
			this->buttonArcCotan->Size = System::Drawing::Size(50, 30);
			this->buttonArcCotan->TabIndex = 10;
			this->buttonArcCotan->Text = L"ArcCot";
			this->buttonArcCotan->UseVisualStyleBackColor = false;
			this->buttonArcCotan->Click += gcnew System::EventHandler(this, &UnitMain::buttonArcCotan_Click);
			// 
			// buttonArcTan
			// 
			this->buttonArcTan->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonArcTan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonArcTan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonArcTan->Location = System::Drawing::Point(0, 130);
			this->buttonArcTan->Name = L"buttonArcTan";
			this->buttonArcTan->Size = System::Drawing::Size(50, 30);
			this->buttonArcTan->TabIndex = 9;
			this->buttonArcTan->Text = L"ArcTan";
			this->buttonArcTan->UseVisualStyleBackColor = false;
			this->buttonArcTan->Click += gcnew System::EventHandler(this, &UnitMain::buttonArcTan_Click);
			// 
			// buttonLn
			// 
			this->buttonLn->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonLn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonLn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonLn->Location = System::Drawing::Point(112, 94);
			this->buttonLn->Name = L"buttonLn";
			this->buttonLn->Size = System::Drawing::Size(50, 30);
			this->buttonLn->TabIndex = 8;
			this->buttonLn->Text = L"Ln";
			this->buttonLn->UseVisualStyleBackColor = false;
			this->buttonLn->Click += gcnew System::EventHandler(this, &UnitMain::buttonLn_Click);
			// 
			// buttonCotan
			// 
			this->buttonCotan->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonCotan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCotan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCotan->Location = System::Drawing::Point(56, 94);
			this->buttonCotan->Name = L"buttonCotan";
			this->buttonCotan->Size = System::Drawing::Size(50, 30);
			this->buttonCotan->TabIndex = 7;
			this->buttonCotan->Text = L"Cot";
			this->buttonCotan->UseVisualStyleBackColor = false;
			this->buttonCotan->Click += gcnew System::EventHandler(this, &UnitMain::buttonCotan_Click);
			// 
			// buttonTan
			// 
			this->buttonTan->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonTan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonTan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonTan->Location = System::Drawing::Point(0, 94);
			this->buttonTan->Name = L"buttonTan";
			this->buttonTan->Size = System::Drawing::Size(50, 30);
			this->buttonTan->TabIndex = 6;
			this->buttonTan->Text = L"Tan";
			this->buttonTan->UseVisualStyleBackColor = false;
			this->buttonTan->Click += gcnew System::EventHandler(this, &UnitMain::buttonTan_Click);
			// 
			// buttonArcCos
			// 
			this->buttonArcCos->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonArcCos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonArcCos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonArcCos->Location = System::Drawing::Point(56, 58);
			this->buttonArcCos->Name = L"buttonArcCos";
			this->buttonArcCos->Size = System::Drawing::Size(50, 30);
			this->buttonArcCos->TabIndex = 5;
			this->buttonArcCos->Text = L"ArcCos";
			this->buttonArcCos->UseVisualStyleBackColor = false;
			this->buttonArcCos->Click += gcnew System::EventHandler(this, &UnitMain::buttonArcCos_Click);
			// 
			// buttonArcSin
			// 
			this->buttonArcSin->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonArcSin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonArcSin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonArcSin->Location = System::Drawing::Point(0, 58);
			this->buttonArcSin->Name = L"buttonArcSin";
			this->buttonArcSin->Size = System::Drawing::Size(50, 30);
			this->buttonArcSin->TabIndex = 4;
			this->buttonArcSin->Text = L"ArcSin";
			this->buttonArcSin->UseVisualStyleBackColor = false;
			this->buttonArcSin->Click += gcnew System::EventHandler(this, &UnitMain::buttonArcSin_Click);
			// 
			// buttonThreeSqrt
			// 
			this->buttonThreeSqrt->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonThreeSqrt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonThreeSqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonThreeSqrt->Location = System::Drawing::Point(112, 58);
			this->buttonThreeSqrt->Name = L"buttonThreeSqrt";
			this->buttonThreeSqrt->Size = System::Drawing::Size(50, 30);
			this->buttonThreeSqrt->TabIndex = 3;
			this->buttonThreeSqrt->Text = L"3Sqr";
			this->buttonThreeSqrt->UseVisualStyleBackColor = false;
			this->buttonThreeSqrt->Click += gcnew System::EventHandler(this, &UnitMain::buttonThreeSqrt_Click);
			// 
			// buttonModule
			// 
			this->buttonModule->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonModule->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonModule->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonModule->Location = System::Drawing::Point(112, 21);
			this->buttonModule->Name = L"buttonModule";
			this->buttonModule->Size = System::Drawing::Size(50, 30);
			this->buttonModule->TabIndex = 2;
			this->buttonModule->Text = L"|x|";
			this->buttonModule->UseVisualStyleBackColor = false;
			this->buttonModule->Click += gcnew System::EventHandler(this, &UnitMain::buttonModule_Click);
			// 
			// buttonCos
			// 
			this->buttonCos->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonCos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCos->Location = System::Drawing::Point(56, 21);
			this->buttonCos->Name = L"buttonCos";
			this->buttonCos->Size = System::Drawing::Size(50, 30);
			this->buttonCos->TabIndex = 1;
			this->buttonCos->Text = L"Cos";
			this->buttonCos->UseVisualStyleBackColor = false;
			this->buttonCos->Click += gcnew System::EventHandler(this, &UnitMain::buttonCos_Click);
			// 
			// buttonSin
			// 
			this->buttonSin->BackColor = System::Drawing::Color::LightSalmon;
			this->buttonSin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSin->Location = System::Drawing::Point(0, 21);
			this->buttonSin->Name = L"buttonSin";
			this->buttonSin->Size = System::Drawing::Size(50, 30);
			this->buttonSin->TabIndex = 0;
			this->buttonSin->Text = L"Sin";
			this->buttonSin->UseVisualStyleBackColor = false;
			this->buttonSin->Click += gcnew System::EventHandler(this, &UnitMain::buttonSin_Click);
			// 
			// panelUnits
			// 
			this->panelUnits->Controls->Add(this->comboBoxVolumeRes);
			this->panelUnits->Controls->Add(this->comboBoxVolume);
			this->panelUnits->Controls->Add(this->comboBoxSpeedRes);
			this->panelUnits->Controls->Add(this->comboBoxSpeed);
			this->panelUnits->Controls->Add(this->comboBoxTemperRes);
			this->panelUnits->Controls->Add(this->comboBoxTemper);
			this->panelUnits->Controls->Add(this->comboBoxPressRes);
			this->panelUnits->Controls->Add(this->comboBoxPress);
			this->panelUnits->Controls->Add(this->textBoxVolumeRes);
			this->panelUnits->Controls->Add(this->textBoxVolume);
			this->panelUnits->Controls->Add(this->textBoxSpeedRes);
			this->panelUnits->Controls->Add(this->textBoxSpeed);
			this->panelUnits->Controls->Add(this->textBoxTemperRes);
			this->panelUnits->Controls->Add(this->textBoxTemper);
			this->panelUnits->Controls->Add(this->textBoxPressRes);
			this->panelUnits->Controls->Add(this->textBoxPress);
			this->panelUnits->Controls->Add(this->labelVolume);
			this->panelUnits->Controls->Add(this->labelSpeed);
			this->panelUnits->Controls->Add(this->labelTemper);
			this->panelUnits->Controls->Add(this->labelPressue);
			this->panelUnits->Controls->Add(this->buttonVolumeResult);
			this->panelUnits->Controls->Add(this->buttonSpeedResult);
			this->panelUnits->Controls->Add(this->buttonTemperResult);
			this->panelUnits->Controls->Add(this->buttonPressueResult);
			this->panelUnits->Location = System::Drawing::Point(431, 30);
			this->panelUnits->Name = L"panelUnits";
			this->panelUnits->Size = System::Drawing::Size(256, 288);
			this->panelUnits->TabIndex = 3;
			this->panelUnits->Visible = false;
			// 
			// comboBoxVolumeRes
			// 
			this->comboBoxVolumeRes->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxVolumeRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxVolumeRes->FormattingEnabled = true;
			this->comboBoxVolumeRes->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"куб. дюйм", L"куб. см", L"литр" });
			this->comboBoxVolumeRes->Location = System::Drawing::Point(169, 245);
			this->comboBoxVolumeRes->Name = L"comboBoxVolumeRes";
			this->comboBoxVolumeRes->Size = System::Drawing::Size(70, 23);
			this->comboBoxVolumeRes->TabIndex = 23;
			// 
			// comboBoxVolume
			// 
			this->comboBoxVolume->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxVolume->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxVolume->FormattingEnabled = true;
			this->comboBoxVolume->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"куб. см", L"куб. дюйм", L"литр" });
			this->comboBoxVolume->Location = System::Drawing::Point(21, 245);
			this->comboBoxVolume->Name = L"comboBoxVolume";
			this->comboBoxVolume->Size = System::Drawing::Size(70, 23);
			this->comboBoxVolume->TabIndex = 22;
			// 
			// comboBoxSpeedRes
			// 
			this->comboBoxSpeedRes->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxSpeedRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxSpeedRes->FormattingEnabled = true;
			this->comboBoxSpeedRes->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"миль/ч", L"км/ч", L"м/с" });
			this->comboBoxSpeedRes->Location = System::Drawing::Point(169, 182);
			this->comboBoxSpeedRes->Name = L"comboBoxSpeedRes";
			this->comboBoxSpeedRes->Size = System::Drawing::Size(70, 23);
			this->comboBoxSpeedRes->TabIndex = 21;
			// 
			// comboBoxSpeed
			// 
			this->comboBoxSpeed->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxSpeed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxSpeed->FormattingEnabled = true;
			this->comboBoxSpeed->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"км/ч", L"миль/ч", L"м/с" });
			this->comboBoxSpeed->Location = System::Drawing::Point(21, 182);
			this->comboBoxSpeed->Name = L"comboBoxSpeed";
			this->comboBoxSpeed->Size = System::Drawing::Size(70, 23);
			this->comboBoxSpeed->TabIndex = 20;
			this->comboBoxSpeed->SelectedIndexChanged += gcnew System::EventHandler(this, &UnitMain::comboBox5_SelectedIndexChanged);
			// 
			// comboBoxTemperRes
			// 
			this->comboBoxTemperRes->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxTemperRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxTemperRes->FormattingEnabled = true;
			this->comboBoxTemperRes->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"F (по Фаренгейту)", L"C (по Цельсию)",
					L"K (по Кельвину)"
			});
			this->comboBoxTemperRes->Location = System::Drawing::Point(169, 116);
			this->comboBoxTemperRes->Name = L"comboBoxTemperRes";
			this->comboBoxTemperRes->Size = System::Drawing::Size(70, 23);
			this->comboBoxTemperRes->TabIndex = 19;
			// 
			// comboBoxTemper
			// 
			this->comboBoxTemper->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxTemper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxTemper->FormattingEnabled = true;
			this->comboBoxTemper->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"C (по Цельсию)", L"F (по Фаренгейту)", L"K (по Кельвину)" });
			this->comboBoxTemper->Location = System::Drawing::Point(21, 116);
			this->comboBoxTemper->Name = L"comboBoxTemper";
			this->comboBoxTemper->Size = System::Drawing::Size(70, 23);
			this->comboBoxTemper->TabIndex = 18;
			// 
			// comboBoxPressRes
			// 
			this->comboBoxPressRes->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxPressRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxPressRes->FormattingEnabled = true;
			this->comboBoxPressRes->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"атм.", L"МПа", L"мм. рт. ст." });
			this->comboBoxPressRes->Location = System::Drawing::Point(169, 45);
			this->comboBoxPressRes->Name = L"comboBoxPressRes";
			this->comboBoxPressRes->Size = System::Drawing::Size(70, 23);
			this->comboBoxPressRes->TabIndex = 17;
			// 
			// comboBoxPress
			// 
			this->comboBoxPress->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxPress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxPress->FormattingEnabled = true;
			this->comboBoxPress->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"МПа", L"атм.", L"мм. рт. ст." });
			this->comboBoxPress->Location = System::Drawing::Point(21, 45);
			this->comboBoxPress->Name = L"comboBoxPress";
			this->comboBoxPress->Size = System::Drawing::Size(70, 23);
			this->comboBoxPress->TabIndex = 16;
			this->comboBoxPress->SelectedIndexChanged += gcnew System::EventHandler(this, &UnitMain::comboBoxPress_SelectedIndexChanged);
			// 
			// textBoxVolumeRes
			// 
			this->textBoxVolumeRes->BackColor = System::Drawing::Color::White;
			this->textBoxVolumeRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxVolumeRes->Location = System::Drawing::Point(169, 222);
			this->textBoxVolumeRes->Name = L"textBoxVolumeRes";
			this->textBoxVolumeRes->ReadOnly = true;
			this->textBoxVolumeRes->Size = System::Drawing::Size(70, 21);
			this->textBoxVolumeRes->TabIndex = 15;
			// 
			// textBoxVolume
			// 
			this->textBoxVolume->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxVolume->Location = System::Drawing::Point(21, 222);
			this->textBoxVolume->Name = L"textBoxVolume";
			this->textBoxVolume->Size = System::Drawing::Size(70, 21);
			this->textBoxVolume->TabIndex = 14;
			// 
			// textBoxSpeedRes
			// 
			this->textBoxSpeedRes->BackColor = System::Drawing::Color::White;
			this->textBoxSpeedRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSpeedRes->Location = System::Drawing::Point(169, 155);
			this->textBoxSpeedRes->Name = L"textBoxSpeedRes";
			this->textBoxSpeedRes->ReadOnly = true;
			this->textBoxSpeedRes->Size = System::Drawing::Size(70, 21);
			this->textBoxSpeedRes->TabIndex = 13;
			// 
			// textBoxSpeed
			// 
			this->textBoxSpeed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSpeed->Location = System::Drawing::Point(21, 155);
			this->textBoxSpeed->Name = L"textBoxSpeed";
			this->textBoxSpeed->Size = System::Drawing::Size(70, 21);
			this->textBoxSpeed->TabIndex = 12;
			// 
			// textBoxTemperRes
			// 
			this->textBoxTemperRes->BackColor = System::Drawing::Color::White;
			this->textBoxTemperRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxTemperRes->Location = System::Drawing::Point(169, 89);
			this->textBoxTemperRes->Name = L"textBoxTemperRes";
			this->textBoxTemperRes->ReadOnly = true;
			this->textBoxTemperRes->Size = System::Drawing::Size(70, 21);
			this->textBoxTemperRes->TabIndex = 11;
			// 
			// textBoxTemper
			// 
			this->textBoxTemper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxTemper->Location = System::Drawing::Point(21, 89);
			this->textBoxTemper->Name = L"textBoxTemper";
			this->textBoxTemper->Size = System::Drawing::Size(70, 21);
			this->textBoxTemper->TabIndex = 10;
			// 
			// textBoxPressRes
			// 
			this->textBoxPressRes->BackColor = System::Drawing::Color::White;
			this->textBoxPressRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPressRes->Location = System::Drawing::Point(169, 18);
			this->textBoxPressRes->Name = L"textBoxPressRes";
			this->textBoxPressRes->ReadOnly = true;
			this->textBoxPressRes->Size = System::Drawing::Size(70, 21);
			this->textBoxPressRes->TabIndex = 9;
			// 
			// textBoxPress
			// 
			this->textBoxPress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPress->Location = System::Drawing::Point(21, 18);
			this->textBoxPress->Name = L"textBoxPress";
			this->textBoxPress->Size = System::Drawing::Size(70, 21);
			this->textBoxPress->TabIndex = 8;
			// 
			// labelVolume
			// 
			this->labelVolume->AutoSize = true;
			this->labelVolume->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelVolume->Location = System::Drawing::Point(100, 210);
			this->labelVolume->Name = L"labelVolume";
			this->labelVolume->Size = System::Drawing::Size(51, 15);
			this->labelVolume->TabIndex = 7;
			this->labelVolume->Text = L"Объём";
			// 
			// labelSpeed
			// 
			this->labelSpeed->AutoSize = true;
			this->labelSpeed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSpeed->Location = System::Drawing::Point(93, 138);
			this->labelSpeed->Name = L"labelSpeed";
			this->labelSpeed->Size = System::Drawing::Size(70, 15);
			this->labelSpeed->TabIndex = 6;
			this->labelSpeed->Text = L"Скорость";
			// 
			// labelTemper
			// 
			this->labelTemper->AutoSize = true;
			this->labelTemper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelTemper->Location = System::Drawing::Point(77, 71);
			this->labelTemper->Name = L"labelTemper";
			this->labelTemper->Size = System::Drawing::Size(95, 15);
			this->labelTemper->TabIndex = 5;
			this->labelTemper->Text = L"Температура";
			// 
			// labelPressue
			// 
			this->labelPressue->AutoSize = true;
			this->labelPressue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPressue->Location = System::Drawing::Point(90, 0);
			this->labelPressue->Name = L"labelPressue";
			this->labelPressue->Size = System::Drawing::Size(73, 15);
			this->labelPressue->TabIndex = 4;
			this->labelPressue->Text = L"Давление";
			this->labelPressue->Click += gcnew System::EventHandler(this, &UnitMain::labelPressue_Click);
			// 
			// buttonVolumeResult
			// 
			this->buttonVolumeResult->BackColor = System::Drawing::Color::LightCoral;
			this->buttonVolumeResult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonVolumeResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonVolumeResult->Location = System::Drawing::Point(111, 230);
			this->buttonVolumeResult->Name = L"buttonVolumeResult";
			this->buttonVolumeResult->Size = System::Drawing::Size(40, 30);
			this->buttonVolumeResult->TabIndex = 3;
			this->buttonVolumeResult->Text = L"=";
			this->buttonVolumeResult->UseVisualStyleBackColor = false;
			this->buttonVolumeResult->Click += gcnew System::EventHandler(this, &UnitMain::buttonVolumeResult_Click);
			// 
			// buttonSpeedResult
			// 
			this->buttonSpeedResult->BackColor = System::Drawing::Color::LightCoral;
			this->buttonSpeedResult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSpeedResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSpeedResult->Location = System::Drawing::Point(111, 166);
			this->buttonSpeedResult->Name = L"buttonSpeedResult";
			this->buttonSpeedResult->Size = System::Drawing::Size(40, 30);
			this->buttonSpeedResult->TabIndex = 2;
			this->buttonSpeedResult->Text = L"=";
			this->buttonSpeedResult->UseVisualStyleBackColor = false;
			this->buttonSpeedResult->Click += gcnew System::EventHandler(this, &UnitMain::buttonSpeedResult_Click);
			// 
			// buttonTemperResult
			// 
			this->buttonTemperResult->BackColor = System::Drawing::Color::LightCoral;
			this->buttonTemperResult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonTemperResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonTemperResult->Location = System::Drawing::Point(111, 94);
			this->buttonTemperResult->Name = L"buttonTemperResult";
			this->buttonTemperResult->Size = System::Drawing::Size(40, 30);
			this->buttonTemperResult->TabIndex = 1;
			this->buttonTemperResult->Text = L"=";
			this->buttonTemperResult->UseVisualStyleBackColor = false;
			this->buttonTemperResult->Click += gcnew System::EventHandler(this, &UnitMain::buttonTemperResult_Click);
			// 
			// buttonPressueResult
			// 
			this->buttonPressueResult->BackColor = System::Drawing::Color::LightCoral;
			this->buttonPressueResult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPressueResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPressueResult->Location = System::Drawing::Point(111, 30);
			this->buttonPressueResult->Name = L"buttonPressueResult";
			this->buttonPressueResult->Size = System::Drawing::Size(40, 30);
			this->buttonPressueResult->TabIndex = 0;
			this->buttonPressueResult->Text = L"=";
			this->buttonPressueResult->UseVisualStyleBackColor = false;
			this->buttonPressueResult->Click += gcnew System::EventHandler(this, &UnitMain::buttonPressueResult_Click);
			// 
			// panelAstro
			// 
			this->panelAstro->Controls->Add(this->pictureBoxM8);
			this->panelAstro->Controls->Add(this->pictureBoxM7);
			this->panelAstro->Controls->Add(this->pictureBoxM1);
			this->panelAstro->Controls->Add(this->pictureBoxM2);
			this->panelAstro->Controls->Add(this->pictureBoxM3);
			this->panelAstro->Controls->Add(this->pictureBoxM4);
			this->panelAstro->Controls->Add(this->pictureBoxM5);
			this->panelAstro->Controls->Add(this->pictureBoxM6);
			this->panelAstro->Controls->Add(this->pictureBoxStart);
			this->panelAstro->Controls->Add(this->textBoxYear);
			this->panelAstro->Controls->Add(this->textBoxMonth);
			this->panelAstro->Controls->Add(this->textBoxDay);
			this->panelAstro->Controls->Add(this->buttonCheckResult);
			this->panelAstro->Controls->Add(this->labelMoonPhase);
			this->panelAstro->Controls->Add(this->textBoxMoon);
			this->panelAstro->Controls->Add(this->labelYear);
			this->panelAstro->Controls->Add(this->labelMonth);
			this->panelAstro->Controls->Add(this->labelDay);
			this->panelAstro->Controls->Add(this->labelMoon);
			this->panelAstro->Location = System::Drawing::Point(693, 30);
			this->panelAstro->Name = L"panelAstro";
			this->panelAstro->Size = System::Drawing::Size(252, 288);
			this->panelAstro->TabIndex = 4;
			this->panelAstro->Visible = false;
			// 
			// pictureBoxM8
			// 
			this->pictureBoxM8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxM8.Image")));
			this->pictureBoxM8->Location = System::Drawing::Point(70, 120);
			this->pictureBoxM8->Name = L"pictureBoxM8";
			this->pictureBoxM8->Size = System::Drawing::Size(118, 102);
			this->pictureBoxM8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxM8->TabIndex = 18;
			this->pictureBoxM8->TabStop = false;
			this->pictureBoxM8->Visible = false;
			// 
			// pictureBoxM7
			// 
			this->pictureBoxM7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxM7.Image")));
			this->pictureBoxM7->Location = System::Drawing::Point(70, 120);
			this->pictureBoxM7->Name = L"pictureBoxM7";
			this->pictureBoxM7->Size = System::Drawing::Size(118, 102);
			this->pictureBoxM7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxM7->TabIndex = 17;
			this->pictureBoxM7->TabStop = false;
			this->pictureBoxM7->Visible = false;
			// 
			// pictureBoxM1
			// 
			this->pictureBoxM1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxM1.Image")));
			this->pictureBoxM1->Location = System::Drawing::Point(70, 120);
			this->pictureBoxM1->Name = L"pictureBoxM1";
			this->pictureBoxM1->Size = System::Drawing::Size(118, 102);
			this->pictureBoxM1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxM1->TabIndex = 16;
			this->pictureBoxM1->TabStop = false;
			this->pictureBoxM1->Visible = false;
			// 
			// pictureBoxM2
			// 
			this->pictureBoxM2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxM2.Image")));
			this->pictureBoxM2->Location = System::Drawing::Point(70, 120);
			this->pictureBoxM2->Name = L"pictureBoxM2";
			this->pictureBoxM2->Size = System::Drawing::Size(118, 102);
			this->pictureBoxM2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxM2->TabIndex = 15;
			this->pictureBoxM2->TabStop = false;
			this->pictureBoxM2->Visible = false;
			// 
			// pictureBoxM3
			// 
			this->pictureBoxM3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxM3.Image")));
			this->pictureBoxM3->Location = System::Drawing::Point(70, 120);
			this->pictureBoxM3->Name = L"pictureBoxM3";
			this->pictureBoxM3->Size = System::Drawing::Size(118, 102);
			this->pictureBoxM3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxM3->TabIndex = 14;
			this->pictureBoxM3->TabStop = false;
			this->pictureBoxM3->Visible = false;
			// 
			// pictureBoxM4
			// 
			this->pictureBoxM4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxM4.Image")));
			this->pictureBoxM4->Location = System::Drawing::Point(70, 120);
			this->pictureBoxM4->Name = L"pictureBoxM4";
			this->pictureBoxM4->Size = System::Drawing::Size(118, 102);
			this->pictureBoxM4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxM4->TabIndex = 13;
			this->pictureBoxM4->TabStop = false;
			this->pictureBoxM4->Visible = false;
			// 
			// pictureBoxM5
			// 
			this->pictureBoxM5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxM5.Image")));
			this->pictureBoxM5->Location = System::Drawing::Point(70, 120);
			this->pictureBoxM5->Name = L"pictureBoxM5";
			this->pictureBoxM5->Size = System::Drawing::Size(118, 102);
			this->pictureBoxM5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxM5->TabIndex = 12;
			this->pictureBoxM5->TabStop = false;
			this->pictureBoxM5->Visible = false;
			// 
			// pictureBoxM6
			// 
			this->pictureBoxM6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxM6.Image")));
			this->pictureBoxM6->Location = System::Drawing::Point(70, 120);
			this->pictureBoxM6->Name = L"pictureBoxM6";
			this->pictureBoxM6->Size = System::Drawing::Size(118, 102);
			this->pictureBoxM6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxM6->TabIndex = 11;
			this->pictureBoxM6->TabStop = false;
			this->pictureBoxM6->Visible = false;
			// 
			// pictureBoxStart
			// 
			this->pictureBoxStart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxStart.Image")));
			this->pictureBoxStart->Location = System::Drawing::Point(54, 111);
			this->pictureBoxStart->Name = L"pictureBoxStart";
			this->pictureBoxStart->Size = System::Drawing::Size(147, 113);
			this->pictureBoxStart->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxStart->TabIndex = 10;
			this->pictureBoxStart->TabStop = false;
			this->pictureBoxStart->Click += gcnew System::EventHandler(this, &UnitMain::pictureBox1_Click);
			// 
			// textBoxYear
			// 
			this->textBoxYear->Location = System::Drawing::Point(174, 51);
			this->textBoxYear->Name = L"textBoxYear";
			this->textBoxYear->Size = System::Drawing::Size(60, 20);
			this->textBoxYear->TabIndex = 9;
			// 
			// textBoxMonth
			// 
			this->textBoxMonth->Location = System::Drawing::Point(97, 51);
			this->textBoxMonth->Name = L"textBoxMonth";
			this->textBoxMonth->Size = System::Drawing::Size(60, 20);
			this->textBoxMonth->TabIndex = 8;
			// 
			// textBoxDay
			// 
			this->textBoxDay->Location = System::Drawing::Point(22, 51);
			this->textBoxDay->Name = L"textBoxDay";
			this->textBoxDay->Size = System::Drawing::Size(60, 20);
			this->textBoxDay->TabIndex = 7;
			// 
			// buttonCheckResult
			// 
			this->buttonCheckResult->BackColor = System::Drawing::Color::LightCoral;
			this->buttonCheckResult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCheckResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCheckResult->Location = System::Drawing::Point(77, 77);
			this->buttonCheckResult->Name = L"buttonCheckResult";
			this->buttonCheckResult->Size = System::Drawing::Size(100, 30);
			this->buttonCheckResult->TabIndex = 6;
			this->buttonCheckResult->Text = L"Рассчитать!";
			this->buttonCheckResult->UseVisualStyleBackColor = false;
			this->buttonCheckResult->Click += gcnew System::EventHandler(this, &UnitMain::buttonCheckResult_Click);
			// 
			// labelMoonPhase
			// 
			this->labelMoonPhase->AutoSize = true;
			this->labelMoonPhase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelMoonPhase->Location = System::Drawing::Point(85, 227);
			this->labelMoonPhase->Name = L"labelMoonPhase";
			this->labelMoonPhase->Size = System::Drawing::Size(83, 15);
			this->labelMoonPhase->TabIndex = 5;
			this->labelMoonPhase->Text = L"Фаза Луны:";
			this->labelMoonPhase->Click += gcnew System::EventHandler(this, &UnitMain::labelMoonPhase_Click);
			// 
			// textBoxMoon
			// 
			this->textBoxMoon->BackColor = System::Drawing::Color::White;
			this->textBoxMoon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxMoon->Location = System::Drawing::Point(46, 245);
			this->textBoxMoon->Name = L"textBoxMoon";
			this->textBoxMoon->ReadOnly = true;
			this->textBoxMoon->Size = System::Drawing::Size(162, 21);
			this->textBoxMoon->TabIndex = 4;
			// 
			// labelYear
			// 
			this->labelYear->AutoSize = true;
			this->labelYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelYear->Location = System::Drawing::Point(187, 31);
			this->labelYear->Name = L"labelYear";
			this->labelYear->Size = System::Drawing::Size(35, 15);
			this->labelYear->TabIndex = 3;
			this->labelYear->Text = L"Год:";
			// 
			// labelMonth
			// 
			this->labelMonth->AutoSize = true;
			this->labelMonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelMonth->Location = System::Drawing::Point(103, 31);
			this->labelMonth->Name = L"labelMonth";
			this->labelMonth->Size = System::Drawing::Size(54, 15);
			this->labelMonth->TabIndex = 2;
			this->labelMonth->Text = L"Месяц:";
			// 
			// labelDay
			// 
			this->labelDay->AutoSize = true;
			this->labelDay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelDay->Location = System::Drawing::Point(28, 31);
			this->labelDay->Name = L"labelDay";
			this->labelDay->Size = System::Drawing::Size(45, 15);
			this->labelDay->TabIndex = 1;
			this->labelDay->Text = L"День:";
			// 
			// labelMoon
			// 
			this->labelMoon->AutoSize = true;
			this->labelMoon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelMoon->Location = System::Drawing::Point(51, 4);
			this->labelMoon->Name = L"labelMoon";
			this->labelMoon->Size = System::Drawing::Size(147, 16);
			this->labelMoon->TabIndex = 0;
			this->labelMoon->Text = L"Расчёт фазы Луны";
			// 
			// UnitMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PowderBlue;
			this->ClientSize = System::Drawing::Size(259, 315);
			this->Controls->Add(this->panelAstro);
			this->Controls->Add(this->panelUnits);
			this->Controls->Add(this->panelMatch);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panelStandart);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(275, 354);
			this->Name = L"UnitMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &UnitMain::UnitMain_FormClosing);
			this->Load += gcnew System::EventHandler(this, &UnitMain::UnitMain_Load);
			this->panelStandart->ResumeLayout(false);
			this->panelStandart->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panelMatch->ResumeLayout(false);
			this->panelUnits->ResumeLayout(false);
			this->panelUnits->PerformLayout();
			this->panelAstro->ResumeLayout(false);
			this->panelAstro->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxM8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxM7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxM1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxM2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxM3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxM4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxM5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxM6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxStart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void обычныйToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 panelStandart->Visible = true;
			 panelMatch->Visible = false;
			 panelAstro->Visible = false;
			 panelUnits->Visible = false;
			 this->Size = System::Drawing::Size(275, 354);
			 this->MinimumSize = System::Drawing::Size(275, 354);
}
private: System::Void расширенныйМатематическийToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 panelStandart->Visible = true;
			 panelMatch->Visible = true;
			 panelAstro->Visible = false;
			 panelUnits->Visible = false;
			 this->Size = System::Drawing::Size(442, 354);
			 this->MinimumSize = System::Drawing::Size(442, 354);
}
private: System::Void астрономическийToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 panelMatch->Visible = false;
			 panelAstro->Visible = true;
			 panelUnits->Visible = false;
			 panelStandart->Visible = false;
			 panelAstro->Location = Point(1, 30);
			 this->Size = System::Drawing::Size(278, 354);
			 this->MinimumSize = System::Drawing::Size(278, 354);
}
private: System::Void переводЕденицИзмеренияToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 panelMatch->Visible = false;
			 panelAstro->Visible = false;
			 panelUnits->Visible = true;
			 panelStandart->Visible = false;
			 panelUnits->Location = Point(1, 30);
			 this->Size = System::Drawing::Size(280, 354);
			 this->MinimumSize = System::Drawing::Size(280, 354);
}
private: System::Void buttonNumber1_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBoxCalcScreen->Text = textBoxCalcScreen->Text + "1";
}
private: System::Void buttonNumber2_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBoxCalcScreen->Text = textBoxCalcScreen->Text + "2";
}
private: System::Void buttonNumber3_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBoxCalcScreen->Text = textBoxCalcScreen->Text + "3";
}
private: System::Void buttonNumber4_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBoxCalcScreen->Text = textBoxCalcScreen->Text + "4";
}
private: System::Void buttonNumber5_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBoxCalcScreen->Text = textBoxCalcScreen->Text + "5";
}
private: System::Void buttonNumber6_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBoxCalcScreen->Text = textBoxCalcScreen->Text + "6";
}
private: System::Void buttonNumber7_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBoxCalcScreen->Text = textBoxCalcScreen->Text + "7";
}
private: System::Void buttonNumber8_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBoxCalcScreen->Text = textBoxCalcScreen->Text + "8";
}
private: System::Void buttonNumber9_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBoxCalcScreen->Text = textBoxCalcScreen->Text + "9";
}
private: System::Void buttonNumber0_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBoxCalcScreen->Text = textBoxCalcScreen->Text + "0";
}
private: System::Void buttonComma_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBoxCalcScreen->Text = textBoxCalcScreen->Text + ",";
}
private: System::Void buttonPlus_Click(System::Object^  sender, System::EventArgs^  e) {
			 buttonEqual_Click(sender, e);
			 x = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 oper = 1;
			 textBoxCalcScreen->Text = "";
}
private: System::Void UnitMain_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void buttonEqual_Click(System::Object^  sender, System::EventArgs^  e) {
			 y = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 Result = y;

			 switch (oper)
			 {
			 case 1:
				 Result = x + y;
				 break;
			 case 2:
				 Result = x - y;
				 break;
			 case 3:
				 Result = x * y;
				 break;
			 case 4:
				 Result = x / y;
				 break;
			 }

			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
			 x = 0;
			 oper = 0;
}
private: System::Void buttonMinus_Click(System::Object^  sender, System::EventArgs^  e) {
			 buttonEqual_Click(sender, e);
			 x = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 oper = 2;
			 textBoxCalcScreen->Text = "";
}
private: System::Void buttonMultiply_Click(System::Object^  sender, System::EventArgs^  e) {
			 buttonEqual_Click(sender, e);
			 x = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 oper = 3;
			 textBoxCalcScreen->Text = "";
}
private: System::Void buttonDivide_Click(System::Object^  sender, System::EventArgs^  e) {
			 buttonEqual_Click(sender, e);
			 x = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 oper = 4;
			 textBoxCalcScreen->Text = "";
}
private: System::Void buttonPlusMinus_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 Result = z * (-1);
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonPercent_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 Result = z * 0.01;
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonCE_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBoxCalcScreen->Text = "";
			 x = 0;
			 Result = 0;
			 y = 0;
			 z = 0;
}
private: System::Void buttonC_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBoxCalcScreen->TextLength > 0)
			 {
				 textBoxCalcScreen->Text = textBoxCalcScreen->Text->Remove(textBoxCalcScreen->TextLength - 1,1);
			 }
}
private: System::Void buttonTwoDegree_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 Result = pow(z, 2);
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonSqrt_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 Result = sqrt(z);
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}

int factorial(int n)
{
	if (n <= 0)
		return 1;
    if (n > 0)
		return factorial(n - 1)*n;
}

private: System::Void buttonFactorial_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 Result = factorial(z);
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonSin_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 z = z * Pi / 180;
			 Result = sin(z);
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonCos_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 z = z * Pi / 180;
			 Result = cos(z);
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonTan_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 z = z * Pi / 180;
			 Result = tan(z);
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonCotan_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 z = z * Pi / 180;
			 Result = 1 / tan(z);
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonModule_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 Result = abs(z);
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonThreeSqrt_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 Result = pow(z, 1./3.);
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonLn_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 Result = log(z);
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonLog10_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 Result = log10(z);
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonArcSin_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 z = asin(z);
			 Result = z * 180 / Pi;
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonArcCos_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 z = acos(z);
			 Result = z * 180 / Pi;
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonArcTan_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 z = atan(z);
			 Result = z * 180 / Pi;
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonArcCotan_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 z = Pi / 2 - atan(z);
			 Result = z * 180 / Pi;
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonTenDegree_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 Result = pow(10, z);
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonExpDegree_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 Result = pow(exp, z);
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonExponenta_Click(System::Object^  sender, System::EventArgs^  e) {
			 Result = exp;
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonPi_Click(System::Object^  sender, System::EventArgs^  e) {
			 Result = Pi;
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonXThreeDegree_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 Result = pow(z, 3);
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void button1DivX_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 Result = 1 / z;
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonDegreeTwoA_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 Result = pow(2, z);
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void buttonScobaR_Click(System::Object^  sender, System::EventArgs^  e) {
			 int op;
			 double xx;

			 op = oper;
			 xx = x;

			 op = 0;
			 xx = 0;
			 textBoxCalcScreen->Text = "";
}
private: System::Void buttonScobaL_Click(System::Object^  sender, System::EventArgs^  e) {
			 buttonEqual_Click(sender, e);
			 textBoxCalcScreen->Text = System::Convert::ToString(Result);
}
private: System::Void labelMoonPhase_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelPressue_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void buttonMS_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxCalcScreen->Text);
			 ResultM = z;
			 textBoxMemory->Text = System::Convert::ToString(ResultM);
			 textBoxCalcScreen->Text = "";
}
private: System::Void buttonMR_Click(System::Object^  sender, System::EventArgs^  e) {
			 Result = System::Convert::ToDouble(textBoxMemory->Text);
			 textBoxCalcScreen->Text = textBoxMemory->Text;
}
private: System::Void buttonMC_Click(System::Object^  sender, System::EventArgs^  e) {
			 ResultM = 0;
			 textBoxMemory->Text = "";
}
private: System::Void buttonMPlus_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxMemory->Text);
			 z = z + ResultM;
			 textBoxMemory->Text = System::Convert::ToString(z);
}
private: System::Void buttonMMinus_Click(System::Object^  sender, System::EventArgs^  e) {
			 z = System::Convert::ToDouble(textBoxMemory->Text);
			 z = z - ResultM;
			 textBoxMemory->Text = System::Convert::ToString(z);
}
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitAbout^ form2 = gcnew UnitAbout;
			 form2->ShowDialog();
}
private: System::Void помощьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitHelp^ form3 = gcnew UnitHelp;
			 form3->ShowDialog();
}
private: System::Void buttonPressueResult_Click(System::Object^  sender, System::EventArgs^  e) {
			 int count1, count2;
			 double res;

			 count1 = comboBoxPress->SelectedIndex;
			 count2 = comboBoxPressRes->SelectedIndex;
			 res = System::Convert::ToDouble(textBoxPress->Text);

			 if (count1 == 0)
			 {
				 switch (count2)
				 {
				   case 0:
				   {
						   res *= 9.87;
					       textBoxPressRes->Text = System::Convert::ToString(res);
						   break;
				   }
				   case 1:
				   {
						   textBoxPressRes->Text = System::Convert::ToString(res);
						   break;
				   }
				   case 2:
				   {
						   res *= 7500.62;
					       textBoxPressRes->Text = System::Convert::ToString(res);
						   break;
				   }
				 }
			 }

			 if (count1 == 1)
			 {
				 switch (count2)
				 {
				 case 0:
				 {
						   textBoxPressRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 1:
				 {
						   res /= 10;
						   textBoxPressRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 2:
				 {
						   res *= 760;
						   textBoxPressRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 }
			 }

			 if (count1 == 2)
			 {
				 switch (count2)
				 {
				 case 0:
				 {
						   res *= 0.0013;
						   textBoxPressRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 1:
				 {
						   res *= 0.00013;
						   textBoxPressRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 2:
				 {
						   textBoxPressRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 }
			 }
}
private: System::Void comboBoxPress_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void buttonTemperResult_Click(System::Object^  sender, System::EventArgs^  e) {
			 int count1, count2;
			 double res;

			 count1 = comboBoxTemper->SelectedIndex;
			 count2 = comboBoxTemperRes->SelectedIndex;
			 res = System::Convert::ToDouble(textBoxTemper->Text);

			 if (count1 == 0)
			 {
				 switch (count2)
				 {
				 case 0:
				 {
						   res = res * 1.8 + 32;
						   textBoxTemperRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 1:
				 {
						   textBoxTemperRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 2:
				 {
						   res += 273;
						   textBoxTemperRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 }
			 }

			 if (count1 == 1)
			 {
				 switch (count2)
				 {
				 case 0:
				 {
						   textBoxTemperRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 1:
				 {
						   res = (res - 32) / 1.8;
						   textBoxTemperRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 2:
				 {
						   res = (res + 459) / 1.8;
						   textBoxTemperRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 }
			 }

			 if (count1 == 2)
			 {
				 switch (count2)
				 {
				 case 0:
				 {
						   res = res * 1.8 - 459;
						   textBoxTemperRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 1:
				 {
						   res -= 273;
						   textBoxTemperRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 2:
				 {
						   textBoxTemperRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 }
			 }
}
private: System::Void buttonSpeedResult_Click(System::Object^  sender, System::EventArgs^  e) {
			 int count1, count2;
			 double res;

			 count1 = comboBoxSpeed->SelectedIndex;
			 count2 = comboBoxSpeedRes->SelectedIndex;
			 res = System::Convert::ToDouble(textBoxSpeed->Text);

			 if (count1 == 0)
			 {
				 switch (count2)
				 {
				 case 0:
				 {
						   res /= 1.609;
						   textBoxSpeedRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 1:
				 {
						   textBoxSpeedRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 2:
				 {
						   res /= 3.6;
						   textBoxSpeedRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 }
			 }

			 if (count1 == 1)
			 {
				 switch (count2)
				 {
				 case 0:
				 {
						   textBoxSpeedRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 1:
				 {
						   res *= 1.609;
						   textBoxSpeedRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 2:
				 {
						   res *= 0.447;
						   textBoxSpeedRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 }
			 }

			 if (count1 == 2)
			 {
				 switch (count2)
				 {
				 case 0:
				 {
						   res *= 2.236;
						   textBoxSpeedRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 1:
				 {
						   res *= 3.6;
						   textBoxSpeedRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 2:
				 {
						   textBoxSpeedRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 }
			 }
}
private: System::Void buttonVolumeResult_Click(System::Object^  sender, System::EventArgs^  e) {
			 int count1, count2;
			 double res;

			 count1 = comboBoxVolume->SelectedIndex;
			 count2 = comboBoxVolumeRes->SelectedIndex;
			 res = System::Convert::ToDouble(textBoxVolume->Text);

			 if (count1 == 0)
			 {
				 switch (count2)
				 {
				 case 0:
				 {
						   res /= 16.387064;
						   textBoxVolumeRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 1:
				 {
						   textBoxVolumeRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 2:
				 {
						   res /= 1000;
						   textBoxVolumeRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 }
			 }

			 if (count1 == 1)
			 {
				 switch (count2)
				 {
				 case 0:
				 {
						   textBoxVolumeRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 1:
				 {
						   res *= 16.387064;
						   textBoxVolumeRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 2:
				 {
						   res *= 0.0163;
						   textBoxVolumeRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 }
			 }

			 if (count1 == 2)
			 {
				 switch (count2)
				 {
				 case 0:
				 {
						   res *= 61.023;
						   textBoxVolumeRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 1:
				 {
						   res *= 1000;
						   textBoxVolumeRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 case 2:
				 {
						   textBoxVolumeRes->Text = System::Convert::ToString(res);
						   break;
				 }
				 }
			 }
}
private: System::Void buttonCheckResult_Click(System::Object^  sender, System::EventArgs^  e) {
			 int d, m, y;
			 int l, n;

			 d = System::Convert::ToInt32(textBoxDay->Text);
			 m = System::Convert::ToInt32(textBoxMonth->Text);
			 y = System::Convert::ToInt32(textBoxYear->Text);

			 if ((y < 1900) || (y > 2051))
			 {
				 textBoxMoon->Text = "Ошибка";
			 }

			 if ((d <= 0) || (y > 31))
			 {
				 textBoxMoon->Text = "Ошибка";
			 }

			 if ((m <= 0) || (y > 12))
			 {
				 textBoxMoon->Text = "Ошибка";
			 }

		     switch (y)
			 {
			 case 1900:
			 case 1919:
			 case 1938:
			 case 1957:
			 case 1976:
			 case 1995:
			 case 2014:
			 case 2033:
				l = 1;
				n = l * 11 - 14 + d + m;
			    break;
			 case 1901:
			 case 1920:
			 case 1939:
			 case 1958:
			 case 1977:
			 case 1996:
			 case 2015:
			 case 2034:
				l = 2;
				n = l * 11 - 14 + d + m;
				break;
			 case 1902:
			 case 1921:
			 case 1940:
			 case 1959:
			 case 1978:
			 case 1997:
			 case 2016:
			 case 2035:
				l = 3;
				n = l * 11 - 14 + d + m;
				break;
			 case 1903:
			 case 1922:
			 case 1941:
			 case 1960:
			 case 1979:
			 case 1998:
			 case 2017:
			 case 2036:
				l = 4;
				n = l * 11 - 14 + d + m;
				break;
			 case 1904:
			 case 1923:
			 case 1942:
			 case 1961:
			 case 1980:
			 case 1999:
			 case 2018:
			 case 2037:
				l = 5;
				n = l * 11 - 14 + d + m;
				break;			 
			 case 1905:
			 case 1924:
			 case 1943:
			 case 1962:
			 case 1981:
			 case 2000:
			 case 2019:
			 case 2038:
				l = 6;
				n = l * 11 - 14 + d + m;
				break;				 
			 case 1906:
			 case 1925:
			 case 1944:
			 case 1963:
			 case 1982:
			 case 2001:
			 case 2020:
			 case 2039:
				l = 7;
				n = l * 11 - 14 + d + m;
				break;
			 case 1907:
			 case 1926:
			 case 1945:
			 case 1964:
			 case 1983:
			 case 2002:
			 case 2021:
			 case 2040:
				l = 8;
				n = l * 11 - 14 + d + m;
				break;				
			 case 1908:
			 case 1927:
			 case 1946:
			 case 1965:
			 case 1984:
			 case 2003:
			 case 2022:
			 case 2041:
				l = 9; 
				n = l * 11 - 14 + d + m;
				break;
			 case 1909:
			 case 1928:
			 case 1947:
			 case 1966:
			 case 1985:
			 case 2004:
			 case 2023:
			 case 2042:
				l = 10; 
				n = l * 11 - 14 + d + m;
				break;
			 case 1910:
			 case 1929:
			 case 1948:
			 case 1967:
			 case 1986:
			 case 2005:
			 case 2024:
			 case 2043:
				l = 11;
				n = l * 11 - 14 + d + m;
				break;
			 case 1911:
			 case 1930:
			 case 1949:
			 case 1968:
			 case 1987:
			 case 2006:
			 case 2025:
			 case 2044:
				l = 12;
				n = l * 11 - 14 + d + m;
				break;
			 case 1912:
			 case 1931:
			 case 1950:
			 case 1969:
			 case 1988:
			 case 2007:
			 case 2026:
			 case 2045:
				l = 13; 
				n = l * 11 - 14 + d + m;
				break;
			 case 1913:
			 case 1932:
			 case 1951:
			 case 1970:
			 case 1989:
			 case 2008:
			 case 2027:
			 case 2046:
				l = 14;
				n = l * 11 - 14 + d + m;
				break;
			 case 1914:
			 case 1933:
			 case 1952:
			 case 1971:
			 case 1990:
			 case 2009:
			 case 2028:
			 case 2047:
				l = 15;
				n = l * 11 - 14 + d + m;
				break;
			 case 1915:
			 case 1934:
			 case 1953:
			 case 1972:
			 case 1991:
			 case 2010:
			 case 2029:
			 case 2048:
				l = 16;
				n = l * 11 - 14 + d + m;
				break;
			 case 1916:
			 case 1935:
			 case 1954:
			 case 1973:
			 case 1992:
			 case 2011:
			 case 2030:
			 case 2049:
				l = 17;
				n = l * 11 - 14 + d + m;
				break;
			 case 1917:
			 case 1936:
			 case 1955:
			 case 1974:
			 case 1993:
			 case 2012:
			 case 2031:
			 case 2050:
				l = 18; 
				n = l * 11 - 14 + d + m;
				break;
			 case 1918:
			 case 1937:
			 case 1956:
			 case 1975:
			 case 1994:
			 case 2013:
			 case 2032:
			 case 2051:
				l = 19;
				n = l * 11 - 14 + d + m;
				break;
			 }

			 while (n > 30)
			 {
				 n -= 30;
			 }

			 switch (n)
			 {
			 case 1:
				 pictureBoxStart->Visible = false;
				 pictureBoxM1->Visible = true;
				 pictureBoxM2->Visible = false;
				 pictureBoxM3->Visible = false;
				 pictureBoxM4->Visible = false;
				 pictureBoxM5->Visible = false;
				 pictureBoxM6->Visible = false;
				 pictureBoxM7->Visible = false;
				 pictureBoxM8->Visible = false;
				 textBoxMoon->Text = "Новолуние";
				 break;
			 case 2:
			 case 3:
			 case 4:
			 case 5:
			 case 6:
			 case 7:
				 pictureBoxStart->Visible = false;
				 pictureBoxM1->Visible = false;
				 pictureBoxM2->Visible = false;
				 pictureBoxM3->Visible = true;
				 pictureBoxM4->Visible = false;
				 pictureBoxM5->Visible = false;
				 pictureBoxM6->Visible = false;
				 pictureBoxM7->Visible = false;
				 pictureBoxM8->Visible = false;
				 textBoxMoon->Text = "Растущая Луна";
				 break;
			 case 8:
				 pictureBoxM1->Visible = false;
				 pictureBoxM2->Visible = false;
				 pictureBoxM3->Visible = false;
				 pictureBoxM4->Visible = false;
				 pictureBoxM5->Visible = false;
				 pictureBoxM6->Visible = false;
				 pictureBoxM7->Visible = false;
				 pictureBoxM8->Visible = true;
				 textBoxMoon->Text = "Первая четверть";
				 break;
			 case 9:
			 case 10:
			 case 11:
			 case 12:
			 case 13:
			 case 14:
				pictureBoxStart->Visible = false;
				pictureBoxM1->Visible = false;
				pictureBoxM2->Visible = false;
				pictureBoxM3->Visible = false;
				pictureBoxM4->Visible = false;
				pictureBoxM5->Visible = false;
				pictureBoxM6->Visible = true;
				pictureBoxM7->Visible = false;
				pictureBoxM8->Visible = false;
				textBoxMoon->Text = "Растущая Луна";
				break;
			 case 15:
				pictureBoxStart->Visible = false;
				pictureBoxM1->Visible = false; 
				pictureBoxM2->Visible = true;
				pictureBoxM3->Visible = false;
				pictureBoxM4->Visible = false;
				pictureBoxM5->Visible = false;
				pictureBoxM6->Visible = false;
				pictureBoxM7->Visible = false;
				pictureBoxM8->Visible = false;
				textBoxMoon->Text = "Полнолуние";
				break;
			 case 16:
			 case 17:
			 case 18:
			 case 19:
			 case 20:
			 case 21:
			 case 22:
				pictureBoxStart->Visible = false;
				pictureBoxM1->Visible = false;
				pictureBoxM2->Visible = false;
				pictureBoxM3->Visible = false;
				pictureBoxM4->Visible = false;
				pictureBoxM5->Visible = true;
				pictureBoxM6->Visible = false;
				pictureBoxM7->Visible = false;
				pictureBoxM8->Visible = false;
				textBoxMoon->Text = "Убывающая луна";
				break;
			 case 23:
				 pictureBoxStart->Visible = false;
				 pictureBoxM1->Visible = false;
				 pictureBoxM2->Visible = false;
				 pictureBoxM3->Visible = false;
				 pictureBoxM4->Visible = false;
				 pictureBoxM5->Visible = false;
				 pictureBoxM6->Visible = false;
				 pictureBoxM7->Visible = true;
				 pictureBoxM8->Visible = false;
				 textBoxMoon->Text = "Третья четверть";
				 break;
			 case 24:
			 case 25:
			 case 26:
			 case 27:
			 case 28:
			 case 29:
			 case 30:
				pictureBoxStart->Visible = false;
				pictureBoxM1->Visible = false;
				pictureBoxM2->Visible = false;
				pictureBoxM3->Visible = false;
				pictureBoxM4->Visible = true;
				pictureBoxM5->Visible = false;
				pictureBoxM6->Visible = false;
				pictureBoxM7->Visible = false;
				pictureBoxM8->Visible = false;
				textBoxMoon->Text = "Убывающая Луна";
				break;
			 }

			d = 0;
			m = 0;
			y = 0;
		    l = 0;
}
private: System::Void UnitMain_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 //System::Windows::Forms::DialogResult result =
			 MessageBox::Show("Закрыть приложение 'Калькулятор'?", "Сообщение",
				 MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			 //System::Windows::Forms::DialogResult::No;

			 //if (result == System::Windows::Forms::DialogResult::No)
			 //{
			//	 CancelEventArgs(true);
			//	 e->Cancel = false;
			// }
}
};
}
