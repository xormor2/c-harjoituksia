#include <stdio.h>
#include <stdlib.h>
int main()
{
  char merkkijono[256];
  scanf("%s", merkkijono);
  if (merkkijono[0]<'a' || merkkijono[0]>'z') { puts("Ei tällasta paskaa kiitos."); exit(1); }
  merkkijono[0]=merkkijono[0]+'A'-'a';
  puts(merkkijono);
  return 0;
}
