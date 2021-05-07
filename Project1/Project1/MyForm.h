#pragma once
#include "TSet.h"
#include <msclr/marshal_cppstd.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	TSet* A;
	TSet* B;
	TSet* res;
	int Usize;
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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(588, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(588, 113);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(78, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(588, 163);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(78, 22);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(66, 116);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(424, 22);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(66, 163);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(424, 22);
			this->textBox5->TabIndex = 4;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(66, 355);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(424, 22);
			this->textBox6->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 360);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Result:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(469, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Size of universe:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"A:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"B:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(66, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Or";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(175, 266);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"And";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(297, 266);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"~A";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(415, 266);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 13;
			this->button4->Text = L"~B";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(682, 113);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(49, 23);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Add ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(740, 113);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(52, 23);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Del";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(682, 162);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(49, 23);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Add";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(740, 162);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(52, 23);
			this->button8->TabIndex = 17;
			this->button8->Text = L"Del";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(496, 162);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(40, 23);
			this->button9->TabIndex = 18;
			this->button9->Text = L"OK";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(705, 24);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 19;
			this->button10->Text = L"OK";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(496, 115);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(40, 23);
			this->button11->TabIndex = 20;
			this->button11->Text = L"OK";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(827, 478);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int k = System::Int32::Parse(textBox2->Text);
	A->delnum(k);
	textBox4->Text = msclr::interop::marshal_as<System::String^>(A->getset());
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	*res = A->operator~();
	textBox6->Text = msclr::interop::marshal_as<System::String^>(res->getset());
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Usize = System::Int32::Parse(textBox1->Text);
	A = new TSet(Usize);
	B = new TSet(Usize);
	res = new TSet(Usize);
	button10->Visible = false;

}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	string str = msclr::interop::marshal_as<std::string>(textBox4->Text);
	delete A;
	A = new TSet(Usize, str);
	str = A->getset();
	textBox4->Text = msclr::interop::marshal_as<System::String^>(A->getset());

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	string str = msclr::interop::marshal_as<std::string>(textBox5->Text);
	delete B;
	B = new TSet(Usize, str);
	textBox5->Text = msclr::interop::marshal_as<System::String^>(B->getset());
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	*res = A->operator|(*B);
	textBox6->Text = msclr::interop::marshal_as<System::String^>(res->getset());
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int k = System::Int32::Parse(textBox2->Text);
	A->addnum(k);
	textBox4->Text = msclr::interop::marshal_as<System::String^>(A->getset());
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	int k = System::Int32::Parse(textBox3->Text);
	B->addnum(k);
	textBox5->Text = msclr::interop::marshal_as<System::String^>(B->getset());
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	int k = System::Int32::Parse(textBox3->Text);
	B->delnum(k);
	textBox5->Text = msclr::interop::marshal_as<System::String^>(B->getset());
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	*res = A->operator&(*B);
	textBox6->Text = msclr::interop::marshal_as<System::String^>(res->getset());
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	*res = B->operator~();
	textBox6->Text = msclr::interop::marshal_as<System::String^>(res->getset());
}
};
}

