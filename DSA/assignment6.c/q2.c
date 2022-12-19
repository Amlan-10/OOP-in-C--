// 2.WAP to reverse the sequence elements in a double linked list.
// 1.WAP to create a double linked list of n nodes and display the
// linked list by using suitable user defined functions for create and
// display operations.

#include <stdio.h>
#include <stdlib.h>
struct node *create_ll(struct node *start);
struct node *display(struct node *);
struct node *reverse(struct node *start);
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *start = NULL;
int main(){
    start = create_ll(start);
    start = display(start);
    start = reverse(start);
    start = display(start);
    return 0;
}

struct node *create_ll(struct node *start)
{

    struct node *new_node, *ptr;
    int num;
    printf("\n Enter -1 to stop imput.\n");
    printf("Enter the value :");
    scanf("%d", &num);

    while (num != -1)
    {

        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;

        if (start == NULL)
        {
            new_node->next = NULL;
            new_node->prev=NULL;
            start = new_node;
        }
        else
        {

            ptr = start;

            while (ptr->next != NULL)
                ptr = ptr->next;

            ptr->next = new_node;
            new_node->prev=ptr;
            new_node->next = NULL;
        }
        printf("\n Enter the data :");
        scanf("%d", &num);
    }
    return start;
}
struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    printf("\nThe List is: \n");
    while (ptr != NULL)
    {
        // printf("%d ",ptr->prev);
        printf("%d ", ptr->data);
        // printf("%d \n",ptr->next);
        ptr = ptr->next;
    }
    return start;
}
struct node *reverse(struct node *start){
    struct node *preptr=NULL;
    struct node *curr=start;
    struct node *nex=NULL;
    while (curr!=NULL)
    {
        preptr=curr->prev;
        curr->prev=curr->next;
        curr->next=preptr;
        curr=curr->prev;
    }
    start=preptr->prev;
    return start;
    
}