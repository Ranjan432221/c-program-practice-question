#include<stdio.h>
void main()
{
    int n,r;
    scanf("%d",&n);
    while(n!=0)
    {
     r = n%10;
     printf("\n%d",r);
     n = n/10;
    }
   
}
    