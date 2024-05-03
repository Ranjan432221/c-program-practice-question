#include<stdio.h>
void main()
{
    int a, b, c;
    int *p,*q,*r;
    *p = &a;
    *q=&b;
    *r = &c;
    printf("enter two number:");
    scanf("%d%d",q,r);
    *p = *q+*r;
    printf("add = %d",*p);
}