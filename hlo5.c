//Tietue henkilöiden nimet ja iät, copyright LinuxPetteri 2023 (VesiPeikon versio)

#include <stdio.h>

#ifndef YLIM_HLO_STRING
  #define YLIM_HLO_STRING "Paavo Pesusieni"
#endif
#ifndef YLIM_HLO_IKA
  #define YLIM_HLO_IKA 66
#endif

typedef struct {
  char nimi[64];
  unsigned int ika;
} henkilo_t;

int main()
{
  henkilo_t henkilot[] =
  {
   {"Lauri Friberg", 42},
   {"Lauri Auvinen", 60},
   {"Lauri Niskanen", 40},
   {"Lauri Rajala", 47},
   {"Paavo Rissanen", 99},
   {YLIM_HLO_STRING, YLIM_HLO_IKA}
  };

  long henkiloita = sizeof(henkilot) / sizeof(henkilo_t);

  henkilo_t temporary_henkilo = { "xxxxxxxxxxxxxxxxxxxxxx", 00 };
  temporary_henkilo = henkilot[0];
  henkilot[0] = henkilot[1];
  henkilot[1] = temporary_henkilo;
  for(int i=0; i < henkiloita; i++) {
    printf("nimi: %s ikä: %d\n", henkilot[i].nimi, henkilot[i].ika);
  }

  return 0;
}
