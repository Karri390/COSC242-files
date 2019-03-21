#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "mylib.h"

struct queue {
    double *items;
    int head;
    int capacity;
    int num_items;
};

queue queue_new(){
    queue result = emalloc(sizeof *result);
    result->capacity = 15;
    result->num_items = 0;
    result->items = emalloc(result->capacity * sizeof result->items[0]);
    result->head = 0;
    return result;
}

queue queue_free(queue q){
    free(q->items);
    free(q);
    return q;
}

void enqueue(queue q, double item){
   
     int position;
     if(q->num_items < q->capacity){
     position = ((q->head) + (q->num_items))%(q->capacity);
     printf("Enqueue: %1f at index %d\n", item, position);
     q->items[position] = item;
     q->num_items++;
    }
  
}

double dequeue(queue q){
    double dequeue_val=0.0;
    int dequeue_index=0;
    
    if(q->num_items>0){
        dequeue_index = q->head;
        dequeue_val = q->items[q->head];
        q->num_items--;
        q->head = (q->head+1)%(q->capacity);
        printf("Dequeue item: %1f at position %d, set head at %d\n",dequeue_val,dequeue_index,q->head);
        
    }
    return dequeue_val;
   
}

        
int queue_size(queue q){
    return q->num_items;
}

void queue_print(queue q){
    int i;
    int index;
    for(i=0;i<q->num_items;i++){
        index = (q->head + i)% q->capacity;
        printf("%1f\n", q->items[index]);
    }
}


















