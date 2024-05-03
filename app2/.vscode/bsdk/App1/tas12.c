#include<stdio.h>
typedef int integer;
void main()
{
    integer i,j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

}