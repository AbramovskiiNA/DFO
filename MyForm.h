#pragma once

#include "Mheader.h"

namespace DFO3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			chartArea2->Name = L"ChartArea2";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->ChartAreas->Add(chartArea2);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 289);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"AFR";
			series2->ChartArea = L"ChartArea2";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"PFR";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(360, 260);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea3->Name = L"ChartArea1";
			chartArea4->Name = L"ChartArea2";
			this->chart2->ChartAreas->Add(chartArea3);
			this->chart2->ChartAreas->Add(chartArea4);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(412, 12);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
			series3->Legend = L"Legend1";
			series3->Name = L"in";
			series4->ChartArea = L"ChartArea2";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
			series4->Legend = L"Legend1";
			series4->Name = L"out";
			this->chart2->Series->Add(series3);
			this->chart2->Series->Add(series4);
			this->chart2->Size = System::Drawing::Size(360, 260);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// chart3
			// 
			chartArea5->Name = L"ChartArea1";
			chartArea6->Name = L"ChartArea2";
			this->chart3->ChartAreas->Add(chartArea5);
			this->chart3->ChartAreas->Add(chartArea6);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(412, 289);
			this->chart3->Name = L"chart3";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Legend = L"Legend1";
			series5->Name = L"AFR";
			series6->ChartArea = L"ChartArea2";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Legend = L"Legend1";
			series6->Name = L"PFR";
			this->chart3->Series->Add(series5);
			this->chart3->Series->Add(series6);
			this->chart3->Size = System::Drawing::Size(360, 260);
			this->chart3->TabIndex = 2;
			this->chart3->Text = L"chart3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(152, 238);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Коэффициенты";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(132, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Ближайшие элементы";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(132, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"бин";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(220, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"м1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(319, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"м2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(113, 210);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(136, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Время расчёта отклика =";
			this->label6->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(33, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(65, 20);
			this->textBox1->TabIndex = 10;
			this->textBox1->Text = L"65536";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(33, 70);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(65, 20);
			this->textBox2->TabIndex = 11;
			this->textBox2->Text = L"-23298";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(33, 96);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(65, 20);
			this->textBox3->TabIndex = 13;
			this->textBox3->Text = L"19180";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(33, 122);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(65, 20);
			this->textBox4->TabIndex = 12;
			this->textBox4->Text = L"-19525";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(33, 148);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(65, 20);
			this->textBox5->TabIndex = 15;
			this->textBox5->Text = L"-17158";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(33, 174);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(65, 20);
			this->textBox6->TabIndex = 14;
			this->textBox6->Text = L"-24179";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 47);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"a0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(14, 73);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"a1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(14, 99);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"a2";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(14, 125);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(19, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"b0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(14, 151);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"b1";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(14, 177);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"b2";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label13->Location = System::Drawing::Point(132, 47);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 22;
			this->label13->Text = L"label13";
			this->label13->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(220, 47);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 23;
			this->label14->Text = L"label14";
			this->label14->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(319, 47);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 24;
			this->label15->Text = L"label15";
			this->label15->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(319, 73);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 13);
			this->label16->TabIndex = 27;
			this->label16->Text = L"label16";
			this->label16->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(220, 73);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 13);
			this->label17->TabIndex = 26;
			this->label17->Text = L"label17";
			this->label17->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(132, 73);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(41, 13);
			this->label18->TabIndex = 25;
			this->label18->Text = L"label18";
			this->label18->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(319, 99);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(41, 13);
			this->label19->TabIndex = 30;
			this->label19->Text = L"label19";
			this->label19->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(220, 99);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(41, 13);
			this->label20->TabIndex = 29;
			this->label20->Text = L"label20";
			this->label20->Visible = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(132, 99);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(41, 13);
			this->label21->TabIndex = 28;
			this->label21->Text = L"label21";
			this->label21->Visible = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(319, 125);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(41, 13);
			this->label22->TabIndex = 33;
			this->label22->Text = L"label22";
			this->label22->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(220, 125);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(41, 13);
			this->label23->TabIndex = 32;
			this->label23->Text = L"label23";
			this->label23->Visible = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(132, 125);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(41, 13);
			this->label24->TabIndex = 31;
			this->label24->Text = L"label24";
			this->label24->Visible = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(319, 151);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(41, 13);
			this->label25->TabIndex = 36;
			this->label25->Text = L"label25";
			this->label25->Visible = false;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(220, 151);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(41, 13);
			this->label26->TabIndex = 35;
			this->label26->Text = L"label26";
			this->label26->Visible = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(132, 151);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(41, 13);
			this->label27->TabIndex = 34;
			this->label27->Text = L"label27";
			this->label27->Visible = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(319, 177);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(41, 13);
			this->label28->TabIndex = 39;
			this->label28->Text = L"label28";
			this->label28->Visible = false;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(220, 177);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(41, 13);
			this->label29->TabIndex = 38;
			this->label29->Text = L"label29";
			this->label29->Visible = false;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(132, 177);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(41, 13);
			this->label30->TabIndex = 37;
			this->label30->Text = L"label30";
			this->label30->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"DFO3";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		button1->Visible = false;

		// Запись коэффициентов
		int coef[6];

		coef[0] = Convert::ToInt32(textBox1->Text);
		coef[1] = Convert::ToInt32(textBox2->Text);
		coef[2] = Convert::ToInt32(textBox3->Text);
		coef[3] = Convert::ToInt32(textBox4->Text);
		coef[4] = Convert::ToInt32(textBox5->Text);
		coef[5] = Convert::ToInt32(textBox6->Text);

		// Сравнение элементов, длительность расчёта отклика
		int nearest_arr[18] = {};
		double t = matches_time(coef, nearest_arr);

		label13->Visible = true;
		label13->Text = Convert::ToString(nearest_arr[0]);
		if (label13->Text == textBox1->Text)
			label13->ForeColor = System::Drawing::Color::Green;
		label14->Visible = true;
		label14->Text = Convert::ToString(nearest_arr[1]);
		if (label14->Text == textBox1->Text)
			label14->ForeColor = System::Drawing::Color::Green;
		label15->Visible = true;
		label15->Text = Convert::ToString(nearest_arr[2]);
		if (label15->Text == textBox1->Text)
			label15->ForeColor = System::Drawing::Color::Green;
		label18->Visible = true;
		label18->Text = Convert::ToString(nearest_arr[3]);
		if (label18->Text == textBox2->Text)
			label18->ForeColor = System::Drawing::Color::Green;
		label17->Visible = true;
		label17->Text = Convert::ToString(nearest_arr[4]);
		if (label17->Text == textBox2->Text)
			label17->ForeColor = System::Drawing::Color::Green;
		label16->Visible = true;
		label16->Text = Convert::ToString(nearest_arr[5]);
		if (label16->Text == textBox2->Text)
			label16->ForeColor = System::Drawing::Color::Green;
		label21->Visible = true;
		label21->Text = Convert::ToString(nearest_arr[6]);
		if (label21->Text == textBox3->Text)
			label21->ForeColor = System::Drawing::Color::Green;
		label20->Visible = true;
		label20->Text = Convert::ToString(nearest_arr[7]);
		if (label20->Text == textBox3->Text)
			label20->ForeColor = System::Drawing::Color::Green;
		label19->Visible = true;
		label19->Text = Convert::ToString(nearest_arr[8]);
		if (label19->Text == textBox3->Text)
			label19->ForeColor = System::Drawing::Color::Green;
		label24->Visible = true;
		label24->Text = Convert::ToString(nearest_arr[9]);
		if (label24->Text == textBox4->Text)
			label24->ForeColor = System::Drawing::Color::Green;
		label23->Visible = true;
		label23->Text = Convert::ToString(nearest_arr[10]);
		if (label23->Text == textBox4->Text)
			label23->ForeColor = System::Drawing::Color::Green;
		label22->Visible = true;
		label22->Text = Convert::ToString(nearest_arr[11]);
		if (label22->Text == textBox4->Text)
			label22->ForeColor = System::Drawing::Color::Green;
		label27->Visible = true;
		label27->Text = Convert::ToString(nearest_arr[12]);
		if (label27->Text == textBox5->Text)
			label27->ForeColor = System::Drawing::Color::Green;
		label26->Visible = true;
		label26->Text = Convert::ToString(nearest_arr[13]);
		if (label26->Text == textBox5->Text)
			label26->ForeColor = System::Drawing::Color::Green;
		label25->Visible = true;
		label25->Text = Convert::ToString(nearest_arr[14]);
		if (label25->Text == textBox5->Text)
			label25->ForeColor = System::Drawing::Color::Green;
		label30->Visible = true;
		label30->Text = Convert::ToString(nearest_arr[15]);
		if (label30->Text == textBox6->Text)
			label30->ForeColor = System::Drawing::Color::Green;
		label29->Visible = true;
		label29->Text = Convert::ToString(nearest_arr[16]);
		if (label29->Text == textBox6->Text)
			label29->ForeColor = System::Drawing::Color::Green;
		label28->Visible = true;
		label28->Text = Convert::ToString(nearest_arr[17]);
		if (label28->Text == textBox6->Text)
			label28->ForeColor = System::Drawing::Color::Green;

		label6->Visible = true;
		label6->Text = "Время расчёта отклика = " + Convert::ToString(t) + " мкс";

		// ЧХ
		double f1 = 0;
		double f2 = 0.489;
		double amp_calc[100] = {};
		double pha_calc[100] = {};
		double amp_meas[100] = {};
		double pha_meas[100] = {};
		double wm[100] = {};
		double x[500] = {};
		double y[500] = {};
		FR_Calculation(coef, &f1, &f2, amp_calc, pha_calc, wm);

		double dw = (f2 - f1) / 100 * 6.283;
		double w;

		chart1->Series["AFR"]->Points->Clear();
		chart1->Series["PFR"]->Points->Clear();
		chart3->Series["AFR"]->Points->Clear();
		chart3->Series["PFR"]->Points->Clear();

		for (int i = 0; i < 100; i++)
		{
			w = dw * (i + 1);

			sin_response(coef, &w, x, y, &amp_meas[i], &pha_meas[i]);

			if (pha_meas[0] > 3.14) pha_meas[0] = pha_meas[0] - 6.283;
			else if (pha_meas[0] < -3.14) pha_meas[0] = pha_meas[0] + 6.283;

			while (abs(pha_meas[i] - pha_meas[i-1]) > 5)
				if (pha_meas[i] > pha_meas[i - 1]) pha_meas[i] = pha_meas[i] - 6.283;
				else if (pha_meas[i] < pha_meas[i - 1]) pha_meas[i] = pha_meas[i] + 6.283;

			chart1->Series["AFR"]->Points->AddXY(wm[i], amp_calc[i]);
			chart1->Series["PFR"]->Points->AddXY(wm[i], pha_calc[i]);
			chart3->Series["AFR"]->Points->AddXY(wm[i], amp_meas[i]);
			chart3->Series["PFR"]->Points->AddXY(wm[i], pha_meas[i]);

			Refresh();

			chart2->Series["in"]->Points->Clear();
			chart2->Series["out"]->Points->Clear();
			for (int n = 0; n < 500; n++)
			{
				chart2->Series["in"]->Points->AddXY(n, x[n]);
				chart2->Series["out"]->Points->AddXY(n, y[n]);
			}
		}
		button1->Visible = true;
	}
};
}
