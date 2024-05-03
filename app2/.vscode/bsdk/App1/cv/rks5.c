//swapping two number using third variable
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf(" before the swapping:a=%d\nb=%d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("after swapping :a=%d\nb=%d\n");
    getch();
}