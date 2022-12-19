//13.WAP to find the smallest path lengh of a BST.
#include <stdio.h>
#include <limits.h>
 
struct node {
    int data;
    struct node *left;
    struct node *right;
};
 
struct node* getNewNode(int data) {
  /* dynamically allocate memory for a new node */
  struct node* newNode = (struct node*)malloc(sizeof(struct node));
  
  /* populate data in new Node */
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
   
  return newNode;
}

struct node* generateBTree(){
    // Root Node
    struct node* root =  getNewNode(1);
  
    root->left = getNewNode(2);
    root->right = getNewNode(3);
  
    root->left->left = getNewNode(4);
    root->left->right = getNewNode(5);
    root->right->right = getNewNode(6);
  
    root->left->left->left = getNewNode(7);
    root->left->left->right = getNewNode(8);
     
    return root;
 
}
 
/* Returns minimum of two number */
int getMin(int a, int b){
    if(a >= b)
        return b;
    return a;
}
 
/*
Returns minimum depth of a binary tree 
*/
int getMinimumDepth(struct node *root) {
 int leftMinDepth = INT_MAX, rightMinDepth = INT_MAX;
    /* Empty Tree */
    if (root == NULL)
        return 0;
  
    /* Leaf Node */
    if (root->left == NULL && root->right == NULL)
       return 1;
  
    /* Recursively find minimum depth of left and right sub tree */
    if(root->right != NULL)
       rightMinDepth = getMinimumDepth(root->right);
 
    if (root->left != NULL)
       leftMinDepth = getMinimumDepth(root->left);
    /* find minimum of left and right height and add 1 for root node */
    return getMin(rightMinDepth, leftMinDepth) + 1;
}
 
int main() {
    struct node *root = generateBTree();    
     
 printf("Minimum Depth : %d",getMinimumDepth(root));
     
    getchar();
    return 0; 
}

//
//Output
//Minimum Depth : 3
