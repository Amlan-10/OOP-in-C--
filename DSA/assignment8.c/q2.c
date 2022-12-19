// 2.Write
// a menu driven program to implement queue operations such as Enqueue,
// Dequeue, Peek, Display of elements, IsEmpty using linked list.
#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *top=NULL;
struct node *enqueue(struct node *,int );
struct node *dequeue(struct node *);
struct node *peek(struct node *);
struct node *display(struct node *);

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
    printf("Enter the value to be inserted :");
    scanf("%d",&val);
      val=enqueue(top,val);
      break;

    case 2:

      val = dequeue(top);

      if (val != -1)
        printf("\n The deleted element from queue is : %d", val);
      break;

    case 3:

      val = peek(top);

      if (val != -1)
        printf("\n The first value in queue is : %d", val);
      break;

    case 4:

      display(top);
      break;
    }

  } while (option != 5);
}

struct node *enqueue(struct node *ptr,int val)
{
    struct node * newnode=(struct node *)malloc(sizeof(struct node ));
    ptr->data=val;
    if(top == NULL)
    {
        ptr->next=NULL;
        top=ptr;
    }
    else{
        
    }
}