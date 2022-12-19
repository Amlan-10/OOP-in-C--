#include <stdio.h>
#include <malloc.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack *top = NULL;
struct stack *push(struct stack *, int);
struct stack *pop(struct stack *);
int peek(struct stack *);
struct stack *display(struct stack *);

int main()
{
    int val;
    int option;
    do
    {
        printf("\n *****MAIN MENU*****");
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. PEEK");
        printf("\n 4. DISPLAY");
        printf("\n 5. EXIT");
        printf("\n Enter your option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter the value to be pushed ");
            scanf("%d", &val);
            top = push(top, val);
            break;

        case 2:
            top = pop(top);
            break;

        case 3:
        val=peek(top);
            if (val != -1)
            {
                printf("The topmost value of the stack is: %d", val);
            }
            else
            {
                printf("The Stack is Empty");
            }
            break;

        case 4:
            top = display(top);
            break;
        }

    } while (option != 5);

    return 0;
}
struct stack *push(struct stack *top, int val)
{
    struct stack *ptr = (struct stack *)malloc(sizeof(struct stack));
    ptr->data = val;
    if (top == NULL)
    {
        ptr->next = NULL;
        top = ptr;
    }
    else
    {
        ptr->next = top;
        top = ptr;
    }
    return top;
}
struct stack *pop(struct stack *top)
{
    struct stack *ptr = top;
    if (top == NULL)
    {
        printf("Stack Empty!\n");
    }
    else
    {
        top = top->next;
        printf("The element to be deleted is %d ", ptr->data);
        free(ptr);
    }
    return top;
}
int peek(struct stack *top)
{
    if (top == NULL)
    {
        return -1;
    }
    else
    {
        return top->data;
    }
}

struct stack *display(struct stack *top)
{
    struct stack *ptr = top;
    if (ptr == NULL)
    {
        printf("\nThe stack is empty!");
    }
    else{
    while (ptr != NULL)
    {
        printf("\n%d", ptr->data);
        ptr = ptr->next;
    }
}
    return top;
}