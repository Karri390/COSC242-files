#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10000

int main(int argc, char **argv) {
    FILE *infile;
    int my_array[ARRAY_SIZE];
    int test_array[ARRAY_SIZE];
    int num_items;
    
    int count;

    if(NULL == (infile = fopen(argv[1], "r"))) {
        fprintf(stderr, "%s: cant find file %s\n", argv[0], argv[1]);
        return EXIT_FAILURE;
    }

    num_items = 0;
    while(num_items < ARRAY_SIZE && 1== fscanf(infile, "%d", &my_array[num_items])) {
        num_items++;
    }
   
    fclose(infile);

    sort(my_array,num_items);
       count=0;
       while(1==scanf("%d", &test_array[count])){
           if(binary_search(my_array,0,num_items-1,test_array[count]) == -1){
               printf("-\n");
           }
           else printf("+\n");
           count++;
       }
    

    return EXIT_SUCCESS;
}

void sort(int *a,int n){
    int i=0;
    int j=0;
    int key=0;

    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int binary_search(int *a,int low,int high,int item){
    int mid;
    if(high>=low){
        mid = low+(high-low)/2;
        if(a[mid] == item)return mid;
        if(a[mid] > item)return binary_search(a,low,mid-1,item);
        return binary_search(a,mid+1,high,item);
    }
    return -1;
}













