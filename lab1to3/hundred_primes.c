#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int candidate=0;
int n=0;
int num_printed=0;
int count=0;

int is_prime(int candidate){
    

    for(n=2;n<candidate;n++){
        if(candidate%n==0){
            return 0;
        }
    }
    return 1;
}

int main(void) {
    candidate = 2;
    num_printed=0;
    
    while (num_printed < 100) {
        if(is_prime(candidate)) {
            printf("%5d ",candidate);
            num_printed+=1;
            count+=1;
            if(count==5){
                printf("\n");
                count=0;
            }
            
        }
        candidate+=1;
    }
return EXIT_SUCCESS;
}




