#include <stdio.h>
int main()
{
struct POTUS { int gaab, haab, laab; };
struct POTUS American_President = { 1, 2, 3 };
//American_President.gaab=1, American_President.haab=2, American_President.laab=3;
printf("%d %d %d\n", American_President.gaab, American_President.haab, American_President.laab);
return 0;
}
