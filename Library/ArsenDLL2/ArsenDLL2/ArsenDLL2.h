#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace ArsenDLL2 {
	public ref class Class1 {
	public: static double func(double m, double g, double c, double t, double b);
			static double input(TextBox ^t);
			static void proc(double m, double b, double c, double t, double &z);
			static void output(double f, TextBox ^t);
	};
}
