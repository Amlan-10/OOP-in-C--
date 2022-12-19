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

int main()
{
struct node *start;
struct node *second;
struct node *last;

//Stores in Heap 
start =(struct node*)malloc(sizeof(struct node));
second =(struct node*)malloc(sizeof(struct node));
last =(struct node*)malloc(sizeof(struct node));

start->data=8;
start->next=second;

second->data=72;
second->next=last;

last->data=81;
last->next=NULL;

linked_list_traversal(start);

return 0;
}