#include<stdio.h>
typedef int integer;
void main()
{
    integer i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}