#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a[] = {5,4,3,2,1};
    printf("    a: %p\n", a);
    printf("&a[0]: %p\n", &a[0]);
    printf(" a[0]: %d\n", a[0]);

    return EXIT_SUCCESS;
}

