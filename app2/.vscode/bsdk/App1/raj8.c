#include<stdio.h>
void main()
{
    int i,n,fib1 = 0,fib2 = 1,fib;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n-2;i++)
    {
       fib = fib1+fib2;
       fib1 = fib2;
       fib2 = fib;
    }
        printf("\n the %dth number of fibonacci number is:%d",n,fib);
}