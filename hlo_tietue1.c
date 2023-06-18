//Tietue henkilöiden nimet ja iät, copyright LinuxPetteri 2023
#include <stdio.h>
#define FRIBERG 0
#define AUVINEN 1
#define NISKANEN 2
#define RAJALA 3
#define RISSANEN 4
int main()
{
  struct HENKILOT { char nimet[5][32]; unsigned int iat[5]; }; 
  struct HENKILOT henkilot = 
  { 
    "Lauri Friberg",
    "Lauri Auvinen",
    "Lauri Niskanen",
    "Lauri Rajala",
    "Paavo Rissanen",
    42, 60, 40, 47, 99
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
  /* puts(henkilot.nimet[AUVINEN]);
  puts(henkilot.nimet[NISKANEN]);
  puts(henkilot.nimet[RAJALA]);
  puts(henkilot.nimet[PAAVO]); */
  return 0;
}
