#include<stdio.h>
void main()
{
    int i;
    int a;
    printf("enter any number:");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        printf("%d ",a*i);
    }
}