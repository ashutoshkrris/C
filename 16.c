#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",2*i);
        s=s+(2*i);
    }
    printf("\nSum is %d\n",s);
}