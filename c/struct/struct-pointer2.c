#include <stdio.h>
int main(void)
{
  struct foo
  {
    int x;
    float y;
  };

  struct foo var;
  struct foo* pvar;

  pvar = &var;

  var.x = 5;
  printf("%d\n", var.x);

  (&var)->y = 14.3;
  printf("%.1f\n", (&var)->y);

  pvar->y = (float)22.4;
  printf("%.1f\n", (float)pvar->y);
//  float arvo = pvar->y;
//  printf("%f\n", arvo);

  (*pvar).x = 6;
  printf("%d\n", (*pvar).x);

  return 0; // success!
}
