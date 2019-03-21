#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"
#include "flexarray.h"

struct flexarrayrec {
    int capacity;
    int itemcount;
    int *items;
};

int main(void){
    int item;
   
    flexarray my_flexarray = flexarray_new();
    

    while(scanf("%d",&item)==1){
        flexarray_append(my_flexarray, item);
    }
    
    

   flexarray_sort(my_flexarray);
    flexarray_print(my_flexarray);
    flexarray_free(my_flexarray);

    return EXIT_SUCCESS;
}

flexarray flexarray_new() {
    flexarray result = emalloc(sizeof *result);
    result->capacity = 2;
    result->itemcount = 0;
    result->items = emalloc(result->capacity * sizeof result->items[0]);
    return result;
}

void flexarray_append(flexarray f, int num){
    if(f->itemcount == f->capacity){
     f->capacity += f->capacity;
     f->items = erealloc(f->items, f->capacity * sizeof f->items[0]);
    }
    f->items[f->itemcount++] = num;
}

void flexarray_print(flexarray f){
    int i;
    for(i=0;i<f->itemcount;i++){
        printf("%d\n", f->items[i]);
    }

}

void flexarray_sort(flexarray f){

    
    
    quicksort(f->items,f->itemcount);
    
    
     
    
}

void quicksort(int *a,int n){
if(n<2)return;

int pivot;
pivot = a[0];
int i;
int j;
i=a-1;
j=n+1;
int temp;

for(;;){
while(a[i]<pivot){
    i++;
}
while(a[j]>pivot){
    j--;
}
if(i<j){
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    
    
    
}

else break;
}
quicksort(a,j+1);
quicksort(a+j+1,n-j-1);



}





    
    
   


void flexarray_free(flexarray f){
    
free(f->items);
free(f);;
}

















