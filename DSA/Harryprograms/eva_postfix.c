#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 10
float st[MAX];
int top = -1;

void push(float st[], float val);
float pop(float st[]);
float evaluatepostfix(char exp[]);

void main()
{
    float val;
    char exp[100];
    printf("Enter the postfix operation: ");
    gets(exp);
    val=evaluatepostfix(exp);
    printf("The value of the postfix operation is : %0.2f",val);
}


void push(float st[], float val)
{
    if (top == (MAX - 1))
    {
        printf("Stack overflow!\n");
    }
    else
    {
        top++;
        st[top] = val;
    }
}


float pop(float st[])
{
    int val=-1;
    if (top == -1)
    {
        printf("Stack Underflow!\n");
    }
    else
    {
        val=st[top];
        top--;
    }
    return val;
}

float evaluatepostfix(char exp[]){
float op1,op2,value;
int i=0;
while(exp[i]!='\0')
{
    if(isdigit(exp[i])){
        push(st,(float)(exp[i]-'0'));
    }
    else{
        op1=pop(st);
        op2=pop(st);
switch(exp[i]){

    case '+':
    value=op2+op1;
    break;

    case '-':
    value=op2-op1;
    break;

    case '*':
    value=op2*op1;
    break;

    case '/':
    value=op2/op1;
    break;

    case '%':
    value=(int)op2%(int)op1;
    break;
}
push(st,value);
}
i++;
}
return pop(st);
}