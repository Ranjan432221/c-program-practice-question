#include<stdio.h>
void main()
{
    int n,a,b, c,sum;
    printf("enter any numbr:");
    scanf("%d",&n);
    a = n%10;
    n = n/10;
    b =n%10;
    n = n/10;
    c = n%10;
    sum = a+b+c;
    printf("sum of three digit:%d",sum);
    
}