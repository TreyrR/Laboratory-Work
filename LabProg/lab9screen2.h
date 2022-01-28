#pragma once

namespace LabProg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::VisualBasic;

	/// <summary>
	/// Сводка для lab9screen2
	/// </summary>
	public ref class lab9screen2 : public System::Windows::Forms::Form
	{
	public:
		lab9screen2(void)
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
		~lab9screen2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(73, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Исходный массив";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(77, 96);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->dataGridView1->Size = System::Drawing::Size(319, 79);
			this->dataGridView1->TabIndex = 1;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(77, 236);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->dataGridView2->Size = System::Drawing::Size(319, 79);
			this->dataGridView2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(73, 213);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(217, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Результирующий массив";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(755, 102);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 73);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Вывод массивов на\r\n экран и в McWord";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &lab9screen2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(745, 200);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(187, 72);
			this->button2->TabIndex = 5;
			this->button2->Text = L" Запись массивов\r\nв текстовый документ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &lab9screen2::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(88, 448);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(77, 26);
			this->button3->TabIndex = 6;
			this->button3->Text = L"<";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &lab9screen2::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1001, 413);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(164, 61);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Вернуться к списку\r\n   лабораторных\r\n";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &lab9screen2::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(587, 448);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(88, 26);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Закрыть";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &lab9screen2::button5_Click);
			// 
			// lab9screen2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1252, 504);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"lab9screen2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int min2x, r;
		String^ g = Interaction::InputBox("Введите количество элементов в массиве", "Ввод", "", -1, -1);
		int n = Convert::ToInt32(g);
		int* mas = new int[n];
		int* rezmas = new int[n];
		MassiveLibrary::MLIB::enter_mas(mas, n);
		MassiveLibrary::MLIB::output_mas(mas, n, dataGridView1);
		MassiveLibrary::MLIB::minusl7xx(mas, n, min2x);
		MassiveLibrary::MLIB::rezmass(mas, rezmas, min2x, n, r);
		MassiveLibrary::MLIB::output_mas(rezmas, r, dataGridView2);
		MassiveLibrary::MLIB::vWord(mas, n, rezmas, r);

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MassiveLibrary::MLIB::vTxt(dataGridView1, dataGridView2);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^b = Application::OpenForms["Mainlab"];
	b->Show();
	this->Hide();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ s = Application::OpenForms["FirstListLab9"];
	s->Show();
	this->Hide();
}
};
}
