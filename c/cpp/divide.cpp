// divide.cpp -- integer and floating point division
#include <iostream>
using namespace std;
int main(void)
{
	cout.setf(ios::fixed, ios::floatfield);
	cout << "Integer division: 9/5 = " << 9 / 5 << "\n";
	cout << "Floating-point division: 9.0/5.0 = ";
	cout << 9.0 / 5.0 << "\n";
	cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << "\n";
	cout << "double constants: 1e7/9.0 = ";
	cout << 1.e7 / 9.0 << "\n";
	cout << "float constants: 1e7f/9.0f = ";
	cout << 1.e7f / 9.0f << "\n";
	return 0;
}
