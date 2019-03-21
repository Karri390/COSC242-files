#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "mylib.h"

int main(void){
    double item;
    queue my_queue;
    my_queue = queue_new();
    

    while(1==scanf("%lg", &item)){
        enqueue(my_queue,item);
    }
    printf("---Printing the queue---\n");
    queue_print(my_queue);
    while(queue_size(my_queue) != 0){
        printf("--DEQUEING each item AND PRINTING queue--\n");
        dequeue(my_queue);
        queue_print(my_queue);
    }
    return EXIT_SUCCESS;
}

