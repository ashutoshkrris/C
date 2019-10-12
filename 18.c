#include<stdio.h>
int main()
{
    int i,x,n,d;
    float s=1,t=1;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("Enter the value of x : ");
    scanf("%d",&x);
    for(i=1;i<n;i++)
    {
         d=(2*i)*(2*i-1);
         t=-t*x*x/d;
         s=s+t;
    }
    printf("Sum is %f\n",s);
}