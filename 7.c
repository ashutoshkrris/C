#include<stdio.h>
int main()
{
    int i,j,n,m=1;
    printf("Enter the number upto which : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d X %d = %d    ",j,i,j*i);
        }
        printf("\n");
    }
}