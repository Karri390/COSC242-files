#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_MAX 30000
/* THis function takes the array and size, and sorts them using the selection
 * sort algorithm,  its based on the idea of finding the min and max element in
 * an unsorted array and putting it in its correct position in the sorted
 * array */

void selection_sort(int *a, int n){
    int i;
    int j;
    int min;
    int temp = 0;
     
    for(i=0;i<n-1;i++){
      min = i; /*Set the value of minimum to the current value of i*/
       for(j = i+1;j<n; j++){
           if(a[j] < a[min]){ /*Comparing the min value with the value next to it*/
               min = j;  /*Changing min value */ 
           }
           
            }
       temp = a[i]; /*Swapping the values to sort them */
       a[i] = a[min];
       a[min] = temp;
    }
}

/* The main method takes the array input and calls selection_sort() passing the
 * array and its size */
int main(void) {
    int my_array[ARRAY_MAX];
    clock_t start, end;
    int count = 0;
    int i;

    while(count < ARRAY_MAX && 1==scanf("%d", &my_array[count])){ /* WHile there is still input */
        count+=1; /*COunting the size of the array(Max 30000) */
    }
     
    start = clock();
    selection_sort(my_array, count); /*Selection sort function call */
    end = clock();
   
    for(i = 0; i<count;i++){
        printf("%d\n",my_array[i]);
    }
    
    fprintf(stderr, "%d %f\n",count,(end-start) / (double)CLOCKS_PER_SEC);
    return EXIT_SUCCESS;
}

