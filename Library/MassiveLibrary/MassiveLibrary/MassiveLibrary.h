#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
using namespace Microsoft::VisualBasic;
using namespace System::IO;

namespace MassiveLibrary {
	public ref class MLIB
	{
	public:
		static void enter_mas(int* mas, int n);
		static void output_mas(int* mas, int len, DataGridView^ grid);
		static double minusl7(int* mas, int n);
		static void minusl7xx(int* mas, int n, int &min2x);
		static void addDB(void);
		static void structDB(void);
		static void addDBmas(int* mas, int* rezmas, int len, int r);
		static void rezmass(int* mas, int* rezmas, int min2x, int n, int& r);
		static void vWord(int* list, int lenght, int* rezlist, int rezlenght);
		static void vTxt(DataGridView^ grid, DataGridView^ grid1);
	};
}
