#include <stdio.h>
//#!/bin/python3
int toiminto(int puput_arvo, int porkkanat_arvo) {
	int puput = puput_arvo;
	int porkkanat = porkkanat_arvo;
	printf("puput, porkkanat = %d, %d\n", puput, porkkanat);
	//printf(puput, porkkanat);
	porkkanat=puput;
	printf("puput, porkkanat = %d, %d\n", puput, porkkanat);
	//printf(puput, porkkanat);
	return 0;
}
int main() {
  int palautusarvo = toiminto(15,10);
  printf("funktion toiminto() palautusarvo = %d\n", palautusarvo);
  palautusarvo=toiminto(30,20);
  printf("funktion toiminto() palautusarvo = %d\n", palautusarvo);
  palautusarvo = toiminto(80,40);
  printf("funktion toiminto() palautusarvo = %d\n", palautusarvo);
  return 0;
}
