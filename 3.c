#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
        s=s+i;
    }
    printf("\nSum of %d terms is %d.",n,s);
}