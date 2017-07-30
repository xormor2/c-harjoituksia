/*
painoindeksi.cpp:
CC-No-Commercial Creative Commons No-Commercial Yes-Studying Yes-Private-Use 2013 Lauri Friberg
*/

#include <iostream>
using namespace std;
main()
{
float painoindeksi, paino, pituus;
cout << "paino (kg)=";
cin >> paino;
cout << "pituus (m)=";
cin >> pituus;
painoindeksi=(paino)/(pituus*pituus);
cout << painoindeksi << endl;
}

