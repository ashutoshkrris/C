#include<stdio.h>
int main()
{
    int rows,sp,p,no,n=1;
    printf("Enter the number of rows : ");
    scanf("%d",&no);
    for(rows=1;rows<=no;rows++)
    {
        for(p=1;p<=rows;p++)
        {
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
}