#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace MassiveLibrary2inform {
	public ref class M2
	{
	public:
		static void M2::enter2mas(int** mas, int n, int m);
		static void M2::output2mas(int** mas, int n, int m, DataGridView^ grd);
		static void M2::output_mas(int* mas, int len, DataGridView^ grid);
		static void M2::minusl9xx(int** mas, int n, int m, int& min2x);
		static void M2::rezmass(int** mas, int* rezmas, int min2x, int n, int m, int& r, int last);
		static void M2::SwapMatrix(int** mas, int& min, int& max, int n, int m, ListBox^l);
	};
}
