
/* C program of Program To Add a node before given node singly linked list */
//Save it as add_node_before_given_node_singly_linked_list.c

#include<stdio.h>
#include<malloc.h>
struct node *create(int);
void display(struct node *);
struct node *insert_end(struct node *);
struct node *insert_node_before_given_node(struct node *);

//Declaring node
struct node{
    int data;
    struct node *next;
};

int main(){
    int n;
    struct node *head;
    printf("Enter number of nodes : ");
    scanf("%d",&n);
	
    //Calling function to create node
    head=create(n);
	
    //Calling function to display list
    display(head);
	
    //Code to insert the node before given node of linked list
    head=insert_node_before_given_node(head);
    printf("\nThe linked list after addition of node before given node - \n");
	
    //Calling function to display list after addition of node before given node
    display(head);

    return 0;
}

struct node *create(int n){
    int i;
    struct node *head=NULL;
    struct node *ptr,*newNode;

    for(i=0;i<n;i++){
		
        //Creating a new node
        newNode=(struct node*)malloc(sizeof(struct node*));
		
        //Assigning data to newly created node
        printf("Enter the value of %d node : ",i+1);
        scanf("%d",&newNode->data);
        newNode->next=NULL;
		
        /*If list is empty assign the address of newly created node to head*/
        if(head==NULL){
            head=newNode;
        }else{
			
            /* If list already have few elements then loop through 
			list and add newly created node at the end of list*/
            ptr=head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=newNode;
        }
    }
    return head;
}

void display(struct node *head){
    struct node *ptr;
	
    //If list is empty
    if(head==NULL){
        printf("The linked list is empty");
    }else{
		
        /*If list has elements then loop through the loop and
		print elements one by one in sequential manner*/
        ptr=head;
        while(ptr!=NULL){
            printf("The node value = %d\n",ptr->data);
            ptr=ptr->next;
        }
    }
}

struct node *insert_node_before_given_node(struct node *head){

    int val;
    struct node *newNode, *ptr, *preptr;
	
    //Creating a new node to be added before given node
    newNode=(struct node*)malloc(sizeof(struct node*));
    printf("\nEnter the data for new node to be added before a node : ");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
	
    //assign the address of newly created node to the head if list is empty
    if(head==NULL){
        head=newNode;
    }else{
        printf("\nEnter the value from list before which new node to insert : ");
        scanf("%d",&val);
        ptr=head;
		
        //Traverse a list until value of list before which new node to insert
        while(ptr->data!=val){
            preptr=ptr;
            ptr=ptr->next;
        }
        newNode->next=ptr;
        preptr->next=newNode;
    }
    return head;
}