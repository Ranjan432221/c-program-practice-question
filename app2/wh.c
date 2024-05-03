#include<stdio.h>
void main()
{
    int n,b,sum = 0;
    printf("enter any element");
    scanf("%d",&n);
    while(n!=0)
    {
       b = n%10;
       sum = sum+b;
       n = n/10;
    }
    printf("sum=%d",sum);
}