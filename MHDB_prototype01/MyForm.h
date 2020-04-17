#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <map>
#include <msclr/marshal_cppstd.h>

using namespace MySql::Data::MySqlClient;

namespace MHDBprototype01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/**************************************************************************************************
	||||||||||||||||||||||||||||||||||||||�萔��`||||||||||||||||||||||||||||||||||||||||||||||||||||
	**************************************************************************************************/
	const int v1 = 1;
	const int v2 = 2;
	const int v3 = 3;
	const int v4 = 4;
	const int v5 = 5;

	//1���R�[�h�̍\����
	typedef struct {
		int id = 0;
		int eatResult = 3;
		int sleepResult = 3;
		int jobResult = 3;
		int hobResult = 3;
		int exerResult = 3;
	}HDBV;
	HDBV hdbv;

	/// <summary>
	/// MyForm �̊T�v
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//			
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ title1;

	private: System::Windows::Forms::GroupBox^ eatSF;


	private: System::Windows::Forms::RadioButton^ eatLv5;
	private: System::Windows::Forms::RadioButton^ eatLv4;
	private: System::Windows::Forms::RadioButton^ eatLv3;
	private: System::Windows::Forms::RadioButton^ eatLv2;
	private: System::Windows::Forms::RadioButton^ eatLv1;
	private: System::Windows::Forms::GroupBox^ sleepSF;
	private: System::Windows::Forms::RadioButton^ sleepLv5;

	private: System::Windows::Forms::RadioButton^ sleepLv4;

	private: System::Windows::Forms::RadioButton^ sleepLv3;

	private: System::Windows::Forms::RadioButton^ sleepLv2;

	private: System::Windows::Forms::RadioButton^ sleepLv1;
	private: System::Windows::Forms::GroupBox^ jobSF;
	private: System::Windows::Forms::RadioButton^ jobLv5;



	private: System::Windows::Forms::RadioButton^ jobLv4;

	private: System::Windows::Forms::RadioButton^ jobLv3;

	private: System::Windows::Forms::RadioButton^ jobLv2;

	private: System::Windows::Forms::RadioButton^ jobLv1;
	private: System::Windows::Forms::GroupBox^ hobbySF;
	private: System::Windows::Forms::RadioButton^ hobLv5;



	private: System::Windows::Forms::RadioButton^ hobLv4;

	private: System::Windows::Forms::RadioButton^ hobLv3;

	private: System::Windows::Forms::RadioButton^ hobLv2;


	private: System::Windows::Forms::RadioButton^ hobLv1;
	private: System::Windows::Forms::GroupBox^ exerFS;
	private: System::Windows::Forms::RadioButton^ exerLv5;



	private: System::Windows::Forms::RadioButton^ exerLv4;

	private: System::Windows::Forms::RadioButton^ exerLv3;

	private: System::Windows::Forms::RadioButton^ exerLv2;

	private: System::Windows::Forms::RadioButton^ exerLv1;
	private: System::Windows::Forms::GroupBox^ memobox1;
	private: System::Windows::Forms::TextBox^ memo1;
	private: System::Windows::Forms::Button^ hozon;
	private: System::Windows::Forms::Button^ showkai;
	private: System::Windows::Forms::TabControl^ tabControl1;

	private: System::Windows::Forms::TabPage^ tabPageAdd;
	private: System::Windows::Forms::TabPage^ tabPageShow;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBoxMemoPage2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label_avgMan;

	private: System::Windows::Forms::Label^ label_maxMan;

	private: System::Windows::Forms::Button^ buttonNext;
	private: System::Windows::Forms::Button^ buttonBack;


	private: System::Windows::Forms::Label^ labelCarentDate;

	private: System::Windows::Forms::Label^ ExRes;

	private: System::Windows::Forms::Label^ HobRes;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ JobRes;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ SleepRes;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ ShokujiRes;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ �ݒ�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �ݒ�ToolStripMenuItem1;
	private: System::Windows::Forms::Label^ labelToday;

	private: System::Windows::Forms::Label^ label6;






































	private: System::Windows::Forms::Button^ buttonsqltest;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



















	protected:

	protected:

	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->title1 = (gcnew System::Windows::Forms::Label());
			this->eatSF = (gcnew System::Windows::Forms::GroupBox());
			this->eatLv5 = (gcnew System::Windows::Forms::RadioButton());
			this->eatLv4 = (gcnew System::Windows::Forms::RadioButton());
			this->eatLv3 = (gcnew System::Windows::Forms::RadioButton());
			this->eatLv2 = (gcnew System::Windows::Forms::RadioButton());
			this->eatLv1 = (gcnew System::Windows::Forms::RadioButton());
			this->sleepSF = (gcnew System::Windows::Forms::GroupBox());
			this->sleepLv5 = (gcnew System::Windows::Forms::RadioButton());
			this->sleepLv4 = (gcnew System::Windows::Forms::RadioButton());
			this->sleepLv3 = (gcnew System::Windows::Forms::RadioButton());
			this->sleepLv2 = (gcnew System::Windows::Forms::RadioButton());
			this->sleepLv1 = (gcnew System::Windows::Forms::RadioButton());
			this->jobSF = (gcnew System::Windows::Forms::GroupBox());
			this->jobLv5 = (gcnew System::Windows::Forms::RadioButton());
			this->jobLv4 = (gcnew System::Windows::Forms::RadioButton());
			this->jobLv3 = (gcnew System::Windows::Forms::RadioButton());
			this->jobLv2 = (gcnew System::Windows::Forms::RadioButton());
			this->jobLv1 = (gcnew System::Windows::Forms::RadioButton());
			this->hobbySF = (gcnew System::Windows::Forms::GroupBox());
			this->hobLv5 = (gcnew System::Windows::Forms::RadioButton());
			this->hobLv4 = (gcnew System::Windows::Forms::RadioButton());
			this->hobLv3 = (gcnew System::Windows::Forms::RadioButton());
			this->hobLv2 = (gcnew System::Windows::Forms::RadioButton());
			this->hobLv1 = (gcnew System::Windows::Forms::RadioButton());
			this->exerFS = (gcnew System::Windows::Forms::GroupBox());
			this->exerLv5 = (gcnew System::Windows::Forms::RadioButton());
			this->exerLv4 = (gcnew System::Windows::Forms::RadioButton());
			this->exerLv3 = (gcnew System::Windows::Forms::RadioButton());
			this->exerLv2 = (gcnew System::Windows::Forms::RadioButton());
			this->exerLv1 = (gcnew System::Windows::Forms::RadioButton());
			this->memobox1 = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->memo1 = (gcnew System::Windows::Forms::TextBox());
			this->hozon = (gcnew System::Windows::Forms::Button());
			this->showkai = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageAdd = (gcnew System::Windows::Forms::TabPage());
			this->buttonsqltest = (gcnew System::Windows::Forms::Button());
			this->labelToday = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPageShow = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label_avgMan = (gcnew System::Windows::Forms::Label());
			this->label_maxMan = (gcnew System::Windows::Forms::Label());
			this->ExRes = (gcnew System::Windows::Forms::Label());
			this->HobRes = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->JobRes = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SleepRes = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->ShokujiRes = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->labelCarentDate = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxMemoPage2 = (gcnew System::Windows::Forms::TextBox());
			this->buttonNext = (gcnew System::Windows::Forms::Button());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�ݒ�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ݒ�ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->eatSF->SuspendLayout();
			this->sleepSF->SuspendLayout();
			this->jobSF->SuspendLayout();
			this->hobbySF->SuspendLayout();
			this->exerFS->SuspendLayout();
			this->memobox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPageAdd->SuspendLayout();
			this->tabPageShow->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// title1
			// 
			this->title1->AutoSize = true;
			this->title1->Font = (gcnew System::Drawing::Font(L"�l�r �o����", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title1->Location = System::Drawing::Point(12, 24);
			this->title1->Name = L"title1";
			this->title1->Size = System::Drawing::Size(222, 19);
			this->title1->TabIndex = 0;
			this->title1->Text = L"�w���X�P�ADB�i�v���g�O�P�j";
			// 
			// eatSF
			// 
			this->eatSF->Controls->Add(this->eatLv5);
			this->eatSF->Controls->Add(this->eatLv4);
			this->eatSF->Controls->Add(this->eatLv3);
			this->eatSF->Controls->Add(this->eatLv2);
			this->eatSF->Controls->Add(this->eatLv1);
			this->eatSF->Location = System::Drawing::Point(19, 61);
			this->eatSF->Name = L"eatSF";
			this->eatSF->Size = System::Drawing::Size(299, 50);
			this->eatSF->TabIndex = 2;
			this->eatSF->TabStop = false;
			this->eatSF->Text = L"�H�������x";
			// 
			// eatLv5
			// 
			this->eatLv5->AutoSize = true;
			this->eatLv5->Location = System::Drawing::Point(247, 22);
			this->eatLv5->Name = L"eatLv5";
			this->eatLv5->Size = System::Drawing::Size(29, 16);
			this->eatLv5->TabIndex = 0;
			this->eatLv5->Text = L"5";
			this->eatLv5->UseVisualStyleBackColor = true;
			this->eatLv5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::EatLv5_CheckedChanged);
			// 
			// eatLv4
			// 
			this->eatLv4->AutoSize = true;
			this->eatLv4->Location = System::Drawing::Point(192, 22);
			this->eatLv4->Name = L"eatLv4";
			this->eatLv4->Size = System::Drawing::Size(29, 16);
			this->eatLv4->TabIndex = 0;
			this->eatLv4->Text = L"4";
			this->eatLv4->UseVisualStyleBackColor = true;
			this->eatLv4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::EatLv4_CheckedChanged);
			// 
			// eatLv3
			// 
			this->eatLv3->AutoSize = true;
			this->eatLv3->Checked = true;
			this->eatLv3->Location = System::Drawing::Point(142, 22);
			this->eatLv3->Name = L"eatLv3";
			this->eatLv3->Size = System::Drawing::Size(29, 16);
			this->eatLv3->TabIndex = 0;
			this->eatLv3->TabStop = true;
			this->eatLv3->Text = L"3";
			this->eatLv3->UseVisualStyleBackColor = true;
			this->eatLv3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::EatLv3_CheckedChanged);
			// 
			// eatLv2
			// 
			this->eatLv2->AutoSize = true;
			this->eatLv2->Location = System::Drawing::Point(90, 22);
			this->eatLv2->Name = L"eatLv2";
			this->eatLv2->Size = System::Drawing::Size(29, 16);
			this->eatLv2->TabIndex = 0;
			this->eatLv2->Text = L"2";
			this->eatLv2->UseVisualStyleBackColor = true;
			this->eatLv2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::EatLv2_CheckedChanged);
			// 
			// eatLv1
			// 
			this->eatLv1->AutoSize = true;
			this->eatLv1->Location = System::Drawing::Point(35, 22);
			this->eatLv1->Name = L"eatLv1";
			this->eatLv1->Size = System::Drawing::Size(29, 16);
			this->eatLv1->TabIndex = 0;
			this->eatLv1->Text = L"1";
			this->eatLv1->UseVisualStyleBackColor = true;
			this->eatLv1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::EatLv1_CheckedChanged);
			// 
			// sleepSF
			// 
			this->sleepSF->Controls->Add(this->sleepLv5);
			this->sleepSF->Controls->Add(this->sleepLv4);
			this->sleepSF->Controls->Add(this->sleepLv3);
			this->sleepSF->Controls->Add(this->sleepLv2);
			this->sleepSF->Controls->Add(this->sleepLv1);
			this->sleepSF->Location = System::Drawing::Point(19, 117);
			this->sleepSF->Name = L"sleepSF";
			this->sleepSF->Size = System::Drawing::Size(299, 50);
			this->sleepSF->TabIndex = 3;
			this->sleepSF->TabStop = false;
			this->sleepSF->Text = L"���������x";
			// 
			// sleepLv5
			// 
			this->sleepLv5->AutoSize = true;
			this->sleepLv5->Location = System::Drawing::Point(247, 22);
			this->sleepLv5->Name = L"sleepLv5";
			this->sleepLv5->Size = System::Drawing::Size(29, 16);
			this->sleepLv5->TabIndex = 0;
			this->sleepLv5->Text = L"5";
			this->sleepLv5->UseVisualStyleBackColor = true;
			this->sleepLv5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SleepLv5_CheckedChanged);
			// 
			// sleepLv4
			// 
			this->sleepLv4->AutoSize = true;
			this->sleepLv4->Location = System::Drawing::Point(192, 22);
			this->sleepLv4->Name = L"sleepLv4";
			this->sleepLv4->Size = System::Drawing::Size(29, 16);
			this->sleepLv4->TabIndex = 0;
			this->sleepLv4->Text = L"4";
			this->sleepLv4->UseVisualStyleBackColor = true;
			this->sleepLv4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SleepLv4_CheckedChanged);
			// 
			// sleepLv3
			// 
			this->sleepLv3->AutoSize = true;
			this->sleepLv3->Checked = true;
			this->sleepLv3->Location = System::Drawing::Point(142, 22);
			this->sleepLv3->Name = L"sleepLv3";
			this->sleepLv3->Size = System::Drawing::Size(29, 16);
			this->sleepLv3->TabIndex = 0;
			this->sleepLv3->TabStop = true;
			this->sleepLv3->Text = L"3";
			this->sleepLv3->UseVisualStyleBackColor = true;
			this->sleepLv3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SleepLv3_CheckedChanged);
			// 
			// sleepLv2
			// 
			this->sleepLv2->AutoSize = true;
			this->sleepLv2->Location = System::Drawing::Point(90, 22);
			this->sleepLv2->Name = L"sleepLv2";
			this->sleepLv2->Size = System::Drawing::Size(29, 16);
			this->sleepLv2->TabIndex = 0;
			this->sleepLv2->Text = L"2";
			this->sleepLv2->UseVisualStyleBackColor = true;
			this->sleepLv2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SleepLv2_CheckedChanged);
			// 
			// sleepLv1
			// 
			this->sleepLv1->AutoSize = true;
			this->sleepLv1->Location = System::Drawing::Point(35, 22);
			this->sleepLv1->Name = L"sleepLv1";
			this->sleepLv1->Size = System::Drawing::Size(29, 16);
			this->sleepLv1->TabIndex = 0;
			this->sleepLv1->Text = L"1";
			this->sleepLv1->UseVisualStyleBackColor = true;
			this->sleepLv1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SleepLv1_CheckedChanged);
			// 
			// jobSF
			// 
			this->jobSF->Controls->Add(this->jobLv5);
			this->jobSF->Controls->Add(this->jobLv4);
			this->jobSF->Controls->Add(this->jobLv3);
			this->jobSF->Controls->Add(this->jobLv2);
			this->jobSF->Controls->Add(this->jobLv1);
			this->jobSF->Location = System::Drawing::Point(19, 189);
			this->jobSF->Name = L"jobSF";
			this->jobSF->Size = System::Drawing::Size(299, 50);
			this->jobSF->TabIndex = 4;
			this->jobSF->TabStop = false;
			this->jobSF->Text = L"�d�������x";
			// 
			// jobLv5
			// 
			this->jobLv5->AutoSize = true;
			this->jobLv5->Location = System::Drawing::Point(247, 22);
			this->jobLv5->Name = L"jobLv5";
			this->jobLv5->Size = System::Drawing::Size(29, 16);
			this->jobLv5->TabIndex = 0;
			this->jobLv5->Text = L"5";
			this->jobLv5->UseVisualStyleBackColor = true;
			this->jobLv5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::JobLv5_CheckedChanged);
			// 
			// jobLv4
			// 
			this->jobLv4->AutoSize = true;
			this->jobLv4->Location = System::Drawing::Point(192, 22);
			this->jobLv4->Name = L"jobLv4";
			this->jobLv4->Size = System::Drawing::Size(29, 16);
			this->jobLv4->TabIndex = 0;
			this->jobLv4->Text = L"4";
			this->jobLv4->UseVisualStyleBackColor = true;
			this->jobLv4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::JobLv4_CheckedChanged);
			// 
			// jobLv3
			// 
			this->jobLv3->AutoSize = true;
			this->jobLv3->Checked = true;
			this->jobLv3->Location = System::Drawing::Point(142, 22);
			this->jobLv3->Name = L"jobLv3";
			this->jobLv3->Size = System::Drawing::Size(29, 16);
			this->jobLv3->TabIndex = 0;
			this->jobLv3->TabStop = true;
			this->jobLv3->Text = L"3";
			this->jobLv3->UseVisualStyleBackColor = true;
			this->jobLv3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::JobLv3_CheckedChanged);
			// 
			// jobLv2
			// 
			this->jobLv2->AutoSize = true;
			this->jobLv2->Location = System::Drawing::Point(90, 22);
			this->jobLv2->Name = L"jobLv2";
			this->jobLv2->Size = System::Drawing::Size(29, 16);
			this->jobLv2->TabIndex = 0;
			this->jobLv2->Text = L"2";
			this->jobLv2->UseVisualStyleBackColor = true;
			this->jobLv2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::JobLv2_CheckedChanged);
			// 
			// jobLv1
			// 
			this->jobLv1->AutoSize = true;
			this->jobLv1->Location = System::Drawing::Point(35, 22);
			this->jobLv1->Name = L"jobLv1";
			this->jobLv1->Size = System::Drawing::Size(29, 16);
			this->jobLv1->TabIndex = 0;
			this->jobLv1->Text = L"1";
			this->jobLv1->UseVisualStyleBackColor = true;
			this->jobLv1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::JobLv1_CheckedChanged);
			// 
			// hobbySF
			// 
			this->hobbySF->Controls->Add(this->hobLv5);
			this->hobbySF->Controls->Add(this->hobLv4);
			this->hobbySF->Controls->Add(this->hobLv3);
			this->hobbySF->Controls->Add(this->hobLv2);
			this->hobbySF->Controls->Add(this->hobLv1);
			this->hobbySF->Location = System::Drawing::Point(19, 268);
			this->hobbySF->Name = L"hobbySF";
			this->hobbySF->Size = System::Drawing::Size(299, 50);
			this->hobbySF->TabIndex = 5;
			this->hobbySF->TabStop = false;
			this->hobbySF->Text = L"������x";
			// 
			// hobLv5
			// 
			this->hobLv5->AutoSize = true;
			this->hobLv5->Location = System::Drawing::Point(247, 22);
			this->hobLv5->Name = L"hobLv5";
			this->hobLv5->Size = System::Drawing::Size(29, 16);
			this->hobLv5->TabIndex = 0;
			this->hobLv5->Text = L"5";
			this->hobLv5->UseVisualStyleBackColor = true;
			this->hobLv5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::HobLv5_CheckedChanged);
			// 
			// hobLv4
			// 
			this->hobLv4->AutoSize = true;
			this->hobLv4->Location = System::Drawing::Point(192, 22);
			this->hobLv4->Name = L"hobLv4";
			this->hobLv4->Size = System::Drawing::Size(29, 16);
			this->hobLv4->TabIndex = 0;
			this->hobLv4->Text = L"4";
			this->hobLv4->UseVisualStyleBackColor = true;
			this->hobLv4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::HobLv4_CheckedChanged);
			// 
			// hobLv3
			// 
			this->hobLv3->AutoSize = true;
			this->hobLv3->Checked = true;
			this->hobLv3->Location = System::Drawing::Point(142, 22);
			this->hobLv3->Name = L"hobLv3";
			this->hobLv3->Size = System::Drawing::Size(29, 16);
			this->hobLv3->TabIndex = 0;
			this->hobLv3->TabStop = true;
			this->hobLv3->Text = L"3";
			this->hobLv3->UseVisualStyleBackColor = true;
			this->hobLv3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::HobLv3_CheckedChanged);
			// 
			// hobLv2
			// 
			this->hobLv2->AutoSize = true;
			this->hobLv2->Location = System::Drawing::Point(90, 22);
			this->hobLv2->Name = L"hobLv2";
			this->hobLv2->Size = System::Drawing::Size(29, 16);
			this->hobLv2->TabIndex = 0;
			this->hobLv2->Text = L"2";
			this->hobLv2->UseVisualStyleBackColor = true;
			this->hobLv2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::HobLv2_CheckedChanged);
			// 
			// hobLv1
			// 
			this->hobLv1->AutoSize = true;
			this->hobLv1->Location = System::Drawing::Point(35, 22);
			this->hobLv1->Name = L"hobLv1";
			this->hobLv1->Size = System::Drawing::Size(29, 16);
			this->hobLv1->TabIndex = 0;
			this->hobLv1->Text = L"1";
			this->hobLv1->UseVisualStyleBackColor = true;
			this->hobLv1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::HobLv1_CheckedChanged);
			// 
			// exerFS
			// 
			this->exerFS->Controls->Add(this->exerLv5);
			this->exerFS->Controls->Add(this->exerLv4);
			this->exerFS->Controls->Add(this->exerLv3);
			this->exerFS->Controls->Add(this->exerLv2);
			this->exerFS->Controls->Add(this->exerLv1);
			this->exerFS->Location = System::Drawing::Point(19, 345);
			this->exerFS->Name = L"exerFS";
			this->exerFS->Size = System::Drawing::Size(299, 50);
			this->exerFS->TabIndex = 6;
			this->exerFS->TabStop = false;
			this->exerFS->Text = L"�^�������x";
			// 
			// exerLv5
			// 
			this->exerLv5->AutoSize = true;
			this->exerLv5->Location = System::Drawing::Point(247, 22);
			this->exerLv5->Name = L"exerLv5";
			this->exerLv5->Size = System::Drawing::Size(29, 16);
			this->exerLv5->TabIndex = 0;
			this->exerLv5->Text = L"5";
			this->exerLv5->UseVisualStyleBackColor = true;
			this->exerLv5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ExerLv5_CheckedChanged);
			// 
			// exerLv4
			// 
			this->exerLv4->AutoSize = true;
			this->exerLv4->Location = System::Drawing::Point(192, 22);
			this->exerLv4->Name = L"exerLv4";
			this->exerLv4->Size = System::Drawing::Size(29, 16);
			this->exerLv4->TabIndex = 0;
			this->exerLv4->Text = L"4";
			this->exerLv4->UseVisualStyleBackColor = true;
			this->exerLv4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ExerLv4_CheckedChanged);
			// 
			// exerLv3
			// 
			this->exerLv3->AutoSize = true;
			this->exerLv3->Checked = true;
			this->exerLv3->Location = System::Drawing::Point(142, 22);
			this->exerLv3->Name = L"exerLv3";
			this->exerLv3->Size = System::Drawing::Size(29, 16);
			this->exerLv3->TabIndex = 0;
			this->exerLv3->TabStop = true;
			this->exerLv3->Text = L"3";
			this->exerLv3->UseVisualStyleBackColor = true;
			this->exerLv3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ExerLv3_CheckedChanged);
			// 
			// exerLv2
			// 
			this->exerLv2->AutoSize = true;
			this->exerLv2->Location = System::Drawing::Point(90, 22);
			this->exerLv2->Name = L"exerLv2";
			this->exerLv2->Size = System::Drawing::Size(29, 16);
			this->exerLv2->TabIndex = 0;
			this->exerLv2->Text = L"2";
			this->exerLv2->UseVisualStyleBackColor = true;
			this->exerLv2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ExerLv2_CheckedChanged);
			// 
			// exerLv1
			// 
			this->exerLv1->AutoSize = true;
			this->exerLv1->Location = System::Drawing::Point(35, 22);
			this->exerLv1->Name = L"exerLv1";
			this->exerLv1->Size = System::Drawing::Size(29, 16);
			this->exerLv1->TabIndex = 0;
			this->exerLv1->Text = L"1";
			this->exerLv1->UseVisualStyleBackColor = true;
			this->exerLv1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ExerLv1_CheckedChanged);
			// 
			// memobox1
			// 
			this->memobox1->Controls->Add(this->dataGridView1);
			this->memobox1->Controls->Add(this->memo1);
			this->memobox1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->memobox1->Location = System::Drawing::Point(416, 27);
			this->memobox1->Name = L"memobox1";
			this->memobox1->Size = System::Drawing::Size(709, 387);
			this->memobox1->TabIndex = 7;
			this->memobox1->TabStop = false;
			this->memobox1->Text = L"memo";
			// 
			// chart1
			// 
			this->chart1->BorderlineColor = System::Drawing::Color::Black;
			this->chart1->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(18, 102);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(569, 286);
			this->chart1->TabIndex = 10;
			this->chart1->Text = L"Chart1";
			// 
			// memo1
			// 
			this->memo1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->memo1->Location = System::Drawing::Point(26, 34);
			this->memo1->MaxLength = 300;
			this->memo1->Multiline = true;
			this->memo1->Name = L"memo1";
			this->memo1->Size = System::Drawing::Size(656, 334);
			this->memo1->TabIndex = 0;
			this->memo1->TextChanged += gcnew System::EventHandler(this, &MyForm::Memo1_TextChanged);
			// 
			// hozon
			// 
			this->hozon->Location = System::Drawing::Point(72, 460);
			this->hozon->Name = L"hozon";
			this->hozon->Size = System::Drawing::Size(136, 49);
			this->hozon->TabIndex = 8;
			this->hozon->Text = L"�ۑ�";
			this->hozon->UseVisualStyleBackColor = true;
			this->hozon->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// showkai
			// 
			this->showkai->Location = System::Drawing::Point(491, 25);
			this->showkai->Name = L"showkai";
			this->showkai->Size = System::Drawing::Size(96, 31);
			this->showkai->TabIndex = 6;
			this->showkai->Text = L"�Ɖ�";
			this->showkai->UseVisualStyleBackColor = true;
			this->showkai->Click += gcnew System::EventHandler(this, &MyForm::Showkai_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPageAdd);
			this->tabControl1->Controls->Add(this->tabPageShow);
			this->tabControl1->Location = System::Drawing::Point(12, 46);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1179, 558);
			this->tabControl1->TabIndex = 7;
			// 
			// tabPageAdd
			// 
			this->tabPageAdd->Controls->Add(this->buttonsqltest);
			this->tabPageAdd->Controls->Add(this->labelToday);
			this->tabPageAdd->Controls->Add(this->label6);
			this->tabPageAdd->Controls->Add(this->exerFS);
			this->tabPageAdd->Controls->Add(this->memobox1);
			this->tabPageAdd->Controls->Add(this->hozon);
			this->tabPageAdd->Controls->Add(this->eatSF);
			this->tabPageAdd->Controls->Add(this->sleepSF);
			this->tabPageAdd->Controls->Add(this->jobSF);
			this->tabPageAdd->Controls->Add(this->hobbySF);
			this->tabPageAdd->Location = System::Drawing::Point(4, 22);
			this->tabPageAdd->Name = L"tabPageAdd";
			this->tabPageAdd->Padding = System::Windows::Forms::Padding(3);
			this->tabPageAdd->Size = System::Drawing::Size(1171, 532);
			this->tabPageAdd->TabIndex = 0;
			this->tabPageAdd->Text = L"�o�^";
			this->tabPageAdd->UseVisualStyleBackColor = true;
			// 
			// buttonsqltest
			// 
			this->buttonsqltest->Location = System::Drawing::Point(332, 462);
			this->buttonsqltest->Name = L"buttonsqltest";
			this->buttonsqltest->Size = System::Drawing::Size(157, 46);
			this->buttonsqltest->TabIndex = 12;
			this->buttonsqltest->Text = L"button1";
			this->buttonsqltest->UseVisualStyleBackColor = true;
			this->buttonsqltest->Click += gcnew System::EventHandler(this, &MyForm::Buttonsqltest_Click);
			// 
			// labelToday
			// 
			this->labelToday->AutoSize = true;
			this->labelToday->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelToday->Location = System::Drawing::Point(61, 27);
			this->labelToday->Name = L"labelToday";
			this->labelToday->Size = System::Drawing::Size(2, 14);
			this->labelToday->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(17, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 12);
			this->label6->TabIndex = 11;
			this->label6->Text = L"���t �F";
			// 
			// tabPageShow
			// 
			this->tabPageShow->Controls->Add(this->chart1);
			this->tabPageShow->Controls->Add(this->label2);
			this->tabPageShow->Controls->Add(this->label4);
			this->tabPageShow->Controls->Add(this->label3);
			this->tabPageShow->Controls->Add(this->label_avgMan);
			this->tabPageShow->Controls->Add(this->label_maxMan);
			this->tabPageShow->Controls->Add(this->ExRes);
			this->tabPageShow->Controls->Add(this->HobRes);
			this->tabPageShow->Controls->Add(this->label18);
			this->tabPageShow->Controls->Add(this->JobRes);
			this->tabPageShow->Controls->Add(this->label16);
			this->tabPageShow->Controls->Add(this->SleepRes);
			this->tabPageShow->Controls->Add(this->label14);
			this->tabPageShow->Controls->Add(this->ShokujiRes);
			this->tabPageShow->Controls->Add(this->label12);
			this->tabPageShow->Controls->Add(this->labelCarentDate);
			this->tabPageShow->Controls->Add(this->label10);
			this->tabPageShow->Controls->Add(this->label1);
			this->tabPageShow->Controls->Add(this->dateTimePicker3);
			this->tabPageShow->Controls->Add(this->dateTimePicker2);
			this->tabPageShow->Controls->Add(this->groupBox1);
			this->tabPageShow->Controls->Add(this->buttonNext);
			this->tabPageShow->Controls->Add(this->buttonBack);
			this->tabPageShow->Controls->Add(this->showkai);
			this->tabPageShow->Location = System::Drawing::Point(4, 22);
			this->tabPageShow->Name = L"tabPageShow";
			this->tabPageShow->Padding = System::Windows::Forms::Padding(3);
			this->tabPageShow->Size = System::Drawing::Size(1171, 532);
			this->tabPageShow->TabIndex = 1;
			this->tabPageShow->Text = L"�Ɖ�";
			this->tabPageShow->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(235, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 12);
			this->label2->TabIndex = 9;
			this->label2->Text = L"�`";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(265, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 12);
			this->label4->TabIndex = 9;
			this->label4->Text = L"���ϖ����x�@�F";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 12);
			this->label3->TabIndex = 9;
			this->label3->Text = L"�ō������x�@�F";
			// 
			// label_avgMan
			// 
			this->label_avgMan->AutoSize = true;
			this->label_avgMan->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_avgMan->Location = System::Drawing::Point(350, 71);
			this->label_avgMan->Name = L"label_avgMan";
			this->label_avgMan->Size = System::Drawing::Size(130, 14);
			this->label_avgMan->TabIndex = 9;
			this->label_avgMan->Text = L"(���ϖ����x������z��)";
			// 
			// label_maxMan
			// 
			this->label_maxMan->AutoSize = true;
			this->label_maxMan->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_maxMan->Location = System::Drawing::Point(102, 71);
			this->label_maxMan->Name = L"label_maxMan";
			this->label_maxMan->Size = System::Drawing::Size(130, 14);
			this->label_maxMan->TabIndex = 9;
			this->label_maxMan->Text = L"(�ō������x������z��)";
			// 
			// ExRes
			// 
			this->ExRes->AutoSize = true;
			this->ExRes->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ExRes->Location = System::Drawing::Point(86, 487);
			this->ExRes->Name = L"ExRes";
			this->ExRes->Size = System::Drawing::Size(130, 14);
			this->ExRes->TabIndex = 9;
			this->ExRes->Text = L"(�^�������x������z��)";
			// 
			// HobRes
			// 
			this->HobRes->AutoSize = true;
			this->HobRes->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->HobRes->Location = System::Drawing::Point(86, 466);
			this->HobRes->Name = L"HobRes";
			this->HobRes->Size = System::Drawing::Size(130, 14);
			this->HobRes->TabIndex = 9;
			this->HobRes->Text = L"(������x������z��)";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 487);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(75, 12);
			this->label18->TabIndex = 9;
			this->label18->Text = L"�^�������x �F";
			// 
			// JobRes
			// 
			this->JobRes->AutoSize = true;
			this->JobRes->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->JobRes->Location = System::Drawing::Point(86, 445);
			this->JobRes->Name = L"JobRes";
			this->JobRes->Size = System::Drawing::Size(130, 14);
			this->JobRes->TabIndex = 9;
			this->JobRes->Text = L"(�d�������x������z��)";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 466);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(75, 12);
			this->label16->TabIndex = 9;
			this->label16->Text = L"������x �F";
			// 
			// SleepRes
			// 
			this->SleepRes->AutoSize = true;
			this->SleepRes->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SleepRes->Location = System::Drawing::Point(86, 425);
			this->SleepRes->Name = L"SleepRes";
			this->SleepRes->Size = System::Drawing::Size(130, 14);
			this->SleepRes->TabIndex = 9;
			this->SleepRes->Text = L"(���������x������z��)";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 445);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(75, 12);
			this->label14->TabIndex = 9;
			this->label14->Text = L"�d�������x �F";
			// 
			// ShokujiRes
			// 
			this->ShokujiRes->AutoSize = true;
			this->ShokujiRes->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ShokujiRes->Location = System::Drawing::Point(86, 403);
			this->ShokujiRes->Name = L"ShokujiRes";
			this->ShokujiRes->Size = System::Drawing::Size(130, 14);
			this->ShokujiRes->TabIndex = 9;
			this->ShokujiRes->Text = L"(�H�������x������z��)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 425);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(75, 12);
			this->label12->TabIndex = 9;
			this->label12->Text = L"���������x �F";
			// 
			// labelCarentDate
			// 
			this->labelCarentDate->AutoSize = true;
			this->labelCarentDate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelCarentDate->Location = System::Drawing::Point(412, 403);
			this->labelCarentDate->Name = L"labelCarentDate";
			this->labelCarentDate->Size = System::Drawing::Size(129, 14);
			this->labelCarentDate->TabIndex = 9;
			this->labelCarentDate->Text = L"(�J�����g���t������z��)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 403);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 12);
			this->label10->TabIndex = 9;
			this->label10->Text = L"�H�������x �F";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(332, 403);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 12);
			this->label1->TabIndex = 9;
			this->label1->Text = L"�J�����g���t �F";
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Location = System::Drawing::Point(267, 29);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(200, 19);
			this->dateTimePicker3->TabIndex = 8;
			this->dateTimePicker3->ValueChanged += gcnew System::EventHandler(this, &MyForm::DateTimePicker3_ValueChanged);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(18, 29);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 19);
			this->dateTimePicker2->TabIndex = 8;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &MyForm::DateTimePicker2_ValueChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxMemoPage2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->groupBox1->Location = System::Drawing::Point(611, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(554, 442);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"memo";
			// 
			// textBoxMemoPage2
			// 
			this->textBoxMemoPage2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBoxMemoPage2->Enabled = false;
			this->textBoxMemoPage2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxMemoPage2->Location = System::Drawing::Point(19, 22);
			this->textBoxMemoPage2->MaxLength = 300;
			this->textBoxMemoPage2->Multiline = true;
			this->textBoxMemoPage2->Name = L"textBoxMemoPage2";
			this->textBoxMemoPage2->Size = System::Drawing::Size(518, 400);
			this->textBoxMemoPage2->TabIndex = 0;
			// 
			// buttonNext
			// 
			this->buttonNext->Enabled = false;
			this->buttonNext->Location = System::Drawing::Point(445, 449);
			this->buttonNext->Name = L"buttonNext";
			this->buttonNext->Size = System::Drawing::Size(96, 31);
			this->buttonNext->TabIndex = 6;
			this->buttonNext->Text = L"Next";
			this->buttonNext->UseVisualStyleBackColor = true;
			this->buttonNext->Click += gcnew System::EventHandler(this, &MyForm::Next_Click);
			// 
			// buttonBack
			// 
			this->buttonBack->Enabled = false;
			this->buttonBack->Location = System::Drawing::Point(334, 449);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(96, 31);
			this->buttonBack->TabIndex = 6;
			this->buttonBack->Text = L"Back";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &MyForm::ButtonBack_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�ݒ�ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1203, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �ݒ�ToolStripMenuItem
			// 
			this->�ݒ�ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�ݒ�ToolStripMenuItem1 });
			this->�ݒ�ToolStripMenuItem->Name = L"�ݒ�ToolStripMenuItem";
			this->�ݒ�ToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->�ݒ�ToolStripMenuItem->Text = L"�ݒ�";
			// 
			// �ݒ�ToolStripMenuItem1
			// 
			this->�ݒ�ToolStripMenuItem1->Name = L"�ݒ�ToolStripMenuItem1";
			this->�ݒ�ToolStripMenuItem1->Size = System::Drawing::Size(98, 22);
			this->�ݒ�ToolStripMenuItem1->Text = L"�ݒ�";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(100, 112);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 21;
			this->dataGridView1->Size = System::Drawing::Size(525, 168);
			this->dataGridView1->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1203, 616);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->title1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Activated += gcnew System::EventHandler(this, &MyForm::MyForm_Activated);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->eatSF->ResumeLayout(false);
			this->eatSF->PerformLayout();
			this->sleepSF->ResumeLayout(false);
			this->sleepSF->PerformLayout();
			this->jobSF->ResumeLayout(false);
			this->jobSF->PerformLayout();
			this->hobbySF->ResumeLayout(false);
			this->hobbySF->PerformLayout();
			this->exerFS->ResumeLayout(false);
			this->exerFS->PerformLayout();
			this->memobox1->ResumeLayout(false);
			this->memobox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPageAdd->ResumeLayout(false);
			this->tabPageAdd->PerformLayout();
			this->tabPageShow->ResumeLayout(false);
			this->tabPageShow->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		//map
		Dictionary<DateTime, String^>^ localDB;
		//�O���[�o��
		DateTime GW_Date;
		//�J�����g���t
		DateTime^ GW_CurrentDate;

		//�����i�[�p
		String^ GW_Memo;

		//���t�͈͊i�[�p
		List<DateTime>^ GW_DateRange;


		//�p�����[�^�̒l���O���[�o���ɕێ�
	private: System::Void DateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EatLv1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.eatResult = v1;
	}
	private: System::Void EatLv2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.eatResult = v2;
	}
	private: System::Void EatLv3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.eatResult = v3;
	}
	private: System::Void EatLv4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.eatResult = v4;
	}
	private: System::Void EatLv5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.eatResult = v5;
	}
	private: System::Void SleepLv1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.sleepResult = v1;
	}

	private: System::Void SleepLv2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.sleepResult = v2;
	}
	private: System::Void SleepLv3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.sleepResult = v3;
	}
	private: System::Void SleepLv4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.sleepResult = v4;
	}
	private: System::Void SleepLv5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.sleepResult = v5;
	}
	private: System::Void JobLv1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.jobResult = v1;
	}
	private: System::Void JobLv2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.jobResult = v2;
	}
	private: System::Void JobLv3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.jobResult = v3;
	}
	private: System::Void JobLv4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.jobResult = v4;
	}
	private: System::Void JobLv5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.jobResult = v5;
	}
	private: System::Void HobLv1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.hobResult = v1;
	}
	private: System::Void HobLv2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.hobResult = v2;
	}
	private: System::Void HobLv3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.hobResult = v3;
	}
	private: System::Void HobLv4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.hobResult = v4;
	}
	private: System::Void HobLv5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.hobResult = v5;
	}
	private: System::Void ExerLv1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.exerResult = v1;
	}
	private: System::Void ExerLv2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.exerResult = v2;
	}
	private: System::Void ExerLv3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.exerResult = v3;
	}
	private: System::Void ExerLv4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.exerResult = v4;
	}
	private: System::Void ExerLv5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		hdbv.exerResult = v5;
	}
			 /******************************************************************************************
			 ||||||||||||||||||||||||||�����o���{�^���������ꂽ���̏���||||||||||||||||||||||||||||||||
			 ******************************************************************************************/
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		DateTime^ now = gcnew DateTime();
		now = DateTime::Now.Date;
		//�f�[�^�x�[�X�֏����o������
		if (!(localDB->ContainsKey(now->Date))) {
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter("C:\\Users\\yuya tagami\\Desktop\\MHDBTEXT.text", true);
			writer->Write(DateTime::Now.ToShortDateString());
			writer->Write(",");
			writer->Write(hdbv.eatResult.ToString());
			writer->Write(",");
			writer->Write(hdbv.sleepResult.ToString());
			writer->Write(",");
			writer->Write(hdbv.jobResult.ToString());
			writer->Write(",");
			writer->Write(hdbv.hobResult.ToString());
			writer->Write(",");
			writer->Write(hdbv.exerResult.ToString());
			writer->Write("\n");
			writer->Close();

			//�����̏����o������
			//�p�X��ID�ƂȂ���t�p
			String^ passID;
			//�p�X
			String^ pass;
			passID = DateTime::Now.ToShortDateString();
			passID = passID->Replace("/", "");
			pass = pass->Format("C:\\Users\\yuya tagami\\Desktop\\MHDBMEMO{0:C}.text", passID);
			System::IO::StreamWriter^ writerMemo = gcnew System::IO::StreamWriter(pass, true);
			writerMemo->Write(DateTime::Now.ToString());
			writerMemo->Write("\n");
			writerMemo->Write(memo1->Text);
			writerMemo->Write("\n");
			writerMemo->Close();

			//�ۑ����b�Z�[�W���o��
			MessageBox::Show(pass + "��\r\n" + "�H�������x�F" + hdbv.eatResult.ToString() + "\r\n"
				+ "���������x�F" + hdbv.sleepResult.ToString() + "\r\n"
				+ "�d�������x�F" + hdbv.jobResult.ToString() + "\r\n"
				+ "������x�F" + hdbv.hobResult.ToString() + "\r\n"
				+ "�^�������x�F" + hdbv.exerResult.ToString() + "\r\n"
				+ "��������" + "\r\n" + memo1->Text
				+ "��ۑ����܂����B");


			//�L�[�ɂȂ���t���}�b�v�ɑ��݂��Ȃ���΃}�b�v�֒ǉ�

			String^ stdata;
			stdata = hdbv.sleepResult.ToString() + "," + hdbv.jobResult.ToString() + "," + hdbv.hobResult.ToString() + "," + hdbv.exerResult.ToString();
			localDB->Add(now->Date, stdata);

		}
		else {
			String^ Err;
			Err = Err->Format("�������t�̃f�[�^�����ɑ��݂��܂�\n�f�[�^�������e�i���X���Ă��������B");
			MessageBox::Show(Err, "!!ERROR!!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}



	}
			 /***********************************************************************************************************
			 |||||||||||||||||||||||||||||||||����������������ꂽ�ꍇ�̏���||||||||||||||||||||||||||||||||||||||||||||
			 ************************************************************************************************************/
	private: System::Void Memo1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//�O���[�o���Ƀ�����ێ�
		GW_Memo = memo1->Text;
	}

			 /***********************************************************************************************************
			  |||||||||||||||||||||||||||||||||�Ɖ�{�^���������ꂽ�ꍇ�̏���||||||||||||||||||||||||||||||||||||||||||||
			  ************************************************************************************************************/
	private: System::Void Showkai_Click(System::Object^ sender, System::EventArgs^ e) {

		DateTime^ selectedDate;
		int testFlg = 1;

		//dateTimePicker2�̓��t���J�����gDate�ɐݒ�
		for each (KeyValuePair<DateTime, String^> ^ i in localDB) {
			selectedDate = i->Key;
			for each (DateTime p in GW_DateRange) {
				//�ő�ŏ������x��ݒ�
				if (p.Equals(selectedDate)) {
					GW_CurrentDate = selectedDate;
					testFlg = 0;
					break;
				}
			}
			if (testFlg == 0) {
				break;
			}
		}

		//�f�[�^�Z�b�g���\�b�h�̌Ăяo��
		testFlg = setData();

		//�Z�b�g���\�b�h�̖߂�l�ɂ����Next/Back�{�^����L����/����������
		if (testFlg == 0) {
			buttonBack->Enabled = true;
			buttonNext->Enabled = true;
		}
		else {
			buttonBack->Enabled = false;
			buttonNext->Enabled = false;
		}

		/***********************************************************************************************************
		|||||||||||||||||||||||||||||||||�`���[�g�R���g���[���e�X�g|||||||||||||||||||||||||||||||||||||||||||||||||
		************************************************************************************************************/
		chart1.Titles.Clear();

	}

			 /***********************************************************************************************************
			 |||||||||||||||||||||||||||||||||���C���t�H�[�����A�N�e�B�u�ɂȂ������̏�������|||||||||||||||||||||||||||||
			 ************************************************************************************************************/
	private: System::Void MyForm_Activated(System::Object^ sender, System::EventArgs^ e) {

	}

			 /***********************************************************************************************************
			 |||||||||||||||||||||||||||||||||�ŏ����t�͈͂̒l���X�V���ꂽ�ꍇ�̏���|||||||||||||||||||||||||||||||||||||
			 ************************************************************************************************************/
	private: System::Void DateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		//�J�����gDate�̒l���X�V
		DateTime^ LW_Date = gcnew DateTime();
		LW_Date = dateTimePicker2->Value;
		GW_CurrentDate = LW_Date->Date;

		//���t�͈͂̍X�V
		if (dateTimePicker2->Value <= dateTimePicker3->Value) {
			GW_DateRange->Clear();
			DateTime^ LW_Date2 = gcnew DateTime();
			DateTime^ LW_Date3 = gcnew DateTime();
			LW_Date2 = dateTimePicker2->Value;
			LW_Date3 = dateTimePicker3->Value;
			while (LW_Date2->Date != LW_Date3->Date) {
				GW_DateRange->Add(LW_Date2->Date);
				LW_Date2 = LW_Date2->AddDays(1);
			}
			if (!GW_DateRange->Contains(LW_Date3->Date)) {
				GW_DateRange->Add(LW_Date3->Date);
			}
		}
		else {
			MessageBox::Show("���t�͈͂̍ŏ��l���ő�l�������Ă��܂��B", "���͒l�s��", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
			 /***********************************************************************************************************
			 |||||||||||||||||||||||||||||||||Next�{�^���������ꂽ�ꍇ�̏���|||||||||||||||||||||||||||||||||||||||||||||
			 ************************************************************************************************************/
	private: System::Void Next_Click(System::Object^ sender, System::EventArgs^ e) {
		//DB�}�b�v���������A�Y�������ꍇ�A���̃��R�[�h���J�����gDate�ɐݒ�
		DateTime^ selectedDate;
		int testFlg = 1;

		//dateTimePicker2�̓��t���J�����gDate�ɐݒ�
		for each (KeyValuePair<DateTime, String^> ^ i in localDB) {
			selectedDate = i->Key;
			if (GW_CurrentDate->Equals(selectedDate)) {
				if (GW_DateRange->Contains(selectedDate->Date)) {
					testFlg = 0;
					continue;
				}
			}
			if (testFlg == 0) {
				GW_CurrentDate = selectedDate;
				break;
			}
		}
		//�Z�b�g���\�b�h���Ăяo��
		setData();
	}
			 /***********************************************************************************************************
			 |||||||||||||||||||||||||||||||||******************************|||||||||||||||||||||||||||||||||||||||||||||
			 ************************************************************************************************************/
	private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
			 /***********************************************************************************************************
			 |||||||||||||||||||||||||||||||||�t�H�[�������[�h���ꂽ�ꍇ�̏����i���������j|||||||||||||||||||||||||||||||
			 ************************************************************************************************************/
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//�ÓI�C���X�^���X�̐����i�O���[�o���C���X�^���X�j
		//����DB�}�b�v
		localDB = gcnew Dictionary<DateTime, String^>;
		//�����̓ǂݍ��ݗp
		GW_Memo = gcnew String("");

		GW_CurrentDate = gcnew DateTime();

		//���t�͈͊i�[�p
		GW_DateRange = gcnew List<DateTime>;

		//GW_Date�ɖ{�����t��ݒ�
		DateTime^ LW_Date;
		LW_Date = DateTime::Now;
		GW_Date = LW_Date->Date;
		dateTimePicker2->Value = LW_Date->Date;
		dateTimePicker3->Value = LW_Date->Date;
		labelToday->Text = GW_Date.ToShortDateString();

		//�p�����[�^�f�[�^�̏����ǂݍ���
		System::String^ strLine;
		System::String^ strDeliminater = ",";
		array<wchar_t>^ deliminater = strDeliminater->ToCharArray();
		array<System::String^>^ strData;
		DateTime^ checkDate1;

		try {
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("C:\\Users\\yuya tagami\\Desktop\\MHDBTEXT.text");
			if (!reader->EndOfStream) {
				while (reader->Peek() >= 0) {
					strLine = reader->ReadLine();
					strData = strLine->Split(deliminater);
					checkDate1 = DateTime::Parse(strData[0]);

					//�L�[�ɂȂ���t���}�b�v�ɑ��݂��Ȃ���΃}�b�v�֒ǉ�
					if (!localDB->ContainsKey(checkDate1->Date)) {
						String^ stdata;
						stdata = strData[1] + "," + strData[2] + "," + strData[3] + "," + strData[4] + "," + strData[5];
						localDB->Add(checkDate1->Date, stdata);
					}
				}
			}
			reader->Close();
		}
		catch (System::IO::FileNotFoundException^ ex) {
			System::IO::File::AppendAllText("C:\\Users\\yuya tagami\\Desktop\\MHDBTEXT.text", "");
			System::Diagnostics::Debug::WriteLine("---�G���[���b�Z�[�W---\n" + ex->Message);
		}
		//����DB�}�b�v�ɖ{�����t�̃f�[�^�����݂����ꍇ�A�o�^��ʂɃR�����g��}�����A���͕s�ɂ���B
		if (localDB->ContainsKey(GW_Date)) {
			String^ alreadyHereInData = ("�����̃f�[�^�͂��łɓo�^����Ă��܂��B\r\n�C������ꍇ�͍X�V��ʂŏC�����Ă��������B");
			memo1->Enabled = false;
			memo1->Text = alreadyHereInData;
			hozon->Enabled = false;
			eatSF->Enabled = false;
			sleepSF->Enabled = false;
			jobSF->Enabled = false;
			hobbySF->Enabled = false;
			exerFS->Enabled = false;
		}
	}
			 /***********************************************************************************************************
			 |||||||||||||||||||||||||||||||||�Z�b�g���\�b�h|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
			 **�����f�[�^�x�[�X�}�b�v�ɃJ�����gDate�̓��t�����݂����ꍇ�A�p�����[�^���Z�b�g���A������ǂݍ���**
			 ************************************************************************************************************/
	private: int setData() {
		//System::stream�ǂݍ��݂̃e�X�g
		System::String^ strLine;
		System::String^ strDeliminater = ",";
		array<wchar_t>^ deliminater = strDeliminater->ToCharArray();
		array<System::String^>^ strData;
		DateTime^ onlyDate;
		int flg_sonzai = 1;


		//����DB�}�b�v�̓ǂݍ���
		for each (KeyValuePair<DateTime, String^> ^ i in localDB) {
			onlyDate = i->Key;
			//����DB�}�b�v�ɃJ�����gDate�̃f�[�^�����݂���ꍇ�A�p�����[�^���e���x���ɑ�����A���݃t���O���I��
			if (onlyDate->Equals(GW_CurrentDate)) {
				//�J���}��؂�̃p�����[�^���𕪊����A���x���ɃZ�b�g
				strData = i->Value->Split(deliminater);
				labelCarentDate->Text = onlyDate->ToShortDateString();
				ShokujiRes->Text = strData[0];
				SleepRes->Text = strData[1];
				JobRes->Text = strData[2];
				HobRes->Text = strData[3];
				ExRes->Text = strData[4];

				//�f�[�^���݃t���O���I��
				flg_sonzai = 0;
			}
		}

		//memo�̓ǂݍ��ݏ���
		//�f�[�^���݃t���O���I���̏ꍇ�̂݃����f�[�^��ǂݍ���
		if (flg_sonzai == 0) {
			String^ memoStr;
			try {
				String^ passID;
				String^ pass;
				passID = GW_CurrentDate->ToShortDateString();
				passID = passID->Replace("/", "");
				pass = pass->Format("C:\\Users\\yuya tagami\\Desktop\\MHDBMEMO{0:C}.text", passID);
				System::IO::StreamReader^ memoReader = gcnew System::IO::StreamReader(pass);
				if (!memoReader->EndOfStream) {
					strLine = "";
					int count = 0;
					while (memoReader->Peek() >= 0) {
						if (count == 0) {
							strLine = memoReader->ReadLine();
							memoStr = memoStr + strLine;
							count++;
						}
						else {
							strLine = memoReader->ReadLine();
							memoStr = memoStr + "\r\n" + strLine;
						}
					}
					textBoxMemoPage2->Text = memoStr;
				}
				memoReader->Close();
			}
			catch (System::IO::FileNotFoundException^ ex) {
				System::IO::File::AppendAllText("C:\\Users\\yuya tagami\\Desktop\\MHDBTEXT.text", "");
				System::Diagnostics::Debug::WriteLine("---�G���[���b�Z�[�W---\n" + ex->Message);
			}
		}

		//�ő�ŏ������x��ݒ�
		Double resultAvg = 0;
		int countDB = 0;
		label_maxMan->Text = "0";
		Int32 maxIntLabel = int::Parse(label_maxMan->Text);
		if (flg_sonzai == 0) {
			for each (KeyValuePair<DateTime, String^> ^ i in localDB) {
				onlyDate = i->Key;
				Int32 resultMax = 0;

				int LW_EatMan = 0, LW_SleepMan = 0, LW_JobMan = 0, LW_HobMan = 0, LW_ExMan = 0;

				//����DB�}�b�v�ɃJ�����gDate�̃f�[�^�����݂���ꍇ�A�p�����[�^���e���x���ɑ�����A���݃t���O���I��
				if (GW_DateRange->Contains(onlyDate->Date)) {
					//�J���}��؂�̃p�����[�^���𕪊����A���x���ɃZ�b�g
					strData = i->Value->Split(deliminater);
					LW_EatMan = int::Parse(strData[0]);
					LW_SleepMan = int::Parse(strData[1]);
					LW_JobMan = int::Parse(strData[2]);
					LW_HobMan = int::Parse(strData[3]);
					LW_ExMan = int::Parse(strData[4]);

					resultMax = LW_EatMan + LW_SleepMan + LW_JobMan + LW_HobMan + LW_ExMan;
					countDB++;
					resultAvg = resultAvg + resultMax;
					if (GW_CurrentDate->Equals(onlyDate->Date)) {
						label_maxMan->Text = resultMax.ToString();
					}
				}
			}
			resultAvg = resultAvg / countDB;
			label_avgMan->Text = resultAvg.ToString();
			return 0;
		}

		//�J�����gDate�̃f�[�^������DB�}�b�v�ɑ��݂��Ȃ������ꍇ�A�G���[���b�Z�[�W���o�͂��A�G���[�R�[�h���Ăяo�����ɕԂ�
		if (flg_sonzai == 1) {
			String^ Err;
			Err = Err->Format("�I�����ꂽ���t�̃f�[�^�����݂��܂���");
			MessageBox::Show(Err, "!!ERROR!!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return 1;
		}
	}
			 /***********************************************************************************************************
			 |||||||||||||||||||||||||||||||||Back�{�^���������ꂽ�ꍇ�̏���|||||||||||||||||||||||||||||||||||||||||||||
			 ************************************************************************************************************/
	private: System::Void ButtonBack_Click(System::Object^ sender, System::EventArgs^ e) {
		//DB�}�b�v���������A�Y�������ꍇ�A���̃��R�[�h���J�����gDate�ɐݒ�
		DateTime^ selectedDate;
		DateTime^ taihiDate;
		int flg_sonzai = 1;

		//dateTimePicker2�̓��t���J�����gDate�ɐݒ�
		for each (KeyValuePair<DateTime, String^> ^ i in localDB) {
			selectedDate = i->Key;
			if (GW_DateRange->Contains(selectedDate->Date)) {
				if (GW_CurrentDate->Equals(selectedDate)) {
					if (taihiDate != nullptr) {
						GW_CurrentDate = taihiDate;
						break;
					}
				}
			}
			if (GW_DateRange->Contains(selectedDate->Date)) {
				taihiDate = i->Key;
			}
		}
		//�Z�b�g���\�b�h���Ăяo��
		setData();
	}
			 /***********************************************************************************************************
			 |||||||||||||||||||||||||||||||||�ő���t�͈͂̒l���X�V���ꂽ�ꍇ�̏���||||||||||||||||||||||||||||||||||||||
			 ************************************************************************************************************/
	private: System::Void DateTimePicker3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		//�J�����gDate�̒l���X�V
		DateTime^ LW_Date = gcnew DateTime();
		LW_Date = dateTimePicker2->Value;
		GW_CurrentDate = LW_Date->Date;

		//���t�͈͂̍X�V
		if (dateTimePicker2->Value <= dateTimePicker3->Value) {
			GW_DateRange->Clear();
			DateTime^ LW_Date2 = gcnew DateTime();
			DateTime^ LW_Date3 = gcnew DateTime();
			LW_Date2 = dateTimePicker2->Value;
			LW_Date3 = dateTimePicker3->Value;
			while (LW_Date2->Date <= LW_Date3->Date) {
				GW_DateRange->Add(LW_Date2->Date);
				LW_Date2 = LW_Date2->AddDays(1);
			}
			if (!GW_DateRange->Contains(LW_Date3->Date)) {
				GW_DateRange->Add(LW_Date3->Date);
			}
		}
		else {
			MessageBox::Show("���t�͈͂̍ŏ��l���ő�l�������Ă��܂��B", "���͒l�s��", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void Buttonsqltest_Click(System::Object^ sender, System::EventArgs^ e) {
		////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
		////||||||||||||||||**DB�A�g�e�X�g**|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
		//////MySQL�A�g�e�X�g
		//////�T�[�o�[�ڑ�
		//System::String^ connstr = "userid = hdbuser; password = 'password'; database = hdb; Host = 192.168.0.100";
		/////System::String^ connstr = "userid = root; password = ''; database = HealthDB; Host = localhost";
		//MySqlConnection^ conn = gcnew MySqlConnection(connstr);
		//conn->Open();

		////// �f�[�^���i�[����e�[�u���쐬
		//DataTable^ dt = gcnew DataTable();

		////// SQL���Ɛڑ������w�肵�A�f�[�^�A�_�v�^���쐬
		//MySqlDataAdapter^ da = gcnew MySqlDataAdapter("select * from parameters", conn);

		////// �f�[�^�擾
		//da->Fill(dt);

		////// �f�[�^�\��
		//dataGridView1->DataSource = dt;

		////// insert
		////String^ sql = gcnew String("insert into parameters values (20200403,1,1,1,1,1);");
		//String^ sql = gcnew String("");
		//String^ date  = "20300103";
		//String^ eat   = "5";
		//String^ sleep = "5";
		//String^ job   = "5";
		//String^ hob   = "5";
		//String^ excer = "5";
		//sql = sql->Format("insert into parameters values({0:C}, {1:C}, {2:C}, {3:C}, {4:C}, {5:C}); ", date, eat, sleep, job, hob, excer);

		////MySqlDataAdapter^ db = gcnew MySqlDataAdapter("insert into parameters values (20200404,1,1,1,1,1);", conn);
		//MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
		////cmd->Connection->Open();
		//cmd->ExecuteNonQuery();
		////cmd->Connection->Close();

		//MySqlDataAdapter^ dc = gcnew MySqlDataAdapter("select * from parameters", conn);

		////// �f�[�^�擾
		//dt->Clear();
		//dc->Fill(dt);

		////// �f�[�^�\��
		//dataGridView1->DataSource = dt;
		////+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	}
	};
}

