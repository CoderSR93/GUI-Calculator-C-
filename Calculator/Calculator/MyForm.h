#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ output;
	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^ op;
	protected:

	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ eight;
	private: System::Windows::Forms::Button^ nine;
	private: System::Windows::Forms::Button^ four;
	private: System::Windows::Forms::Button^ five;
	private: System::Windows::Forms::Button^ six;
	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ two;
	private: System::Windows::Forms::Button^ three;
	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::Button^ backsp;
	private: System::Windows::Forms::Button^ equal;
	private: System::Windows::Forms::Button^ div;
	private: System::Windows::Forms::Button^ min;
	private: System::Windows::Forms::Button^ prod;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ dot;
	private: System::Windows::Forms::Button^ clear;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->output = (gcnew System::Windows::Forms::TextBox());
			this->op = (gcnew System::Windows::Forms::Label());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->backsp = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->div = (gcnew System::Windows::Forms::Button());
			this->min = (gcnew System::Windows::Forms::Button());
			this->prod = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->dot = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// output
			// 
			this->output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->output->Location = System::Drawing::Point(12, 44);
			this->output->Name = L"output";
			this->output->ReadOnly = true;
			this->output->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->output->Size = System::Drawing::Size(410, 47);
			this->output->TabIndex = 0;
			this->output->Text = L"0";
			// 
			// op
			// 
			this->op->AutoSize = true;
			this->op->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->op->Location = System::Drawing::Point(21, 50);
			this->op->Name = L"op";
			this->op->Size = System::Drawing::Size(0, 31);
			this->op->TabIndex = 1;
			// 
			// seven
			// 
			this->seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seven->Location = System::Drawing::Point(23, 114);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(75, 45);
			this->seven->TabIndex = 2;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = true;
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::seven_Click);
			// 
			// eight
			// 
			this->eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eight->Location = System::Drawing::Point(104, 114);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(75, 45);
			this->eight->TabIndex = 2;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = true;
			this->eight->Click += gcnew System::EventHandler(this, &MyForm::eight_Click);
			// 
			// nine
			// 
			this->nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nine->Location = System::Drawing::Point(185, 114);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(75, 45);
			this->nine->TabIndex = 2;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = true;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::nine_Click);
			// 
			// four
			// 
			this->four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->four->Location = System::Drawing::Point(23, 165);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(75, 45);
			this->four->TabIndex = 2;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = true;
			this->four->Click += gcnew System::EventHandler(this, &MyForm::four_Click);
			// 
			// five
			// 
			this->five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->five->Location = System::Drawing::Point(104, 165);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(75, 45);
			this->five->TabIndex = 2;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = true;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::five_Click);
			// 
			// six
			// 
			this->six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->six->Location = System::Drawing::Point(185, 165);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(75, 45);
			this->six->TabIndex = 2;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = true;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::six_Click);
			// 
			// one
			// 
			this->one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->one->Location = System::Drawing::Point(23, 216);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(75, 45);
			this->one->TabIndex = 2;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = true;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::one_Click);
			// 
			// two
			// 
			this->two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->two->Location = System::Drawing::Point(104, 216);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(75, 45);
			this->two->TabIndex = 2;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = true;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::two_Click);
			// 
			// three
			// 
			this->three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->three->Location = System::Drawing::Point(185, 216);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(75, 45);
			this->three->TabIndex = 2;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = true;
			this->three->Click += gcnew System::EventHandler(this, &MyForm::three_Click);
			// 
			// zero
			// 
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zero->Location = System::Drawing::Point(104, 267);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(75, 45);
			this->zero->TabIndex = 3;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::zero_Click);
			// 
			// backsp
			// 
			this->backsp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backsp->Location = System::Drawing::Point(23, 267);
			this->backsp->Name = L"backsp";
			this->backsp->Size = System::Drawing::Size(75, 45);
			this->backsp->TabIndex = 4;
			this->backsp->Text = L"←";
			this->backsp->UseVisualStyleBackColor = true;
			this->backsp->Click += gcnew System::EventHandler(this, &MyForm::backsp_Click);
			// 
			// equal
			// 
			this->equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equal->Location = System::Drawing::Point(347, 165);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(75, 147);
			this->equal->TabIndex = 5;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = true;
			this->equal->Click += gcnew System::EventHandler(this, &MyForm::equal_Click);
			// 
			// div
			// 
			this->div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->div->Location = System::Drawing::Point(266, 114);
			this->div->Name = L"div";
			this->div->Size = System::Drawing::Size(75, 45);
			this->div->TabIndex = 6;
			this->div->Text = L"÷";
			this->div->UseVisualStyleBackColor = true;
			this->div->Click += gcnew System::EventHandler(this, &MyForm::div_Click);
			// 
			// min
			// 
			this->min->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->min->Location = System::Drawing::Point(266, 216);
			this->min->Name = L"min";
			this->min->Size = System::Drawing::Size(75, 45);
			this->min->TabIndex = 7;
			this->min->Text = L"-";
			this->min->UseVisualStyleBackColor = true;
			this->min->Click += gcnew System::EventHandler(this, &MyForm::min_Click);
			// 
			// prod
			// 
			this->prod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prod->Location = System::Drawing::Point(266, 165);
			this->prod->Name = L"prod";
			this->prod->Size = System::Drawing::Size(75, 45);
			this->prod->TabIndex = 7;
			this->prod->Text = L"x";
			this->prod->UseVisualStyleBackColor = true;
			this->prod->Click += gcnew System::EventHandler(this, &MyForm::prod_Click);
			// 
			// plus
			// 
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plus->Location = System::Drawing::Point(266, 267);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(75, 45);
			this->plus->TabIndex = 8;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = true;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// dot
			// 
			this->dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dot->Location = System::Drawing::Point(185, 267);
			this->dot->Name = L"dot";
			this->dot->Size = System::Drawing::Size(75, 45);
			this->dot->TabIndex = 9;
			this->dot->Text = L".";
			this->dot->UseVisualStyleBackColor = true;
			this->dot->Click += gcnew System::EventHandler(this, &MyForm::dot_Click);
			// 
			// clear
			// 
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->Location = System::Drawing::Point(347, 114);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(75, 45);
			this->clear->TabIndex = 10;
			this->clear->Text = L"C";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(434, 351);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->dot);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->prod);
			this->Controls->Add(this->min);
			this->Controls->Add(this->div);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->backsp);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->three);
			this->Controls->Add(this->two);
			this->Controls->Add(this->one);
			this->Controls->Add(this->six);
			this->Controls->Add(this->five);
			this->Controls->Add(this->four);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->op);
			this->Controls->Add(this->output);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void seven_Click(System::Object^ sender, System::EventArgs^ e) {
	if (output->Text=="0")
	{
		output->Clear();
	}
	output->Text += "7";
	
}
private: System::Void eight_Click(System::Object^ sender, System::EventArgs^ e) {
	if (output->Text == "0")
	{
		output->Clear();
	}
	output->Text += "8";

}
private: System::Void nine_Click(System::Object^ sender, System::EventArgs^ e) {
	if (output->Text == "0")
	{
		output->Clear();
	}
	output->Text += "9";

}
private: System::Void four_Click(System::Object^ sender, System::EventArgs^ e) {
	if (output->Text == "0")
	{
		output->Clear();
	}
	output->Text += "4";

}
private: System::Void five_Click(System::Object^ sender, System::EventArgs^ e) {
	if (output->Text == "0")
	{
		output->Clear();
	}
	output->Text += "5";

}
private: System::Void six_Click(System::Object^ sender, System::EventArgs^ e) {
	if (output->Text == "0")
	{
		output->Clear();
	}
	output->Text += "6";

}
private: System::Void one_Click(System::Object^ sender, System::EventArgs^ e) {
	if (output->Text == "0")
	{
		output->Clear();
	}
	output->Text += "1";

}
private: System::Void two_Click(System::Object^ sender, System::EventArgs^ e) {
	if (output->Text == "0")
	{
		output->Clear();
	}
	output->Text += "2";

}
private: System::Void three_Click(System::Object^ sender, System::EventArgs^ e) {
	if (output->Text == "0")
	{
		output->Clear();
	}
	output->Text += "3";

}
private: System::Void zero_Click(System::Object^ sender, System::EventArgs^ e) {
	if (output->Text == "0")
	{
		output->Clear();
	}
	output->Text += "0";

}
private: System::Void backsp_Click(System::Object^ sender, System::EventArgs^ e) {
	output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	if (output->Text->Length > 0)
	{
		output->Text = output->Text->Remove(output->Text->Length - 1, 1);
	}
	if (output->Text->Length == 0)
	{
		output->Text="0";
	}
	op->Text = "";
}

