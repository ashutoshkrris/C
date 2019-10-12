#include<stdio.h>
int main()
{
    int rows,sp,p,no,n,a=1;
    printf("Enter the number of rows : ");
    scanf("%d",&no);
    n=no;
    for(rows=1;rows<=no;rows++)
    {
        for(sp=1;sp<=n;sp++)
        {
            printf(" ");
        }
        n--;
        for(p=1;p<=rows;p++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}