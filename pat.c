#include<stdio.h>
void min()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
       for(k=1;k<5-i;k++)
       {
        printf(" ");
       }
       for(j=1;j<=5;j++)
       {
        printf("%d ",j);
       }
       for(k=j-1;k<j;k++)
       {
        printf(" ");
       }
    }
    printf("\n");
}