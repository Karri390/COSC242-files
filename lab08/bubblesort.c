#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_MAX 300000

void bubble_sort(int *a, int n){

if(n<2){
  return;
}
else {
 int i,j;
 for(i=0;i<n;i++){
     for(j=0;j<n-i-1;j++){
         if(a[j]>a[j+1]){
             swap(&a[j],&a[j+1]);
         }
     }


 
}


}
}


void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}


int main(void) {
    int my_array[ARRAY_MAX];
   
    int count = 0;
    int i;
    clock_t start,end; 

    while(count <ARRAY_MAX && scanf("%d", &my_array[count])==1) {
        count+=1;
    }

    start = clock();
    bubble_sort(my_array,count);
    end = clock();
    
    printf("\n");   

    for(i=0;i<count;i++){
        printf("%d\n",my_array[i]);
    }

    printf("\n");

    fprintf(stderr,"%d %f \n", count, (end-start)/(double)CLOCKS_PER_SEC);

    return EXIT_SUCCESS;
}
   




