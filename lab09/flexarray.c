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

    int *workspace = emalloc(f->itemcount *sizeof workspace[0]);
    
    mergesort(f->items,workspace,f->itemcount);
    
    
     free(workspace);
    
}


void mergesort(int *a,int *w, int n){
    if(n < 2){
        return;
    }
    else {
        int i,j,k;
        int n1 = n/2;
        
        int n2 = n-n1;
        int *b = a+n1;

        mergesort(a,w,n1);
        mergesort(b,w,n2);

        i=0,j=0,k=0;
        while(i<n1 && j<n2){
            if(a[i]<=b[j]){
                w[k++] = a[i++];
            } else {
                w[k++] = b[j++];
            }
        }

        while(i<n1){
            w[k++] = a[i++];
        }
        while(j<n2){
         w[k++] = b[j++];
        }

        for(i=0;i<n;i++){
           a[i] = w[i];
        }
    }

    
    
    
}

void flexarray_free(flexarray f){
    
free(f->items);
free(f);;
}

















