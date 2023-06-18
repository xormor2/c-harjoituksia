//Laurit, copyright Pami 2023
#include <stdio.h>
#define FRIBERG 0
#define AUVINEN 1
#define NISKANEN 2
#define RAJALA 3
int main()
{
  char nimet[4][32] = { "Lauri Friberg, 42v7kk", "Lauri Auvinen, väh. 60v", "Lauri Niskanen, nelikymppinen", "Lauri Rajala, 47v" };
  puts(nimet[FRIBERG]);
  puts(nimet[AUVINEN]);
  puts(nimet[NISKANEN]);
  puts(nimet[RAJALA]);
  return 0;
}
