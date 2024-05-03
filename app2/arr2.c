#include<stdio.h>
void main()
{
    int p[5],i;
    for(i=0;i<=4;i++)
    {
        printf("enter %d element:",i+1);
        scanf("%d",&p[i]);
    }
    printf("enter element below:");
    for(i=0;i<=4;i++)
    {
        printf("%d",p[i]);
    }
}