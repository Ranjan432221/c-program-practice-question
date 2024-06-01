//write a program that accepts ten integers as input and display then reverse order//
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[10];
    printf("enter 10 integrs");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=9;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    getch ();
}
