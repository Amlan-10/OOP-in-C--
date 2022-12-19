#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void linked_list_traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("Element :%d\n",ptr->data);
        ptr = ptr->next;
    }
}
struct node * delete_after(struct node *start,int num)
{

  struct node *ptr,*preptr;
 
     ptr=start;
     preptr=ptr;
     
         while(preptr->data != num)
         {
           preptr=ptr;
           ptr=ptr->next;
         }

        preptr->next=ptr->next;
        free(ptr);

      return start;
}
int main()
{
struct node *start;
struct node *second;
struct node *third;
struct node *last;

start =(struct node*)malloc(sizeof(struct node));
second =(struct node*)malloc(sizeof(struct node));
third =(struct node*)malloc(sizeof(struct node));
last =(struct node*)malloc(sizeof(struct node));

start->data=10;
start->next=second;

second->data=20;
second->next=third;

third->data=30;
third->next=last;

last->data=40;
last->next=NULL;

linked_list_traversal(start);
delete_after(start,20);
printf("\n");
linked_list_traversal(start);

return 0;
}