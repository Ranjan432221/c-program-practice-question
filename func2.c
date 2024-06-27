#include<stdio.h>
int sum(int a,int b)
{
    printf("sum of two number is:%d",a + b); 
}
void main()
{
    int x , y;
    printf("enter two number:");
    scanf("%d%d",&x,&y);
    sum(x,y);
}
