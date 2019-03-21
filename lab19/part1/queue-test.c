#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "mylib.h"

int main(void) {
    
    int size;
    double item;
    queue my_queue = queue_new();
 
    printf("Enqueing 5,17,25,37\n");
    enqueue(my_queue,5);
    enqueue(my_queue,17);
    enqueue(my_queue, 25);
    enqueue(my_queue, 37);
    

    printf("-----printing the queue-----\n");
    queue_print(my_queue);

    size = queue_size(my_queue);
    printf("Size of the queue: %1d\n", size);

    printf("-----dequeuing--------------\n");
    item = dequeue(my_queue);
    printf("%1f has been dequeued\n",item);
    
    printf("------print the new queue-----\n");
    queue_print(my_queue);
    
    size = queue_size(my_queue);
    printf("Size of the queue: %1d\n", size);
    
    my_queue = queue_free(my_queue);


    return EXIT_SUCCESS;
}

