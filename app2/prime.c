#include<stdio.h>
typedef int rohit;
void main()
{
     rohit i,n;
     rohit count = 0;
     printf("enter any number");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
        if(n%i==0)
        {
            count++;
        }
     }
      if(count == 2)
        {
            printf("it is prime number");
        }
        else
        {
            printf("it is not prime");
        }
}