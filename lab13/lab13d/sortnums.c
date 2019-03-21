#include <stdio.h>
#include <stdlib.h>
#include "sortnums.h"


void insertionsort(int *a,int n){
    int i=0;
    int j=0;
    int key=0;
    int k=0;    
  
    for(i=1;i<n;i++){
        key = a[i];
        j=i-1;

        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j--;
           }
        a[j+1] = key;
       if(n%2 == 0){
        if(i==(n/2)-1){
        for(k=0;k<n;k++){
            fprintf(stderr,"%d\n",a[k]);
         }
        }
       }
     else {
       if(i==(n/2)){
       for(k=0;k<n;k++){
         fprintf(stderr,"%d\n",a[k]);
       }
       }
     }
       
                
    }
}


