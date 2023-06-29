#include <stdio.h>
long kertoma(int n)
{
  long tulos = 1;
  while (n>1) { tulos = tulos*n; n--; }
  return tulos;
}

int main()
{
  int arg_n, kertoma_n;
  scanf("%d", &arg_n);
  kertoma_n=kertoma(arg_n);
  printf("%d\n", kertoma_n);
  return 0;
}
