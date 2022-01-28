#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace FunctionLibraryInform {
	public ref class FLI
	{
	public:
		static void enter_mas(int* mas, int n);
		static void output_mas(int* mas, int len, DataGridView^ grid);
		static void minusl7xx(int* mas, int n, int& min2x);
		static void rezmass(int* mas, int* rezmas, int min2x, int n, int& r);
		static void DeleteMas(int* mas, int& n, int k);
		static void InterMas(int* mas, int& n, int k, int m);
		static int OdnMas(int* mas, int& n);
		static int Copy100(int* mas, int& n);
		static double IterFunk(double x, double an);
		static void SumIter(double& sum, int n, double &an, double E, double x, ListBox^ l);
		static double vvod(TextBox^ t);
		static void vivod(TextBox^ c, double y);
		static void ProstVstavk(int* mas, int n);
		static void BinaryVstavk(int* rezmas, int n);
		static void ProstPick(int* rezmas, int n);
		static void vvodINfile(DataGridView^ dgv);
		static void VivodOFfile(int len, DataGridView^ dgv);
		static void ProstTrade1(int* mas, int n);
		static void ProstTrade2(int* mas, int n);
		static void ShakerSort(int* mas, int n);
	};
}
