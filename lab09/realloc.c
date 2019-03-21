#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

static void array_print(int *a,int n){
int i;

for(i=0;i<n;i++){
    printf("%d\n",a[i]);
}
}

void array_sort(int *a,int n){
int i=0;
int j=0;
int key=0;
for(i=1;i<n;i++){
    key = a[i];
    j=i-1;

    while(j>=0 && a[j] > key) {
        a[j+1] = a[j];
        j--;
    }
    a[j+1] = key;
}
}


int main(void) {
    int capacity = 2;
    int itemcount = 0;
    int item;
    int *my_array = emalloc(capacity * sizeof my_array[0]);

    

    while(scanf("%d", &item) == 1){
        if(itemcount == capacity){
            capacity += capacity;
            my_array = erealloc(my_array, capacity * sizeof my_array[0]);
            
        }
        my_array[itemcount] = item;
        itemcount++;
    }
    array_sort(my_array, itemcount);
    array_print(my_array, itemcount);
    free(my_array);

    return EXIT_SUCCESS;
}

