#include<stdio.h>
int main()
{
    int i,j,k,l,a,b;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        a=9;
        for(k=1;k<=i;k++)
        {
            printf("%d",a);
            a--;
        }
        b=a+2;
        for(l=1;l<=i-1;l++)
            {
                printf("%d",b);
                b++;
            }
            printf("\n");
    }
}