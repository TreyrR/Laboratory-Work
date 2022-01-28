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
	/// Сводка для lab8screen2inform
	/// </summary>
	public ref class lab8screen2inform : public System::Windows::Forms::Form
	{
	public:
		lab8screen2inform(void)
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
		~lab8screen2inform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::DataGridView^ dataGridView6;
	private: System::Windows::Forms::DataGridView^ dataGridView7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(98, 108);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Исходный массив";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(101, 127);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->dataGridView1->Size = System::Drawing::Size(239, 64);
			this->dataGridView1->TabIndex = 11;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(101, 247);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->dataGridView2->Size = System::Drawing::Size(239, 64);
			this->dataGridView2->TabIndex = 12;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->Location = System::Drawing::Point(101, 368);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->dataGridView3->Size = System::Drawing::Size(239, 64);
			this->dataGridView3->TabIndex = 13;
			// 
			// dataGridView4
			// 
			this->dataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->ColumnHeadersVisible = false;
			this->dataGridView4->Location = System::Drawing::Point(784, 127);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersVisible = false;
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->dataGridView4->Size = System::Drawing::Size(239, 64);
			this->dataGridView4->TabIndex = 14;
			// 
			// dataGridView5
			// 
			this->dataGridView5->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->ColumnHeadersVisible = false;
			this->dataGridView5->Location = System::Drawing::Point(784, 247);
			this->dataGridView5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersVisible = false;
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->dataGridView5->Size = System::Drawing::Size(239, 64);
			this->dataGridView5->TabIndex = 15;
			// 
			// dataGridView6
			// 
			this->dataGridView6->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->ColumnHeadersVisible = false;
			this->dataGridView6->Location = System::Drawing::Point(784, 368);
			this->dataGridView6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersVisible = false;
			this->dataGridView6->RowHeadersWidth = 51;
			this->dataGridView6->RowTemplate->Height = 24;
			this->dataGridView6->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->dataGridView6->Size = System::Drawing::Size(239, 64);
			this->dataGridView6->TabIndex = 16;
			// 
			// dataGridView7
			// 
			this->dataGridView7->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->ColumnHeadersVisible = false;
			this->dataGridView7->Location = System::Drawing::Point(450, 493);
			this->dataGridView7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->RowHeadersVisible = false;
			this->dataGridView7->RowHeadersWidth = 51;
			this->dataGridView7->RowTemplate->Height = 24;
			this->dataGridView7->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->dataGridView7->Size = System::Drawing::Size(239, 64);
			this->dataGridView7->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(98, 228);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(217, 20);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Результирующий массив";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(98, 349);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(254, 20);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Удаление элемента массива";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(782, 92);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(331, 40);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Исходный массив, \r\nотсортированный простым обменом 1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(782, 212);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(331, 40);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Результирующий массив,\r\nотсортированный простым обменом 2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(782, 333);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(258, 40);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Удаление элемента массива,\r\nшейкер-сортировка";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(447, 474);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(273, 20);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Считывание массива из файла";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(482, 591);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 64);
			this->button1->TabIndex = 29;
			this->button1->Text = L"    Вывести массивы\r\n   и отсортировать их";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &lab8screen2inform::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1000, 591);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 64);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Вернуться к списку лабораторных";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &lab8screen2inform::button2_Click);
			// 
			// lab8screen2inform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1380, 700);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView7);
			this->Controls->Add(this->dataGridView6);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"lab8screen2inform";
			this->Text = L"lab8screen2inform";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
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
		FunctionLibraryInform::FLI::enter_mas(mas, n);
		FunctionLibraryInform::FLI::output_mas(mas, n, dataGridView1);
		FunctionLibraryInform::FLI::ProstTrade1(mas, n);
		FunctionLibraryInform::FLI::output_mas(mas, n, dataGridView4);
		FunctionLibraryInform::FLI::minusl7xx(mas, n, min2x);
		FunctionLibraryInform::FLI::rezmass(mas, rezmas, min2x, n, r);
		String^ s = Interaction::InputBox("Введите номер элемента, после которого хотите добавить", "Ввод", "", -1, -1);
		int k1 = Convert::ToInt32(s);
		String^ w = Interaction::InputBox("Введите элемент, который хотите добавить", "Ввод", "", -1, -1);
		int m = Convert::ToInt32(w);
		FunctionLibraryInform::FLI::InterMas(rezmas, r, k1, m);
		FunctionLibraryInform::FLI::output_mas(rezmas, r, dataGridView2);
		FunctionLibraryInform::FLI::ProstTrade2(rezmas, n);
		FunctionLibraryInform::FLI::output_mas(rezmas, r, dataGridView5);
		FunctionLibraryInform::FLI::Copy100(rezmas, r);
		FunctionLibraryInform::FLI::output_mas(rezmas, r, dataGridView3);
		FunctionLibraryInform::FLI::ShakerSort(rezmas, n);
		FunctionLibraryInform::FLI::output_mas(rezmas, r, dataGridView6);
		FunctionLibraryInform::FLI::vvodINfile(dataGridView5);
		FunctionLibraryInform::FLI::VivodOFfile(n, dataGridView7);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ b = Application::OpenForms["MainLabInform"];
	b->Show();
	this->Hide();
}
};
}
