#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int f=0;
    int g=1;
    int temp=0;
    int i=0;
    int count=0;

    for(i=1;i<=40;i++) {
        printf("%10d", g);
        count+=1;
        temp = g;
        g=g+f;
        f=temp;
        if(count==5){
            printf("\n");
            count=0;
        }
    }
    return EXIT_SUCCESS;
}
   
