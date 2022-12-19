#include <stdio.h>
#include <stdlib.h>
struct node *create_ll(struct node *start);
struct node *display(struct node *);
struct node *insert_at_position(struct node *);
struct node *insert_at_beginning(struct node *);
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
    start = insert_at_position(start);
    start = display(start);
    return 0;
}

struct node *create_ll(struct node *start)
{

    struct node *new_node, *ptr;
    int num;
    printf("\n Enter -1 to stop input.\n");
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
    int count=0;
    printf("\nThe List is: \n");
    while (ptr != NULL)
    {
        // printf("%d ",ptr->prev);
        printf("%d ", ptr->data);
        // printf("%d \n",ptr->next);
        ptr = ptr->next;
        count++;
    }
    return start;
}
    struct node *insert_at_beginning(struct node *start){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data:\n");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    start->prev=newnode;
    newnode->next=start;
    start=newnode;
    return start;
}
int count(struct node *start){
    struct node *ptr = start;
    int count = 0;
    while(ptr->next!=NULL){
        count++;
        ptr=ptr->next;
    }
    return count;

}

struct node *insert_at_position(struct node *start){
    struct node *newnode,*ptr;
    newnode=(struct node *)malloc(sizeof(struct node));
    int index,i=1,num;
    ptr=start;
    printf("\nEnter the desired position for new insertion : ");
    scanf("%d",&index);
    num = count(start);
    
    if(index<1 || index>num){
        printf("Invalid Postion! ");
    }
    else if(index==1)
    {
    start=insert_at_beginning(start);
    }
    else{
        printf("\nEnter the data : ");
    scanf("%d",&newnode->data);
    while(i<index-1){
        ptr=ptr->next;
        i++;
    }
        
    newnode->next=ptr->next;
    ptr->next=newnode;
    newnode->prev=ptr;
    ptr->next->prev=newnode;
    return start;
}
}