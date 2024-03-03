#include <stdio.h>
void loppu()
{
	puts("Ohjelma loppui");
}
void toimiiko() { puts("Kokeilu, toimaak"); }
int main()
{
void (*funktio)()=&loppu;
funktio();
funktio=&toimiiko;
funktio();
return 0;
}