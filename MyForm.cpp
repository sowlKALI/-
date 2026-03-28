#include "MyForm.h"
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace System;
using namespace System::Windows::Forms;
bool forc = false;
double arr[21][17];
double Fk[21];// = { 678100,631000,584700,567000,549100,538000,526600,517000,508000,500000,492200,483900,471800,436600,372600,319900,277300,243500,217000, 195000, 179700 };
//double Fk[19];
bool type = false;
bool konf = true;
bool zag = true;
//double P = 192, q0 = 15, Nv = 58, No = 4, Lv = 14, Llok=35;
double P, q0, Nv, No, Lv, Llok;
static void one_column() {
	arr[0][0] = 0.0;
	for (int i = 1; i <= 20; i++) {
		arr[i][0] = arr[i - 1][0] + 5.0;
	}
}
static void two_column() {
	for (int i = 0; i <= 20; i++) {
		arr[i][1] = Fk[i];
	}
}
static void three_column() {
	for (int i = 0; i <= 20; i++) {
		if (type == false) {
			arr[i][2] = 1.9 + 0.008 * arr[i][0] + 0.00024 * arr[i][0] * arr[i][0];
		}
		if (type == true) {
			arr[i][2] = 1.9 + 0.01 * arr[i][0] + 0.0003 * arr[i][0] * arr[i][0];
		}
	}
}
static void four_column() {
	for (int i = 0; i <= 20; i++) {
		arr[i][3] = arr[i][2] * P * 9.8;
	}
}
static void five_column() {
	for (int i = 0; i <= 20; i++) {
		if (type == false) {
			arr[i][4] = 0.53 + ((3.5 + 0.074 * arr[i][0] + 0.0022 * arr[i][0] * arr[i][0]) / q0);
		}
		if (type == true) {
			arr[i][4] = 0.53 + ((3.6 + 0.08 * arr[i][0] + 0.0028 * arr[i][0] * arr[i][0]) / q0);
		}
	}
}
static void six_column() {
	if (forc == true) {
		for (int i = 0; i <= 20; i++) {
			arr[i][5] = arr[i][4] * 1500 * 9.8;
		}
	}
	else {
		for (int i = 0; i <= 20; i++) {
			arr[i][5] = arr[i][4] * No * q0 * Nv * 9.8;
		}
	}
}
static void seven_column() {
	for (int i = 0; i <= 20; i++) {
		arr[i][6] = arr[i][3] + arr[i][5];
	}
}
static void eight_column() {
	for (int i = 0; i <= 20; i++) {
		arr[i][7] = arr[i][1] - arr[i][6];
	}
}
static void nine_column() {
	if (forc == true) {
		for (int i = 0; i <= 20; i++) {
			arr[i][8] = ((arr[i][1] + arr[i][6]) / (1500 * 9.8 + P * 9.8));
		}
	}
	else {
		for (int i = 0; i <= 20; i++) {
			arr[i][8] = ((arr[i][1] + arr[i][6]) / (No * q0 * Nv * 9.8 + P * 9.8));
		}
	}
}
static void ten_column() {
	for (int i = 0; i <= 20; i++) {
		if (type == false) {
			arr[i][9] = 2.4 + 0.009 * arr[i][0] + 0.0003 * arr[i][0] * arr[i][0];
		}
		if (type == true) {
			arr[i][9] = 2.4 + 0.011 * arr[i][0] + 0.0003 * arr[i][0] * arr[i][0];
		}
	}
}
static void eleven_column() {
	for (int i = 0; i <= 20; i++) {
		arr[i][10] = arr[i][9] * P * 9.8;
	}
}
static void twelve_column() {
	for (int i = 0; i <= 20; i++) {
		arr[i][11] = arr[i][10] + arr[i][5];
	}
}
static void twelveplusone_column() {
	if (forc == true) {
		for (int i = 0; i <= 20; i++) {
			arr[i][12] = arr[i][11] / ((P * 9.8) + (1500 * 9.8));
		}
	}
	else {
		for (int i = 0; i <= 20; i++) {
			arr[i][12] = arr[i][11] / ((P * 9.8) + (No * q0 * Nv * 9.8));
		}
	}
}
static void twelveplustwo_column() {
	for (int i = 0; i <= 20; i++) {
		arr[i][13] = (0.27 * (arr[i][0] + 100)) / (5 * arr[i][0] + 100);
	}
}
static void fifteen_column() {
	for (int i = 0; i <= 20; i++) {
		arr[i][14] = arr[i][13] * 330;
	}
}
static void sixteen_column() {
	for (int i = 0; i <= 20; i++) {
		arr[i][15] = arr[i][14] / 2;
	}
}
static void seventeen_column() {
	for (int i = 0; i <= 20; i++) {
		arr[i][16] = arr[i][15] + arr[i][12];
	}
}
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	mat::MyForm form;
	Application::Run(% form);
}

