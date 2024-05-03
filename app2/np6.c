#include<stdio.h>
void main()
{
    int a,b,c,d;
    float result;
    printf("enter the four integers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if((c-d)!=0)
    {
        result = (float)(a+b)/(c-d);
        printf("the value of (a+b)/(c-d) = %f",result);
    }
    else
    {
        printf("(c-d) = 0,the result is indetermind.");
    }
}