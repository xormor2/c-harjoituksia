#include <stdio.h>

int main()
{
  char *array[] = { "Zulu", "Paavi", "Vodun", "Vanem" };
  printf("%s %s %s %s\n", array[0], array[1], array[2], array[3]);
  printf("%c%c%c%c\n", array[0][0], array[0][1], array[0][2], array[0][3]);
  printf("%c%c%c%c%c\n", *(*(array+1)+0), *(*(array+1)+1), *(*(array+1)+2), *(*(array+1)+3), *(*(array+1)+4));
  return 0;
}
