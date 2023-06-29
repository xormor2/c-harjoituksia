//copy LKF 2023
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
long kertoma(int n)
{
  long tulos = 1;
  while (n>1) { tulos = tulos*n; n--; }
  return tulos;
}

int main(int argc, char *argv[])
{
  int arg_n, kertoma_n;
  if (argc<2) {
    puts("Tarvitaan yksi komentoriviargumentti. Copyleft LKF 2023.");
    puts("Ohjelma tulostaa kertoman. Käytä yhtä kokonaislukua.");
    exit(1);
  }
  else if (argc>2) {
    puts("Liian monta komentoriviargumenttia. Käytä kokonaislukua.");
    exit(1);
  }
  arg_n=atoi(argv[1]);
  //scanf("%d", &arg_n);
  kertoma_n=kertoma(arg_n);
  printf("%d\n", kertoma_n);
  return 0;
}
