//Algoritmi, laskee kertoman, ohjeena
//käytetty ohjelmointiopaskirjaa
//C-ohjelmointikieli, OtaData
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  if(argc<2)
  {
    puts("Anna kokonaisluku, lasken kertoman.");
    puts("./ohjelmanimi 5");    
    exit(1);
  }  
  else if(argc>2)
  {
    puts("Liian monta parametriä, kokeile ./ohjelmanimi 5");
  	exit(1);
  }  
  int n=1, arg_n=1, tulos=1;
  arg_n=atoi(argv[1]);
  n=arg_n;
  while(n>1) {
    tulos=tulos*n;
    n--;
  }
  printf("%d\n", tulos);
  return 0;
}
