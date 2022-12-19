//  WRITE A PROGRAM TO CREATE SINGLY LINK LIST.
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
struct node *last_element(struct node *);
struct node *first_even(struct node *);
struct node *first_odd(struct node *);
struct node *second_last(struct node *start);
struct node *delete_first(struct node *start);
struct node *delete_last(struct node *start);
struct node *insert_first(struct node *start);
struct node *insert_last(struct node *start);
struct node *insert_after(struct node *start);
struct node *insert_before(struct node *start);
struct node *insert_between(struct node *start);
struct node *delete_after(struct node *start);
struct node *delete_before(struct node *start);
struct node *reverse(struct node *start);
struct node *delete_duplicate(struct node *start);
struct node *nth_from_end(struct node *start);
struct node *delete_divisible_k(struct node *start);
struct node *sorting(struct node *start);


void main()
{
    int option;

    do
    {
        printf("\n****MAIN MENU****");
        printf("\n 1. Create a link list.");
        printf("\n 2. Display the link list.");
        printf("\n 3. Find the last element.");
        printf("\n 4. Find the first even element.");
        printf("\n 5. Find the first odd element.");
        printf("\n 6. Find the second last element.");
        printf("\n 7. Delete the first node.");
        printf("\n 8. Delete the last node.");
        printf("\n 9. Insert element at the begining.");
        printf("\n 10. Insert element at the end.");
        printf("\n 11. Insert element after a value.");
        printf("\n 12. Insert element before a value.");
        printf("\n 13. Insert element between two value.");
        printf("\n 14. Delete element before a value.");
        printf("\n 15. Delete element after a value.");
        printf("\n 16. Reverse the linked list.");
        printf("\n 17. Remove the duplicate elements.");
        printf("\n 18. Print nth node from end.");
        printf("\n 18. Print nth node from end.");
        printf("\n 19. Delete all nodes divisible by k.");
        printf("\n 20. Sort the linked list");
        printf("\n 21. Exit");
        
        printf("\nEnter your option: ");
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
            start = last_element(start);
            break;
        case 4:
            start = first_even(start);
            break;
        case 5:
            start = first_odd(start);
            break;
        case 6:
            start=second_last(start);
            break;
        case 7:
            start=delete_first(start);
            break;
        case 8:
            start=delete_last(start);
            break;
        case 9:
            start=insert_first(start);
            break;
        case 10:
            start=insert_last(start);
            break;
        case 11:
            start=insert_after(start);
            break;
        case 12:
            start=insert_before(start);
            break;
        case 13:
            start=insert_between(start);
            break;
        case 14:
            start=delete_before(start);
            break;
        case 15:
            start=delete_after(start);
            break;
        case 16:
            start=reverse(start);
            break;
        case 17:
            start=delete_duplicate(start);
            break;
        case 18:
            start=nth_from_end(start);
            break;
        case 19:
            start=delete_divisible_k(start);
            break;
        case 20:
            start=sorting(start);
            break;
        }

    } while (option != 21);
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
    printf("The List is: \n");
    while (ptr != NULL)
    {

        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return start;
}
struct node *last_element(struct node *start){
    struct node *ptr = start;
    while (ptr->next!=NULL){
        ptr=ptr->next;
    }
    printf("%d is the last element.",ptr->data);
    
}
struct node *first_even(struct node *start){
    struct node *ptr = start;
    while (ptr->data%2!=0){
        ptr=ptr->next;
    }
    printf("%d is the first even number.",ptr->data);
    return start;

}
struct node *first_odd(struct node *start){
    struct node *ptr = start;
    while (ptr->data%2==0){
        ptr=ptr->next;
    }
    printf("%d is the first odd number.",ptr->data);
}
struct node *second_last(struct node *start){
    struct node *ptr = start;
    struct node *temp = start;
    while (ptr->next!=NULL)
    {
        temp=ptr;
        ptr=ptr->next;
    }
    printf("The Second Last element is %d. ",temp->data);
    return start;
}
struct node *delete_first(struct node *start){
    struct node *ptr = start;
    start=start->next;
    free(ptr);
    printf("First element deleted.");
    return start;

}
struct node *delete_last(struct node *start){
    struct node *ptr = start;
    struct node *preptr;
    preptr=(struct node*)malloc(sizeof(struct node*));
    while (ptr->next!=NULL)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=NULL;
    free(ptr);
    printf("Last Element Deleted.");
    return start;
}
struct node *insert_first(struct node *start){
    struct node *ptr,*first;
    first=(struct node*)malloc(sizeof(struct node*));
    int num;
    printf("Enter the element to be inserted: ");
    scanf("%d",&num);
    ptr=start;
    first->next=NULL;
    first->data=num;
    first->next=start;
    start=first;
    return start;

}
// ERROR
struct node *insert_last(struct node *start){
    struct node *ptr,*last;
    ptr=start;
    last=(struct node*)malloc(sizeof(struct node*));
    last->next=NULL;
    int num;
    // printf("%d",&last);
    printf("Enter the element to be inserted: ");
    scanf("%d",&num);
    while (ptr->next!=NULL)
    {   
        // printf("test\n");
        ptr=ptr->next;
    }
    ptr->next=last;
    last->data=num;
    last->next=NULL;
    return start;

}
struct node *insert_after(struct node *start){
    struct node *ptr,*new_node,*post_ptr,*preptr;
    int val,num;
    printf("Enter the value before which you wnat to enter the element:");
    scanf("%d",&val);
    printf("Enter the element you want to enter:");
    scanf("%d",&num);
    new_node=(struct node*)malloc(sizeof(struct node*));
    // new_node->next=NULL;
    new_node->data=num;
    ptr=start;
    preptr=ptr;
    while (preptr->data!=val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=new_node;
    new_node->next=ptr;
    return start;
    
}
struct node *insert_before(struct node *start){
    struct node *ptr = start;
    struct node *preptr,*new_node;
    // preptr=(struct node*)malloc(sizeof(struct node*));
    new_node=(struct node*)malloc(sizeof(struct node*));
    new_node->next=NULL;
    int val,num;
    printf("Enter the value before which you want to enter the element:");
    scanf("%d",&val);
    printf("Enter the element:");
    scanf("%d",&num);
    while (ptr->data!=val)
    {
        preptr=ptr;
        ptr=ptr->next;

    }
    preptr->next=new_node;
    new_node->next=ptr;
    new_node->data=num;
    return start;
}
struct node *insert_between(struct node *start){
    struct node *ptr1,*ptr2, *preptr,*postptr,*new_node;
    int num,a,b;
    printf("Enter the before value:");
    scanf("%d",&a);
    printf("Enter the after value:");
    scanf("%d",&b);
    printf("Enter the value of new element:");
    scanf("%d",&num);
    ptr1=start;
    ptr2=start;
    new_node=(struct node*)malloc(sizeof(struct node*));
    new_node->next=NULL;
    new_node->data=num;
    // postptr=start->next;
    while (ptr1->data!=a)
    {   
        preptr=ptr1;
        ptr1=ptr1->next;
        // postptr=postptr->next->next;
    }
    ptr1->next=new_node;
    while (ptr2->data!=b)
    {   
        ptr2=ptr2->next;
        // postptr=postptr->next->next;
    }
    postptr=ptr2->next;
    preptr->next=new_node;
    new_node->next=postptr;
    // ptr->next=new_node;
    return start;
       
}
struct node *delete_before(struct node *start){
    struct node *ptr = start;
    struct node *preptr,*postptr;
    int val;
    printf("Enter the node value before which you want to delete.");
    scanf("%d",&val);
    while (ptr->next->data!=val)
    {
        preptr=ptr;
        ptr->next;
    }
    postptr=ptr->next;
    preptr->next=postptr;
    free(ptr);
    return start;
    
}
struct node *delete_after(struct node *start){
    struct node *ptr = start;
    struct node *ptr3,*postptr;
    int val;
    printf("Enter the node value after which you want to delete:");
    scanf("%d",&val);
    while (ptr->data!=val)
    {
        ptr=ptr->next;
    }
    postptr=ptr->next;
    ptr3=postptr->next;
    ptr->next=ptr3;
    free(postptr);
    return start;
}
struct node *reverse(struct node *start){
    struct node *prev=NULL;
    struct node *curr=start;
    struct node *nex=NULL;
    while (curr!=NULL)
    {
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    start=prev;
    return start;
    
}
struct node *delete_duplicate(struct node *start){
    struct node *ptr = start;
    struct node *postptr;
    while (ptr->next!=NULL)
    {
    if (ptr->data==ptr->next->data)
    {
        postptr=ptr->next->next;
        free(ptr->next);
        ptr->next=postptr;
        // return start;
    }
    else    
        ptr=ptr->next;
    }
    printf("Duplicate elements deleted.\n");
    return start;
    
}
struct node *nth_from_end(struct node *start){
    struct node *ptr = start;
    struct node *ptr2 = start;
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        ptr=ptr->next;
    }
    while (ptr!=NULL)
    {
        ptr=ptr->next;
        ptr2=ptr2->next;
    }
    printf("The %dth element from the end is %d.\n",n,ptr2->data);
    return start;
    
}
struct node *delete_divisible_k(struct node *start){
    struct node *ptr = start;
    struct node *preptr;
    int k;
    printf("Enter the value of k:");
    scanf("%d",&k);
    while (ptr!=NULL)
    {
        if (ptr->data%k==0)
        {
            preptr->next=ptr->next;
            free(ptr);
            ptr=preptr->next;
        }
        else
        {
            preptr=ptr;
            ptr=ptr->next;
        }
        
    }
    return start;

}


struct node *sorting(struct node *start){
    struct node *ptr = start;
    struct node *ptr2 = start;
    int temp;
    while (ptr!=NULL)
    {
        ptr2=ptr->next;
        while (ptr2!=NULL)
        {
            if (ptr->data>ptr2->data)
            {
                temp=ptr->data;
                ptr->data=ptr2->data;
                ptr2->data=temp;
            }
            ptr2=ptr2->next;
        }
        ptr=ptr->next;
    }
    return start;
    
}