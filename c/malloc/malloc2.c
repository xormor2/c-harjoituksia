#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *p = (char *) malloc(100);
  if ( p == NULL)
  {
    printf("Error: Out of Memory \n");
    exit(1);
  }

  //*p = 'y';
  strcpy(p,"hellou theer!");
  printf("%s\n", p);
  free(p);

  return 0;
}
