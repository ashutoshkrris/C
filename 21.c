#include<stdio.h>
int main()
{
    int n,i,t=9,s=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i<n)
        {
            s=s+t;
            printf("%d + ",t);
            t=t*10+9;
        }
        if(i==n)
        {
            s=s+t;
            printf("%d = ",t);
            t=t*10+9;
        }
    }
    printf("%d\n",s);
}