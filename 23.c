#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,x,p,f=1;
    float s=1,t;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("Enter the value of x : ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        p=pow(x,i);
        for(j=1;j<=i;j++)
        f=f*j;
        t=p/f;
        s=s+t;
    }
    printf("Sum = %f",s);
}