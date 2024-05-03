#include<stdio.h>
typedef int integer;
void main()
{
    integer a,b;
    printf("enter two number \n:");
    scanf("%d%d",&a,&b);
    int sum=0;
    sum = a+b;
    printf("sum = %d",sum);
}