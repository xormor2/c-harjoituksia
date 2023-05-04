//numbers.c: copyright 2023 LinuxPetteri
//this program is Public Domain but LinuxPetteri must be credited
//for using code from the program
#include <stdio.h>
int main(void)
{
double x[32][32];
int i=0;
double x_single=1;
puts("First:");
for (i=0;i<32;i++) { x[0][i]=(double)1.0/i; }
for (i=0;i<32;i++) { printf("%lf\n", x[0][i]); }
puts("Second:");
for (i=1;i<32;i++) { x_single=(double)(2*x_single); x[1][i]=(double)x_single; }
for (i=0;i<32;i++) { printf("%lf\n", x[1][i]); }
for (i=0;i<32;i++) { x[2][i]=(double)i; }
for (i=0;i<32;i++) { printf("%lf ", (double)x[2][i]); }
return 0;
}
