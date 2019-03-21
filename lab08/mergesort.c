#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_MAX 300000

void merge_sort(int *a, int *w, int n){

if(n<2){
  return;
}
else {
 int i,j,k;
 int n1 = n/2;
 int *b = a+n1;
 int n2 = n-n1;


 /*Sort the left half */
 merge_sort(a,w,n1);
 /*Sort the right half */
 merge_sort(b,w,n2);

 /*Merge the two halves into w */
 i = 0;
 j = 0;
 k = 0;
 while(i<n1 && j<n2) {
     if(a[i] <= b[j]){
         /*Get the smallest value from a */
         w[k++] = a[i++];
     } else {
         /* get the smallest value from b */
         w[k++] = b[j++];
     }
 }
     /*Copy remaining elements from a*/
     while(i<n1){
         w[k++] = a[i++];
     }
     /*Copy remaining elements from b*/
     while(j<n2) {
         w[k++] = b[j++];
     }
     /*copy sorted elements back to a */
     for(i=0;i<n;i++) {
         a[i] = w[i];
     }
}


}



int main(void) {
    int my_array[ARRAY_MAX];
    int work_space[ARRAY_MAX];
    int count = 0;
    int i;
    clock_t start,end; 

    while(count <ARRAY_MAX && scanf("%d", &my_array[count])==1) {
        count+=1;
    }

    start = clock();
    merge_sort(my_array,work_space,count);
    end = clock();
    
    printf("\n");   

    for(i=0;i<count;i++){
        printf("%d\n",my_array[i]);
    }

    printf("\n");

    fprintf(stderr,"%d %f \n", count, (end-start)/(double)CLOCKS_PER_SEC);

    return EXIT_SUCCESS;
}
   




