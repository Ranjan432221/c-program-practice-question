//write a program of single array and do it reversing order in c programming//
#include<stdio.h>
void main()
{
    int i,p[10];
    int n;
    printf("enter 10 integer:");
    for(i=0;i<=10;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("reversing order:");
    for(i=9;i>=0;i--)
    {
        printf("%d ",p[i]);
    }
}