#include<stdio.h>
void main()
{
    int i=1;
    do 
    {
        if(i==3)
        {
            i++;
            continue;
        }
        printf("%d ",i);
        i++;
    }
    while(i<10);
}