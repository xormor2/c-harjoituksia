#include <stdio.h>
#include <stdlib.h>
int main()
{
  char merkkijono[256]; //char isonnettu_kirjain;
  scanf("%s", merkkijono);
  //if (merkkijono[0]<'a' || merkkijono[0]>'z') { puts("Ei tällasta paskaa kiitos."); exit(1); }
  //merkkijono[0]=merkkijono[0]-32;
  if (merkkijono[0] >= 'a' && merkkijono[0] <= 'z') //I modified the code from the GNU licensed omega-rpg source code
  {
    merkkijono[0] += 'A'-'a'; /* capitalise 1st letter */ //I modified the code from the GNU licensed omega-rpg source code
  }
  puts(merkkijono);
  return 0;
}
