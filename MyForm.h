#pragma once

namespace mat {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Panel^ panel1;













	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown24;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown23;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown22;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown21;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown20;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown19;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown18;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown17;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown16;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown15;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown14;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown13;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown12;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown11;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown10;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown9;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;




	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button3;

private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::NumericUpDown^ numericUpDown26;
private: System::Windows::Forms::NumericUpDown^ numericUpDown25;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::NumericUpDown^ numericUpDown39;



private: System::Windows::Forms::NumericUpDown^ numericUpDown36;
private: System::Windows::Forms::NumericUpDown^ numericUpDown35;
private: System::Windows::Forms::NumericUpDown^ numericUpDown34;
private: System::Windows::Forms::NumericUpDown^ numericUpDown33;
private: System::Windows::Forms::NumericUpDown^ numericUpDown32;
private: System::Windows::Forms::NumericUpDown^ numericUpDown31;
private: System::Windows::Forms::NumericUpDown^ numericUpDown30;
private: System::Windows::Forms::NumericUpDown^ numericUpDown29;
private: System::Windows::Forms::NumericUpDown^ numericUpDown28;
private: System::Windows::Forms::NumericUpDown^ numericUpDown27;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;




private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
private: System::Windows::Forms::CheckBox^ checkBox4;
private: System::Windows::Forms::CheckBox^ checkBox3;
private: System::Windows::Forms::CheckBox^ checkBox2;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::NumericUpDown^ numericUpDown41;
private: System::Windows::Forms::NumericUpDown^ numericUpDown40;
private: System::Windows::Forms::NumericUpDown^ numericUpDown38;
private: System::Windows::Forms::NumericUpDown^ numericUpDown37;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::CheckBox^ checkBox5;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::NumericUpDown^ numericUpDown42;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::NumericUpDown^ numericUpDown43;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::NumericUpDown^ numericUpDown44;
private: System::Windows::Forms::CheckBox^ checkBox6;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::NumericUpDown^ numericUpDown45;
private: System::Windows::Forms::Button^ button6;



