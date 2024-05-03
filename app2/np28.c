#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=2;i<=n-2;i+=2)
    {
        if(i==5)
        {
            continue;
        }
        printf("%d\n ",i);
    }
    printf(" ");
}