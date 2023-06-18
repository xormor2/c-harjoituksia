#include <stdio.h>

typedef struct {
    char merkkijono[32];
    int luku;
} huru_t;

int main()
{
    puts("OHJELMAN SUORITUS ALKAA");

    huru_t huru[] = {
        { "pölö", 44 },
        { "hölö", 33 },
        { "pärinä", 22 }
    };

    const size_t huruja = sizeof(huru) / sizeof(huru_t);
    printf("Hurujen lukumäärä: %zu\n", huruja);

    for (size_t i = 0; i < huruja; i++) {
        printf("Huru indeksinumero: %zu, merkkijono: %s, luku: %d\n", i, huru[i].merkkijono, huru[i].luku);
    }

    puts("OHJELMAN SUORITUS PÄÄTTYY");

    return 0;
}
