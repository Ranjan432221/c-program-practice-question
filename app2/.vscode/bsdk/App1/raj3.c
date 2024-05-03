#include<stdio.h>
void main()
{
    int j;
    for(j=1;j<=4;j++)
    {
        if(j==2)
        {
            continue;
        }
        printf("%d ",j);
    }
}