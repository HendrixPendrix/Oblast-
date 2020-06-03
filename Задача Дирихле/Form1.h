#pragma once
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include<vector>
using namespace std;
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^  tabPage1;
	protected:
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TabControl^  tabControl1;

	protected:






















































	protected:

































	protected:

























	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->textBox30);
			this->tabPage1->Controls->Add(this->textBox29);
			this->tabPage1->Controls->Add(this->textBox26);
			this->tabPage1->Controls->Add(this->textBox25);
			this->tabPage1->Controls->Add(this->textBox12);
			this->tabPage1->Controls->Add(this->textBox11);
			this->tabPage1->Controls->Add(this->textBox10);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(950, 508);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тестовая задача";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(8, 306);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(195, 23);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Оптимальное значение";
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click_1);
			// 
			// textBox30
			// 
			this->textBox30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->textBox30->Location = System::Drawing::Point(794, 211);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(149, 20);
			this->textBox30->TabIndex = 33;
			// 
			// textBox29
			// 
			this->textBox29->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox29->Location = System::Drawing::Point(794, 175);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(149, 20);
			this->textBox29->TabIndex = 32;
			this->textBox29->Text = L"Точность решения:";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(135, 280);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(68, 20);
			this->textBox26->TabIndex = 15;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(7, 280);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(125, 20);
			this->textBox25->TabIndex = 14;
			this->textBox25->Text = L"Параметр w";
			this->textBox25->TextChanged += gcnew System::EventHandler(this, &Form1::textBox25_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox12->Location = System::Drawing::Point(794, 141);
			this->textBox12->Margin = System::Windows::Forms::Padding(2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(149, 20);
			this->textBox12->TabIndex = 13;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox12_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox11->Location = System::Drawing::Point(796, 71);
			this->textBox11->Margin = System::Windows::Forms::Padding(2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(147, 20);
			this->textBox11->TabIndex = 12;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &Form1::textBox11_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox10->Location = System::Drawing::Point(794, 107);
			this->textBox10->Margin = System::Windows::Forms::Padding(2);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(149, 18);
			this->textBox10->TabIndex = 11;
			this->textBox10->Text = L"Точность на выходе:";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox10_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox9->Location = System::Drawing::Point(794, 37);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(149, 20);
			this->textBox9->TabIndex = 10;
			this->textBox9->Text = L"Число затраченных шагов:";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(7, 245);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(125, 20);
			this->textBox8->TabIndex = 9;
			this->textBox8->Text = L"Точность метода";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(7, 211);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(125, 20);
			this->textBox7->TabIndex = 8;
			this->textBox7->Text = L"Ограничение шагов";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(7, 175);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(125, 20);
			this->textBox6->TabIndex = 7;
			this->textBox6->Text = L"Число разбиений по y:";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(7, 141);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(125, 20);
			this->textBox5->TabIndex = 6;
			this->textBox5->Text = L"Число разбиений по x:";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(135, 245);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(68, 20);
			this->textBox4->TabIndex = 5;
			this->textBox4->Text = L"1e-008";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(135, 211);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(68, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"500";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(135, 175);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(68, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"3";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(135, 141);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(68, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"3";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(13, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 90);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Вариант 10\r\n∆u(x,y)=-f(x,y)\t\t\r\nx∈(a,b), y∈((c,d)\r\na=1   b=0   c=0   d=1\r\nuтест(x,"
				L"y)=exp(xy)\r\n";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(7, 390);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Решение";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::Button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(228, 10);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(562, 494);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(958, 534);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->Tag = L"";
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::tabControl1_SelectedIndexChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(962, 536);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Решение задачи Дирихле для уравнения Пуассона";
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		double test(double x, double y)
		{
			return exp(x*y);
		}
		double func(double x, double y)
		{
			return cosh(x*x*y);
		}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		const double PI = 3.141592653589793238463;
		double w = Convert::ToDouble(textBox26->Text);
		int Nmax = Convert::ToDouble(textBox3->Text);
		int S = 0;
		double eps = Convert::ToDouble(textBox4->Text);
		double eps_max = 0;
		double eps_cur = 0;
		double a2, k2, h2;
		double l;
		int n = Convert::ToDouble(textBox1->Text);
		int m = Convert::ToDouble(textBox2->Text);
		this->dataGridView1->ColumnCount = n + 2;
		this->dataGridView1->RowCount = m + 2;
		double v[200][200];
		double f[200][200];
		double a = -1.0, b = 0.0, c = 0.0, d = 1.0;
		int i, j;
		int p, r;
		double v_old;
		double v_new;
		int A = (n + 1) / 2;
		int B = (m + 1) / 2;
		bool ff = false;
		double h = (b - a) / n;
		double k = (d - c) / m;
		if ((w >= 2) || (w <= 0))
		{
			return;
		}
		h2 = (n / (b - a)) * (n / (b - a));
		k2 = (m / (d - c)) * (m / (d - c));
		a2 = -2 * (h2 + k2);
		//x=i*h-1
		//y=j*k
		for (int j = 0; j < m + 1; j++)
		{
			for (int i = 0; i < n + 1; i++)
			{
				f[i][j] = (pow((i*h - 1), 2) + pow(j*k, 2))*exp((i*h - 1)*(j*k));
			}
		}
		//1
		for (int j = 0; j < B; j++)
		{
			v[0][j] = exp(-j * k);
			v[n][j] = 1;
		}
		for (int i = 0; i < n + 1; i++)
		{
			v[i][0] = 1;
		}
		for (int i = A; i < n + 1; i++)
		{
			v[i][B] = exp((i*h - 1)*0.5);
		}
		//2
		for (int j = B; j < m + 1; j++)
		{
			v[0][j] = exp(-j * k);
			v[A][j] = exp(0.5*j*k);
		}
		for (int i = 0; i <= A; i++)
		{
			v[i][m] = exp(i*h - 1);
		}

		//for (j = 1; j < m; j++)
		//{
		//	for (i = 1; i < n; i++)
		//	{
		//		if ((j > B && i > A))
		//		{
		//			continue;
		//		}
		//		v[i][j] = test(i*h - 1, j*k);
		//	}
		//}
		while (!ff)
		{
			eps_max = 0;
			for (j = 1; j < m; j++)
			{
				for (i = 1; i < n; i++)
				{
					if ((j > B && i > A))
					{
						continue;
					}
					v_old = v[i][j];
					v_new = -w * ((h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1])));
					v_new = v_new + (1 - w) * a2 * v[i][j] + w * f[i][j];;
					v_new = v_new / a2;
					eps_cur = fabs(v_old - v_new);
					if (eps_cur > eps_max)
					{
						eps_max = eps_cur;
					}
					v[i][j] = v_new;

				}
			}
			S++;
			if (eps_max < eps || S >= Nmax)
			{
				ff = true;
			}
		}
		double x = 0, y = 0;
		double maxeps = 0;
		double cureps = 0;
		for (j = 0; j < m + 1; j++)
		{
			for (i = 0; i < n + 1; i++)
			{
				if ((j > B && i > A))
				{
					continue;
				}
				cureps = abs(test(i*h - 1, j*k) - v[i][j]);
				if (cureps >= maxeps)
				{
					maxeps = cureps;
				}
			}
		}
		//for (j = B; j < m + 1; j++)
		//{
		//	for (i = 0; i <= A; i++)
		//	{
		//		y = j * k;
		//		x = i * h - 1;
		//		cureps = fabs(test(x, y) - v[i][j]);
		//		if (cureps >= maxeps)
		//		{
		//			maxeps = cureps;
		//		}
		//	}
		//}
		this->dataGridView1->ColumnCount = n + 2;
		this->dataGridView1->RowCount = m + 2;
		dataGridView1->Columns[0]->HeaderText = "i";
		dataGridView1->Rows[0]->HeaderCell->Value = "j";
		for (int i = 1; i <= n + 1; i++)
		{
			dataGridView1->Rows[0]->Cells[i]->Value = round(((i - 1) * h - 1) * 1000) / 1000;
			dataGridView1->Columns[i]->HeaderText = Convert::ToString(i - 1);

		}
		dataGridView1->RowHeadersVisible = true;
		p = 1;
		for (int j = m + 1; j >= 1; j--)
		{

			dataGridView1->Rows[p]->Cells[0]->Value = round(((j - 1) * k) * 1000) / 1000;
			dataGridView1->Rows[p]->HeaderCell->Value = Convert::ToString(j - 1);
			p++;
		}

		dataGridView1->Rows[0]->Cells[0]->Value = "Y/X";

		for (int j = 1; j < m + 2; j++)
		{
			for (int i = 1; i < n + 2; i++)
			{

				dataGridView1->Rows[j]->Cells[i]->Value = round(v[i - 1][m + 1 - j] * 1000) / 1000;
			}

		}
		this->textBox11->Text = Convert::ToString(S);
		this->textBox12->Text = Convert::ToString(eps_max);
		this->textBox30->Text = Convert::ToString(maxeps);
		memset(v, 0, 40000 * sizeof(double));
		memset(f, 0, 40000 * sizeof(double));

	}






	private: System::Void DataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void TextBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void textBox25_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		double w = 0;
		int n = Convert::ToDouble(textBox1->Text);
		double h = 1.0 / n;
		double nu = 0;
		double pi = 3.14159;
		nu = pi * h / 2.0;
		nu = sin(nu);
		nu = pow(nu, 2);
		nu = 4 * nu;
		w = (double)(2 / (1 + sqrt(nu)));
		textBox26->Text = Convert::ToString(w);
	}
	private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
		double w = 0;
		int n = Convert::ToDouble(textBox1->Text);
		double h = 1.0 / n;
		double nu = 0;
		double pi = 3.14159;
		nu = pi * h / 2.0;
		nu = sin(nu);
		nu = pow(nu, 2);
		nu = 4 * nu;
		w = (double)(2 / (1 + sqrt(nu)));
		textBox26->Text = Convert::ToString(w);
	}
	};
}
