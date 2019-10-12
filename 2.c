#include<stdio.h>
int main()
{
    int i,s=0;
    for(i=1;i<=10;i++)
    {
        printf("%d ",i);
        s=s+i;
    }
    printf("\nSum is %d",s);
}