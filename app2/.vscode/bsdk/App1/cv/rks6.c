//swapping two number without third variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("before swapping:a=%d\nb=%d\n");
    a = a+b;
    b = a-b;
    a = a-b;
    printf("after swapping:a=%d\nb=%d\n");
    return 0;
}
