#include<stdio.h>
void main()
{
    int i,n;
    printf("enter any number whicjh you want:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("factor = %d\n",i);
        }
    }
}