System::Void mat::MyForm::MyForm_load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void mat::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Fk[0] = (double)numericUpDown1->Value;
	Fk[1] = (double)numericUpDown2->Value;
	Fk[2] = (double)numericUpDown3->Value;
	Fk[3] = (double)numericUpDown4->Value;
	Fk[4] = (double)numericUpDown5->Value;
	Fk[5] = (double)numericUpDown6->Value;
	Fk[6] = (double)numericUpDown7->Value;
	Fk[7] = (double)numericUpDown8->Value;
	Fk[8] = (double)numericUpDown9->Value;
	Fk[9] = (double)numericUpDown10->Value;
	Fk[10] = (double)numericUpDown11->Value;
	Fk[11] = (double)numericUpDown12->Value;
	Fk[12] = (double)numericUpDown13->Value;
	Fk[13] = (double)numericUpDown14->Value;
	Fk[14] = (double)numericUpDown15->Value;
	Fk[15] = (double)numericUpDown16->Value;
	Fk[16] = (double)numericUpDown17->Value;
	Fk[17] = (double)numericUpDown18->Value;
	Fk[18] = (double)numericUpDown19->Value;
	Fk[19] = (double)numericUpDown25->Value;
	Fk[20] = (double)numericUpDown26->Value;
	P = (double)numericUpDown20->Value;
	q0 = (double)numericUpDown21->Value;
	Nv = (double)numericUpDown22->Value;
	No = (double)numericUpDown23->Value;
	Lv = (double)numericUpDown24->Value;
	//P, q0, Nv, No, Lv;
	one_column();
	two_column();
	three_column();
	four_column();
	five_column();
	six_column();
	seven_column();
	eight_column();
	nine_column();
	ten_column();
	eleven_column();
	twelve_column();
	twelveplusone_column();
	twelveplustwo_column();
	fifteen_column();
	sixteen_column();
	seventeen_column();
	for (int i = 0; i <= 20; i++)
	{
		dataGridView1->Rows->Add();
	}
	for (int i = 0; i <= 16; i++)
	{
		for (int j = 0; j <= 20; j++)
		{
			dataGridView1->Rows[j]->Cells[i]->Value = arr[j][i].ToString();
		}
	}
	this->chart1->Series[0]->Points->Clear();
	this->chart1->Series[1]->Points->Clear();
	this->chart1->Series[2]->Points->Clear();
	for (int i = 0; i <= 20; i++) {
		this->chart1->Series[0]->Points->AddXY(arr[i][8] * (-1), arr[i][0]);
		this->chart1->Series[1]->Points->AddXY(arr[i][12], arr[i][0]);
		this->chart1->Series[2]->Points->AddXY(arr[i][16], arr[i][0]);
		this->chart1->Series[3]->Points->AddXY(0, arr[i][0]);
	}
	this->chart1->Series[3]->Points->AddXY(0, arr[20][0] + 20);
	this->chart1->Visible = true;
	this->button3->Enabled = true;
	return System::Void();
}

