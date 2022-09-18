#include<iostream>
using namespace std;

void divide(double a, double b) {
	try {
		if (b == 0) {
			throw "Cannot divide by zero";
		}
		cout << a << " / " << b << " = " << a / b;
	}
	catch (const char* divideByZeroException) {
		cout << divideByZeroException << endl;
	}
}

void squareroot(double a) {
	try {
		if (a < 0) {
			throw "Invalid input";
		}
		cout << "sqrt(" << a << ") = " << sqrt(a);
	}
	catch (const char* invalidInputException) {
		cout << invalidInputException << endl;
	}
}

double findMod(double a, double b) {
	double mod;
	if (a < 0) {
		mod = -a;
	}
	else {
		mod = a;
	}
	if (b < 0) {
		b = -b;
	}
	while (mod >= b) {
		mod = mod - b;
	}

	if (a < 0) {
		return -mod;
	}
	return mod;
}

void findLog10(double a) {
	try {
		if (a <= 0) {
			throw "Invalid input";
		}
		cout << "log10(" << a << ") = " << log10(a);
	}
	catch (const char* invalidInputException) {
		cout << invalidInputException << endl;
	}
}

void findLogE(double a) {
	try {
		if (a <= 0) {
			throw "Invalid input";
		}
		cout << "ln(" << a << ") = " << log(a);
	}
	catch (const char* invalidInputException) {
		cout << invalidInputException << endl;
	}
}
void powerBofA(double a, double b) {
	try {
		if (a == 0 && b < 0) {
			throw "Invalid input";
		}
		cout << a << "^" << b << " = " << pow(a, b);
	}
	catch (const char* invalidInputException) {
		cout << invalidInputException << endl;
	}
}