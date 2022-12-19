// 3. WAP to insert a new node before a certain node of a single linked list
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
struct node *insert_before(struct node *start);

int main(){
    start = create_ll(start);
    start = display(start);
    printf("\n");
    start = insert_before(start);
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
struct node *insert_before(struct node *start){
    struct node *ptr = start;
    struct node *preptr,*new_node;
    // preptr=(struct node*)malloc(sizeof(struct node*));
    new_node=(struct node*)malloc(sizeof(struct node*));
    new_node->next=NULL;
    int val,num;
    printf("Enter the value before which you want to enter the element:");
    scanf("%d",&val);
    printf("Enter the element:");
    scanf("%d",&num);
    while (ptr->data!=val)
    {
        preptr=ptr;
        ptr=ptr->next;

    }
    preptr->next=new_node;
    new_node->next=ptr;
    new_node->data=num;
    return start;
}