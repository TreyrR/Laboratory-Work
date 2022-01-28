#include "pch.h"
#include <cmath>
#include "ArsenDLL2.h"

using namespace System;
using namespace System::Windows::Forms;

namespace ArsenDLL2 {
	double Class1::func(double m, double b, double g, double c, double t) {
		double f = pow(sqrt(m*t*g*t) + abs(c*sin(t)), 1.0 / 3.0);

		return f;
	}

	void Class1::proc(double m, double b, double c, double t, double &z) {
		z = m * cos(b*t*sin(t)) + c;
	}

	double Class1::input(TextBox^ t) {
		return Convert::ToDouble(t->Text);
	}

	void Class1::output(double z, TextBox^ t) {
		t->Text = Convert::ToString(z);
	}
}
