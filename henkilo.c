#include <stdio.h>
int main()
{
typedef struct { char nimi[32]; unsigned int ika; } henkilo;
henkilo Lauri = { "Lauri Kalervo Friberg", 42 };
puts(Lauri.nimi);
printf("%u\n", Lauri.ika);
return 0;
}
