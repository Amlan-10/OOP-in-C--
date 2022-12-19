// WAP to create a double linked list of n nodes and display the
// linked list by using suitable user defined functions for create and
// display operations.
// 3.Write
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
#include <malloc.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *start = NULL;
struct node *end = NULL;

struct node *create_DL(struct node *);
struct node *display_DL(struct node *);
struct node *reverse_DL(struct node *);
struct node *ftraverse_DL(struct node *);
struct node *btraverse_DL(struct node *);
struct node *empty_DL(struct node *);
struct node *insertat_DL(struct node *);
struct node *insert_at_beginning(struct node *);
struct node *insert_at_end(struct node *);
void main()
{
    int option;

    do
    {
        printf("\n*MAIN MENU*");
        printf("\n 1. Create the double link list");
        printf("\n 2. Display the  link list");
        printf("\n 3. Reverse the link list");
        printf("\n 4. Traverse Linked List forward ");
        printf("\n 5. Traverse Linked List backward ");
        printf("\n 6.Check empty list or not");
        printf("\n 7. Insert a node at the certain position");
        printf("\n 8.EXIT \n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            start = create_DL(start);
            printf("\n Link List Created.");
            break;

        case 2:
            start = display_DL(start);
            break;

        case 3:
            start = reverse_DL(start);
            break;

        case 4:
            start = ftraverse_DL(start);
            break;

        case 5:
            start = btraverse_DL(start);
            break;

        case 6:
            start = empty_DL(start);
            break;

        case 7:
            start = insertat_DL(start);
            break;
        }

    } while (option != 8);
}
struct node *insert_at_beginning(struct node *start)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data:\n");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    start->prev = newnode;
    newnode->next = start;
    start = newnode;
    return start;
}
struct node *create_DL(struct node *start)
{
    struct node *ptr, *new_node;
    int num;
    printf("\n Enter -1 to end.");
    printf("\n Enter the data:");
    scanf("%d", &num);
    while (num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        if (start == NULL)
        {

            start = end = new_node;

            start->prev = NULL;

            end->next = NULL;
        }
        else
        {
            end->next = new_node;
            new_node->prev = end;
            end = new_node;
            end->next = NULL;
        }
        printf("\n Enter the data :");
        scanf("%d", &num);
    }
    return start;
}
struct node *reverse_DL(struct node *start)
{
    struct node *prev, *current, *next, *ptr;

    prev = NULL;
    current = start;
    next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    start = prev;
    printf("LINKED LIST REVERSED");
    return start;
}
struct node *ftraverse_DL(struct node *start)
{
    struct node *ptr;
    if (start == NULL)
    {
        printf("\n EMPTY LINKED LIST");
    }
    else
    {
        ptr = start;
        while (ptr != NULL)
        {
            printf("\n%d\n ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\nTraversal successful\n");
    return start;
}
struct node *insert_at_end(struct node *start)
{
    struct node *newnode, *ptr;
    ptr = start;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data : ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    newnode->prev = ptr;
    ptr->next = newnode;
    newnode->next = NULL;
    ptr = newnode;
    return start;
}
struct node *btraverse_DL(struct node *start)
{
    struct node *ptr = start, *prev;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    while (ptr->next != start)
    {
        printf("%d ", ptr->data);
        ptr = ptr->prev;
    }

    printf("\nTraversal successful\n");
    return ptr;
}
struct node *empty_DL(struct node *start)
{
    struct node *ptr = start;
    if (start == NULL)
    {
        printf("\n EMPTY LIST");
    }
    else
    {
        printf("\n List is not empty");
    }
}
struct node *insertat_DL(struct node *start)
{
    struct node *pre_ptr, *ptr = start, *new_node;
    new_node = (struct node *)malloc(sizeof(struct node *));
    int index, num;
    int choice;
    printf("\n1.Insert at position");
    printf("\n2.Insert before position");
    printf("\n3.Insert after position");
    printf("\n4.Insert at beginning");
    printf("\n5.Insert at end");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the position you want to insert: ");
        scanf("%d", &index);
        printf("Enter the element to be inserted: ");
        scanf("%d", &num);
        int i = 1;
        while (i != index)
        {

            ptr = ptr->next;
            i++;
        }

        pre_ptr = ptr->prev;
        new_node->data = num;
        pre_ptr->next = new_node;
        new_node->prev = pre_ptr;
        new_node->next = ptr;
        ptr->prev = new_node;

        printf("Element inserted ");
        return start;
        break;

    case 2:
        printf("Enter the position before which you want to insert: ");
        scanf("%d", &index);
        printf("Enter the element to be inserted: ");
        scanf("%d", &num);
        i = 1;
        while (i != index - 1)
        {

            ptr = ptr->next;
            i++;
        }

        pre_ptr = ptr->prev;
        new_node->data = num;
        pre_ptr->next = new_node;
        new_node->prev = pre_ptr;
        new_node->next = ptr;
        ptr->prev = new_node;

        printf("Element inserted ");
        return start;
        break;

    case 3:
        printf("Enter the position after which you want to insert: ");
        scanf("%d", &index);
        printf("Enter the element to be inserted: ");
        scanf("%d", &num);
        i = 1;
        while (i != index + 1)
        {

            ptr = ptr->next;
            i++;
        }

        pre_ptr = ptr->prev;
        new_node->data = num;
        pre_ptr->next = new_node;
        new_node->prev = pre_ptr;
        new_node->next = ptr;
        ptr->prev = new_node;

        printf("Element inserted ");
        return start;
        break;

    case 4:
        start = insert_at_beginning(start);
        return start;
        break;

    case 5:
        start = insert_at_end(start);
        return start;
        break;
    }
}

struct node *display_DL(struct node *start)
{
    struct node *ptr;
    ptr = start;

    while (ptr != NULL)
    {

        printf("\t %d", ptr->data);
        ptr = ptr->next;
    }
    return start;
}