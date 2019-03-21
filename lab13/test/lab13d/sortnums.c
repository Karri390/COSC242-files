#include <stdio.h>
#include <stdlib.h>
#include "sortnums.h"

void selectionsort(int *a,int n){
    int i=0;
    int j=0;
    int k=0;
    int min=0;
    int temp=0;

    for(i=0;i<n-1;i++){
        min = i;
        if(i = n/2){
            for(k=0;k<n;k++){
                fprintf(stderr,"%d\n",a[k]);
            }
        }
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }



}
