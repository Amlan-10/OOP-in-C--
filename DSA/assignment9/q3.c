// 3. WAP to create a binary search tree and find the smallest element.

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
struct Node *deletewholetree(struct Node *node)
{
    if(node!=NULL)
    {
    deletewholenode(node->left);
    deletewholenode(node->right);
    free(node);
    }
}

struct node *deletenode(struct Node *tree,int data)
{
    if(tree==NULL)
    {
        return tree;
    }
    else if(tree->left==NULL)
    {
        struct node *temp=tree->right;
        free(tree);
        return temp;
    }
    else if(tree->right==NULL)
    {
        struct node *temp=tree->left;
        free(tree);
        return temp;
    }
}

struct Node *mirrorImage(struct Node*node)
{
    struct Node *ptr;
    if(node!=NULL)
    {
        mirrorImage(node->left); 
        mirrorImage(node->right);
        ptr=node->left;
        node->left=node->right;
        node->right=ptr; 
    }
}
void inOrder(struct Node *root)
{
if(root==0)
    {
        return;
    }
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
}
int smallest(struct Node *root){
    while (root->left!=NULL && root!=NULL){
        root = root->left;
    }
    return root->data;
    
}

int totalnode(struct Node *tree)
{
    if(tree==NULL)
    {
        return 0;
    }
    return (totalnode(tree->left)+totalnode(tree->right)+1);
}
int LeafNodes(struct Node *node)
{
    if(node==NULL)
    {
        return 0;
    }
    else if(node->left==NULL && node->right==NULL)
    {
        return 1;
    }
    return (LeafNodes(node->left)+LeafNodes(node->right));
}
void main()
{

    struct Node *root = NULL;
    int data;
  
        
        root = search(root, data);
   
//    printf("The smallest element is: %d \n",smallest(root));
    // smallest(root);
    // deletenode(root,data);
    printf("The total number of nodes is: %d",totalnode(root));
    printf("The nimber of leaf nodes is: %d",LeafNodes(root));
}