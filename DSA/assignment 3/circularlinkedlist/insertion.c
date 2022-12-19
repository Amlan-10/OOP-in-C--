#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void linked_list(struct node *head)
{
    struct node *ptr=head;
     
    do{
        printf("Element: %d\n",ptr->data);
        printf("Element: %d\n",ptr->next);
        ptr=ptr->next;
    }while(ptr!=head);
}
struct node *insert_at_first(struct node *head,int data)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    struct node *tail=head->next;
    newnode->data=data;
    newnode->next=head;
    while(tail->next!=head)
    {
        tail=tail->next;
    }
    tail->next=newnode;
    head=newnode;
    return head;
}
struct node *insert_at_index(struct node *head,int data,int index){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    struct node *q=head;
    int i=1;
    while(i!=index){
        p=p->next;
        q=q->next->next;
        i++;
    }
    newnode->data=data;
    newnode->next=p;
    q->next=newnode;
    // p->next=ptr;
    return head;
}

struct node *insert_At_end(struct node *head,int data){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    struct node *p=head->next;
     
    while(p->next!=head){
        p=p->next;
    }
    newnode->data=data;
    p->next=newnode;
    newnode->next=head;
    return head;
    }


    struct node *insert_after_node(struct node *head,struct node *preNode ,int data){
        struct node *ptr=(struct node *)malloc(sizeof(struct node*));
        ptr->data=data;

        ptr->next=preNode->next;
        preNode->next=ptr;
        return head;

    }
    struct node *reverse(struct node *head)
    {
        

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
last->next=head;

printf("Linked list before insertion: \n");
linked_list(head);
// head=insert_at_first(head,91);
// head=insert_at_index(head,22,2);
// head=insert_At_end(head,14);
head=reverse(head);

printf("Linked list after insertion: \n");
// head=insert_after_node(head,second,77);
printf("\n");
linked_list(head);
return 0;
}