#include<stdio.h>
int area(int x,int y)
{
  printf("area is:%d",x*y);
}
void main()
{
    int a,b,c;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    area(a,b);
}