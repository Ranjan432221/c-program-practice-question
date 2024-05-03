#include<stdio.h>
void main()
{
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("\nit is even number\n",a);
        printf("its a integer");
    }
    else
    {
        printf("it is odd",a);
    }
}