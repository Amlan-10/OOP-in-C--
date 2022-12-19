#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create()
{
 int x;
 struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data or -1 to exit: ");
    scanf("%d ",&x);
    if(x==-1){
        return 0;
    }
    newnode->data=x;
    printf("Enter the left child of %d ",x);
    newnode->left=create();
    printf("Enter the right child of %d ",x);
    newnode->right=create();
}

void preorder(struct node *root)
{
    if(root==0)
    {
        return;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root)
{
    if(root==0)
    {
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

void postorder(struct node *root)
{
    if(root==0)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}

void main()
{
    struct node *root;
    root=0;
    root=create();
    printf("\nPreorder is: ");
    preorder(root);
    printf("\nInorder is: ");
    inorder(root);
    printf("\nPostorder is: ");
    postorder(root);
}