#include <stdio.h>
#include <stdlib.h>
int candidate;
int num_printed;
int count;

int is_prime(int candidate) {
    int n=0;
    for(n=2;n<candidate;n++){
        if(candidate%n == 0)return 0;
    }
    return 1;
}

int main(void){
 candidate = 2;
 num_printed = 0;
 count = 0;
 
while(num_printed<200){
    if(is_prime(candidate)){
        printf("%5d",candidate);
        num_printed++;
        count++;
        if(count == 10){
            printf("\n");
            count = 0;
        }
    }
    candidate++;
}
    return EXIT_SUCCESS;
}
