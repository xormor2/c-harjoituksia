//fltadd.cpp -- precision problems with float
#include <iostream>
using namespace std;
main()
{
	float a = 2.34E+22;
	float b = a + 1;
	cout << "a = " << a << "\n";
	cout << "b - a = " << b - a << "\n";
}
