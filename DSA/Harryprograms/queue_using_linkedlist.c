#include <stdio.h>
#include <stdlib.h>

struct node *f = NULL;
struct node *r = NULL;

struct node
{
    int data;
    struct node *next;
};

void linkedlist_traversal(struct node *ptr)
{
    printf("The elements of linked list: \n");
    while (ptr != NULL)
    {
        printf("Elements: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("Queue Full!\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int main()
{
    linkedlist_traversal(f);
    enqueue(2);
    enqueue(7);
    enqueue(3);
    enqueue(9);
    linkedlist_traversal(f);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    linkedlist_traversal(f);
    return 0;
    // if(r==NULL){
    //     printf("Queue Full!\n");
    // }
    // else if(f==NULL){
    //     printf("Queue Empty!\n");
    // }
}

int dequeue()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    int val = -1;
    if (f == NULL)
    {
        printf("Queue Empty!\n");
    }
    else
    {
        f=f->next;
        val=ptr->data;
        free(ptr);
    }
        return val;
}