private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
	output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	output->Text = "0";
	op->Text = "";
}
	   double a;
	   double b;
	   double result;
private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
	op->Text = "+";
	a = System::Convert::ToDouble(output->Text);
	output->Text = "0";
}
private: System::Void min_Click(System::Object^ sender, System::EventArgs^ e) {
	op->Text = "-";
	a = System::Convert::ToDouble(output->Text);
	output->Text = "0";
}
private: System::Void prod_Click(System::Object^ sender, System::EventArgs^ e) {
	op->Text = "x";
	a = System::Convert::ToDouble(output->Text);
	output->Text = "0";
}
private: System::Void div_Click(System::Object^ sender, System::EventArgs^ e) {
	op->Text = "÷";
	a = System::Convert::ToDouble(output->Text);
	output->Text = "0";
}
private: System::Void dot_Click(System::Object^ sender, System::EventArgs^ e) {
	output->Text += ".";
}
private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e) {
	b = System::Convert::ToDouble(output->Text);
	if (a == 700.009 && b==0 && op->Text=="÷")
	{
		output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		op->Text = "Creator:-";
		output->Text = "Sagnik Roy AKA CoderS.R";
	}
	else if (op->Text=="÷" && b==0)
	{
		output->Text = "!Error";
	}
	else
	{
		if (op->Text=="+")
		{
			result = a + b;
		}
		else if (op->Text=="-")
		{
			result = a - b;
		}
		else if (op->Text=="x")
		{
			result = a * b;
		}
		else if(op->Text=="÷")
		{
			result = a / b;
		}
		op->Text = "=";
		if (result < 0)
		{
			result = result * -1;
			output->Text =System::Convert::ToString(result) + "-";
		}
		else
		{
			output->Text = System::Convert::ToString(result);
		}
	}
}

};
}
