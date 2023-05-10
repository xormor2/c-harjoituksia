//GNU v2 copyleft Lauri K. Friberg
#include <stdio.h>  //puts(...)
#include <stdlib.h> //exit(...)
#include <string.h> //strcpy(...)
int main(int argc, char *argv[])
{
  char capitalized_string[256];
  if(argc==1) { puts("One must fail."); exit(1); }
  strcpy(capitalized_string, argv[1]);
  int i=0;
  while (capitalized_string[i] != '\0') {
    capitalized_string[i] += 'A'-'a';
    i++;
  }
  puts(capitalized_string);
  return 0;
}
