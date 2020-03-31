#include <iostream>

#ifdef GNU_LINUX
#define LASKURI 1000
#endif

#define LASKURI_MUU_KAYTTOJARJESTELMA 100

using namespace std;
int main()
{
	int laskuri_alasp=100;
	
#ifdef GNU_LINUX
	for (laskuri_alasp = LASKURI; laskuri_alasp >= 0; laskuri_alasp--)
	{
		cout << laskuri_alasp << " ";
	}
#endif

#ifndef GNU_LINUX
	for (laskuri_alasp = LASKURI_MUU_KAYTTOJARJESTELMA; laskuri_alasp >= 0; laskuri_alasp--)
	{
		cout << laskuri_alasp << " ";
	}
#endif

	return 0;
}
