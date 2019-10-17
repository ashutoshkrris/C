#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define size 100
char stack[size];
int top=-1;
void push(char item)
{
    if(top>=size-1)
    printf("\nStack Overflow\n");
    else
    {
        top++;
        stack[top]=item;
    }
}
char pop()
{
    char item;
    if(top<0)
    {
        printf("\nStack underflow\n");
        getchar();
        exit(1);
    }
    else
    {
        item=stack[top];
        top--;
        return(item);
    }
}
int is_operator(char symbol)
{
    if(symbol=='^' || symbol=='*' || symbol=='/' || symbol=='+' || symbol=='-')
    return 1;
    else
    return 0;
}
int precedence(char symbol)
{
    if(symbol=='^')
    return 3;
    else if(symbol=='*' || symbol=='/')
    return 2;
    else if(symbol=='+' || symbol=='-')
    return 1;
    else
    return 0;
}
void Infix_to_Postfix(char in[],char post[])
{
    int i,j;
    char item,x;
    push('(');
    strcat(in,")");
    i=0;
    j=0;
    item=in[i];
    while(item!='\0')
    {
        if(item=='(')
        push(item);
        else if(isdigit(item) || isalpha(item))
        {
            post[j]=item;
            j++;
        }
        else if(is_operator(item)==1)
        {
            x=pop();
            while(is_operator(x)==1 && precedence(x)>=precedence(item))
            {
                post[j]=x;
                j++;
                x=pop();
            }
            push(x);
            push(item);
        }
        else if(item==')')
        {
            x=pop();
            while(x!='(')
            {
                post[j]=x;
                j++;
                x=pop();
            }
        }
        else
        {
            printf("\nInvalid expression\n");
            getchar();
            exit(0);
        }
        i++;
    }
    while(top>-1)
    {
        post[j]=pop();
        j++;
    }
    post[j]='\0';
}
int main()
{
    char infix[size],postfix[size];
    printf("\nASSUMPTION : THE INFIX EXPRESSION CONTAINS ONLY SINGLE LETTER VARIABLES AND SINGLE DIGIT CONSTANTS.\n");
    printf("\nEnter the Infix expression : ");
    fgets(infix,size,stdin);
    Infix_to_Postfix(infix,postfix);
    printf("\nThe Postfix expression is : ");
    puts(postfix);
}