System::Void mat::MyForm::printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e)
{
	return System::Void();
}
double get_f(double V, int Konfiguration) {
	int index = -1;
	if (Konfiguration == 0) {
		for (int i = 0; i <= 20; i++) {
			if (arr[i][0] == V) {
				return arr[i][8];
			}
		}
		for (int i = 0; i <= 20; i++) {
			if (arr[i][0] > V) {
				index = i;
				break;
			}
		}
		if (index == -1) {
			return arr[20][8];
		}
		if (index == 0) {
			return arr[0][8];
		}
		if (index == -1) {
			return arr[20][8];
		}
		if (index == 0) {
			return arr[0][8];
		}
		return (arr[index][8] + arr[index - 1][8]) / 2.0;
	}
	if (Konfiguration == 1) {
		for (int i = 0; i <= 20; i++) {
			if (arr[i][0] == V) {
				return arr[i][12];
			}
		}
		for (int i = 0; i <= 20; i++) {
			if (arr[i][0] > V) {
				index = i;
				break;
			}
		}
		if (index == -1) {
			return arr[20][12];
		}
		if (index == 0) {
			return arr[0][12];
		}
		if (index == -1) {
			return arr[20][12];
		}
		if (index == 0) {
			return arr[0][12];
		}
		return (arr[index][12] + arr[index - 1][12]) / 2.0;
	}
	if (Konfiguration == 2) {
		for (int i = 0; i <= 20; i++) {
			if (arr[i][0] == V) {
				return arr[i][16];
			}
		}
		for (int i = 0; i <= 20; i++) {
			if (arr[i][0] > V) {
				index = i;
				break;
			}
		}
		if (index == -1) {
			return arr[20][16];
		}
		if (index == 0) {
			return arr[0][16];
		}
		if (index == -1) {
			return arr[20][16];
		}
		if (index == 0) {
			return arr[0][16];
		}
		return (arr[index][16] + arr[index - 1][16]) / 2.0;
	}
}
double braking_distance(double V, double uklon) {
	double S = 0.0;
	double v = V;
	double dt = 0.000278;
	while (v > 0.0) {
		double a = 12.2 * (get_f(v, 2) * 9.81 * (-1) - uklon);
		if (v + a * dt <= 0.0) {
			double t_stop = v / (-a);
			S += v * t_stop + 0.5 * a * t_stop * t_stop;
			break;
		}
		double v1 = v + a * dt;
		double S1 = v * dt + 0.5 * a * dt * dt;
		S += S1;
		v = v1;
	}
	return S;
}
System::Void mat::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	chart2->Visible = true;
	int n = 3, max=0;
	double len[7];// = { 1200,800,900, 1700,1300,2300 };
	double uklon[7];// = { 0,3,2,0,-1,0 };
	//int kr[3] = { 1200,800,800 };
	double L=0;
	double interval = 0;
	len[0] = (double)numericUpDown27->Value;
	len[1] = (double)numericUpDown28->Value;
	len[2] = (double)numericUpDown29->Value;
	if (this->checkBox4->Checked == true) {
		len[3] = (double)numericUpDown30->Value;
		uklon[3] = (double)numericUpDown35->Value;
		n++;
	}
	if (this->checkBox3->Checked == true) {
		len[4] = (double)numericUpDown31->Value;
		uklon[4] = (double)numericUpDown36->Value;
		n++;
	}
	if (this->checkBox2->Checked == true) {
		len[5] = (double)numericUpDown37->Value;
		uklon[5] = (double)numericUpDown40->Value;
		n++;
	}
	if (this->checkBox1->Checked == true) {
		len[6] = (double)numericUpDown38->Value;
		uklon[6] = (double)numericUpDown41->Value;
		n++;
	}
	//len[3] = (double)numericUpDown30->Value;
	//len[4] = (double)numericUpDown37->Value;
	//len[5] = (double)numericUpDown38->Value;
	uklon[0] = (double)numericUpDown32->Value;
	uklon[1] = (double)numericUpDown33->Value;
	uklon[2] = (double)numericUpDown34->Value;
	//uklon[3] = (double)numericUpDown35->Value;
	//uklon[4] = (double)numericUpDown40->Value;
	//uklon[5] = (double)numericUpDown41->Value;
	//if (konf == true) {
		//len[4] = (double)numericUpDown31->Value;
		//uklon[4] = (double)numericUpDown36->Value;
	//}
	max = (int)numericUpDown39->Value;
	interval=(double)numericUpDown44->Value;
	Llok = (double)numericUpDown45->Value;
	//kr[0]= (double)numericUpDown37->Value;
	//kr[1] = (double)numericUpDown38->Value;
	//kr[2] = (double)numericUpDown40->Value;

	//len[5] = kr[0];
	//len[6] = kr[2];
	for (int i = 0; i < n;i++) {
		L += len[i]/1000;
	}
	double Length = Lv * Nv + Llok;
	chart3->ChartAreas[0]->AxisX->Maximum = L * 1000 + Length;
	//chart2->Series[18]->Points->Clear();
	double S = L, S1 = 0, V = 0, V1 = 0, uk_har=uklon[0], S_tor=0;
	int type = 0, uk=0, uk_Kord=0;
	//for (double i = 0; i += 0.000278;) {
		//if (V >= max) {
			//std::cout << S0 - S << "\n";
			//break;
		//}
		//S1 = S + V * (-0.000278) + ((0.000278 * 0.000278) / 2) * (12.2 * (get_f(V, 2) * 9.81 * (-1) - 2));
		//V1 = V + (12.2 * (get_f(V, 2) * 9.81 * (-1) - 2)) * (-0.000278) ;
		//V = V1;
		//S = S1;
		//chart2->Series[18]->Points->AddXY(S * 1000, V);
		//std::cout << S << "\n" << V << "\n";
	//}
	V = 0; S = 0;
	if (forc == true) {
		V = max;
	}
	//std::cout <<"\n"<<uklon[0]<<"-sdsa"<<"\n";
	chart2->Series[0]->Points->Clear();
	chart2->Series[1]->Points->Clear();

	chart2->Series[2]->Points->Clear();
	chart2->Series[18]->Points->Clear();

	chart2->Series[3]->Points->Clear();
	chart2->Series[4]->Points->Clear();
	chart2->Series[5]->Points->Clear();
	chart2->Series[6]->Points->Clear();
	chart2->Series[7]->Points->Clear();
	chart2->Series[8]->Points->Clear();
	chart2->Series[9]->Points->Clear();
	chart2->Series[10]->Points->Clear();

	chart2->Series[11]->Points->Clear();
	chart2->Series[12]->Points->Clear();
	chart2->Series[13]->Points->Clear();
	chart2->Series[14]->Points->Clear();
	chart2->Series[15]->Points->Clear();
	chart2->Series[16]->Points->Clear();
	chart2->Series[17]->Points->Clear();

	chart3->Series[0]->Points->Clear();
	chart3->Series[1]->Points->Clear();
	
	double tmp = L - S_tor;
	for (double i = 0; i+= 0.000278;) {
		if (S >= L) {
			goto NXT;
		}
		if (S*1000 >= uk_Kord+len[uk]) {
			if (uk < n - 1) {
				uk++;
				uk_har = uklon[uk];
			}
			else {
				uk_har = uklon[uk]; 
			}
		}
		if (type == 0) {
			if (V >= max) {
				type = 1;
				//return System::Void();
			}
			else {
				S1 = S + V * 0.000278 + ((0.000278 * 0.000278) / 2) * (12.2 * (get_f(V, 0) * 9.81 - uk_har));
				V1 = V + (12.2 * (get_f(V, 0) * 9.81 - uk_har)) * 0.000278; //исправить
				V = V1;
				S = S1;
				//std::cout << V << "\n" << S << "\n";
				chart2->Series[0]->Points->AddXY(S*1000, V); // будем делать через chart
				chart2->Series[1]->Points->AddXY(S*1000, i * 3600);
			}
			if (forc != true) {
				double S_rem = L - S;                 
				double brake = braking_distance(V, uk_har);   
				if (S_rem <= brake)
				{
					type = 2;
					chart2->Series[0]->Points->AddXY(S * 1000, V);
				}
			}

		}
		if (type == 1) {
			if (V <= max-10) {
				type = 0;
				//return System::Void();
			}else{
				S1 = S + V * 0.000278 + ((0.000278 * 0.000278) / 2) * (12.2 * (get_f(V, type) * 9.81 * (-1) - uk_har));
				V1 = V + (12.2 * (get_f(V, type) * 9.81 * (-1) - uk_har)) * 0.000278;
				V = V1;
				S = S1;
				//std::cout << V << "\n" << S << "\n";
				chart2->Series[0]->Points->AddXY(S * 1000, V); // будем делать через chart
				chart2->Series[1]->Points->AddXY(S * 1000, i * 3600);
			}
			if (forc != true) {
				double S_rem = L - S;                 
				double brake = braking_distance(V, uk_har);   
				if (S_rem <= brake)
				{
					type = 2;
					chart2->Series[0]->Points->AddXY(S * 1000, V);
				}
			}
		}
		if (type == 2) {
			if (V <= 0) {
				goto NXT;
			}
			else {
				S1 = S + V * 0.000278 + ((0.000278 * 0.000278) / 2) * (12.2 * (get_f(V, type) * 9.81 * (-1) - uk_har));
				V1 = V + (12.2 * (get_f(V, type) * 9.81 * (-1) - uk_har)) * 0.000278;
				V = V1;
				S = S1;
				//std::cout << V << "\n" << S << "\n";
				chart2->Series[0]->Points->AddXY(S * 1000, V); // будем делать через chart
				chart2->Series[1]->Points->AddXY(S * 1000, i * 3600);
			}

		}
		chart3->Series[0]->Points->AddXY(S * 1000 - Length/2, i * 3600);
		chart3->Series[1]->Points->AddXY(S * 1000 + Length / 2, i * 3600 + interval*60);
	}
