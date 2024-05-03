#include<stdio.h>
void main()
{
    int n,count =0;
    int i;
    printf("enter  any elementt which you want\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
      if(n%i==0)
           {
              count++;
           }
    }
    
    if(count == 2)
        printf("it is prime");
    else
        printf("it is not prime");
}