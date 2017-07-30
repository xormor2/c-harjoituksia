//painoindeksi.cpp:
//(c) 2013 Lauri Friberg
#include <iostream>
using namespace std;
main()
{
float painoindeksi, paino, pituus;
cout << "paino=";
cin >> paino;
cout << "pituus=";
cin >> pituus;
painoindeksi=(paino)/(pituus*pituus);
cout << painoindeksi << endl;
}