NXT:
	chart2->Series[2]->Points->AddXY(0, -20);
	chart2->Series[2]->Points->AddXY(L*1000, -20);
	chart2->Series[18]->Points->AddXY(0, 0);
	chart2->Series[18]->Points->AddXY(L*1000, 0);
	int tmp_l = 0;
	for (int i = 0; i < n; i++) {
		chart2->Series[i+3]->Points->AddXY(tmp_l, 0);
		chart2->Series[i+3]->Points->AddXY(tmp_l, -20);
		std::cout << len[i] << "\n" << i + 3 << "\n";
		tmp_l += len[i];
		if (uklon[i] > 0) {
			chart2->Series[i + 11]->Points->AddXY(tmp_l-len[i], -20);
			chart2->Series[i + 11]->Points->AddXY(tmp_l, 0);
		}
		if (uklon[i] == 0) {
			chart2->Series[i + 11]->Points->AddXY(tmp_l - len[i], -10);
			chart2->Series[i + 11]->Points->AddXY(tmp_l, -10);
		}
		if (uklon[i] < 0) {
			chart2->Series[i + 11]->Points->AddXY(tmp_l - len[i], 0);
			chart2->Series[i + 11]->Points->AddXY(tmp_l, -20);
		}
	}
	double kr = (double)numericUpDown42->Value;
	double L_kr = (double)numericUpDown43->Value;
	chart2->Series[19]->Points->Clear();
	chart2->Series[20]->Points->Clear();
	chart2->Series[20]->Points->AddXY(0, -30);
	chart2->Series[20]->Points->AddXY(kr, -30);
	chart2->Series[19]->Points->AddXY(kr, -30);
	chart2->Series[19]->Points->AddXY(kr+ L_kr/2, -25);
	chart2->Series[19]->Points->AddXY(kr + L_kr , -30);
	chart2->Series[20]->Points->AddXY(kr + L_kr, -30);
	chart2->Series[20]->Points->AddXY(L*1000, -30);
	return System::Void();
}

