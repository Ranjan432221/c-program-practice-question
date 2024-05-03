#include<stdio.h>
typedef int rohit;
void main()
{
    rohit i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
}