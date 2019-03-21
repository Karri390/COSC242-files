#include <stdlib.h>
#include <stdio.h>

struct ocean_datum {
    int x;
    int y;
    double conc;
};

int main(void) {
    struct ocean_datum o;

    o.x = 2;
    o.y = 3;
    o.conc = 4.5;

    printf("o: (%d, %d, %.2f)\n", o.x, o.y, o.conc);

    return EXIT_SUCCESS;
}

