#include<stdio.h>
void main()
{
    int n,b;
    printf("enter any element :");
    scanf("%d",&n);
    printf("reverse is givenbelow:");
    while(n!=0)
    {
        b=n%10;
        printf("%d",b);
        n=n/10;
    }
}