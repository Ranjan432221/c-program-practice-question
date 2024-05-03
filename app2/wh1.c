#include<stdio.h>
void main()
{
    int n,b,m=1;
    printf("enter any element");
    scanf("%d",&n);
    while(n!=0)
    {
        b=n%10;
        m=m*b;
        n=n/10;
    }
    printf("multiply:%d",m);
}