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
struct node *insert_at_index(struct node *head,int data,int index){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;
    return head;
}
struct node *insert_At_end(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
     
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    return head;
    }
    struct node *insert_after_node(struct node *head,struct node *preNode ,int data){
        struct node *ptr=(struct node *)malloc(sizeof(struct node*));
        ptr->data=data;

        ptr->next=preNode->next;
        preNode->next=ptr;
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

printf("Linked list before insertion: \n");
linked_list(head);
// head=insert_at_first(head);
// head=insert_at_index(head,22,1);
// head=insert_At_end(head,14);


printf("Linked list after insertion: \n");
head=insert_after_node(head,second,77);
printf("\n");
linked_list(head);
return 0;
}