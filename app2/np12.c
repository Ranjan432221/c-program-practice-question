#include<stdio.h>
void main()
{
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("it is positive number:");
    }
    else if(a<0)
    {
        printf("it is negative number:");
    }
    else
    {
        printf("it is zero:");
    }
}