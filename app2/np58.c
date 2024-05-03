#include<stdio.h>
void main()
{
    int a,n,b=0,c=1,i;
    printf("enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",c);
        a = b;
        b = c;
        c = a+b;

    }

    
}