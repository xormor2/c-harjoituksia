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

if (!strcmp(kayttaja.nimi,"Peenis")) { cout << "Hulu Zulu! Siähä rivoi huastelet! Ei sun nimi voi olla " << kayttaja.nimi <<".\n"; }

else if (!strcmp(kayttaja.nimi,"Lade")||!strcmp(kayttaja.nimi,"Lauri"))
	{ cout << "Herra "<< kayttaja.nimi << "!\n"; }

else { cout << "Olet tuntematon minulle, " << kayttaja.nimi << ".\n"; }

return 0;
}
