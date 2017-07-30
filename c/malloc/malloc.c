#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *p = (char *) malloc(10000000000000000);
  if ( p == NULL)
  {
    printf("Error: Out of Memory \n");
    exit(1);
  }

  *p = 'y';

  return 0;
}
