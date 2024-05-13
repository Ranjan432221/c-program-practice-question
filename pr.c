#include<stdio.h>
void main()
{
    int n,count = 0;
    int i;
    printf("enter any number which you want to print:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    {
        printf("it is prime number");
    }
    else
    {
        printf("it is not prime");
    }
}