#pragma once

namespace Project1 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;


	protected:



	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.8F));
			this->label1->Location = System::Drawing::Point(36, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(274, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter The amount";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Info;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.8F));
			this->textBox1->Location = System::Drawing::Point(328, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(950, 47);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(84, 142);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(528, 127);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Calculate New Tax";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 22.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(288, 353);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 43);
			this->label2->TabIndex = 3;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(691, 142);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(528, 127);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Calculate Old Tax";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1344, 673);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Hello";
		label1->Text = textBox1->Text;
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		int amt = System::Convert::ToInt32(textBox1->Text);

				double ans = 0;
				
			
				double a[6] = { 0,0.05,0.1,0.15,0.2,0.25 };
				double presum[6] = { 0 };
				double sum = 0;
				for(int i=0;i<6; i++)
				{
					sum = sum + a[i];
					presum[i] = presum[i] + sum;
				}


				if (amt < 250000)
				{
					ans = 0;
				}
				else if (amt < 1500000)
				{
					ans = ans + 250000 * presum[amt / 250000 - 1];
					ans = ans + (amt % 250000) * a[amt / 250000];
				}
				else
				{
					ans = ans + presum[5] * 250000;
					ans = ans + (amt - 1500000) * 0.3;
				}
				
			

				label2->Text = "YOUR NEW TAX BEFORE EDUCATION:" + System::Convert::ToString(ans) + "\n" + "YOUR TAX AFTER EDUCATION:" + System::Convert::ToString(ans + ans * 0.04);

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int amt2 = System::Convert::ToInt32(textBox1->Text);
	
	
	
	double ans2 = 0;
	if (amt2 <= 500000)
	{
		ans2 = 0;
	}
	else if (amt2 > 500000 && amt2 < 10000000)
	{
		ans2 = ans2 + 250000 * 0.05;
		ans2 = ans2 + (amt2 - 500000) * 0.2;

	}
	else
	{
		ans2 = ans2 + 250000 * 0.05 + 500000 * 0.2 + (amt2 - 10000000) * 0.3;
	}
	label2->Text= "YOUR NEW TAX BEFORE EDUCATION:"+System::Convert::ToString(ans2)+"\n"+"YOUR TAX AFTER EDUCATION:"+ System::Convert::ToString(ans2+ans2*0.04);
	





}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
