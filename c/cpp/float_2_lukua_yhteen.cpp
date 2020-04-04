//2020:
//Muokkasin tämän ohjelman Wikipedian C-kielisestä ohjelmasta artikkelista https://fi.wikipedia.org/wiki/C_(ohjelmointikieli)
//I changed this program from the C-language example program from the
//Wikipedia article https://fi.wikipedia.org/wiki/C_(ohjelmointikieli) to my own C++ example program.
//This program sums 2 standard input-given float-typed numbers together and gives out the float answer to the standard output.
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
