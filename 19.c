#include<stdio.h>
int main()
{
    int i,n,h;
    float s=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i<n)
        {
            printf("1/%d + ",i);
            s=s+1/(float)i;
        }
        if(i==n)
        {
            printf("1/%d = ",i);
            s=s+1/(float)i;
        }
    }
    printf("%f\n",s);
}