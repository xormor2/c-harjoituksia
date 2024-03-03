#include <stdio.h>
void fun(int x)
{
printf("%u\n",x);
//return 0;
}

int main()
{
void (*fun_ptr)(int)=&fun;
(*fun_ptr)(255);
printf("%p %p\n", fun_ptr, &fun);
return 0;
}
