#include<stdio.h>
int main()
{
    int i,s=0,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
        if(i<n)
        printf("+");
        s=s+i;
    }
    printf("=%d",s);
}