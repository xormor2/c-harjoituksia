#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMBER_OF_CHARS_IN_ARG 256

int main(int argc, char *argv[])
{
#ifdef GNU_LINUX
  puts("GNU/Linux version of the program.");
  puts("Author: Lauri K. Friberg 2023 and ChatGPT (Artificial Intelligence).");
#endif
  char capitalized_string[argc][NUMBER_OF_CHARS_IN_ARG];
  if (argc == 1) { puts("One must fail."); exit(1); }
  int h = 0;
  while (h < argc) {
    strcpy(capitalized_string[h], argv[h]);
    h++;
  }
  int i = 0, j = 0;
  for (i = 1; i < argc; i++) {
    j = 0; //!!! <-- the artificial intelligence added this
    while (capitalized_string[i][j] != '\0') {
      capitalized_string[i][j] += 'A' - 'a';
      j++;
    }
  }
  int k = 1; //I realized by myself from the erroneous output
  while (k < argc) {
    printf("%s ", capitalized_string[k]);
    k++; //I realized by myself too, but the AI wanted to put this on a different line for "clarity"
  }
  puts("");
  return 0;
}
