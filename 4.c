#include<stdio.h>
int main()
{
    int i,m,n,s=0;
    float av;
    printf("Enter the number of terms : ");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        printf("Enter number %d : ",i);
        scanf("%d",&n);
        s+=n;
    }
    printf("\nSum is %d",s);
    av=(float)s/m;
    printf("\nAverage is %.2f\n",av);
}