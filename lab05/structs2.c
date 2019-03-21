#include <stdio.h>
#include <stdlib.h>

struct ocean_datum {
    int x;
    int y;
    double conc;
};

void print_ocean_datum(struct ocean_datum *o){
    printf("%d %d %.4f\n", o->x,o->y,o->conc);
}

int read_ocean_datum(struct ocean_datum *o){
    return 3==scanf("%d %d %lg", &o->x, &o->y, &o->conc);
}

int main(void) {
    struct ocean_datum my_datum;

    while(read_ocean_datum(&my_datum)) {
        print_ocean_datum(&my_datum);
    }
    return EXIT_SUCCESS;
}

