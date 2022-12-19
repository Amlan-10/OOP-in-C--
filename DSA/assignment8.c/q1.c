#include<stdio.h>
#include<stdlib.h>

#define max 10
int queue[max];

int front=-1;
int rear=-1;

void enqueue(void);
int dequeue(void);
int peek(void);
void display(void);


void main()
{
  int val, option;

  do
  {
    printf("\n****MAIN MENU****");
    printf("\n 1. Insert an element");
    printf("\n 2. Delete an element");
    printf("\n 3. PEEK");
    printf("\n 4. Display the queue");
    printf("\n 5. EXIT");
    printf("\n Enter your option");
    scanf("%d", &option);

    switch (option)
    {

    case 1:

      enqueue();
      break;

    case 2:

      val = dequeue ();

      if (val != -1)
        printf("\n The deleted element from queue is : %d", val);
      break;

    case 3:

      val = peek();

      if (val != -1)
        printf("\n The first value in queue is : %d", val);
      break;

    case 4:

      display();
      break;
    }

  } while (option != 5);
}

int isFull()
{
    if(rear == max-1)
    {
        return 1;
    }
    return 0;
}
int isEmpty()
{
    if(front==-1 || front>rear){
        return 1;
    }
    return 0;
}

void enqueue()
{
    int num;
  printf("\n Enter the number to be inserted in queue :");
  scanf("%d", &num);
    if(isFull())
    {
        printf("Stack Overflow!\n");
    }
    else if(front==-1 && rear==-1){
            front=rear=0;
            queue[rear]=num;
        }
    else{
        rear++;
        queue[rear]=num;
        
    }
}

int dequeue()
{
    int val=-1;
    if(isEmpty())
    {
        printf("Stack Empty!\n");
    }
    else{
        val=queue[front];
        front++;
        if(front > rear)
        front=rear=-1;
    }
    return val;
}

int peek()
{
    if(isEmpty())
    {
        printf("Stack Empty!\n");
    }
    else
    {
        return queue[front];
    }
}

void display()
{
    if(isEmpty())
    {
        printf("Stack Empty!\n");
    }
    else{
        for(int i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}