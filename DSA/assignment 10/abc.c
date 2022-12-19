// 1. WAP to create a binary search tree and display it(inorder traversal)
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;
struct node *create(struct node *);
void insert(int);
void inorder_display(struct node *);

int main(){
    int data;
    printf("ENTER THE VALUE OF ROOT NODE:");
    scanf("%d", &data);
    while (data != -1)
    {
        insert(data);
        printf("ENTER THE NODE VALUE TO BE INSERTED:");
        scanf("%d", &data);
    }
    printf("INORDER TRAVERSAL OF THE BINARY SEARCH TREE IS:\n");
    inorder_display(root);

    return 0;
}
struct node *create_node(int data){
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

void insert(int data){
    struct node *new_node = create_node(data);
    if (new_node!= NULL)    {
        if (root == NULL)
        {
            root = new_node;
            printf("Root node created\n");
            return;
        }

        struct node *temp = root;
        struct node *previous = NULL;
        while(temp!=NULL){
            previous = temp;
            if (data < temp->data)
            {
                temp = temp->left;
            }
            else if (data >= temp->data)
            {
                temp = temp->right;
            }

        }
        if (data >= previous->data)
        {
            previous->right = new_node;
        }
        else if (data < previous->data)
        {
            previous->left = new_node;
        }
        printf("Node inserted\n");
    }
    
}
void inorder_display(struct node *root){
    if (root!=NULL)
    {
        inorder_display(root->left);
        printf("%d\t", root->data);
        inorder_display(root->right);
    }

    
}