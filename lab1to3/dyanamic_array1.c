#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array_size = 0;
    int *my_dyanamic_array;
    int i = 0;

    printf("Enter the size of the array");
    scanf("%d", &array_size);

    my_dyanamic_array = malloc(array_size * sizeof my_dyanamic_array[0]);
    if(NULL == my_dyanamic_array) {
        fprintf(stderr, "memory allocation failed \n");
        return EXIT_FAILURE;
    }

    for(i = 0; i < array_size; i++){
        my_dyanamic_array[i] = rand() % array_size;
    }

    printf("Whats in the array:\n");
    for(i = 0;i < array_size; i++) {
        printf("%d", my_dyanamic_array[i]);
    }
    printf("\n");
    display_repeats(my_dyanamic_array, array_size);
    free(my_dyanamic_array);
     return EXIT_SUCCESS;
}

void display_repeats(int *a, int size){
    int i;
    int j;
    int *repeats;
    int count=0;
    repeats = malloc(size * sizeof repeats[0]);

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(a[i]==a[j]){
                    count+=1;
               }
         repeats[i]=count;
         count=0;
         }
    }
     
        for(i=0;i<size;i++){
            if(repeats[i]>0){
                printf("%d is repeated %d times \n", i, repeats[i]);
            }
        }
}
































