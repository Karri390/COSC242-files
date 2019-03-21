#include <stdio.h>
#include <stdlib.h>

/* "SWAP WANTS THE MEMORY ADDRESS OF TWO INTEGERS */

void swap(int *x, int *y) {
    int temp = *x; /* temp gets the value living at memory address x. */
    *x = *y;       /* the value at x gets the value at y */
    *y = temp;      /* the value at y gets the variable temp */
}

int main (void) {
    int a = 3;
    int b = 4;

    printf("a = %d, b = %d\n",a,b);
    swap(&a,&b); /* ppass the addresses of a and b */
    printf("a = %d, b=%d\n",a,b);
    
    return EXIT_SUCCESS;

    
}

