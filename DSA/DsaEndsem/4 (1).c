// 4.WAP to remove the duplicates in a sorted single linked list.

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
struct node *delete_duplicate(struct node *start);

int main(){
    start = create_ll(start);
    start = display(start);
    printf("\n");
    start = delete_duplicate(start);
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
struct node *delete_duplicate(struct node *start){
    struct node *ptr = start;
    struct node *postptr;
    while (ptr->next!=NULL)
    {
    if (ptr->data==ptr->next->data)
    {
        postptr=ptr->next->next;
        free(ptr->next);
        ptr->next=postptr;
        // return start;
    }
    else    
        ptr=ptr->next;
    }
    printf("Duplicate elements deleted.\n");
    return start;
    
}