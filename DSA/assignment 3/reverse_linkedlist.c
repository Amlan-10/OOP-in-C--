#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};
// struct node *head;
void linked_list(struct node *ptr){
    while(ptr!=NULL){
        printf("Elements : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node *reverse(struct node *head){
    struct node *prevnode,*currentnode,*nextnode;
    prevnode=NULL;
    currentnode=nextnode=head;
    while(nextnode!= NULL)
    {
        nextnode = nextnode->next;
        currentnode->next=prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head=prevnode;
    return head;
}
int main()
{
struct node *head;
struct node *second;
struct node *last;

head=(struct node *)malloc(sizeof(struct  node));
second=(struct node *)malloc(sizeof(struct node));
last=(struct node *)malloc(sizeof(struct node));

head->data=8;
head->next=second;

second->data=5;
second->next=last;

last->data=4;
last->next=NULL;

printf("Linked list before reversion of nodes: \n");
linked_list(head);

head=reverse(head);
printf("Linked List after reversion of nodes: \n");
linked_list(head);
return 0;
}