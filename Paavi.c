#include <stdio.h>
int main()
{
  typedef struct
  {
    char asema[32]; char nimi[32]; int ika;
  } katolisen_kirkon_jasen_t;

  katolisen_kirkon_jasen_t paavi = { "Paavi", "Urbanus IV", 99 };
  printf("Asema: %s, Nimi: %s, Ikä: %d vuotta\n", paavi.asema, paavi.nimi, paavi.ika);
  return 0;
}
