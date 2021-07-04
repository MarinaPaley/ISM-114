#include <iostream>
#include "Fraction.h"

using namespace std;

int main() {
	setlocale(0, "");

	Fraction f1(105, 1234);
	cout << "Первое число (f1): ";
	f1.print();

	Fraction f2(11, 9999);
	cout << "Второе число (f2): ";
	f2.print();

	cout << "f1 + f2: ";
	(f1 + f2).print();

	cout << "f1 - f2: ";
	(f1 - f2).print();

	cout << "f1 * f2: ";
	(f1 * f2).print();

	cout << ((f1 == f2) ? "f1 = f2" : "f1 != f2") << endl;
}