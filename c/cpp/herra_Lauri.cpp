#include <iostream>
#include <cstring>

using namespace std;
int main()
{

struct struct_kayttaja
{
char nimi[256];
} kayttaja;

cout << "Nimesi? ";
cin >> kayttaja.nimi;
if (!strcmp(kayttaja.nimi,"Peenis")) { cout << "Zulu!\n"; }
if (!strcmp(kayttaja.nimi,"Lade")||!strcmp(kayttaja.nimi,"Lauri"))
	{ cout << "Herra!\n"; }
cout << kayttaja.nimi << "\n";
return 0;
}
