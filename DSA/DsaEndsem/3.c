// // 3.Write
// a menu driven program to perform the following operations in a double
// linked list by using suitable user defined functions for each case.
// a) Traverse the list forward,
// b) Traverse the list backward,
// c) Check if the list is empty
// d) Insert a node at the certain position (at beginning/end/any position)
// e) Delete a node at the certain position (at beginning/end/any position)
// f) Delete a node for the given key, g) Count the total number of nodes,
// h) Search for an element in the linked list
// Verify & validate each function from main method
#include <stdio.h>
#include <stdlib.h>
struct node *create_ll(struct node *start);
struct node *display(struct node *);
struct node *rev_traverse(struct node *);
struct node *if_empty(struct node *start);
struct node *insert(struct node *start);
struct node *delete_pos(struct node *start);
struct node *delete_val(struct node *start);
struct node *search(struct node *start);
int count(struct node *start);

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);

int main()
{
    int option,x;

    do
    {
        printf("\n****MAIN MENU****");
        printf("\n 1. Create a link list.");
        printf("\n 2. Display the link list.");
        printf("\n 3. Traverse The list backward.");
        printf("\n 4. List Empty or not.");
        printf("\n 5. Insert at any position.");
        printf("\n 6. Delete at any position.");
        printf("\n 7. Delete node of any value.");
        printf("\n 8. Count the number of nodes.");
        printf("\n 9. Search for an element.");
        printf("\n 10. EXIT");
        printf("\n Enter your Choice:");
        scanf("%d",&option);

        switch (option)
        {
        case 1:
            start = create_ll(start);
            printf("Linked List Created.\n");
            break;
        case 2:
            start = display(start);
            break;
        case 3:
            printf("LIST TRAVERSSAL SUCCESS!!\n");
            start = rev_traverse(start);
            break;
        case 4:
            start = if_empty(start);
            break;
        case 5:
            start = insert(start);
            break;
        case 6:
            start = delete_pos(start);
            break;
        
        case 7:
            start = delete_val(start);
            break;
        case 8:
            x = count(start);
            printf("Total number of elements in list: %d\n", x);
            break;
        case 9:
            start = search(start);
            break;
        default:
            printf("Invalid Choice!!\n");
            break;
        }
        
    } while (option !=10);
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
struct node *rev_traverse(struct node *start){
    struct node *ptr =start;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    while (ptr!=start)
    {
        printf("%d ",ptr->data);
        ptr = ptr->prev;
    }
    printf("%d ",ptr->data);
    
    return start;
}
struct node *if_empty(struct node *start){
    struct node *ptr = start;
    if (ptr==NULL)
    {
        printf("The List is Empty.\n");
    }
    else
    {
        printf("The List is not Empty.\n");
    }
}
struct node *insert(struct node *start){
    struct node *ptr = start;
    int num,index,i=1;
    printf("Enter the position you want to insert.");
    scanf("%d",&index);
    printf("Enter the number to be inserted: ");
    scanf("%d",&num);
    while(i<index-1 && index>count(start)){
        ptr=ptr->next;
        i++;
    }
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next = ptr->next;
    new_node->prev = ptr;
    ptr->next = new_node;
    return start;
}
struct node *delete_pos(struct node *start){
    struct node *ptr = start;
    int index,i=1;
    printf("Enter the position you want to delete_pos.");
    scanf("%d",&index);
    while(i<index-1){
        ptr=ptr->next;
        i++;
    }
    struct node *temp = ptr->next;
    ptr->next = temp->next;
    temp->next->prev = ptr;
    free(temp);
    return start;
}
struct node *delete_val(struct node *start){
    struct node *preptr, *ptr = start;
    int num;
    printf("Enter the value you want to delete in the list.");
    scanf("%d",&num);
    while(ptr->data!=num){
        preptr = ptr;
        ptr=ptr->next;
    }
    preptr->next = ptr->next;
    ptr->next->prev = preptr;
    free(ptr);

    return start;
}
int count(struct node *start){
    struct node *ptr = start;
    int count=0;
    while (ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    return count;
}
struct node *search(struct node *start){
    int num,c=1;
    printf("Enter the value you want to search for: ");
    scanf("%d",&num);
    struct node *ptr = start;
    while (ptr->data!=num)
    {   
        c++;
        ptr=ptr->next;
    }
    printf("%d found at position %d.",ptr->data,c);
    return start;
}