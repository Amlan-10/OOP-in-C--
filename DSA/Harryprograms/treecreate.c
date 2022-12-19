#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root=NULL;
struct node *create();

void main()
{
    int option;
    do
    {
        printf("\n****MAIN MENU****");
        printf("\nEnter 1 for Creation of a tree: ");
        printf("\nEnter 2 for");
        printf("\nEnter 5 for Exit");

        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
        root=create();
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;
        }

    } while (option != 5);
}
 
struct node *create()
{
    int num;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data: ");
    scanf("%d",&num);
    if(num==-1)
    {
        return 0;
    }
    else{
        newnode->data=num;
        printf("\nEnter the left child:");
        newnode->left=create();
        printf("\nEnter the right child:");
        newnode->right=create();
        return newnode;
    }
}