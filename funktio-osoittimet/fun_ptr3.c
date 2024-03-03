#include <stdio.h>
int fun(int x)
{
printf("the called value of x, from f(x): %d\n",x);
return (x-255);
}

int main()
{
int (*fun_ptr)(int)=&fun;
int y=(*fun_ptr)(255);
printf("the returned value of y=f(x): %d\n",y);
puts("the address of fun_ptr pointed address value and the address &fun:");
printf("fun_ptr:  %p\n&fun:     %p\n", fun_ptr, &fun);
printf("&fun_ptr: %p\n*fun_ptr: %p\n", &fun_ptr, *fun_ptr);
return 0;
}
