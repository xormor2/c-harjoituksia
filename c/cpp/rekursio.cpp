#include <iostream>
using namespace std;

int i=0;

int rekur() {
cout << "rekursio alkaa: ";
if (i<10) { cout << i << endl; i++; rekur(); }
cout << i << endl;
cout << "rekursio loppuu: ";
i--;
}

main()
{
rekur();
cout << "Ohjelma loppuu!\n";
}

