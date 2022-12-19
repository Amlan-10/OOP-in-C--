// 1. Design algorithm/develop pseudocode/write C code to delete the whole linked List.
// 2. Design algorithm/develop pseudocode/write C code to find kth node from the end of
// a linked list.
// 3. Design algorithm/develop pseudocode/write C code to merge two sorted linked lists
// and create a sorted linked list.
// 4. Design algorithm/develop pseudocode/write C code to delete alternate nodes of a
// linked list.
// 5. Design algorithm/develop pseudocode/write C code to find the union of two linked
// list.
// 6. Design algorithm/develop pseudocode/write C code to find the difference of two
// linked list.
// 7. Design algorithm/develop pseudocode/write C code to find the intersection of two
// linked list.
// 8. Design algorithm/develop pseudocode/write C code to delete all duplicate nodes
// from a doubly circular linked list.
// 9. Design algorithm/develop pseudocode/write C code to delete consecutive two nodes
// from a doubly linked list based on the given position.
// 10. Design algorithm/develop pseudocode/write C code to add two sparse matrices.
#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *del_linkedlist(struct node *);
void kthnode_from_last(struct node *);
struct node *unionlinkedlist(struct node *, struct node *);
struct node *deletedivbyk(struct node *);
struct node *delete_duplicate(struct node *);
struct node *sorting(struct node *);

void main()
{
    int option;

    do
    {
        printf("\n***MAIN MENU*");
        printf("\n 1. create link list");
        printf("\n 2. Display link list");
        printf("\n 3. Delete the entire linked list:");
        printf("\n 4. Kth node from the last:");
        printf("\n 5. Delete duplicate elements:");
        printf("\n 6. Sort the linked list: ");
        printf("\n 7. Delete node which is divisible by k");
        printf("\n 8. Delete last element .");
        printf("\n 9. Exit");
        printf("\n Enter your option: ");
        scanf("%d", &option);

        switch (option)
        {

        case 1:

            start = create_ll(start);
            printf("\n link list created");
            break;

        case 2:

            start = display(start);

            break;

        case 3:

            start = del_linkedlist(start);
            break;

        case 4:
            kthnode_from_last(start);
            break;

        case 5:
            start = delete_duplicate(start);
            break;

        case 6:
            start = sorting(start);
            break;

        case 7:
            start = deletedivbyk(start);
            break;
        case 8: 
            break;
        }
    } while (option != 9);
}

struct node *create_ll(struct node *start)
{

    struct node *new_node, *ptr;
    int num;
    printf("\n Enter -1 to end");
    printf("\n Enter the data :");
    scanf("%d", &num);

    while (num != -1)
    {

        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;

        if (start == NULL)
        {
            new_node->next = NULL;
            start = new_node;
        }
        else
        {
            ptr = start;

            while (ptr->next != NULL)
                ptr = ptr->next;

            ptr->next = new_node;
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

    while (ptr != NULL)
    {

        printf("\t %d", ptr->data);
        ptr = ptr->next;
    }
    return start;
}
struct node *del_linkedlist(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        free(start);
        start = ptr;
    }
    return ptr;
}
void kthnode_from_last(struct node *start)
{
    struct node *ptr = start;
    struct node *end = start;
    int k;
    printf("Enter the value of k:");
    scanf("%d", &k);
    for(int i=0;i<k;i++)
    {
         ptr=ptr->next;
    }
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        end=end->next;
    }
    printf("The %dth element from the end is %d.\n",k,end->data);
    return start;
}
struct node *deletedivbyk(struct node *start)
{
    struct node *ptr = start, *preptr;
    int k;
    printf("Enter the value of k: ");
    scanf("%d", &k);
    while (ptr != NULL)
    {
        if (ptr->data % k == 0)
        {
            preptr->next = ptr->next;
            free(ptr);
            ptr = preptr->next;
        }
        else
        {
            preptr = ptr;
            ptr = ptr->next;
        }
    }
    return start;
}
struct node *sorting(struct node *start)
{
    struct node *ptr1 = start;
    struct node *ptr2 = start;
    while (ptr1 != NULL)
    {
        ptr2 = ptr1->next;
        while (ptr2 != NULL)
        {
            if (ptr1->data > ptr2->data)
            {
                int temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    return start;
}
struct node *delete_duplicate(struct node *start)
{
    struct node *ptr = start;
    struct node *ptr2;
    while (ptr->next!= NULL)
    {
        if (ptr->data == ptr->next->data)
        {
            ptr2 = ptr->next->next;
            free(ptr->next);
            ptr->next = ptr2;
        }
        else
        {
            ptr = ptr->next;
        }
    }
    printf("Duplicate elements deleted : \n");
    return start;
}