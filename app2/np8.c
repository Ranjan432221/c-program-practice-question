#include<stdio.h>
void main()
{
    int a,b,c,largest;
    printf("enter three number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        largest = a;
        else
        largest = c;
    }
    else
    {
        if(c>b)
        largest = c;
        else
        largest = b;
    }
    printf("the largest number is %d",largest);
}