System::Void mat::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (konf == true) {
		konf = false;
		numericUpDown36->Enabled = false;
		numericUpDown31->Enabled = false;
	}
	else {
		konf = true;
		numericUpDown36->Enabled = true;
		numericUpDown31->Enabled = true;
	}
	return System::Void();
}

System::Void mat::MyForm::checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (this->checkBox4->Checked == true) {
		numericUpDown30->Enabled = true;
		numericUpDown35->Enabled = true;
	}
	else {
		numericUpDown30->Enabled = false;
		numericUpDown35->Enabled = false;
	}
	
	return System::Void();
}

System::Void mat::MyForm::checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (this->checkBox3->Checked == true) {
		numericUpDown31->Enabled = true;
		numericUpDown36->Enabled = true;
	}
	else {
		numericUpDown31->Enabled = false;
		numericUpDown36->Enabled = false;
	}

	return System::Void();
}

System::Void mat::MyForm::checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (this->checkBox2->Checked == true) {
		numericUpDown37->Enabled = true;
		numericUpDown40->Enabled = true;
	}
	else {
		numericUpDown37->Enabled = false;
		numericUpDown40->Enabled = false;
	}

	return System::Void();
}

System::Void mat::MyForm::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (this->checkBox1->Checked == true) {
		numericUpDown38->Enabled = true;
		numericUpDown41->Enabled = true;
	}
	else {
		numericUpDown38->Enabled = false;
		numericUpDown41->Enabled = false;
	}

	return System::Void();
}

System::Void mat::MyForm::button5_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	chart2->Printing->PageSetup();
	chart2->Printing->PrintPreview();
	return System::Void();
}

System::Void mat::MyForm::checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void mat::MyForm::checkBox5_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e)
{
	if (forc == false) {
		forc = true;
		
	}
	else {
		forc = false;
		
	}
	return System::Void();
}

System::Void mat::MyForm::checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox6->Checked == true) {
		numericUpDown44->Enabled = true;
		numericUpDown45->Enabled = true;
		button6->Visible = true;
		chart3->Visible = true;
		zag = true;
	}
	if (checkBox6->Checked == false) {
		numericUpDown44->Enabled = false;
		numericUpDown45->Enabled = false;
		button6->Visible = false;
		chart3->Visible = false;
		zag = false;
	}
	return System::Void();
}

System::Void mat::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	chart3->Printing->PageSetup();
	chart3->Printing->PrintPreview();
	return System::Void();
}

System::Void mat::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	chart1->Printing->PageSetup();
	chart1->Printing->PrintPreview();
	//this->dataGridView1->Location = System::Drawing::Point(0, 0);
	//this->dataGridView1->Size = System::Drawing::Size(1920, 1080);
	//this->label2->Visible = false;
	//this->button4->Visible = false;
	return System::Void();
}

System::Void mat::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (type == false) {
		type = true;
		this->label1->Text = "«веньевой";
	}
	else {
		type = false;
		this->label1->Text = "Ѕесстыковой";
	}
	return System::Void();
}