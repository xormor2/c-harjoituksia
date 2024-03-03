#include <stdio.h>
#include <stdlib.h>

extern long power(int x, int n);

int main(int argc, char *argv[])
{
	printf("komentoriviargumenttien lukumäärä = %d\n",argc);
	if (argc<=2 || argc>3) { printf("Tarvitaan kaksi kokonaislukua komentoriviargumentteina.\n"); exit(1); }
	int kanta, ekspon;
	long potenssi;
	kanta = atoi(argv[1]);
	ekspon = atoi(argv[2]);
	potenssi = power(kanta, ekspon);
	printf("%d potenssiin %d on %ld\n",kanta,ekspon,potenssi);
	return 0;
}
