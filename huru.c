#include <stdio.h>
int main()
{
  typedef struct { char merkkijono[32]; int luku; } huru_t;
  huru_t huru[] = { { "pölö", 44 }, { "hölö", 33 }, { "pärinä", 22 } };
  int i;
  for (i=0; i<3; i++) {
    printf("%s %d\n", huru[i].merkkijono, huru[i].luku);
  }
  return 0;
}
