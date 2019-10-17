#include<stdio.h>
#include<stdlib.h>
#define max 50
int stack[max],n,x,op,top,i;
void push(void);
void pop(void);
void peek(void);
void display(void);
int main()
{
    top=-1;
    printf("Enter size of the stack : ");
    scanf("%d",&n);
    do
    {
        printf("Enter your choice : \n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1 : push();
                     break;
            case 2 : pop();
                     break;
            case 3 : peek();
                     break;
            case 4 : display();
                     break;
            case 5 : exit(0);
            default : printf("Wrong Choice !!\n");
        }
    }
    while(op!=0);
}
void push()
{
    if(top==n-1)
    printf("Stack is full !!\n");
    else
    {
        top++;
        printf("Enter data : ");
        scanf("%d",&x);
        stack[top]=x;
    }
}
void pop()
{
    int y;
    if(top==-1)
    printf("Stack is empty !!\n");
    else
    {
        y=stack[top];
        top--;
        printf("The popped element is %d\n",y);
    }
}
void peek()
{
    if(top==-1)
    printf("Stack is empty !!\n");
    else
    {
        printf("The topmost element is %d\n",stack[top]);
    }
}
void display()
{
    for(i=top;i>=0;i--)
    printf("%d\n",stack[i]);
}