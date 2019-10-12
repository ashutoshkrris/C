#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",2*i-1);
        s+=2*i-1;
    }
    printf("\nSum is %d\n",s);
}