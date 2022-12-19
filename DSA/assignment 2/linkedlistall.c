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
struct node *display_last(struct node *);
struct node *first_even(struct node *);
struct node *first_odd(struct node *);
struct node *second_last(struct node *);
struct node *delete_first(struct node *);
struct node delete_last(struct node );

void main()
{
    int option;

    do
    {
        printf("\n***MAIN MENU*");
        printf("\n 1. create link list");
        printf("\n 2. Display link list");
        printf("\n 3. The last element is:");
        printf("\n 4. First even element is:");
        printf("\n 5. First odd element is:");
        printf("\n 6. Second last element is:");
        printf("\n 7. Delete First element .");
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

            start = display_last(start);
            break;
            
        case 4:
        start=first_even(start);
        break;

        case 5:
        start=first_odd(start);
        break;      
        

        case 6:
        start=second_last(start);
        break;

        case 7:
        start=delete_first(start);
        break;

        // case 8:
        // start=delete_last(start);
        // break; 

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
struct node *display_last(struct node *start)
{
    struct node *ptr;
    ptr = start;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    printf("%d is the last element.", ptr->data);
    return start;
}
struct node *first_even(struct node *start){
    struct node *ptr;
        ptr=start;
        while(ptr->data%2!=0)
        {
            ptr=ptr->next;
        }
        printf("%d is the first even element.",ptr->data);
        return start;   

}
struct node *first_odd(struct node *start){
    struct node *ptr;
    ptr =start;
    while(ptr->data%2==0)
    {
        ptr=ptr->next;
    }
    printf("%d is the first odd element.",ptr->data);
    return start;
}
struct node *second_last(struct node *start){
    struct node *ptr;
    ptr=start;
    while (ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    printf("%d is the seccond last element.",ptr->data);
    return start;
}
struct node *delete_first(struct node *start){
    struct node *ptr;
    ptr=start;
    start=start->next;
    free(ptr);
    printf("First element deleted.");
    return start;

}
// struct node *delete_last(struct node *start){
//     struct node *ptr;
//     ptr=start;
//    /* start=start->next;
//     free(ptr);
//     printf("First element deleted.");
//     return start;*/
//     while(ptr->next!=NULL)
//     {
//         preptr=ptr;
        
//     }
// }