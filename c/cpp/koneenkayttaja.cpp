#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
	struct kayttaja_struct { char nimi[256]; unsigned int ika; char kahvinjuonti; } kayttaja;

	cout << "Moi! Olen tietokone. Haluan tietää sinusta asioita. Mikä on nimesi? ";
	cin >> kayttaja.nimi;

	cout << "Hei, " << kayttaja.nimi << "! Olet siis " << kayttaja.nimi << " ja olet tietokoneenkäyttäjä.\n";
	cout << "Kerro lisää. Mikä on ikäsi? ";
	cin >> kayttaja.ika;

	cout << "Siis ikäsi on " << kayttaja.ika << ". Sehän on hienoa " << kayttaja.nimi << "!\n";

	cout << "Juotko kahvia? "; cin >> kayttaja.kahvinjuonti;

	if (kayttaja.kahvinjuonti=='k'||kayttaja.kahvinjuonti=='K') { cout << "Kupit kaakkoon!\n"; }
	else { cout << "Muistathan juoda vettä säännöllisesti!\n"; }

	cout << "Hyvää illanjatkoa!\n";

	return 0;
}
