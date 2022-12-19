// 4.WAP
// to create a single circular double linked list of n nodes and display
// the linked list by using suitable user defined functions for create and
// display operations.

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *start = NULL;
struct node *create_circular_list(struct node *star);
struct node *display(struct node *start);
int main(){
    start = create_circular_list(start);
    start = display(start);
    return 0;
}
struct node *create_circular_list(struct node *star){
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    struct node *new_node, *ptr;
    for(int i = 0; i < n; i++){
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d",&new_node->data);
        if(start == NULL){
            new_node->next = new_node;
            new_node->prev = new_node;
            start = new_node;
        }
        else{
            ptr = start;
            while(ptr->next != start){
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->prev = ptr;
            new_node->next = start;
            start->prev = new_node;
        }
    }
    return start;
}
struct node *display(struct node *start){
    struct node *ptr;
    ptr = start;
    printf("The List is: \n");
    while (ptr->next != start)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d ", ptr->data);
    return start;
}