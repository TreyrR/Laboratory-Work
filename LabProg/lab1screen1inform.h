
#pragma once
#include "lab1screen2inform.h"


namespace LabProg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для lab1screen1inform
	/// </summary>
	public ref class lab1screen1inform : public System::Windows::Forms::Form
	{
	public:
		lab1screen1inform(void)
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
		~lab1screen1inform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(lab1screen1inform::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(644, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(614, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Алгоритмы обработки одномерных массивов";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(515, 269);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(207, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Условие задачи:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(584, 318);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(820, 450);
			this->label3->TabIndex = 2;
			this->label3->Text = resources->GetString(L"label3.Text");
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(69, 915);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 32);
			this->button1->TabIndex = 3;
			this->button1->Text = L"<";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &lab1screen1inform::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1800, 915);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 32);
			this->button2->TabIndex = 4;
			this->button2->Text = L">";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &lab1screen1inform::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(896, 915);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 32);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Закрыть";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &lab1screen1inform::button3_Click);
			// 
			// lab1screen1inform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 959);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"lab1screen1inform";
			this->Text = L"lab1screen1inform";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Form^ b = Application::OpenForms["MainLabInform"];
		b->Show();
		this->Hide();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	lab1screen2inform^ n = gcnew lab1screen2inform();
	n->Show();
	this->Hide();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
