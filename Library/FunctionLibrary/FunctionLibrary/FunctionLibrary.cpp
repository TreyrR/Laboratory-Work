#include "pch.h"
#include "cmath"
#include "FunctionLibrary.h"

using namespace System;
using namespace System::Windows::Forms;

namespace LIbFuncdll {
	double LIB::vvod(TextBox^ t)
	{
		return Convert::ToDouble(t->Text);
	}
	void LIB::vivod(TextBox^ c, double y)
	{
		c->Text = Convert::ToString(y);
	}
	double LIB::func(double a, double b, double t, double y)
	{
		y = pow(exp(1), (-b * t)) * sin(a * t + b) - sqrt(abs(b * t + a));
		return y;
	}
	void LIB::proc(double a, double b, double t, double& s)
	{
		s = b * sin(a * pow(t, 2) * cos(2 * t)) - 1;
	}
	void LIB::uslfunc(double x, double y, double a, double b, double &z, double &n)
	{
		if ((x > 0) && (y > 0))
		{
			double max = a / x;
			if (b / x > max)
			{
				max = b / x;
			}
			if (sqrt(y) > max)
			{
				max = sqrt(y);
			}
			z = max;
			n = 1;
		}
		else if ((x < 0) && (y > 0))
		{
			double min;
			if (a * pow(x, 3) > b * (y * y))
				 min = b * (y * y);
			else
				 min = a * pow(x, 3);
			z = min;
			n = 2;
		}
		else
		{
			z = pow(2, x + y);
			n = 3;
		}
	}
	void LIB::funclab5(double x, double &y)
	{
		const double pi = acos(-1);
		y = 1 / (x + 2 * pi) - sin(x);
	}
	void LIB::reg(double a, double b, double h, double x, int n, ListBox^ l, double& sum, double& y)
	{
		l->Items->Clear();
		n = Convert::ToInt32(round((b - a) / h) + 1);
		sum = 0;
		x = a;
		for (double i; i < n; i++)
		{
			funclab5(x, y);
			if (y > 0)
			{
				sum = sum + y;
			}
			x = floor(x * 100.0) / 100.0;
			y = floor(y * 10000.0) / 10000.0;
			l->Items->Add("       " + x.ToString() + "                      " + y.ToString());
			x = x + h;
		}
	}
	double LIB::funclab6(double a, double x)
	{
		double z = (pow((a * x), 2) * pow(1 / (pow((a + x), 2)), 1/3)) / a * log(a + x * x);
		return z;
	}
	void LIB::postusl(double a, double &x, double xn, double xk, double dx, double pr, double sum, ListBox^ l, double& f, double& z)
	{
		l->Items->Clear();
		sum = 0;
		pr = 1;
		x = xn;
		f = 0;
		do
		{
			z = funclab6(a, x);
			if (z < a)
				pr = pr * z;
			else if (z>=a)
				sum = sum + z;
			x = floor(x * 100.0) / 100.0;
			z = floor(z * 10000.0) / 10000.0;
			l->Items->Add("       " + x.ToString() + "                      " + z.ToString());
			x = x + dx;
		} 
		while (x < xk);
		f = sum + pr;
	}
}





