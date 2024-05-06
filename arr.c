#include<stdio.h>
void main()
{
    int n,i,p[10],sum = 0;
    printf("enter element:");
    scanf("%d",n);
    printf("enter %d number one by one:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&p[i]);
        sum = sum+p[i];
    }
    printf("sum = %d",sum);
}   
     