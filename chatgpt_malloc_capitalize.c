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
  char **capitalized_string = malloc(argc * sizeof(char*));
  if (capitalized_string == NULL) {
    fprintf(stderr, "Error: memory allocation failed\n");
    exit(EXIT_FAILURE);
  }
  for (int i = 0; i < argc; i++) {
    capitalized_string[i] = malloc(NUMBER_OF_CHARS_IN_ARG * sizeof(char));
    if (capitalized_string[i] == NULL) {
      fprintf(stderr, "Error: memory allocation failed\n");
      exit(EXIT_FAILURE);
    }
  }
  if (argc == 1) { puts("One must fail."); exit(EXIT_FAILURE); }
  int h = 0;
  while (h < argc) {
    strcpy(capitalized_string[h], argv[h]); //realized h1 and h must be used
    h++;
  }
  int i = 0, j = 0;
  for (i = 0; i < argc; i++) {
    j = 0; //from the AI
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
  for (int i = 0; i < argc; i++) {
    free(capitalized_string[i]);
  }
  free(capitalized_string);
  return 0;
}
