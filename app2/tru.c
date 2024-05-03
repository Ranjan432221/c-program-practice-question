#include<stdio.h>
void main()
{
    int i,sum = 0,count = 0;
    for(i=10;i<=20;i++)
    {
        if(i%2!=0)
       { 
            sum=sum+i;
            count++;
        }

    }
    
      float avg = sum/count;
      printf("sum=%d",sum);
      printf("avg=%.2f",avg);
}