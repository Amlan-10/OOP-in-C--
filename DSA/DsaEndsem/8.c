// 8.WAP to print the middle_value of a double linked list.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *start = NULL;
struct node *create_ll(struct node *start);
struct node *display(struct node *start);
int middle_value(struct node *start);
int main(){
    start = create_ll(start);
    start = display(start);
    printf("The middle value is: %d",middle_value(start));
    return 0;
}
struct node *create_ll(struct node *start)
{

    struct node *new_node, *ptr;
    int num;
    printf("\nEnter -1 to stop imput.\n");
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
        printf("\nEnter the data :");
        scanf("%d", &num);
    }
    return start;
}
struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr->next != start)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d ", ptr->data);
    return start;
}
int middle_value(struct node *start){
    struct node *ptr;
    ptr = start;
    int count = 0;
    while (ptr->next != start)
    {
        count++;
        ptr = ptr->next;
    }
    count++;
    ptr = start;
    for (int i = 0; i < count/2; i++)
    {
        ptr = ptr->next;
    }
    int x = ptr->data;
    return x;
}