#include<stdio.h>
void main()
{
    int i;
    char j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%c ",i+64);
        }
        printf("\n");
    }
}