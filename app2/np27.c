#include<stdio.h>
void main()
{
    int i,j;
    for(i=1,j=0;i<=5,j<=5;i++,j++)
    {
        if(j==2)
        {
            continue;
        }
        printf("%d%d\n",i,j);
    }
}