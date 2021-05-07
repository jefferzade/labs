#pragma once
#include "TMatrix.h"
#include "TVector.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	TMatrix A;
	TMatrix B; 
	TMatrix C;
	int n;
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;










	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Size of matrix:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(114, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(235, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(93, 193);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(449, 193);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(759, 193);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"*";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(15, 251);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(242, 237);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(367, 251);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(242, 237);
			this->dataGridView2->TabIndex = 8;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->Location = System::Drawing::Point(673, 251);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(242, 237);
			this->dataGridView3->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(961, 515);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		n = System::Int32::Parse(textBox1->Text);
		this->dataGridView1->ColumnCount = n;
		this->dataGridView1->RowCount = n;
		this->dataGridView1->Width = n * 20+10;
		this->dataGridView1->Height = n * 20+10;
		for (int i = 0; i < n;i++)
		{
			this->dataGridView1->Columns[i]->Width = 20;
			this->dataGridView1->Rows[i]->Height = 20;		
			for (int j = 0; j < n;j++)
			{
				this->dataGridView1->Rows[i]->Cells[j]->Value = 0;
			}
			for (int j = 0; j < i; j++)
			{
				this->dataGridView1->Rows[i]->Cells[j]->ReadOnly = true;
			}
			
		}
		this->dataGridView2->ColumnCount = n;
		this->dataGridView2->RowCount = n;
		this->dataGridView2->Width = n * 20+10;
		this->dataGridView2->Height = n * 20+10;
		for (int i = 0; i < n;i++)
		{
			this->dataGridView2->Columns[i]->Width = 20;
			this->dataGridView2->Rows[i]->Height = 20;
			for (int j = 0; j < n;j++)
			{
				this->dataGridView2->Rows[i]->Cells[j]->Value = 0;
			}
			for (int j = 0; j < i; j++)
			{
				this->dataGridView2->Rows[i]->Cells[j]->ReadOnly = true;
			}
		}
		this->dataGridView3->ColumnCount = n;
		this->dataGridView3->RowCount = n;
		this->dataGridView3->Width = n * 20+10;
		this->dataGridView3->Height = n *20+10;
		for (int i = 0; i < n;i++)
		{
			this->dataGridView3->Columns[i]->Width = 20;
			this->dataGridView3->Rows[i]->Height = 20;
			for (int j = 0; j < n;j++)
			{
				this->dataGridView3->Rows[i]->Cells[j]->Value = 0;
			}
			for (int j = 0; j < i; j++)
			{
				this->dataGridView3->Rows[i]->Cells[j]->ReadOnly = true;
			}
		}
		A = TMatrix(n);
		B = TMatrix(n);
		C = TMatrix(n);
			
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int k;
		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < n;j++)
			{
				k = Convert::ToInt32(this->dataGridView1->Rows[i]->Cells[j]->Value->ToString());
				A[i][j] = k;
				k = Convert::ToInt32(this->dataGridView2->Rows[i]->Cells[j]->Value->ToString());
				B[i][j] = k;
			}
		}
		C = A * B;
		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < n;j++)
			{
				this->dataGridView3->Rows[i]->Cells[j]->Value = C[i][j];
			}
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int k;
	for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < n;j++)
			{
				
				k = Convert::ToInt32(this->dataGridView1->Rows[i]->Cells[j]->Value->ToString());
				A[i][j] = k;
 				k =Convert::ToInt32(this->dataGridView2->Rows[i]->Cells[j]->Value->ToString());
				B[i][j] = k;
			}
		}
	C = A + B;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			this->dataGridView3->Rows[i]->Cells[j]->Value = C[i][j];
		}
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int k;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{

			k = Convert::ToInt32(this->dataGridView1->Rows[i]->Cells[j]->Value->ToString());
			A[i][j] = k;
			k = Convert::ToInt32(this->dataGridView2->Rows[i]->Cells[j]->Value->ToString());
			B[i][j] = k;
		}
	}
	C = A - B;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			this->dataGridView3->Rows[i]->Cells[j]->Value = C[i][j];
		}
	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}