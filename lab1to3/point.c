#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i=5;
    int *p;

    printf("i is %d, the address of i is %p\n", i , &i);

    p=&i;
    printf("p is %p,whats stored in p is %d\n",p,*p);

    *p=6;
    printf("Whats stored in p is %d, i is also %d\n",*p,i);

    return EXIT_SUCCESS;
}

