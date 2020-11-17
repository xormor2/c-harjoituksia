//copyleft Creative Commons 2020 Lauri K. Friberg, count and display values of equation y=2x+2

#include <stdio.h>

#define GNU_LINUX

#ifdef GNU_LINUX
#define MAX_VALUE_OF_X 9
#endif

#ifndef GNU_LINUX
#define MAX_VALUE_OF_X 10
#endif

int main()
{
int x=0;
puts("x = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }");
printf("y = { ");

for (x=0;x<=MAX_VALUE_OF_X;x++)
{
printf("%d", 2*x+2);

if (x<MAX_VALUE_OF_X) { printf(", "); } //this prints a string to stdout, containts the decimal y=2x+2 value,
       				        //formatted with %d
else if (x==MAX_VALUE_OF_X) { puts(" }"); } //this puts a string to stdout
}

return 0;
}
