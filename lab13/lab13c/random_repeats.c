#include <stdio.h>
#include <stdlib.h>
#include "rr.h"

int main(void) {
    int array_size = 0;
    int *my_array;
    int i = 0;

    printf("Enter the size of the array:\n");
    scanf("%d",&array_size);

    my_array = malloc(array_size * sizeof my_array[0]);
    if(NULL == my_array) {
        fprintf(stderr,"MEMORY ALLOLCATION FAILED \n");
        return EXIT_FAILURE;
    }

    for(i=0;i<array_size;i++){
        my_array[i] = rand()%array_size;
    }
    printf("What's in the array:\n");
    for(i = 0;i<array_size;i++){
        printf("%d ",my_array[i]);
    }
    printf("\n");
    sort_array(my_array, array_size);
    display_repeats(my_array, array_size);
    free(my_array);
    return EXIT_SUCCESS;
}
void sort_array(int *a,int n){
int i=0;
int j=0;
int key=0;
for(i=1;i<n;i++){
    key = a[i];
    j=i-1;
    while(j>=0 && a[j] > key){
        a[j+1]=a[j];
        j--;
    }
    a[j+1] = key;
}



}

void display_repeats(int *a,int n){
int *freq;
int i=0;
int j=0;
int count=0;
freq = malloc(n*sizeof freq[0]);



for(i=0;i<n;i++){
    freq[i] = -1;
}

for(i=0;i<n;i++){
    count = 1;
    for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
            count++;
            freq[j] = 0;
        }
    }
if(freq[i]!=0){
    freq[i] = count;
}
}
for(i=0;i<n;i++){
    if(freq[i]>1){
        printf("%d occurs %d times\n",a[i],freq[i]);
    }
}
free(freq);
}





