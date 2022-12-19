// //2.To count number of non-leaf nodes in the tree.
// #include <stdio.h>
// #include <stdlib.h>
 
// struct node
// {
//     int info;
//     struct node* left, *right;
 
// };

 
// struct node* createnode(int key)
// {
//     struct node* newnode = (struct node*)malloc(sizeof(struct node));
//     newnode->info = key;
//     newnode->left = NULL;
//     newnode->right = NULL;
 
//     return(newnode);
// }

 
// int count = 0;
// int nonleafnodes(struct node* newnode)
// {
 
//     if(newnode != NULL)
//     {
//         nonleafnodes(newnode->left);
//         if((newnode->left != NULL) || (newnode->right != NULL))
//         {
//             count++;
//         }
//         nonleafnodes(newnode->right);
//     }
//     return count;
 
// }

 
// int main()
// {
 
//     struct node *newnode = createnode(25);
//     newnode->left = createnode(27);
//     newnode->right = createnode(19);
//     newnode->left->left = createnode(17);
//     newnode->left->right = createnode(91);
//     newnode->right->left = createnode(13);
//     newnode->right->right = createnode(55);

//     printf("Number of non leaf nodes in first Tree are\t%d",nonleafnodes(newnode));
//     printf("\n");
//     count = 0;
 
//     struct node *node = createnode(1);
//     node->right = createnode(2);
//     node->right->right = createnode(3);
//     node->right->right->right = createnode(4);
//     node->right->right->right->right = createnode(5);

//     printf("\n");
//     printf("Number of non leaf nodes in second tree are\t%d",nonleafnodes(node));
//     printf("\n");
//     count = 0;

//     printf("\n");
//     printf("Number of non leaf nodes in third tree are\t%d",nonleafnodes(root));
 
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node* left;
    struct node* right;
};

unsigned int getLeafCount(struct node* node)
{
  if(node == NULL)       
    return 0;
  if(node->left == NULL && node->right==NULL)      
    return 1;            
  else 
    return getLeafCount(node->left)+
           getLeafCount(node->right);      
}

struct node* newNode(int data) 
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
    
  return(node);
}
  

int main()
{
 
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);    

  printf("Leaf count of the tree is %d", (5-getLeafCount(root)));
    
  getchar();
  return 0;
}
