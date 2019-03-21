#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_MAX 30000
/* This function sorts the array using the insertion sort algorithm, Insertion
 * sort works by comparing the min value to the value next to it 
 * parameters: the array and its size */

void insertion_sort(int *a,int n){ 
/*Function to sort the array using insertion sort */    
int i = 0;/* Loop variables */
int j = 0;
int key = 0;
for(i=1;i<n;i++){
 key = a[i]; /* Storing the value of the element to be compared to */
 j = i-1;
  while( j>= 0 && a[j] > key) { /* Comparing the elements*/
  a[j+1] = a[j]; /*Swapping the values if the above condition is true */
  j--;
  }
  a[j+1] = key; /*Changing the value of key to be the next variable */
}
}

/* THe main method runs the program. It takes the array input and calls
 * insertion_sort() */

int main(void) {
    int my_array[ARRAY_MAX]; /*Declaring the array */
    clock_t start, end;
    int count =0;
    int i;

    while(count < ARRAY_MAX && 1==scanf("%d", &my_array[count])) {
        count+=1; 
    }
    
    start = clock();
    insertion_sort(my_array, count);
    end = clock();
   
    print_array(my_array,count);
    int x;int result;
          
    fprintf(stderr, "%d %f\n", count, (end - start)/ (double)CLOCKS_PER_SEC);
    printf("Enter the number you want to search for\n");
    scanf("%d",&x);
    result= binary_search(my_array,0,count-1,x);
    if(result== -1){
        printf("Item not in list");
    }
    else printf("Found!");

    return EXIT_SUCCESS;
}

/* Function to print the array recursively */
void print_array(int *x, int num) {
    if(num > 0){
        printf("%d\n", x[0]);
        print_array(x+1, num-1);
    
}














