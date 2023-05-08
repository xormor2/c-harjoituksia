//numbers.c: copyright 2023 LinuxPetteri
//this program is Public Domain but LinuxPetteri must be credited
//for using code from the program
#define TAULUKKO_RIVIT_MAX 32
#define TAULUKKO_SOLUT_MAX 32
#include <stdio.h>
int main(void)
{
  double x[TAULUKKO_RIVIT_MAX][TAULUKKO_SOLUT_MAX];
  int i=0;
  double x_single=1;
  puts("First (käänteisluvut):");
  for (i=0;i<TAULUKKO_SOLUT_MAX;i++) { x[0][i]=(double)1.0/i; } //laskee käänteislukuja 1.0/i taulukkoon x[0][i]
  for (i=0;i<TAULUKKO_SOLUT_MAX;i++) { printf("1/%d = %lf\n", i, x[0][i]); } //tulostaa käänteisluvut taulukosta 0
  puts("Second (toisen potenssit, 2^n, n = {1, 2, 3, 4, ...} eli 2^n = {2, 4, 8, 16, ...}:");
  for (i=0;i<TAULUKKO_SOLUT_MAX;i++) { x_single=(double)(2*x_single); x[1][i]=(double)x_single; } //laskee 2^n taulukkoon x[1][i]
  for (i=0;i<TAULUKKO_SOLUT_MAX;i++) { printf("%lu\n", (unsigned long int)x[1][i]); }  //tulostaa toisen potenssit taulukosta x[1][i]
  puts("Third (1, 2, 3, ...):");
  for (i=0;i<TAULUKKO_SOLUT_MAX;i++) { x[2][i]=(double)(i+1); }     //syöttää luvut 1, 2, 3, ... taulukkoon x[2][i]
  for (i=0;i<TAULUKKO_SOLUT_MAX;i++) { printf("%d ", (int)x[2][i]); }  //tulostaa luvut taulukosta x[2][i]
  puts("");
  return 0;
}
