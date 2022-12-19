// 1.WAP to create a double linked list of n nodes and display the
// linked list by using suitable user defined functions for create and
// display operations.

#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *display(struct node *head){
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("Elements : %d\n",ptr->data);
        ptr=ptr->next;
    }
    
    return head;
}

struct node *reverse(struct node *head){
    struct node *prevnode,*currnode,*nextnode;
    prevnode=0;
    currnode=nextnode=head;
    head->prev=NULL;
    while(nextnode!=0){
        nextnode=nextnode->next;
        currnode->next=prevnode;
        prevnode=currnode;
        currnode=nextnode;
    }
    head=prevnode;
    return head;
}
int main(){
    struct node *head;
    struct node *second;
    struct node *last;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    last=(struct node *)malloc(sizeof(struct node));

    head->data=23;
    head->next=second;
    head->prev=NULL;

    second->data=34;
    second->next=last;
    second->prev=head;

    last->data=71;
    last->next=NULL;
    last->prev=second;

    printf("Doubly Linked List created.\n");
    display(head);
}