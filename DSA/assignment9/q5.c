// 5. WAP to create a binary search tree and find the total number of nodes.

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node *create(int key)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = key; 
    ptr->left = ptr->right = NULL;
    return ptr;
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

int inOrder(struct Node *root)
{
    static struct Node *prev =NULL;
    if (root != NULL)
    {
        prev = root;
        inOrder(root->right);
    }else{
        return prev->data ;
    }
}

void main()
{

    struct Node *root = NULL;
    int data;
  
    do
    {
        printf("Enter the data :");
        scanf("%d", &data);
        root = search(root, data);
    } while (data != -1);

   int x = inOrder(root);

   printf("%d",x);
    printf("\n");
   
  
}