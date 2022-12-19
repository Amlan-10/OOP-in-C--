#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void linked_list(struct node *ptr)
{
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node *insert_at_first(struct node *head,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
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

linked_list(head);
head=insert_at_first(head,22);
// head=insert_at_index(head,22,1);
printf("\n");
linked_list(head);
return 0;
}