//copyleft Lauri K. Friberg 2023. You may use this
//program if you credit it to Lauri K. Friberg
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc==1)
  {
    puts("copyleft Lauri K. Friberg 2023");  	 
  	 puts("The program needs a commandline argument.");
    puts("The commandline argument needs to be an integer.");
  	 exit(1);
  }
  else
  {
    int number = atoi(argv[1]);
    if (number%2==0) { printf("The number %d is even.\n", number); }
    if (number%2==1) { printf("The number %d is odd.\n", number); }
  }
  return 0;
}