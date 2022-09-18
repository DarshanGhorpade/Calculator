// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include <math.h>
#include "calculator.h"

using namespace std;

int main() {
	double a, b;
	char op;

	cout << "---------------------------Instructions---------------------------" << endl;
	cout << "Operations which operate on only one number\n";
	cout << " r : squareroot\n s : square\n t : 10^x\n a : |x|\n e : ln(x)\n l : log(x)\n q : 1/x\n";
	cout << "Operations which operate on two numbers\n";
	cout << " + : addition\n - : substraction\n * : multiplication\n / : division\n ^ : x^y\n % : x mod y\n";
	cout << "------------------------------------------------------------------" << endl;
	cout << "Enter first number: ";
	cin >> a;

	cout << "Enter operation: ";
	cin >> op;

	if (op == 'r') { // squareroot
		squareroot(a);
	}
	else if(op == 's') { // square a^2
		cout << a << "^2" << " = " << pow(a, 2);
	}
	else if (op == 't') { // 10^a
		cout << "10^" << a << " = " << pow(10, a);
	}
	else if (op == 'a') { // abs(a) or |a|
		cout << "|" << a << "|" << " = " << abs(a);
	}
	else if (op == 'e') { // ln(a)
		findLogE(a);
	}
	else if (op == 'l') { // log10(a)
		findLog10(a);
	}
	else if (op == 'q') { // quotient 1/a
		divide(1, a);
	}
	else {
		cout << "Enter second number: ";
		cin >> b;
		switch (op) {
		case '+': // addition
			cout << a << " + " << b << " = " << a + b;
			break;
		case '-': // substraction
			cout << a << " - " << b << " = " << a - b;
			break;
		case '*': // multiplication
			cout << a << " x " << b << " = " << a * b;
			break;
		case '/': // division
			divide(a, b);
			break;
		case '^': // a^b
			powerBofA(a, b);
			break;
		case '%': // a mod b
			cout << a << " mod " << b << " = " << findMod(a, b);
			break;
		}
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Functions in calculator: 
//   1. +, -, x, /
//   2. ln, log, 10^x, x^y, sqrt(x), x^2
//   3. 1/x, |x|, exp, mod
//   4. In the future, to open this project again, go to File > Open > Project and select the .sln file
