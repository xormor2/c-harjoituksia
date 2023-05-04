#include <stdio.h>
#include <string.h>
int main()
{
char psykoosit[3][24];
strcpy(psykoosit[0], "maaninen"); strcpy(psykoosit[1], "depressiivinen"); strcpy(psykoosit[2],"skitsofreeninen");
printf("%s %s %s\n", psykoosit[0], psykoosit[1], psykoosit[2]);
return 0;
}