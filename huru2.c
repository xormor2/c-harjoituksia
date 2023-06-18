#include <stdio.h>
int main()
{
  puts("OHJELMAN SUORITUS ALKAA");
  typedef struct { char merkkijono[32]; int luku; } huru_t;
  huru_t huru[] = { { "pölö", 44 }, { "hölö", 33 }, { "pärinä", 22 } };
  long huruja = sizeof(huru) / sizeof(huru_t);
  printf("Hurujen lukumäärä: %d\n", huruja);
  int i;
  for (i = 0; i < huruja; i++) {
    printf("huru indeksinumero: %d, huru: %s, huruluku:%d\n", i, huru[i].merkkijono, huru[i].luku);
  }
  puts("OHJELMAN SUORITUS PÄÄTTYY");
  return 0;
}
