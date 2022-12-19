// 7.Given
// a linked list, write a function to reverse every k nodes. (where k is
// an input to the function). If a linked list is given as
// 12->23->45->89->15->67->28->98->NULL and k = 3
// then output will be
// 45->23->12->67->15->89->98->28->NULL.

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
struct node *reverse(struct node *start, int k);


int main(){
    int k;
    start = create_ll(start);
    start = display(start);
    printf("\n");
    printf("Enter the value of kth node to be reversed: ");
    scanf("%d",&k);
    start = reverse(start,k);
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
struct node *reverse(struct node *start, int k){
    struct node *curr = start;
    struct node *next = NULL;
    struct node *prev = NULL;
    int count = 0;
    while (count < k && curr != NULL)
    {
        next = curr->next;
        curr->next=prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next!=NULL)
    {
        start->next=reverse(next,k);
    }
    return prev;
    

}