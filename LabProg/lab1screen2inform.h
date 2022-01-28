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
	/// Сводка для lab1screen2inform
	/// </summary>
public ref class lab1screen2inform : public System::Windows::Forms::Form
{
public:
	lab1screen2inform(void)
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
	~lab1screen2inform()
	{
		if (components)
		{
			delete components;
		}
	}
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::DataGridView^ dataGridView5;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Button^ button2;



protected:

private:
	/// <summary>
	/// Обязательная переменная конструктора.
	/// </summary>
	System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
	/// <summary>
	/// Требуемый метод для поддержки конструктора — не изменяйте 
	/// содержимое этого метода с помощью редактора кода.
	/// </summary>
	void InitializeComponent(void)
	{
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->button2 = (gcnew System::Windows::Forms::Button());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
		this->SuspendLayout();
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label1->Location = System::Drawing::Point(207, 227);
		this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(217, 20);
		this->label1->TabIndex = 1;
		this->label1->Text = L"Результирующий массив";
		// 
		// dataGridView1
		// 
		this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
		this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView1->ColumnHeadersVisible = false;
		this->dataGridView1->Location = System::Drawing::Point(210, 131);
		this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
		this->dataGridView1->Name = L"dataGridView1";
		this->dataGridView1->RowHeadersVisible = false;
		this->dataGridView1->RowHeadersWidth = 51;
		this->dataGridView1->RowTemplate->Height = 24;
		this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
		this->dataGridView1->Size = System::Drawing::Size(239, 64);
		this->dataGridView1->TabIndex = 2;
		// 
		// button1
		// 
		this->button1->Location = System::Drawing::Point(870, 363);
		this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(170, 64);
		this->button1->TabIndex = 3;
		this->button1->Text = L"Вывести массивы";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &lab1screen2inform::button1_Click);
		// 
		// dataGridView2
		// 
		this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
		this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView2->ColumnHeadersVisible = false;
		this->dataGridView2->Location = System::Drawing::Point(210, 245);
		this->dataGridView2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
		this->dataGridView2->Name = L"dataGridView2";
		this->dataGridView2->RowHeadersVisible = false;
		this->dataGridView2->RowHeadersWidth = 51;
		this->dataGridView2->RowTemplate->Height = 24;
		this->dataGridView2->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
		this->dataGridView2->Size = System::Drawing::Size(239, 64);
		this->dataGridView2->TabIndex = 4;
		// 
		// dataGridView3
		// 
		this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
		this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView3->ColumnHeadersVisible = false;
		this->dataGridView3->Location = System::Drawing::Point(210, 363);
		this->dataGridView3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
		this->dataGridView3->Name = L"dataGridView3";
		this->dataGridView3->RowHeadersVisible = false;
		this->dataGridView3->RowHeadersWidth = 51;
		this->dataGridView3->RowTemplate->Height = 24;
		this->dataGridView3->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
		this->dataGridView3->Size = System::Drawing::Size(239, 64);
		this->dataGridView3->TabIndex = 5;
		// 
		// dataGridView4
		// 
		this->dataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
		this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView4->ColumnHeadersVisible = false;
		this->dataGridView4->Location = System::Drawing::Point(210, 482);
		this->dataGridView4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
		this->dataGridView4->Name = L"dataGridView4";
		this->dataGridView4->RowHeadersVisible = false;
		this->dataGridView4->RowHeadersWidth = 51;
		this->dataGridView4->RowTemplate->Height = 24;
		this->dataGridView4->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
		this->dataGridView4->Size = System::Drawing::Size(239, 64);
		this->dataGridView4->TabIndex = 6;
		// 
		// dataGridView5
		// 
		this->dataGridView5->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
		this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView5->ColumnHeadersVisible = false;
		this->dataGridView5->Location = System::Drawing::Point(210, 603);
		this->dataGridView5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
		this->dataGridView5->Name = L"dataGridView5";
		this->dataGridView5->RowHeadersVisible = false;
		this->dataGridView5->RowHeadersWidth = 51;
		this->dataGridView5->RowTemplate->Height = 24;
		this->dataGridView5->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
		this->dataGridView5->Size = System::Drawing::Size(239, 64);
		this->dataGridView5->TabIndex = 7;
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label2->Location = System::Drawing::Point(207, 112);
		this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(156, 20);
		this->label2->TabIndex = 8;
		this->label2->Text = L"Исходный массив";
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label3->Location = System::Drawing::Point(207, 344);
		this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(254, 20);
		this->label3->TabIndex = 9;
		this->label3->Text = L"Удаление элемента массива";
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label4->Location = System::Drawing::Point(207, 463);
		this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(279, 20);
		this->label4->TabIndex = 10;
		this->label4->Text = L"Добавление элемента в массив";
		// 
		// label5
		// 
		this->label5->AutoSize = true;
		this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label5->Location = System::Drawing::Point(207, 584);
		this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(264, 20);
		this->label5->TabIndex = 11;
		this->label5->Text = L"100 вместо чётных элементов";
		// 
		// button2
		// 
		this->button2->Location = System::Drawing::Point(870, 482);
		this->button2->Margin = System::Windows::Forms::Padding(2);
		this->button2->Name = L"button2";
		this->button2->Size = System::Drawing::Size(170, 64);
		this->button2->TabIndex = 12;
		this->button2->Text = L"Вернуться к списку лабораторных";
		this->button2->UseVisualStyleBackColor = true;
		this->button2->Click += gcnew System::EventHandler(this, &lab1screen2inform::button2_Click);
		// 
		// lab1screen2inform
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(1379, 701);
		this->Controls->Add(this->button2);
		this->Controls->Add(this->label5);
		this->Controls->Add(this->label4);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->dataGridView5);
		this->Controls->Add(this->dataGridView4);
		this->Controls->Add(this->dataGridView3);
		this->Controls->Add(this->dataGridView2);
		this->Controls->Add(this->button1);
		this->Controls->Add(this->dataGridView1);
		this->Controls->Add(this->label1);
		this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
		this->Name = L"lab1screen2inform";
		this->Text = L"lab1screen2inform";
		this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
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
	FunctionLibraryInform::FLI::minusl7xx(mas, n, min2x);
	FunctionLibraryInform::FLI::rezmass(mas, rezmas, min2x, n, r);
	FunctionLibraryInform::FLI::output_mas(rezmas, r, dataGridView2);
	String^ f = Interaction::InputBox("Введите элемент, который хотите удалить", "Ввод", "", -1, -1);
	int k = Convert::ToInt32(f);
	FunctionLibraryInform::FLI::DeleteMas(rezmas, r, k);
	FunctionLibraryInform::FLI::output_mas(rezmas, r, dataGridView3);
	String^ s = Interaction::InputBox("Введите номер элемента, после которого хотите добавить", "Ввод", "", -1, -1);
	int k1 = Convert::ToInt32(s);
	String^ w = Interaction::InputBox("Введите элемент, который хотите добавить", "Ввод", "", -1, -1);
	int m = Convert::ToInt32(w);
	FunctionLibraryInform::FLI::InterMas(rezmas, r, k1, m);
	FunctionLibraryInform::FLI::output_mas(rezmas, r, dataGridView4);
	int p = FunctionLibraryInform::FLI::OdnMas(rezmas, r);
	if (p == 1) {
		MessageBox::Show("В массиве есть монотонно убывающая последовательность", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("В массиве нет монотонно убывающей последовательности", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	FunctionLibraryInform::FLI::Copy100(rezmas, r);
	FunctionLibraryInform::FLI::output_mas(rezmas, r, dataGridView5);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ b = Application::OpenForms["MainLabInform"];
	b->Show();
	this->Hide();
}
};
}