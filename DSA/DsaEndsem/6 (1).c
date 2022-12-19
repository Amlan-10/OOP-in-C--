// 6.WAP to swap kth node from beginning with kth node from end in a single Linked List

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
int countNodes(struct node* s);
struct node *swapkth(struct node *start);

int main(){
    start = create_ll(start);
    start = display(start);
    printf("\n");
    start = swapkth(start);
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
int countNodes(struct node* s)
{
    int count = 0;
    while (s != NULL) {
        count++;
        s = s->next;
    }
    return count;
}
struct node* swapkth(struct node *start){
    int k,n;
    printf("Enter the value of k for swapping:");
    scanf("%d",&k);
    struct node *ptr =start;
    n = countNodes(ptr);
    if (k>n)
    {
        printf("Swapping Not posible. Limit Crossed!!");   
    }
    if(2*k-1==n){
        return start;
    }
    struct node *beg_ptr,*beg_preptr,*end_ptr,*end_preptr,*temp;
    beg_ptr = start;
    beg_preptr= NULL;
    for (int i = 1; i < k; i++)
    {
        beg_preptr=beg_ptr;
        beg_ptr=beg_ptr->next;
    }
    end_ptr = start;
    end_preptr = NULL;
    for (int i = 1; i < n-k+1; i++)
    {
        end_preptr=end_ptr;
        end_ptr=end_ptr->next;

    }
    if(beg_preptr)
        beg_preptr->next=end_ptr;
    if(end_preptr)
        end_preptr->next=beg_ptr;
    temp = beg_ptr->next;
    beg_ptr->next=end_ptr->next;
    end_ptr->next=temp;
    if(k==1)
        start = end_ptr;
    if(k==n)
        start = beg_ptr;
    return start;
    
     
}