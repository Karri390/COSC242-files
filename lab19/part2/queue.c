#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"
#include "queue.h"


struct q_item {
    double item;
    q_item next;
};

struct queue {
    q_item first;
    q_item last;
    int length;
};

queue queue_new(){
    queue result = emalloc(sizeof *result);
    result->first = NULL;
    result->last = NULL;
    result->length = 0;
    return result;
}

void enqueue(queue q,double item){
    if(q->length == 0){
        q->first = emalloc(sizeof(struct q_item));
        q->first->item = item;
        q->first->next = NULL;
        q->last = q->first;
    }
    else {
        q->last->next = emalloc(sizeof(struct q_item));
        q->last = q->last->next;
        q->last->item = item;
        q->last->next = NULL;
    }
    q->length++;
}

double dequeue(queue q){
    double dequeued_val;
    q_item x;

    if(q->length > 0){
        dequeued_val = q->first->item;
        x = q->first;
        q->first = q->first->next;
        free(x);
        q->length--;
        return dequeued_val;
    }
    return -0.5;
}

void queue_print(queue q){
    q_item x = q->first;
    while(x!=NULL){
        printf("%.1f\n",x->item);
        x = x->next;
    }
}

int queue_size(queue q){
    return q->length;
}

queue queue_free(queue q){
    q_item x;
    while(q->first != NULL){
        x = q->first;
        q->first = q->first->next;
        free(x);
    }
    free(q);
    return q;
}

