#include "pch.h"
#include "cmath"
#include "MassiveLibrary.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
using namespace Microsoft::VisualBasic;
using namespace System::IO;

namespace MassiveLibrary {
	void MLIB::enter_mas(int* mas, int n)
	{
		for (int i = 0; i < n; i++)
			mas[i] = (double)(rand() % 201 - 100);
	}
	void MLIB::output_mas(int* mas, int len, DataGridView^ grid)
	{
		grid->ColumnCount = len;
		grid->RowCount = 2;
		for (int i = 0; i < len; i++)
		{
			grid->Rows[0]->Cells[i]->Value = "[" + i + "]";
			grid->Rows[1]->Cells[i]->Value = mas[i];
		}
		int sum = 0;
		for (int s = 0; s < grid->ColumnCount; s++)
			sum += grid->Columns[s]->Width;
		if (sum > 410) grid->Width = 410;
		else grid->Width = sum;
	}
	double MLIB::minusl7(int* mas, int n)
	{
		int min3x = 999;
		for (int i = 0; i < n; i++)
		{
			if ((99 < mas[i] < 1000) && (-1000 < mas[i] < -99) && (mas[i] < min3x))  //((Convert::ToInt32(mas[i]) % 100 == 0) && (mas[i] < min3x))
			{
				min3x = mas[i];
			}
		}
		if (min3x % 100 == 99)
			MessageBox::Show("Таких чисел нет!", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
		else
			MessageBox::Show("Минимальное 3-х значное число: " + min3x, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return min3x;
	}
	void MLIB::minusl7xx(int* mas, int n, int& min2x)
	{
		min2x = 100;
		for (int i = 0; i < n; i++)
		{
			if (((9 < mas[i] < 100) || (-100 < mas[i] < -9)) && (mas[i] < min2x))  //((Convert::ToInt32(mas[i]) % 100 == 0) && (mas[i] < min3x))
			{
				min2x = mas[i];
			}
		}
		if ((min2x > 99) || (min2x < -99))
			MessageBox::Show("Таких чисел нет!" ,"", MessageBoxButtons::OK, MessageBoxIcon::Information);
		else if (min2x < 100)
			MessageBox::Show("Минимальное 2-х значное число: " + min2x, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	void MLIB::rezmass(int* mas, int* rezmas, int min2x, int n, int& r)
	{
		r = 0;
		for (int i = 0; i < n; i++)
		{
			if (mas[i] > min2x)
			{
				rezmas[r] = i;
				r++;
			}

		}
	}
	void MLIB::addDB() {
		ADOX::Catalog^ k = gcnew ADOX::CatalogClass();
		try {
			k->Create("Provider=Microsoft.Jet.OLEDB.4.0;Data Source = " + Application::StartupPath + "/DataBase8.mdb");
			MessageBox::Show("База данных создана", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (System::Runtime::InteropServices::COMException^ event) {
			MessageBox::Show(event->Message);
		}
		finally {
			k = nullptr;
		}
	}

	void MLIB::structDB() {
		auto p = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source = " + Application::StartupPath + "/DataBase8.mdb");
		p->Open();
		auto c = gcnew OleDbCommand("CREATE TABLE [Лабораторная работа №8]( [Номер элемента] char(200), [Исходный массив] char(200), [Результирующий массив] char(200))", p);
		try {
			c->ExecuteNonQuery();
			MessageBox::Show("Структура базы данных создана", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (System::Runtime::InteropServices::COMException^ event) {
			MessageBox::Show(event->Message);
		}
		p->Close();
	}

	void MLIB::addDBmas(int* mas, int* rezmas, int len, int r) {
		for (int i = 0; i < len; i++) {
			auto p = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source = " + Application::StartupPath + "/DataBase8.mdb");
			p->Open();
			if (i < r) {
				auto c = gcnew OleDbCommand("INSERT INTO [Лабораторная работа №8]([Номер элемента],[Исходный массив],[Результирующий массив]) VALUES('" + i + "', '" + mas[i] + "','" + rezmas[i] + "')");
				c->Connection = p;
				c->ExecuteNonQuery();
				p->Close();
			}
			else {
				auto c = gcnew OleDbCommand("INSERT INTO [Лабораторная работа №8]([Номер элемента],[Исходный массив],[Результирующий массив]) VALUES('" + i + "', '" + mas[i] + "', ' ')");
				c->Connection = p;
				c->ExecuteNonQuery();
				p->Close();
			}
		}
		MessageBox::Show("В таблицу добавлены записи", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	void MLIB::vTxt(DataGridView^ grid, DataGridView^ grid1)
	{
		String^ f = Interaction::InputBox("Введите путь, по которому будет сохранён файл и его имя. Расширение добавляется автоматически" + "Например: C:\\Users\\name\\repos\'Имя файла", "Ввод", "Ввод", -1, -1);
		String^ filename = f + ".txt";
		try
		{
			auto fk = System::Text::Encoding::GetEncoding(1251);
			auto z = gcnew IO::StreamWriter(filename, false, fk);
			for (int i = 0; i < grid->ColumnCount; i++)
			{
				if (i < grid1->ColumnCount)
				{
					z->WriteLine(Convert::ToString(grid->Rows[1]->Cells[i]->Value + "|" + grid1->Rows[1]->Cells[i]->Value));
				}
				else
				{
					z->WriteLine(Convert::ToString(grid->Rows[1]->Cells[i]->Value));
				}
			}
			z->Close();
			MessageBox::Show("Запись успешна");
		}
		catch (System::Exception^ E)
		{
			MessageBox::Show(E->Message + "/nОшибка", "Ошибка");
		}
	}
	void MLIB::vWord(int* list, int lenght, int* rezlist, int rezlenght) {
		auto wrd = gcnew Microsoft::Office::Interop::Word::ApplicationClass();
		wrd->Visible = true;
		auto inf = Type::Missing;
		auto doc = wrd->Documents->Add(inf, inf, inf, inf);
		Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;
		Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitContent;
		String^ str;

		// 1 таблица
		wrd->Selection->TypeText("Исходный массив");
		Microsoft::Office::Interop::Word::Table^ tbl = wrd->ActiveDocument->Tables->Add(wrd->Selection->Range, 2, lenght, t1, t2);
		for (int i; i < lenght; i++) {
			tbl->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
			str = String::Format("{0:f0}", list[i]);
			tbl->Cell(2, i + 1)->Range->InsertAfter(str);
		}

		// смещение курсора
		Object^ count = 10;
		Object^ type = 5;
		Object^ extention = 0;
		wrd->Selection->MoveDown(type, count, extention);

		// 2 таблица
		wrd->Selection->TypeText("Результирующий массив");
		Microsoft::Office::Interop::Word::Table^ reztbl = wrd->ActiveDocument->Tables->Add(wrd->Selection->Range, 2, rezlenght, t1, t2);
		for (int i; i < rezlenght; i++) {
			reztbl->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
			str = String::Format("{0:f0}", rezlist[i]);
			reztbl->Cell(2, i + 1)->Range->InsertAfter(str);
		}
		MessageBox::Show("Массивы записаны в McWord!", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}