	private:



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint1 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint2 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				90));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series19 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series20 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series21 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series22 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series23 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series24 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series25 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series26 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series27 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown45 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown44 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown26 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown25 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->numericUpDown24 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown23 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown22 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown21 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown20 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown19 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown18 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown17 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown16 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown15 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown14 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown13 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown43 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown42 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown41 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown40 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown38 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown37 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown39 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown36 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown35 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown34 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown33 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown32 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown31 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown30 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown29 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown28 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown27 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
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
			this->tabControl1->Size = System::Drawing::Size(1904, 1041);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1896, 1015);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"графики равнодействующих";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->numericUpDown45);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->numericUpDown44);
			this->panel1->Controls->Add(this->checkBox6);
			this->panel1->Controls->Add(this->checkBox5);
			this->panel1->Controls->Add(this->numericUpDown26);
			this->panel1->Controls->Add(this->numericUpDown25);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->numericUpDown24);
			this->panel1->Controls->Add(this->numericUpDown23);
			this->panel1->Controls->Add(this->numericUpDown22);
			this->panel1->Controls->Add(this->numericUpDown21);
			this->panel1->Controls->Add(this->numericUpDown20);
			this->panel1->Controls->Add(this->numericUpDown19);
			this->panel1->Controls->Add(this->numericUpDown18);
			this->panel1->Controls->Add(this->numericUpDown17);
			this->panel1->Controls->Add(this->numericUpDown16);
			this->panel1->Controls->Add(this->numericUpDown15);
			this->panel1->Controls->Add(this->numericUpDown14);
			this->panel1->Controls->Add(this->numericUpDown13);
			this->panel1->Controls->Add(this->numericUpDown12);
			this->panel1->Controls->Add(this->numericUpDown11);
			this->panel1->Controls->Add(this->numericUpDown10);
			this->panel1->Controls->Add(this->numericUpDown9);
			this->panel1->Controls->Add(this->numericUpDown8);
			this->panel1->Controls->Add(this->numericUpDown7);
			this->panel1->Controls->Add(this->numericUpDown6);
			this->panel1->Controls->Add(this->numericUpDown5);
			this->panel1->Controls->Add(this->numericUpDown4);
			this->panel1->Controls->Add(this->numericUpDown3);
			this->panel1->Controls->Add(this->numericUpDown2);
			this->panel1->Controls->Add(this->numericUpDown1);
			this->panel1->Location = System::Drawing::Point(3, 574);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1866, 414);
			this->panel1->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(272, 375);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(101, 13);
			this->label12->TabIndex = 44;
			this->label12->Text = L"длина локомотива";
			// 
			// numericUpDown45
			// 
			this->numericUpDown45->DecimalPlaces = 1;
			this->numericUpDown45->Location = System::Drawing::Point(275, 391);
			this->numericUpDown45->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 400, 0, 0, 0 });
			this->numericUpDown45->Name = L"numericUpDown45";
			this->numericUpDown45->Size = System::Drawing::Size(120, 20);
			this->numericUpDown45->TabIndex = 43;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(272, 311);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 13);
			this->label11->TabIndex = 42;
			this->label11->Text = L"интервал";
			// 
			// numericUpDown44
			// 
			this->numericUpDown44->DecimalPlaces = 1;
			this->numericUpDown44->Location = System::Drawing::Point(275, 327);
			this->numericUpDown44->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 400, 0, 0, 0 });
			this->numericUpDown44->Name = L"numericUpDown44";
			this->numericUpDown44->Size = System::Drawing::Size(120, 20);
			this->numericUpDown44->TabIndex = 41;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Checked = true;
			this->checkBox6->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox6->Location = System::Drawing::Point(417, 330);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(210, 17);
			this->checkBox6->TabIndex = 40;
			this->checkBox6->Text = L"Сделать заготовку под расстановку";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox6_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(643, 122);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(145, 17);
			this->checkBox5->TabIndex = 39;
			this->checkBox5->Text = L"форсированный режим";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox5_CheckedChanged_1);
			// 
			// numericUpDown26
			// 
			this->numericUpDown26->DecimalPlaces = 4;
			this->numericUpDown26->Location = System::Drawing::Point(507, 122);
			this->numericUpDown26->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown26->Name = L"numericUpDown26";
			this->numericUpDown26->Size = System::Drawing::Size(120, 20);
			this->numericUpDown26->TabIndex = 38;
			this->numericUpDown26->ThousandsSeparator = true;
			// 
			// numericUpDown25
			// 
			this->numericUpDown25->DecimalPlaces = 4;
			this->numericUpDown25->Location = System::Drawing::Point(381, 122);
			this->numericUpDown25->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown25->Name = L"numericUpDown25";
			this->numericUpDown25->Size = System::Drawing::Size(120, 20);
			this->numericUpDown25->TabIndex = 37;
			this->numericUpDown25->ThousandsSeparator = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(266, 13);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Сила тяги в кН, для км/ч: 0, 5, 10, 15, 20, 25, 30, 35";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 86);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(278, 13);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Сила тяги в кН, для км/ч: 40, 45, 50, 55, 50, 65, 70, 75";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(0, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(230, 13);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Сила тяги в кН, для км/ч: 80, 85, 90, 95, 100";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 224);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(499, 13);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Масса локомотива в тоннах, нагрузка на ось в тоннах, число вагонов, число осей, д"
				L"лина вагона";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(88, 334);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 32;
			this->label1->Text = L"бесстыковой";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(0, 329);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 31;
			this->button4->Text = L"другой";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(745, 237);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 23);
			this->button2->TabIndex = 30;
			this->button2->Text = L"печать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(633, 237);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 23);
			this->button1->TabIndex = 29;
			this->button1->Text = L"готов";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableAlwaysIncludeHeaderText;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(17) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11, this->Column12, this->Column13, this->Column14, this->Column15, this->Column16, this->Column17
			});
			this->dataGridView1->Location = System::Drawing::Point(1011, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(852, 408);
			this->dataGridView1->TabIndex = 28;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"V км/ч";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Fк Н";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"w0\' Н/кН";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"W0\' Н";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"w0\" Н/кН";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"W0\" H";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"W0 H";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Fк-W0 H";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"fк-w0 Н/кН";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"w0x\' Н/кН";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"W0x\' H";
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"W0x H";
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"w0x Н/кН";
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"phiкр";
			this->Column14->Name = L"Column14";
			this->Column14->ReadOnly = true;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Bт Н/кН";
			this->Column15->Name = L"Column15";
			this->Column15->ReadOnly = true;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"0,5Вт Н/кН";
			this->Column16->Name = L"Column16";
			this->Column16->ReadOnly = true;
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"0,5Вт+w0x Н/кН";
			this->Column17->Name = L"Column17";
			this->Column17->ReadOnly = true;
			// 
			// numericUpDown24
			// 
			this->numericUpDown24->DecimalPlaces = 4;
			this->numericUpDown24->Location = System::Drawing::Point(507, 240);
			this->numericUpDown24->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown24->Name = L"numericUpDown24";
			this->numericUpDown24->Size = System::Drawing::Size(120, 20);
			this->numericUpDown24->TabIndex = 23;
			this->numericUpDown24->ThousandsSeparator = true;
			// 
			// numericUpDown23
			// 
			this->numericUpDown23->DecimalPlaces = 4;
			this->numericUpDown23->Location = System::Drawing::Point(381, 240);
			this->numericUpDown23->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown23->Name = L"numericUpDown23";
			this->numericUpDown23->Size = System::Drawing::Size(120, 20);
			this->numericUpDown23->TabIndex = 22;
			this->numericUpDown23->ThousandsSeparator = true;
			// 
			// numericUpDown22
			// 
			this->numericUpDown22->DecimalPlaces = 4;
			this->numericUpDown22->Location = System::Drawing::Point(255, 240);
			this->numericUpDown22->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown22->Name = L"numericUpDown22";
			this->numericUpDown22->Size = System::Drawing::Size(120, 20);
			this->numericUpDown22->TabIndex = 21;
			this->numericUpDown22->ThousandsSeparator = true;
			// 
			// numericUpDown21
			// 
			this->numericUpDown21->DecimalPlaces = 4;
			this->numericUpDown21->Location = System::Drawing::Point(129, 240);
			this->numericUpDown21->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown21->Name = L"numericUpDown21";
			this->numericUpDown21->Size = System::Drawing::Size(120, 20);
			this->numericUpDown21->TabIndex = 20;
			this->numericUpDown21->ThousandsSeparator = true;
			// 
			// numericUpDown20
			// 
			this->numericUpDown20->DecimalPlaces = 4;
			this->numericUpDown20->Location = System::Drawing::Point(3, 240);
			this->numericUpDown20->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown20->Name = L"numericUpDown20";
			this->numericUpDown20->Size = System::Drawing::Size(120, 20);
			this->numericUpDown20->TabIndex = 19;
			this->numericUpDown20->ThousandsSeparator = true;
			// 
			// numericUpDown19
			// 
			this->numericUpDown19->DecimalPlaces = 4;
			this->numericUpDown19->Location = System::Drawing::Point(255, 122);
			this->numericUpDown19->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown19->Name = L"numericUpDown19";
			this->numericUpDown19->Size = System::Drawing::Size(120, 20);
			this->numericUpDown19->TabIndex = 18;
			this->numericUpDown19->ThousandsSeparator = true;
			// 
			// numericUpDown18
			// 
			this->numericUpDown18->DecimalPlaces = 4;
			this->numericUpDown18->Location = System::Drawing::Point(129, 122);
			this->numericUpDown18->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown18->Name = L"numericUpDown18";
			this->numericUpDown18->Size = System::Drawing::Size(120, 20);
			this->numericUpDown18->TabIndex = 17;
			this->numericUpDown18->ThousandsSeparator = true;
			// 
			// numericUpDown17
			// 
			this->numericUpDown17->DecimalPlaces = 4;
			this->numericUpDown17->Location = System::Drawing::Point(3, 122);
			this->numericUpDown17->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown17->Name = L"numericUpDown17";
			this->numericUpDown17->Size = System::Drawing::Size(120, 20);
			this->numericUpDown17->TabIndex = 16;
			this->numericUpDown17->ThousandsSeparator = true;
			// 
			// numericUpDown16
			// 
			this->numericUpDown16->DecimalPlaces = 4;
			this->numericUpDown16->Location = System::Drawing::Point(885, 63);
			this->numericUpDown16->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown16->Name = L"numericUpDown16";
			this->numericUpDown16->Size = System::Drawing::Size(120, 20);
			this->numericUpDown16->TabIndex = 15;
			this->numericUpDown16->ThousandsSeparator = true;
			// 
			// numericUpDown15
			// 
			this->numericUpDown15->DecimalPlaces = 4;
			this->numericUpDown15->Location = System::Drawing::Point(759, 63);
			this->numericUpDown15->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown15->Name = L"numericUpDown15";
			this->numericUpDown15->Size = System::Drawing::Size(120, 20);
			this->numericUpDown15->TabIndex = 14;
			this->numericUpDown15->ThousandsSeparator = true;
			// 
			// numericUpDown14
			// 
			this->numericUpDown14->DecimalPlaces = 4;
			this->numericUpDown14->Location = System::Drawing::Point(633, 63);
			this->numericUpDown14->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown14->Name = L"numericUpDown14";
			this->numericUpDown14->Size = System::Drawing::Size(120, 20);
			this->numericUpDown14->TabIndex = 13;
			this->numericUpDown14->ThousandsSeparator = true;
			// 
			// numericUpDown13
			// 
			this->numericUpDown13->DecimalPlaces = 4;
			this->numericUpDown13->Location = System::Drawing::Point(507, 63);
			this->numericUpDown13->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown13->Name = L"numericUpDown13";
			this->numericUpDown13->Size = System::Drawing::Size(120, 20);
			this->numericUpDown13->TabIndex = 12;
			this->numericUpDown13->ThousandsSeparator = true;
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->DecimalPlaces = 4;
			this->numericUpDown12->Location = System::Drawing::Point(381, 63);
			this->numericUpDown12->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(120, 20);
			this->numericUpDown12->TabIndex = 11;
			this->numericUpDown12->ThousandsSeparator = true;
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->DecimalPlaces = 4;
			this->numericUpDown11->Location = System::Drawing::Point(255, 63);
			this->numericUpDown11->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(120, 20);
			this->numericUpDown11->TabIndex = 10;
			this->numericUpDown11->ThousandsSeparator = true;
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->DecimalPlaces = 4;
			this->numericUpDown10->Location = System::Drawing::Point(129, 63);
			this->numericUpDown10->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(120, 20);
			this->numericUpDown10->TabIndex = 9;
			this->numericUpDown10->ThousandsSeparator = true;
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->DecimalPlaces = 4;
			this->numericUpDown9->Location = System::Drawing::Point(3, 63);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(120, 20);
			this->numericUpDown9->TabIndex = 8;
			this->numericUpDown9->ThousandsSeparator = true;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->DecimalPlaces = 4;
			this->numericUpDown8->Location = System::Drawing::Point(885, 3);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(120, 20);
			this->numericUpDown8->TabIndex = 7;
			this->numericUpDown8->ThousandsSeparator = true;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->DecimalPlaces = 4;
			this->numericUpDown7->Location = System::Drawing::Point(759, 3);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(120, 20);
			this->numericUpDown7->TabIndex = 6;
			this->numericUpDown7->ThousandsSeparator = true;
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->DecimalPlaces = 4;
			this->numericUpDown6->Location = System::Drawing::Point(633, 3);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(120, 20);
			this->numericUpDown6->TabIndex = 5;
			this->numericUpDown6->ThousandsSeparator = true;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->DecimalPlaces = 4;
			this->numericUpDown5->Location = System::Drawing::Point(507, 3);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(120, 20);
			this->numericUpDown5->TabIndex = 4;
			this->numericUpDown5->ThousandsSeparator = true;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->DecimalPlaces = 4;
			this->numericUpDown4->Location = System::Drawing::Point(381, 3);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 20);
			this->numericUpDown4->TabIndex = 3;
			this->numericUpDown4->ThousandsSeparator = true;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->DecimalPlaces = 4;
			this->numericUpDown3->Location = System::Drawing::Point(255, 3);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 20);
			this->numericUpDown3->TabIndex = 2;
			this->numericUpDown3->ThousandsSeparator = true;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->DecimalPlaces = 4;
			this->numericUpDown2->Location = System::Drawing::Point(129, 3);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 1;
			this->numericUpDown2->ThousandsSeparator = true;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->DecimalPlaces = 4;
			this->numericUpDown1->Location = System::Drawing::Point(3, 3);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->ThousandsSeparator = true;
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->AxisX->LineWidth = 4;
			chartArea1->AxisX->Maximum = 100;
			chartArea1->AxisX->Minimum = -100;
			chartArea1->AxisX->Title = L"F тяги Н/кн";
			chartArea1->AxisY->Crossing = 0;
			chartArea1->AxisY->LineWidth = 4;
			chartArea1->AxisY->Maximum = 100;
			chartArea1->AxisY->Minimum = 0;
			chartArea1->AxisY->Title = L"V км/ч ";
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(6, 6);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->LegendText = L"тяга";
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->LegendText = L"выбег";
			series2->Name = L"Series2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->LegendText = L"торможение";
			series3->Name = L"Series3";
			series4->BorderWidth = 4;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Color = System::Drawing::Color::Black;
			series4->IsVisibleInLegend = false;
			series4->Legend = L"Legend1";
			series4->Name = L"Series4";
			series4->Points->Add(dataPoint1);
			series4->Points->Add(dataPoint2);
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(1884, 610);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Visible = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->chart2);
			this->tabPage2->Controls->Add(this->panel2);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(1896, 1015);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"тяговые";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(84, 896);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"печать";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// chart2
			// 
			chartArea2->AxisX->Interval = 1000;
			chartArea2->AxisX->LineWidth = 3;
			chartArea2->AxisX->Minimum = 0;
			chartArea2->AxisX->Title = L"X, м";
			chartArea2->AxisX2->LineWidth = 0;
			chartArea2->AxisY->Interval = 5;
			chartArea2->AxisY->LineWidth = 3;
			chartArea2->AxisY->Minimum = -30;
			chartArea2->AxisY->Title = L"V, км/ч";
			chartArea2->AxisY2->LineWidth = 3;
			chartArea2->AxisY2->Title = L"t, с";
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(8, 13);
			this->chart2->Name = L"chart2";
			series5->BorderWidth = 3;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Legend = L"Legend1";
			series5->LegendText = L"Кривая скорости";
			series5->Name = L"Series1";
			series6->BorderWidth = 2;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Legend = L"Legend1";
			series6->LegendText = L"Кривая времени";
			series6->Name = L"Series2";
			series6->YAxisType = System::Windows::Forms::DataVisualization::Charting::AxisType::Secondary;
			series7->BorderWidth = 3;
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series7->Color = System::Drawing::Color::Black;
			series7->IsVisibleInLegend = false;
			series7->Legend = L"Legend1";
			series7->Name = L"Series3";
			series8->BorderWidth = 3;
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series8->Color = System::Drawing::Color::Black;
			series8->IsVisibleInLegend = false;
			series8->Legend = L"Legend1";
			series8->Name = L"Series4";
			series9->BorderWidth = 3;
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series9->Color = System::Drawing::Color::Black;
			series9->IsVisibleInLegend = false;
			series9->Legend = L"Legend1";
			series9->Name = L"Series5";
			series10->BorderWidth = 3;
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series10->Color = System::Drawing::Color::Black;
			series10->IsVisibleInLegend = false;
			series10->Legend = L"Legend1";
			series10->Name = L"Series6";
			series11->BorderWidth = 3;
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series11->Color = System::Drawing::Color::Black;
			series11->IsVisibleInLegend = false;
			series11->Legend = L"Legend1";
			series11->Name = L"Series7";
			series12->BorderWidth = 3;
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series12->Color = System::Drawing::Color::Black;
			series12->IsVisibleInLegend = false;
			series12->Legend = L"Legend1";
			series12->Name = L"Series8";
			series13->BorderWidth = 3;
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series13->Color = System::Drawing::Color::Black;
			series13->IsVisibleInLegend = false;
			series13->Legend = L"Legend1";
			series13->Name = L"Series9";
			series14->BorderWidth = 3;
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series14->Color = System::Drawing::Color::Black;
			series14->IsVisibleInLegend = false;
			series14->Legend = L"Legend1";
			series14->Name = L"Series10";
			series15->BorderWidth = 3;
			series15->ChartArea = L"ChartArea1";
			series15->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series15->Color = System::Drawing::Color::Black;
			series15->IsVisibleInLegend = false;
			series15->Legend = L"Legend1";
			series15->Name = L"Series11";
			series16->BorderWidth = 3;
			series16->ChartArea = L"ChartArea1";
			series16->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series16->Color = System::Drawing::Color::Black;
			series16->IsVisibleInLegend = false;
			series16->Legend = L"Legend1";
			series16->Name = L"Series12";
			series17->BorderWidth = 3;
			series17->ChartArea = L"ChartArea1";
			series17->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series17->Color = System::Drawing::Color::Black;
			series17->IsVisibleInLegend = false;
			series17->Legend = L"Legend1";
			series17->Name = L"Series13";
			series18->BorderWidth = 3;
			series18->ChartArea = L"ChartArea1";
			series18->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series18->Color = System::Drawing::Color::Black;
			series18->IsVisibleInLegend = false;
			series18->Legend = L"Legend1";
			series18->Name = L"Series14";
			series19->BorderWidth = 3;
			series19->ChartArea = L"ChartArea1";
			series19->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series19->Color = System::Drawing::Color::Black;
			series19->IsVisibleInLegend = false;
			series19->Legend = L"Legend1";
			series19->Name = L"Series15";
			series20->BorderWidth = 3;
			series20->ChartArea = L"ChartArea1";
			series20->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series20->Color = System::Drawing::Color::Black;
			series20->IsVisibleInLegend = false;
			series20->Legend = L"Legend1";
			series20->Name = L"Series16";
			series21->BorderWidth = 3;
			series21->ChartArea = L"ChartArea1";
			series21->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series21->Color = System::Drawing::Color::Black;
			series21->IsVisibleInLegend = false;
			series21->Legend = L"Legend1";
			series21->Name = L"Series17";
			series22->BorderWidth = 3;
			series22->ChartArea = L"ChartArea1";
			series22->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series22->Color = System::Drawing::Color::Black;
			series22->IsVisibleInLegend = false;
			series22->Legend = L"Legend1";
			series22->Name = L"Series18";
			series23->BorderWidth = 3;
			series23->ChartArea = L"ChartArea1";
			series23->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series23->Color = System::Drawing::Color::Black;
			series23->IsVisibleInLegend = false;
			series23->Legend = L"Legend1";
			series23->Name = L"Series19";
			series24->BorderWidth = 3;
			series24->ChartArea = L"ChartArea1";
			series24->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series24->Color = System::Drawing::Color::Black;
			series24->IsVisibleInLegend = false;
			series24->Legend = L"Legend1";
			series24->Name = L"Series20";
			series25->BorderWidth = 3;
			series25->ChartArea = L"ChartArea1";
			series25->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series25->Color = System::Drawing::Color::Black;
			series25->IsVisibleInLegend = false;
			series25->Legend = L"Legend1";
			series25->Name = L"Series21";
			this->chart2->Series->Add(series5);
			this->chart2->Series->Add(series6);
			this->chart2->Series->Add(series7);
			this->chart2->Series->Add(series8);
			this->chart2->Series->Add(series9);
			this->chart2->Series->Add(series10);
			this->chart2->Series->Add(series11);
			this->chart2->Series->Add(series12);
			this->chart2->Series->Add(series13);
			this->chart2->Series->Add(series14);
			this->chart2->Series->Add(series15);
			this->chart2->Series->Add(series16);
			this->chart2->Series->Add(series17);
			this->chart2->Series->Add(series18);
			this->chart2->Series->Add(series19);
			this->chart2->Series->Add(series20);
			this->chart2->Series->Add(series21);
			this->chart2->Series->Add(series22);
			this->chart2->Series->Add(series23);
			this->chart2->Series->Add(series24);
			this->chart2->Series->Add(series25);
			this->chart2->Size = System::Drawing::Size(1880, 741);
			this->chart2->TabIndex = 5;
			this->chart2->Text = L"chart2";
			this->chart2->Visible = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->numericUpDown43);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->numericUpDown42);
			this->panel2->Controls->Add(this->checkBox4);
			this->panel2->Controls->Add(this->checkBox3);
			this->panel2->Controls->Add(this->checkBox2);
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Controls->Add(this->numericUpDown41);
			this->panel2->Controls->Add(this->numericUpDown40);
			this->panel2->Controls->Add(this->numericUpDown38);
			this->panel2->Controls->Add(this->numericUpDown37);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->numericUpDown39);
			this->panel2->Controls->Add(this->numericUpDown36);
			this->panel2->Controls->Add(this->numericUpDown35);
			this->panel2->Controls->Add(this->numericUpDown34);
			this->panel2->Controls->Add(this->numericUpDown33);
			this->panel2->Controls->Add(this->numericUpDown32);
			this->panel2->Controls->Add(this->numericUpDown31);
			this->panel2->Controls->Add(this->numericUpDown30);
			this->panel2->Controls->Add(this->numericUpDown29);
			this->panel2->Controls->Add(this->numericUpDown28);
			this->panel2->Controls->Add(this->numericUpDown27);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(84, 778);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1035, 100);
			this->panel2->TabIndex = 4;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(423, 76);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 13);
			this->label10->TabIndex = 28;
			this->label10->Text = L"длина кривой";
			// 
			// numericUpDown43
			// 
			this->numericUpDown43->DecimalPlaces = 3;
			this->numericUpDown43->Location = System::Drawing::Point(505, 74);
			this->numericUpDown43->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			this->numericUpDown43->Name = L"numericUpDown43";
			this->numericUpDown43->Size = System::Drawing::Size(120, 20);
			this->numericUpDown43->TabIndex = 27;
			this->numericUpDown43->ThousandsSeparator = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(208, 76);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 13);
			this->label8->TabIndex = 26;
			this->label8->Text = L"начало кривой";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// numericUpDown42
			// 
			this->numericUpDown42->DecimalPlaces = 3;
			this->numericUpDown42->Location = System::Drawing::Point(295, 74);
			this->numericUpDown42->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			this->numericUpDown42->Name = L"numericUpDown42";
			this->numericUpDown42->Size = System::Drawing::Size(120, 20);
			this->numericUpDown42->TabIndex = 25;
			this->numericUpDown42->ThousandsSeparator = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->Location = System::Drawing::Point(542, 60);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 24;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(676, 60);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 23;
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(799, 60);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 22;
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(930, 60);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 21;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// numericUpDown41
			// 
			this->numericUpDown41->DecimalPlaces = 3;
			this->numericUpDown41->Location = System::Drawing::Point(883, 34);
			this->numericUpDown41->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			this->numericUpDown41->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, System::Int32::MinValue });
			this->numericUpDown41->Name = L"numericUpDown41";
			this->numericUpDown41->Size = System::Drawing::Size(120, 20);
			this->numericUpDown41->TabIndex = 20;
			this->numericUpDown41->ThousandsSeparator = true;
			// 
			// numericUpDown40
			// 
			this->numericUpDown40->DecimalPlaces = 3;
			this->numericUpDown40->Location = System::Drawing::Point(757, 34);
			this->numericUpDown40->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			this->numericUpDown40->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, System::Int32::MinValue });
			this->numericUpDown40->Name = L"numericUpDown40";
			this->numericUpDown40->Size = System::Drawing::Size(120, 20);
			this->numericUpDown40->TabIndex = 19;
			this->numericUpDown40->ThousandsSeparator = true;
			// 
			// numericUpDown38
			// 
			this->numericUpDown38->DecimalPlaces = 3;
			this->numericUpDown38->Location = System::Drawing::Point(883, 5);
			this->numericUpDown38->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown38->Name = L"numericUpDown38";
			this->numericUpDown38->Size = System::Drawing::Size(120, 20);
			this->numericUpDown38->TabIndex = 18;
			this->numericUpDown38->ThousandsSeparator = true;
			// 
			// numericUpDown37
			// 
			this->numericUpDown37->DecimalPlaces = 3;
			this->numericUpDown37->Location = System::Drawing::Point(757, 5);
			this->numericUpDown37->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown37->Name = L"numericUpDown37";
			this->numericUpDown37->Size = System::Drawing::Size(120, 20);
			this->numericUpDown37->TabIndex = 17;
			this->numericUpDown37->ThousandsSeparator = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 76);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(71, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"максималка";
			// 
			// numericUpDown39
			// 
			this->numericUpDown39->Location = System::Drawing::Point(80, 74);
			this->numericUpDown39->Name = L"numericUpDown39";
			this->numericUpDown39->Size = System::Drawing::Size(120, 20);
			this->numericUpDown39->TabIndex = 15;
			this->numericUpDown39->ThousandsSeparator = true;
			// 
			// numericUpDown36
			// 
			this->numericUpDown36->DecimalPlaces = 3;
			this->numericUpDown36->Location = System::Drawing::Point(631, 34);
			this->numericUpDown36->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			this->numericUpDown36->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, System::Int32::MinValue });
			this->numericUpDown36->Name = L"numericUpDown36";
			this->numericUpDown36->Size = System::Drawing::Size(120, 20);
			this->numericUpDown36->TabIndex = 11;
			this->numericUpDown36->ThousandsSeparator = true;
			// 
			// numericUpDown35
			// 
			this->numericUpDown35->DecimalPlaces = 3;
			this->numericUpDown35->Location = System::Drawing::Point(505, 34);
			this->numericUpDown35->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			this->numericUpDown35->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, System::Int32::MinValue });
			this->numericUpDown35->Name = L"numericUpDown35";
			this->numericUpDown35->Size = System::Drawing::Size(120, 20);
			this->numericUpDown35->TabIndex = 10;
			this->numericUpDown35->ThousandsSeparator = true;
			// 
			// numericUpDown34
			// 
			this->numericUpDown34->DecimalPlaces = 3;
			this->numericUpDown34->Location = System::Drawing::Point(379, 34);
			this->numericUpDown34->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			this->numericUpDown34->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, System::Int32::MinValue });
			this->numericUpDown34->Name = L"numericUpDown34";
			this->numericUpDown34->Size = System::Drawing::Size(120, 20);
			this->numericUpDown34->TabIndex = 9;
			this->numericUpDown34->ThousandsSeparator = true;
			// 
			// numericUpDown33
			// 
			this->numericUpDown33->DecimalPlaces = 3;
			this->numericUpDown33->Location = System::Drawing::Point(253, 34);
			this->numericUpDown33->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			this->numericUpDown33->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, System::Int32::MinValue });
			this->numericUpDown33->Name = L"numericUpDown33";
			this->numericUpDown33->Size = System::Drawing::Size(120, 20);
			this->numericUpDown33->TabIndex = 8;
			this->numericUpDown33->ThousandsSeparator = true;
			// 
			// numericUpDown32
			// 
			this->numericUpDown32->DecimalPlaces = 3;
			this->numericUpDown32->Location = System::Drawing::Point(127, 34);
			this->numericUpDown32->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			this->numericUpDown32->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, System::Int32::MinValue });
			this->numericUpDown32->Name = L"numericUpDown32";
			this->numericUpDown32->Size = System::Drawing::Size(120, 20);
			this->numericUpDown32->TabIndex = 7;
			this->numericUpDown32->ThousandsSeparator = true;
			// 
			// numericUpDown31
			// 
			this->numericUpDown31->DecimalPlaces = 3;
			this->numericUpDown31->Location = System::Drawing::Point(631, 5);
			this->numericUpDown31->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown31->Name = L"numericUpDown31";
			this->numericUpDown31->Size = System::Drawing::Size(120, 20);
			this->numericUpDown31->TabIndex = 6;
			this->numericUpDown31->ThousandsSeparator = true;
			// 
			// numericUpDown30
			// 
			this->numericUpDown30->DecimalPlaces = 3;
			this->numericUpDown30->Location = System::Drawing::Point(505, 5);
			this->numericUpDown30->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown30->Name = L"numericUpDown30";
			this->numericUpDown30->Size = System::Drawing::Size(120, 20);
			this->numericUpDown30->TabIndex = 5;
			this->numericUpDown30->ThousandsSeparator = true;
			// 
			// numericUpDown29
			// 
			this->numericUpDown29->DecimalPlaces = 3;
			this->numericUpDown29->Location = System::Drawing::Point(379, 5);
			this->numericUpDown29->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown29->Name = L"numericUpDown29";
			this->numericUpDown29->Size = System::Drawing::Size(120, 20);
			this->numericUpDown29->TabIndex = 4;
			this->numericUpDown29->ThousandsSeparator = true;
			// 
			// numericUpDown28
			// 
			this->numericUpDown28->DecimalPlaces = 3;
			this->numericUpDown28->Location = System::Drawing::Point(253, 5);
			this->numericUpDown28->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown28->Name = L"numericUpDown28";
			this->numericUpDown28->Size = System::Drawing::Size(120, 20);
			this->numericUpDown28->TabIndex = 3;
			this->numericUpDown28->ThousandsSeparator = true;
			// 
			// numericUpDown27
			// 
			this->numericUpDown27->DecimalPlaces = 3;
			this->numericUpDown27->Location = System::Drawing::Point(127, 5);
			this->numericUpDown27->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown27->Name = L"numericUpDown27";
			this->numericUpDown27->Size = System::Drawing::Size(120, 20);
			this->numericUpDown27->TabIndex = 2;
			this->numericUpDown27->ThousandsSeparator = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 34);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Уклон участка";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 5);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Длина участка";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1896, 772);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(3, 778);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"счет";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->chart3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1896, 1015);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"заготовка под расстановку";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(8, 825);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 1;
			this->button6->Text = L"печать";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// chart3
			// 
			chartArea3->AxisX->Interval = 100;
			chartArea3->AxisX->LineWidth = 3;
			chartArea3->AxisX->Minimum = 0;
			chartArea3->AxisY->LineWidth = 3;
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(3, 3);
			this->chart3->Name = L"chart3";
			series26->ChartArea = L"ChartArea1";
			series26->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series26->LabelBorderWidth = 2;
			series26->Legend = L"Legend1";
			series26->LegendText = L"Хвост 1-го";
			series26->Name = L"Series1";
			series27->ChartArea = L"ChartArea1";
			series27->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series27->LabelBorderWidth = 2;
			series27->Legend = L"Legend1";
			series27->LegendText = L"Голова 2-го";
			series27->Name = L"Series2";
			this->chart3->Series->Add(series26);
			this->chart3->Series->Add(series27);
			this->chart3->Size = System::Drawing::Size(1890, 816);
			this->chart3->TabIndex = 0;
			this->chart3->Text = L"chart3";
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"тяговые не хаха";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private:
	System::Void MyForm_load(System::Object^ sender, System::EventArgs^ e);
	System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox5_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
};
}
