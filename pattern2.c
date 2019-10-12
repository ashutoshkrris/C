#include<stdio.h>
int main()
{
    int i,j,k,n,a=5;
    for(i=1;i<=5;i++)
    {
        n=a-i;
        for(j=1;j<=5-i;j++)
        printf(" ");
        for(k=1;k<=2*i-1;k++)
        {
            if(k<=i)
            {
                n++;
                printf("%d",n);
            }
            else
            {
                n--;
                printf("%d",n);
            }
        }
        printf("\n");
    }
}