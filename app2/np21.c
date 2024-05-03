#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("the greater number is:%d",a);
    }
    else if(b>c&&b>a)
    {
        printf("the greater number is:%d",b);
    }
    else
    {
        printf("the greater number is:%d",c);
    }
}