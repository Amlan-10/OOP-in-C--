#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q)
{
    if(q->f==q->r)
    {
        printf("Empty Queue!\n");
        return 1;
    }
    return 0;
}

int isFull(struct queue *q)
{
   if(q->r==q->size-1){
    // printf("Queue Full!\n");
    return 1;
   }
   return 0;
}

void enqueue(struct queue *q,int val)
{
    if(isFull(q))
    {
        printf("Queue overflow!\n");
    }else{
    q->r=q->r+1;
    q->arr[q->r]=val;
    }
}

int dequeue(struct queue *q)
{
    int a=-1;
    if(isEmpty(q)){
        printf("Queue underflow!\n");
    }
    else{
        q->f=q->f+1;
        a=q->arr[q->f];
    }
    return a;
}
  
int main(){
    struct queue q;
    q.size=10;
    q.f=q.r=-1;
    q.arr=(int *)malloc(q.size*sizeof(int));

    // Enqueue few elements

    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1); 
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q)); 
    enqueue(&q, 45);
    enqueue(&q, 45);
    enqueue(&q, 45);
 
    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
 
    return 0;
}