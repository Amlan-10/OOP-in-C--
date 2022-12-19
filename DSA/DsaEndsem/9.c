// 9.Given
// a double linked list, rotate the linked list counter-clockwise by k
// nodes. Where k is a given positive integer. For example, if the given
// linked list is 10->20->30->40->50->60 and k is 4, the
// list should be modified to 50->60->10->20->30->40. Assume
// that k is smaller than the count of nodes in linked list.

#include <stdio.h>
#include <stdlib.h>
struct node *create_ll(struct node *start);
struct node *display(struct node *);
struct node *rotate_from_k(struct node *start);
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
    start = rotate_from_k(start);
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
    printf("The List is: \n");
    while (ptr != NULL)
    {
        // printf("%d ",ptr->prev);
        printf("%d ", ptr->data);
        // printf("%d \n",ptr->next);
        ptr = ptr->next;
    }
    return start;
}
struct node *rotate_from_k(struct node* start){
    int k;
    printf("\nEnter the value of k from which you want to rotate the list: ");
    scanf("%d",&k);
    struct node *ptr=start;
    while(ptr->data!=k){
        ptr=ptr->next;
    }
    struct node *temp=ptr;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=start;
    start=temp->next;
    temp->next=NULL;
    return start;


}