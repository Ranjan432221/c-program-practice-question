#include<stdio.h>
void main()
{
    int a,b = 20,c = 30;
    int *p,*q,*r;
    p =&a;
    q = &b;
    r = &c;
    *p = *q+*r;
    printf("add = %d",*p);

}