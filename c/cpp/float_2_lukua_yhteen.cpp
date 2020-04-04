//2020:
//Muokkasin tämän ohjelman Wikipedian C-kielisestä ohjelmasta artikkelista https://fi.wikipedia.org/wiki/C_(ohjelmointikieli)
//I changed this program from the C-language example
//program to my own C++ example program Wikipedia article https://fi.wikipedia.org/wiki/C_(ohjelmointikieli)
//This program sums 2 standard input-given numbers together and gives out the answer to the standard output.
#include <iostream>
using namespace std;

int main(void)
{
    float a, b, c;
    cout << "Anna 1. luku:\n";
    cin >> a;
    cout << "Anna 2. luku:\n";
    cin >> b;
    c = a + b;
    cout << "Antamiesi lukujen summa on " << c << "\n";
    return 0;
}
