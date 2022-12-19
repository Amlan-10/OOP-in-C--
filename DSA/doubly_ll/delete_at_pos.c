#include <stdio.h>
#include <stdlib.h>
struct node *create_ll(struct node *start);
struct node *display(struct node *);
struct node *delete_at_pos(struct node *);
struct node *delete_from_beginning(struct node *);
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
    start = delete_at_pos(start);
    start = display(start);
    return 0;
}

struct node *create_ll(struct node *start)
{

    struct node *new_node, *ptr;
    int num;
    printf("Enter -1 to stop input.\n");
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
struct node *delete_from_beginning(struct node *start){
    struct node *ptr;
    ptr=start;
    start=start->next;
    start->prev=NULL;
    free(ptr);
    return start;
}
int count(struct node *start){
struct node *ptr=start;
int count=0;
while(ptr->next!=NULL){
    count++;
    ptr=ptr->next;
}
return count;
}
struct node *delete_at_pos(struct node *start){
    struct node *ptr=start;
    int pos,i=1,num;
    printf("\nEnter the desired position for deletion : ");
    scanf("%d",&pos);
    num=count(start);
    if(pos<1 || pos>num){
        printf("Invalid position!");
    }
    else if(pos==1){
        start=delete_from_beginning(start);
    }
    else{
        while(i<pos){
            ptr=ptr->next;
            i++;
        }
        ptr->prev->next=ptr->next;
        ptr->next->prev=ptr->prev;
        free(ptr);
        return start;
    }
}
