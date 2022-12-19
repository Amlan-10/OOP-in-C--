// Design algorithm/develop pseudocode/write C code to add a given value K to each element in
// the LIST

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

struct node *add_k(struct node * head){
    struct node *ptr=head;
    int k;
    printf("Enter the value of k: ");
    scanf("%d",&k);
    while(ptr!=NULL){
        ptr->data=ptr->data+k;
        ptr=ptr->next;
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

printf("Linked list : \n");
linked_list(head);

head=add_k(head);

printf("New Linked list : \n");

printf("\n");
linked_list(head);
return 0;
}
