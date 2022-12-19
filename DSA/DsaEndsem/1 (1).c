// 1. WAP to insert a new node at the beginning of a single linked list

#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};

struct node *start=NULL;
struct node * create_ll(struct node *);
struct node * display(struct node *);
struct node *insert_first(struct node *start);

int main(){
    start = create_ll(start);
    start = display(start);
    printf("\n");
    start = insert_first(start);
    start = display(start);

    return 0;
}

struct node * create_ll(struct node *start)
{

  struct node *new_node,*ptr;
  int num;
  printf("\n Enter -1 to end");
  printf("\n Enter the data :");
  scanf("%d",&num);

  while(num != -1)
  {

   new_node=(struct node *)malloc(sizeof(struct node));
   new_node->data=num;

   if(start==NULL)
   {
     new_node->next=NULL;
     start=new_node;
   }
   else
   {

     ptr=start;

     while(ptr->next != NULL)
        ptr=ptr->next;

     ptr->next=new_node;
     new_node->next=NULL;
    }
    printf("\n Enter the data :");
    scanf("%d",&num);
   }
 return start;
}
struct node * display(struct node *start)
{
  struct node *ptr;
  ptr=start;

  while(ptr != NULL)
  {

    printf("%d ",ptr->data);
    ptr=ptr->next;
  }
  return start;
}
struct node *insert_first(struct node *start){
    struct node *ptr,*first;
    first=(struct node*)malloc(sizeof(struct node*));
    int num;
    printf("Enter the element to be inserted at the begining: ");
    scanf("%d",&num);
    ptr=start;
    first->next=NULL;
    first->data=num;
    first->next=start;
    start=first;
    return start;
}