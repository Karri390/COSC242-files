#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    /* variable declaration */
    int i = 0;
    double j = 1.0;

    for (i=0; i<10; i++){
        printf("%d %10.5f %10.5f\n", i, j, sqrt(j));
        j *=2;

       }
    return EXIT_SUCCESS;
}

