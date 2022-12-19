#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};
void linked_list(struct node *ptr){
    while(ptr!=NULL){
        printf("Elements : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node *delete_at_first(struct node *head){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct node *delete_at_last(struct node *head)
{
    struct node *p=head;
    while(p->next->next!=NULL){
        p=p->next;
    }
    struct node *q=p->next;
    p->next=NULL;
    free(q);
    return head;
}
struct node *delete_at_index(struct node *head,int index){
int i=1;
struct node *p=head;
while(i!=index-1){
    i++;
    p=p->next;
}
struct node *q=p->next;
p->next=q->next;
free(q);
return head;
}
struct node *delete_at_given_number(struct node *head, int value){
    struct node *p=head;
    struct node *q=head->next;
    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);  
    }
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

printf("Linked list before deletion of node: \n");
linked_list(head);
// printf("Linked list after deletion of first node: \n");
// head=delete_at_first(head);
// printf("Linked list after deletion of last node: \n");
// head=delete_at_last(head);
// printf("Linked list after deletion of a node in between: \n");
head=delete_at_index(head,2);
printf("Linked lsit after deletion: \n");
// head=delete_at_given_number(head,5);
linked_list(head);
return 0;
}