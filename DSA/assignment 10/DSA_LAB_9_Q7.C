//7. To print all the elements of kth level in single line.
#include <stdio.h>
#include <stdlib.h>

struct btnode 
{
    int value;
    struct btnode *l;
    struct btnode *r;
};
 
void createbinary();
node* add(int val);
int height(node *);
void printlevel(node *, int, int);
void print();
 
typedef struct btnode node;
node *root = NULL, *ptr;
 
int  main()
{
    int c;
 
    createbinary();
    print();
}
  
void createbinary()
{
    root = add(50);
    root->l = add(20);
    root->r = add(30);
    root->l->l = add(70);
    root->l->r = add(80);
    root->l->l->l = add(10);
    root->l->l->r = add(40);
    root->l->r->r = add(60);
}

node* add(int val)
{
    ptr = (node*)malloc(sizeof(node));
    if (ptr == NULL)
    {
        printf("Memory was not allocated");
        return;
    }
    ptr->value = val;
    ptr->l = NULL;
    ptr->r = NULL;
    return ptr;
}
 
void print()
{
    int h, i;
 
    h = height(root);
    for (i = 0;i < h;i++)
    {
        printf("\nLEVEL %d  :", i);
        printlevel(root, i, 0);
        printf("\n");
    }
}

void printlevel(node *n, int desired, int current)
{
    if (n)
    {
        if (desired == current)
            printf("%d\t", n->value);
        else
        {
            printlevel(n->l, desired, current + 1);
            printlevel(n->r, desired, current + 1);
        }
    }
}

int height(node *n)
{
    int lheight, rheight;
    if (n != NULL)
    {
        lheight = height(n->l);
        rheight = height(n->r);
        if (lheight > rheight)
            return(lheight+1);
        else 
            return(rheight+1);
    }
}
//OUTPUT;-
//LEVEL 0  :50
// 
//LEVEL 1  :20    30
// 
//LEVEL 2  :70    80
// 
//LEVEL 3  :10    40      60
