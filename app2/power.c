#include<stdio.h>
typedef int integer;
void main()
{
    integer i,p,b,f = 1;
    printf("enter base:");
    scanf("%d",&b);
    printf("enetr power:");
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
        f = f*b;
    }
    printf("result = %d",f);
}