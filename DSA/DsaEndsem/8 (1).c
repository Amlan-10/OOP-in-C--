// // 8.Given
// a singly linked list, rotate the linked list counter-clockwise by k
// nodes. Where k is a given positive integer. For example, if the given
// linked list is 10->20->30->40->50->60 and k is 4, the
// list should be modified to 50->60->10->20->30->40. Assume
// that k is smaller than the count of nodes in linked list.

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
struct node *rotate_from_k(struct node *start);

int main(){
    start = create_ll(start);
    start = display(start);
    printf("\n");
    start = rotate_from_k(start);
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
struct node *rotate_from_k(struct node *start){
    int k,i=1;
    struct node *curr,*ptr;
    curr = start;
    printf("Enter the value of k from which you want to rotate: ");
    scanf("%d",&k);
    if (k==0)
    {   
        return start;
    }
    while(i < k && curr->next!=NULL){
        curr=curr->next;
        i++;
        //curr stores the node k
    }
    ptr=curr;
    //ptr stores curr as we will modify curr we will need ptr later
    while (curr->next!=NULL)
    {
        curr=curr->next;
        // curr is the last node now.
    }

    curr->next=start;//the last node is linked with the first node
    start=ptr->next;//start is changed to the breakpoint
    ptr->next=NULL;//ending the list
    return start;
    

    
}