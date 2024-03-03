#include <stdio.h>
#include <string.h>

#define YHTEEN 0
#define VAHENNYS 1
#define KERTO 2
#define JAKO 3

void yhteen() //addition, yhteenlasku
{
  puts("a+b");
  double op1, op2;
  printf("a=");
  scanf("%lf",&op1);
  printf("b=");
  scanf("%lf",&op2);
  printf("a+b=%lf\n", op1+op2);
}
void vahennys() //subraction, vahennyslasku
{
  puts("a-b");
  double op1, op2;
  printf("a=");
  scanf("%lf",&op1);
  printf("b=");
  scanf("%lf",&op2);
  printf("a-b=%lf\n", op1-op2);
}
void kerto() //multiplication, kertolasku
{
puts("a*b"); double op1, op2; printf("a="); scanf("%lf",&op1); printf("b="); scanf("%lf",&op2); printf("a*b=%lf\n", op1*op2);
}
void jako() //division, jakolasku
{
puts("a/b"); double op1, op2; printf("a="); scanf("%lf",&op1); printf("b="); scanf("%lf",&op2); printf("a/b=%lf\n", op1/op2);
}
void loppu() { puts("Ohjelma päättyy. Tervemenoa suohon sompailemaan, suomalialainen sälli tai tyty."); }

int main()
{
  char operaatio[20] = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
  void (*funktio[])() = { yhteen, vahennys, kerto, jako };

  printf("kirjoita jokin seuraavista operaatioista: [yhteen, vahennys, kerto, jako]. ohjelma käyttää doubleja: ");
  puts("alku");
  scanf("%s", operaatio);

  puts("jatko");
  if (!strcmp(operaatio, "yhteen")) { puts("if"); funktio[YHTEEN](); }
  else if (!strcmp(operaatio, "vahennys")) { puts("else if"); funktio[VAHENNYS](); }
  else if (!strcmp(operaatio, "kerto")) { funktio[KERTO](); }
  else if (!strcmp(operaatio, "jako" )) { funktio[JAKO](); }
  else { puts("exit()"); return 1; }
  int i=0;
  //for (i=0; i<4; i++) { (*funktio[i])()=loppu; }
  (*funktio[0])()=&loppu;
  (*funktio[0])();
  return 0;
}
