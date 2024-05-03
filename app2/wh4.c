#include<stdio.h>
void main()
{
    int n,b,f;
    printf("enter any element :");
    scanf("%d",&n);
    f=n%10;
    while(n!=0)
    {
        b=n%10;
        n=n/10;
    }
    printf("first digit:%d\nlast digit:%d",b,f);
}