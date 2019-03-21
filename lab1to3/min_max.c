#include <stdlib.h>
#include <stdio.h>

#define ARRAY_SIZE 10

void max_min(int *a, int n, int *max,int *min){
int i;
*max = a[0];
*min = a[0];

for(i=0;i<n;i++){
    if(a[i]>*max){
       *max = a[i];
    }
    if(a[i]<*min){
       *min = a[i];
    }
}
}


int main(void) {

  int my_array[ARRAY_SIZE];
  int counter = 0;
  int i;
  int biggest,smallest;
  
  while(counter < ARRAY_SIZE && 1 == scanf("%d", &my_array[counter])) {
      counter+=1;
  }
  max_min(my_array,counter, &biggest, &smallest);
  for(i = 0; i<counter;i++){
      printf("%d  ", my_array[i]);
  }
  printf("\n");
  printf("Max value is %d, Min value is %d\n", biggest, smallest);
  
  for(i = 0;i<counter;i++){
      printf("%d  ", my_array[i]);
  }

  printf("\n");


    return EXIT_SUCCESS;
}

