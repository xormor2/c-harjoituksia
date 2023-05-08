//numbers.c: copyright 2023 LinuxPetteri
//this program is Public Domain but LinuxPetteri must be credited
//for using code from the program
#include <stdio.h>
int main(void)
{
  double x[32][32];
  int i=0;
  double x_single=1;
  puts("First (käänteisluvut):");
  for (i=0;i<32;i++) { x[0][i]=(double)1.0/i; } //laskee käänteislukuja 1.0/i taulukkoon x[0][i]
  for (i=0;i<32;i++) { printf("1/%d = %lf\n", i, x[0][i]); } //tulostaa käänteisluvut taulukosta 0
  puts("Second (toisen potenssit, 2^n, n = {1, 2, 3, 4, ...} eli 2^n = {2, 4, 8, 16, ...}:");
  for (i=0;i<32;i++) { x_single=(double)(2*x_single); x[1][i]=(double)x_single; } //laskee 2^n taulukkoon x[1][i]
  for (i=0;i<32;i++) { printf("%lu\n", (unsigned long int)x[1][i]); }  //tulostaa toisen potenssit taulukosta x[1][i]
  puts("Third (1, 2, 3, ...):");  
  for (i=0;i<32;i++) { x[2][i]=(double)(i+1); }     //laskee käänteisluvut 1, 2, 3, ... taulukkoon x[2][i]
  for (i=0;i<32;i++) { printf("%d ", (int)x[2][i]); }  //tulostaa käänteisluvut taulukosta x[2][i]
  puts("");  
  return 0;
}