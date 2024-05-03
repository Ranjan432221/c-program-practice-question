#include<stdio.h>
void main()
{
    int i;
    int sum = 0;
    int count = 0;
    for(i=2;i<=202;i+=2)
    {
        sum+=i;
        count++;
    }
    float avg = (float)sum/count;
    printf("yhe sum of even number from 2 to 202 is:%d\n",sum);
    printf("the avg of even number from 2 to 202 is:%.2f",avg);
}