#include<stdio.h>
void main()
{
    int p,b,i,f = 1;
    printf("enter base number:");
    scanf("%d",&b);
    printf("enter power of number:");
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
      f = f*b;
    }
    printf("power of number:%d",f);
}