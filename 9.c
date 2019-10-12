#include<stdio.h>
int main()
{
    int rows,sp,p,no,n;
    printf("Enter the number of rows : ");
    scanf("%d",&no);
    n=no;
    for(rows=1;rows<=no;rows++)
    {
        for(p=1;p<=rows;p++)
        printf("*");
        printf("\n");
    }
}