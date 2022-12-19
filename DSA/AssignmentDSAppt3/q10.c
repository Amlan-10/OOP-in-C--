// 10. Design algorithm/develop pseudocode/write C code to delete n nodes after m nodes
// of a linked list

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *delete (struct node *);
struct node *delete_at_index(struct node *,int );
int main()
{
    start = create_ll(start);
    start = display(start);
    start = delete (start);
    printf("\nAfter deleting, ");
    start = display(start);
    return 0;
}
struct node *create_ll(struct node *start)
{

    struct node *new_node, *ptr;
    int num;
    printf("\nEnter -1 to end");
    printf("\nEnter the data :");
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
        printf("\nEnter the data :");
        scanf("%d", &num);
    }
    return start;
}
struct node *display(struct node *start)
{
    printf("The List is: \n");
    struct node *ptr;
    ptr = start;

    while (ptr != NULL)
    {

        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return start;
}
struct node *delete (struct node *start)
{
    int n, m;
    struct node *ptr = start;
    printf("\nEnter the value of m after which you want to delete elements:");
    scanf("%d", &m);
    printf("Enter the number of nodes you want to delete: ");
    scanf("%d", &n);
    while (ptr != NULL)
    {
        for (int i = 0; i < m; i++)
        {
            ptr = ptr->next;
        }
        int i=m+1;
        do
        {
           start=delete_at_index(start,i);
            i++;
        }while(i<(m+n));
    }
    
    return start;
}
struct node *delete_at_index(struct node *head,int index){
int i=1;
struct node *p=head;
while(i!=index-1){
    i++;
    p=p->next;
}
struct node *q=p->next;
p->next=q->next;
free(q);
return head;
}