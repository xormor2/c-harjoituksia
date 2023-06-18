//Tietue henkilöiden nimet ja iät, copyright LinuxPetteri 2023
#include <stdio.h>
#ifndef HLO_LUKUM
#define HLO_LUKUM 6
#endif
#define FRIBERG 0
#define AUVINEN 1
#define NISKANEN 2
#define RAJALA 3
#define RISSANEN 4
#define YLIM_HLO 5
#ifndef YLIM_HLO_STRING
#define YLIM_HLO_STRING "Paavo Pesusieni"
#endif
#ifndef YLIM_HLO_IKA
#define YLIM_HLO_IKA 66
#endif
int main()
{
  struct HENKILOT { char nimet[HLO_LUKUM][32]; unsigned int iat[HLO_LUKUM]; };
  struct HENKILOT henkilot =
  {
    "Lauri Friberg",
    "Lauri Auvinen",
    "Lauri Niskanen",
    "Lauri Rajala",
    "Paavo Rissanen",
    YLIM_HLO_STRING,
    42, 60, 40, 47, 99, YLIM_HLO_IKA
  };
  /* char nimet[5][32] =
  {
    "Lauri Friberg, 42v7kk",
    "Lauri Auvinen, väh. 60v",
    "Lauri Niskanen, nelikymppinen",
    "Lauri Rajala, 47v",
    "Paavo Rissanen"
  }; */
  printf("nimi: %s ikä: %d\n", henkilot.nimet[FRIBERG], henkilot.iat[FRIBERG]);
  printf("nimi: %s ikä: %d\n", henkilot.nimet[AUVINEN], henkilot.iat[AUVINEN]);
  printf("nimi: %s ikä: %d\n", henkilot.nimet[NISKANEN], henkilot.iat[NISKANEN]);
  printf("nimi: %s ikä: %d\n", henkilot.nimet[RAJALA], henkilot.iat[RAJALA]);
  printf("nimi: %s ikä: %d\n", henkilot.nimet[RISSANEN], henkilot.iat[RISSANEN]);
  printf("nimi: %s ikä: %d\n", henkilot.nimet[YLIM_HLO], henkilot.iat[YLIM_HLO]);
  /* puts(henkilot.nimet[AUVINEN]);
  puts(henkilot.nimet[NISKANEN]);
  puts(henkilot.nimet[RAJALA]);
  puts(henkilot.nimet[PAAVO]); */
  return 0;
}
