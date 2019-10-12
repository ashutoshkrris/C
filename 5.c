#include<stdio.h>
int main()
{
    int n,i,c;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=i*i*i;
        printf("The number is %d and its cube is %d\n",i,c);
    }
}