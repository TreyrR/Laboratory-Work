#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace LIbFuncdll {
	public ref class LIB
	{
	public:
		static double vvod(TextBox^ t);
		static void vivod(TextBox^ c, double y);
		static double func(double a, double b, double t, double y);
		static void proc(double a, double b, double t, double& s);
		static void uslfunc(double x, double y, double a, double b, double& z, double& n);
		static void funclab5(double x, double& y);
		static void reg(double a, double b, double h, double x, int n, ListBox^ l, double& sum, double& y);
		static double funclab6(double a, double x);
		static void postusl(double a, double &x, double xn, double xk, double dx, double pr, double sum, ListBox^ l, double& f, double& z);
	};
}
