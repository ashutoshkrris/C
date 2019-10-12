#include<stdio.h>
int main()
{
    int i=2,j,temp=1;
    printf("%d\n",temp);
    while(i<=7)
    {
        if(j%2==0)
        j=1;
        else
        j=0;
        while (j<=i)
        {
            if(j%2==0)
            printf("1");
            else
            printf("0");
            j++;
        }
        i++;
        printf("\n");
    }
}