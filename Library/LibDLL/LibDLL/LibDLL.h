// LibDLL.h

#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace LibDLL {

	public ref class Class1
	{
	public:
		static void generate_array(int*, int);
		static void display_array(int*, int, DataGridView^);
		static int min3(int*, int);
		static void generate_res(int*, int*, int, int);
		static void delete_elem(int*, int&, int);
	};
}
