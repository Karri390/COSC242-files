#include <stdio.h>
#include <stdlib.h>

#define ARRAY_MAX 5

int binary_search(int *arr,int low,int high,int item){
    int mid;
if(high >= low ){
     mid = low+(high-low)/2;
    if(arr[mid] == item)return mid;
    if(arr[mid]>item)return binary_search(arr,low,mid-1,item);
    return binary_search(arr,mid+1,high,item);
}
return -1;


}

int main(void) {
    int i=0;
    int my_array[ARRAY_MAX];
    int count=0;
    int item;
    int result;
    while(count < ARRAY_MAX && 1==scanf("%d", &my_array[count])) {
        count++;
    }
    sort(my_array,count);
    printf("Enter the number you wanna search in the list\n");
    scanf("%d",&item);

    result = binary_search(my_array,0,count-1,item);
    if(result == -1){
        printf("Item not found in list\n");
    }
    else {
        printf("Item found",result+1);
    }
    return EXIT_SUCCESS;
}

void sort(int *a,int n) {
    int i=0;
    int j=0;
    int key=0;
    for(i=0;i<n;i++){
        key = a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

