#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
   
};

// void count_of_nodes(struct node *head)
// {
//     int count=0;
//     if(head==NULL)
//     {
//         printf("Linkedlist is empty");
//     }
//     struct node *ptr=NULL;
//     ptr=head;
//     while(ptr!=NULL)
//     {
//         count++;
//         ptr=ptr->link;
//     }
//     printf("Total element is %d\n",count);
// }

 struct node *insert_at_first(struct node *head,int data)
 {
     struct node *ptr;
     ptr=(struct node*)malloc(sizeof(struct node));
    //  ptr=head;
     ptr->data=data;
    //  ptr->link=NULL;
     ptr->link=head;
     head=ptr;
     
     return head;
 }    
      
    void display(struct node *ptr)
    {
    //  ptr=head;
     while(ptr!=NULL)
     {
         printf("Element is %d\n",ptr->data);
         ptr=ptr->link;
         
     }
    }
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *curr=(struct node *)malloc(sizeof(struct node));
    struct node *curr1=(struct node *)malloc(sizeof(struct node));
    struct node *curr2=(struct node *)malloc(sizeof(struct node));

    head->data=45;
    head->link=curr;
    
    curr->data=56;
    // curr->link=NULL;
    curr->link=curr1;
     
    curr1->data=66;
    // curr1->link=NULL;
    curr1->link=curr2;
    
    curr2->data=76;
    // curr2->link=NULL;
    curr2->link=NULL;
   
   printf("Before insertion:\n");
    display(head);
    printf("After insertion:\n");
    head=insert_at_first(head,7);
    display(head);
    
    return 0;
}