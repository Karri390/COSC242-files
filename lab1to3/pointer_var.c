#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 5;
    int *p;

    printf("i is %d, the address of is %p\n",i,(void*)&i);

    p=&i;
    printf("p is %p, what's stored at p is %d\n",p,*p);
    *p = 6;
    printf("what's stored at p is %d, i is also %d\n", *p,i);

    return EXIT_SUCCESS;
}

