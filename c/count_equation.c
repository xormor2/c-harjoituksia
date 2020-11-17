//copyleft Creative Commons 2020 Lauri K. Friberg, count and display values of equation y=2x+2
#include <stdio.h>

//#define GNU_LINUX

#ifdef GNU_LINUX
#define MAX_VALUE_OF_X 9
#endif

#ifndef GNU_LINUX
#define MAX_VALUE_OF_X 10
#endif

int main()
{
int x=0;

printf("x = { ");
for (x=0; x<=MAX_VALUE_OF_X; x++)
{
printf("%d",x);
if (x < MAX_VALUE_OF_X) { printf(", "); }
else if (x == MAX_VALUE_OF_X) { puts(" }"); }
}

printf("y = { ");
for (x=0; x<=MAX_VALUE_OF_X; x++)
{
printf("%d", 2*x+2);
if (x<MAX_VALUE_OF_X) { printf(", "); }
else if (x==MAX_VALUE_OF_X) { puts(" }"); } //this puts a string to stdout
}

return 0;
}
