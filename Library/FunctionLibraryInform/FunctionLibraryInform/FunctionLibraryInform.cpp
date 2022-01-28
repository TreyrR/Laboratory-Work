#include "pch.h"
#include "cmath"
#include "ctime"
#include "FunctionLibraryInform.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Microsoft::VisualBasic;
using namespace std;
using namespace System::IO;

namespace FunctionLibraryInform {
	void FLI::enter_mas(int* mas, int n)
	{
		for (int i = 0; i < n; i++)
			mas[i] = (double)(rand() % 201 - 100);
	}
	void FLI::output_mas(int* mas, int len, DataGridView^ grid)
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
	void FLI::minusl7xx(int* mas, int n, int& min2x)
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
			MessageBox::Show("Таких чисел нет!", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
		else if (min2x < 100)
			MessageBox::Show("Минимальное 2-х значное число: " + min2x, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	void FLI::rezmass(int* mas, int* rezmas, int min2x, int n, int& r)
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
	void FLI::DeleteMas(int* mas, int& n, int k) {
		for (int i = k - 1; i < n; i++)
		{
			mas[i] = mas[i + 1];
		}
		n = n - 1;
	}
	void FLI::InterMas(int* mas, int& n, int k, int m) {
		for (int i = n; i > k - 1; i--)
			mas[i + 1] = mas[i];
		mas[k] = m;
		n = n + 1;
	}
	int FLI::OdnMas(int* mas, int& n)
	{
		int i = 0;
		int Flag = 1;
		while ((i <= n - 1) && (Flag == 1))
			if (mas[i] >= mas[i + 1])
				i++;
			else
				Flag = 0;
		return Flag;
	}
	int FLI::Copy100(int* mas, int& n) {
		int i = 0;
		for (i = 0; i <= n; i++)
		{
			if (mas[i] % 2 == 0)
				mas[i] = 100;
		}
		return *mas;
	}
	double FLI::IterFunk(double x, double an)
	{
		an = an * (-1) * (1 - x);
		return an;
	}
	void FLI::SumIter(double& sum, int n, double &an, double E, double x, ListBox^ l)
	{
		l->Items->Clear();
		an = 1;
		n = 1;
		sum = 0;
		an = IterFunk(x, an);
		//l->Items->Add("       " + E.ToString() + "           " + an.ToString());
		sum = sum + an;
		while (fabs(an) > E)
		{
			l->Items->Add("       " + n.ToString() + "                                    " + an.ToString());
			n = n + 1;
			an = IterFunk(x, an);
			sum = sum + an;
		}
	}
	double FLI::vvod(TextBox^ t)
	{
		return Convert::ToDouble(t->Text);
	}
	void FLI::vivod(TextBox^ c, double y)
	{
		c->Text = Convert::ToString(y);
	}
	void FLI::ProstVstavk(int* mas, int n)
	{
		for (int i = 2; i < n; i++) {
			int x = mas[i];
			//mas[0] = x;
			int j = i - 1;
			while (x < mas[j]) {                                //СОРТИРОВКА ПРОСТОЙ ВСТАВКОЙ
				mas[j + 1] = mas[j];
				j = j - 1;
			}
			mas[j + 1] = x;
		}
	}
	void FLI::BinaryVstavk(int*rezmas, int n)
	{
		for (int i = 1; i < n; i++)
		{
			int x = rezmas[i];
			int left = 0;
			int right = i - 1;
			while (left <= right)
			{
				int m = (left + right) / 2;
				if (x < rezmas[m])                            //СОРТИРОВКА БИНАРНЫМИ ВСТАВКАМИ
					right = m - 1;
				else
					left = m + 1;
			}
			for (int j = i - 1; j >= left - 1; j--)
				rezmas[j + 1] = rezmas[j];
			rezmas[left] = x;
		}
	}
	void FLI::ProstPick(int* rezmas, int n)
	{
		for (int i = 0; i < n; i++) {
			int k = i;
			int x = rezmas[i];
			for (int j = i + 1; j < n; j++) {
				if (rezmas[j] < x) {                          //СОРТИРОВКА ПРОСТЫМ ВЫБОРОМ
					k = j;
					x = rezmas[j];
				}
			}
			rezmas[k] = rezmas[i];
			rezmas[i] = x;
		}
	}
	void FLI::vvodINfile(DataGridView^ dgv)
	{
		String^ f = Interaction::InputBox("Введите имя файла", "Ввод", "C:\\Users\\Heyte\\OneDrive\\Desktop\\Лабораторные работы БСТ2003 Бабердин Василий\\LabProg", -1, -1);
		String^ fn = f + ".txt";
		try {
			auto fk = System::Text::Encoding::GetEncoding(1251);
			auto z = gcnew IO::StreamWriter(fn, false, fk);
			for (int i = 0; i < dgv->ColumnCount; i++) {
				z->WriteLine(Convert::ToString(dgv->Rows[1]->Cells[i]->Value));
			}
			z->Close();
			MessageBox::Show("Массив записан в файл");
		}
		catch (System::Exception^ E) {
			MessageBox::Show(E->Message + "Ошибка", "Ошибка");
		}
	}
	void FLI::VivodOFfile(int len, DataGridView^ dgv)
	{
		String^ f = Interaction::InputBox("Введите имя файла", "Ввод", "C:\\Users\\Heyte\\OneDrive\\Desktop\\Лабораторные работы БСТ2003 Бабердин Василий\\LabProg", -1, -1);
		String^ fn = f + ".txt";
		dgv->ColumnCount = len;
		dgv->RowCount = 2;
		try {
			IO::StreamReader^ r = gcnew IO::StreamReader(fn);
			for (int i = 0; i < len; i++) {
				dgv->Rows[1]->Cells[i]->Value = r->ReadLine();
			}
			for (int i = 0; i < len; i++) {
				dgv->Rows[0]->Cells[i]->Value = "[" + i + "]";
			}
			int sum = 0;
			for (int s = 0; s < dgv->ColumnCount; s++) {
				sum += dgv->Columns[s]->Width;
				if (sum > 100000) {
					dgv->Width = 100000;
				}
				else {
					dgv->Width = sum;
				}
			}
			r->Close();
		}
		catch (System::Exception^ E) {
			MessageBox::Show(E->Message + "Произошла ошибка", "Error");
		}
	}
	void FLI::ProstTrade1(int* mas, int n)
	{
		int x;
		for (int i = 0; i < n - 1; i++) {
			for (int j = n - 1; j > i; j--) {
				if (mas[j - 1] > mas[j]) {
					x = mas[j - 1];
					mas[j - 1] = mas[j];
					mas[j] = x;
				}
			}
		}
	}
	void FLI::ProstTrade2(int *mas, int n)
	{
		int Flag = 1;
		int m = n - 1;
		int x;
		while (m > 1 && Flag == 1) {
			Flag = 0;
			for (int i = 1; i < m; i++) {
				if (mas[i] > mas[i + 1]) {
					x = mas[i];
					mas[i] = mas[i + 1];
					mas[i + 1] = x;
					Flag = 1;
				}
			}
			m = m - 1;
		}
	}
	void FLI::ShakerSort(int* mas, int n)
	{
		int left = 1;
		int right = n - 1;
		int k = n - 1;
		int x;
		while (left <= right) {
			for (int j = right; j > left; j--) {
				if (mas[j - 1] > mas[j]) {
					x = mas[j - 1];
					mas[j - 1] = mas[j];
					mas[j] = x;
					k = j;
				}
			}
			left = k + 1;
			for (int j = left; j <= right; j++) {
				if (mas[j - 1] > mas[j]) {
					int x = mas[j - 1];
					mas[j - 1] = mas[j];
					mas[j] = x;
					k = j;
				}
			}
			right = k - 1;
		}
	}
}

