#include<stdio.h>
void main()
{
    int i =1;
    int j =1;
    while(i<=5)
    {
        while(j<=5)
        {
            printf("%d ",j++);
        }
        printf("%d",i++);
    }
}