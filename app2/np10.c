#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the two number;");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("the largest number is :%d\n",a);
    }
    if(b>a)
    {
        printf("the largest number is:%d\n",b);
    }
    if(a==b)
    {
        printf("both are equal number");
    }
}