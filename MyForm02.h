#pragma once
double num1 = 0, num2 = 0, ans = 0;
bool is_click = 0, is_click_pmmd = 0, is_click_pos = 0;
char usage = '+';


namespace calculerform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
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
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
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
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox1->Location = System::Drawing::Point(81, 15);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(438, 30);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox2->Location = System::Drawing::Point(16, 50);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(503, 43);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(16, 106);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 94);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(124, 106);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 94);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(232, 106);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 94);
			this->button3->TabIndex = 4;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button4->Location = System::Drawing::Point(16, 208);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 94);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button5->Location = System::Drawing::Point(124, 208);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 94);
			this->button5->TabIndex = 6;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button6->Location = System::Drawing::Point(232, 208);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 94);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button7->Location = System::Drawing::Point(16, 309);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 94);
			this->button7->TabIndex = 8;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button8->Location = System::Drawing::Point(124, 309);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 94);
			this->button8->TabIndex = 9;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button9->Location = System::Drawing::Point(232, 309);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 94);
			this->button9->TabIndex = 10;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button10->Location = System::Drawing::Point(124, 410);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 94);
			this->button10->TabIndex = 11;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button11->Location = System::Drawing::Point(16, 410);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(100, 94);
			this->button11->TabIndex = 12;
			this->button11->Text = L"+/-";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button12->Location = System::Drawing::Point(232, 410);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(100, 94);
			this->button12->TabIndex = 13;
			this->button12->Text = L".";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button13->Location = System::Drawing::Point(430, 106);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(74, 46);
			this->button13->TabIndex = 14;
			this->button13->Text = L"<-";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button14->Location = System::Drawing::Point(430, 160);
			this->button14->Margin = System::Windows::Forms::Padding(4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 75);
			this->button14->TabIndex = 15;
			this->button14->Text = L"C";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button15->Location = System::Drawing::Point(340, 152);
			this->button15->Margin = System::Windows::Forms::Padding(4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(80, 62);
			this->button15->TabIndex = 16;
			this->button15->Text = L"+";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button16->Location = System::Drawing::Point(340, 240);
			this->button16->Margin = System::Windows::Forms::Padding(4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(80, 62);
			this->button16->TabIndex = 17;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button17->Location = System::Drawing::Point(340, 325);
			this->button17->Margin = System::Windows::Forms::Padding(4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(80, 62);
			this->button17->TabIndex = 18;
			this->button17->Text = L"x";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button18->Location = System::Drawing::Point(340, 410);
			this->button18->Margin = System::Windows::Forms::Padding(4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(80, 62);
			this->button18->TabIndex = 19;
			this->button18->Text = L"/";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button19->Location = System::Drawing::Point(430, 410);
			this->button19->Margin = System::Windows::Forms::Padding(4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 62);
			this->button19->TabIndex = 20;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 513);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
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
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"計算機";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Text = "0";
		textBox1->Text = "0";
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

		   //數字鍵
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "0") {
			textBox2->Text = "";
			textBox1->Text = "";
		}
		if (is_click) {
			textBox2->Text = "";
			is_click = 0;
		}
		textBox2->Text += "1";
		textBox1->Text += "1";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "0") {
			textBox2->Text = "";
			textBox1->Text = "";
		}
		if (is_click) {
			textBox2->Text = "";
			is_click = 0;
		}
		textBox2->Text += "2";
		textBox1->Text += "2";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "0") {
			textBox2->Text = "";
			textBox1->Text = "";
		}
		if (is_click) {
			textBox2->Text = "";
			is_click = 0;
		}
		textBox2->Text += "3";
		textBox1->Text += "3";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "0") {
			textBox2->Text = "";
			textBox1->Text = "";
		}
		if (is_click) {
			textBox2->Text = "";
			is_click = 0;
		}
		textBox2->Text += "4";
		textBox1->Text += "4";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "0") {
			textBox2->Text = "";
			textBox1->Text = "";
		}
		if (is_click) {
			textBox2->Text = "";
			is_click = 0;
		}
		textBox2->Text += "5";
		textBox1->Text += "5";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "0") {
			textBox2->Text = "";
			textBox1->Text = "";
		}
		if (is_click) {
			textBox2->Text = "";
			is_click = 0;
		}
		textBox2->Text += "6";
		textBox1->Text += "6";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "0") {
			textBox2->Text = "";
			textBox1->Text = "";
		}
		if (is_click) {
			textBox2->Text = "";
			is_click = 0;
		}
		textBox2->Text += "7";
		textBox1->Text += "7";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "0") {
			textBox2->Text = "";
			textBox1->Text = "";
		}
		if (is_click) {
			textBox2->Text = "";
			is_click = 0;
		}
		textBox2->Text += "8";
		textBox1->Text += "8";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "0") {
			textBox2->Text = "";
			textBox1->Text = "";
		}
		if (is_click) {
			textBox2->Text = "";
			is_click = 0;
		}
		textBox2->Text += "9";
		textBox1->Text += "9";
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (is_click) {
			textBox2->Text = "";
			textBox1->Text = "";
			is_click = 0;
		}
		if (textBox2->Text != "0") {
			textBox2->Text += "0";
			textBox1->Text += "0";
		}
	}

	//小數點
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text->Contains(".")) {
		}
		else {
			textBox2->Text += ".";
			textBox1->Text += ".";
		}
	}

	//正負號
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		//正負號
		if (textBox2->Text != "0") {
			ans = Convert::ToDouble(textBox2->Text);
			ans = ans * -1;
			textBox2->Text = Convert::ToString(ans);
		}

		//正負號歷史紀錄
		String^ temp = "";
		int a = 0;
		if (is_click_pos) {
			a = -1;
			is_click_pos = 0;
		}
		else {
			a = 1;
			is_click_pos = 1;
		}

		for (int i = 0; i < ((textBox1->Text->Length+a) - (textBox2->Text->Length)); i++) {
			temp += textBox1->Text[i];
		}

		temp += textBox2->Text;
		textBox1->Text = temp;

	}

	//歸零
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "0";
		textBox2->Text = "0";
		num1 = 0;
		num2 = 0;
		ans = 0;
		is_click = 0;
		is_click_pmmd = 0;
		is_click_pos = 0;
	}

	//倒退鍵
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!is_click) {
			String^ c = ""; //宣告空白UI字串
			String^ c_h = "";
			for (int i = 0; i < (textBox2->Text->Length) - 1; i++) {
				c += textBox2->Text[i];
			}
			for (int i = 0; i < (textBox1->Text->Length) - 1; i++) {
				c_h += textBox2->Text[i];
			}
			textBox2->Text = c;
			textBox1->Text = c;
		}
	}

	//運算符號
	//運算控制
	double pmmd(double num1, double num2,char usage) {
		switch (usage)
		{
		case '+':
			return (num1 + num2);
		case '-':
			return (num1 - num2);
		case '*':
			return (num1 * num2);
		case '/':
			return (num1 / num2);
		default:
			return (0);
		}
	}
	//+
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		if (is_click) {
			String^ c = ""; 
			for (int i = 0; i < (textBox1->Text->Length) - 1; i++) {
				c += textBox1->Text[i];
			}
			c += "+";
			textBox1->Text = c;
		}
		else
		{
			if (is_click_pmmd) {
				ans = pmmd(num1, Convert::ToDouble(textBox2->Text), usage);
				textBox2->Text = Convert::ToString(ans);
			}
			else {
				is_click_pmmd = 1;
			}
			num1 = Convert::ToDouble(textBox2->Text);
			is_click = 1;
			textBox1->Text += "+";
		}
		usage = '+';
		is_click_pos = 0;
		
	}
	//-
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		if (is_click) {
			String^ c = "";
			for (int i = 0; i < (textBox1->Text->Length) - 1; i++) {
				c += textBox1->Text[i];
			}
			c += "-";
			textBox1->Text = c;
		}
		else
		{
			if (is_click_pmmd) {
				ans = pmmd(num1, Convert::ToDouble(textBox2->Text), usage);
				textBox2->Text = Convert::ToString(ans);
			}
			else {
				is_click_pmmd = 1;
			}
			num1 = Convert::ToDouble(textBox2->Text);
			is_click = 1;
			textBox1->Text += "-";
		}
		usage = '-';
		is_click_pos = 0;
	}
	//*
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		if (is_click) {
			String^ c = "";
			for (int i = 0; i < (textBox1->Text->Length) - 1; i++) {
				c += textBox1->Text[i];
			}
			c += "*";
			textBox1->Text = c;
		}
		else
		{
			if (is_click_pmmd) {
				ans = pmmd(num1, Convert::ToDouble(textBox2->Text), usage);
				textBox2->Text = Convert::ToString(ans);
			}
			else {
				is_click_pmmd = 1;
			}
			num1 = Convert::ToDouble(textBox2->Text);
			is_click = 1;
			textBox1->Text += "*";
			
		}
		usage = '*';
		is_click_pos = 0;
	}
	//'/'
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		if (is_click) {
			String^ c = "";
			for (int i = 0; i < (textBox1->Text->Length) - 1; i++) {
				c += textBox1->Text[i];
			}
			c += "/";
			textBox1->Text = c;
		}
		else
		{
			if (is_click_pmmd) {
				ans = pmmd(num1, Convert::ToDouble(textBox2->Text), usage);
				textBox2->Text = Convert::ToString(ans);
			}
			else {
				is_click_pmmd = 1;
			}
			num1 = Convert::ToDouble(textBox2->Text);
			is_click = 1;
			textBox1->Text += "/";
		}
		usage = '/';
		is_click_pos = 0;
	}

	//=
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		ans = pmmd(num1, Convert::ToDouble(textBox2->Text), usage);
		textBox2->Text = Convert::ToString(ans);
		is_click = 0;
		is_click_pmmd = 0;
		textBox1->Text = Convert::ToString(ans);

	}
};
};