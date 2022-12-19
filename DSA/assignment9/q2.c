// 2. WAP to create a binary search tree and display it in preorder and postorder traversal


#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node *create()
{
    struct Node *newnode;
    int data;
    newnode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the data :");
        scanf("%d", &data);
        if(data==-1)
        {
            return 0;
        }
             newnode->data=data;
    printf("Enter the left child of %d ",data);
    newnode->left=create();
    printf("Enter the right child of %d ",data);
    newnode->right=create();
}

struct Node *search(struct Node *tree, int key)
{

    if (key == -1)
        return tree;

    if (tree == NULL)
        return create(key);

    if (key < tree->data)
        tree->left = search(tree->left, key);

    else if (key > tree->data)
        tree->right = search(tree->right, key);

    return tree;
}

void preOrder(struct Node *root)
{
if(root==0)
    {
        return;
    }
    printf("%d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(struct Node *root)
{
if(root==0)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ",root->data);
}

void main()
{

    struct Node *root = NULL;
    int data;
  
        
        root = search(root, data);
   
   printf("Preorder is: \n");
    preOrder(root);
   printf("\nPostorder is: ");
    postOrder(root);
  
}